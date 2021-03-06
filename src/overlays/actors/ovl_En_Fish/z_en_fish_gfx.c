
#include "ultra64.h"
#include "z64.h"
#include "macros.h"

static Vtx object_gi_fishVtx_000000[3] = {
    VTX(-10, -31, 17, 171, 1867, 236, 143, 35, 255),
    VTX(-19, -31, 0, 0, 1867, 202, 149, 0, 255),
    VTX(-10, -31, -17, -171, 1867, 229, 149, 209, 255),
};

static Vtx object_gi_fishVtx_000030[28] = {
    VTX(-10, -31, 17, 171, 1867, 236, 143, 35, 255),    VTX(-10, -31, -17, -171, 1867, 229, 149, 209, 255),
    VTX(10, -31, -17, 683, 1867, 20, 143, 221, 255),    VTX(19, -31, 0, 512, 1867, 54, 149, 0, 255),
    VTX(10, -31, 17, 341, 1867, 27, 149, 47, 255),      VTX(13, -26, -22, 683, 1788, 54, 207, 162, 255),
    VTX(26, -26, 0, 512, 1788, 109, 207, 0, 255),       VTX(23, 20, 0, 512, 1301, 116, 228, 0, 255),
    VTX(12, 20, -20, 683, 1301, 58, 228, 155, 255),     VTX(15, 31, -25, 683, 1271, 52, 198, 166, 255),
    VTX(29, 31, 0, 512, 1271, 104, 198, 0, 255),        VTX(-10, -31, -17, 853, 1867, 229, 149, 209, 255),
    VTX(-13, -26, -22, 853, 1788, 202, 207, 162, 255),  VTX(-12, 20, -20, 853, 1301, 198, 228, 155, 255),
    VTX(-15, 31, -25, 853, 1271, 204, 198, 166, 255),   VTX(-26, -26, 0, 0, 1788, 147, 207, 0, 255),
    VTX(-13, -26, -22, -171, 1788, 202, 207, 162, 255), VTX(-19, -31, 0, 0, 1867, 202, 149, 0, 255),
    VTX(-12, 20, -20, -171, 1301, 198, 228, 155, 255),  VTX(-23, 20, 0, 0, 1301, 140, 228, 0, 255),
    VTX(-29, 31, 0, 0, 1271, 152, 198, 0, 255),         VTX(-15, 31, -25, -171, 1271, 204, 198, 166, 255),
    VTX(-13, -26, 22, 171, 1788, 202, 207, 94, 255),    VTX(-12, 20, 20, 171, 1301, 198, 228, 101, 255),
    VTX(-15, 31, 25, 171, 1271, 204, 198, 90, 255),     VTX(13, -26, 22, 341, 1788, 54, 207, 94, 255),
    VTX(12, 20, 20, 341, 1301, 58, 228, 101, 255),      VTX(15, 31, 25, 341, 1271, 52, 198, 90, 255),
};

static Vtx object_gi_fishVtx_0001F0[3] = {
    VTX(11, -25, 19, 341, 1760, 58, 227, 100, 255),
    VTX(21, 11, 0, 512, 1302, 102, 63, 0, 255),
    VTX(10, 11, 18, 341, 1302, 38, 92, 66, 255),
};

static Vtx object_gi_fishVtx_000220[14] = {
    VTX(11, -25, 19, 341, 1760, 58, 227, 100, 255),   VTX(22, -25, 0, 512, 1760, 80, 167, 0, 255),
    VTX(21, 11, 0, 512, 1302, 102, 63, 0, 255),       VTX(-11, -25, 19, 171, 1760, 232, 147, 42, 255),
    VTX(-10, 11, 18, 171, 1302, 205, 63, 88, 255),    VTX(-22, -25, 0, 0, 1760, 140, 227, 0, 255),
    VTX(-21, 11, 0, 0, 1302, 154, 63, 0, 255),        VTX(11, -25, -19, 683, 1760, 53, 199, 165, 255),
    VTX(10, 11, -18, 683, 1302, 51, 63, 168, 255),    VTX(-11, -25, -19, -171, 1760, 216, 167, 187, 255),
    VTX(-10, 11, -18, -171, 1302, 218, 92, 190, 255), VTX(10, 11, 18, 341, 1302, 38, 92, 66, 255),
    VTX(-10, 11, -18, 853, 1302, 218, 92, 190, 255),  VTX(-11, -25, -19, 853, 1760, 216, 167, 187, 255),
};

static Vtx object_gi_fishVtx_000300[3] = {
    VTX(-20, -15, 0, 0, 1585, 208, 246, 109, 255),
    VTX(-13, -14, 3, 37, 1595, 231, 248, 117, 255),
    VTX(-14, -5, 0, 0, 1383, 222, 30, 111, 255),
};

static Vtx object_gi_fishVtx_000330[32] = {
    VTX(-20, -15, 0, 0, 1585, 208, 246, 109, 255),    VTX(-12, -22, 0, 0, 1753, 229, 210, 107, 255),
    VTX(-13, -14, 3, 37, 1595, 231, 248, 117, 255),   VTX(-20, -15, 0, 0, 1585, 208, 246, 147, 255),
    VTX(-13, -14, -3, -37, 1595, 231, 248, 139, 255), VTX(-12, -22, 0, 0, 1753, 229, 210, 149, 255),
    VTX(-14, -5, 0, 0, 1383, 222, 30, 145, 255),      VTX(3, -14, 3, 400, 1649, 17, 3, 118, 255),
    VTX(-5, -14, 4, 99, 1632, 4, 2, 119, 255),        VTX(-5, -23, 0, 0, 1910, 2, 213, 111, 255),
    VTX(11, -12, 0, 512, 1524, 246, 64, 101, 255),    VTX(3, -3, 0, 512, 1119, 17, 31, 114, 255),
    VTX(11, -16, 0, 512, 1644, 254, 198, 152, 255),   VTX(2, -21, 0, 512, 1973, 18, 215, 145, 255),
    VTX(3, -14, -3, 624, 1649, 17, 238, 139, 255),    VTX(11, -13, -2, 535, 1577, 5, 6, 137, 255),
    VTX(3, -3, 0, 512, 1119, 25, 41, 146, 255),       VTX(11, -13, 2, 489, 1577, 14, 240, 118, 255),
    VTX(2, -21, 0, 512, 1973, 22, 207, 107, 255),     VTX(11, -16, 0, 512, 1644, 253, 189, 99, 255),
    VTX(11, -12, 0, 512, 1524, 252, 77, 165, 255),    VTX(19, -4, 0, 512, 1409, 194, 77, 189, 255),
    VTX(11, -13, 2, 489, 1577, 189, 67, 73, 255),     VTX(20, -22, 0, 512, 1690, 246, 225, 141, 255),
    VTX(20, -22, 0, 512, 1690, 246, 225, 115, 255),   VTX(18, -13, 0, 512, 1559, 26, 1, 117, 255),
    VTX(19, -4, 0, 512, 1409, 26, 255, 117, 255),     VTX(18, -13, 0, 512, 1559, 26, 1, 139, 255),
    VTX(-5, -14, -4, 925, 1632, 5, 250, 137, 255),    VTX(-7, -1, 0, 0, 1194, 249, 32, 141, 255),
    VTX(-5, -14, -4, -99, 1632, 5, 250, 137, 255),    VTX(-5, -23, 0, 0, 1910, 254, 212, 145, 255),
};

static Vtx object_gi_fishVtx_000530[13] = {
    VTX(-5, -14, 4, 99, 1632, 4, 2, 119, 255),      VTX(3, -3, 0, 512, 1119, 17, 31, 114, 255),
    VTX(-7, -1, 0, 0, 1194, 249, 32, 115, 255),     VTX(-7, -1, 0, 0, 1194, 249, 32, 141, 255),
    VTX(-5, -14, -4, -99, 1632, 5, 250, 137, 255),  VTX(-13, -14, -3, -37, 1595, 231, 248, 139, 255),
    VTX(-14, -5, 0, 0, 1383, 222, 30, 145, 255),    VTX(-5, -23, 0, 0, 1910, 254, 212, 145, 255),
    VTX(-12, -22, 0, 0, 1753, 229, 210, 149, 255),  VTX(-5, -23, 0, 0, 1910, 2, 213, 111, 255),
    VTX(-13, -14, 3, 37, 1595, 231, 248, 117, 255), VTX(-12, -22, 0, 0, 1753, 229, 210, 107, 255),
    VTX(-14, -5, 0, 0, 1383, 222, 30, 111, 255),
};

Gfx sFishIShopDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 200),
    gsDPSetEnvColor(50, 100, 100, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(1500, 1500, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032890),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 15, 0, 5, 15),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 15, 0, 5, 15),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_fishVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_fishVtx_000030[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 2, 5, 3, 0),
    gsSP2Triangles(5, 6, 3, 0, 5, 7, 6, 0),
    gsSP2Triangles(5, 8, 7, 0, 7, 9, 10, 0),
    gsSP2Triangles(7, 8, 9, 0, 2, 11, 5, 0),
    gsSP2Triangles(11, 12, 5, 0, 5, 13, 8, 0),
    gsSP2Triangles(5, 12, 13, 0, 8, 13, 9, 0),
    gsSP2Triangles(13, 14, 9, 0, 1, 15, 16, 0),
    gsSP2Triangles(1, 17, 15, 0, 16, 15, 18, 0),
    gsSP2Triangles(15, 19, 18, 0, 19, 20, 18, 0),
    gsSP2Triangles(20, 21, 18, 0, 0, 15, 17, 0),
    gsSP2Triangles(0, 22, 15, 0, 22, 23, 15, 0),
    gsSP2Triangles(23, 19, 15, 0, 19, 23, 20, 0),
    gsSP2Triangles(23, 24, 20, 0, 0, 25, 22, 0),
    gsSP2Triangles(0, 4, 25, 0, 22, 25, 23, 0),
    gsSP2Triangles(25, 26, 23, 0, 23, 27, 24, 0),
    gsSP2Triangles(23, 26, 27, 0, 4, 3, 25, 0),
    gsSP2Triangles(3, 6, 25, 0, 25, 7, 26, 0),
    gsSP2Triangles(25, 6, 7, 0, 7, 27, 26, 0),
    gsSP1Triangle(7, 10, 27, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, 1, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 128, 170, 255, 255, 255),
    gsDPSetEnvColor(0, 100, 130, 255),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 2),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 2),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 1, 0, 0, 5, 15, 0, 5, 1),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_gi_fishVtx_0001F0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_fishVtx_000220[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 2, 1, 0),
    gsSP2Triangles(7, 8, 2, 0, 9, 5, 10, 0),
    gsSP2Triangles(5, 6, 10, 0, 3, 0, 4, 0),
    gsSP2Triangles(0, 11, 4, 0, 7, 12, 8, 0),
    gsSP2Triangles(7, 13, 12, 0, 10, 6, 4, 0),
    gsSP2Triangles(10, 4, 11, 0, 10, 11, 2, 0),
    gsSP2Triangles(10, 2, 8, 0, 3, 5, 9, 0),
    gsSP2Triangles(3, 9, 7, 0, 3, 7, 1, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 20, 2, 0x00000000),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, 1, PRIMITIVE, ENVIRONMENT, TEXEL0,
                       ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetPrimColor(0, 0, 0, 100, 150, 255),
    gsDPSetEnvColor(0, 0, 50, 255),
    gsSPTexture(2000, 2000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_fishVtx_000300[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_fishVtx_000330[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 14, 16, 0, 7, 17, 10, 0),
    gsSP2Triangles(18, 19, 17, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 20, 15, 0, 21, 10, 22, 0),
    gsSP2Triangles(21, 15, 20, 0, 15, 23, 12, 0),
    gsSP2Triangles(24, 25, 17, 0, 17, 25, 26, 0),
    gsSP2Triangles(15, 21, 27, 0, 23, 15, 27, 0),
    gsSP2Triangles(17, 19, 24, 0, 7, 9, 18, 0),
    gsSP2Triangles(7, 18, 17, 0, 16, 14, 28, 0),
    gsSP2Triangles(29, 16, 30, 0, 28, 14, 13, 0),
    gsSP2Triangles(30, 13, 31, 0, 8, 7, 11, 0),
    gsSPVertex(&object_gi_fishVtx_000530[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 5, 4, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 0, 10, 0),
    gsSP2Triangles(11, 9, 10, 0, 10, 0, 2, 0),
    gsSP1Triangle(10, 2, 12, 0),
    gsSPEndDisplayList(),
};
