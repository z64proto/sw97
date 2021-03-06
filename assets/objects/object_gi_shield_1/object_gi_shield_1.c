#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_shield_1.h"

static Vtx object_gi_shield_1Vtx_000400[3];
static Vtx object_gi_shield_1Vtx_000430[27];
static Vtx object_gi_shield_1Vtx_0005E0[32];
static Vtx object_gi_shield_1Vtx_0007E0[15];
static Vtx object_gi_shield_1Vtx_0008D0[8];
static Vtx object_gi_shield_1Vtx_000950[16];

u64 object_gi_shield_1Tex_000000[] = {
#include "assets/objects/object_gi_shield_1//object_gi_shield_1Tex_000000.i8.inc.c"
};

static Vtx object_gi_shield_1Vtx_000400[3] = {
    VTX(-4, 15, 9, 67, 1107, 0, 0, 120, 255),
    VTX(-8, 13, 9, 32, 1200, 228, 254, 116, 255),
    VTX(-8, 7, 9, 33, 1271, 218, 254, 113, 255),
}; 

static Vtx object_gi_shield_1Vtx_000430[27] = {
    VTX(-8, 13, 9, 32, 1200, 228, 254, 116, 255),
    VTX(-13, 7, 7, -10, 1347, 203, 254, 107, 255),
    VTX(-8, 7, 9, 33, 1271, 218, 254, 113, 255),
    VTX(-8, -1, 9, 35, 1524, 217, 255, 113, 255),
    VTX(-12, -3, 7, -7, 1579, 206, 255, 109, 255),
    VTX(-7, -8, 9, 37, 1768, 239, 255, 118, 255),
    VTX(-5, -4, 9, 53, 1674, 0, 0, 120, 255),
    VTX(0, -10, 9, 241, 1981, 0, 0, 120, 255),
    VTX(0, -5, 9, 271, 1894, 0, 0, 120, 255),
    VTX(6, -3, 9, 469, 1594, 27, 0, 116, 255),
    VTX(6, -7, 9, 468, 1779, 27, 255, 116, 255),
    VTX(9, -6, 8, 503, 1691, 53, 255, 107, 255),
    VTX(9, -1, 8, 504, 1503, 54, 0, 107, 255),
    VTX(13, -7, 6, 533, 1674, 54, 255, 107, 255),
    VTX(6, -9, 9, 468, 1827, 36, 255, 114, 255),
    VTX(6, -13, 9, 467, 1890, 19, 236, 116, 255),
    VTX(-3, -13, 9, 77, 1948, 0, 227, 116, 255),
    VTX(-5, -18, 7, -21, 1945, 0, 199, 105, 255),
    VTX(13, 6, 6, 532, 1359, 55, 255, 106, 255),
    VTX(9, 4, 8, 502, 1337, 55, 254, 106, 255),
    VTX(7, 11, 9, 471, 1185, 19, 0, 118, 255),
    VTX(7, 6, 9, 470, 1251, 38, 254, 113, 255),
    VTX(2, 10, 9, 374, 1085, 0, 0, 120, 255),
    VTX(3, 6, 9, 436, 1180, 0, 0, 120, 255),
    VTX(-1, 6, 9, 175, 1107, 0, 0, 120, 255),
    VTX(1, 0, 9, 327, 1328, 0, 0, 120, 255),
    VTX(5, 2, 9, 452, 1312, 0, 0, 120, 255),
}; 

static Vtx object_gi_shield_1Vtx_0005E0[32] = {
    VTX(-9, 15, 9, 7645, -520, 237, 24, 115, 255),
    VTX(7, 19, 9, 8639, -635, 20, 11, 117, 255),
    VTX(-9, 31, 0, 7249, -1065, 237, 59, 102, 255),
    VTX(-27, 23, 0, 6607, -802, 206, 12, 108, 255),
    VTX(13, 6, 6, 885, -210, 56, 253, 105, 255),
    VTX(13, -7, 6, 898, 256, 62, 252, 102, 255),
    VTX(22, -19, 0, 1486, 653, 54, 236, 105, 255),
    VTX(6, -13, 9, 401, 460, 32, 211, 106, 255),
    VTX(0, -30, 0, 0, 1039, 0, 192, 101, 255),
    VTX(27, 23, 0, 1585, -802, 52, 251, 108, 255),
    VTX(7, 19, 9, 447, -635, 20, 11, 117, 255),
    VTX(7, 11, 9, 436, -375, 19, 0, 118, 255),
    VTX(0, -30, 0, 8192, 1039, 0, 192, 101, 255),
    VTX(6, -13, 9, 8593, 460, 32, 211, 106, 255),
    VTX(-5, -18, 7, 7804, 610, 239, 194, 101, 255),
    VTX(-22, -19, 0, 6706, 653, 201, 229, 103, 255),
    VTX(-7, -13, 9, 7738, 460, 231, 223, 112, 255),
    VTX(-3, -13, 9, 7974, 460, 0, 241, 119, 255),
    VTX(-7, -8, 9, 7721, 277, 225, 252, 115, 255),
    VTX(0, -10, 9, 8188, 332, 0, 0, 120, 255),
    VTX(6, -9, 9, 8598, 323, 18, 0, 118, 255),
    VTX(6, -7, 9, 409, 256, 27, 255, 116, 255),
    VTX(6, -9, 9, 406, 323, 18, 0, 118, 255),
    VTX(9, -6, 8, 592, 208, 52, 255, 107, 255),
    VTX(6, -7, 9, 8601, 256, 27, 255, 116, 255),
    VTX(-12, -3, 7, 7366, 112, 192, 249, 101, 255),
    VTX(-13, 7, 7, 7339, -234, 195, 252, 102, 255),
    VTX(-8, 13, 9, 7652, -438, 219, 254, 114, 255),
    VTX(-4, 15, 9, 7937, -500, 0, 0, 120, 255),
    VTX(7, 11, 9, 8628, -375, 19, 0, 118, 255),
    VTX(2, 10, 9, 8300, -351, 0, 0, 120, 255),
    VTX(-8, 7, 9, 7670, -247, 0, 0, 120, 255),
}; 

static Vtx object_gi_shield_1Vtx_0007E0[15] = {
    VTX(2, 10, 9, 8300, -351, 0, 0, 120, 255),
    VTX(-8, 7, 9, 7670, -247, 0, 0, 120, 255),
    VTX(-1, 6, 9, 8136, -197, 0, 0, 120, 255),
    VTX(-8, -1, 9, 7698, 45, 0, 0, 120, 255),
    VTX(1, 0, 9, 8252, 8, 0, 0, 120, 255),
    VTX(-5, -4, 9, 7866, 136, 0, 0, 120, 255),
    VTX(0, -5, 9, 8209, 169, 0, 0, 120, 255),
    VTX(0, -5, 9, 17, 169, 0, 0, 120, 255),
    VTX(6, -3, 9, 416, 95, 15, 5, 118, 255),
    VTX(1, 0, 9, 60, 8, 0, 0, 120, 255),
    VTX(5, 2, 9, 301, -77, 26, 6, 116, 255),
    VTX(9, -1, 8, 596, 25, 38, 7, 113, 255),
    VTX(9, 4, 8, 582, -149, 25, 242, 116, 255),
    VTX(3, 6, 9, 231, -191, 21, 236, 116, 255),
    VTX(7, 6, 9, 430, -218, 13, 207, 108, 255),
}; 

static Vtx object_gi_shield_1Vtx_0008D0[8] = {
    VTX(0, -30, 0, 512, 995, 0, 23, 139, 255),
    VTX(0, 3, 6, 512, 439, 2, 10, 137, 255),
    VTX(22, -19, 0, -341, 805, 235, 13, 139, 255),
    VTX(-22, -19, 0, 1365, 805, 21, 13, 139, 255),
    VTX(27, 23, 0, -546, 88, 212, 22, 147, 255),
    VTX(-27, 23, 0, 1570, 88, 21, 246, 139, 255),
    VTX(-9, 31, 0, 858, -42, 34, 241, 142, 255),
    VTX(7, 19, 9, 243, 170, 1, 19, 138, 255),
}; 

static Vtx object_gi_shield_1Vtx_000950[16] = {
    VTX(9, 5, 4, 0, 0, 243, 58, 152, 255),
    VTX(9, 1, 2, 0, 272, 0, 37, 142, 255),
    VTX(5, 1, 2, 225, 272, 247, 49, 148, 255),
    VTX(9, -10, -1, 0, 847, 255, 209, 146, 255),
    VTX(5, -10, -1, 225, 847, 0, 249, 137, 255),
    VTX(5, -13, 2, 225, 1024, 255, 177, 167, 255),
    VTX(5, 5, 5, 225, -6, 229, 66, 160, 255),
    VTX(9, -13, 2, 0, 1024, 254, 177, 166, 255),
    VTX(-5, 5, 5, 799, -6, 15, 58, 153, 255),
    VTX(-5, 1, 2, 799, 272, 0, 44, 145, 255),
    VTX(-9, 1, 2, 1024, 272, 10, 50, 148, 255),
    VTX(-5, -10, -1, 799, 847, 1, 209, 146, 255),
    VTX(-9, -10, -1, 1024, 847, 0, 250, 137, 255),
    VTX(-9, -13, 2, 1024, 1024, 1, 177, 167, 255),
    VTX(-9, 5, 4, 1024, 0, 29, 48, 150, 255),
    VTX(-5, -13, 2, 799, 1024, 2, 176, 167, 255),
}; 

Gfx gGiDekuShieldDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 255, 120, 50, 255),
    gsDPSetEnvColor(50, 0, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_shield_1Vtx_000400[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_shield_1Vtx_000430[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(1, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 6, 5, 7, 0),
    gsSP2Triangles(7, 8, 6, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 9, 7, 0, 10, 11, 9, 0),
    gsSP2Triangles(9, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 13, 11, 0, 14, 15, 13, 0),
    gsSP2Triangles(14, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(13, 18, 12, 0, 12, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 19, 18, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 23, 21, 20, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 23, 24, 0),
    gsSP1Triangle(25, 26, 23, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 160, 100, 40, 255),
    gsDPSetEnvColor(40, 10, 0, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_shield_1Tex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 15),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 1, 5, 0, 0, 5, 15),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 1, 0, 1, 5, 0, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_shield_1Vtx_0005E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 4, 6, 0, 4, 9, 10, 0),
    gsSP2Triangles(10, 11, 4, 0, 5, 7, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(15, 14, 16, 0, 14, 17, 16, 0),
    gsSP2Triangles(17, 18, 16, 0, 17, 19, 18, 0),
    gsSP2Triangles(17, 20, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 19, 20, 0, 18, 15, 16, 0),
    gsSP2Triangles(25, 15, 18, 0, 26, 3, 15, 0),
    gsSP2Triangles(15, 25, 26, 0, 3, 27, 0, 0),
    gsSP2Triangles(3, 26, 27, 0, 0, 27, 28, 0),
    gsSP2Triangles(1, 0, 28, 0, 28, 29, 1, 0),
    gsSP2Triangles(28, 30, 29, 0, 28, 31, 30, 0),
    gsSPVertex(&object_gi_shield_1Vtx_0007E0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 2, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 8, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 13, 12, 14, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 160, 100, 40, 255),
    gsDPSetEnvColor(90, 50, 0, 255),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_gi_shield_1Vtx_0008D0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 1, 3, 0),
    gsSP2Triangles(1, 5, 6, 0, 1, 6, 7, 0),
    gsSP1Triangle(1, 7, 4, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 90, 50, 0, 255),
    gsDPSetEnvColor(40, 10, 0, 255),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_shield_1Vtx_000950[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(4, 3, 5, 0, 2, 6, 0, 0),
    gsSP2Triangles(4, 2, 1, 0, 7, 5, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(12, 11, 13, 0, 10, 14, 8, 0),
    gsSP2Triangles(12, 10, 9, 0, 15, 13, 11, 0),
    gsSPEndDisplayList(),
}; 


