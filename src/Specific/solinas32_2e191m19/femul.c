static void femul(uint32_t out[10], const uint32_t in1[10], const uint32_t in2[10]) {
  { const uint32_t x20 = in1[9];
  { const uint32_t x21 = in1[8];
  { const uint32_t x19 = in1[7];
  { const uint32_t x17 = in1[6];
  { const uint32_t x15 = in1[5];
  { const uint32_t x13 = in1[4];
  { const uint32_t x11 = in1[3];
  { const uint32_t x9 = in1[2];
  { const uint32_t x7 = in1[1];
  { const uint32_t x5 = in1[0];
  { const uint32_t x38 = in2[9];
  { const uint32_t x39 = in2[8];
  { const uint32_t x37 = in2[7];
  { const uint32_t x35 = in2[6];
  { const uint32_t x33 = in2[5];
  { const uint32_t x31 = in2[4];
  { const uint32_t x29 = in2[3];
  { const uint32_t x27 = in2[2];
  { const uint32_t x25 = in2[1];
  { const uint32_t x23 = in2[0];
  { uint64_t x40 = (((uint64_t)x5 * x38) + ((0x2 * ((uint64_t)x7 * x39)) + ((0x2 * ((uint64_t)x9 * x37)) + ((0x2 * ((uint64_t)x11 * x35)) + ((0x2 * ((uint64_t)x13 * x33)) + ((0x2 * ((uint64_t)x15 * x31)) + ((0x2 * ((uint64_t)x17 * x29)) + ((0x2 * ((uint64_t)x19 * x27)) + ((0x2 * ((uint64_t)x21 * x25)) + ((uint64_t)x20 * x23))))))))));
  { uint64_t x41 = ((((uint64_t)x5 * x39) + ((0x2 * ((uint64_t)x7 * x37)) + ((0x2 * ((uint64_t)x9 * x35)) + ((0x2 * ((uint64_t)x11 * x33)) + ((0x2 * ((uint64_t)x13 * x31)) + ((0x2 * ((uint64_t)x15 * x29)) + ((0x2 * ((uint64_t)x17 * x27)) + ((0x2 * ((uint64_t)x19 * x25)) + ((uint64_t)x21 * x23))))))))) + (0x13 * ((uint64_t)x20 * x38)));
  { uint64_t x42 = ((((uint64_t)x5 * x37) + ((0x2 * ((uint64_t)x7 * x35)) + ((0x2 * ((uint64_t)x9 * x33)) + ((0x2 * ((uint64_t)x11 * x31)) + ((0x2 * ((uint64_t)x13 * x29)) + ((0x2 * ((uint64_t)x15 * x27)) + ((0x2 * ((uint64_t)x17 * x25)) + ((uint64_t)x19 * x23)))))))) + (0x13 * (((uint64_t)x21 * x38) + ((uint64_t)x20 * x39))));
  { uint64_t x43 = ((((uint64_t)x5 * x35) + ((0x2 * ((uint64_t)x7 * x33)) + ((0x2 * ((uint64_t)x9 * x31)) + ((0x2 * ((uint64_t)x11 * x29)) + ((0x2 * ((uint64_t)x13 * x27)) + ((0x2 * ((uint64_t)x15 * x25)) + ((uint64_t)x17 * x23))))))) + (0x13 * (((uint64_t)x19 * x38) + (((uint64_t)x21 * x39) + ((uint64_t)x20 * x37)))));
  { uint64_t x44 = ((((uint64_t)x5 * x33) + ((0x2 * ((uint64_t)x7 * x31)) + ((0x2 * ((uint64_t)x9 * x29)) + ((0x2 * ((uint64_t)x11 * x27)) + ((0x2 * ((uint64_t)x13 * x25)) + ((uint64_t)x15 * x23)))))) + (0x13 * (((uint64_t)x17 * x38) + (((uint64_t)x19 * x39) + (((uint64_t)x21 * x37) + ((uint64_t)x20 * x35))))));
  { uint64_t x45 = ((((uint64_t)x5 * x31) + ((0x2 * ((uint64_t)x7 * x29)) + ((0x2 * ((uint64_t)x9 * x27)) + ((0x2 * ((uint64_t)x11 * x25)) + ((uint64_t)x13 * x23))))) + (0x13 * (((uint64_t)x15 * x38) + (((uint64_t)x17 * x39) + (((uint64_t)x19 * x37) + (((uint64_t)x21 * x35) + ((uint64_t)x20 * x33)))))));
  { uint64_t x46 = ((((uint64_t)x5 * x29) + ((0x2 * ((uint64_t)x7 * x27)) + ((0x2 * ((uint64_t)x9 * x25)) + ((uint64_t)x11 * x23)))) + (0x13 * (((uint64_t)x13 * x38) + (((uint64_t)x15 * x39) + (((uint64_t)x17 * x37) + (((uint64_t)x19 * x35) + (((uint64_t)x21 * x33) + ((uint64_t)x20 * x31))))))));
  { uint64_t x47 = ((((uint64_t)x5 * x27) + ((0x2 * ((uint64_t)x7 * x25)) + ((uint64_t)x9 * x23))) + (0x13 * (((uint64_t)x11 * x38) + (((uint64_t)x13 * x39) + (((uint64_t)x15 * x37) + (((uint64_t)x17 * x35) + (((uint64_t)x19 * x33) + (((uint64_t)x21 * x31) + ((uint64_t)x20 * x29)))))))));
  { uint64_t x48 = ((((uint64_t)x5 * x25) + ((uint64_t)x7 * x23)) + (0x13 * (((uint64_t)x9 * x38) + (((uint64_t)x11 * x39) + (((uint64_t)x13 * x37) + (((uint64_t)x15 * x35) + (((uint64_t)x17 * x33) + (((uint64_t)x19 * x31) + (((uint64_t)x21 * x29) + ((uint64_t)x20 * x27))))))))));
  { uint64_t x49 = (((uint64_t)x5 * x23) + (0x13 * ((0x2 * ((uint64_t)x7 * x38)) + ((0x2 * ((uint64_t)x9 * x39)) + ((0x2 * ((uint64_t)x11 * x37)) + ((0x2 * ((uint64_t)x13 * x35)) + ((0x2 * ((uint64_t)x15 * x33)) + ((0x2 * ((uint64_t)x17 * x31)) + ((0x2 * ((uint64_t)x19 * x29)) + ((0x2 * ((uint64_t)x21 * x27)) + (0x2 * ((uint64_t)x20 * x25))))))))))));
  { uint32_t x50 = (uint32_t) (x49 >> 0x14);
  { uint32_t x51 = ((uint32_t)x49 & 0xfffff);
  { uint64_t x52 = (x50 + x48);
  { uint32_t x53 = (uint32_t) (x52 >> 0x13);
  { uint32_t x54 = ((uint32_t)x52 & 0x7ffff);
  { uint64_t x55 = (x53 + x47);
  { uint32_t x56 = (uint32_t) (x55 >> 0x13);
  { uint32_t x57 = ((uint32_t)x55 & 0x7ffff);
  { uint64_t x58 = (x56 + x46);
  { uint32_t x59 = (uint32_t) (x58 >> 0x13);
  { uint32_t x60 = ((uint32_t)x58 & 0x7ffff);
  { uint64_t x61 = (x59 + x45);
  { uint32_t x62 = (uint32_t) (x61 >> 0x13);
  { uint32_t x63 = ((uint32_t)x61 & 0x7ffff);
  { uint64_t x64 = (x62 + x44);
  { uint32_t x65 = (uint32_t) (x64 >> 0x13);
  { uint32_t x66 = ((uint32_t)x64 & 0x7ffff);
  { uint64_t x67 = (x65 + x43);
  { uint32_t x68 = (uint32_t) (x67 >> 0x13);
  { uint32_t x69 = ((uint32_t)x67 & 0x7ffff);
  { uint64_t x70 = (x68 + x42);
  { uint32_t x71 = (uint32_t) (x70 >> 0x13);
  { uint32_t x72 = ((uint32_t)x70 & 0x7ffff);
  { uint64_t x73 = (x71 + x41);
  { uint32_t x74 = (uint32_t) (x73 >> 0x13);
  { uint32_t x75 = ((uint32_t)x73 & 0x7ffff);
  { uint64_t x76 = (x74 + x40);
  { uint32_t x77 = (uint32_t) (x76 >> 0x13);
  { uint32_t x78 = ((uint32_t)x76 & 0x7ffff);
  { uint32_t x79 = (x51 + (0x13 * x77));
  { uint32_t x80 = (x79 >> 0x14);
  { uint32_t x81 = (x79 & 0xfffff);
  { uint32_t x82 = (x80 + x54);
  { uint32_t x83 = (x82 >> 0x13);
  { uint32_t x84 = (x82 & 0x7ffff);
  out[0] = x81;
  out[1] = x84;
  out[2] = (x83 + x57);
  out[3] = x60;
  out[4] = x63;
  out[5] = x66;
  out[6] = x69;
  out[7] = x72;
  out[8] = x75;
  out[9] = x78;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
