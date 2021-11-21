#include "z_bg_hidan_fslift.h"

static u64 hookliftTex_000F90[] = {
#include "assets/overlays/ovl_Bg_Hidan_Fslift/hookliftTex_000F90.rgb5a1.inc.c"
};

static u64 hookliftTex_000FB0[] = {
#include "assets/overlays/ovl_Bg_Hidan_Fslift/hookliftTex_000FB0.ci4.inc.c"
};

static u64 hookliftTex_00A7D0[] = {
#include "assets/overlays/ovl_Bg_Hidan_Fslift/hookliftTex_00A7D0.rgb5a1.inc.c"
};

static u64 hookliftTex_0019B0[] = {
#include "assets/overlays/ovl_Bg_Hidan_Fslift/hookliftTex_0019B0.ci4.inc.c"
};

static u64 hookliftTex_0057D0[] = {
#include "assets/overlays/ovl_Bg_Hidan_Fslift/hookliftTex_0057D0.rgb5a1.inc.c"
};

static u64 hookliftTex_0067D0[] = {
#include "assets/overlays/ovl_Bg_Hidan_Fslift/hookliftTex_0067D0.rgb5a1.inc.c"
};

static Vtx hookliftVtx_0005A0[16] = {
    VTX(200, 1000, -200, 0, 0, 157, 157, 148, 255),    VTX(200, 200, -200, 0, 2048, 80, 78, 72, 255),
    VTX(200, 200, -600, 1024, 2048, 80, 78, 72, 255),  VTX(200, 1000, -600, 1024, 0, 107, 106, 96, 255),
    VTX(-200, 1000, -600, 0, 0, 157, 157, 148, 255),   VTX(-200, 200, -600, 0, 2048, 80, 78, 72, 255),
    VTX(-200, 200, -200, 1024, 2048, 80, 78, 72, 255), VTX(-200, 1000, -200, 1024, 0, 107, 106, 96, 255),
    VTX(200, 1000, -600, 0, 0, 157, 157, 148, 255),    VTX(200, 200, -600, 0, 2048, 80, 78, 72, 255),
    VTX(-200, 200, -600, 1024, 2048, 80, 78, 72, 255), VTX(-200, 1000, -600, 1024, 0, 107, 106, 96, 255),
    VTX(200, 1000, -200, 1024, 0, 107, 106, 96, 255),  VTX(-200, 1000, -200, 0, 0, 157, 157, 148, 255),
    VTX(-200, 200, -200, 0, 2048, 80, 78, 72, 255),    VTX(200, 200, -200, 1024, 2048, 80, 78, 72, 255),
};

static Vtx hookliftVtx_0006A0[16] = {
    VTX(-400, 0, -400, 3413, 965, 80, 78, 72, 255),  VTX(-600, 200, -600, 4096, 0, 80, 78, 72, 255),
    VTX(600, 200, -600, 0, 0, 80, 78, 72, 255),      VTX(400, 0, -400, 683, 965, 107, 106, 96, 255),
    VTX(400, 0, -400, 3413, 965, 107, 106, 96, 255), VTX(600, 200, -600, 4096, 0, 80, 78, 72, 255),
    VTX(600, 200, 600, 0, 0, 80, 78, 72, 255),       VTX(400, 0, 400, 683, 965, 80, 78, 72, 255),
    VTX(400, 0, 400, 2389, 965, 80, 78, 72, 255),    VTX(600, 200, 600, 3072, 0, 80, 78, 72, 255),
    VTX(-600, 200, 600, -1024, 0, 80, 78, 72, 255),  VTX(-400, 0, 400, -341, 965, 80, 78, 72, 255),
    VTX(-400, 0, 400, 3413, 965, 80, 78, 72, 255),   VTX(-600, 200, 600, 4096, 0, 80, 78, 72, 255),
    VTX(-600, 200, -600, 0, 0, 80, 78, 72, 255),     VTX(-400, 0, -400, 683, 965, 80, 78, 72, 255),
};

static Vtx hookliftVtx_0007A0[16] = {
    VTX(-200, 1400, -600, 1024, 0, 206, 205, 201, 255),    VTX(200, 1400, -600, -1024, 0, 206, 205, 201, 255),
    VTX(200, 1000, -600, -1024, 2048, 206, 205, 201, 255), VTX(-200, 1000, -600, 1024, 2048, 107, 106, 96, 255),
    VTX(-200, 1400, -200, 1024, 0, 206, 205, 201, 255),    VTX(-200, 1400, -600, -1024, 0, 206, 205, 201, 255),
    VTX(-200, 1000, -600, -1024, 2048, 107, 106, 96, 255), VTX(-200, 1000, -200, 1024, 2048, 206, 205, 201, 255),
    VTX(200, 1400, -600, 1024, -2048, 206, 205, 201, 255), VTX(200, 1400, -200, -1024, -2048, 206, 205, 201, 255),
    VTX(200, 1000, -200, -1024, 0, 206, 205, 201, 255),    VTX(200, 1000, -600, 1024, 0, 206, 205, 201, 255),
    VTX(-200, 1400, -600, -1024, 0, 206, 205, 201, 255),   VTX(-200, 1400, -200, -1024, 2048, 206, 205, 201, 255),
    VTX(200, 1400, -200, 1024, 2048, 206, 205, 201, 255),  VTX(200, 1400, -600, 1024, 0, 206, 205, 201, 255),
};

static Vtx hookliftVtx_0008A0[5] = {
    VTX(200, 1000, -200, 1024, 2048, 206, 205, 201, 255), VTX(200, 1400, -200, 1024, 0, 206, 205, 201, 255),
    VTX(0, 1200, -200, 0, 1024, 206, 205, 201, 255),      VTX(-200, 1000, -200, -1024, 2048, 206, 205, 201, 255),
    VTX(-200, 1400, -200, -1024, 0, 206, 205, 201, 255),
};

static Vtx hookliftVtx_0008F0[15] = {
    VTX(-600, 200, -200, -2048, 1024, 80, 78, 72, 255), VTX(-600, 200, 600, -2048, 3072, 80, 78, 72, 255),
    VTX(-200, 200, -200, -1024, 1024, 80, 78, 72, 255), VTX(400, 0, 400, -1024, 2048, 80, 78, 72, 255),
    VTX(-400, 0, 400, 3072, 2048, 80, 78, 72, 255),     VTX(0, 0, 0, 1024, 0, 206, 205, 201, 255),
    VTX(400, 0, -400, -1024, -2048, 107, 106, 96, 255), VTX(-400, 0, -400, 3072, -2048, 80, 78, 72, 255),
    VTX(-600, 200, -600, -2048, 0, 80, 78, 72, 255),    VTX(-200, 200, -600, -1024, 0, 80, 78, 72, 255),
    VTX(200, 200, -200, 0, 1024, 80, 78, 72, 255),      VTX(600, 200, -200, 1024, 1024, 80, 78, 72, 255),
    VTX(600, 200, -600, 1024, 0, 80, 78, 72, 255),      VTX(200, 200, -600, 0, 0, 80, 78, 72, 255),
    VTX(600, 200, 600, 1024, 3072, 80, 78, 72, 255),
};

Gfx gBetaHookliftDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(hookliftTex_0019B0, G_IM_FMT_CI, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, hookliftTex_000F90),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 147, 111, 93, 255),
    gsSPVertex(&hookliftVtx_0005A0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(hookliftTex_00A7D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hookliftVtx_0006A0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hookliftTex_0067D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hookliftVtx_0007A0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hookliftTex_0057D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&hookliftVtx_0008A0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock_4b(hookliftTex_000FB0, G_IM_FMT_CI, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                            G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal16(0, hookliftTex_000F90),
    gsSPVertex(&hookliftVtx_0008F0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 5, 4, 7, 0),
    gsSP2Triangles(6, 5, 7, 0, 8, 0, 2, 0),
    gsSP2Triangles(8, 2, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 10, 2, 0),
    gsSP2Triangles(14, 2, 1, 0, 14, 11, 10, 0),
    gsSPEndDisplayList(),
};

CamData gBetaHookliftCol_camDataList_00000CA0[1] = {
    { 0x0000, 0, 0x00000000 },
};

SurfaceType gBetaHookliftCol_surfaceType_00000CA8[] = {
    { 0x00000000, 0x000007C0 },
    { 0x00000000, 0x000207C0 },
};

CollisionPoly gBetaHookliftCol_polygons_00000CB0[] = {
    { 0x0000, 0x0000, 0x0001, 0x0002, 0xA57E, 0xA57E, 0x0000, 0xFEE5 },
    { 0x0000, 0x0000, 0x0002, 0x0003, 0xA57E, 0xA57E, 0x0000, 0xFEE5 },
    { 0x0000, 0x0004, 0x0005, 0x0001, 0x0000, 0xA57E, 0x5A82, 0xFEE5 },
    { 0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0xA57E, 0x5A82, 0xFEE5 },
    { 0x0000, 0x0006, 0x0007, 0x0005, 0x5A82, 0xA57E, 0x0000, 0xFEE5 },
    { 0x0000, 0x0006, 0x0005, 0x0004, 0x5A82, 0xA57E, 0x0000, 0xFEE5 },
    { 0x0000, 0x0003, 0x0002, 0x0007, 0x0000, 0xA57E, 0xA57E, 0xFEE5 },
    { 0x0000, 0x0003, 0x0007, 0x0006, 0x0000, 0xA57E, 0xA57E, 0xFEE5 },
    { 0x0000, 0x0008, 0x0009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFA88 },
    { 0x0000, 0x0008, 0x000A, 0x000B, 0x0000, 0x7FFF, 0x0000, 0xFA88 },
    { 0x0000, 0x000C, 0x000D, 0x000B, 0x7FFF, 0x0000, 0x0000, 0xFF38 },
    { 0x0000, 0x000C, 0x000B, 0x000A, 0x7FFF, 0x0000, 0x0000, 0xFF38 },
    { 0x0000, 0x000E, 0x000F, 0x0009, 0x8001, 0x0000, 0x0000, 0xFF38 },
    { 0x0000, 0x000E, 0x0009, 0x0008, 0x8001, 0x0000, 0x0000, 0xFF38 },
    { 0x0000, 0x000D, 0x000E, 0x0008, 0x0000, 0x0000, 0x8001, 0xFDA8 },
    { 0x0000, 0x000D, 0x0008, 0x000B, 0x0000, 0x0000, 0x8001, 0xFDA8 },
    { 0x0000, 0x000C, 0x000F, 0x000E, 0x0000, 0x8001, 0x0000, 0x00C8 },
    { 0x0000, 0x000C, 0x000E, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFF38 },
    { 0x0000, 0x000C, 0x0002, 0x0001, 0x0000, 0x7FFF, 0x0000, 0xFF38 },
    { 0x0000, 0x000C, 0x0001, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFF38 },
    { 0x0000, 0x000C, 0x0005, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFF38 },
    { 0x0000, 0x000C, 0x0007, 0x000D, 0x0000, 0x7FFF, 0x0000, 0xFF38 },
    { 0x0001, 0x000A, 0x0009, 0x000F, 0x0000, 0x0000, 0x7FFF, 0x00C8 },
    { 0x0001, 0x000A, 0x000F, 0x000C, 0x0000, 0x0000, 0x7FFF, 0x00C8 },
    { 0x0000, 0x0006, 0x0004, 0x0000, 0x0000, 0x8001, 0x0000, 0x0000 },
    { 0x0000, 0x0006, 0x0000, 0x0003, 0x0000, 0x8001, 0x0000, 0x0000 },

};

Vec3s gBetaHookliftCol_vtx_00000E50[] = {
    { -400, 0, 400 },     { -600, 200, 600 },   { -600, 200, -600 }, { -400, 0, -400 },
    { 400, 0, 400 },      { 600, 200, 600 },    { 400, 0, -400 },    { 600, 200, -600 },
    { -200, 1400, -600 }, { -200, 1400, -200 }, { 200, 1400, -200 }, { 200, 1400, -600 },
    { 200, 200, -200 },   { 200, 200, -600 },   { -200, 200, -600 }, { -200, 200, -200 },
};

CollisionHeader gBetaHookliftCol = { { -600, 0, -600 },
                                     { 600, 1400, 600 },
                                     16,
                                     gBetaHookliftCol_vtx_00000E50,
                                     26,
                                     gBetaHookliftCol_polygons_00000CB0,
                                     gBetaHookliftCol_surfaceType_00000CA8,
                                     gBetaHookliftCol_camDataList_00000CA0,
                                     0,
                                     NULL };
