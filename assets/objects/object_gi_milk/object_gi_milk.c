#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_milk.h"

static Vtx object_gi_milkVtx_0006C0[26];
static Vtx object_gi_milkVtx_000860[3];
static Vtx object_gi_milkVtx_000890[26];
static Vtx object_gi_milkVtx_000A30[8];
static Vtx object_gi_milkVtx_000AB0[3];
static Vtx object_gi_milkVtx_000AE0[88];

u64 object_gi_milkTex_000000[] = {
#include "assets/objects/object_gi_milk//object_gi_milkTex_000000.i8.inc.c"
};

static Vtx object_gi_milkVtx_0006C0[26] = {
    VTX(-5, 18, 0, 229, 565, 192, 156, 244, 255),
    VTX(-2, 18, -4, 504, 406, 225, 185, 165, 255),
    VTX(2, 18, -4, 779, 565, 43, 156, 207, 255),
    VTX(5, 31, -8, 853, 0, 37, 217, 149, 255),
    VTX(2, 18, -4, 853, 1024, 43, 156, 207, 255),
    VTX(-2, 18, -4, 1195, 1024, 225, 185, 165, 255),
    VTX(9, 31, 0, 512, 0, 111, 217, 235, 255),
    VTX(5, 18, 0, 512, 1024, 94, 185, 18, 255),
    VTX(5, 31, 8, 171, 0, 74, 217, 85, 255),
    VTX(2, 18, 4, 171, 1024, 21, 156, 62, 255),
    VTX(-5, 31, -8, 1195, 0, 182, 217, 171, 255),
    VTX(-5, 18, 0, 1536, 1024, 192, 156, 244, 255),
    VTX(-9, 31, 0, -17, 423, 0, 120, 0, 255),
    VTX(-5, 31, 8, -17, 1024, 0, 120, 0, 255),
    VTX(5, 31, 8, 504, 1324, 0, 120, 0, 255),
    VTX(-9, 31, 0, 1536, 0, 145, 217, 21, 255),
    VTX(-2, 18, 4, 1877, 1024, 193, 185, 73, 255),
    VTX(-5, 31, 8, 1877, 0, 219, 217, 107, 255),
    VTX(2, 18, 4, 2219, 1024, 21, 156, 62, 255),
    VTX(2, 18, 4, 504, 1041, 21, 156, 62, 255),
    VTX(-2, 18, 4, 229, 882, 193, 185, 73, 255),
    VTX(5, 18, 0, 779, 882, 94, 185, 18, 255),
    VTX(5, 31, -8, 1024, 423, 0, 120, 0, 255),
    VTX(-5, 31, -8, 504, 123, 0, 120, 0, 255),
    VTX(9, 31, 0, 1024, 1024, 0, 120, 0, 255),
    VTX(5, 31, 8, 2219, 0, 74, 217, 85, 255),
}; 

static Vtx object_gi_milkVtx_000860[3] = {
    VTX(-9, -27, 15, 1877, 1024, 204, 166, 60, 255),
    VTX(-9, 4, 15, 1877, 0, 230, 90, 75, 255),
    VTX(-18, 4, 0, 1536, 0, 146, 42, 21, 255),
}; 

static Vtx object_gi_milkVtx_000890[26] = {
    VTX(9, -27, 15, 2219, 1024, 37, 214, 106, 255),
    VTX(9, 4, 15, 2219, 0, 73, 42, 84, 255),
    VTX(-9, 4, 15, 1877, 0, 230, 90, 75, 255),
    VTX(18, -27, 0, 512, 1024, 78, 166, 15, 255),
    VTX(18, 4, 0, 512, 0, 78, 90, 241, 255),
    VTX(9, 4, 15, 171, 0, 73, 42, 84, 255),
    VTX(9, -27, -15, 853, 1024, 73, 214, 172, 255),
    VTX(9, 4, -15, 853, 0, 37, 42, 150, 255),
    VTX(-9, -27, -15, 1195, 1024, 230, 166, 181, 255),
    VTX(-9, 4, -15, 1195, 0, 204, 90, 196, 255),
    VTX(-18, -27, 0, 1536, 1024, 146, 214, 235, 255),
    VTX(-18, 4, 0, 1536, 0, 146, 42, 21, 255),
    VTX(-9, -27, 15, 1877, 1024, 204, 166, 60, 255),
    VTX(9, -27, 15, 171, 1024, 37, 214, 106, 255),
    VTX(18, 4, 0, 205, 1024, 78, 90, 241, 255),
    VTX(-9, 4, -15, 1050, 536, 204, 90, 196, 255),
    VTX(-9, 4, 15, 205, 49, 230, 90, 75, 255),
    VTX(9, 4, -15, 768, 1024, 37, 42, 150, 255),
    VTX(9, 4, 15, -77, 536, 73, 42, 84, 255),
    VTX(-18, 4, 0, 768, 49, 146, 42, 21, 255),
    VTX(18, -27, 0, 205, 1024, 78, 166, 15, 255),
    VTX(-9, -27, 15, 205, 49, 204, 166, 60, 255),
    VTX(-9, -27, -15, 1050, 536, 230, 166, 181, 255),
    VTX(9, -27, 15, -77, 536, 37, 214, 106, 255),
    VTX(-18, -27, 0, 768, 49, 146, 214, 235, 255),
    VTX(9, -27, -15, 768, 1024, 73, 214, 172, 255),
}; 

static Vtx object_gi_milkVtx_000A30[8] = {
    VTX(11, 3, 19, 1536, 0, 78, 0, 90, 255),
    VTX(11, -22, 19, 1536, 768, 39, 0, 113, 255),
    VTX(22, -22, 0, 2304, 768, 103, 0, 60, 255),
    VTX(22, 3, 0, 2304, 0, 103, 0, 60, 255),
    VTX(-11, 3, 19, 768, 0, 217, 0, 113, 255),
    VTX(-11, -22, 19, 768, 768, 178, 0, 90, 255),
    VTX(-22, 3, 0, 0, 0, 153, 0, 60, 255),
    VTX(-22, -22, 0, 0, 768, 153, 0, 60, 255),
}; 

static Vtx object_gi_milkVtx_000AB0[3] = {
    VTX(-11, 7, -19, 853, 1383, 201, 65, 172, 255),
    VTX(-6, 13, -10, 853, 1223, 211, 65, 166, 255),
    VTX(6, 13, -10, 683, 1223, 55, 65, 172, 255),
}; 

static Vtx object_gi_milkVtx_000AE0[88] = {
    VTX(-6, 24, -10, -171, 1152, 0, 120, 0, 255),
    VTX(-11, 24, 0, 0, 1152, 0, 120, 0, 255),
    VTX(-6, 24, 10, 171, 1152, 0, 120, 0, 255),
    VTX(11, 24, 0, 512, 1152, 117, 0, 233, 255),
    VTX(11, 13, 0, 512, 1223, 100, 65, 6, 255),
    VTX(6, 13, -10, 683, 1223, 55, 65, 172, 255),
    VTX(6, 24, 10, 341, 1152, 78, 0, 90, 255),
    VTX(6, 13, 10, 341, 1223, 45, 65, 90, 255),
    VTX(6, 24, -10, 683, 1152, 39, 0, 143, 255),
    VTX(-6, 13, -10, 853, 1223, 211, 65, 166, 255),
    VTX(-6, 24, -10, -171, 1152, 178, 0, 166, 255),
    VTX(-6, 13, -10, -171, 1223, 211, 65, 166, 255),
    VTX(-11, 13, 0, 0, 1223, 156, 65, 250, 255),
    VTX(22, 7, 0, 512, 1383, 100, 65, 250, 255),
    VTX(11, 7, -19, 683, 1383, 45, 65, 166, 255),
    VTX(-11, 3, 19, 171, 1443, 178, 0, 90, 255),
    VTX(-11, 7, 19, 171, 1383, 211, 65, 90, 255),
    VTX(-22, 7, 0, 0, 1383, 156, 65, 6, 255),
    VTX(11, 3, 19, 341, 1443, 39, 0, 113, 255),
    VTX(11, 7, 19, 341, 1383, 55, 65, 84, 255),
    VTX(22, 3, 0, 512, 1443, 119, 0, 242, 255),
    VTX(11, 3, -19, 683, 1443, 60, 0, 153, 255),
    VTX(-22, 3, 0, 0, 1443, 141, 0, 223, 255),
    VTX(-11, 3, -19, 853, 1443, 196, 0, 153, 255),
    VTX(-11, 7, -19, -171, 1383, 201, 65, 172, 255),
    VTX(-11, 3, -19, -171, 1443, 196, 0, 153, 255),
    VTX(-6, 13, 10, 171, 1223, 201, 65, 84, 255),
    VTX(-11, 7, -19, 853, 1383, 201, 65, 172, 255),
    VTX(-11, 24, 0, 0, 1152, 139, 0, 23, 255),
    VTX(-6, 24, 10, 171, 1152, 217, 0, 113, 255),
    VTX(11, 24, 0, 512, 1152, 0, 120, 0, 255),
    VTX(11, 24, 0, 512, 1152, 0, 120, 0, 255),
    VTX(6, 24, -10, 683, 1152, 0, 120, 0, 255),
    VTX(-6, 24, -10, 853, 1152, 0, 120, 0, 255),
    VTX(-6, 24, 10, 171, 1152, 0, 120, 0, 255),
    VTX(6, 24, 10, 341, 1152, 0, 120, 0, 255),
    VTX(6, 13, -10, 683, 1223, 55, 65, 172, 255),
    VTX(6, 24, -10, 683, 1152, 39, 0, 143, 255),
    VTX(11, 24, 0, 512, 1152, 117, 0, 233, 255),
    VTX(11, 13, 0, 512, 1223, 100, 65, 6, 255),
    VTX(6, 24, 10, 341, 1152, 78, 0, 90, 255),
    VTX(-6, 13, -10, 853, 1223, 211, 65, 166, 255),
    VTX(-6, 24, -10, 853, 1152, 178, 0, 166, 255),
    VTX(-11, 13, 0, 0, 1223, 156, 65, 250, 255),
    VTX(-11, 24, 0, 0, 1152, 139, 0, 23, 255),
    VTX(-6, 24, -10, -171, 1152, 178, 0, 166, 255),
    VTX(-11, 3, -19, 853, 1443, 196, 0, 153, 255),
    VTX(-11, 7, -19, 853, 1383, 201, 65, 172, 255),
    VTX(11, 7, -19, 683, 1383, 45, 65, 166, 255),
    VTX(-22, 3, 0, 0, 1443, 141, 0, 223, 255),
    VTX(-22, 7, 0, 0, 1383, 156, 65, 6, 255),
    VTX(-11, 7, -19, -171, 1383, 201, 65, 172, 255),
    VTX(-11, 7, 19, 171, 1383, 211, 65, 90, 255),
    VTX(-6, 13, 10, 171, 1223, 201, 65, 84, 255),
    VTX(11, 7, 19, 341, 1383, 55, 65, 84, 255),
    VTX(6, 13, 10, 341, 1223, 45, 65, 90, 255),
    VTX(-9, -31, 16, 171, 1859, 226, 146, 34, 255),
    VTX(-18, -31, 0, 0, 1859, 189, 158, 243, 255),
    VTX(-9, -31, -16, -171, 1859, 241, 146, 213, 255),
    VTX(-22, -27, 0, 0, 1807, 146, 210, 253, 255),
    VTX(-11, -27, 19, 171, 1807, 198, 210, 94, 255),
    VTX(9, -31, 16, 341, 1859, 22, 158, 64, 255),
    VTX(11, -27, 19, 341, 1807, 53, 210, 97, 255),
    VTX(9, -31, 16, 341, 1859, 22, 158, 64, 255),
    VTX(18, -31, 0, 512, 1859, 45, 146, 9, 255),
    VTX(22, -27, 0, 512, 1807, 110, 210, 3, 255),
    VTX(9, -31, -16, 683, 1859, 45, 158, 204, 255),
    VTX(11, -27, -19, 683, 1807, 58, 210, 162, 255),
    VTX(-9, -31, -16, 853, 1859, 241, 146, 213, 255),
    VTX(-11, -27, -19, -171, 1807, 203, 210, 159, 255),
    VTX(-9, -31, -16, -171, 1859, 241, 146, 213, 255),
    VTX(-18, -31, 0, 0, 1859, 189, 158, 243, 255),
    VTX(-9, -31, 16, 171, 1859, 226, 146, 34, 255),
    VTX(-11, -27, 19, 171, 1807, 198, 210, 94, 255),
    VTX(-22, -27, 0, 0, 1807, 146, 210, 253, 255),
    VTX(-11, -27, -19, 853, 1807, 203, 210, 159, 255),
    VTX(11, -22, 19, 341, 1770, 78, 0, 90, 255),
    VTX(-11, -22, 19, 171, 1770, 217, 0, 113, 255),
    VTX(22, -22, 0, 512, 1770, 115, 0, 223, 255),
    VTX(11, -22, -19, 683, 1770, 60, 0, 153, 255),
    VTX(-11, -22, -19, 853, 1770, 196, 0, 153, 255),
    VTX(-22, -22, 0, 0, 1770, 137, 0, 242, 255),
    VTX(-11, -22, -19, -171, 1770, 196, 0, 153, 255),
    VTX(11, 3, -19, 683, 1443, 60, 0, 153, 255),
    VTX(22, 3, 0, 512, 1443, 119, 0, 242, 255),
    VTX(-11, 3, -19, 853, 1443, 196, 0, 153, 255),
    VTX(-22, 3, 0, 0, 1443, 141, 0, 223, 255),
    VTX(-11, 3, -19, -171, 1443, 196, 0, 153, 255),
}; 

Gfx gGiMilkBottleContentsDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 150, 90, 0, 255),
    gsDPSetEnvColor(90, 50, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_milkVtx_0006C0[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 5, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 11, 16, 0, 17, 16, 18, 0),
    gsSP2Triangles(2, 19, 0, 0, 19, 20, 0, 0),
    gsSP2Triangles(2, 21, 19, 0, 5, 10, 3, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(11, 15, 10, 0, 14, 22, 12, 0),
    gsSP2Triangles(22, 23, 12, 0, 14, 24, 22, 0),
    gsSP2Triangles(16, 17, 15, 0, 18, 25, 17, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 200, 255),
    gsSPTexture(4000, 4000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_milkVtx_000860[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_milkVtx_000890[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 9, 0, 11, 10, 12, 0),
    gsSP2Triangles(2, 12, 0, 0, 5, 13, 3, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 8, 10, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 15, 14, 0, 18, 14, 16, 0),
    gsSP2Triangles(15, 19, 16, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 23, 21, 0, 21, 24, 22, 0),
    gsSP1Triangle(22, 25, 20, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 0, 100, 170, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_milkTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 7, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 863, 228),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 9, 0, 0, 0, 2, 5, 0, 2, 7, 0),
    gsDPSetTileSize(0, 0, 0, 284, 92),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_milkVtx_000A30[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiMilkBottleDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(100, 100, 150, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(1500, 1500, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032C90),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_milkVtx_000AB0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_gi_milkVtx_000AE0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 8, 5, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 4, 7, 0),
    gsSP2Triangles(14, 5, 4, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 16, 0, 20, 13, 19, 0),
    gsSP2Triangles(21, 14, 13, 0, 17, 22, 15, 0),
    gsSP2Triangles(16, 15, 18, 0, 19, 18, 20, 0),
    gsSP2Triangles(13, 20, 21, 0, 14, 21, 23, 0),
    gsSP2Triangles(24, 25, 22, 0, 12, 17, 16, 0),
    gsSP2Triangles(26, 16, 19, 0, 7, 19, 13, 0),
    gsSP2Triangles(4, 13, 14, 0, 5, 14, 27, 0),
    gsSP2Triangles(11, 24, 17, 0, 28, 12, 26, 0),
    gsSP2Triangles(29, 26, 7, 0, 17, 12, 11, 0),
    gsSP2Triangles(7, 6, 29, 0, 26, 29, 28, 0),
    gsSP1Triangle(2, 30, 0, 0),
    gsSPVertex(&object_gi_milkVtx_000AE0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 6, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 12, 0, 23, 24, 22, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 26, 25, 0),
    gsSP1Triangle(29, 25, 30, 0),
    gsSPVertex(&object_gi_milkVtx_000AE0[62], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 2, 10, 0, 2, 1, 10, 0),
    gsSP2Triangles(6, 4, 2, 0, 10, 11, 12, 0),
    gsSP2Triangles(1, 0, 11, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 13, 5, 0),
    gsSP2Triangles(9, 12, 7, 0, 0, 14, 15, 0),
    gsSP2Triangles(3, 16, 14, 0, 5, 17, 16, 0),
    gsSP2Triangles(13, 18, 17, 0, 12, 19, 20, 0),
    gsSP2Triangles(11, 15, 19, 0, 15, 11, 0, 0),
    gsSP2Triangles(14, 0, 3, 0, 16, 3, 5, 0),
    gsSP2Triangles(17, 5, 13, 0, 20, 7, 12, 0),
    gsSP2Triangles(19, 12, 11, 0, 17, 21, 22, 0),
    gsSP2Triangles(18, 23, 21, 0, 19, 24, 25, 0),
    gsSP2Triangles(22, 16, 17, 0, 21, 17, 18, 0),
    gsSP1Triangle(25, 20, 19, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_001468[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


