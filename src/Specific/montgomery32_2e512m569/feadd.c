static void feadd(uint32_t out[16], const uint32_t in1[16], const uint32_t in2[16]) {
  { const uint32_t x32 = in1[15];
  { const uint32_t x33 = in1[14];
  { const uint32_t x31 = in1[13];
  { const uint32_t x29 = in1[12];
  { const uint32_t x27 = in1[11];
  { const uint32_t x25 = in1[10];
  { const uint32_t x23 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x62 = in2[15];
  { const uint32_t x63 = in2[14];
  { const uint32_t x61 = in2[13];
  { const uint32_t x59 = in2[12];
  { const uint32_t x57 = in2[11];
  { const uint32_t x55 = in2[10];
  { const uint32_t x53 = in2[9];
  { const uint32_t x51 = in2[8];
  { const uint32_t x49 = in2[7];
  { const uint32_t x47 = in2[6];
  { const uint32_t x45 = in2[5];
  { const uint32_t x43 = in2[4];
  { const uint32_t x41 = in2[3];
  { const uint32_t x39 = in2[2];
  { const uint32_t x37 = in2[1];
  { const uint32_t x35 = in2[0];
  { uint32_t x65; uint8_t x66 = _addcarryx_u32(0x0, x5, x35, &x65);
  { uint32_t x68; uint8_t x69 = _addcarryx_u32(x66, x7, x37, &x68);
  { uint32_t x71; uint8_t x72 = _addcarryx_u32(x69, x9, x39, &x71);
  { uint32_t x74; uint8_t x75 = _addcarryx_u32(x72, x11, x41, &x74);
  { uint32_t x77; uint8_t x78 = _addcarryx_u32(x75, x13, x43, &x77);
  { uint32_t x80; uint8_t x81 = _addcarryx_u32(x78, x15, x45, &x80);
  { uint32_t x83; uint8_t x84 = _addcarryx_u32(x81, x17, x47, &x83);
  { uint32_t x86; uint8_t x87 = _addcarryx_u32(x84, x19, x49, &x86);
  { uint32_t x89; uint8_t x90 = _addcarryx_u32(x87, x21, x51, &x89);
  { uint32_t x92; uint8_t x93 = _addcarryx_u32(x90, x23, x53, &x92);
  { uint32_t x95; uint8_t x96 = _addcarryx_u32(x93, x25, x55, &x95);
  { uint32_t x98; uint8_t x99 = _addcarryx_u32(x96, x27, x57, &x98);
  { uint32_t x101; uint8_t x102 = _addcarryx_u32(x99, x29, x59, &x101);
  { uint32_t x104; uint8_t x105 = _addcarryx_u32(x102, x31, x61, &x104);
  { uint32_t x107; uint8_t x108 = _addcarryx_u32(x105, x33, x63, &x107);
  { uint32_t x110; uint8_t x111 = _addcarryx_u32(x108, x32, x62, &x110);
  { uint32_t x113; uint8_t x114 = _subborrow_u32(0x0, x65, 0xfffffdc7, &x113);
  { uint32_t x116; uint8_t x117 = _subborrow_u32(x114, x68, 0xffffffff, &x116);
  { uint32_t x119; uint8_t x120 = _subborrow_u32(x117, x71, 0xffffffff, &x119);
  { uint32_t x122; uint8_t x123 = _subborrow_u32(x120, x74, 0xffffffff, &x122);
  { uint32_t x125; uint8_t x126 = _subborrow_u32(x123, x77, 0xffffffff, &x125);
  { uint32_t x128; uint8_t x129 = _subborrow_u32(x126, x80, 0xffffffff, &x128);
  { uint32_t x131; uint8_t x132 = _subborrow_u32(x129, x83, 0xffffffff, &x131);
  { uint32_t x134; uint8_t x135 = _subborrow_u32(x132, x86, 0xffffffff, &x134);
  { uint32_t x137; uint8_t x138 = _subborrow_u32(x135, x89, 0xffffffff, &x137);
  { uint32_t x140; uint8_t x141 = _subborrow_u32(x138, x92, 0xffffffff, &x140);
  { uint32_t x143; uint8_t x144 = _subborrow_u32(x141, x95, 0xffffffff, &x143);
  { uint32_t x146; uint8_t x147 = _subborrow_u32(x144, x98, 0xffffffff, &x146);
  { uint32_t x149; uint8_t x150 = _subborrow_u32(x147, x101, 0xffffffff, &x149);
  { uint32_t x152; uint8_t x153 = _subborrow_u32(x150, x104, 0xffffffff, &x152);
  { uint32_t x155; uint8_t x156 = _subborrow_u32(x153, x107, 0xffffffff, &x155);
  { uint32_t x158; uint8_t x159 = _subborrow_u32(x156, x110, 0xffffffff, &x158);
  { uint32_t _; uint8_t x162 = _subborrow_u32(x159, x111, 0x0, &_);
  { uint32_t x163 = cmovznz(x162, x158, x110);
  { uint32_t x164 = cmovznz(x162, x155, x107);
  { uint32_t x165 = cmovznz(x162, x152, x104);
  { uint32_t x166 = cmovznz(x162, x149, x101);
  { uint32_t x167 = cmovznz(x162, x146, x98);
  { uint32_t x168 = cmovznz(x162, x143, x95);
  { uint32_t x169 = cmovznz(x162, x140, x92);
  { uint32_t x170 = cmovznz(x162, x137, x89);
  { uint32_t x171 = cmovznz(x162, x134, x86);
  { uint32_t x172 = cmovznz(x162, x131, x83);
  { uint32_t x173 = cmovznz(x162, x128, x80);
  { uint32_t x174 = cmovznz(x162, x125, x77);
  { uint32_t x175 = cmovznz(x162, x122, x74);
  { uint32_t x176 = cmovznz(x162, x119, x71);
  { uint32_t x177 = cmovznz(x162, x116, x68);
  { uint32_t x178 = cmovznz(x162, x113, x65);
  out[0] = x178;
  out[1] = x177;
  out[2] = x176;
  out[3] = x175;
  out[4] = x174;
  out[5] = x173;
  out[6] = x172;
  out[7] = x171;
  out[8] = x170;
  out[9] = x169;
  out[10] = x168;
  out[11] = x167;
  out[12] = x166;
  out[13] = x165;
  out[14] = x164;
  out[15] = x163;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
