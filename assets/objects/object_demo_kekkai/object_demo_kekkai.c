#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_demo_kekkai.h"

static Vtx object_demo_kekkaiVtx_002000[13];
static Vtx object_demo_kekkaiVtx_002180[8];
static Vtx object_demo_kekkaiVtx_002200[18];
static Vtx object_demo_kekkaiVtx_003450[21];
static Vtx object_demo_kekkaiVtx_0042A0[24];
static Vtx object_demo_kekkaiVtx_004650[32];
static Vtx object_demo_kekkaiVtx_004850[14];
static Vtx object_demo_kekkaiVtx_004EC0[4];
static Vtx object_demo_kekkaiVtx_005630[32];
static Vtx object_demo_kekkaiVtx_005830[32];
static Vtx object_demo_kekkaiVtx_005E30[28];
static Vtx object_demo_kekkaiVtx_007940[4];
static Vtx object_demo_kekkaiVtx_007980[18];
static Vtx object_demo_kekkaiVtx_007AA0[9];
static Vtx object_demo_kekkaiVtx_007B30[9];
static Vtx object_demo_kekkaiVtx_007BC0[4];
static Vtx object_demo_kekkaiVtx_0085B0[32];
static Vtx object_demo_kekkaiVtx_0087B0[16];
static Vtx object_demo_kekkaiVtx_0091D0[6];
static Vtx object_demo_kekkaiVtx_00A2D0[12];
static Vtx object_demo_kekkaiVtx_00B440[6];
static Vtx object_demo_kekkaiVtx_00BD40[24];
static Vtx object_demo_kekkaiVtx_00D8B0[24];
static Vtx object_demo_kekkaiVtx_00DA30[10];
static Vtx object_demo_kekkaiVtx_00DAD0[24];
static Vtx object_demo_kekkaiVtx_00DC50[12];
static Vtx object_demo_kekkaiVtx_00DD10[20];
static Vtx object_demo_kekkaiVtx_00DE50[8];
static Vtx object_demo_kekkaiVtx_00DED0[16];
static Vtx object_demo_kekkaiVtx_00DFD0[8];
static Vtx object_demo_kekkaiVtx_00E050[28];

u64 object_demo_kekkaiTex_000000[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_000000.i8.inc.c"
};

u64 object_demo_kekkaiTex_000800[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_000800.i8.inc.c"
};

u64 object_demo_kekkaiTex_001000[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_001000.rgb5a1.inc.c"
};

static Vtx object_demo_kekkaiVtx_002000[13] = {
    VTX(-30, 0, 10, 0, 2048, 184, 188, 196, 255),
    VTX(0, 50, 10, 512, 1024, 184, 188, 196, 255),
    VTX(-30, 100, 10, 0, 0, 45, 49, 55, 255),
    VTX(30, 0, 10, 1024, 2048, 184, 188, 196, 255),
    VTX(30, 100, 10, 1024, 0, 45, 49, 55, 255),
    VTX(0, 50, -10, 512, 1024, 184, 188, 196, 255),
    VTX(-30, 100, -10, 1024, 0, 45, 49, 55, 255),
    VTX(30, 100, -10, 0, 0, 45, 49, 55, 255),
    VTX(30, 0, -10, 0, 2048, 184, 188, 196, 255),
    VTX(-30, 0, -10, 1024, 2048, 184, 188, 196, 255),
    VTX(-30, 0, 10, 0, 2048, 184, 188, 196, 255),
    VTX(-30, 0, -10, 0, 1940, 184, 188, 196, 255),
    VTX(30, 0, -10, 1024, 1940, 184, 188, 196, 255),
}; 

Gfx gGanonsCastleDoorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_001000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_demo_kekkaiVtx_002000[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsSP2Triangles(5, 8, 9, 0, 6, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_demo_kekkaiVtx_002180[8] = {
    VTX(-225, 0, 113, 0, 0, 255, 255, 255, 255),
    VTX(-225, 0, -113, 0, 0, 255, 255, 255, 255),
    VTX(-113, 0, -225, 0, 0, 255, 255, 255, 255),
    VTX(113, 0, -225, 0, 0, 255, 255, 255, 255),
    VTX(225, 0, -113, 0, 0, 255, 255, 255, 255),
    VTX(225, 0, 113, 0, 0, 255, 255, 255, 255),
    VTX(113, 0, 225, 0, 0, 255, 255, 255, 255),
    VTX(-113, 0, 225, 0, 0, 255, 255, 255, 255),
}; 

static Vtx object_demo_kekkaiVtx_002200[18] = {
    VTX(-352, -2641, -703, 677, 4096, 255, 255, 255, 153),
    VTX(-84, 0, -169, 677, 0, 255, 255, 255, 153),
    VTX(-169, 0, -84, 283, 0, 255, 255, 255, 153),
    VTX(-703, -2641, -352, 283, 4096, 255, 255, 255, 153),
    VTX(-703, -2641, -352, 4123, 4096, 255, 255, 255, 153),
    VTX(-169, 0, -84, 4123, 0, 255, 255, 255, 153),
    VTX(-169, 0, 84, 3557, 0, 255, 255, 255, 153),
    VTX(-703, -2641, 352, 3557, 4096, 255, 255, 255, 153),
    VTX(-84, 0, 169, 3163, 0, 255, 255, 255, 153),
    VTX(-352, -2641, 703, 3163, 4096, 255, 255, 255, 153),
    VTX(84, 0, 169, 2597, 0, 255, 255, 255, 153),
    VTX(352, -2641, 703, 2597, 4096, 255, 255, 255, 153),
    VTX(169, 0, 84, 2203, 0, 255, 255, 255, 153),
    VTX(703, -2641, 352, 2203, 4096, 255, 255, 255, 153),
    VTX(169, 0, -84, 1637, 0, 255, 255, 255, 153),
    VTX(703, -2641, -352, 1637, 4096, 255, 255, 255, 153),
    VTX(84, 0, -169, 1243, 0, 255, 255, 255, 153),
    VTX(352, -2641, -703, 1243, 4096, 255, 255, 255, 153),
}; 

Gfx gSpiritTrialLightSourceDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, 1,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_demo_kekkaiVtx_002180[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_006140),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 7, 0, 1, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 2, 0, 0, 0, 2, 7, 0, 1, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 508),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 153),
    gsSPVertex(&object_demo_kekkaiVtx_002200[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 1, 0, 17, 1, 0, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_002448[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 object_demo_kekkaiTex_002450[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_002450.rgb5a1.inc.c"
};

static Vtx object_demo_kekkaiVtx_003450[21] = {
    VTX(531, 0, -1000, -1877, -1751, 134, 119, 89, 255),
    VTX(1000, 0, -531, -2277, -1351, 81, 72, 55, 255),
    VTX(1000, 0, -1000, -1877, -1351, 134, 119, 89, 255),
    VTX(352, 0, -703, -2131, -1904, 255, 255, 255, 255),
    VTX(703, 0, -352, -2431, -1604, 255, 255, 255, 255),
    VTX(0, 0, 0, -2731, -2204, 255, 255, 255, 255),
    VTX(-352, 0, -703, -2131, -2504, 255, 255, 255, 255),
    VTX(-531, 0, -1000, -1877, -2657, 134, 119, 89, 255),
    VTX(-1000, 0, -1000, -1877, -3057, 134, 119, 89, 255),
    VTX(-1000, 0, -531, -2277, -3057, 134, 119, 89, 255),
    VTX(-703, 0, -352, -2431, -2804, 255, 255, 255, 255),
    VTX(-1000, 0, 531, -3184, -3057, 134, 119, 89, 255),
    VTX(-703, 0, 352, -3031, -2804, 255, 255, 255, 255),
    VTX(-352, 0, 703, -3331, -2504, 255, 255, 255, 255),
    VTX(352, 0, 703, -3331, -1904, 255, 255, 255, 255),
    VTX(703, 0, 352, -3031, -1604, 255, 255, 255, 255),
    VTX(1000, 0, 531, -3184, -1351, 134, 119, 89, 255),
    VTX(1000, 0, 1000, -3584, -1351, 134, 119, 89, 255),
    VTX(531, 0, 1000, -3584, -1751, 134, 119, 89, 255),
    VTX(-531, 0, 1000, -3584, -2657, 134, 119, 89, 255),
    VTX(-1000, 0, 1000, -3584, -3057, 134, 119, 89, 255),
}; 

Gfx gSpiritTrialLightFloorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_002450),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_demo_kekkaiVtx_003450[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 3, 6, 0, 3, 0, 7, 0),
    gsSP2Triangles(3, 7, 6, 0, 8, 9, 7, 0),
    gsSP2Triangles(9, 10, 6, 0, 9, 6, 7, 0),
    gsSP2Triangles(10, 5, 6, 0, 11, 12, 10, 0),
    gsSP2Triangles(11, 10, 9, 0, 12, 5, 10, 0),
    gsSP2Triangles(13, 5, 12, 0, 14, 5, 13, 0),
    gsSP2Triangles(15, 5, 14, 0, 4, 5, 15, 0),
    gsSP2Triangles(1, 4, 15, 0, 1, 15, 16, 0),
    gsSP2Triangles(17, 16, 18, 0, 16, 15, 14, 0),
    gsSP2Triangles(16, 14, 18, 0, 18, 14, 13, 0),
    gsSP2Triangles(18, 13, 19, 0, 19, 13, 12, 0),
    gsSP2Triangles(19, 12, 11, 0, 19, 11, 20, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_003698[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 object_demo_kekkaiTex_0036A0[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_0036A0.rgb5a1.inc.c"
};

u64 object_demo_kekkaiTex_003EA0[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_003EA0.i8.inc.c"
};

static Vtx object_demo_kekkaiVtx_0042A0[24] = {
    VTX(-600, 1000, 600, 0, 0, 255, 255, 255, 255),
    VTX(600, 1000, 600, 0, 1024, 255, 255, 255, 255),
    VTX(600, 1000, -600, 1024, 1024, 255, 255, 255, 255),
    VTX(-600, 1000, -600, 1024, 0, 255, 255, 255, 255),
    VTX(600, 0, 600, 1024, 1024, 103, 111, 125, 255),
    VTX(600, 1000, 600, 1024, 0, 156, 163, 174, 255),
    VTX(-600, 1000, 600, 0, 0, 156, 163, 174, 255),
    VTX(-600, 0, 600, 0, 1024, 103, 111, 125, 255),
    VTX(600, 0, -600, 1024, 1024, 103, 111, 125, 255),
    VTX(600, 1000, -600, 1024, 0, 156, 163, 174, 255),
    VTX(600, 1000, 600, 0, 0, 156, 163, 174, 255),
    VTX(600, 0, 600, 0, 1024, 103, 111, 125, 255),
    VTX(-600, 0, -600, 1024, 1024, 103, 111, 125, 255),
    VTX(-600, 1000, -600, 1024, 0, 156, 163, 174, 255),
    VTX(600, 1000, -600, 0, 0, 156, 163, 174, 255),
    VTX(600, 0, -600, 0, 1024, 103, 111, 125, 255),
    VTX(-600, 0, 600, 1024, 1024, 103, 111, 125, 255),
    VTX(-600, 1000, 600, 1024, 0, 156, 163, 174, 255),
    VTX(-600, 1000, -600, 0, 0, 156, 163, 174, 255),
    VTX(-600, 0, -600, 0, 1024, 103, 111, 125, 255),
    VTX(-600, 0, -600, 0, 0, 103, 111, 125, 255),
    VTX(600, 0, -600, 0, 1024, 103, 111, 125, 255),
    VTX(600, 0, 600, 1024, 1024, 103, 111, 125, 255),
    VTX(-600, 0, 600, 1024, 0, 103, 111, 125, 255),
}; 

Gfx gWaterTrialIceBlockDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_0036A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_003EA0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 128),
    gsSPVertex(&object_demo_kekkaiVtx_0042A0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

CamData gWaterTrialIceBlockCol_camDataList_00004510[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gWaterTrialIceBlockCol_polygonTypes_00004518[] = {
   0x0000A000, 0x000007CC,
   0x00E0A000, 0x000007CC,
}; 

CollisionPoly gWaterTrialIceBlockCol_polygons_00004528[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00004528
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00004538
   { 0x0001, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFDA8 }, // 0x00004548
   { 0x0001, 0x0004, 0x0000, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFDA8 }, // 0x00004558
   { 0x0001, 0x0006, 0x0002, 0x0001, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x00004568
   { 0x0001, 0x0006, 0x0001, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x00004578
   { 0x0001, 0x0007, 0x0003, 0x0002, 0x0000, 0x0000, 0x8001, 0xFDA8 }, // 0x00004588
   { 0x0001, 0x0007, 0x0002, 0x0006, 0x0000, 0x0000, 0x8001, 0xFDA8 }, // 0x00004598
   { 0x0001, 0x0005, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x000045A8
   { 0x0001, 0x0005, 0x0003, 0x0007, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x000045B8
   { 0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x000045C8
   { 0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x000045D8

}; 

Vec3s gWaterTrialIceBlockCol_vtx_000045E8[] = {
   { -600, 1000, 600 }, // 0x000045E8
   { 600, 1000, 600 }, // 0x000045EE
   { 600, 1000, -600 }, // 0x000045F4
   { -600, 1000, -600 }, // 0x000045FA
   { 600, 0, 600 }, // 0x00004600
   { -600, 0, 600 }, // 0x00004606
   { 600, 0, -600 }, // 0x0000460C
   { -600, 0, -600 }, // 0x00004612
}; 

CollisionHeader gWaterTrialIceBlockCol = { -600, 0, -600, 600, 1000, 600, 8, gWaterTrialIceBlockCol_vtx_000045E8, 12, gWaterTrialIceBlockCol_polygons_00004528, gWaterTrialIceBlockCol_polygonTypes_00004518, &gWaterTrialIceBlockCol_camDataList_00004510, 0, 0 }; 

static u32 pad4644 = 0;
static u32 pad4648 = 0;
static u32 pad464C = 0;

static Vtx object_demo_kekkaiVtx_004650[32] = {
    VTX(-6417, 0, -2658, 11520, 2048, 255, 255, 255, 0),
    VTX(-5526, 4400, -2289, 11520, 1109, 255, 255, 255, 202),
    VTX(-2289, 4400, -5526, 9984, 1109, 255, 255, 255, 202),
    VTX(-2658, 0, -6417, 9984, 2048, 255, 255, 255, 0),
    VTX(-5350, 7200, -2216, 11520, 512, 255, 255, 255, 255),
    VTX(-2216, 7200, -5350, 9984, 512, 255, 255, 255, 255),
    VTX(-6355, 9600, -2632, 11520, 0, 255, 255, 255, 0),
    VTX(-2632, 9600, -6355, 9984, 0, 255, 255, 255, 0),
    VTX(2289, 4400, -5526, 8448, 1109, 255, 255, 255, 202),
    VTX(2658, 0, -6417, 8448, 2048, 255, 255, 255, 0),
    VTX(2216, 7200, -5350, 8448, 512, 255, 255, 255, 255),
    VTX(2632, 9600, -6355, 8448, 0, 255, 255, 255, 0),
    VTX(5526, 4400, -2289, 6912, 1109, 255, 255, 255, 202),
    VTX(6417, 0, -2658, 6912, 2048, 255, 255, 255, 0),
    VTX(5350, 7200, -2216, 6912, 512, 255, 255, 255, 255),
    VTX(6355, 9600, -2632, 6912, 0, 255, 255, 255, 0),
    VTX(5526, 4400, 2289, 5376, 1109, 255, 255, 255, 202),
    VTX(6417, 0, 2658, 5376, 2048, 255, 255, 255, 0),
    VTX(5350, 7200, 2216, 5376, 512, 255, 255, 255, 255),
    VTX(6355, 9600, 2632, 5376, 0, 255, 255, 255, 0),
    VTX(2289, 4400, 5526, 3840, 1109, 255, 255, 255, 202),
    VTX(2658, 0, 6417, 3840, 2048, 255, 255, 255, 0),
    VTX(2216, 7200, 5350, 3840, 512, 255, 255, 255, 255),
    VTX(2632, 9600, 6355, 3840, 0, 255, 255, 255, 0),
    VTX(0, 4400, 5926, 3072, 1109, 255, 255, 255, 202),
    VTX(-2658, 0, 6417, 2304, 2048, 255, 255, 255, 0),
    VTX(-2289, 4400, 5526, 2304, 1109, 255, 255, 255, 202),
    VTX(0, 7200, 5950, 3072, 512, 255, 255, 255, 255),
    VTX(-2216, 7200, 5350, 2304, 512, 255, 255, 255, 255),
    VTX(-2632, 9600, 6355, 2304, 0, 255, 255, 255, 0),
    VTX(-5526, 4400, 2289, 768, 1109, 255, 255, 255, 202),
    VTX(-6417, 0, 2658, 768, 2048, 255, 255, 255, 0),
}; 

static Vtx object_demo_kekkaiVtx_004850[14] = {
    VTX(-2289, 4400, 5526, 2304, 1109, 255, 255, 255, 202),
    VTX(-2216, 7200, 5350, 2304, 512, 255, 255, 255, 255),
    VTX(-5350, 7200, 2216, 768, 512, 255, 255, 255, 255),
    VTX(-5526, 4400, 2289, 768, 1109, 255, 255, 255, 202),
    VTX(-2632, 9600, 6355, 2304, 0, 255, 255, 255, 0),
    VTX(-6355, 9600, 2632, 768, 0, 255, 255, 255, 0),
    VTX(-6417, 0, 2658, 13056, 2048, 255, 255, 255, 0),
    VTX(-5526, 4400, 2289, 13056, 1109, 255, 255, 255, 202),
    VTX(-5526, 4400, -2289, 11520, 1109, 255, 255, 255, 202),
    VTX(-6417, 0, -2658, 11520, 2048, 255, 255, 255, 0),
    VTX(-5350, 7200, 2216, 13056, 512, 255, 255, 255, 255),
    VTX(-5350, 7200, -2216, 11520, 512, 255, 255, 255, 255),
    VTX(-6355, 9600, 2632, 13056, 0, 255, 255, 255, 0),
    VTX(-6355, 9600, -2632, 11520, 0, 255, 255, 255, 0),
}; 

Gfx gTowerBarrierDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 15, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 6, 15, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 1, 0, 0, 6, 14, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 128, 255, 170, 255, 128),
    gsDPSetEnvColor(60, 0, 20, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_demo_kekkaiVtx_004650[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(2, 5, 10, 0, 2, 10, 8, 0),
    gsSP2Triangles(5, 7, 11, 0, 5, 11, 10, 0),
    gsSP2Triangles(9, 8, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(8, 10, 14, 0, 8, 14, 12, 0),
    gsSP2Triangles(10, 11, 15, 0, 10, 15, 14, 0),
    gsSP2Triangles(13, 12, 16, 0, 13, 16, 17, 0),
    gsSP2Triangles(12, 14, 18, 0, 12, 18, 16, 0),
    gsSP2Triangles(14, 15, 19, 0, 14, 19, 18, 0),
    gsSP2Triangles(17, 16, 20, 0, 17, 20, 21, 0),
    gsSP2Triangles(16, 18, 22, 0, 16, 22, 20, 0),
    gsSP2Triangles(18, 19, 23, 0, 18, 23, 22, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 20, 24, 0),
    gsSP2Triangles(24, 26, 25, 0, 20, 27, 24, 0),
    gsSP2Triangles(27, 26, 24, 0, 20, 22, 27, 0),
    gsSP2Triangles(27, 28, 26, 0, 22, 23, 27, 0),
    gsSP2Triangles(23, 29, 27, 0, 29, 28, 27, 0),
    gsSP2Triangles(25, 26, 30, 0, 25, 30, 31, 0),
    gsSPVertex(&object_demo_kekkaiVtx_004850[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_004AB8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 object_demo_kekkaiTex_004AC0[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_004AC0.i8.inc.c"
};

static Vtx object_demo_kekkaiVtx_004EC0[4] = {
    VTX(-400, 0, -400, 0, 0, 255, 255, 255, 255),
    VTX(-400, 0, 400, 0, 1024, 255, 255, 255, 255),
    VTX(400, 0, 400, 1024, 1024, 255, 255, 255, 255),
    VTX(400, 0, -400, 1024, 0, 255, 255, 255, 255),
}; 

Gfx gTrialBarrierFloorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_004AC0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 15, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 0, 5, 15, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(COMBINED_ALPHA, K5, TEXEL1, TEXEL0, TEXEL0, TEXEL1, ENVIRONMENT, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetEnvColor(0, 0, 0, 128),
    gsSPDisplayList(0x0A000000),
    gsSPVertex(&object_demo_kekkaiVtx_004EC0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Vtx gTrialBarrierEnergyVtx[102] = {
VTX(32, 308, -56, 1365, 3641, 255, 255, 255, 126),
VTX(65, 308, 0, 1024, 3641, 255, 255, 255, 126),
VTX(49, 0, 0, 1024, 4096, 255, 255, 255, 0),
VTX(24, 0, -42, 1365, 4096, 255, 255, 255, 0),
VTX(49, 834, -84, 1365, 3186, 255, 255, 255, 202),
VTX(97, 834, 0, 1024, 3186, 255, 255, 255, 202),
VTX(118, 972, -204, 1365, 2731, 255, 255, 255, 202),
VTX(235, 972, 0, 1024, 2731, 255, 255, 255, 202),
VTX(162, 1117, -281, 1365, 2276, 255, 255, 255, 202),
VTX(324, 1117, 0, 1024, 2276, 255, 255, 255, 202),
VTX(162, 1284, -281, 1365, 1820, 255, 255, 255, 202),
VTX(324, 1284, 0, 1024, 1820, 255, 255, 255, 202),
VTX(118, 1429, -204, 1365, 1365, 255, 255, 255, 202),
VTX(235, 1429, 0, 1024, 1365, 255, 255, 255, 202),
VTX(58, 1567, -101, 1365, 910, 255, 255, 255, 202),
VTX(117, 1567, 0, 1024, 910, 255, 255, 255, 202),
VTX(58, 2093, -101, 1365, 455, 255, 255, 255, 126),
VTX(117, 2093, 0, 1024, 455, 255, 255, 255, 126),
VTX(105, 2394, -182, 1365, 0, 255, 255, 255, 0),
VTX(211, 2394, 0, 1024, 0, 255, 255, 255, 0),
VTX(-24, 0, -42, 1707, 4096, 255, 255, 255, 0),
VTX(-32, 308, -56, 1707, 3641, 255, 255, 255, 126),
VTX(-49, 834, -84, 1707, 3186, 255, 255, 255, 202),
VTX(-118, 972, -204, 1707, 2731, 255, 255, 255, 202),
VTX(-162, 1117, -281, 1707, 2276, 255, 255, 255, 202),
VTX(-162, 1284, -281, 1707, 1820, 255, 255, 255, 202),
VTX(-118, 1429, -204, 1707, 1365, 255, 255, 255, 202),
VTX(-58, 1567, -101, 1707, 910, 255, 255, 255, 202),
VTX(-58, 2093, -101, 1707, 455, 255, 255, 255, 126),
VTX(-105, 2394, -182, 1707, 0, 255, 255, 255, 0),
VTX(-49, 0, 0, 2048, 4096, 255, 255, 255, 0),
VTX(-65, 308, 0, 2048, 3641, 255, 255, 255, 126),
VTX(-97, 834, 0, 2048, 3186, 255, 255, 255, 202),
VTX(-49, 834, -84, 1707, 3186, 255, 255, 255, 202),
VTX(-32, 308, -56, 1707, 3641, 255, 255, 255, 126),
VTX(-65, 308, 0, 2048, 3641, 255, 255, 255, 126),
VTX(-235, 972, 0, 2048, 2731, 255, 255, 255, 202),
VTX(-118, 972, -204, 1707, 2731, 255, 255, 255, 202),
VTX(-324, 1117, 0, 2048, 2276, 255, 255, 255, 202),
VTX(-162, 1117, -281, 1707, 2276, 255, 255, 255, 202),
VTX(-324, 1284, 0, 2048, 1820, 255, 255, 255, 202),
VTX(-162, 1284, -281, 1707, 1820, 255, 255, 255, 202),
VTX(-235, 1429, 0, 2048, 1365, 255, 255, 255, 202),
VTX(-118, 1429, -204, 1707, 1365, 255, 255, 255, 202),
VTX(-117, 1567, 0, 2048, 910, 255, 255, 255, 202),
VTX(-58, 1567, -101, 1707, 910, 255, 255, 255, 202),
VTX(-117, 2093, 0, 2048, 455, 255, 255, 255, 126),
VTX(-58, 2093, -101, 1707, 455, 255, 255, 255, 126),
VTX(-211, 2394, 0, 2048, 0, 255, 255, 255, 0),
VTX(-105, 2394, -182, 1707, 0, 255, 255, 255, 0),
VTX(-24, 0, 42, 341, 4096, 255, 255, 255, 0),
VTX(-32, 308, 56, 341, 3641, 255, 255, 255, 126),
VTX(-65, 308, 0, 0, 3641, 255, 255, 255, 126),
VTX(-49, 0, 0, 0, 4096, 255, 255, 255, 0),
VTX(-49, 834, 84, 341, 3186, 255, 255, 255, 202),
VTX(-97, 834, 0, 0, 3186, 255, 255, 255, 202),
VTX(-118, 972, 204, 341, 2731, 255, 255, 255, 202),
VTX(-235, 972, 0, 0, 2731, 255, 255, 255, 202),
VTX(-162, 1117, 281, 341, 2276, 255, 255, 255, 202),
VTX(-324, 1117, 0, 0, 2276, 255, 255, 255, 202),
VTX(-162, 1284, 281, 341, 1820, 255, 255, 255, 202),
VTX(-324, 1284, 0, 0, 1820, 255, 255, 255, 202),
VTX(-118, 1429, 204, 341, 1365, 255, 255, 255, 202),
VTX(-235, 1429, 0, 0, 1365, 255, 255, 255, 202),
VTX(-118, 1429, 204, 341, 1365, 255, 255, 255, 202),
VTX(-58, 1567, 101, 341, 910, 255, 255, 255, 202),
VTX(-117, 1567, 0, 0, 910, 255, 255, 255, 202),
VTX(-235, 1429, 0, 0, 1365, 255, 255, 255, 202),
VTX(-58, 2093, 101, 341, 455, 255, 255, 255, 126),
VTX(-117, 2093, 0, 0, 455, 255, 255, 255, 126),
VTX(-105, 2394, 182, 341, 0, 255, 255, 255, 0),
VTX(-211, 2394, 0, 0, 0, 255, 255, 255, 0),
VTX(24, 0, 42, 683, 4096, 255, 255, 255, 0),
VTX(32, 308, 56, 683, 3641, 255, 255, 255, 126),
VTX(-32, 308, 56, 341, 3641, 255, 255, 255, 126),
VTX(-24, 0, 42, 341, 4096, 255, 255, 255, 0),
VTX(49, 834, 84, 683, 3186, 255, 255, 255, 202),
VTX(-49, 834, 84, 341, 3186, 255, 255, 255, 202),
VTX(118, 972, 204, 683, 2731, 255, 255, 255, 202),
VTX(-118, 972, 204, 341, 2731, 255, 255, 255, 202),
VTX(162, 1117, 281, 683, 2276, 255, 255, 255, 202),
VTX(-162, 1117, 281, 341, 2276, 255, 255, 255, 202),
VTX(162, 1284, 281, 683, 1820, 255, 255, 255, 202),
VTX(-162, 1284, 281, 341, 1820, 255, 255, 255, 202),
VTX(118, 1429, 204, 683, 1365, 255, 255, 255, 202),
VTX(58, 1567, 101, 683, 910, 255, 255, 255, 202),
VTX(58, 2093, 101, 683, 455, 255, 255, 255, 126),
VTX(105, 2394, 182, 683, 0, 255, 255, 255, 0),
VTX(65, 308, 0, 1024, 3641, 255, 255, 255, 126),
VTX(49, 0, 0, 1024, 4096, 255, 255, 255, 0),
VTX(97, 834, 0, 1024, 3186, 255, 255, 255, 202),
VTX(235, 972, 0, 1024, 2731, 255, 255, 255, 202),
VTX(324, 1117, 0, 1024, 2276, 255, 255, 255, 202),
VTX(324, 1284, 0, 1024, 1820, 255, 255, 255, 202),
VTX(235, 1429, 0, 1024, 1365, 255, 255, 255, 202),
VTX(117, 1567, 0, 1024, 910, 255, 255, 255, 202),
VTX(117, 1567, 0, 1024, 910, 255, 255, 255, 202),
VTX(117, 2093, 0, 1024, 455, 255, 255, 255, 126),
VTX(58, 2093, 101, 683, 455, 255, 255, 255, 126),
VTX(58, 1567, 101, 683, 910, 255, 255, 255, 202),
VTX(211, 2394, 0, 1024, 0, 255, 255, 255, 0),
VTX(105, 2394, 182, 683, 0, 255, 255, 255, 0)
}; 

static Vtx object_demo_kekkaiVtx_005630[32] = {
    VTX(112, 1142, -194, 2731, 628, 48, 220, 153, 142),
    VTX(225, 1142, 0, 2048, 628, 116, 231, 242, 62),
    VTX(152, 1017, 0, 2048, 876, 89, 176, 0, 50),
    VTX(76, 1017, -131, 2731, 876, 40, 168, 186, 50),
    VTX(112, 1259, -194, 2731, 396, 76, 31, 169, 240),
    VTX(76, 1384, -131, 2731, 148, 32, 83, 176, 255),
    VTX(152, 1384, 0, 2048, 148, 89, 80, 0, 208),
    VTX(225, 1259, 0, 2048, 396, 116, 25, 14, 108),
    VTX(-76, 1017, -131, 3413, 876, 224, 173, 176, 50),
    VTX(-112, 1142, -194, 3413, 628, 189, 218, 165, 90),
    VTX(-112, 1259, -194, 3413, 396, 198, 32, 156, 218),
    VTX(-76, 1384, -131, 3413, 148, 216, 88, 186, 255),
    VTX(-152, 1017, 0, 4096, 876, 167, 176, 0, 50),
    VTX(-225, 1142, 0, 4096, 628, 140, 231, 242, 50),
    VTX(-152, 1384, 0, 4096, 148, 167, 80, 0, 156),
    VTX(-225, 1259, 0, 4096, 396, 140, 25, 14, 50),
    VTX(-112, 1142, 194, 683, 628, 198, 224, 100, 50),
    VTX(-225, 1142, 0, 0, 628, 140, 231, 242, 50),
    VTX(-152, 1017, 0, 0, 876, 167, 176, 0, 50),
    VTX(-76, 1017, 131, 683, 876, 216, 168, 70, 50),
    VTX(-112, 1259, 194, 683, 396, 189, 38, 91, 50),
    VTX(-76, 1384, 131, 683, 148, 224, 83, 80, 72),
    VTX(-152, 1384, 0, 0, 148, 167, 80, 0, 156),
    VTX(-225, 1259, 0, 0, 396, 140, 25, 14, 50),
    VTX(76, 1017, 131, 1365, 876, 32, 173, 80, 50),
    VTX(112, 1142, 194, 1365, 628, 76, 225, 87, 50),
    VTX(112, 1259, 194, 1365, 396, 48, 36, 103, 50),
    VTX(76, 1384, 131, 1365, 148, 40, 88, 70, 116),
    VTX(0, 1459, 0, 2389, 0, 0, 120, 0, 246),
    VTX(0, 1459, 0, 3072, 0, 0, 120, 0, 246),
    VTX(0, 1459, 0, 3755, 0, 0, 120, 0, 246),
    VTX(0, 1459, 0, 341, 0, 0, 120, 0, 246),
}; 

static Vtx object_demo_kekkaiVtx_005830[32] = {
    VTX(-76, 1384, 131, 683, 148, 224, 83, 80, 72),
    VTX(76, 1384, 131, 1365, 148, 40, 88, 70, 116),
    VTX(0, 1459, 0, 1024, 0, 0, 120, 0, 246),
    VTX(152, 1384, 0, 2048, 148, 89, 80, 0, 208),
    VTX(0, 1459, 0, 1707, 0, 0, 120, 0, 246),
    VTX(76, 1017, 131, 1365, 876, 32, 173, 80, 50),
    VTX(-76, 1017, 131, 683, 876, 216, 168, 70, 50),
    VTX(0, 942, 0, 1024, 1024, 0, 136, 0, 50),
    VTX(-152, 1017, 0, 0, 876, 167, 176, 0, 50),
    VTX(0, 942, 0, 341, 1024, 0, 136, 0, 50),
    VTX(-152, 1017, 0, 4096, 876, 167, 176, 0, 50),
    VTX(-76, 1017, -131, 3413, 876, 224, 173, 176, 50),
    VTX(0, 942, 0, 3755, 1024, 0, 136, 0, 50),
    VTX(76, 1017, -131, 2731, 876, 40, 168, 186, 50),
    VTX(0, 942, 0, 3072, 1024, 0, 136, 0, 50),
    VTX(152, 1017, 0, 2048, 876, 89, 176, 0, 50),
    VTX(0, 942, 0, 2389, 1024, 0, 136, 0, 50),
    VTX(0, 942, 0, 1707, 1024, 0, 136, 0, 50),
    VTX(-225, 1142, 0, 4096, 628, 140, 231, 242, 50),
    VTX(-225, 1259, 0, 4096, 396, 140, 25, 14, 50),
    VTX(-112, 1259, -194, 3413, 396, 198, 32, 156, 218),
    VTX(-112, 1142, -194, 3413, 628, 189, 218, 165, 90),
    VTX(-112, 1142, 194, 683, 628, 198, 224, 100, 50),
    VTX(-112, 1259, 194, 683, 396, 189, 38, 91, 50),
    VTX(-225, 1259, 0, 0, 396, 140, 25, 14, 50),
    VTX(-225, 1142, 0, 0, 628, 140, 231, 242, 50),
    VTX(112, 1142, 194, 1365, 628, 76, 225, 87, 50),
    VTX(112, 1259, 194, 1365, 396, 48, 36, 103, 50),
    VTX(225, 1142, 0, 2048, 628, 116, 231, 242, 62),
    VTX(225, 1259, 0, 2048, 396, 116, 25, 14, 108),
    VTX(112, 1142, -194, 2731, 628, 48, 220, 153, 142),
    VTX(112, 1259, -194, 2731, 396, 76, 31, 169, 240),
}; 

Gfx gTrialBarrierEnergyDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 15, 0, 5, 15),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 6, 15, 0, 5, 15),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_000800),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 6, 1, 0, 5, 15),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 0, 6, 1, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gTrialBarrierEnergyVtx[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 11, 0, 10, 12, 11, 0),
    gsSP2Triangles(14, 15, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 17, 0, 16, 18, 17, 0),
    gsSP2Triangles(20, 21, 0, 0, 20, 0, 3, 0),
    gsSP2Triangles(21, 22, 4, 0, 21, 4, 0, 0),
    gsSP2Triangles(22, 23, 6, 0, 22, 6, 4, 0),
    gsSP2Triangles(23, 24, 8, 0, 23, 8, 6, 0),
    gsSP2Triangles(24, 25, 10, 0, 24, 10, 8, 0),
    gsSP2Triangles(25, 26, 12, 0, 25, 12, 10, 0),
    gsSP2Triangles(26, 27, 14, 0, 26, 14, 12, 0),
    gsSP2Triangles(27, 28, 16, 0, 27, 16, 14, 0),
    gsSP2Triangles(28, 29, 18, 0, 28, 18, 16, 0),
    gsSP2Triangles(30, 31, 21, 0, 30, 21, 20, 0),
    gsSPVertex(&gTrialBarrierEnergyVtx[32], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 1, 0, 0, 4, 1, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(24, 25, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(30, 31, 29, 0, 28, 30, 29, 0),
    gsSPVertex(&gTrialBarrierEnergyVtx[64], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 5, 0, 4, 6, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(9, 12, 13, 0, 9, 13, 10, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(18, 20, 0, 0, 18, 0, 19, 0),
    gsSP2Triangles(20, 21, 1, 0, 20, 1, 0, 0),
    gsSP2Triangles(21, 22, 4, 0, 21, 4, 1, 0),
    gsSP2Triangles(22, 23, 6, 0, 22, 6, 4, 0),
    gsSP2Triangles(24, 9, 8, 0, 25, 24, 8, 0),
    gsSP2Triangles(26, 12, 9, 0, 24, 26, 9, 0),
    gsSP2Triangles(26, 27, 14, 0, 26, 14, 12, 0),
    gsSP2Triangles(28, 16, 14, 0, 27, 28, 14, 0),
    gsSP2Triangles(28, 29, 18, 0, 28, 18, 16, 0),
    gsSP2Triangles(29, 30, 20, 0, 29, 20, 18, 0),
    gsSP2Triangles(31, 21, 20, 0, 30, 31, 20, 0),
    gsSPVertex(&gTrialBarrierEnergyVtx[96], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gTrialBarrierOrbDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 1, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 170, 0, 255),
    gsDPSetEnvColor(100, 0, 0, 128),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_demo_kekkaiVtx_005630[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 0, 0, 8, 0, 3, 0),
    gsSP2Triangles(10, 11, 5, 0, 10, 5, 4, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 11, 10, 0, 15, 14, 10, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 16, 0, 24, 16, 19, 0),
    gsSP2Triangles(26, 27, 21, 0, 26, 21, 20, 0),
    gsSP2Triangles(2, 1, 25, 0, 2, 25, 24, 0),
    gsSP2Triangles(6, 27, 26, 0, 7, 6, 26, 0),
    gsSP2Triangles(6, 5, 28, 0, 5, 11, 29, 0),
    gsSP2Triangles(11, 14, 30, 0, 22, 21, 31, 0),
    gsSPVertex(&object_demo_kekkaiVtx_005830[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 5, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(22, 26, 27, 0, 22, 27, 23, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSP2Triangles(28, 30, 31, 0, 28, 31, 29, 0),
    gsSP2Triangles(30, 21, 20, 0, 30, 20, 31, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_005E28[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_demo_kekkaiVtx_005E30[28] = {
    VTX(156, -1872, 90, 853, 4915, 255, 255, 255, 176),
    VTX(0, -1872, 180, 512, 4915, 255, 255, 255, 176),
    VTX(0, -2400, 300, 512, 6144, 255, 255, 255, 0),
    VTX(260, -2400, 150, 853, 6144, 255, 255, 255, 0),
    VTX(156, 1872, 90, 853, 1229, 255, 255, 255, 176),
    VTX(0, 1872, 180, 512, 1229, 255, 255, 255, 176),
    VTX(260, 2400, 150, 853, 0, 255, 255, 255, 0),
    VTX(0, 2400, 300, 512, 0, 255, 255, 255, 0),
    VTX(260, -2400, -150, 1195, 6144, 255, 255, 255, 0),
    VTX(156, -1872, -90, 1195, 4915, 255, 255, 255, 176),
    VTX(156, 1872, -90, 1195, 1229, 255, 255, 255, 176),
    VTX(260, 2400, -150, 1195, 0, 255, 255, 255, 0),
    VTX(0, -2400, -300, 1536, 6144, 255, 255, 255, 0),
    VTX(0, -1872, -180, 1536, 4915, 255, 255, 255, 176),
    VTX(0, 1872, -180, 1536, 1229, 255, 255, 255, 176),
    VTX(0, 2400, -300, 1536, 0, 255, 255, 255, 0),
    VTX(-156, -1872, -90, 1877, 4915, 255, 255, 255, 176),
    VTX(-260, -2400, -150, 1877, 6144, 255, 255, 255, 0),
    VTX(-156, 1872, -90, 1877, 1229, 255, 255, 255, 176),
    VTX(-260, 2400, -150, 1877, 0, 255, 255, 255, 0),
    VTX(-260, -2400, 150, 2219, 6144, 255, 255, 255, 0),
    VTX(-156, -1872, 90, 2219, 4915, 255, 255, 255, 176),
    VTX(-156, 1872, 90, 2219, 1229, 255, 255, 255, 176),
    VTX(-260, 2400, 150, 2219, 0, 255, 255, 255, 0),
    VTX(-156, -1872, 90, 171, 4915, 255, 255, 255, 176),
    VTX(-260, -2400, 150, 171, 6144, 255, 255, 255, 0),
    VTX(-156, 1872, 90, 171, 1229, 255, 255, 255, 176),
    VTX(-260, 2400, 150, 171, 0, 255, 255, 255, 0),
}; 

Gfx gDemoKekkaiDL_005FF0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_000800),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 6, 1, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 256, 1, 0, 0, 6, 1, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_demo_kekkaiVtx_005E30[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 0, 0, 8, 0, 3, 0),
    gsSP2Triangles(9, 10, 4, 0, 9, 4, 0, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 4, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(13, 14, 10, 0, 13, 10, 9, 0),
    gsSP2Triangles(15, 11, 10, 0, 14, 15, 10, 0),
    gsSP2Triangles(16, 13, 12, 0, 17, 16, 12, 0),
    gsSP2Triangles(16, 18, 14, 0, 16, 14, 13, 0),
    gsSP2Triangles(18, 19, 15, 0, 18, 15, 14, 0),
    gsSP2Triangles(20, 21, 16, 0, 20, 16, 17, 0),
    gsSP2Triangles(21, 22, 18, 0, 21, 18, 16, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 19, 18, 0),
    gsSP2Triangles(2, 1, 24, 0, 2, 24, 25, 0),
    gsSP2Triangles(1, 5, 26, 0, 1, 26, 24, 0),
    gsSP2Triangles(7, 27, 26, 0, 5, 7, 26, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_006138[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 object_demo_kekkaiTex_006140[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_006140.ia16.inc.c"
};

u64 object_demo_kekkaiTex_006940[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_006940.ia16.inc.c"
};

static Vtx object_demo_kekkaiVtx_007940[4] = {
    VTX(169, 591, -169, 0, 0, 203, 195, 178, 255),
    VTX(169, 591, 169, 0, 0, 203, 195, 178, 255),
    VTX(-169, 591, 169, 0, 0, 203, 195, 178, 255),
    VTX(-169, 591, -169, 0, 0, 203, 195, 178, 255),
}; 

static Vtx object_demo_kekkaiVtx_007980[18] = {
    VTX(236, 391, 118, 2938, 4096, 255, 255, 255, 191),
    VTX(169, 591, 84, 2938, 0, 203, 195, 178, 255),
    VTX(169, 591, -84, 2182, 0, 203, 195, 178, 255),
    VTX(236, 391, -118, 2182, 4096, 255, 255, 255, 191),
    VTX(118, 391, 236, 3462, 4096, 255, 255, 255, 191),
    VTX(84, 591, 169, 3462, 0, 203, 195, 178, 255),
    VTX(-118, 391, 236, 4218, 4096, 255, 255, 255, 191),
    VTX(-84, 591, 169, 4218, 0, 203, 195, 178, 255),
    VTX(-236, 391, 118, 4742, 4096, 255, 255, 255, 191),
    VTX(-169, 591, 84, 4742, 0, 203, 195, 178, 255),
    VTX(-236, 391, -118, 5498, 4096, 255, 255, 255, 191),
    VTX(-169, 591, -84, 5498, 0, 203, 195, 178, 255),
    VTX(-118, 391, -236, 902, 4096, 255, 255, 255, 191),
    VTX(-84, 591, -169, 902, 0, 203, 195, 178, 255),
    VTX(-169, 591, -84, 378, 0, 203, 195, 178, 255),
    VTX(-236, 391, -118, 378, 4096, 255, 255, 255, 191),
    VTX(118, 391, -236, 1658, 4096, 255, 255, 255, 191),
    VTX(84, 591, -169, 1658, 0, 203, 195, 178, 255),
}; 

static Vtx object_demo_kekkaiVtx_007AA0[9] = {
    VTX(-273, 252, -545, 1510, 1, 90, 80, 60, 255),
    VTX(271, 260, -541, 494, 19, 90, 80, 60, 255),
    VTX(129, 375, 22, 1084, 1118, 203, 195, 178, 255),
    VTX(435, 388, -218, 0, 521, 5, 5, 5, 255),
    VTX(-579, 186, 290, 2015, 1579, 90, 80, 60, 255),
    VTX(-590, 165, -295, 2026, 527, 90, 80, 60, 255),
    VTX(298, 154, 596, 469, 2040, 90, 80, 60, 255),
    VTX(-275, 244, 549, 1456, 2038, 90, 80, 60, 255),
    VTX(501, 338, 251, 19, 1503, 5, 5, 5, 255),
}; 

static Vtx object_demo_kekkaiVtx_007B30[9] = {
    VTX(-302, 139, -603, 1510, 1, 90, 80, 60, 255),
    VTX(292, 177, -584, 494, 19, 90, 80, 60, 255),
    VTX(-67, 289, 47, 1084, 1118, 203, 195, 178, 255),
    VTX(629, 88, -315, 0, 521, 90, 80, 60, 255),
    VTX(-609, 128, 304, 2015, 1579, 90, 80, 60, 255),
    VTX(-675, 0, -337, 2026, 527, 90, 80, 60, 255),
    VTX(338, 0, 675, 469, 2040, 90, 80, 60, 255),
    VTX(-317, 80, 634, 1456, 2038, 90, 80, 60, 255),
    VTX(596, 153, 298, 19, 1503, 90, 80, 60, 255),
}; 

static Vtx object_demo_kekkaiVtx_007BC0[4] = {
    VTX(501, 438, -501, 683, 795, 5, 5, 5, 255),
    VTX(501, 438, 501, 683, 1365, 5, 5, 5, 255),
    VTX(-501, 438, 501, 1253, 1365, 5, 5, 5, 255),
    VTX(-501, 438, -501, 1253, 795, 5, 5, 5, 255),
}; 

Gfx gSpiritTrialWebDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 252),
    gsSPVertex(&object_demo_kekkaiVtx_007940[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_006140),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 7, 0, 1, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 2, 0, 0, 0, 2, 7, 0, 1, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 508),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 191),
    gsSPVertex(&object_demo_kekkaiVtx_007980[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 13, 0, 16, 13, 12, 0),
    gsSP2Triangles(3, 2, 17, 0, 3, 17, 16, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_006940),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 8, 0, 0, 0, 1, 6, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_demo_kekkaiVtx_007BC0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 252),
    gsSPVertex(&object_demo_kekkaiVtx_007AA0[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 7, 2, 0, 7, 4, 2, 0),
    gsSP2Triangles(6, 2, 8, 0, 2, 3, 8, 0),
    gsSPVertex(&object_demo_kekkaiVtx_007B30[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 7, 2, 0, 7, 4, 2, 0),
    gsSP2Triangles(6, 2, 8, 0, 2, 3, 8, 0),
    gsSPEndDisplayList(),
}; 

u64 object_demo_kekkaiTex_007DB0[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_007DB0.rgb5a1.inc.c"
};

static Vtx object_demo_kekkaiVtx_0085B0[32] = {
    VTX(-2200, 0, -1800, -2252, 3626, 255, 255, 255, 127),
    VTX(-2200, 0, -1100, -2034, 4442, 255, 255, 255, 127),
    VTX(-1600, 0, -1100, -1334, 4255, 255, 255, 255, 127),
    VTX(-1600, 0, -1800, -1553, 3439, 255, 255, 255, 127),
    VTX(-2000, 100, -400, -1582, 5196, 255, 255, 255, 127),
    VTX(-1400, 100, -400, -882, 5009, 255, 255, 255, 127),
    VTX(-2100, 300, 300, -1480, 6043, 255, 255, 255, 127),
    VTX(-1500, 300, 300, -780, 5856, 255, 255, 255, 127),
    VTX(-2400, 400, 1000, -1611, 6953, 255, 255, 255, 127),
    VTX(-1800, 400, 1000, -911, 6765, 255, 255, 255, 127),
    VTX(-2066, 400, 1866, -951, 7857, 255, 255, 255, 127),
    VTX(-1641, 400, 1441, -589, 7230, 255, 255, 255, 127),
    VTX(-1200, 300, 2200, 163, 7977, 255, 255, 255, 127),
    VTX(-1200, 300, 1600, -25, 7277, 255, 255, 255, 127),
    VTX(-600, 100, 2100, 831, 7673, 255, 255, 255, 127),
    VTX(-600, 100, 1500, 644, 6973, 255, 255, 255, 127),
    VTX(0, 0, 1800, 1437, 7136, 255, 255, 255, 127),
    VTX(0, 0, 1200, 1249, 6436, 255, 255, 255, 127),
    VTX(300, 400, -5400, -121, -1942, 255, 255, 255, 127),
    VTX(800, 560, -6000, 274, -2798, 255, 255, 255, 127),
    VTX(200, 560, -6000, -425, -2610, 255, 255, 255, 127),
    VTX(-300, 400, -5400, -820, -1755, 255, 255, 255, 127),
    VTX(800, 600, -6600, 87, -3497, 255, 255, 255, 127),
    VTX(200, 600, -6600, -612, -3310, 255, 255, 255, 127),
    VTX(-380, 200, -4540, -529, -758, 255, 255, 255, 127),
    VTX(100, 200, -4900, -81, -1328, 255, 255, 255, 127),
    VTX(179, 100, -4065, 435, -380, 255, 255, 255, 127),
    VTX(505, 86, -4504, 479, -1103, 255, 255, 255, 127),
    VTX(2400, -300, -1800, 3622, 1303, 255, 255, 255, 127),
    VTX(2750, -272, -2154, 3790, 664, 255, 255, 255, 127),
    VTX(2030, -300, -2612, 3287, 518, 255, 255, 255, 127),
    VTX(1700, -300, -2200, 2977, 1226, 255, 255, 255, 127),
}; 

static Vtx object_demo_kekkaiVtx_0087B0[16] = {
    VTX(2030, -300, -2612, 3287, 518, 255, 255, 255, 127),
    VTX(1623, -200, -3196, 2696, 177, 255, 255, 255, 127),
    VTX(1223, -200, -2796, 2354, 768, 255, 255, 255, 127),
    VTX(1700, -300, -2200, 2977, 1226, 255, 255, 255, 127),
    VTX(2400, 0, 0, 4292, 2872, 255, 255, 255, 127),
    VTX(3000, 0, 0, 4992, 2685, 255, 255, 255, 127),
    VTX(3300, -100, -700, 5239, 1744, 255, 255, 255, 127),
    VTX(2700, -100, -700, 4540, 1931, 255, 255, 255, 127),
    VTX(3323, -200, -1425, 4807, 954, 255, 255, 255, 127),
    VTX(2800, -200, -1300, 4299, 1496, 255, 255, 255, 127),
    VTX(2750, -272, -2154, 3790, 664, 255, 255, 255, 127),
    VTX(2400, -300, -1800, 3622, 1303, 255, 255, 255, 127),
    VTX(647, 0, -3547, 1024, 0, 255, 255, 255, 127),
    VTX(1047, 0, -3947, 1365, -591, 255, 255, 255, 127),
    VTX(505, 86, -4504, 479, -1103, 255, 255, 255, 127),
    VTX(179, 100, -4065, 435, -380, 255, 255, 255, 127),
}; 

Gfx gShadowTrialPathDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_007DB0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsSPVertex(&object_demo_kekkaiVtx_0085B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 22, 23, 0, 19, 23, 20, 0),
    gsSP2Triangles(18, 21, 24, 0, 18, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&object_demo_kekkaiVtx_0087B0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 object_demo_kekkaiTex_0089D0[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_0089D0.rgb5a1.inc.c"
};

static Vtx object_demo_kekkaiVtx_0091D0[6] = {
    VTX(-600, 1200, 0, 614, 2510, 170, 176, 184, 255),
    VTX(600, 1200, 0, 2458, 2510, 170, 176, 184, 255),
    VTX(200, 1600, 0, 1843, 1982, 170, 176, 184, 255),
    VTX(-200, 1600, 0, 1229, 1982, 170, 176, 184, 255),
    VTX(-600, 0, 0, 614, 4096, 212, 214, 218, 255),
    VTX(600, 0, 0, 2458, 4096, 212, 214, 218, 255),
}; 

Gfx gLightTrialFakeWallDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_0089D0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_demo_kekkaiVtx_0091D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0092C8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 object_demo_kekkaiTex_0092D0[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_0092D0.rgb5a1.inc.c"
};

static Vtx object_demo_kekkaiVtx_00A2D0[12] = {
    VTX(-200, 1200, -2000, 640, -1024, 147, 131, 97, 255),
    VTX(200, 1200, -2000, 1152, -1024, 189, 178, 157, 255),
    VTX(-400, 1000, -2000, 384, -512, 147, 131, 97, 255),
    VTX(400, 1000, -2000, 1408, -512, 189, 178, 157, 255),
    VTX(400, 0, -2000, 1408, 2048, 147, 131, 97, 255),
    VTX(-400, 0, -2000, 384, 2048, 147, 131, 97, 255),
    VTX(-400, 1000, 0, 384, -512, 147, 131, 97, 255),
    VTX(200, 1200, 0, 1152, -1024, 189, 178, 157, 255),
    VTX(-200, 1200, 0, 640, -1024, 147, 131, 97, 255),
    VTX(400, 1000, 0, 1408, -512, 189, 178, 157, 255),
    VTX(-400, 0, 0, 384, 2048, 147, 131, 97, 255),
    VTX(400, 0, 0, 1408, 2048, 147, 131, 97, 255),
}; 

Gfx gGanonsCastleUnusedFakeWallDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_0092D0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_demo_kekkaiVtx_00A2D0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 10, 11, 0, 6, 11, 9, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00A438[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 object_demo_kekkaiTex_00A440[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_00A440.rgb5a1.inc.c"
};

static Vtx object_demo_kekkaiVtx_00B440[6] = {
    VTX(-600, 1200, 0, 1632, 1216, 158, 142, 111, 255),
    VTX(200, 1600, 0, 2656, 960, 158, 142, 111, 255),
    VTX(-200, 1600, 0, 2144, 960, 158, 142, 111, 255),
    VTX(600, 1200, 0, 3168, 1216, 158, 142, 111, 255),
    VTX(600, 0, 0, 3168, 1984, 158, 142, 111, 255),
    VTX(-600, 0, 0, 1632, 1984, 158, 142, 111, 255),
}; 

Gfx gGanonsCastleScrubsFakeWallDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00A440),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_demo_kekkaiVtx_00B440[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00B538[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 object_demo_kekkaiTex_00B540[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_00B540.ia16.inc.c"
};

static Vtx object_demo_kekkaiVtx_00BD40[24] = {
    VTX(500, -400, -500, 1024, 1024, 198, 202, 208, 255),
    VTX(500, -400, 500, 1024, 0, 212, 214, 218, 255),
    VTX(-500, -400, -500, 0, 1024, 212, 214, 218, 255),
    VTX(-500, -400, 500, 0, 0, 198, 202, 208, 255),
    VTX(-500, 0, -500, 0, 0, 212, 214, 218, 255),
    VTX(-500, -400, -500, 0, 1024, 198, 202, 208, 255),
    VTX(-500, 0, 500, 1024, 0, 239, 241, 243, 255),
    VTX(-500, -400, 500, 1024, 1024, 198, 202, 208, 255),
    VTX(-500, 0, 500, 0, 0, 212, 214, 218, 255),
    VTX(-500, -400, 500, 0, 1024, 198, 202, 208, 255),
    VTX(500, 0, 500, 1024, 0, 239, 241, 243, 255),
    VTX(500, -400, 500, 1024, 1024, 214, 208, 224, 255),
    VTX(500, 0, 500, 0, 0, 184, 188, 196, 255),
    VTX(500, -400, 500, 0, 1024, 214, 208, 224, 255),
    VTX(500, 0, -500, 1024, 0, 239, 241, 243, 255),
    VTX(500, -400, -500, 1024, 1024, 214, 208, 224, 255),
    VTX(500, 0, -500, 0, 0, 212, 214, 218, 255),
    VTX(500, -400, -500, 0, 1024, 214, 208, 224, 255),
    VTX(-500, 0, -500, 1024, 0, 239, 241, 243, 255),
    VTX(-500, -400, -500, 1024, 1024, 198, 202, 208, 255),
    VTX(-500, 0, -500, 0, 0, 255, 255, 255, 255),
    VTX(500, 0, 500, 1024, 1024, 255, 255, 255, 255),
    VTX(500, 0, -500, 1024, 0, 239, 241, 243, 255),
    VTX(-500, 0, 500, 0, 1024, 239, 241, 243, 255),
}; 

Gfx gClearBlockDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00B540),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 198, 202, 208, 178),
    gsSPVertex(&object_demo_kekkaiVtx_00BD40[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00BF78[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gClearBlockCol_camDataList_0000BF80[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gClearBlockCol_polygonTypes_0000BF88[] = {
   0x00000000, 0x000007C2,
}; 

CollisionPoly gClearBlockCol_polygons_0000BF90[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0xFE70 }, // 0x0000BF90
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0xFE70 }, // 0x0000BFA0
   { 0x0000, 0x0004, 0x0003, 0x0002, 0x8001, 0x0000, 0x0000, 0xFE0C }, // 0x0000BFB0
   { 0x0000, 0x0004, 0x0002, 0x0005, 0x8001, 0x0000, 0x0000, 0xFE0C }, // 0x0000BFC0
   { 0x0000, 0x0005, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFE0C }, // 0x0000BFD0
   { 0x0000, 0x0005, 0x0001, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFE0C }, // 0x0000BFE0
   { 0x0000, 0x0006, 0x0001, 0x0000, 0x7FFF, 0x0000, 0x0000, 0xFE0C }, // 0x0000BFF0
   { 0x0000, 0x0006, 0x0000, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xFE0C }, // 0x0000C000
   { 0x0000, 0x0007, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xFE0C }, // 0x0000C010
   { 0x0000, 0x0007, 0x0003, 0x0004, 0x0000, 0x0000, 0x8001, 0xFE0C }, // 0x0000C020
   { 0x0000, 0x0004, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000C030
   { 0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x0000C040

}; 

Vec3s gClearBlockCol_vtx_0000C050[] = {
   { 500, -400, -500 }, // 0x0000C050
   { 500, -400, 500 }, // 0x0000C056
   { -500, -400, 500 }, // 0x0000C05C
   { -500, -400, -500 }, // 0x0000C062
   { -500, 0, -500 }, // 0x0000C068
   { -500, 0, 500 }, // 0x0000C06E
   { 500, 0, 500 }, // 0x0000C074
   { 500, 0, -500 }, // 0x0000C07A
}; 

CollisionHeader gClearBlockCol = { -500, -400, -500, 500, 0, 500, 8, gClearBlockCol_vtx_0000C050, 12, gClearBlockCol_polygons_0000BF90, gClearBlockCol_polygonTypes_0000BF88, &gClearBlockCol_camDataList_0000BF80, 0, 0 }; 

static u32 padC0AC = 0;

u64 object_demo_kekkaiTex_00C0B0[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_00C0B0.rgb5a1.inc.c"
};

u64 object_demo_kekkaiTex_00C8B0[] = {
#include "assets/objects/object_demo_kekkai//object_demo_kekkaiTex_00C8B0.rgb5a1.inc.c"
};

static Vtx object_demo_kekkaiVtx_00D8B0[24] = {
    VTX(2400, 1202, -1798, 0, 0, 177, 164, 138, 255),
    VTX(2400, -598, -1800, 0, 2048, 188, 0, 0, 255),
    VTX(2400, -595, -4200, 4096, 2048, 188, 0, 0, 255),
    VTX(2400, 1205, -4198, 4096, 0, 177, 164, 138, 255),
    VTX(2400, 1205, -4198, 0, 0, 177, 164, 138, 255),
    VTX(2400, -595, -4200, 0, 2048, 188, 0, 0, 255),
    VTX(3600, -595, -4200, 1024, 2048, 188, 0, 0, 255),
    VTX(3600, 1205, -4198, 1024, 0, 177, 164, 138, 255),
    VTX(3600, 1205, -4198, 0, 0, 177, 164, 138, 255),
    VTX(3600, -595, -4200, 0, 2048, 188, 0, 0, 255),
    VTX(3600, -594, -5400, 2048, 2048, 188, 0, 0, 255),
    VTX(3600, 1206, -5398, 2048, 0, 177, 164, 138, 255),
    VTX(3600, 1206, -5398, 0, 0, 177, 164, 138, 255),
    VTX(3600, -594, -5400, 0, 2048, 188, 0, 0, 255),
    VTX(1200, -594, -5400, 3072, 2048, 188, 0, 0, 255),
    VTX(1200, 1206, -5398, 3072, 0, 177, 164, 138, 255),
    VTX(1200, 1206, -5398, 0, 0, 177, 164, 138, 255),
    VTX(1200, -594, -5400, 0, 2048, 188, 0, 0, 255),
    VTX(1200, -596, -3000, 4096, 2048, 188, 0, 0, 255),
    VTX(1200, 1203, -2998, 4096, 0, 177, 164, 138, 255),
    VTX(1200, 1202, -1798, 0, 0, 177, 164, 138, 255),
    VTX(1200, -598, -1800, 0, 2048, 188, 0, 0, 255),
    VTX(2400, -598, -1800, 2048, 2048, 188, 0, 0, 255),
    VTX(2400, 1202, -1798, 2048, 0, 177, 164, 138, 255),
}; 

static Vtx object_demo_kekkaiVtx_00DA30[10] = {
    VTX(2400, 1202, -1798, -409, -860, 203, 195, 178, 255),
    VTX(2400, 1205, -4198, -1687, -1626, 203, 195, 178, 255),
    VTX(1200, 1206, -5398, -2709, -1371, 189, 178, 157, 255),
    VTX(1200, 1202, -1798, -792, -221, 203, 195, 178, 255),
    VTX(3600, 1206, -5398, -1942, -2649, 189, 178, 157, 255),
    VTX(3600, 1205, -4198, -1303, -2265, 203, 195, 178, 255),
    VTX(-2400, 1198, 1202, -345, 2654, 203, 195, 178, 255),
    VTX(-2400, 1197, 3602, 933, 3421, 203, 195, 178, 255),
    VTX(-1200, 1198, 1202, 38, 2015, 218, 211, 199, 255),
    VTX(-1201, 1199, 3602, 1316, 2782, 203, 195, 178, 255),
}; 

static Vtx object_demo_kekkaiVtx_00DAD0[24] = {
    VTX(1200, 1200, 2, 0, 0, 177, 164, 138, 255),
    VTX(1200, -600, 0, 0, 2048, 188, 0, 0, 255),
    VTX(1200, -598, -1800, 3072, 2048, 188, 0, 0, 255),
    VTX(1200, 1202, -1798, 3072, 0, 177, 164, 138, 255),
    VTX(1200, 1203, -2998, 0, 0, 177, 164, 138, 255),
    VTX(1200, -596, -3000, 0, 2048, 188, 0, 0, 255),
    VTX(0, -596, -3000, 2048, 2048, 188, 0, 0, 255),
    VTX(0, 1203, -2998, 2048, 0, 177, 164, 138, 255),
    VTX(0, 1203, -2998, 0, 0, 177, 164, 138, 255),
    VTX(0, -596, -3000, 0, 2048, 188, 0, 0, 255),
    VTX(0, -594, -5400, 4096, 2048, 188, 0, 0, 255),
    VTX(0, 1206, -5398, 4096, 0, 177, 164, 138, 255),
    VTX(0, 1206, -5398, 0, 0, 177, 164, 138, 255),
    VTX(0, -594, -5400, 0, 2048, 188, 0, 0, 255),
    VTX(-1200, -594, -5400, 2048, 2048, 188, 0, 0, 255),
    VTX(-1200, 1206, -5398, 2048, 0, 177, 164, 138, 255),
    VTX(-1200, 1206, -5398, 0, 0, 177, 164, 138, 255),
    VTX(-1200, -594, -5400, 0, 2048, 188, 0, 0, 255),
    VTX(-1200, -598, -1800, 4096, 2048, 188, 0, 0, 255),
    VTX(-1200, 1202, -1798, 4096, 0, 177, 164, 138, 255),
    VTX(-1200, 1202, -1798, 0, 0, 177, 164, 138, 255),
    VTX(-1200, -598, -1800, 0, 2048, 188, 0, 0, 255),
    VTX(0, -598, -1800, 2048, 2048, 188, 0, 0, 255),
    VTX(0, 1202, -1798, 2048, 0, 177, 164, 138, 255),
}; 

static Vtx object_demo_kekkaiVtx_00DC50[12] = {
    VTX(1200, 1200, 2, 166, 354, 218, 211, 199, 255),
    VTX(1200, 1202, -1798, -792, -221, 203, 195, 178, 255),
    VTX(0, 1202, -1798, -1175, 418, 203, 195, 178, 255),
    VTX(0, 1200, 2, -217, 993, 218, 211, 199, 255),
    VTX(1200, 1203, -2998, -1431, -604, 203, 195, 178, 255),
    VTX(0, 1203, -2998, -1814, 35, 203, 195, 178, 255),
    VTX(-1200, 1202, -1798, -1559, 1057, 203, 195, 178, 255),
    VTX(-1200, 1206, -5398, -3475, -93, 203, 195, 178, 255),
    VTX(0, 1206, -5398, -3092, -732, 189, 178, 157, 255),
    VTX(-2400, 1200, 2, -984, 2271, 203, 195, 178, 255),
    VTX(-1200, 1198, 1202, 38, 2015, 218, 211, 199, 255),
    VTX(-2400, 1198, 1202, -345, 2654, 203, 195, 178, 255),
}; 

static Vtx object_demo_kekkaiVtx_00DD10[20] = {
    VTX(600, 1192, 6602, 0, 0, 177, 164, 138, 255),
    VTX(600, -608, 6600, 0, 2048, 188, 0, 0, 255),
    VTX(2400, -608, 6600, 3072, 2048, 188, 0, 0, 255),
    VTX(2400, 1192, 6602, 3072, 0, 177, 164, 138, 255),
    VTX(2400, 1192, 6602, 0, 0, 177, 164, 138, 255),
    VTX(2400, -608, 6600, 0, 2048, 188, 0, 0, 255),
    VTX(2400, -600, 0, 11264, 2048, 188, 0, 0, 255),
    VTX(2400, 1200, 2, 11264, 0, 177, 164, 138, 255),
    VTX(2400, 1200, 2, 0, 0, 177, 164, 138, 255),
    VTX(2400, -600, 0, 0, 2048, 188, 0, 0, 255),
    VTX(1200, -600, 0, 2048, 2048, 188, 0, 0, 255),
    VTX(1200, 1200, 2, 2048, 0, 177, 164, 138, 255),
    VTX(-1200, 1198, 1202, 0, 0, 177, 164, 138, 255),
    VTX(-1200, -601, 1200, 0, 2048, 188, 0, 0, 255),
    VTX(1200, -601, 1200, 4096, 2048, 188, 0, 0, 255),
    VTX(1200, 1199, 1202, 4096, 0, 177, 164, 138, 255),
    VTX(1200, 1199, 1202, 0, 0, 177, 164, 138, 255),
    VTX(1200, -601, 1200, 0, 2048, 188, 0, 0, 255),
    VTX(1200, -606, 5400, 7168, 2048, 188, 0, 0, 255),
    VTX(1200, 1194, 5402, 7168, 0, 177, 164, 138, 255),
}; 

static Vtx object_demo_kekkaiVtx_00DE50[8] = {
    VTX(600, 1192, 6602, 3488, 2782, 189, 178, 157, 255),
    VTX(2400, 1192, 6602, 4063, 1824, 189, 178, 157, 255),
    VTX(1200, 1194, 5402, 3041, 2079, 203, 195, 178, 255),
    VTX(600, 1194, 5402, 2850, 2399, 203, 195, 178, 255),
    VTX(2400, 1200, 2, 550, -285, 203, 195, 178, 255),
    VTX(1200, 1199, 1202, 805, 738, 218, 211, 199, 255),
    VTX(0, 1200, 2, -217, 993, 218, 211, 199, 255),
    VTX(-1200, 1198, 1202, 38, 2015, 218, 211, 199, 255),
}; 

static Vtx object_demo_kekkaiVtx_00DED0[16] = {
    VTX(1200, 1194, 5402, 0, 0, 177, 164, 138, 255),
    VTX(1200, -606, 5400, 0, 2050, 188, 0, 0, 255),
    VTX(-1801, -606, 5400, 5121, 2054, 188, 0, 0, 255),
    VTX(-1800, 1196, 5402, 5120, -4, 177, 164, 138, 255),
    VTX(-1800, 1196, 5402, 0, 0, 177, 164, 138, 255),
    VTX(-1801, -606, 5400, 0, 2057, 188, 0, 0, 255),
    VTX(-1800, -608, 6600, 2048, 2057, 188, 0, 0, 255),
    VTX(-1800, 1195, 6602, 2048, 0, 177, 164, 138, 255),
    VTX(-600, 1189, 9002, 0, 0, 177, 164, 138, 255),
    VTX(-600, -611, 9000, 0, 2048, 188, 0, 0, 255),
    VTX(600, -611, 9000, 2048, 2048, 188, 0, 0, 255),
    VTX(600, 1189, 9002, 2048, 0, 177, 164, 138, 255),
    VTX(600, 1189, 9002, 0, 0, 177, 164, 138, 255),
    VTX(600, -611, 9000, 0, 2048, 188, 0, 0, 255),
    VTX(600, -608, 6600, 4096, 2048, 188, 0, 0, 255),
    VTX(600, 1192, 6602, 4096, 0, 177, 164, 138, 255),
}; 

static Vtx object_demo_kekkaiVtx_00DFD0[8] = {
    VTX(600, 1192, 6602, 3488, 2782, 189, 178, 157, 255),
    VTX(600, 1194, 5402, 2850, 2399, 203, 195, 178, 255),
    VTX(-600, 1194, 5402, 2466, 3038, 203, 195, 178, 255),
    VTX(-600, 1193, 6602, 3105, 3421, 189, 178, 157, 255),
    VTX(-600, 1189, 9002, 4383, 4188, 189, 178, 157, 255),
    VTX(600, 1189, 9002, 4766, 3549, 189, 178, 157, 255),
    VTX(-1800, 1196, 5402, 2083, 3676, 203, 195, 178, 255),
    VTX(-1800, 1195, 6602, 2722, 4060, 189, 178, 157, 255),
}; 

static Vtx object_demo_kekkaiVtx_00E050[28] = {
    VTX(-600, -611, 9000, 4096, 2051, 188, 0, 0, 255),
    VTX(-600, 1189, 9002, 4096, 4, 177, 164, 138, 255),
    VTX(-600, 1193, 6602, 0, 0, 177, 164, 138, 255),
    VTX(-600, -608, 6600, 0, 2052, 188, 0, 0, 255),
    VTX(-1800, 1195, 6602, 1, -9, 177, 164, 138, 255),
    VTX(-1800, -608, 6600, 0, 2048, 188, 0, 0, 255),
    VTX(-600, -608, 6600, 2049, 2048, 188, 0, 0, 255),
    VTX(-600, 1193, 6602, 2049, -4, 177, 164, 138, 255),
    VTX(-2401, -604, 3600, 6144, 2048, 188, 0, 0, 255),
    VTX(-2401, 1197, 3602, 6144, -5, 177, 164, 138, 255),
    VTX(-2400, 1200, 2, 0, 0, 177, 164, 138, 255),
    VTX(-2400, -600, 0, 0, 2048, 188, 0, 0, 255),
    VTX(0, 1202, -1798, 0, 0, 177, 164, 138, 255),
    VTX(0, -598, -1800, 0, 2048, 188, 0, 0, 255),
    VTX(0, -600, 0, 3072, 2048, 188, 0, 0, 255),
    VTX(0, 1200, 2, 3072, 0, 177, 164, 138, 255),
    VTX(0, 1200, 2, 0, 0, 177, 164, 138, 255),
    VTX(0, -600, 0, 0, 2048, 188, 0, 0, 255),
    VTX(-2400, -600, 0, 4096, 2048, 188, 0, 0, 255),
    VTX(-2400, 1200, 2, 4096, 0, 177, 164, 138, 255),
    VTX(-2401, 1197, 3602, -2, -5, 177, 164, 138, 255),
    VTX(-2401, -604, 3600, 0, 2048, 188, 0, 0, 255),
    VTX(-1201, -604, 3600, 2048, 2048, 188, 0, 0, 255),
    VTX(-1201, 1199, 3602, 2046, -14, 177, 164, 138, 255),
    VTX(-1200, -601, 1200, 4096, 2048, 188, 0, 0, 255),
    VTX(-1200, 1198, 1202, 4096, 0, 177, 164, 138, 255),
    VTX(-1201, 1199, 3602, 0, -14, 177, 164, 138, 255),
    VTX(-1201, -604, 3600, 0, 2048, 188, 0, 0, 255),
}; 

Gfx gFireTrialPlatformDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C8B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_demo_kekkaiVtx_00D8B0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C0B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_demo_kekkaiVtx_00DA30[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C8B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_demo_kekkaiVtx_00DAD0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C0B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_demo_kekkaiVtx_00DC50[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 5, 7, 6, 0),
    gsSP2Triangles(5, 8, 7, 0, 3, 9, 10, 0),
    gsSP1Triangle(9, 11, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C8B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_demo_kekkaiVtx_00DD10[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C0B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_demo_kekkaiVtx_00DE50[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C8B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_demo_kekkaiVtx_00DED0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C0B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_demo_kekkaiVtx_00DFD0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(2, 6, 7, 0, 2, 7, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_demo_kekkaiTex_00C8B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_demo_kekkaiVtx_00E050[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00E628[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gFireTrialPlatformCol_camDataList_0000E630[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gFireTrialPlatformCol_polygonTypes_0000E638[] = {
   0x00000000, 0x000007C2,
}; 

CollisionPoly gFireTrialPlatformCol_polygons_0000E640[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF6A0 }, // 0x0000E640
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xF6A0 }, // 0x0000E650
   { 0x0000, 0x0003, 0x0002, 0x0004, 0x0000, 0xFFDC, 0x7FFF, 0x1067 }, // 0x0000E660
   { 0x0000, 0x0003, 0x0004, 0x0005, 0x0000, 0xFFDC, 0x7FFF, 0x1067 }, // 0x0000E670
   { 0x0000, 0x0005, 0x0004, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xF1F0 }, // 0x0000E680
   { 0x0000, 0x0005, 0x0006, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xF1F0 }, // 0x0000E690
   { 0x0000, 0x0007, 0x0006, 0x0008, 0x0000, 0x0024, 0x8001, 0xEAE9 }, // 0x0000E6A0
   { 0x0000, 0x0007, 0x0008, 0x0009, 0x0000, 0x0024, 0x8001, 0xEAE9 }, // 0x0000E6B0
   { 0x0000, 0x0009, 0x0008, 0x000A, 0x8001, 0x0000, 0x0000, 0x04B0 }, // 0x0000E6C0
   { 0x0000, 0x0009, 0x000A, 0x000B, 0x8001, 0x0000, 0x0000, 0x04B0 }, // 0x0000E6D0
   { 0x0000, 0x000C, 0x000D, 0x0001, 0x0000, 0xFFDC, 0x7FFF, 0x0707 }, // 0x0000E6E0
   { 0x0000, 0x000C, 0x0001, 0x0000, 0x0000, 0xFFDC, 0x7FFF, 0x0707 }, // 0x0000E6F0
   { 0x0000, 0x0000, 0x0003, 0x0009, 0xFFF2, 0x7FFF, 0x0029, 0xFB51 }, // 0x0000E700
   { 0x0000, 0x0000, 0x0009, 0x000C, 0x0000, 0x7FFF, 0x0024, 0xFB50 }, // 0x0000E710
   { 0x0000, 0x0003, 0x0007, 0x0009, 0x0000, 0x7FFF, 0x001B, 0xFB4E }, // 0x0000E720
   { 0x0000, 0x0003, 0x0005, 0x0007, 0x0000, 0x7FFF, 0x001B, 0xFB4E }, // 0x0000E730
   { 0x0000, 0x000E, 0x000F, 0x0010, 0x0000, 0x7FFF, 0x000E, 0xFB51 }, // 0x0000E740
   { 0x0000, 0x000F, 0x0011, 0x0010, 0xFFC9, 0x7FFF, 0xFFF2, 0xFB51 }, // 0x0000E750
   { 0x0000, 0x0012, 0x0013, 0x000D, 0x7FFF, 0x0000, 0x0000, 0xFB50 }, // 0x0000E760
   { 0x0000, 0x0012, 0x000D, 0x000C, 0x7FFF, 0x0000, 0x0000, 0xFB50 }, // 0x0000E770
   { 0x0000, 0x000B, 0x000A, 0x0014, 0x0000, 0x0024, 0x8001, 0xF449 }, // 0x0000E780
   { 0x0000, 0x000B, 0x0014, 0x0015, 0x0000, 0x0024, 0x8001, 0xF449 }, // 0x0000E790
   { 0x0000, 0x0015, 0x0014, 0x0016, 0x7FFF, 0x0000, 0x0000, 0x0000 }, // 0x0000E7A0
   { 0x0000, 0x0015, 0x0016, 0x0017, 0x7FFF, 0x0000, 0x0000, 0x0000 }, // 0x0000E7B0
   { 0x0000, 0x0017, 0x0016, 0x0018, 0x0000, 0x0024, 0x8001, 0xEAE9 }, // 0x0000E7C0
   { 0x0000, 0x0017, 0x0018, 0x0019, 0x0000, 0x0024, 0x8001, 0xEAE9 }, // 0x0000E7D0
   { 0x0000, 0x0019, 0x0018, 0x001A, 0x8001, 0x0000, 0x0000, 0xFB50 }, // 0x0000E7E0
   { 0x0000, 0x0019, 0x001A, 0x001B, 0x8001, 0x0000, 0x0000, 0xFB50 }, // 0x0000E7F0
   { 0x0000, 0x001B, 0x001A, 0x001C, 0x0000, 0xFFDC, 0x7FFF, 0x0707 }, // 0x0000E800
   { 0x0000, 0x001B, 0x001C, 0x001D, 0x0000, 0xFFDC, 0x7FFF, 0x0707 }, // 0x0000E810
   { 0x0000, 0x0012, 0x000C, 0x001D, 0x0000, 0x7FFF, 0x0024, 0xFB50 }, // 0x0000E820
   { 0x0000, 0x0012, 0x001D, 0x001E, 0x0000, 0x7FFF, 0x0024, 0xFB50 }, // 0x0000E830
   { 0x0000, 0x000C, 0x000B, 0x0015, 0x0000, 0x7FFF, 0x001B, 0xFB4F }, // 0x0000E840
   { 0x0000, 0x000C, 0x0015, 0x001D, 0x0000, 0x7FFF, 0x001B, 0xFB4F }, // 0x0000E850
   { 0x0000, 0x0015, 0x001B, 0x001D, 0x0000, 0x7FFF, 0x001B, 0xFB4F }, // 0x0000E860
   { 0x0000, 0x0015, 0x0019, 0x001B, 0x0009, 0x7FFF, 0x0024, 0xFB50 }, // 0x0000E870
   { 0x0000, 0x0015, 0x0017, 0x0019, 0x0000, 0x7FFF, 0x0029, 0xFB51 }, // 0x0000E880
   { 0x0000, 0x001E, 0x001F, 0x0010, 0x0000, 0x7FFF, 0x0037, 0xFB50 }, // 0x0000E890
   { 0x0000, 0x001F, 0x000E, 0x0010, 0x0000, 0x7FFF, 0x0037, 0xFB50 }, // 0x0000E8A0
   { 0x0000, 0x0020, 0x0021, 0x0022, 0x0000, 0xFFDC, 0x7FFF, 0xE637 }, // 0x0000E8B0
   { 0x0000, 0x0020, 0x0022, 0x0023, 0x0000, 0xFFDC, 0x7FFF, 0xE637 }, // 0x0000E8C0
   { 0x0000, 0x0023, 0x0022, 0x0024, 0x7FFF, 0x0000, 0x0000, 0xF6A0 }, // 0x0000E8D0
   { 0x0000, 0x0023, 0x0024, 0x0025, 0x7FFF, 0x0000, 0x0000, 0xF6A0 }, // 0x0000E8E0
   { 0x0000, 0x0025, 0x0024, 0x0013, 0x0000, 0x0024, 0x8001, 0x0001 }, // 0x0000E8F0
   { 0x0000, 0x0025, 0x0013, 0x0012, 0x0000, 0x0024, 0x8001, 0x0001 }, // 0x0000E900
   { 0x0000, 0x0010, 0x0026, 0x0027, 0x0000, 0xFFDC, 0x7FFF, 0xFB4F }, // 0x0000E910
   { 0x0000, 0x0010, 0x0027, 0x0028, 0x0000, 0xFFDC, 0x7FFF, 0xFB4F }, // 0x0000E920
   { 0x0000, 0x0028, 0x0027, 0x0029, 0x8001, 0x0000, 0x0000, 0x04B0 }, // 0x0000E930
   { 0x0000, 0x0028, 0x0029, 0x002A, 0x8001, 0x0000, 0x0000, 0x04B0 }, // 0x0000E940
   { 0x0000, 0x0020, 0x0023, 0x002A, 0x0000, 0x7FFF, 0x0037, 0xFB4D }, // 0x0000E950
   { 0x0000, 0x0020, 0x002A, 0x002B, 0x0000, 0x7FFF, 0x0037, 0xFB4D }, // 0x0000E960
   { 0x0000, 0x0023, 0x0025, 0x0028, 0x000C, 0x7FFF, 0x0028, 0xFB4F }, // 0x0000E970
   { 0x0000, 0x0023, 0x0028, 0x002A, 0x0010, 0x7FFF, 0x0027, 0xFB4F }, // 0x0000E980
   { 0x0000, 0x0025, 0x001E, 0x0028, 0x0000, 0x7FFF, 0x001B, 0xFB50 }, // 0x0000E990
   { 0x0000, 0x001E, 0x0010, 0x0028, 0xFFF2, 0x7FFF, 0x0029, 0xFB50 }, // 0x0000E9A0
   { 0x0000, 0x002A, 0x0029, 0x002C, 0x0000, 0x0024, 0x8001, 0x1519 }, // 0x0000E9B0
   { 0x0000, 0x002A, 0x002C, 0x002D, 0x0000, 0x0024, 0x8001, 0x1519 }, // 0x0000E9C0
   { 0x0000, 0x002D, 0x002C, 0x002E, 0x8001, 0x0012, 0x001B, 0xF8F3 }, // 0x0000E9D0
   { 0x0000, 0x002D, 0x002E, 0x002F, 0x8001, 0x0000, 0x0000, 0xF8F8 }, // 0x0000E9E0
   { 0x0000, 0x0030, 0x0031, 0x0032, 0x0000, 0xFFDC, 0x7FFF, 0xDCD7 }, // 0x0000E9F0
   { 0x0000, 0x0030, 0x0032, 0x0033, 0x0000, 0xFFDC, 0x7FFF, 0xDCD7 }, // 0x0000EA00
   { 0x0000, 0x0033, 0x0032, 0x0021, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x0000EA10
   { 0x0000, 0x0033, 0x0021, 0x0020, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x0000EA20
   { 0x0000, 0x0020, 0x002B, 0x0034, 0x0000, 0x7FFF, 0x0037, 0xFB4D }, // 0x0000EA30
   { 0x0000, 0x0020, 0x0034, 0x0035, 0x001B, 0x7FFF, 0x001B, 0xFB52 }, // 0x0000EA40
   { 0x0000, 0x0020, 0x0035, 0x0030, 0x001B, 0x7FFF, 0x0037, 0xFB4C }, // 0x0000EA50
   { 0x0000, 0x0020, 0x0030, 0x0033, 0x0000, 0x7FFF, 0x0029, 0xFB50 }, // 0x0000EA60
   { 0x0000, 0x0034, 0x002D, 0x002F, 0x0037, 0x7FFF, 0x001B, 0xFB53 }, // 0x0000EA70
   { 0x0000, 0x0034, 0x002F, 0x0035, 0x0037, 0x7FFF, 0x001B, 0xFB53 }, // 0x0000EA80
   { 0x0000, 0x0031, 0x0030, 0x0035, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x0000EA90
   { 0x0000, 0x0031, 0x0035, 0x0036, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x0000EAA0
   { 0x0000, 0x002F, 0x002E, 0x0036, 0x0000, 0xFFDC, 0x7FFF, 0xE637 }, // 0x0000EAB0
   { 0x0000, 0x002F, 0x0036, 0x0035, 0x0000, 0xFFDC, 0x7FFF, 0xE637 }, // 0x0000EAC0
   { 0x0000, 0x0037, 0x0038, 0x001F, 0x8001, 0x0000, 0xFFF7, 0xF6A0 }, // 0x0000EAD0
   { 0x0000, 0x0037, 0x001F, 0x0039, 0x8001, 0x0000, 0xFFF7, 0xF6A0 }, // 0x0000EAE0
   { 0x0000, 0x001D, 0x001C, 0x003A, 0x8001, 0x0000, 0x0000, 0x0000 }, // 0x0000EAF0
   { 0x0000, 0x001D, 0x003A, 0x001E, 0x8001, 0x0000, 0x0000, 0x0000 }, // 0x0000EB00
   { 0x0000, 0x001E, 0x003A, 0x0039, 0x0000, 0x0024, 0x8001, 0x0001 }, // 0x0000EB10
   { 0x0000, 0x001E, 0x0039, 0x001F, 0x0000, 0x0024, 0x8001, 0x0001 }, // 0x0000EB20
   { 0x0000, 0x0038, 0x0037, 0x003B, 0x0000, 0xFFDC, 0x7FFF, 0xF1EF }, // 0x0000EB30
   { 0x0000, 0x0038, 0x003B, 0x0011, 0x0000, 0xFFDC, 0x7FFF, 0xF1EF }, // 0x0000EB40
   { 0x0000, 0x0026, 0x0010, 0x0011, 0x7FFF, 0x0000, 0x000E, 0x04AF }, // 0x0000EB50
   { 0x0000, 0x0026, 0x0011, 0x003B, 0x7FFF, 0x0000, 0x000E, 0x04AF }, // 0x0000EB60

}; 

Vec3s gFireTrialPlatformCol_vtx_0000EB70[] = {
   { 2400, 1202, -1798 }, // 0x0000EB70
   { 2400, -598, -1800 }, // 0x0000EB76
   { 2400, -595, -4200 }, // 0x0000EB7C
   { 2400, 1205, -4198 }, // 0x0000EB82
   { 3600, -595, -4200 }, // 0x0000EB88
   { 3600, 1205, -4198 }, // 0x0000EB8E
   { 3600, -594, -5400 }, // 0x0000EB94
   { 3600, 1206, -5398 }, // 0x0000EB9A
   { 1200, -594, -5400 }, // 0x0000EBA0
   { 1200, 1206, -5398 }, // 0x0000EBA6
   { 1200, -596, -3000 }, // 0x0000EBAC
   { 1200, 1203, -2998 }, // 0x0000EBB2
   { 1200, 1202, -1798 }, // 0x0000EBB8
   { 1200, -598, -1800 }, // 0x0000EBBE
   { -2400, 1198, 1202 }, // 0x0000EBC4
   { -2400, 1197, 3602 }, // 0x0000EBCA
   { -1200, 1198, 1202 }, // 0x0000EBD0
   { -1201, 1199, 3602 }, // 0x0000EBD6
   { 1200, 1200, 2 }, // 0x0000EBDC
   { 1200, -600, 0 }, // 0x0000EBE2
   { 0, -596, -3000 }, // 0x0000EBE8
   { 0, 1203, -2998 }, // 0x0000EBEE
   { 0, -594, -5400 }, // 0x0000EBF4
   { 0, 1206, -5398 }, // 0x0000EBFA
   { -1200, -594, -5400 }, // 0x0000EC00
   { -1200, 1206, -5398 }, // 0x0000EC06
   { -1200, -598, -1800 }, // 0x0000EC0C
   { -1200, 1202, -1798 }, // 0x0000EC12
   { 0, -598, -1800 }, // 0x0000EC18
   { 0, 1202, -1798 }, // 0x0000EC1E
   { 0, 1200, 2 }, // 0x0000EC24
   { -2400, 1200, 2 }, // 0x0000EC2A
   { 600, 1192, 6602 }, // 0x0000EC30
   { 600, -608, 6600 }, // 0x0000EC36
   { 2400, -608, 6600 }, // 0x0000EC3C
   { 2400, 1192, 6602 }, // 0x0000EC42
   { 2400, -600, 0 }, // 0x0000EC48
   { 2400, 1200, 2 }, // 0x0000EC4E
   { -1200, -601, 1200 }, // 0x0000EC54
   { 1200, -601, 1200 }, // 0x0000EC5A
   { 1200, 1199, 1202 }, // 0x0000EC60
   { 1200, -606, 5400 }, // 0x0000EC66
   { 1200, 1194, 5402 }, // 0x0000EC6C
   { 600, 1194, 5402 }, // 0x0000EC72
   { -1801, -606, 5400 }, // 0x0000EC78
   { -1800, 1196, 5402 }, // 0x0000EC7E
   { -1800, -608, 6600 }, // 0x0000EC84
   { -1800, 1195, 6602 }, // 0x0000EC8A
   { -600, 1189, 9002 }, // 0x0000EC90
   { -600, -611, 9000 }, // 0x0000EC96
   { 600, -611, 9000 }, // 0x0000EC9C
   { 600, 1189, 9002 }, // 0x0000ECA2
   { -600, 1194, 5402 }, // 0x0000ECA8
   { -600, 1193, 6602 }, // 0x0000ECAE
   { -600, -608, 6600 }, // 0x0000ECB4
   { -2401, -604, 3600 }, // 0x0000ECBA
   { -2401, 1197, 3602 }, // 0x0000ECC0
   { -2400, -600, 0 }, // 0x0000ECC6
   { 0, -600, 0 }, // 0x0000ECCC
   { -1201, -604, 3600 }, // 0x0000ECD2
}; 

CollisionHeader gFireTrialPlatformCol = { -2401, -611, -5400, 3600, 1206, 9002, 60, gFireTrialPlatformCol_vtx_0000EB70, 83, gFireTrialPlatformCol_polygons_0000E640, gFireTrialPlatformCol_polygonTypes_0000E638, &gFireTrialPlatformCol_camDataList_0000E630, 0, 0 }; 

static u32 padED04 = 0;
static u32 padED08 = 0;
static u32 padED0C = 0;


