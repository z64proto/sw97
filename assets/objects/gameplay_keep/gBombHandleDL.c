#include "ultra64.h"
#include "global.h"

u64 gBombHandleDL_BombHandleTex2_rgba16[] = {
	0x52954211318d318d, 0x39cf4a5352955ad7, 0x6319739d6b5b6b5b, 0x6b5b6b5b6b5b6b5b, 0x39cf318d318d4211, 0x6b5b8c6394a594a5, 0x94a57bdf63195ad7, 0x5ad7631963195ad7, 
	0x39cf39cf4a53739d, 0xc631ef7bd6b59ce7, 0x6319421139cf39cf, 0x421152954a534211, 0x42114a53739ddef7, 0xffffdef794a56319, 0x4211318d294b294b, 0x318d318d318d294b, 
	0x4a535ad78421ef7b, 0xad6b6b5b52954211, 0x421139cf39cf39cf, 0x39cf318d294b294b, 0x631963196b5b6b5b, 0x5ad74a5342114a53, 0x6b5b94a59ce78c63, 0x63195295421139cf, 
	0x6b5b6b5b6b5b6319, 0x5ad752955ad794a5, 0xdef7ffffffffffff, 0xdef78c636b5b5ad7, 0x631963196b5b739d, 0x7bdf842194a5c631, 0xe739f7bdffffffff, 0xffffe7398c636b5b, 
	0x5295529552955295, 0x52955ad763197bdf, 0x8421842194a59ce7, 0x9ce794a584216b5b, 0x39cf318d39cf39cf, 0x42114a535ad76319, 0x5ad7529552955295, 0x5ad75ad75ad75295, 
	0x294b294b318d4211, 0x52955ad7739d7bdf, 0x6b5b5ad7421139cf, 0x39cf39cf39cf39cf, 0x318d39cf4a535ad7, 0x739db5ade739ef7b, 0xd6b5a529739d5ad7, 0x4a5339cf318d318d, 
	0x52955ad76319739d, 0xb5adf7bdffffffff, 0xffffe739b5ad8421, 0x63195295421139cf, 0x6b5b6b5b7bdfbdef, 0xd6b5d6b5ce73b5ad, 0xc631ce73def7b5ad, 0x84216b5b52954a53, 
	0x6b5b84217bdf7bdf, 0x84218c637bdf739d, 0x739d842194a594a5, 0x739d6b5b63195ad7, 0x6b5b6b5b6b5b6b5b, 0x6b5b6b5b6b5b6b5b, 0x6b5b6b5b739d739d, 0x6b5b6b5b6b5b6b5b, 
	
};

Vtx gBombHandleDL_BombHandle_mesh_layer_Opaque_vtx_cull[8] = {
	{{{-877, -395, -395},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-877, -395, 395},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-877, 395, 395},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-877, 395, -395},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{877, -395, -395},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{877, -395, 395},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{877, 395, 395},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{877, 395, -395},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gBombHandleDL_BombHandle_mesh_layer_Opaque_vtx_0[44] = {
	{{{-729, 394, 0},0, {56, 412},{0xFF, 0x5A, 0xA6, 0xFF}}},
	{{{-642, 395, 0},0, {33, 425},{0xFF, 0x5A, 0xA6, 0xFF}}},
	{{{-642, 0, -395},0, {64, 307},{0xFF, 0x5A, 0xA6, 0xFF}}},
	{{{-729, 0, -394},0, {78, 330},{0xFF, 0x5A, 0xA6, 0xFF}}},
	{{{-642, 0, 395},0, {310, 457},{0xFF, 0xA6, 0x5A, 0xFF}}},
	{{{-729, 0, 394},0, {297, 435},{0xFF, 0xA6, 0x5A, 0xFF}}},
	{{{-729, -394, 0},0, {319, 352},{0xFF, 0xA6, 0x5A, 0xFF}}},
	{{{-642, -395, 0},0, {342, 339},{0xFF, 0xA6, 0x5A, 0xFF}}},
	{{{-729, 394, 0},0, {160, 95},{0xFF, 0x5A, 0x5A, 0xFF}}},
	{{{-729, 0, 394},0, {125, 286},{0xFF, 0x5A, 0x5A, 0xFF}}},
	{{{-642, 0, 395},0, {76, 320},{0xFF, 0x5A, 0x5A, 0xFF}}},
	{{{-642, 395, 0},0, {125, 45},{0xFF, 0x5A, 0x5A, 0xFF}}},
	{{{-642, 0, -395},0, {401, 95},{0xFF, 0xA6, 0xA6, 0xFF}}},
	{{{-642, -395, 0},0, {351, 370},{0xFF, 0xA6, 0xA6, 0xFF}}},
	{{{-729, -394, 0},0, {317, 320},{0xFF, 0xA6, 0xA6, 0xFF}}},
	{{{-729, 0, -394},0, {351, 129},{0xFF, 0xA6, 0xA6, 0xFF}}},
	{{{729, 394, 0},0, {56, 412},{0x1, 0x5A, 0xA6, 0xFF}}},
	{{{729, 0, -394},0, {78, 330},{0x1, 0x5A, 0xA6, 0xFF}}},
	{{{642, 0, -395},0, {64, 307},{0x1, 0x5A, 0xA6, 0xFF}}},
	{{{642, 395, 0},0, {33, 425},{0x1, 0x5A, 0xA6, 0xFF}}},
	{{{642, 0, 395},0, {310, 457},{0x1, 0xA6, 0x5A, 0xFF}}},
	{{{642, -395, 0},0, {342, 339},{0x1, 0xA6, 0x5A, 0xFF}}},
	{{{729, -394, 0},0, {319, 352},{0x1, 0xA6, 0x5A, 0xFF}}},
	{{{729, 0, 394},0, {297, 435},{0x1, 0xA6, 0x5A, 0xFF}}},
	{{{729, 394, 0},0, {160, 95},{0x1, 0x5A, 0x5A, 0xFF}}},
	{{{642, 395, 0},0, {125, 45},{0x1, 0x5A, 0x5A, 0xFF}}},
	{{{642, 0, 395},0, {76, 320},{0x1, 0x5A, 0x5A, 0xFF}}},
	{{{729, 0, 394},0, {125, 286},{0x1, 0x5A, 0x5A, 0xFF}}},
	{{{642, 0, -395},0, {401, 95},{0x1, 0xA6, 0xA6, 0xFF}}},
	{{{729, 0, -394},0, {351, 129},{0x1, 0xA6, 0xA6, 0xFF}}},
	{{{729, -394, 0},0, {317, 320},{0x1, 0xA6, 0xA6, 0xFF}}},
	{{{642, -395, 0},0, {351, 370},{0x1, 0xA6, 0xA6, 0xFF}}},
	{{{-729, 0, -394},0, {501, 529},{0xB3, 0x53, 0xC6, 0xFF}}},
	{{{-877, 70, 70},0, {203, 254},{0x85, 0xFA, 0x1E, 0xFF}}},
	{{{-729, 394, 0},0, {-16, 508},{0xB2, 0x3D, 0x50, 0xFF}}},
	{{{-877, -72, -73},0, {323, 254},{0x86, 0x5, 0xDD, 0xFF}}},
	{{{-729, -394, 0},0, {501, -22},{0xB3, 0xC3, 0xAF, 0xFF}}},
	{{{-729, 0, 394},0, {-16, 0},{0xB2, 0xAE, 0x3A, 0xFF}}},
	{{{729, -394, 0},0, {501, -22},{0x4E, 0xC6, 0xAE, 0xFF}}},
	{{{877, -72, 73},0, {323, 254},{0x7B, 0xE1, 0xF9, 0xFF}}},
	{{{729, 0, 394},0, {501, 529},{0x4D, 0xAF, 0x3D, 0xFF}}},
	{{{877, 70, -70},0, {203, 254},{0x7C, 0x1A, 0x8, 0xFF}}},
	{{{729, 0, -394},0, {-16, 0},{0x4E, 0x50, 0xC3, 0xFF}}},
	{{{729, 394, 0},0, {-16, 508},{0x4E, 0x3A, 0x52, 0xFF}}},
};

Gfx gBombHandleDL_BombHandle_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gBombHandleDL_BombHandle_mesh_layer_Opaque_vtx_0 + 0, 32, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
	gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
	gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
	gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
	gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
	gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
	gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
	gsSPVertex(gBombHandleDL_BombHandle_mesh_layer_Opaque_vtx_0 + 32, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
	gsSP2Triangles(4, 3, 0, 0, 4, 1, 3, 0),
	gsSP2Triangles(4, 5, 1, 0, 2, 1, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
	gsSP2Triangles(6, 10, 9, 0, 11, 9, 10, 0),
	gsSP2Triangles(8, 9, 11, 0, 8, 7, 9, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gBombHandleDL_f3d_material_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, TEXEL0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(959, 959, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gBombHandleDL_BombHandleTex2_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
	gsSPEndDisplayList(),
};

Gfx gBombHandleDL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gBombHandleDL_BombHandle_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gBombHandleDL_f3d_material_layerOpaque),
	gsSPDisplayList(gBombHandleDL_BombHandle_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

