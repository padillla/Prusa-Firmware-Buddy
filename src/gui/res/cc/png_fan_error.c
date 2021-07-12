const uint8_t png_fan_error[] =
{
	0x89, 0x50, 0x4e, 0x47, 0x0d, 0x0a, 0x1a, 0x0a, 0x00, 0x00, 0x00, 0x0d, 0x49, 0x48, 0x44, 0x52, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x30, 0x08, 0x03, 0x00, 0x00, 0x00, 0x60, 0xdc, 0x09, 0xb5, 0x00, 0x00, 0x00, 0x69, 0x50, 0x4c, 0x54, 0x45, 0xc8, 0x77, 0x31, 0xe0, 0x7a, 0x2e, 0xed, 0x7d, 0x17, 0xed, 0x7e, 0x1a, 0xef, 0x7f, 0x1a, 0xee, 0x7e, 0x1a, 0xef, 0x7e, 0x1a, 0xee, 0x7f, 0x1a, 0xee, 0x7c, 0x17, 0xee, 0x7e, 0x19, 0xee, 0x7f, 0x19, 0xec, 0x7d, 0x18, 0xed, 0x7d, 0x18, 0xe0, 0x71, 0x11, 0xe4, 0x73, 0x0f, 0xea, 0x7d, 0x17, 0xfc, 0xfc, 0xfc, 0xfd, 0xfd, 0xfd, 0xfe, 0xfe, 0xfe, 0xf2, 0xf2, 0xf2, 0xef, 0x7f, 0x19, 0xea, 0x7b, 0x17, 0xec, 0x7d, 0x19, 0xf9, 0xf9, 0xf9, 0xf6, 0xb9, 0x81, 0xf7, 0xbc, 0x88, 0xfb, 0xfb, 0xfb, 0xfa, 0xfa, 0xfa, 0xf1, 0x90, 0x38,
	0xf4, 0xab, 0x68, 0xf6, 0xb9, 0x83, 0xef, 0x86, 0x26, 0xf6, 0xbc, 0x87, 0xf5, 0xaf, 0x70, 0xe9, 0x79, 0x18, 0xb7, 0xf0, 0xaa, 0xed, 0x00, 0x00, 0x02, 0x18, 0x49, 0x44, 0x41, 0x54, 0x48, 0xc7, 0xd5, 0x55, 0xd1, 0x56, 0xc3, 0x20, 0x0c, 0x85, 0xb6, 0x94, 0x95, 0xb9, 0xad, 0xc0, 0x14, 0x57, 0x75, 0x53, 0xff, 0xff, 0x23, 0x85, 0x24, 0xd0, 0xd0, 0x75, 0xba, 0x07, 0x1f, 0x34, 0x0f, 0x3b, 0x1d, 0xdc, 0x84, 0x9b, 0x0b, 0x49, 0x84, 0xf8, 0x0f, 0x26, 0x9b, 0xb6, 0x53, 0x4a, 0xf5, 0x4a, 0x6f, 0xee, 0x41, 0x0f, 0xa6, 0x63, 0xa6, 0xcc, 0x0f, 0xf0, 0x0a, 0x8d, 0xa6, 0xbf, 0xc1, 0x6f, 0xbb, 0x55, 0x7b, 0xb8, 0x85, 0x2f, 0x08, 0xa3, 0xda, 0x41, 0xf7, 0x9d, 0x2e, 0xff, 0x57, 0xe1, 0x3b, 0xda, 0x57, 0x4d, 0x59, 0xda, 0x0f, 0x79, 0x4d, 0xde, 0xc4, 0xab, 0x43, 0xfc, 0x1e, 0xad,
	0x73, 0xce, 0x02, 0x68, 0x83, 0xcb, 0xfa, 0xda, 0x03, 0xd3, 0x1d, 0xd2, 0x67, 0x82, 0x27, 0xf3, 0xb0, 0x41, 0x81, 0x96, 0xf8, 0x23, 0x2c, 0x3f, 0xe2, 0x1f, 0x72, 0x70, 0xf1, 0xcb, 0x66, 0xe1, 0x8e, 0x35, 0xfe, 0x09, 0x16, 0x0f, 0x22, 0x40, 0x60, 0x3f, 0x3b, 0xb8, 0xe7, 0x75, 0xad, 0x28, 0xfe, 0x08, 0x38, 0x0b, 0x7e, 0xd1, 0x82, 0x70, 0xa7, 0x59, 0x5d, 0x8e, 0xd7, 0xc8, 0x7f, 0xa2, 0xc8, 0x96, 0xd2, 0x78, 0xf1, 0x88, 0x37, 0x66, 0x79, 0x83, 0x28, 0x76, 0x66, 0x92, 0x3c, 0x30, 0xeb, 0x57, 0xc0, 0xbf, 0x09, 0xa1, 0xea, 0x23, 0x1a, 0x24, 0xe4, 0x66, 0xc3, 0xb3, 0x30, 0xdf, 0x53, 0xcc, 0xe5, 0x50, 0xdf, 0x5f, 0x8f, 0xba, 0x31, 0x07, 0x97, 0xb2, 0x39, 0x13, 0xde, 0x0a, 0x3c, 0x42, 0x2d, 0x18, 0x81, 0x79, 0x5b, 0x7c, 0x4e, 0x84, 0x77, 0x32, 0x93, 0xc8, 0xf8, 0x4d,
	0xfa, 0x93, 0x56, 0xe5, 0x34, 0x05, 0x9f, 0x25, 0x2a, 0xf8, 0x31, 0x46, 0x11, 0x92, 0x2b, 0xdb, 0xa2, 0x04, 0x81, 0x31, 0xb2, 0xfe, 0x92, 0xf1, 0x2e, 0x89, 0x31, 0x81, 0x90, 0x59, 0x27, 0xe4, 0xe7, 0x19, 0xde, 0x8b, 0x9c, 0x2f, 0x5d, 0xca, 0x58, 0x25, 0x91, 0xbe, 0x5b, 0x61, 0x59, 0xfc, 0x19, 0x3f, 0xd1, 0x3a, 0xd0, 0xe8, 0xd9, 0xb5, 0x69, 0xae, 0x91, 0x47, 0xfc, 0x05, 0xc5, 0x42, 0x07, 0xcd, 0x4e, 0xa8, 0x1d, 0x62, 0x44, 0xe4, 0x6f, 0x38, 0x49, 0x00, 0x99, 0x8a, 0x12, 0x91, 0x99, 0xb2, 0x3e, 0xa6, 0x26, 0xd9, 0x2f, 0x4e, 0x50, 0xb0, 0xed, 0xd3, 0x6f, 0xc6, 0xd7, 0x2a, 0xf0, 0xa4, 0x0d, 0x50, 0x0a, 0x69, 0xb9, 0xe8, 0x7f, 0x61, 0x37, 0x98, 0x9e, 0x2d, 0x44, 0x6d, 0xf9, 0x53, 0x92, 0x22, 0xd6, 0xa4, 0x65, 0xf7, 0x85, 0xc0, 0x30, 0x8e, 0xa1, 0xbc, 0x86, 0x5c,
	0xed, 0xfb, 0xfc, 0x34, 0xfc, 0x02, 0x9f, 0xc8, 0x87, 0x2a, 0x68, 0x95, 0x44, 0x7a, 0x7d, 0x88, 0x7f, 0x47, 0xb1, 0x98, 0x46, 0x90, 0xb3, 0xa9, 0xeb, 0x27, 0xd6, 0x33, 0xe1, 0x5f, 0xd9, 0x0b, 0x27, 0x87, 0x43, 0xe9, 0x10, 0xd8, 0x21, 0xa9, 0xa0, 0x3e, 0x30, 0x5f, 0xbc, 0x2d, 0xa6, 0xaa, 0xc4, 0x02, 0x92, 0x8b, 0x1e, 0x43, 0x6d, 0xf8, 0x5c, 0x2a, 0x7b, 0xd6, 0xc8, 0x2c, 0xfb, 0x9f, 0x9c, 0x4b, 0x3d, 0xd6, 0x57, 0xc8, 0xda, 0xe3, 0x19, 0x13, 0x12, 0xea, 0xaa, 0x5e, 0xd6, 0x64, 0xfc, 0x19, 0x9b, 0x0b, 0x31, 0x49, 0x97, 0xe1, 0xc5, 0x27, 0xec, 0x6c, 0xeb, 0xc6, 0xa4, 0xba, 0xf2, 0x7e, 0xe6, 0x5a, 0xc5, 0x98, 0x8f, 0xb0, 0xd3, 0xaf, 0xb7, 0x4a, 0xe4, 0x19, 0xca, 0x0b, 0x2a, 0xad, 0xf2, 0x7a, 0x4a, 0x48, 0xd6, 0x8c, 0xd1, 0xc3, 0x4e, 0xac, 0x19, 0xef, 0x6e, 0x4f,
	0x9f, 0xbe, 0x61, 0xd3, 0x8e, 0xda, 0xbd, 0x91, 0xab, 0x13, 0x42, 0x95, 0xc9, 0x76, 0x6c, 0x87, 0x81, 0x0d, 0x94, 0xe3, 0xad, 0x11, 0xd4, 0xac, 0x8f, 0xac, 0xa7, 0xdf, 0x1b, 0x8a, 0x90, 0xbb, 0xe6, 0xe8, 0x7e, 0x7b, 0xc7, 0xa8, 0xde, 0x37, 0x46, 0x2b, 0xad, 0xd5, 0x7d, 0x83, 0xfd, 0x0f, 0xd8, 0x17, 0xea, 0xe2, 0x34, 0x51, 0x23, 0x60, 0xd0, 0xd4, 0x00, 0x00, 0x00, 0x00, 0x49, 0x45, 0x4e, 0x44, 0xae, 0x42, 0x60, 0x82,
};
