#include "global.h"

char sCircleTexDefault[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
    0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x0A, 0x13, 0x13, 0x13,
    0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x13, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C,
    0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x1C, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25,
    0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x25, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E, 0x2E,
    0x2E, 0x2E, 0x2E, 0x2E, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,
    0x38, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x40, 0x4A, 0x4A,
    0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x53, 0x53, 0x53, 0x53, 0x53,
    0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x53, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C,
    0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x5C, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65, 0x65,
    0x65, 0x65, 0x65, 0x65, 0x65, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E, 0x6E,
    0x6E, 0x6E, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x7F,
    0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x7F, 0x89, 0x89, 0x89, 0x89,
    0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x89, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92,
    0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x92, 0x9B, 0x9B, 0x9B, 0x9B, 0x9B, 0x9B, 0x9B, 0x9B, 0x9B, 0x9B,
    0x9B, 0x9B, 0x9B, 0x9B, 0x9B, 0x9B, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4, 0xA4,
    0xA4, 0xA4, 0xA4, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD, 0xAD,
    0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xB7, 0xBF, 0xBF, 0xBF,
    0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xBF, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9,
    0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xC9, 0xD2, 0xD2, 0xD2, 0xD2, 0xD2, 0xD2, 0xD2, 0xD2, 0xD2,
    0xD2, 0xD2, 0xD2, 0xD2, 0xD2, 0xD2, 0xD2, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB, 0xDB,
    0xDB, 0xDB, 0xDB, 0xDB, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4, 0xE4,
    0xE4, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xED, 0xF7, 0xF7,
    0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xF7, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

char sCircleTexWave[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x17, 0x17, 0x17, 0x17, 0x12, 0x02, 0x00, 0x00, 0x00, 0x00, 0x03, 0x08, 0x08, 0x08, 0x07, 0x08,
    0x18, 0x18, 0x18, 0x18, 0x1B, 0x15, 0x07, 0x06, 0x06, 0x06, 0x06, 0x08, 0x07, 0x07, 0x0B, 0x15, 0x18, 0x18, 0x18,
    0x18, 0x1D, 0x1F, 0x17, 0x17, 0x1A, 0x17, 0x10, 0x07, 0x0A, 0x11, 0x1A, 0x20, 0x17, 0x17, 0x17, 0x1B, 0x20, 0x20,
    0x1C, 0x18, 0x18, 0x17, 0x17, 0x0B, 0x19, 0x20, 0x21, 0x20, 0x21, 0x21, 0x1F, 0x1F, 0x1F, 0x20, 0x1C, 0x18, 0x18,
    0x21, 0x2C, 0x2B, 0x23, 0x20, 0x20, 0x20, 0x35, 0x35, 0x34, 0x30, 0x26, 0x24, 0x34, 0x37, 0x31, 0x35, 0x39, 0x3B,
    0x30, 0x20, 0x1F, 0x1F, 0x39, 0x39, 0x39, 0x39, 0x3C, 0x3D, 0x41, 0x42, 0x3F, 0x39, 0x38, 0x38, 0x40, 0x40, 0x3D,
    0x39, 0x38, 0x39, 0x3E, 0x43, 0x47, 0x44, 0x40, 0x40, 0x40, 0x39, 0x38, 0x41, 0x48, 0x49, 0x4D, 0x4F, 0x40, 0x41,
    0x47, 0x48, 0x47, 0x43, 0x3E, 0x3D, 0x3D, 0x3D, 0x41, 0x47, 0x46, 0x4A, 0x50, 0x50, 0x59, 0x54, 0x4C, 0x46, 0x49,
    0x50, 0x50, 0x4C, 0x4E, 0x53, 0x51, 0x51, 0x50, 0x4F, 0x4F, 0x4F, 0x6A, 0x69, 0x61, 0x59, 0x5F, 0x67, 0x6B, 0x69,
    0x6A, 0x6B, 0x64, 0x60, 0x62, 0x5B, 0x57, 0x57, 0x68, 0x68, 0x69, 0x6E, 0x71, 0x6A, 0x68, 0x68, 0x68, 0x68, 0x68,
    0x61, 0x5F, 0x66, 0x6C, 0x6C, 0x68, 0x68, 0x69, 0x70, 0x70, 0x6C, 0x68, 0x68, 0x68, 0x68, 0x68, 0x64, 0x66, 0x6F,
    0x71, 0x71, 0x67, 0x67, 0x6B, 0x6F, 0x6F, 0x6E, 0x6B, 0x68, 0x68, 0x67, 0x67, 0x65, 0x6D, 0x70, 0x70, 0x70, 0x6C,
    0x77, 0x7E, 0x77, 0x74, 0x75, 0x7F, 0x7D, 0x79, 0x6B, 0x6A, 0x6A, 0x70, 0x6D, 0x6E, 0x6E, 0x8E, 0x98, 0x98, 0x98,
    0x95, 0x96, 0x98, 0x98, 0x98, 0x8D, 0x8D, 0x8C, 0x89, 0x7D, 0x7A, 0x78, 0x9C, 0x96, 0x97, 0x97, 0x97, 0x97, 0x97,
    0x97, 0x97, 0x98, 0xA6, 0xA9, 0xAA, 0xA9, 0xA4, 0xA2, 0xAA, 0x9C, 0x96, 0x97, 0x96, 0x96, 0x95, 0x96, 0x98, 0x9E,
    0xA7, 0xA7, 0xA7, 0xA7, 0xAB, 0xB0, 0xB0, 0xAC, 0x9E, 0x96, 0x9C, 0xA5, 0xA7, 0xA5, 0xA4, 0xAC, 0xA6, 0xA7, 0xA7,
    0xA7, 0xAC, 0xAF, 0xAF, 0xB0, 0xB1, 0xA8, 0xAC, 0xB0, 0xB1, 0xB0, 0xB3, 0xBD, 0xB0, 0xA7, 0xA7, 0xA8, 0xAF, 0xAF,
    0xB4, 0xB9, 0xBD, 0xC2, 0xBB, 0xAF, 0xAF, 0xB0, 0xBD, 0xC0, 0xBE, 0xB2, 0xA8, 0xAA, 0xAE, 0xAE, 0xBF, 0xBF, 0xC1,
    0xC7, 0xC7, 0xBC, 0xAF, 0xB7, 0xBE, 0xBF, 0xBF, 0xC0, 0xC6, 0xBD, 0xB3, 0xB1, 0xBE, 0xBE, 0xC5, 0xC7, 0xC7, 0xC7,
    0xC4, 0xC8, 0xC2, 0xBE, 0xC1, 0xCE, 0xD8, 0xD8, 0xD3, 0xD0, 0xC3, 0xC6, 0xC3, 0xC5, 0xC5, 0xD0, 0xE0, 0xDF, 0xD6,
    0xCB, 0xD0, 0xD8, 0xD7, 0xD7, 0xDC, 0xE0, 0xE2, 0xE3, 0xDA, 0xD1, 0xCE, 0xDD, 0xDF, 0xDF, 0xE0, 0xDE, 0xD7, 0xD5,
    0xD6, 0xD6, 0xDE, 0xDF, 0xF2, 0xF1, 0xF2, 0xEB, 0xE6, 0xE1, 0xDF, 0xDD, 0xDF, 0xE8, 0xEB, 0xE3, 0xDF, 0xDF, 0xE1,
    0xDE, 0xF2, 0xEF, 0xEF, 0xF0, 0xEE, 0xEE, 0xEF, 0xF1, 0xEF, 0xF6, 0xF8, 0xF5, 0xF4, 0xF4, 0xF3, 0xED, 0xF7, 0xF3,
    0xF1, 0xF0, 0xF3, 0xF8, 0xF8, 0xF9, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xF8, 0xFF, 0xFF, 0xFE, 0xFE, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

char sCircleTexRipple[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10,
    0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x10, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29,
    0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x29, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A,
    0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37, 0x37,
    0x37, 0x37, 0x37, 0x37, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38, 0x38,
    0x38, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x71, 0x72, 0x72,
    0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x72, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A,
    0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x4A, 0x7A, 0x7A, 0x7A, 0x7A, 0x7A, 0x7A, 0x7A, 0x7A,
    0x7A, 0x7A, 0x7A, 0x7A, 0x7A, 0x7A, 0x7A, 0x7A, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0xAC,
    0xAC, 0xAC, 0xAC, 0xAC, 0xAC, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D, 0x7D,
    0x7D, 0x7D, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0x77, 0xC0,
    0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xC0, 0xBA, 0xBA, 0xBA, 0xBA,
    0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0xBA, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
    0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9,
    0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xB9, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8, 0xE8,
    0xE8, 0xE8, 0xE8, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB, 0xBB,
    0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xB6, 0xEF, 0xEF, 0xEF,
    0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEF, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA,
    0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC,
    0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xCC, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA, 0xEA,
    0xEA, 0xEA, 0xEA, 0xEA, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF2, 0xF6, 0xF6,
    0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xF6, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

char sCircleTexStarburst[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x11, 0x08, 0x02, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x01, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x14, 0x0A, 0x02,
    0x01, 0x00, 0x00, 0x00, 0x06, 0x00, 0x03, 0x00, 0x00, 0x0F, 0x00, 0x00, 0x01, 0x19, 0x0C, 0x04, 0x02, 0x00, 0x00,
    0x00, 0x09, 0x00, 0x05, 0x00, 0x00, 0x14, 0x00, 0x00, 0x03, 0x1E, 0x0D, 0x05, 0x04, 0x00, 0x00, 0x01, 0x0B, 0x00,
    0x08, 0x00, 0x00, 0x1A, 0x00, 0x02, 0x06, 0x23, 0x10, 0x07, 0x07, 0x00, 0x00, 0x01, 0x0E, 0x00, 0x0B, 0x00, 0x00,
    0x21, 0x00, 0x03, 0x09, 0x29, 0x15, 0x09, 0x09, 0x00, 0x00, 0x02, 0x13, 0x00, 0x11, 0x00, 0x00, 0x28, 0x00, 0x05,
    0x0E, 0x2E, 0x18, 0x0B, 0x0A, 0x00, 0x01, 0x04, 0x16, 0x01, 0x16, 0x00, 0x01, 0x2F, 0x00, 0x07, 0x12, 0x35, 0x1D,
    0x0F, 0x0C, 0x00, 0x02, 0x05, 0x1B, 0x02, 0x1C, 0x00, 0x02, 0x38, 0x00, 0x0A, 0x18, 0x3D, 0x23, 0x12, 0x10, 0x01,
    0x02, 0x08, 0x21, 0x02, 0x20, 0x00, 0x03, 0x40, 0x00, 0x0D, 0x1E, 0x47, 0x29, 0x15, 0x15, 0x04, 0x04, 0x0D, 0x27,
    0x04, 0x28, 0x01, 0x04, 0x4A, 0x00, 0x11, 0x25, 0x55, 0x35, 0x1F, 0x1F, 0x0D, 0x0D, 0x17, 0x33, 0x0D, 0x36, 0x08,
    0x0C, 0x58, 0x05, 0x1B, 0x2F, 0x66, 0x42, 0x2D, 0x2E, 0x18, 0x1A, 0x26, 0x43, 0x1A, 0x48, 0x14, 0x17, 0x68, 0x11,
    0x2C, 0x3D, 0x76, 0x51, 0x39, 0x3C, 0x24, 0x28, 0x37, 0x54, 0x28, 0x5C, 0x20, 0x23, 0x74, 0x1C, 0x3D, 0x49, 0x85,
    0x61, 0x44, 0x49, 0x30, 0x38, 0x47, 0x64, 0x38, 0x6F, 0x2E, 0x31, 0x80, 0x29, 0x50, 0x5B, 0x92, 0x71, 0x4E, 0x58,
    0x3C, 0x47, 0x57, 0x74, 0x49, 0x7C, 0x3D, 0x3E, 0x8E, 0x35, 0x63, 0x6E, 0x9D, 0x81, 0x5B, 0x69, 0x49, 0x58, 0x6B,
    0x82, 0x5D, 0x89, 0x4F, 0x4A, 0x9C, 0x43, 0x76, 0x81, 0xA9, 0x91, 0x67, 0x79, 0x56, 0x69, 0x81, 0x90, 0x72, 0x9A,
    0x61, 0x59, 0xA7, 0x51, 0x8B, 0x93, 0xB4, 0xA2, 0x73, 0x88, 0x65, 0x7C, 0x96, 0x9F, 0x88, 0xA9, 0x74, 0x66, 0xB2,
    0x60, 0xA2, 0xA3, 0xBF, 0xB0, 0x7E, 0x96, 0x76, 0x8E, 0xA9, 0xAF, 0x9E, 0xB7, 0x84, 0x74, 0xBC, 0x71, 0xB7, 0xB0,
    0xCA, 0xC0, 0x8D, 0xA8, 0x89, 0xA1, 0xBA, 0xBC, 0xB2, 0xC6, 0x92, 0x85, 0xC6, 0x82, 0xC9, 0xBC, 0xD3, 0xCE, 0x9F,
    0xB6, 0x9E, 0xB3, 0xC9, 0xC9, 0xC5, 0xD3, 0x9E, 0x99, 0xD0, 0x94, 0xD8, 0xC8, 0xDB, 0xD8, 0xB1, 0xC7, 0xB3, 0xC5,
    0xD6, 0xD2, 0xD1, 0xDE, 0xAF, 0xAC, 0xDB, 0xA8, 0xE4, 0xD4, 0xE2, 0xDF, 0xC4, 0xD8, 0xC8, 0xD4, 0xDF, 0xDB, 0xDB,
    0xE4, 0xC4, 0xBF, 0xE5, 0xBB, 0xEC, 0xE0, 0xE7, 0xE5, 0xD9, 0xE8, 0xDA, 0xE1, 0xE9, 0xE7, 0xE6, 0xEC, 0xD9, 0xD4,
    0xEF, 0xCF, 0xF1, 0xE9, 0xED, 0xEA, 0xEB, 0xF2, 0xE6, 0xE8, 0xF2, 0xF1, 0xEE, 0xF4, 0xEB, 0xE6, 0xF7, 0xDD, 0xF6,
    0xF0, 0xF5, 0xF3, 0xF6, 0xF6, 0xF4, 0xF0, 0xF8, 0xF5, 0xF2, 0xFA, 0xF7, 0xF1, 0xFB, 0xE6, 0xFB, 0xF6, 0xFC, 0xFD,
    0xFC, 0xFB, 0xFD, 0xFB, 0xFB, 0xFB, 0xFA, 0xFE, 0xFD, 0xFB, 0xFE, 0xF7, 0xFE, 0xFB, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
    0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
};

Vtx sCircleVtx[] = {
    VTX(-25, 0, 0, 0, 4096, 0xFF, 0xFF, 0xFF, 0xFF),    VTX(-23, 10, 0, 384, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 192, 2048, 0xFF, 0xFF, 0xFF, 0xFF),  VTX(-18, 18, 0, 768, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 576, 2048, 0xFF, 0xFF, 0xFF, 0xFF),  VTX(-10, 23, 0, 1152, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 960, 2048, 0xFF, 0xFF, 0xFF, 0xFF),  VTX(0, 25, 0, 1536, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 1344, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(10, 23, 0, 1920, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 1728, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(18, 18, 0, 2304, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 2112, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(23, 10, 0, 2688, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 2496, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(25, 0, 0, 3072, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 2880, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(23, -10, 0, 3456, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 3264, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(18, -18, 0, 3840, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 3648, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(10, -23, 0, 4224, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 4032, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(0, -25, 0, 4608, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 4416, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(-10, -23, 0, 4992, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 4800, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(-18, -18, 0, 5376, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 5184, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(-23, -10, 0, 5760, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(0, 0, -10, 5568, 2048, 0xFF, 0xFF, 0xFF, 0xFF), VTX(-23, -10, 0, 5760, 4096, 0xFF, 0xFF, 0xFF, 0xFF),
    VTX(-25, 0, 0, 6144, 4096, 0xFF, 0xFF, 0xFF, 0xFF), VTX(0, 0, -10, 5952, 2048, 0xFF, 0xFF, 0xFF, 0xFF),
};

Gfx sCircleDList[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BOTH | G_FOG | G_LIGHTING | G_TEXTURE_GEN |
                          G_TEXTURE_GEN_LINEAR | G_LOD | G_SHADING_SMOOTH),
    gsSPSetGeometryMode(G_SHADE | G_SHADING_SMOOTH),
    gsDPSetOtherMode(G_AD_DISABLE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE |
                         G_TD_CLAMP | G_TP_PERSP | G_CYC_1CYCLE | G_PM_NPRIMITIVE,
                     G_AC_NONE | G_ZS_PIXEL | G_RM_XLU_SURF | G_RM_XLU_SURF2),
    gsDPSetCombineMode(G_CC_BLENDPEDECALA, G_CC_BLENDPEDECALA),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPDisplayList(0x09000000),
    gsSPVertex(sCircleVtx, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(11, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(15, 17, 18, 0, 17, 19, 20, 0),
    gsSP2Triangles(19, 21, 22, 0, 21, 23, 24, 0),
    gsSP2Triangles(23, 25, 26, 0, 25, 27, 28, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&sCircleVtx[31], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

#define THIS ((TransitionCircle*)thisx)

void TransitionCircle_Start(void* thisx) {
    TransitionCircle* this = THIS;

    this->isDone = 0;

    switch (this->effect) {
        case 1:
            this->texture = sCircleTexWave;
            break;
        case 2:
            this->texture = sCircleTexRipple;
            break;
        case 3:
            this->texture = sCircleTexStarburst;
            break;
        default:
            this->texture = sCircleTexDefault;
            break;
    }

    if (this->speed == 0) {
        this->step = 0x14;
    } else {
        this->step = 0xA;
    }

    if (this->typeColor == 0) {
        this->color.rgba = RGBA8(0, 0, 0, 255);
    } else if (this->typeColor == 1) {
        this->color.rgba = RGBA8(160, 160, 160, 255);
    } else if (this->typeColor == 2) {
        // yes, really.
        this->color.r = 100;
        this->color.g = 100;
        this->color.b = 100;
        this->color.a = 255;
    } else {
        this->step = 0x28;
        this->color.rgba = this->effect == 1 ? RGBA8(0, 0, 0, 255) : RGBA8(160, 160, 160, 255);
    }
    if (this->unk_14 != 0) {
        this->texY = 0;
        if (this->typeColor == 3) {
            this->texY = 0xFA;
        }
    } else {
        this->texY = 0x1F4;
        if (this->effect == 2) {
            Audio_PlaySoundGeneral(NA_SE_OC_SECRET_WARP_OUT, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
        }
    }
    guPerspective(&this->projection, &this->normal, 60.0f, (4.0f / 3.0f), 10.0f, 12800.0f, 1.0f);
    guLookAt(&this->lookAt, 0.0f, 0.0f, 400.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
}

void* TransitionCircle_Init(void* thisx) {
    TransitionCircle* this = THIS;

    bzero(this, sizeof(*this));
    return this;
}

void TransitionCircle_Destroy(void* thisx) {
}

void TransitionCircle_Update(void* thisx, s32 updateRate) {
    TransitionCircle* this = THIS;
    s32 temp_t2;
    s32 temp_t3;

    if (this->unk_14 != 0) {
        if (this->texY == 0) {
            if (this->effect == 2) {
                Audio_PlaySoundGeneral(NA_SE_OC_SECRET_WARP_IN, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
            }
        }
        this->texY += this->step * 3 / updateRate;
        if (this->texY >= 0x1F4) {
            this->texY = 0x1F4;
            this->isDone = 1;
        }
    } else {
        this->texY -= this->step * 3 / updateRate;
        if (this->typeColor != 3) {
            if (this->texY <= 0) {
                this->texY = 0;
                this->isDone = 1;
            }
        } else {
            if (this->texY < 0xFB) {
                this->texY = 0xFA;
                this->isDone = 1;
            }
        }
    }
}

void TransitionCircle_Draw(void* thisx, Gfx** gfxP) {
    Gfx* gfx = *gfxP;
    Mtx* modelView;
    TransitionCircle* this = THIS;
    Gfx* texScroll;
    // These variables are a best guess based on the other transition types.
    f32 tPos = 0.0f;
    f32 rot = 0.0f;
    f32 scale = 14.8f;

    modelView = this->modelView[this->frame];

    this->frame ^= 1;
    gDPPipeSync(gfx++);
    texScroll = Gfx_BranchTexScroll(&gfx, this->texX, this->texY, 0x10, 0x40);
    gSPSegment(gfx++, 9, texScroll);
    gSPSegment(gfx++, 8, this->texture);
    gDPSetColor(gfx++, G_SETPRIMCOLOR, this->color.rgba);
    gDPSetColor(gfx++, G_SETENVCOLOR, this->color.rgba);
    gSPMatrix(gfx++, &this->projection, G_MTX_PROJECTION | G_MTX_LOAD);
    gSPPerspNormalize(gfx++, this->normal);
    gSPMatrix(gfx++, &this->lookAt, G_MTX_PROJECTION | G_MTX_NOPUSH | G_MTX_MUL);

    if (scale != 1.0f) {
        guScale(&modelView[0], scale, scale, 1.0f);
        gSPMatrix(gfx++, &modelView[0], G_MTX_LOAD);
    }

    if (rot != 0.0f) {
        guRotate(&modelView[1], rot, 0.0f, 0.0f, 1.0f);
        gSPMatrix(gfx++, &modelView[1], G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    }

    if ((tPos != 0.0f) || (tPos != 0.0f)) {
        guTranslate(&modelView[2], tPos, tPos, 0.0f);
        gSPMatrix(gfx++, &modelView[2], G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW);
    }
    gSPDisplayList(gfx++, sCircleDList);
    gDPPipeSync(gfx++);
    *gfxP = gfx;
}

s32 TransitionCircle_IsDone(void* thisx) {
    TransitionCircle* this = THIS;

    return this->isDone;
}

void TransitionCircle_SetType(void* thisx, s32 type) {
    TransitionCircle* this = THIS;

    if (type & 0x80) {
        this->unk_14 = (type >> 5) & 0x1;
        this->typeColor = (type >> 3) & 0x3;
        this->speed = type & 0x1;
        this->effect = (type >> 1) & 0x3;
    } else if (type == 1) {
        this->unk_14 = 1;
    } else {
        this->unk_14 = 0;
    }
}

void TransitionCircle_SetColor(void* thisx, u32 color) {
    TransitionCircle* this = THIS;

    this->color.rgba = color;
}

void TransitionCircle_SetEnvColor(void* thisx, u32 envColor) {
    TransitionCircle* this = THIS;

    this->envColor.rgba = envColor;
}
