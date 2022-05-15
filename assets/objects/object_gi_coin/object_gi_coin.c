#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_coin.h"

static Vtx object_gi_coinVtx_000000[3];
static Vtx object_gi_coinVtx_000030[7];
static Vtx object_gi_coinVtx_0000A0[32];
static Vtx object_gi_coinVtx_0002A0[22];
static Vtx object_gi_coinVtx_000400[3];
static Vtx object_gi_coinVtx_000430[19];

static Vtx object_gi_coinVtx_000000[3] = {
    VTX(-4, 9, 0, 0, 1408, 9, 241, 118, 255),
    VTX(-9, 4, 0, 0, 1664, 39, 246, 113, 255),
    VTX(-9, -4, 0, 0, 1920, 25, 10, 117, 255),
}; 

static Vtx object_gi_coinVtx_000030[7] = {
    VTX(-4, 9, 0, 0, 1408, 9, 241, 118, 255),
    VTX(-9, -4, 0, 0, 1920, 25, 10, 117, 255),
    VTX(-4, -9, 0, 512, 1920, 16, 28, 115, 255),
    VTX(4, -9, 0, 512, 1664, 242, 33, 114, 255),
    VTX(9, -4, 0, 512, 1408, 225, 8, 115, 255),
    VTX(9, 4, 0, 512, 1152, 231, 246, 117, 255),
    VTX(4, 9, 0, 0, 1152, 240, 217, 112, 255),
}; 

static Vtx object_gi_coinVtx_0000A0[32] = {
    VTX(-5, -12, -2, 573, 1911, 196, 153, 0, 255),
    VTX(-5, -12, 2, 451, 1911, 226, 140, 0, 255),
    VTX(-12, -5, 2, 61, 1911, 153, 196, 0, 255),
    VTX(-12, -5, -2, -61, 1911, 140, 226, 0, 255),
    VTX(5, -12, -2, 538, 1662, 30, 140, 0, 255),
    VTX(5, -12, 2, 486, 1662, 60, 153, 0, 255),
    VTX(12, -5, -2, 538, 1410, 103, 196, 0, 255),
    VTX(12, -5, 2, 486, 1410, 116, 226, 0, 255),
    VTX(12, 5, -2, 573, 1161, 116, 30, 0, 255),
    VTX(12, 5, 2, 451, 1161, 103, 60, 0, 255),
    VTX(5, 12, -2, -61, 1161, 60, 103, 0, 255),
    VTX(5, 12, 2, 61, 1161, 30, 116, 0, 255),
    VTX(-5, 12, -2, -26, 1410, 226, 116, 0, 255),
    VTX(-5, 12, 2, 26, 1410, 196, 103, 0, 255),
    VTX(-12, 5, -2, -26, 1662, 153, 60, 0, 255),
    VTX(-12, 5, 2, 26, 1662, 140, 30, 0, 255),
    VTX(-4, -9, 0, 512, 1920, 27, 45, 149, 255),
    VTX(-5, -12, -2, 573, 1911, 13, 51, 149, 255),
    VTX(-12, -5, -2, 963, 1911, 48, 20, 148, 255),
    VTX(-12, -5, -2, -61, 1911, 48, 20, 148, 255),
    VTX(-9, -4, 0, 0, 1920, 48, 20, 148, 255),
    VTX(4, -9, 0, 512, 1664, 243, 51, 149, 255),
    VTX(5, -12, -2, 538, 1662, 229, 45, 149, 255),
    VTX(9, -4, 0, 512, 1408, 211, 27, 149, 255),
    VTX(12, -5, -2, 538, 1410, 205, 13, 149, 255),
    VTX(9, 4, 0, 512, 1152, 205, 243, 149, 255),
    VTX(12, 5, -2, 573, 1161, 211, 229, 149, 255),
    VTX(12, 5, -2, -451, 1161, 211, 229, 149, 255),
    VTX(4, 9, 0, 0, 1152, 229, 211, 149, 255),
    VTX(5, 12, -2, -61, 1161, 243, 205, 149, 255),
    VTX(-4, 9, 0, 0, 1408, 13, 205, 149, 255),
    VTX(-5, 12, -2, -26, 1410, 27, 211, 149, 255),
}; 

static Vtx object_gi_coinVtx_0002A0[22] = {
    VTX(-5, 12, -2, -26, 1410, 27, 211, 149, 255),
    VTX(-4, 9, 0, 0, 1408, 13, 205, 149, 255),
    VTX(-9, 4, 0, 0, 1664, 48, 236, 148, 255),
    VTX(-12, 5, -2, -26, 1662, 48, 236, 148, 255),
    VTX(-9, -4, 0, 0, 1920, 48, 20, 148, 255),
    VTX(-12, -5, -2, -61, 1911, 48, 20, 148, 255),
    VTX(-9, 4, 0, 0, 1664, 51, 243, 107, 255),
    VTX(-12, 5, 2, 26, 1662, 45, 229, 107, 255),
    VTX(-12, -5, 2, 61, 1911, 48, 20, 108, 255),
    VTX(-9, -4, 0, 0, 1920, 48, 20, 108, 255),
    VTX(-4, 9, 0, 0, 1408, 27, 211, 107, 255),
    VTX(-5, 12, 2, 26, 1410, 13, 205, 107, 255),
    VTX(4, 9, 0, 0, 1152, 236, 208, 108, 255),
    VTX(5, 12, 2, 61, 1161, 236, 208, 108, 255),
    VTX(9, 4, 0, 512, 1152, 208, 236, 108, 255),
    VTX(12, 5, 2, 451, 1161, 208, 236, 108, 255),
    VTX(9, -4, 0, 512, 1408, 205, 13, 107, 255),
    VTX(12, -5, 2, 486, 1410, 211, 27, 107, 255),
    VTX(4, -9, 0, 512, 1664, 236, 48, 108, 255),
    VTX(5, -12, 2, 486, 1662, 236, 48, 108, 255),
    VTX(-4, -9, 0, 512, 1920, 27, 45, 107, 255),
    VTX(-5, -12, 2, 451, 1911, 13, 51, 107, 255),
}; 

static Vtx object_gi_coinVtx_000400[3] = {
    VTX(-3, -6, 1, 88, 1901, 0, 0, 120, 255),
    VTX(-3, 1, 1, 88, 1481, 0, 0, 120, 255),
    VTX(-6, -6, 1, 40, 1787, 0, 0, 120, 255),
}; 

static Vtx object_gi_coinVtx_000430[19] = {
    VTX(-3, 1, 1, 88, 1481, 0, 0, 120, 255),
    VTX(-6, 6, 1, 40, 1285, 0, 0, 120, 255),
    VTX(-6, -6, 1, 40, 1787, 0, 0, 120, 255),
    VTX(-2, 6, 1, 128, 1135, 0, 0, 120, 255),
    VTX(3, -1, 1, 424, 1591, 0, 0, 120, 255),
    VTX(3, -6, 1, 407, 1919, 0, 0, 120, 255),
    VTX(6, -6, 1, 472, 1787, 0, 0, 120, 255),
    VTX(6, 6, 1, 472, 1285, 0, 0, 120, 255),
    VTX(3, 6, 1, 424, 1171, 0, 0, 120, 255),
    VTX(-6, 6, -1, 472, 1285, 0, 0, 136, 255),
    VTX(-3, 6, -1, 424, 1171, 0, 0, 136, 255),
    VTX(-3, -1, -1, 424, 1591, 0, 0, 136, 255),
    VTX(-6, -6, -1, 472, 1787, 0, 0, 136, 255),
    VTX(-3, -6, -1, 407, 1919, 0, 0, 136, 255),
    VTX(3, 1, -1, 88, 1481, 0, 0, 136, 255),
    VTX(2, 6, -1, 128, 1135, 0, 0, 136, 255),
    VTX(6, 6, -1, 40, 1285, 0, 0, 136, 255),
    VTX(6, -6, -1, 40, 1787, 0, 0, 136, 255),
    VTX(3, -6, -1, 88, 1901, 0, 0, 136, 255),
}; 

Gfx gGiYellowCoinColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(150, 110, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiRedCoinColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsDPSetEnvColor(130, 0, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGreenCoinColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(0, 100, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBlueCoinColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 170, 255, 255, 255),
    gsDPSetEnvColor(0, 60, 130, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiCoinDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 1, 1, 1, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 1, 1, 1, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_coinVtx_000000[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_coinVtx_000030[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_coinVtx_0000A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 8, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(3, 2, 15, 0, 3, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 20, 0),
    gsSP2Triangles(21, 22, 17, 0, 21, 17, 16, 0),
    gsSP2Triangles(23, 24, 22, 0, 23, 22, 21, 0),
    gsSP2Triangles(24, 23, 25, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 25, 28, 0, 27, 28, 29, 0),
    gsSP2Triangles(30, 31, 29, 0, 30, 29, 28, 0),
    gsSPVertex(&object_gi_coinVtx_0002A0[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 16, 18, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 21, 0, 18, 21, 19, 0),
    gsSP2Triangles(20, 9, 8, 0, 20, 8, 21, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiNDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 128, 255, 255, 255, 255),
    gsDPSetEnvColor(50, 0, 150, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 3000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_coinVtx_000400[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_coinVtx_000430[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 0, 5, 4, 0),
    gsSP2Triangles(5, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(7, 8, 4, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 9, 11, 0, 13, 12, 11, 0),
    gsSP2Triangles(14, 13, 11, 0, 14, 11, 15, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP1Triangle(18, 14, 17, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000848[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


