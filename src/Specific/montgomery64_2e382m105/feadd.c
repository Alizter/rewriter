static void feadd(uint64_t out[6], const uint64_t in1[6], const uint64_t in2[6]) {
  { const uint64_t x12 = in1[5];
  { const uint64_t x13 = in1[4];
  { const uint64_t x11 = in1[3];
  { const uint64_t x9 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x22 = in2[5];
  { const uint64_t x23 = in2[4];
  { const uint64_t x21 = in2[3];
  { const uint64_t x19 = in2[2];
  { const uint64_t x17 = in2[1];
  { const uint64_t x15 = in2[0];
  { uint64_t x25; uint8_t x26 = _addcarryx_u64(0x0, x5, x15, &x25);
  { uint64_t x28; uint8_t x29 = _addcarryx_u64(x26, x7, x17, &x28);
  { uint64_t x31; uint8_t x32 = _addcarryx_u64(x29, x9, x19, &x31);
  { uint64_t x34; uint8_t x35 = _addcarryx_u64(x32, x11, x21, &x34);
  { uint64_t x37; uint8_t x38 = _addcarryx_u64(x35, x13, x23, &x37);
  { uint64_t x40; uint8_t x41 = _addcarryx_u64(x38, x12, x22, &x40);
  { uint64_t x43; uint8_t x44 = _subborrow_u64(0x0, x25, 0xffffffffffffff97L, &x43);
  { uint64_t x46; uint8_t x47 = _subborrow_u64(x44, x28, 0xffffffffffffffffL, &x46);
  { uint64_t x49; uint8_t x50 = _subborrow_u64(x47, x31, 0xffffffffffffffffL, &x49);
  { uint64_t x52; uint8_t x53 = _subborrow_u64(x50, x34, 0xffffffffffffffffL, &x52);
  { uint64_t x55; uint8_t x56 = _subborrow_u64(x53, x37, 0xffffffffffffffffL, &x55);
  { uint64_t x58; uint8_t x59 = _subborrow_u64(x56, x40, 0x3fffffffffffffff, &x58);
  { uint64_t _; uint8_t x62 = _subborrow_u64(x59, x41, 0x0, &_);
  { uint64_t x63 = cmovznz(x62, x58, x40);
  { uint64_t x64 = cmovznz(x62, x55, x37);
  { uint64_t x65 = cmovznz(x62, x52, x34);
  { uint64_t x66 = cmovznz(x62, x49, x31);
  { uint64_t x67 = cmovznz(x62, x46, x28);
  { uint64_t x68 = cmovznz(x62, x43, x25);
  out[0] = x68;
  out[1] = x67;
  out[2] = x66;
  out[3] = x65;
  out[4] = x64;
  out[5] = x63;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
