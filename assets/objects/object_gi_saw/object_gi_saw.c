#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_saw.h"

static Vtx object_gi_sawVtx_000000[3];
static Vtx object_gi_sawVtx_000030[32];
static Vtx object_gi_sawVtx_000230[21];
static Vtx object_gi_sawVtx_000380[31];
static Vtx object_gi_sawVtx_000570[10];
static Vtx object_gi_sawVtx_000610[19];
static Vtx object_gi_sawVtx_000740[10];

static Vtx object_gi_sawVtx_000000[3] = {
    VTX(-15, 31, 0, 512, 1191, 84, 84, 0, 255),
    VTX(-19, 31, -1, 527, 1143, 247, 52, 149, 255),
    VTX(-19, 31, 1, 497, 1143, 231, 65, 97, 255),
}; 

static Vtx object_gi_sawVtx_000030[32] = {
    VTX(-14, 27, 1, 497, 1184, 65, 65, 77, 255),
    VTX(-14, 27, -1, 527, 1184, 65, 65, 179, 255),
    VTX(-15, 31, 0, 512, 1191, 84, 84, 0, 255),
    VTX(-19, 31, 1, 497, 1143, 231, 65, 97, 255),
    VTX(-19, 31, -1, 527, 1143, 247, 52, 149, 255),
    VTX(-10, 26, 0, 512, 1253, 84, 84, 0, 255),
    VTX(-9, 22, 1, 497, 1262, 65, 65, 77, 255),
    VTX(-9, 22, -1, 527, 1262, 65, 65, 179, 255),
    VTX(-5, 21, 0, 512, 1363, 84, 84, 0, 255),
    VTX(-5, 17, 1, 497, 1422, 65, 65, 77, 255),
    VTX(-5, 17, -1, 527, 1422, 65, 65, 179, 255),
    VTX(-1, 17, 0, 512, 1539, 84, 84, 0, 255),
    VTX(0, 12, 1, 497, 1657, 65, 65, 77, 255),
    VTX(0, 12, -1, 527, 1657, 65, 65, 179, 255),
    VTX(4, 12, 0, 512, 1713, 76, 76, 53, 255),
    VTX(5, 8, 1, 497, 1813, 35, 35, 109, 255),
    VTX(5, 8, -1, 527, 1813, 35, 35, 147, 255),
    VTX(4, 12, 0, 512, 1713, 27, 27, 143, 255),
    VTX(9, 7, 0, 512, 1821, 76, 76, 53, 255),
    VTX(9, 3, 1, 497, 1890, 65, 65, 77, 255),
    VTX(9, 3, -1, 527, 1890, 65, 65, 179, 255),
    VTX(9, 7, 0, 512, 1821, 27, 27, 143, 255),
    VTX(13, 2, 0, 512, 1882, 77, 75, 203, 255),
    VTX(14, -2, 1, 497, 1929, 77, 225, 86, 255),
    VTX(14, -2, -1, 527, 1929, 65, 244, 156, 255),
    VTX(13, 2, 0, 512, 1882, 27, 27, 113, 255),
    VTX(-31, 19, 1, 15, 1143, 204, 9, 107, 255),
    VTX(-31, 19, -1, -15, 1143, 191, 25, 159, 255),
    VTX(-31, 15, 0, 0, 1191, 180, 180, 53, 255),
    VTX(-27, 14, -1, -15, 1184, 191, 191, 179, 255),
    VTX(-27, 14, 1, 15, 1184, 191, 191, 77, 255),
    VTX(-31, 15, 0, 0, 1191, 229, 229, 143, 255),
}; 

static Vtx object_gi_sawVtx_000230[21] = {
    VTX(-27, 14, 1, 15, 1184, 191, 191, 77, 255),
    VTX(-27, 14, -1, -15, 1184, 191, 191, 179, 255),
    VTX(-26, 10, 0, 0, 1253, 172, 172, 0, 255),
    VTX(-22, 9, -1, -15, 1262, 191, 191, 179, 255),
    VTX(-22, 9, 1, 15, 1262, 191, 191, 77, 255),
    VTX(-21, 5, 0, 0, 1363, 172, 172, 0, 255),
    VTX(-17, 5, -1, -15, 1422, 191, 191, 179, 255),
    VTX(-17, 5, 1, 15, 1422, 191, 191, 77, 255),
    VTX(-17, 1, 0, 0, 1539, 172, 172, 0, 255),
    VTX(-12, 0, -1, -15, 1657, 191, 191, 179, 255),
    VTX(-12, 0, 1, 15, 1657, 191, 191, 77, 255),
    VTX(-12, -4, 0, 0, 1713, 172, 172, 0, 255),
    VTX(-8, -5, -1, -15, 1813, 221, 221, 147, 255),
    VTX(-8, -5, 1, 15, 1813, 221, 221, 109, 255),
    VTX(-7, -9, 0, 0, 1821, 180, 180, 53, 255),
    VTX(-3, -9, -1, -15, 1890, 191, 191, 179, 255),
    VTX(-3, -9, 1, 15, 1890, 191, 191, 77, 255),
    VTX(-7, -9, 0, 0, 1821, 229, 229, 143, 255),
    VTX(-2, -13, 0, 0, 1882, 172, 171, 0, 255),
    VTX(2, -14, -1, -15, 1929, 31, 179, 170, 255),
    VTX(2, -14, 1, 15, 1929, 12, 191, 100, 255),
}; 

static Vtx object_gi_sawVtx_000380[31] = {
    VTX(-13, 13, 1, 256, 1070, 0, 0, 120, 255),
    VTX(-19, 31, 1, 497, 1143, 231, 65, 97, 255),
    VTX(-31, 19, 1, 15, 1143, 204, 9, 107, 255),
    VTX(-6, 10, 1, 472, 1614, 0, 0, 120, 255),
    VTX(5, 8, 1, 497, 1813, 35, 35, 109, 255),
    VTX(0, 4, 1, 472, 1934, 0, 0, 120, 255),
    VTX(-5, 5, 1, 256, 1999, 0, 0, 120, 255),
    VTX(-10, 6, 1, 40, 1614, 0, 0, 120, 255),
    VTX(-8, -5, 1, 15, 1813, 221, 221, 109, 255),
    VTX(-4, 0, 1, 40, 1934, 0, 0, 120, 255),
    VTX(-31, 19, -1, 1009, 1143, 191, 25, 159, 255),
    VTX(-19, 31, -1, 527, 1143, 247, 52, 149, 255),
    VTX(-13, 13, -1, 768, 1070, 0, 0, 136, 255),
    VTX(-6, 10, -1, 552, 1614, 0, 0, 136, 255),
    VTX(5, 8, -1, 527, 1813, 35, 35, 147, 255),
    VTX(0, 4, -1, 552, 1934, 0, 0, 136, 255),
    VTX(-5, 5, -1, 768, 1999, 0, 0, 136, 255),
    VTX(-10, 6, -1, 984, 1614, 0, 0, 136, 255),
    VTX(-8, -5, -1, 1009, 1813, 221, 221, 147, 255),
    VTX(-4, 0, -1, 984, 1934, 0, 0, 136, 255),
    VTX(14, -2, 1, 497, 1929, 77, 225, 86, 255),
    VTX(10, -5, 1, 472, 2002, 60, 196, 84, 255),
    VTX(10, -5, -1, 552, 2002, 76, 180, 203, 255),
    VTX(5, -10, 1, 40, 2002, 76, 180, 53, 255),
    VTX(2, -14, 1, 15, 1929, 12, 191, 100, 255),
    VTX(2, -14, -1, -15, 1929, 31, 179, 170, 255),
    VTX(14, -2, -1, 527, 1929, 65, 244, 156, 255),
    VTX(5, -10, -1, -40, 2002, 60, 196, 172, 255),
    VTX(-31, 19, -1, -15, 1143, 191, 25, 159, 255),
    VTX(5, -10, -1, 984, 2002, 60, 196, 172, 255),
    VTX(2, -14, -1, 1009, 1929, 31, 179, 170, 255),
}; 

static Vtx object_gi_sawVtx_000570[10] = {
    VTX(-8, 8, 4, 256, 1618, 7, 249, 119, 255),
    VTX(-6, 10, 1, 472, 1629, 63, 52, 88, 255),
    VTX(-13, 13, 1, 256, 1072, 221, 35, 108, 255),
    VTX(-10, 6, 1, 40, 1629, 204, 193, 88, 255),
    VTX(-5, 5, 1, 256, 2000, 47, 209, 100, 255),
    VTX(-13, 13, -1, 768, 1072, 221, 35, 148, 255),
    VTX(-6, 10, -1, 552, 1629, 63, 52, 168, 255),
    VTX(-8, 8, -4, 768, 1618, 7, 249, 137, 255),
    VTX(-10, 6, -1, 984, 1629, 204, 193, 168, 255),
    VTX(-5, 5, -1, 768, 2000, 47, 209, 156, 255),
}; 

static Vtx object_gi_sawVtx_000610[19] = {
    VTX(5, -10, 1, 404, 545, 193, 191, 78, 255),
    VTX(5, -10, -1, 364, 545, 193, 191, 178, 255),
    VTX(17, -21, 0, 384, 1024, 174, 169, 0, 255),
    VTX(0, 4, 1, 108, 118, 28, 64, 97, 255),
    VTX(-5, 5, 1, 0, 0, 215, 41, 105, 255),
    VTX(-2, 2, 3, 0, 118, 242, 14, 118, 255),
    VTX(-5, 5, 1, 512, 0, 215, 41, 105, 255),
    VTX(-4, 0, 1, 404, 118, 192, 228, 97, 255),
    VTX(-2, 2, 3, 512, 118, 242, 14, 118, 255),
    VTX(19, -19, 3, 512, 1024, 2, 254, 119, 255),
    VTX(19, -19, 3, 0, 1024, 2, 254, 119, 255),
    VTX(10, -5, 1, 108, 545, 65, 63, 78, 255),
    VTX(21, -17, 0, 128, 1024, 87, 82, 0, 255),
    VTX(10, -5, -1, 148, 545, 65, 63, 178, 255),
    VTX(-2, 2, -3, 256, 118, 242, 14, 138, 255),
    VTX(-5, 5, -1, 256, 0, 215, 41, 151, 255),
    VTX(0, 4, -1, 148, 118, 28, 64, 159, 255),
    VTX(-4, 0, -1, 364, 118, 192, 228, 159, 255),
    VTX(19, -19, -3, 256, 1024, 2, 254, 137, 255),
}; 

static Vtx object_gi_sawVtx_000740[10] = {
    VTX(26, -31, 0, 384, 1895, 205, 153, 224, 255),
    VTX(30, -30, -3, 256, 2309, 70, 226, 164, 255),
    VTX(30, -30, 3, 512, 2309, 30, 186, 92, 255),
    VTX(21, -17, 0, 128, -1071, 79, 79, 215, 255),
    VTX(31, -26, 0, 128, 1895, 103, 51, 32, 255),
    VTX(19, -19, -3, 256, -1071, 231, 231, 142, 255),
    VTX(17, -21, 0, 384, -1071, 177, 177, 41, 255),
    VTX(19, -19, 3, 0, -1071, 25, 25, 114, 255),
    VTX(30, -30, 3, 0, 2309, 30, 186, 92, 255),
    VTX(19, -19, 3, 512, -1071, 25, 25, 114, 255),
}; 

Gfx gGiSawDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsDPSetEnvColor(130, 140, 150, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(6000, 6000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_sawVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_sawVtx_000030[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 0, 0),
    gsSP2Triangles(1, 5, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(9, 10, 8, 0, 9, 8, 6, 0),
    gsSP2Triangles(7, 8, 10, 0, 11, 10, 9, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 9, 0),
    gsSP2Triangles(10, 11, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 14, 12, 0),
    gsSP2Triangles(13, 17, 16, 0, 18, 16, 15, 0),
    gsSP2Triangles(19, 20, 18, 0, 19, 18, 15, 0),
    gsSP2Triangles(16, 21, 20, 0, 22, 20, 19, 0),
    gsSP2Triangles(23, 24, 22, 0, 23, 25, 19, 0),
    gsSP2Triangles(20, 22, 24, 0, 26, 27, 28, 0),
    gsSP2Triangles(28, 29, 30, 0, 26, 28, 30, 0),
    gsSP1Triangle(29, 31, 27, 0),
    gsSPVertex(&object_gi_sawVtx_000230[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 3, 5, 0, 5, 6, 7, 0),
    gsSP2Triangles(4, 5, 7, 0, 6, 5, 3, 0),
    gsSP2Triangles(7, 6, 8, 0, 8, 9, 10, 0),
    gsSP2Triangles(7, 8, 10, 0, 9, 8, 6, 0),
    gsSP2Triangles(10, 9, 11, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 11, 13, 0, 12, 11, 9, 0),
    gsSP2Triangles(13, 12, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(13, 14, 16, 0, 15, 17, 12, 0),
    gsSP2Triangles(16, 15, 18, 0, 18, 19, 20, 0),
    gsSP2Triangles(16, 18, 20, 0, 19, 18, 15, 0),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 20, 2, 0x00000000),
    gsDPSetRenderMode(G_RM_AA_ZB_TEX_EDGE, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 150, 160, 170, 255),
    gsDPSetEnvColor(40, 50, 60, 255),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsSPVertex(&object_gi_sawVtx_000380[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 1, 3, 0, 3, 5, 4, 0),
    gsSP2Triangles(6, 5, 3, 0, 7, 0, 2, 0),
    gsSP2Triangles(8, 7, 2, 0, 9, 6, 7, 0),
    gsSP2Triangles(8, 9, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 12, 11, 0, 13, 11, 14, 0),
    gsSP2Triangles(14, 15, 13, 0, 13, 15, 16, 0),
    gsSP2Triangles(10, 12, 17, 0, 10, 17, 18, 0),
    gsSP2Triangles(17, 16, 19, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(1, 11, 10, 0, 22, 26, 20, 0),
    gsSP2Triangles(25, 27, 23, 0, 28, 2, 1, 0),
    gsSP2Triangles(26, 22, 14, 0, 22, 15, 14, 0),
    gsSP2Triangles(5, 21, 4, 0, 21, 20, 4, 0),
    gsSP2Triangles(19, 29, 18, 0, 29, 30, 18, 0),
    gsSP2Triangles(24, 23, 8, 0, 23, 9, 8, 0),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 20, 2, 0x00100000),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 120, 0, 255),
    gsSPVertex(&object_gi_sawVtx_000570[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 1, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 9, 7, 6, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 200, 150, 0, 255),
    gsDPSetEnvColor(110, 70, 0, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_sawVtx_000610[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 0, 9, 8, 0),
    gsSP2Triangles(8, 7, 0, 0, 0, 2, 9, 0),
    gsSP2Triangles(10, 11, 5, 0, 10, 12, 11, 0),
    gsSP2Triangles(3, 5, 11, 0, 12, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(14, 18, 1, 0, 1, 17, 14, 0),
    gsSP2Triangles(18, 2, 1, 0, 14, 13, 18, 0),
    gsSP2Triangles(13, 12, 18, 0, 13, 14, 16, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 130, 80, 0, 255),
    gsDPSetEnvColor(40, 10, 0, 255),
    gsSPVertex(&object_gi_sawVtx_000740[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 0, 2, 0),
    gsSP2Triangles(7, 8, 4, 0, 4, 2, 1, 0),
    gsSP2Triangles(1, 5, 3, 0, 0, 6, 5, 0),
    gsSP2Triangles(2, 9, 6, 0, 4, 3, 7, 0),
    gsSPEndDisplayList(),
}; 

