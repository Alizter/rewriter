static void freeze(uint32_t out[9], const uint32_t in1[9]) {
  { const uint32_t x15 = in1[8];
  { const uint32_t x16 = in1[7];
  { const uint32_t x14 = in1[6];
  { const uint32_t x12 = in1[5];
  { const uint32_t x10 = in1[4];
  { const uint32_t x8 = in1[3];
  { const uint32_t x6 = in1[2];
  { const uint32_t x4 = in1[1];
  { const uint32_t x2 = in1[0];
  { uint32_t x18, uint8_t x19 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (0x0, Return x2, 0x7ffed);
  { uint32_t x21, uint8_t x22 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x19, Return x4, 0x7ffff);
  { uint32_t x24, uint8_t x25 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x22, Return x6, 0x7ffff);
  { uint32_t x27, uint8_t x28 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x25, Return x8, 0x7ffff);
  { uint32_t x30, uint8_t x31 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x28, Return x10, 0x7ffff);
  { uint32_t x33, uint8_t x34 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x31, Return x12, 0x7ffff);
  { uint32_t x36, uint8_t x37 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x34, Return x14, 0x7ffff);
  { uint32_t x39, uint8_t x40 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x37, Return x16, 0x7ffff);
  { uint32_t x42, uint8_t x43 = Op (Syntax.SubWithGetBorrow 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x40, Return x15, 0x7ffff);
  { uint32_t x44 = (uint32_t)cmovznz(x43, 0x0, 0xffffffff);
  { uint32_t x45 = (x44 & 0x7ffed);
  { uint32_t x47, uint8_t x48 = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (0x0, Return x18, Return x45);
  { uint32_t x49 = (x44 & 0x7ffff);
  { uint32_t x51, uint8_t x52 = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x48, Return x21, Return x49);
  { uint32_t x53 = (x44 & 0x7ffff);
  { uint32_t x55, uint8_t x56 = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x52, Return x24, Return x53);
  { uint32_t x57 = (x44 & 0x7ffff);
  { uint32_t x59, uint8_t x60 = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x56, Return x27, Return x57);
  { uint32_t x61 = (x44 & 0x7ffff);
  { uint32_t x63, uint8_t x64 = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x60, Return x30, Return x61);
  { uint32_t x65 = (x44 & 0x7ffff);
  { uint32_t x67, uint8_t x68 = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x64, Return x33, Return x65);
  { uint32_t x69 = (x44 & 0x7ffff);
  { uint32_t x71, uint8_t x72 = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x68, Return x36, Return x69);
  { uint32_t x73 = (x44 & 0x7ffff);
  { uint32_t x75, uint8_t x76 = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x72, Return x39, Return x73);
  { uint32_t x77 = (x44 & 0x7ffff);
  { uint32_t x79, uint8_t _ = Op (Syntax.AddWithGetCarry 19 (Syntax.TWord 3) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 5) (Syntax.TWord 3)) (Return x76, Return x42, Return x77);
  out[0] = x47;
  out[1] = x51;
  out[2] = x55;
  out[3] = x59;
  out[4] = x63;
  out[5] = x67;
  out[6] = x71;
  out[7] = x75;
  out[8] = x79;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
