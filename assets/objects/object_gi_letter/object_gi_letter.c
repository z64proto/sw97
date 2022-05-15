#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_gi_letter.h"

static Vtx object_gi_letterVtx_000C00[8];
static Vtx object_gi_letterVtx_000C80[4];

u64 object_gi_letterTex_000000[] = {
#include "assets/objects/object_gi_letter//object_gi_letterTex_000000.i8.inc.c"
};

u64 object_gi_letterTex_000600[] = {
#include "assets/objects/object_gi_letter//object_gi_letterTex_000600.ia16.inc.c"
};

static Vtx object_gi_letterVtx_000C00[8] = {
    VTX(-31, 23, 0, 0, 0, 0, 26, 139, 255),
    VTX(31, 23, 0, 1536, 0, 0, 26, 139, 255),
    VTX(31, -22, -10, 1536, 1024, 0, 26, 139, 255),
    VTX(31, -22, 10, 1536, 1024, 0, 26, 117, 255),
    VTX(31, 23, 0, 1536, 0, 0, 26, 117, 255),
    VTX(-31, 23, 0, 0, 0, 0, 26, 117, 255),
    VTX(-31, -22, -10, 0, 1024, 0, 26, 139, 255),
    VTX(-31, -22, 10, 0, 1024, 0, 26, 117, 255),
}; 

static Vtx object_gi_letterVtx_000C80[4] = {
    VTX(31, -22, 10, 1536, 1024, 0, 26, 117, 255),
    VTX(31, 23, 0, 1536, 0, 0, 26, 117, 255),
    VTX(-31, 23, 0, 0, 0, 0, 26, 117, 255),
    VTX(-31, -22, 10, 0, 1024, 0, 26, 117, 255),
}; 

Gfx gGiLetterDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 1, 1, 1, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 1, 1, 1, 1),
    gsDPSetPrimColor(0, 0, 255, 255, 200, 255),
    gsDPSetEnvColor(100, 100, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_gi_letterTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 767, 342),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 6, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 188, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPVertex(&object_gi_letterVtx_000C00[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 6, 0, 0, 5, 7, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGiLetterWritingDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 0, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 200, 0, 0, 255),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_gi_letterTex_000600),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 767, 342),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 6, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 188, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&object_gi_letterVtx_000C80[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000DF8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


