static void freeze(uint32_t out[16], const uint32_t in1[16]) {
  { const uint32_t x29 = in1[15];
  { const uint32_t x30 = in1[14];
  { const uint32_t x28 = in1[13];
  { const uint32_t x26 = in1[12];
  { const uint32_t x24 = in1[11];
  { const uint32_t x22 = in1[10];
  { const uint32_t x20 = in1[9];
  { const uint32_t x18 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x32, uint8_t x33 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (0x0, Return x2, 0x3fffffff);
  { uint32_t x35, uint8_t x36 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x33, Return x4, 0x3fffffff);
  { uint32_t x38, uint8_t x39 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x36, Return x6, 0x3fffffff);
  { uint32_t x41, uint8_t x42 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x39, Return x8, 0x3fffffff);
  { uint32_t x44, uint8_t x45 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x42, Return x10, 0x3fffffff);
  { uint32_t x47, uint8_t x48 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x45, Return x12, 0x3fffffff);
  { uint32_t x50, uint8_t x51 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x48, Return x14, 0x3fffffff);
  { uint32_t x53, uint8_t x54 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x51, Return x16, 0x3fffffff);
  { uint32_t x56, uint8_t x57 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x54, Return x18, 0x3ffffffe);
  { uint32_t x59, uint8_t x60 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x57, Return x20, 0x3fffffff);
  { uint32_t x62, uint8_t x63 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x60, Return x22, 0x3fffffff);
  { uint32_t x65, uint8_t x66 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x63, Return x24, 0x3fffffff);
  { uint32_t x68, uint8_t x69 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x66, Return x26, 0x3fffffff);
  { uint32_t x71, uint8_t x72 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x69, Return x28, 0x3fffffff);
  { uint32_t x74, uint8_t x75 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x72, Return x30, 0x3fffffff);
  { uint32_t x77, uint8_t x78 = Op (Syntax.SubWithGetBorrow 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x75, Return x29, 0x3fffffff);
  { uint32_t x79 = (uint32_t)cmovznz(x78, 0x0, 0xffffffff);
  { uint32_t x80 = (x79 & 0x3fffffff);
  { uint32_t x82, uint8_t x83 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (0x0, Return x32, Return x80);
  { uint32_t x84 = (x79 & 0x3fffffff);
  { uint32_t x86, uint8_t x87 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x83, Return x35, Return x84);
  { uint32_t x88 = (x79 & 0x3fffffff);
  { uint32_t x90, uint8_t x91 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x87, Return x38, Return x88);
  { uint32_t x92 = (x79 & 0x3fffffff);
  { uint32_t x94, uint8_t x95 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x91, Return x41, Return x92);
  { uint32_t x96 = (x79 & 0x3fffffff);
  { uint32_t x98, uint8_t x99 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x95, Return x44, Return x96);
  { uint32_t x100 = (x79 & 0x3fffffff);
  { uint32_t x102, uint8_t x103 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x99, Return x47, Return x100);
  { uint32_t x104 = (x79 & 0x3fffffff);
  { uint32_t x106, uint8_t x107 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x103, Return x50, Return x104);
  { uint32_t x108 = (x79 & 0x3fffffff);
  { uint32_t x110, uint8_t x111 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x107, Return x53, Return x108);
  { uint32_t x112 = (x79 & 0x3ffffffe);
  { uint32_t x114, uint8_t x115 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x111, Return x56, Return x112);
  { uint32_t x116 = (x79 & 0x3fffffff);
  { uint32_t x118, uint8_t x119 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x115, Return x59, Return x116);
  { uint32_t x120 = (x79 & 0x3fffffff);
  { uint32_t x122, uint8_t x123 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x119, Return x62, Return x120);
  { uint32_t x124 = (x79 & 0x3fffffff);
  { uint32_t x126, uint8_t x127 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x123, Return x65, Return x124);
  { uint32_t x128 = (x79 & 0x3fffffff);
  { uint32_t x130, uint8_t x131 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x127, Return x68, Return x128);
  { uint32_t x132 = (x79 & 0x3fffffff);
  { uint32_t x134, uint8_t x135 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x131, Return x71, Return x132);
  { uint32_t x136 = (x79 & 0x3fffffff);
  { uint32_t x138, uint8_t x139 = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x135, Return x74, Return x136);
  { uint32_t x140 = (x79 & 0x3fffffff);
  { uint32_t x142, uint8_t _ = Op (Syntax.AddWithGetCarry 30 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x139, Return x77, Return x140);
  out[0] = x82;
  out[1] = x86;
  out[2] = x90;
  out[3] = x94;
  out[4] = x98;
  out[5] = x102;
  out[6] = x106;
  out[7] = x110;
  out[8] = x114;
  out[9] = x118;
  out[10] = x122;
  out[11] = x126;
  out[12] = x130;
  out[13] = x134;
  out[14] = x138;
  out[15] = x142;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
