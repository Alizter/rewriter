static void femul(uint32_t out[16], const uint32_t in1[16], const uint32_t in2[16]) {
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
  { ℤ x64 = (((uint64_t)x5 * x62) +ℤ ((0x2 * ((uint64_t)x7 * x63)) +ℤ ((0x2 * ((uint64_t)x9 * x61)) +ℤ (((uint64_t)x11 * x59) +ℤ (((uint64_t)x13 * x57) +ℤ ((0x2 * ((uint64_t)x15 * x55)) + ((0x2 * ((uint64_t)x17 * x53)) + (((uint64_t)x19 * x51) + (((uint64_t)x21 * x49) + ((0x2 * ((uint64_t)x23 * x47)) + ((0x2 * ((uint64_t)x25 * x45)) + (((uint64_t)x27 * x43) + (((uint64_t)x29 * x41) + ((0x2 * ((uint64_t)x31 * x39)) + ((0x2 * ((uint64_t)x33 * x37)) + ((uint64_t)x32 * x35))))))))))))))));
  { ℤ x65 = ((((uint64_t)x5 * x63) +ℤ ((0x2 * ((uint64_t)x7 * x61)) +ℤ (((uint64_t)x9 * x59) +ℤ (((uint64_t)x11 * x57) + (((uint64_t)x13 * x55) + ((0x2 * ((uint64_t)x15 * x53)) + (((uint64_t)x17 * x51) + (((uint64_t)x19 * x49) + (((uint64_t)x21 * x47) + ((0x2 * ((uint64_t)x23 * x45)) + (((uint64_t)x25 * x43) + (((uint64_t)x27 * x41) + (((uint64_t)x29 * x39) + ((0x2 * ((uint64_t)x31 * x37)) + ((uint64_t)x33 * x35))))))))))))))) +ℤ (0x3 * ((uint64_t)x32 * x62)));
  { ℤ x66 = ((((uint64_t)x5 * x61) + (((uint64_t)x7 * x59) + (((uint64_t)x9 * x57) + (((uint64_t)x11 * x55) + (((uint64_t)x13 * x53) + (((uint64_t)x15 * x51) + (((uint64_t)x17 * x49) + (((uint64_t)x19 * x47) + (((uint64_t)x21 * x45) + (((uint64_t)x23 * x43) + (((uint64_t)x25 * x41) + (((uint64_t)x27 * x39) + (((uint64_t)x29 * x37) + ((uint64_t)x31 * x35)))))))))))))) +ℤ (0x3 * (((uint64_t)x33 * x62) + ((uint64_t)x32 * x63))));
  { ℤ x67 = ((((uint64_t)x5 * x59) +ℤ ((0x2 * ((uint64_t)x7 * x57)) +ℤ ((0x2 * ((uint64_t)x9 * x55)) +ℤ ((0x2 * ((uint64_t)x11 * x53)) +ℤ (((uint64_t)x13 * x51) +ℤ ((0x2 * ((uint64_t)x15 * x49)) + ((0x2 * ((uint64_t)x17 * x47)) + ((0x2 * ((uint64_t)x19 * x45)) + (((uint64_t)x21 * x43) + ((0x2 * ((uint64_t)x23 * x41)) + ((0x2 * ((uint64_t)x25 * x39)) + ((0x2 * ((uint64_t)x27 * x37)) + ((uint64_t)x29 * x35))))))))))))) +ℤ (0x3 * ((0x2 * ((uint64_t)x31 * x62)) + ((0x2 * ((uint64_t)x33 * x63)) + (0x2 * ((uint64_t)x32 * x61))))));
  { ℤ x68 = ((((uint64_t)x5 * x57) +ℤ ((0x2 * ((uint64_t)x7 * x55)) + ((0x2 * ((uint64_t)x9 * x53)) + (((uint64_t)x11 * x51) + (((uint64_t)x13 * x49) + ((0x2 * ((uint64_t)x15 * x47)) + ((0x2 * ((uint64_t)x17 * x45)) + (((uint64_t)x19 * x43) + (((uint64_t)x21 * x41) + ((0x2 * ((uint64_t)x23 * x39)) + ((0x2 * ((uint64_t)x25 * x37)) + ((uint64_t)x27 * x35)))))))))))) +ℤ (0x3 *ℤ (((uint64_t)x29 * x62) + ((0x2 * ((uint64_t)x31 * x63)) + ((0x2 * ((uint64_t)x33 * x61)) + ((uint64_t)x32 * x59))))));
  { ℤ x69 = ((((uint64_t)x5 * x55) + ((0x2 * ((uint64_t)x7 * x53)) + (((uint64_t)x9 * x51) + (((uint64_t)x11 * x49) + (((uint64_t)x13 * x47) + ((0x2 * ((uint64_t)x15 * x45)) + (((uint64_t)x17 * x43) + (((uint64_t)x19 * x41) + (((uint64_t)x21 * x39) + ((0x2 * ((uint64_t)x23 * x37)) + ((uint64_t)x25 * x35))))))))))) +ℤ (0x3 *ℤ (((uint64_t)x27 * x62) + (((uint64_t)x29 * x63) + ((0x2 * ((uint64_t)x31 * x61)) + (((uint64_t)x33 * x59) + ((uint64_t)x32 * x57)))))));
  { ℤ x70 = ((((uint64_t)x5 * x53) + (((uint64_t)x7 * x51) + (((uint64_t)x9 * x49) + (((uint64_t)x11 * x47) + (((uint64_t)x13 * x45) + (((uint64_t)x15 * x43) + (((uint64_t)x17 * x41) + (((uint64_t)x19 * x39) + (((uint64_t)x21 * x37) + ((uint64_t)x23 * x35)))))))))) +ℤ (0x3 *ℤ (((uint64_t)x25 * x62) + (((uint64_t)x27 * x63) + (((uint64_t)x29 * x61) + (((uint64_t)x31 * x59) + (((uint64_t)x33 * x57) + ((uint64_t)x32 * x55))))))));
  { ℤ x71 = ((((uint64_t)x5 * x51) +ℤ ((0x2 * ((uint64_t)x7 * x49)) + ((0x2 * ((uint64_t)x9 * x47)) + ((0x2 * ((uint64_t)x11 * x45)) + (((uint64_t)x13 * x43) + ((0x2 * ((uint64_t)x15 * x41)) + ((0x2 * ((uint64_t)x17 * x39)) + ((0x2 * ((uint64_t)x19 * x37)) + ((uint64_t)x21 * x35))))))))) +ℤ (0x3 *ℤ ((0x2 * ((uint64_t)x23 * x62)) + ((0x2 * ((uint64_t)x25 * x63)) + ((0x2 * ((uint64_t)x27 * x61)) + (((uint64_t)x29 * x59) + ((0x2 * ((uint64_t)x31 * x57)) + ((0x2 * ((uint64_t)x33 * x55)) + (0x2 * ((uint64_t)x32 * x53))))))))));
  { ℤ x72 = ((((uint64_t)x5 * x49) + ((0x2 * ((uint64_t)x7 * x47)) + ((0x2 * ((uint64_t)x9 * x45)) + (((uint64_t)x11 * x43) + (((uint64_t)x13 * x41) + ((0x2 * ((uint64_t)x15 * x39)) + ((0x2 * ((uint64_t)x17 * x37)) + ((uint64_t)x19 * x35)))))))) +ℤ (0x3 *ℤ (((uint64_t)x21 * x62) + ((0x2 * ((uint64_t)x23 * x63)) + ((0x2 * ((uint64_t)x25 * x61)) + (((uint64_t)x27 * x59) + (((uint64_t)x29 * x57) + ((0x2 * ((uint64_t)x31 * x55)) + ((0x2 * ((uint64_t)x33 * x53)) + ((uint64_t)x32 * x51))))))))));
  { ℤ x73 = ((((uint64_t)x5 * x47) + ((0x2 * ((uint64_t)x7 * x45)) + (((uint64_t)x9 * x43) + (((uint64_t)x11 * x41) + (((uint64_t)x13 * x39) + ((0x2 * ((uint64_t)x15 * x37)) + ((uint64_t)x17 * x35))))))) +ℤ (0x3 *ℤ (((uint64_t)x19 * x62) + (((uint64_t)x21 * x63) + ((0x2 * ((uint64_t)x23 * x61)) + (((uint64_t)x25 * x59) + (((uint64_t)x27 * x57) + (((uint64_t)x29 * x55) + ((0x2 * ((uint64_t)x31 * x53)) + (((uint64_t)x33 * x51) + ((uint64_t)x32 * x49)))))))))));
  { ℤ x74 = ((((uint64_t)x5 * x45) + (((uint64_t)x7 * x43) + (((uint64_t)x9 * x41) + (((uint64_t)x11 * x39) + (((uint64_t)x13 * x37) + ((uint64_t)x15 * x35)))))) +ℤ (0x3 *ℤ (((uint64_t)x17 * x62) + (((uint64_t)x19 * x63) + (((uint64_t)x21 * x61) + (((uint64_t)x23 * x59) + (((uint64_t)x25 * x57) + (((uint64_t)x27 * x55) + (((uint64_t)x29 * x53) + (((uint64_t)x31 * x51) + (((uint64_t)x33 * x49) + ((uint64_t)x32 * x47))))))))))));
  { ℤ x75 = ((((uint64_t)x5 * x43) + ((0x2 * ((uint64_t)x7 * x41)) + ((0x2 * ((uint64_t)x9 * x39)) + ((0x2 * ((uint64_t)x11 * x37)) + ((uint64_t)x13 * x35))))) +ℤ (0x3 *ℤ ((0x2 * ((uint64_t)x15 * x62)) +ℤ ((0x2 * ((uint64_t)x17 * x63)) +ℤ ((0x2 * ((uint64_t)x19 * x61)) + (((uint64_t)x21 * x59) + ((0x2 * ((uint64_t)x23 * x57)) + ((0x2 * ((uint64_t)x25 * x55)) + ((0x2 * ((uint64_t)x27 * x53)) + (((uint64_t)x29 * x51) + ((0x2 * ((uint64_t)x31 * x49)) + ((0x2 * ((uint64_t)x33 * x47)) + (0x2 * ((uint64_t)x32 * x45))))))))))))));
  { ℤ x76 = ((((uint64_t)x5 * x41) + ((0x2 * ((uint64_t)x7 * x39)) + ((0x2 * ((uint64_t)x9 * x37)) + ((uint64_t)x11 * x35)))) +ℤ (0x3 *ℤ (((uint64_t)x13 * x62) +ℤ ((0x2 * ((uint64_t)x15 * x63)) + ((0x2 * ((uint64_t)x17 * x61)) + (((uint64_t)x19 * x59) + (((uint64_t)x21 * x57) + ((0x2 * ((uint64_t)x23 * x55)) + ((0x2 * ((uint64_t)x25 * x53)) + (((uint64_t)x27 * x51) + (((uint64_t)x29 * x49) + ((0x2 * ((uint64_t)x31 * x47)) + ((0x2 * ((uint64_t)x33 * x45)) + ((uint64_t)x32 * x43))))))))))))));
  { ℤ x77 = ((((uint64_t)x5 * x39) + ((0x2 * ((uint64_t)x7 * x37)) + ((uint64_t)x9 * x35))) +ℤ (0x3 *ℤ (((uint64_t)x11 * x62) + (((uint64_t)x13 * x63) + ((0x2 * ((uint64_t)x15 * x61)) + (((uint64_t)x17 * x59) + (((uint64_t)x19 * x57) + (((uint64_t)x21 * x55) + ((0x2 * ((uint64_t)x23 * x53)) + (((uint64_t)x25 * x51) + (((uint64_t)x27 * x49) + (((uint64_t)x29 * x47) + ((0x2 * ((uint64_t)x31 * x45)) + (((uint64_t)x33 * x43) + ((uint64_t)x32 * x41)))))))))))))));
  { ℤ x78 = ((((uint64_t)x5 * x37) + ((uint64_t)x7 * x35)) +ℤ (0x3 *ℤ (((uint64_t)x9 * x62) + (((uint64_t)x11 * x63) + (((uint64_t)x13 * x61) + (((uint64_t)x15 * x59) + (((uint64_t)x17 * x57) + (((uint64_t)x19 * x55) + (((uint64_t)x21 * x53) + (((uint64_t)x23 * x51) + (((uint64_t)x25 * x49) + (((uint64_t)x27 * x47) + (((uint64_t)x29 * x45) + (((uint64_t)x31 * x43) + (((uint64_t)x33 * x41) + ((uint64_t)x32 * x39))))))))))))))));
  { ℤ x79 = (((uint64_t)x5 * x35) +ℤ (0x3 *ℤ ((0x2 * ((uint64_t)x7 * x62)) +ℤ ((0x2 * ((uint64_t)x9 * x63)) +ℤ ((0x2 * ((uint64_t)x11 * x61)) +ℤ (((uint64_t)x13 * x59) +ℤ ((0x2 * ((uint64_t)x15 * x57)) +ℤ ((0x2 * ((uint64_t)x17 * x55)) +ℤ ((0x2 * ((uint64_t)x19 * x53)) + (((uint64_t)x21 * x51) + ((0x2 * ((uint64_t)x23 * x49)) + ((0x2 * ((uint64_t)x25 * x47)) + ((0x2 * ((uint64_t)x27 * x45)) + (((uint64_t)x29 * x43) + ((0x2 * ((uint64_t)x31 * x41)) + ((0x2 * ((uint64_t)x33 * x39)) + (0x2 * ((uint64_t)x32 * x37))))))))))))))))));
  { uint64_t x80 = (x79 >> 0x1d);
  { uint32_t x81 = (x79 & 0x1fffffff);
  { ℤ x82 = (x80 +ℤ x78);
  { uint64_t x83 = (x82 >> 0x1c);
  { uint32_t x84 = (x82 & 0xfffffff);
  { ℤ x85 = (x83 +ℤ x77);
  { uint64_t x86 = (x85 >> 0x1c);
  { uint32_t x87 = (x85 & 0xfffffff);
  { ℤ x88 = (x86 +ℤ x76);
  { uint64_t x89 = (x88 >> 0x1c);
  { uint32_t x90 = (x88 & 0xfffffff);
  { ℤ x91 = (x89 +ℤ x75);
  { uint64_t x92 = (x91 >> 0x1d);
  { uint32_t x93 = (x91 & 0x1fffffff);
  { ℤ x94 = (x92 +ℤ x74);
  { uint64_t x95 = (x94 >> 0x1c);
  { uint32_t x96 = (x94 & 0xfffffff);
  { ℤ x97 = (x95 +ℤ x73);
  { uint64_t x98 = (x97 >> 0x1c);
  { uint32_t x99 = (x97 & 0xfffffff);
  { ℤ x100 = (x98 +ℤ x72);
  { uint64_t x101 = (x100 >> 0x1c);
  { uint32_t x102 = (x100 & 0xfffffff);
  { ℤ x103 = (x101 +ℤ x71);
  { uint64_t x104 = (x103 >> 0x1d);
  { uint32_t x105 = (x103 & 0x1fffffff);
  { ℤ x106 = (x104 +ℤ x70);
  { uint64_t x107 = (x106 >> 0x1c);
  { uint32_t x108 = (x106 & 0xfffffff);
  { ℤ x109 = (x107 +ℤ x69);
  { uint64_t x110 = (x109 >> 0x1c);
  { uint32_t x111 = (x109 & 0xfffffff);
  { ℤ x112 = (x110 +ℤ x68);
  { uint64_t x113 = (x112 >> 0x1c);
  { uint32_t x114 = (x112 & 0xfffffff);
  { ℤ x115 = (x113 +ℤ x67);
  { uint64_t x116 = (x115 >> 0x1d);
  { uint32_t x117 = (x115 & 0x1fffffff);
  { ℤ x118 = (x116 +ℤ x66);
  { uint64_t x119 = (x118 >> 0x1c);
  { uint32_t x120 = (x118 & 0xfffffff);
  { ℤ x121 = (x119 +ℤ x65);
  { uint64_t x122 = (x121 >> 0x1c);
  { uint32_t x123 = (x121 & 0xfffffff);
  { ℤ x124 = (x122 +ℤ x64);
  { uint64_t x125 = (x124 >> 0x1c);
  { uint32_t x126 = (x124 & 0xfffffff);
  { uint64_t x127 = (x81 + (0x3 * x125));
  { uint32_t x128 = (uint32_t) (x127 >> 0x1d);
  { uint32_t x129 = ((uint32_t)x127 & 0x1fffffff);
  { uint32_t x130 = (x128 + x84);
  { uint32_t x131 = (x130 >> 0x1c);
  { uint32_t x132 = (x130 & 0xfffffff);
  out[0] = x129;
  out[1] = x132;
  out[2] = (x131 + x87);
  out[3] = x90;
  out[4] = x93;
  out[5] = x96;
  out[6] = x99;
  out[7] = x102;
  out[8] = x105;
  out[9] = x108;
  out[10] = x111;
  out[11] = x114;
  out[12] = x117;
  out[13] = x120;
  out[14] = x123;
  out[15] = x126;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
