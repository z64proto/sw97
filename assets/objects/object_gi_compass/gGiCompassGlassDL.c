#include "ultra64.h"
#include "global.h"

Vtx gGiCompassGlassDL_gGiCompassGlassDL_mesh_layer_Transparent_vtx_cull[8] = {
	{{{-30, -28, 9},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-30, -28, 9},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-30, 28, 9},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-30, 28, 9},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{30, -28, 9},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{30, -28, 9},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{30, 28, 9},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{30, 28, 9},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gGiCompassGlassDL_gGiCompassGlassDL_mesh_layer_Transparent_vtx_0[10] = {
	{{{-24, 17, 9},0, {-59, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{-30, 0, 9},0, {-8, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{-24, -17, 9},0, {43, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{-9, -28, 9},0, {94, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{9, -28, 9},0, {146, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{24, -17, 9},0, {197, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{30, 0, 9},0, {248, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{24, 17, 9},0, {299, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{9, 28, 9},0, {-162, 760},{0x0, 0x0, 0x7F, 0xFE}}},
	{{{-9, 28, 9},0, {-110, 760},{0x0, 0x0, 0x7F, 0xFE}}},
};

Gfx gGiCompassGlassDL_gGiCompassGlassDL_mesh_layer_Transparent_tri_0[] = {
	gsSPVertex(gGiCompassGlassDL_gGiCompassGlassDL_mesh_layer_Transparent_vtx_0 + 0, 10, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
	gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
	gsSP2Triangles(0, 7, 8, 0, 0, 8, 9, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gGiCompassGlassDL_f3d_material_006_layerTransparent[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_CULL_BACK | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_XLU_SURF2),
	gsSPTexture(959, 959, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, 0x04000000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 255, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 60),
	gsDPSetPrimColor(0, 0, 139, 172, 254, 180),
	gsSPEndDisplayList(),
};

Gfx gGiCompassGlassDL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gGiCompassGlassDL_gGiCompassGlassDL_mesh_layer_Transparent_vtx_cull + 0, 8, 0),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gGiCompassGlassDL_f3d_material_006_layerTransparent),
	gsSPDisplayList(gGiCompassGlassDL_gGiCompassGlassDL_mesh_layer_Transparent_tri_0),
	gsSPEndDisplayList(),
};

