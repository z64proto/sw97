#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_hintnuts.h"

static s16 sHintNutsSpitAnimFrameData[150];
static JointIndex sHintNutsSpitAnimJointIndices[10];
static Vtx sHintNutsSkelVtx_000180[16];
static Vtx sHintNutsSkelVtx_000280[6];
static Vtx sHintNutsSkelVtx_0002E0[6];
static Vtx sHintNutsSkelVtx_000340[10];
static Vtx sHintNutsSkelVtx_0003E0[5];
static Vtx sHintNutsSkelVtx_000430[5];
static Vtx sHintNutsSkelVtx_000480[7];
static Vtx sHintNutsSkelVtx_0004F0[7];
static Vtx sHintNutsSkelVtx_000560[5];
static Vtx sHintNutsSkelVtx_0005B0[68];
static Vtx sHintNutsSkelVtx_0009F0[20];
static Vtx object_hintnutsVtx_0012C0[3];
static Vtx object_hintnutsVtx_001380[9];
static Vtx object_hintnutsVtx_001410[13];
static void* sHintNutsSkelLimbs[9];
static s16 sHintNutsBurrowAnimFrameData[96];
static JointIndex sHintNutsBurrowAnimJointIndices[10];
static s16 sHintNutsUnburrowAnimFrameData[212];
static JointIndex sHintNutsUnburrowAnimJointIndices[10];
static s16 sHintNutsLookAroundAnimFrameData[188];
static JointIndex sHintNutsLookAroundAnimJointIndices[10];
static s16 sHintNutsFreezeAnimFrameData[104];
static JointIndex sHintNutsFreezeAnimJointIndices[10];
static s16 sHintNutsUpAnimFrameData[194];
static JointIndex sHintNutsUpAnimJointIndices[10];
static s16 sHintNutsTalkAnimFrameData[340];
static JointIndex sHintNutsTalkAnimJointIndices[10];
static s16 sHintNutsStandAnimFrameData[80];
static JointIndex sHintNutsStandAnimJointIndices[10];
static s16 sHintNutsRunAnimFrameData[174];
static JointIndex sHintNutsRunAnimJointIndices[10];

static s16 sHintNutsSpitAnimFrameData[150] = {
    0x0000, 0x02BC, 0x4000, 0x8000, 0xC000, 0x0000, 0xFFE4, 0xFFA1, 0xFF50, 0xFF0A, 0xFEE9, 0xFF06, 0x009F, 0x0222, 
    0x0221, 0x01F8, 0x01B2, 0x015A, 0x00FA, 0x009D, 0x004D, 0x0015, 0x0000, 0x0000, 0x01D4, 0x0644, 0x0BBF, 0x10B3, 
    0x138E, 0x12BE, 0xFC56, 0xE6AA, 0xE62F, 0xE7CC, 0xEAF6, 0xEF20, 0xF3C0, 0xF84C, 0xFC37, 0xFEF6, 0x0000, 0x0000, 
    0x024C, 0x07E4, 0x0ED1, 0x151F, 0x18D9, 0x180A, 0xFCB8, 0xE22B, 0xE177, 0xE34A, 0xE6FD, 0xEBE9, 0xF167, 0xF6CF, 
    0xFB7B, 0xFEC3, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFB2, 0x0000, 0x03AB, 0xFC00, 
    0xFD8D, 0x0000, 0x005E, 0x0069, 0x0046, 0x0017, 0x0000, 0x0000, 0x003C, 0x00D1, 0x0194, 0x0256, 0x02EB, 0x0327, 
    0x0235, 0x0000, 0xFBE9, 0xF914, 0xF976, 0xFA73, 0xFBCD, 0xFD47, 0xFEA1, 0xFF9E, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0xFF18, 0xFE30, 0x0000, 0x0BE7, 0x145F, 0x04BF, 0xF4D3, 0xF4A9, 0xF8B7, 0xFD9E, 0x0000, 
    0x0000, 0x0000, 0x0164, 0x0491, 0x0806, 0x0A43, 0x09C7, 0x03DF, 0xF9CB, 0xEFFF, 0xEAED, 0xECF7, 0xF359, 0xFAC9, 
    0x0000, 0x0157, 0x00AB, 0x0000, 0x0000, 0x5FC8, 0x5DC0, 0x5884, 0x515B, 0x498D, 0x4264, 0x3D26, 0x3DE7, 0x40F5, 
    0x40D9, 0x3FF8, 0x3FC2, 0x41A7, 0x46FA, 0x4EB9, 0x56D2, 0x5D32, 0x5FC8, 0x0000, 
}; 

static JointIndex sHintNutsSpitAnimJointIndices[10] = {
    { 0x0000, 0x0001, 0x0005 },
    { 0x0002, 0x0017, 0x0002 },
    { 0x0000, 0x0000, 0x0029 },
    { 0x003B, 0x0000, 0x004D },
    { 0x005F, 0x0000, 0x0071 },
    { 0x0000, 0x0000, 0x0083 },
    { 0x0002, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0002, 0x0003, 0x0000 },
    { 0x0003, 0x0003, 0x0004 },
}; 

AnimationHeader gHintNutsSpitAnim = { { 18 }, sHintNutsSpitAnimFrameData, sHintNutsSpitAnimJointIndices, 5 }; 

static u8 unaccounted_000178[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx sHintNutsSkelVtx_000180[16] = {
    VTX(438, 555, -1041, 103, 166, 217, 44, 152, 255),
    VTX(-389, 0, 0, 363, 691, 137, 2, 0, 255),
    VTX(322, 1364, 0, 363, 231, 223, 115, 0, 255),
    VTX(438, 555, 1041, 624, 145, 215, 45, 103, 255),
    VTX(1669, -744, 0, 496, -707, 85, 172, 255, 255),
    VTX(342, -825, -820, 608, 212, 217, 171, 181, 255),
    VTX(1296, 0, -1068, 343, -428, 53, 237, 151, 255),
    VTX(1309, 0, 1103, 342, -437, 53, 237, 106, 255),
    VTX(342, -825, 820, 608, 212, 216, 171, 74, 255),
    VTX(1669, 727, 564, 142, -667, 63, 75, 68, 255),
    VTX(1669, 727, 564, 506, -648, 63, 75, 68, 255),
    VTX(1669, 727, -564, 223, -636, 63, 74, 186, 255),
    VTX(438, 555, -1041, 269, 183, 217, 44, 152, 255),
    VTX(438, 555, 1041, 269, 183, 215, 45, 103, 255),
    VTX(-389, 0, 0, 460, 742, 137, 2, 0, 255),
    VTX(1669, 727, -564, 142, -667, 63, 74, 186, 255),
}; 

static Vtx sHintNutsSkelVtx_000280[6] = {
    VTX(1286, 702, 702, 30, -136, 255, 255, 255, 255),
    VTX(506, 1302, 188, 339, 203, 255, 255, 255, 255),
    VTX(506, 522, 1194, -83, 309, 255, 255, 255, 255),
    VTX(506, 522, -1194, -83, 309, 255, 255, 255, 255),
    VTX(506, 1302, -188, 339, 203, 255, 255, 255, 255),
    VTX(1286, 702, -702, 30, -136, 255, 255, 255, 255),
}; 

static Vtx sHintNutsSkelVtx_0002E0[6] = {
    VTX(-627, 0, 0, 224, 219, 136, 0, 0, 255),
    VTX(63, 0, -780, -65, 437, 244, 0, 137, 255),
    VTX(63, -780, 0, 237, 437, 244, 137, 0, 255),
    VTX(63, 780, 0, 237, 437, 244, 119, 0, 255),
    VTX(993, 0, 0, 249, 655, 120, 0, 0, 255),
    VTX(63, 0, 780, 538, 437, 244, 0, 119, 255),
}; 

static Vtx sHintNutsSkelVtx_000340[10] = {
    VTX(-138, 334, -301, 289, 257, 214, 82, 180, 255),
    VTX(-138, 334, 301, 289, 257, 208, 64, 89, 255),
    VTX(852, 393, 300, -15, 280, 71, 89, 36, 255),
    VTX(852, -191, -523, -18, 87, 88, 239, 177, 255),
    VTX(-18, -328, -301, 248, 38, 209, 172, 185, 255),
    VTX(852, -191, 523, -18, 87, 68, 236, 96, 255),
    VTX(-18, -328, 301, 248, 38, 209, 172, 71, 255),
    VTX(852, -542, 0, -20, -29, 32, 141, 0, 255),
    VTX(-552, 3, 0, 414, 145, 137, 242, 0, 255),
    VTX(852, 393, -300, -15, 280, 58, 86, 197, 255),
}; 

static Vtx sHintNutsSkelVtx_0003E0[5] = {
    VTX(852, -191, -523, 1, 84, 88, 239, 177, 255),
    VTX(852, 393, -300, 59, 255, 58, 86, 197, 255),
    VTX(852, 393, 300, 204, 253, 71, 89, 36, 255),
    VTX(852, -191, 523, 253, 80, 68, 236, 96, 255),
    VTX(852, -542, 0, 124, -22, 32, 141, 0, 255),
}; 

static Vtx sHintNutsSkelVtx_000430[5] = {
    VTX(912, 243, 227, 445, 236, 37, 55, 100, 255),
    VTX(1212, 3, 0, 319, 152, 119, 2, 0, 255),
    VTX(912, 243, -227, 445, 236, 37, 55, 156, 255),
    VTX(-168, 3, 0, 343, 487, 145, 44, 0, 255),
    VTX(912, -267, 0, 189, 235, 35, 142, 0, 255),
}; 

static Vtx sHintNutsSkelVtx_000480[7] = {
    VTX(753, -252, -462, 696, 34, 11, 208, 147, 255),
    VTX(1263, -252, 0, 953, 39, 117, 231, 0, 255),
    VTX(753, -252, 462, 696, 34, 11, 208, 109, 255),
    VTX(-87, -252, -270, 274, 26, 170, 198, 197, 255),
    VTX(-87, -252, 270, 274, 26, 170, 198, 59, 255),
    VTX(-27, 153, -15, 311, 153, 185, 96, 255, 255),
    VTX(843, 468, 0, 756, 300, 51, 108, 0, 255),
}; 

static Vtx sHintNutsSkelVtx_0004F0[7] = {
    VTX(753, -252, -462, 696, 34, 11, 208, 147, 255),
    VTX(1263, -252, 0, 953, 39, 117, 231, 0, 255),
    VTX(753, -252, 462, 696, 34, 11, 208, 109, 255),
    VTX(-87, -252, 270, 274, 26, 170, 198, 59, 255),
    VTX(-87, -252, -270, 274, 26, 170, 198, 197, 255),
    VTX(843, 468, 0, 756, 300, 51, 108, 0, 255),
    VTX(-27, 153, 15, 311, 153, 185, 96, 1, 255),
}; 

static Vtx sHintNutsSkelVtx_000560[5] = {
    VTX(912, 243, 227, 445, 236, 37, 55, 100, 255),
    VTX(1212, 3, 0, 319, 152, 119, 2, 0, 255),
    VTX(912, 243, -227, 445, 236, 37, 55, 156, 255),
    VTX(-168, 3, 0, 343, 487, 145, 44, 0, 255),
    VTX(912, -267, 0, 189, 235, 35, 142, 0, 255),
}; 

static Vtx sHintNutsSkelVtx_0005B0[68] = {
    VTX(0, 104, -1042, 199, -1024, 97, 248, 187, 255),
    VTX(144, 907, 0, 470, -1122, 106, 56, 0, 255),
    VTX(437, -222, 0, 465, -1323, 118, 236, 0, 255),
    VTX(-2232, -2933, 0, 2069, 954, 63, 155, 0, 255),
    VTX(-1167, -1126, -1354, 190, 285, 59, 187, 179, 255),
    VTX(-249, -1191, 0, 575, -514, 91, 178, 0, 255),
    VTX(-2285, -1061, -1803, -195, 1083, 31, 183, 167, 255),
    VTX(0, 104, -1042, 1705, 11, 97, 248, 187, 255),
    VTX(-1558, 211, -2432, 2276, 1024, 67, 232, 160, 255),
    VTX(-893, 1809, -887, 386, 1024, 87, 67, 209, 255),
    VTX(144, 907, 0, 1024, 138, 106, 56, 0, 255),
    VTX(-893, 1809, -887, 362, 1062, 87, 67, 209, 255),
    VTX(-893, 1809, 886, 1686, 1062, 87, 67, 47, 255),
    VTX(0, 104, 1042, 1677, -132, 97, 248, 69, 255),
    VTX(-893, 1809, 886, 450, 1067, 87, 67, 47, 255),
    VTX(-1558, 211, 2431, 2339, 1067, 67, 232, 96, 255),
    VTX(-1167, -1126, 1354, 190, 285, 59, 187, 77, 255),
    VTX(-2285, -1061, 1802, -195, 1083, 32, 183, 89, 255),
    VTX(144, 907, 0, 399, -120, 106, 56, 0, 255),
    VTX(144, 907, 0, 432, -7, 106, 56, 0, 255),
    VTX(-1308, 1497, -289, 164, 1024, 52, 106, 238, 255),
    VTX(-71, 946, 0, 488, -10, 62, 102, 0, 255),
    VTX(-568, 1027, -508, 12, 478, 61, 93, 211, 255),
    VTX(-311, 439, -1104, -140, -69, 67, 253, 157, 255),
    VTX(-1308, 1497, 288, 812, 1024, 51, 106, 18, 255),
    VTX(-568, 1027, 509, 964, 478, 61, 93, 45, 255),
    VTX(-311, 439, 1107, 1116, -69, 67, 253, 99, 255),
    VTX(-2469, 187, 1743, 74, 996, 21, 208, 107, 255),
    VTX(-1447, -614, 1185, 982, -74, 37, 195, 96, 255),
    VTX(-311, 439, 1107, -310, -1008, 67, 253, 99, 255),
    VTX(-425, -1215, 0, 1890, -1145, 68, 158, 0, 255),
    VTX(-2469, 187, -1744, 74, 996, 21, 208, 149, 255),
    VTX(-311, 439, -1104, -310, -1008, 67, 253, 157, 255),
    VTX(-1447, -614, -1185, 982, -74, 37, 195, 160, 255),
    VTX(-425, -1215, 0, 1890, -1145, 68, 158, 0, 255),
    VTX(-3753, -2731, 0, 3205, 1032, 34, 142, 0, 255),
    VTX(-1447, -614, 1185, 982, -74, 37, 195, 96, 255),
    VTX(-2469, 187, 1743, 74, 996, 21, 208, 107, 255),
    VTX(-71, 946, 0, 488, -10, 62, 102, 0, 255),
    VTX(-1308, 1497, -289, 164, 1024, 52, 106, 238, 255),
    VTX(-1308, 1497, 288, 812, 1024, 51, 106, 18, 255),
    VTX(0, 104, -1042, 970, 1, 97, 248, 187, 255),
    VTX(-249, -1191, 0, -148, -416, 91, 178, 0, 255),
    VTX(-1167, -1126, -1354, 92, 521, 59, 187, 179, 255),
    VTX(437, -222, 0, 465, -1323, 118, 236, 0, 255),
    VTX(144, 907, 0, 470, -1122, 106, 56, 0, 255),
    VTX(0, 104, 1042, 746, -1024, 97, 248, 69, 255),
    VTX(-249, -1191, 0, 477, -854, 91, 178, 0, 255),
    VTX(0, 104, -1042, 199, -1024, 97, 248, 187, 255),
    VTX(200, 847, -175, 1100, 73, 111, 44, 8, 255),
    VTX(100, -285, 39, 481, -486, 114, 221, 11, 255),
    VTX(400, 449, -714, 490, -17, 116, 10, 228, 255),
    VTX(50, 50, -1153, -90, 164, 101, 231, 198, 255),
    VTX(-800, 1353, -1741, 534, 1473, 90, 52, 197, 255),
    VTX(400, 449, 714, 490, -17, 116, 10, 28, 255),
    VTX(200, 847, 175, 1100, 73, 111, 44, 248, 255),
    VTX(-800, 1353, 1741, 534, 1473, 90, 52, 59, 255),
    VTX(50, 50, 1153, -90, 164, 101, 231, 58, 255),
    VTX(100, -285, -39, 481, -486, 114, 221, 245, 255),
    VTX(-1167, -1126, -1354, 92, 521, 59, 187, 179, 255),
    VTX(-1558, 211, -2432, 1065, 1106, 67, 232, 160, 255),
    VTX(-2285, -1061, -1803, -34, 1021, 31, 183, 167, 255),
    VTX(-1167, -1126, 1354, 92, 521, 59, 187, 77, 255),
    VTX(-1558, 211, 2432, 1065, 1106, 67, 232, 96, 255),
    VTX(-2285, -1061, 1803, -34, 1021, 32, 183, 89, 255),
    VTX(-1167, -1126, 1354, 92, 521, 59, 187, 77, 255),
    VTX(-249, -1191, 0, -148, -416, 91, 178, 0, 255),
    VTX(0, 104, 1042, 970, 1, 97, 248, 69, 255),
}; 

static Vtx sHintNutsSkelVtx_0009F0[20] = {
    VTX(546, -50, -667, 0, 124, 226, 86, 179, 255),
    VTX(546, 550, 1, 533, 139, 217, 113, 0, 255),
    VTX(2594, 370, 0, 467, 1666, 10, 119, 0, 255),
    VTX(546, -50, 669, 1067, 154, 226, 86, 77, 255),
    VTX(-505, -354, -6, 570, -832, 178, 91, 0, 255),
    VTX(546, 550, 1, 533, 139, 217, 113, 0, 255),
    VTX(612, -175, 650, 0, 124, 211, 72, 84, 255),
    VTX(-435, -213, -235, 570, -832, 196, 78, 68, 255),
    VTX(-22, -935, 965, 1067, 154, 211, 72, 84, 255),
    VTX(1460, -1166, 1541, 467, 1666, 228, 64, 97, 255),
    VTX(1460, -1166, -1541, 467, 1666, 228, 64, 159, 255),
    VTX(-22, -935, -965, 1067, 154, 211, 72, 172, 255),
    VTX(612, -175, -650, 0, 124, 211, 72, 172, 255),
    VTX(-435, -213, 235, 570, -832, 196, 78, 188, 255),
    VTX(395, -1420, 1, 533, 139, 112, 214, 0, 255),
    VTX(55, -77, -35, 570, -832, 116, 29, 255, 255),
    VTX(-305, -1120, 909, 1067, 154, 86, 225, 77, 255),
    VTX(-305, -1120, -907, 0, 124, 86, 223, 179, 255),
    VTX(395, -1420, 1, 533, 139, 112, 214, 0, 255),
    VTX(-1837, -2936, 0, 467, 1666, 67, 157, 0, 255),
}; 

Gfx sHintNutsSkelLimbDL_000B30[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_001DA8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_000180[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 4, 0),
    gsSP2Triangles(9, 7, 4, 0, 2, 10, 11, 0),
    gsSP2Triangles(0, 2, 11, 0, 6, 5, 12, 0),
    gsSP2Triangles(7, 13, 8, 0, 14, 5, 8, 0),
    gsSP2Triangles(8, 13, 14, 0, 4, 6, 15, 0),
    gsSP2Triangles(12, 5, 14, 0, 13, 7, 9, 0),
    gsSP2Triangles(8, 5, 4, 0, 10, 2, 3, 0),
    gsSP1Triangle(15, 6, 12, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_001FA8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 3, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, 2, 3, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&sHintNutsSkelVtx_000280[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sHintNutsSkelLimbDL_000C68[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_001DA8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_0002E0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 1, 3, 0),
    gsSP2Triangles(5, 0, 2, 0, 0, 5, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 5, 4, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx sHintNutsSkelLimbDL_000D10[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_002028),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 3, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, 2, 3, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_000340[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 2, 1, 0, 6, 4, 7, 0),
    gsSP2Triangles(7, 5, 6, 0, 8, 4, 6, 0),
    gsSP2Triangles(8, 1, 0, 0, 6, 1, 8, 0),
    gsSP2Triangles(4, 3, 7, 0, 2, 9, 0, 0),
    gsSP2Triangles(0, 4, 8, 0, 1, 6, 5, 0),
    gsSP1Triangle(0, 9, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_0020A8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 3, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, 2, 3, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsSPVertex(&sHintNutsSkelVtx_0003E0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sHintNutsSkelLimbDL_000E28[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_001DA8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_000430[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 2, 1, 4, 0),
    gsSP2Triangles(2, 4, 3, 0, 0, 3, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx sHintNutsSkelLimbDL_000EC8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_001DA8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_000480[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 0, 0),
    gsSP2Triangles(5, 4, 2, 0, 5, 3, 4, 0),
    gsSP2Triangles(0, 3, 5, 0, 2, 6, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 0, 6, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx sHintNutsSkelLimbDL_000F78[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_001DA8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_0004F0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 2, 5, 6, 0),
    gsSP2Triangles(0, 4, 6, 0, 4, 3, 6, 0),
    gsSP2Triangles(6, 3, 2, 0, 6, 5, 0, 0),
    gsSP2Triangles(5, 1, 0, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sHintNutsSkelLimbDL_001028[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_001DA8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_000560[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 1, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 4, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sHintNutsSkelLimbDL_0010C8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_0015A8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_0005B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(5, 16, 3, 0, 16, 17, 3, 0),
    gsSP2Triangles(14, 13, 18, 0, 9, 19, 7, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 21, 0, 25, 26, 21, 0),
    gsSP2Triangles(27, 28, 29, 0, 28, 30, 29, 0),
    gsSPVertex(&sHintNutsSkelVtx_0005B0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 3, 0, 4, 0, 2, 0),
    gsSP2Triangles(3, 5, 4, 0, 5, 6, 4, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(13, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 22, 20, 21, 0),
    gsSP2Triangles(22, 18, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 23, 25, 0, 23, 26, 27, 0),
    gsSP2Triangles(23, 27, 24, 0, 28, 29, 10, 0),
    gsSP1Triangle(30, 29, 28, 0),
    gsSPVertex(&sHintNutsSkelVtx_0005B0[62], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(5, 1, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sHintNutsSkelLimbDL_001208[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_0015A8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHintNutsSkelVtx_0009F0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 16, 19, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_hintnutsVtx_0012C0[3] = {
    VTX(-1500, -800, 0, -293, 549, 255, 255, 255, 255),
    VTX(1500, -800, 0, 805, 549, 255, 255, 255, 255),
    VTX(0, 1500, 0, 256, -293, 255, 255, 255, 255),
}; 

Gfx gHintNutsNutDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_hintnutsTex_002128),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_hintnutsVtx_0012C0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_hintnutsVtx_001380[9] = {
    VTX(0, 25, 0, 4096, -421, 0, 120, 0, 255),
    VTX(2178, 960, -2178, 3072, 1152, 231, 114, 25, 255),
    VTX(-2178, 960, -2178, 5120, 1152, 25, 114, 25, 255),
    VTX(-2178, 960, 2178, 5120, 1152, 25, 114, 231, 255),
    VTX(2178, 960, 2178, 3072, 1152, 231, 114, 231, 255),
    VTX(-2178, 960, -2178, 7168, 1152, 25, 114, 25, 255),
    VTX(0, 25, 0, 6144, -421, 0, 120, 0, 255),
    VTX(2178, 960, -2178, 1024, 1152, 231, 114, 25, 255),
    VTX(0, 25, 0, 2048, -421, 0, 120, 0, 255),
}; 

static Vtx object_hintnutsVtx_001410[13] = {
    VTX(-3118, 60, 1800, 10240, 1024, 241, 118, 8, 255),
    VTX(0, 60, 3600, 12288, 1024, 0, 118, 17, 255),
    VTX(0, 572, 0, 11264, -69, 0, 120, 0, 255),
    VTX(0, 60, -3600, 6144, 1024, 0, 118, 239, 255),
    VTX(-3118, 60, -1800, 8192, 1024, 241, 118, 248, 255),
    VTX(0, 572, 0, 7168, -69, 0, 120, 0, 255),
    VTX(0, 572, 0, 9216, -69, 0, 120, 0, 255),
    VTX(0, 60, 3600, 0, 1024, 0, 118, 17, 255),
    VTX(3118, 60, 1800, 2048, 1024, 15, 118, 8, 255),
    VTX(0, 572, 0, 1024, -69, 0, 120, 0, 255),
    VTX(3118, 60, -1800, 4096, 1024, 15, 118, 248, 255),
    VTX(0, 572, 0, 3072, -69, 0, 120, 0, 255),
    VTX(0, 572, 0, 5120, -69, 0, 120, 0, 255),
}; 

Gfx gHintNutsFlowerDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sHintNutsSkelTex_0015A8),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_hintnutsVtx_001380[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 3, 6, 0, 4, 7, 8, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_hintnutsVtx_001410[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 0, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 10, 3, 12, 0),
    gsSPEndDisplayList(),
}; 

u64 sHintNutsSkelTex_0015A8[] = {
#include "assets/objects/object_hintnuts//sHintNutsSkelTex_0015A8.rgb5a1.inc.c"
};

u64 sHintNutsSkelTex_001DA8[] = {
#include "assets/objects/object_hintnuts//sHintNutsSkelTex_001DA8.rgb5a1.inc.c"
};

u64 sHintNutsSkelTex_001FA8[] = {
#include "assets/objects/object_hintnuts//sHintNutsSkelTex_001FA8.rgb5a1.inc.c"
};

u64 sHintNutsSkelTex_002028[] = {
#include "assets/objects/object_hintnuts//sHintNutsSkelTex_002028.rgb5a1.inc.c"
};

u64 sHintNutsSkelTex_0020A8[] = {
#include "assets/objects/object_hintnuts//sHintNutsSkelTex_0020A8.rgb5a1.inc.c"
};

u64 object_hintnutsTex_002128[] = {
#include "assets/objects/object_hintnuts//object_hintnutsTex_002128.rgb5a1.inc.c"
};

StandardLimb sHintNutsSkelLimb_002328 = { { 0, 700, 0 }, 1, 255, sHintNutsSkelLimbDL_000C68 }; 

StandardLimb sHintNutsSkelLimb_002334 = { { 480, 0, 0 }, 2, 5, sHintNutsSkelLimbDL_000B30 }; 

StandardLimb sHintNutsSkelLimb_002340 = { { 1848, -96, 0 }, 255, 3, sHintNutsSkelLimbDL_0010C8 }; 

StandardLimb sHintNutsSkelLimb_00234C = { { 1920, 0, 0 }, 255, 4, sHintNutsSkelLimbDL_001208 }; 

StandardLimb sHintNutsSkelLimb_002358 = { { 240, 816, 0 }, 255, 255, sHintNutsSkelLimbDL_000D10 }; 

StandardLimb sHintNutsSkelLimb_002364 = { { -144, 0, 168 }, 6, 7, sHintNutsSkelLimbDL_001028 }; 

StandardLimb sHintNutsSkelLimb_002370 = { { 912, 0, 0 }, 255, 255, sHintNutsSkelLimbDL_000F78 }; 

StandardLimb sHintNutsSkelLimb_00237C = { { -144, 0, -168 }, 8, 255, sHintNutsSkelLimbDL_000E28 }; 

StandardLimb sHintNutsSkelLimb_002388 = { { 912, 0, 0 }, 255, 255, sHintNutsSkelLimbDL_000EC8 }; 

static void* sHintNutsSkelLimbs[9] = {
    &sHintNutsSkelLimb_002328,
    &sHintNutsSkelLimb_002334,
    &sHintNutsSkelLimb_002340,
    &sHintNutsSkelLimb_00234C,
    &sHintNutsSkelLimb_002358,
    &sHintNutsSkelLimb_002364,
    &sHintNutsSkelLimb_002370,
    &sHintNutsSkelLimb_00237C,
    &sHintNutsSkelLimb_002388,
}; 

SkeletonHeader gHintNutsSkel = { sHintNutsSkelLimbs, 9 }; 

static u8 unaccounted_0023C0[16] = {
    0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sHintNutsBurrowAnimFrameData[96] = {
    0x0000, 0x02BC, 0x4000, 0x8000, 0xC000, 0x02BC, 0x03E8, 0xFD72, 0xF7CC, 0xF6A9, 0xF6CA, 0xF76B, 0xF7CC, 0xF7CC, 
    0xF7CC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF01C, 0x0073, 0x1018, 0x090A, 0x0000, 0x0000, 0xEBA1, 0xF73B, 
    0x062C, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0092, 0x014E, 0x00BC, 0xFA39, 0xF26E, 0xFCE6, 
    0x07F9, 0x04D6, 0x0000, 0x0000, 0xFFE2, 0xFFBA, 0xFFD9, 0x010F, 0x02D6, 0x028E, 0x01B0, 0x00AB, 0x0000, 0x0000, 
    0xFFA9, 0xFF39, 0xFF90, 0x0399, 0x0814, 0xFFC7, 0xF79C, 0xFB4D, 0x0000, 0x0000, 0x0514, 0x0EF5, 0x1768, 0x182B, 
    0x182B, 0x182B, 0x182B, 0x182B, 0x182B, 0x0000, 0x0183, 0xFEE3, 0xFC22, 0xFBDF, 0xFBDF, 0xFBDF, 0xFBDF, 0xFBDF, 
    0xFBDF, 0x4000, 0x3A3B, 0x59AC, 0x7878, 0x7B59, 0x7B59, 0x7B59, 0x7B59, 0x7B59, 0x7B59, 0x0000, 
}; 

static JointIndex sHintNutsBurrowAnimJointIndices[10] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0002, 0x0000, 0x0002 },
    { 0x000F, 0x0000, 0x0019 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0023, 0x002D, 0x0037 },
    { 0x0041, 0x004B, 0x0055 },
    { 0x0002, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0002, 0x0003, 0x0000 },
    { 0x0003, 0x0003, 0x0004 },
}; 

AnimationHeader gHintNutsBurrowAnim = { { 10 }, sHintNutsBurrowAnimFrameData, sHintNutsBurrowAnimJointIndices, 5 }; 

static u8 unaccounted_0024DC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sHintNutsUnburrowAnimFrameData[212] = {
    0x0000, 0x02BC, 0x4000, 0x8000, 0x02BC, 0x0B06, 0x1085, 0x139E, 0x14B4, 0x1403, 0x11DB, 0x0EC0, 0x0B35, 0x07BF, 
    0x04E2, 0x04E2, 0x04E2, 0x04E2, 0x04E2, 0x04E2, 0x4000, 0x45A2, 0x552A, 0x6C8B, 0x89BA, 0xAAAB, 0xCD50, 0xEF9E, 
    0x0F88, 0x2B02, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x0000, 0xF6D5, 0xEDAA, 0xEE41, 0xEFD8, 0xF22D, 
    0xF500, 0xF80D, 0xFB13, 0xFDCF, 0x0000, 0x0075, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xED0C, 0xDA28, 0xE324, 
    0xF497, 0x00A4, 0x034F, 0x02F1, 0x012E, 0xFFA7, 0x0000, 0x072E, 0x0D72, 0x09F6, 0x037C, 0x0000, 0x0000, 0x001D, 
    0x006B, 0x00D9, 0x0156, 0x01D3, 0x0240, 0x028C, 0x02A7, 0x0281, 0x020A, 0xFD17, 0xF842, 0xFA16, 0xFDE7, 0x0000, 
    0x0000, 0xFF71, 0xFDF5, 0xFBD0, 0xF94C, 0xF6AD, 0xF43B, 0xF23D, 0xF0FA, 0xF0B8, 0xF1BD, 0xFB80, 0x0C54, 0x16D1, 
    0x0C1F, 0x0000, 0x4826, 0x47E0, 0x4730, 0x464C, 0x4568, 0x44B8, 0x4472, 0x44CA, 0x45F4, 0x4826, 0x5717, 0x66B5, 
    0x67AD, 0x63B1, 0x5CD0, 0x4826, 0x4000, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 0x4000, 0x0000, 0x0000, 0xBF27, 0xC727, 0xCA85, 0xC9E3, 0xC5E4, 0xBF27, 
    0xAD07, 0x9221, 0x0000, 0x7AF3, 0x7A51, 0x7C36, 0x7EBD, 0x0000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x4000, 0x0260, 0x041B, 0x0318, 
    0x00B9, 0xFEDB, 0xFF5D, 0x041B, 0x154C, 0x2ECF, 0x4000, 0x44CB, 0x4564, 0x4398, 0x4133, 0x4000, 0x8000, 0x8000, 
    0x4212, 0x3A3A, 0x36EC, 0x378B, 0x3B77, 0x4212, 0x53D9, 0x6E39, 0x8000, 0x84F4, 0x8593, 0x83B7, 0x813D, 0x8000, 
    0xC000, 0x81AD, 0x80D9, 0x7F7F, 0x7CF5, 0x7B19, 0x7BC6, 0x80D9, 0x92F9, 0xADDF, 0xC000, 0xC50D, 0xC5AF, 0xC3CA, 
    0xC143, 0xC000, 
}; 

static JointIndex sHintNutsUnburrowAnimJointIndices[10] = {
    { 0x0000, 0x0004, 0x0000 },
    { 0x0014, 0x0000, 0x0002 },
    { 0x0000, 0x0024, 0x0034 },
    { 0x0000, 0x0000, 0x0044 },
    { 0x0000, 0x0000, 0x0054 },
    { 0x0000, 0x0000, 0x0064 },
    { 0x0074, 0x0084, 0x0094 },
    { 0x0000, 0x0000, 0x00A4 },
    { 0x0002, 0x00B4, 0x0000 },
    { 0x0003, 0x0003, 0x00C4 },
}; 

AnimationHeader gHintNutsUnburrowAnim = { { 16 }, sHintNutsUnburrowAnimFrameData, sHintNutsUnburrowAnimJointIndices, 4 }; 

static u8 unaccounted_0026D4[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sHintNutsLookAroundAnimFrameData[188] = {
    0x0000, 0x02BC, 0x4000, 0x8000, 0xC000, 0x02BC, 0x02C3, 0x02D6, 0x02EE, 0x0306, 0x0319, 0x0320, 0x031A, 0x030C, 
    0x02F9, 0x02E3, 0x02D0, 0x02C2, 0x02BC, 0x02C3, 0x02D6, 0x02EE, 0x0306, 0x0319, 0x0320, 0x0319, 0x0306, 0x02EE, 
    0x02D6, 0x02C3, 0x02BC, 0x012F, 0x0000, 0xF659, 0xE925, 0xE000, 0xE000, 0xE000, 0xE000, 0xE000, 0xE925, 0xF659, 
    0x0000, 0x012F, 0xFED1, 0x0000, 0x09A7, 0x16DB, 0x2000, 0x2000, 0x2000, 0x2000, 0x2000, 0x16DB, 0x09A7, 0x0000, 
    0xFED1, 0x0000, 0x0090, 0x011F, 0x0000, 0xF90E, 0xF35F, 0xF50C, 0xF8E5, 0xFD23, 0x0000, 0x00DA, 0x00B1, 0x0030, 
    0x0000, 0xFF9D, 0xFF66, 0x0160, 0x0AFB, 0x12B6, 0x1081, 0x0B61, 0x0596, 0x0160, 0xFFD4, 0xFFC3, 0x0000, 0x0000, 
    0xFFFF, 0xFFFD, 0x0000, 0x0012, 0x0020, 0x001C, 0x0012, 0x0007, 0x0000, 0xFFFE, 0xFFFE, 0xFFFF, 0x0000, 0x0006, 
    0x000C, 0x0000, 0xFFB4, 0xFF75, 0xFF87, 0xFFB1, 0xFFDF, 0x0000, 0x0009, 0x0004, 0x0000, 0x0000, 0xFFFC, 0xFFF7, 
    0x0000, 0x0037, 0x0063, 0x0056, 0x0038, 0x0017, 0x0000, 0xFFF9, 0xFFFA, 0xFFFE, 0x0000, 0xFFF4, 0xFFE7, 0x0000, 
    0x009A, 0x0118, 0x00F4, 0x00A0, 0x0042, 0x0000, 0xFFEE, 0xFFF7, 0x0000, 0x0000, 0x00F3, 0x01E7, 0x0000, 0xF772, 
    0xEC09, 0xE655, 0xE768, 0xEA45, 0xEE5D, 0xF322, 0xF809, 0xFC82, 0x0000, 0x00CA, 0x0043, 0x0289, 0x0C06, 0x1850, 
    0x1E41, 0x1BD1, 0x1629, 0x0EEA, 0x07B8, 0x0234, 0x0000, 0x5739, 0x59F8, 0x5F12, 0x61D1, 0x5ED5, 0x597F, 0x5739, 
    0x5AA5, 0x60CA, 0x66AA, 0x6949, 0x64E1, 0x5C76, 0x5739, 0x59FA, 0x5FE9, 0x61D1, 0x59C5, 0x4DB1, 0x4826, 0x514B, 
    0x60F9, 0x6949, 0x62AF, 0x551D, 0x49ED, 0x0000, 
}; 

static JointIndex sHintNutsLookAroundAnimJointIndices[10] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0002, 0x0000, 0x0002 },
    { 0x001F, 0x0000, 0x0000 },
    { 0x0039, 0x0053, 0x006D },
    { 0x0087, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x00A1 },
    { 0x0002, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0002, 0x0003, 0x0000 },
    { 0x0003, 0x0003, 0x0004 },
}; 

AnimationHeader gHintNutsLookAroundAnim = { { 26 }, sHintNutsLookAroundAnimFrameData, sHintNutsLookAroundAnimJointIndices, 5 }; 

static u8 unaccounted_0028A4[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sHintNutsFreezeAnimFrameData[104] = {
    0x0000, 0x07F0, 0x4000, 0xE78E, 0x3639, 0x0008, 0x8000, 0x8008, 0x4000, 0x2F4C, 0x5006, 0x40E3, 0x30FE, 0x3E26, 
    0x4C39, 0x46E5, 0x3BE9, 0x356B, 0x3946, 0x419E, 0x470E, 0x46CD, 0x4448, 0x4163, 0x0000, 0x10B4, 0xF328, 0xFFAD, 
    0x0D1F, 0x01DD, 0xF5CB, 0xFA01, 0x02F9, 0x0851, 0x0542, 0xFE93, 0xFA3A, 0xFA76, 0xFC85, 0xFEE0, 0x4000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0x0000, 0x938F, 0x701C, 0x7FBA, 0x904C, 0x8243, 0x735F, 0x7925, 0x84F2, 0x8BD1, 0x8759, 0x7DF2, 0x77DA, 0x782D, 
    0x7B15, 0x7E69, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x911D, 0x6DDB, 0x7E59, 0x8FD1, 0x827D, 0x73EC, 0x7954, 0x8482, 0x8B01, 
    0x86B7, 0x7DC0, 0x77F7, 0x7856, 0x7B32, 0x7E73, 
}; 

static JointIndex sHintNutsFreezeAnimJointIndices[10] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0002, 0x0000, 0x0008 },
    { 0x0000, 0x0018, 0x0003 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0028, 0x0038, 0x0048 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0002, 0x0058, 0x0000 },
    { 0x0006, 0x0006, 0x0007 },
}; 

AnimationHeader gHintNutsFreezeAnim = { { 16 }, sHintNutsFreezeAnimFrameData, sHintNutsFreezeAnimJointIndices, 8 }; 

static u8 unaccounted_0029CC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sHintNutsUpAnimFrameData[194] = {
    0x0000, 0xF7CC, 0x4000, 0x8000, 0xC000, 0x0000, 0x0071, 0x00C8, 0xFFF3, 0xFF38, 0xFFF6, 0x00C8, 0x00AC, 0x0049, 
    0x0000, 0xFFF0, 0xFFF2, 0xFFFB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF7CC, 0xF7CC, 
    0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xF7CC, 0xFA88, 0xFD44, 0x0000, 0x02BC, 0x02BC, 0x02BC, 
    0x02BC, 0x02BC, 0x02BC, 0x02BC, 0x02BC, 0x0000, 0x0071, 0x00C8, 0xFFF3, 0xFF38, 0xFFF6, 0x00C8, 0x00AC, 0x0049, 
    0x0000, 0xFFF0, 0xFFF2, 0xFFFB, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFEF, 
    0xFFC5, 0xFF8E, 0xFF57, 0xFF2D, 0xFF1C, 0xFF31, 0xFF79, 0x0000, 0x0421, 0x0755, 0x048F, 0xFFEA, 0xFB5D, 0xF8DE, 
    0xF916, 0xFACB, 0xFD19, 0xFF21, 0x0000, 0x0000, 0xFFFD, 0xFFF6, 0xFFED, 0xFFE4, 0xFFDD, 0xFFDA, 0xFFDE, 0xFFEA, 
    0x0000, 0x0126, 0x0139, 0xFBFD, 0xF7DA, 0xFA4E, 0xFEEA, 0x020A, 0x0260, 0x019A, 0x0089, 0x0000, 0x0000, 0xFE0F, 
    0xFDFE, 0xFDF7, 0xFC91, 0xFBAD, 0xFD80, 0xFFA8, 0x0019, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x063A, 0xFDC0, 0xF70F, 0xFFA5, 0x0895, 0x0341, 0xFC35, 0xFD91, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xF3A1, 
    0xFF9A, 0x0930, 0xFAE9, 0xECCD, 0xF6B3, 0x03AF, 0x030B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0x4237, 0x4845, 0x5145, 0x5C53, 0x6889, 0x7503, 0x80DD, 0x8B32, 
    0x931E, 0x97DF, 0x96FD, 0x8D01, 0x7121, 0x4C28, 0x3500, 0x317B, 0x358B, 0x3D47, 0x44C8, 0x4826, 
}; 

static JointIndex sHintNutsUpAnimJointIndices[10] = {
    { 0x0005, 0x001A, 0x002F },
    { 0x0002, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0044 },
    { 0x0000, 0x0000, 0x0059 },
    { 0x006E, 0x0083, 0x0098 },
    { 0x0000, 0x0000, 0x00AD },
    { 0x0002, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0002, 0x0003, 0x0000 },
    { 0x0003, 0x0003, 0x0004 },
}; 

AnimationHeader gHintNutsUpAnim = { { 21 }, sHintNutsUpAnimFrameData, sHintNutsUpAnimJointIndices, 5 }; 

static s16 sHintNutsTalkAnimFrameData[340] = {
    0x0000, 0x04E2, 0x4000, 0xF9E3, 0xF8CE, 0xF603, 0xF231, 0xEE07, 0xEA35, 0xE76A, 0xE655, 0xE701, 0xE8CD, 0xEB67, 
    0xEE7D, 0xF1BC, 0xF4D1, 0xF76C, 0xF938, 0x0000, 0x06AB, 0x0AAB, 0x06AB, 0x0000, 0xF9E1, 0xF555, 0xF970, 0x0000, 
    0x06C5, 0x0AAB, 0x06AB, 0x0000, 0xF955, 0xF555, 0xF955, 0x0000, 0xFFEF, 0xFFC4, 0xFF88, 0xFF48, 0xFF0C, 0xFEE1, 
    0xFED0, 0xFEDA, 0xFEF6, 0xFF1F, 0xFF4F, 0xFF81, 0xFFB1, 0xFFDA, 0xFFF6, 0xED42, 0xEC3F, 0xE9A4, 0xE614, 0xE233, 
    0xDEA3, 0xDC08, 0xDB05, 0xDBA5, 0xDD52, 0xDFBF, 0xE2A0, 0xE5A7, 0xE888, 0xEAF5, 0xECA2, 0x0000, 0x0156, 0x0447, 
    0x0738, 0x088E, 0x078B, 0x0523, 0x024E, 0x0000, 0xFE39, 0xFC8B, 0xFB4B, 0xFACE, 0xFB9E, 0xFD67, 0xFF30, 0x0000, 
    0xFF2E, 0xFD3A, 0xFAEA, 0xF903, 0xF849, 0xF92E, 0xFB2E, 0xFD9F, 0xFFDA, 0x0136, 0x019C, 0x0185, 0x0122, 0x00A0, 
    0x0030, 0x0000, 0xF8E4, 0xF1C7, 0xF71C, 0x0000, 0x08E4, 0x0E39, 0x08E4, 0x0000, 0xF71C, 0xF1C7, 0xF71C, 0x0000, 
    0x08E4, 0x0E39, 0x071C, 0x0000, 0xFF2D, 0xFD25, 0xFA95, 0xF828, 0xF689, 0xF664, 0xF844, 0xFBBB, 0x0000, 0x044B, 
    0x07D4, 0x09D2, 0x08D4, 0x0564, 0x01B7, 0x4826, 0x3F98, 0x3709, 0x3F81, 0x4826, 0x4065, 0x3876, 0x404A, 0x4826, 
    0x4078, 0x38C0, 0x3FCF, 0x4826, 0x4998, 0x496F, 0x48A1, 0xBBEE, 0xBC3C, 0x3D13, 0x3E55, 0x3FD2, 0x4142, 0x4254, 
    0x42BF, 0x427D, 0x41CC, 0x40CE, 0x3FA7, 0x3E7E, 0x3D74, 0x3CA4, 0xBC1E, 0x8B8B, 0x8BB4, 0xF3F5, 0xF3A7, 0xF38D, 
    0xF3B2, 0xF3F3, 0xF415, 0xF3FF, 0xF3CE, 0xF3A0, 0xF38D, 0xF3A1, 0xF3D7, 0xF41E, 0x8BA5, 0xF9A8, 0xF85E, 0x7509, 
    0x7075, 0x6B75, 0x66E1, 0x638C, 0x6243, 0x630E, 0x6532, 0x684E, 0x6C02, 0x6FE9, 0x739C, 0x76B8, 0xF8DC, 0x0000, 
    0x003F, 0x00D8, 0x0196, 0x0240, 0x02E9, 0x03A3, 0x043A, 0x047C, 0x044A, 0x03C4, 0x0319, 0x0276, 0x01C3, 0x00F3, 
    0x0048, 0x05B4, 0x0619, 0x0708, 0x081D, 0x08F8, 0x0999, 0x0A2A, 0x0A8B, 0x0A9C, 0x0A39, 0x097C, 0x08A1, 0x07E2, 
    0x0733, 0x067D, 0x05EE, 0x328E, 0x3961, 0x4038, 0x3934, 0x32AB, 0x3BA8, 0x4428, 0x3BCB, 0x32B1, 0x3819, 0x3E3C, 
    0x38E8, 0x329D, 0x3182, 0x319C, 0x3233, 0x453E, 0x44C5, 0xC38B, 0xC1E5, 0xC054, 0xBED2, 0xBDBC, 0xBDC0, 0xBE6C, 
    0xBF60, 0xC080, 0xC1AF, 0xC2D1, 0xC3CD, 0x4492, 0x4510, 0x71D3, 0x719B, 0x0ED5, 0x0F29, 0x0F3E, 0x0F26, 0x0EF4, 
    0x0EE8, 0x0EFF, 0x0F20, 0x0F2F, 0x0F22, 0x0EF9, 0x0EBA, 0x7189, 0x71BE, 0xF997, 0xF806, 0x7436, 0x6F7C, 0x6B3C, 
    0x673D, 0x646C, 0x649C, 0x6672, 0x68E3, 0x6BD4, 0x6F02, 0x722B, 0x750E, 0xF76A, 0xF901, 0x7D28, 0x7CDE, 0x7C47, 
    0x7BCE, 0x7BDB, 0x7CD7, 0x7E6F, 0x7FFA, 0x80CF, 0x8094, 0x7FB2, 0x7EA3, 0x7DE0, 0x7D82, 0x7D4A, 0x7D2F, 0x595D, 
    0x59A6, 0x5A55, 0x5B2A, 0x5BE8, 0x5CA9, 0x5D81, 0x5E21, 0x5E3E, 0x5D8C, 0x5C46, 0x5AE9, 0x59F1, 0x5982, 0x5959, 
    0x5957, 0xAA94, 0xAA4D, 0xA9B5, 0xA920, 0xA8E6, 0xA937, 0xA9DC, 0xAA92, 0xAB14, 0xAB56, 0xAB79, 0xAB84, 0xAB7B, 
    0xAB4E, 0xAAFF, 0xAAB5, 0x0000, 
}; 

static JointIndex sHintNutsTalkAnimJointIndices[10] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0002, 0x0003, 0x0002 },
    { 0x0013, 0x0023, 0x0033 },
    { 0x0043, 0x0000, 0x0053 },
    { 0x0000, 0x0063, 0x0073 },
    { 0x0000, 0x0000, 0x0083 },
    { 0x0093, 0x00A3, 0x00B3 },
    { 0x00C3, 0x00D3, 0x00E3 },
    { 0x00F3, 0x0103, 0x0113 },
    { 0x0123, 0x0133, 0x0143 },
}; 

AnimationHeader gHintNutsTalkAnim = { { 16 }, sHintNutsTalkAnimFrameData, sHintNutsTalkAnimJointIndices, 3 }; 

static u8 unaccounted_002E94[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sHintNutsStandAnimFrameData[80] = {
    0x0000, 0x02BC, 0x4000, 0x8000, 0xC000, 0x0000, 0xFF41, 0xFD56, 0xFAB5, 0xF7D9, 0xF538, 0xF34D, 0xF28E, 0xF31A, 
    0xF48C, 0xF69B, 0xF8FC, 0xFB67, 0xFD90, 0xFF2E, 0xF5D0, 0xF4D8, 0xF257, 0xEEEB, 0xEB31, 0xE7C5, 0xE544, 0xE44B, 
    0xE50C, 0xE708, 0xE9D6, 0xED0E, 0xF045, 0xF314, 0xF510, 0x0000, 0x0044, 0x00E5, 0x01A3, 0x023D, 0x0272, 0x021B, 
    0x0164, 0x0087, 0xFFBE, 0xFF44, 0xFF30, 0xFF59, 0xFFA0, 0xFFE2, 0x0000, 0x00AC, 0x0235, 0x03E5, 0x0507, 0x04E4, 
    0x02C3, 0xFF1D, 0xFB09, 0xF79A, 0xF5E6, 0xF68D, 0xF8D4, 0xFBC8, 0xFE78, 0x5B4C, 0x5D73, 0x6229, 0x66CC, 0x68BE, 
    0x671C, 0x6387, 0x5F2D, 0x5B38, 0x58D3, 0x5829, 0x5861, 0x5925, 0x5A1D, 0x5AF2, 
}; 

static JointIndex sHintNutsStandAnimJointIndices[10] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0002, 0x0005, 0x0002 },
    { 0x0000, 0x0000, 0x0014 },
    { 0x0000, 0x0000, 0x0023 },
    { 0x0000, 0x0000, 0x0032 },
    { 0x0000, 0x0000, 0x0041 },
    { 0x0002, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0002, 0x0003, 0x0000 },
    { 0x0003, 0x0003, 0x0004 },
}; 

AnimationHeader gHintNutsStandAnim = { { 15 }, sHintNutsStandAnimFrameData, sHintNutsStandAnimJointIndices, 5 }; 

static u8 unaccounted_002F8C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sHintNutsRunAnimFrameData[174] = {
    0x0000, 0x04E2, 0x4826, 0x4000, 0x8000, 0x04E2, 0x094D, 0x0DB7, 0x0C56, 0x094D, 0x0643, 0x04E2, 0x094D, 0x0DB7, 
    0x0CCD, 0x0A8B, 0x07AA, 0x4000, 0x4042, 0x4109, 0x40CC, 0x405C, 0x4011, 0x4000, 0x3FC5, 0x3F2E, 0x3F6B, 0x3FCC, 
    0x3FFB, 0x0000, 0x03A8, 0x0743, 0x0632, 0x03CF, 0x0152, 0x0000, 0x02A3, 0x0564, 0x0490, 0x02B8, 0x00DA, 0x4000, 
    0x42DD, 0x45CC, 0x453E, 0x43DB, 0x4200, 0x4000, 0x3C72, 0x39D6, 0x3AD0, 0x3CF0, 0x3F0B, 0x0000, 0x0D0A, 0x1A13, 
    0x179D, 0x1156, 0x08E7, 0xFFF7, 0xF153, 0xE703, 0xEAEB, 0xF382, 0xFC19, 0x0000, 0xFC4F, 0xFC8F, 0xFD33, 0xFE17, 
    0xFF15, 0x000A, 0x018D, 0x029E, 0x0234, 0x014E, 0x0068, 0x0000, 0xFE85, 0xFAE1, 0xF62A, 0xF176, 0xEDD8, 0xEC65, 
    0xEDD9, 0xF17B, 0xF633, 0xFAEB, 0xFE8C, 0x0000, 0xF60F, 0xE399, 0xD9A8, 0xE399, 0xF60F, 0x0000, 0xF60F, 0xE399, 
    0xD9A8, 0xE399, 0xF60F, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0x0000, 0x9185, 0x8F62, 0x8A68, 0x84BF, 0x808F, 0x0000, 0x9040, 0x9F83, 0x9A96, 0x8FC1, 0x84EC, 0x8000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x4000, 0xEEFF, 0x067D, 
    0x30E5, 0x5073, 0x53A3, 0x4000, 0xF818, 0x0E4B, 0x357D, 0x523C, 0x4CB7, 0x8000, 0x651C, 0x67C2, 0x6E23, 0x75E0, 
    0x7C9E, 0x8000, 0x7608, 0x6B9B, 0x6ECA, 0x75CD, 0x7CD0, 0xC000, 0x6B41, 0x8636, 0xB550, 0xD7A2, 0xD839, 0xC000, 
    0x7594, 0x88C3, 0xACF6, 0xC8A0, 0xC809, 0x0000, 
}; 

static JointIndex sHintNutsRunAnimJointIndices[10] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0011, 0x001D, 0x0029 },
    { 0x0035, 0x0041, 0x004D },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0059 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0065, 0x0071, 0x007D },
    { 0x0000, 0x0000, 0x0089 },
    { 0x0003, 0x0095, 0x0000 },
    { 0x0004, 0x0004, 0x00A1 },
}; 

AnimationHeader gHintNutsRunAnim = { { 12 }, sHintNutsRunAnimFrameData, sHintNutsRunAnimJointIndices, 5 }; 

static u8 unaccounted_003138[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


