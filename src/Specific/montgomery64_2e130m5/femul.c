static void femul(uint64_t out[3], const uint64_t in1[3], const uint64_t in2[3]) {
  { const uint64_t x6 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x10 = in2[2];
  { const uint64_t x11 = in2[1];
  { const uint64_t x9 = in2[0];
  { uint64_t x14;  uint64_t x13 = _mulx_u64(x5, x9, &x14);
  { uint64_t x17;  uint64_t x16 = _mulx_u64(x5, x11, &x17);
  { uint64_t x20;  uint64_t x19 = _mulx_u64(x5, x10, &x20);
  { uint64_t x22; uint8_t x23 = _addcarryx_u64(0x0, x14, x16, &x22);
  { uint64_t x25; uint8_t x26 = _addcarryx_u64(x23, x17, x19, &x25);
  { uint64_t x28; uint8_t _ = _addcarryx_u64(0x0, x26, x20, &x28);
  { uint64_t _;  uint64_t x31 = _mulx_u64(x13, 0xcccccccccccccccdL, &_);
  { uint64_t x35;  uint64_t x34 = _mulx_u64(x31, 0xfffffffffffffffbL, &x35);
  { uint64_t x38;  uint64_t x37 = _mulx_u64(x31, 0xffffffffffffffffL, &x38);
  { uint64_t x40, uint8_t x41 = Op (Syntax.MulSplit 64 (Syntax.TWord 6) (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x31, 0x3);
  { uint64_t x43; uint8_t x44 = _addcarryx_u64(0x0, x35, x37, &x43);
  { uint64_t x46; uint8_t x47 = _addcarryx_u64(x44, x38, x40, &x46);
  { uint8_t x48 = (x47 + x41);
  { uint64_t _; uint8_t x51 = _addcarryx_u64(0x0, x13, x34, &_);
  { uint64_t x53; uint8_t x54 = _addcarryx_u64(x51, x22, x43, &x53);
  { uint64_t x56; uint8_t x57 = _addcarryx_u64(x54, x25, x46, &x56);
  { uint64_t x59; uint8_t x60 = _addcarryx_u64(x57, x28, x48, &x59);
  { uint64_t x63;  uint64_t x62 = _mulx_u64(x7, x9, &x63);
  { uint64_t x66;  uint64_t x65 = _mulx_u64(x7, x11, &x66);
  { uint64_t x69;  uint64_t x68 = _mulx_u64(x7, x10, &x69);
  { uint64_t x71; uint8_t x72 = _addcarryx_u64(0x0, x63, x65, &x71);
  { uint64_t x74; uint8_t x75 = _addcarryx_u64(x72, x66, x68, &x74);
  { uint64_t x77; uint8_t _ = _addcarryx_u64(0x0, x75, x69, &x77);
  { uint64_t x80; uint8_t x81 = _addcarryx_u64(0x0, x53, x62, &x80);
  { uint64_t x83; uint8_t x84 = _addcarryx_u64(x81, x56, x71, &x83);
  { uint64_t x86; uint8_t x87 = _addcarryx_u64(x84, x59, x74, &x86);
  { uint64_t x89; uint8_t x90 = _addcarryx_u64(x87, x60, x77, &x89);
  { uint64_t _;  uint64_t x92 = _mulx_u64(x80, 0xcccccccccccccccdL, &_);
  { uint64_t x96;  uint64_t x95 = _mulx_u64(x92, 0xfffffffffffffffbL, &x96);
  { uint64_t x99;  uint64_t x98 = _mulx_u64(x92, 0xffffffffffffffffL, &x99);
  { uint64_t x101, uint8_t x102 = Op (Syntax.MulSplit 64 (Syntax.TWord 6) (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x92, 0x3);
  { uint64_t x104; uint8_t x105 = _addcarryx_u64(0x0, x96, x98, &x104);
  { uint64_t x107; uint8_t x108 = _addcarryx_u64(x105, x99, x101, &x107);
  { uint8_t x109 = (x108 + x102);
  { uint64_t _; uint8_t x112 = _addcarryx_u64(0x0, x80, x95, &_);
  { uint64_t x114; uint8_t x115 = _addcarryx_u64(x112, x83, x104, &x114);
  { uint64_t x117; uint8_t x118 = _addcarryx_u64(x115, x86, x107, &x117);
  { uint64_t x120; uint8_t x121 = _addcarryx_u64(x118, x89, x109, &x120);
  { uint8_t x122 = (x121 + x90);
  { uint64_t x125;  uint64_t x124 = _mulx_u64(x6, x9, &x125);
  { uint64_t x128;  uint64_t x127 = _mulx_u64(x6, x11, &x128);
  { uint64_t x131;  uint64_t x130 = _mulx_u64(x6, x10, &x131);
  { uint64_t x133; uint8_t x134 = _addcarryx_u64(0x0, x125, x127, &x133);
  { uint64_t x136; uint8_t x137 = _addcarryx_u64(x134, x128, x130, &x136);
  { uint64_t x139; uint8_t _ = _addcarryx_u64(0x0, x137, x131, &x139);
  { uint64_t x142; uint8_t x143 = _addcarryx_u64(0x0, x114, x124, &x142);
  { uint64_t x145; uint8_t x146 = _addcarryx_u64(x143, x117, x133, &x145);
  { uint64_t x148; uint8_t x149 = _addcarryx_u64(x146, x120, x136, &x148);
  { uint64_t x151; uint8_t x152 = _addcarryx_u64(x149, x122, x139, &x151);
  { uint64_t _;  uint64_t x154 = _mulx_u64(x142, 0xcccccccccccccccdL, &_);
  { uint64_t x158;  uint64_t x157 = _mulx_u64(x154, 0xfffffffffffffffbL, &x158);
  { uint64_t x161;  uint64_t x160 = _mulx_u64(x154, 0xffffffffffffffffL, &x161);
  { uint64_t x163, uint8_t x164 = Op (Syntax.MulSplit 64 (Syntax.TWord 6) (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x154, 0x3);
  { uint64_t x166; uint8_t x167 = _addcarryx_u64(0x0, x158, x160, &x166);
  { uint64_t x169; uint8_t x170 = _addcarryx_u64(x167, x161, x163, &x169);
  { uint8_t x171 = (x170 + x164);
  { uint64_t _; uint8_t x174 = _addcarryx_u64(0x0, x142, x157, &_);
  { uint64_t x176; uint8_t x177 = _addcarryx_u64(x174, x145, x166, &x176);
  { uint64_t x179; uint8_t x180 = _addcarryx_u64(x177, x148, x169, &x179);
  { uint64_t x182; uint8_t x183 = _addcarryx_u64(x180, x151, x171, &x182);
  { uint8_t x184 = (x183 + x152);
  { uint64_t x186; uint8_t x187 = _subborrow_u64(0x0, x176, 0xfffffffffffffffbL, &x186);
  { uint64_t x189; uint8_t x190 = _subborrow_u64(x187, x179, 0xffffffffffffffffL, &x189);
  { uint64_t x192; uint8_t x193 = _subborrow_u64(x190, x182, 0x3, &x192);
  { uint64_t _; uint8_t x196 = _subborrow_u64(x193, x184, 0x0, &_);
  { uint64_t x197 = cmovznz(x196, x192, x182);
  { uint64_t x198 = cmovznz(x196, x189, x179);
  { uint64_t x199 = cmovznz(x196, x186, x176);
  out[0] = x199;
  out[1] = x198;
  out[2] = x197;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
