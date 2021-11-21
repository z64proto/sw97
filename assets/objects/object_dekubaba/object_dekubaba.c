#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_dekubaba.h"

static s16 sDekuBabaPauseChompAnimFrameData[236];
static JointIndex sDekuBabaPauseChompAnimJointIndices[8];
static s16 sDekuBabaFastChompAnimFrameData[52];
static JointIndex sDekuBabaFastChompAnimJointIndices[8];
static Vtx object_dekubabaVtx_0002D0[11];
static Vtx object_dekubabaVtx_000380[32];
static Vtx object_dekubabaVtx_0006A8[18];
static Vtx object_dekubabaVtx_0007C8[26];
static Vtx object_dekubabaVtx_000968[32];
static Vtx object_dekubabaVtx_000D00[9];
static Vtx object_dekubabaVtx_000D90[54];
static Vtx object_dekubabaVtx_001230[12];
static Vtx object_dekubabaVtx_0012F0[4];
static Vtx object_dekubabaVtx_0013E8[24];
static Vtx object_dekubabaVtx_001568[12];
static Vtx object_dekubabaVtx_001728[16];
static void* sDekuBabaSkelLimbs[7];
static Vtx object_dekubabaVtx_002A50[82];
static Vtx object_dekubabaVtx_002F70[16];

static s16 sDekuBabaPauseChompAnimFrameData[236] = {
    0x0000, 0x4000, 0xF9DC, 0x2E13, 0x2D0A, 0x2A67, 0x26DC, 0x2319, 0x1FD0, 0x1C99, 0x1921, 0x163C, 0x14BF, 0x148E, 
    0x14E6, 0x15A0, 0x1696, 0x179F, 0x1897, 0x1955, 0x19B3, 0x19D4, 0x19F3, 0x1A10, 0x1A2B, 0x1A45, 0x1A5D, 0x1A72, 
    0x1A86, 0x1A97, 0x1AA7, 0x1AB4, 0x1ABF, 0x1AC7, 0x1ACD, 0x1AD1, 0x1AD2, 0x1AD0, 0x1ACC, 0x1AC5, 0x1ABB, 0x1AAF, 
    0x1A9F, 0x1A8D, 0x1A77, 0x1A5F, 0x1A43, 0x1A24, 0x1A02, 0x19DC, 0x19B3, 0x1957, 0x18A8, 0x17BF, 0x16B4, 0x159F, 
    0x149A, 0x13BD, 0x1320, 0x12DC, 0x1309, 0x1381, 0x140C, 0x14A8, 0x1554, 0x160F, 0x16D7, 0x17AB, 0x188A, 0x1971, 
    0x1A60, 0x1B55, 0x1C4F, 0x1D4D, 0x1E4C, 0x1F4C, 0x204B, 0x2148, 0x2242, 0x2336, 0x2424, 0x250A, 0x25E7, 0x26B9, 
    0x277F, 0x2838, 0x28E2, 0x297B, 0x2A03, 0x2A78, 0x2ABD, 0x2ABE, 0x2A87, 0x2A20, 0x2994, 0x28EF, 0x283A, 0x277F, 
    0x26C9, 0x2623, 0x2597, 0x252F, 0x24F6, 0x24F6, 0x252F, 0x2597, 0x2625, 0x26D3, 0x2799, 0x2870, 0x294F, 0x2A30, 
    0x2B0B, 0x2BD9, 0x2C92, 0x2D2F, 0x2DA9, 0x2DF7, 0x2E13, 0x3A4C, 0x3A35, 0x39F7, 0x399D, 0x3930, 0x38BA, 0x3845, 
    0x37DC, 0x3789, 0x3755, 0x374A, 0x3773, 0x37DA, 0x39D4, 0x3D82, 0x411C, 0x42DA, 0x4297, 0x418D, 0x4000, 0x3E3A, 
    0x3C80, 0x3B19, 0x3A4C, 0x3A00, 0x39E7, 0x39F7, 0x3A25, 0x3A6A, 0x3ABA, 0x3B0B, 0x3B55, 0x3B8E, 0x3BAB, 0x3BA3, 
    0x3B6C, 0x3AFD, 0x3A4C, 0x388E, 0x3578, 0x31BB, 0x2E0A, 0x2B18, 0x2997, 0x291C, 0x28C2, 0x2887, 0x2869, 0x2864, 
    0x2875, 0x289B, 0x28D1, 0x2916, 0x2967, 0x29C0, 0x2A20, 0x2A83, 0x2AE7, 0x2B48, 0x2BA5, 0x2BFA, 0x2C44, 0x2C82, 
    0x2CC6, 0x2D21, 0x2D8B, 0x2DFB, 0x2E68, 0x2EC9, 0x2F17, 0x2F48, 0x2F65, 0x2F7C, 0x2F8D, 0x2F9B, 0x2FA4, 0x2FA9, 
    0x2FAC, 0x2FAC, 0x2FAB, 0x2FA9, 0x2FA5, 0x2FA2, 0x2FA0, 0x2F9F, 0x2F9F, 0x2FA2, 0x2FA8, 0x2FB1, 0x2FBF, 0x2FD1, 
    0x2FE8, 0x3005, 0x3029, 0x3053, 0x3086, 0x30C0, 0x310C, 0x3170, 0x31E9, 0x3274, 0x330D, 0x33B1, 0x345E, 0x350F, 
    0x35C2, 0x3673, 0x371F, 0x37C3, 0x385C, 0x38E6, 0x395E, 0x39C1, 0x3A0C, 0x3A3B, 0x3A4C, 0x0000, 
}; 

static JointIndex sDekuBabaPauseChompAnimJointIndices[8] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0002, 0x0001 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0002, 0x0001 },
    { 0x0000, 0x0000, 0x0077 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuBabaPauseChompAnim = { { 116 }, sDekuBabaPauseChompAnimFrameData, sDekuBabaPauseChompAnimJointIndices, 3 }; 

static u8 unaccounted_000218[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sDekuBabaFastChompAnimFrameData[52] = {
    0x0000, 0x4000, 0xF9DC, 0x37DA, 0x35BC, 0x308B, 0x2A01, 0x23DA, 0x1FD0, 0x1DD8, 0x1CCC, 0x1CBB, 0x1DB7, 0x1FD0, 
    0x2A12, 0x328E, 0x2F7A, 0x2960, 0x2253, 0x1C68, 0x19B3, 0x1AED, 0x1E9F, 0x2395, 0x289C, 0x2C82, 0x2E13, 0x37DA, 
    0x37CC, 0x37A9, 0x3777, 0x373D, 0x3704, 0x36D2, 0x36AE, 0x36A1, 0x36B1, 0x36E5, 0x3746, 0x37DA, 0x39EA, 0x3D96, 
    0x4123, 0x42DA, 0x428B, 0x4162, 0x3FB4, 0x3DD4, 0x3C15, 0x3ACC, 0x3A4C, 0x0000, 
}; 

static JointIndex sDekuBabaFastChompAnimJointIndices[8] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0002, 0x0001 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0002, 0x0001 },
    { 0x0000, 0x0000, 0x001B },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDekuBabaFastChompAnim = { { 24 }, sDekuBabaFastChompAnimFrameData, sDekuBabaFastChompAnimJointIndices, 3 }; 

static u8 unaccounted_0002C8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_dekubabaVtx_0002D0[11] = {
    VTX(-401, 16, 0, 910, 1555, 138, 235, 0, 255),
    VTX(772, -523, 0, 167, 1015, 238, 138, 0, 255),
    VTX(648, 192, 632, 1169, 632, 229, 176, 85, 255),
    VTX(1194, 221, 774, 1132, 243, 14, 170, 82, 255),
    VTX(1466, -386, 0, 80, 564, 43, 144, 0, 255),
    VTX(1676, 286, 591, 929, 10, 39, 175, 78, 255),
    VTX(2179, -49, 0, 144, 42, 51, 148, 0, 255),
    VTX(1676, 286, -591, 929, 10, 39, 175, 178, 255),
    VTX(1194, 221, -774, 1132, 243, 14, 170, 174, 255),
    VTX(648, 192, -632, 1169, 632, 229, 176, 171, 255),
    VTX(-401, 16, 0, 910, 1555, 138, 235, 0, 255),
}; 

static Vtx object_dekubabaVtx_000380[32] = {
    VTX(223, 1024, -289, 1473, 48, 209, 78, 179, 255),
    VTX(1949, 955, 0, 71, 16, 59, 104, 0, 255),
    VTX(1789, 223, -956, 170, 1056, 37, 75, 171, 255),
    VTX(1949, 955, 0, 492, 8, 59, 104, 0, 255),
    VTX(2423, 25, 0, 67, 1014, 106, 54, 0, 255),
    VTX(1789, 223, -956, 1077, 994, 37, 75, 171, 255),
    VTX(1789, 223, 956, 1077, 994, 37, 75, 85, 255),
    VTX(1949, 955, 0, 600, -596, 59, 104, 0, 255),
    VTX(223, 1024, -289, 384, 755, 209, 78, 179, 255),
    VTX(223, 1024, 289, 820, 660, 209, 78, 77, 255),
    VTX(223, 1024, 289, 696, 5, 209, 78, 77, 255),
    VTX(223, 1024, -289, -195, 8, 209, 78, 179, 255),
    VTX(-401, 16, 0, 293, 1020, 138, 235, 0, 255),
    VTX(223, 1024, 289, 354, 87, 209, 78, 77, 255),
    VTX(-401, 16, 0, 1208, 958, 138, 235, 0, 255),
    VTX(276, -382, 626, 58, 1024, 189, 21, 97, 255),
    VTX(1789, 223, 956, 170, 1056, 37, 75, 85, 255),
    VTX(223, 1024, 289, 1473, 48, 209, 78, 77, 255),
    VTX(223, 1024, 289, 798, 54, 209, 78, 77, 255),
    VTX(1032, 21, 980, 629, 997, 219, 43, 105, 255),
    VTX(1789, 223, 956, 115, 1022, 37, 75, 85, 255),
    VTX(276, -382, 626, 672, 1010, 189, 21, 97, 255),
    VTX(1032, 21, 980, -38, 995, 219, 43, 105, 255),
    VTX(223, 1024, 289, 433, 62, 209, 78, 77, 255),
    VTX(276, -382, -626, 58, 1024, 189, 21, 159, 255),
    VTX(223, 1024, -289, 354, 87, 209, 78, 179, 255),
    VTX(223, 1024, -289, 433, 62, 209, 78, 179, 255),
    VTX(1032, 21, -980, -38, 995, 219, 43, 151, 255),
    VTX(276, -382, -626, 672, 1010, 189, 21, 159, 255),
    VTX(1789, 223, -956, 115, 1022, 37, 75, 171, 255),
    VTX(1032, 21, -980, 629, 997, 219, 43, 151, 255),
    VTX(223, 1024, -289, 798, 54, 209, 78, 179, 255),
}; 

Gfx gDekuBabaLowerJawDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuBabaJawInnerTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dekubabaVtx_0002D0[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 6, 4, 0),
    gsSP2Triangles(8, 7, 4, 0, 8, 4, 1, 0),
    gsSP2Triangles(9, 1, 10, 0, 9, 8, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gDekuBabaJawOuterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_dekubabaVtx_000380[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 1, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 24, 14, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dekubabaVtx_0006A8[18] = {
    VTX(2432, 173, 0, 978, 0, 95, 73, 0, 255),
    VTX(1778, 426, -956, -104, 910, 32, 251, 141, 255),
    VTX(1326, -8, 0, 1046, 1263, 245, 119, 0, 255),
    VTX(1326, -8, 0, -42, 906, 245, 119, 0, 255),
    VTX(-399, 166, 0, 1193, 1428, 154, 63, 0, 255),
    VTX(852, 158, 817, 793, 303, 215, 79, 80, 255),
    VTX(852, 158, 817, 1008, -28, 215, 79, 80, 255),
    VTX(1778, 426, 956, 10, 995, 32, 251, 115, 255),
    VTX(1326, -8, 0, 895, 1028, 245, 119, 0, 255),
    VTX(1326, -8, 0, 1046, 1263, 245, 119, 0, 255),
    VTX(1778, 426, 956, -104, 910, 32, 251, 115, 255),
    VTX(2432, 173, 0, 978, 0, 95, 73, 0, 255),
    VTX(852, 158, -817, 793, 303, 215, 79, 176, 255),
    VTX(-399, 166, 0, 1193, 1428, 154, 63, 0, 255),
    VTX(1326, -8, 0, -42, 906, 245, 119, 0, 255),
    VTX(1326, -8, 0, 895, 1028, 245, 119, 0, 255),
    VTX(1778, 426, -956, 10, 995, 32, 251, 141, 255),
    VTX(852, 158, -817, 1008, -28, 215, 79, 176, 255),
}; 

static Vtx object_dekubabaVtx_0007C8[26] = {
    VTX(1778, 426, 956, 53, 1022, 32, 251, 115, 255),
    VTX(852, 158, 817, 916, 1003, 215, 79, 80, 255),
    VTX(278, -492, 332, 1472, 555, 222, 164, 68, 255),
    VTX(1609, -621, 0, 486, 108, 41, 144, 0, 255),
    VTX(2432, 173, 0, 13, 1024, 95, 73, 0, 255),
    VTX(1778, 426, 956, 932, 1007, 32, 251, 115, 255),
    VTX(-399, 166, 0, 855, 1259, 154, 63, 0, 255),
    VTX(852, 158, -817, -689, 1029, 215, 79, 176, 255),
    VTX(278, -492, -332, 171, 378, 222, 164, 188, 255),
    VTX(278, -492, -332, 1472, 555, 222, 164, 188, 255),
    VTX(852, 158, -817, 916, 1003, 215, 79, 176, 255),
    VTX(1778, 426, -956, 53, 1022, 32, 251, 141, 255),
    VTX(1609, -621, 0, 251, 68, 41, 144, 0, 255),
    VTX(1778, 426, -956, 932, 1007, 32, 251, 141, 255),
    VTX(2432, 173, 0, 13, 1024, 95, 73, 0, 255),
    VTX(1609, -621, 0, 486, 108, 41, 144, 0, 255),
    VTX(278, -492, 332, 295, 868, 222, 164, 68, 255),
    VTX(278, -492, -332, 635, 672, 222, 164, 188, 255),
    VTX(1609, -621, 0, -46, 188, 41, 144, 0, 255),
    VTX(-399, 166, 0, 391, 1051, 154, 63, 0, 255),
    VTX(278, -492, -332, 842, 31, 222, 164, 188, 255),
    VTX(278, -492, 332, 81, 10, 222, 164, 68, 255),
    VTX(278, -492, 332, 171, 378, 222, 164, 68, 255),
    VTX(852, 158, 817, -689, 1029, 215, 79, 80, 255),
    VTX(-399, 166, 0, 855, 1259, 154, 63, 0, 255),
    VTX(1609, -621, 0, 251, 68, 41, 144, 0, 255),
}; 

static Vtx object_dekubabaVtx_000968[32] = {
    VTX(-292, 120, 0, 441, 278, 119, 241, 0, 255),
    VTX(-141, 242, -942, 581, 1442, 93, 196, 212, 255),
    VTX(114, 539, -806, -64, 1139, 118, 250, 242, 255),
    VTX(114, 539, -806, 110, 1102, 118, 250, 242, 255),
    VTX(-141, 242, -942, 524, 1121, 93, 196, 212, 255),
    VTX(-508, 1068, -1585, 441, 58, 99, 24, 194, 255),
    VTX(-292, 120, 0, 482, 126, 119, 241, 0, 255),
    VTX(-67, 844, 592, 517, 727, 107, 50, 236, 255),
    VTX(114, 539, 806, 154, 724, 118, 250, 14, 255),
    VTX(114, 539, 806, -176, 1631, 118, 250, 14, 255),
    VTX(-67, 844, 592, 504, 1599, 107, 50, 236, 255),
    VTX(-508, 1068, 1585, 562, 277, 99, 24, 62, 255),
    VTX(114, 539, 806, -64, 1139, 118, 250, 14, 255),
    VTX(-141, 242, 942, 581, 1442, 93, 196, 44, 255),
    VTX(-508, 1068, 1585, 441, 58, 99, 24, 62, 255),
    VTX(-141, 242, 942, 524, 1121, 93, 196, 44, 255),
    VTX(114, 539, 806, 110, 1102, 118, 250, 14, 255),
    VTX(114, 539, -806, 154, 724, 118, 250, 242, 255),
    VTX(-67, 844, -592, 517, 727, 107, 50, 20, 255),
    VTX(-56, -847, 0, 154, 724, 115, 225, 0, 255),
    VTX(-266, -776, -350, 517, 727, 98, 230, 192, 255),
    VTX(-842, -1657, 0, 562, 277, 86, 173, 0, 255),
    VTX(-266, -776, -350, 504, 1599, 98, 230, 192, 255),
    VTX(-56, -847, 0, -176, 1631, 115, 225, 0, 255),
    VTX(-266, -776, 350, 581, 1442, 98, 230, 64, 255),
    VTX(-56, -847, 0, -64, 1139, 115, 225, 0, 255),
    VTX(-56, -847, 0, 110, 1102, 115, 225, 0, 255),
    VTX(-266, -776, 350, 524, 1121, 98, 230, 64, 255),
    VTX(-842, -1657, 0, 441, 58, 86, 173, 0, 255),
    VTX(-508, 1068, -1585, 562, 277, 99, 24, 194, 255),
    VTX(-67, 844, -592, 504, 1599, 107, 50, 20, 255),
    VTX(114, 539, -806, -176, 1631, 118, 250, 242, 255),
}; 

Gfx gDekuBabaUpperJawDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuBabaJawInnerTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dekubabaVtx_0006A8[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gDekuBabaJawOuterTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_dekubabaVtx_0007C8[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 2, 25, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gDekuBabaLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_dekubabaVtx_000968[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 0, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 6, 0, 19, 20, 6, 0),
    gsSP2Triangles(21, 22, 23, 0, 0, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dekubabaVtx_000D00[9] = {
    VTX(-208, 0, 120, 1, 256, 182, 84, 41, 255),
    VTX(208, 0, 120, 495, 255, 72, 84, 44, 255),
    VTX(0, 240, 0, 177, 11, 1, 119, 0, 255),
    VTX(208, 0, 120, -91, 240, 72, 84, 44, 255),
    VTX(13, 0, -240, 302, 325, 1, 84, 171, 255),
    VTX(0, 240, 0, 162, 22, 1, 119, 0, 255),
    VTX(13, 0, -240, -99, 248, 1, 84, 171, 255),
    VTX(-208, 0, 120, 287, 262, 182, 84, 41, 255),
    VTX(0, 240, 0, 186, 2, 1, 119, 0, 255),
}; 

static Vtx object_dekubabaVtx_000D90[54] = {
    VTX(779, 1100, -450, -103, 208, 217, 111, 22, 255),
    VTX(616, 800, -933, 630, -120, 191, 94, 220, 255),
    VTX(0, 0, 0, -79, 1526, 0, 120, 0, 255),
    VTX(2165, 900, -1250, 414, -250, 13, 119, 249, 255),
    VTX(616, 800, -933, 612, 1048, 191, 94, 220, 255),
    VTX(779, 1100, -450, -14, 1041, 217, 111, 22, 255),
    VTX(-2165, 900, -1250, 407, -930, 243, 119, 249, 255),
    VTX(-1116, 800, -67, 607, 1030, 1, 94, 74, 255),
    VTX(-779, 1100, -450, -33, 1098, 39, 111, 22, 255),
    VTX(0, 0, 0, -84, 1054, 0, 120, 0, 255),
    VTX(-616, 800, -933, 556, -56, 65, 94, 220, 255),
    VTX(-779, 1100, -450, -90, 46, 39, 111, 22, 255),
    VTX(-779, 1100, -450, -183, 1162, 39, 111, 22, 255),
    VTX(-616, 800, -933, 515, 951, 65, 94, 220, 255),
    VTX(-2165, 900, -1250, 443, -590, 243, 119, 249, 255),
    VTX(-779, 1100, -450, -20, 154, 39, 111, 22, 255),
    VTX(-1116, 800, -67, 597, 113, 1, 94, 74, 255),
    VTX(0, 0, 0, 20, 1248, 0, 120, 0, 255),
    VTX(0, 1100, 900, 110, 1102, 0, 111, 211, 255),
    VTX(-500, 800, 1000, 524, 1121, 192, 94, 218, 255),
    VTX(0, 900, 2500, 441, 58, 0, 119, 15, 255),
    VTX(779, 1100, -450, -42, 1089, 217, 111, 22, 255),
    VTX(1116, 800, -67, 478, 1058, 255, 94, 74, 255),
    VTX(2165, 900, -1250, 339, -499, 13, 119, 249, 255),
    VTX(0, 0, 0, 137, 1064, 0, 120, 0, 255),
    VTX(1116, 800, -67, 548, 39, 255, 94, 74, 255),
    VTX(779, 1100, -450, -70, 139, 217, 111, 22, 255),
    VTX(0, 1100, 900, 103, -32, 0, 111, 211, 255),
    VTX(500, 800, 1000, 585, 98, 64, 94, 218, 255),
    VTX(0, 0, 0, -245, 1334, 0, 120, 0, 255),
    VTX(0, 900, 2500, 562, 277, 0, 119, 15, 255),
    VTX(500, 800, 1000, 504, 1599, 64, 94, 218, 255),
    VTX(0, 1100, 900, -176, 1631, 0, 111, 211, 255),
    VTX(0, 0, 0, 441, 278, 0, 120, 0, 255),
    VTX(-500, 800, 1000, 581, 1442, 192, 94, 218, 255),
    VTX(0, 1100, 900, -64, 1139, 0, 111, 211, 255),
    VTX(-464, 251, 268, 110, 1102, 14, 118, 248, 255),
    VTX(-544, 158, 144, 524, 1121, 236, 100, 194, 255),
    VTX(-849, 79, 490, 441, 58, 219, 111, 22, 255),
    VTX(-173, 0, 100, 441, 278, 62, 96, 220, 255),
    VTX(-544, 158, 144, 581, 1442, 236, 100, 194, 255),
    VTX(-464, 251, 268, -64, 1139, 14, 118, 248, 255),
    VTX(-849, 79, 490, 562, 277, 219, 111, 22, 255),
    VTX(-397, 158, 400, 504, 1599, 44, 100, 48, 255),
    VTX(-464, 251, 268, -176, 1631, 14, 118, 248, 255),
    VTX(-464, 251, 268, 103, -32, 14, 118, 248, 255),
    VTX(-397, 158, 400, 585, 98, 44, 100, 48, 255),
    VTX(-173, 0, 100, -245, 1334, 62, 96, 220, 255),
    VTX(227, 15, -21, 471, 1067, 43, 106, 34, 255),
    VTX(404, 192, -810, 458, -573, 251, 119, 11, 255),
    VTX(-9, 98, 19, -66, 1218, 251, 119, 11, 255),
    VTX(404, 192, -810, 502, 2479, 251, 119, 11, 255),
    VTX(-117, 19, -190, 412, 1133, 204, 107, 242, 255),
    VTX(-9, 98, 19, 18, 1042, 251, 119, 11, 255),
}; 

Gfx gDekuBabaBaseLeavesDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuBabaBulbTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dekubabaVtx_000D00[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(0, 0, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gDekuBabaLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_dekubabaVtx_000D90[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_dekubabaVtx_000D90[30], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dekubabaVtx_001230[12] = {
    VTX(80, 80, 0, 11, 254, 84, 84, 6, 255),
    VTX(-80, 80, 0, 179, 255, 172, 84, 6, 255),
    VTX(0, 0, 2100, 261, -1033, 0, 0, 120, 255),
    VTX(0, 0, 2100, 128, -477, 0, 0, 120, 255),
    VTX(80, -80, 0, 60, 260, 84, 172, 6, 255),
    VTX(80, 80, 0, 193, 247, 84, 84, 6, 255),
    VTX(0, 0, 2100, 438, -572, 0, 0, 120, 255),
    VTX(-80, -80, 0, 66, 247, 172, 172, 6, 255),
    VTX(80, -80, 0, 174, 244, 84, 172, 6, 255),
    VTX(0, 0, 2100, 204, -304, 0, 0, 120, 255),
    VTX(-80, 80, 0, 37, 267, 172, 84, 6, 255),
    VTX(-80, -80, 0, 161, 259, 172, 172, 6, 255),
}; 

static Vtx object_dekubabaVtx_0012F0[4] = {
    VTX(34, 29, 424, 315, 142, 151, 233, 203, 255),
    VTX(-41, -41, 605, 270, 243, 184, 161, 6, 255),
    VTX(-225, 115, 900, 162, 408, 184, 161, 6, 255),
    VTX(40, 40, 730, 314, 315, 10, 153, 60, 255),
}; 

Gfx gDekuBabaStemTopDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuBabaStemTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dekubabaVtx_001230[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_dekubabaVtx_0012F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dekubabaVtx_0013E8[24] = {
    VTX(80, -80, 2100, 521, -340, 84, 173, 236, 255),
    VTX(-80, -80, 2100, 282, -349, 208, 147, 248, 255),
    VTX(-15, 103, 950, 413, -38, 117, 232, 0, 255),
    VTX(-102, 17, 950, 175, -47, 253, 137, 8, 255),
    VTX(80, -80, 0, 306, 264, 83, 173, 20, 255),
    VTX(-80, -80, 0, 67, 255, 169, 174, 2, 255),
    VTX(-80, -80, 2100, 46, -345, 208, 147, 248, 255),
    VTX(-183, 109, 950, 95, -42, 137, 2, 255, 255),
    VTX(-102, 17, 950, 262, -48, 253, 137, 8, 255),
    VTX(-80, 80, 2100, -121, -339, 172, 84, 13, 255),
    VTX(-80, -80, 0, 478, 248, 169, 174, 2, 255),
    VTX(-80, 80, 0, 312, 254, 172, 84, 240, 255),
    VTX(-80, 80, 2100, 277, -496, 172, 84, 13, 255),
    VTX(-102, 190, 950, 128, -116, 0, 119, 255, 255),
    VTX(-183, 109, 950, 208, -114, 137, 2, 255, 255),
    VTX(80, 80, 2100, 198, -498, 85, 84, 254, 255),
    VTX(-80, 80, 0, 138, 267, 172, 84, 240, 255),
    VTX(80, 80, 0, 59, 265, 85, 84, 2, 255),
    VTX(80, -80, 0, 37, 264, 83, 173, 20, 255),
    VTX(80, 80, 0, 150, 261, 85, 84, 2, 255),
    VTX(-15, 103, 950, 131, -14, 117, 232, 0, 255),
    VTX(-102, 190, 950, 244, -16, 0, 119, 255, 255),
    VTX(80, 80, 2100, 337, -294, 85, 84, 254, 255),
    VTX(80, -80, 2100, 225, -291, 84, 173, 236, 255),
}; 

static Vtx object_dekubabaVtx_001568[12] = {
    VTX(61, -320, 1848, 228, 0, 214, 205, 156, 255),
    VTX(-80, -25, 1756, 165, 238, 164, 216, 191, 255),
    VTX(46, -18, 1710, 206, 254, 222, 207, 153, 255),
    VTX(-41, -320, 1900, 176, -13, 149, 253, 54, 255),
    VTX(63, -49, 1905, 29, 184, 188, 24, 95, 255),
    VTX(61, -320, 1952, 125, -25, 202, 19, 105, 255),
    VTX(18, 108, 451, 235, 340, 180, 251, 92, 255),
    VTX(233, 414, 643, 277, 162, 166, 71, 32, 255),
    VTX(-50, 121, 357, 209, 402, 162, 70, 22, 255),
    VTX(277, 366, 650, 272, 132, 206, 225, 104, 255),
    VTX(11, 103, 200, 132, 390, 208, 100, 210, 255),
    VTX(312, 401, 575, 234, 122, 224, 101, 201, 255),
}; 

Gfx gDekuBabaStemMiddleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuBabaStemTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dekubabaVtx_0013E8[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(7, 10, 8, 0, 7, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(13, 16, 14, 0, 13, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(21, 22, 20, 0, 22, 23, 20, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_dekubabaVtx_001568[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(7, 10, 8, 0, 7, 11, 10, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dekubabaVtx_001728[16] = {
    VTX(0, 49, 0, 29, 256, 46, 110, 251, 255),
    VTX(-49, 0, 0, 82, 260, 138, 20, 250, 255),
    VTX(-80, 80, 2100, 611, -683, 172, 84, 252, 255),
    VTX(80, 80, 2100, 489, -691, 84, 84, 252, 255),
    VTX(-49, 0, 0, 64, 249, 138, 20, 250, 255),
    VTX(-80, -80, 2100, 384, -376, 172, 172, 253, 255),
    VTX(-80, 80, 2100, 224, -375, 172, 84, 252, 255),
    VTX(0, -49, 0, 133, 248, 0, 137, 252, 255),
    VTX(-80, -80, 2100, 258, -509, 172, 172, 253, 255),
    VTX(0, -49, 0, 14, 267, 0, 137, 252, 255),
    VTX(80, -80, 2100, 376, -499, 84, 172, 253, 255),
    VTX(49, 0, 0, 65, 271, 119, 0, 252, 255),
    VTX(80, -80, 2100, 92, -453, 84, 172, 253, 255),
    VTX(49, 0, 0, 85, 251, 119, 0, 252, 255),
    VTX(80, 80, 2100, 257, -454, 84, 84, 252, 255),
    VTX(0, 49, 0, 156, 250, 46, 110, 251, 255),
}; 

Gfx gDekuBabaStemBaseDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuBabaStemTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dekubabaVtx_001728[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSPEndDisplayList(),
}; 

u64 gDekuBabaJawOuterTex[] = {
#include "assets/objects/object_dekubaba/deku_baba_jaw_outer.rgb5a1.inc.c"
};

u64 gDekuBabaJawInnerTex[] = {
#include "assets/objects/object_dekubaba/deku_baba_jaw_inner.rgb5a1.inc.c"
};

u64 gDekuBabaLeafTex[] = {
#include "assets/objects/object_dekubaba/deku_baba_leaf.rgb5a1.inc.c"
};

u64 gDekuBabaBulbTex[] = {
#include "assets/objects/object_dekubaba/deku_baba_bulb.rgb5a1.inc.c"
};

u64 gDekuBabaStemTex[] = {
#include "assets/objects/object_dekubaba/deku_baba_stem.rgb5a1.inc.c"
};

StandardLimb object_dekubaba_Limb_0029D0 = { 
    { 0, 0, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb object_dekubaba_Limb_0029DC = { 
    { 0, 43, -114 },
    0x02, 0x04,
    NULL
}; 

StandardLimb object_dekubaba_Limb_0029E8 = { 
    { 0, 0, 0 },
    0x03, 0xFF,
    NULL
}; 

StandardLimb object_dekubaba_Limb_0029F4 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gDekuBabaUpperJawDL
}; 

StandardLimb object_dekubaba_Limb_002A00 = { 
    { 0, -155, -144 },
    0x05, 0xFF,
    NULL
}; 

StandardLimb object_dekubaba_Limb_002A0C = { 
    { 0, 0, 0 },
    0x06, 0xFF,
    NULL
}; 

StandardLimb object_dekubaba_Limb_002A18 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gDekuBabaLowerJawDL
}; 

static void* sDekuBabaSkelLimbs[7] = {
    &object_dekubaba_Limb_0029D0,
    &object_dekubaba_Limb_0029DC,
    &object_dekubaba_Limb_0029E8,
    &object_dekubaba_Limb_0029F4,
    &object_dekubaba_Limb_002A00,
    &object_dekubaba_Limb_002A0C,
    &object_dekubaba_Limb_002A18,
}; 

SkeletonHeader gDekuBabaSkel = { sDekuBabaSkelLimbs, 7 }; 

static u8 unaccounted_002A48[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_dekubabaVtx_002A50[82] = {
    VTX(-65, 573, 40, 4988, 2390, 215, 5, 112, 255),
    VTX(-7, 573, 60, 3915, 2390, 216, 5, 112, 255),
    VTX(35, 1242, 48, 3140, 6667, 215, 5, 112, 255),
    VTX(-11, 1198, 33, 4019, 6386, 215, 5, 112, 255),
    VTX(0, -484, -48, 3758, -4379, 208, 254, 147, 255),
    VTX(-32, -484, -33, 5244, -4379, 208, 254, 147, 255),
    VTX(-65, 573, -40, 6235, 2390, 208, 254, 147, 255),
    VTX(16, -1015, -42, 2846, -7774, 208, 253, 147, 255),
    VTX(48, -986, -4, 2427, -7590, 90, 2, 178, 255),
    VTX(0, -484, -48, 3758, -4379, 90, 1, 177, 255),
    VTX(34, -484, -10, 2711, -4379, 90, 1, 177, 255),
    VTX(16, -1015, -42, 2846, -7774, 90, 2, 178, 255),
    VTX(16, -1025, 62, 3523, -7840, 186, 4, 97, 255),
    VTX(0, -484, 28, 3778, -4379, 186, 4, 97, 255),
    VTX(-41, -986, 19, 4732, -7590, 186, 4, 97, 255),
    VTX(16, -1025, 62, 3523, -7840, 90, 7, 78, 255),
    VTX(34, -484, -10, 2711, -4379, 90, 7, 78, 255),
    VTX(0, -484, 28, 3778, -4379, 90, 7, 78, 255),
    VTX(-33, -986, -28, 5146, -7590, 137, 0, 0, 255),
    VTX(-32, -484, 14, 4587, -4379, 137, 0, 0, 255),
    VTX(-32, -484, -33, 5244, -4379, 137, 0, 0, 255),
    VTX(-41, -986, 19, 4732, -7590, 138, 2, 236, 255),
    VTX(-32, -484, 14, 4587, -4379, 138, 2, 236, 255),
    VTX(-33, -986, -28, 5146, -7590, 138, 2, 236, 255),
    VTX(23, 573, -6, 3062, 2390, 109, 255, 49, 255),
    VTX(-7, 573, 60, 3915, 2390, 109, 255, 49, 255),
    VTX(0, -484, 28, 3778, -4379, 109, 255, 49, 255),
    VTX(34, -484, -10, 2711, -4379, 104, 1, 197, 255),
    VTX(-7, 573, -60, 4655, 2390, 104, 1, 197, 255),
    VTX(23, 573, -6, 3062, 2390, 104, 1, 197, 255),
    VTX(-7, 573, -60, 4655, 2390, 216, 253, 143, 255),
    VTX(-65, 573, -40, 6235, 2390, 216, 253, 143, 255),
    VTX(-11, 1147, -76, 6784, 6058, 216, 253, 143, 255),
    VTX(-11, 1147, -76, 6784, 6058, 137, 11, 0, 255),
    VTX(-65, 573, -40, 6235, 2390, 137, 11, 0, 255),
    VTX(-65, 573, 40, 4988, 2390, 137, 11, 0, 255),
    VTX(-11, 1147, -76, 6784, 6058, 137, 10, 251, 255),
    VTX(-65, 573, 40, 4988, 2390, 137, 10, 251, 255),
    VTX(-11, 1198, 33, 4019, 6386, 137, 10, 251, 255),
    VTX(0, -484, -48, 3758, -4379, 90, 1, 177, 255),
    VTX(-7, 573, -60, 4655, 2390, 90, 0, 177, 255),
    VTX(34, -484, -10, 2711, -4379, 90, 1, 177, 255),
    VTX(-32, -484, 14, 4587, -4379, 216, 252, 112, 255),
    VTX(-7, 573, 60, 3915, 2390, 216, 252, 112, 255),
    VTX(-65, 573, 40, 4988, 2390, 216, 252, 112, 255),
    VTX(0, -484, 28, 3778, -4379, 208, 252, 109, 255),
    VTX(-7, 573, 60, 3915, 2390, 208, 252, 109, 255),
    VTX(-32, -484, 14, 4587, -4379, 208, 252, 109, 255),
    VTX(70, 1147, -52, 915, 6058, 111, 250, 45, 255),
    VTX(35, 1242, 48, 3140, 6667, 111, 250, 45, 255),
    VTX(-7, 573, 60, 3915, 2390, 111, 250, 45, 255),
    VTX(70, 1147, -52, 915, 6058, 109, 251, 49, 255),
    VTX(-7, 573, 60, 3915, 2390, 109, 251, 49, 255),
    VTX(23, 573, -6, 3062, 2390, 109, 251, 49, 255),
    VTX(23, 573, -6, 18208, 2390, 81, 242, 169, 255),
    VTX(35, 1191, -91, 14399, 6339, 81, 242, 169, 255),
    VTX(70, 1147, -52, 16061, 6058, 81, 242, 169, 255),
    VTX(-7, 573, -60, 19801, 2390, 222, 253, 141, 255),
    VTX(-11, 1147, -76, 21930, 6058, 222, 253, 141, 255),
    VTX(35, 1191, -91, 14399, 6339, 222, 253, 141, 255),
    VTX(23, 573, -6, 18208, 2390, 104, 246, 198, 255),
    VTX(-7, 573, -60, 19801, 2390, 104, 246, 198, 255),
    VTX(35, 1191, -91, 14399, 6339, 104, 246, 198, 255),
    VTX(23, 573, -6, 3062, 2390, 90, 1, 79, 255),
    VTX(0, -484, 28, 3778, -4379, 90, 1, 79, 255),
    VTX(34, -484, -10, 2711, -4379, 90, 1, 79, 255),
    VTX(0, -484, 28, 3778, -4379, 208, 2, 109, 255),
    VTX(-32, -484, 14, 4587, -4379, 208, 2, 109, 255),
    VTX(-41, -986, 19, 4732, -7590, 208, 2, 109, 255),
    VTX(-32, -484, -33, 5244, -4379, 137, 252, 0, 255),
    VTX(-65, 573, 40, 4988, 2390, 137, 252, 0, 255),
    VTX(-65, 573, -40, 6235, 2390, 137, 252, 0, 255),
    VTX(-32, -484, 14, 4587, -4379, 137, 252, 0, 255),
    VTX(16, -1025, 62, 3523, -7840, 106, 4, 54, 255),
    VTX(48, -986, -4, 2427, -7590, 106, 4, 54, 255),
    VTX(34, -484, -10, 2711, -4379, 106, 4, 54, 255),
    VTX(0, -484, -48, 3758, -4379, 216, 254, 143, 255),
    VTX(-65, 573, -40, 6235, 2390, 216, 253, 143, 255),
    VTX(-7, 573, -60, 4655, 2390, 216, 253, 143, 255),
    VTX(-32, -484, -33, 5244, -4379, 221, 255, 142, 255),
    VTX(16, -1015, -42, 2846, -7774, 221, 255, 142, 255),
    VTX(-33, -986, -28, 5146, -7590, 221, 255, 142, 255),
}; 

static Vtx object_dekubabaVtx_002F70[16] = {
    VTX(-11, 1147, -76, 0, 0, 186, 88, 215, 255),
    VTX(-11, 1198, 33, 0, 0, 186, 88, 215, 255),
    VTX(35, 1242, 48, 0, 0, 186, 88, 215, 255),
    VTX(-11, 1147, -76, 0, 0, 171, 79, 227, 255),
    VTX(35, 1242, 48, 0, 0, 171, 79, 227, 255),
    VTX(35, 1191, -91, 0, 0, 171, 79, 227, 255),
    VTX(35, 1191, -91, 0, 0, 101, 60, 234, 255),
    VTX(35, 1242, 48, 0, 0, 101, 60, 234, 255),
    VTX(70, 1147, -52, 0, 0, 101, 60, 234, 255),
    VTX(16, -1025, 62, 0, 0, 193, 155, 246, 255),
    VTX(-33, -986, -28, 0, 0, 193, 155, 246, 255),
    VTX(16, -1015, -42, 0, 0, 193, 155, 246, 255),
    VTX(-41, -986, 19, 0, 0, 194, 155, 245, 255),
    VTX(16, -1015, -42, 0, 0, 84, 172, 248, 255),
    VTX(48, -986, -4, 0, 0, 84, 172, 248, 255),
    VTX(16, -1025, 62, 0, 0, 84, 172, 248, 255),
}; 

Gfx gDekuBabaStickDropDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDekuBabaStickDropTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 247, 164, 109, 255),
    gsSPVertex(&object_dekubabaVtx_002A50[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_dekubabaVtx_002A50[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_dekubabaVtx_002A50[60], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 127, 255),
    gsSPVertex(&object_dekubabaVtx_002F70[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 10, 9, 0, 13, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0031B8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gDekuBabaStickDropTex[] = {
#include "assets/objects/object_dekubaba/deku_baba_stick_drop.rgb5a1.inc.c"
};


