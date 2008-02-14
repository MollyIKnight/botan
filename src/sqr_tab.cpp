/*************************************************
* S-Box and Diffusion Tables for Square          *
* (C) 1999-2008 The Botan Project                *
*************************************************/

#include <botan/square.h>

namespace Botan {

const byte Square::SE[256] = {
0xB1, 0xCE, 0xC3, 0x95, 0x5A, 0xAD, 0xE7, 0x02, 0x4D, 0x44, 0xFB, 0x91, 0x0C,
0x87, 0xA1, 0x50, 0xCB, 0x67, 0x54, 0xDD, 0x46, 0x8F, 0xE1, 0x4E, 0xF0, 0xFD,
0xFC, 0xEB, 0xF9, 0xC4, 0x1A, 0x6E, 0x5E, 0xF5, 0xCC, 0x8D, 0x1C, 0x56, 0x43,
0xFE, 0x07, 0x61, 0xF8, 0x75, 0x59, 0xFF, 0x03, 0x22, 0x8A, 0xD1, 0x13, 0xEE,
0x88, 0x00, 0x0E, 0x34, 0x15, 0x80, 0x94, 0xE3, 0xED, 0xB5, 0x53, 0x23, 0x4B,
0x47, 0x17, 0xA7, 0x90, 0x35, 0xAB, 0xD8, 0xB8, 0xDF, 0x4F, 0x57, 0x9A, 0x92,
0xDB, 0x1B, 0x3C, 0xC8, 0x99, 0x04, 0x8E, 0xE0, 0xD7, 0x7D, 0x85, 0xBB, 0x40,
0x2C, 0x3A, 0x45, 0xF1, 0x42, 0x65, 0x20, 0x41, 0x18, 0x72, 0x25, 0x93, 0x70,
0x36, 0x05, 0xF2, 0x0B, 0xA3, 0x79, 0xEC, 0x08, 0x27, 0x31, 0x32, 0xB6, 0x7C,
0xB0, 0x0A, 0x73, 0x5B, 0x7B, 0xB7, 0x81, 0xD2, 0x0D, 0x6A, 0x26, 0x9E, 0x58,
0x9C, 0x83, 0x74, 0xB3, 0xAC, 0x30, 0x7A, 0x69, 0x77, 0x0F, 0xAE, 0x21, 0xDE,
0xD0, 0x2E, 0x97, 0x10, 0xA4, 0x98, 0xA8, 0xD4, 0x68, 0x2D, 0x62, 0x29, 0x6D,
0x16, 0x49, 0x76, 0xC7, 0xE8, 0xC1, 0x96, 0x37, 0xE5, 0xCA, 0xF4, 0xE9, 0x63,
0x12, 0xC2, 0xA6, 0x14, 0xBC, 0xD3, 0x28, 0xAF, 0x2F, 0xE6, 0x24, 0x52, 0xC6,
0xA0, 0x09, 0xBD, 0x8C, 0xCF, 0x5D, 0x11, 0x5F, 0x01, 0xC5, 0x9F, 0x3D, 0xA2,
0x9B, 0xC9, 0x3B, 0xBE, 0x51, 0x19, 0x1F, 0x3F, 0x5C, 0xB2, 0xEF, 0x4A, 0xCD,
0xBF, 0xBA, 0x6F, 0x64, 0xD9, 0xF3, 0x3E, 0xB4, 0xAA, 0xDC, 0xD5, 0x06, 0xC0,
0x7E, 0xF6, 0x66, 0x6C, 0x84, 0x71, 0x38, 0xB9, 0x1D, 0x7F, 0x9D, 0x48, 0x8B,
0x2A, 0xDA, 0xA5, 0x33, 0x82, 0x39, 0xD6, 0x78, 0x86, 0xFA, 0xE4, 0x2B, 0xA9,
0x1E, 0x89, 0x60, 0x6B, 0xEA, 0x55, 0x4C, 0xF7, 0xE2 };

const byte Square::SD[256] = {
0x35, 0xBE, 0x07, 0x2E, 0x53, 0x69, 0xDB, 0x28, 0x6F, 0xB7, 0x76, 0x6B, 0x0C,
0x7D, 0x36, 0x8B, 0x92, 0xBC, 0xA9, 0x32, 0xAC, 0x38, 0x9C, 0x42, 0x63, 0xC8,
0x1E, 0x4F, 0x24, 0xE5, 0xF7, 0xC9, 0x61, 0x8D, 0x2F, 0x3F, 0xB3, 0x65, 0x7F,
0x70, 0xAF, 0x9A, 0xEA, 0xF5, 0x5B, 0x98, 0x90, 0xB1, 0x87, 0x71, 0x72, 0xED,
0x37, 0x45, 0x68, 0xA3, 0xE3, 0xEF, 0x5C, 0xC5, 0x50, 0xC1, 0xD6, 0xCA, 0x5A,
0x62, 0x5F, 0x26, 0x09, 0x5D, 0x14, 0x41, 0xE8, 0x9D, 0xCE, 0x40, 0xFD, 0x08,
0x17, 0x4A, 0x0F, 0xC7, 0xB4, 0x3E, 0x12, 0xFC, 0x25, 0x4B, 0x81, 0x2C, 0x04,
0x78, 0xCB, 0xBB, 0x20, 0xBD, 0xF9, 0x29, 0x99, 0xA8, 0xD3, 0x60, 0xDF, 0x11,
0x97, 0x89, 0x7E, 0xFA, 0xE0, 0x9B, 0x1F, 0xD2, 0x67, 0xE2, 0x64, 0x77, 0x84,
0x2B, 0x9E, 0x8A, 0xF1, 0x6D, 0x88, 0x79, 0x74, 0x57, 0xDD, 0xE6, 0x39, 0x7B,
0xEE, 0x83, 0xE1, 0x58, 0xF2, 0x0D, 0x34, 0xF8, 0x30, 0xE9, 0xB9, 0x23, 0x54,
0x15, 0x44, 0x0B, 0x4D, 0x66, 0x3A, 0x03, 0xA2, 0x91, 0x94, 0x52, 0x4C, 0xC3,
0x82, 0xE7, 0x80, 0xC0, 0xB6, 0x0E, 0xC2, 0x6C, 0x93, 0xEC, 0xAB, 0x43, 0x95,
0xF6, 0xD8, 0x46, 0x86, 0x05, 0x8C, 0xB0, 0x75, 0x00, 0xCC, 0x85, 0xD7, 0x3D,
0x73, 0x7A, 0x48, 0xE4, 0xD1, 0x59, 0xAD, 0xB8, 0xC6, 0xD0, 0xDC, 0xA1, 0xAA,
0x02, 0x1D, 0xBF, 0xB5, 0x9F, 0x51, 0xC4, 0xA5, 0x10, 0x22, 0xCF, 0x01, 0xBA,
0x8F, 0x31, 0x7C, 0xAE, 0x96, 0xDA, 0xF0, 0x56, 0x47, 0xD4, 0xEB, 0x4E, 0xD9,
0x13, 0x8E, 0x49, 0x55, 0x16, 0xFF, 0x3B, 0xF4, 0xA4, 0xB2, 0x06, 0xA0, 0xA7,
0xFB, 0x1B, 0x6E, 0x3C, 0x33, 0xCD, 0x18, 0x5E, 0x6A, 0xD5, 0xA6, 0x21, 0xDE,
0xFE, 0x2A, 0x1C, 0xF3, 0x0A, 0x1A, 0x19, 0x27, 0x2D };

const byte Square::Log[256] = {
0x00, 0x00, 0x01, 0x86, 0x02, 0x0D, 0x87, 0x4C, 0x03, 0xD2, 0x0E, 0xAE, 0x88,
0x22, 0x4D, 0x93, 0x04, 0x1A, 0xD3, 0xCB, 0x0F, 0x98, 0xAF, 0xA8, 0x89, 0xF0,
0x23, 0x59, 0x4E, 0x35, 0x94, 0x09, 0x05, 0x8F, 0x1B, 0x6E, 0xD4, 0x39, 0xCC,
0xBB, 0x10, 0x68, 0x99, 0x77, 0xB0, 0xDF, 0xA9, 0x72, 0x8A, 0xFA, 0xF1, 0xA0,
0x24, 0x52, 0x5A, 0x60, 0x4F, 0x2F, 0x36, 0xDC, 0x95, 0x32, 0x0A, 0x1F, 0x06,
0xA5, 0x90, 0x49, 0x1C, 0x5D, 0x6F, 0xB8, 0xD5, 0xC1, 0x3A, 0xB5, 0xCD, 0x63,
0xBC, 0x3D, 0x11, 0x44, 0x69, 0x81, 0x9A, 0x27, 0x78, 0xC4, 0xB1, 0xE6, 0xE0,
0xEA, 0xAA, 0x55, 0x73, 0xD8, 0x8B, 0xF6, 0xFB, 0x16, 0xF2, 0xF4, 0xA1, 0x40,
0x25, 0x42, 0x53, 0xE4, 0x5B, 0xA3, 0x61, 0xBF, 0x50, 0xF8, 0x30, 0x2D, 0x37,
0x8D, 0xDD, 0x66, 0x96, 0x18, 0x33, 0xEE, 0x0B, 0xFD, 0x20, 0xD0, 0x07, 0x57,
0xA6, 0xC9, 0x91, 0xAC, 0x4A, 0x84, 0x1D, 0xDA, 0x5E, 0x9E, 0x70, 0x75, 0xB9,
0x6C, 0xD6, 0xE8, 0xC2, 0x7F, 0x3B, 0xB3, 0xB6, 0x47, 0xCE, 0xEC, 0x64, 0x2B,
0xBD, 0xE2, 0x3E, 0x14, 0x12, 0x29, 0x45, 0x7D, 0x6A, 0x9C, 0x82, 0xC7, 0x9B,
0xC6, 0x28, 0x7C, 0x79, 0x7A, 0xC5, 0x7B, 0xB2, 0x46, 0xE7, 0x7E, 0xE1, 0x13,
0xEB, 0x2A, 0xAB, 0x83, 0x56, 0xC8, 0x74, 0x6B, 0xD9, 0x9D, 0x8C, 0x65, 0xF7,
0x2C, 0xFC, 0xCF, 0x17, 0xED, 0xF3, 0x3F, 0xF5, 0x15, 0xA2, 0xBE, 0x41, 0xE3,
0x26, 0xC3, 0x43, 0x80, 0x54, 0xD7, 0xE5, 0xE9, 0x5C, 0xB7, 0xA4, 0x48, 0x62,
0x3C, 0xC0, 0xB4, 0x51, 0x5F, 0xF9, 0x9F, 0x31, 0x1E, 0x2E, 0xDB, 0x38, 0xBA,
0x8E, 0x6D, 0xDE, 0x71, 0x67, 0x76, 0x97, 0xA7, 0x19, 0xCA, 0x34, 0x08, 0xEF,
0x58, 0x0C, 0x4B, 0xFE, 0x85, 0x21, 0x92, 0xD1, 0xAD };

const byte Square::ALog[255] = {
0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80, 0xF5, 0x1F, 0x3E, 0x7C, 0xF8,
0x05, 0x0A, 0x14, 0x28, 0x50, 0xA0, 0xB5, 0x9F, 0xCB, 0x63, 0xC6, 0x79, 0xF2,
0x11, 0x22, 0x44, 0x88, 0xE5, 0x3F, 0x7E, 0xFC, 0x0D, 0x1A, 0x34, 0x68, 0xD0,
0x55, 0xAA, 0xA1, 0xB7, 0x9B, 0xC3, 0x73, 0xE6, 0x39, 0x72, 0xE4, 0x3D, 0x7A,
0xF4, 0x1D, 0x3A, 0x74, 0xE8, 0x25, 0x4A, 0x94, 0xDD, 0x4F, 0x9E, 0xC9, 0x67,
0xCE, 0x69, 0xD2, 0x51, 0xA2, 0xB1, 0x97, 0xDB, 0x43, 0x86, 0xF9, 0x07, 0x0E,
0x1C, 0x38, 0x70, 0xE0, 0x35, 0x6A, 0xD4, 0x5D, 0xBA, 0x81, 0xF7, 0x1B, 0x36,
0x6C, 0xD8, 0x45, 0x8A, 0xE1, 0x37, 0x6E, 0xDC, 0x4D, 0x9A, 0xC1, 0x77, 0xEE,
0x29, 0x52, 0xA4, 0xBD, 0x8F, 0xEB, 0x23, 0x46, 0x8C, 0xED, 0x2F, 0x5E, 0xBC,
0x8D, 0xEF, 0x2B, 0x56, 0xAC, 0xAD, 0xAF, 0xAB, 0xA3, 0xB3, 0x93, 0xD3, 0x53,
0xA6, 0xB9, 0x87, 0xFB, 0x03, 0x06, 0x0C, 0x18, 0x30, 0x60, 0xC0, 0x75, 0xEA,
0x21, 0x42, 0x84, 0xFD, 0x0F, 0x1E, 0x3C, 0x78, 0xF0, 0x15, 0x2A, 0x54, 0xA8,
0xA5, 0xBF, 0x8B, 0xE3, 0x33, 0x66, 0xCC, 0x6D, 0xDA, 0x41, 0x82, 0xF1, 0x17,
0x2E, 0x5C, 0xB8, 0x85, 0xFF, 0x0B, 0x16, 0x2C, 0x58, 0xB0, 0x95, 0xDF, 0x4B,
0x96, 0xD9, 0x47, 0x8E, 0xE9, 0x27, 0x4E, 0x9C, 0xCD, 0x6F, 0xDE, 0x49, 0x92,
0xD1, 0x57, 0xAE, 0xA9, 0xA7, 0xBB, 0x83, 0xF3, 0x13, 0x26, 0x4C, 0x98, 0xC5,
0x7F, 0xFE, 0x09, 0x12, 0x24, 0x48, 0x90, 0xD5, 0x5F, 0xBE, 0x89, 0xE7, 0x3B,
0x76, 0xEC, 0x2D, 0x5A, 0xB4, 0x9D, 0xCF, 0x6B, 0xD6, 0x59, 0xB2, 0x91, 0xD7,
0x5B, 0xB6, 0x99, 0xC7, 0x7B, 0xF6, 0x19, 0x32, 0x64, 0xC8, 0x65, 0xCA, 0x61,
0xC2, 0x71, 0xE2, 0x31, 0x62, 0xC4, 0x7D, 0xFA };

const u32bit Square::TE0[256] = {
0x97B1B126, 0x69CECEA7, 0x73C3C3B0, 0xDF95954A, 0xB45A5AEE, 0xAFADAD02,
0x3BE7E7DC, 0x04020206, 0x9A4D4DD7, 0x884444CC, 0x03FBFBF8, 0xD7919146,
0x180C0C14, 0xFB87877C, 0xB7A1A116, 0xA05050F0, 0x63CBCBA8, 0xCE6767A9,
0xA85454FC, 0x4FDDDD92, 0x8C4646CA, 0xEB8F8F64, 0x37E1E1D6, 0x9C4E4ED2,
0x15F0F0E5, 0x0FFDFDF2, 0x0DFCFCF1, 0x23EBEBC8, 0x07F9F9FE, 0x7DC4C4B9,
0x341A1A2E, 0xDC6E6EB2, 0xBC5E5EE2, 0x1FF5F5EA, 0x6DCCCCA1, 0xEF8D8D62,
0x381C1C24, 0xAC5656FA, 0x864343C5, 0x09FEFEF7, 0x0E070709, 0xC26161A3,
0x05F8F8FD, 0xEA75759F, 0xB25959EB, 0x0BFFFFF4, 0x06030305, 0x44222266,
0xE18A8A6B, 0x57D1D186, 0x26131335, 0x29EEEEC7, 0xE588886D, 0x00000000,
0x1C0E0E12, 0x6834345C, 0x2A15153F, 0xF5808075, 0xDD949449, 0x33E3E3D0,
0x2FEDEDC2, 0x9FB5B52A, 0xA65353F5, 0x46232365, 0x964B4BDD, 0x8E4747C9,
0x2E171739, 0xBBA7A71C, 0xD5909045, 0x6A35355F, 0xA3ABAB08, 0x45D8D89D,
0x85B8B83D, 0x4BDFDF94, 0x9E4F4FD1, 0xAE5757F9, 0xC19A9A5B, 0xD1929243,
0x43DBDB98, 0x361B1B2D, 0x783C3C44, 0x65C8C8AD, 0xC799995E, 0x0804040C,
0xE98E8E67, 0x35E0E0D5, 0x5BD7D78C, 0xFA7D7D87, 0xFF85857A, 0x83BBBB38,
0x804040C0, 0x582C2C74, 0x743A3A4E, 0x8A4545CF, 0x17F1F1E6, 0x844242C6,
0xCA6565AF, 0x40202060, 0x824141C3, 0x30181828, 0xE4727296, 0x4A25256F,
0xD3939340, 0xE0707090, 0x6C36365A, 0x0A05050F, 0x11F2F2E3, 0x160B0B1D,
0xB3A3A310, 0xF279798B, 0x2DECECC1, 0x10080818, 0x4E272769, 0x62313153,
0x64323256, 0x99B6B62F, 0xF87C7C84, 0x95B0B025, 0x140A0A1E, 0xE6737395,
0xB65B5BED, 0xF67B7B8D, 0x9BB7B72C, 0xF7818176, 0x51D2D283, 0x1A0D0D17,
0xD46A6ABE, 0x4C26266A, 0xC99E9E57, 0xB05858E8, 0xCD9C9C51, 0xF3838370,
0xE874749C, 0x93B3B320, 0xADACAC01, 0x60303050, 0xF47A7A8E, 0xD26969BB,
0xEE777799, 0x1E0F0F11, 0xA9AEAE07, 0x42212163, 0x49DEDE97, 0x55D0D085,
0x5C2E2E72, 0xDB97974C, 0x20101030, 0xBDA4A419, 0xC598985D, 0xA5A8A80D,
0x5DD4D489, 0xD06868B8, 0x5A2D2D77, 0xC46262A6, 0x5229297B, 0xDA6D6DB7,
0x2C16163A, 0x924949DB, 0xEC76769A, 0x7BC7C7BC, 0x25E8E8CD, 0x77C1C1B6,
0xD996964F, 0x6E373759, 0x3FE5E5DA, 0x61CACAAB, 0x1DF4F4E9, 0x27E9E9CE,
0xC66363A5, 0x24121236, 0x71C2C2B3, 0xB9A6A61F, 0x2814143C, 0x8DBCBC31,
0x53D3D380, 0x50282878, 0xABAFAF04, 0x5E2F2F71, 0x39E6E6DF, 0x4824246C,
0xA45252F6, 0x79C6C6BF, 0xB5A0A015, 0x1209091B, 0x8FBDBD32, 0xED8C8C61,
0x6BCFCFA4, 0xBA5D5DE7, 0x22111133, 0xBE5F5FE1, 0x02010103, 0x7FC5C5BA,
0xCB9F9F54, 0x7A3D3D47, 0xB1A2A213, 0xC39B9B58, 0x67C9C9AE, 0x763B3B4D,
0x89BEBE37, 0xA25151F3, 0x3219192B, 0x3E1F1F21, 0x7E3F3F41, 0xB85C5CE4,
0x91B2B223, 0x2BEFEFC4, 0x944A4ADE, 0x6FCDCDA2, 0x8BBFBF34, 0x81BABA3B,
0xDE6F6FB1, 0xC86464AC, 0x47D9D99E, 0x13F3F3E0, 0x7C3E3E42, 0x9DB4B429,
0xA1AAAA0B, 0x4DDCDC91, 0x5FD5D58A, 0x0C06060A, 0x75C0C0B5, 0xFC7E7E82,
0x19F6F6EF, 0xCC6666AA, 0xD86C6CB4, 0xFD848479, 0xE2717193, 0x70383848,
0x87B9B93E, 0x3A1D1D27, 0xFE7F7F81, 0xCF9D9D52, 0x904848D8, 0xE38B8B68,
0x542A2A7E, 0x41DADA9B, 0xBFA5A51A, 0x66333355, 0xF1828273, 0x7239394B,
0x59D6D68F, 0xF0787888, 0xF986867F, 0x01FAFAFB, 0x3DE4E4D9, 0x562B2B7D,
0xA7A9A90E, 0x3C1E1E22, 0xE789896E, 0xC06060A0, 0xD66B6BBD, 0x21EAEACB,
0xAA5555FF, 0x984C4CD4, 0x1BF7F7EC, 0x31E2E2D3 };

const u32bit Square::TE1[256] = {
0x2697B1B1, 0xA769CECE, 0xB073C3C3, 0x4ADF9595, 0xEEB45A5A, 0x02AFADAD,
0xDC3BE7E7, 0x06040202, 0xD79A4D4D, 0xCC884444, 0xF803FBFB, 0x46D79191,
0x14180C0C, 0x7CFB8787, 0x16B7A1A1, 0xF0A05050, 0xA863CBCB, 0xA9CE6767,
0xFCA85454, 0x924FDDDD, 0xCA8C4646, 0x64EB8F8F, 0xD637E1E1, 0xD29C4E4E,
0xE515F0F0, 0xF20FFDFD, 0xF10DFCFC, 0xC823EBEB, 0xFE07F9F9, 0xB97DC4C4,
0x2E341A1A, 0xB2DC6E6E, 0xE2BC5E5E, 0xEA1FF5F5, 0xA16DCCCC, 0x62EF8D8D,
0x24381C1C, 0xFAAC5656, 0xC5864343, 0xF709FEFE, 0x090E0707, 0xA3C26161,
0xFD05F8F8, 0x9FEA7575, 0xEBB25959, 0xF40BFFFF, 0x05060303, 0x66442222,
0x6BE18A8A, 0x8657D1D1, 0x35261313, 0xC729EEEE, 0x6DE58888, 0x00000000,
0x121C0E0E, 0x5C683434, 0x3F2A1515, 0x75F58080, 0x49DD9494, 0xD033E3E3,
0xC22FEDED, 0x2A9FB5B5, 0xF5A65353, 0x65462323, 0xDD964B4B, 0xC98E4747,
0x392E1717, 0x1CBBA7A7, 0x45D59090, 0x5F6A3535, 0x08A3ABAB, 0x9D45D8D8,
0x3D85B8B8, 0x944BDFDF, 0xD19E4F4F, 0xF9AE5757, 0x5BC19A9A, 0x43D19292,
0x9843DBDB, 0x2D361B1B, 0x44783C3C, 0xAD65C8C8, 0x5EC79999, 0x0C080404,
0x67E98E8E, 0xD535E0E0, 0x8C5BD7D7, 0x87FA7D7D, 0x7AFF8585, 0x3883BBBB,
0xC0804040, 0x74582C2C, 0x4E743A3A, 0xCF8A4545, 0xE617F1F1, 0xC6844242,
0xAFCA6565, 0x60402020, 0xC3824141, 0x28301818, 0x96E47272, 0x6F4A2525,
0x40D39393, 0x90E07070, 0x5A6C3636, 0x0F0A0505, 0xE311F2F2, 0x1D160B0B,
0x10B3A3A3, 0x8BF27979, 0xC12DECEC, 0x18100808, 0x694E2727, 0x53623131,
0x56643232, 0x2F99B6B6, 0x84F87C7C, 0x2595B0B0, 0x1E140A0A, 0x95E67373,
0xEDB65B5B, 0x8DF67B7B, 0x2C9BB7B7, 0x76F78181, 0x8351D2D2, 0x171A0D0D,
0xBED46A6A, 0x6A4C2626, 0x57C99E9E, 0xE8B05858, 0x51CD9C9C, 0x70F38383,
0x9CE87474, 0x2093B3B3, 0x01ADACAC, 0x50603030, 0x8EF47A7A, 0xBBD26969,
0x99EE7777, 0x111E0F0F, 0x07A9AEAE, 0x63422121, 0x9749DEDE, 0x8555D0D0,
0x725C2E2E, 0x4CDB9797, 0x30201010, 0x19BDA4A4, 0x5DC59898, 0x0DA5A8A8,
0x895DD4D4, 0xB8D06868, 0x775A2D2D, 0xA6C46262, 0x7B522929, 0xB7DA6D6D,
0x3A2C1616, 0xDB924949, 0x9AEC7676, 0xBC7BC7C7, 0xCD25E8E8, 0xB677C1C1,
0x4FD99696, 0x596E3737, 0xDA3FE5E5, 0xAB61CACA, 0xE91DF4F4, 0xCE27E9E9,
0xA5C66363, 0x36241212, 0xB371C2C2, 0x1FB9A6A6, 0x3C281414, 0x318DBCBC,
0x8053D3D3, 0x78502828, 0x04ABAFAF, 0x715E2F2F, 0xDF39E6E6, 0x6C482424,
0xF6A45252, 0xBF79C6C6, 0x15B5A0A0, 0x1B120909, 0x328FBDBD, 0x61ED8C8C,
0xA46BCFCF, 0xE7BA5D5D, 0x33221111, 0xE1BE5F5F, 0x03020101, 0xBA7FC5C5,
0x54CB9F9F, 0x477A3D3D, 0x13B1A2A2, 0x58C39B9B, 0xAE67C9C9, 0x4D763B3B,
0x3789BEBE, 0xF3A25151, 0x2B321919, 0x213E1F1F, 0x417E3F3F, 0xE4B85C5C,
0x2391B2B2, 0xC42BEFEF, 0xDE944A4A, 0xA26FCDCD, 0x348BBFBF, 0x3B81BABA,
0xB1DE6F6F, 0xACC86464, 0x9E47D9D9, 0xE013F3F3, 0x427C3E3E, 0x299DB4B4,
0x0BA1AAAA, 0x914DDCDC, 0x8A5FD5D5, 0x0A0C0606, 0xB575C0C0, 0x82FC7E7E,
0xEF19F6F6, 0xAACC6666, 0xB4D86C6C, 0x79FD8484, 0x93E27171, 0x48703838,
0x3E87B9B9, 0x273A1D1D, 0x81FE7F7F, 0x52CF9D9D, 0xD8904848, 0x68E38B8B,
0x7E542A2A, 0x9B41DADA, 0x1ABFA5A5, 0x55663333, 0x73F18282, 0x4B723939,
0x8F59D6D6, 0x88F07878, 0x7FF98686, 0xFB01FAFA, 0xD93DE4E4, 0x7D562B2B,
0x0EA7A9A9, 0x223C1E1E, 0x6EE78989, 0xA0C06060, 0xBDD66B6B, 0xCB21EAEA,
0xFFAA5555, 0xD4984C4C, 0xEC1BF7F7, 0xD331E2E2 };

const u32bit Square::TE2[256] = {
0xB12697B1, 0xCEA769CE, 0xC3B073C3, 0x954ADF95, 0x5AEEB45A, 0xAD02AFAD,
0xE7DC3BE7, 0x02060402, 0x4DD79A4D, 0x44CC8844, 0xFBF803FB, 0x9146D791,
0x0C14180C, 0x877CFB87, 0xA116B7A1, 0x50F0A050, 0xCBA863CB, 0x67A9CE67,
0x54FCA854, 0xDD924FDD, 0x46CA8C46, 0x8F64EB8F, 0xE1D637E1, 0x4ED29C4E,
0xF0E515F0, 0xFDF20FFD, 0xFCF10DFC, 0xEBC823EB, 0xF9FE07F9, 0xC4B97DC4,
0x1A2E341A, 0x6EB2DC6E, 0x5EE2BC5E, 0xF5EA1FF5, 0xCCA16DCC, 0x8D62EF8D,
0x1C24381C, 0x56FAAC56, 0x43C58643, 0xFEF709FE, 0x07090E07, 0x61A3C261,
0xF8FD05F8, 0x759FEA75, 0x59EBB259, 0xFFF40BFF, 0x03050603, 0x22664422,
0x8A6BE18A, 0xD18657D1, 0x13352613, 0xEEC729EE, 0x886DE588, 0x00000000,
0x0E121C0E, 0x345C6834, 0x153F2A15, 0x8075F580, 0x9449DD94, 0xE3D033E3,
0xEDC22FED, 0xB52A9FB5, 0x53F5A653, 0x23654623, 0x4BDD964B, 0x47C98E47,
0x17392E17, 0xA71CBBA7, 0x9045D590, 0x355F6A35, 0xAB08A3AB, 0xD89D45D8,
0xB83D85B8, 0xDF944BDF, 0x4FD19E4F, 0x57F9AE57, 0x9A5BC19A, 0x9243D192,
0xDB9843DB, 0x1B2D361B, 0x3C44783C, 0xC8AD65C8, 0x995EC799, 0x040C0804,
0x8E67E98E, 0xE0D535E0, 0xD78C5BD7, 0x7D87FA7D, 0x857AFF85, 0xBB3883BB,
0x40C08040, 0x2C74582C, 0x3A4E743A, 0x45CF8A45, 0xF1E617F1, 0x42C68442,
0x65AFCA65, 0x20604020, 0x41C38241, 0x18283018, 0x7296E472, 0x256F4A25,
0x9340D393, 0x7090E070, 0x365A6C36, 0x050F0A05, 0xF2E311F2, 0x0B1D160B,
0xA310B3A3, 0x798BF279, 0xECC12DEC, 0x08181008, 0x27694E27, 0x31536231,
0x32566432, 0xB62F99B6, 0x7C84F87C, 0xB02595B0, 0x0A1E140A, 0x7395E673,
0x5BEDB65B, 0x7B8DF67B, 0xB72C9BB7, 0x8176F781, 0xD28351D2, 0x0D171A0D,
0x6ABED46A, 0x266A4C26, 0x9E57C99E, 0x58E8B058, 0x9C51CD9C, 0x8370F383,
0x749CE874, 0xB32093B3, 0xAC01ADAC, 0x30506030, 0x7A8EF47A, 0x69BBD269,
0x7799EE77, 0x0F111E0F, 0xAE07A9AE, 0x21634221, 0xDE9749DE, 0xD08555D0,
0x2E725C2E, 0x974CDB97, 0x10302010, 0xA419BDA4, 0x985DC598, 0xA80DA5A8,
0xD4895DD4, 0x68B8D068, 0x2D775A2D, 0x62A6C462, 0x297B5229, 0x6DB7DA6D,
0x163A2C16, 0x49DB9249, 0x769AEC76, 0xC7BC7BC7, 0xE8CD25E8, 0xC1B677C1,
0x964FD996, 0x37596E37, 0xE5DA3FE5, 0xCAAB61CA, 0xF4E91DF4, 0xE9CE27E9,
0x63A5C663, 0x12362412, 0xC2B371C2, 0xA61FB9A6, 0x143C2814, 0xBC318DBC,
0xD38053D3, 0x28785028, 0xAF04ABAF, 0x2F715E2F, 0xE6DF39E6, 0x246C4824,
0x52F6A452, 0xC6BF79C6, 0xA015B5A0, 0x091B1209, 0xBD328FBD, 0x8C61ED8C,
0xCFA46BCF, 0x5DE7BA5D, 0x11332211, 0x5FE1BE5F, 0x01030201, 0xC5BA7FC5,
0x9F54CB9F, 0x3D477A3D, 0xA213B1A2, 0x9B58C39B, 0xC9AE67C9, 0x3B4D763B,
0xBE3789BE, 0x51F3A251, 0x192B3219, 0x1F213E1F, 0x3F417E3F, 0x5CE4B85C,
0xB22391B2, 0xEFC42BEF, 0x4ADE944A, 0xCDA26FCD, 0xBF348BBF, 0xBA3B81BA,
0x6FB1DE6F, 0x64ACC864, 0xD99E47D9, 0xF3E013F3, 0x3E427C3E, 0xB4299DB4,
0xAA0BA1AA, 0xDC914DDC, 0xD58A5FD5, 0x060A0C06, 0xC0B575C0, 0x7E82FC7E,
0xF6EF19F6, 0x66AACC66, 0x6CB4D86C, 0x8479FD84, 0x7193E271, 0x38487038,
0xB93E87B9, 0x1D273A1D, 0x7F81FE7F, 0x9D52CF9D, 0x48D89048, 0x8B68E38B,
0x2A7E542A, 0xDA9B41DA, 0xA51ABFA5, 0x33556633, 0x8273F182, 0x394B7239,
0xD68F59D6, 0x7888F078, 0x867FF986, 0xFAFB01FA, 0xE4D93DE4, 0x2B7D562B,
0xA90EA7A9, 0x1E223C1E, 0x896EE789, 0x60A0C060, 0x6BBDD66B, 0xEACB21EA,
0x55FFAA55, 0x4CD4984C, 0xF7EC1BF7, 0xE2D331E2 };

const u32bit Square::TE3[256] = {
0xB1B12697, 0xCECEA769, 0xC3C3B073, 0x95954ADF, 0x5A5AEEB4, 0xADAD02AF,
0xE7E7DC3B, 0x02020604, 0x4D4DD79A, 0x4444CC88, 0xFBFBF803, 0x919146D7,
0x0C0C1418, 0x87877CFB, 0xA1A116B7, 0x5050F0A0, 0xCBCBA863, 0x6767A9CE,
0x5454FCA8, 0xDDDD924F, 0x4646CA8C, 0x8F8F64EB, 0xE1E1D637, 0x4E4ED29C,
0xF0F0E515, 0xFDFDF20F, 0xFCFCF10D, 0xEBEBC823, 0xF9F9FE07, 0xC4C4B97D,
0x1A1A2E34, 0x6E6EB2DC, 0x5E5EE2BC, 0xF5F5EA1F, 0xCCCCA16D, 0x8D8D62EF,
0x1C1C2438, 0x5656FAAC, 0x4343C586, 0xFEFEF709, 0x0707090E, 0x6161A3C2,
0xF8F8FD05, 0x75759FEA, 0x5959EBB2, 0xFFFFF40B, 0x03030506, 0x22226644,
0x8A8A6BE1, 0xD1D18657, 0x13133526, 0xEEEEC729, 0x88886DE5, 0x00000000,
0x0E0E121C, 0x34345C68, 0x15153F2A, 0x808075F5, 0x949449DD, 0xE3E3D033,
0xEDEDC22F, 0xB5B52A9F, 0x5353F5A6, 0x23236546, 0x4B4BDD96, 0x4747C98E,
0x1717392E, 0xA7A71CBB, 0x909045D5, 0x35355F6A, 0xABAB08A3, 0xD8D89D45,
0xB8B83D85, 0xDFDF944B, 0x4F4FD19E, 0x5757F9AE, 0x9A9A5BC1, 0x929243D1,
0xDBDB9843, 0x1B1B2D36, 0x3C3C4478, 0xC8C8AD65, 0x99995EC7, 0x04040C08,
0x8E8E67E9, 0xE0E0D535, 0xD7D78C5B, 0x7D7D87FA, 0x85857AFF, 0xBBBB3883,
0x4040C080, 0x2C2C7458, 0x3A3A4E74, 0x4545CF8A, 0xF1F1E617, 0x4242C684,
0x6565AFCA, 0x20206040, 0x4141C382, 0x18182830, 0x727296E4, 0x25256F4A,
0x939340D3, 0x707090E0, 0x36365A6C, 0x05050F0A, 0xF2F2E311, 0x0B0B1D16,
0xA3A310B3, 0x79798BF2, 0xECECC12D, 0x08081810, 0x2727694E, 0x31315362,
0x32325664, 0xB6B62F99, 0x7C7C84F8, 0xB0B02595, 0x0A0A1E14, 0x737395E6,
0x5B5BEDB6, 0x7B7B8DF6, 0xB7B72C9B, 0x818176F7, 0xD2D28351, 0x0D0D171A,
0x6A6ABED4, 0x26266A4C, 0x9E9E57C9, 0x5858E8B0, 0x9C9C51CD, 0x838370F3,
0x74749CE8, 0xB3B32093, 0xACAC01AD, 0x30305060, 0x7A7A8EF4, 0x6969BBD2,
0x777799EE, 0x0F0F111E, 0xAEAE07A9, 0x21216342, 0xDEDE9749, 0xD0D08555,
0x2E2E725C, 0x97974CDB, 0x10103020, 0xA4A419BD, 0x98985DC5, 0xA8A80DA5,
0xD4D4895D, 0x6868B8D0, 0x2D2D775A, 0x6262A6C4, 0x29297B52, 0x6D6DB7DA,
0x16163A2C, 0x4949DB92, 0x76769AEC, 0xC7C7BC7B, 0xE8E8CD25, 0xC1C1B677,
0x96964FD9, 0x3737596E, 0xE5E5DA3F, 0xCACAAB61, 0xF4F4E91D, 0xE9E9CE27,
0x6363A5C6, 0x12123624, 0xC2C2B371, 0xA6A61FB9, 0x14143C28, 0xBCBC318D,
0xD3D38053, 0x28287850, 0xAFAF04AB, 0x2F2F715E, 0xE6E6DF39, 0x24246C48,
0x5252F6A4, 0xC6C6BF79, 0xA0A015B5, 0x09091B12, 0xBDBD328F, 0x8C8C61ED,
0xCFCFA46B, 0x5D5DE7BA, 0x11113322, 0x5F5FE1BE, 0x01010302, 0xC5C5BA7F,
0x9F9F54CB, 0x3D3D477A, 0xA2A213B1, 0x9B9B58C3, 0xC9C9AE67, 0x3B3B4D76,
0xBEBE3789, 0x5151F3A2, 0x19192B32, 0x1F1F213E, 0x3F3F417E, 0x5C5CE4B8,
0xB2B22391, 0xEFEFC42B, 0x4A4ADE94, 0xCDCDA26F, 0xBFBF348B, 0xBABA3B81,
0x6F6FB1DE, 0x6464ACC8, 0xD9D99E47, 0xF3F3E013, 0x3E3E427C, 0xB4B4299D,
0xAAAA0BA1, 0xDCDC914D, 0xD5D58A5F, 0x06060A0C, 0xC0C0B575, 0x7E7E82FC,
0xF6F6EF19, 0x6666AACC, 0x6C6CB4D8, 0x848479FD, 0x717193E2, 0x38384870,
0xB9B93E87, 0x1D1D273A, 0x7F7F81FE, 0x9D9D52CF, 0x4848D890, 0x8B8B68E3,
0x2A2A7E54, 0xDADA9B41, 0xA5A51ABF, 0x33335566, 0x828273F1, 0x39394B72,
0xD6D68F59, 0x787888F0, 0x86867FF9, 0xFAFAFB01, 0xE4E4D93D, 0x2B2B7D56,
0xA9A90EA7, 0x1E1E223C, 0x89896EE7, 0x6060A0C0, 0x6B6BBDD6, 0xEAEACB21,
0x5555FFAA, 0x4C4CD498, 0xF7F7EC1B, 0xE2E2D331 };

const u32bit Square::TD0[256] = {
0xE368BC02, 0x5585620C, 0x2A3F2331, 0x61AB13F7, 0x98D46D72, 0x21CB9A19,
0x3C22A461, 0x459D3DCD, 0x05FDB423, 0x2BC4075F, 0x9B2C01C0, 0x3DD9800F,
0x486C5C74, 0xF97F7E85, 0xF173AB1F, 0xB6EDDE0E, 0x283C6BED, 0x4997781A,
0x9F2A918D, 0xC9579F33, 0xA907A8AA, 0xA50DED7D, 0x7C422D8F, 0x764DB0C9,
0x4D91E857, 0xCEA963CC, 0xB4EE96D2, 0x3028E1B6, 0x0DF161B9, 0xBD196726,
0x419BAD80, 0xC0A06EC7, 0x5183F241, 0x92DBF034, 0x6FA21EFC, 0x8F32CE4C,
0x13E03373, 0x69A7C66D, 0xE56D6493, 0xBF1A2FFA, 0xBB1CBFB7, 0x587403B5,
0xE76E2C4F, 0x5D89B796, 0xE89C052A, 0x446619A3, 0x342E71FB, 0x0FF22965,
0xFE81827A, 0xB11322F1, 0xA30835EC, 0xCD510F7E, 0xFF7AA614, 0x5C7293F8,
0x2FC29712, 0xF370E3C3, 0x992F491C, 0xD1431568, 0xC2A3261B, 0x88CC32B3,
0x8ACF7A6F, 0xB0E8069F, 0x7A47F51E, 0xD2BB79DA, 0xE6950821, 0x4398E55C,
0xD0B83106, 0x11E37BAF, 0x7E416553, 0xCCAA2B10, 0xD8B4E49C, 0x6456A7D4,
0xFB7C3659, 0x724B2084, 0xEA9F4DF6, 0x6A5FAADF, 0x2DC1DFCE, 0x70486858,
0xCAAFF381, 0x0605D891, 0x5A774B69, 0x94DE28A5, 0x39DF1042, 0x813BC347,
0xFC82CAA6, 0x23C8D2C5, 0x03F86CB2, 0x080CD59A, 0xDAB7AC40, 0x7DB909E1,
0x3824342C, 0xCF5247A2, 0xDCB274D1, 0x63A85B2B, 0x35D55595, 0x479E7511,
0x15E5EBE2, 0x4B9430C6, 0x4A6F14A8, 0x91239C86, 0x4C6ACC39, 0x5F8AFF4A,
0x0406904D, 0xEE99DDBB, 0x1E1152CA, 0xAAFFC418, 0xEB646998, 0x07FEFCFF,
0x8B345E01, 0x567D0EBE, 0xBAE79BD9, 0x4263C132, 0x75B5DC7B, 0x97264417,
0x67AECB66, 0x95250CCB, 0xEC9A9567, 0x57862AD0, 0x60503799, 0xB8E4D305,
0x65AD83BA, 0x19EFAE35, 0xA4F6C913, 0xC15B4AA9, 0x873E1BD6, 0xA0F0595E,
0x18148A5B, 0xAF02703B, 0xAB04E076, 0xDD4950BF, 0xDF4A1863, 0xC6A5B656,
0x853D530A, 0xFA871237, 0x77B694A7, 0x4665517F, 0xED61B109, 0x1BECE6E9,
0xD5458525, 0xF5753B52, 0x7FBA413D, 0x27CE4288, 0xB2EB4E43, 0xD6BDE997,
0x527B9EF3, 0x62537F45, 0x2C3AFBA0, 0x7BBCD170, 0xB91FF76B, 0x121B171D,
0xFD79EEC8, 0x3A277CF0, 0x0C0A45D7, 0x96DD6079, 0x2233F6AB, 0xACFA1C89,
0xC8ACBB5D, 0xA10B7D30, 0xD4BEA14B, 0xBEE10B94, 0x25CD0A54, 0x547E4662,
0xA2F31182, 0x17E6A33E, 0x263566E6, 0xC3580275, 0x83388B9B, 0x7844BDC2,
0x020348DC, 0x4F92A08B, 0x2E39B37C, 0x4E6984E5, 0xF0888F71, 0x362D3927,
0x9CD2FD3F, 0x01FB246E, 0x893716DD, 0x00000000, 0xF68D57E0, 0xE293986C,
0x744EF815, 0x9320D45A, 0xAD0138E7, 0xD3405DB4, 0x1A17C287, 0xB3106A2D,
0x5078D62F, 0xF48E1F3C, 0xA70EA5A1, 0x71B34C36, 0x9AD725AE, 0x5E71DB24,
0x161D8750, 0xEF62F9D5, 0x8D318690, 0x1C121A16, 0xA6F581CF, 0x5B8C6F07,
0x37D61D49, 0x6E593A92, 0x84C67764, 0x86C53FB8, 0xD746CDF9, 0xE090D0B0,
0x29C74F83, 0xE49640FD, 0x0E090D0B, 0x6DA15620, 0x8EC9EA22, 0xDB4C882E,
0xF776738E, 0xB515B2BC, 0x10185FC1, 0x322BA96A, 0x6BA48EB1, 0xAEF95455,
0x406089EE, 0x6655EF08, 0xE9672144, 0x3E21ECBD, 0x2030BE77, 0xF28BC7AD,
0x80C0E729, 0x141ECF8C, 0xBCE24348, 0xC4A6FE8A, 0x31D3C5D8, 0xB716FA60,
0x5380BA9D, 0xD94FC0F2, 0x1DE93E78, 0x24362E3A, 0xE16BF4DE, 0xCB54D7EF,
0x09F7F1F4, 0x82C3AFF5, 0x0BF4B928, 0x9D29D951, 0xC75E9238, 0xF8845AEB,
0x90D8B8E8, 0xDEB13C0D, 0x33D08D04, 0x685CE203, 0xC55DDAE4, 0x3BDC589E,
0x0A0F9D46, 0x3FDAC8D3, 0x598F27DB, 0xA8FC8CC4, 0x79BF99AC, 0x6C5A724E,
0x8CCAA2FE, 0x9ED1B5E3, 0x1FEA76A4, 0x73B004EA };

const u32bit Square::TD1[256] = {
0x02E368BC, 0x0C558562, 0x312A3F23, 0xF761AB13, 0x7298D46D, 0x1921CB9A,
0x613C22A4, 0xCD459D3D, 0x2305FDB4, 0x5F2BC407, 0xC09B2C01, 0x0F3DD980,
0x74486C5C, 0x85F97F7E, 0x1FF173AB, 0x0EB6EDDE, 0xED283C6B, 0x1A499778,
0x8D9F2A91, 0x33C9579F, 0xAAA907A8, 0x7DA50DED, 0x8F7C422D, 0xC9764DB0,
0x574D91E8, 0xCCCEA963, 0xD2B4EE96, 0xB63028E1, 0xB90DF161, 0x26BD1967,
0x80419BAD, 0xC7C0A06E, 0x415183F2, 0x3492DBF0, 0xFC6FA21E, 0x4C8F32CE,
0x7313E033, 0x6D69A7C6, 0x93E56D64, 0xFABF1A2F, 0xB7BB1CBF, 0xB5587403,
0x4FE76E2C, 0x965D89B7, 0x2AE89C05, 0xA3446619, 0xFB342E71, 0x650FF229,
0x7AFE8182, 0xF1B11322, 0xECA30835, 0x7ECD510F, 0x14FF7AA6, 0xF85C7293,
0x122FC297, 0xC3F370E3, 0x1C992F49, 0x68D14315, 0x1BC2A326, 0xB388CC32,
0x6F8ACF7A, 0x9FB0E806, 0x1E7A47F5, 0xDAD2BB79, 0x21E69508, 0x5C4398E5,
0x06D0B831, 0xAF11E37B, 0x537E4165, 0x10CCAA2B, 0x9CD8B4E4, 0xD46456A7,
0x59FB7C36, 0x84724B20, 0xF6EA9F4D, 0xDF6A5FAA, 0xCE2DC1DF, 0x58704868,
0x81CAAFF3, 0x910605D8, 0x695A774B, 0xA594DE28, 0x4239DF10, 0x47813BC3,
0xA6FC82CA, 0xC523C8D2, 0xB203F86C, 0x9A080CD5, 0x40DAB7AC, 0xE17DB909,
0x2C382434, 0xA2CF5247, 0xD1DCB274, 0x2B63A85B, 0x9535D555, 0x11479E75,
0xE215E5EB, 0xC64B9430, 0xA84A6F14, 0x8691239C, 0x394C6ACC, 0x4A5F8AFF,
0x4D040690, 0xBBEE99DD, 0xCA1E1152, 0x18AAFFC4, 0x98EB6469, 0xFF07FEFC,
0x018B345E, 0xBE567D0E, 0xD9BAE79B, 0x324263C1, 0x7B75B5DC, 0x17972644,
0x6667AECB, 0xCB95250C, 0x67EC9A95, 0xD057862A, 0x99605037, 0x05B8E4D3,
0xBA65AD83, 0x3519EFAE, 0x13A4F6C9, 0xA9C15B4A, 0xD6873E1B, 0x5EA0F059,
0x5B18148A, 0x3BAF0270, 0x76AB04E0, 0xBFDD4950, 0x63DF4A18, 0x56C6A5B6,
0x0A853D53, 0x37FA8712, 0xA777B694, 0x7F466551, 0x09ED61B1, 0xE91BECE6,
0x25D54585, 0x52F5753B, 0x3D7FBA41, 0x8827CE42, 0x43B2EB4E, 0x97D6BDE9,
0xF3527B9E, 0x4562537F, 0xA02C3AFB, 0x707BBCD1, 0x6BB91FF7, 0x1D121B17,
0xC8FD79EE, 0xF03A277C, 0xD70C0A45, 0x7996DD60, 0xAB2233F6, 0x89ACFA1C,
0x5DC8ACBB, 0x30A10B7D, 0x4BD4BEA1, 0x94BEE10B, 0x5425CD0A, 0x62547E46,
0x82A2F311, 0x3E17E6A3, 0xE6263566, 0x75C35802, 0x9B83388B, 0xC27844BD,
0xDC020348, 0x8B4F92A0, 0x7C2E39B3, 0xE54E6984, 0x71F0888F, 0x27362D39,
0x3F9CD2FD, 0x6E01FB24, 0xDD893716, 0x00000000, 0xE0F68D57, 0x6CE29398,
0x15744EF8, 0x5A9320D4, 0xE7AD0138, 0xB4D3405D, 0x871A17C2, 0x2DB3106A,
0x2F5078D6, 0x3CF48E1F, 0xA1A70EA5, 0x3671B34C, 0xAE9AD725, 0x245E71DB,
0x50161D87, 0xD5EF62F9, 0x908D3186, 0x161C121A, 0xCFA6F581, 0x075B8C6F,
0x4937D61D, 0x926E593A, 0x6484C677, 0xB886C53F, 0xF9D746CD, 0xB0E090D0,
0x8329C74F, 0xFDE49640, 0x0B0E090D, 0x206DA156, 0x228EC9EA, 0x2EDB4C88,
0x8EF77673, 0xBCB515B2, 0xC110185F, 0x6A322BA9, 0xB16BA48E, 0x55AEF954,
0xEE406089, 0x086655EF, 0x44E96721, 0xBD3E21EC, 0x772030BE, 0xADF28BC7,
0x2980C0E7, 0x8C141ECF, 0x48BCE243, 0x8AC4A6FE, 0xD831D3C5, 0x60B716FA,
0x9D5380BA, 0xF2D94FC0, 0x781DE93E, 0x3A24362E, 0xDEE16BF4, 0xEFCB54D7,
0xF409F7F1, 0xF582C3AF, 0x280BF4B9, 0x519D29D9, 0x38C75E92, 0xEBF8845A,
0xE890D8B8, 0x0DDEB13C, 0x0433D08D, 0x03685CE2, 0xE4C55DDA, 0x9E3BDC58,
0x460A0F9D, 0xD33FDAC8, 0xDB598F27, 0xC4A8FC8C, 0xAC79BF99, 0x4E6C5A72,
0xFE8CCAA2, 0xE39ED1B5, 0xA41FEA76, 0xEA73B004 };

const u32bit Square::TD2[256] = {
0xBC02E368, 0x620C5585, 0x23312A3F, 0x13F761AB, 0x6D7298D4, 0x9A1921CB,
0xA4613C22, 0x3DCD459D, 0xB42305FD, 0x075F2BC4, 0x01C09B2C, 0x800F3DD9,
0x5C74486C, 0x7E85F97F, 0xAB1FF173, 0xDE0EB6ED, 0x6BED283C, 0x781A4997,
0x918D9F2A, 0x9F33C957, 0xA8AAA907, 0xED7DA50D, 0x2D8F7C42, 0xB0C9764D,
0xE8574D91, 0x63CCCEA9, 0x96D2B4EE, 0xE1B63028, 0x61B90DF1, 0x6726BD19,
0xAD80419B, 0x6EC7C0A0, 0xF2415183, 0xF03492DB, 0x1EFC6FA2, 0xCE4C8F32,
0x337313E0, 0xC66D69A7, 0x6493E56D, 0x2FFABF1A, 0xBFB7BB1C, 0x03B55874,
0x2C4FE76E, 0xB7965D89, 0x052AE89C, 0x19A34466, 0x71FB342E, 0x29650FF2,
0x827AFE81, 0x22F1B113, 0x35ECA308, 0x0F7ECD51, 0xA614FF7A, 0x93F85C72,
0x97122FC2, 0xE3C3F370, 0x491C992F, 0x1568D143, 0x261BC2A3, 0x32B388CC,
0x7A6F8ACF, 0x069FB0E8, 0xF51E7A47, 0x79DAD2BB, 0x0821E695, 0xE55C4398,
0x3106D0B8, 0x7BAF11E3, 0x65537E41, 0x2B10CCAA, 0xE49CD8B4, 0xA7D46456,
0x3659FB7C, 0x2084724B, 0x4DF6EA9F, 0xAADF6A5F, 0xDFCE2DC1, 0x68587048,
0xF381CAAF, 0xD8910605, 0x4B695A77, 0x28A594DE, 0x104239DF, 0xC347813B,
0xCAA6FC82, 0xD2C523C8, 0x6CB203F8, 0xD59A080C, 0xAC40DAB7, 0x09E17DB9,
0x342C3824, 0x47A2CF52, 0x74D1DCB2, 0x5B2B63A8, 0x559535D5, 0x7511479E,
0xEBE215E5, 0x30C64B94, 0x14A84A6F, 0x9C869123, 0xCC394C6A, 0xFF4A5F8A,
0x904D0406, 0xDDBBEE99, 0x52CA1E11, 0xC418AAFF, 0x6998EB64, 0xFCFF07FE,
0x5E018B34, 0x0EBE567D, 0x9BD9BAE7, 0xC1324263, 0xDC7B75B5, 0x44179726,
0xCB6667AE, 0x0CCB9525, 0x9567EC9A, 0x2AD05786, 0x37996050, 0xD305B8E4,
0x83BA65AD, 0xAE3519EF, 0xC913A4F6, 0x4AA9C15B, 0x1BD6873E, 0x595EA0F0,
0x8A5B1814, 0x703BAF02, 0xE076AB04, 0x50BFDD49, 0x1863DF4A, 0xB656C6A5,
0x530A853D, 0x1237FA87, 0x94A777B6, 0x517F4665, 0xB109ED61, 0xE6E91BEC,
0x8525D545, 0x3B52F575, 0x413D7FBA, 0x428827CE, 0x4E43B2EB, 0xE997D6BD,
0x9EF3527B, 0x7F456253, 0xFBA02C3A, 0xD1707BBC, 0xF76BB91F, 0x171D121B,
0xEEC8FD79, 0x7CF03A27, 0x45D70C0A, 0x607996DD, 0xF6AB2233, 0x1C89ACFA,
0xBB5DC8AC, 0x7D30A10B, 0xA14BD4BE, 0x0B94BEE1, 0x0A5425CD, 0x4662547E,
0x1182A2F3, 0xA33E17E6, 0x66E62635, 0x0275C358, 0x8B9B8338, 0xBDC27844,
0x48DC0203, 0xA08B4F92, 0xB37C2E39, 0x84E54E69, 0x8F71F088, 0x3927362D,
0xFD3F9CD2, 0x246E01FB, 0x16DD8937, 0x00000000, 0x57E0F68D, 0x986CE293,
0xF815744E, 0xD45A9320, 0x38E7AD01, 0x5DB4D340, 0xC2871A17, 0x6A2DB310,
0xD62F5078, 0x1F3CF48E, 0xA5A1A70E, 0x4C3671B3, 0x25AE9AD7, 0xDB245E71,
0x8750161D, 0xF9D5EF62, 0x86908D31, 0x1A161C12, 0x81CFA6F5, 0x6F075B8C,
0x1D4937D6, 0x3A926E59, 0x776484C6, 0x3FB886C5, 0xCDF9D746, 0xD0B0E090,
0x4F8329C7, 0x40FDE496, 0x0D0B0E09, 0x56206DA1, 0xEA228EC9, 0x882EDB4C,
0x738EF776, 0xB2BCB515, 0x5FC11018, 0xA96A322B, 0x8EB16BA4, 0x5455AEF9,
0x89EE4060, 0xEF086655, 0x2144E967, 0xECBD3E21, 0xBE772030, 0xC7ADF28B,
0xE72980C0, 0xCF8C141E, 0x4348BCE2, 0xFE8AC4A6, 0xC5D831D3, 0xFA60B716,
0xBA9D5380, 0xC0F2D94F, 0x3E781DE9, 0x2E3A2436, 0xF4DEE16B, 0xD7EFCB54,
0xF1F409F7, 0xAFF582C3, 0xB9280BF4, 0xD9519D29, 0x9238C75E, 0x5AEBF884,
0xB8E890D8, 0x3C0DDEB1, 0x8D0433D0, 0xE203685C, 0xDAE4C55D, 0x589E3BDC,
0x9D460A0F, 0xC8D33FDA, 0x27DB598F, 0x8CC4A8FC, 0x99AC79BF, 0x724E6C5A,
0xA2FE8CCA, 0xB5E39ED1, 0x76A41FEA, 0x04EA73B0 };

const u32bit Square::TD3[256] = {
0x68BC02E3, 0x85620C55, 0x3F23312A, 0xAB13F761, 0xD46D7298, 0xCB9A1921,
0x22A4613C, 0x9D3DCD45, 0xFDB42305, 0xC4075F2B, 0x2C01C09B, 0xD9800F3D,
0x6C5C7448, 0x7F7E85F9, 0x73AB1FF1, 0xEDDE0EB6, 0x3C6BED28, 0x97781A49,
0x2A918D9F, 0x579F33C9, 0x07A8AAA9, 0x0DED7DA5, 0x422D8F7C, 0x4DB0C976,
0x91E8574D, 0xA963CCCE, 0xEE96D2B4, 0x28E1B630, 0xF161B90D, 0x196726BD,
0x9BAD8041, 0xA06EC7C0, 0x83F24151, 0xDBF03492, 0xA21EFC6F, 0x32CE4C8F,
0xE0337313, 0xA7C66D69, 0x6D6493E5, 0x1A2FFABF, 0x1CBFB7BB, 0x7403B558,
0x6E2C4FE7, 0x89B7965D, 0x9C052AE8, 0x6619A344, 0x2E71FB34, 0xF229650F,
0x81827AFE, 0x1322F1B1, 0x0835ECA3, 0x510F7ECD, 0x7AA614FF, 0x7293F85C,
0xC297122F, 0x70E3C3F3, 0x2F491C99, 0x431568D1, 0xA3261BC2, 0xCC32B388,
0xCF7A6F8A, 0xE8069FB0, 0x47F51E7A, 0xBB79DAD2, 0x950821E6, 0x98E55C43,
0xB83106D0, 0xE37BAF11, 0x4165537E, 0xAA2B10CC, 0xB4E49CD8, 0x56A7D464,
0x7C3659FB, 0x4B208472, 0x9F4DF6EA, 0x5FAADF6A, 0xC1DFCE2D, 0x48685870,
0xAFF381CA, 0x05D89106, 0x774B695A, 0xDE28A594, 0xDF104239, 0x3BC34781,
0x82CAA6FC, 0xC8D2C523, 0xF86CB203, 0x0CD59A08, 0xB7AC40DA, 0xB909E17D,
0x24342C38, 0x5247A2CF, 0xB274D1DC, 0xA85B2B63, 0xD5559535, 0x9E751147,
0xE5EBE215, 0x9430C64B, 0x6F14A84A, 0x239C8691, 0x6ACC394C, 0x8AFF4A5F,
0x06904D04, 0x99DDBBEE, 0x1152CA1E, 0xFFC418AA, 0x646998EB, 0xFEFCFF07,
0x345E018B, 0x7D0EBE56, 0xE79BD9BA, 0x63C13242, 0xB5DC7B75, 0x26441797,
0xAECB6667, 0x250CCB95, 0x9A9567EC, 0x862AD057, 0x50379960, 0xE4D305B8,
0xAD83BA65, 0xEFAE3519, 0xF6C913A4, 0x5B4AA9C1, 0x3E1BD687, 0xF0595EA0,
0x148A5B18, 0x02703BAF, 0x04E076AB, 0x4950BFDD, 0x4A1863DF, 0xA5B656C6,
0x3D530A85, 0x871237FA, 0xB694A777, 0x65517F46, 0x61B109ED, 0xECE6E91B,
0x458525D5, 0x753B52F5, 0xBA413D7F, 0xCE428827, 0xEB4E43B2, 0xBDE997D6,
0x7B9EF352, 0x537F4562, 0x3AFBA02C, 0xBCD1707B, 0x1FF76BB9, 0x1B171D12,
0x79EEC8FD, 0x277CF03A, 0x0A45D70C, 0xDD607996, 0x33F6AB22, 0xFA1C89AC,
0xACBB5DC8, 0x0B7D30A1, 0xBEA14BD4, 0xE10B94BE, 0xCD0A5425, 0x7E466254,
0xF31182A2, 0xE6A33E17, 0x3566E626, 0x580275C3, 0x388B9B83, 0x44BDC278,
0x0348DC02, 0x92A08B4F, 0x39B37C2E, 0x6984E54E, 0x888F71F0, 0x2D392736,
0xD2FD3F9C, 0xFB246E01, 0x3716DD89, 0x00000000, 0x8D57E0F6, 0x93986CE2,
0x4EF81574, 0x20D45A93, 0x0138E7AD, 0x405DB4D3, 0x17C2871A, 0x106A2DB3,
0x78D62F50, 0x8E1F3CF4, 0x0EA5A1A7, 0xB34C3671, 0xD725AE9A, 0x71DB245E,
0x1D875016, 0x62F9D5EF, 0x3186908D, 0x121A161C, 0xF581CFA6, 0x8C6F075B,
0xD61D4937, 0x593A926E, 0xC6776484, 0xC53FB886, 0x46CDF9D7, 0x90D0B0E0,
0xC74F8329, 0x9640FDE4, 0x090D0B0E, 0xA156206D, 0xC9EA228E, 0x4C882EDB,
0x76738EF7, 0x15B2BCB5, 0x185FC110, 0x2BA96A32, 0xA48EB16B, 0xF95455AE,
0x6089EE40, 0x55EF0866, 0x672144E9, 0x21ECBD3E, 0x30BE7720, 0x8BC7ADF2,
0xC0E72980, 0x1ECF8C14, 0xE24348BC, 0xA6FE8AC4, 0xD3C5D831, 0x16FA60B7,
0x80BA9D53, 0x4FC0F2D9, 0xE93E781D, 0x362E3A24, 0x6BF4DEE1, 0x54D7EFCB,
0xF7F1F409, 0xC3AFF582, 0xF4B9280B, 0x29D9519D, 0x5E9238C7, 0x845AEBF8,
0xD8B8E890, 0xB13C0DDE, 0xD08D0433, 0x5CE20368, 0x5DDAE4C5, 0xDC589E3B,
0x0F9D460A, 0xDAC8D33F, 0x8F27DB59, 0xFC8CC4A8, 0xBF99AC79, 0x5A724E6C,
0xCAA2FE8C, 0xD1B5E39E, 0xEA76A41F, 0xB004EA73 };

}
