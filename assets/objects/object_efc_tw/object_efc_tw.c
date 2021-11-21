#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_efc_tw.h"

static SkelCurveLimb* sTimeWarpSkelLimbs[2];

u8 object_efc_twCurveAnime_Ref_000000[18] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 
}; 

s16 object_efc_twCurveAnime_Copy_000014[17] = {
      1024,   1024,   1024,      0,      0,      0,      0,      0, 
         0,   1024,   1024,      0,      0,      0,      0,      0, 
         0, 
}; 

TransformData object_efc_twCurveAnime_TransformData_000038[2] = {
    { 0x000C, 0x0001, 0, 0, 0.000010f },
    { 0x0014, 0x003C, 0, 0, 20.000000f },
}; 

TransformUpdateIndex gTimeWarpAnim = { 
    object_efc_twCurveAnime_Ref_000000,
    object_efc_twCurveAnime_TransformData_000038,
    object_efc_twCurveAnime_Copy_000014,
    1, 60
}; 

Vtx gTimeWarpVtx[21] = {
VTX(260, 50, 150, 2048, 1024, 255, 255, 255, 202),
VTX(0, 50, 300, 0, 1024, 255, 255, 255, 202),
VTX(0, 0, 300, 0, 2048, 255, 255, 255, 255),
VTX(260, 100, 150, 2048, 0, 255, 255, 255, 0),
VTX(0, 50, 300, 12288, 1024, 255, 255, 255, 202),
VTX(-260, 50, 150, 10240, 1024, 255, 255, 255, 202),
VTX(-260, 0, 150, 10240, 2048, 255, 255, 255, 255),
VTX(0, 100, 300, 12288, 0, 255, 255, 255, 0),
VTX(-260, 50, -150, 8192, 1024, 255, 255, 255, 202),
VTX(-260, 0, -150, 8192, 2048, 255, 255, 255, 255),
VTX(-260, 100, 150, 10240, 0, 255, 255, 255, 0),
VTX(0, 0, -300, 6144, 2048, 255, 255, 255, 255),
VTX(0, 50, -300, 6144, 1024, 255, 255, 255, 202),
VTX(-260, 100, -150, 8192, 0, 255, 255, 255, 0),
VTX(260, 50, -150, 4096, 1024, 255, 255, 255, 202),
VTX(260, 100, -150, 4096, 0, 255, 255, 255, 0),
VTX(260, 0, 150, 2048, 2048, 255, 255, 255, 255),
VTX(0, 100, -300, 6144, 0, 255, 255, 255, 0),
VTX(260, 0, -150, 4096, 2048, 255, 255, 255, 255),
VTX(0, 0, 300, 12288, 2048, 255, 255, 255, 255),
VTX(0, 100, 300, 0, 0, 255, 255, 255, 0)
}; 

Gfx gTimeWarpDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gTimeWarpTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | 
                         G_TX_WRAP, 6, 6, 2, G_TX_NOLOD),
    gsDPLoadMultiBlock(gTimeWarpTex, 0x0000, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 6, 1, 15),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, 
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, SHADE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gTimeWarpVtx[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsSP2Triangles(5, 8, 9, 0, 8, 5, 10, 0),
    gsSP2Triangles(11, 9, 8, 0, 12, 8, 13, 0),
    gsSP2Triangles(0, 14, 15, 0, 14, 0, 16, 0),
    gsSP2Triangles(14, 12, 17, 0, 12, 14, 18, 0),
    gsSP2Triangles(2, 16, 0, 0, 6, 19, 4, 0),
    gsSP2Triangles(9, 6, 5, 0, 8, 12, 11, 0),
    gsSP2Triangles(10, 13, 8, 0, 18, 11, 12, 0),
    gsSP2Triangles(16, 18, 14, 0, 13, 17, 12, 0),
    gsSP2Triangles(3, 20, 1, 0, 15, 3, 0, 0),
    gsSP2Triangles(17, 15, 14, 0, 7, 10, 5, 0),
    gsSPEndDisplayList(),
}; 

u64 gTimeWarpTex[] = {
#include "assets/objects/object_efc_tw/time_warp.i8.inc.c"
};

SkelCurveLimb sTimeWarpSkelLimb_0012C8 = { 
    0x01, 0xFF,
    { NULL, NULL }
}; 

SkelCurveLimb sTimeWarpSkelLimb_0012D4 = { 
    0xFF, 0xFF,
    { NULL, gTimeWarpDL }
}; 

static SkelCurveLimb* sTimeWarpSkelLimbs[2] = {
    &sTimeWarpSkelLimb_0012C8,
    &sTimeWarpSkelLimb_0012D4,
}; 

SkelCurveLimbList gTimeWarpSkel = { sTimeWarpSkelLimbs, 2 }; 


