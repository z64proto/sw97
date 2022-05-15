#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_purse.h"

static Vtx object_gi_purseVtx_001000[8];
static Vtx object_gi_purseVtx_001080[24];
static Vtx object_gi_purseVtx_001200[22];
static Vtx object_gi_purseVtx_001360[53];
static Vtx object_gi_purseVtx_0016B0[3];
static Vtx object_gi_purseVtx_0016E0[7];

u64 object_gi_purseTex_000000[] = {
#include "assets/objects/object_gi_purse//object_gi_purseTex_000000.i8.inc.c"
};

static Vtx object_gi_purseVtx_001000[8] = {
    VTX(0, 4, 0, 639, 873, 150, 201, 0, 255),
    VTX(-14, 30, 6, -378, 335, 169, 197, 57, 255),
    VTX(-14, 30, -6, -412, 671, 169, 197, 199, 255),
    VTX(0, 4, 0, 639, 873, 47, 146, 0, 255),
    VTX(14, 30, -6, 385, 234, 87, 197, 199, 255),
    VTX(14, 30, 6, 418, -102, 87, 197, 57, 255),
    VTX(0, 30, -13, -30, 621, 0, 204, 149, 255),
    VTX(0, 30, 13, 36, -52, 0, 204, 107, 255),
}; 

static Vtx object_gi_purseVtx_001080[24] = {
    VTX(-14, -28, 6, 1024, 1634, 205, 161, 51, 255),
    VTX(-12, -15, 18, 778, 1010, 200, 232, 103, 255),
    VTX(-24, -20, 0, 510, 1800, 146, 210, 2, 255),
    VTX(14, -28, 6, 1816, 1200, 51, 161, 51, 255),
    VTX(24, -20, 0, 1928, 1022, 110, 210, 2, 255),
    VTX(12, -15, 18, 1487, 621, 56, 232, 103, 255),
    VTX(22, -1, -9, 1353, 866, 92, 46, 195, 255),
    VTX(22, -1, 9, 1399, 395, 83, 44, 74, 255),
    VTX(12, -15, -20, 1389, 1608, 53, 233, 151, 255),
    VTX(0, -1, -18, 701, 1445, 0, 52, 148, 255),
    VTX(-12, -15, -20, 680, 1997, 203, 233, 151, 255),
    VTX(-22, -1, -9, 97, 1554, 164, 46, 195, 255),
    VTX(-22, -1, 9, 143, 1084, 173, 44, 74, 255),
    VTX(0, 24, 0, 149, 420, 0, 119, 1, 255),
    VTX(0, -1, 17, 810, 533, 13, 73, 94, 255),
    VTX(14, -28, -6, 1783, 1530, 51, 155, 219, 255),
    VTX(-14, -28, -6, 991, 1964, 205, 155, 219, 255),
    VTX(0, -27, -16, 1342, 1985, 0, 162, 183, 255),
    VTX(0, -30, 0, 1465, 1639, 0, 137, 4, 255),
    VTX(0, -25, 17, 1383, 1072, 243, 158, 67, 255),
    VTX(7, -8, 17, 1170, 575, 68, 30, 93, 255),
    VTX(7, -18, 17, 1419, 808, 65, 202, 84, 255),
    VTX(-7, -8, 17, 775, 791, 194, 44, 93, 255),
    VTX(-7, -18, 17, 1024, 1024, 184, 216, 86, 255),
}; 

static Vtx object_gi_purseVtx_001200[22] = {
    VTX(0, -5, 19, 512, 836, 23, 188, 96, 255),
    VTX(0, -3, 20, 512, 530, 219, 13, 113, 255),
    VTX(-5, -9, 20, 787, 530, 232, 244, 116, 255),
    VTX(-4, -9, 19, 761, 836, 79, 235, 87, 255),
    VTX(-5, -18, 20, 1248, 530, 247, 229, 116, 255),
    VTX(-4, -17, 19, 1272, 836, 70, 41, 87, 255),
    VTX(0, -23, 20, 1536, 530, 61, 7, 102, 255),
    VTX(0, -21, 19, 1536, 836, 233, 68, 96, 255),
    VTX(5, -18, 20, 1824, 530, 24, 12, 116, 255),
    VTX(4, -17, 19, 1800, 836, 177, 21, 87, 255),
    VTX(5, -9, 20, 2285, 530, 8, 26, 116, 255),
    VTX(4, -9, 19, 263, 836, 186, 215, 87, 255),
    VTX(5, -9, 20, 237, 530, 8, 26, 116, 255),
    VTX(0, -1, 17, 512, 1142, 13, 73, 94, 255),
    VTX(-7, -8, 17, 805, 1142, 194, 44, 93, 255),
    VTX(-7, -18, 17, 1231, 1158, 184, 216, 86, 255),
    VTX(0, -25, 17, 1536, 1212, 243, 158, 67, 255),
    VTX(7, -18, 17, 1841, 1158, 65, 202, 84, 255),
    VTX(7, -8, 17, 2267, 1142, 68, 30, 93, 255),
    VTX(7, -8, 17, 219, 1142, 68, 30, 93, 255),
    VTX(4, -9, 19, 2311, 836, 186, 215, 87, 255),
    VTX(0, -23, 20, 1536, 530, 179, 179, 49, 255),
}; 

static Vtx object_gi_purseVtx_001360[53] = {
    VTX(-8, 15, 4, 291, 495, 144, 0, 42, 255),
    VTX(-8, 19, 4, 291, 245, 171, 0, 83, 255),
    VTX(-8, 19, -4, 291, 245, 144, 0, 214, 255),
    VTX(0, 15, 8, 768, 495, 237, 0, 118, 255),
    VTX(0, 19, 8, 768, 245, 19, 0, 118, 255),
    VTX(8, 15, 4, 1245, 495, 85, 0, 83, 255),
    VTX(8, 19, 4, 1245, 245, 112, 0, 42, 255),
    VTX(8, 15, -4, 1245, 495, 112, 0, 214, 255),
    VTX(8, 19, -4, 1245, 245, 85, 0, 173, 255),
    VTX(0, 15, -8, 768, 495, 19, 0, 138, 255),
    VTX(0, 19, -8, 768, 245, 237, 0, 138, 255),
    VTX(-8, 15, -4, 291, 495, 171, 0, 173, 255),
    VTX(14, 14, 6, 1585, 531, 175, 246, 88, 255),
    VTX(7, 19, 2, 1164, 259, 193, 236, 100, 255),
    VTX(5, 16, 0, 1037, 447, 194, 225, 97, 255),
    VTX(16, 5, 15, 1677, 1148, 159, 11, 69, 255),
    VTX(12, 12, 3, 1452, 712, 162, 12, 73, 255),
    VTX(21, -2, 15, 1965, 1611, 184, 216, 87, 255),
    VTX(13, 3, 12, 1524, 1261, 170, 243, 82, 255),
    VTX(16, 14, 2, 1666, 565, 76, 91, 12, 255),
    VTX(7, 19, -2, 1164, 259, 56, 105, 0, 255),
    VTX(7, 19, 2, 1164, 259, 56, 105, 3, 255),
    VTX(17, 5, 11, 1759, 1146, 100, 56, 33, 255),
    VTX(14, 14, 6, 1585, 531, 92, 72, 25, 255),
    VTX(21, -1, 12, 1979, 1524, 93, 68, 32, 255),
    VTX(16, 5, 15, 1677, 1148, 96, 63, 34, 255),
    VTX(12, 12, 3, 1452, 712, 9, 183, 162, 255),
    VTX(5, 16, 0, 1037, 447, 2, 187, 158, 255),
    VTX(7, 19, -2, 1164, 259, 4, 188, 158, 255),
    VTX(13, 3, 12, 1524, 1261, 9, 189, 158, 255),
    VTX(16, 14, 2, 1666, 565, 14, 178, 166, 255),
    VTX(18, -3, 13, 1795, 1680, 15, 195, 154, 255),
    VTX(13, 3, 12, 1524, 1261, 9, 189, 158, 255),
    VTX(17, 5, 11, 1759, 1146, 253, 207, 147, 255),
    VTX(5, 16, 0, 1037, 447, 194, 225, 97, 255),
    VTX(12, 12, 3, 1452, 712, 162, 12, 73, 255),
    VTX(14, 14, 6, 1585, 531, 175, 246, 88, 255),
    VTX(13, 3, 12, 1524, 1261, 170, 243, 82, 255),
    VTX(16, 5, 15, 1677, 1148, 159, 11, 69, 255),
    VTX(18, -3, 13, 1795, 1680, 186, 221, 90, 255),
    VTX(21, -2, 15, 1965, 1611, 184, 216, 87, 255),
    VTX(7, 19, 2, 1164, 259, 56, 105, 3, 255),
    VTX(14, 14, 6, 1585, 531, 92, 72, 25, 255),
    VTX(16, 14, 2, 1666, 565, 76, 91, 12, 255),
    VTX(16, 5, 15, 1677, 1148, 96, 63, 34, 255),
    VTX(17, 5, 11, 1759, 1146, 100, 56, 33, 255),
    VTX(21, -2, 15, 1965, 1611, 93, 69, 31, 255),
    VTX(21, -1, 12, 1979, 1524, 93, 68, 32, 255),
    VTX(7, 19, -2, 1164, 259, 4, 188, 158, 255),
    VTX(16, 14, 2, 1666, 565, 14, 178, 166, 255),
    VTX(12, 12, 3, 1452, 712, 9, 183, 162, 255),
    VTX(21, -1, 12, 1979, 1524, 29, 180, 169, 255),
    VTX(21, -2, 15, 1965, 1611, 62, 159, 225, 255),
}; 

static Vtx object_gi_purseVtx_0016B0[3] = {
    VTX(0, -5, 19, 1536, 2220, 0, 57, 105, 255),
    VTX(-4, -9, 19, -161, 2601, 184, 27, 92, 255),
    VTX(0, -13, 23, 512, 3072, 0, 0, 120, 255),
}; 

static Vtx object_gi_purseVtx_0016E0[7] = {
    VTX(-4, -17, 19, -161, 3543, 184, 229, 92, 255),
    VTX(0, -13, 23, 512, 3072, 0, 0, 120, 255),
    VTX(-4, -9, 19, -161, 2601, 184, 27, 92, 255),
    VTX(0, -21, 19, 1536, 3924, 0, 199, 105, 255),
    VTX(4, -17, 19, 1185, 3543, 72, 229, 92, 255),
    VTX(4, -9, 19, 1185, 2601, 72, 27, 92, 255),
    VTX(0, -5, 19, 1536, 2220, 0, 57, 105, 255),
}; 

Gfx gGiAdultWalletColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 160, 130, 100, 255),
    gsDPSetEnvColor(70, 60, 50, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGiantsWalletColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 150, 80, 20, 255),
    gsDPSetEnvColor(40, 20, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiAdultWalletRupeeOuterColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 50, 70, 80, 255),
    gsDPSetEnvColor(0, 10, 20, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiAdultWalletStringColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 60, 40, 30, 255),
    gsDPSetEnvColor(20, 10, 10, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiAdultWalletRupeeInnerColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(50, 60, 60, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGiantsWalletRupeeOuterColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 80, 30, 40, 255),
    gsDPSetEnvColor(20, 30, 40, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGiantsWalletStringColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 180, 160, 100, 255),
    gsDPSetEnvColor(20, 10, 10, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGiantsWalletRupeeInnerColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 150, 255),
    gsDPSetEnvColor(100, 50, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiWalletDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_purseTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 0, 6, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&object_gi_purseVtx_001000[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 7, 1, 0),
    gsSP2Triangles(3, 5, 7, 0, 3, 6, 4, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_purseVtx_001080[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 8, 9, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 2, 12, 11, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 7, 0),
    gsSP2Triangles(13, 7, 6, 0, 13, 6, 9, 0),
    gsSP2Triangles(13, 9, 11, 0, 13, 11, 12, 0),
    gsSP2Triangles(12, 2, 1, 0, 15, 8, 4, 0),
    gsSP2Triangles(7, 5, 4, 0, 6, 4, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 10, 2, 0),
    gsSP2Triangles(2, 16, 0, 0, 17, 10, 8, 0),
    gsSP2Triangles(16, 2, 10, 0, 4, 3, 15, 0),
    gsSP2Triangles(8, 15, 17, 0, 10, 17, 16, 0),
    gsSP2Triangles(0, 16, 18, 0, 19, 0, 18, 0),
    gsSP2Triangles(3, 19, 18, 0, 15, 3, 18, 0),
    gsSP2Triangles(17, 15, 18, 0, 16, 17, 18, 0),
    gsSP2Triangles(20, 7, 14, 0, 5, 7, 20, 0),
    gsSP2Triangles(21, 5, 20, 0, 21, 3, 5, 0),
    gsSP2Triangles(19, 3, 21, 0, 12, 22, 14, 0),
    gsSP2Triangles(12, 1, 22, 0, 1, 23, 22, 0),
    gsSP2Triangles(23, 1, 0, 0, 0, 19, 23, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiWalletRupeeOuterDL[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_purseVtx_001200[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 1, 0),
    gsSP2Triangles(1, 13, 14, 0, 2, 14, 15, 0),
    gsSP2Triangles(4, 15, 16, 0, 6, 16, 17, 0),
    gsSP2Triangles(8, 17, 18, 0, 12, 19, 13, 0),
    gsSP2Triangles(2, 3, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 7, 5, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 20, 9, 0, 1, 0, 11, 0),
    gsSP2Triangles(14, 2, 1, 0, 15, 4, 2, 0),
    gsSP2Triangles(16, 21, 4, 0, 17, 8, 6, 0),
    gsSP2Triangles(18, 10, 8, 0, 13, 1, 12, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiWalletStringDL[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_purseVtx_001360[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 2, 10, 0),
    gsSP2Triangles(2, 11, 0, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 7, 9, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 16, 0),
    gsSP2Triangles(17, 15, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 19, 23, 0, 24, 22, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 26, 30, 0),
    gsSPVertex(&object_gi_purseVtx_001360[31], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 2, 1, 0, 2, 20, 0, 0),
    gsSP1Triangle(0, 20, 21, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiWalletRupeeInnerDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(5000, 5000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_purseTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 15, 0, 6, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 0, 6, 15, 0, 6, 1),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_purseVtx_0016B0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_purseVtx_0016E0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 3, 0, 1, 4, 5, 0),
    gsSP1Triangle(6, 1, 5, 0),
    gsSPEndDisplayList(),
}; 


