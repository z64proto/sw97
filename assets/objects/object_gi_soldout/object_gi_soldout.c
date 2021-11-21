#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_soldout.h"

static Vtx object_gi_soldoutVtx_000400[4];

u64 object_gi_soldoutTex_000000[] = {
#include "assets/objects/object_gi_soldout//object_gi_soldoutTex_000000.ia16.inc.c"
};

static Vtx object_gi_soldoutVtx_000400[4] = {
    VTX(-30, -30, 0, 0, 1024, 255, 255, 255, 255),
    VTX(30, -30, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(30, 30, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-30, 30, 0, 0, 0, 255, 255, 255, 255),
}; 

Gfx gGiSoldOutDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_AA_ZB_XLU_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_gi_soldoutTex_000000),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_gi_soldoutVtx_000400[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0004C8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


