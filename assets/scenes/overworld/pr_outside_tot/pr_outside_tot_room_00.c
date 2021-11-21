#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "pr_outside_tot_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "pr_outside_tot_scene.h"


static SCmdEchoSettings pr_outside_tot_room_00Set0000Cmd00;
static SCmdRoomBehavior pr_outside_tot_room_00Set0000Cmd01;
static SCmdSkyboxDisables pr_outside_tot_room_00Set0000Cmd02;
static SCmdTimeSettings pr_outside_tot_room_00Set0000Cmd03;
static SCmdMesh pr_outside_tot_room_00Set0000Cmd04;
static SCmdObjectList pr_outside_tot_room_00Set0000Cmd05;
static SCmdEndMarker pr_outside_tot_room_00Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx pr_outside_tot_room_00Vtx_000070[16];
static Vtx pr_outside_tot_room_00Vtx_000170[8];
static Vtx pr_outside_tot_room_00Vtx_0002B8[16];
static Vtx pr_outside_tot_room_00Vtx_0003B8[8];
static Vtx pr_outside_tot_room_00Vtx_000500[16];
static Vtx pr_outside_tot_room_00Vtx_0006A0[16];
static Vtx pr_outside_tot_room_00Vtx_000840[16];
static Vtx pr_outside_tot_room_00Vtx_0009E0[16];
static Vtx pr_outside_tot_room_00Vtx_000B80[15];
static Vtx pr_outside_tot_room_00Vtx_000C70[8];
static Vtx pr_outside_tot_room_00Vtx_000DB8[16];
static Vtx pr_outside_tot_room_00Vtx_000EB8[4];
static Vtx pr_outside_tot_room_00Vtx_000EF8[3];
static Vtx pr_outside_tot_room_00Vtx_000F28[12];
static Vtx pr_outside_tot_room_00Vtx_000FE8[9];
static Vtx pr_outside_tot_room_00Vtx_0011A8[22];
static Vtx pr_outside_tot_room_00Vtx_001410[20];
static Vtx pr_outside_tot_room_00Vtx_001550[4];
static Vtx pr_outside_tot_room_00Vtx_001590[7];
static Vtx pr_outside_tot_room_00Vtx_001600[12];
static Vtx pr_outside_tot_room_00Vtx_0017F8[22];
static Vtx pr_outside_tot_room_00Vtx_001A60[16];
static Vtx pr_outside_tot_room_00Vtx_001B60[4];
static Vtx pr_outside_tot_room_00Vtx_001C58[16];
static Vtx pr_outside_tot_room_00Vtx_001D58[4];
static Vtx pr_outside_tot_room_00Vtx_001E50[16];
static Vtx pr_outside_tot_room_00Vtx_001F50[4];
static Vtx pr_outside_tot_room_00Vtx_002048[16];
static Vtx pr_outside_tot_room_00Vtx_002148[4];
static Vtx pr_outside_tot_room_00Vtx_002240[16];
static Vtx pr_outside_tot_room_00Vtx_0023E0[31];
static Vtx pr_outside_tot_room_00Vtx_0025D0[5];
static Vtx pr_outside_tot_room_00Vtx_002620[4];
static Vtx pr_outside_tot_room_00Vtx_002660[3];
static Vtx pr_outside_tot_room_00Vtx_002690[24];
static Vtx pr_outside_tot_room_00Vtx_002810[11];
static Vtx pr_outside_tot_room_00Vtx_0028C0[12];
static Vtx pr_outside_tot_room_00Vtx_002980[9];

static SCmdEchoSettings pr_outside_tot_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior pr_outside_tot_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables pr_outside_tot_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x01 }; // 0x0010

static SCmdTimeSettings pr_outside_tot_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01 }; // 0x0018

static SCmdMesh pr_outside_tot_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&pr_outside_tot_room_00MeshHeader0x000050 }; // 0x0020

static SCmdObjectList pr_outside_tot_room_00Set0000Cmd05 = {  0x0B, 0x05, (u32)pr_outside_tot_room_00ObjectList0x000038 }; // 0x0028

static SCmdEndMarker pr_outside_tot_room_00Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 pr_outside_tot_room_00ObjectList0x000038[5] = {
	OBJECT_O_ANIME,
	OBJECT_OE_ANIME,
	OBJECT_ZL1,
	OBJECT_OA7,
	OBJECT_OB3,
}; 

static u8 unaccounted_000044[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 pr_outside_tot_room_00MeshHeader0x000050 = { { 0 }, 0x01, (u32)&pr_outside_tot_room_00MeshDListEntry0x00005C, (u32)&(pr_outside_tot_room_00MeshDListEntry0x00005C) + sizeof(pr_outside_tot_room_00MeshDListEntry0x00005C) }; 

MeshEntry0 pr_outside_tot_room_00MeshDListEntry0x00005C[1] = {
	{ (u32)pr_outside_tot_room_00Dlist0x002D10, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad68 = 0;
static u32 pad6C = 0;

static Vtx pr_outside_tot_room_00Vtx_000070[16] = {
    VTX(1710, 60, -1869, 0, 0, 0, 130, 0, 255),
    VTX(1690, 60, -1869, 0, 0, 0, 130, 0, 255),
    VTX(1690, 60, -1889, 0, 0, 0, 130, 0, 255),
    VTX(1710, 60, -1889, 0, 0, 0, 130, 0, 255),
    VTX(1690, 60, -1869, 0, 0, 0, 0, 127, 255),
    VTX(1710, 60, -1869, 0, 0, 0, 0, 127, 255),
    VTX(1710, 260, -1869, 0, 0, 0, 0, 127, 255),
    VTX(1690, 260, -1869, 0, 0, 0, 0, 127, 255),
    VTX(1710, 260, -1889, 0, 0, 0, 0, 130, 255),
    VTX(1710, 60, -1889, 0, 0, 0, 0, 130, 255),
    VTX(1690, 60, -1889, 0, 0, 0, 0, 130, 255),
    VTX(1690, 260, -1889, 0, 0, 0, 0, 130, 255),
    VTX(1710, 60, -1889, 0, 0, 127, 0, 0, 255),
    VTX(1710, 260, -1889, 0, 0, 127, 0, 0, 255),
    VTX(1710, 260, -1869, 0, 0, 127, 0, 0, 255),
    VTX(1710, 60, -1869, 0, 0, 127, 0, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_000170[8] = {
    VTX(1690, 260, -1869, 0, 0, 130, 0, 0, 255),
    VTX(1690, 260, -1889, 0, 0, 0, 127, 0, 255),
    VTX(1690, 260, -1889, 0, 0, 130, 0, 0, 255),
    VTX(1690, 60, -1889, 0, 0, 130, 0, 0, 255),
    VTX(1690, 60, -1869, 0, 0, 130, 0, 0, 255),
    VTX(1690, 260, -1869, 0, 0, 0, 127, 0, 255),
    VTX(1710, 260, -1869, 0, 0, 0, 127, 0, 255),
    VTX(1710, 260, -1889, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x0001F0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000070[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000170[0], 8, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_0002B8[16] = {
    VTX(1710, 60, -1269, 0, 0, 0, 130, 0, 255),
    VTX(1690, 60, -1269, 0, 0, 0, 130, 0, 255),
    VTX(1690, 60, -1289, 0, 0, 0, 130, 0, 255),
    VTX(1710, 60, -1289, 0, 0, 0, 130, 0, 255),
    VTX(1690, 60, -1269, 0, 0, 0, 0, 127, 255),
    VTX(1710, 60, -1269, 0, 0, 0, 0, 127, 255),
    VTX(1710, 260, -1269, 0, 0, 0, 0, 127, 255),
    VTX(1690, 260, -1269, 0, 0, 0, 0, 127, 255),
    VTX(1710, 260, -1289, 0, 0, 0, 0, 130, 255),
    VTX(1710, 60, -1289, 0, 0, 0, 0, 130, 255),
    VTX(1690, 60, -1289, 0, 0, 0, 0, 130, 255),
    VTX(1690, 260, -1289, 0, 0, 0, 0, 130, 255),
    VTX(1710, 60, -1289, 0, 0, 127, 0, 0, 255),
    VTX(1710, 260, -1289, 0, 0, 127, 0, 0, 255),
    VTX(1710, 260, -1269, 0, 0, 127, 0, 0, 255),
    VTX(1710, 60, -1269, 0, 0, 127, 0, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_0003B8[8] = {
    VTX(1690, 260, -1269, 0, 0, 130, 0, 0, 255),
    VTX(1690, 260, -1289, 0, 0, 0, 127, 0, 255),
    VTX(1690, 260, -1289, 0, 0, 130, 0, 0, 255),
    VTX(1690, 60, -1289, 0, 0, 130, 0, 0, 255),
    VTX(1690, 60, -1269, 0, 0, 130, 0, 0, 255),
    VTX(1690, 260, -1269, 0, 0, 0, 127, 0, 255),
    VTX(1710, 260, -1269, 0, 0, 0, 127, 0, 255),
    VTX(1710, 260, -1289, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x000438[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0002B8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0003B8[0], 8, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_000500[16] = {
    VTX(1000, 72, -859, 0, 0, 0, 127, 0, 255),
    VTX(1000, 72, -739, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -739, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -859, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -859, 0, 0, 0, 0, 130, 255),
    VTX(1064, 40, -859, 0, 0, 0, 0, 130, 255),
    VTX(1000, 40, -859, 0, 0, 0, 0, 130, 255),
    VTX(1000, 72, -859, 0, 0, 0, 0, 130, 255),
    VTX(1000, 40, -739, 0, 0, 0, 0, 127, 255),
    VTX(1064, 40, -739, 0, 0, 0, 0, 127, 255),
    VTX(1064, 72, -739, 0, 0, 0, 0, 127, 255),
    VTX(1000, 72, -739, 0, 0, 0, 0, 127, 255),
    VTX(1064, 40, -859, 0, 0, 127, 0, 0, 255),
    VTX(1064, 72, -859, 0, 0, 127, 0, 0, 255),
    VTX(1064, 72, -739, 0, 0, 127, 0, 0, 255),
    VTX(1064, 40, -739, 0, 0, 127, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x000600[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000500[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_0006A0[16] = {
    VTX(1000, 72, -1239, 0, 0, 0, 127, 0, 255),
    VTX(1000, 72, -1119, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -1119, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -1239, 0, 0, 0, 127, 0, 255),
    VTX(1000, 40, -1119, 0, 0, 0, 0, 127, 255),
    VTX(1064, 40, -1119, 0, 0, 0, 0, 127, 255),
    VTX(1064, 72, -1119, 0, 0, 0, 0, 127, 255),
    VTX(1000, 72, -1119, 0, 0, 0, 0, 127, 255),
    VTX(1064, 72, -1239, 0, 0, 0, 0, 130, 255),
    VTX(1064, 40, -1239, 0, 0, 0, 0, 130, 255),
    VTX(1000, 40, -1239, 0, 0, 0, 0, 130, 255),
    VTX(1000, 72, -1239, 0, 0, 0, 0, 130, 255),
    VTX(1064, 40, -1239, 0, 0, 127, 0, 0, 255),
    VTX(1064, 72, -1239, 0, 0, 127, 0, 0, 255),
    VTX(1064, 72, -1119, 0, 0, 127, 0, 0, 255),
    VTX(1064, 40, -1119, 0, 0, 127, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x0007A0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0006A0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_000840[16] = {
    VTX(1000, 72, -1639, 0, 0, 0, 127, 0, 255),
    VTX(1000, 72, -1519, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -1519, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -1639, 0, 0, 0, 127, 0, 255),
    VTX(1000, 40, -1519, 0, 0, 0, 0, 127, 255),
    VTX(1064, 40, -1519, 0, 0, 0, 0, 127, 255),
    VTX(1064, 72, -1519, 0, 0, 0, 0, 127, 255),
    VTX(1000, 72, -1519, 0, 0, 0, 0, 127, 255),
    VTX(1064, 72, -1639, 0, 0, 0, 0, 130, 255),
    VTX(1064, 40, -1639, 0, 0, 0, 0, 130, 255),
    VTX(1000, 40, -1639, 0, 0, 0, 0, 130, 255),
    VTX(1000, 72, -1639, 0, 0, 0, 0, 130, 255),
    VTX(1064, 40, -1639, 0, 0, 127, 0, 0, 255),
    VTX(1064, 72, -1639, 0, 0, 127, 0, 0, 255),
    VTX(1064, 72, -1519, 0, 0, 127, 0, 0, 255),
    VTX(1064, 40, -1519, 0, 0, 127, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x000940[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000840[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_0009E0[16] = {
    VTX(1000, 72, -2039, 0, 0, 0, 127, 0, 255),
    VTX(1000, 72, -1919, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -1919, 0, 0, 0, 127, 0, 255),
    VTX(1064, 72, -2039, 0, 0, 0, 127, 0, 255),
    VTX(1000, 40, -1919, 0, 0, 0, 0, 127, 255),
    VTX(1064, 40, -1919, 0, 0, 0, 0, 127, 255),
    VTX(1064, 72, -1919, 0, 0, 0, 0, 127, 255),
    VTX(1000, 72, -1919, 0, 0, 0, 0, 127, 255),
    VTX(1064, 72, -2039, 0, 0, 0, 0, 130, 255),
    VTX(1064, 40, -2039, 0, 0, 0, 0, 130, 255),
    VTX(1000, 40, -2039, 0, 0, 0, 0, 130, 255),
    VTX(1000, 72, -2039, 0, 0, 0, 0, 130, 255),
    VTX(1064, 40, -2039, 0, 0, 127, 0, 0, 255),
    VTX(1064, 72, -2039, 0, 0, 127, 0, 0, 255),
    VTX(1064, 72, -1919, 0, 0, 127, 0, 0, 255),
    VTX(1064, 40, -1919, 0, 0, 127, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x000AE0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0009E0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_000B80[15] = {
    VTX(2740, 60, -2319, 0, 0, 0, 127, 0, 255),
    VTX(1180, 60, -2319, 0, 0, 0, 127, 0, 255),
    VTX(1180, 60, -759, 0, 0, 0, 127, 0, 255),
    VTX(2740, 60, -759, 0, 0, 0, 127, 0, 255),
    VTX(1000, 60, -2319, 0, 0, 0, 127, 0, 255),
    VTX(1000, 60, -839, 0, 0, 0, 127, 0, 255),
    VTX(1180, 60, -839, 0, 0, 0, 127, 0, 255),
    VTX(1000, 260, -759, 0, 0, 0, 0, 130, 255),
    VTX(2560, 260, -759, 0, 0, 0, 0, 130, 255),
    VTX(2560, 60, -759, 0, 0, 0, 0, 130, 255),
    VTX(1000, 60, -759, 0, 0, 0, 0, 130, 255),
    VTX(1000, 260, -2319, 0, 0, 0, 0, 127, 255),
    VTX(1000, 60, -2319, 0, 0, 0, 0, 127, 255),
    VTX(2560, 60, -2319, 0, 0, 0, 0, 127, 255),
    VTX(2560, 260, -2319, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_000C70[8] = {
    VTX(2560, 60, -759, 0, 0, 130, 0, 0, 255),
    VTX(1000, 60, -759, 0, 0, 127, 0, 0, 255),
    VTX(2560, 260, -759, 0, 0, 130, 0, 0, 255),
    VTX(2560, 260, -2319, 0, 0, 130, 0, 0, 255),
    VTX(2560, 60, -2319, 0, 0, 130, 0, 0, 255),
    VTX(1000, 60, -2319, 0, 0, 127, 0, 0, 255),
    VTX(1000, 260, -2319, 0, 0, 127, 0, 0, 255),
    VTX(1000, 260, -759, 0, 0, 127, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x000CF0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000B80[0], 15, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000C70[0], 8, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_000DB8[16] = {
    VTX(1180, 40, -779, 0, 0, 0, 127, 0, 255),
    VTX(1180, 40, -799, 0, 0, 0, 127, 0, 255),
    VTX(1000, 40, -799, 0, 0, 0, 127, 0, 255),
    VTX(1000, 40, -779, 0, 0, 0, 127, 0, 255),
    VTX(1180, 40, -799, 0, 0, 0, 0, 127, 255),
    VTX(1180, 52, -799, 0, 0, 0, 0, 127, 255),
    VTX(1000, 52, -799, 0, 0, 0, 0, 127, 255),
    VTX(1000, 40, -799, 0, 0, 0, 0, 127, 255),
    VTX(1180, 52, -799, 0, 0, 0, 127, 0, 255),
    VTX(1180, 52, -819, 0, 0, 0, 127, 0, 255),
    VTX(1000, 52, -819, 0, 0, 0, 127, 0, 255),
    VTX(1000, 52, -799, 0, 0, 0, 127, 0, 255),
    VTX(1180, 52, -819, 0, 0, 0, 0, 127, 255),
    VTX(1180, 64, -819, 0, 0, 0, 0, 127, 255),
    VTX(1000, 64, -819, 0, 0, 0, 0, 127, 255),
    VTX(1000, 52, -819, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_000EB8[4] = {
    VTX(1180, 64, -819, 0, 0, 0, 127, 0, 255),
    VTX(1180, 28, -779, 0, 0, 0, 0, 127, 255),
    VTX(1180, 4, -639, 0, 0, 0, 127, 0, 255),
    VTX(1180, 4, -739, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_000EF8[3] = {
    VTX(1180, 16, -739, 0, 0, 0, 127, 0, 255),
    VTX(1180, 16, -759, 0, 0, 0, 0, 127, 255),
    VTX(1180, 28, -759, 0, 0, 0, 127, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_000F28[12] = {
    VTX(1180, 64, -839, 0, 0, 0, 127, 0, 255),
    VTX(1000, 64, -839, 0, 0, 0, 127, 0, 255),
    VTX(1000, 64, -819, 0, 0, 0, 127, 0, 255),
    VTX(1180, 40, -779, 0, 0, 0, 0, 127, 255),
    VTX(1000, 40, -779, 0, 0, 0, 0, 127, 255),
    VTX(1000, 28, -779, 0, 0, 0, 0, 127, 255),
    VTX(1180, 4, -739, 0, 0, 0, 127, 0, 255),
    VTX(1000, 4, -739, 0, 0, 0, 127, 0, 255),
    VTX(1000, 4, -639, 0, 0, 0, 127, 0, 255),
    VTX(1180, 16, -739, 0, 0, 0, 0, 127, 255),
    VTX(1000, 16, -739, 0, 0, 0, 0, 127, 255),
    VTX(1000, 4, -739, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_000FE8[9] = {
    VTX(1180, 16, -759, 0, 0, 0, 127, 0, 255),
    VTX(1000, 16, -759, 0, 0, 0, 127, 0, 255),
    VTX(1000, 16, -739, 0, 0, 0, 127, 0, 255),
    VTX(1180, 28, -759, 0, 0, 0, 0, 127, 255),
    VTX(1000, 28, -759, 0, 0, 0, 0, 127, 255),
    VTX(1000, 16, -759, 0, 0, 0, 0, 127, 255),
    VTX(1180, 28, -779, 0, 0, 0, 127, 0, 255),
    VTX(1000, 28, -779, 0, 0, 0, 127, 0, 255),
    VTX(1000, 28, -759, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x001078[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000DB8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000EB8[0], 4, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000F28[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000EF8[0], 3, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_000FE8[0], 9, 3),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_0011A8[22] = {
    VTX(1590, 60, -1479, 0, 0, 0, 0, 127, 255),
    VTX(1718, 60, -1479, 0, 0, 0, 0, 127, 255),
    VTX(1590, 80, -1479, 0, 0, 0, 0, 127, 255),
    VTX(1846, 60, -1479, 0, 0, 0, 0, 127, 255),
    VTX(1718, 120, -1479, 0, 0, 0, 0, 127, 255),
    VTX(1846, 120, -1479, 0, 0, 0, 0, 127, 255),
    VTX(1590, 60, -1489, 0, 0, 0, 0, 130, 255),
    VTX(1590, 80, -1489, 0, 0, 0, 0, 130, 255),
    VTX(1718, 60, -1489, 0, 0, 0, 0, 130, 255),
    VTX(1718, 120, -1489, 0, 0, 0, 0, 130, 255),
    VTX(1846, 60, -1489, 0, 0, 0, 0, 130, 255),
    VTX(1590, 80, -1479, 0, 0, 219, 121, 0, 255),
    VTX(1718, 120, -1479, 0, 0, 242, 126, 0, 255),
    VTX(1718, 120, -1489, 0, 0, 242, 126, 0, 255),
    VTX(1590, 80, -1489, 0, 0, 238, 125, 0, 255),
    VTX(1846, 120, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1846, 120, -1489, 0, 0, 0, 127, 0, 255),
    VTX(1846, 120, -1489, 0, 0, 0, 0, 130, 255),
    VTX(1590, 60, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1590, 80, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1590, 80, -1489, 0, 0, 130, 0, 0, 255),
    VTX(1590, 60, -1489, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x001308[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0011A8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 0, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(3, 5, 5, 0),
    gsSP1Triangle(3, 5, 4, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 6, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(7, 10, 8, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0011A8[9], 2, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0011A8[12], 2, 2),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0011A8[15], 7, 4),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(2, 5, 3, 0),
    gsSP1Triangle(0, 6, 6, 0),
    gsSP1Triangle(0, 6, 1, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_001410[20] = {
    VTX(1696, 90, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1696, 100, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1696, 100, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1696, 90, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1696, 100, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1728, 100, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1728, 100, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1696, 100, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1728, 100, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1728, 110, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1728, 110, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1728, 100, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1728, 110, -1479, 0, 0, 242, 126, 0, 255),
    VTX(1837, 110, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1837, 110, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1728, 110, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1728, 110, -1579, 0, 0, 0, 127, 0, 255),
    VTX(1946, 110, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1664, 90, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1600, 60, -1479, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_001550[4] = {
    VTX(1600, 70, -1479, 0, 0, 238, 125, 0, 255),
    VTX(1632, 70, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1632, 80, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1664, 80, -1479, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_001590[7] = {
    VTX(1946, 110, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1696, 90, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1696, 90, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1664, 90, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1600, 70, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1600, 70, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1600, 60, -1679, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_001600[12] = {
    VTX(1632, 70, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1632, 70, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1600, 70, -1679, 0, 0, 238, 125, 0, 255),
    VTX(1632, 80, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1632, 80, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1632, 70, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1664, 80, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1664, 80, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1632, 80, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1664, 90, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1664, 90, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1664, 80, -1679, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x0016C0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001410[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001410[12], 8, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001590[0], 7, 8),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(7, 12, 13, 0),
    gsSP1Triangle(7, 13, 14, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001550[0], 4, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001600[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_0017F8[22] = {
    VTX(1590, 60, -1679, 0, 0, 0, 0, 130, 255),
    VTX(1590, 80, -1679, 0, 0, 0, 0, 130, 255),
    VTX(1718, 60, -1679, 0, 0, 0, 0, 130, 255),
    VTX(1718, 120, -1679, 0, 0, 0, 0, 130, 255),
    VTX(1846, 60, -1679, 0, 0, 0, 0, 130, 255),
    VTX(1846, 120, -1679, 0, 0, 0, 0, 130, 255),
    VTX(1590, 60, -1669, 0, 0, 0, 0, 127, 255),
    VTX(1718, 60, -1669, 0, 0, 0, 0, 127, 255),
    VTX(1590, 80, -1669, 0, 0, 0, 0, 127, 255),
    VTX(1846, 60, -1669, 0, 0, 0, 0, 127, 255),
    VTX(1718, 120, -1669, 0, 0, 0, 0, 127, 255),
    VTX(1590, 80, -1669, 0, 0, 219, 121, 0, 255),
    VTX(1718, 120, -1669, 0, 0, 238, 125, 0, 255),
    VTX(1718, 120, -1679, 0, 0, 238, 125, 0, 255),
    VTX(1590, 80, -1679, 0, 0, 238, 125, 0, 255),
    VTX(1846, 120, -1669, 0, 0, 0, 127, 0, 255),
    VTX(1846, 120, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1846, 120, -1669, 0, 0, 0, 0, 127, 255),
    VTX(1590, 60, -1669, 0, 0, 130, 0, 0, 255),
    VTX(1590, 80, -1669, 0, 0, 130, 0, 0, 255),
    VTX(1590, 80, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1590, 60, -1679, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x001958[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0017F8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 0, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(3, 5, 5, 0),
    gsSP1Triangle(3, 5, 4, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 6, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(7, 10, 8, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0017F8[9], 2, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0017F8[12], 2, 2),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0017F8[15], 7, 4),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(2, 5, 3, 0),
    gsSP1Triangle(0, 6, 6, 0),
    gsSP1Triangle(0, 6, 1, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_001A60[16] = {
    VTX(1840, 260, -1159, 0, 0, 0, 127, 0, 255),
    VTX(1840, 260, -999, 0, 0, 0, 127, 0, 255),
    VTX(3040, 260, -999, 0, 0, 0, 127, 0, 255),
    VTX(3040, 260, -1159, 0, 0, 0, 127, 0, 255),
    VTX(1840, 60, -999, 0, 0, 0, 0, 127, 255),
    VTX(3040, 60, -999, 0, 0, 0, 0, 127, 255),
    VTX(3040, 260, -999, 0, 0, 0, 0, 127, 255),
    VTX(1840, 260, -999, 0, 0, 0, 0, 127, 255),
    VTX(1780, 260, -1139, 0, 0, 0, 0, 127, 255),
    VTX(1780, 60, -1139, 0, 0, 0, 0, 127, 255),
    VTX(2980, 60, -1139, 0, 0, 0, 0, 127, 255),
    VTX(2980, 260, -1139, 0, 0, 0, 0, 127, 255),
    VTX(3040, 60, -1159, 0, 0, 127, 0, 0, 255),
    VTX(3040, 260, -1159, 0, 0, 127, 0, 0, 255),
    VTX(3040, 260, -999, 0, 0, 127, 0, 0, 255),
    VTX(3040, 60, -999, 0, 0, 127, 0, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_001B60[4] = {
    VTX(1840, 260, -999, 0, 0, 130, 0, 0, 255),
    VTX(1840, 260, -1159, 0, 0, 130, 0, 0, 255),
    VTX(1840, 60, -1159, 0, 0, 130, 0, 0, 255),
    VTX(1840, 60, -999, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x001BA0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001A60[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001B60[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_001C58[16] = {
    VTX(1780, 60, -1139, 0, 0, 130, 0, 0, 255),
    VTX(1780, 260, -1139, 0, 0, 130, 0, 0, 255),
    VTX(1780, 260, -1489, 0, 0, 130, 0, 0, 255),
    VTX(1780, 60, -1489, 0, 0, 130, 0, 0, 255),
    VTX(1780, 60, -1671, 0, 0, 130, 0, 0, 255),
    VTX(1780, 260, -1671, 0, 0, 130, 0, 0, 255),
    VTX(1780, 260, -2339, 0, 0, 130, 0, 0, 255),
    VTX(1780, 60, -2339, 0, 0, 130, 0, 0, 255),
    VTX(1940, 60, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1940, 60, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1940, 290, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1940, 290, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1760, 290, -1679, 0, 0, 0, 0, 127, 255),
    VTX(1760, 60, -1679, 0, 0, 0, 0, 127, 255),
    VTX(1940, 60, -1679, 0, 0, 0, 0, 127, 255),
    VTX(1940, 290, -1679, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_001D58[4] = {
    VTX(1760, 60, -1479, 0, 0, 0, 0, 130, 255),
    VTX(1760, 290, -1479, 0, 0, 0, 0, 130, 255),
    VTX(1940, 290, -1479, 0, 0, 0, 0, 130, 255),
    VTX(1940, 60, -1479, 0, 0, 0, 0, 130, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x001D98[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001C58[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001D58[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_001E50[16] = {
    VTX(1760, 60, -1719, 0, 0, 127, 0, 0, 255),
    VTX(1760, 320, -1719, 0, 0, 127, 0, 0, 255),
    VTX(1760, 320, -1679, 0, 0, 127, 0, 0, 255),
    VTX(1760, 60, -1679, 0, 0, 127, 0, 0, 255),
    VTX(1760, 60, -1679, 0, 0, 0, 0, 127, 255),
    VTX(1760, 320, -1679, 0, 0, 0, 0, 127, 255),
    VTX(1720, 320, -1679, 0, 0, 0, 0, 127, 255),
    VTX(1720, 60, -1679, 0, 0, 0, 0, 127, 255),
    VTX(1720, 60, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1720, 320, -1679, 0, 0, 130, 0, 0, 255),
    VTX(1720, 320, -1719, 0, 0, 130, 0, 0, 255),
    VTX(1720, 60, -1719, 0, 0, 130, 0, 0, 255),
    VTX(1720, 60, -1719, 0, 0, 0, 0, 130, 255),
    VTX(1720, 320, -1719, 0, 0, 0, 0, 130, 255),
    VTX(1760, 320, -1719, 0, 0, 0, 0, 130, 255),
    VTX(1760, 60, -1719, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_001F50[4] = {
    VTX(1760, 320, -1719, 0, 0, 0, 127, 0, 255),
    VTX(1720, 320, -1719, 0, 0, 0, 127, 0, 255),
    VTX(1720, 320, -1679, 0, 0, 0, 127, 0, 255),
    VTX(1760, 320, -1679, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x001F90[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001E50[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_001F50[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_002048[16] = {
    VTX(1760, 60, -1479, 0, 0, 127, 0, 0, 255),
    VTX(1760, 320, -1479, 0, 0, 127, 0, 0, 255),
    VTX(1760, 320, -1439, 0, 0, 127, 0, 0, 255),
    VTX(1760, 60, -1439, 0, 0, 127, 0, 0, 255),
    VTX(1760, 60, -1439, 0, 0, 0, 0, 127, 255),
    VTX(1760, 320, -1439, 0, 0, 0, 0, 127, 255),
    VTX(1720, 320, -1439, 0, 0, 0, 0, 127, 255),
    VTX(1720, 60, -1439, 0, 0, 0, 0, 127, 255),
    VTX(1720, 60, -1439, 0, 0, 130, 0, 0, 255),
    VTX(1720, 320, -1439, 0, 0, 130, 0, 0, 255),
    VTX(1720, 320, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1720, 60, -1479, 0, 0, 130, 0, 0, 255),
    VTX(1720, 60, -1479, 0, 0, 0, 0, 130, 255),
    VTX(1720, 320, -1479, 0, 0, 0, 0, 130, 255),
    VTX(1760, 320, -1479, 0, 0, 0, 0, 130, 255),
    VTX(1760, 60, -1479, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_002148[4] = {
    VTX(1760, 320, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1720, 320, -1479, 0, 0, 0, 127, 0, 255),
    VTX(1720, 320, -1439, 0, 0, 0, 127, 0, 255),
    VTX(1760, 320, -1439, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x002188[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002048[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002148[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_002240[16] = {
    VTX(1185, 140, -839, 0, 0, 0, 0, 130, 255),
    VTX(1185, 20, -839, 0, 0, 0, 0, 130, 255),
    VTX(1175, 20, -839, 0, 0, 0, 0, 130, 255),
    VTX(1175, 140, -839, 0, 0, 0, 0, 130, 255),
    VTX(1185, 20, -839, 0, 0, 127, 0, 0, 255),
    VTX(1185, 140, -839, 0, 0, 127, 0, 0, 255),
    VTX(1185, 140, -759, 0, 0, 127, 0, 0, 255),
    VTX(1185, 20, -759, 0, 0, 127, 0, 0, 255),
    VTX(1175, 140, -759, 0, 0, 130, 0, 0, 255),
    VTX(1175, 140, -839, 0, 0, 130, 0, 0, 255),
    VTX(1175, 20, -839, 0, 0, 130, 0, 0, 255),
    VTX(1175, 20, -759, 0, 0, 130, 0, 0, 255),
    VTX(1175, 140, -839, 0, 0, 0, 127, 0, 255),
    VTX(1175, 140, -759, 0, 0, 0, 127, 0, 255),
    VTX(1185, 140, -759, 0, 0, 0, 127, 0, 255),
    VTX(1185, 140, -839, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x002340[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002240[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_outside_tot_room_00Vtx_0023E0[31] = {
    VTX(1170, 148, -799, 0, 0, 148, 45, 45, 255),
    VTX(1173, 148, -792, 0, 0, 148, 45, 45, 255),
    VTX(1175, 155, -794, 0, 0, 148, 45, 45, 255),
    VTX(1173, 155, -799, 0, 0, 148, 45, 45, 255),
    VTX(1173, 141, -799, 0, 0, 148, 212, 45, 255),
    VTX(1175, 141, -794, 0, 0, 148, 212, 45, 255),
    VTX(1173, 148, -792, 0, 0, 148, 212, 45, 255),
    VTX(1170, 148, -799, 0, 0, 148, 212, 45, 255),
    VTX(1180, 138, -799, 0, 0, 241, 138, 40, 255),
    VTX(1185, 141, -794, 0, 0, 241, 138, 40, 255),
    VTX(1180, 141, -792, 0, 0, 241, 138, 40, 255),
    VTX(1175, 141, -794, 0, 0, 241, 138, 40, 255),
    VTX(1173, 141, -799, 0, 0, 241, 138, 40, 255),
    VTX(1175, 155, -804, 0, 0, 209, 117, 0, 255),
    VTX(1173, 155, -799, 0, 0, 209, 117, 0, 255),
    VTX(1180, 158, -799, 0, 0, 209, 117, 0, 255),
    VTX(1175, 155, -794, 0, 0, 209, 117, 0, 255),
    VTX(1185, 155, -804, 0, 0, 16, 119, 217, 255),
    VTX(1180, 155, -806, 0, 0, 16, 119, 217, 255),
    VTX(1187, 155, -799, 0, 0, 16, 119, 217, 255),
    VTX(1180, 138, -799, 0, 0, 241, 138, 217, 255),
    VTX(1175, 141, -804, 0, 0, 148, 212, 212, 255),
    VTX(1173, 148, -806, 0, 0, 148, 45, 212, 255),
    VTX(1180, 155, -792, 0, 0, 0, 0, 127, 255),
    VTX(1180, 148, -789, 0, 0, 0, 0, 127, 255),
    VTX(1180, 141, -792, 0, 0, 0, 0, 127, 255),
    VTX(1180, 138, -799, 0, 0, 0, 0, 127, 255),
    VTX(1175, 141, -794, 0, 0, 212, 212, 109, 255),
    VTX(1173, 148, -792, 0, 0, 212, 45, 109, 255),
    VTX(1175, 155, -794, 0, 0, 237, 115, 48, 255),
    VTX(1180, 148, -809, 0, 0, 212, 45, 148, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_0025D0[5] = {
    VTX(1180, 155, -792, 0, 0, 34, 117, 34, 255),
    VTX(1185, 155, -794, 0, 0, 34, 117, 34, 255),
    VTX(1187, 148, -792, 0, 0, 109, 45, 45, 255),
    VTX(1185, 141, -794, 0, 0, 109, 212, 45, 255),
    VTX(1180, 138, -799, 0, 0, 48, 140, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_002620[4] = {
    VTX(1180, 141, -792, 0, 0, 45, 212, 109, 255),
    VTX(1180, 148, -789, 0, 0, 45, 45, 109, 255),
    VTX(1187, 148, -806, 0, 0, 45, 45, 148, 255),
    VTX(1180, 141, -806, 0, 0, 212, 212, 148, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_002660[3] = {
    VTX(1185, 141, -804, 0, 0, 45, 212, 148, 255),
    VTX(1187, 141, -799, 0, 0, 109, 212, 212, 255),
    VTX(1190, 148, -799, 0, 0, 109, 45, 212, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_002690[24] = {
    VTX(1180, 158, -799, 0, 0, 16, 119, 217, 255),
    VTX(1175, 155, -804, 0, 0, 16, 119, 217, 255),
    VTX(1180, 141, -806, 0, 0, 241, 138, 217, 255),
    VTX(1185, 141, -804, 0, 0, 241, 138, 217, 255),
    VTX(1175, 141, -804, 0, 0, 241, 138, 217, 255),
    VTX(1173, 141, -799, 0, 0, 241, 138, 217, 255),
    VTX(1173, 141, -799, 0, 0, 148, 212, 212, 255),
    VTX(1170, 148, -799, 0, 0, 148, 212, 212, 255),
    VTX(1173, 148, -806, 0, 0, 148, 212, 212, 255),
    VTX(1170, 148, -799, 0, 0, 148, 45, 212, 255),
    VTX(1173, 155, -799, 0, 0, 148, 45, 212, 255),
    VTX(1175, 155, -804, 0, 0, 148, 45, 212, 255),
    VTX(1180, 158, -799, 0, 0, 0, 0, 127, 255),
    VTX(1180, 141, -792, 0, 0, 212, 212, 109, 255),
    VTX(1180, 148, -789, 0, 0, 212, 212, 109, 255),
    VTX(1173, 148, -792, 0, 0, 212, 212, 109, 255),
    VTX(1180, 148, -789, 0, 0, 212, 45, 109, 255),
    VTX(1180, 155, -792, 0, 0, 212, 45, 109, 255),
    VTX(1175, 155, -794, 0, 0, 212, 45, 109, 255),
    VTX(1180, 155, -792, 0, 0, 237, 115, 48, 255),
    VTX(1180, 158, -799, 0, 0, 237, 115, 48, 255),
    VTX(1173, 148, -806, 0, 0, 212, 45, 148, 255),
    VTX(1175, 155, -804, 0, 0, 212, 45, 148, 255),
    VTX(1180, 155, -806, 0, 0, 212, 45, 148, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_002810[11] = {
    VTX(1180, 158, -799, 0, 0, 34, 117, 34, 255),
    VTX(1187, 155, -799, 0, 0, 34, 117, 34, 255),
    VTX(1190, 148, -799, 0, 0, 109, 45, 45, 255),
    VTX(1187, 155, -799, 0, 0, 109, 45, 45, 255),
    VTX(1185, 155, -794, 0, 0, 109, 45, 45, 255),
    VTX(1187, 141, -799, 0, 0, 109, 212, 45, 255),
    VTX(1190, 148, -799, 0, 0, 109, 212, 45, 255),
    VTX(1187, 148, -792, 0, 0, 109, 212, 45, 255),
    VTX(1185, 141, -804, 0, 0, 48, 140, 0, 255),
    VTX(1187, 141, -799, 0, 0, 48, 140, 0, 255),
    VTX(1185, 141, -794, 0, 0, 48, 140, 0, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_0028C0[12] = {
    VTX(1185, 141, -794, 0, 0, 45, 212, 109, 255),
    VTX(1187, 148, -792, 0, 0, 45, 212, 109, 255),
    VTX(1180, 148, -789, 0, 0, 45, 212, 109, 255),
    VTX(1187, 148, -792, 0, 0, 45, 45, 109, 255),
    VTX(1185, 155, -794, 0, 0, 45, 45, 109, 255),
    VTX(1180, 155, -792, 0, 0, 45, 45, 109, 255),
    VTX(1180, 148, -809, 0, 0, 45, 45, 148, 255),
    VTX(1180, 155, -806, 0, 0, 45, 45, 148, 255),
    VTX(1185, 155, -804, 0, 0, 45, 45, 148, 255),
    VTX(1175, 141, -804, 0, 0, 212, 212, 148, 255),
    VTX(1173, 148, -806, 0, 0, 212, 212, 148, 255),
    VTX(1180, 148, -809, 0, 0, 212, 212, 148, 255),
}; 

static Vtx pr_outside_tot_room_00Vtx_002980[9] = {
    VTX(1180, 141, -806, 0, 0, 45, 212, 148, 255),
    VTX(1180, 148, -809, 0, 0, 45, 212, 148, 255),
    VTX(1187, 148, -806, 0, 0, 45, 212, 148, 255),
    VTX(1185, 141, -804, 0, 0, 109, 212, 212, 255),
    VTX(1187, 148, -806, 0, 0, 109, 212, 212, 255),
    VTX(1190, 148, -799, 0, 0, 109, 212, 212, 255),
    VTX(1187, 148, -806, 0, 0, 109, 45, 212, 255),
    VTX(1185, 155, -804, 0, 0, 109, 45, 212, 255),
    VTX(1187, 155, -799, 0, 0, 109, 45, 212, 255),
}; 

Gfx pr_outside_tot_room_00Dlist0x002A10[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 161, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0023E0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 8, 9, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 8, 11, 0),
    gsSP1Triangle(8, 11, 12, 0),
    gsSP1Triangle(8, 8, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(13, 14, 15, 0),
    gsSP1Triangle(13, 15, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0023E0[14], 8, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002690[0], 8, 8),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(0, 1, 1, 0),
    gsSP1Triangle(3, 4, 8, 0),
    gsSP1Triangle(3, 8, 8, 0),
    gsSP1Triangle(4, 9, 8, 0),
    gsSP1Triangle(4, 8, 8, 0),
    gsSP1Triangle(5, 3, 8, 0),
    gsSP1Triangle(5, 8, 8, 0),
    gsSP1Triangle(6, 6, 10, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(6, 6, 12, 0),
    gsSP1Triangle(6, 12, 10, 0),
    gsSP1Triangle(6, 6, 13, 0),
    gsSP1Triangle(6, 13, 12, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0023E0[21], 7, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002690[6], 9, 7),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(0, 8, 9, 0),
    gsSP1Triangle(1, 10, 11, 0),
    gsSP1Triangle(1, 11, 12, 0),
    gsSP1Triangle(2, 2, 13, 0),
    gsSP1Triangle(2, 13, 13, 0),
    gsSP1Triangle(3, 3, 2, 0),
    gsSP1Triangle(3, 2, 2, 0),
    gsSP1Triangle(4, 4, 3, 0),
    gsSP1Triangle(4, 3, 3, 0),
    gsSP1Triangle(5, 5, 4, 0),
    gsSP1Triangle(5, 4, 4, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0023E0[27], 4, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002690[13], 11, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0025D0[0], 5, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002810[0], 11, 5),
    gsSP1Triangle(0, 1, 5, 0),
    gsSP1Triangle(0, 5, 5, 0),
    gsSP1Triangle(1, 6, 5, 0),
    gsSP1Triangle(1, 5, 5, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 4, 13, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(4, 4, 14, 0),
    gsSP1Triangle(4, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002620[0], 4, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_0028C0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002660[0], 3, 0),
    gsSPVertex(&pr_outside_tot_room_00Vtx_002980[0], 9, 3),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

Gfx pr_outside_tot_room_00Dlist0x002D10[] = {
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x0001F0),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x000438),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x000600),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x0007A0),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x000940),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x000AE0),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x000CF0),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x001078),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x001308),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x0016C0),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x001958),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x001BA0),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x001D98),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x001F90),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x002188),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x002340),
    gsSPDisplayList(pr_outside_tot_room_00Dlist0x002A10),
    gsSPEndDisplayList(),
}; 


