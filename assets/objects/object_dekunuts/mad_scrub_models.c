#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_dekunuts.h"

u64 gDekuNutsDekuNutTex[] = {
#include "assets/objects/object_hintnuts//object_hintnutsTex_002128.rgb5a1.inc.c"
};

static Vtx object_dekunutsVtx_001FF8[3] = {
    VTX(-1500, -800, 0, -293, 549, 255, 255, 255, 255),
    VTX(1500, -800, 0, 805, 549, 255, 255, 255, 255),
    VTX(0, 1500, 0, 256, -293, 255, 255, 255, 255),
}; 

Gfx gDekuNutsDekuNutDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuNutsDekuNutTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 3, 4, 0, 3, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 3, 4, 0, 3, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dekunutsVtx_001FF8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dekunutsVtx_0020B8[15] = {
    VTX(2663, 800, -865, 4713, 984, 231, 117, 8, 255),
    VTX(0, 800, -2800, 6551, 984, 0, 117, 26, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(1646, 800, 2265, 4713, 984, 241, 117, 235, 255),
    VTX(2663, 800, -865, 6551, 984, 231, 117, 8, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(-2663, 800, -865, 4713, 984, 25, 117, 8, 255),
    VTX(-1646, 800, 2265, 6551, 984, 15, 117, 235, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(-1646, 800, 2265, 6551, 984, 15, 117, 235, 255),
    VTX(1646, 800, 2265, 4713, 984, 241, 117, 235, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(0, 800, -2800, 6551, 984, 0, 117, 26, 255),
    VTX(-2663, 800, -865, 4713, 984, 25, 117, 8, 255),
}; 

static Vtx object_dekunutsVtx_0021A8[15] = {
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
    VTX(0, 0, -3500, 6551, 984, 0, 118, 240, 255),
    VTX(-3329, 0, -1082, 4713, 984, 241, 118, 251, 255),
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
    VTX(-2057, 0, 2832, 6551, 984, 247, 118, 13, 255),
    VTX(2057, 0, 2832, 4713, 984, 9, 118, 13, 255),
    VTX(-3329, 0, -1082, 4713, 984, 241, 118, 251, 255),
    VTX(-2057, 0, 2832, 6551, 984, 247, 118, 13, 255),
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
    VTX(2057, 0, 2832, 4713, 984, 9, 118, 13, 255),
    VTX(3329, 0, -1082, 6551, 984, 15, 118, 251, 255),
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
    VTX(3329, 0, -1082, 4713, 984, 15, 118, 251, 255),
    VTX(0, 0, -3500, 6551, 984, 0, 118, 240, 255),
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
}; 

extern u64 gDekuNutsSkel_object_hintnutsTex_0015A8_rgb5a1_png_rgba16[];

Gfx gDekuNutsFlowerDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuNutsSkel_object_hintnutsTex_0015A8_rgb5a1_png_rgba16),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dekunutsVtx_0020B8[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_dekunutsVtx_0021A8[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSPEndDisplayList(),
}; 
