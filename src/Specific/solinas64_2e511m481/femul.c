static void femul(uint64_t out[10], const uint64_t in1[10], const uint64_t in2[10]) {
  { const uint64_t x20 = in1[9];
  { const uint64_t x21 = in1[8];
  { const uint64_t x19 = in1[7];
  { const uint64_t x17 = in1[6];
  { const uint64_t x15 = in1[5];
  { const uint64_t x13 = in1[4];
  { const uint64_t x11 = in1[3];
  { const uint64_t x9 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x38 = in2[9];
  { const uint64_t x39 = in2[8];
  { const uint64_t x37 = in2[7];
  { const uint64_t x35 = in2[6];
  { const uint64_t x33 = in2[5];
  { const uint64_t x31 = in2[4];
  { const uint64_t x29 = in2[3];
  { const uint64_t x27 = in2[2];
  { const uint64_t x25 = in2[1];
  { const uint64_t x23 = in2[0];
  { uint128_t x40 = (((uint128_t)x5 * x38) + ((0x2 * ((uint128_t)x7 * x39)) + ((0x2 * ((uint128_t)x9 * x37)) + ((0x2 * ((uint128_t)x11 * x35)) + ((0x2 * ((uint128_t)x13 * x33)) + ((0x2 * ((uint128_t)x15 * x31)) + ((0x2 * ((uint128_t)x17 * x29)) + ((0x2 * ((uint128_t)x19 * x27)) + ((0x2 * ((uint128_t)x21 * x25)) + ((uint128_t)x20 * x23))))))))));
  { uint128_t x41 = ((((uint128_t)x5 * x39) + ((0x2 * ((uint128_t)x7 * x37)) + ((0x2 * ((uint128_t)x9 * x35)) + ((0x2 * ((uint128_t)x11 * x33)) + ((0x2 * ((uint128_t)x13 * x31)) + ((0x2 * ((uint128_t)x15 * x29)) + ((0x2 * ((uint128_t)x17 * x27)) + ((0x2 * ((uint128_t)x19 * x25)) + ((uint128_t)x21 * x23))))))))) + (0x1e1 * ((uint128_t)x20 * x38)));
  { uint128_t x42 = ((((uint128_t)x5 * x37) + ((0x2 * ((uint128_t)x7 * x35)) + ((0x2 * ((uint128_t)x9 * x33)) + ((0x2 * ((uint128_t)x11 * x31)) + ((0x2 * ((uint128_t)x13 * x29)) + ((0x2 * ((uint128_t)x15 * x27)) + ((0x2 * ((uint128_t)x17 * x25)) + ((uint128_t)x19 * x23)))))))) + (0x1e1 * (((uint128_t)x21 * x38) + ((uint128_t)x20 * x39))));
  { uint128_t x43 = ((((uint128_t)x5 * x35) + ((0x2 * ((uint128_t)x7 * x33)) + ((0x2 * ((uint128_t)x9 * x31)) + ((0x2 * ((uint128_t)x11 * x29)) + ((0x2 * ((uint128_t)x13 * x27)) + ((0x2 * ((uint128_t)x15 * x25)) + ((uint128_t)x17 * x23))))))) + (0x1e1 * (((uint128_t)x19 * x38) + (((uint128_t)x21 * x39) + ((uint128_t)x20 * x37)))));
  { uint128_t x44 = ((((uint128_t)x5 * x33) + ((0x2 * ((uint128_t)x7 * x31)) + ((0x2 * ((uint128_t)x9 * x29)) + ((0x2 * ((uint128_t)x11 * x27)) + ((0x2 * ((uint128_t)x13 * x25)) + ((uint128_t)x15 * x23)))))) + (0x1e1 * (((uint128_t)x17 * x38) + (((uint128_t)x19 * x39) + (((uint128_t)x21 * x37) + ((uint128_t)x20 * x35))))));
  { uint128_t x45 = ((((uint128_t)x5 * x31) + ((0x2 * ((uint128_t)x7 * x29)) + ((0x2 * ((uint128_t)x9 * x27)) + ((0x2 * ((uint128_t)x11 * x25)) + ((uint128_t)x13 * x23))))) + (0x1e1 * (((uint128_t)x15 * x38) + (((uint128_t)x17 * x39) + (((uint128_t)x19 * x37) + (((uint128_t)x21 * x35) + ((uint128_t)x20 * x33)))))));
  { uint128_t x46 = ((((uint128_t)x5 * x29) + ((0x2 * ((uint128_t)x7 * x27)) + ((0x2 * ((uint128_t)x9 * x25)) + ((uint128_t)x11 * x23)))) + (0x1e1 * (((uint128_t)x13 * x38) + (((uint128_t)x15 * x39) + (((uint128_t)x17 * x37) + (((uint128_t)x19 * x35) + (((uint128_t)x21 * x33) + ((uint128_t)x20 * x31))))))));
  { uint128_t x47 = ((((uint128_t)x5 * x27) + ((0x2 * ((uint128_t)x7 * x25)) + ((uint128_t)x9 * x23))) + (0x1e1 * (((uint128_t)x11 * x38) + (((uint128_t)x13 * x39) + (((uint128_t)x15 * x37) + (((uint128_t)x17 * x35) + (((uint128_t)x19 * x33) + (((uint128_t)x21 * x31) + ((uint128_t)x20 * x29)))))))));
  { uint128_t x48 = ((((uint128_t)x5 * x25) + ((uint128_t)x7 * x23)) + (0x1e1 * (((uint128_t)x9 * x38) + (((uint128_t)x11 * x39) + (((uint128_t)x13 * x37) + (((uint128_t)x15 * x35) + (((uint128_t)x17 * x33) + (((uint128_t)x19 * x31) + (((uint128_t)x21 * x29) + ((uint128_t)x20 * x27))))))))));
  { uint128_t x49 = (((uint128_t)x5 * x23) + (0x1e1 * ((0x2 * ((uint128_t)x7 * x38)) + ((0x2 * ((uint128_t)x9 * x39)) + ((0x2 * ((uint128_t)x11 * x37)) + ((0x2 * ((uint128_t)x13 * x35)) + ((0x2 * ((uint128_t)x15 * x33)) + ((0x2 * ((uint128_t)x17 * x31)) + ((0x2 * ((uint128_t)x19 * x29)) + ((0x2 * ((uint128_t)x21 * x27)) + (0x2 * ((uint128_t)x20 * x25))))))))))));
  { uint128_t x50 = (x49 >> 0x34);
  { uint64_t x51 = ((uint64_t)x49 & 0xfffffffffffff);
  { uint128_t x52 = (x50 + x48);
  { uint128_t x53 = (x52 >> 0x33);
  { uint64_t x54 = ((uint64_t)x52 & 0x7ffffffffffff);
  { uint128_t x55 = (x53 + x47);
  { uint128_t x56 = (x55 >> 0x33);
  { uint64_t x57 = ((uint64_t)x55 & 0x7ffffffffffff);
  { uint128_t x58 = (x56 + x46);
  { uint128_t x59 = (x58 >> 0x33);
  { uint64_t x60 = ((uint64_t)x58 & 0x7ffffffffffff);
  { uint128_t x61 = (x59 + x45);
  { uint128_t x62 = (x61 >> 0x33);
  { uint64_t x63 = ((uint64_t)x61 & 0x7ffffffffffff);
  { uint128_t x64 = (x62 + x44);
  { uint128_t x65 = (x64 >> 0x33);
  { uint64_t x66 = ((uint64_t)x64 & 0x7ffffffffffff);
  { uint128_t x67 = (x65 + x43);
  { uint128_t x68 = (x67 >> 0x33);
  { uint64_t x69 = ((uint64_t)x67 & 0x7ffffffffffff);
  { uint128_t x70 = (x68 + x42);
  { uint128_t x71 = (x70 >> 0x33);
  { uint64_t x72 = ((uint64_t)x70 & 0x7ffffffffffff);
  { uint128_t x73 = (x71 + x41);
  { uint64_t x74 = (uint64_t) (x73 >> 0x33);
  { uint64_t x75 = ((uint64_t)x73 & 0x7ffffffffffff);
  { uint128_t x76 = (x74 + x40);
  { uint64_t x77 = (uint64_t) (x76 >> 0x33);
  { uint64_t x78 = ((uint64_t)x76 & 0x7ffffffffffff);
  { uint128_t x79 = (x51 + ((uint128_t)0x1e1 * x77));
  { uint64_t x80 = (uint64_t) (x79 >> 0x34);
  { uint64_t x81 = ((uint64_t)x79 & 0xfffffffffffff);
  { uint64_t x82 = (x80 + x54);
  { uint64_t x83 = (x82 >> 0x33);
  { uint64_t x84 = (x82 & 0x7ffffffffffff);
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
