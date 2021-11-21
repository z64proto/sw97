#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "objects/gameplay_keep/gameplay_keep.h"

// static Vtx object_d_hsblockVtx_000000[16];
// static Vtx object_d_hsblockVtx_000100[17];
// static Vtx object_d_hsblockVtx_000330[4];
// static Vtx object_d_hsblockVtx_000370[16];

// static Vtx object_d_hsblockVtx_000000[16] = {
//     VTX(-200, 0, 200, 1024, 2048, 51, 51, 51, 255),
//     VTX(-200, 600, 200, 1024, 0, 140, 140, 140, 255),
//     VTX(-200, 600, -200, 0, 0, 204, 204, 204, 255),
//     VTX(-200, 0, -200, 0, 2048, 89, 89, 89, 255),
//     VTX(200, 0, 200, 0, 2048, 51, 51, 51, 255),
//     VTX(200, 600, 200, 0, 0, 114, 114, 114, 255),
//     VTX(-200, 600, 200, 1024, 0, 204, 204, 204, 255),
//     VTX(-200, 0, 200, 1024, 2048, 153, 153, 153, 255),
//     VTX(200, 0, -200, 1024, 2048, 51, 51, 51, 255),
//     VTX(200, 600, -200, 1024, 0, 140, 140, 140, 255),
//     VTX(200, 600, 200, 0, 0, 204, 204, 204, 255),
//     VTX(200, 0, 200, 0, 2048, 153, 153, 153, 255),
//     VTX(-200, 0, -200, 1024, 2048, 51, 51, 51, 255),
//     VTX(-200, 600, -200, 1024, 0, 114, 114, 114, 255),
//     VTX(200, 600, -200, 0, 0, 204, 204, 204, 255),
//     VTX(200, 0, -200, 0, 2048, 153, 153, 153, 255),
// }; 

// static Vtx object_d_hsblockVtx_000100[17] = {
//     VTX(-200, 1000, -200, -192, -192, 255, 255, 255, 255),
//     VTX(-200, 1000, 200, -192, 202, 255, 255, 255, 255),
//     VTX(200, 1000, 200, 202, 202, 255, 255, 255, 255),
//     VTX(200, 1000, -200, 202, -192, 255, 255, 255, 255),
//     VTX(-200, 600, 200, 1024, 1024, 140, 140, 140, 255),
//     VTX(-200, 1000, 200, 1024, 0, 255, 255, 255, 255),
//     VTX(-200, 1000, -200, 0, 0, 255, 255, 255, 255),
//     VTX(-200, 600, -200, 0, 1024, 204, 204, 204, 255),
//     VTX(200, 600, 200, 0, 1024, 114, 114, 114, 255),
//     VTX(200, 1000, 200, 0, 0, 255, 255, 255, 255),
//     VTX(-200, 600, 200, 1024, 1024, 204, 204, 204, 255),
//     VTX(200, 600, -200, 1024, 1024, 140, 140, 140, 255),
//     VTX(200, 1000, -200, 1024, 0, 255, 255, 255, 255),
//     VTX(200, 600, 200, 0, 1024, 204, 204, 204, 255),
//     VTX(-200, 600, -200, 0, 1024, 114, 114, 114, 255),
//     VTX(-200, 1000, -200, 0, 0, 255, 255, 255, 255),
//     VTX(200, 600, -200, 1024, 1024, 204, 204, 204, 255),
// }; 

// Gfx gHsBlockDL_000210[] = {
//     gsDPPipeSync(),
//     gsDPSetTextureLUT(G_TT_NONE),
//     gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
//     gsDPLoadTextureBlock(hsblock_pillar_base, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
//                          G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
//     gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
//     gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
//     gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
//     gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
//     gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
//     gsSPVertex(&object_d_hsblockVtx_000000[0], 16, 0),
//     gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
//     gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
//     gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
//     gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
//     gsDPPipeSync(),
//     gsDPLoadTextureBlock(gUnusedStoneHookshotTargetTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
//                             | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
//     gsSPVertex(&object_d_hsblockVtx_000100[0], 17, 0),
//     gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
//     gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
//     gsSP2Triangles(8, 9, 5, 0, 8, 5, 10, 0),
//     gsSP2Triangles(11, 12, 9, 0, 11, 9, 13, 0),
//     gsSP2Triangles(14, 15, 12, 0, 14, 12, 16, 0),
//     gsSPEndDisplayList(),
// }; 

// static u8 unaccounted_000328[8] = {
//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// }; 

// static Vtx object_d_hsblockVtx_000330[4] = {
//     VTX(200, -200, 80, 1024, 1024, 255, 255, 255, 255),
//     VTX(200, 200, 80, 1024, 0, 255, 255, 255, 255),
//     VTX(-200, 200, 80, 0, 0, 255, 255, 255, 255),
//     VTX(-200, -200, 80, 0, 1024, 255, 255, 255, 255),
// }; 

// static Vtx object_d_hsblockVtx_000370[16] = {
//     VTX(-200, 200, 80, 0, 1024, 255, 255, 255, 255),
//     VTX(200, 200, 80, 1024, 1024, 255, 255, 255, 255),
//     VTX(200, 200, 0, 1024, 1824, 255, 255, 255, 255),
//     VTX(-200, 200, 0, 0, 1024, 255, 255, 255, 255),
//     VTX(-200, -200, 80, 0, 1024, 153, 153, 153, 255),
//     VTX(-200, 200, 80, 0, 0, 216, 216, 216, 255),
//     VTX(-200, 200, 0, 176, 0, 178, 178, 178, 255),
//     VTX(-200, -200, 0, 176, 1024, 114, 114, 114, 255),
//     VTX(-200, -200, 0, 0, 1773, 51, 51, 51, 255),
//     VTX(200, -200, 0, 1024, 1773, 51, 51, 51, 255),
//     VTX(200, -200, 80, 1024, 1024, 89, 89, 89, 255),
//     VTX(-200, -200, 80, 0, 1024, 89, 89, 89, 255),
//     VTX(200, -200, 0, 1830, 1024, 114, 114, 114, 255),
//     VTX(200, 200, 0, 1830, 0, 178, 178, 178, 255),
//     VTX(200, 200, 80, 1024, 0, 216, 216, 216, 255),
//     VTX(200, -200, 80, 1024, 1024, 153, 153, 153, 255),
// }; 

// Gfx gHsBlockDL_000470[] = {
//     gsDPPipeSync(),
//     gsDPSetTextureLUT(G_TT_NONE),
//     gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
//     gsDPLoadTextureBlock(gUnusedStoneHookshotTargetTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
//                             | G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
//     gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, ENVIRONMENT, 0, 0, 0, 0, COMBINED),
//     gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
//     gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
//     gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
//     gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
//     gsSPVertex(&object_d_hsblockVtx_000330[0], 4, 0),
//     gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
//     gsSPVertex(&object_d_hsblockVtx_000370[0], 16, 0),
//     gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
//     gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
//     gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
//     gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
//     gsSPEndDisplayList(),
// }; 

// static u8 unaccounted_000528[8] = {
//     0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
// }; 

// CamData gHsBlockCol_000578_camDataList_00000530[1] = {
//     { 0x0000, 0, 0x00000000 },
// }; 

// SurfaceType gHsBlockCol_000578_surfaceType_00000538[] = {
//     { 0x00000000, 0x000207C0 },
// }; 

// CollisionPoly gHsBlockCol_000578_polygons_00000540[] = {
//    { 0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFFB0 },
//    { 0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xFFB0 },

// }; 

// Vec3s gHsBlockCol_000578_vtx_00000560[] = {
//    { 200, -200, 80 },
//    { 200, 200, 80 },
//    { -200, 200, 80 },
//    { -200, -200, 80 },
// }; 

// CollisionHeader gHsBlockCol_000578 = { 
//     { -200, -200, 0 },
//     { 200, 200, 80 },
//     4,
//     gHsBlockCol_000578_vtx_00000560,
//     2,
//     gHsBlockCol_000578_polygons_00000540,
//     gHsBlockCol_000578_surfaceType_00000538,
//     gHsBlockCol_000578_camDataList_00000530,
//     0,
//     NULL
// }; 

// static u32 pad5A4 = 0;
// static u32 pad5A8 = 0;
// static u32 pad5AC = 0;

// CamData gHsBlockCol_000730_camDataList_000005B0[1] = {
//     { 0x0000, 0, 0x00000000 },
// }; 

// SurfaceType gHsBlockCol_000730_surfaceType_000005B8[] = {
//     { 0x00000000, 0x000007C2 },
//     { 0x00000000, 0x000207C2 },
// }; 

// CollisionPoly gHsBlockCol_000730_polygons_000005C8[] = {
//    { 0x0000, 0x0000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0xFF38 },
//    { 0x0000, 0x0000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0xFF38 },
//    { 0x0000, 0x0004, 0x0005, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFF38 },
//    { 0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFF38 },
//    { 0x0000, 0x0006, 0x0007, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFF38 },
//    { 0x0000, 0x0006, 0x0005, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFF38 },
//    { 0x0000, 0x0003, 0x0002, 0x0007, 0x0000, 0x0000, 0x8001, 0xFF38 },
//    { 0x0000, 0x0003, 0x0007, 0x0006, 0x0000, 0x0000, 0x8001, 0xFF38 },
//    { 0x0000, 0x0008, 0x0009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFC18 },
//    { 0x0000, 0x0008, 0x000A, 0x000B, 0x0000, 0x7FFF, 0x0000, 0xFC18 },
//    { 0x0001, 0x0001, 0x0009, 0x0008, 0x8001, 0x0000, 0x0000, 0xFF38 },
//    { 0x0001, 0x0001, 0x0008, 0x0002, 0x8001, 0x0000, 0x0000, 0xFF38 },
//    { 0x0001, 0x0005, 0x000A, 0x0009, 0x0000, 0x0000, 0x7FFF, 0xFF38 },
//    { 0x0001, 0x0005, 0x0009, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFF38 },
//    { 0x0001, 0x0007, 0x000B, 0x000A, 0x7FFF, 0x0000, 0x0000, 0xFF38 },
//    { 0x0001, 0x0007, 0x000A, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xFF38 },
//    { 0x0001, 0x0002, 0x0008, 0x000B, 0x0000, 0x0000, 0x8001, 0xFF38 },
//    { 0x0001, 0x0002, 0x000B, 0x0007, 0x0000, 0x0000, 0x8001, 0xFF38 },

// }; 

// Vec3s gHsBlockCol_000730_vtx_000006E8[] = {
//    { -200, 0, 200 },
//    { -200, 600, 200 },
//    { -200, 600, -200 },
//    { -200, 0, -200 },
//    { 200, 0, 200 },
//    { 200, 600, 200 },
//    { 200, 0, -200 },
//    { 200, 600, -200 },
//    { -200, 1000, -200 },
//    { -200, 1000, 200 },
//    { 200, 1000, 200 },
//    { 200, 1000, -200 },
// }; 

// CollisionHeader gHsBlockCol_000730 = { 
//     { -200, 0, -200 },
//     { 200, 1000, 200 },
//     12,
//     gHsBlockCol_000730_vtx_000006E8,
//     18,
//     gHsBlockCol_000730_polygons_000005C8,
//     gHsBlockCol_000730_surfaceType_000005B8,
//     gHsBlockCol_000730_camDataList_000005B0,
//     0,
//     NULL
// }; 

// static u32 pad75C = 0;

// u64 hsblock_pillar_base[] = {
// #include "assets/objects/object_d_hsblock/hsblock_pillar_base.rgb5a1.inc.c"
// };




