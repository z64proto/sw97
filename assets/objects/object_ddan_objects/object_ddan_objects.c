#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_ddan_objects.h"

static Vtx object_ddan_objectsVtx_000000[4];
static Vtx object_ddan_objectsVtx_000040[4];
static Vtx object_ddan_objectsVtx_000080[4];
static Vtx object_ddan_objectsVtx_000170[4];
static Vtx object_ddan_objectsVtx_0001B0[4];
static Vtx object_ddan_objectsVtx_000C10[57];
static Vtx object_ddan_objectsVtx_000FA0[4];
static Vtx object_ddan_objectsVtx_000FE0[3];
static Vtx object_ddan_objectsVtx_001010[4];
static Vtx object_ddan_objectsVtx_001050[32];
static Vtx object_ddan_objectsVtx_001250[16];
static Vtx object_ddan_objectsVtx_003418[16];
static Vtx object_ddan_objectsVtx_003518[8];
static Vtx object_ddan_objectsVtx_003598[16];
static Vtx object_ddan_objectsVtx_003698[18];
static Vtx object_ddan_objectsVtx_004318[32];
static Vtx object_ddan_objectsVtx_004518[48];
static Vtx object_ddan_objectsVtx_004818[4];
static Vtx object_ddan_objectsVtx_004858[5];

static Vtx object_dc_bombable_wallVtx_002800[16];
static Vtx object_dc_bombable_wallVtx_0029D8[16];
static Vtx object_dc_bombable_wallVtx_002BA8[18];
static Vtx object_dc_bombable_wallVtx_002DA0[4];

static Vtx object_ddan_objectsVtx_000000[4] = {
    VTX(100, 220, 12, 2048, -205, 51, 51, 51, 255),
    VTX(-100, 220, 12, 0, -205, 51, 51, 51, 255),
    VTX(-100, 0, 12, 0, 2048, 255, 255, 255, 255),
    VTX(100, 0, 12, 2048, 2048, 255, 255, 255, 255),
};

static Vtx object_ddan_objectsVtx_000040[4] = {
    VTX(100, 0, -12, 2048, 2048, 255, 255, 255, 255),
    VTX(-100, 0, -12, 0, 2048, 255, 255, 255, 255),
    VTX(-100, 220, -12, 0, -205, 51, 51, 51, 255),
    VTX(100, 220, -12, 2048, -205, 51, 51, 51, 255),
};

static Vtx object_ddan_objectsVtx_000080[4] = {
    VTX(-100, 0, -12, 0, 2048, 119, 119, 119, 255),
    VTX(100, 0, -12, 2048, 2048, 119, 119, 119, 255),
    VTX(100, 0, 12, 2048, 1825, 119, 119, 119, 255),
    VTX(-100, 0, 12, 0, 1825, 119, 119, 119, 255),
};

Gfx gDCDoorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_004F60),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0,
                       COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ddan_objectsVtx_000000[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_ddan_objectsVtx_000040[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_ddan_objectsVtx_000080[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

static Vtx object_ddan_objectsVtx_000170[4] = {
    VTX(-100, -40, 0, 0, 1024, 255, 255, 255, 255),
    VTX(100, -40, 0, 10240, 1024, 255, 255, 255, 255),
    VTX(100, 0, 0, 10240, 0, 255, 255, 255, 255),
    VTX(-100, 0, 0, 0, 0, 255, 255, 255, 255),
};

static Vtx object_ddan_objectsVtx_0001B0[4] = {
    VTX(-100, 0, 0, 0, 1024, 255, 255, 255, 255),
    VTX(100, 0, 0, 10240, 1024, 255, 255, 255, 255),
    VTX(100, 220, 0, 10240, -162, 255, 255, 255, 255),
    VTX(-100, 220, 0, 0, -162, 255, 255, 255, 255),
};

Gfx gDCLockDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_006760),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0,
                       0, 0, COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8113078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ddan_objectsVtx_000170[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_005F60),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_ddan_objectsVtx_0001B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
};

u64 object_ddan_objectsTex_0002D0[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_0002D0.rgb5a1.inc.c"
};

u64 object_ddan_objectsTex_000410[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_000410.ci8.inc.c"
};

static Vtx object_ddan_objectsVtx_000C10[57] = {
    VTX(-600, -405, 1848, -100, 849, 82, 172, 82, 255), VTX(-800, 0, 0, -100, -134, 119, 119, 119, 255),
    VTX(-2292, 0, 0, -967, -134, 0, 0, 0, 255),         VTX(2292, 0, 0, 1381, -134, 0, 0, 0, 255),
    VTX(800, 0, 0, 514, -134, 119, 119, 119, 255),      VTX(600, -405, 1848, 514, 849, 82, 172, 82, 255),
    VTX(-1711, -400, 1879, -669, 849, 0, 0, 0, 255),    VTX(1711, -400, 1879, 1083, 849, 0, 0, 0, 255),
    VTX(404, 0, 4323, 414, 2048, 172, 172, 82, 255),    VTX(-404, 0, 4323, 0, 2048, 172, 172, 82, 255),
    VTX(-600, -405, 1848, -100, 849, 82, 172, 82, 255), VTX(1000, -1600, -702, 928, 2900, 0, 0, 0, 255),
    VTX(2374, -1600, -702, 1936, 2900, 0, 0, 0, 255),   VTX(600, -1600, 564, 800, 2103, 214, 0, 0, 255),
    VTX(2046, -1600, 564, 1726, 2103, 53, 0, 0, 255),   VTX(-2046, -1600, 564, -893, 2103, 53, 0, 0, 255),
    VTX(-2374, -1600, -702, -1103, 2900, 0, 0, 0, 255), VTX(-600, -1600, 564, 32, 2103, 214, 0, 0, 255),
    VTX(-1000, -1600, -702, -96, 2900, 0, 0, 0, 255),   VTX(-800, -1956, -702, 32, 2900, 53, 0, 0, 255),
    VTX(800, -1956, -702, 800, 2900, 53, 0, 0, 255),    VTX(-600, 362, -170, -100, -251, 0, 0, 0, 255),
    VTX(600, 362, -170, 514, -251, 0, 0, 0, 255),       VTX(2456, 800, -376, 1465, -392, 0, 0, 0, 255),
    VTX(-2456, 800, -376, -1051, -392, 0, 0, 0, 255),   VTX(2703, 400, -702, 1120, 2938, 0, 0, 0, 255),
    VTX(2456, 800, -376, 1229, 2649, 0, 0, 0, 255),     VTX(2292, 0, 0, 1024, 2457, 0, 0, 0, 255),
    VTX(-2292, 0, 0, 3072, 2457, 0, 0, 0, 255),         VTX(-2456, 800, -376, 2867, 2649, 0, 0, 0, 255),
    VTX(-2703, 400, -702, 2976, 2938, 0, 0, 0, 255),    VTX(-240, 152, 4621, 84, 2238, 119, 119, 119, 255),
    VTX(0, 192, 4700, 207, 2288, 119, 119, 119, 255),   VTX(240, 152, 4621, 330, 2238, 119, 119, 119, 255),
    VTX(-404, 0, 4323, 0, 2048, 172, 172, 82, 255),     VTX(404, 0, 4323, 414, 2048, 172, 172, 82, 255),
    VTX(240, 152, 4621, 1024, 51, 119, 119, 119, 255),  VTX(0, 192, 4700, 512, 0, 119, 119, 119, 255),
    VTX(0, -111, 4753, 0, 0, 82, 172, 82, 255),         VTX(240, -111, 4653, 571, 51, 82, 172, 82, 255),
    VTX(404, 0, 4323, 1024, 244, 172, 172, 82, 255),    VTX(404, -400, 4323, 515, 244, 82, 172, 82, 255),
    VTX(650, -800, 3759, 445, 532, 0, 53, 0, 255),      VTX(979, -800, 3007, 577, 917, 82, 172, 82, 255),
    VTX(0, -111, 4753, 4096, 0, 82, 172, 82, 255),      VTX(-240, -111, 4653, 3525, 51, 82, 172, 82, 255),
    VTX(-404, -400, 4323, 3581, 244, 82, 172, 82, 255), VTX(-404, -400, 4323, 3581, 244, 0, 53, 0, 255),
    VTX(404, -400, 4323, 4611, 244, 0, 53, 0, 255),     VTX(240, -111, 4653, 4667, 51, 82, 172, 82, 255),
    VTX(404, -400, 4323, 4611, 244, 82, 172, 82, 255),  VTX(-650, -800, 3759, 3651, 532, 68, 68, 68, 255),
    VTX(650, -800, 3759, 4541, 532, 68, 68, 68, 255),   VTX(-404, 0, 4323, 3072, 244, 172, 172, 82, 255),
    VTX(-650, -800, 3759, 3651, 532, 0, 53, 0, 255),    VTX(-240, 152, 4621, 3072, 51, 119, 119, 119, 255),
    VTX(0, 192, 4700, 3810, 0, 119, 119, 119, 255),
};

static Vtx object_ddan_objectsVtx_000FA0[4] = {
    VTX(1711, -200, 1879, -13310, 1024, 119, 119, 119, 255),
    VTX(1711, -400, 1879, -13456, 10, 34, 34, 34, 255),
    VTX(404, 0, 4323, 878, 10, 172, 172, 82, 255),
    VTX(404, 200, 4323, 1024, 1024, 255, 255, 255, 255),
};

static Vtx object_ddan_objectsVtx_000FE0[3] = {
    VTX(979, -800, 3007, 577, 917, 82, 172, 82, 255),
    VTX(1711, -400, 1879, 874, 1495, 34, 34, 34, 255),
    VTX(404, 0, 4323, 1024, 244, 172, 172, 82, 255),
};

static Vtx object_ddan_objectsVtx_001010[4] = {
    VTX(-404, 0, 4323, 0, 0, 172, 172, 82, 255),
    VTX(-1711, -400, 1879, 14334, 0, 34, 34, 34, 255),
    VTX(-1711, -200, 1879, 14188, 1014, 119, 119, 119, 255),
    VTX(-404, 200, 4323, -146, 1014, 255, 255, 255, 255),
};

static Vtx object_ddan_objectsVtx_001050[32] = {
    VTX(979, -800, 3007, 1043, 474, 51, 51, 51, 255),  VTX(650, -800, 3759, 833, 0, 68, 68, 68, 255),
    VTX(-650, -800, 3759, 0, 0, 68, 68, 68, 255),      VTX(-979, -800, 3007, -210, 474, 51, 51, 51, 255),
    VTX(2374, -1600, -702, 637, 2553, 0, 0, 0, 255),   VTX(2703, 400, -702, 1120, 2938, 0, 0, 0, 255),
    VTX(2292, 0, 0, 1024, 2457, 0, 0, 0, 255),         VTX(2046, -1600, 564, 591, 2168, 53, 0, 0, 255),
    VTX(1711, -400, 1879, 874, 1495, 34, 34, 34, 255), VTX(979, -800, 3007, 577, 917, 82, 172, 82, 255),
    VTX(-404, 0, 4323, 3072, 244, 172, 172, 82, 255),  VTX(-979, -800, 3007, 3519, 917, 82, 172, 82, 255),
    VTX(-650, -800, 3759, 3651, 532, 0, 53, 0, 255),   VTX(-1711, -400, 1879, 3222, 1495, 34, 34, 34, 255),
    VTX(-2046, -1600, 564, 3505, 2168, 53, 0, 0, 255), VTX(-2292, 0, 0, 3072, 2457, 0, 0, 0, 255),
    VTX(-2374, -1600, -702, 3459, 2553, 0, 0, 0, 255), VTX(-2703, 400, -702, 2976, 2938, 0, 0, 0, 255),
    VTX(-2046, -1600, 564, -893, 2103, 53, 0, 0, 255), VTX(-600, -1600, 564, 32, 2103, 214, 0, 0, 255),
    VTX(600, -1600, 564, 800, 2103, 214, 0, 0, 255),   VTX(2046, -1600, 564, 1726, 2103, 53, 0, 0, 255),
    VTX(800, 0, 0, 1536, 1177, 119, 119, 119, 255),    VTX(800, -1886, -1059, 512, 2006, 82, 172, 82, 255),
    VTX(600, -405, 1848, 512, 419, 82, 172, 82, 255),  VTX(800, -461, -1785, 1696, 2015, 53, 0, 0, 255),
    VTX(600, 362, -170, 1696, 1170, 0, 0, 0, 255),     VTX(800, -642, -2142, 1696, 2201, 53, 0, 0, 255),
    VTX(800, -2068, -1415, 512, 2201, 0, 0, 0, 255),   VTX(-800, -461, -1785, 2400, 2015, 53, 0, 0, 255),
    VTX(-800, 0, 0, 2560, 1177, 119, 119, 119, 255),   VTX(-800, -1886, -1059, 3584, 2006, 82, 172, 82, 255),
};

static Vtx object_ddan_objectsVtx_001250[16] = {
    VTX(-800, -461, -1785, 2400, 2015, 53, 0, 0, 255),     VTX(-600, 362, -170, 2400, 1170, 0, 0, 0, 255),
    VTX(-800, 0, 0, 2560, 1177, 119, 119, 119, 255),       VTX(-600, -405, 1848, 3584, 419, 82, 172, 82, 255),
    VTX(-800, -1886, -1059, 3584, 2006, 82, 172, 82, 255), VTX(-800, -2068, -1415, 3584, 2201, 0, 0, 0, 255),
    VTX(-800, -642, -2142, 2400, 2201, 53, 0, 0, 255),     VTX(800, -461, -1785, 1696, 2015, 53, 0, 0, 255),
    VTX(600, 362, -170, 1696, 1170, 0, 0, 0, 255),         VTX(800, -642, -2142, 1696, 2201, 53, 0, 0, 255),
    VTX(-800, -1886, -1059, 0, 215, 82, 172, 82, 255),     VTX(-600, -405, 1848, 0, 1970, 82, 172, 82, 255),
    VTX(600, -405, 1848, 1024, 1970, 82, 172, 82, 255),    VTX(800, -1886, -1059, 1024, 215, 82, 172, 82, 255),
    VTX(800, -2068, -1415, 1024, 0, 0, 0, 0, 255),         VTX(-800, -2068, -1415, 0, 0, 0, 0, 0, 255),
};

Gfx gJawDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_000410),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_0002D0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0,
                       COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ddan_objectsVtx_000C10[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 7, 3, 5, 0),
    gsSP2Triangles(8, 7, 5, 0, 9, 8, 5, 0),
    gsSP2Triangles(9, 5, 10, 0, 6, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(17, 18, 19, 0, 13, 20, 11, 0),
    gsSP2Triangles(13, 17, 19, 0, 13, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(21, 24, 2, 0, 21, 2, 1, 0),
    gsSP2Triangles(22, 4, 3, 0, 23, 22, 3, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&object_ddan_objectsVtx_000C10[31], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 5, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 11, 12, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 16, 17, 0, 18, 13, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(22, 23, 15, 0, 15, 14, 22, 0),
    gsSP2Triangles(14, 24, 22, 0, 14, 13, 25, 0),
    gsSP1Triangle(14, 25, 24, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_006F60),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0,
                       0, 0, COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8113078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_ddan_objectsVtx_000FA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_000410),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_0002D0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0,
                       COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_ddan_objectsVtx_000FE0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_006F60),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0,
                       0, 0, COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8113078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_ddan_objectsVtx_001010[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_000410),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_0002D0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0,
                       COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_ddan_objectsVtx_001050[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 7, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(13, 14, 11, 0, 13, 15, 14, 0),
    gsSP2Triangles(15, 16, 14, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 3, 0, 20, 21, 0, 0),
    gsSP2Triangles(19, 20, 0, 0, 19, 0, 3, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(22, 26, 25, 0, 25, 27, 23, 0),
    gsSP2Triangles(27, 28, 23, 0, 29, 30, 31, 0),
    gsSPVertex(&object_ddan_objectsVtx_001250[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 6, 0, 4, 0),
    gsSP2Triangles(1, 0, 7, 0, 1, 7, 8, 0),
    gsSP2Triangles(0, 6, 9, 0, 0, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 10, 0, 14, 10, 13, 0),
    gsSPEndDisplayList(),
};

static u8 unaccounted_001768[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

CamData gJawCol_camDataList_00001770[1] = {
    { 0x0000, 0, 0x00000000 },
};

u32 gJawCol_polygonTypes_00001778[] = {
    0x00000000, 0x000007C0, 0x00000000, 0x000007C2, 0x00000000, 0x000007D2,
};

CollisionPoly gJawCol_polygons_00001790[] = {
    { 0x0000, 0x0000, 0x0001, 0x0002, 0x8F21, 0x0000, 0xC3A4, 0x095B }, // 0x00001790
    { 0x0000, 0x0000, 0x0002, 0x0003, 0x8F21, 0x0000, 0xC3A4, 0x095B }, // 0x000017A0
    { 0x0000, 0x0004, 0x0005, 0x0006, 0x70DF, 0x0000, 0xC3A4, 0x095B }, // 0x000017B0
    { 0x0000, 0x0007, 0x0004, 0x0006, 0x70DF, 0x0000, 0xC3A4, 0x095B }, // 0x000017C0
    { 0x0001, 0x0002, 0x0001, 0x0008, 0x0002, 0x7E51, 0xEB55, 0x02BA }, // 0x000017D0
    { 0x0001, 0x0004, 0x0002, 0x0008, 0x0000, 0x7E51, 0xEB55, 0x02BA }, // 0x000017E0
    { 0x0001, 0x0004, 0x0008, 0x0009, 0x0000, 0x7E51, 0xEB55, 0x02BA }, // 0x000017F0
    { 0x0001, 0x0005, 0x0004, 0x0009, 0xFFFE, 0x7E51, 0xEB55, 0x02BA }, // 0x00001800
    { 0x0000, 0x000A, 0x000B, 0x000C, 0x0000, 0x8001, 0x0000, 0xF9C0 }, // 0x00001810
    { 0x0000, 0x000B, 0x000D, 0x000C, 0x0000, 0x8001, 0x0000, 0xF9C0 }, // 0x00001820
    { 0x0000, 0x000E, 0x000F, 0x0010, 0x0000, 0x8001, 0x0000, 0xF9C0 }, // 0x00001830
    { 0x0000, 0x000F, 0x0011, 0x0010, 0x0000, 0x8001, 0x0000, 0xF9C0 }, // 0x00001840
    { 0x0000, 0x0010, 0x0011, 0x0012, 0x946A, 0xC38F, 0x21FE, 0xFA7E }, // 0x00001850
    { 0x0000, 0x000C, 0x0013, 0x000A, 0x6B96, 0xC38F, 0x21FE, 0xFA7E }, // 0x00001860
    { 0x0000, 0x000C, 0x0010, 0x0012, 0x0000, 0x84C8, 0x22A6, 0xF963 }, // 0x00001870
    { 0x0000, 0x000C, 0x0012, 0x0013, 0x0000, 0x84C8, 0x22A6, 0xF963 }, // 0x00001880
    { 0x0000, 0x0014, 0x0015, 0x0016, 0x0000, 0x367A, 0x73D3, 0x0000 }, // 0x00001890
    { 0x0000, 0x0014, 0x0016, 0x0017, 0x0000, 0x367A, 0x73D3, 0x0000 }, // 0x000018A0
    { 0x0000, 0x0014, 0x0017, 0x0018, 0xFFFE, 0x3671, 0x73D7, 0x0000 }, // 0x000018B0
    { 0x0000, 0x0014, 0x0018, 0x0019, 0x0000, 0x3668, 0x73DB, 0x0000 }, // 0x000018C0
    { 0x0000, 0x0015, 0x001A, 0x001B, 0x0000, 0x3668, 0x73DB, 0x0000 }, // 0x000018D0
    { 0x0000, 0x0016, 0x0015, 0x001B, 0x0002, 0x3671, 0x73D7, 0x0000 }, // 0x000018E0
    { 0x0000, 0x001C, 0x0016, 0x001B, 0x6B74, 0x0A4C, 0x44C7, 0xF87C }, // 0x000018F0
    { 0x0000, 0x0018, 0x0017, 0x001D, 0x948C, 0x0A4C, 0x44C7, 0xF87C }, // 0x00001900
    { 0x0001, 0x001E, 0x001F, 0x0020, 0x0000, 0x7231, 0xC62E, 0x07A0 }, // 0x00001910
    { 0x0001, 0x0004, 0x001E, 0x0020, 0x0000, 0x7205, 0xC5D8, 0x07AC }, // 0x00001920
    { 0x0001, 0x0004, 0x0020, 0x0002, 0x0000, 0x7205, 0xC5D8, 0x07AC }, // 0x00001930
    { 0x0000, 0x0020, 0x001F, 0x0021, 0x2A9A, 0x14CC, 0x76E5, 0xEED3 }, // 0x00001940
    { 0x0000, 0x0020, 0x0021, 0x0022, 0x30EC, 0x0E49, 0x7569, 0xEF04 }, // 0x00001950
    { 0x0000, 0x0002, 0x0020, 0x0022, 0x7178, 0x0727, 0x3ACC, 0xF6D8 }, // 0x00001960
    { 0x0000, 0x0002, 0x0022, 0x0023, 0x729F, 0x0000, 0x38F7, 0xF712 }, // 0x00001970
    { 0x0000, 0x0024, 0x0025, 0x0002, 0x7544, 0xFFE4, 0x334E, 0xF7C9 }, // 0x00001980
    { 0x0000, 0x0023, 0x0024, 0x0002, 0x7552, 0x0000, 0x332C, 0xF7CD }, // 0x00001990
    { 0x0000, 0x0021, 0x0026, 0x0027, 0xDA3A, 0xADEB, 0x5AA8, 0xF292 }, // 0x000019A0
    { 0x0000, 0x0021, 0x0027, 0x0023, 0x0000, 0x95C5, 0x4766, 0xF549 }, // 0x000019B0
    { 0x0000, 0x0022, 0x0021, 0x0023, 0x25C6, 0xADEB, 0x5AA8, 0xF292 }, // 0x000019C0
    { 0x0000, 0x0028, 0x0024, 0x0023, 0x0000, 0x9799, 0x4A0C, 0xF4F5 }, // 0x000019D0
    { 0x0000, 0x0028, 0x0023, 0x0027, 0x0000, 0x9799, 0x4A0C, 0xF4F5 }, // 0x000019E0
    { 0x0000, 0x0004, 0x0028, 0x0027, 0x8AAE, 0x0000, 0x332C, 0xF7CD }, // 0x000019F0
    { 0x0000, 0x0027, 0x0026, 0x0004, 0x8D61, 0x0000, 0x38F7, 0xF712 }, // 0x00001A00
    { 0x0000, 0x0026, 0x001E, 0x0004, 0x8E88, 0x0727, 0x3ACC, 0xF6D8 }, // 0x00001A10
    { 0x0000, 0x0026, 0x0021, 0x001F, 0xCF66, 0x1467, 0x74A4, 0xEF26 }, // 0x00001A20
    { 0x0000, 0x0026, 0x001F, 0x001E, 0xD60D, 0x0E9B, 0x780B, 0xEEB2 }, // 0x00001A30
    { 0x0002, 0x0009, 0x0019, 0x0018, 0x0000, 0x7D07, 0x1B67, 0x0000 }, // 0x00001A40
    { 0x0002, 0x001B, 0x001A, 0x0008, 0x0000, 0x7D07, 0x1B67, 0x0000 }, // 0x00001A50
    { 0x0000, 0x0025, 0x0001, 0x0002, 0x6D2E, 0xE7F4, 0x3E53, 0xF66E }, // 0x00001A60
    { 0x0002, 0x0005, 0x0009, 0x0018, 0x014C, 0x7D44, 0x1A44, 0x0017 }, // 0x00001A70
    { 0x0002, 0x0001, 0x001B, 0x0008, 0xFEB4, 0x7D44, 0x1A44, 0x0017 }, // 0x00001A80
    { 0x0000, 0x0025, 0x0024, 0x0028, 0x0000, 0x8001, 0x0000, 0xFCE0 }, // 0x00001A90
    { 0x0000, 0x0025, 0x0028, 0x0029, 0x0000, 0x8001, 0x0000, 0xFCE0 }, // 0x00001AA0
    { 0x0000, 0x000B, 0x001C, 0x001B, 0x71A1, 0xED4F, 0x37E0, 0xF80D }, // 0x00001AB0
    { 0x0000, 0x000D, 0x000B, 0x001B, 0x7BAE, 0xF848, 0x200B, 0xF759 }, // 0x00001AC0
    { 0x0000, 0x000D, 0x001B, 0x0001, 0x7A81, 0xFA13, 0x249E, 0xF76E }, // 0x00001AD0
    { 0x0000, 0x0025, 0x000D, 0x0001, 0x6CB0, 0xDE31, 0x3A8B, 0xF68E }, // 0x00001AE0
    { 0x0000, 0x0004, 0x0029, 0x0028, 0x8ABC, 0xFFE4, 0x334E, 0xF7C9 }, // 0x00001AF0
    { 0x0000, 0x0004, 0x0005, 0x0029, 0x92D2, 0xE7F4, 0x3E53, 0xF66E }, // 0x00001B00
    { 0x0000, 0x0005, 0x000E, 0x0029, 0x9350, 0xDE31, 0x3A8B, 0xF68E }, // 0x00001B10
    { 0x0000, 0x0005, 0x0018, 0x000E, 0x857F, 0xFA13, 0x249E, 0xF76E }, // 0x00001B20
    { 0x0000, 0x0018, 0x000F, 0x000E, 0x8452, 0xF848, 0x200B, 0xF759 }, // 0x00001B30
    { 0x0000, 0x0018, 0x001D, 0x000F, 0x8E5F, 0xED4F, 0x37E0, 0xF80D }, // 0x00001B40
    { 0x0000, 0x000E, 0x0010, 0x0029, 0x0000, 0x865C, 0x27D5, 0xF960 }, // 0x00001B50
    { 0x0000, 0x000C, 0x000D, 0x0025, 0x0000, 0x865C, 0x27D5, 0xF960 }, // 0x00001B60
    { 0x0000, 0x0010, 0x000C, 0x0025, 0x0000, 0x865C, 0x27D5, 0xF960 }, // 0x00001B70
    { 0x0000, 0x0010, 0x0025, 0x0029, 0x0000, 0x865C, 0x27D5, 0xF960 }, // 0x00001B80
    { 0x0000, 0x001A, 0x002A, 0x0008, 0x80C7, 0x06E2, 0xF3BD, 0x031B }, // 0x00001B90
    { 0x0000, 0x001A, 0x002B, 0x002A, 0x8001, 0x0000, 0x0000, 0x0320 }, // 0x00001BA0
    { 0x0000, 0x001A, 0x0015, 0x002B, 0x8DED, 0xC7CB, 0x0E84, 0x02C9 }, // 0x00001BB0
    { 0x0000, 0x002B, 0x002C, 0x002A, 0x8001, 0x0000, 0x0000, 0x0320 }, // 0x00001BC0
    { 0x0000, 0x002C, 0x002D, 0x002A, 0x8001, 0x0000, 0x0000, 0x0320 }, // 0x00001BD0
    { 0x0000, 0x002E, 0x0019, 0x002F, 0x7FFF, 0x0000, 0x0000, 0x0320 }, // 0x00001BE0
    { 0x0000, 0x002E, 0x0014, 0x0019, 0x7213, 0xC7CB, 0x0E84, 0x02C9 }, // 0x00001BF0
    { 0x0000, 0x0019, 0x0009, 0x002F, 0x7F39, 0x06E2, 0xF3BD, 0x031B }, // 0x00001C00
    { 0x0000, 0x0030, 0x0031, 0x002F, 0x7FFF, 0x0000, 0x0000, 0x0320 }, // 0x00001C10
    { 0x0000, 0x0031, 0x002E, 0x002F, 0x7FFF, 0x0000, 0x0000, 0x0320 }, // 0x00001C20
    { 0x0000, 0x0014, 0x002E, 0x002B, 0x0000, 0x8DF5, 0x3A1E, 0x0190 }, // 0x00001C30
    { 0x0000, 0x0014, 0x002B, 0x0015, 0x0000, 0x8DF5, 0x3A1E, 0x0190 }, // 0x00001C40
    { 0x0000, 0x002E, 0x0031, 0x002C, 0x0000, 0x8DD7, 0x39E1, 0x018C }, // 0x00001C50
    { 0x0000, 0x002E, 0x002C, 0x002B, 0x0000, 0x8DD7, 0x39E1, 0x018C }, // 0x00001C60
    { 0x0001, 0x002F, 0x0009, 0x0008, 0x0000, 0x720C, 0xC5E6, 0x04B0 }, // 0x00001C70
    { 0x0001, 0x002F, 0x0008, 0x002A, 0x0000, 0x720C, 0xC5E6, 0x04B0 }, // 0x00001C80
    { 0x0001, 0x002D, 0x0030, 0x002F, 0x0000, 0x71F7, 0xC5BC, 0x04AD }, // 0x00001C90
    { 0x0001, 0x002D, 0x002F, 0x002A, 0x0000, 0x71F7, 0xC5BC, 0x04AD }, // 0x00001CA0

};

Vec3s gJawCol_vtx_00001CB0[] = {
    { 1711, -200, 1879 },   // 0x00001CB0
    { 1711, -400, 1879 },   // 0x00001CB6
    { 404, 0, 4323 },       // 0x00001CBC
    { 404, 200, 4323 },     // 0x00001CC2
    { -404, 0, 4323 },      // 0x00001CC8
    { -1711, -400, 1879 },  // 0x00001CCE
    { -1711, -200, 1879 },  // 0x00001CD4
    { -404, 200, 4323 },    // 0x00001CDA
    { 600, -405, 1848 },    // 0x00001CE0
    { -600, -405, 1848 },   // 0x00001CE6
    { 1000, -1600, -702 },  // 0x00001CEC
    { 2374, -1600, -702 },  // 0x00001CF2
    { 600, -1600, 564 },    // 0x00001CF8
    { 2046, -1600, 564 },   // 0x00001CFE
    { -2046, -1600, 564 },  // 0x00001D04
    { -2374, -1600, -702 }, // 0x00001D0A
    { -600, -1600, 564 },   // 0x00001D10
    { -1000, -1600, -702 }, // 0x00001D16
    { -800, -1956, -702 },  // 0x00001D1C
    { 800, -1956, -702 },   // 0x00001D22
    { -600, 362, -170 },    // 0x00001D28
    { 600, 362, -170 },     // 0x00001D2E
    { 2456, 800, -376 },    // 0x00001D34
    { -2456, 800, -376 },   // 0x00001D3A
    { -2292, 0, 0 },        // 0x00001D40
    { -800, 0, 0 },         // 0x00001D46
    { 800, 0, 0 },          // 0x00001D4C
    { 2292, 0, 0 },         // 0x00001D52
    { 2703, 400, -702 },    // 0x00001D58
    { -2703, 400, -702 },   // 0x00001D5E
    { -240, 152, 4621 },    // 0x00001D64
    { 0, 192, 4700 },       // 0x00001D6A
    { 240, 152, 4621 },     // 0x00001D70
    { 0, -111, 4753 },      // 0x00001D76
    { 240, -111, 4653 },    // 0x00001D7C
    { 404, -400, 4323 },    // 0x00001D82
    { 650, -800, 3759 },    // 0x00001D88
    { 979, -800, 3007 },    // 0x00001D8E
    { -240, -111, 4653 },   // 0x00001D94
    { -404, -400, 4323 },   // 0x00001D9A
    { -650, -800, 3759 },   // 0x00001DA0
    { -979, -800, 3007 },   // 0x00001DA6
    { 800, -1886, -1059 },  // 0x00001DAC
    { 800, -461, -1785 },   // 0x00001DB2
    { 800, -642, -2142 },   // 0x00001DB8
    { 800, -2068, -1415 },  // 0x00001DBE
    { -800, -461, -1785 },  // 0x00001DC4
    { -800, -1886, -1059 }, // 0x00001DCA
    { -800, -2068, -1415 }, // 0x00001DD0
    { -800, -642, -2142 },  // 0x00001DD6
};

CollisionHeader gJawCol = { -2703,
                            -2068,
                            -2142,
                            2703,
                            800,
                            4753,
                            50,
                            gJawCol_vtx_00001CB0,
                            82,
                            gJawCol_polygons_00001790,
                            gJawCol_polygonTypes_00001778,
                            &gJawCol_camDataList_00001770,
                            0,
                            0 };

static u32 pad1E08 = 0;
static u32 pad1E0C = 0;

u64 object_ddan_objectsTex_001E10[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_001E10.rgb5a1.inc.c"
};

static u8 unaccounted_002010[8] = {
    0x00, 0x00, 0x02, 0xC8, 0x00, 0x25, 0x00, 0x2E,
};

u64 object_ddan_objectsTex_002018[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_002018.ci8.inc.c"
};

u64 object_ddan_objectsTex_002818[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_002818.ci8.inc.c"
};

u64 object_ddan_objectsTex_002C18[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_002C18.ci8.inc.c"
};

static Vtx object_ddan_objectsVtx_003418[16] = {
    VTX(400, -1400, -600, 4033, 2048, 147, 0, 0, 255),  VTX(-400, -1400, -600, 5183, 2048, 147, 0, 0, 255),
    VTX(-400, 400, -600, 5183, 0, 255, 255, 255, 255),  VTX(400, 400, -600, 4033, 0, 255, 255, 255, 255),
    VTX(-400, -1400, 600, 961, 2048, 147, 0, 0, 255),   VTX(400, -1400, 600, 2111, 2048, 147, 0, 0, 255),
    VTX(400, 400, 600, 2111, 0, 255, 255, 255, 255),    VTX(-400, 400, 600, 961, 0, 255, 255, 255, 255),
    VTX(600, -1400, 400, 2497, 2048, 147, 0, 0, 255),   VTX(600, -1400, -400, 3647, 2048, 147, 0, 0, 255),
    VTX(600, 400, -400, 3647, 0, 255, 255, 255, 255),   VTX(600, 400, 400, 2497, 0, 255, 255, 255, 255),
    VTX(-600, -1400, -400, 5569, 2048, 147, 0, 0, 255), VTX(-600, -1400, 400, 6719, 2048, 147, 0, 0, 255),
    VTX(-600, 400, 400, 6719, 0, 255, 255, 255, 255),   VTX(-600, 400, -400, 5569, 0, 255, 255, 255, 255),
};

static Vtx object_ddan_objectsVtx_003518[8] = {
    VTX(-600, 400, -400, 1024, 853, 255, 255, 255, 255), VTX(-600, 400, 400, 1024, 171, 255, 255, 255, 255),
    VTX(-400, 400, 600, 853, 0, 255, 255, 255, 255),     VTX(400, 400, 600, 171, 0, 255, 255, 255, 255),
    VTX(600, 400, 400, 0, 171, 255, 255, 255, 255),      VTX(600, 400, -400, 0, 853, 255, 255, 255, 255),
    VTX(400, 400, -600, 171, 1024, 255, 255, 255, 255),  VTX(-400, 400, -600, 853, 1024, 255, 255, 255, 255),
};

static Vtx object_ddan_objectsVtx_003598[16] = {
    VTX(600, 400, -400, 3647, 0, 255, 255, 255, 255),   VTX(600, -1400, -400, 3647, 2048, 147, 0, 0, 255),
    VTX(400, -1400, -600, 4033, 2048, 147, 0, 0, 255),  VTX(400, 400, -600, 4033, 0, 255, 255, 255, 255),
    VTX(400, 400, 600, 2111, 0, 255, 255, 255, 255),    VTX(400, -1400, 600, 2111, 2048, 147, 0, 0, 255),
    VTX(600, -1400, 400, 2497, 2048, 147, 0, 0, 255),   VTX(600, 400, 400, 2497, 0, 255, 255, 255, 255),
    VTX(-600, 400, 400, 575, 0, 255, 255, 255, 255),    VTX(-600, -1400, 400, 575, 2048, 147, 0, 0, 255),
    VTX(-400, -1400, 600, 961, 2048, 147, 0, 0, 255),   VTX(-400, 400, 600, 961, 0, 255, 255, 255, 255),
    VTX(-400, 400, -600, 5183, 0, 255, 255, 255, 255),  VTX(-400, -1400, -600, 5183, 2048, 147, 0, 0, 255),
    VTX(-600, -1400, -400, 5569, 2048, 147, 0, 0, 255), VTX(-600, 400, -400, 5569, 0, 255, 255, 255, 255),
};

static Vtx object_ddan_objectsVtx_003698[18] = {
    VTX(-600, -7600, -400, 5569, 7054, 147, 0, 0, 255), VTX(-600, -1400, -400, 5569, 0, 147, 0, 0, 255),
    VTX(-400, -1400, -600, 5183, 0, 147, 0, 0, 255),    VTX(-400, -7600, -600, 5183, 7054, 147, 0, 0, 255),
    VTX(-400, -7600, 600, 961, 7054, 147, 0, 0, 255),   VTX(-400, -1400, 600, 961, 0, 147, 0, 0, 255),
    VTX(-600, -1400, 400, 575, 0, 147, 0, 0, 255),      VTX(-600, -7600, 400, 575, 7054, 147, 0, 0, 255),
    VTX(600, -7600, 400, 2497, 7054, 147, 0, 0, 255),   VTX(600, -1400, 400, 2497, 0, 147, 0, 0, 255),
    VTX(400, -1400, 600, 2111, 0, 147, 0, 0, 255),      VTX(400, -7600, 600, 2111, 7054, 147, 0, 0, 255),
    VTX(400, -7600, -600, 4033, 7054, 147, 0, 0, 255),  VTX(400, -1400, -600, 4033, 0, 147, 0, 0, 255),
    VTX(600, -1400, -400, 3647, 0, 147, 0, 0, 255),     VTX(600, -7600, -400, 3647, 7054, 147, 0, 0, 255),
    VTX(-600, -7600, 400, 6719, 7054, 147, 0, 0, 255),  VTX(-600, -1400, 400, 6719, 0, 147, 0, 0, 255),
};

Gfx gDCPlatDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_002018),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_001E10),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0,
                       COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ddan_objectsVtx_003418[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_002818),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_ddan_objectsVtx_003518[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_002018),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_ddan_objectsVtx_003598[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_002C18),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_ddan_objectsVtx_003698[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(0, 16, 17, 0, 0, 17, 1, 0),
    gsSP2Triangles(8, 15, 14, 0, 8, 14, 9, 0),
    gsSP2Triangles(4, 11, 10, 0, 4, 10, 5, 0),
    gsSP2Triangles(12, 3, 2, 0, 12, 2, 13, 0),
    gsSPEndDisplayList(),
};

CamData gDCPlatCol_camDataList_000039E0[1] = {
    { 0x0000, 0, 0x00000000 },
};

u32 gDCPlatCol_polygonTypes_000039E8[] = {
    0x00000000,
    0x000007C0,
};

CollisionPoly gDCPlatCol_polygons_000039F0[] = {
    { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x8001, 0xFDA8 }, // 0x000039F0
    { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x0000, 0x8001, 0xFDA8 }, // 0x00003A00
    { 0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFDA8 }, // 0x00003A10
    { 0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xFDA8 }, // 0x00003A20
    { 0x0000, 0x0008, 0x0009, 0x000A, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x00003A30
    { 0x0000, 0x0008, 0x000A, 0x000B, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x00003A40
    { 0x0000, 0x000C, 0x000D, 0x000E, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x00003A50
    { 0x0000, 0x000C, 0x000E, 0x000F, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x00003A60
    { 0x0000, 0x000A, 0x0009, 0x0000, 0x5A82, 0x0000, 0xA57E, 0xFD3D }, // 0x00003A70
    { 0x0000, 0x000A, 0x0000, 0x0003, 0x5A82, 0x0000, 0xA57E, 0xFD3D }, // 0x00003A80
    { 0x0000, 0x0006, 0x0005, 0x0008, 0x5A82, 0x0000, 0x5A82, 0xFD3D }, // 0x00003A90
    { 0x0000, 0x0006, 0x0008, 0x000B, 0x5A82, 0x0000, 0x5A82, 0xFD3D }, // 0x00003AA0
    { 0x0000, 0x000E, 0x000D, 0x0004, 0xA57E, 0x0000, 0x5A82, 0xFD3D }, // 0x00003AB0
    { 0x0000, 0x000E, 0x0004, 0x0007, 0xA57E, 0x0000, 0x5A82, 0xFD3D }, // 0x00003AC0
    { 0x0000, 0x0002, 0x0001, 0x000C, 0xA57E, 0x0000, 0xA57E, 0xFD3D }, // 0x00003AD0
    { 0x0000, 0x0002, 0x000C, 0x000F, 0xA57E, 0x0000, 0xA57E, 0xFD3D }, // 0x00003AE0
    { 0x0000, 0x000F, 0x000E, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFE70 }, // 0x00003AF0
    { 0x0000, 0x000F, 0x0007, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFE70 }, // 0x00003B00
    { 0x0000, 0x000F, 0x0006, 0x000B, 0x0000, 0x7FFF, 0x0000, 0xFE70 }, // 0x00003B10
    { 0x0000, 0x000F, 0x000B, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFE70 }, // 0x00003B20
    { 0x0000, 0x000F, 0x000A, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFE70 }, // 0x00003B30
    { 0x0000, 0x000F, 0x0003, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFE70 }, // 0x00003B40
    { 0x0000, 0x0010, 0x000C, 0x0001, 0xA57E, 0x0000, 0xA57E, 0xFD3D }, // 0x00003B50
    { 0x0000, 0x0010, 0x0001, 0x0011, 0xA57E, 0x0000, 0xA57E, 0xFD3D }, // 0x00003B60
    { 0x0000, 0x0012, 0x0004, 0x000D, 0xA57E, 0x0000, 0x5A82, 0xFD3D }, // 0x00003B70
    { 0x0000, 0x0012, 0x000D, 0x0013, 0xA57E, 0x0000, 0x5A82, 0xFD3D }, // 0x00003B80
    { 0x0000, 0x0014, 0x0008, 0x0005, 0x5A82, 0x0000, 0x5A82, 0xFD3D }, // 0x00003B90
    { 0x0000, 0x0014, 0x0005, 0x0015, 0x5A82, 0x0000, 0x5A82, 0xFD3D }, // 0x00003BA0
    { 0x0000, 0x0016, 0x0000, 0x0009, 0x5A82, 0x0000, 0xA57E, 0xFD3D }, // 0x00003BB0
    { 0x0000, 0x0016, 0x0009, 0x0017, 0x5A82, 0x0000, 0xA57E, 0xFD3D }, // 0x00003BC0
    { 0x0000, 0x0010, 0x0013, 0x000D, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x00003BD0
    { 0x0000, 0x0010, 0x000D, 0x000C, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x00003BE0
    { 0x0000, 0x0014, 0x0017, 0x0009, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x00003BF0
    { 0x0000, 0x0014, 0x0009, 0x0008, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x00003C00
    { 0x0000, 0x0012, 0x0015, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFDA8 }, // 0x00003C10
    { 0x0000, 0x0012, 0x0005, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFDA8 }, // 0x00003C20
    { 0x0000, 0x0016, 0x0011, 0x0001, 0x0000, 0x0000, 0x8001, 0xFDA8 }, // 0x00003C30
    { 0x0000, 0x0016, 0x0001, 0x0000, 0x0000, 0x0000, 0x8001, 0xFDA8 }, // 0x00003C40

};

Vec3s gDCPlatCol_vtx_00003C50[] = {
    { 400, -1400, -600 },  // 0x00003C50
    { -400, -1400, -600 }, // 0x00003C56
    { -400, 400, -600 },   // 0x00003C5C
    { 400, 400, -600 },    // 0x00003C62
    { -400, -1400, 600 },  // 0x00003C68
    { 400, -1400, 600 },   // 0x00003C6E
    { 400, 400, 600 },     // 0x00003C74
    { -400, 400, 600 },    // 0x00003C7A
    { 600, -1400, 400 },   // 0x00003C80
    { 600, -1400, -400 },  // 0x00003C86
    { 600, 400, -400 },    // 0x00003C8C
    { 600, 400, 400 },     // 0x00003C92
    { -600, -1400, -400 }, // 0x00003C98
    { -600, -1400, 400 },  // 0x00003C9E
    { -600, 400, 400 },    // 0x00003CA4
    { -600, 400, -400 },   // 0x00003CAA
    { -600, -7600, -400 }, // 0x00003CB0
    { -400, -7600, -600 }, // 0x00003CB6
    { -400, -7600, 600 },  // 0x00003CBC
    { -600, -7600, 400 },  // 0x00003CC2
    { 600, -7600, 400 },   // 0x00003CC8
    { 400, -7600, 600 },   // 0x00003CCE
    { 400, -7600, -600 },  // 0x00003CD4
    { 600, -7600, -400 },  // 0x00003CDA
};

CollisionHeader gDCPlatCol = { -600,
                               -7600,
                               -600,
                               600,
                               400,
                               600,
                               24,
                               gDCPlatCol_vtx_00003C50,
                               38,
                               gDCPlatCol_polygons_000039F0,
                               gDCPlatCol_polygonTypes_000039E8,
                               &gDCPlatCol_camDataList_000039E0,
                               0,
                               0 };

static u32 pad3D0C = 0;

u64 object_ddan_objectsTex_003D10[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_003D10.rgb5a1.inc.c"
};

static u8 unaccounted_003F10[8] = {
    0x00, 0x00, 0x00, 0xF8, 0x00, 0x00, 0x00, 0x00,
};

u64 object_ddan_objectsTex_003F18[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_003F18.ci8.inc.c"
};

static Vtx object_ddan_objectsVtx_004318[32] = {
    VTX(0, 0, -800, 2048, -6144, 187, 187, 187, 255),        VTX(0, 0, 800, 0, -6144, 187, 187, 187, 255),
    VTX(3600, 0, 800, 0, -1536, 255, 255, 255, 255),         VTX(3600, 0, -800, 2048, -1536, 255, 255, 255, 255),
    VTX(3600, 0, -800, 2048, -7168, 187, 187, 187, 255),     VTX(3600, 0, 800, 0, -7168, 187, 187, 187, 255),
    VTX(3600, -400, 800, 0, -6656, 85, 85, 85, 255),         VTX(3600, -400, -800, 2048, -6656, 85, 85, 85, 255),
    VTX(3600, -400, -800, 2048, -1536, 85, 85, 85, 255),     VTX(3600, -400, 800, 0, -1536, 85, 85, 85, 255),
    VTX(4000, -400, 800, 0, -1024, 255, 255, 255, 255),      VTX(4000, -400, -800, 2048, -1024, 255, 255, 255, 255),
    VTX(4000, -400, -800, 2048, -6656, 187, 187, 187, 255),  VTX(4000, -400, 800, 0, -6656, 187, 187, 187, 255),
    VTX(4000, -800, 800, 0, -6144, 85, 85, 85, 255),         VTX(4000, -800, -800, 2048, -6144, 85, 85, 85, 255),
    VTX(4000, -800, -800, 2048, -1024, 85, 85, 85, 255),     VTX(4000, -800, 800, 0, -1024, 85, 85, 85, 255),
    VTX(4400, -800, 800, 0, -512, 255, 255, 255, 255),       VTX(4400, -800, -800, 2048, -512, 255, 255, 255, 255),
    VTX(4400, -800, -800, 2048, -6144, 187, 187, 187, 255),  VTX(4400, -800, 800, 0, -6144, 187, 187, 187, 255),
    VTX(4400, -1200, 800, 0, -5632, 85, 85, 85, 255),        VTX(4400, -1200, -800, 2048, -5632, 85, 85, 85, 255),
    VTX(4400, -1200, -800, 2048, -512, 85, 85, 85, 255),     VTX(4400, -1200, 800, 0, -512, 85, 85, 85, 255),
    VTX(4800, -1200, 800, 0, 0, 255, 255, 255, 255),         VTX(4800, -1200, -800, 2048, 0, 255, 255, 255, 255),
    VTX(4800, -1200, -800, 2048, -5632, 187, 187, 187, 255), VTX(4800, -1200, 800, 0, -5632, 187, 187, 187, 255),
    VTX(4800, -1600, 800, 0, -5120, 85, 85, 85, 255),        VTX(4800, -1600, -800, 2048, -5120, 85, 85, 85, 255),
};

static Vtx object_ddan_objectsVtx_004518[48] = {
    VTX(4800, -1600, -800, 2048, 0, 85, 85, 85, 255),
    VTX(4800, -1600, 800, 0, 0, 85, 85, 85, 255),
    VTX(5200, -1600, 800, 0, 512, 255, 255, 255, 255),
    VTX(5200, -1600, -800, 2048, 512, 255, 255, 255, 255),
    VTX(5200, -1600, -800, 2048, -5120, 187, 187, 187, 255),
    VTX(5200, -1600, 800, 0, -5120, 187, 187, 187, 255),
    VTX(5200, -2000, 800, 0, -4608, 85, 85, 85, 255),
    VTX(5200, -2000, -800, 2048, -4608, 85, 85, 85, 255),
    VTX(5200, -2000, -800, 2048, 512, 85, 85, 85, 255),
    VTX(5200, -2000, 800, 0, 512, 85, 85, 85, 255),
    VTX(5600, -2000, 800, 0, 1024, 255, 255, 255, 255),
    VTX(5600, -2000, -800, 2048, 1024, 255, 255, 255, 255),
    VTX(5600, -6400, -800, 1024, 1024, 0, 0, 0, 255),
    VTX(0, -6400, -800, -6144, 1024, 0, 0, 0, 255),
    VTX(0, 0, -800, -6144, -7168, 187, 187, 187, 255),
    VTX(3200, 0, -800, -2048, -7168, 255, 255, 255, 255),
    VTX(5600, -2400, -800, 1024, -4096, 255, 255, 255, 255),
    VTX(5200, -2000, -800, 512, -4608, 255, 255, 255, 255),
    VTX(5600, -2000, -800, 1024, -4608, 255, 255, 255, 255),
    VTX(4800, -1600, -800, 0, -5120, 255, 255, 255, 255),
    VTX(5200, -1600, -800, 512, -5120, 255, 255, 255, 255),
    VTX(4400, -1200, -800, -512, -5632, 255, 255, 255, 255),
    VTX(4800, -1200, -800, 0, -5632, 255, 255, 255, 255),
    VTX(4000, -800, -800, -1024, -6144, 255, 255, 255, 255),
    VTX(4400, -800, -800, -512, -6144, 255, 255, 255, 255),
    VTX(3600, -400, -800, -1536, -6656, 255, 255, 255, 255),
    VTX(4000, -400, -800, -1024, -6656, 255, 255, 255, 255),
    VTX(3600, 0, -800, -1536, -7168, 255, 255, 255, 255),
    VTX(3600, -400, 800, -1536, -6656, 255, 255, 255, 255),
    VTX(3600, 0, 800, -1536, -7168, 255, 255, 255, 255),
    VTX(3200, 0, 800, -2048, -7168, 255, 255, 255, 255),
    VTX(4000, -800, 800, -1024, -6144, 255, 255, 255, 255),
    VTX(4000, -400, 800, -1024, -6656, 255, 255, 255, 255),
    VTX(3600, -400, 800, -1536, -6656, 255, 255, 255, 255),
    VTX(4400, -1200, 800, -512, -5632, 255, 255, 255, 255),
    VTX(4400, -800, 800, -512, -6144, 255, 255, 255, 255),
    VTX(4800, -1600, 800, 0, -5120, 255, 255, 255, 255),
    VTX(4800, -1200, 800, 0, -5632, 255, 255, 255, 255),
    VTX(5200, -2000, 800, 512, -4608, 255, 255, 255, 255),
    VTX(5200, -1600, 800, 512, -5120, 255, 255, 255, 255),
    VTX(5600, -2400, 800, 1024, -4096, 255, 255, 255, 255),
    VTX(5600, -2000, 800, 1024, -4608, 255, 255, 255, 255),
    VTX(5600, -2000, -800, 2048, -4608, 187, 187, 187, 255),
    VTX(5600, -2000, 800, 0, -4608, 187, 187, 187, 255),
    VTX(5600, -2400, 800, 0, -4096, 255, 255, 255, 255),
    VTX(5600, -2400, -800, 2048, -4096, 255, 255, 255, 255),
    VTX(5600, -6400, 800, 0, 1024, 0, 0, 0, 255),
    VTX(5600, -6400, -800, 2048, 1024, 0, 0, 0, 255),
};

static Vtx object_ddan_objectsVtx_004818[4] = {
    VTX(1600, 0, 840, 2633, -293, 255, 255, 255, 255),
    VTX(800, 0, 840, 878, -1463, 255, 255, 255, 255),
    VTX(800, -1800, 840, -439, 3803, 255, 255, 255, 255),
    VTX(1600, -1800, 840, 1317, 4974, 255, 255, 255, 255),
};

static Vtx object_ddan_objectsVtx_004858[5] = {
    VTX(0, 0, 800, -6144, -7168, 187, 187, 187, 255),    VTX(0, -6400, 800, -6144, 1024, 0, 0, 0, 255),
    VTX(5600, -6400, 800, 1024, 1024, 0, 0, 0, 255),     VTX(5600, -2400, 800, 1024, -4096, 255, 255, 255, 255),
    VTX(3200, 0, 800, -2048, -7168, 255, 255, 255, 255),
};

Gfx gDCStairsDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_003F18),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_003D10),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0,
                       COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ddan_objectsVtx_004318[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&object_ddan_objectsVtx_004518[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 17, 18, 16, 0),
    gsSP2Triangles(19, 20, 17, 0, 21, 22, 19, 0),
    gsSP2Triangles(23, 24, 21, 0, 25, 26, 23, 0),
    gsSP2Triangles(15, 27, 25, 0, 28, 29, 30, 0),
    gsSPVertex(&object_ddan_objectsVtx_004518[31], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 5, 0),
    gsSP2Triangles(9, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 13, 15, 16, 0),
    gsSP1Triangle(13, 16, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_007760),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0,
                       0, 0, COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8113078),
    gsSPVertex(&object_ddan_objectsVtx_004818[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ddan_objectsTex_003F18),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ddan_objectsTex_003D10),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0,
                       COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPVertex(&object_ddan_objectsVtx_004858[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
};

CamData gDCStairsCol_camDataList_00004B20[1] = {
    { 0x0000, 0, 0x00000000 },
};

u32 gDCStairsCol_polygonTypes_00004B28[] = {
    0x00000000,
    0x000007C2,
    0x00800000,
    0x000007C2,
};

CollisionPoly gDCStairsCol_polygons_00004B38[] = {
    { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00004B38
    { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x00004B48
    { 0x0000, 0x0003, 0x0002, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xF1F0 }, // 0x00004B58
    { 0x0000, 0x0003, 0x0004, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xF1F0 }, // 0x00004B68
    { 0x0000, 0x0005, 0x0004, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0190 }, // 0x00004B78
    { 0x0000, 0x0005, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0190 }, // 0x00004B88
    { 0x0000, 0x0007, 0x0006, 0x0008, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00004B98
    { 0x0000, 0x0007, 0x0008, 0x0009, 0x7FFF, 0x0000, 0x0000, 0xF060 }, // 0x00004BA8
    { 0x0000, 0x0009, 0x0008, 0x000A, 0x0000, 0x7FFF, 0x0000, 0x0320 }, // 0x00004BB8
    { 0x0000, 0x0009, 0x000A, 0x000B, 0x0000, 0x7FFF, 0x0000, 0x0320 }, // 0x00004BC8
    { 0x0000, 0x000B, 0x000A, 0x000C, 0x7FFF, 0x0000, 0x0000, 0xEED0 }, // 0x00004BD8
    { 0x0000, 0x000B, 0x000C, 0x000D, 0x7FFF, 0x0000, 0x0000, 0xEED0 }, // 0x00004BE8
    { 0x0000, 0x000D, 0x000C, 0x000E, 0x0000, 0x7FFF, 0x0000, 0x04B0 }, // 0x00004BF8
    { 0x0000, 0x000D, 0x000E, 0x000F, 0x0000, 0x7FFF, 0x0000, 0x04B0 }, // 0x00004C08
    { 0x0000, 0x000F, 0x000E, 0x0010, 0x7FFF, 0x0000, 0x0000, 0xED40 }, // 0x00004C18
    { 0x0000, 0x000F, 0x0010, 0x0011, 0x7FFF, 0x0000, 0x0000, 0xED40 }, // 0x00004C28
    { 0x0000, 0x0011, 0x0010, 0x0012, 0x0000, 0x7FFF, 0x0000, 0x0640 }, // 0x00004C38
    { 0x0000, 0x0011, 0x0012, 0x0013, 0x0000, 0x7FFF, 0x0000, 0x0640 }, // 0x00004C48
    { 0x0000, 0x0013, 0x0012, 0x0014, 0x7FFF, 0x0000, 0x0000, 0xEBB0 }, // 0x00004C58
    { 0x0000, 0x0013, 0x0014, 0x0015, 0x7FFF, 0x0000, 0x0000, 0xEBB0 }, // 0x00004C68
    { 0x0000, 0x0015, 0x0014, 0x0016, 0x0000, 0x7FFF, 0x0000, 0x07D0 }, // 0x00004C78
    { 0x0000, 0x0015, 0x0016, 0x0017, 0x0000, 0x7FFF, 0x0000, 0x07D0 }, // 0x00004C88
    { 0x0000, 0x0018, 0x0019, 0x0000, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004C98
    { 0x0000, 0x0018, 0x0000, 0x001A, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004CA8
    { 0x0000, 0x0018, 0x001A, 0x001B, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004CB8
    { 0x0000, 0x0015, 0x0017, 0x001B, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004CC8
    { 0x0000, 0x0011, 0x0013, 0x0015, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004CD8
    { 0x0000, 0x000D, 0x000F, 0x0011, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004CE8
    { 0x0000, 0x0009, 0x000B, 0x000D, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004CF8
    { 0x0000, 0x0005, 0x0007, 0x0009, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004D08
    { 0x0000, 0x001A, 0x0003, 0x0005, 0x0000, 0x0000, 0x8001, 0xFCE0 }, // 0x00004D18
    { 0x0000, 0x0004, 0x0002, 0x001C, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004D28
    { 0x0000, 0x0008, 0x0006, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004D38
    { 0x0000, 0x000C, 0x000A, 0x0008, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004D48
    { 0x0000, 0x0010, 0x000E, 0x000C, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004D58
    { 0x0000, 0x0014, 0x0012, 0x0010, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004D68
    { 0x0000, 0x001D, 0x0016, 0x0014, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004D78
    { 0x0000, 0x0017, 0x0016, 0x001D, 0x7FFF, 0x0000, 0x0000, 0xEA20 }, // 0x00004D88
    { 0x0000, 0x0017, 0x001D, 0x001B, 0x7FFF, 0x0000, 0x0000, 0xEA20 }, // 0x00004D98
    { 0x0000, 0x001D, 0x001E, 0x0018, 0x7FFF, 0x0000, 0x0000, 0xEA20 }, // 0x00004DA8
    { 0x0000, 0x001D, 0x0018, 0x001B, 0x7FFF, 0x0000, 0x0000, 0xEA20 }, // 0x00004DB8
    { 0x0000, 0x001F, 0x0001, 0x0020, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004DC8
    { 0x0000, 0x001C, 0x0021, 0x0022, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004DD8
    { 0x0000, 0x001E, 0x0022, 0x0020, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004DE8
    { 0x0000, 0x001E, 0x0020, 0x0023, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004DF8
    { 0x0000, 0x001C, 0x0022, 0x001E, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004E08
    { 0x0000, 0x001C, 0x001E, 0x001D, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004E18
    { 0x0000, 0x0023, 0x0020, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004E28
    { 0x0001, 0x0021, 0x001F, 0x0020, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004E38
    { 0x0001, 0x0021, 0x0020, 0x0022, 0x0000, 0x0000, 0x7FFF, 0xFCE0 }, // 0x00004E48

};

Vec3s gDCStairsCol_vtx_00004E58[] = {
    { 0, 0, -800 },        // 0x00004E58
    { 0, 0, 800 },         // 0x00004E5E
    { 3600, 0, 800 },      // 0x00004E64
    { 3600, 0, -800 },     // 0x00004E6A
    { 3600, -400, 800 },   // 0x00004E70
    { 3600, -400, -800 },  // 0x00004E76
    { 4000, -400, 800 },   // 0x00004E7C
    { 4000, -400, -800 },  // 0x00004E82
    { 4000, -800, 800 },   // 0x00004E88
    { 4000, -800, -800 },  // 0x00004E8E
    { 4400, -800, 800 },   // 0x00004E94
    { 4400, -800, -800 },  // 0x00004E9A
    { 4400, -1200, 800 },  // 0x00004EA0
    { 4400, -1200, -800 }, // 0x00004EA6
    { 4800, -1200, 800 },  // 0x00004EAC
    { 4800, -1200, -800 }, // 0x00004EB2
    { 4800, -1600, 800 },  // 0x00004EB8
    { 4800, -1600, -800 }, // 0x00004EBE
    { 5200, -1600, 800 },  // 0x00004EC4
    { 5200, -1600, -800 }, // 0x00004ECA
    { 5200, -2000, 800 },  // 0x00004ED0
    { 5200, -2000, -800 }, // 0x00004ED6
    { 5600, -2000, 800 },  // 0x00004EDC
    { 5600, -2000, -800 }, // 0x00004EE2
    { 5600, -6400, -800 }, // 0x00004EE8
    { 0, -6400, -800 },    // 0x00004EEE
    { 3200, 0, -800 },     // 0x00004EF4
    { 5600, -2400, -800 }, // 0x00004EFA
    { 3200, 0, 800 },      // 0x00004F00
    { 5600, -2400, 800 },  // 0x00004F06
    { 5600, -6400, 800 },  // 0x00004F0C
    { 800, 0, 800 },       // 0x00004F12
    { 800, -1800, 800 },   // 0x00004F18
    { 1600, 0, 800 },      // 0x00004F1E
    { 1600, -1800, 800 },  // 0x00004F24
    { 0, -6400, 800 },     // 0x00004F2A
};

CollisionHeader gDCStairsCol = { 0,
                                 -6400,
                                 -800,
                                 5600,
                                 0,
                                 840,
                                 36,
                                 gDCStairsCol_vtx_00004E58,
                                 50,
                                 gDCStairsCol_polygons_00004B38,
                                 gDCStairsCol_polygonTypes_00004B28,
                                 &gDCStairsCol_camDataList_00004B20,
                                 0,
                                 0, };

static u32 pad4F5C = 0;

u64 object_ddan_objectsTex_004F60[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_004F60.rgb5a1.inc.c"
};

u64 object_ddan_objectsTex_005F60[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_005F60.rgb5a1.inc.c"
};

u64 object_ddan_objectsTex_006760[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_006760.rgb5a1.inc.c"
};

u64 object_ddan_objectsTex_006F60[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_006F60.rgb5a1.inc.c"
};

u64 object_ddan_objectsTex_007760[] = {
#include "assets/objects/object_ddan_objects//object_ddan_objectsTex_007760.rgb5a1.inc.c"
};

u64 object_dc_bombable_wallTex_000000[] = {
#include "assets/objects/object_ddan_objects//object_dc_bombable_wallTex_000000.rgb5a1.inc.c"
};

u64 object_dc_bombable_wallTex_001000[] = {
#include "assets/objects/object_ddan_objects//object_dc_bombable_wallTex_001000.rgb5a1.inc.c"
};

u64 object_dc_bombable_wallTex_001800[] = {
#include "assets/objects/object_ddan_objects//object_dc_bombable_wallTex_001800.rgb5a1.inc.c"
};

static Vtx object_dc_bombable_wallVtx_002800[16] = {
    VTX(-80, 160, 0, -39, 156, 204, 204, 204, 255),
    VTX(-40, 120, -160, 236, 2517, 94, 94, 94, 255),
    VTX(40, 120, -160, 788, 2517, 96, 96, 96, 255),
    VTX(-80, 0, -160, 6080, -192, 47, 47, 47, 255),
    VTX(80, 0, 0, 5504, 1408, 70, 70, 70, 255),
    VTX(80, 0, -160, 6592, 320, 40, 40, 40, 255),
    VTX(-80, 0, 0, 4992, 896, 70, 70, 70, 255),
    VTX(80, 0, -160, 1594, 3201, 40, 40, 40, 255),
    VTX(80, 160, 0, 1063, 156, 204, 204, 204, 255),
    VTX(80, 0, 0, 2061, 1127, 70, 70, 70, 255),
    VTX(-80, 0, -160, 0, 2048, 47, 47, 47, 255),
    VTX(40, 120, -160, 768, 1280, 96, 96, 96, 255),
    VTX(-40, 120, -160, 256, 1280, 94, 94, 94, 255),
    VTX(80, 0, -160, 1024, 2048, 40, 40, 40, 255),
    VTX(-80, 0, -160, -570, 3201, 47, 47, 47, 255),
    VTX(-80, 0, 0, -1037, 1127, 70, 70, 70, 255),
}; 

Gfx gDCTunnel3[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 12, 2, 0x00002000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_dc_bombable_wallTex_000000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPVertex(&object_dc_bombable_wallVtx_002800[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 2, 0),
    gsSP2Triangles(7, 9, 8, 0, 0, 2, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(0, 14, 1, 0, 0, 15, 14, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dc_bombable_wallVtx_0029D8[16] = {
    VTX(-80, 160, 0, 2048, 0, 153, 153, 153, 255),
    VTX(-80, 0, -340, 0, 2048, 255, 255, 255, 255),
    VTX(-80, 160, -340, 2048, 2048, 84, 84, 84, 255),
    VTX(80, 160, 0, 2048, 0, 153, 153, 153, 255),
    VTX(80, 160, -340, 2048, 2048, 84, 84, 84, 255),
    VTX(80, 0, -340, 0, 2048, 255, 255, 255, 255),
    VTX(-80, 0, 0, 0, 0, 119, 119, 119, 255),
    VTX(80, 160, 0, 1024, 0, 153, 153, 153, 255),
    VTX(-80, 160, 0, -1024, 0, 153, 153, 153, 255),
    VTX(-80, 160, -340, -1024, 2048, 84, 84, 84, 255),
    VTX(80, 160, -340, 1024, 2048, 84, 84, 84, 255),
    VTX(-80, 0, 0, -1024, 0, 119, 119, 119, 255),
    VTX(80, 0, 0, 1024, 0, 119, 119, 119, 255),
    VTX(80, 0, -340, 1024, 2048, 255, 255, 255, 255),
    VTX(-80, 0, -340, -1024, 2048, 255, 255, 255, 255),
    VTX(80, 0, 0, 0, 0, 119, 119, 119, 255),
};

Gfx gDCTunnel1[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 12, 2, 0x00002000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(object_dc_bombable_wallTex_001800, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPVertex(&object_dc_bombable_wallVtx_0029D8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 3, 5, 0),
    gsSPEndDisplayList(),
};

static Vtx object_dc_bombable_wallVtx_002BA8[18] = {
    VTX(-80, 160, 0, 3456, 0, 204, 204, 204, 255),
    VTX(-80, 160, -320, 3456, 2176, 94, 94, 94, 255),
    VTX(80, 160, -320, 2688, 2176, 96, 96, 96, 255),
    VTX(-80, 0, -320, 6080, -192, 47, 47, 47, 255),
    VTX(80, 0, 0, 5504, 1408, 70, 70, 70, 255),
    VTX(80, 0, -320, 6592, 320, 40, 40, 40, 255),
    VTX(-80, 160, -320, 384, 2176, 94, 94, 94, 255),
    VTX(-80, 0, 0, 1152, 0, 70, 70, 70, 255),
    VTX(-80, 0, -320, 1152, 2176, 47, 47, 47, 255),
    VTX(-80, 0, 0, 4992, 896, 70, 70, 70, 255),
    VTX(-80, 160, 0, 384, 0, 204, 204, 204, 255),
    VTX(80, 0, -320, 1920, 2176, 40, 40, 40, 255),
    VTX(80, 160, 0, 2688, 0, 204, 204, 204, 255),
    VTX(80, 0, 0, 1920, 0, 70, 70, 70, 255),
    VTX(-80, 0, -320, 0, 2048, 47, 47, 47, 255),
    VTX(80, 160, -320, 1024, 1024, 96, 96, 96, 255),
    VTX(-80, 160, -320, 0, 1024, 94, 94, 94, 255),
    VTX(80, 0, -320, 1024, 2048, 40, 40, 40, 255),
}; 

Gfx gDCTunnel2[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 12, 2, 0x00002000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_dc_bombable_wallTex_000000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPVertex(&object_dc_bombable_wallVtx_002BA8[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 9, 4, 0),
    gsSP2Triangles(6, 10, 7, 0, 11, 12, 2, 0),
    gsSP2Triangles(11, 13, 12, 0, 0, 2, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dc_bombable_wallVtx_002DA0[4] = {
    VTX(80, 0, 0, 1024, 1024, 68, 68, 68, 255),
    VTX(-80, 160, 0, 0, 0, 255, 255, 255, 255),
    VTX(-80, 0, 0, 0, 1024, 68, 68, 68, 255),
    VTX(80, 160, 0, 1024, 0, 255, 255, 255, 255),
}; 

Gfx gDCBombableWallDL[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 12, 2, 0x00002000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(object_dc_bombable_wallTex_001000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPVertex(&object_dc_bombable_wallVtx_002DA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

CollisionPoly gDCBombableWallCol_polygons_00002EE8[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0000 }, // 0x00002EE8
   { 0x0000, 0x0000, 0x0003, 0x0001, 0x0000, 0x0000, 0x7FFF, 0x0000 }, // 0x00002EF8
};

u32 gDCBombableWallCol_polygonTypes_00002F08[] = {
   0x00000000, 0x000007CB 
}; 

Vec3s gDCBombableWallCol_vtx_00002ED0[] = {
   { 80, 0, 0 }, // 0x00002ED0
   { -80, 160, 0 }, // 0x00002ED6
   { -80, 0, 0 }, // 0x00002EDC
   { 80, 160, 0 }, // 0x00002EE2
};

CollisionHeader gDCBombableWallCol = {
    -80,
    0,
    0,
    80,
    160,
    0,
    4,
    gDCBombableWallCol_vtx_00002ED0,
    2,
    gDCBombableWallCol_polygons_00002EE8,
    gDCBombableWallCol_polygonTypes_00002F08,
    NULL,
    0,
    NULL,
};
