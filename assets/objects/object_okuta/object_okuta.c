#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_okuta.h"

static s16 sOctorokShootAnimFrameData[304];
static JointIndex sOctorokShootAnimJointIndices[38];
static s16 sOctorokDieAnimFrameData[604];
static JointIndex sOctorokDieAnimJointIndices[38];
static s16 sOctorokHideAnimFrameData[102];
static JointIndex sOctorokHideAnimJointIndices[38];
static s16 sOctorokFloatAnimFrameData[276];
static JointIndex sOctorokFloatAnimJointIndices[38];
static Vtx sOctorokSkelVtx_000DF0[4];
static Vtx sOctorokSkelVtx_000E30[9];
static Vtx sOctorokSkelVtx_000EC0[9];
static Vtx sOctorokSkelVtx_000F50[10];
static Vtx sOctorokSkelVtx_000FF0[5];
static Vtx sOctorokSkelVtx_001040[14];
static Vtx sOctorokSkelVtx_001120[6];
static Vtx sOctorokSkelVtx_001180[24];
static Vtx sOctorokSkelVtx_001300[5];
static Vtx sOctorokSkelVtx_001350[8];
static Vtx sOctorokSkelVtx_0013D0[3];
static Vtx sOctorokSkelVtx_001400[5];
static Vtx sOctorokSkelVtx_001450[4];
static Vtx sOctorokSkelVtx_001490[3];
static Vtx sOctorokSkelVtx_0014C0[5];
static Vtx sOctorokSkelVtx_001510[4];
static Vtx sOctorokSkelVtx_001550[3];
static Vtx sOctorokSkelVtx_001580[5];
static Vtx sOctorokSkelVtx_0015D0[4];
static Vtx sOctorokSkelVtx_001610[3];
static Vtx sOctorokSkelVtx_001640[5];
static Vtx sOctorokSkelVtx_001690[4];
static Vtx object_okutaVtx_003350[3];
static void* sOctorokSkelLimbs[37];
static s16 sOctorokHitAnimFrameData[222];
static JointIndex sOctorokHitAnimJointIndices[38];
static s16 sOctorokAppearAnimFrameData[304];
static JointIndex sOctorokAppearAnimJointIndices[38];

static s16 sOctorokShootAnimFrameData[304] = {
    0x0000, 0x4000, 0x6000, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0xFECF, 0xFE36, 0xFE0C, 0xFE5A, 0xFF06, 0xFFB2, 0x0000, 0x0000, 0xF89C, 0xEE00, 0xE5AA, 
    0xE51C, 0x1A4E, 0x1BB2, 0x1A4D, 0x16D9, 0x1210, 0x0CA9, 0x075F, 0x02E9, 0x0000, 0xFEB0, 0xFE52, 0xFE95, 0xFF29, 
    0xFFBD, 0x0000, 0xB630, 0xAFB8, 0xA06B, 0x8E74, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8CB6, 0xBA4C, 0xC648, 0xC876, 0xC60A, 0xC22B, 
    0xC000, 0xC0AE, 0xC29B, 0xC4CF, 0xC650, 0xC628, 0xC35D, 0xBCF8, 0xA66A, 0x83F7, 0x6DE4, 0x723D, 0x827C, 0x8C09, 
    0x1B48, 0x030A, 0xFCAC, 0xFBAF, 0xFD28, 0xFF38, 0x0000, 0xFEAE, 0xFC37, 0xF965, 0xF705, 0xF5E1, 0xF6C6, 0xFA80, 
    0x0A72, 0x2396, 0x3413, 0x3206, 0x27B2, 0x2180, 0x1E38, 0x0351, 0xFC71, 0xFAD8, 0xFBD1, 0xFDFE, 0x0000, 0x016E, 
    0x02E5, 0x0492, 0x06A1, 0x093F, 0x0C97, 0x10D7, 0x1B20, 0x28AF, 0x2DDC, 0x2052, 0x0A37, 0xFE9D, 0xF0A6, 0xC565, 
    0xB9E8, 0xB721, 0xB8C1, 0xBC7A, 0xC000, 0xC2AE, 0xC58D, 0xC8D5, 0xCCBE, 0xD17F, 0xD750, 0xDE6A, 0xED39, 0x00CB, 
    0x0B48, 0x0265, 0xF080, 0xE6BB, 0xE4EC, 0xFCFB, 0x03C2, 0x0622, 0x05DE, 0x039B, 0x0000, 0xFB05, 0xF493, 0xED34, 
    0xE576, 0xDDE4, 0xD70B, 0xD178, 0xCF25, 0xD024, 0xD222, 0xD580, 0xD9F7, 0xDC31, 0xD9B8, 0xFBDD, 0x03C2, 0x048D, 
    0x0288, 0x0030, 0x0000, 0x026D, 0x05E6, 0x09DE, 0x0DC8, 0x1117, 0x133D, 0x13AE, 0x0BB5, 0xFE7B, 0xFA3B, 0x0B25, 
    0x2556, 0x32EE, 0x8CB6, 0xBA4C, 0xC648, 0xC876, 0xC60A, 0xC22B, 0xC000, 0xC0AE, 0xC29B, 0xC4CF, 0xC650, 0xC628, 
    0xC35D, 0xBCF8, 0xA66A, 0x83F7, 0x6DE4, 0x723D, 0x827C, 0x8C09, 0x1B48, 0x030A, 0xFCAC, 0xFBAF, 0xFD28, 0xFF38, 
    0x0000, 0xFEAE, 0xFC37, 0xF965, 0xF705, 0xF5E1, 0xF6C6, 0xFA80, 0x0A72, 0x2396, 0x3413, 0x3206, 0x27B2, 0x2180, 
    0x234B, 0x03E0, 0xFBDE, 0xFA13, 0xFB47, 0xFDCF, 0x0000, 0x016E, 0x02E5, 0x0492, 0x06A1, 0x093F, 0x0C97, 0x10D7, 
    0x1B20, 0x28AF, 0x2DDC, 0x2052, 0x0A37, 0xFE9D, 0xF0A6, 0xC565, 0xB9E8, 0xB721, 0xB8C1, 0xBC7A, 0xC000, 0xC2AE, 
    0xC58D, 0xC8D5, 0xCCBE, 0xD17F, 0xD750, 0xDE6A, 0xED39, 0x00CB, 0x0B48, 0x0265, 0xF080, 0xE6BB, 0xE4EC, 0xFCFB, 
    0x03C2, 0x0622, 0x05DE, 0x039B, 0x0000, 0xFB05, 0xF493, 0xED34, 0xE576, 0xDDE4, 0xD70B, 0xD178, 0xCF25, 0xD024, 
    0xD222, 0xD580, 0xD9F7, 0xDC31, 0xD9B8, 0xFBDD, 0x03C2, 0x048D, 0x0288, 0x0030, 0x0000, 0x026D, 0x05E6, 0x09DE, 
    0x0DC8, 0x1117, 0x133D, 0x13AE, 0x0BB5, 0xFE7B, 0xFA3B, 0x0B25, 0x2556, 0x32EE, 
}; 

static JointIndex sOctorokShootAnimJointIndices[38] = {
    { 0x0000, 0x0004, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0018, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x002C },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0040 },
    { 0x0000, 0x0000, 0x0054 },
    { 0x0000, 0x0000, 0x0068 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x007C },
    { 0x0000, 0x0000, 0x0090 },
    { 0x0000, 0x0000, 0x00A4 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x00B8 },
    { 0x0000, 0x0000, 0x00CC },
    { 0x0000, 0x0000, 0x00E0 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x00F4 },
    { 0x0000, 0x0000, 0x0108 },
    { 0x0000, 0x0000, 0x011C },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gOctorokShootAnim = { { 20 }, sOctorokShootAnimFrameData, sOctorokShootAnimJointIndices, 4 }; 

static u8 unaccounted_000354[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sOctorokDieAnimFrameData[604] = {
    0x0000, 0x4000, 0x6000, 0x2000, 0x0000, 0x0AA6, 0x179F, 0x2276, 0x27AC, 0x2710, 0x23A3, 0x1FFE, 0x1C08, 0x17A8, 
    0x12C3, 0x0D41, 0x0709, 0x0000, 0xFA9B, 0xF88E, 0xF89E, 0xF98E, 0xFA24, 0xFA93, 0xFBA9, 0xFD12, 0xFE7B, 0xFF91, 
    0x0000, 0x0000, 0x01A2, 0x08D8, 0x0000, 0xE388, 0xBFE4, 0x9779, 0x6CAD, 0x41E4, 0x1984, 0xF5F2, 0xD993, 0xC6CB, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0x257C, 0x114F, 
    0xEACC, 0xD2FE, 0xCEE1, 0xCD22, 0xCD4A, 0xCEE5, 0xD17C, 0xD499, 0xD7C7, 0xDA90, 0xDC7F, 0xDD1D, 0xDB1D, 0xD6D4, 
    0xD23D, 0xCF55, 0xD018, 0xD5E8, 0xDF69, 0xEA7D, 0xF507, 0xFCE7, 0x0000, 0x8000, 0x8A3F, 0x9C8D, 0xA443, 0x9B1C, 
    0x8AAF, 0x781C, 0x6883, 0x6106, 0x5FDA, 0x5FB5, 0x6076, 0x61FA, 0x6420, 0x66C7, 0x69CC, 0x6D0F, 0x706D, 0x73C5, 
    0x76F6, 0x79DD, 0x7C5A, 0x7E4B, 0x7F8D, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFF51, 0xFE2D, 0xFDF2, 0x0000, 0x07B5, 0x1303, 0x1B21, 0x194D, 0x1557, 
    0x1557, 0x1557, 0x1557, 0x0000, 0x0038, 0x009F, 0x00D7, 0x00EA, 0x011E, 0x0167, 0x01BB, 0x0210, 0x025B, 0x0293, 
    0x02AD, 0x029E, 0x025C, 0x01DE, 0x0118, 0x0000, 0xFB2D, 0xF2E2, 0xEC96, 0xECBA, 0xEE9C, 0xEE9C, 0xEE9C, 0xEE9C, 
    0xC000, 0xC0E1, 0xC283, 0xC364, 0xC31D, 0xC000, 0xB9E5, 0xB322, 0xAC0A, 0xA4EF, 0x9E24, 0x97FB, 0x92C6, 0x8E43, 
    0x8AC8, 0x8991, 0x8BD9, 0x96C4, 0xA797, 0xB3C1, 0xB124, 0xAB61, 0xAB61, 0xAB61, 0xAB61, 0x0000, 0x0098, 0x01B3, 
    0x024B, 0x021B, 0x0000, 0xFB9A, 0xF666, 0xF0E2, 0xEB8A, 0xE6DB, 0xE354, 0xE171, 0xE27C, 0xE6D4, 0xED91, 0xF5D0, 
    0x02BF, 0x1403, 0x236C, 0x2AC8, 0x24D0, 0x1607, 0x06EC, 0x0000, 0x0000, 0xFE8E, 0xFBDF, 0xFA6D, 0xF9EF, 0x0000, 
    0x1608, 0x3113, 0x3DEE, 0x3AD7, 0x339B, 0x295F, 0x1D4B, 0x1085, 0x0433, 0xF97B, 0xED89, 0xE03D, 0xD6CD, 0xD671, 
    0xF91D, 0x1CFC, 0x192A, 0x095D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFC6, 0xFF53, 0xFEFC, 
    0xFF19, 0x0000, 0x0214, 0x051F, 0x0893, 0x0BE2, 0x0E7D, 0x101B, 0x1119, 0x11E5, 0x12EB, 0x14A9, 0x168F, 0x1773, 
    0x1773, 0x1773, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFB2, 0xFF17, 0xFEA3, 0xFEC9, 0x0000, 0x0382, 
    0x0907, 0x0EBE, 0x12D7, 0x137F, 0x0DC9, 0x030C, 0xF7D7, 0xF0BE, 0xF1CA, 0xF76E, 0xFAD4, 0xFAD4, 0xFAD4, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC063, 0xC128, 0xC1BD, 0xC18B, 0xC000, 0xBB39, 0xB393, 0xABD5, 0xA6C7, 
    0xA731, 0xB1FE, 0xC518, 0xD8C1, 0xE53D, 0xE36B, 0xD96B, 0xD363, 0xD363, 0xD363, 0x0000, 0xFECE, 0xFD9B, 0x0000, 
    0x0A39, 0x188C, 0x22A2, 0x27EE, 0x2CE5, 0x30AD, 0x326C, 0x3149, 0x2C69, 0x1EAC, 0x0863, 0xF0DC, 0xDF68, 0xD88A, 
    0xDF68, 0xF86D, 0x1853, 0x2CD1, 0x2A22, 0x1C0A, 0x138F, 0x0000, 0xFF0E, 0xFE1D, 0x0000, 0x080D, 0x1355, 0x1B4C, 
    0x1FD1, 0x24AD, 0x2934, 0x2CB7, 0x2E88, 0x2DFB, 0x2A60, 0x1CA4, 0x0522, 0xEE52, 0xE2AA, 0xE8E1, 0xFA23, 0x0C98, 
    0x1669, 0x0DFE, 0xFC0A, 0xF226, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0067, 0x0113, 0x0135, 0x0000, 0xFB75, 0xF4CD, 0xF00B, 0xF138, 0xF3A2, 0xF3A2, 0xF3A2, 
    0xF3A2, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0xFF4D, 0xFE22, 0xFDE6, 0x0000, 0x07CA, 0x1341, 0x1BC3, 0x1B1D, 0x180F, 0x180F, 0x180F, 0x180F, 0xC000, 0xC0E1, 
    0xC283, 0xC364, 0xC31D, 0xC000, 0xB9E5, 0xB322, 0xAC0A, 0xA4EF, 0x9E24, 0x97FB, 0x92C6, 0x8E45, 0x8ACF, 0x8999, 
    0x8BD9, 0x9698, 0xA731, 0xB353, 0xB158, 0xAC22, 0xAC22, 0xAC22, 0xAC22, 0x0000, 0x0098, 0x01B3, 0x024B, 0x021B, 
    0x0000, 0xFB9A, 0xF666, 0xF0E2, 0xEB8A, 0xE6DB, 0xE354, 0xE171, 0xE27C, 0xE6D4, 0xED91, 0xF5D0, 0x02BF, 0x1403, 
    0x236C, 0x2AC8, 0x24D0, 0x1607, 0x06EC, 0x0000, 0x0000, 0xFE8E, 0xFBDF, 0xFA6D, 0xF9EF, 0x0000, 0x1608, 0x3113, 
    0x3DEE, 0x3AD7, 0x339B, 0x295F, 0x1D4B, 0x1085, 0x0433, 0xF97B, 0xED89, 0xE03D, 0xD6CD, 0xD671, 0xF91D, 0x1CFC, 
    0x192A, 0x095D, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x002D, 0x0087, 0x00CA, 0x00B4, 0x0000, 
    0xFE88, 0xFC74, 0xF9FC, 0xF757, 0xF4B9, 0xF1DA, 0xEE9B, 0xEB76, 0xE8E5, 0xE72C, 0xE631, 0xE5E2, 0xE5E2, 0xE5E2, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x005F, 0x011D, 0x01AC, 0x017D, 0x0000, 0xFBCD, 0xF53D, 0xEE62, 
    0xE951, 0xE81C, 0xEDFF, 0xF976, 0x0576, 0x0CF2, 0x0B6B, 0x04DB, 0x00F6, 0x00F6, 0x00F6, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC057, 0xC105, 0xC187, 0xC15C, 0xC000, 0xBBA6, 0xB49E, 0xAD95, 0xA936, 0xAA2F, 0xB563, 
    0xC8CC, 0xDCB7, 0xE971, 0xE7E1, 0xDE17, 0xD826, 0xD826, 0xD826, 0x0000, 0xFECE, 0xFD9B, 0x0000, 0x0A39, 0x188C, 
    0x22A2, 0x27EE, 0x2CE5, 0x30AD, 0x326C, 0x3149, 0x2C69, 0x1EAC, 0x0863, 0xF0DC, 0xDF68, 0xD88A, 0xDF68, 0xF86D, 
    0x1853, 0x2CD1, 0x2A22, 0x1C0A, 0x138F, 0x0000, 0xFF0E, 0xFE1D, 0x0000, 0x080D, 0x1355, 0x1B4C, 0x1FD1, 0x24AD, 
    0x2934, 0x2CB7, 0x2E88, 0x2DFB, 0x2A60, 0x1CA4, 0x0522, 0xEE52, 0xE2AA, 0xE8E1, 0xFA23, 0x0C98, 0x1669, 0x0DFE, 
    0xFC0A, 0xF226, 
}; 

static JointIndex sOctorokDieAnimJointIndices[38] = {
    { 0x0000, 0x0004, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x001D, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0036, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x004F },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0068, 0x0081, 0x009A },
    { 0x0000, 0x0000, 0x00B3 },
    { 0x0000, 0x0000, 0x00CC },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x00E5, 0x00FE, 0x0117 },
    { 0x0000, 0x0000, 0x0130 },
    { 0x0000, 0x0000, 0x0149 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0162, 0x017B, 0x0194 },
    { 0x0000, 0x0000, 0x01AD },
    { 0x0000, 0x0000, 0x01C6 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x01DF, 0x01F8, 0x0211 },
    { 0x0000, 0x0000, 0x022A },
    { 0x0000, 0x0000, 0x0243 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gOctorokDieAnim = { { 25 }, sOctorokDieAnimFrameData, sOctorokDieAnimJointIndices, 4 }; 

static u8 unaccounted_00090C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sOctorokHideAnimFrameData[102] = {
    0x0000, 0x4000, 0x6000, 0x2000, 0x0000, 0x0B3B, 0x1388, 0x07B1, 0xF542, 0xE44A, 0xDCD8, 0x8000, 0x9A8D, 0xAEDB, 
    0x5A84, 0x5F07, 0x73AE, 0x8000, 0x8C09, 0xC000, 0xB1C7, 0xB1C7, 0x9F57, 0x8A24, 0x8000, 0x2180, 0x0000, 0x0000, 
    0x0000, 0xF0E9, 0xDF8E, 0xD742, 0xFE9D, 0x0000, 0x0000, 0x0000, 0xF0E9, 0xDF8E, 0xD742, 0xE6BB, 0xC000, 0xC000, 
    0xC000, 0xD7B4, 0xF2F7, 0x0000, 0xDC31, 0x0000, 0x0000, 0x0000, 0x0CD4, 0x1B94, 0x22A2, 0x32EE, 0x0000, 0x0000, 
    0x0000, 0x0CD4, 0x1B94, 0x22A2, 0x8C09, 0xC000, 0xB1C7, 0xB1C7, 0x9F57, 0x8A24, 0x8000, 0x2180, 0x0000, 0x0000, 
    0x0000, 0xF0E9, 0xDF8E, 0xD742, 0xFE9D, 0x0000, 0x0000, 0x0000, 0xF0E9, 0xDF8E, 0xD742, 0xE6BB, 0xC000, 0xC000, 
    0xC000, 0xD7B4, 0xF2F7, 0x0000, 0xDC31, 0x0000, 0x0000, 0x0000, 0x0CD4, 0x1B94, 0x22A2, 0x32EE, 0x0000, 0x0000, 
    0x0000, 0x0CD4, 0x1B94, 0x22A2, 
}; 

static JointIndex sOctorokHideAnimJointIndices[38] = {
    { 0x0000, 0x0004, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x000B },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0012 },
    { 0x0000, 0x0000, 0x0019 },
    { 0x0000, 0x0000, 0x0020 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0027 },
    { 0x0000, 0x0000, 0x002E },
    { 0x0000, 0x0000, 0x0035 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x003C },
    { 0x0000, 0x0000, 0x0043 },
    { 0x0000, 0x0000, 0x004A },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0051 },
    { 0x0000, 0x0000, 0x0058 },
    { 0x0000, 0x0000, 0x005F },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gOctorokHideAnim = { { 7 }, sOctorokHideAnimFrameData, sOctorokHideAnimJointIndices, 4 }; 

static s16 sOctorokFloatAnimFrameData[276] = {
    0x0000, 0x4000, 0x6000, 0x2000, 0x0000, 0x000F, 0x0037, 0x006F, 0x00AF, 0x00EF, 0x0127, 0x014F, 0x015E, 0x014F, 
    0x0127, 0x00EF, 0x00AF, 0x006F, 0x0037, 0x000F, 0x0000, 0x011C, 0x038E, 0x0600, 0x071C, 0x0655, 0x0472, 0x021C, 
    0x0000, 0xFDE4, 0xFB8E, 0xF9AB, 0xF8E4, 0xFA00, 0xFC72, 0xFEE4, 0x0000, 0xFEE4, 0xFC72, 0xFA00, 0xF8E4, 0xF9AB, 
    0xFB8E, 0xFDE4, 0x0000, 0x021C, 0x0472, 0x0655, 0x071C, 0x0600, 0x038E, 0x011C, 0x0000, 0xFBC7, 0xF71C, 0xF355, 
    0xF1C7, 0xF355, 0xF71C, 0xFBC7, 0x0000, 0x0439, 0x08E4, 0x0CAB, 0x0E39, 0x0CAB, 0x08E4, 0x0439, 0x8000, 0x7EEC, 
    0x7C70, 0x7965, 0x76A1, 0x73D4, 0x70B9, 0x6E3A, 0x6D42, 0x6E76, 0x7136, 0x7486, 0x7769, 0x7A17, 0x7CED, 0x7F27, 
    0x8C09, 0x8D63, 0x90F5, 0x9601, 0x9BCA, 0xA192, 0xA69E, 0xAA30, 0xAB8A, 0xAA30, 0xA69E, 0xA192, 0x9BCA, 0x9601, 
    0x90F5, 0x8D63, 0x2180, 0x2514, 0x2180, 0x1810, 0x0AB8, 0xFB6C, 0xEC20, 0xDEC9, 0xD559, 0xD1C4, 0xD559, 0xDEC9, 
    0xEC20, 0xFB6C, 0x0AB8, 0x1810, 0xFE9D, 0xEC4A, 0xDC4C, 0xD0FA, 0xCCAE, 0xD0FA, 0xDC4C, 0xEC4A, 0xFE9D, 0x10EA, 
    0x20D9, 0x2C0F, 0x3035, 0x2BB0, 0x200C, 0x0FAB, 0xE6BB, 0xE3E3, 0xE10B, 0xDE91, 0xDCD0, 0xDC25, 0xDCD0, 0xDE91, 
    0xE10B, 0xE3E3, 0xE6BB, 0xE936, 0xEAF7, 0xEBA1, 0xEAF7, 0xE936, 0xDC31, 0xE992, 0xF8E7, 0x083D, 0x159D, 0x1F14, 
    0x22AA, 0x1F14, 0x159D, 0x083D, 0xF8E7, 0xE992, 0xDC31, 0xD2BB, 0xCF24, 0xD2BB, 0x32EE, 0x2EA8, 0x2365, 0x1379, 
    0x0139, 0xEEF8, 0xDF0C, 0xD3C9, 0xCF84, 0xD3C9, 0xDF0C, 0xEEF8, 0x0139, 0x1379, 0x2365, 0x2EA8, 0x8C09, 0x8D63, 
    0x90F5, 0x9601, 0x9BCA, 0xA192, 0xA69E, 0xAA30, 0xAB8A, 0xAA30, 0xA69E, 0xA192, 0x9BCA, 0x9601, 0x90F5, 0x8D63, 
    0x2180, 0x2514, 0x2180, 0x1810, 0x0AB8, 0xFB6C, 0xEC20, 0xDEC9, 0xD559, 0xD1C4, 0xD559, 0xDEC9, 0xEC20, 0xFB6C, 
    0x0AB8, 0x1810, 0xFE9D, 0xEC4A, 0xDC4C, 0xD0FA, 0xCCAE, 0xD0FA, 0xDC4C, 0xEC4A, 0xFE9D, 0x10EA, 0x20D9, 0x2C0F, 
    0x3035, 0x2BB0, 0x200C, 0x0FAB, 0xE6BB, 0xE3E3, 0xE10B, 0xDE91, 0xDCD0, 0xDC25, 0xDCD0, 0xDE91, 0xE10B, 0xE3E3, 
    0xE6BB, 0xE936, 0xEAF7, 0xEBA1, 0xEAF7, 0xE936, 0xDC31, 0xE992, 0xF8E7, 0x083D, 0x159D, 0x1F14, 0x22AA, 0x1F14, 
    0x159D, 0x083D, 0xF8E7, 0xE992, 0xDC31, 0xD2BB, 0xCF24, 0xD2BB, 0x32EE, 0x2EA8, 0x2365, 0x1379, 0x0139, 0xEEF8, 
    0xDF0C, 0xD3C9, 0xCF84, 0xD3C9, 0xDF0C, 0xEEF8, 0x0139, 0x1379, 0x2365, 0x2EA8, 
}; 

static JointIndex sOctorokFloatAnimJointIndices[38] = {
    { 0x0000, 0x0004, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0014 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0024 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0034, 0x0044 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0054 },
    { 0x0000, 0x0000, 0x0064 },
    { 0x0000, 0x0000, 0x0074 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0084 },
    { 0x0000, 0x0000, 0x0094 },
    { 0x0000, 0x0000, 0x00A4 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x00B4 },
    { 0x0000, 0x0000, 0x00C4 },
    { 0x0000, 0x0000, 0x00D4 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x00E4 },
    { 0x0000, 0x0000, 0x00F4 },
    { 0x0000, 0x0000, 0x0104 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gOctorokFloatAnim = { { 16 }, sOctorokFloatAnimFrameData, sOctorokFloatAnimJointIndices, 4 }; 

static u8 unaccounted_000DEC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx sOctorokSkelVtx_000DF0[4] = {
    VTX(978, -390, -102, 177, -46, 118, 239, 254, 255),
    VTX(0, 1387, -203, -348, 195, 0, 114, 221, 255),
    VTX(0, 372, 1573, 278, 261, 0, 252, 119, 255),
    VTX(-978, -390, -102, 177, -46, 138, 239, 254, 255),
}; 

static Vtx sOctorokSkelVtx_000E30[9] = {
    VTX(-978, -390, -102, 452, 229, 138, 239, 254, 255),
    VTX(0, 1387, -203, 899, -143, 0, 114, 221, 255),
    VTX(0, -390, -1472, 121, -168, 0, 212, 145, 255),
    VTX(978, -390, -102, 452, 229, 118, 239, 254, 255),
    VTX(0, 372, 1573, 453, -183, 0, 252, 119, 255),
    VTX(-978, -390, -102, 515, 340, 138, 239, 254, 255),
    VTX(0, -1252, 203, 250, 448, 0, 138, 20, 255),
    VTX(0, -1252, 203, 296, 484, 0, 138, 20, 255),
    VTX(978, -390, -102, 515, 340, 118, 239, 254, 255),
}; 

static Vtx sOctorokSkelVtx_000EC0[9] = {
    VTX(-2, 2960, 1040, 128, -128, 0, 30, 116, 255),
    VTX(-621, 2080, 880, -4, 247, 216, 230, 109, 255),
    VTX(665, 2080, 880, 270, 247, 49, 218, 102, 255),
    VTX(-621, 2080, 880, 250, 256, 216, 230, 109, 255),
    VTX(-1541, 2900, 771, 131, -117, 145, 246, 42, 255),
    VTX(-1174, 2540, -398, 0, 256, 144, 32, 230, 255),
    VTX(1174, 2540, -398, 0, 256, 111, 33, 228, 255),
    VTX(1541, 2900, 771, 140, -117, 112, 248, 41, 255),
    VTX(665, 2080, 880, 268, 256, 49, 218, 102, 255),
}; 

static Vtx sOctorokSkelVtx_000F50[10] = {
    VTX(-901, 3740, 900, 252, -98, 255, 255, 255, 255),
    VTX(-903, 3060, 1340, 207, 188, 255, 255, 255, 255),
    VTX(-2, 2960, 1040, 551, 259, 255, 255, 255, 255),
    VTX(-621, 2080, 880, 254, 610, 255, 255, 255, 255),
    VTX(-1541, 2900, 771, -51, 235, 255, 255, 255, 255),
    VTX(1541, 2900, 771, -45, 260, 255, 255, 255, 255),
    VTX(903, 3060, 1340, 214, 192, 255, 255, 255, 255),
    VTX(665, 2080, 880, 260, 610, 255, 255, 255, 255),
    VTX(-2, 2960, 1040, 566, 235, 255, 255, 255, 255),
    VTX(901, 3740, 900, 249, -98, 255, 255, 255, 255),
}; 

static Vtx sOctorokSkelVtx_000FF0[5] = {
    VTX(1024, -440, 80, 277, 155, 41, 159, 56, 255),
    VTX(-501, 600, 1280, 60, 10, 196, 226, 98, 255),
    VTX(-1024, -440, 80, -14, 155, 204, 160, 47, 255),
    VTX(501, 600, 1280, 203, 10, 60, 250, 103, 255),
    VTX(0, -960, -1640, 131, 305, 0, 151, 198, 255),
}; 

static Vtx sOctorokSkelVtx_001040[14] = {
    VTX(0, -960, -1640, -68, 512, 0, 151, 198, 255),
    VTX(0, 720, -2320, -22, 99, 255, 20, 138, 255),
    VTX(2118, 900, -699, 288, 90, 117, 237, 239, 255),
    VTX(-52, 3040, -1520, 415, 544, 255, 88, 176, 255),
    VTX(1174, 2540, -398, 556, 419, 111, 33, 228, 255),
    VTX(0, 720, -2320, 275, -241, 255, 20, 138, 255),
    VTX(-2118, 900, -699, 288, 90, 139, 237, 239, 255),
    VTX(-1024, -440, 80, 254, 534, 204, 160, 47, 255),
    VTX(-501, 600, 1280, 503, 512, 196, 226, 98, 255),
    VTX(1174, 2540, -398, 420, -65, 111, 33, 228, 255),
    VTX(-1174, 2540, -398, 420, -65, 144, 32, 230, 255),
    VTX(1024, -440, 80, 254, 534, 41, 159, 56, 255),
    VTX(501, 600, 1280, 503, 512, 60, 250, 103, 255),
    VTX(-1174, 2540, -398, 556, 419, 144, 32, 230, 255),
}; 

static Vtx sOctorokSkelVtx_001120[6] = {
    VTX(501, 600, 1280, 372, 520, 60, 250, 103, 255),
    VTX(1174, 2540, -398, 544, -137, 111, 33, 228, 255),
    VTX(665, 2080, 880, 396, 22, 49, 218, 102, 255),
    VTX(-1174, 2540, -398, -57, -137, 144, 32, 230, 255),
    VTX(-501, 600, 1280, 115, 520, 196, 226, 98, 255),
    VTX(-621, 2080, 880, 101, 22, 216, 230, 109, 255),
}; 

static Vtx sOctorokSkelVtx_001180[24] = {
    VTX(-903, 3060, 1340, 588, 588, 233, 4, 117, 255),
    VTX(-901, 3740, 900, 492, 63, 206, 106, 24, 255),
    VTX(-1541, 2900, 771, 35, 437, 145, 246, 42, 255),
    VTX(-901, 3740, 900, 122, 107, 206, 106, 24, 255),
    VTX(-1174, 2540, -398, 384, 448, 144, 32, 230, 255),
    VTX(-1541, 2900, 771, 90, 449, 145, 246, 42, 255),
    VTX(-901, 3740, 900, -19, 447, 206, 106, 24, 255),
    VTX(-2, 2960, 1040, 561, 783, 0, 30, 116, 255),
    VTX(0, 3840, 54, 345, 87, 1, 119, 15, 255),
    VTX(-52, 3040, -1520, -9, 485, 255, 88, 176, 255),
    VTX(-1174, 2540, -398, 354, 462, 144, 32, 230, 255),
    VTX(-901, 3740, 900, 335, 23, 206, 106, 24, 255),
    VTX(0, 3840, 54, 104, 123, 1, 119, 15, 255),
    VTX(901, 3740, 900, 335, 23, 50, 106, 23, 255),
    VTX(1174, 2540, -398, 354, 462, 111, 33, 228, 255),
    VTX(0, 3840, 54, 334, 108, 1, 119, 15, 255),
    VTX(-2, 2960, 1040, 580, 753, 0, 30, 116, 255),
    VTX(901, 3740, 900, -54, 452, 50, 106, 23, 255),
    VTX(1541, 2900, 771, 90, 449, 112, 248, 41, 255),
    VTX(1174, 2540, -398, 384, 448, 111, 33, 228, 255),
    VTX(901, 3740, 900, 122, 107, 50, 106, 23, 255),
    VTX(1541, 2900, 771, 35, 437, 112, 248, 41, 255),
    VTX(901, 3740, 900, 492, 63, 50, 106, 23, 255),
    VTX(903, 3060, 1340, 588, 588, 23, 4, 117, 255),
}; 

static Vtx sOctorokSkelVtx_001300[5] = {
    VTX(1480, 160, 773, 539, 312, 76, 17, 91, 255),
    VTX(1480, -787, 458, 424, -34, 30, 162, 67, 255),
    VTX(1480, -787, -459, 88, -34, 79, 182, 206, 255),
    VTX(1480, 160, -826, -46, 312, 46, 19, 147, 255),
    VTX(1480, 806, 0, 256, 549, 40, 113, 2, 255),
}; 

static Vtx sOctorokSkelVtx_001350[8] = {
    VTX(1480, -787, 458, 277, 376, 30, 162, 67, 255),
    VTX(1480, 160, 773, 126, 357, 76, 17, 91, 255),
    VTX(-280, -271, 0, 262, -105, 168, 176, 1, 255),
    VTX(1480, -787, -459, 277, 376, 79, 182, 206, 255),
    VTX(1480, 160, -826, 126, 357, 46, 19, 147, 255),
    VTX(-280, 271, 0, 176, -115, 179, 91, 2, 255),
    VTX(1480, -787, -459, 277, 376, 79, 182, 206, 255),
    VTX(1480, 806, 0, 24, 345, 40, 113, 2, 255),
}; 

static Vtx sOctorokSkelVtx_0013D0[3] = {
    VTX(0, 0, 1500, -196, 0, 0, 136, 0, 255),
    VTX(0, 0, -1500, 708, 0, 0, 136, 0, 255),
    VTX(2300, 0, 0, 256, 654, 0, 136, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001400[5] = {
    VTX(0, 0, -480, 0, 1024, 0, 136, 0, 255),
    VTX(1312, 0, 891, 512, 0, 0, 136, 0, 255),
    VTX(0, 0, 480, 512, 1024, 0, 136, 0, 255),
    VTX(1312, 0, -892, 0, 0, 0, 136, 0, 255),
    VTX(1312, 0, -50, 256, 0, 0, 136, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001450[4] = {
    VTX(0, 0, -480, 0, 0, 0, 136, 0, 255),
    VTX(1312, 0, 480, 512, 1024, 0, 136, 0, 255),
    VTX(0, 0, 480, 512, 0, 0, 136, 0, 255),
    VTX(1312, 0, -480, 0, 1024, 0, 136, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001490[3] = {
    VTX(2300, 0, 0, 256, 654, 0, 120, 0, 255),
    VTX(0, 0, -1500, 708, 0, 0, 120, 0, 255),
    VTX(0, 0, 1500, -196, 0, 0, 120, 0, 255),
}; 

static Vtx sOctorokSkelVtx_0014C0[5] = {
    VTX(0, 0, 480, 512, 1024, 0, 120, 0, 255),
    VTX(1312, 0, 891, 512, 0, 0, 120, 0, 255),
    VTX(0, 0, -480, 0, 1024, 0, 120, 0, 255),
    VTX(1312, 0, -50, 256, 0, 0, 120, 0, 255),
    VTX(1312, 0, -892, 0, 0, 0, 120, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001510[4] = {
    VTX(0, 0, 480, 512, 0, 0, 120, 0, 255),
    VTX(1312, 0, 480, 512, 1024, 0, 120, 0, 255),
    VTX(0, 0, -480, 0, 0, 0, 120, 0, 255),
    VTX(1312, 0, -480, 0, 1024, 0, 120, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001550[3] = {
    VTX(2300, 0, 0, 256, 654, 0, 120, 0, 255),
    VTX(0, 0, -1500, 708, 0, 0, 120, 0, 255),
    VTX(0, 0, 1500, -196, 0, 0, 120, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001580[5] = {
    VTX(0, 0, 480, 512, 1024, 0, 120, 0, 255),
    VTX(1312, 0, 891, 512, 0, 0, 120, 0, 255),
    VTX(0, 0, -480, 0, 1024, 0, 120, 0, 255),
    VTX(1312, 0, -50, 256, 0, 0, 120, 0, 255),
    VTX(1312, 0, -892, 0, 0, 0, 120, 0, 255),
}; 

static Vtx sOctorokSkelVtx_0015D0[4] = {
    VTX(0, 0, 480, 512, 0, 0, 120, 0, 255),
    VTX(1312, 0, 480, 512, 1024, 0, 120, 0, 255),
    VTX(0, 0, -480, 0, 0, 0, 120, 0, 255),
    VTX(1312, 0, -480, 0, 1024, 0, 120, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001610[3] = {
    VTX(0, 0, 1500, -196, 0, 0, 136, 0, 255),
    VTX(0, 0, -1500, 708, 0, 0, 136, 0, 255),
    VTX(2300, 0, 0, 256, 654, 0, 136, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001640[5] = {
    VTX(0, 0, -480, 0, 1024, 0, 136, 0, 255),
    VTX(1312, 0, 891, 512, 0, 0, 136, 0, 255),
    VTX(0, 0, 480, 512, 1024, 0, 136, 0, 255),
    VTX(1312, 0, -892, 0, 0, 0, 136, 0, 255),
    VTX(1312, 0, -50, 256, 0, 0, 136, 0, 255),
}; 

static Vtx sOctorokSkelVtx_001690[4] = {
    VTX(0, 0, -480, 0, 0, 0, 136, 0, 255),
    VTX(1312, 0, -480, 0, 1024, 0, 136, 0, 255),
    VTX(1312, 0, 480, 512, 1024, 0, 136, 0, 255),
    VTX(0, 0, 480, 512, 0, 0, 136, 0, 255),
}; 

Gfx sOctorokSkelLimbDL_0016D0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokFadeToBlackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_000DF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOctorokRoughSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sOctorokSkelVtx_000E30[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 2, 3, 7, 0),
    gsSP2Triangles(6, 8, 4, 0, 7, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_0017C0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokFadeToBlackTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_000EC0[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOctorokEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(&sOctorokSkelVtx_000F50[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 1, 3, 2, 0),
    gsSP2Triangles(8, 6, 9, 0, 8, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOctorokSnoutConnectionTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&sOctorokSkelVtx_000FF0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOctorokScalesTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sOctorokSkelVtx_001040[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 9, 2, 0),
    gsSP2Triangles(6, 10, 1, 0, 8, 10, 6, 0),
    gsSP2Triangles(0, 7, 6, 0, 6, 1, 0, 0),
    gsSP2Triangles(2, 11, 0, 0, 12, 11, 2, 0),
    gsSP2Triangles(5, 13, 3, 0, 2, 9, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOctorokStripesTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sOctorokSkelVtx_001120[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 5, 0, 2, 5, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOctorokRoughSkinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sOctorokSkelVtx_001180[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 12, 13, 9, 0),
    gsSP2Triangles(13, 14, 9, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001A70[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokMouthTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001300[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(3, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gOctorokStripesTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sOctorokSkelVtx_001350[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 2, 5, 0, 2, 4, 6, 0),
    gsSP2Triangles(1, 7, 5, 0, 1, 5, 2, 0),
    gsSP1Triangle(5, 7, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001B70[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokFinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_0013D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001C00[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokArmTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001400[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP1Triangle(0, 4, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001C98[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokArmTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001450[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001D28[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokFinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001490[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001DB8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokArmTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_0014C0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001E50[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokArmTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001510[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001EE0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokFinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001550[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_001F70[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokArmTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001580[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_002008[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokArmTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_0015D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_002098[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokFinTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001610[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_002128[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokArmTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001640[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP1Triangle(0, 4, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx sOctorokSkelLimbDL_0021C0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokArmTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR |
                         G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sOctorokSkelVtx_001690[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gOctorokRoughSkinTex[] = {
#include "assets/objects/object_okuta/rough_skin.rgb5a1.inc.c"
};

u64 gOctorokStripesTex[] = {
#include "assets/objects/object_okuta/stripes.rgb5a1.inc.c"
};

u64 gOctorokScalesTex[] = {
#include "assets/objects/object_okuta/scales.rgb5a1.inc.c"
};

u64 gOctorokSnoutConnectionTex[] = {
#include "assets/objects/object_okuta/snout_connection.rgb5a1.inc.c"
};

u64 gOctorokMouthTex[] = {
#include "assets/objects/object_okuta/mouth.rgb5a1.inc.c"
};

u64 gOctorokArmTex[] = {
#include "assets/objects/object_okuta/arm.rgb5a1.inc.c"
};

u64 gOctorokFinTex[] = {
#include "assets/objects/object_okuta/fin.rgb5a1.inc.c"
};

u64 gOctorokEyeTex[] = {
#include "assets/objects/object_okuta/eye.rgb5a1.inc.c"
};

u64 gOctorokFadeToBlackTex[] = {
#include "assets/objects/object_okuta/fade_to_black.rgb5a1.inc.c"
};

u64 gOctorokProjectileTex[] = {
#include "assets/objects/object_okuta/projectile.rgb5a1.inc.c"
};

static Vtx object_okutaVtx_003350[3] = {
    VTX(-2000, -1250, 0, -138, 502, 255, 255, 255, 255),
    VTX(2000, -1250, 0, 650, 502, 255, 255, 255, 255),
    VTX(0, 3000, 0, 256, -335, 255, 255, 255, 255),
}; 

Gfx gOctorokProjectileDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gOctorokProjectileTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_okutaVtx_003350[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

StandardLimb sOctorokSkelLimb_003410 = { 
    { 0, 0, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sOctorokSkelLimb_00341C = { 
    { 0, 0, 0 },
    0x02, 0xFF,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003428 = { 
    { 0, 520, -280 },
    0x03, 0x05,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003434 = { 
    { 0, 0, 0 },
    0x04, 0xFF,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003440 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_0017C0
}; 

StandardLimb sOctorokSkelLimb_00344C = { 
    { 0, 200, 480 },
    0x06, 0x08,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003458 = { 
    { 0, 0, 0 },
    0x07, 0xFF,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003464 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001A70
}; 

StandardLimb sOctorokSkelLimb_003470 = { 
    { 320, -600, 160 },
    0x09, 0x0F,
    NULL
}; 

StandardLimb sOctorokSkelLimb_00347C = { 
    { 0, 0, 0 },
    0x0A, 0xFF,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003488 = { 
    { 1312, 0, 0 },
    0x0B, 0x0E,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003494 = { 
    { 1312, 0, 0 },
    0x0C, 0x0D,
    NULL
}; 

StandardLimb sOctorokSkelLimb_0034A0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001B70
}; 

StandardLimb sOctorokSkelLimb_0034AC = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001C00
}; 

StandardLimb sOctorokSkelLimb_0034B8 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001C98
}; 

StandardLimb sOctorokSkelLimb_0034C4 = { 
    { -320, -600, 160 },
    0x10, 0x16,
    NULL
}; 

StandardLimb sOctorokSkelLimb_0034D0 = { 
    { 0, 0, 0 },
    0x11, 0xFF,
    NULL
}; 

StandardLimb sOctorokSkelLimb_0034DC = { 
    { 1312, 0, 0 },
    0x12, 0x15,
    NULL
}; 

StandardLimb sOctorokSkelLimb_0034E8 = { 
    { 1312, 0, 0 },
    0x13, 0x14,
    NULL
}; 

StandardLimb sOctorokSkelLimb_0034F4 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001EE0
}; 

StandardLimb sOctorokSkelLimb_003500 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001F70
}; 

StandardLimb sOctorokSkelLimb_00350C = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_002008
}; 

StandardLimb sOctorokSkelLimb_003518 = { 
    { -320, -600, 160 },
    0x17, 0x1D,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003524 = { 
    { 0, 0, 0 },
    0x18, 0xFF,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003530 = { 
    { 1312, 0, 0 },
    0x19, 0x1C,
    NULL
}; 

StandardLimb sOctorokSkelLimb_00353C = { 
    { 1312, 0, 0 },
    0x1A, 0x1B,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003548 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_002098
}; 

StandardLimb sOctorokSkelLimb_003554 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_002128
}; 

StandardLimb sOctorokSkelLimb_003560 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_0021C0
}; 

StandardLimb sOctorokSkelLimb_00356C = { 
    { 320, -600, 160 },
    0x1E, 0x24,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003578 = { 
    { 0, 0, 0 },
    0x1F, 0xFF,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003584 = { 
    { 1312, 0, 0 },
    0x20, 0x23,
    NULL
}; 

StandardLimb sOctorokSkelLimb_003590 = { 
    { 1312, 0, 0 },
    0x21, 0x22,
    NULL
}; 

StandardLimb sOctorokSkelLimb_00359C = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001D28
}; 

StandardLimb sOctorokSkelLimb_0035A8 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001DB8
}; 

StandardLimb sOctorokSkelLimb_0035B4 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_001E50
}; 

StandardLimb sOctorokSkelLimb_0035C0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sOctorokSkelLimbDL_0016D0
}; 

static void* sOctorokSkelLimbs[37] = {
    &sOctorokSkelLimb_003410,
    &sOctorokSkelLimb_00341C,
    &sOctorokSkelLimb_003428,
    &sOctorokSkelLimb_003434,
    &sOctorokSkelLimb_003440,
    &sOctorokSkelLimb_00344C,
    &sOctorokSkelLimb_003458,
    &sOctorokSkelLimb_003464,
    &sOctorokSkelLimb_003470,
    &sOctorokSkelLimb_00347C,
    &sOctorokSkelLimb_003488,
    &sOctorokSkelLimb_003494,
    &sOctorokSkelLimb_0034A0,
    &sOctorokSkelLimb_0034AC,
    &sOctorokSkelLimb_0034B8,
    &sOctorokSkelLimb_0034C4,
    &sOctorokSkelLimb_0034D0,
    &sOctorokSkelLimb_0034DC,
    &sOctorokSkelLimb_0034E8,
    &sOctorokSkelLimb_0034F4,
    &sOctorokSkelLimb_003500,
    &sOctorokSkelLimb_00350C,
    &sOctorokSkelLimb_003518,
    &sOctorokSkelLimb_003524,
    &sOctorokSkelLimb_003530,
    &sOctorokSkelLimb_00353C,
    &sOctorokSkelLimb_003548,
    &sOctorokSkelLimb_003554,
    &sOctorokSkelLimb_003560,
    &sOctorokSkelLimb_00356C,
    &sOctorokSkelLimb_003578,
    &sOctorokSkelLimb_003584,
    &sOctorokSkelLimb_003590,
    &sOctorokSkelLimb_00359C,
    &sOctorokSkelLimb_0035A8,
    &sOctorokSkelLimb_0035B4,
    &sOctorokSkelLimb_0035C0,
}; 

SkeletonHeader gOctorokSkel = { sOctorokSkelLimbs, 37 }; 

static u8 unaccounted_003668[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sOctorokHitAnimFrameData[222] = {
    0x0000, 0x4000, 0x8000, 0x6000, 0x2000, 0x0000, 0x01F4, 0xFE0C, 0x01F4, 0xFE70, 0x012C, 0xFED4, 0xFFB7, 0x00C8, 
    0x00AF, 0x0041, 0x0000, 0x0000, 0x03E8, 0x0459, 0x0493, 0x049E, 0x0480, 0x0441, 0x03E8, 0x0314, 0x01C2, 0x008A, 
    0x0000, 0x0000, 0x001F, 0x0036, 0x0045, 0x004E, 0x0050, 0x004C, 0x0044, 0x0038, 0x0028, 0x0015, 0x0000, 0x0000, 
    0xFF9D, 0xFEAE, 0xFD87, 0xFC7B, 0xFBE0, 0xFC0B, 0xFD4E, 0x0000, 0x0B99, 0x1D74, 0x26B5, 0x0000, 0x111D, 0xF00C, 
    0x0E2C, 0xF1A9, 0x0D92, 0xF539, 0x0BAC, 0x0469, 0xFAC3, 0xFCA7, 0x0000, 0x0000, 0x0FE4, 0xF14B, 0x118C, 0xF314, 
    0x082F, 0xF61E, 0x03A8, 0x10C1, 0x0D4A, 0x04C9, 0x0000, 0x8C09, 0xA429, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xB4A2, 0xA321, 0x9312, 0x8C09, 0x2180, 0x10C0, 0x0000, 0x0126, 0x043A, 0x08AF, 0x0DF8, 0x1388, 0x18D1, 
    0x1D46, 0x205A, 0x2180, 0xFE9D, 0xFF4E, 0x0000, 0xFFF4, 0xFFD3, 0xFFA4, 0xFF6C, 0xFF31, 0xFEF9, 0xFECA, 0xFEA9, 
    0xFE9D, 0xE6BB, 0xD4BF, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC879, 0xD584, 0xE17C, 0xE6BB, 0xDC31, 
    0xEE19, 0x0000, 0xFEC6, 0xFB7B, 0xF6B7, 0xF111, 0xEB20, 0xE57A, 0xE0B6, 0xDD6B, 0xDC31, 0x32EE, 0x1977, 0x0000, 
    0x01BF, 0x066D, 0x0D34, 0x153D, 0x1DB1, 0x25BA, 0x2C81, 0x312F, 0x32EE, 0x8C09, 0xA429, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xB4A2, 0xA321, 0x9312, 0x8C09, 0x2180, 0x10C0, 0x0000, 0x0126, 0x043A, 0x08AF, 0x0DF8, 
    0x1388, 0x18D1, 0x1D46, 0x205A, 0x2180, 0xFE9D, 0xFF4E, 0x0000, 0xFFF4, 0xFFD3, 0xFFA4, 0xFF6C, 0xFF31, 0xFEF9, 
    0xFECA, 0xFEA9, 0xFE9D, 0xE6BB, 0xD4BF, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC879, 0xD584, 0xE17C, 
    0xE6BB, 0xDC31, 0xEE19, 0x0000, 0xFEC6, 0xFB7B, 0xF6B7, 0xF111, 0xEB20, 0xE57A, 0xE0B6, 0xDD6B, 0xDC31, 0x32EE, 
    0x1977, 0x0000, 0x01BF, 0x066D, 0x0D34, 0x153D, 0x1DB1, 0x25BA, 0x2C81, 0x312F, 0x32EE, 0x0000, 
}; 

static JointIndex sOctorokHitAnimJointIndices[38] = {
    { 0x0005, 0x0011, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x001D, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0029, 0x0000, 0x0035 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0041, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x004D },
    { 0x0000, 0x0000, 0x0059 },
    { 0x0000, 0x0000, 0x0065 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0071 },
    { 0x0000, 0x0000, 0x007D },
    { 0x0000, 0x0000, 0x0089 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0004, 0x0000 },
    { 0x0000, 0x0000, 0x0095 },
    { 0x0000, 0x0000, 0x00A1 },
    { 0x0000, 0x0000, 0x00AD },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0004, 0x0000 },
    { 0x0000, 0x0000, 0x00B9 },
    { 0x0000, 0x0000, 0x00C5 },
    { 0x0000, 0x0000, 0x00D1 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gOctorokHitAnim = { { 12 }, sOctorokHitAnimFrameData, sOctorokHitAnimJointIndices, 5 }; 

static s16 sOctorokAppearAnimFrameData[304] = {
    0x0000, 0x4000, 0x6000, 0x2000, 0xDCD8, 0xE29C, 0xF11E, 0x042F, 0x17A0, 0x2740, 0x2EE0, 0x2ECE, 0x2AD5, 0x2402, 
    0x1B65, 0x120A, 0x0900, 0x0156, 0xFC18, 0xFA26, 0xFAD2, 0xFCDC, 0xFF01, 0x0000, 0xD3FF, 0xB850, 0xB7FD, 0xBB50, 
    0xC141, 0xC8C6, 0xD2AF, 0xDF28, 0xEC33, 0xF7CF, 0x0000, 0x0345, 0x02E8, 0x0117, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0xB630, 0xB709, 0xB88A, 0xB926, 0xB74F, 0xB177, 0xA547, 0x93C7, 0x807C, 0x6EEB, 0x6296, 0x64E4, 
    0x7173, 0x846F, 0x9279, 0x91E2, 0x8D78, 0x8780, 0x8241, 0x8000, 0x9326, 0x95AB, 0x9C22, 0xA4EC, 0xAE69, 0xB6F7, 
    0xBCF8, 0xBF52, 0xBF0F, 0xBDC1, 0xBCF8, 0xC043, 0xBCF8, 0xAA83, 0x9256, 0x7BB5, 0x6DE4, 0x7299, 0x82AB, 0x8C09, 
    0xC897, 0xCB98, 0xD34F, 0xDDCD, 0xE920, 0xF356, 0xFA80, 0xFD4F, 0xFCFF, 0xFB6F, 0xFA80, 0xF81A, 0xFA80, 0x07D9, 
    0x194D, 0x29BE, 0x3413, 0x31BC, 0x278E, 0x2180, 0xD671, 0xD9F5, 0xE2FC, 0xEF43, 0xFC82, 0x0875, 0x10D7, 0x1420, 
    0x13C2, 0x11EF, 0x10D7, 0x0FA1, 0x10D7, 0x1895, 0x2312, 0x2BB2, 0x2DDC, 0x2074, 0x0A49, 0xFE9D, 0xEE13, 0xED21, 
    0xEAB5, 0xE76B, 0xE3DD, 0xE0A9, 0xDE6A, 0xDD88, 0xDDA1, 0xDE1E, 0xDE6A, 0xDC8B, 0xDE6A, 0xE968, 0xF7FE, 0x0501, 
    0x0B48, 0x0255, 0xF078, 0xE6BB, 0x1C1D, 0x179F, 0x0C14, 0xFC63, 0xEB74, 0xDC2E, 0xD178, 0xCD45, 0xCDBC, 0xD011, 
    0xD178, 0xD171, 0xD178, 0xD159, 0xD117, 0xD130, 0xD222, 0xD56C, 0xD9ED, 0xDC31, 0x1CEE, 0x1C5F, 0x1AF1, 0x18FF, 
    0x16E6, 0x1502, 0x13AE, 0x1329, 0x1337, 0x1381, 0x13AE, 0x14BD, 0x13AE, 0x0C7B, 0x029A, 0xFAE7, 0xFA3B, 0x0AEA, 
    0x2539, 0x32EE, 0x9326, 0x95AB, 0x9C22, 0xA4EC, 0xAE69, 0xB6F7, 0xBCF8, 0xBF52, 0xBF0F, 0xBDC1, 0xBCF8, 0xC043, 
    0xBCF8, 0xAA83, 0x9256, 0x7BB5, 0x6DE4, 0x7299, 0x82AB, 0x8C09, 0xC897, 0xCB98, 0xD34F, 0xDDCD, 0xE920, 0xF356, 
    0xFA80, 0xFD4F, 0xFCFF, 0xFB6F, 0xFA80, 0xF81A, 0xFA80, 0x07D9, 0x194D, 0x29BE, 0x3413, 0x31BC, 0x278E, 0x2180, 
    0xD671, 0xD9F5, 0xE2FC, 0xEF43, 0xFC82, 0x0875, 0x10D7, 0x1420, 0x13C2, 0x11EF, 0x10D7, 0x0FA1, 0x10D7, 0x1895, 
    0x2312, 0x2BB2, 0x2DDC, 0x2074, 0x0A49, 0xFE9D, 0xEE13, 0xED21, 0xEAB5, 0xE76B, 0xE3DD, 0xE0A9, 0xDE6A, 0xDD88, 
    0xDDA1, 0xDE1E, 0xDE6A, 0xDC8B, 0xDE6A, 0xE968, 0xF7FE, 0x0501, 0x0B48, 0x0255, 0xF078, 0xE6BB, 0x1C1D, 0x179F, 
    0x0C14, 0xFC63, 0xEB74, 0xDC2E, 0xD178, 0xCD45, 0xCDBC, 0xD011, 0xD178, 0xD171, 0xD178, 0xD159, 0xD117, 0xD130, 
    0xD222, 0xD56C, 0xD9ED, 0xDC31, 0x1CEE, 0x1C5F, 0x1AF1, 0x18FF, 0x16E6, 0x1502, 0x13AE, 0x1329, 0x1337, 0x1381, 
    0x13AE, 0x14BD, 0x13AE, 0x0C7B, 0x029A, 0xFAE7, 0xFA3B, 0x0AEA, 0x2539, 0x32EE, 
}; 

static JointIndex sOctorokAppearAnimJointIndices[38] = {
    { 0x0000, 0x0004, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0018, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x002C },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0040 },
    { 0x0000, 0x0000, 0x0054 },
    { 0x0000, 0x0000, 0x0068 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x007C },
    { 0x0000, 0x0000, 0x0090 },
    { 0x0000, 0x0000, 0x00A4 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x00B8 },
    { 0x0000, 0x0000, 0x00CC },
    { 0x0000, 0x0000, 0x00E0 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x00F4 },
    { 0x0000, 0x0000, 0x0108 },
    { 0x0000, 0x0000, 0x011C },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gOctorokAppearAnim = { { 20 }, sOctorokAppearAnimFrameData, sOctorokAppearAnimJointIndices, 4 }; 

static u8 unaccounted_003C74[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


