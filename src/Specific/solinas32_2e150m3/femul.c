static void femul(uint32_t out[5], const uint32_t in1[5], const uint32_t in2[5]) {
  { const uint32_t x10 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x18 = in2[4];
  { const uint32_t x19 = in2[3];
  { const uint32_t x17 = in2[2];
  { const uint32_t x15 = in2[1];
  { const uint32_t x13 = in2[0];
  { ℤ x20 = (((uint64_t)x5 * x18) +ℤ (((uint64_t)x7 * x19) +ℤ (((uint64_t)x9 * x17) +ℤ (((uint64_t)x11 * x15) +ℤ ((uint64_t)x10 * x13)))));
  { ℤ x21 = ((((uint64_t)x5 * x19) +ℤ (((uint64_t)x7 * x17) +ℤ (((uint64_t)x9 * x15) +ℤ ((uint64_t)x11 * x13)))) +ℤ (0x3 *ℤ ((uint64_t)x10 * x18)));
  { ℤ x22 = ((((uint64_t)x5 * x17) +ℤ (((uint64_t)x7 * x15) +ℤ ((uint64_t)x9 * x13))) +ℤ (0x3 *ℤ (((uint64_t)x11 * x18) +ℤ ((uint64_t)x10 * x19))));
  { ℤ x23 = ((((uint64_t)x5 * x15) +ℤ ((uint64_t)x7 * x13)) +ℤ (0x3 *ℤ (((uint64_t)x9 * x18) +ℤ (((uint64_t)x11 * x19) +ℤ ((uint64_t)x10 * x17)))));
  { ℤ x24 = (((uint64_t)x5 * x13) +ℤ (0x3 *ℤ (((uint64_t)x7 * x18) +ℤ (((uint64_t)x9 * x19) +ℤ (((uint64_t)x11 * x17) +ℤ ((uint64_t)x10 * x15))))));
  { uint64_t x25 = (x24 >> 0x1e);
  { uint32_t x26 = (x24 & 0x3fffffff);
  { ℤ x27 = (x25 +ℤ x23);
  { uint64_t x28 = (x27 >> 0x1e);
  { uint32_t x29 = (x27 & 0x3fffffff);
  { ℤ x30 = (x28 +ℤ x22);
  { uint64_t x31 = (x30 >> 0x1e);
  { uint32_t x32 = (x30 & 0x3fffffff);
  { ℤ x33 = (x31 +ℤ x21);
  { uint64_t x34 = (x33 >> 0x1e);
  { uint32_t x35 = (x33 & 0x3fffffff);
  { ℤ x36 = (x34 +ℤ x20);
  { uint64_t x37 = (x36 >> 0x1e);
  { uint32_t x38 = (x36 & 0x3fffffff);
  { uint64_t x39 = (x26 + (0x3 * x37));
  { uint32_t x40 = (uint32_t) (x39 >> 0x1e);
  { uint32_t x41 = ((uint32_t)x39 & 0x3fffffff);
  { uint32_t x42 = (x40 + x29);
  { uint32_t x43 = (x42 >> 0x1e);
  { uint32_t x44 = (x42 & 0x3fffffff);
  out[0] = x41;
  out[1] = x44;
  out[2] = (x43 + x32);
  out[3] = x35;
  out[4] = x38;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
