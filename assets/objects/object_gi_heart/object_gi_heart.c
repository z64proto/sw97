#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_heart.h"

static Vtx object_gi_heartVtx_000000[14];

static Vtx object_gi_heartVtx_000000[14] = {
    VTX(0, 13, 0, 512, 191, 150, 0, 0, 255),
    VTX(0, -2, 12, 512, 563, 255, 150, 255, 255),
    VTX(6, 24, 0, 348, -102, 150, 0, 0, 255),
    VTX(20, 27, 0, 5, -173, 150, 0, 0, 255),
    VTX(30, 16, 0, -256, 113, 150, 0, 0, 255),
    VTX(28, -1, 0, -198, 543, 150, 0, 0, 255),
    VTX(16, -16, 0, 102, 923, 150, 0, 0, 255),
    VTX(0, -26, 0, 512, 1175, 150, 0, 0, 255),
    VTX(-16, -16, 0, 922, 923, 150, 0, 0, 255),
    VTX(-28, -1, 0, 1222, 543, 150, 0, 0, 255),
    VTX(-30, 16, 0, 1280, 113, 150, 0, 0, 255),
    VTX(-20, 27, 0, 1019, -173, 150, 0, 0, 255),
    VTX(-6, 24, 0, 676, -102, 150, 0, 0, 255),
    VTX(0, -2, -12, 512, 563, 255, 150, 255, 255),
}; 

Gfx gGiRecoveryHeartDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       SHADE, PRIMITIVE, COMBINED, PRIMITIVE, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 128, 200, 0, 50, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, 0x04032890),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 2, 0, 5, 2),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 2, 0, 5, 2),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 1, 0, 0, 5, 1, 0, 5, 1),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_gi_heartVtx_000000[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 5, 0),
    gsSP2Triangles(5, 1, 6, 0, 6, 1, 7, 0),
    gsSP2Triangles(7, 1, 8, 0, 8, 1, 9, 0),
    gsSP2Triangles(9, 1, 10, 0, 10, 1, 11, 0),
    gsSP2Triangles(11, 1, 12, 0, 12, 1, 0, 0),
    gsSP2Triangles(2, 13, 0, 0, 3, 13, 2, 0),
    gsSP2Triangles(4, 13, 3, 0, 5, 13, 4, 0),
    gsSP2Triangles(6, 13, 5, 0, 7, 13, 6, 0),
    gsSP2Triangles(8, 13, 7, 0, 9, 13, 8, 0),
    gsSP2Triangles(10, 13, 9, 0, 11, 13, 10, 0),
    gsSP2Triangles(12, 13, 11, 0, 0, 13, 12, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0001E8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


