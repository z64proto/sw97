#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "gameplay_dangeon_keep.h"

static Vtx gameplay_dangeon_keepVtx_000400[4];
static Vtx gameplay_dangeon_keepVtx_000500[3];
static Vtx gameplay_dangeon_keepVtx_000FC0[20];
static Vtx gameplay_dangeon_keepVtx_0011B0[4];
static Vtx gameplay_dangeon_keepVtx_003280[4];
static Vtx gameplay_dangeon_keepVtx_004B50[24];
static Vtx gameplay_dangeon_keepVtx_004ED0[24];
static Vtx gameplay_dangeon_keepVtx_005110[24];
static Vtx gameplay_dangeon_keepVtx_005350[3];
static Vtx gameplay_dangeon_keepVtx_005410[4];
static Vtx gameplay_dangeon_keepVtx_0054E0[4];
static Vtx gameplay_dangeon_keepVtx_0055B0[4];
static Vtx gameplay_dangeon_keepVtx_005680[4];
static Vtx gameplay_dangeon_keepVtx_0056C0[4];
static Vtx gameplay_dangeon_keepVtx_005700[16];
static Vtx gameplay_dangeon_keepVtx_005950[4];
static Vtx gameplay_dangeon_keepVtx_005990[20];
static Vtx gameplay_dangeon_keepVtx_005BD0[4];
static Vtx gameplay_dangeon_keepVtx_005C10[4];
static Vtx gameplay_dangeon_keepVtx_005C50[16];
static Vtx gameplay_dangeon_keepVtx_005FF0[20];
static Vtx gameplay_dangeon_keepVtx_006130[4];
static Vtx gameplay_dangeon_keepVtx_006270[4];
static Vtx gameplay_dangeon_keepVtx_0062B0[20];
static Vtx gameplay_dangeon_keepVtx_0064F0[14];
static Vtx gameplay_dangeon_keepVtx_0065D0[4];
static Vtx gameplay_dangeon_keepVtx_0066E0[15];
static Vtx gameplay_dangeon_keepVtx_0067D0[4];
static Vtx gameplay_dangeon_keepVtx_0068E0[20];
static Vtx gameplay_dangeon_keepVtx_006A20[23];
static Vtx gameplay_dangeon_keepVtx_006B90[3];
static Vtx gameplay_dangeon_keepVtx_006BC0[21];
static Vtx gameplay_dangeon_keepVtx_006F10[20];
static Vtx gameplay_dangeon_keepVtx_007050[23];
static Vtx gameplay_dangeon_keepVtx_0071C0[3];
static Vtx gameplay_dangeon_keepVtx_0071F0[21];
static Vtx gameplay_dangeon_keepVtx_007540[20];
static Vtx gameplay_dangeon_keepVtx_007680[19];
static Vtx gameplay_dangeon_keepVtx_0174B0[34];
static Vtx gameplay_dangeon_keepVtx_0176D0[4];
static Vtx gameplay_dangeon_keepVtx_017710[22];
static Vtx gameplay_dangeon_keepVtx_017A30[3];

u64 gameplay_dangeon_keepTex_000000[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_000000.i8.inc.c"
};

u64 gameplay_dangeon_keepTex_000200[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_000200.i8.inc.c"
};

static Vtx gameplay_dangeon_keepVtx_000400[4] = {
    VTX(-400, -480, 0, 0, 1024, 255, 255, 255, 255),
    VTX(400, 1440, 0, 512, 0, 255, 255, 255, 255),
    VTX(-400, 1440, 0, 0, 0, 255, 255, 255, 255),
    VTX(400, -480, 0, 512, 1024, 255, 255, 255, 255),
}; 

Gfx gUnusedCandleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_000000),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 2, 0, 0, 0, 2, 5, 0, 2, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_000200),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 15, 0, 4, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 2, 256, 1, 0, 0, 5, 15, 0, 4, 1),
    gsDPSetTileSize(1, 0, 0, 60, 124),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, 1, TEXEL0,
                       PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_dangeon_keepVtx_000400[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_000500[3] = {
    VTX(447, -300, 0, 611, 512, 0, 0, 120, 255),
    VTX(0, 500, 0, 256, -102, 0, 0, 120, 255),
    VTX(-447, -300, 0, -99, 512, 0, 0, 120, 255),
}; 

Gfx gBrownFragmentDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0005C0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 3, 4, 0, 3, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 3, 4, 0, 3, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_000500[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 gameplay_dangeon_keepTex_0005C0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0005C0.rgb5a1.inc.c"
};

u64 gUnusedStoneTex[] = {
#include "assets/objects/gameplay_dangeon_keep/unused_stone.rgb5a1.inc.c"
};

static Vtx gameplay_dangeon_keepVtx_000FC0[20] = {
    VTX(0, 1414, 0, 0, 102, 255, 255, 255, 255),
    VTX(0, 1414, 200, 0, 0, 255, 255, 255, 255),
    VTX(1414, 0, 200, 1024, 0, 255, 255, 255, 255),
    VTX(1414, 0, 0, 1024, 102, 255, 255, 255, 255),
    VTX(1414, 0, 0, 922, 0, 153, 153, 153, 255),
    VTX(1414, 0, 200, 1024, 0, 153, 153, 153, 255),
    VTX(0, -1414, 200, 1024, 1024, 89, 89, 89, 255),
    VTX(0, -1414, 0, 922, 1024, 89, 89, 89, 255),
    VTX(0, -1414, 0, 1024, 950, 89, 89, 89, 255),
    VTX(0, -1414, 200, 1024, 1024, 89, 89, 89, 255),
    VTX(-1414, 0, 200, 0, 1024, 153, 153, 153, 255),
    VTX(-1414, 0, 0, 0, 950, 153, 153, 153, 255),
    VTX(-1414, 0, 0, 102, 1024, 255, 255, 255, 255),
    VTX(-1414, 0, 200, 0, 1024, 255, 255, 255, 255),
    VTX(0, 1414, 200, 0, 0, 255, 255, 255, 255),
    VTX(0, 1414, 0, 102, 0, 255, 255, 255, 255),
    VTX(0, 1414, 200, 0, 0, 255, 255, 255, 255),
    VTX(-1414, 0, 200, 0, 1024, 255, 255, 255, 255),
    VTX(0, -1414, 200, 1024, 1024, 255, 255, 255, 255),
    VTX(1414, 0, 200, 1024, 0, 255, 255, 255, 255),
}; 

Gfx gDoorLockDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_001280),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 3, 5, 0, 3, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 3, 5, 0, 3, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_000FC0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_0011B0[4] = {
    VTX(346, 200, 0, 512, 0, 255, 255, 255, 255),
    VTX(-2454, 5050, 0, 512, 4096, 153, 153, 153, 255),
    VTX(-3146, 4650, 0, 0, 4096, 153, 153, 153, 255),
    VTX(-346, -200, 0, 0, 0, 255, 255, 255, 255),
}; 

Gfx gDoorChainsDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_002280),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 3, 7, 0, 3, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 3, 7, 0, 3, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 508),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_0011B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gameplay_dangeon_keepTex_001280[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_001280.rgb5a1.inc.c"
};

u64 gUnusedGoldLockTex[] = {
#include "assets/objects/gameplay_dangeon_keep/unused_gold_lock.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_002280[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_002280.rgb5a1.inc.c"
};

static Vtx gameplay_dangeon_keepVtx_003280[4] = {
    VTX(-60, 0, 0, 0, 1024, 255, 255, 255, 255),
    VTX(60, 0, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(60, 120, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-60, 120, 0, 0, 0, 255, 255, 255, 255),
}; 

Gfx gUnusedBombBagDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0164B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_003280[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gPushBlockSilverTex[] = {
#include "assets/objects/gameplay_dangeon_keep/block_silver.i4.inc.c"
};

u64 gPushBlockBaseTex[] = {
#include "assets/objects/gameplay_dangeon_keep/block_base.i4.inc.c"
};

u64 gPushBlockGrayTex[] = {
#include "assets/objects/gameplay_dangeon_keep/block_gray.i4.inc.c"
};

static Vtx gameplay_dangeon_keepVtx_004B50[24] = {
    VTX(-300, 0, 300, 0, 2048, 60, 56, 41, 255),
    VTX(300, 0, 300, 2048, 2048, 114, 114, 114, 255),
    VTX(300, 600, 300, 2048, 0, 255, 255, 255, 255),
    VTX(-300, 600, 300, 0, 0, 153, 153, 153, 255),
    VTX(300, 0, -300, 0, 2048, 51, 51, 51, 255),
    VTX(300, 0, 300, 2048, 2048, 51, 51, 51, 255),
    VTX(-300, 0, 300, 2048, 0, 51, 51, 51, 255),
    VTX(-300, 0, -300, 0, 0, 51, 51, 51, 255),
    VTX(300, 600, 300, 0, 0, 178, 178, 178, 255),
    VTX(300, 0, 300, 0, 2048, 60, 56, 41, 255),
    VTX(300, 0, -300, 2048, 2048, 114, 114, 114, 255),
    VTX(300, 600, -300, 2048, 0, 229, 229, 229, 255),
    VTX(-300, 600, -300, 0, 0, 255, 255, 255, 255),
    VTX(-300, 600, 300, 0, 2048, 178, 178, 178, 255),
    VTX(300, 600, 300, 2048, 2048, 255, 255, 255, 255),
    VTX(300, 600, -300, 2048, 0, 165, 165, 165, 255),
    VTX(-300, 0, -300, 0, 2048, 60, 56, 41, 255),
    VTX(-300, 0, 300, 2048, 2048, 140, 140, 140, 255),
    VTX(-300, 600, 300, 2048, 0, 216, 216, 216, 255),
    VTX(-300, 600, -300, 0, 0, 140, 140, 140, 255),
    VTX(300, 600, -300, 0, 0, 153, 153, 153, 255),
    VTX(300, 0, -300, 0, 2048, 60, 56, 41, 255),
    VTX(-300, 0, -300, 2048, 2048, 114, 114, 114, 255),
    VTX(-300, 600, -300, 2048, 0, 255, 255, 255, 255),
}; 

Gfx gPushBlockDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDungeonKeepTex_00F0A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_004B50[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_004D88[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gPushBlockCol_camDataList_00004D90[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gPushBlockCol_polygonTypes_00004D98[] = {
   0x00E00000, 0x000007C2,
   0x00000000, 0x000007C2,
}; 

CollisionPoly gPushBlockCol_polygons_00004DA8[] = {
   { 0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFED4 }, // 0x00004DA8
   { 0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFED4 }, // 0x00004DB8
   { 0x0001, 0x2004, 0x0001, 0x0000, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00004DC8
   { 0x0001, 0x2004, 0x0000, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00004DD8
   { 0x0000, 0x2002, 0x0001, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFED4 }, // 0x00004DE8
   { 0x0000, 0x2002, 0x0004, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFED4 }, // 0x00004DF8
   { 0x0001, 0x2007, 0x0003, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x00004E08
   { 0x0001, 0x2007, 0x0002, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFDA8 }, // 0x00004E18
   { 0x0000, 0x2005, 0x0000, 0x0003, 0x8001, 0x0000, 0x0000, 0xFED4 }, // 0x00004E28
   { 0x0000, 0x2005, 0x0003, 0x0007, 0x8001, 0x0000, 0x0000, 0xFED4 }, // 0x00004E38
   { 0x0000, 0x2006, 0x0004, 0x0005, 0x0000, 0x0000, 0x8001, 0xFED4 }, // 0x00004E48
   { 0x0000, 0x2006, 0x0005, 0x0007, 0x0000, 0x0000, 0x8001, 0xFED4 }, // 0x00004E58

}; 

Vec3s gPushBlockCol_vtx_00004E68[] = {
   { -300, 0, 300 }, // 0x00004E68
   { 300, 0, 300 }, // 0x00004E6E
   { 300, 600, 300 }, // 0x00004E74
   { -300, 600, 300 }, // 0x00004E7A
   { 300, 0, -300 }, // 0x00004E80
   { -300, 0, -300 }, // 0x00004E86
   { 300, 600, -300 }, // 0x00004E8C
   { -300, 600, -300 }, // 0x00004E92
}; 

CollisionHeader gPushBlockCol = { -300, 0, -300, 300, 600, 300, 8, gPushBlockCol_vtx_00004E68, 12, gPushBlockCol_polygons_00004DA8, gPushBlockCol_polygonTypes_00004D98, &gPushBlockCol_camDataList_00004D90, 0, 0 }; 

static u32 pad4EC4 = 0;
static u32 pad4EC8 = 0;
static u32 pad4ECC = 0;

static Vtx gameplay_dangeon_keepVtx_004ED0[24] = {
    VTX(-600, -180, -600, 2048, 1024, 63, 63, 63, 255),
    VTX(600, -180, -600, 2048, -1558, 63, 63, 63, 255),
    VTX(600, -180, 600, 0, -1558, 63, 63, 63, 255),
    VTX(-600, -180, 600, 0, 1024, 63, 63, 63, 255),
    VTX(-600, -180, 600, 2048, 1024, 153, 153, 153, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
    VTX(-600, -180, -600, 0, 1024, 153, 153, 153, 255),
    VTX(-600, -180, -600, 1884, 1024, 114, 114, 114, 255),
    VTX(-600, 180, -600, 1884, 0, 216, 216, 216, 255),
    VTX(600, 180, -600, 168, 0, 216, 216, 216, 255),
    VTX(600, -180, -600, 168, 1024, 114, 114, 114, 255),
    VTX(600, -180, -600, 0, 1104, 153, 153, 153, 255),
    VTX(600, 180, -600, 0, 80, 255, 255, 255, 255),
    VTX(600, 180, 600, 2048, 80, 255, 255, 255, 255),
    VTX(600, -180, 600, 2048, 1104, 153, 153, 153, 255),
    VTX(600, -180, 600, 1881, 1024, 114, 114, 114, 255),
    VTX(600, 180, 600, 1881, 0, 216, 216, 216, 255),
    VTX(-600, 180, 600, 140, 0, 216, 216, 216, 255),
    VTX(-600, -180, 600, 140, 1024, 114, 114, 114, 255),
    VTX(-600, 180, 600, 2048, 403, 255, 255, 255, 255),
    VTX(600, 180, 600, 2048, -2015, 255, 255, 255, 255),
    VTX(600, 180, -600, 0, -2015, 255, 255, 255, 255),
    VTX(-600, 180, -600, 0, 403, 255, 255, 255, 255),
}; 

Gfx gWoodenPlatofrmDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_00F8A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_004ED0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_005108[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_dangeon_keepVtx_005110[24] = {
    VTX(-100, 200, 100, 2048, 2048, 0, 120, 0, 255),
    VTX(100, 200, 100, 2048, 0, 0, 120, 0, 255),
    VTX(100, 200, -100, 0, 0, 0, 120, 0, 255),
    VTX(-100, 200, -100, 0, 2048, 0, 120, 0, 255),
    VTX(100, 0, 100, 2048, 2048, 0, 0, 120, 255),
    VTX(-100, 200, 100, 0, 0, 0, 0, 120, 255),
    VTX(-100, 0, 100, 0, 2048, 0, 0, 120, 255),
    VTX(100, 200, 100, 2048, 0, 0, 0, 120, 255),
    VTX(100, 0, -100, 2048, 0, 120, 0, 0, 255),
    VTX(100, 200, 100, 0, 2048, 120, 0, 0, 255),
    VTX(100, 0, 100, 2048, 2048, 120, 0, 0, 255),
    VTX(100, 200, -100, 0, 0, 120, 0, 0, 255),
    VTX(-100, 0, -100, 2048, 2048, 0, 0, 136, 255),
    VTX(100, 200, -100, 0, 0, 0, 0, 136, 255),
    VTX(100, 0, -100, 0, 2048, 0, 0, 136, 255),
    VTX(-100, 200, -100, 2048, 0, 0, 0, 136, 255),
    VTX(-100, 0, 100, 2059, -11, 136, 0, 0, 255),
    VTX(-100, 200, -100, 0, 2048, 136, 0, 0, 255),
    VTX(-100, 0, -100, 2059, 2048, 136, 0, 0, 255),
    VTX(-100, 200, 100, 0, -11, 136, 0, 0, 255),
    VTX(-100, 0, -100, 2048, 2048, 0, 136, 0, 255),
    VTX(100, 0, -100, 2048, 0, 0, 136, 0, 255),
    VTX(100, 0, 100, 0, 0, 0, 136, 0, 255),
    VTX(-100, 0, 100, 0, 2048, 0, 136, 0, 255),
}; 

Gfx gSmallWoodenBoxDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_011CA0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_005110[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_005348[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_dangeon_keepVtx_005350[3] = {
    VTX(-53, 213, 0, -418, 512, 255, 255, 255, 255),
    VTX(-53, -107, 0, 2030, 512, 255, 255, 255, 255),
    VTX(107, -107, 0, 2030, -908, 255, 255, 255, 255),
}; 

Gfx gSmallWoodenBoxFragmentDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_012CA0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 4, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_005350[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_005410[4] = {
    VTX(60, 120, 0, 935, 94, 255, 255, 255, 255),
    VTX(-60, 120, 0, 77, 94, 255, 255, 255, 255),
    VTX(-60, 0, 0, 78, 943, 255, 255, 255, 255),
    VTX(60, 0, 0, 935, 943, 255, 255, 255, 255),
}; 

Gfx gBetaKokiriSwordSpriteDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0154B0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_005410[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_0054E0[4] = {
    VTX(-60, 0, 0, 0, 1024, 255, 255, 255, 255),
    VTX(60, 0, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(60, 120, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-60, 120, 0, 0, 0, 255, 255, 255, 255),
}; 

Gfx gMagicJarSpriteDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_015CB0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_0054E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_0055B0[4] = {
    VTX(60, 60, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-60, 60, 0, 0, 0, 255, 255, 255, 255),
    VTX(-60, -60, 0, 0, 1024, 255, 255, 255, 255),
    VTX(60, -60, 0, 1024, 1024, 255, 255, 255, 255),
}; 

Gfx gBetaSlingshotSpriteDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_016CB0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_0055B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_005680[4] = {
    VTX(240, 10, 240, 0, -991, 195, 157, 38, 255),
    VTX(240, 10, -240, 6717, -991, 195, 157, 38, 255),
    VTX(-240, 10, -240, 6717, 5726, 195, 157, 38, 255),
    VTX(-240, 10, 240, 0, 5726, 195, 157, 38, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_0056C0[4] = {
    VTX(100, 110, 100, 1024, 1024, 255, 224, 178, 255),
    VTX(100, 110, -100, 1024, 0, 195, 157, 38, 255),
    VTX(-100, 110, -100, 0, 0, 195, 157, 38, 255),
    VTX(-100, 110, 100, 0, 1024, 195, 157, 38, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_005700[16] = {
    VTX(200, 10, -200, 1024, 1024, 195, 157, 38, 255),
    VTX(100, 110, -100, 768, 15, 195, 157, 38, 255),
    VTX(100, 110, 100, 256, 15, 255, 224, 178, 255),
    VTX(200, 10, 200, 0, 1024, 195, 157, 38, 255),
    VTX(-200, 10, -200, 1024, 1024, 84, 70, 17, 255),
    VTX(-100, 110, -100, 768, 25, 195, 157, 38, 255),
    VTX(100, 110, -100, 256, 25, 195, 157, 38, 255),
    VTX(200, 10, -200, 0, 1024, 195, 157, 38, 255),
    VTX(-200, 10, 200, 1024, 1024, 195, 157, 38, 255),
    VTX(-100, 110, 100, 768, 17, 195, 157, 38, 255),
    VTX(-100, 110, -100, 256, 17, 195, 157, 38, 255),
    VTX(-200, 10, -200, 0, 1024, 84, 70, 17, 255),
    VTX(200, 10, 200, 1024, 1024, 195, 157, 38, 255),
    VTX(100, 110, 100, 768, 11, 255, 224, 178, 255),
    VTX(-100, 110, 100, 256, 11, 195, 157, 38, 255),
    VTX(-200, 10, 200, 0, 1024, 195, 157, 38, 255),
}; 

Gfx gFloorSwitch1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_007CA0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_005680[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0078A0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&gameplay_dangeon_keepVtx_0056C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_007CA0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&gameplay_dangeon_keepVtx_005700[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_005948[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_dangeon_keepVtx_005950[4] = {
    VTX(-100, 110, -100, 2, -10, 242, 242, 242, 255),
    VTX(-100, 110, 100, -4, 1022, 242, 242, 242, 255),
    VTX(100, 110, 100, 1028, 1028, 242, 242, 242, 255),
    VTX(100, 110, -100, 1034, -4, 242, 242, 242, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_005990[20] = {
    VTX(-200, 10, 200, 1536, 5, 178, 178, 178, 255),
    VTX(-100, 110, 100, 1024, 1024, 204, 204, 204, 255),
    VTX(-100, 110, -100, 0, 1024, 229, 229, 229, 255),
    VTX(-200, 10, -200, -512, 5, 229, 229, 229, 255),
    VTX(200, 10, 200, 2115, 1024, 242, 242, 242, 255),
    VTX(100, 110, 100, 1582, -15, 242, 242, 242, 255),
    VTX(-100, 110, 100, 517, -15, 242, 242, 242, 255),
    VTX(-200, 10, 200, -16, 1024, 242, 242, 242, 255),
    VTX(200, 10, -200, 1629, 1024, 242, 242, 242, 255),
    VTX(100, 110, -100, 1016, -7, 63, 63, 63, 255),
    VTX(100, 110, 100, -212, -7, 191, 191, 191, 255),
    VTX(200, 10, 200, -825, 1024, 127, 127, 127, 255),
    VTX(-200, 10, -200, -910, 1024, 242, 242, 242, 255),
    VTX(-100, 110, -100, -285, 8, 178, 178, 178, 255),
    VTX(100, 110, -100, 963, 8, 63, 63, 63, 255),
    VTX(200, 10, -200, 1587, 1024, 242, 242, 242, 255),
    VTX(-240, 10, -240, 0, 0, 242, 242, 242, 255),
    VTX(-240, 10, 240, 0, 1024, 140, 140, 140, 255),
    VTX(240, 10, 240, 1024, 1024, 242, 242, 242, 255),
    VTX(240, 10, -240, 1024, 0, 242, 242, 242, 255),
}; 

Gfx gRustyFloorSwitchDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_00D8A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_005950[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_00E0A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&gameplay_dangeon_keepVtx_005990[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_005BD0[4] = {
    VTX(240, 10, 240, 0, -991, 88, 135, 147, 255),
    VTX(240, 10, -240, 6717, -991, 65, 148, 131, 255),
    VTX(-240, 10, -240, 6717, 5726, 104, 140, 150, 255),
    VTX(-240, 10, 240, 0, 5726, 65, 148, 131, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_005C10[4] = {
    VTX(100, 110, 100, 1024, 1024, 178, 255, 255, 255),
    VTX(100, 110, -100, 1024, 0, 128, 228, 228, 255),
    VTX(-100, 110, -100, 0, 0, 96, 223, 255, 255),
    VTX(-100, 110, 100, 0, 1024, 128, 228, 228, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_005C50[16] = {
    VTX(200, 10, -200, 0, 1024, 79, 116, 108, 255),
    VTX(100, 110, -100, 256, 14, 128, 228, 228, 255),
    VTX(100, 110, 100, 768, 14, 178, 255, 255, 255),
    VTX(200, 10, 200, 1024, 1024, 82, 153, 172, 255),
    VTX(-200, 10, -200, 1024, 1024, 30, 71, 62, 255),
    VTX(-100, 110, -100, 768, 19, 96, 223, 255, 255),
    VTX(100, 110, -100, 256, 19, 128, 228, 228, 255),
    VTX(200, 10, -200, 0, 1024, 79, 116, 108, 255),
    VTX(-200, 10, 200, 0, 1024, 96, 145, 158, 255),
    VTX(-100, 110, 100, 256, 16, 128, 228, 228, 255),
    VTX(-100, 110, -100, 768, 16, 96, 223, 255, 255),
    VTX(-200, 10, -200, 1024, 1024, 104, 140, 150, 255),
    VTX(200, 10, 200, 1024, 1024, 140, 216, 216, 255),
    VTX(100, 110, 100, 768, 12, 178, 255, 255, 255),
    VTX(-100, 110, 100, 256, 12, 205, 255, 255, 255),
    VTX(-200, 10, 200, 0, 1024, 155, 201, 201, 255),
}; 

Gfx gFloorSwitch2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_007CA0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 178, 178, 178, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_005BD0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0078A0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&gameplay_dangeon_keepVtx_005C10[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_007CA0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&gameplay_dangeon_keepVtx_005C50[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_005E98[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gFloorSwitchCol_camDataList_00005EA0[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

SurfaceType gFloorSwitchCol_surfaceType_00005EA8[] = {
    { 0x00000000, 0x000007C2 },
}; 

CollisionPoly gFloorSwitchCol_polygons_00005EB0[] = {
    { 0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFFF6 },
    { 0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFFF6 },
    { 0x0000, 0x2004, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFF92 },
    { 0x0000, 0x2004, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFF92 },
    { 0x0000, 0x2008, 0x0005, 0x0004, 0x5A82, 0x5A82, 0x0000, 0xFF6C },
    { 0x0000, 0x2008, 0x0004, 0x0009, 0x5A82, 0x5A82, 0x0000, 0xFF6C },
    { 0x0000, 0x200A, 0x0006, 0x0005, 0x0000, 0x5A82, 0xA57E, 0xFF6C },
    { 0x0000, 0x200A, 0x0005, 0x0008, 0x0000, 0x5A82, 0xA57E, 0xFF6C },
    { 0x0000, 0x200B, 0x0007, 0x0006, 0xA57E, 0x5A82, 0x0000, 0xFF6C },
    { 0x0000, 0x200B, 0x0006, 0x000A, 0xA57E, 0x5A82, 0x0000, 0xFF6C },
    { 0x0000, 0x2009, 0x0004, 0x0007, 0x0000, 0x5A82, 0x5A82, 0xFF6C },
    { 0x0000, 0x2009, 0x0007, 0x000B, 0x0000, 0x5A82, 0x5A82, 0xFF6C },
}; 

Vec3s gFloorSwitchCol_vtx_00005F70[] = {
    {    240,     10,    240 },
    {    240,     10,   -240 },
    {   -240,     10,   -240 },
    {   -240,     10,    240 },
    {    100,    110,    100 },
    {    100,    110,   -100 },
    {   -100,    110,   -100 },
    {   -100,    110,    100 },
    {    200,     10,   -200 },
    {    200,     10,    200 },
    {   -200,     10,   -200 },
    {   -200,     10,    200 },
}; 

CollisionHeader gFloorSwitchCol = { 
    { -240, 10, -240 },
    { 240, 110, 240 },
    12,
    gFloorSwitchCol_vtx_00005F70,
    12,
    gFloorSwitchCol_polygons_00005EB0,
    gFloorSwitchCol_surfaceType_00005EA8,
    gFloorSwitchCol_camDataList_00005EA0,
    0,
    NULL
}; 

static u32 pad5FE4 = 0;
static u32 pad5FE8 = 0;
static u32 pad5FEC = 0;

static Vtx gameplay_dangeon_keepVtx_005FF0[20] = {
    VTX(240, 10, 240, 0, -991, 167, 58, 79, 255),
    VTX(240, 10, -240, 6717, -991, 111, 62, 71, 255),
    VTX(-240, 10, -240, 6717, 5726, 167, 58, 79, 255),
    VTX(-240, 10, 240, 0, 5726, 111, 62, 71, 255),
    VTX(200, 10, 200, 1024, 1024, 247, 109, 109, 255),
    VTX(100, 110, 100, 768, 9, 255, 178, 193, 255),
    VTX(-100, 110, 100, 256, 9, 247, 109, 109, 255),
    VTX(-200, 10, 200, 0, 1024, 247, 109, 109, 255),
    VTX(-200, 10, 200, 0, 1024, 247, 109, 109, 255),
    VTX(-100, 110, 100, 256, 7, 247, 109, 109, 255),
    VTX(-100, 110, -100, 768, 7, 202, 31, 31, 255),
    VTX(-200, 10, -200, 1024, 1024, 111, 62, 71, 255),
    VTX(-200, 10, -200, 1024, 1024, 111, 62, 71, 255),
    VTX(-100, 110, -100, 768, 8, 202, 31, 31, 255),
    VTX(100, 110, -100, 256, 8, 247, 109, 109, 255),
    VTX(200, 10, -200, 0, 1024, 247, 109, 109, 255),
    VTX(200, 10, -200, 0, 1024, 247, 109, 109, 255),
    VTX(100, 110, -100, 256, 7, 247, 109, 109, 255),
    VTX(100, 110, 100, 768, 7, 255, 178, 193, 255),
    VTX(200, 10, 200, 1024, 1024, 247, 109, 109, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_006130[4] = {
    VTX(100, 110, 100, 1024, 1024, 255, 178, 193, 255),
    VTX(100, 110, -100, 1024, 0, 247, 109, 109, 255),
    VTX(-100, 110, -100, 0, 0, 202, 31, 31, 255),
    VTX(-100, 110, 100, 0, 1024, 247, 109, 109, 255),
}; 

Gfx gFloorSwitch3DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_007CA0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 178, 178, 178, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_005FF0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0078A0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&gameplay_dangeon_keepVtx_006130[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_006270[4] = {
    VTX(-200, 195, -200, 15, 11, 255, 255, 255, 255),
    VTX(-200, 195, 200, 15, 1012, 255, 255, 255, 255),
    VTX(200, 195, 200, 1014, 1012, 255, 255, 255, 255),
    VTX(200, 195, -200, 1014, 11, 255, 255, 255, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_0062B0[20] = {
    VTX(-200, -5, 200, 1024, 1024, 255, 255, 255, 255),
    VTX(-200, 195, 200, 1024, 13, 255, 255, 255, 255),
    VTX(-200, 195, -200, 0, 13, 255, 255, 255, 255),
    VTX(-200, -5, -200, 0, 1024, 255, 255, 255, 255),
    VTX(200, -5, 200, 1024, 1024, 255, 255, 255, 255),
    VTX(200, 195, 200, 1024, 0, 255, 255, 255, 255),
    VTX(-200, 195, 200, 0, 0, 255, 255, 255, 255),
    VTX(-200, -5, 200, 0, 1024, 255, 255, 255, 255),
    VTX(200, -5, -200, 1024, 1024, 255, 255, 255, 255),
    VTX(200, 195, -200, 1024, 0, 255, 255, 255, 255),
    VTX(200, 195, 200, 0, 0, 255, 255, 255, 255),
    VTX(200, -5, 200, 0, 1024, 255, 255, 255, 255),
    VTX(-200, -5, -200, 0, 1024, 255, 255, 255, 255),
    VTX(-200, 195, -200, 0, 20, 255, 255, 255, 255),
    VTX(200, 195, -200, 1024, 20, 255, 255, 255, 255),
    VTX(200, -5, -200, 1024, 1024, 255, 255, 255, 255),
    VTX(-240, 0, -240, 0, -991, 255, 255, 255, 255),
    VTX(-240, 0, 240, 6717, -991, 255, 255, 255, 255),
    VTX(240, 0, 240, 6717, 5726, 255, 255, 255, 255),
    VTX(240, 0, -240, 0, 5726, 255, 255, 255, 255),
}; 

Gfx gBetaFloorSwitchDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0080A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_006270[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0088A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&gameplay_dangeon_keepVtx_0062B0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_0064F0[14] = {
    VTX(0, -226, 0, 0, 0, 52, 52, 0, 255),
    VTX(0, -192, 80, 0, 0, 161, 161, 0, 255),
    VTX(-192, 0, 80, 0, 0, 161, 161, 0, 255),
    VTX(-226, 0, 0, 0, 0, 52, 52, 0, 255),
    VTX(226, 0, 0, 0, 0, 79, 79, 0, 255),
    VTX(192, 0, 80, 0, 0, 134, 134, 0, 255),
    VTX(0, -192, 80, 0, 0, 134, 134, 0, 255),
    VTX(0, -226, 0, 0, 0, 79, 79, 0, 255),
    VTX(0, 226, 0, 0, 0, 188, 188, 0, 255),
    VTX(0, 192, 80, 0, 0, 254, 254, 15, 255),
    VTX(192, 0, 80, 0, 0, 254, 254, 15, 255),
    VTX(226, 0, 0, 0, 0, 188, 188, 0, 255),
    VTX(-226, 0, 0, 0, 0, 188, 188, 0, 255),
    VTX(-192, 0, 80, 0, 0, 254, 254, 15, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_0065D0[4] = {
    VTX(-192, 0, 80, 14, 1016, 255, 255, 255, 255),
    VTX(0, -192, 80, 1019, 1016, 255, 255, 255, 255),
    VTX(192, 0, 80, 1019, 12, 255, 255, 255, 255),
    VTX(0, 192, 80, 14, 12, 255, 255, 255, 255),
}; 

Gfx gEyeSwitch1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, 1,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_0064F0[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0x08000000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPVertex(&gameplay_dangeon_keepVtx_0065D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_0066E0[15] = {
    VTX(0, -226, 0, 0, 0, 38, 38, 38, 255),
    VTX(0, -192, 80, 0, 0, 41, 60, 56, 255),
    VTX(-192, 0, 80, 0, 0, 41, 60, 56, 255),
    VTX(-226, 0, 0, 0, 0, 76, 76, 76, 255),
    VTX(226, 0, 0, 0, 0, 76, 76, 76, 255),
    VTX(192, 0, 80, 0, 0, 41, 60, 56, 255),
    VTX(0, -226, 0, 0, 0, 76, 76, 76, 255),
    VTX(0, 226, 0, 0, 0, 153, 153, 153, 255),
    VTX(0, 192, 80, 0, 0, 104, 140, 150, 255),
    VTX(192, 0, 80, 0, 0, 104, 140, 150, 255),
    VTX(226, 0, 0, 0, 0, 153, 153, 153, 255),
    VTX(-226, 0, 0, 0, 0, 153, 153, 153, 255),
    VTX(-192, 0, 80, 0, 0, 104, 140, 150, 255),
    VTX(0, 192, 80, 0, 0, 163, 193, 193, 255),
    VTX(0, 226, 0, 0, 0, 216, 216, 216, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_0067D0[4] = {
    VTX(-192, 0, 80, 0, 1024, 255, 255, 255, 255),
    VTX(0, -192, 80, 1024, 1024, 255, 255, 255, 255),
    VTX(192, 0, 80, 1024, 0, 255, 255, 255, 255),
    VTX(0, 192, 80, 0, 0, 255, 255, 255, 255),
}; 

Gfx gEyeSwitch2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, 1,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_0066E0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0x08000000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPVertex(&gameplay_dangeon_keepVtx_0067D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_0068E0[20] = {
    VTX(-56, 119, 58, 0, 0, 255, 255, 255, 255),
    VTX(56, 119, 58, 0, 2048, 89, 89, 89, 255),
    VTX(56, 119, -53, 2048, 2048, 178, 178, 178, 255),
    VTX(-56, 119, -53, 2048, 0, 165, 165, 165, 255),
    VTX(93, 0, 93, 2112, 1762, 178, 178, 178, 255),
    VTX(56, 119, 58, 1697, 402, 178, 178, 178, 255),
    VTX(-56, 119, 58, 474, 402, 51, 51, 51, 255),
    VTX(-93, 0, 93, 64, 1762, 153, 153, 153, 255),
    VTX(93, 0, -93, 2127, 1723, 255, 255, 255, 255),
    VTX(56, 119, -53, 1685, 354, 178, 178, 178, 255),
    VTX(56, 119, 58, 463, 354, 89, 89, 89, 255),
    VTX(93, 0, 93, 79, 1723, 178, 178, 178, 255),
    VTX(-93, 0, -93, 2097, 1781, 255, 255, 255, 255),
    VTX(-56, 119, -53, 1687, 403, 255, 255, 255, 255),
    VTX(56, 119, -53, 464, 403, 178, 178, 178, 255),
    VTX(93, 0, -93, 49, 1781, 178, 178, 178, 255),
    VTX(-93, 0, 93, 2074, 1735, 153, 153, 153, 255),
    VTX(-56, 119, 58, 1691, 367, 242, 242, 242, 255),
    VTX(-56, 119, -53, 468, 367, 216, 216, 216, 255),
    VTX(-93, 0, -93, 26, 1735, 255, 255, 255, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_006A20[23] = {
    VTX(75, 363, 80, 241, 215, 255, 255, 255, 255),
    VTX(-73, 363, 80, 0, 1024, 255, 255, 255, 255),
    VTX(1, 130, 4, 1476, 1024, 42, 127, 255, 255),
    VTX(-73, 363, 80, 0, 1024, 255, 255, 255, 255),
    VTX(-73, 363, -69, 245, 216, 255, 255, 255, 255),
    VTX(1, 130, 4, 1476, 1024, 42, 127, 255, 255),
    VTX(75, 363, -71, 0, 1024, 255, 255, 255, 255),
    VTX(75, 363, 80, 246, 216, 255, 255, 255, 255),
    VTX(1, 130, 4, 1476, 1023, 42, 127, 255, 255),
    VTX(-73, 363, -69, 242, 215, 255, 255, 255, 255),
    VTX(75, 363, -71, 0, 1024, 255, 255, 255, 255),
    VTX(1, 130, 4, 1476, 1023, 42, 127, 255, 255),
    VTX(1, 470, 4, 1435, 856, 255, 151, 151, 255),
    VTX(75, 363, -71, 0, 1024, 255, 255, 255, 255),
    VTX(-73, 363, -69, 418, 143, 255, 255, 255, 255),
    VTX(75, 363, 80, 422, 144, 255, 255, 255, 255),
    VTX(75, 363, -71, 0, 1024, 255, 255, 255, 255),
    VTX(1, 470, 4, 1438, 862, 255, 151, 151, 255),
    VTX(-73, 363, -69, 416, 148, 255, 255, 255, 255),
    VTX(-73, 363, 80, 0, 1024, 255, 255, 255, 255),
    VTX(1, 470, 4, 1438, 862, 255, 151, 151, 255),
    VTX(-73, 363, 80, 0, 1024, 255, 255, 255, 255),
    VTX(75, 363, 80, 412, 147, 255, 255, 255, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_006B90[3] = {
    VTX(-121, 394, 127, 456, 101, 0, 95, 72, 255),
    VTX(124, 394, 127, 152, 101, 0, 95, 72, 255),
    VTX(1, 517, 2, 317, -74, 0, 95, 72, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_006BC0[21] = {
    VTX(124, 394, 127, 152, 101, 73, 95, 0, 255),
    VTX(124, 394, -118, 253, 101, 73, 95, 0, 255),
    VTX(1, 517, 2, 317, -74, 73, 95, 0, 255),
    VTX(124, 394, -118, 253, 101, 0, 94, 182, 255),
    VTX(-121, 394, -118, 354, 101, 0, 94, 182, 255),
    VTX(1, 517, 2, 317, -74, 0, 94, 182, 255),
    VTX(-121, 394, -118, 354, 101, 183, 94, 0, 255),
    VTX(-121, 394, 127, 456, 101, 183, 94, 0, 255),
    VTX(1, 517, 2, 317, -74, 183, 94, 0, 255),
    VTX(124, 394, -118, 253, 101, 99, 189, 0, 255),
    VTX(124, 394, 127, 152, 101, 99, 189, 0, 255),
    VTX(1, 21, 2, 317, 438, 99, 189, 0, 255),
    VTX(-121, 394, -118, 354, 101, 0, 190, 156, 255),
    VTX(124, 394, -118, 253, 101, 0, 190, 156, 255),
    VTX(1, 21, 2, 317, 438, 0, 190, 156, 255),
    VTX(-121, 394, 127, 456, 101, 157, 189, 0, 255),
    VTX(-121, 394, -118, 354, 101, 157, 189, 0, 255),
    VTX(1, 21, 2, 317, 438, 157, 189, 0, 255),
    VTX(124, 394, 127, 152, 101, 0, 189, 99, 255),
    VTX(-121, 394, 127, 456, 101, 0, 189, 99, 255),
    VTX(1, 21, 2, 317, 438, 0, 189, 99, 255),
}; 

Gfx gCrystalSwitchCoreOpaDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_013CB0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, 1, 6, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_0068E0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0134A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 1, 0, 0, 5, 0, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0, 51, 51, 51, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_dangeon_keepVtx_006A20[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSPEndDisplayList(),
}; 

Gfx gCrystalSwitchCoreXluDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(10000, 10000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_013CA0),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 2, 2, 0, 2, 2),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 7, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 1, 0, 0, 0, 0, 2, 2, 0, 2, 2),
    gsDPSetTileSize(0, 0, 0, 12, 12),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_006B90[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_dangeon_keepVtx_006BC0[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_006F10[20] = {
    VTX(-56, 119, 58, 0, 0, 255, 255, 255, 255),
    VTX(56, 119, 58, 0, 2048, 89, 89, 89, 255),
    VTX(56, 119, -53, 2048, 2048, 178, 178, 178, 255),
    VTX(-56, 119, -53, 2048, 0, 165, 165, 165, 255),
    VTX(93, 0, 93, 2112, 1762, 178, 178, 178, 255),
    VTX(56, 119, 58, 1697, 402, 178, 178, 178, 255),
    VTX(-56, 119, 58, 474, 402, 51, 51, 51, 255),
    VTX(-93, 0, 93, 64, 1762, 153, 153, 153, 255),
    VTX(93, 0, -93, 2127, 1723, 255, 255, 255, 255),
    VTX(56, 119, -53, 1685, 354, 178, 178, 178, 255),
    VTX(56, 119, 58, 463, 354, 89, 89, 89, 255),
    VTX(93, 0, 93, 79, 1723, 178, 178, 178, 255),
    VTX(-93, 0, -93, 2097, 1781, 255, 255, 255, 255),
    VTX(-56, 119, -53, 1687, 403, 255, 255, 255, 255),
    VTX(56, 119, -53, 464, 403, 178, 178, 178, 255),
    VTX(93, 0, -93, 49, 1781, 178, 178, 178, 255),
    VTX(-93, 0, 93, 2074, 1735, 153, 153, 153, 255),
    VTX(-56, 119, 58, 1691, 367, 242, 242, 242, 255),
    VTX(-56, 119, -53, 468, 367, 216, 216, 216, 255),
    VTX(-93, 0, -93, 26, 1735, 255, 255, 255, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_007050[23] = {
    VTX(75, 363, 80, 241, 215, 255, 255, 255, 255),
    VTX(-73, 363, 80, 0, 1024, 255, 255, 255, 255),
    VTX(1, 130, 4, 1476, 1024, 42, 127, 255, 255),
    VTX(-73, 363, 80, 0, 1024, 255, 255, 255, 255),
    VTX(-73, 363, -69, 245, 216, 255, 255, 255, 255),
    VTX(1, 130, 4, 1476, 1024, 42, 127, 255, 255),
    VTX(75, 363, -71, 0, 1024, 255, 255, 255, 255),
    VTX(75, 363, 80, 246, 216, 255, 255, 255, 255),
    VTX(1, 130, 4, 1476, 1023, 42, 127, 255, 255),
    VTX(-73, 363, -69, 242, 215, 255, 255, 255, 255),
    VTX(75, 363, -71, 0, 1024, 255, 255, 255, 255),
    VTX(1, 130, 4, 1476, 1023, 42, 127, 255, 255),
    VTX(1, 470, 4, 1435, 856, 255, 151, 151, 255),
    VTX(75, 363, -71, 0, 1024, 255, 255, 255, 255),
    VTX(-73, 363, -69, 418, 143, 255, 255, 255, 255),
    VTX(75, 363, 80, 422, 144, 255, 255, 255, 255),
    VTX(75, 363, -71, 0, 1024, 255, 255, 255, 255),
    VTX(1, 470, 4, 1438, 862, 255, 151, 151, 255),
    VTX(-73, 363, -69, 416, 148, 255, 255, 255, 255),
    VTX(-73, 363, 80, 0, 1024, 255, 255, 255, 255),
    VTX(1, 470, 4, 1438, 862, 255, 151, 151, 255),
    VTX(-73, 363, 80, 0, 1024, 255, 255, 255, 255),
    VTX(75, 363, 80, 412, 147, 255, 255, 255, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_0071C0[3] = {
    VTX(-121, 394, 127, 456, 101, 0, 95, 72, 255),
    VTX(124, 394, 127, 152, 101, 0, 95, 72, 255),
    VTX(1, 517, 2, 317, -74, 0, 95, 72, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_0071F0[21] = {
    VTX(124, 394, 127, 152, 101, 73, 95, 0, 255),
    VTX(124, 394, -118, 253, 101, 73, 95, 0, 255),
    VTX(1, 517, 2, 317, -74, 73, 95, 0, 255),
    VTX(124, 394, -118, 253, 101, 0, 94, 182, 255),
    VTX(-121, 394, -118, 354, 101, 0, 94, 182, 255),
    VTX(1, 517, 2, 317, -74, 0, 94, 182, 255),
    VTX(-121, 394, -118, 354, 101, 183, 94, 0, 255),
    VTX(-121, 394, 127, 456, 101, 183, 94, 0, 255),
    VTX(1, 517, 2, 317, -74, 183, 94, 0, 255),
    VTX(124, 394, -118, 253, 101, 99, 189, 0, 255),
    VTX(124, 394, 127, 152, 101, 99, 189, 0, 255),
    VTX(1, 21, 2, 317, 438, 99, 189, 0, 255),
    VTX(-121, 394, -118, 354, 101, 0, 190, 156, 255),
    VTX(124, 394, -118, 253, 101, 0, 190, 156, 255),
    VTX(1, 21, 2, 317, 438, 0, 190, 156, 255),
    VTX(-121, 394, 127, 456, 101, 157, 189, 0, 255),
    VTX(-121, 394, -118, 354, 101, 157, 189, 0, 255),
    VTX(1, 21, 2, 317, 438, 157, 189, 0, 255),
    VTX(124, 394, 127, 152, 101, 0, 189, 99, 255),
    VTX(-121, 394, 127, 456, 101, 0, 189, 99, 255),
    VTX(1, 21, 2, 317, 438, 0, 189, 99, 255),
}; 

Gfx gCrystalSwitchDiamondOpaDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_013CB0),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 4, 0, 0, 0, 1, 6, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_006F10[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0x09000000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 1, 0, 0, 5, 0, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_dangeon_keepVtx_007050[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSPEndDisplayList(),
}; 

Gfx gCrystalSwitchDiamondXluDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(10000, 10000, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_013CA0),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 2, 2, 0, 2, 2),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 7, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_8b, 1, 0, 0, 0, 0, 2, 2, 0, 2, 2),
    gsDPSetTileSize(0, 0, 0, 12, 12),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_0071C0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_dangeon_keepVtx_0071F0[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_007538[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_dangeon_keepVtx_007540[20] = {
    VTX(-95, 0, 95, 2048, 1024, 54, 65, 57, 255),
    VTX(-57, 144, 55, 1614, -583, 54, 65, 57, 255),
    VTX(-57, 144, -59, 387, -583, 145, 150, 145, 255),
    VTX(-95, 0, -95, 0, 1024, 191, 191, 191, 255),
    VTX(-95, 0, -95, 2056, 1024, 226, 226, 226, 255),
    VTX(-57, 144, -59, 1642, -583, 145, 150, 145, 255),
    VTX(57, 144, -59, 410, -583, 255, 255, 255, 255),
    VTX(95, 0, -95, 0, 1024, 255, 255, 255, 255),
    VTX(95, 0, -95, 2047, 1024, 230, 230, 230, 255),
    VTX(57, 144, -59, 1660, -582, 230, 230, 230, 255),
    VTX(57, 144, 55, 434, -582, 128, 128, 128, 255),
    VTX(95, 0, 95, 0, 1024, 54, 65, 57, 255),
    VTX(95, 0, 95, 2035, 1024, 107, 107, 107, 255),
    VTX(57, 144, 55, 1629, -579, 54, 65, 57, 255),
    VTX(-57, 144, 55, 410, -579, 25, 25, 25, 255),
    VTX(-95, 0, 95, 0, 1024, 12, 12, 12, 255),
    VTX(-57, 144, 55, 0, 1024, 52, 52, 52, 255),
    VTX(57, 144, 55, 1024, 1024, 54, 65, 57, 255),
    VTX(57, 144, -59, 1024, 0, 153, 153, 153, 255),
    VTX(-57, 144, -59, 0, 0, 255, 255, 255, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_007680[19] = {
    VTX(143, 350, 139, 0, 1024, 107, 0, 42, 255),
    VTX(-141, 350, 139, 0, 1024, 1, 1, 4, 255),
    VTX(0, 136, -2, 0, 1024, 1, 1, 4, 255),
    VTX(-141, 350, 139, 0, 1024, 96, 255, 96, 255),
    VTX(-141, 350, -145, 0, 1024, 107, 85, 0, 255),
    VTX(-141, 350, -145, 0, 1024, 12, 12, 12, 255),
    VTX(143, 350, -145, 0, 1024, 48, 0, 243, 255),
    VTX(0, 136, -2, 0, 1024, 12, 12, 12, 255),
    VTX(143, 350, -145, 0, 1024, 0, 161, 161, 255),
    VTX(143, 350, 139, 0, 1024, 12, 12, 12, 255),
    VTX(-141, 350, -145, 0, 1024, 107, 0, 64, 255),
    VTX(-141, 350, 139, 0, 1024, 124, 254, 254, 255),
    VTX(0, 454, -2, 0, 1024, 1, 1, 4, 255),
    VTX(143, 350, -145, 0, 1024, 255, 255, 63, 255),
    VTX(-141, 350, -145, 0, 1024, 0, 52, 42, 255),
    VTX(0, 454, -2, 0, 1024, 69, 255, 69, 255),
    VTX(143, 350, -145, 0, 1024, 161, 0, 161, 255),
    VTX(0, 454, -2, 0, 1024, 80, 134, 0, 255),
    VTX(143, 350, 139, 0, 1024, 113, 113, 243, 255),
}; 

Gfx gBetaCrystalSwitchDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_00D0A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_007540[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, 1,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&gameplay_dangeon_keepVtx_007680[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(9, 16, 17, 0, 1, 18, 12, 0),
    gsSPEndDisplayList(),
}; 

u64 gameplay_dangeon_keepTex_0078A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0078A0.i8.inc.c"
};

u64 gameplay_dangeon_keepTex_007CA0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_007CA0.i8.inc.c"
};

u64 gameplay_dangeon_keepTex_0080A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0080A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_0088A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0088A0.rgb5a1.inc.c"
};

u64 gEyeSwitchGoldClosedTex[] = {
#include "assets/objects/gameplay_dangeon_keep/eye_gold_closed.rgb5a1.inc.c"
};

u64 gEyeSwitchGoldOpeningTex[] = {
#include "assets/objects/gameplay_dangeon_keep/eye_gold_opening.rgb5a1.inc.c"
};

u64 gEyeSwitchGoldClosingTex[] = {
#include "assets/objects/gameplay_dangeon_keep/eye_gold_closing.rgb5a1.inc.c"
};

u64 gEyeSwitchGoldOpenTex[] = {
#include "assets/objects/gameplay_dangeon_keep/eye_gold_open.rgb5a1.inc.c"
};

u64 gEyeSwitchSilverOpenTex[] = {
#include "assets/objects/gameplay_dangeon_keep/eye_silver_open.rgb5a1.inc.c"
};

u64 gEyeSwitchSilverHalfTex[] = {
#include "assets/objects/gameplay_dangeon_keep/eye_silver_half.rgb5a1.inc.c"
};

u64 gEyeSwitchSilverClosedTex[] = {
#include "assets/objects/gameplay_dangeon_keep/eye_silver_closed.rgb5a1.inc.c"
};

u64 gDungeonKeepTex_00C8A0[] = {
#include "assets/objects/gameplay_dangeon_keep/dungeon_keep_tex_00C8A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_00D0A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_00D0A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_00D8A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_00D8A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_00E0A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_00E0A0.rgb5a1.inc.c"
};

u64 gDungeonKeepTex_00E8A0[] = {
#include "assets/objects/gameplay_dangeon_keep/dungeon_keep_tex_00E8A0.i8.inc.c"
};

u64 gDungeonKeepTex_00ECA0[] = {
#include "assets/objects/gameplay_dangeon_keep/dungeon_keep_tex_00ECA0.i8.inc.c"
};

u64 gDungeonKeepTex_00F0A0[] = {
#include "assets/objects/gameplay_dangeon_keep/dungeon_keep_tex_00F0A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_00F8A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_00F8A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_0108A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0108A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_0118A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0118A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_011AA0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_011AA0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_011CA0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_011CA0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_012CA0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_012CA0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_0134A0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0134A0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_013CA0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_013CA0.ia16.inc.c"
};

u64 gameplay_dangeon_keepTex_013CB0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_013CB0.i8.inc.c"
};

u64 gCrstalSwitchRedTex[] = {
#include "assets/objects/gameplay_dangeon_keep/crystal_red.rgb5a1.inc.c"
};

u64 gCrstalSwitchBlueTex[] = {
#include "assets/objects/gameplay_dangeon_keep/crystal_blue.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_0154B0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0154B0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_015CB0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_015CB0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_0164B0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_0164B0.rgb5a1.inc.c"
};

u64 gameplay_dangeon_keepTex_016CB0[] = {
#include "assets/objects/gameplay_dangeon_keep//gameplay_dangeon_keepTex_016CB0.rgb5a1.inc.c"
};

static Vtx gameplay_dangeon_keepVtx_0174B0[34] = {
    VTX(0, 21, -89, 1299, 1834, 0, 185, 160, 255),
    VTX(76, 21, -37, -193, 1834, 87, 188, 210, 255),
    VTX(0, -11, 0, 553, 2060, 11, 138, 240, 255),
    VTX(-76, 21, 37, 1299, 1834, 169, 188, 46, 255),
    VTX(-76, 21, -37, -193, 1834, 169, 188, 210, 255),
    VTX(-70, 97, 34, 1311, 992, 163, 57, 49, 255),
    VTX(0, 160, 0, 568, -360, 0, 120, 0, 255),
    VTX(-70, 97, -34, -204, 926, 163, 57, 207, 255),
    VTX(76, 21, 37, 1299, 1834, 87, 188, 46, 255),
    VTX(0, 21, 88, -193, 1834, 0, 185, 96, 255),
    VTX(0, 97, -82, 1311, 966, 0, 60, 153, 255),
    VTX(70, 97, -34, -205, 967, 93, 57, 207, 255),
    VTX(70, 97, 34, 1311, 966, 93, 57, 49, 255),
    VTX(0, 97, 82, -205, 967, 0, 60, 103, 255),
    VTX(-70, 97, 34, 1311, 966, 163, 57, 49, 255),
    VTX(-70, 97, -34, -205, 967, 163, 57, 207, 255),
    VTX(70, 97, 34, 1319, 942, 93, 57, 49, 255),
    VTX(0, 160, 0, 510, -380, 0, 120, 0, 255),
    VTX(0, 97, 82, -205, 967, 0, 60, 103, 255),
    VTX(0, 97, -82, 1317, 945, 0, 60, 153, 255),
    VTX(0, 160, 0, 586, -326, 0, 120, 0, 255),
    VTX(70, 97, -34, -205, 967, 93, 57, 207, 255),
    VTX(0, -11, 0, 512, 3903, 0, 137, 0, 255),
    VTX(-8, 160, -42, 1024, 2048, 235, 227, 142, 255),
    VTX(42, 160, -8, 0, 2048, 114, 227, 235, 255),
    VTX(0, -11, 0, 501, 3859, 0, 137, 0, 255),
    VTX(-43, 160, 8, 1024, 2048, 142, 226, 21, 255),
    VTX(-8, 160, -42, 0, 2048, 235, 227, 142, 255),
    VTX(0, -11, 0, 512, 3920, 0, 137, 0, 255),
    VTX(8, 160, 43, 1024, 2048, 21, 226, 114, 255),
    VTX(-43, 160, 8, 0, 2048, 142, 226, 21, 255),
    VTX(0, -11, 0, 523, 4020, 0, 137, 0, 255),
    VTX(42, 160, -8, 1024, 2048, 114, 227, 235, 255),
    VTX(8, 160, 43, 0, 2048, 21, 226, 114, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_0176D0[4] = {
    VTX(54, 160, -10, 0, 512, 0, 120, 0, 255),
    VTX(-10, 160, -54, 512, 512, 0, 120, 0, 255),
    VTX(-54, 160, 11, 512, -1, 0, 120, 0, 255),
    VTX(10, 160, 54, 0, -1, 0, 120, 0, 255),
}; 

static Vtx gameplay_dangeon_keepVtx_017710[22] = {
    VTX(-76, 21, -37, 1299, 1834, 169, 188, 210, 255),
    VTX(0, 21, -89, -193, 1834, 0, 185, 160, 255),
    VTX(0, -11, 0, 553, 2060, 11, 138, 240, 255),
    VTX(-70, 97, -34, 1311, 966, 163, 57, 207, 255),
    VTX(0, 97, -82, -205, 967, 0, 60, 153, 255),
    VTX(-70, 97, -34, 1321, 986, 163, 57, 207, 255),
    VTX(0, 160, 0, 496, -460, 0, 120, 0, 255),
    VTX(0, 97, -82, -206, 987, 0, 60, 153, 255),
    VTX(0, 21, 88, 1299, 1834, 0, 185, 96, 255),
    VTX(-76, 21, 37, -193, 1834, 169, 188, 46, 255),
    VTX(0, 97, 82, 1311, 966, 0, 60, 103, 255),
    VTX(-70, 97, 34, -205, 967, 163, 57, 49, 255),
    VTX(0, 97, 82, 1315, 912, 0, 60, 103, 255),
    VTX(0, 160, 0, 567, -288, 0, 120, 0, 255),
    VTX(-70, 97, 34, -206, 983, 163, 57, 49, 255),
    VTX(76, 21, -37, 1299, 1834, 87, 188, 210, 255),
    VTX(76, 21, 37, -193, 1834, 87, 188, 46, 255),
    VTX(70, 97, -34, 1311, 966, 93, 57, 207, 255),
    VTX(70, 97, 34, -205, 967, 93, 57, 49, 255),
    VTX(70, 97, -34, 1311, 966, 93, 57, 207, 255),
    VTX(0, 160, 0, 553, -378, 0, 120, 0, 255),
    VTX(70, 97, 34, -205, 967, 93, 57, 49, 255),
}; 

Gfx gPotDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0108A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_0174B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 2, 0),
    gsSP2Triangles(1, 0, 10, 0, 1, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 4, 0, 14, 4, 3, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&gameplay_dangeon_keepVtx_0174B0[31], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0118A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&gameplay_dangeon_keepVtx_0176D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_0108A0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&gameplay_dangeon_keepVtx_017710[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(3, 1, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 2, 0, 10, 11, 9, 0),
    gsSP2Triangles(10, 9, 8, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 2, 0, 16, 15, 17, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_dangeon_keepVtx_017A30[3] = {
    VTX(24, 54, -4, 501, -404, 242, 242, 242, 255),
    VTX(-52, -29, 2, -418, 514, 102, 102, 102, 255),
    VTX(28, -25, 2, 501, 514, 242, 242, 242, 255),
}; 

Gfx gPotFragmentDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gameplay_dangeon_keepTex_011AA0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_dangeon_keepVtx_017A30[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 


///////////////////////////////////////////////////////////////////////////////////////////////////////
// Append new stuff here
///////////////////////////////////////////////////////////////////////////////////////////////////////

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

static Vtx object_d_liftVtx_000040_Big[4] = {
    VTX(-600, -180, 600, 2048, 2048, 51, 51, 51, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, 180, -600, 0, 0, 255, 255, 255, 255),
    VTX(-600, -180, -600, 0, 2048, 76, 76, 76, 255),
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

static Vtx object_d_liftVtx_0000C0_Big[8] = {
    VTX(600, -180, 600, 0, 2048, 25, 25, 25, 255),
    VTX(600, 180, 600, 0, 0, 140, 140, 140, 255),
    VTX(-600, 180, 600, 2048, 0, 255, 255, 255, 255),
    VTX(-600, -180, 600, 2048, 2048, 51, 51, 51, 255),
    VTX(600, -180, -600, 2048, 2048, 51, 51, 51, 255),
    VTX(600, 180, -600, 2048, 0, 204, 204, 204, 255),
    VTX(-600, -180, -600, 0, 2048, 76, 76, 76, 255),
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

Gfx gDLiftBigDL[] = {
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
    gsSPVertex(&object_d_liftVtx_000040_Big[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_d_liftVtx_000080[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_d_liftVtx_0000C0_Big[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

CamData gDLiftCol_camDataList_000002D0[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gDLiftCol_polygonTypes_000002D8[] = {
   0x00000000, 0x000007C2,
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
#include "assets/objects/gameplay_dangeon_keep/object_d_liftTex_000400.i8.inc.c"
};

u64 object_d_liftTex_000800[] = {
#include "assets/objects/gameplay_dangeon_keep/object_d_liftTex_000800.i8.inc.c"
};

//////////////////////////////////////////////////////////////////////////////////////
// append new stuff here
//////////////////////////////////////////////////////////////////////////////////////

static Vtx deku_platformsVtx_002A30[30];
static Vtx deku_platformsVtx_002C10[28];
static Vtx deku_platformsVtx_002DD0[30];
static Vtx deku_platformsVtx_002FB0[30];
static Vtx deku_platformsVtx_003190[32];
static Vtx deku_platformsVtx_003390[31];
static Vtx deku_platformsVtx_003580[31];
static Vtx deku_platformsVtx_003770[32];
static Vtx deku_platformsVtx_003970[31];
static Vtx deku_platformsVtx_003B60[32];
static Vtx deku_platformsVtx_003D60[8];
static Vtx deku_platformsVtx_003DE0[30];
static Vtx deku_platformsVtx_003FC0[30];
static Vtx deku_platformsVtx_0041A0[30];
static Vtx deku_platformsVtx_004380[30];
static Vtx deku_platformsVtx_004560[31];
static Vtx deku_platformsVtx_004750[30];
static Vtx deku_platformsVtx_004930[30];
static Vtx deku_platformsVtx_004B10[30];
static Vtx deku_platformsVtx_004CF0[31];
static Vtx deku_platformsVtx_004EE0[9];

u64 deku_platformsTex_000000[] = {
#include "assets/objects/gameplay_dangeon_keep/deku_platformsTex_000000.ci8.inc.c"
};

u64 deku_platformsTex_000400[] = {
#include "assets/objects/gameplay_dangeon_keep/deku_platformsTex_000400.rgb5a1.inc.c"
};

u64 deku_platformsTex_000600[] = {
#include "assets/objects/gameplay_dangeon_keep/deku_platformsTex_000600.ci8.inc.c"
};

u64 deku_platformsTex_000A00[] = {
#include "assets/objects/gameplay_dangeon_keep/deku_platformsTex_000A00.rgb5a1.inc.c"
};

u64 deku_platformsTex_000C00[] = {
#include "assets/objects/gameplay_dangeon_keep/deku_platformsTex_000C00.rgb5a1.inc.c"
};

static Vtx deku_platformsVtx_002A30[30] = {
    VTX(85, 100, -271, 2609, 823, 237, 237, 237, 255),
    VTX(63, 100, -219, 3055, 1008, 237, 237, 237, 255),
    VTX(93, 100, -145, 3685, 746, 237, 237, 237, 255),
    VTX(160, 100, -302, 2347, 192, 237, 237, 237, 255),
    VTX(145, 100, -123, 3870, 301, 237, 237, 237, 255),
    VTX(211, 100, -280, 2532, -254, 237, 237, 237, 255),
    VTX(219, 100, -153, 3609, -330, 237, 237, 237, 255),
    VTX(241, 100, -205, 3163, -515, 237, 237, 237, 255),
    VTX(-49, 80, -282, 2370, 2030, 237, 237, 237, 255),
    VTX(-123, 80, -252, 2631, 2661, 237, 237, 237, 255),
    VTX(-146, 80, -200, 3077, 2846, 237, 237, 237, 255),
    VTX(-115, 80, -126, 3708, 2584, 237, 237, 237, 255),
    VTX(3, 80, -261, 2555, 1584, 237, 237, 237, 255),
    VTX(-63, 80, -104, 3892, 2139, 237, 237, 237, 255),
    VTX(11, 80, -133, 3631, 1508, 237, 237, 237, 255),
    VTX(33, 80, -186, 3185, 1323, 237, 237, 237, 255),
    VTX(-176, 60, -490, 608, 3129, 237, 237, 237, 255),
    VTX(-250, 60, -459, 870, 3760, 237, 237, 237, 255),
    VTX(-272, 60, -408, 1316, 3945, 237, 237, 237, 255),
    VTX(-242, 60, -333, 1946, 3684, 237, 237, 237, 255),
    VTX(-124, 60, -468, 793, 2683, 237, 237, 237, 255),
    VTX(-191, 60, -311, 2131, 3238, 237, 237, 237, 255),
    VTX(-116, 60, -341, 1870, 2607, 237, 237, 237, 255),
    VTX(-94, 60, -393, 1424, 2422, 237, 237, 237, 255),
    VTX(109, 140, 215, 6600, 648, 237, 237, 237, 255),
    VTX(35, 140, 245, 6861, 1278, 237, 237, 237, 255),
    VTX(13, 140, 298, 7307, 1463, 237, 237, 237, 255),
    VTX(42, 140, 371, 7938, 1202, 237, 237, 237, 255),
    VTX(161, 140, 237, 6785, 202, 237, 237, 237, 255),
    VTX(95, 140, 393, 8123, 756, 237, 237, 237, 255),
}; 

static Vtx deku_platformsVtx_002C10[28] = {
    VTX(161, 140, 237, 6785, 202, 237, 237, 237, 255),
    VTX(95, 140, 393, 8123, 756, 237, 237, 237, 255),
    VTX(168, 140, 364, 7861, 125, 237, 237, 237, 255),
    VTX(191, 140, 311, 7415, -60, 237, 237, 237, 255),
    VTX(244, 160, 478, 8677, -582, 237, 237, 237, 255),
    VTX(310, 160, 322, 7339, -1136, 237, 237, 237, 255),
    VTX(235, 160, 352, 7600, -506, 237, 237, 237, 255),
    VTX(213, 160, 404, 8046, -321, 237, 237, 237, 255),
    VTX(295, 160, 500, 8862, -1028, 237, 237, 237, 255),
    VTX(362, 160, 344, 7524, -1582, 237, 237, 237, 255),
    VTX(369, 160, 471, 8600, -1659, 237, 237, 237, 255),
    VTX(392, 160, 418, 8154, -1844, 237, 237, 237, 255),
    VTX(399, 140, 111, 6001, -1691, 237, 237, 237, 255),
    VTX(325, 140, 140, 6262, -1060, 237, 237, 237, 255),
    VTX(303, 140, 193, 6708, -875, 237, 237, 237, 255),
    VTX(333, 140, 266, 7339, -1136, 237, 237, 237, 255),
    VTX(451, 140, 133, 6186, -2136, 237, 237, 237, 255),
    VTX(385, 140, 288, 7524, -1582, 237, 237, 237, 255),
    VTX(459, 140, 259, 7262, -2213, 237, 237, 237, 255),
    VTX(482, 140, 207, 6816, -2398, 237, 237, 237, 255),
    VTX(227, 120, 81, 5131, -222, 237, 237, 237, 255),
    VTX(301, 120, 51, 4870, -853, 237, 237, 237, 255),
    VTX(323, 120, -1, 4424, -1037, 237, 237, 237, 255),
    VTX(294, 120, -75, 3793, -776, 237, 237, 237, 255),
    VTX(175, 120, 59, 4947, 224, 237, 237, 237, 255),
    VTX(241, 120, -97, 3609, -330, 237, 237, 237, 255),
    VTX(167, 120, -67, 3870, 301, 237, 237, 237, 255),
    VTX(146, 120, -15, 4316, 485, 237, 237, 237, 255),
}; 

static Vtx deku_platformsVtx_002DD0[30] = {
    VTX(-124, -20, -468, 1629, 0, 51, 51, 51, 255),
    VTX(-176, -100, -490, 2467, 1024, 51, 51, 51, 255),
    VTX(-176, -20, -490, 2467, 0, 51, 51, 51, 255),
    VTX(-250, -20, -459, 3677, 0, 221, 221, 221, 255),
    VTX(-272, -100, -408, 4515, 1024, 255, 255, 255, 255),
    VTX(-272, -20, -408, 4515, 0, 255, 255, 255, 255),
    VTX(-94, -100, -393, 419, 1024, 51, 51, 51, 255),
    VTX(-124, -100, -468, 1629, 1024, 51, 51, 51, 255),
    VTX(-250, -100, -459, 3677, 1024, 221, 221, 221, 255),
    VTX(-242, -100, -333, 5725, 1024, 255, 255, 255, 255),
    VTX(-242, -20, -333, 5725, 0, 255, 255, 255, 255),
    VTX(-191, -100, -311, 6563, 1024, 119, 119, 119, 255),
    VTX(-191, -20, -311, 6563, 0, 119, 119, 119, 255),
    VTX(-116, -100, -341, 7773, 1024, 51, 51, 51, 255),
    VTX(-116, -20, -341, 7773, 0, 51, 51, 51, 255),
    VTX(-94, -100, -393, 8611, 1024, 51, 51, 51, 255),
    VTX(-94, -20, -393, 8611, 0, 51, 51, 51, 255),
    VTX(3, 0, -261, 1629, 0, 51, 51, 51, 255),
    VTX(-49, -80, -282, 2467, 1024, 51, 51, 51, 255),
    VTX(-49, 0, -282, 2467, 0, 51, 51, 51, 255),
    VTX(-123, 0, -252, 3677, 0, 221, 221, 221, 255),
    VTX(-146, -80, -200, 4515, 1024, 255, 255, 255, 255),
    VTX(-146, 0, -200, 4515, 0, 255, 255, 255, 255),
    VTX(33, -80, -186, 419, 1024, 51, 51, 51, 255),
    VTX(3, -80, -261, 1629, 1024, 51, 51, 51, 255),
    VTX(-123, -80, -252, 3677, 1024, 221, 221, 221, 255),
    VTX(-115, -80, -126, 5725, 1024, 255, 255, 255, 255),
    VTX(-115, 0, -126, 5725, 0, 255, 255, 255, 255),
    VTX(-63, -80, -104, 6563, 1024, 119, 119, 119, 255),
    VTX(-63, 0, -104, 6563, 0, 119, 119, 119, 255),
}; 

static Vtx deku_platformsVtx_002FB0[30] = {
    VTX(-63, 0, -104, 6563, 0, 119, 119, 119, 255),
    VTX(11, -80, -133, 7773, 1024, 51, 51, 51, 255),
    VTX(11, 0, -133, 7773, 0, 51, 51, 51, 255),
    VTX(33, -80, -186, 8611, 1024, 51, 51, 51, 255),
    VTX(33, 0, -186, 8611, 0, 51, 51, 51, 255),
    VTX(211, 20, -280, 1629, 0, 51, 51, 51, 255),
    VTX(160, -60, -302, 2467, 1024, 51, 51, 51, 255),
    VTX(160, 20, -302, 2467, 0, 51, 51, 51, 255),
    VTX(85, 20, -271, 3677, 0, 221, 221, 221, 255),
    VTX(63, -60, -219, 4515, 1024, 255, 255, 255, 255),
    VTX(63, 20, -219, 4515, 0, 255, 255, 255, 255),
    VTX(241, -60, -205, 419, 1024, 51, 51, 51, 255),
    VTX(211, -60, -280, 1629, 1024, 51, 51, 51, 255),
    VTX(85, -60, -271, 3677, 1024, 221, 221, 221, 255),
    VTX(93, -60, -145, 5725, 1024, 255, 255, 255, 255),
    VTX(93, 20, -145, 5725, 0, 255, 255, 255, 255),
    VTX(145, -60, -123, 6563, 1024, 119, 119, 119, 255),
    VTX(145, 20, -123, 6563, 0, 119, 119, 119, 255),
    VTX(219, -60, -153, 7773, 1024, 51, 51, 51, 255),
    VTX(219, 20, -153, 7773, 0, 51, 51, 51, 255),
    VTX(241, -60, -205, 8611, 1024, 51, 51, 51, 255),
    VTX(241, 20, -205, 8611, 0, 51, 51, 51, 255),
    VTX(294, 40, -75, 1629, 0, 51, 51, 51, 255),
    VTX(241, -40, -97, 2467, 1024, 51, 51, 51, 255),
    VTX(241, 40, -97, 2467, 0, 51, 51, 51, 255),
    VTX(167, 40, -67, 3677, 0, 221, 221, 221, 255),
    VTX(146, -40, -15, 4515, 1024, 255, 255, 255, 255),
    VTX(146, 40, -15, 4515, 0, 255, 255, 255, 255),
    VTX(323, -40, -1, 419, 1024, 51, 51, 51, 255),
    VTX(294, -40, -75, 1629, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003190[32] = {
    VTX(167, 40, -67, 3677, 0, 221, 221, 221, 255),
    VTX(241, -40, -97, 2467, 1024, 51, 51, 51, 255),
    VTX(167, -40, -67, 3677, 1024, 221, 221, 221, 255),
    VTX(146, 40, -15, 4515, 0, 255, 255, 255, 255),
    VTX(175, -40, 59, 5725, 1024, 255, 255, 255, 255),
    VTX(175, 40, 59, 5725, 0, 255, 255, 255, 255),
    VTX(227, -40, 81, 6563, 1024, 119, 119, 119, 255),
    VTX(227, 40, 81, 6563, 0, 119, 119, 119, 255),
    VTX(301, -40, 51, 7773, 1024, 51, 51, 51, 255),
    VTX(301, 40, 51, 7773, 0, 51, 51, 51, 255),
    VTX(323, -40, -1, 8611, 1024, 51, 51, 51, 255),
    VTX(323, 40, -1, 8611, 0, 51, 51, 51, 255),
    VTX(451, 60, 133, 1629, 0, 51, 51, 51, 255),
    VTX(399, -20, 111, 2467, 1024, 51, 51, 51, 255),
    VTX(399, 60, 111, 2467, 0, 51, 51, 51, 255),
    VTX(325, 60, 140, 3677, 0, 221, 221, 221, 255),
    VTX(303, -20, 193, 4515, 1024, 255, 255, 255, 255),
    VTX(303, 60, 193, 4515, 0, 255, 255, 255, 255),
    VTX(482, -20, 207, 419, 1024, 51, 51, 51, 255),
    VTX(451, -20, 133, 1629, 1024, 51, 51, 51, 255),
    VTX(325, -20, 140, 3677, 1024, 221, 221, 221, 255),
    VTX(333, -20, 266, 5725, 1024, 255, 255, 255, 255),
    VTX(333, 60, 266, 5725, 0, 255, 255, 255, 255),
    VTX(385, -20, 288, 6563, 1024, 119, 119, 119, 255),
    VTX(385, 60, 288, 6563, 0, 119, 119, 119, 255),
    VTX(459, -20, 259, 7773, 1024, 51, 51, 51, 255),
    VTX(459, 60, 259, 7773, 0, 51, 51, 51, 255),
    VTX(482, -20, 207, 8611, 1024, 51, 51, 51, 255),
    VTX(482, 60, 207, 8611, 0, 51, 51, 51, 255),
    VTX(161, 60, 237, 1629, 0, 51, 51, 51, 255),
    VTX(109, -20, 215, 2467, 1024, 51, 51, 51, 255),
    VTX(109, 60, 215, 2467, 0, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003390[31] = {
    VTX(35, 60, 245, 3677, 0, 221, 221, 221, 255),
    VTX(13, -20, 298, 4515, 1024, 255, 255, 255, 255),
    VTX(13, 60, 298, 4515, 0, 255, 255, 255, 255),
    VTX(161, 60, 237, 1629, 0, 51, 51, 51, 255),
    VTX(191, -20, 311, 419, 1024, 51, 51, 51, 255),
    VTX(161, -20, 237, 1629, 1024, 51, 51, 51, 255),
    VTX(109, -20, 215, 2467, 1024, 51, 51, 51, 255),
    VTX(35, -20, 245, 3677, 1024, 221, 221, 221, 255),
    VTX(42, -20, 371, 5725, 1024, 255, 255, 255, 255),
    VTX(42, 60, 371, 5725, 0, 255, 255, 255, 255),
    VTX(95, -20, 393, 6563, 1024, 119, 119, 119, 255),
    VTX(95, 60, 393, 6563, 0, 119, 119, 119, 255),
    VTX(168, -20, 364, 7773, 1024, 51, 51, 51, 255),
    VTX(168, 60, 364, 7773, 0, 51, 51, 51, 255),
    VTX(191, -20, 311, 8611, 1024, 51, 51, 51, 255),
    VTX(191, 60, 311, 8611, 0, 51, 51, 51, 255),
    VTX(369, 80, 471, 7773, 0, 51, 51, 51, 255),
    VTX(392, 0, 418, 8611, 1024, 51, 51, 51, 255),
    VTX(392, 80, 418, 8611, 0, 51, 51, 51, 255),
    VTX(295, 80, 500, 6563, 0, 119, 119, 119, 255),
    VTX(369, 0, 471, 7773, 1024, 51, 51, 51, 255),
    VTX(244, 80, 478, 5725, 0, 255, 255, 255, 255),
    VTX(295, 0, 500, 6563, 1024, 119, 119, 119, 255),
    VTX(213, 80, 404, 4515, 0, 255, 255, 255, 255),
    VTX(244, 0, 478, 5725, 1024, 255, 255, 255, 255),
    VTX(235, 80, 352, 3677, 0, 221, 221, 221, 255),
    VTX(310, 0, 322, 2467, 1024, 51, 51, 51, 255),
    VTX(235, 0, 352, 3677, 1024, 221, 221, 221, 255),
    VTX(361, 80, 344, 1629, 0, 51, 51, 51, 255),
    VTX(392, 0, 418, 419, 1024, 51, 51, 51, 255),
    VTX(361, 0, 344, 1629, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003580[31] = {
    VTX(235, 80, 352, 3677, 0, 221, 221, 221, 255),
    VTX(213, 0, 404, 4515, 1024, 255, 255, 255, 255),
    VTX(213, 80, 404, 4515, 0, 255, 255, 255, 255),
    VTX(361, 80, 344, 1629, 0, 51, 51, 51, 255),
    VTX(310, 0, 322, 2467, 1024, 51, 51, 51, 255),
    VTX(310, 80, 322, 2467, 0, 51, 51, 51, 255),
    VTX(-124, -20, -468, 1629, 0, 51, 51, 51, 255),
    VTX(-124, -100, -468, 1629, 1024, 51, 51, 51, 255),
    VTX(-176, -100, -490, 2467, 1024, 51, 51, 51, 255),
    VTX(-250, -20, -459, 3677, 0, 221, 221, 221, 255),
    VTX(-250, -100, -459, 3677, 1024, 221, 221, 221, 255),
    VTX(-272, -100, -408, 4515, 1024, 255, 255, 255, 255),
    VTX(-94, -20, -393, 419, 0, 51, 51, 51, 255),
    VTX(-94, -100, -393, 419, 1024, 51, 51, 51, 255),
    VTX(-176, -20, -490, 2467, 0, 51, 51, 51, 255),
    VTX(-272, -20, -408, 4515, 0, 255, 255, 255, 255),
    VTX(-242, -100, -333, 5725, 1024, 255, 255, 255, 255),
    VTX(-242, -20, -333, 5725, 0, 255, 255, 255, 255),
    VTX(-191, -100, -311, 6563, 1024, 119, 119, 119, 255),
    VTX(-191, -20, -311, 6563, 0, 119, 119, 119, 255),
    VTX(-116, -100, -341, 7773, 1024, 51, 51, 51, 255),
    VTX(-116, -20, -341, 7773, 0, 51, 51, 51, 255),
    VTX(-94, -100, -393, 8611, 1024, 51, 51, 51, 255),
    VTX(3, 0, -261, 1629, 0, 51, 51, 51, 255),
    VTX(3, -80, -261, 1629, 1024, 51, 51, 51, 255),
    VTX(-49, -80, -282, 2467, 1024, 51, 51, 51, 255),
    VTX(-123, 0, -252, 3677, 0, 221, 221, 221, 255),
    VTX(-123, -80, -252, 3677, 1024, 221, 221, 221, 255),
    VTX(-146, -80, -200, 4515, 1024, 255, 255, 255, 255),
    VTX(33, 0, -186, 419, 0, 51, 51, 51, 255),
    VTX(33, -80, -186, 419, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003770[32] = {
    VTX(-123, 0, -252, 3677, 0, 221, 221, 221, 255),
    VTX(-49, 0, -282, 2467, 0, 51, 51, 51, 255),
    VTX(-49, -80, -282, 2467, 1024, 51, 51, 51, 255),
    VTX(-146, 0, -200, 4515, 0, 255, 255, 255, 255),
    VTX(-146, -80, -200, 4515, 1024, 255, 255, 255, 255),
    VTX(-115, -80, -126, 5725, 1024, 255, 255, 255, 255),
    VTX(-115, 0, -126, 5725, 0, 255, 255, 255, 255),
    VTX(-63, -80, -104, 6563, 1024, 119, 119, 119, 255),
    VTX(-63, 0, -104, 6563, 0, 119, 119, 119, 255),
    VTX(11, -80, -133, 7773, 1024, 51, 51, 51, 255),
    VTX(11, 0, -133, 7773, 0, 51, 51, 51, 255),
    VTX(33, -80, -186, 8611, 1024, 51, 51, 51, 255),
    VTX(211, 20, -280, 1629, 0, 51, 51, 51, 255),
    VTX(211, -60, -280, 1629, 1024, 51, 51, 51, 255),
    VTX(160, -60, -302, 2467, 1024, 51, 51, 51, 255),
    VTX(85, 20, -271, 3677, 0, 221, 221, 221, 255),
    VTX(85, -60, -271, 3677, 1024, 221, 221, 221, 255),
    VTX(63, -60, -219, 4515, 1024, 255, 255, 255, 255),
    VTX(241, 20, -205, 419, 0, 51, 51, 51, 255),
    VTX(241, -60, -205, 419, 1024, 51, 51, 51, 255),
    VTX(160, 20, -302, 2467, 0, 51, 51, 51, 255),
    VTX(63, 20, -219, 4515, 0, 255, 255, 255, 255),
    VTX(93, -60, -145, 5725, 1024, 255, 255, 255, 255),
    VTX(93, 20, -145, 5725, 0, 255, 255, 255, 255),
    VTX(145, -60, -123, 6563, 1024, 119, 119, 119, 255),
    VTX(145, 20, -123, 6563, 0, 119, 119, 119, 255),
    VTX(219, -60, -153, 7773, 1024, 51, 51, 51, 255),
    VTX(219, 20, -153, 7773, 0, 51, 51, 51, 255),
    VTX(241, -60, -205, 8611, 1024, 51, 51, 51, 255),
    VTX(294, 40, -75, 1629, 0, 51, 51, 51, 255),
    VTX(294, -40, -75, 1629, 1024, 51, 51, 51, 255),
    VTX(241, -40, -97, 2467, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003970[31] = {
    VTX(167, 40, -67, 3677, 0, 221, 221, 221, 255),
    VTX(167, -40, -67, 3677, 1024, 221, 221, 221, 255),
    VTX(146, -40, -15, 4515, 1024, 255, 255, 255, 255),
    VTX(294, 40, -75, 1629, 0, 51, 51, 51, 255),
    VTX(323, 40, -1, 419, 0, 51, 51, 51, 255),
    VTX(323, -40, -1, 419, 1024, 51, 51, 51, 255),
    VTX(241, 40, -97, 2467, 0, 51, 51, 51, 255),
    VTX(241, -40, -97, 2467, 1024, 51, 51, 51, 255),
    VTX(146, 40, -15, 4515, 0, 255, 255, 255, 255),
    VTX(175, -40, 59, 5725, 1024, 255, 255, 255, 255),
    VTX(175, 40, 59, 5725, 0, 255, 255, 255, 255),
    VTX(227, -40, 81, 6563, 1024, 119, 119, 119, 255),
    VTX(227, 40, 81, 6563, 0, 119, 119, 119, 255),
    VTX(301, -40, 51, 7773, 1024, 51, 51, 51, 255),
    VTX(301, 40, 51, 7773, 0, 51, 51, 51, 255),
    VTX(323, -40, -1, 8611, 1024, 51, 51, 51, 255),
    VTX(451, 60, 133, 1629, 0, 51, 51, 51, 255),
    VTX(451, -20, 133, 1629, 1024, 51, 51, 51, 255),
    VTX(399, -20, 111, 2467, 1024, 51, 51, 51, 255),
    VTX(325, 60, 140, 3677, 0, 221, 221, 221, 255),
    VTX(325, -20, 140, 3677, 1024, 221, 221, 221, 255),
    VTX(303, -20, 193, 4515, 1024, 255, 255, 255, 255),
    VTX(482, 60, 207, 419, 0, 51, 51, 51, 255),
    VTX(482, -20, 207, 419, 1024, 51, 51, 51, 255),
    VTX(399, 60, 111, 2467, 0, 51, 51, 51, 255),
    VTX(303, 60, 193, 4515, 0, 255, 255, 255, 255),
    VTX(333, -20, 266, 5725, 1024, 255, 255, 255, 255),
    VTX(333, 60, 266, 5725, 0, 255, 255, 255, 255),
    VTX(385, -20, 288, 6563, 1024, 119, 119, 119, 255),
    VTX(385, 60, 288, 6563, 0, 119, 119, 119, 255),
    VTX(459, -20, 259, 7773, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003B60[32] = {
    VTX(459, 60, 259, 7773, 0, 51, 51, 51, 255),
    VTX(459, -20, 259, 7773, 1024, 51, 51, 51, 255),
    VTX(482, -20, 207, 8611, 1024, 51, 51, 51, 255),
    VTX(161, 60, 237, 1629, 0, 51, 51, 51, 255),
    VTX(161, -20, 237, 1629, 1024, 51, 51, 51, 255),
    VTX(109, -20, 215, 2467, 1024, 51, 51, 51, 255),
    VTX(35, 60, 245, 3677, 0, 221, 221, 221, 255),
    VTX(35, -20, 245, 3677, 1024, 221, 221, 221, 255),
    VTX(13, -20, 298, 4515, 1024, 255, 255, 255, 255),
    VTX(191, 60, 311, 419, 0, 51, 51, 51, 255),
    VTX(191, -20, 311, 419, 1024, 51, 51, 51, 255),
    VTX(109, 60, 215, 2467, 0, 51, 51, 51, 255),
    VTX(13, 60, 298, 4515, 0, 255, 255, 255, 255),
    VTX(42, -20, 371, 5725, 1024, 255, 255, 255, 255),
    VTX(42, 60, 371, 5725, 0, 255, 255, 255, 255),
    VTX(95, -20, 393, 6563, 1024, 119, 119, 119, 255),
    VTX(95, 60, 393, 6563, 0, 119, 119, 119, 255),
    VTX(168, -20, 364, 7773, 1024, 51, 51, 51, 255),
    VTX(168, 60, 364, 7773, 0, 51, 51, 51, 255),
    VTX(191, -20, 311, 8611, 1024, 51, 51, 51, 255),
    VTX(369, 80, 471, 7773, 0, 51, 51, 51, 255),
    VTX(369, 0, 471, 7773, 1024, 51, 51, 51, 255),
    VTX(392, 0, 418, 8611, 1024, 51, 51, 51, 255),
    VTX(295, 80, 500, 6563, 0, 119, 119, 119, 255),
    VTX(295, 0, 500, 6563, 1024, 119, 119, 119, 255),
    VTX(244, 80, 478, 5725, 0, 255, 255, 255, 255),
    VTX(244, 0, 478, 5725, 1024, 255, 255, 255, 255),
    VTX(213, 80, 404, 4515, 0, 255, 255, 255, 255),
    VTX(213, 0, 404, 4515, 1024, 255, 255, 255, 255),
    VTX(235, 80, 352, 3677, 0, 221, 221, 221, 255),
    VTX(310, 80, 322, 2467, 0, 51, 51, 51, 255),
    VTX(310, 0, 322, 2467, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003D60[8] = {
    VTX(361, 80, 344, 1629, 0, 51, 51, 51, 255),
    VTX(392, 80, 418, 419, 0, 51, 51, 51, 255),
    VTX(392, 0, 418, 419, 1024, 51, 51, 51, 255),
    VTX(235, 80, 352, 3677, 0, 221, 221, 221, 255),
    VTX(235, 0, 352, 3677, 1024, 221, 221, 221, 255),
    VTX(213, 0, 404, 4515, 1024, 255, 255, 255, 255),
    VTX(361, 0, 344, 1629, 1024, 51, 51, 51, 255),
    VTX(310, 0, 322, 2467, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003DE0[30] = {
    VTX(-49, 80, -282, 2467, 0, 51, 51, 51, 255),
    VTX(-123, 0, -252, 3677, 1024, 221, 221, 221, 255),
    VTX(-123, 80, -252, 3677, 0, 221, 221, 221, 255),
    VTX(-242, 60, -333, 5725, 0, 255, 255, 255, 255),
    VTX(-191, -20, -311, 6563, 1024, 119, 119, 119, 255),
    VTX(-191, 60, -311, 6563, 0, 119, 119, 119, 255),
    VTX(-124, 60, -468, 1629, 0, 51, 51, 51, 255),
    VTX(-176, -20, -490, 2467, 1024, 51, 51, 51, 255),
    VTX(-176, 60, -490, 2467, 0, 51, 51, 51, 255),
    VTX(-116, 60, -341, 7773, 0, 51, 51, 51, 255),
    VTX(-94, -20, -393, 8611, 1024, 51, 51, 51, 255),
    VTX(-94, 60, -393, 8611, 0, 51, 51, 51, 255),
    VTX(-272, 60, -408, 4515, 0, 255, 255, 255, 255),
    VTX(-242, -20, -333, 5725, 1024, 255, 255, 255, 255),
    VTX(-94, 60, -393, 419, 0, 51, 51, 51, 255),
    VTX(-124, -20, -468, 1629, 1024, 51, 51, 51, 255),
    VTX(-250, 60, -459, 3677, 0, 221, 221, 221, 255),
    VTX(-272, -20, -408, 4515, 1024, 255, 255, 255, 255),
    VTX(-116, -20, -341, 7773, 1024, 51, 51, 51, 255),
    VTX(160, 100, -302, 2467, 0, 51, 51, 51, 255),
    VTX(85, 20, -271, 3677, 1024, 221, 221, 221, 255),
    VTX(85, 100, -271, 3677, 0, 221, 221, 221, 255),
    VTX(-115, 80, -126, 5725, 0, 255, 255, 255, 255),
    VTX(-63, 0, -104, 6563, 1024, 119, 119, 119, 255),
    VTX(-63, 80, -104, 6563, 0, 119, 119, 119, 255),
    VTX(3, 80, -261, 1629, 0, 51, 51, 51, 255),
    VTX(-49, 0, -282, 2467, 1024, 51, 51, 51, 255),
    VTX(11, 80, -133, 7773, 0, 51, 51, 51, 255),
    VTX(33, 0, -186, 8611, 1024, 51, 51, 51, 255),
    VTX(33, 80, -186, 8611, 0, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_003FC0[30] = {
    VTX(-115, 80, -126, 5725, 0, 255, 255, 255, 255),
    VTX(-146, 0, -200, 4515, 1024, 255, 255, 255, 255),
    VTX(-115, 0, -126, 5725, 1024, 255, 255, 255, 255),
    VTX(33, 80, -186, 419, 0, 51, 51, 51, 255),
    VTX(3, 0, -261, 1629, 1024, 51, 51, 51, 255),
    VTX(3, 80, -261, 1629, 0, 51, 51, 51, 255),
    VTX(-146, 80, -200, 4515, 0, 255, 255, 255, 255),
    VTX(-123, 0, -252, 3677, 1024, 221, 221, 221, 255),
    VTX(-63, 80, -104, 6563, 0, 119, 119, 119, 255),
    VTX(11, 0, -133, 7773, 1024, 51, 51, 51, 255),
    VTX(11, 80, -133, 7773, 0, 51, 51, 51, 255),
    VTX(241, 120, -97, 2467, 0, 51, 51, 51, 255),
    VTX(167, 40, -67, 3677, 1024, 221, 221, 221, 255),
    VTX(167, 120, -67, 3677, 0, 221, 221, 221, 255),
    VTX(93, 100, -145, 5725, 0, 255, 255, 255, 255),
    VTX(145, 20, -123, 6563, 1024, 119, 119, 119, 255),
    VTX(145, 100, -123, 6563, 0, 119, 119, 119, 255),
    VTX(211, 100, -280, 1629, 0, 51, 51, 51, 255),
    VTX(160, 20, -302, 2467, 1024, 51, 51, 51, 255),
    VTX(160, 100, -302, 2467, 0, 51, 51, 51, 255),
    VTX(219, 100, -153, 7773, 0, 51, 51, 51, 255),
    VTX(241, 20, -205, 8611, 1024, 51, 51, 51, 255),
    VTX(241, 100, -205, 8611, 0, 51, 51, 51, 255),
    VTX(63, 100, -219, 4515, 0, 255, 255, 255, 255),
    VTX(93, 20, -145, 5725, 1024, 255, 255, 255, 255),
    VTX(241, 100, -205, 419, 0, 51, 51, 51, 255),
    VTX(211, 20, -280, 1629, 1024, 51, 51, 51, 255),
    VTX(85, 100, -271, 3677, 0, 221, 221, 221, 255),
    VTX(63, 20, -219, 4515, 1024, 255, 255, 255, 255),
    VTX(219, 20, -153, 7773, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_0041A0[30] = {
    VTX(399, 140, 111, 2467, 0, 51, 51, 51, 255),
    VTX(325, 60, 140, 3677, 1024, 221, 221, 221, 255),
    VTX(325, 140, 140, 3677, 0, 221, 221, 221, 255),
    VTX(175, 120, 59, 5725, 0, 255, 255, 255, 255),
    VTX(227, 40, 81, 6563, 1024, 119, 119, 119, 255),
    VTX(227, 120, 81, 6563, 0, 119, 119, 119, 255),
    VTX(294, 120, -75, 1629, 0, 51, 51, 51, 255),
    VTX(241, 40, -97, 2467, 1024, 51, 51, 51, 255),
    VTX(241, 120, -97, 2467, 0, 51, 51, 51, 255),
    VTX(301, 120, 51, 7773, 0, 51, 51, 51, 255),
    VTX(323, 40, -1, 8611, 1024, 51, 51, 51, 255),
    VTX(323, 120, -1, 8611, 0, 51, 51, 51, 255),
    VTX(146, 40, -15, 4515, 1024, 255, 255, 255, 255),
    VTX(175, 40, 59, 5725, 1024, 255, 255, 255, 255),
    VTX(323, 120, -1, 419, 0, 51, 51, 51, 255),
    VTX(294, 40, -75, 1629, 1024, 51, 51, 51, 255),
    VTX(167, 120, -67, 3677, 0, 221, 221, 221, 255),
    VTX(146, 120, -15, 4515, 0, 255, 255, 255, 255),
    VTX(301, 40, 51, 7773, 1024, 51, 51, 51, 255),
    VTX(109, 140, 215, 2467, 0, 51, 51, 51, 255),
    VTX(35, 60, 245, 3677, 1024, 221, 221, 221, 255),
    VTX(35, 140, 245, 3677, 0, 221, 221, 221, 255),
    VTX(333, 140, 266, 5725, 0, 255, 255, 255, 255),
    VTX(385, 60, 288, 6563, 1024, 119, 119, 119, 255),
    VTX(385, 140, 288, 6563, 0, 119, 119, 119, 255),
    VTX(451, 60, 133, 1629, 1024, 51, 51, 51, 255),
    VTX(399, 60, 111, 2467, 1024, 51, 51, 51, 255),
    VTX(459, 140, 259, 7773, 0, 51, 51, 51, 255),
    VTX(482, 60, 207, 8611, 1024, 51, 51, 51, 255),
    VTX(482, 140, 207, 8611, 0, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_004380[30] = {
    VTX(303, 140, 193, 4515, 0, 255, 255, 255, 255),
    VTX(333, 60, 266, 5725, 1024, 255, 255, 255, 255),
    VTX(333, 140, 266, 5725, 0, 255, 255, 255, 255),
    VTX(482, 140, 207, 419, 0, 51, 51, 51, 255),
    VTX(451, 60, 133, 1629, 1024, 51, 51, 51, 255),
    VTX(451, 140, 133, 1629, 0, 51, 51, 51, 255),
    VTX(325, 140, 140, 3677, 0, 221, 221, 221, 255),
    VTX(303, 60, 193, 4515, 1024, 255, 255, 255, 255),
    VTX(385, 140, 288, 6563, 0, 119, 119, 119, 255),
    VTX(459, 60, 259, 7773, 1024, 51, 51, 51, 255),
    VTX(459, 140, 259, 7773, 0, 51, 51, 51, 255),
    VTX(295, 160, 500, 6563, 0, 119, 119, 119, 255),
    VTX(369, 80, 471, 7773, 1024, 51, 51, 51, 255),
    VTX(369, 160, 471, 7773, 0, 51, 51, 51, 255),
    VTX(42, 140, 371, 5725, 0, 255, 255, 255, 255),
    VTX(95, 60, 393, 6563, 1024, 119, 119, 119, 255),
    VTX(95, 140, 393, 6563, 0, 119, 119, 119, 255),
    VTX(109, 140, 215, 2467, 0, 51, 51, 51, 255),
    VTX(161, 60, 237, 1629, 1024, 51, 51, 51, 255),
    VTX(109, 60, 215, 2467, 1024, 51, 51, 51, 255),
    VTX(168, 140, 364, 7773, 0, 51, 51, 51, 255),
    VTX(191, 60, 311, 8611, 1024, 51, 51, 51, 255),
    VTX(191, 140, 311, 8611, 0, 51, 51, 51, 255),
    VTX(13, 140, 298, 4515, 0, 255, 255, 255, 255),
    VTX(42, 60, 371, 5725, 1024, 255, 255, 255, 255),
    VTX(191, 140, 311, 419, 0, 51, 51, 51, 255),
    VTX(161, 140, 237, 1629, 0, 51, 51, 51, 255),
    VTX(35, 140, 245, 3677, 0, 221, 221, 221, 255),
    VTX(13, 60, 298, 4515, 1024, 255, 255, 255, 255),
    VTX(168, 60, 364, 7773, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_004560[31] = {
    VTX(213, 160, 404, 4515, 0, 255, 255, 255, 255),
    VTX(235, 80, 352, 3677, 1024, 221, 221, 221, 255),
    VTX(213, 80, 404, 4515, 1024, 255, 255, 255, 255),
    VTX(392, 160, 418, 419, 0, 51, 51, 51, 255),
    VTX(361, 80, 344, 1629, 1024, 51, 51, 51, 255),
    VTX(362, 160, 344, 1629, 0, 51, 51, 51, 255),
    VTX(244, 80, 478, 5725, 1024, 255, 255, 255, 255),
    VTX(244, 160, 478, 5725, 0, 255, 255, 255, 255),
    VTX(369, 160, 471, 7773, 0, 51, 51, 51, 255),
    VTX(392, 80, 418, 8611, 1024, 51, 51, 51, 255),
    VTX(392, 160, 418, 8611, 0, 51, 51, 51, 255),
    VTX(310, 160, 322, 2467, 0, 51, 51, 51, 255),
    VTX(310, 80, 322, 2467, 1024, 51, 51, 51, 255),
    VTX(295, 80, 500, 6563, 1024, 119, 119, 119, 255),
    VTX(295, 160, 500, 6563, 0, 119, 119, 119, 255),
    VTX(235, 160, 352, 3677, 0, 221, 221, 221, 255),
    VTX(-176, 60, -490, 2467, 0, 51, 51, 51, 255),
    VTX(-250, -20, -459, 3677, 1024, 221, 221, 221, 255),
    VTX(-250, 60, -459, 3677, 0, 221, 221, 221, 255),
    VTX(-49, 80, -282, 2467, 0, 51, 51, 51, 255),
    VTX(-49, 0, -282, 2467, 1024, 51, 51, 51, 255),
    VTX(-123, 0, -252, 3677, 1024, 221, 221, 221, 255),
    VTX(-242, 60, -333, 5725, 0, 255, 255, 255, 255),
    VTX(-242, -20, -333, 5725, 1024, 255, 255, 255, 255),
    VTX(-191, -20, -311, 6563, 1024, 119, 119, 119, 255),
    VTX(-124, 60, -468, 1629, 0, 51, 51, 51, 255),
    VTX(-124, -20, -468, 1629, 1024, 51, 51, 51, 255),
    VTX(-176, -20, -490, 2467, 1024, 51, 51, 51, 255),
    VTX(-116, 60, -341, 7773, 0, 51, 51, 51, 255),
    VTX(-116, -20, -341, 7773, 1024, 51, 51, 51, 255),
    VTX(-94, -20, -393, 8611, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_004750[30] = {
    VTX(-272, 60, -408, 4515, 0, 255, 255, 255, 255),
    VTX(-272, -20, -408, 4515, 1024, 255, 255, 255, 255),
    VTX(-242, -20, -333, 5725, 1024, 255, 255, 255, 255),
    VTX(-94, 60, -393, 419, 0, 51, 51, 51, 255),
    VTX(-94, -20, -393, 419, 1024, 51, 51, 51, 255),
    VTX(-124, -20, -468, 1629, 1024, 51, 51, 51, 255),
    VTX(-250, 60, -459, 3677, 0, 221, 221, 221, 255),
    VTX(-250, -20, -459, 3677, 1024, 221, 221, 221, 255),
    VTX(-191, 60, -311, 6563, 0, 119, 119, 119, 255),
    VTX(-191, -20, -311, 6563, 1024, 119, 119, 119, 255),
    VTX(-116, -20, -341, 7773, 1024, 51, 51, 51, 255),
    VTX(160, 100, -302, 2467, 0, 51, 51, 51, 255),
    VTX(160, 20, -302, 2467, 1024, 51, 51, 51, 255),
    VTX(85, 20, -271, 3677, 1024, 221, 221, 221, 255),
    VTX(-115, 80, -126, 5725, 0, 255, 255, 255, 255),
    VTX(-115, 0, -126, 5725, 1024, 255, 255, 255, 255),
    VTX(-63, 0, -104, 6563, 1024, 119, 119, 119, 255),
    VTX(3, 80, -261, 1629, 0, 51, 51, 51, 255),
    VTX(3, 0, -261, 1629, 1024, 51, 51, 51, 255),
    VTX(-49, 0, -282, 2467, 1024, 51, 51, 51, 255),
    VTX(11, 80, -133, 7773, 0, 51, 51, 51, 255),
    VTX(11, 0, -133, 7773, 1024, 51, 51, 51, 255),
    VTX(33, 0, -186, 8611, 1024, 51, 51, 51, 255),
    VTX(-146, 80, -200, 4515, 0, 255, 255, 255, 255),
    VTX(-146, 0, -200, 4515, 1024, 255, 255, 255, 255),
    VTX(33, 80, -186, 419, 0, 51, 51, 51, 255),
    VTX(33, 0, -186, 419, 1024, 51, 51, 51, 255),
    VTX(-123, 80, -252, 3677, 0, 221, 221, 221, 255),
    VTX(-123, 0, -252, 3677, 1024, 221, 221, 221, 255),
    VTX(-63, 80, -104, 6563, 0, 119, 119, 119, 255),
}; 

static Vtx deku_platformsVtx_004930[30] = {
    VTX(241, 120, -97, 2467, 0, 51, 51, 51, 255),
    VTX(241, 40, -97, 2467, 1024, 51, 51, 51, 255),
    VTX(167, 40, -67, 3677, 1024, 221, 221, 221, 255),
    VTX(93, 100, -145, 5725, 0, 255, 255, 255, 255),
    VTX(93, 20, -145, 5725, 1024, 255, 255, 255, 255),
    VTX(145, 20, -123, 6563, 1024, 119, 119, 119, 255),
    VTX(211, 100, -280, 1629, 0, 51, 51, 51, 255),
    VTX(211, 20, -280, 1629, 1024, 51, 51, 51, 255),
    VTX(160, 20, -302, 2467, 1024, 51, 51, 51, 255),
    VTX(219, 100, -153, 7773, 0, 51, 51, 51, 255),
    VTX(219, 20, -153, 7773, 1024, 51, 51, 51, 255),
    VTX(241, 20, -205, 8611, 1024, 51, 51, 51, 255),
    VTX(63, 100, -219, 4515, 0, 255, 255, 255, 255),
    VTX(63, 20, -219, 4515, 1024, 255, 255, 255, 255),
    VTX(241, 100, -205, 419, 0, 51, 51, 51, 255),
    VTX(241, 20, -205, 419, 1024, 51, 51, 51, 255),
    VTX(85, 100, -271, 3677, 0, 221, 221, 221, 255),
    VTX(85, 20, -271, 3677, 1024, 221, 221, 221, 255),
    VTX(145, 100, -123, 6563, 0, 119, 119, 119, 255),
    VTX(399, 140, 111, 2467, 0, 51, 51, 51, 255),
    VTX(399, 60, 111, 2467, 1024, 51, 51, 51, 255),
    VTX(325, 60, 140, 3677, 1024, 221, 221, 221, 255),
    VTX(175, 120, 59, 5725, 0, 255, 255, 255, 255),
    VTX(175, 40, 59, 5725, 1024, 255, 255, 255, 255),
    VTX(227, 40, 81, 6563, 1024, 119, 119, 119, 255),
    VTX(294, 120, -75, 1629, 0, 51, 51, 51, 255),
    VTX(294, 40, -75, 1629, 1024, 51, 51, 51, 255),
    VTX(301, 120, 51, 7773, 0, 51, 51, 51, 255),
    VTX(301, 40, 51, 7773, 1024, 51, 51, 51, 255),
    VTX(323, 40, -1, 8611, 1024, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_004B10[30] = {
    VTX(175, 120, 59, 5725, 0, 255, 255, 255, 255),
    VTX(146, 120, -15, 4515, 0, 255, 255, 255, 255),
    VTX(146, 40, -15, 4515, 1024, 255, 255, 255, 255),
    VTX(323, 120, -1, 419, 0, 51, 51, 51, 255),
    VTX(323, 40, -1, 419, 1024, 51, 51, 51, 255),
    VTX(294, 40, -75, 1629, 1024, 51, 51, 51, 255),
    VTX(167, 120, -67, 3677, 0, 221, 221, 221, 255),
    VTX(167, 40, -67, 3677, 1024, 221, 221, 221, 255),
    VTX(227, 120, 81, 6563, 0, 119, 119, 119, 255),
    VTX(227, 40, 81, 6563, 1024, 119, 119, 119, 255),
    VTX(301, 40, 51, 7773, 1024, 51, 51, 51, 255),
    VTX(109, 140, 215, 2467, 0, 51, 51, 51, 255),
    VTX(109, 60, 215, 2467, 1024, 51, 51, 51, 255),
    VTX(35, 60, 245, 3677, 1024, 221, 221, 221, 255),
    VTX(333, 140, 266, 5725, 0, 255, 255, 255, 255),
    VTX(333, 60, 266, 5725, 1024, 255, 255, 255, 255),
    VTX(385, 60, 288, 6563, 1024, 119, 119, 119, 255),
    VTX(399, 140, 111, 2467, 0, 51, 51, 51, 255),
    VTX(451, 140, 133, 1629, 0, 51, 51, 51, 255),
    VTX(451, 60, 133, 1629, 1024, 51, 51, 51, 255),
    VTX(459, 140, 259, 7773, 0, 51, 51, 51, 255),
    VTX(459, 60, 259, 7773, 1024, 51, 51, 51, 255),
    VTX(482, 60, 207, 8611, 1024, 51, 51, 51, 255),
    VTX(303, 140, 193, 4515, 0, 255, 255, 255, 255),
    VTX(303, 60, 193, 4515, 1024, 255, 255, 255, 255),
    VTX(482, 140, 207, 419, 0, 51, 51, 51, 255),
    VTX(482, 60, 207, 419, 1024, 51, 51, 51, 255),
    VTX(325, 140, 140, 3677, 0, 221, 221, 221, 255),
    VTX(325, 60, 140, 3677, 1024, 221, 221, 221, 255),
    VTX(385, 140, 288, 6563, 0, 119, 119, 119, 255),
}; 

static Vtx deku_platformsVtx_004CF0[31] = {
    VTX(295, 160, 500, 6563, 0, 119, 119, 119, 255),
    VTX(295, 80, 500, 6563, 1024, 119, 119, 119, 255),
    VTX(369, 80, 471, 7773, 1024, 51, 51, 51, 255),
    VTX(42, 140, 371, 5725, 0, 255, 255, 255, 255),
    VTX(42, 60, 371, 5725, 1024, 255, 255, 255, 255),
    VTX(95, 60, 393, 6563, 1024, 119, 119, 119, 255),
    VTX(109, 140, 215, 2467, 0, 51, 51, 51, 255),
    VTX(161, 140, 237, 1629, 0, 51, 51, 51, 255),
    VTX(161, 60, 237, 1629, 1024, 51, 51, 51, 255),
    VTX(168, 140, 364, 7773, 0, 51, 51, 51, 255),
    VTX(168, 60, 364, 7773, 1024, 51, 51, 51, 255),
    VTX(191, 60, 311, 8611, 1024, 51, 51, 51, 255),
    VTX(13, 140, 298, 4515, 0, 255, 255, 255, 255),
    VTX(13, 60, 298, 4515, 1024, 255, 255, 255, 255),
    VTX(191, 140, 311, 419, 0, 51, 51, 51, 255),
    VTX(191, 60, 311, 419, 1024, 51, 51, 51, 255),
    VTX(35, 140, 245, 3677, 0, 221, 221, 221, 255),
    VTX(35, 60, 245, 3677, 1024, 221, 221, 221, 255),
    VTX(95, 140, 393, 6563, 0, 119, 119, 119, 255),
    VTX(213, 160, 404, 4515, 0, 255, 255, 255, 255),
    VTX(235, 160, 352, 3677, 0, 221, 221, 221, 255),
    VTX(235, 80, 352, 3677, 1024, 221, 221, 221, 255),
    VTX(392, 160, 418, 419, 0, 51, 51, 51, 255),
    VTX(392, 80, 418, 419, 1024, 51, 51, 51, 255),
    VTX(361, 80, 344, 1629, 1024, 51, 51, 51, 255),
    VTX(213, 80, 404, 4515, 1024, 255, 255, 255, 255),
    VTX(244, 80, 478, 5725, 1024, 255, 255, 255, 255),
    VTX(369, 160, 471, 7773, 0, 51, 51, 51, 255),
    VTX(392, 80, 418, 8611, 1024, 51, 51, 51, 255),
    VTX(310, 160, 322, 2467, 0, 51, 51, 51, 255),
    VTX(362, 160, 344, 1629, 0, 51, 51, 51, 255),
}; 

static Vtx deku_platformsVtx_004EE0[9] = {
    VTX(244, 160, 478, 5725, 0, 255, 255, 255, 255),
    VTX(244, 80, 478, 5725, 1024, 255, 255, 255, 255),
    VTX(295, 80, 500, 6563, 1024, 119, 119, 119, 255),
    VTX(235, 160, 352, 3677, 0, 221, 221, 221, 255),
    VTX(310, 160, 322, 2467, 0, 51, 51, 51, 255),
    VTX(310, 80, 322, 2467, 1024, 51, 51, 51, 255),
    VTX(-176, 60, -490, 2467, 0, 51, 51, 51, 255),
    VTX(-176, -20, -490, 2467, 1024, 51, 51, 51, 255),
    VTX(-250, -20, -459, 3677, 1024, 221, 221, 221, 255),
}; 

Gfx gDekuPlatformsDL[] = {
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 12, 2, 0x00002000),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, deku_platformsTex_000C00),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_platformsVtx_003DE0[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 3, 0, 14, 15, 6, 0),
    gsSP2Triangles(16, 17, 12, 0, 5, 18, 9, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 0, 0, 27, 28, 29, 0),
    gsSPVertex(&deku_platformsVtx_003FC0[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 14, 0, 25, 26, 17, 0),
    gsSP2Triangles(27, 28, 23, 0, 16, 29, 20, 0),
    gsSPVertex(&deku_platformsVtx_0041A0[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(3, 12, 13, 0, 14, 15, 6, 0),
    gsSP2Triangles(16, 12, 17, 0, 5, 18, 9, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(0, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&deku_platformsVtx_004380[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 0, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 14, 0, 25, 18, 26, 0),
    gsSP2Triangles(27, 28, 23, 0, 16, 29, 20, 0),
    gsSPVertex(&deku_platformsVtx_004560[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 4, 12, 0, 7, 13, 14, 0),
    gsSP2Triangles(15, 12, 1, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&deku_platformsVtx_004750[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(14, 23, 24, 0, 25, 26, 18, 0),
    gsSP2Triangles(23, 27, 28, 0, 29, 16, 21, 0),
    gsSPVertex(&deku_platformsVtx_004930[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 4, 0, 14, 15, 7, 0),
    gsSP2Triangles(16, 17, 13, 0, 18, 5, 10, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 1, 0, 27, 28, 29, 0),
    gsSPVertex(&deku_platformsVtx_004B10[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 2, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 15, 0, 25, 26, 19, 0),
    gsSP2Triangles(27, 28, 24, 0, 29, 16, 21, 0),
    gsSPVertex(&deku_platformsVtx_004CF0[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 4, 0, 14, 15, 8, 0),
    gsSP2Triangles(16, 17, 13, 0, 18, 5, 10, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(19, 25, 26, 0, 27, 2, 28, 0),
    gsSP1Triangle(29, 30, 24, 0),
    gsSPVertex(&deku_platformsVtx_004EE0[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, deku_platformsTex_000A00),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, deku_platformsTex_000600),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&deku_platformsVtx_002DD0[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 3, 1, 8, 0),
    gsSP2Triangles(5, 9, 10, 0, 10, 11, 12, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(17, 23, 24, 0, 20, 18, 25, 0),
    gsSP2Triangles(22, 26, 27, 0, 27, 28, 29, 0),
    gsSPVertex(&deku_platformsVtx_002FB0[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(5, 11, 12, 0, 8, 6, 13, 0),
    gsSP2Triangles(10, 14, 15, 0, 15, 16, 17, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(22, 28, 29, 0),
    gsSPVertex(&deku_platformsVtx_003190[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 12, 18, 19, 0),
    gsSP2Triangles(15, 13, 20, 0, 17, 21, 22, 0),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 26, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&deku_platformsVtx_003390[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 2, 8, 9, 0),
    gsSP2Triangles(9, 10, 11, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 16, 0, 21, 22, 19, 0),
    gsSP2Triangles(23, 24, 21, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&deku_platformsVtx_003580[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(6, 12, 13, 0, 9, 14, 8, 0),
    gsSP2Triangles(15, 11, 16, 0, 17, 16, 18, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 20, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 26, 27, 28, 0),
    gsSP1Triangle(23, 29, 30, 0),
    gsSPVertex(&deku_platformsVtx_003770[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 12, 18, 19, 0),
    gsSP2Triangles(15, 20, 14, 0, 21, 17, 22, 0),
    gsSP2Triangles(23, 22, 24, 0, 25, 24, 26, 0),
    gsSP2Triangles(27, 26, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&deku_platformsVtx_003970[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 8, 2, 9, 0),
    gsSP2Triangles(10, 9, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 13, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 16, 22, 23, 0),
    gsSP2Triangles(19, 24, 18, 0, 25, 21, 26, 0),
    gsSP2Triangles(27, 26, 28, 0, 29, 28, 30, 0),
    gsSPVertex(&deku_platformsVtx_003B60[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 9, 10, 0),
    gsSP2Triangles(6, 11, 5, 0, 12, 8, 13, 0),
    gsSP2Triangles(14, 13, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 17, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 21, 0, 25, 26, 24, 0),
    gsSP2Triangles(27, 28, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&deku_platformsVtx_003D60[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, deku_platformsTex_000400),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, deku_platformsTex_000000),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&deku_platformsVtx_002A30[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 12, 0, 14, 12, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 16, 19, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 23, 20, 0, 22, 20, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 24, 27, 0, 28, 27, 29, 0),
    gsSPVertex(&deku_platformsVtx_002C10[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 8, 9, 0, 4, 9, 5, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 12, 15, 0, 16, 15, 17, 0),
    gsSP2Triangles(18, 19, 16, 0, 18, 16, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 20, 23, 0, 24, 23, 25, 0),
    gsSPEndDisplayList(),
}; 

Vec3s gDekuPlatformsCol_vtx_00001430[] = {
   { 85, 100, -271 }, // 0x00001430
   { 63, 100, -219 }, // 0x00001436
   { 93, 100, -145 }, // 0x0000143C
   { 145, 100, -123 }, // 0x00001442
   { -49, 80, -282 }, // 0x00001448
   { -146, 80, -200 }, // 0x0000144E
   { -63, 80, -104 }, // 0x00001454
   { 11, 80, -133 }, // 0x0000145A
   { -250, 60, -459 }, // 0x00001460
   { -124, 60, -468 }, // 0x00001466
   { -191, 60, -311 }, // 0x0000146C
   { -94, 60, -393 }, // 0x00001472
   { 109, 140, 215 }, // 0x00001478
   { 13, 140, 298 }, // 0x0000147E
   { 95, 140, 393 }, // 0x00001484
   { 168, 140, 364 }, // 0x0000148A
   { 244, 160, 478 }, // 0x00001490
   { 235, 160, 352 }, // 0x00001496
   { 213, 160, 404 }, // 0x0000149C
   { 295, 160, 500 }, // 0x000014A2
   { 303, 140, 193 }, // 0x000014A8
   { 333, 140, 266 }, // 0x000014AE
   { 451, 140, 133 }, // 0x000014B4
   { 459, 140, 259 }, // 0x000014BA
   { 227, 120, 81 }, // 0x000014C0
   { 323, 120, -1 }, // 0x000014C6
   { 241, 120, -97 }, // 0x000014CC
   { -116, 60, -341 }, // 0x000014D2
   { -242, 60, -333 }, // 0x000014D8
   { -272, 60, -408 }, // 0x000014DE
   { -176, 60, -490 }, // 0x000014E4
   { 3, 80, -261 }, // 0x000014EA
   { 33, 80, -186 }, // 0x000014F0
   { -115, 80, -126 }, // 0x000014F6
   { -123, 80, -252 }, // 0x000014FC
   { 211, 100, -280 }, // 0x00001502
   { 241, 100, -205 }, // 0x00001508
   { 219, 100, -153 }, // 0x0000150E
   { 160, 100, -302 }, // 0x00001514
   { 294, 120, -75 }, // 0x0000151A
   { 301, 120, 51 }, // 0x00001520
   { 175, 120, 59 }, // 0x00001526
   { 146, 120, -15 }, // 0x0000152C
   { 167, 120, -67 }, // 0x00001532
   { 482, 140, 207 }, // 0x00001538
   { 385, 140, 288 }, // 0x0000153E
   { 325, 140, 140 }, // 0x00001544
   { 399, 140, 111 }, // 0x0000154A
   { 161, 140, 237 }, // 0x00001550
   { 191, 140, 311 }, // 0x00001556
   { 42, 140, 371 }, // 0x0000155C
   { 35, 140, 245 }, // 0x00001562
   { 310, 160, 322 }, // 0x00001568
   { 369, 160, 471 }, // 0x0000156E
   { 392, 160, 418 }, // 0x00001574
   { 361, 160, 344 }, // 0x0000157A
   { 85, 100, -271 }, // 0x00001580
   { 63, 100, -219 }, // 0x00001586
   { 93, 100, -145 }, // 0x0000158C
   { 145, 100, -123 }, // 0x00001592
   { -49, 80, -282 }, // 0x00001598
   { -146, 80, -200 }, // 0x0000159E
   { -63, 80, -104 }, // 0x000015A4
   { 11, 80, -133 }, // 0x000015AA
   { -250, 60, -459 }, // 0x000015B0
   { -124, 60, -468 }, // 0x000015B6
   { -191, 60, -311 }, // 0x000015BC
   { -94, 60, -393 }, // 0x000015C2
   { 109, 140, 215 }, // 0x000015C8
   { 13, 140, 298 }, // 0x000015CE
   { 95, 140, 393 }, // 0x000015D4
   { 168, 140, 364 }, // 0x000015DA
   { 244, 160, 478 }, // 0x000015E0
   { 235, 160, 352 }, // 0x000015E6
   { 213, 160, 404 }, // 0x000015EC
   { 295, 160, 500 }, // 0x000015F2
   { 303, 140, 193 }, // 0x000015F8
   { 333, 140, 266 }, // 0x000015FE
   { 451, 140, 133 }, // 0x00001604
   { 459, 140, 259 }, // 0x0000160A
   { 227, 120, 81 }, // 0x00001610
   { 323, 120, -1 }, // 0x00001616
   { 241, 120, -97 }, // 0x0000161C
   { -124, -20, -468 }, // 0x00001622
   { -94, -100, -393 }, // 0x00001628
   { -116, 60, -341 }, // 0x0000162E
   { -116, -100, -341 }, // 0x00001634
   { -191, -20, -311 }, // 0x0000163A
   { -242, 60, -333 }, // 0x00001640
   { -242, -20, -333 }, // 0x00001646
   { -272, 60, -408 }, // 0x0000164C
   { -272, -20, -408 }, // 0x00001652
   { -250, -20, -459 }, // 0x00001658
   { -176, 60, -490 }, // 0x0000165E
   { -191, -100, -311 }, // 0x00001664
   { -176, -20, -490 }, // 0x0000166A
   { -242, -100, -333 }, // 0x00001670
   { -272, -100, -408 }, // 0x00001676
   { -250, -100, -459 }, // 0x0000167C
   { -124, -100, -468 }, // 0x00001682
   { -176, -100, -490 }, // 0x00001688
   { -116, -20, -341 }, // 0x0000168E
   { -94, -20, -393 }, // 0x00001694
   { 3, 0, -261 }, // 0x0000169A
   { 3, 80, -261 }, // 0x000016A0
   { 33, 80, -186 }, // 0x000016A6
   { 33, -80, -186 }, // 0x000016AC
   { 11, -80, -133 }, // 0x000016B2
   { -63, 0, -104 }, // 0x000016B8
   { -115, 80, -126 }, // 0x000016BE
   { -115, 0, -126 }, // 0x000016C4
   { -146, 0, -200 }, // 0x000016CA
   { -123, 80, -252 }, // 0x000016D0
   { -123, 0, -252 }, // 0x000016D6
   { -63, -80, -104 }, // 0x000016DC
   { -49, 0, -282 }, // 0x000016E2
   { -115, -80, -126 }, // 0x000016E8
   { -146, -80, -200 }, // 0x000016EE
   { -123, -80, -252 }, // 0x000016F4
   { 3, -80, -261 }, // 0x000016FA
   { -49, -80, -282 }, // 0x00001700
   { 11, 0, -133 }, // 0x00001706
   { 33, 0, -186 }, // 0x0000170C
   { 211, 20, -280 }, // 0x00001712
   { 211, 100, -280 }, // 0x00001718
   { 241, 100, -205 }, // 0x0000171E
   { 241, -60, -205 }, // 0x00001724
   { 219, 100, -153 }, // 0x0000172A
   { 219, -60, -153 }, // 0x00001730
   { 145, 20, -123 }, // 0x00001736
   { 93, 20, -145 }, // 0x0000173C
   { 63, 20, -219 }, // 0x00001742
   { 85, 20, -271 }, // 0x00001748
   { 160, 100, -302 }, // 0x0000174E
   { 145, -60, -123 }, // 0x00001754
   { 160, 20, -302 }, // 0x0000175A
   { 93, -60, -145 }, // 0x00001760
   { 63, -60, -219 }, // 0x00001766
   { 85, -60, -271 }, // 0x0000176C
   { 211, -60, -280 }, // 0x00001772
   { 160, -60, -302 }, // 0x00001778
   { 219, 20, -153 }, // 0x0000177E
   { 241, 20, -205 }, // 0x00001784
   { 294, 40, -75 }, // 0x0000178A
   { 294, 120, -75 }, // 0x00001790
   { 323, -40, -1 }, // 0x00001796
   { 301, 120, 51 }, // 0x0000179C
   { 301, -40, 51 }, // 0x000017A2
   { 227, 40, 81 }, // 0x000017A8
   { 175, 120, 59 }, // 0x000017AE
   { 175, 40, 59 }, // 0x000017B4
   { 146, 120, -15 }, // 0x000017BA
   { 146, 40, -15 }, // 0x000017C0
   { 167, 120, -67 }, // 0x000017C6
   { 167, 40, -67 }, // 0x000017CC
   { 227, -40, 81 }, // 0x000017D2
   { 241, 40, -97 }, // 0x000017D8
   { 175, -40, 59 }, // 0x000017DE
   { 146, -40, -15 }, // 0x000017E4
   { 167, -40, -67 }, // 0x000017EA
   { 294, -40, -75 }, // 0x000017F0
   { 241, -40, -97 }, // 0x000017F6
   { 301, 40, 51 }, // 0x000017FC
   { 323, 40, -1 }, // 0x00001802
   { 451, 60, 133 }, // 0x00001808
   { 482, 140, 207 }, // 0x0000180E
   { 482, -20, 207 }, // 0x00001814
   { 459, -20, 259 }, // 0x0000181A
   { 385, 140, 288 }, // 0x00001820
   { 385, 60, 288 }, // 0x00001826
   { 333, 60, 266 }, // 0x0000182C
   { 303, 60, 193 }, // 0x00001832
   { 325, 140, 140 }, // 0x00001838
   { 325, 60, 140 }, // 0x0000183E
   { 399, 140, 111 }, // 0x00001844
   { 385, -20, 288 }, // 0x0000184A
   { 399, 60, 111 }, // 0x00001850
   { 333, -20, 266 }, // 0x00001856
   { 303, -20, 193 }, // 0x0000185C
   { 325, -20, 140 }, // 0x00001862
   { 451, -20, 133 }, // 0x00001868
   { 399, -20, 111 }, // 0x0000186E
   { 459, 60, 259 }, // 0x00001874
   { 482, 60, 207 }, // 0x0000187A
   { 161, 60, 237 }, // 0x00001880
   { 161, 140, 237 }, // 0x00001886
   { 191, 140, 311 }, // 0x0000188C
   { 191, -20, 311 }, // 0x00001892
   { 168, -20, 364 }, // 0x00001898
   { 95, 60, 393 }, // 0x0000189E
   { 42, 140, 371 }, // 0x000018A4
   { 42, 60, 371 }, // 0x000018AA
   { 13, 60, 298 }, // 0x000018B0
   { 35, 140, 245 }, // 0x000018B6
   { 35, 60, 245 }, // 0x000018BC
   { 95, -20, 393 }, // 0x000018C2
   { 109, 60, 215 }, // 0x000018C8
   { 42, -20, 371 }, // 0x000018CE
   { 13, -20, 298 }, // 0x000018D4
   { 35, -20, 245 }, // 0x000018DA
   { 161, -20, 237 }, // 0x000018E0
   { 109, -20, 215 }, // 0x000018E6
   { 168, 60, 364 }, // 0x000018EC
   { 191, 60, 311 }, // 0x000018F2
   { 392, 80, 418 }, // 0x000018F8
   { 369, 80, 471 }, // 0x000018FE
   { 310, 0, 322 }, // 0x00001904
   { 361, 0, 344 }, // 0x0000190A
   { 235, 0, 352 }, // 0x00001910
   { 213, 0, 404 }, // 0x00001916
   { 244, 0, 478 }, // 0x0000191C
   { 310, 80, 322 }, // 0x00001922
   { 295, 0, 500 }, // 0x00001928
   { 310, 160, 322 }, // 0x0000192E
   { 235, 80, 352 }, // 0x00001934
   { 213, 80, 404 }, // 0x0000193A
   { 244, 80, 478 }, // 0x00001940
   { 295, 80, 500 }, // 0x00001946
   { 369, 0, 471 }, // 0x0000194C
   { 369, 160, 471 }, // 0x00001952
   { 392, 0, 418 }, // 0x00001958
   { 392, 160, 418 }, // 0x0000195E
   { 361, 160, 344 }, // 0x00001964
   { 361, 80, 344 }, // 0x0000196A
}; 

CollisionPoly gDekuPlatformsCol_polygons_00001970[] = {
   { 0x0001, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFF9C }, // 0x00001970
   { 0x0001, 0x0000, 0x0002, 0x0026, 0x0000, 0x7FFF, 0x0000, 0xFF9C }, // 0x00001980
   { 0x0001, 0x0002, 0x0003, 0x0023, 0x0000, 0x7FFF, 0x0000, 0xFF9C }, // 0x00001990
   { 0x0001, 0x0002, 0x0023, 0x0026, 0x0000, 0x7FFF, 0x0000, 0xFF9C }, // 0x000019A0
   { 0x0001, 0x0003, 0x0025, 0x0024, 0x0000, 0x7FFF, 0x0000, 0xFF9C }, // 0x000019B0
   { 0x0001, 0x0003, 0x0024, 0x0023, 0x0000, 0x7FFF, 0x0000, 0xFF9C }, // 0x000019C0
   { 0x0001, 0x0004, 0x0022, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFFB0 }, // 0x000019D0
   { 0x0001, 0x0004, 0x0005, 0x0021, 0x0000, 0x7FFF, 0x0000, 0xFFB0 }, // 0x000019E0
   { 0x0001, 0x001F, 0x0004, 0x0021, 0x0000, 0x7FFF, 0x0000, 0xFFB0 }, // 0x000019F0
   { 0x0001, 0x001F, 0x0021, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFFB0 }, // 0x00001A00
   { 0x0001, 0x0007, 0x0020, 0x001F, 0x0000, 0x7FFF, 0x0000, 0xFFB0 }, // 0x00001A10
   { 0x0001, 0x0007, 0x001F, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFFB0 }, // 0x00001A20
   { 0x0001, 0x001E, 0x0008, 0x001D, 0x0000, 0x7FFF, 0x0000, 0xFFC4 }, // 0x00001A30
   { 0x0001, 0x001E, 0x001D, 0x001C, 0x0000, 0x7FFF, 0x0000, 0xFFC4 }, // 0x00001A40
   { 0x0001, 0x0009, 0x001E, 0x001C, 0x0000, 0x7FFF, 0x0000, 0xFFC4 }, // 0x00001A50
   { 0x0001, 0x0009, 0x001C, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFFC4 }, // 0x00001A60
   { 0x0001, 0x001B, 0x000B, 0x0009, 0x0000, 0x7FFF, 0x0000, 0xFFC4 }, // 0x00001A70
   { 0x0001, 0x001B, 0x0009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFFC4 }, // 0x00001A80
   { 0x0001, 0x000C, 0x0033, 0x000D, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001A90
   { 0x0001, 0x000C, 0x000D, 0x0032, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001AA0
   { 0x0001, 0x0030, 0x000C, 0x0032, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001AB0
   { 0x0001, 0x0030, 0x0032, 0x000E, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001AC0
   { 0x0001, 0x0030, 0x000E, 0x000F, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001AD0
   { 0x0001, 0x0030, 0x000F, 0x0031, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001AE0
   { 0x0001, 0x0010, 0x0034, 0x0011, 0x0000, 0x7FFF, 0x0000, 0xFF60 }, // 0x00001AF0
   { 0x0001, 0x0010, 0x0011, 0x0012, 0x0000, 0x7FFF, 0x0000, 0xFF60 }, // 0x00001B00
   { 0x0001, 0x0010, 0x0013, 0x0037, 0x0000, 0x7FFF, 0x0000, 0xFF60 }, // 0x00001B10
   { 0x0001, 0x0010, 0x0037, 0x0034, 0x0000, 0x7FFF, 0x0000, 0xFF60 }, // 0x00001B20
   { 0x0001, 0x0013, 0x0035, 0x0036, 0x0000, 0x7FFF, 0x0000, 0xFF60 }, // 0x00001B30
   { 0x0001, 0x0013, 0x0036, 0x0037, 0x0000, 0x7FFF, 0x0000, 0xFF60 }, // 0x00001B40
   { 0x0001, 0x002F, 0x002E, 0x0014, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001B50
   { 0x0001, 0x002F, 0x0014, 0x0015, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001B60
   { 0x0001, 0x0016, 0x002F, 0x0015, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001B70
   { 0x0001, 0x0016, 0x0015, 0x002D, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001B80
   { 0x0001, 0x0017, 0x002C, 0x0016, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001B90
   { 0x0001, 0x0017, 0x0016, 0x002D, 0x0000, 0x7FFF, 0x0000, 0xFF74 }, // 0x00001BA0
   { 0x0001, 0x0018, 0x0028, 0x0019, 0x0000, 0x7FFF, 0x0000, 0xFF88 }, // 0x00001BB0
   { 0x0001, 0x0018, 0x0019, 0x0027, 0x0000, 0x7FFF, 0x0000, 0xFF88 }, // 0x00001BC0
   { 0x0001, 0x0029, 0x001A, 0x002B, 0x0000, 0x7FFF, 0x0000, 0xFF88 }, // 0x00001BD0
   { 0x0001, 0x0029, 0x002B, 0x002A, 0x0000, 0x7FFF, 0x0000, 0xFF88 }, // 0x00001BE0
   { 0x0001, 0x0029, 0x0018, 0x0027, 0x0000, 0x7FFF, 0x0000, 0xFF88 }, // 0x00001BF0
   { 0x0001, 0x0029, 0x0027, 0x001A, 0x0000, 0x7FFF, 0x0000, 0xFF88 }, // 0x00001C00
   { 0x0002, 0x003C, 0x0071, 0x0070, 0xCFE9, 0x0000, 0x8962, 0xFEE8 }, // 0x00001C10
   { 0x0002, 0x0058, 0x0057, 0x0042, 0xCD4D, 0x0000, 0x7587, 0x00D2 }, // 0x00001C20
   { 0x0002, 0x0041, 0x005F, 0x005D, 0x31DF, 0x0000, 0x8A1F, 0xFE81 }, // 0x00001C30
   { 0x0002, 0x0055, 0x0066, 0x0043, 0x75E1, 0x0000, 0x31DF, 0x00F0 }, // 0x00001C40
   { 0x0002, 0x005A, 0x0059, 0x0058, 0x8929, 0x0000, 0x2F89, 0xFF9B }, // 0x00001C50
   { 0x0002, 0x0043, 0x0053, 0x0041, 0x76D7, 0x0000, 0xD077, 0xFFC5 }, // 0x00001C60
   { 0x0002, 0x0040, 0x005B, 0x005A, 0x8A79, 0x0000, 0xCD4D, 0xFE65 }, // 0x00001C70
   { 0x0002, 0x0042, 0x0065, 0x0055, 0x2F89, 0x0000, 0x76D7, 0x0168 }, // 0x00001C80
   { 0x0002, 0x0085, 0x0084, 0x0038, 0xCF1B, 0x0000, 0x89B6, 0xFF26 }, // 0x00001C90
   { 0x0002, 0x006D, 0x006C, 0x003E, 0xCE21, 0x0000, 0x75E1, 0x0047 }, // 0x00001CA0
   { 0x0002, 0x0068, 0x0073, 0x003C, 0x2FEE, 0x0000, 0x8951, 0xFF0D }, // 0x00001CB0
   { 0x0002, 0x003F, 0x007A, 0x0069, 0x7637, 0x0000, 0x3112, 0x0029 }, // 0x00001CC0
   { 0x0002, 0x003D, 0x006E, 0x006D, 0x89F2, 0x0000, 0x3175, 0xFFC7 }, // 0x00001CD0
   { 0x0002, 0x0069, 0x0067, 0x0068, 0x76D7, 0x0000, 0xD077, 0xFF9C }, // 0x00001CE0
   { 0x0002, 0x0070, 0x006F, 0x003D, 0x8AF1, 0x0000, 0xCC3A, 0xFF2A }, // 0x00001CF0
   { 0x0002, 0x003E, 0x0079, 0x003F, 0x2EB4, 0x0000, 0x772C, 0x0078 }, // 0x00001D00
   { 0x0002, 0x0052, 0x009A, 0x0099, 0xCFE9, 0x0000, 0x8962, 0x0001 }, // 0x00001D10
   { 0x0002, 0x003A, 0x0081, 0x003B, 0xCE21, 0x0000, 0x75E1, 0x00AA }, // 0x00001D20
   { 0x0002, 0x007C, 0x0087, 0x0085, 0x32B3, 0x0000, 0x8A79, 0xFEAB }, // 0x00001D30
   { 0x0002, 0x007F, 0x008E, 0x007D, 0x75E1, 0x0000, 0x31DF, 0xFF72 }, // 0x00001D40
   { 0x0002, 0x0039, 0x0082, 0x003A, 0x8962, 0x0000, 0x3017, 0x008D }, // 0x00001D50
   { 0x0002, 0x007D, 0x007B, 0x007C, 0x76D7, 0x0000, 0xD077, 0xFED4 }, // 0x00001D60
   { 0x0002, 0x0038, 0x0083, 0x0039, 0x8A1F, 0x0000, 0xCE21, 0xFFE5 }, // 0x00001D70
   { 0x0002, 0x003B, 0x008D, 0x007F, 0x3017, 0x0000, 0x769E, 0x003C }, // 0x00001D80
   { 0x0002, 0x00AE, 0x00AD, 0x00AC, 0xD14C, 0x0000, 0x88D4, 0x00F9 }, // 0x00001D90
   { 0x0002, 0x0095, 0x0094, 0x0050, 0xCE21, 0x0000, 0x75E1, 0x000E }, // 0x00001DA0
   { 0x0002, 0x0090, 0x009C, 0x0052, 0x3112, 0x0000, 0x89C9, 0xFF4A }, // 0x00001DB0
   { 0x0002, 0x0092, 0x00A3, 0x0051, 0x75E1, 0x0000, 0x31DF, 0xFED7 }, // 0x00001DC0
   { 0x0002, 0x0097, 0x0096, 0x0095, 0x88D4, 0x0000, 0x2EB4, 0x008D }, // 0x00001DD0
   { 0x0002, 0x0051, 0x008F, 0x0090, 0x772C, 0x0000, 0xD14C, 0xFED3 }, // 0x00001DE0
   { 0x0002, 0x0099, 0x0098, 0x0097, 0x8951, 0x0000, 0xD012, 0x0082 }, // 0x00001DF0
   { 0x0002, 0x0050, 0x00A2, 0x0092, 0x3017, 0x0000, 0x769E, 0xFF60 }, // 0x00001E00
   { 0x0002, 0x0044, 0x00C2, 0x00C1, 0xCFE9, 0x0000, 0x8962, 0x00F0 }, // 0x00001E10
   { 0x0002, 0x004D, 0x00A9, 0x00A8, 0xCE21, 0x0000, 0x75E1, 0xFF8D }, // 0x00001E20
   { 0x0002, 0x004E, 0x00B0, 0x00AE, 0x31DF, 0x0000, 0x8A1F, 0xFFCB }, // 0x00001E30
   { 0x0002, 0x004F, 0x00B7, 0x00A5, 0x750F, 0x0000, 0x33C6, 0xFDF3 }, // 0x00001E40
   { 0x0002, 0x004C, 0x00AA, 0x004D, 0x899C, 0x0000, 0x30A7, 0x00CF }, // 0x00001E50
   { 0x0002, 0x00A5, 0x00A4, 0x004E, 0x760E, 0x0000, 0xCE8B, 0xFE93 }, // 0x00001E60
   { 0x0002, 0x00AC, 0x00AB, 0x004C, 0x89C9, 0x0000, 0xCEEE, 0x0162 }, // 0x00001E70
   { 0x0002, 0x00A8, 0x00B6, 0x004F, 0x2EB4, 0x0000, 0x772C, 0xFE67 }, // 0x00001E80
   { 0x0002, 0x004B, 0x00CD, 0x00DB, 0x2EB4, 0x0000, 0x772C, 0xFDC3 }, // 0x00001E90
   { 0x0002, 0x00BE, 0x00BD, 0x0046, 0xCEEE, 0x0000, 0x7637, 0xFEB9 }, // 0x00001EA0
   { 0x0002, 0x00B9, 0x00C4, 0x0044, 0x31DF, 0x0000, 0x8A1F, 0x009C }, // 0x00001EB0
   { 0x0002, 0x0047, 0x00CB, 0x00BA, 0x756B, 0x0000, 0x32F4, 0xFED5 }, // 0x00001EC0
   { 0x0002, 0x0045, 0x00BF, 0x00BE, 0x890C, 0x0000, 0x2F41, 0xFF9E }, // 0x00001ED0
   { 0x0002, 0x00BA, 0x00B8, 0x00B9, 0x769E, 0x0000, 0xCFE9, 0xFFC4 }, // 0x00001EE0
   { 0x0002, 0x00C1, 0x00C0, 0x0045, 0x89C9, 0x0000, 0xCEEE, 0x007E }, // 0x00001EF0
   { 0x0002, 0x0046, 0x00CA, 0x0047, 0x2F41, 0x0000, 0x76F4, 0xFE70 }, // 0x00001F00
   { 0x0002, 0x0049, 0x00D7, 0x004A, 0x8A1F, 0x0000, 0xCE21, 0x0162 }, // 0x00001F10
   { 0x0002, 0x00DD, 0x00DF, 0x00DE, 0x760E, 0x0000, 0xCE8B, 0xFF38 }, // 0x00001F20
   { 0x0002, 0x004A, 0x00D8, 0x0048, 0x89F2, 0x0000, 0x3175, 0x0028 }, // 0x00001F30
   { 0x0002, 0x00DB, 0x00CC, 0x00DD, 0x756B, 0x0000, 0x32F4, 0xFDF2 }, // 0x00001F40
   { 0x0002, 0x00DE, 0x00D3, 0x00D5, 0x32B3, 0x0000, 0x8A79, 0x00AD }, // 0x00001F50
   { 0x0002, 0x0048, 0x00D9, 0x004B, 0xCD4D, 0x0000, 0x7587, 0xFEAA }, // 0x00001F60
   { 0x0002, 0x00D5, 0x00D6, 0x0049, 0xD077, 0x0000, 0x8929, 0x019E }, // 0x00001F70
   { 0x0002, 0x005D, 0x005C, 0x0040, 0xCE8B, 0x0000, 0x89F2, 0xFDF8 }, // 0x00001F80
   { 0x0002, 0x003C, 0x0073, 0x0071, 0xCFE9, 0x0000, 0x8962, 0xFEE8 }, // 0x00001F90
   { 0x0002, 0x0058, 0x0059, 0x0057, 0xCD4D, 0x0000, 0x7587, 0x00D2 }, // 0x00001FA0
   { 0x0002, 0x0041, 0x0053, 0x005F, 0x31DF, 0x0000, 0x8A1F, 0xFE81 }, // 0x00001FB0
   { 0x0002, 0x0055, 0x0065, 0x0066, 0x75E1, 0x0000, 0x31DF, 0x00F0 }, // 0x00001FC0
   { 0x0002, 0x005A, 0x005B, 0x0059, 0x8929, 0x0000, 0x2F89, 0xFF9B }, // 0x00001FD0
   { 0x0002, 0x0043, 0x0066, 0x0053, 0x76D7, 0x0000, 0xD077, 0xFFC5 }, // 0x00001FE0
   { 0x0002, 0x0040, 0x005C, 0x005B, 0x8A79, 0x0000, 0xCD4D, 0xFE65 }, // 0x00001FF0
   { 0x0002, 0x0042, 0x0057, 0x0065, 0x2F89, 0x0000, 0x76D7, 0x0168 }, // 0x00002000
   { 0x0002, 0x0085, 0x0087, 0x0084, 0xCF1B, 0x0000, 0x89B6, 0xFF26 }, // 0x00002010
   { 0x0002, 0x006D, 0x006E, 0x006C, 0xCE21, 0x0000, 0x75E1, 0x0047 }, // 0x00002020
   { 0x0002, 0x0068, 0x0067, 0x0073, 0x2FEE, 0x0000, 0x8951, 0xFF0D }, // 0x00002030
   { 0x0002, 0x003F, 0x0079, 0x007A, 0x7637, 0x0000, 0x3112, 0x0029 }, // 0x00002040
   { 0x0002, 0x003D, 0x006F, 0x006E, 0x89F2, 0x0000, 0x3175, 0xFFC7 }, // 0x00002050
   { 0x0002, 0x0069, 0x007A, 0x0067, 0x76D7, 0x0000, 0xD077, 0xFF9C }, // 0x00002060
   { 0x0002, 0x0070, 0x0071, 0x006F, 0x8AF1, 0x0000, 0xCC3A, 0xFF2A }, // 0x00002070
   { 0x0002, 0x003E, 0x006C, 0x0079, 0x2EB4, 0x0000, 0x772C, 0x0078 }, // 0x00002080
   { 0x0002, 0x0052, 0x009C, 0x009A, 0xCFE9, 0x0000, 0x8962, 0x0001 }, // 0x00002090
   { 0x0002, 0x003A, 0x0082, 0x0081, 0xCE21, 0x0000, 0x75E1, 0x00AA }, // 0x000020A0
   { 0x0002, 0x007C, 0x007B, 0x0087, 0x32B3, 0x0000, 0x8A79, 0xFEAB }, // 0x000020B0
   { 0x0002, 0x007F, 0x008D, 0x008E, 0x75E1, 0x0000, 0x31DF, 0xFF72 }, // 0x000020C0
   { 0x0002, 0x0039, 0x0083, 0x0082, 0x8962, 0x0000, 0x3017, 0x008D }, // 0x000020D0
   { 0x0002, 0x007D, 0x008E, 0x007B, 0x76D7, 0x0000, 0xD077, 0xFED4 }, // 0x000020E0
   { 0x0002, 0x0038, 0x0084, 0x0083, 0x8A1F, 0x0000, 0xCE21, 0xFFE5 }, // 0x000020F0
   { 0x0002, 0x003B, 0x0081, 0x008D, 0x3017, 0x0000, 0x769E, 0x003C }, // 0x00002100
   { 0x0002, 0x00AE, 0x00B0, 0x00AD, 0xD14C, 0x0000, 0x88D4, 0x00F9 }, // 0x00002110
   { 0x0002, 0x0095, 0x0096, 0x0094, 0xCE21, 0x0000, 0x75E1, 0x000E }, // 0x00002120
   { 0x0002, 0x0090, 0x008F, 0x009C, 0x3112, 0x0000, 0x89C9, 0xFF4A }, // 0x00002130
   { 0x0002, 0x0092, 0x00A2, 0x00A3, 0x75E1, 0x0000, 0x31DF, 0xFED7 }, // 0x00002140
   { 0x0002, 0x0097, 0x0098, 0x0096, 0x88D4, 0x0000, 0x2EB4, 0x008D }, // 0x00002150
   { 0x0002, 0x0051, 0x00A3, 0x008F, 0x772C, 0x0000, 0xD14C, 0xFED3 }, // 0x00002160
   { 0x0002, 0x0099, 0x009A, 0x0098, 0x8951, 0x0000, 0xD012, 0x0082 }, // 0x00002170
   { 0x0002, 0x0050, 0x0094, 0x00A2, 0x3017, 0x0000, 0x769E, 0xFF60 }, // 0x00002180
   { 0x0002, 0x0044, 0x00C4, 0x00C2, 0xCFE9, 0x0000, 0x8962, 0x00F0 }, // 0x00002190
   { 0x0002, 0x004D, 0x00AA, 0x00A9, 0xCE21, 0x0000, 0x75E1, 0xFF8D }, // 0x000021A0
   { 0x0002, 0x004E, 0x00A4, 0x00B0, 0x31DF, 0x0000, 0x8A1F, 0xFFCB }, // 0x000021B0
   { 0x0002, 0x004F, 0x00B6, 0x00B7, 0x750F, 0x0000, 0x33C6, 0xFDF3 }, // 0x000021C0
   { 0x0002, 0x004C, 0x00AB, 0x00AA, 0x899C, 0x0000, 0x30A7, 0x00CF }, // 0x000021D0
   { 0x0002, 0x00A5, 0x00B7, 0x00A4, 0x760E, 0x0000, 0xCE8B, 0xFE93 }, // 0x000021E0
   { 0x0002, 0x00AC, 0x00AD, 0x00AB, 0x89C9, 0x0000, 0xCEEE, 0x0162 }, // 0x000021F0
   { 0x0002, 0x00A8, 0x00A9, 0x00B6, 0x2EB4, 0x0000, 0x772C, 0xFE67 }, // 0x00002200
   { 0x0002, 0x004B, 0x00D9, 0x00CD, 0x2EB4, 0x0000, 0x772C, 0xFDC3 }, // 0x00002210
   { 0x0002, 0x00BE, 0x00BF, 0x00BD, 0xCEEE, 0x0000, 0x7637, 0xFEB9 }, // 0x00002220
   { 0x0002, 0x00B9, 0x00B8, 0x00C4, 0x31DF, 0x0000, 0x8A1F, 0x009C }, // 0x00002230
   { 0x0002, 0x0047, 0x00CA, 0x00CB, 0x756B, 0x0000, 0x32F4, 0xFED5 }, // 0x00002240
   { 0x0002, 0x0045, 0x00C0, 0x00BF, 0x890C, 0x0000, 0x2F41, 0xFF9E }, // 0x00002250
   { 0x0002, 0x00BA, 0x00CB, 0x00B8, 0x769E, 0x0000, 0xCFE9, 0xFFC4 }, // 0x00002260
   { 0x0002, 0x00C1, 0x00C2, 0x00C0, 0x89C9, 0x0000, 0xCEEE, 0x007E }, // 0x00002270
   { 0x0002, 0x0046, 0x00BD, 0x00CA, 0x2F41, 0x0000, 0x76F4, 0xFE70 }, // 0x00002280
   { 0x0002, 0x0049, 0x00D6, 0x00D7, 0x8A1F, 0x0000, 0xCE21, 0x0162 }, // 0x00002290
   { 0x0002, 0x00DD, 0x00CC, 0x00DF, 0x760E, 0x0000, 0xCE8B, 0xFF38 }, // 0x000022A0
   { 0x0002, 0x004A, 0x00D7, 0x00D8, 0x89F2, 0x0000, 0x3175, 0x0028 }, // 0x000022B0
   { 0x0002, 0x00DB, 0x00CD, 0x00CC, 0x756B, 0x0000, 0x32F4, 0xFDF2 }, // 0x000022C0
   { 0x0002, 0x00DE, 0x00DF, 0x00D3, 0x32B3, 0x0000, 0x8A79, 0x00AD }, // 0x000022D0
   { 0x0002, 0x0048, 0x00D8, 0x00D9, 0xCD4D, 0x0000, 0x7587, 0xFEAA }, // 0x000022E0
   { 0x0002, 0x00D5, 0x00D3, 0x00D6, 0xD077, 0x0000, 0x8929, 0x019E }, // 0x000022F0
   { 0x0002, 0x005D, 0x005F, 0x005C, 0xCE8B, 0x0000, 0x89F2, 0xFDF8 }, // 0x00002300
   { 0x0002, 0x0053, 0x0064, 0x005F, 0x31DF, 0x0000, 0x8A1F, 0xFE81 }, // 0x00002310
   { 0x0002, 0x005C, 0x0061, 0x005B, 0x8A79, 0x0000, 0xCD4D, 0xFE65 }, // 0x00002320
   { 0x0002, 0x0053, 0x0054, 0x0063, 0x76D7, 0x0000, 0xD077, 0xFFC5 }, // 0x00002330
   { 0x0002, 0x005C, 0x0064, 0x0062, 0xCE8B, 0x0000, 0x89F2, 0xFDF8 }, // 0x00002340
   { 0x0002, 0x005B, 0x0060, 0x0059, 0x8929, 0x0000, 0x2F89, 0xFF9B }, // 0x00002350
   { 0x0002, 0x0059, 0x005E, 0x0057, 0xCD4D, 0x0000, 0x7587, 0x00D2 }, // 0x00002360
   { 0x0002, 0x0057, 0x0056, 0x0065, 0x2F89, 0x0000, 0x76D7, 0x0168 }, // 0x00002370
   { 0x0002, 0x0065, 0x0054, 0x0066, 0x75E1, 0x0000, 0x31DF, 0x00F0 }, // 0x00002380
   { 0x0002, 0x0067, 0x0078, 0x0073, 0x2FEE, 0x0000, 0x8951, 0xFF0D }, // 0x00002390
   { 0x0002, 0x0071, 0x0075, 0x006F, 0x8AF1, 0x0000, 0xCC3A, 0xFF2A }, // 0x000023A0
   { 0x0002, 0x0067, 0x006A, 0x0077, 0x76D7, 0x0000, 0xD077, 0xFF9C }, // 0x000023B0
   { 0x0002, 0x0071, 0x0078, 0x0076, 0xCFE9, 0x0000, 0x8962, 0xFEE8 }, // 0x000023C0
   { 0x0002, 0x006F, 0x0074, 0x006E, 0x89F2, 0x0000, 0x3175, 0xFFC7 }, // 0x000023D0
   { 0x0002, 0x006E, 0x0072, 0x006C, 0xCE21, 0x0000, 0x75E1, 0x0047 }, // 0x000023E0
   { 0x0002, 0x006C, 0x006B, 0x0079, 0x2EB4, 0x0000, 0x772C, 0x0078 }, // 0x000023F0
   { 0x0002, 0x0079, 0x006A, 0x007A, 0x7637, 0x0000, 0x3112, 0x0029 }, // 0x00002400
   { 0x0002, 0x007B, 0x008C, 0x0087, 0x32B3, 0x0000, 0x8A79, 0xFEAB }, // 0x00002410
   { 0x0002, 0x0084, 0x0089, 0x0083, 0x8A1F, 0x0000, 0xCE21, 0xFFE5 }, // 0x00002420
   { 0x0002, 0x007B, 0x007E, 0x008B, 0x76D7, 0x0000, 0xD077, 0xFED4 }, // 0x00002430
   { 0x0002, 0x0084, 0x008C, 0x008A, 0xCF1B, 0x0000, 0x89B6, 0xFF26 }, // 0x00002440
   { 0x0002, 0x0083, 0x0088, 0x0082, 0x8962, 0x0000, 0x3017, 0x008D }, // 0x00002450
   { 0x0002, 0x0082, 0x0086, 0x0081, 0xCE21, 0x0000, 0x75E1, 0x00AA }, // 0x00002460
   { 0x0002, 0x0081, 0x0080, 0x008D, 0x3017, 0x0000, 0x769E, 0x003C }, // 0x00002470
   { 0x0002, 0x008D, 0x007E, 0x008E, 0x75E1, 0x0000, 0x31DF, 0xFF72 }, // 0x00002480
   { 0x0002, 0x008F, 0x00A1, 0x009C, 0x3112, 0x0000, 0x89C9, 0xFF4A }, // 0x00002490
   { 0x0002, 0x009A, 0x009E, 0x0098, 0x8951, 0x0000, 0xD012, 0x0082 }, // 0x000024A0
   { 0x0002, 0x008F, 0x0091, 0x00A0, 0x772C, 0x0000, 0xD14C, 0xFED3 }, // 0x000024B0
   { 0x0002, 0x009A, 0x00A1, 0x009F, 0xCFE9, 0x0000, 0x8962, 0x0001 }, // 0x000024C0
   { 0x0002, 0x0098, 0x009D, 0x0096, 0x88D4, 0x0000, 0x2EB4, 0x008D }, // 0x000024D0
   { 0x0002, 0x0096, 0x009B, 0x0094, 0xCE21, 0x0000, 0x75E1, 0x000E }, // 0x000024E0
   { 0x0002, 0x0094, 0x0093, 0x00A2, 0x3017, 0x0000, 0x769E, 0xFF60 }, // 0x000024F0
   { 0x0002, 0x00A2, 0x0091, 0x00A3, 0x75E1, 0x0000, 0x31DF, 0xFED7 }, // 0x00002500
   { 0x0002, 0x00A4, 0x00B5, 0x00B0, 0x31DF, 0x0000, 0x8A1F, 0xFFCB }, // 0x00002510
   { 0x0002, 0x00AD, 0x00B2, 0x00AB, 0x89C9, 0x0000, 0xCEEE, 0x0162 }, // 0x00002520
   { 0x0002, 0x00A4, 0x00A6, 0x00B4, 0x760E, 0x0000, 0xCE8B, 0xFE93 }, // 0x00002530
   { 0x0002, 0x00AD, 0x00B5, 0x00B3, 0xD14C, 0x0000, 0x88D4, 0x00F9 }, // 0x00002540
   { 0x0002, 0x00AB, 0x00B1, 0x00AA, 0x899C, 0x0000, 0x30A7, 0x00CF }, // 0x00002550
   { 0x0002, 0x00AA, 0x00AF, 0x00A9, 0xCE21, 0x0000, 0x75E1, 0xFF8D }, // 0x00002560
   { 0x0002, 0x00A9, 0x00A7, 0x00B6, 0x2EB4, 0x0000, 0x772C, 0xFE67 }, // 0x00002570
   { 0x0002, 0x00B6, 0x00A6, 0x00B7, 0x750F, 0x0000, 0x33C6, 0xFDF3 }, // 0x00002580
   { 0x0002, 0x00B8, 0x00C9, 0x00C4, 0x31DF, 0x0000, 0x8A1F, 0x009C }, // 0x00002590
   { 0x0002, 0x00C2, 0x00C6, 0x00C0, 0x89C9, 0x0000, 0xCEEE, 0x007E }, // 0x000025A0
   { 0x0002, 0x00B8, 0x00BB, 0x00C8, 0x769E, 0x0000, 0xCFE9, 0xFFC4 }, // 0x000025B0
   { 0x0002, 0x00C2, 0x00C9, 0x00C7, 0xCFE9, 0x0000, 0x8962, 0x00F0 }, // 0x000025C0
   { 0x0002, 0x00C0, 0x00C5, 0x00BF, 0x890C, 0x0000, 0x2F41, 0xFF9E }, // 0x000025D0
   { 0x0002, 0x00BF, 0x00C3, 0x00BD, 0xCEEE, 0x0000, 0x7637, 0xFEB9 }, // 0x000025E0
   { 0x0002, 0x00BD, 0x00BC, 0x00CA, 0x2F41, 0x0000, 0x76F4, 0xFE70 }, // 0x000025F0
   { 0x0002, 0x00CA, 0x00BB, 0x00CB, 0x756B, 0x0000, 0x32F4, 0xFED5 }, // 0x00002600
   { 0x0002, 0x00CD, 0x00DC, 0x00CC, 0x756B, 0x0000, 0x32F4, 0xFDF2 }, // 0x00002610
   { 0x0002, 0x00D9, 0x00DA, 0x00CD, 0x2EB4, 0x0000, 0x772C, 0xFDC3 }, // 0x00002620
   { 0x0002, 0x00D8, 0x00D4, 0x00D9, 0xCD4D, 0x0000, 0x7587, 0xFEAA }, // 0x00002630
   { 0x0002, 0x00D7, 0x00D2, 0x00D8, 0x89F2, 0x0000, 0x3175, 0x0028 }, // 0x00002640
   { 0x0002, 0x00D6, 0x00CE, 0x00D0, 0xD077, 0x0000, 0x8929, 0x019E }, // 0x00002650
   { 0x0002, 0x00DF, 0x00DC, 0x00CF, 0x760E, 0x0000, 0xCE8B, 0xFF38 }, // 0x00002660
   { 0x0002, 0x00D6, 0x00D1, 0x00D7, 0x8A1F, 0x0000, 0xCE21, 0x0162 }, // 0x00002670
   { 0x0002, 0x00DF, 0x00CE, 0x00D3, 0x32B3, 0x0000, 0x8A79, 0x00AD }, // 0x00002680
   { 0x0002, 0x0053, 0x0063, 0x0064, 0x31DF, 0x0000, 0x8A1F, 0xFE81 }, // 0x00002690
   { 0x0002, 0x005C, 0x0062, 0x0061, 0x8A79, 0x0000, 0xCD4D, 0xFE65 }, // 0x000026A0
   { 0x0002, 0x0053, 0x0066, 0x0054, 0x76D7, 0x0000, 0xD077, 0xFFC5 }, // 0x000026B0
   { 0x0002, 0x005C, 0x005F, 0x0064, 0xCE8B, 0x0000, 0x89F2, 0xFDF8 }, // 0x000026C0
   { 0x0002, 0x005B, 0x0061, 0x0060, 0x8929, 0x0000, 0x2F89, 0xFF9B }, // 0x000026D0
   { 0x0002, 0x0059, 0x0060, 0x005E, 0xCD4D, 0x0000, 0x7587, 0x00D2 }, // 0x000026E0
   { 0x0002, 0x0057, 0x005E, 0x0056, 0x2F89, 0x0000, 0x76D7, 0x0168 }, // 0x000026F0
   { 0x0002, 0x0065, 0x0056, 0x0054, 0x75E1, 0x0000, 0x31DF, 0x00F0 }, // 0x00002700
   { 0x0002, 0x0067, 0x0077, 0x0078, 0x2FEE, 0x0000, 0x8951, 0xFF0D }, // 0x00002710
   { 0x0002, 0x0071, 0x0076, 0x0075, 0x8AF1, 0x0000, 0xCC3A, 0xFF2A }, // 0x00002720
   { 0x0002, 0x0067, 0x007A, 0x006A, 0x76D7, 0x0000, 0xD077, 0xFF9C }, // 0x00002730
   { 0x0002, 0x0071, 0x0073, 0x0078, 0xCFE9, 0x0000, 0x8962, 0xFEE8 }, // 0x00002740
   { 0x0002, 0x006F, 0x0075, 0x0074, 0x89F2, 0x0000, 0x3175, 0xFFC7 }, // 0x00002750
   { 0x0002, 0x006E, 0x0074, 0x0072, 0xCE21, 0x0000, 0x75E1, 0x0047 }, // 0x00002760
   { 0x0002, 0x006C, 0x0072, 0x006B, 0x2EB4, 0x0000, 0x772C, 0x0078 }, // 0x00002770
   { 0x0002, 0x0079, 0x006B, 0x006A, 0x7637, 0x0000, 0x3112, 0x0029 }, // 0x00002780
   { 0x0002, 0x007B, 0x008B, 0x008C, 0x32B3, 0x0000, 0x8A79, 0xFEAB }, // 0x00002790
   { 0x0002, 0x0084, 0x008A, 0x0089, 0x8A1F, 0x0000, 0xCE21, 0xFFE5 }, // 0x000027A0
   { 0x0002, 0x007B, 0x008E, 0x007E, 0x76D7, 0x0000, 0xD077, 0xFED4 }, // 0x000027B0
   { 0x0002, 0x0084, 0x0087, 0x008C, 0xCF1B, 0x0000, 0x89B6, 0xFF26 }, // 0x000027C0
   { 0x0002, 0x0083, 0x0089, 0x0088, 0x8962, 0x0000, 0x3017, 0x008D }, // 0x000027D0
   { 0x0002, 0x0082, 0x0088, 0x0086, 0xCE21, 0x0000, 0x75E1, 0x00AA }, // 0x000027E0
   { 0x0002, 0x0081, 0x0086, 0x0080, 0x3017, 0x0000, 0x769E, 0x003C }, // 0x000027F0
   { 0x0002, 0x008D, 0x0080, 0x007E, 0x75E1, 0x0000, 0x31DF, 0xFF72 }, // 0x00002800
   { 0x0002, 0x008F, 0x00A0, 0x00A1, 0x3112, 0x0000, 0x89C9, 0xFF4A }, // 0x00002810
   { 0x0002, 0x009A, 0x009F, 0x009E, 0x8951, 0x0000, 0xD012, 0x0082 }, // 0x00002820
   { 0x0002, 0x008F, 0x00A3, 0x0091, 0x772C, 0x0000, 0xD14C, 0xFED3 }, // 0x00002830
   { 0x0002, 0x009A, 0x009C, 0x00A1, 0xCFE9, 0x0000, 0x8962, 0x0001 }, // 0x00002840
   { 0x0002, 0x0098, 0x009E, 0x009D, 0x88D4, 0x0000, 0x2EB4, 0x008D }, // 0x00002850
   { 0x0002, 0x0096, 0x009D, 0x009B, 0xCE21, 0x0000, 0x75E1, 0x000E }, // 0x00002860
   { 0x0002, 0x0094, 0x009B, 0x0093, 0x3017, 0x0000, 0x769E, 0xFF60 }, // 0x00002870
   { 0x0002, 0x00A2, 0x0093, 0x0091, 0x75E1, 0x0000, 0x31DF, 0xFED7 }, // 0x00002880
   { 0x0002, 0x00A4, 0x00B4, 0x00B5, 0x31DF, 0x0000, 0x8A1F, 0xFFCB }, // 0x00002890
   { 0x0002, 0x00AD, 0x00B3, 0x00B2, 0x89C9, 0x0000, 0xCEEE, 0x0162 }, // 0x000028A0
   { 0x0002, 0x00A4, 0x00B7, 0x00A6, 0x760E, 0x0000, 0xCE8B, 0xFE93 }, // 0x000028B0
   { 0x0002, 0x00AD, 0x00B0, 0x00B5, 0xD14C, 0x0000, 0x88D4, 0x00F9 }, // 0x000028C0
   { 0x0002, 0x00AB, 0x00B2, 0x00B1, 0x899C, 0x0000, 0x30A7, 0x00CF }, // 0x000028D0
   { 0x0002, 0x00AA, 0x00B1, 0x00AF, 0xCE21, 0x0000, 0x75E1, 0xFF8D }, // 0x000028E0
   { 0x0002, 0x00A9, 0x00AF, 0x00A7, 0x2EB4, 0x0000, 0x772C, 0xFE67 }, // 0x000028F0
   { 0x0002, 0x00B6, 0x00A7, 0x00A6, 0x750F, 0x0000, 0x33C6, 0xFDF3 }, // 0x00002900
   { 0x0002, 0x00B8, 0x00C8, 0x00C9, 0x31DF, 0x0000, 0x8A1F, 0x009C }, // 0x00002910
   { 0x0002, 0x00C2, 0x00C7, 0x00C6, 0x89C9, 0x0000, 0xCEEE, 0x007E }, // 0x00002920
   { 0x0002, 0x00B8, 0x00CB, 0x00BB, 0x769E, 0x0000, 0xCFE9, 0xFFC4 }, // 0x00002930
   { 0x0002, 0x00C2, 0x00C4, 0x00C9, 0xCFE9, 0x0000, 0x8962, 0x00F0 }, // 0x00002940
   { 0x0002, 0x00C0, 0x00C6, 0x00C5, 0x890C, 0x0000, 0x2F41, 0xFF9E }, // 0x00002950
   { 0x0002, 0x00BF, 0x00C5, 0x00C3, 0xCEEE, 0x0000, 0x7637, 0xFEB9 }, // 0x00002960
   { 0x0002, 0x00BD, 0x00C3, 0x00BC, 0x2F41, 0x0000, 0x76F4, 0xFE70 }, // 0x00002970
   { 0x0002, 0x00CA, 0x00BC, 0x00BB, 0x756B, 0x0000, 0x32F4, 0xFED5 }, // 0x00002980
   { 0x0002, 0x00CD, 0x00DA, 0x00DC, 0x756B, 0x0000, 0x32F4, 0xFDF2 }, // 0x00002990
   { 0x0002, 0x00D9, 0x00D4, 0x00DA, 0x2EB4, 0x0000, 0x772C, 0xFDC3 }, // 0x000029A0
   { 0x0002, 0x00D8, 0x00D2, 0x00D4, 0xCD4D, 0x0000, 0x7587, 0xFEAA }, // 0x000029B0
   { 0x0002, 0x00D7, 0x00D1, 0x00D2, 0x89F2, 0x0000, 0x3175, 0x0028 }, // 0x000029C0
   { 0x0002, 0x00D6, 0x00D3, 0x00CE, 0xD077, 0x0000, 0x8929, 0x019E }, // 0x000029D0
   { 0x0002, 0x00DF, 0x00CC, 0x00DC, 0x760E, 0x0000, 0xCE8B, 0xFF38 }, // 0x000029E0
   { 0x0002, 0x00D6, 0x00D0, 0x00D1, 0x8A1F, 0x0000, 0xCE21, 0x0162 }, // 0x000029F0
   { 0x0002, 0x00DF, 0x00CF, 0x00CE, 0x32B3, 0x0000, 0x8A79, 0x00AD }, // 0x00002A00

}; 

u32 gDekuPlatformsCol_polygonTypes_00002A10[] = {
   0x00000000, 0x00000000,
   0x0000000C, 0x00000080,
   0x0000000C, 0x0000008A,
}; 

CollisionHeader gDekuPlatformsCol = { -272, -100, -490, 482, 160, 500, 224, gDekuPlatformsCol_vtx_00001430, 266, gDekuPlatformsCol_polygons_00001970, gDekuPlatformsCol_polygonTypes_00002A10, NULL, 0, NULL }; 

static Vtx crashboxVtx_000730[20];

u64 crashboxTex_000000[] = {
#include "assets/objects/gameplay_dangeon_keep/crashboxTex_000000.ci8.inc.c"
};

u64 crashboxTex_000400[] = {
#include "assets/objects/gameplay_dangeon_keep/crashboxTex_000400.rgb5a1.inc.c"
};

static u32 pad62C = 0;

Vec3s gCrashboxCol_vtx_00000630[] = {
   { -60, 0, 60 }, // 0x00000630
   { -60, 120, 60 }, // 0x00000636
   { -60, 0, -60 }, // 0x0000063C
   { -60, 120, -60 }, // 0x00000642
   { 60, 0, 60 }, // 0x00000648
   { 60, 120, 60 }, // 0x0000064E
   { 60, 0, -60 }, // 0x00000654
   { 60, 120, -60 }, // 0x0000065A
}; 

CollisionPoly gCrashboxCol_polygons_00000660[] = {
   { 0x0000, 0x0001, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000, 0xFFC4 }, // 0x00000660
   { 0x0000, 0x0003, 0x0006, 0x0002, 0x0000, 0x0000, 0x8001, 0xFFC4 }, // 0x00000670
   { 0x0000, 0x0007, 0x0004, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFFC4 }, // 0x00000680
   { 0x0000, 0x0005, 0x0000, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFFC4 }, // 0x00000690
   { 0x0000, 0x0006, 0x0000, 0x0002, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x000006A0
   { 0x0000, 0x0003, 0x0005, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFF88 }, // 0x000006B0
   { 0x0000, 0x0001, 0x0003, 0x0002, 0x8001, 0x0000, 0x0000, 0xFFC4 }, // 0x000006C0
   { 0x0000, 0x0003, 0x0007, 0x0006, 0x0000, 0x0000, 0x8001, 0xFFC4 }, // 0x000006D0
   { 0x0000, 0x0007, 0x0005, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFFC4 }, // 0x000006E0
   { 0x0000, 0x0005, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFFC4 }, // 0x000006F0
   { 0x0000, 0x0006, 0x0004, 0x0000, 0x0000, 0x8001, 0x0000, 0x0000 }, // 0x00000700
   { 0x0000, 0x0003, 0x0001, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFF88 }, // 0x00000710

}; 

u32 gCrashboxCol_polygonTypes_00000720[] = {
   0x00000000, 0x000007C2,
}; 

CollisionHeader gCrashboxCol = { -60, 0, -60, 60, 120, 60, 8, gCrashboxCol_vtx_00000630, 12, gCrashboxCol_polygons_00000660, gCrashboxCol_polygonTypes_00000720, NULL, 0, NULL }; 

static Vtx crashboxVtx_000730[20] = {
    VTX(-60, 120, 60, 1024, 0, 244, 120, 38, 255),
    VTX(-60, 0, -60, 0, 1024, 136, 219, 245, 255),
    VTX(-60, 0, 60, 1024, 1024, 255, 135, 35, 255),
    VTX(-60, 120, -60, 1024, 0, 245, 120, 219, 255),
    VTX(60, 0, -60, 0, 1024, 3, 135, 221, 255),
    VTX(-60, 0, -60, 1024, 1024, 136, 219, 245, 255),
    VTX(60, 120, -60, 1024, 0, 120, 11, 219, 255),
    VTX(60, 0, 60, 0, 1024, 38, 136, 11, 255),
    VTX(60, 0, -60, 1024, 1024, 3, 135, 221, 255),
    VTX(60, 120, 60, 1024, 0, 11, 120, 37, 255),
    VTX(-60, 0, 60, 0, 1024, 255, 135, 35, 255),
    VTX(60, 0, 60, 1024, 1024, 38, 136, 11, 255),
    VTX(60, 0, -60, 1024, 0, 3, 135, 221, 255),
    VTX(60, 120, 60, 0, 1024, 11, 120, 37, 255),
    VTX(60, 120, -60, 1024, 1024, 120, 11, 219, 255),
    VTX(-60, 120, -60, 0, 0, 245, 120, 219, 255),
    VTX(60, 120, -60, 0, 0, 120, 11, 219, 255),
    VTX(60, 120, 60, 0, 0, 11, 120, 37, 255),
    VTX(-60, 120, 60, 0, 0, 244, 120, 38, 255),
    VTX(60, 0, 60, 0, 0, 38, 136, 11, 255),
}; 

Gfx gCrashboxDL[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 12, 2, 0x00002000),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, crashboxTex_000400),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, crashboxTex_000000),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(255, 255, 255, 255),
    gsSPVertex(&crashboxVtx_000730[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 10, 5, 0, 3, 13, 14, 0),
    gsSP2Triangles(0, 15, 1, 0, 3, 16, 4, 0),
    gsSP2Triangles(6, 17, 7, 0, 9, 18, 10, 0),
    gsSP2Triangles(12, 19, 10, 0, 3, 18, 13, 0),
    gsSPEndDisplayList(),
}; 

CamData gBetaFloorSwitchCol_camDataList_00005EA0[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

u32 gBetaFloorSwitchCol_polygonTypes_00005EA8[] = {
   0x00000000, 0x000007C2,
}; 

CollisionPoly gBetaFloorSwitchCol_polygons_00005EB0[] = {
   { 0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFFF6 }, // 0x00005EB0
   { 0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFFF6 }, // 0x00005EC0
   { 0x0000, 0x2004, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFF92 }, // 0x00005ED0
   { 0x0000, 0x2004, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFF92 }, // 0x00005EE0
   { 0x0000, 0x2008, 0x0005, 0x0004, 0x5A82, 0x5A82, 0x0000, 0xFF6C }, // 0x00005EF0
   { 0x0000, 0x2008, 0x0004, 0x0009, 0x5A82, 0x5A82, 0x0000, 0xFF6C }, // 0x00005F00
   { 0x0000, 0x200A, 0x0006, 0x0005, 0x0000, 0x5A82, 0xA57E, 0xFF6C }, // 0x00005F10
   { 0x0000, 0x200A, 0x0005, 0x0008, 0x0000, 0x5A82, 0xA57E, 0xFF6C }, // 0x00005F20
   { 0x0000, 0x200B, 0x0007, 0x0006, 0xA57E, 0x5A82, 0x0000, 0xFF6C }, // 0x00005F30
   { 0x0000, 0x200B, 0x0006, 0x000A, 0xA57E, 0x5A82, 0x0000, 0xFF6C }, // 0x00005F40
   { 0x0000, 0x2009, 0x0004, 0x0007, 0x0000, 0x5A82, 0x5A82, 0xFF6C }, // 0x00005F50
   { 0x0000, 0x2009, 0x0007, 0x000B, 0x0000, 0x5A82, 0x5A82, 0xFF6C }, // 0x00005F60

}; 

Vec3s gBetaFloorSwitchCol_vtx_00005F70[] = {
   { 240, 10, 240 }, // 0x00005F70
   { 240, 10, -240 }, // 0x00005F76
   { -240, 10, -240 }, // 0x00005F7C
   { -240, 10, 240 }, // 0x00005F82
   { 200, 205, 200 }, // 0x00005F88 
   { 200, 205, -200 }, // 0x00005F8E
   { -200, 205, -200 }, // 0x00005F94
   { -200, 205, 200 }, // 0x00005F9A 
   { 200, 10, -200 }, // 0x00005FA0
   { 200, 10, 200 }, // 0x00005FA6
   { -200, 10, -200 }, // 0x00005FAC
   { -200, 10, 200 }, // 0x00005FB2
}; 

CollisionHeader gBetaFloorSwitchCol = { -240, 10, -240, 240, 205, 240, 12, gBetaFloorSwitchCol_vtx_00005F70, 12, gBetaFloorSwitchCol_polygons_00005EB0, gBetaFloorSwitchCol_polygonTypes_00005EA8, &gBetaFloorSwitchCol_camDataList_00005EA0, 0, 0 }; 

