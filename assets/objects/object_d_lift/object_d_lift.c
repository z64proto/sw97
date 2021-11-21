#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_d_lift.h"

static Vtx object_d_liftVtx_000000[4];
static Vtx object_d_liftVtx_000040[4];
static Vtx object_d_liftVtx_000080[4];
static Vtx object_d_liftVtx_0000C0[8];

static Vtx object_d_liftVtx_000000[4] = {
    VTX(-600, -180, -600, 2048, 2048, 76, 76, 76, 255),
    VTX(600, -180, -600, 2048, 0, 51, 51, 51, 255),
    VTX(600, -180, 600, 0, 0, 25, 25, 25, 255),
    VTX(-600, -180, 600, 0, 2048, 51, 51, 51, 255),
}; 

static Vtx object_d_liftVtx_000040[4] = {
    VTX(-600, -180, 600, 2048, 512, 51, 51, 51, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
    VTX(-600, -180, -600, 0, 512, 76, 76, 76, 255),
}; 

static Vtx object_d_liftVtx_000080[4] = {
    VTX(-600, 180, 600, 0, 2048, 255, 255, 255, 255),
    VTX(600, 180, 600, 2048, 2048, 140, 140, 140, 255),
    VTX(600, 180, -600, 2048, 0, 204, 204, 204, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
}; 

static Vtx object_d_liftVtx_0000C0[8] = {
    VTX(600, -180, 600, 0, 512, 25, 25, 25, 255),
    VTX(600, 180, 600, 0, 0, 140, 140, 140, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, -180, 600, 2048, 512, 51, 51, 51, 255),
    VTX(600, -180, -600, 2048, 512, 51, 51, 51, 255),
    VTX(600, 180, -600, 2048, 0, 204, 204, 204, 255),
    VTX(-600, -180, -600, 0, 512, 76, 76, 76, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
}; 

Gfx gDLiftDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_d_liftTex_000800),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 0, 6, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 150, 110, 70, 255),
    gsSPVertex(&object_d_liftVtx_000000[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_d_liftTex_000400),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 2, 4, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 60),
    gsSPVertex(&object_d_liftVtx_000040[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_d_liftTex_000800),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 0, 6, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsSPVertex(&object_d_liftVtx_000080[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_d_liftTex_000400),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 8, 0, 0, 0, 2, 4, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 60),
    gsSPVertex(&object_d_liftVtx_0000C0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

CamData gDLiftCol_camDataList_000002D0[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gDLiftCol_polygonTypes_000002D8[] = {
   0x00000000, 0x000007CA,
}; 

CollisionPoly gDLiftCol_polygons_000002E0[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0xFF4C }, // 0x000002E0
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x8001, 0x0000, 0xFF4C }, // 0x000002F0
   { 0x0000, 0x0003, 0x0004, 0x0005, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x00000300
   { 0x0000, 0x0003, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000, 0xFDA8 }, // 0x00000310
   { 0x0000, 0x0004, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFF4C }, // 0x00000320
   { 0x0000, 0x0004, 0x0007, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFF4C }, // 0x00000330
   { 0x0000, 0x0002, 0x0006, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFDA8 }, // 0x00000340
   { 0x0000, 0x0002, 0x0004, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFDA8 }, // 0x00000350
   { 0x0000, 0x0001, 0x0007, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x00000360
   { 0x0000, 0x0001, 0x0006, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFDA8 }, // 0x00000370
   { 0x0000, 0x0000, 0x0005, 0x0007, 0x0000, 0x0000, 0x8001, 0xFDA8 }, // 0x00000380
   { 0x0000, 0x0000, 0x0007, 0x0001, 0x0000, 0x0000, 0x8001, 0xFDA8 }, // 0x00000390

}; 

Vec3s gDLiftCol_vtx_000003A0[] = {
   { -600, -180, -600 }, // 0x000003A0
   { 600, -180, -600 }, // 0x000003A6
   { 600, -180, 600 }, // 0x000003AC
   { -600, -180, 600 }, // 0x000003B2
   { -600, 180, 600 }, // 0x000003B8
   { -600, 180, -600 }, // 0x000003BE
   { 600, 180, 600 }, // 0x000003C4
   { 600, 180, -600 }, // 0x000003CA
}; 

CollisionHeader gDLiftCol = { -600, -180, -600, 600, 180, 600, 8, gDLiftCol_vtx_000003A0, 12, gDLiftCol_polygons_000002E0, gDLiftCol_polygonTypes_000002D8, &gDLiftCol_camDataList_000002D0, 0, 0 }; 

static u32 pad3FC = 0;

u64 object_d_liftTex_000400[] = {
#include "assets/objects/object_d_lift//object_d_liftTex_000400.i8.inc.c"
};

u64 object_d_liftTex_000800[] = {
#include "assets/objects/object_d_lift//object_d_liftTex_000800.i8.inc.c"
};


