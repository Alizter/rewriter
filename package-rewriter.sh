#!/usr/bin/env bash

FILES="$(make --dry-run --always-make src/RewriterExamples.vo | grep -o 'src/.*\.v' | grep -v Coqprime | uniq | sort)"
EXTRA_FILES="LICENSE AUTHORS"
EXTRA_EXTRA_FILES="CONTRIBUTORS"
rm -rf rewriting
mkdir rewriting
cat > rewriting/_CoqProject <<EOF
-R src Rewriting
EOF

for i in $FILES ${EXTRA_FILES}; do
    mkdir -p rewriting/$(dirname $i)
    sed 's/Crypto\./Rewriting./g; s/fiat-crypto/rewriting/g' $i > rewriting/$i
done

for i in ${EXTRA_EXTRA_FILES}; do
    mkdir -p rewriting/$(dirname $i)
    sed 's/Crypto\./Rewriting./g; s/fiat-crypto repository/fiat-crypto repository (where the rewriting code was developed)/g' $i > rewriting/$i
done

for i in $FILES; do
    echo $i >> rewriting/_CoqProject
done

cat > rewriting/Makefile <<'EOF'

.DEFAULT_GOAL := all

Makefile.coq: _CoqProject
	$(COQBIN)coq_makefile -f $< -o $@

%: Makefile.coq
	$(MAKE) --no-print-directory -f Makefile.coq $(MAKECMDGOALS)
EOF

cat > rewriting/README.md <<'EOF'
Building
-----
This repository requires coq 8.8 or later. 8.7 may work, but we don't use it ourselves.

To build:

       make

Examples
-----
There are some examples of using the rewriter in [`src/RewriterExamples.v`](./src/RewriterExamples.v).

Rewriter Implementation
-----

- PreLanguage.v defines some basic constructs used in annotating some
  rewrite rules (`ident.eagerly`, `ident.literal`, etc)

- Language.v defines:
  + the basic PHOAS language we use
  + reification
  + denotation/intepretation
  + utilities for inverting PHOAS exprs
  + default/dummy values of PHOAS exprs
  + default instantiation of generic PHOAS types
  + gallina reification of ground terms
  + Flat/indexed syntax trees, and conversions to and from PHOAS

- UnderLets.v: the UnderLets monad, a pass that does substitution of var-like
  things, a pass that inserts let-binders in the next-to-last line of code,
  substituting away var-like things (this is used to ensure that when we output
  C code, aliasing the input and the output arrays doesn't cause issues).

The rewriting framework is then split up into the following dependency
graph (`A.v ← B.v` means that `B.v` depends on `A.v`):
```
IdentifiersLibrary.v ←───────────────────────── IdentifiersGenerate.v ←──────────────────── IdentifiersGENERATED.v
    ↑ ↑                                                   ↑                                        ↑
    │ └──────────────── IdentifiersLibraryProofs.v ←──────┴─ IdentifiersGenerateProofs.v ←─ IdentifersGENERATEDProofs.v
    │                                     ↑                                                        ↑
Rewriter.v ←───────────────────────── RewriterWf1.v ←─────────────────── RewriterWf1Tactics.v      │
    ↑                                 ↗        ↖                                ↑                  │
RewriterReify.v ←──────┐   RewriterWf2.v   RewriterInterpProofs1.v              │                  │
                       │              ↖        ↗                                │                  │
                       └─────── RewriterAllTactics.v ───────────────────────────┘                  │
                                           ↑                                                       │
                                           │                                                       │
                                           │                                                       │
                                           ├───────────────────────────────────────────────────────┘
                                    RewriterExamples.v
```

- IdentifiersLibrary.v: Some definitions about identifiers and pattern
  identifiers and raw identifiers.  Some of these definitions take
  generated definitions as arguments. Also defines a package record to
  hold all of the generated definitions.

- IdentifiersGenerate.v: Tactics to generate definitions about untyped
  and pattern versions of identifiers for the rewriter.  Culminates in
  a tactic which inhabits the package type defined in
  IdentifiersLibrary.v

- IdentifiersLibraryProofs.v: proofs about definitions in
  IdentifiersLibrary.  Also defines a package to hold generated proofs
  that require destructing inductives not yet defined in this file.

- IdentifiersGenerateProofs.v: tactics to prove lemmas to inhabit the
  package defined in IdentifiersLibraryProofs.v

- IdentifiersGENERATE.v: identifiers / inductives and definitions
  generated by IdentifiersGenerate.

- IdentifiersGENERATEProofs.v: proofs generated by
  IdentifiersGenerateProofs, about definitions in IdentifiersGENERATE

- Rewriter.v: Defines the rewriter machinery.  In particular, all of
  the rewriter definitions that have non-rewrite-rule-specific proofs
  about them are found in this file.

- RewrierReify.v: Defines reification of rewrite rules, continuing on
  from Rewriter.v, and culminates in the tactic
  `RewriteRules.Tactic.Build_RewriterT` and the tactic notation
  `make_Rewriter` which define a package of type
  `RewriteRules.GoalType.RewriterT`.  The `Build_*` tactic returns a
  `constr`, while the `make_*` tactic notation refines that `constr`
  in the goal.  Both tactics take two arguments: first a boolean
  `include_interp` which specifies whether (`true`) or not (`false`)
  to prefix the list of rewrite rules with the reduction-to-literal
  rewrite rules; and second a list of `bool * Prop` which is the list
  of rewrite rule types to reify, each paired with a boolean saying
  whether or not to try rewriting again in the output of the
  replacement for that rule.

- RewriterWf1.v: Defines the notion of interp-goodness and wf-goodness
  for rewrite rules, defines tactics to prove these notions, and
  contains a semi-arbitrary collection of proofs and definitions that
  are mostly shared between the wf proofs and the interp proofs.
  Importantly, this file defines everything needed to state and prove
  that specific rewrite rules are correct.  Additionally defines a
  package `RewriteRules.GoalType.VerifiedRewriter` which describes the
  type of the overall specialized rewriter together with its `Wf` and
  `Interp` proofs. (This package should perhaps move to another file?)

- RewriterWf1Tactics.v: Defines the actual tactics used to prove that
  specific rewrite rules are correct, and to inhabit the packages
  defined in RewriterWf1.v.

- RewriterWf2.v: Proves wf-preservation of the generic rewriter,
  taking in wf-goodness of rewrite rules as a hypothesis.

- RewriterInterpProofs1.v: Proves interp-correctness of the generic
  rewriter, taking in interp-goodness of rewrite rules as a
  hypothesis.

- RewriterAllTactics.v: Defines the tactic
  `RewriteRules.Tactic.make_rewriter` (and a similar tactic notation)
  which build the entire `VerifiedRewriter`.  They take in the
  `include_interp` as in Rewriter.v tactics, as well as an hlist of
  proofs of rewrite rules indexed over a `list (bool * Prop)` of
  rewrite rule types.  This is the primary interface for defining a
  rewriter from a list of rewrite rules.

- RewriterExamples.v: A couple of examples of using the rewriter.

Proofs files:
For Language.v, there is a semi-arbitrary split between two files
`LanguageInversion` and `LanguageWf`.
- LanguageInversion.v:
  + classifies equality of type codes and exprs
  + type codes have decidable equality
  + correctness of the various type-transport definitions
  + correctness lemmas for the various `expr.invert_*` definitions
  + correctness lemmas for the various `reify_*` definitions in Language.v
  + inversion_type, which inverts equality of type codes
  + type_beq_to_eq, which converts boolean equality of types to
    Leibniz equality
  + rewrite_type_transport_correct, which rewrites with the
    correctness lemmas of the various type-transport definitions
  + `type.invert_one e` which does case analysis on any inductive type
     indexed over type codes, in a way that preserves information
     about the type of `e`, and generally works even when the goal is
     dependently typed over `e` and/or its type
  + ident.invert, which does case-anaylsis on idents whose type has
    structure (i.e., is not a var)
  + ident.invert_match, which does case-analysis on idents appearing as
    the discriminee of a `match` in the goal or in any hypothesis
  + expr.invert, which does case-anaylsis on exprs whose type has
    structure (i.e., is not a var)
  + expr.invert_match, which does case-analysis on exprs appearing as
    the discriminee of a `match` in the goal or in any hypothesis
  + expr.invert_subst, which does case-analysis on exprs which show up
    in hypotheses of the form `expr.invert_* _ = Some _`
  + expr.inversion_expr, which inverts equalities of exprs

- LanguageWf.v: Depends on LanguageInversion.v
  Defines:
  + expr.wf, expr.Wf, expr.wf3, expr.Wf3
  + GeneralizeVar.Flat.wf
  + expr.inversion_wf (and variants), which invert `wf` hypotheses
  + expr.wf_t (and variants wf_unsafe_t and wf_safe_t) which make
     progress on `wf` goals; `wf_safe_t` should never turn a provable
     goal into an unprovable one, while `wf_unsafe_t` might.
  + expr.interp_t (and variants), which should make progress on
    equivalence-of-interp hypotheses and goals, but is not used much
    (mainly because I forgot I had defined it)
  + prove_Wf, which proves wf goals on concrete syntax trees in a more
    optimized way than `repeat constructor`
  Proves:
  + funext → (type.eqv ↔ Logic.eq) (`eqv_iff_eq_of_funext`)
  + type.related and type.eqv are PERs
  + Proper instances for type.app_curried, type.and_for_each_lhs_of_arrow
  + type.is_not_higher_order → Reflexive (type.and_for_each_lhs_of_arrow type.eqv)
  + iff between type.related{,_hetero} and related of type.app_curried
  + various properties of type.and{,b_bool}for_each_lhs_of_arrow
  + various properties of type.eqv and ident.{gen_,}interp
  + various properties of ident.cast
  + various properties of expr.wf (particularly of things defined in Language.v)
  + interp and wf proofs for the passes to/from Flat

- UnderLetsProofs.v: wf and interp lemmas for the various passes defined in UnderLets.v
EOF

rm -rf rewriting.tar.gz
tar -czvf rewriting.tar.gz rewriting/
