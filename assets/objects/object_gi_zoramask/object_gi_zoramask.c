#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_zoramask.h"

static Vtx object_gi_zoramaskVtx_000E48[10];
static Vtx object_gi_zoramaskVtx_000EE8[25];
static Vtx object_gi_zoramaskVtx_001078[32];
static Vtx object_gi_zoramaskVtx_001278[12];
static Vtx object_gi_zoramaskVtx_001338[6];

u64 object_gi_zoramaskTex_000000[] = {
#include "assets/objects/object_gi_zoramask//object_gi_zoramaskTex_000000.rgb5a1.inc.c"
};

static u8 unaccounted_000200[8] = {
    0x00, 0x00, 0x04, 0x01, 0x00, 0xB1, 0x00, 0x6B, 
}; 

u64 object_gi_zoramaskTex_000208[] = {
#include "assets/objects/object_gi_zoramask//object_gi_zoramaskTex_000208.ci8.inc.c"
};

u64 object_gi_zoramaskTex_000248[] = {
#include "assets/objects/object_gi_zoramask//object_gi_zoramaskTex_000248.ci8.inc.c"
};

u64 object_gi_zoramaskTex_000648[] = {
#include "assets/objects/object_gi_zoramask//object_gi_zoramaskTex_000648.ci8.inc.c"
};

u64 object_gi_zoramaskTex_000A48[] = {
#include "assets/objects/object_gi_zoramask//object_gi_zoramaskTex_000A48.ci8.inc.c"
};

static Vtx object_gi_zoramaskVtx_000E48[10] = {
    VTX(0, 15, -1, 128, 126, 0, 152, 197, 255),
    VTX(-24, 13, -31, 806, 138, 46, 150, 228, 255),
    VTX(0, 23, -36, 128, 88, 0, 140, 229, 255),
    VTX(24, 13, -31, -550, 138, 210, 150, 228, 255),
    VTX(24, 6, -9, -546, 170, 188, 201, 174, 255),
    VTX(-24, 6, -9, 802, 170, 68, 201, 174, 255),
    VTX(0, -5, 10, 128, 225, 0, 9, 137, 255),
    VTX(17, -19, -6, -355, 289, 194, 38, 161, 255),
    VTX(0, -29, -5, 128, 338, 0, 66, 156, 255),
    VTX(-17, -19, -6, 611, 289, 62, 38, 161, 255),
}; 

static Vtx object_gi_zoramaskVtx_000EE8[25] = {
    VTX(-35, 5, 4, -158, 432, 195, 248, 102, 255),
    VTX(-19, -1, 8, 62, 910, 76, 92, 7, 255),
    VTX(-34, 9, 0, -122, 368, 37, 114, 252, 255),
    VTX(-53, 8, -14, 619, -126, 170, 250, 83, 255),
    VTX(-33, -2, -7, 911, 535, 216, 162, 194, 255),
    VTX(-53, 8, -14, 619, -126, 60, 61, 173, 255),
    VTX(-33, 13, -25, 959, 1302, 185, 96, 254, 255),
    VTX(-33, -2, -7, 862, 185, 216, 162, 194, 255),
    VTX(-19, -1, 8, 50, 815, 76, 92, 7, 255),
    VTX(-19, -1, 8, 62, 910, 211, 158, 52, 255),
    VTX(-29, 9, -25, 911, 1233, 243, 157, 191, 255),
    VTX(-29, 9, -25, 911, 1233, 92, 76, 251, 255),
    VTX(53, 8, -14, 619, -126, 62, 165, 45, 255),
    VTX(35, 5, 4, -158, 432, 61, 248, 102, 255),
    VTX(33, -2, -7, 911, 535, 69, 161, 19, 255),
    VTX(19, -1, 8, 62, 910, 45, 158, 52, 255),
    VTX(33, -2, -7, 911, 535, 189, 60, 177, 255),
    VTX(19, -1, 8, 62, 910, 180, 92, 7, 255),
    VTX(34, 9, 0, -122, 368, 219, 114, 252, 255),
    VTX(53, 8, -14, 619, -126, 251, 119, 243, 255),
    VTX(33, 13, -25, 959, 1302, 71, 96, 254, 255),
    VTX(29, 9, -25, 911, 1233, 143, 244, 218, 255),
    VTX(19, -1, 8, 50, 815, 180, 92, 7, 255),
    VTX(33, -2, -7, 862, 185, 69, 161, 19, 255),
    VTX(29, 9, -25, 911, 1233, 80, 189, 198, 255),
}; 

static Vtx object_gi_zoramaskVtx_001078[32] = {
    VTX(13, -19, 11, 1951, -2283, 92, 212, 63, 255),
    VTX(17, -19, -6, 2443, -2273, 96, 187, 17, 255),
    VTX(19, -1, 8, 2703, -4335, 104, 8, 59, 255),
    VTX(24, 6, -9, 3209, -5139, 112, 30, 31, 255),
    VTX(19, -1, 8, 1067, 324, 104, 8, 59, 255),
    VTX(12, 12, 10, 690, -471, 71, 50, 82, 255),
    VTX(0, -4, 23, -86, 308, 0, 30, 116, 255),
    VTX(13, -19, 11, 816, 1368, 92, 212, 63, 255),
    VTX(5, -17, 20, 215, 1114, 78, 200, 71, 255),
    VTX(-12, 23, -1, -803, -7094, 191, 93, 37, 255),
    VTX(-12, 12, 10, -842, -5796, 185, 50, 82, 255),
    VTX(0, 14, 16, 512, -6039, 0, 78, 91, 255),
    VTX(0, -4, 23, 512, -4016, 0, 30, 116, 255),
    VTX(0, -29, 11, 512, -1098, 0, 150, 56, 255),
    VTX(-13, -19, 11, -927, -2283, 164, 212, 63, 255),
    VTX(-17, -19, -6, -1419, -2273, 160, 187, 17, 255),
    VTX(-24, 13, -31, -2198, -5899, 177, 89, 1, 255),
    VTX(-24, 6, -9, -2185, -5139, 144, 30, 31, 255),
    VTX(0, 23, -36, 512, -7094, 0, 119, 244, 255),
    VTX(-19, -1, 8, -1679, -4335, 152, 8, 59, 255),
    VTX(0, -18, 20, 512, -2436, 0, 151, 57, 255),
    VTX(0, -16, 36, 512, -2605, 0, 150, 54, 255),
    VTX(-5, -17, 20, -16, -2544, 178, 200, 71, 255),
    VTX(0, -29, -5, 512, -1112, 0, 137, 255, 255),
    VTX(12, 23, -1, 1827, -7094, 65, 93, 37, 255),
    VTX(0, -16, 36, -495, 883, 0, 150, 54, 255),
    VTX(24, 13, -31, 3222, -5899, 79, 89, 1, 255),
    VTX(12, 12, 10, 1866, -5796, 71, 50, 82, 255),
    VTX(5, -17, 20, 1040, -2544, 78, 200, 71, 255),
    VTX(-19, -1, 8, 1067, 324, 152, 8, 59, 255),
    VTX(-13, -19, 11, 816, 1368, 164, 212, 63, 255),
    VTX(-12, 12, 10, 690, -471, 185, 50, 82, 255),
}; 

static Vtx object_gi_zoramaskVtx_001278[12] = {
    VTX(-13, -19, 11, 816, 1368, 164, 212, 63, 255),
    VTX(-5, -17, 20, 215, 1114, 178, 200, 71, 255),
    VTX(0, -4, 23, -86, 308, 0, 30, 116, 255),
    VTX(0, -16, 36, -495, 883, 0, 150, 54, 255),
    VTX(-19, -1, 8, -1679, -4335, 152, 8, 59, 255),
    VTX(-12, 23, -1, -803, -7094, 191, 93, 37, 255),
    VTX(-24, 6, -9, -2185, -5139, 144, 30, 31, 255),
    VTX(-12, 12, 10, -842, -5796, 185, 50, 82, 255),
    VTX(19, -1, 8, 2703, -4335, 104, 8, 59, 255),
    VTX(12, 23, -1, 1827, -7094, 65, 93, 37, 255),
    VTX(12, 12, 10, 1866, -5796, 71, 50, 82, 255),
    VTX(24, 6, -9, 3209, -5139, 112, 30, 31, 255),
}; 

static Vtx object_gi_zoramaskVtx_001338[6] = {
    VTX(0, -29, 11, 1024, 1828, 0, 150, 56, 255),
    VTX(-5, -17, 20, 269, 20, 178, 200, 71, 255),
    VTX(-13, -19, 11, -1032, 347, 164, 212, 63, 255),
    VTX(0, -18, 20, 1024, 155, 0, 151, 57, 255),
    VTX(13, -19, 11, -1032, 347, 92, 212, 63, 255),
    VTX(5, -17, 20, 269, 20, 78, 200, 71, 255),
}; 

Gfx gGiZoraMaskDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_ZB_OPA_SURF, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_zoramaskTex_000208),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 3, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 31, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 0, 0, 2, 3, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_gi_zoramaskTex_000000),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_zoramaskVtx_000E48[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 1, 0, 0),
    gsSP2Triangles(6, 5, 0, 0, 4, 6, 0, 0),
    gsSP2Triangles(6, 4, 7, 0, 7, 8, 6, 0),
    gsSP2Triangles(6, 8, 9, 0, 5, 6, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_zoramaskTex_000248),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_gi_zoramaskVtx_000EE8[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 1, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 0, 4, 0),
    gsSP2Triangles(4, 0, 3, 0, 7, 6, 10, 0),
    gsSP2Triangles(8, 7, 10, 0, 8, 11, 6, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(18, 13, 19, 0, 18, 17, 13, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 20, 23, 0, 22, 23, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_zoramaskTex_000648),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_gi_zoramaskVtx_001078[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(6, 8, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(9, 16, 17, 0, 9, 18, 16, 0),
    gsSP2Triangles(15, 19, 17, 0, 19, 15, 14, 0),
    gsSP2Triangles(20, 21, 22, 0, 13, 15, 23, 0),
    gsSP2Triangles(11, 24, 9, 0, 24, 18, 9, 0),
    gsSP2Triangles(23, 1, 13, 0, 25, 8, 6, 0),
    gsSP2Triangles(3, 26, 24, 0, 11, 27, 24, 0),
    gsSP2Triangles(26, 18, 24, 0, 1, 0, 13, 0),
    gsSP2Triangles(12, 27, 11, 0, 28, 21, 20, 0),
    gsSP2Triangles(29, 30, 6, 0, 6, 31, 29, 0),
    gsSPVertex(&object_gi_zoramaskVtx_001278[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_gi_zoramaskTex_000A48),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_gi_zoramaskVtx_001338[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 0, 0, 0, 5, 3, 0),
    gsSPEndDisplayList(),
}; 


