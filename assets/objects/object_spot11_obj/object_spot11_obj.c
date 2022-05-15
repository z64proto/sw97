#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_spot11_obj.h"

static Vtx object_spot11_objVtx_000800[7];
static Vtx object_spot11_objVtx_001940[4];

u64 gDesertColossusOasisWaterTex[] = {
#include "assets/objects/object_spot11_obj/desert_colossus_oasis_water.rgb5a1.inc.c"
};

static Vtx object_spot11_objVtx_000800[7] = {
    VTX(-227, 0, 76, 324, 85, 29, 115, 241, 255),
    VTX(0, 0, 0, 512, -583, 0, 120, 0, 255),
    VTX(-202, 0, -206, 737, 220, 23, 117, 13, 255),
    VTX(-4, 0, 272, 737, 220, 4, 117, 232, 255),
    VTX(194, 0, 190, 324, 85, 235, 117, 245, 255),
    VTX(236, 0, -8, 737, 220, 222, 114, 11, 255),
    VTX(95, 0, -247, 324, 85, 245, 116, 28, 255),
}; 

Gfx gDesertColossusOasisDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDesertColossusOasisWaterTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 15, 0, 5, 14),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 15, 0, 5, 14),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 1, 0, 0, 5, 14, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetEnvColor(0, 0, 0, 128),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 165),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_spot11_objVtx_000800[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 5, 1, 4, 0),
    gsSP2Triangles(6, 1, 5, 0, 2, 1, 6, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000938[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gDesertColossusBombableWallTex[] = {
#include "assets/objects/object_spot11_obj/desert_colossus_bombable_wall.rgb5a1.inc.c"
};

static Vtx object_spot11_objVtx_001940[4] = {
    VTX(2199, 268, -1550, 6389, 821, 255, 36, 114, 255),
    VTX(2200, 108, -1550, 6546, 2048, 7, 110, 47, 255),
    VTX(2318, 108, -1549, 7053, 2048, 255, 108, 52, 255),
    VTX(2318, 268, -1549, 6882, 824, 0, 44, 111, 255),
}; 

Gfx gDesertColossusBombableWallDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDesertColossusBombableWallTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_spot11_objVtx_001940[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

CamData gDesertColossusBombableWallCol_camDataList_00001A10[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gDesertColossusBombableWallCol_polygonTypes_00001A18[] = {
   0x00000000, 0x000007CB,
}; 

CollisionPoly gDesertColossusBombableWallCol_polygons_00001A20[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0xFEEA, 0xFFFE, 0x7FFE, 0x0621 }, // 0x00001A20
   { 0x0000, 0x0000, 0x0002, 0x0003, 0xFEED, 0x0000, 0x7FFE, 0x0620 }, // 0x00001A30

}; 

Vec3s gDesertColossusBombableWallCol_vtx_00001A40[] = {
   { 2199, 268, -1550 }, // 0x00001A40
   { 2200, 108, -1550 }, // 0x00001A46
   { 2318, 108, -1549 }, // 0x00001A4C
   { 2318, 268, -1549 }, // 0x00001A52
}; 

CollisionHeader gDesertColossusBombableWallCol = { 2199, 108, -1550, 2318, 268, -1549, 4, gDesertColossusBombableWallCol_vtx_00001A40, 2, gDesertColossusBombableWallCol_polygons_00001A20, gDesertColossusBombableWallCol_polygonTypes_00001A18, &gDesertColossusBombableWallCol_camDataList_00001A10, 0, 0 }; 

static u32 pad1A84 = 0;
static u32 pad1A88 = 0;
static u32 pad1A8C = 0;


