#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_spot17_obj.h"

static Vtx object_spot17_objVtx_000820[4];
static Vtx object_spot17_objVtx_000860[4];
static Vtx object_spot17_objVtx_000A70[13];

u64 gCraterRockPaletteTex[] = {
#include "assets/objects/object_spot17_obj/crater_rock_palette.rgb5a1.inc.c"
};

u64 gCraterRockTex[] = {
#include "assets/objects/object_spot17_obj/crater_rock.ci4.inc.c"
};

static Vtx object_spot17_objVtx_000820[4] = {
    VTX(559, 0, 66, 7450, -1731, 84, 84, 84, 255),
    VTX(-638, 0, -16, 7312, -1731, 84, 84, 84, 255),
    VTX(559, 1600, 66, 7450, -2140, 175, 175, 175, 255),
    VTX(-638, 1600, -16, 7312, -2140, 175, 175, 175, 255),
}; 

static Vtx object_spot17_objVtx_000860[4] = {
    VTX(944, -2, 53, 0, 2048, 0, 0, 0, 255),
    VTX(-927, -9, -77, 2048, 2048, 0, 0, 0, 255),
    VTX(562, 1598, 27, 0, 0, 0, 0, 0, 255),
    VTX(-635, 1598, -56, 2048, 0, 0, 0, 0, 255),
}; 

Gfx gCraterBombableWallDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, gCraterRockTex),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_4b, 4, 0, 0, 0, 0, 6, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gCraterRockPaletteTex),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 15),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 60, 90, 255, 255),
    gsSPVertex(&object_spot17_objVtx_000820[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gCraterBombableWallCracksDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gCraterBombableWallCracksTex),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, 2, 6, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_spot17_objVtx_000860[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

CamData gCraterBombableWallCol_camDataList_000009F0[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gCraterBombableWallCol_polygonTypes_000009F8[] = {
   0x00000000, 0x000007CB,
}; 

CollisionPoly gCraterBombableWallCol_polygons_00000A00[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x08BF, 0x0000, 0x804E, 0x001C }, // 0x00000A00
   { 0x0000, 0x0001, 0x0003, 0x0002, 0x08BF, 0x0000, 0x804E, 0x001C }, // 0x00000A10

}; 

Vec3s gCraterBombableWallCol_vtx_00000A20[] = {
   { 559, 0, 66 }, // 0x00000A20
   { -638, 0, -16 }, // 0x00000A26
   { 559, 1600, 66 }, // 0x00000A2C
   { -638, 1600, -16 }, // 0x00000A32
}; 

CollisionHeader gCraterBombableWallCol = { -927, -9, -77, 944, 1600, 66, 4, gCraterBombableWallCol_vtx_00000A20, 2, gCraterBombableWallCol_polygons_00000A00, gCraterBombableWallCol_polygonTypes_000009F8, &gCraterBombableWallCol_camDataList_000009F0, 0, 0 }; 

static u32 padA64 = 0;
static u32 padA68 = 0;
static u32 padA6C = 0;

static Vtx object_spot17_objVtx_000A70[13] = {
    VTX(-2203, 12118, 2203, -512, -512, 110, 60, 30, 202),
    VTX(2203, 12118, 2203, 512, -512, 110, 60, 30, 202),
    VTX(2203, 16524, 2203, 512, -1536, 110, 60, 30, 0),
    VTX(-2203, 16524, 2203, -512, -1536, 110, 60, 30, 0),
    VTX(-1652, 5508, 2203, -384, 1024, 110, 60, 30, 255),
    VTX(1652, 5508, 2203, 384, 1024, 110, 60, 30, 255),
    VTX(-1102, 551, 0, -256, 2176, 40, 20, 10, 126),
    VTX(0, 0, 0, 0, 2304, 0, 0, 0, 255),
    VTX(1102, 551, 0, 256, 2176, 40, 20, 10, 126),
    VTX(-4406, 5508, 0, -1024, 1024, 110, 60, 30, 0),
    VTX(-5508, 11016, 0, -1280, -256, 110, 60, 30, 0),
    VTX(4406, 5508, 0, 1024, 1024, 110, 60, 30, 0),
    VTX(5508, 11016, 0, 1280, -256, 110, 60, 30, 0),
}; 

Gfx gCraterSmokeConeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, gCraterSmokeConeTex),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 4, 0, 1, 0, 0, 5, 1, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_spot17_objVtx_000A70[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 4, 0, 7, 5, 4, 0),
    gsSP2Triangles(7, 8, 5, 0, 9, 4, 0, 0),
    gsSP2Triangles(9, 0, 10, 0, 5, 11, 12, 0),
    gsSP2Triangles(5, 12, 1, 0, 10, 0, 3, 0),
    gsSP2Triangles(2, 1, 12, 0, 9, 6, 4, 0),
    gsSP1Triangle(8, 11, 5, 0),
    gsSPEndDisplayList(),
}; 

u64 gCraterSmokeConeTex[] = {
#include "assets/objects/object_spot17_obj/crater_smoke_cone.ia8.inc.c"
};

u64 gCraterBombableWallCracksTex[] = {
#include "assets/objects/object_spot17_obj/crater_bombable_wall_cracks.ia8.inc.c"
};


