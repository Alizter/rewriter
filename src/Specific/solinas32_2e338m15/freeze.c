static void freeze(uint32_t out[13], const uint32_t in1[13]) {
  { const uint32_t x23 = in1[12];
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
  { uint32_t x26, uint8_t x27 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (0x0, Return x2, 0x3fffff1);
  { uint32_t x29, uint8_t x30 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x27, Return x4, 0x3ffffff);
  { uint32_t x32, uint8_t x33 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x30, Return x6, 0x3ffffff);
  { uint32_t x35, uint8_t x36 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x33, Return x8, 0x3ffffff);
  { uint32_t x38, uint8_t x39 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x36, Return x10, 0x3ffffff);
  { uint32_t x41, uint8_t x42 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x39, Return x12, 0x3ffffff);
  { uint32_t x44, uint8_t x45 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x42, Return x14, 0x3ffffff);
  { uint32_t x47, uint8_t x48 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x45, Return x16, 0x3ffffff);
  { uint32_t x50, uint8_t x51 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x48, Return x18, 0x3ffffff);
  { uint32_t x53, uint8_t x54 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x51, Return x20, 0x3ffffff);
  { uint32_t x56, uint8_t x57 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x54, Return x22, 0x3ffffff);
  { uint32_t x59, uint8_t x60 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x57, Return x24, 0x3ffffff);
  { uint32_t x62, uint8_t x63 = Op (Syntax.SubWithGetBorrow 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x60, Return x23, 0x3ffffff);
  { uint32_t x64 = (uint32_t)cmovznz(x63, 0x0, 0xffffffff);
  { uint32_t x65 = (x64 & 0x3fffff1);
  { uint32_t x67, uint8_t x68 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (0x0, Return x26, Return x65);
  { uint32_t x69 = (x64 & 0x3ffffff);
  { uint32_t x71, uint8_t x72 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x68, Return x29, Return x69);
  { uint32_t x73 = (x64 & 0x3ffffff);
  { uint32_t x75, uint8_t x76 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x72, Return x32, Return x73);
  { uint32_t x77 = (x64 & 0x3ffffff);
  { uint32_t x79, uint8_t x80 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x76, Return x35, Return x77);
  { uint32_t x81 = (x64 & 0x3ffffff);
  { uint32_t x83, uint8_t x84 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x80, Return x38, Return x81);
  { uint32_t x85 = (x64 & 0x3ffffff);
  { uint32_t x87, uint8_t x88 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x84, Return x41, Return x85);
  { uint32_t x89 = (x64 & 0x3ffffff);
  { uint32_t x91, uint8_t x92 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x88, Return x44, Return x89);
  { uint32_t x93 = (x64 & 0x3ffffff);
  { uint32_t x95, uint8_t x96 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x92, Return x47, Return x93);
  { uint32_t x97 = (x64 & 0x3ffffff);
  { uint32_t x99, uint8_t x100 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x96, Return x50, Return x97);
  { uint32_t x101 = (x64 & 0x3ffffff);
  { uint32_t x103, uint8_t x104 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x100, Return x53, Return x101);
  { uint32_t x105 = (x64 & 0x3ffffff);
  { uint32_t x107, uint8_t x108 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x104, Return x56, Return x105);
  { uint32_t x109 = (x64 & 0x3ffffff);
  { uint32_t x111, uint8_t x112 = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x108, Return x59, Return x109);
  { uint32_t x113 = (x64 & 0x3ffffff);
  { uint32_t x115, uint8_t _ = Op (Syntax.AddWithGetCarry 26 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x112, Return x62, Return x113);
  out[0] = x67;
  out[1] = x71;
  out[2] = x75;
  out[3] = x79;
  out[4] = x83;
  out[5] = x87;
  out[6] = x91;
  out[7] = x95;
  out[8] = x99;
  out[9] = x103;
  out[10] = x107;
  out[11] = x111;
  out[12] = x115;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
