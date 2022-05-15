#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_syokudai.h"

static Vtx object_syokudaiVtx_000000[20];
static Vtx object_syokudaiVtx_000140[10];
static Vtx object_syokudaiVtx_0001E0[4];
static Vtx object_syokudaiVtx_000220[12];
static Vtx object_syokudaiVtx_0002E0[12];
static Vtx object_syokudaiVtx_000570[24];
static Vtx object_syokudaiVtx_0006F0[24];
static Vtx object_syokudaiVtx_0009D0[16];
static Vtx object_syokudaiVtx_000AD0[12];

static Vtx object_syokudaiVtx_000000[20] = {
    VTX(-8, 60, 8, 0, -4, 0, 244, 119, 255),
    VTX(0, 4, 4, 1024, 4100, 0, 244, 119, 255),
    VTX(8, 60, 8, 2049, -4, 0, 244, 119, 255),
    VTX(4, 4, 4, 2049, 4100, 0, 244, 119, 255),
    VTX(-4, 4, 4, 0, 4100, 0, 244, 119, 255),
    VTX(8, 60, 8, 0, 1, 119, 244, 0, 255),
    VTX(4, 4, 0, 1023, 4095, 119, 244, 0, 255),
    VTX(8, 60, -8, 2046, 1, 119, 244, 0, 255),
    VTX(4, 4, -4, 2046, 4095, 119, 244, 0, 255),
    VTX(4, 4, 4, 0, 4095, 119, 244, 0, 255),
    VTX(-8, 60, -8, 2046, 1, 137, 244, 0, 255),
    VTX(-4, 4, 0, 1023, 4095, 137, 244, 0, 255),
    VTX(-8, 60, 8, 0, 1, 137, 244, 0, 255),
    VTX(-4, 4, 4, 0, 4095, 137, 244, 0, 255),
    VTX(-4, 4, -4, 2046, 4095, 137, 244, 0, 255),
    VTX(8, 60, -8, 2049, -4, 0, 244, 137, 255),
    VTX(0, 4, -4, 1024, 4100, 0, 244, 137, 255),
    VTX(-8, 60, -8, 0, -4, 0, 244, 137, 255),
    VTX(-4, 4, -4, 0, 4100, 0, 244, 137, 255),
    VTX(4, 4, -4, 2049, 4100, 0, 244, 137, 255),
}; 

static Vtx object_syokudaiVtx_000140[10] = {
    VTX(-8, 60, 8, 0, 0, 255, 255, 255, 255),
    VTX(-7, 60, 7, 68, 67, 255, 255, 255, 255),
    VTX(-7, 60, -7, 958, 67, 255, 255, 255, 255),
    VTX(-8, 60, -8, 1024, 0, 255, 255, 255, 255),
    VTX(8, 60, 8, 0, 1024, 255, 255, 255, 255),
    VTX(7, 60, 7, 68, 957, 255, 255, 255, 255),
    VTX(8, 60, -8, 0, 0, 255, 255, 255, 255),
    VTX(7, 60, -7, 66, 67, 255, 255, 255, 255),
    VTX(7, 60, 7, 956, 67, 255, 255, 255, 255),
    VTX(8, 60, 8, 1024, 0, 255, 255, 255, 255),
}; 

static Vtx object_syokudaiVtx_0001E0[4] = {
    VTX(-8, 60, -8, 0, 1024, 0, 120, 0, 255),
    VTX(-7, 60, -7, 66, 957, 0, 120, 0, 255),
    VTX(7, 60, -7, 66, 67, 0, 120, 0, 255),
    VTX(8, 60, -8, 0, 0, 0, 120, 0, 255),
}; 

static Vtx object_syokudaiVtx_000220[12] = {
    VTX(0, 56, 0, 106, 38, 0, 119, 0, 255),
    VTX(7, 60, -7, 1024, 1024, 240, 117, 17, 255),
    VTX(-7, 60, -7, -805, 1024, 17, 117, 17, 255),
    VTX(0, 56, 0, 100, 25, 0, 119, 0, 255),
    VTX(7, 60, 7, 1024, 1024, 240, 117, 240, 255),
    VTX(7, 60, -7, -805, 1024, 240, 117, 17, 255),
    VTX(0, 56, 0, 1067, -8, 0, 119, 0, 255),
    VTX(-7, 60, 7, 1977, 997, 17, 117, 240, 255),
    VTX(7, 60, 7, 148, 997, 240, 117, 240, 255),
    VTX(0, 56, 0, 106, 38, 0, 119, 0, 255),
    VTX(-7, 60, -7, 1024, 1024, 17, 117, 16, 255),
    VTX(-7, 60, 7, -805, 1024, 17, 117, 239, 255),
}; 

static Vtx object_syokudaiVtx_0002E0[12] = {
    VTX(-10, 0, 10, 0, 1024, 0, 77, 91, 255),
    VTX(10, 0, 10, 2058, 1024, 0, 77, 91, 255),
    VTX(0, 12, 0, 1029, -2156, 0, 77, 91, 255),
    VTX(-10, 0, -10, 0, 1024, 165, 77, 0, 255),
    VTX(-10, 0, 10, 2052, 1024, 165, 77, 0, 255),
    VTX(0, 12, 0, 1026, -2155, 165, 77, 0, 255),
    VTX(10, 0, -10, 0, 1024, 0, 77, 165, 255),
    VTX(-10, 0, -10, 2052, 1024, 0, 77, 165, 255),
    VTX(0, 12, 0, 1026, -2160, 0, 77, 165, 255),
    VTX(10, 0, 10, 0, 1024, 91, 77, 0, 255),
    VTX(10, 0, -10, 2057, 1024, 91, 77, 0, 255),
    VTX(0, 12, 0, 1028, -2175, 91, 77, 0, 255),
}; 

Gfx gGoldenTorchDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gGoldenTorchTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_syokudaiVtx_000000[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 8, 7, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 15, 19, 16, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&object_syokudaiVtx_000140[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&object_syokudaiVtx_0001E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gUnkTorchTex_C90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_syokudaiVtx_000220[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0x0500D0A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetPrimColor(0, 0, 140, 140, 140, 255),
    gsSPVertex(&object_syokudaiVtx_0002E0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_syokudaiVtx_000570[24] = {
    VTX(6, 49, 6, 1002, 285, 0, 120, 0, 255),
    VTX(6, 49, -6, -22, 285, 0, 120, 0, 255),
    VTX(-6, 49, -6, -22, 322, 0, 120, 0, 255),
    VTX(-6, 49, 6, 1002, 322, 0, 120, 0, 255),
    VTX(8, 0, -8, -16, 2032, 119, 4, 0, 255),
    VTX(6, 49, 0, 496, -16, 119, 4, 0, 255),
    VTX(8, 0, 8, 1008, 2032, 119, 4, 0, 255),
    VTX(6, 49, -6, -16, -16, 119, 4, 0, 255),
    VTX(6, 49, 6, 1008, -16, 119, 4, 0, 255),
    VTX(-8, 0, -8, -16, 2032, 0, 4, 137, 255),
    VTX(0, 49, -6, 496, -16, 0, 4, 137, 255),
    VTX(8, 0, -8, 1008, 2032, 0, 4, 137, 255),
    VTX(-6, 49, -6, -16, -16, 0, 4, 137, 255),
    VTX(6, 49, -6, 1008, -16, 0, 4, 137, 255),
    VTX(-8, 0, 8, 1008, 2032, 137, 4, 0, 255),
    VTX(-6, 49, 0, 496, -16, 137, 4, 0, 255),
    VTX(-8, 0, -8, -16, 2032, 137, 4, 0, 255),
    VTX(-6, 49, 6, 1008, -16, 137, 4, 0, 255),
    VTX(-6, 49, -6, -16, -16, 137, 4, 0, 255),
    VTX(8, 0, 8, 1008, 2032, 0, 4, 119, 255),
    VTX(0, 49, 6, 496, -16, 0, 4, 119, 255),
    VTX(-8, 0, 8, -16, 2032, 0, 4, 119, 255),
    VTX(6, 49, 6, 1008, -16, 0, 4, 119, 255),
    VTX(-6, 49, 6, -16, -16, 0, 4, 119, 255),
}; 

static Vtx object_syokudaiVtx_0006F0[24] = {
    VTX(-6, 49, -6, 0, 1024, 0, 120, 0, 255),
    VTX(-6, 49, 6, 0, -1761, 0, 120, 0, 255),
    VTX(6, 49, 6, 2785, -1761, 0, 120, 0, 255),
    VTX(6, 49, -6, 2785, 1024, 0, 120, 0, 255),
    VTX(6, 49, -6, 3018, 1021, 117, 234, 0, 255),
    VTX(8, 58, 0, 1625, -441, 117, 234, 0, 255),
    VTX(6, 49, 6, 231, 1021, 117, 234, 0, 255),
    VTX(8, 58, -8, 3018, -441, 117, 234, 0, 255),
    VTX(8, 58, 8, 231, -441, 117, 234, 0, 255),
    VTX(-6, 49, -6, 3047, 1019, 0, 234, 139, 255),
    VTX(0, 58, -8, 1659, -438, 0, 234, 139, 255),
    VTX(6, 49, -6, 270, 1019, 0, 234, 139, 255),
    VTX(-8, 58, -8, 3047, -438, 0, 234, 139, 255),
    VTX(8, 58, -8, 270, -438, 0, 234, 139, 255),
    VTX(-6, 49, 6, 3042, 1031, 139, 234, 0, 255),
    VTX(-8, 58, 0, 1647, -433, 139, 234, 0, 255),
    VTX(-6, 49, -6, 252, 1031, 139, 234, 0, 255),
    VTX(-8, 58, -8, 252, -433, 139, 234, 0, 255),
    VTX(-8, 58, 8, 3042, -433, 139, 234, 0, 255),
    VTX(6, 49, 6, 2524, 1022, 0, 234, 117, 255),
    VTX(0, 58, 8, 1131, -439, 0, 234, 117, 255),
    VTX(-6, 49, 6, -262, 1022, 0, 234, 117, 255),
    VTX(-8, 58, 8, -262, -439, 0, 234, 117, 255),
    VTX(8, 58, 8, 2524, -439, 0, 234, 117, 255),
}; 

Gfx gWoodenTorchDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWoodenTorchTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA), G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_syokudaiVtx_000570[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(15, 18, 16, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 20, 23, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gTorchFlameGuardTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_OPA | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c1(G_BL_CLR_FOG, G_BL_A_SHADE, G_BL_CLR_IN, G_BL_1MA), G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&object_syokudaiVtx_0006F0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(14, 18, 15, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 19, 23, 20, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0009C8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_syokudaiVtx_0009D0[16] = {
    VTX(7, 0, -7, 4077, 1002, 116, 28, 0, 255),
    VTX(-7, 56, -7, 4074, -1011, 116, 28, 0, 255),
    VTX(-7, 56, 7, 2043, -1014, 116, 28, 0, 255),
    VTX(7, 0, 7, 2046, 999, 116, 28, 0, 255),
    VTX(-7, 0, -7, 2042, 1003, 0, 28, 140, 255),
    VTX(-7, 56, 7, 2039, -1009, 0, 28, 140, 255),
    VTX(7, 56, 7, 3, -1012, 0, 28, 140, 255),
    VTX(7, 0, -7, 6, 1000, 0, 28, 140, 255),
    VTX(-7, 0, 7, 4110, -1047, 140, 28, 0, 255),
    VTX(7, 56, 7, 4107, -3055, 140, 28, 0, 255),
    VTX(7, 56, -7, 2051, -3058, 140, 28, 0, 255),
    VTX(-7, 0, -7, 2054, -1050, 140, 28, 0, 255),
    VTX(7, 0, 7, 2044, 1004, 0, 28, 116, 255),
    VTX(7, 56, -7, 2041, -1011, 0, 28, 116, 255),
    VTX(-7, 56, -7, 17, -1014, 0, 28, 116, 255),
    VTX(-7, 0, 7, 20, 1001, 0, 28, 116, 255),
}; 

static Vtx object_syokudaiVtx_000AD0[12] = {
    VTX(-8, 60, -8, 2665, 1024, 102, 63, 0, 255),
    VTX(-8, 60, 8, 4, -1635, 102, 63, 0, 255),
    VTX(0, 47, 0, 0, 1024, 102, 63, 0, 255),
    VTX(8, 60, 8, 2665, 1024, 154, 63, 0, 255),
    VTX(8, 60, -8, 4, -1635, 154, 63, 0, 255),
    VTX(0, 47, 0, 0, 1024, 154, 63, 0, 255),
    VTX(8, 60, 8, 2665, 1024, 0, 193, 102, 255),
    VTX(-8, 60, 8, 4, -1635, 0, 193, 102, 255),
    VTX(0, 47, 0, 0, 1024, 0, 193, 102, 255),
    VTX(-8, 60, -8, 2665, 1024, 0, 193, 154, 255),
    VTX(8, 60, -8, 4, -1635, 0, 193, 154, 255),
    VTX(0, 47, 0, 0, 1024, 0, 193, 154, 255),
}; 

Gfx gTimedTorchDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gTimedTorchTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_syokudaiVtx_0009D0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gTorchFlameGuardTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_syokudaiVtx_000AD0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 gUnkTorchTex_C90[] = {
#include "assets/objects/object_syokudai/unk_C90.rgb5a1.inc.c"
};

u64 gGoldenTorchTex[] = {
#include "assets/objects/object_syokudai/golden_torch.rgb5a1.inc.c"
};

u64 gTorchFlameGuardTex[] = {
#include "assets/objects/object_syokudai/torch_flame_guard.rgb5a1.inc.c"
};

u64 gTimedTorchTex[] = {
#include "assets/objects/object_syokudai/timed_torch.rgb5a1.inc.c"
};

u64 gWoodenTorchTex[] = {
#include "assets/objects/object_syokudai/wooden_torch.i8.inc.c"
};


