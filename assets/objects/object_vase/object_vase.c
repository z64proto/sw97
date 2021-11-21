#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_vase.h"

static Vtx object_vaseVtx_0001A0[32];
static Vtx object_vaseVtx_0003A0[27];
static Vtx object_vaseVtx_000550[4];

Gfx gUnusedVaseDL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gUnusedVaseTopTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&object_vaseVtx_000550[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gUnusedVaseBodyTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_vaseVtx_0001A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 4, 5, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 7, 0),
    gsSP2Triangles(6, 2, 5, 0, 6, 5, 8, 0),
    gsSP2Triangles(9, 10, 1, 0, 9, 1, 0, 0),
    gsSP2Triangles(1, 10, 11, 0, 1, 11, 4, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 13, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(20, 19, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(7, 6, 19, 0, 7, 19, 18, 0),
    gsSP2Triangles(19, 6, 8, 0, 19, 8, 22, 0),
    gsSP2Triangles(5, 24, 25, 0, 5, 25, 8, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&object_vaseVtx_0003A0[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 5, 0, 0, 5, 6, 0, 0),
    gsSP2Triangles(7, 6, 5, 0, 7, 5, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 18, 0, 21, 18, 17, 0),
    gsSP2Triangles(3, 23, 24, 0, 4, 23, 3, 0),
    gsSP2Triangles(10, 9, 25, 0, 10, 25, 26, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_vaseVtx_0001A0[32] = {
    VTX(1000, 334, 0, 0, 1194, 104, 186, 245, 255),
    VTX(898, 1333, 0, 52, 338, 96, 82, 243, 255),
    VTX(449, 1333, 777, 972, 338, 27, 73, 98, 255),
    VTX(500, 334, 865, 1024, 1194, 33, 168, 83, 255),
    VTX(416, 1667, 0, 299, 23, 77, 99, 16, 255),
    VTX(208, 1667, 359, 725, 23, 27, 84, 90, 255),
    VTX(-448, 1333, 777, 52, 338, 214, 47, 108, 255),
    VTX(-499, 334, 865, 0, 1194, 215, 167, 77, 255),
    VTX(-207, 1667, 359, 299, 23, 218, 86, 83, 255),
    VTX(500, 334, -866, 1024, 1194, 40, 175, 168, 255),
    VTX(449, 1333, -778, 972, 338, 27, 62, 149, 255),
    VTX(208, 1667, -360, 725, 23, 41, 87, 174, 255),
    VTX(-499, 334, -866, -16, 1194, 210, 195, 157, 255),
    VTX(-448, 1333, -778, 121, 338, 211, 75, 165, 255),
    VTX(449, 1333, -778, 1040, 338, 27, 62, 149, 255),
    VTX(500, 334, -866, 1007, 1194, 40, 175, 168, 255),
    VTX(-207, 1667, -360, 399, 23, 220, 97, 184, 255),
    VTX(208, 1667, -360, 825, 23, 41, 87, 174, 255),
    VTX(-999, 334, 0, 1024, 1194, 173, 165, 22, 255),
    VTX(-897, 1333, 0, 972, 338, 168, 88, 13, 255),
    VTX(-448, 1333, -778, 52, 338, 211, 75, 165, 255),
    VTX(-499, 334, -866, 0, 1194, 210, 195, 157, 255),
    VTX(-415, 1667, 0, 725, 23, 162, 77, 32, 255),
    VTX(-207, 1667, -360, 299, 23, 220, 97, 184, 255),
    VTX(171, 2000, 295, 687, -264, 10, 44, 117, 255),
    VTX(-170, 2000, 295, 337, -264, 181, 70, 72, 255),
    VTX(500, 0, 0, 512, 682, 30, 134, 254, 255),
    VTX(-249, 0, 432, 364, 1002, 237, 137, 34, 255),
    VTX(-249, 0, -433, 660, 1002, 247, 136, 219, 255),
    VTX(-249, 0, -433, 60, 1024, 247, 136, 219, 255),
    VTX(-499, 334, -866, 60, 0, 210, 195, 157, 255),
    VTX(500, 334, -866, 43, 0, 40, 175, 168, 255),
}; 

static Vtx object_vaseVtx_0003A0[27] = {
    VTX(-999, 334, 0, 77, 0, 173, 165, 22, 255),
    VTX(-499, 334, -866, 60, 0, 210, 195, 157, 255),
    VTX(-249, 0, -433, 60, 1024, 247, 136, 219, 255),
    VTX(500, 0, 0, 26, 1024, 30, 134, 254, 255),
    VTX(500, 334, -866, 43, 0, 40, 175, 168, 255),
    VTX(-249, 0, 432, 94, 1024, 237, 137, 34, 255),
    VTX(-499, 334, 865, 94, 0, 215, 167, 77, 255),
    VTX(500, 334, 865, 111, 0, 33, 168, 83, 255),
    VTX(500, 0, 0, 128, 1024, 30, 134, 254, 255),
    VTX(342, 2000, 0, 337, -264, 101, 51, 56, 255),
    VTX(416, 1667, 0, 299, 23, 77, 99, 16, 255),
    VTX(208, 1667, -360, 725, 23, 41, 87, 174, 255),
    VTX(171, 2000, -296, 687, -264, 61, 37, 152, 255),
    VTX(-207, 1667, -360, 399, 23, 220, 97, 184, 255),
    VTX(-170, 2000, -296, 466, -264, 254, 55, 142, 255),
    VTX(171, 2000, -296, 816, -264, 61, 37, 152, 255),
    VTX(208, 1667, -360, 825, 23, 41, 87, 174, 255),
    VTX(-415, 1667, 0, 725, 23, 162, 77, 32, 255),
    VTX(-341, 2000, 0, 687, -264, 153, 38, 59, 255),
    VTX(-170, 2000, -296, 337, -264, 254, 55, 142, 255),
    VTX(-207, 1667, -360, 299, 23, 220, 97, 184, 255),
    VTX(-207, 1667, 359, 299, 23, 218, 86, 83, 255),
    VTX(-170, 2000, 295, 337, -264, 181, 70, 72, 255),
    VTX(1000, 334, 0, 26, 0, 104, 186, 245, 255),
    VTX(500, 334, 865, 9, 0, 33, 168, 83, 255),
    VTX(171, 2000, 295, 687, -264, 10, 44, 117, 255),
    VTX(208, 1667, 359, 725, 23, 27, 84, 90, 255),
}; 

static Vtx object_vaseVtx_000550[4] = {
    VTX(-421, 2000, 421, 0, 1023, 0, 127, 0, 255),
    VTX(422, 2000, 421, 1024, 1023, 0, 127, 0, 255),
    VTX(422, 2000, -422, 1024, 0, 0, 127, 0, 255),
    VTX(-421, 2000, -422, 0, 0, 0, 127, 0, 255),
}; 

u64 gUnusedVaseBodyTex[] = {
#include "assets/objects/object_vase/unused_vase_body.rgb5a1.inc.c"
};

u64 gUnusedVaseTopTex[] = {
#include "assets/objects/object_vase/unused_vase_top.rgb5a1.inc.c"
};


