static void freeze(uint64_t out[10], const uint64_t in1[10]) {
  { const uint64_t x17 = in1[9];
  { const uint64_t x18 = in1[8];
  { const uint64_t x16 = in1[7];
  { const uint64_t x14 = in1[6];
  { const uint64_t x12 = in1[5];
  { const uint64_t x10 = in1[4];
  { const uint64_t x8 = in1[3];
  { const uint64_t x6 = in1[2];
  { const uint64_t x4 = in1[1];
  { const uint64_t x2 = in1[0];
  { uint64_t x20, uint8_t x21 = Op (Syntax.SubWithGetBorrow 39 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (0x0, Return x2, 0x7fffffff97);
  { uint64_t x23, uint8_t x24 = Op (Syntax.SubWithGetBorrow 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x21, Return x4, 0x3fffffffff);
  { uint64_t x26, uint8_t x27 = Op (Syntax.SubWithGetBorrow 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x24, Return x6, 0x3fffffffff);
  { uint64_t x29, uint8_t x30 = Op (Syntax.SubWithGetBorrow 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x27, Return x8, 0x3fffffffff);
  { uint64_t x32, uint8_t x33 = Op (Syntax.SubWithGetBorrow 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x30, Return x10, 0x3fffffffff);
  { uint64_t x35, uint8_t x36 = Op (Syntax.SubWithGetBorrow 39 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x33, Return x12, 0x7fffffffff);
  { uint64_t x38, uint8_t x39 = Op (Syntax.SubWithGetBorrow 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x36, Return x14, 0x3fffffffff);
  { uint64_t x41, uint8_t x42 = Op (Syntax.SubWithGetBorrow 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x39, Return x16, 0x3fffffffff);
  { uint64_t x44, uint8_t x45 = Op (Syntax.SubWithGetBorrow 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x42, Return x18, 0x3fffffffff);
  { uint64_t x47, uint8_t x48 = Op (Syntax.SubWithGetBorrow 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x45, Return x17, 0x3fffffffff);
  { uint64_t x49 = (uint64_t)cmovznz(x48, 0x0, 0xffffffffffffffffL);
  { uint64_t x50 = (x49 & 0x7fffffff97);
  { uint64_t x52, uint8_t x53 = Op (Syntax.AddWithGetCarry 39 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (0x0, Return x20, Return x50);
  { uint64_t x54 = (x49 & 0x3fffffffff);
  { uint64_t x56, uint8_t x57 = Op (Syntax.AddWithGetCarry 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x53, Return x23, Return x54);
  { uint64_t x58 = (x49 & 0x3fffffffff);
  { uint64_t x60, uint8_t x61 = Op (Syntax.AddWithGetCarry 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x57, Return x26, Return x58);
  { uint64_t x62 = (x49 & 0x3fffffffff);
  { uint64_t x64, uint8_t x65 = Op (Syntax.AddWithGetCarry 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x61, Return x29, Return x62);
  { uint64_t x66 = (x49 & 0x3fffffffff);
  { uint64_t x68, uint8_t x69 = Op (Syntax.AddWithGetCarry 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x65, Return x32, Return x66);
  { uint64_t x70 = (x49 & 0x7fffffffff);
  { uint64_t x72, uint8_t x73 = Op (Syntax.AddWithGetCarry 39 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x69, Return x35, Return x70);
  { uint64_t x74 = (x49 & 0x3fffffffff);
  { uint64_t x76, uint8_t x77 = Op (Syntax.AddWithGetCarry 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x73, Return x38, Return x74);
  { uint64_t x78 = (x49 & 0x3fffffffff);
  { uint64_t x80, uint8_t x81 = Op (Syntax.AddWithGetCarry 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x77, Return x41, Return x78);
  { uint64_t x82 = (x49 & 0x3fffffffff);
  { uint64_t x84, uint8_t x85 = Op (Syntax.AddWithGetCarry 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x81, Return x44, Return x82);
  { uint64_t x86 = (x49 & 0x3fffffffff);
  { uint64_t x88, uint8_t _ = Op (Syntax.AddWithGetCarry 38 (Syntax.TWord 3) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 6) (Syntax.TWord 3)) (Return x85, Return x47, Return x86);
  out[0] = x52;
  out[1] = x56;
  out[2] = x60;
  out[3] = x64;
  out[4] = x68;
  out[5] = x72;
  out[6] = x76;
  out[7] = x80;
  out[8] = x84;
  out[9] = x88;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
