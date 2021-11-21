#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_efc_lgt_shower.h"

static Vtx object_efc_lgt_showerVtx_001000[29];

u64 gEnliveningLightTex[] = {
#include "assets/objects/object_efc_lgt_shower/enlivening_light.i8.inc.c"
};

static Vtx object_efc_lgt_showerVtx_001000[29] = {
    VTX(409, 255, 169, 1536, 1441, 78, 171, 32, 255),
    VTX(0, 0, 0, 2048, 2048, 0, 136, 0, 255),
    VTX(409, 255, -169, 2560, 1441, 78, 171, 224, 255),
    VTX(862, 860, 0, 2048, 0, 99, 189, 0, 255),
    VTX(609, 860, -609, 3072, 0, 70, 189, 186, 255),
    VTX(0, 0, 0, 3072, 2048, 0, 136, 0, 255),
    VTX(169, 255, -409, 3584, 1441, 32, 171, 178, 255),
    VTX(0, 860, -862, 4096, 0, 0, 189, 157, 255),
    VTX(0, 0, 0, 4096, 2048, 0, 136, 0, 255),
    VTX(-169, 255, -409, 4608, 1441, 224, 171, 178, 255),
    VTX(-609, 860, -609, 5120, 0, 186, 189, 186, 255),
    VTX(0, 0, 0, 5120, 2048, 0, 136, 0, 255),
    VTX(-409, 255, -169, 5632, 1441, 178, 171, 224, 255),
    VTX(-862, 860, 0, 6144, 0, 157, 189, 0, 255),
    VTX(0, 0, 0, 6144, 2048, 0, 136, 0, 255),
    VTX(-409, 255, 169, 6656, 1441, 178, 171, 32, 255),
    VTX(-609, 860, 609, 7168, 0, 186, 189, 70, 255),
    VTX(0, 0, 0, 7168, 2048, 0, 136, 0, 255),
    VTX(-169, 255, 409, 7680, 1441, 228, 182, 90, 255),
    VTX(0, 860, 862, 8192, 0, 0, 189, 99, 255),
    VTX(169, 255, 409, 8704, 1441, 28, 182, 90, 255),
    VTX(0, 860, 862, 0, 0, 0, 189, 99, 255),
    VTX(169, 255, 409, 512, 1441, 28, 182, 90, 255),
    VTX(609, 860, 609, 1024, 0, 70, 189, 70, 255),
    VTX(0, 0, 0, 1024, 2048, 0, 136, 0, 255),
    VTX(862, 860, 0, 2048, 0, 99, 189, 0, 255),
    VTX(-169, 255, 409, 3584, 1441, 224, 171, 78, 255),
    VTX(0, 0, 0, 4096, 2048, 0, 136, 0, 255),
    VTX(169, 255, 409, 4608, 1441, 32, 171, 78, 255),
}; 

Gfx gEnliveningLightDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEnliveningLightTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 6, 2, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0x0000, 1, 0, G_TX_MIRROR | G_TX_WRAP, 6, 14, G_TX_NOMIRROR | G_TX_WRAP, 6,
                15),
    gsDPSetTileSize(1, 0, 0, 0x00FC, 0x00FC),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, 
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_efc_lgt_showerVtx_001000[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 2, 5, 6, 0),
    gsSP2Triangles(2, 6, 4, 0, 4, 6, 7, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(7, 9, 10, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 10, 12, 13, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(13, 15, 16, 0, 15, 17, 18, 0),
    gsSP2Triangles(15, 18, 16, 0, 16, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 0, 0, 22, 0, 23, 0),
    gsSP2Triangles(23, 0, 25, 0, 26, 27, 28, 0),
    gsSPEndDisplayList(),
}; 


