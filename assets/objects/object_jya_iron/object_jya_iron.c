#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_jya_iron.h"

static Vtx object_jya_ironVtx_000000[24];
static Vtx object_jya_ironVtx_000180[12];
static Vtx object_jya_ironVtx_000360[42];
static Vtx object_jya_ironVtx_000700[24];
static Vtx object_jya_ironVtx_000940[26];
static Vtx object_jya_ironVtx_000D80[45];

static Vtx object_jya_ironVtx_000000[24] = {
    VTX(-173, 1600, 100, 512, 0, 189, 178, 157, 255),
    VTX(-173, 0, 100, 512, 4096, 177, 216, 138, 255),
    VTX(0, 0, 200, 0, 4096, 177, 216, 138, 255),
    VTX(0, 1600, 200, 0, 0, 189, 178, 157, 255),
    VTX(-173, 1600, -100, 512, 0, 189, 178, 157, 255),
    VTX(-173, 0, -100, 512, 4096, 177, 216, 138, 255),
    VTX(-173, 0, 100, 0, 4096, 177, 216, 138, 255),
    VTX(-173, 1600, 100, 0, 0, 189, 178, 157, 255),
    VTX(0, 1600, -200, 512, 0, 189, 178, 157, 255),
    VTX(0, 0, -200, 512, 4096, 177, 216, 138, 255),
    VTX(-173, 0, -100, 0, 4096, 177, 216, 138, 255),
    VTX(-173, 1600, -100, 0, 0, 189, 178, 157, 255),
    VTX(173, 1600, -100, 512, 0, 189, 178, 157, 255),
    VTX(173, 0, -100, 512, 4096, 177, 216, 138, 255),
    VTX(0, 0, -200, 0, 4096, 177, 216, 138, 255),
    VTX(0, 1600, -200, 0, 0, 189, 178, 157, 255),
    VTX(173, 1600, 100, 512, 0, 189, 178, 157, 255),
    VTX(173, 0, 100, 512, 4096, 177, 216, 138, 255),
    VTX(173, 0, -100, 0, 4096, 177, 216, 138, 255),
    VTX(173, 1600, -100, 0, 0, 189, 178, 157, 255),
    VTX(0, 1600, 200, 512, 0, 189, 178, 157, 255),
    VTX(0, 0, 200, 512, 4096, 177, 216, 138, 255),
    VTX(173, 0, 100, 0, 4096, 177, 216, 138, 255),
    VTX(173, 1600, 100, 0, 0, 189, 178, 157, 255),
}; 

static Vtx object_jya_ironVtx_000180[12] = {
    VTX(-173, 1600, 100, 512, -375, 189, 178, 157, 255),
    VTX(0, 1600, 200, 0, -375, 189, 178, 157, 255),
    VTX(173, 1600, 100, -256, 69, 189, 178, 157, 255),
    VTX(173, 1600, -100, 0, 512, 189, 178, 157, 255),
    VTX(0, 1600, -200, 512, 512, 189, 178, 157, 255),
    VTX(-173, 1600, -100, 768, 69, 189, 178, 157, 255),
    VTX(-173, 0, 100, -256, 69, 177, 216, 138, 255),
    VTX(-173, 0, -100, 0, 512, 177, 216, 138, 255),
    VTX(0, 0, -200, 512, 512, 177, 216, 138, 255),
    VTX(173, 0, -100, 768, 69, 177, 216, 138, 255),
    VTX(173, 0, 100, 512, -375, 177, 216, 138, 255),
    VTX(0, 0, 200, 0, -375, 177, 216, 138, 255),
}; 

Gfx gPillarDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gPillarSideTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 7, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 1, 7, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 508),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_jya_ironVtx_000000[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gPillarTopTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 1, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsSPVertex(&object_jya_ironVtx_000180[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_jya_ironVtx_000360[42] = {
    VTX(0, 283, 0, 1536, 3372, 113, 75, 37, 255),
    VTX(-173, 208, -100, 2816, 3563, 113, 75, 37, 255),
    VTX(-173, 208, 100, 3328, 3563, 113, 75, 37, 255),
    VTX(0, 230, 200, 768, 3507, 113, 75, 37, 255),
    VTX(0, 283, 0, 512, 3372, 113, 75, 37, 255),
    VTX(-173, 208, 100, 256, 3563, 113, 75, 37, 255),
    VTX(0, 283, 0, 2688, 3372, 113, 75, 37, 255),
    VTX(-87, 219, -150, 2560, 3535, 113, 75, 37, 255),
    VTX(0, 283, 0, 2432, 3372, 113, 75, 37, 255),
    VTX(0, 184, -200, 2304, 3624, 113, 75, 37, 255),
    VTX(52, 204, 170, 913, 3574, 113, 75, 37, 255),
    VTX(0, 283, 0, 840, 3372, 113, 75, 37, 255),
    VTX(173, 183, 100, 1280, 3627, 113, 75, 37, 255),
    VTX(0, 283, 0, 1096, 3372, 113, 75, 37, 255),
    VTX(173, 216, -100, 1792, 3542, 113, 75, 37, 255),
    VTX(0, 283, 0, 2048, 3372, 113, 75, 37, 255),
    VTX(-173, 0, 100, 3328, 4096, 113, 75, 37, 255),
    VTX(-173, 0, -100, 2816, 4096, 113, 75, 37, 255),
    VTX(0, 0, -200, 2304, 4096, 113, 75, 37, 255),
    VTX(173, 0, -100, 1792, 4096, 113, 75, 37, 255),
    VTX(173, 0, 100, 4352, 4096, 113, 75, 37, 255),
    VTX(0, 0, 200, 3840, 4096, 113, 75, 37, 255),
    VTX(-173, 208, 100, 256, 3563, 177, 164, 138, 255),
    VTX(-173, 0, 100, 256, 4096, 177, 164, 138, 255),
    VTX(0, 0, 200, 768, 4096, 177, 164, 138, 255),
    VTX(0, 230, 200, 768, 3507, 177, 164, 138, 255),
    VTX(-173, 208, -100, 2816, 3563, 177, 164, 138, 255),
    VTX(-173, 0, -100, 2816, 4096, 177, 164, 138, 255),
    VTX(-173, 0, 100, 3328, 4096, 177, 164, 138, 255),
    VTX(-173, 208, 100, 3328, 3563, 177, 164, 138, 255),
    VTX(0, 184, -200, 2304, 3624, 177, 164, 138, 255),
    VTX(0, 0, -200, 2304, 4096, 177, 164, 138, 255),
    VTX(-87, 219, -150, 2560, 3535, 177, 164, 138, 255),
    VTX(-173, 0, -100, 2816, 4096, 177, 164, 138, 255),
    VTX(-173, 208, -100, 2816, 3563, 177, 164, 138, 255),
    VTX(173, 216, -100, 1792, 3542, 177, 164, 138, 255),
    VTX(173, 0, -100, 1792, 4096, 177, 164, 138, 255),
    VTX(173, 183, 100, 1280, 3627, 177, 164, 138, 255),
    VTX(173, 0, 100, 1280, 4096, 177, 164, 138, 255),
    VTX(0, 230, 200, 768, 3507, 177, 164, 138, 255),
    VTX(0, 0, 200, 768, 4096, 177, 164, 138, 255),
    VTX(52, 204, 170, 913, 3574, 177, 164, 138, 255),
}; 

Gfx gObjectJyaIronDL_000600[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gPillarSideTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 7, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 1, 7, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 508),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_jya_ironVtx_000360[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 9, 7, 0),
    gsSP2Triangles(3, 10, 11, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 9, 15, 0, 12, 14, 0, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&object_jya_ironVtx_000360[30], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 1, 0),
    gsSP2Triangles(5, 1, 0, 0, 7, 8, 6, 0),
    gsSP2Triangles(7, 6, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 8, 11, 0, 8, 7, 11, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0006F8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_jya_ironVtx_000700[24] = {
    VTX(33, 30, -119, 256, 3170, 113, 75, 37, 255),
    VTX(33, -50, -119, 256, 3372, 113, 75, 37, 255),
    VTX(-140, -124, -19, 256, 3563, 113, 75, 37, 255),
    VTX(-140, -22, -19, 256, 3301, 113, 75, 37, 255),
    VTX(119, 61, 31, 1024, 3090, 113, 75, 37, 255),
    VTX(33, -50, -119, 1024, 3372, 113, 75, 37, 255),
    VTX(33, 30, -119, 1024, 3170, 113, 75, 37, 255),
    VTX(85, -128, 51, 913, 3574, 113, 75, 37, 255),
    VTX(33, -50, -119, 968, 3372, 113, 75, 37, 255),
    VTX(-54, 177, 31, 512, 2792, 113, 75, 37, 255),
    VTX(33, 30, -119, 384, 3170, 113, 75, 37, 255),
    VTX(33, 159, 81, 768, 2839, 113, 75, 37, 255),
    VTX(33, 30, -119, 640, 3170, 113, 75, 37, 255),
    VTX(33, 30, -119, 896, 3170, 113, 75, 37, 255),
    VTX(-140, -22, -19, 256, 3301, 177, 164, 138, 255),
    VTX(33, -102, 81, 768, 3507, 177, 164, 138, 255),
    VTX(-54, 177, 31, 512, 2792, 177, 164, 138, 255),
    VTX(33, 159, 81, 768, 2839, 177, 164, 138, 255),
    VTX(-140, -124, -19, 256, 3563, 177, 164, 138, 255),
    VTX(119, 61, 31, 1024, 3090, 177, 164, 138, 255),
    VTX(85, -128, 51, 913, 3574, 177, 164, 138, 255),
    VTX(33, -50, -119, 512, 3372, 113, 75, 37, 255),
    VTX(33, -102, 81, 768, 3507, 113, 75, 37, 255),
    VTX(33, -50, -119, 840, 3372, 113, 75, 37, 255),
}; 

Gfx gObjectJyaIronDL_000880[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gPillarSideTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 7, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 1, 7, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 508),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_jya_ironVtx_000700[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 8, 0),
    gsSP2Triangles(9, 10, 3, 0, 9, 11, 12, 0),
    gsSP2Triangles(11, 4, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 16, 0, 14, 18, 15, 0),
    gsSP2Triangles(17, 15, 19, 0, 15, 20, 19, 0),
    gsSP2Triangles(2, 21, 22, 0, 23, 7, 22, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_jya_ironVtx_000940[26] = {
    VTX(-105, -186, 147, 256, 992, 113, 75, 37, 255),
    VTX(91, -124, 80, 1058, 835, 113, 75, 37, 255),
    VTX(-18, -140, 197, 512, 876, 113, 75, 37, 255),
    VTX(-105, -186, 147, 3328, 992, 113, 75, 37, 255),
    VTX(-105, -152, -53, 2816, 906, 113, 75, 37, 255),
    VTX(91, -124, 80, 4130, 835, 113, 75, 37, 255),
    VTX(68, -139, -153, 2304, 872, 113, 75, 37, 255),
    VTX(187, -104, -85, 1947, 783, 113, 75, 37, 255),
    VTX(128, 202, -119, 2136, 0, 113, 75, 37, 255),
    VTX(68, 202, -153, 2304, 0, 113, 75, 37, 255),
    VTX(-105, 202, -53, 2816, 0, 113, 75, 37, 255),
    VTX(-105, 202, 47, 3072, 0, 113, 75, 37, 255),
    VTX(-105, 37, 147, 256, 421, 113, 75, 37, 255),
    VTX(-105, 202, 47, 0, 0, 113, 75, 37, 255),
    VTX(-105, 37, 147, 256, 421, 177, 164, 138, 255),
    VTX(-105, -186, 147, 256, 992, 177, 164, 138, 255),
    VTX(-18, -140, 197, 512, 876, 177, 164, 138, 255),
    VTX(-105, 202, 47, 3072, 0, 177, 164, 138, 255),
    VTX(-105, -152, -53, 2816, 906, 177, 164, 138, 255),
    VTX(-105, 37, 147, 3328, 421, 177, 164, 138, 255),
    VTX(-105, -186, 147, 3328, 992, 177, 164, 138, 255),
    VTX(-105, 202, -53, 2816, 0, 177, 164, 138, 255),
    VTX(68, 202, -153, 2304, 0, 177, 164, 138, 255),
    VTX(68, -139, -153, 2304, 872, 177, 164, 138, 255),
    VTX(128, 202, -119, 2136, 0, 177, 164, 138, 255),
    VTX(187, -104, -85, 1947, 783, 177, 164, 138, 255),
}; 

Gfx gObjectJyaIronDL_000AE0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gPillarSideTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 7, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 1, 7, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 508),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_jya_ironVtx_000940[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 1, 13, 0, 12, 2, 1, 0),
    gsSP2Triangles(1, 8, 11, 0, 1, 7, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 17, 21, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 18, 0),
    gsSP2Triangles(22, 24, 25, 0, 22, 25, 23, 0),
    gsSPEndDisplayList(),
}; 

CamData gPillarCol_camDataList_00000BB0[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gPillarCol_polygonTypes_00000BB8[] = {
   0x00000000, 0x000007C0,
}; 

CollisionPoly gPillarCol_polygons_00000BC0[] = {
   { 0x0000, 0x2000, 0x0001, 0x0002, 0xBFF2, 0x0000, 0x6ED1, 0xFF53 }, // 0x00000BC0
   { 0x0000, 0x2000, 0x0002, 0x0003, 0xBFF2, 0x0000, 0x6ED1, 0xFF53 }, // 0x00000BD0
   { 0x0000, 0x2004, 0x0005, 0x0001, 0x8001, 0x0000, 0x0000, 0xFF53 }, // 0x00000BE0
   { 0x0000, 0x2004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xFF53 }, // 0x00000BF0
   { 0x0000, 0x2006, 0x0007, 0x0005, 0xBFF2, 0x0000, 0x912F, 0xFF53 }, // 0x00000C00
   { 0x0000, 0x2006, 0x0005, 0x0004, 0xBFF2, 0x0000, 0x912F, 0xFF53 }, // 0x00000C10
   { 0x0000, 0x2008, 0x0009, 0x0007, 0x400E, 0x0000, 0x912F, 0xFF53 }, // 0x00000C20
   { 0x0000, 0x2008, 0x0007, 0x0006, 0x400E, 0x0000, 0x912F, 0xFF53 }, // 0x00000C30
   { 0x0000, 0x200A, 0x000B, 0x0009, 0x7FFF, 0x0000, 0x0000, 0xFF53 }, // 0x00000C40
   { 0x0000, 0x200A, 0x0009, 0x0008, 0x7FFF, 0x0000, 0x0000, 0xFF53 }, // 0x00000C50
   { 0x0000, 0x2003, 0x0002, 0x000B, 0x400E, 0x0000, 0x6ED1, 0xFF53 }, // 0x00000C60
   { 0x0000, 0x2003, 0x000B, 0x000A, 0x400E, 0x0000, 0x6ED1, 0xFF53 }, // 0x00000C70
   { 0x0000, 0x2000, 0x0003, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xF9C0 }, // 0x00000C80
   { 0x0000, 0x2000, 0x000A, 0x0008, 0x0000, 0x7FFF, 0x0000, 0xF9C0 }, // 0x00000C90
   { 0x0000, 0x2000, 0x0008, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xF9C0 }, // 0x00000CA0
   { 0x0000, 0x2000, 0x0006, 0x0004, 0x0000, 0x7FFF, 0x0000, 0xF9C0 }, // 0x00000CB0
   { 0x0000, 0x2001, 0x0005, 0x0007, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000CC0
   { 0x0000, 0x2001, 0x0007, 0x0009, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000CD0
   { 0x0000, 0x2001, 0x0009, 0x000B, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000CE0
   { 0x0000, 0x2001, 0x000B, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000CF0

}; 

Vec3s gPillarCol_vtx_00000D00[] = {
   { -173, 1600, 100 }, // 0x00000D00
   { -173, 0, 100 }, // 0x00000D06
   { 0, 0, 200 }, // 0x00000D0C
   { 0, 1600, 200 }, // 0x00000D12
   { -173, 1600, -100 }, // 0x00000D18
   { -173, 0, -100 }, // 0x00000D1E
   { 0, 1600, -200 }, // 0x00000D24
   { 0, 0, -200 }, // 0x00000D2A
   { 173, 1600, -100 }, // 0x00000D30
   { 173, 0, -100 }, // 0x00000D36
   { 173, 1600, 100 }, // 0x00000D3C
   { 173, 0, 100 }, // 0x00000D42
}; 

CollisionHeader gPillarCol = { -173, 0, -200, 173, 1600, 200, 12, gPillarCol_vtx_00000D00, 20, gPillarCol_polygons_00000BC0, gPillarCol_polygonTypes_00000BB8, &gPillarCol_camDataList_00000BB0, 0, 0 }; 

static u32 padD74 = 0;
static u32 padD78 = 0;
static u32 padD7C = 0;

static Vtx object_jya_ironVtx_000D80[45] = {
    VTX(-228, 344, -243, 1313, 2573, 169, 154, 126, 255),
    VTX(-255, 0, -270, 1382, 3277, 169, 154, 126, 255),
    VTX(-255, 0, -163, 1109, 3277, 169, 154, 126, 255),
    VTX(-226, 188, -111, 975, 2892, 169, 154, 126, 255),
    VTX(-255, 0, -270, 0, 3277, 169, 154, 126, 255),
    VTX(-228, 344, -243, 69, 2573, 169, 154, 126, 255),
    VTX(-75, 240, -240, 461, 2785, 169, 154, 126, 255),
    VTX(-225, 608, -240, 1306, 2031, 169, 154, 126, 255),
    VTX(-225, 433, 240, 77, 2390, 169, 154, 126, 255),
    VTX(-232, 185, 247, 59, 2899, 169, 154, 126, 255),
    VTX(-75, 240, 240, 461, 2785, 169, 154, 126, 255),
    VTX(-75, 1200, 240, 461, 819, 169, 154, 126, 255),
    VTX(-225, 1200, 240, 77, 819, 169, 154, 126, 255),
    VTX(-227, 201, 61, 535, 2866, 169, 154, 126, 255),
    VTX(-225, 1093, 0, 691, 1038, 169, 154, 126, 255),
    VTX(-225, 1200, -240, 1306, 819, 169, 154, 126, 255),
    VTX(-225, 1200, 240, 0, 1920, 169, 154, 126, 255),
    VTX(-75, 1200, 240, 0, 2304, 169, 154, 126, 255),
    VTX(-75, 1093, 0, 614, 2304, 169, 154, 126, 255),
    VTX(-225, 1093, 0, 614, 1920, 169, 154, 126, 255),
    VTX(-75, 1200, -240, 1229, 2304, 169, 154, 126, 255),
    VTX(-225, 1200, -240, 1229, 1920, 169, 154, 126, 255),
    VTX(-255, 0, 270, 0, 3277, 169, 154, 126, 255),
    VTX(255, 0, 270, 1306, 3277, 169, 154, 126, 255),
    VTX(225, 240, 240, 1229, 2785, 169, 154, 126, 255),
    VTX(225, 240, -240, 1229, 2785, 169, 154, 126, 255),
    VTX(255, 0, -270, 1306, 3277, 169, 154, 126, 255),
    VTX(255, 0, -270, 1382, 3277, 169, 154, 126, 255),
    VTX(225, 240, -240, 1306, 2785, 169, 154, 126, 255),
    VTX(225, 240, 240, 77, 2785, 169, 154, 126, 255),
    VTX(255, 0, 270, 0, 3277, 169, 154, 126, 255),
    VTX(225, 240, -240, 1229, 3072, 169, 154, 126, 255),
    VTX(-75, 240, -240, 1229, 2304, 169, 154, 126, 255),
    VTX(-75, 240, 240, 0, 2304, 169, 154, 126, 255),
    VTX(225, 240, 240, 0, 3072, 169, 154, 126, 255),
    VTX(-75, 240, -240, 461, 2785, 169, 154, 126, 255),
    VTX(-228, 344, -243, 69, 2573, 169, 154, 126, 255),
    VTX(-225, 608, -240, 77, 2031, 169, 154, 126, 255),
    VTX(-225, 1200, -240, 77, 819, 169, 154, 126, 255),
    VTX(-75, 1200, -240, 461, 819, 169, 154, 126, 255),
    VTX(-75, 1200, 240, 77, 819, 169, 154, 126, 255),
    VTX(-75, 240, 240, 77, 2785, 169, 154, 126, 255),
    VTX(-75, 240, -240, 1306, 2785, 169, 154, 126, 255),
    VTX(-75, 1200, -240, 1306, 819, 169, 154, 126, 255),
    VTX(-75, 1093, 0, 691, 1038, 169, 154, 126, 255),
}; 

Gfx gThroneDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gPillarSideTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 7, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 1, 7, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 508),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 169, 154, 126, 255),
    gsSPVertex(&object_jya_ironVtx_000D80[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 0, 3, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(13, 8, 12, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 7, 0),
    gsSP2Triangles(13, 7, 3, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 19, 18, 20, 0),
    gsSP2Triangles(19, 20, 21, 0, 9, 22, 23, 0),
    gsSP2Triangles(9, 23, 24, 0, 9, 24, 10, 0),
    gsSP2Triangles(3, 2, 22, 0, 3, 22, 9, 0),
    gsSP2Triangles(3, 9, 13, 0, 4, 6, 25, 0),
    gsSP2Triangles(4, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&object_jya_ironVtx_000D80[31], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 9, 0),
    gsSPEndDisplayList(),
}; 

CamData gThroneCol_camDataList_00001170[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gThroneCol_polygonTypes_00001178[] = {
   0x00000000, 0x000007C2,
}; 

CollisionPoly gThroneCol_polygons_00001180[] = {
   { 0x0000, 0x2000, 0x0001, 0x0002, 0x8065, 0x0A04, 0x0000, 0xFF02 }, // 0x00001180
   { 0x0000, 0x2003, 0x0000, 0x0002, 0x822F, 0x0E3B, 0x12B9, 0xFF1D }, // 0x00001190
   { 0x0000, 0x2001, 0x0000, 0x0004, 0x08D2, 0x094E, 0x80A6, 0xFF05 }, // 0x000011A0
   { 0x0000, 0x2005, 0x0000, 0x0003, 0x8010, 0x016A, 0x039C, 0xFF1F }, // 0x000011B0
   { 0x0000, 0x2006, 0x0007, 0x0008, 0x047B, 0x037C, 0x7FDF, 0xFF0C }, // 0x000011C0
   { 0x0000, 0x2006, 0x0008, 0x0009, 0x0000, 0x0000, 0x7FFF, 0xFF10 }, // 0x000011D0
   { 0x0000, 0x2006, 0x0009, 0x000A, 0x0000, 0x0000, 0x7FFF, 0xFF10 }, // 0x000011E0
   { 0x0000, 0x200B, 0x0007, 0x0006, 0x8017, 0x0386, 0xFCDD, 0xFF19 }, // 0x000011F0
   { 0x0000, 0x200B, 0x0006, 0x000A, 0x8003, 0x0000, 0x016E, 0xFF1C }, // 0x00001200
   { 0x0000, 0x200B, 0x000A, 0x000C, 0x8001, 0x0047, 0xFFE0, 0xFF1D }, // 0x00001210
   { 0x0000, 0x200B, 0x000C, 0x000D, 0x8001, 0x004C, 0x0022, 0xFF1C }, // 0x00001220
   { 0x0000, 0x200B, 0x000D, 0x0005, 0x8002, 0x0000, 0xFF26, 0xFF1D }, // 0x00001230
   { 0x0000, 0x200B, 0x0005, 0x0003, 0x8002, 0x0013, 0xFF40, 0xFF1D }, // 0x00001240
   { 0x0000, 0x200A, 0x0009, 0x000E, 0x0000, 0x74E7, 0xCBE1, 0xFC1A }, // 0x00001250
   { 0x0000, 0x200A, 0x000E, 0x000C, 0x0000, 0x74E7, 0xCBE1, 0xFC1A }, // 0x00001260
   { 0x0000, 0x200C, 0x000E, 0x000F, 0x0000, 0x74E7, 0x341F, 0xFC1A }, // 0x00001270
   { 0x0000, 0x200C, 0x000F, 0x000D, 0x0000, 0x74E7, 0x341F, 0xFC1A }, // 0x00001280
   { 0x0000, 0x2007, 0x0010, 0x0011, 0x0000, 0x0FCB, 0x7F05, 0xFEF4 }, // 0x00001290
   { 0x0000, 0x2007, 0x0011, 0x0012, 0x0009, 0x0FE1, 0x7F02, 0xFEF4 }, // 0x000012A0
   { 0x0000, 0x2007, 0x0012, 0x0008, 0x0000, 0x1029, 0x7EF9, 0xFEF4 }, // 0x000012B0
   { 0x0000, 0x2003, 0x0002, 0x0010, 0x8180, 0x1383, 0x0000, 0xFF04 }, // 0x000012C0
   { 0x0000, 0x2003, 0x0010, 0x0007, 0x80F8, 0x0F8B, 0xFE00, 0xFF07 }, // 0x000012D0
   { 0x0000, 0x2003, 0x0007, 0x000B, 0x8118, 0x108B, 0xFE03, 0xFF06 }, // 0x000012E0
   { 0x0000, 0x2001, 0x0004, 0x0013, 0x0000, 0x0FE0, 0x80FE, 0xFEF4 }, // 0x000012F0
   { 0x0000, 0x2001, 0x0013, 0x0014, 0x0000, 0x0FE0, 0x80FE, 0xFEF4 }, // 0x00001300
   { 0x0000, 0x2014, 0x0013, 0x0012, 0x7F02, 0x0FE0, 0x0000, 0xFF03 }, // 0x00001310
   { 0x0000, 0x2014, 0x0012, 0x0011, 0x7F02, 0x0FE0, 0x0000, 0xFF03 }, // 0x00001320
   { 0x0000, 0x2013, 0x0004, 0x0008, 0x0000, 0x7FFF, 0x0000, 0xFF10 }, // 0x00001330
   { 0x0000, 0x2013, 0x0008, 0x0012, 0x0000, 0x7FFF, 0x0000, 0xFF10 }, // 0x00001340
   { 0x0000, 0x2004, 0x0000, 0x0005, 0x0378, 0x016A, 0x800F, 0xFF0F }, // 0x00001350
   { 0x0000, 0x2004, 0x0005, 0x000D, 0x0000, 0x0000, 0x8001, 0xFF10 }, // 0x00001360
   { 0x0000, 0x2004, 0x000D, 0x000F, 0x0000, 0x0000, 0x8001, 0xFF10 }, // 0x00001370
   { 0x0000, 0x2009, 0x0008, 0x0004, 0x7FFF, 0x0000, 0x0000, 0x004B }, // 0x00001380
   { 0x0000, 0x2004, 0x000F, 0x000E, 0x7FFF, 0x0000, 0x0000, 0x004B }, // 0x00001390
   { 0x0000, 0x2004, 0x000E, 0x0009, 0x7FFF, 0x0000, 0x0000, 0x004B }, // 0x000013A0

}; 

Vec3s gThroneCol_vtx_000013B0[] = {
   { -228, 344, -243 }, // 0x000013B0
   { -255, 0, -270 }, // 0x000013B6
   { -255, 0, -163 }, // 0x000013BC
   { -226, 188, -111 }, // 0x000013C2
   { -75, 240, -240 }, // 0x000013C8
   { -225, 608, -240 }, // 0x000013CE
   { -225, 433, 240 }, // 0x000013D4
   { -232, 185, 247 }, // 0x000013DA
   { -75, 240, 240 }, // 0x000013E0
   { -75, 1200, 240 }, // 0x000013E6
   { -225, 1200, 240 }, // 0x000013EC
   { -227, 201, 61 }, // 0x000013F2
   { -225, 1093, 0 }, // 0x000013F8
   { -225, 1200, -240 }, // 0x000013FE
   { -75, 1093, 0 }, // 0x00001404
   { -75, 1200, -240 }, // 0x0000140A
   { -255, 0, 270 }, // 0x00001410
   { 255, 0, 270 }, // 0x00001416
   { 225, 240, 240 }, // 0x0000141C
   { 225, 240, -240 }, // 0x00001422
   { 255, 0, -270 }, // 0x00001428
}; 

CollisionHeader gThroneCol = { -255, 0, -270, 255, 1200, 270, 21, gThroneCol_vtx_000013B0, 35, gThroneCol_polygons_00001180, gThroneCol_polygonTypes_00001178, &gThroneCol_camDataList_00001170, 0, 0 }; 

static u32 pad145C = 0;

u64 gPillarSideTex[] = {
#include "assets/objects/object_jya_iron/pillar_side.rgb5a1.inc.c"
};

u64 gPillarTopTex[] = {
#include "assets/objects/object_jya_iron/pillar_top.rgb5a1.inc.c"
};


