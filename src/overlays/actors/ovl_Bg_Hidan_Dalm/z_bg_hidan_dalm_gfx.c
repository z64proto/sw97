#include "z_bg_hidan_dalm.h"

static u64 megatonblockTex_0004C0[] = {
#include "assets/overlays/ovl_Bg_Hidan_Dalm/megatonblockTex_0004C0.rgb5a1.inc.c"
};

static u64 megatonblockTex_0014E0[] = {
#include "assets/overlays/ovl_Bg_Hidan_Dalm/megatonblockTex_0014E0.ci4.inc.c"
};

static u64 megatonblockTex_008D00[] = {
#include "assets/overlays/ovl_Bg_Hidan_Dalm/megatonblockTex_008D00.rgb5a1.inc.c"
};

static Vtx megatonblockVtx_000000[21] = {
    VTX(300, 300, 0, 1024, 1024, 107, 106, 96, 255),  VTX(300, 600, -300, 0, 0, 134, 130, 120, 255),
    VTX(300, 600, 300, 2048, 0, 102, 92, 76, 255),    VTX(300, 0, 300, 2048, 2048, 94, 92, 83, 255),
    VTX(300, 0, -300, 0, 2048, 94, 92, 83, 255),      VTX(300, 300, 0, 1024, 1024, 107, 106, 96, 255),
    VTX(0, 300, -300, 1024, 1024, 107, 106, 96, 255), VTX(-300, 600, -300, 0, 0, 134, 130, 120, 255),
    VTX(300, 600, -300, 2048, 0, 102, 92, 76, 255),   VTX(300, 0, -300, 2048, 2048, 94, 92, 83, 255),
    VTX(0, 300, 300, 1024, 1024, 107, 106, 96, 255),  VTX(300, 600, 300, 2048, 0, 134, 130, 120, 255),
    VTX(-300, 600, 300, 0, 0, 102, 92, 76, 255),      VTX(300, 0, 300, 2048, 2048, 94, 92, 83, 255),
    VTX(-300, 0, -300, 0, 2048, 94, 92, 83, 255),     VTX(-300, 0, 300, 0, 2048, 94, 92, 83, 255),
    VTX(-300, 600, 300, 0, 0, 134, 130, 120, 255),    VTX(-300, 300, 0, 1024, 1024, 107, 106, 96, 255),
    VTX(-300, 300, 0, 1024, 1024, 107, 106, 96, 255), VTX(-300, 600, -300, 2048, 0, 102, 92, 76, 255),
    VTX(-300, 0, -300, 2048, 2048, 94, 92, 83, 255),
};

static Vtx megatonblockVtx_000150[5] = {
    VTX(300, 600, 300, 0, 0, 102, 92, 76, 255),     VTX(0, 600, 0, 1024, 1024, 178, 170, 152, 255),
    VTX(-300, 600, 300, 0, 2048, 102, 92, 76, 255), VTX(-300, 600, -300, 2048, 2048, 102, 92, 76, 255),
    VTX(300, 600, -300, 2048, 0, 102, 92, 76, 255),
};

Gfx gBetaMegatonBlockDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(megatonblockTex_0014E0, G_IM_FMT_CI, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, megatonblockTex_0004C0),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 185, 124, 94, 255),
    gsSPVertex(&megatonblockVtx_000000[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 7, 6, 0, 14, 6, 9, 0),
    gsSP2Triangles(10, 12, 15, 0, 13, 10, 15, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 16, 19, 0),
    gsSP2Triangles(18, 19, 20, 0, 15, 17, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(megatonblockTex_008D00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&megatonblockVtx_000150[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 0, 4, 0, 1, 4, 3, 0),
    gsSPEndDisplayList(),
};

CamData gBetaMegatonBlockCol_camDataList_00000300[1] = {
    { 0x0000, 0, 0x00000000 },
};

SurfaceType gBetaMegatonBlockCol_surfaceType_00000308[] = {
    { 0x00000000, 0x000007C0 },
};

CollisionPoly gBetaMegatonBlockCol_polygons_00000310[] = {
    { 0x0000, 0x0000, 0x0001, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFED4 },
    { 0x0000, 0x0003, 0x0000, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFED4 },
    { 0x0000, 0x0004, 0x0005, 0x0000, 0x0000, 0x0000, 0x8001, 0xFED4 },
    { 0x0000, 0x0004, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xFED4 },
    { 0x0000, 0x0002, 0x0001, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xFED4 },
    { 0x0000, 0x0002, 0x0006, 0x0007, 0x0000, 0x0000, 0x7FFF, 0xFED4 },
    { 0x0000, 0x0005, 0x0006, 0x0001, 0x0000, 0x7FFF, 0x0000, 0xFDA8 },
    { 0x0000, 0x0005, 0x0001, 0x0000, 0x0000, 0x7FFF, 0x0000, 0xFDA8 },
    { 0x0000, 0x0006, 0x0005, 0x0004, 0x8001, 0x0000, 0x0000, 0xFED4 },
    { 0x0000, 0x0007, 0x0006, 0x0004, 0x8001, 0x0000, 0x0000, 0xFED4 },

};

Vec3s gBetaMegatonBlockCol_vtx_000003B0[] = {
    { 300, 600, -300 }, { 300, 600, 300 },   { 300, 0, 300 },    { 300, 0, -300 },
    { -300, 0, -300 },  { -300, 600, -300 }, { -300, 600, 300 }, { -300, 0, 300 },
};

CollisionHeader gBetaMegatonBlockCol = { { -300, 0, -300 },
                                         { 300, 600, 300 },
                                         8,
                                         gBetaMegatonBlockCol_vtx_000003B0,
                                         10,
                                         gBetaMegatonBlockCol_polygons_00000310,
                                         gBetaMegatonBlockCol_surfaceType_00000308,
                                         gBetaMegatonBlockCol_camDataList_00000300,
                                         0,
                                         NULL };
