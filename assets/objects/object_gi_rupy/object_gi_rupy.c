#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_rupy.h"

static Vtx object_gi_rupyVtx_000000[6];
static Vtx object_gi_rupyVtx_000060[38];
static Vtx object_gi_rupyVtx_0002C0[6];
static Vtx object_gi_rupyVtx_000320[24];

static Vtx object_gi_rupyVtx_000000[6] = {
    VTX(-8, 8, 10, 146, 1354, 0, 0, 120, 255),
    VTX(-8, -8, 10, 146, 1718, 0, 0, 120, 255),
    VTX(0, -16, 10, 256, 1866, 0, 0, 120, 255),
    VTX(8, -8, 10, 366, 1718, 0, 0, 120, 255),
    VTX(8, 8, 10, 366, 1354, 0, 0, 120, 255),
    VTX(0, 16, 10, 256, 1206, 0, 0, 120, 255),
}; 

static Vtx object_gi_rupyVtx_000060[38] = {
    VTX(0, 16, -10, 768, 1206, 0, 0, 136, 255),
    VTX(8, 8, -10, 658, 1354, 0, 0, 136, 255),
    VTX(8, -8, -10, 658, 1718, 0, 0, 136, 255),
    VTX(0, -16, -10, 768, 1866, 0, 0, 136, 255),
    VTX(-8, -8, -10, 878, 1718, 0, 0, 136, 255),
    VTX(-8, 8, -10, 878, 1354, 0, 0, 136, 255),
    VTX(8, 8, 10, 366, 1354, 81, 32, 82, 255),
    VTX(16, 12, 0, 512, 1326, 81, 32, 82, 255),
    VTX(0, 30, 0, 378, 1024, 61, 61, 83, 255),
    VTX(0, 16, 10, 256, 1206, 61, 61, 83, 255),
    VTX(0, 16, 10, 256, 1206, 189, 61, 78, 255),
    VTX(0, 30, 0, 134, 1024, 189, 61, 78, 255),
    VTX(-16, 12, 0, 0, 1326, 173, 32, 79, 255),
    VTX(-8, 8, 10, 146, 1354, 173, 32, 79, 255),
    VTX(-16, -12, 0, 0, 1746, 173, 224, 79, 255),
    VTX(-8, -8, 10, 146, 1718, 173, 224, 79, 255),
    VTX(0, -30, 0, 134, 1024, 189, 195, 78, 255),
    VTX(0, -16, 10, 256, 1866, 189, 195, 78, 255),
    VTX(0, -30, 0, 378, 1024, 61, 195, 83, 255),
    VTX(16, -12, 0, 512, 1746, 81, 224, 82, 255),
    VTX(8, -8, 10, 366, 1718, 81, 224, 82, 255),
    VTX(0, -16, 10, 256, 1866, 61, 195, 83, 255),
    VTX(0, 16, -10, 768, 1206, 65, 59, 175, 255),
    VTX(0, 30, 0, 646, 1024, 65, 59, 175, 255),
    VTX(16, 12, 0, 512, 1326, 82, 31, 175, 255),
    VTX(8, 8, -10, 658, 1354, 82, 31, 175, 255),
    VTX(16, -12, 0, 512, 1746, 82, 225, 175, 255),
    VTX(8, -8, -10, 658, 1718, 82, 225, 175, 255),
    VTX(0, -30, 0, 646, 1024, 65, 197, 175, 255),
    VTX(0, -16, -10, 768, 1866, 65, 197, 175, 255),
    VTX(0, -30, 0, -134, 1024, 189, 195, 178, 255),
    VTX(-16, -12, 0, 0, 1746, 173, 224, 177, 255),
    VTX(-8, -8, -10, -146, 1718, 173, 224, 177, 255),
    VTX(0, -16, -10, -256, 1866, 189, 195, 178, 255),
    VTX(-16, 12, 0, 0, 1326, 173, 32, 177, 255),
    VTX(-8, 8, -10, -146, 1354, 173, 32, 177, 255),
    VTX(0, 30, 0, -134, 1024, 189, 61, 178, 255),
    VTX(0, 16, -10, -256, 1206, 189, 61, 178, 255),
}; 

static Vtx object_gi_rupyVtx_0002C0[6] = {
    VTX(-10, 10, 13, 149, 1358, 195, 23, 100, 255),
    VTX(-10, -10, 13, 149, 1714, 195, 233, 100, 255),
    VTX(0, -20, 13, 256, 1860, 254, 207, 109, 255),
    VTX(10, -10, 13, 363, 1714, 58, 233, 102, 255),
    VTX(10, 10, 13, 363, 1358, 58, 23, 102, 255),
    VTX(0, 20, 13, 256, 1212, 254, 49, 109, 255),
}; 

static Vtx object_gi_rupyVtx_000320[24] = {
    VTX(0, 20, -13, 768, 1212, 255, 49, 147, 255),
    VTX(10, 10, -13, 661, 1358, 60, 22, 155, 255),
    VTX(10, -10, -13, 661, 1714, 60, 234, 155, 255),
    VTX(0, -20, -13, 768, 1860, 255, 207, 147, 255),
    VTX(-10, -10, -13, 875, 1714, 195, 233, 156, 255),
    VTX(-10, 10, -13, 875, 1358, 195, 23, 156, 255),
    VTX(10, 10, 13, 363, 1358, 58, 23, 102, 255),
    VTX(20, 15, 0, 488, 1328, 79, 90, 1, 255),
    VTX(0, 37, 0, 256, 1050, 254, 119, 1, 255),
    VTX(0, 20, 13, 256, 1212, 254, 49, 109, 255),
    VTX(-20, 15, 0, 24, 1328, 176, 89, 0, 255),
    VTX(-10, 10, 13, 149, 1358, 195, 23, 100, 255),
    VTX(-20, -15, 0, 24, 1744, 143, 40, 0, 255),
    VTX(-10, -10, 13, 149, 1714, 195, 233, 100, 255),
    VTX(0, -37, 0, 256, 2022, 170, 176, 24, 255),
    VTX(0, -20, 13, 256, 1860, 254, 207, 109, 255),
    VTX(20, -15, 0, 488, 1744, 112, 41, 1, 255),
    VTX(10, -10, 13, 363, 1714, 58, 233, 102, 255),
    VTX(0, 37, 0, 768, 1050, 254, 119, 1, 255),
    VTX(20, 15, 0, 536, 1328, 79, 90, 1, 255),
    VTX(20, -15, 0, 536, 1744, 112, 41, 1, 255),
    VTX(0, -37, 0, 768, 2022, 170, 176, 24, 255),
    VTX(-20, -15, 0, 1000, 1744, 143, 40, 0, 255),
    VTX(-20, 15, 0, 1000, 1328, 176, 89, 0, 255),
}; 

Gfx gGiGreenRupeeInnerColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 200, 255, 0, 255),
    gsDPSetEnvColor(0, 120, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBlueRupeeInnerColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 0, 200, 255, 255),
    gsDPSetEnvColor(0, 0, 120, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiRedRupeeInnerColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 200, 0, 255),
    gsDPSetEnvColor(130, 0, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiPurpleRupeeInnerColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 0, 255, 255),
    gsDPSetEnvColor(100, 0, 100, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGoldRupeeInnerColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(120, 90, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGreenRupeeOuterColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(100, 255, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiBlueRupeeOuterColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 170, 255, 255, 255),
    gsDPSetEnvColor(0, 100, 255, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiRedRupeeOuterColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(255, 0, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiPurpleRupeeOuterColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 170, 255, 255),
    gsDPSetEnvColor(100, 0, 150, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiGoldRupeeOuterColorDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 128, 255, 255, 170, 255),
    gsDPSetEnvColor(255, 255, 0, 255),
    gsSPEndDisplayList(),
}; 

Gfx gGiRupeeInnerDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, 1,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, 1),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3500, 3500, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_rupyVtx_000000[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSPVertex(&object_gi_rupyVtx_000060[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 16, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(19, 7, 6, 0, 19, 6, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(25, 24, 26, 0, 25, 26, 27, 0),
    gsSP2Triangles(27, 26, 28, 0, 27, 28, 29, 0),
    gsSPVertex(&object_gi_rupyVtx_000060[30], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiRupeeOuterDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, 0, 0, 0, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(3000, 2000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 15, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 15, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_gi_rupyVtx_0002C0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSPVertex(&object_gi_rupyVtx_000320[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 7, 6, 0, 16, 6, 17, 0),
    gsSP2Triangles(0, 18, 19, 0, 0, 19, 1, 0),
    gsSP2Triangles(1, 19, 20, 0, 1, 20, 2, 0),
    gsSP2Triangles(2, 20, 21, 0, 2, 21, 3, 0),
    gsSP2Triangles(21, 22, 4, 0, 21, 4, 3, 0),
    gsSP2Triangles(22, 23, 5, 0, 22, 5, 4, 0),
    gsSP2Triangles(23, 18, 0, 0, 23, 0, 5, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0007F8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


