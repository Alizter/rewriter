Require Import Rewriter.Language.Pre.
Require Import Rewriter.Util.LetIn.
Require Import Rewriter.Util.plugins.RewriterBuild.

Ltac rewrite_perf_level ::= constr:(5%nat).
Hint Constants Opaque : rewrite.
Global Opaque Let_In.
Global Set Printing Width 150.
