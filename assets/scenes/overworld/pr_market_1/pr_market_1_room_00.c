#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "pr_market_1_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "pr_market_1_scene.h"


static SCmdEchoSettings pr_market_1_room_00Set0000Cmd00;
static SCmdRoomBehavior pr_market_1_room_00Set0000Cmd01;
static SCmdSkyboxDisables pr_market_1_room_00Set0000Cmd02;
static SCmdTimeSettings pr_market_1_room_00Set0000Cmd03;
static SCmdWindSettings pr_market_1_room_00Set0000Cmd04;
static SCmdMesh pr_market_1_room_00Set0000Cmd05;
static SCmdObjectList pr_market_1_room_00Set0000Cmd06;
static SCmdActorList pr_market_1_room_00Set0000Cmd07;
static SCmdEndMarker pr_market_1_room_00Set0000Cmd08;
static s32 terminatorMaybe;
static Vtx pr_market_1_room_00Vtx_000120[16];
static Vtx pr_market_1_room_00Vtx_0002C0[16];
static Vtx pr_market_1_room_00Vtx_000460[16];
static Vtx pr_market_1_room_00Vtx_000600[16];
static Vtx pr_market_1_room_00Vtx_0007A0[16];
static Vtx pr_market_1_room_00Vtx_000940[16];
static Vtx pr_market_1_room_00Vtx_000AE0[16];
static Vtx pr_market_1_room_00Vtx_000C80[16];
static Vtx pr_market_1_room_00Vtx_000E20[16];
static Vtx pr_market_1_room_00Vtx_000FC0[16];
static Vtx pr_market_1_room_00Vtx_001160[16];
static Vtx pr_market_1_room_00Vtx_001300[16];
static Vtx pr_market_1_room_00Vtx_0014A0[16];
static Vtx pr_market_1_room_00Vtx_001640[16];
static Vtx pr_market_1_room_00Vtx_0017E0[16];
static Vtx pr_market_1_room_00Vtx_001980[16];
static Vtx pr_market_1_room_00Vtx_001B20[16];
static Vtx pr_market_1_room_00Vtx_001C20[4];
static Vtx pr_market_1_room_00Vtx_001C60[4];
static Vtx pr_market_1_room_00Vtx_001CA0[4];
static Vtx pr_market_1_room_00Vtx_001CE0[4];
static Vtx pr_market_1_room_00Vtx_001D20[4];
static Vtx pr_market_1_room_00Vtx_001D60[4];
static Vtx pr_market_1_room_00Vtx_001DA0[2];
static Vtx pr_market_1_room_00Vtx_001DC0[12];
static Vtx pr_market_1_room_00Vtx_001E80[12];
static Vtx pr_market_1_room_00Vtx_001F40[12];
static Vtx pr_market_1_room_00Vtx_002000[12];
static Vtx pr_market_1_room_00Vtx_0020C0[12];
static Vtx pr_market_1_room_00Vtx_002180[12];
static Vtx pr_market_1_room_00Vtx_002240[6];
static Vtx pr_market_1_room_00Vtx_002550[4];
static Vtx pr_market_1_room_00Vtx_002600[16];
static Vtx pr_market_1_room_00Vtx_0027A0[16];
static Vtx pr_market_1_room_00Vtx_002940[16];
static Vtx pr_market_1_room_00Vtx_002A40[13];
static Vtx pr_market_1_room_00Vtx_002B10[4];
static Vtx pr_market_1_room_00Vtx_002B50[9];
static Vtx pr_market_1_room_00Vtx_002BE0[2];
static Vtx pr_market_1_room_00Vtx_002C00[23];
static Vtx pr_market_1_room_00Vtx_002D70[12];
static Vtx pr_market_1_room_00Vtx_002E30[17];

static SCmdEchoSettings pr_market_1_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior pr_market_1_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables pr_market_1_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x01 }; // 0x0010

static SCmdTimeSettings pr_market_1_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x01 }; // 0x0018

static SCmdWindSettings pr_market_1_room_00Set0000Cmd04 = {  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02 }; // 0x0020

static SCmdMesh pr_market_1_room_00Set0000Cmd05 = {  0x0A, 0, (u32)&pr_market_1_room_00MeshHeader0x000100 }; // 0x0028

static SCmdObjectList pr_market_1_room_00Set0000Cmd06 = {  0x0B, 0x0C, (u32)pr_market_1_room_00ObjectList0x000048 }; // 0x0030

static SCmdActorList pr_market_1_room_00Set0000Cmd07 = {  0x01, 0x0A, (u32)pr_market_1_room_00ActorList0x000060 }; // 0x0038 }; 

static SCmdEndMarker pr_market_1_room_00Set0000Cmd08 = {  0x14, 0x00, 0x00 }; // 0x0040

s16 pr_market_1_room_00ObjectList0x000048[12] = {
	OBJECT_O_ANIME,
	OBJECT_OE_ANIME,
    OBJECT_OA1, // 0x1500
    OBJECT_OB3, // 0x1601
    OBJECT_OB4, // 0x2508
    OBJECT_OA4, // 0x1802
    OBJECT_OB2, // 0x1A03
    OBJECT_OA8, // 0x1F05
    OBJECT_OA9, // 0x2106
    OBJECT_OA7, // 0x1D04
    OBJECT_OA6, // 0x2307
    OBJECT_OA5, // 0x2709
}; 

ActorEntry pr_market_1_room_00ActorList0x000060[10] = {
	{ ACTOR_EN_NPC, -82, 0, 179, 0, 23847, 0, 0x1500 },
	{ ACTOR_EN_NPC, 253, 0, -27, 0, -14745, 0, 0x1A03 },
	{ ACTOR_EN_NPC, 391, 0, 402, 0, -26396, 0, 0x2508 },
	{ ACTOR_EN_NPC, 424, 0, 144, 0, -30583, 0, 0x1F05 },
	{ ACTOR_EN_NPC, 361, 0, -234, 0, -25303, 0, 0x1D04 }, // OBJECT_OA7
	{ ACTOR_EN_NPC, 114, 0, -286, 0, 0, 0, 0x1802 }, // OBJECT_OA4
	{ ACTOR_EN_NPC, -499, 0, -321, 0, 1638, 0, 0x2307 },
	{ ACTOR_EN_NPC, -362, 0, 164, 0, -16019, 0, 0x2106 },
	{ ACTOR_EN_NPC, -277, 0, 486, 0, 18022, 0, 0x2709 }, 
	{ ACTOR_EN_NPC, -108, 0, -157, 0, 4733, 0, 0x1601 },
}; 

MeshHeader0 pr_market_1_room_00MeshHeader0x000100 = { { 0 }, 0x01, (u32)&pr_market_1_room_00MeshDListEntry0x00010C, (u32)&(pr_market_1_room_00MeshDListEntry0x00010C) + sizeof(pr_market_1_room_00MeshDListEntry0x00010C) }; 

MeshEntry0 pr_market_1_room_00MeshDListEntry0x00010C[1] = {
	{ (u32)pr_market_1_room_00Dlist0x003248, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad118 = 0;
static u32 pad11C = 0;

static Vtx pr_market_1_room_00Vtx_000120[16] = {
    VTX(430, 0, -509, 0, 0, 0, 0, 127, 255),
    VTX(450, 0, -509, 0, 0, 0, 0, 127, 255),
    VTX(450, 120, -509, 0, 0, 0, 0, 127, 255),
    VTX(430, 120, -509, 0, 0, 0, 0, 127, 255),
    VTX(450, 120, -529, 0, 0, 0, 0, 130, 255),
    VTX(450, 0, -529, 0, 0, 0, 0, 130, 255),
    VTX(430, 0, -529, 0, 0, 0, 0, 130, 255),
    VTX(430, 120, -529, 0, 0, 0, 0, 130, 255),
    VTX(450, 0, -529, 0, 0, 127, 0, 0, 255),
    VTX(450, 120, -529, 0, 0, 127, 0, 0, 255),
    VTX(450, 120, -509, 0, 0, 127, 0, 0, 255),
    VTX(450, 0, -509, 0, 0, 127, 0, 0, 255),
    VTX(430, 120, -509, 0, 0, 130, 0, 0, 255),
    VTX(430, 120, -529, 0, 0, 130, 0, 0, 255),
    VTX(430, 0, -529, 0, 0, 130, 0, 0, 255),
    VTX(430, 0, -509, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x000220[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_000120[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_0002C0[16] = {
    VTX(450, 0, 50, 0, 0, 0, 0, 127, 255),
    VTX(470, 0, 50, 0, 0, 0, 0, 127, 255),
    VTX(470, 120, 50, 0, 0, 0, 0, 127, 255),
    VTX(450, 120, 50, 0, 0, 0, 0, 127, 255),
    VTX(470, 120, 30, 0, 0, 0, 0, 130, 255),
    VTX(470, 0, 30, 0, 0, 0, 0, 130, 255),
    VTX(450, 0, 30, 0, 0, 0, 0, 130, 255),
    VTX(450, 120, 30, 0, 0, 0, 0, 130, 255),
    VTX(470, 0, 30, 0, 0, 127, 0, 0, 255),
    VTX(470, 120, 30, 0, 0, 127, 0, 0, 255),
    VTX(470, 120, 50, 0, 0, 127, 0, 0, 255),
    VTX(470, 0, 50, 0, 0, 127, 0, 0, 255),
    VTX(450, 120, 50, 0, 0, 130, 0, 0, 255),
    VTX(450, 120, 30, 0, 0, 130, 0, 0, 255),
    VTX(450, 0, 30, 0, 0, 130, 0, 0, 255),
    VTX(450, 0, 50, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x0003C0[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_0002C0[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_000460[16] = {
    VTX(370, 0, 590, 0, 0, 0, 0, 127, 255),
    VTX(390, 0, 590, 0, 0, 0, 0, 127, 255),
    VTX(390, 120, 590, 0, 0, 0, 0, 127, 255),
    VTX(370, 120, 590, 0, 0, 0, 0, 127, 255),
    VTX(390, 120, 570, 0, 0, 0, 0, 130, 255),
    VTX(390, 0, 570, 0, 0, 0, 0, 130, 255),
    VTX(370, 0, 570, 0, 0, 0, 0, 130, 255),
    VTX(370, 120, 570, 0, 0, 0, 0, 130, 255),
    VTX(390, 0, 570, 0, 0, 127, 0, 0, 255),
    VTX(390, 120, 570, 0, 0, 127, 0, 0, 255),
    VTX(390, 120, 590, 0, 0, 127, 0, 0, 255),
    VTX(390, 0, 590, 0, 0, 127, 0, 0, 255),
    VTX(370, 120, 590, 0, 0, 130, 0, 0, 255),
    VTX(370, 120, 570, 0, 0, 130, 0, 0, 255),
    VTX(370, 0, 570, 0, 0, 130, 0, 0, 255),
    VTX(370, 0, 590, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x000560[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_000460[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_000600[16] = {
    VTX(-529, 0, 330, 0, 0, 0, 0, 127, 255),
    VTX(-509, 0, 330, 0, 0, 0, 0, 127, 255),
    VTX(-509, 120, 330, 0, 0, 0, 0, 127, 255),
    VTX(-529, 120, 330, 0, 0, 0, 0, 127, 255),
    VTX(-509, 120, 310, 0, 0, 0, 0, 130, 255),
    VTX(-509, 0, 310, 0, 0, 0, 0, 130, 255),
    VTX(-529, 0, 310, 0, 0, 0, 0, 130, 255),
    VTX(-529, 120, 310, 0, 0, 0, 0, 130, 255),
    VTX(-509, 0, 310, 0, 0, 127, 0, 0, 255),
    VTX(-509, 120, 310, 0, 0, 127, 0, 0, 255),
    VTX(-509, 120, 330, 0, 0, 127, 0, 0, 255),
    VTX(-509, 0, 330, 0, 0, 127, 0, 0, 255),
    VTX(-529, 120, 330, 0, 0, 130, 0, 0, 255),
    VTX(-529, 120, 310, 0, 0, 130, 0, 0, 255),
    VTX(-529, 0, 310, 0, 0, 130, 0, 0, 255),
    VTX(-529, 0, 330, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x000700[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_000600[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_0007A0[16] = {
    VTX(-449, 0, -549, 0, 0, 0, 0, 127, 255),
    VTX(-429, 0, -549, 0, 0, 0, 0, 127, 255),
    VTX(-429, 120, -549, 0, 0, 0, 0, 127, 255),
    VTX(-449, 120, -549, 0, 0, 0, 0, 127, 255),
    VTX(-429, 120, -569, 0, 0, 0, 0, 130, 255),
    VTX(-429, 0, -569, 0, 0, 0, 0, 130, 255),
    VTX(-449, 0, -569, 0, 0, 0, 0, 130, 255),
    VTX(-449, 120, -569, 0, 0, 0, 0, 130, 255),
    VTX(-429, 0, -569, 0, 0, 127, 0, 0, 255),
    VTX(-429, 120, -569, 0, 0, 127, 0, 0, 255),
    VTX(-429, 120, -549, 0, 0, 127, 0, 0, 255),
    VTX(-429, 0, -549, 0, 0, 127, 0, 0, 255),
    VTX(-449, 120, -549, 0, 0, 130, 0, 0, 255),
    VTX(-449, 120, -569, 0, 0, 130, 0, 0, 255),
    VTX(-449, 0, -569, 0, 0, 130, 0, 0, 255),
    VTX(-449, 0, -549, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x0008A0[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_0007A0[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_000940[16] = {
    VTX(-669, 0, -569, 0, 0, 0, 0, 127, 255),
    VTX(-649, 0, -569, 0, 0, 0, 0, 127, 255),
    VTX(-649, 120, -569, 0, 0, 0, 0, 127, 255),
    VTX(-669, 120, -569, 0, 0, 0, 0, 127, 255),
    VTX(-649, 120, -589, 0, 0, 0, 0, 130, 255),
    VTX(-649, 0, -589, 0, 0, 0, 0, 130, 255),
    VTX(-669, 0, -589, 0, 0, 0, 0, 130, 255),
    VTX(-669, 120, -589, 0, 0, 0, 0, 130, 255),
    VTX(-649, 0, -589, 0, 0, 127, 0, 0, 255),
    VTX(-649, 120, -589, 0, 0, 127, 0, 0, 255),
    VTX(-649, 120, -569, 0, 0, 127, 0, 0, 255),
    VTX(-649, 0, -569, 0, 0, 127, 0, 0, 255),
    VTX(-669, 120, -569, 0, 0, 130, 0, 0, 255),
    VTX(-669, 120, -589, 0, 0, 130, 0, 0, 255),
    VTX(-669, 0, -589, 0, 0, 130, 0, 0, 255),
    VTX(-669, 0, -569, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x000A40[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_000940[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_000AE0[16] = {
    VTX(530, 0, -529, 0, 0, 0, 0, 127, 255),
    VTX(550, 0, -529, 0, 0, 0, 0, 127, 255),
    VTX(550, 120, -529, 0, 0, 0, 0, 127, 255),
    VTX(530, 120, -529, 0, 0, 0, 0, 127, 255),
    VTX(550, 120, -549, 0, 0, 0, 0, 130, 255),
    VTX(550, 0, -549, 0, 0, 0, 0, 130, 255),
    VTX(530, 0, -549, 0, 0, 0, 0, 130, 255),
    VTX(530, 120, -549, 0, 0, 0, 0, 130, 255),
    VTX(550, 0, -549, 0, 0, 127, 0, 0, 255),
    VTX(550, 120, -549, 0, 0, 127, 0, 0, 255),
    VTX(550, 120, -529, 0, 0, 127, 0, 0, 255),
    VTX(550, 0, -529, 0, 0, 127, 0, 0, 255),
    VTX(530, 120, -529, 0, 0, 130, 0, 0, 255),
    VTX(530, 120, -549, 0, 0, 130, 0, 0, 255),
    VTX(530, 0, -549, 0, 0, 130, 0, 0, 255),
    VTX(530, 0, -529, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x000BE0[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_000AE0[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_000C80[16] = {
    VTX(490, 0, -249, 0, 0, 0, 0, 127, 255),
    VTX(510, 0, -249, 0, 0, 0, 0, 127, 255),
    VTX(510, 120, -249, 0, 0, 0, 0, 127, 255),
    VTX(490, 120, -249, 0, 0, 0, 0, 127, 255),
    VTX(510, 120, -269, 0, 0, 0, 0, 130, 255),
    VTX(510, 0, -269, 0, 0, 0, 0, 130, 255),
    VTX(490, 0, -269, 0, 0, 0, 0, 130, 255),
    VTX(490, 120, -269, 0, 0, 0, 0, 130, 255),
    VTX(510, 0, -269, 0, 0, 127, 0, 0, 255),
    VTX(510, 120, -269, 0, 0, 127, 0, 0, 255),
    VTX(510, 120, -249, 0, 0, 127, 0, 0, 255),
    VTX(510, 0, -249, 0, 0, 127, 0, 0, 255),
    VTX(490, 120, -249, 0, 0, 130, 0, 0, 255),
    VTX(490, 120, -269, 0, 0, 130, 0, 0, 255),
    VTX(490, 0, -269, 0, 0, 130, 0, 0, 255),
    VTX(490, 0, -249, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x000D80[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_000C80[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_000E20[16] = {
    VTX(-89, 0, -569, 0, 0, 0, 0, 127, 255),
    VTX(-69, 0, -569, 0, 0, 0, 0, 127, 255),
    VTX(-69, 120, -569, 0, 0, 0, 0, 127, 255),
    VTX(-89, 120, -569, 0, 0, 0, 0, 127, 255),
    VTX(-69, 120, -589, 0, 0, 0, 0, 130, 255),
    VTX(-69, 0, -589, 0, 0, 0, 0, 130, 255),
    VTX(-89, 0, -589, 0, 0, 0, 0, 130, 255),
    VTX(-89, 120, -589, 0, 0, 0, 0, 130, 255),
    VTX(-69, 0, -589, 0, 0, 127, 0, 0, 255),
    VTX(-69, 120, -589, 0, 0, 127, 0, 0, 255),
    VTX(-69, 120, -569, 0, 0, 127, 0, 0, 255),
    VTX(-69, 0, -569, 0, 0, 127, 0, 0, 255),
    VTX(-89, 120, -569, 0, 0, 130, 0, 0, 255),
    VTX(-89, 120, -589, 0, 0, 130, 0, 0, 255),
    VTX(-89, 0, -589, 0, 0, 130, 0, 0, 255),
    VTX(-89, 0, -569, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x000F20[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_000E20[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_000FC0[16] = {
    VTX(-569, 0, -569, 0, 0, 0, 0, 127, 255),
    VTX(-549, 0, -569, 0, 0, 0, 0, 127, 255),
    VTX(-549, 120, -569, 0, 0, 0, 0, 127, 255),
    VTX(-569, 120, -569, 0, 0, 0, 0, 127, 255),
    VTX(-549, 120, -589, 0, 0, 0, 0, 130, 255),
    VTX(-549, 0, -589, 0, 0, 0, 0, 130, 255),
    VTX(-569, 0, -589, 0, 0, 0, 0, 130, 255),
    VTX(-569, 120, -589, 0, 0, 0, 0, 130, 255),
    VTX(-549, 0, -589, 0, 0, 127, 0, 0, 255),
    VTX(-549, 120, -589, 0, 0, 127, 0, 0, 255),
    VTX(-549, 120, -569, 0, 0, 127, 0, 0, 255),
    VTX(-549, 0, -569, 0, 0, 127, 0, 0, 255),
    VTX(-569, 120, -569, 0, 0, 130, 0, 0, 255),
    VTX(-569, 120, -589, 0, 0, 130, 0, 0, 255),
    VTX(-569, 0, -589, 0, 0, 130, 0, 0, 255),
    VTX(-569, 0, -569, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x0010C0[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_000FC0[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_001160[16] = {
    VTX(-569, 0, -149, 0, 0, 0, 0, 127, 255),
    VTX(-549, 0, -149, 0, 0, 0, 0, 127, 255),
    VTX(-549, 120, -149, 0, 0, 0, 0, 127, 255),
    VTX(-569, 120, -149, 0, 0, 0, 0, 127, 255),
    VTX(-549, 120, -169, 0, 0, 0, 0, 130, 255),
    VTX(-549, 0, -169, 0, 0, 0, 0, 130, 255),
    VTX(-569, 0, -169, 0, 0, 0, 0, 130, 255),
    VTX(-569, 120, -169, 0, 0, 0, 0, 130, 255),
    VTX(-549, 0, -169, 0, 0, 127, 0, 0, 255),
    VTX(-549, 120, -169, 0, 0, 127, 0, 0, 255),
    VTX(-549, 120, -149, 0, 0, 127, 0, 0, 255),
    VTX(-549, 0, -149, 0, 0, 127, 0, 0, 255),
    VTX(-569, 120, -149, 0, 0, 130, 0, 0, 255),
    VTX(-569, 120, -169, 0, 0, 130, 0, 0, 255),
    VTX(-569, 0, -169, 0, 0, 130, 0, 0, 255),
    VTX(-569, 0, -149, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x001260[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_001160[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_001300[16] = {
    VTX(-569, 0, 430, 0, 0, 0, 0, 127, 255),
    VTX(-549, 0, 430, 0, 0, 0, 0, 127, 255),
    VTX(-549, 120, 430, 0, 0, 0, 0, 127, 255),
    VTX(-569, 120, 430, 0, 0, 0, 0, 127, 255),
    VTX(-549, 120, 410, 0, 0, 0, 0, 130, 255),
    VTX(-549, 0, 410, 0, 0, 0, 0, 130, 255),
    VTX(-569, 0, 410, 0, 0, 0, 0, 130, 255),
    VTX(-569, 120, 410, 0, 0, 0, 0, 130, 255),
    VTX(-549, 0, 410, 0, 0, 127, 0, 0, 255),
    VTX(-549, 120, 410, 0, 0, 127, 0, 0, 255),
    VTX(-549, 120, 430, 0, 0, 127, 0, 0, 255),
    VTX(-549, 0, 430, 0, 0, 127, 0, 0, 255),
    VTX(-569, 120, 430, 0, 0, 130, 0, 0, 255),
    VTX(-569, 120, 410, 0, 0, 130, 0, 0, 255),
    VTX(-569, 0, 410, 0, 0, 130, 0, 0, 255),
    VTX(-569, 0, 430, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x001400[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_001300[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_0014A0[16] = {
    VTX(70, 0, 630, 0, 0, 0, 0, 127, 255),
    VTX(90, 0, 630, 0, 0, 0, 0, 127, 255),
    VTX(90, 120, 630, 0, 0, 0, 0, 127, 255),
    VTX(70, 120, 630, 0, 0, 0, 0, 127, 255),
    VTX(90, 120, 610, 0, 0, 0, 0, 130, 255),
    VTX(90, 0, 610, 0, 0, 0, 0, 130, 255),
    VTX(70, 0, 610, 0, 0, 0, 0, 130, 255),
    VTX(70, 120, 610, 0, 0, 0, 0, 130, 255),
    VTX(90, 0, 610, 0, 0, 127, 0, 0, 255),
    VTX(90, 120, 610, 0, 0, 127, 0, 0, 255),
    VTX(90, 120, 630, 0, 0, 127, 0, 0, 255),
    VTX(90, 0, 630, 0, 0, 127, 0, 0, 255),
    VTX(70, 120, 630, 0, 0, 130, 0, 0, 255),
    VTX(70, 120, 610, 0, 0, 130, 0, 0, 255),
    VTX(70, 0, 610, 0, 0, 130, 0, 0, 255),
    VTX(70, 0, 630, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x0015A0[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_0014A0[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_001640[16] = {
    VTX(490, 0, 370, 0, 0, 0, 0, 127, 255),
    VTX(510, 0, 370, 0, 0, 0, 0, 127, 255),
    VTX(510, 120, 370, 0, 0, 0, 0, 127, 255),
    VTX(490, 120, 370, 0, 0, 0, 0, 127, 255),
    VTX(510, 120, 350, 0, 0, 0, 0, 130, 255),
    VTX(510, 0, 350, 0, 0, 0, 0, 130, 255),
    VTX(490, 0, 350, 0, 0, 0, 0, 130, 255),
    VTX(490, 120, 350, 0, 0, 0, 0, 130, 255),
    VTX(510, 0, 350, 0, 0, 127, 0, 0, 255),
    VTX(510, 120, 350, 0, 0, 127, 0, 0, 255),
    VTX(510, 120, 370, 0, 0, 127, 0, 0, 255),
    VTX(510, 0, 370, 0, 0, 127, 0, 0, 255),
    VTX(490, 120, 370, 0, 0, 130, 0, 0, 255),
    VTX(490, 120, 350, 0, 0, 130, 0, 0, 255),
    VTX(490, 0, 350, 0, 0, 130, 0, 0, 255),
    VTX(490, 0, 370, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x001740[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_001640[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_0017E0[16] = {
    VTX(650, 0, 630, 0, 0, 0, 0, 127, 255),
    VTX(670, 0, 630, 0, 0, 0, 0, 127, 255),
    VTX(670, 120, 630, 0, 0, 0, 0, 127, 255),
    VTX(650, 120, 630, 0, 0, 0, 0, 127, 255),
    VTX(670, 120, 610, 0, 0, 0, 0, 130, 255),
    VTX(670, 0, 610, 0, 0, 0, 0, 130, 255),
    VTX(650, 0, 610, 0, 0, 0, 0, 130, 255),
    VTX(650, 120, 610, 0, 0, 0, 0, 130, 255),
    VTX(670, 0, 610, 0, 0, 127, 0, 0, 255),
    VTX(670, 120, 610, 0, 0, 127, 0, 0, 255),
    VTX(670, 120, 630, 0, 0, 127, 0, 0, 255),
    VTX(670, 0, 630, 0, 0, 127, 0, 0, 255),
    VTX(650, 120, 630, 0, 0, 130, 0, 0, 255),
    VTX(650, 120, 610, 0, 0, 130, 0, 0, 255),
    VTX(650, 0, 610, 0, 0, 130, 0, 0, 255),
    VTX(650, 0, 630, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x0018E0[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_0017E0[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_001980[16] = {
    VTX(-609, 120, 630, 0, 0, 130, 0, 0, 255),
    VTX(-609, 120, 610, 0, 0, 130, 0, 0, 255),
    VTX(-609, 0, 610, 0, 0, 130, 0, 0, 255),
    VTX(-609, 0, 630, 0, 0, 130, 0, 0, 255),
    VTX(-589, 0, 610, 0, 0, 127, 0, 0, 255),
    VTX(-589, 120, 610, 0, 0, 127, 0, 0, 255),
    VTX(-589, 120, 630, 0, 0, 127, 0, 0, 255),
    VTX(-589, 0, 630, 0, 0, 127, 0, 0, 255),
    VTX(-589, 120, 610, 0, 0, 0, 0, 130, 255),
    VTX(-589, 0, 610, 0, 0, 0, 0, 130, 255),
    VTX(-609, 0, 610, 0, 0, 0, 0, 130, 255),
    VTX(-609, 120, 610, 0, 0, 0, 0, 130, 255),
    VTX(-609, 0, 630, 0, 0, 0, 0, 127, 255),
    VTX(-589, 0, 630, 0, 0, 0, 0, 127, 255),
    VTX(-589, 120, 630, 0, 0, 0, 0, 127, 255),
    VTX(-609, 120, 630, 0, 0, 0, 0, 127, 255),
}; 

Gfx pr_market_1_room_00Dlist0x001A80[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_001980[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_001B20[16] = {
    VTX(700, 120, 640, 0, 0, 130, 0, 0, 255),
    VTX(700, 120, 580, 0, 0, 130, 0, 0, 255),
    VTX(700, 0, 580, 0, 0, 130, 0, 0, 255),
    VTX(700, 0, 640, 0, 0, 130, 0, 0, 255),
    VTX(60, 120, 640, 0, 0, 0, 0, 130, 255),
    VTX(700, 120, 640, 0, 0, 0, 0, 130, 255),
    VTX(700, 0, 640, 0, 0, 0, 0, 130, 255),
    VTX(60, 0, 640, 0, 0, 0, 0, 130, 255),
    VTX(60, 120, 1000, 0, 0, 130, 0, 0, 255),
    VTX(60, 120, 640, 0, 0, 130, 0, 0, 255),
    VTX(60, 0, 640, 0, 0, 130, 0, 0, 255),
    VTX(60, 0, 1000, 0, 0, 130, 0, 0, 255),
    VTX(-59, 120, 1000, 0, 0, 0, 0, 130, 255),
    VTX(60, 120, 1000, 0, 0, 0, 0, 130, 255),
    VTX(60, 0, 1000, 0, 0, 0, 0, 130, 255),
    VTX(-59, 0, 1000, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001C20[4] = {
    VTX(-59, 120, 600, 0, 0, 127, 0, 0, 255),
    VTX(-559, 120, 600, 0, 0, 0, 0, 130, 255),
    VTX(700, 120, 580, 0, 0, 0, 0, 130, 255),
    VTX(1000, 120, -419, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001C60[4] = {
    VTX(820, 120, -419, 0, 0, 0, 0, 130, 255),
    VTX(820, 120, -279, 0, 0, 130, 0, 0, 255),
    VTX(520, 120, -279, 0, 0, 0, 0, 130, 255),
    VTX(520, 120, 380, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001CA0[4] = {
    VTX(800, 120, 380, 0, 0, 0, 0, 127, 255),
    VTX(800, 120, 580, 0, 0, 130, 0, 0, 255),
    VTX(-559, 120, 660, 0, 0, 130, 0, 0, 255),
    VTX(-59, 120, -599, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001CE0[4] = {
    VTX(-59, 120, -999, 0, 0, 127, 0, 0, 255),
    VTX(60, 120, -999, 0, 0, 0, 0, 127, 255),
    VTX(60, 120, -559, 0, 0, 130, 0, 0, 255),
    VTX(560, 120, -559, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001D20[4] = {
    VTX(560, 120, -599, 0, 0, 127, 0, 0, 255),
    VTX(1000, 120, -599, 0, 0, 0, 0, 127, 255),
    VTX(-559, 120, -599, 0, 0, 130, 0, 0, 255),
    VTX(-759, 120, 660, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001D60[4] = {
    VTX(-759, 120, 440, 0, 0, 127, 0, 0, 255),
    VTX(-579, 120, 440, 0, 0, 0, 0, 127, 255),
    VTX(-579, 120, -439, 0, 0, 127, 0, 0, 255),
    VTX(-759, 120, -439, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001DA0[2] = {
    VTX(-759, 120, -639, 0, 0, 127, 0, 0, 255),
    VTX(-559, 120, -639, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001DC0[12] = {
    VTX(-59, 120, 1000, 0, 0, 127, 0, 0, 255),
    VTX(-59, 0, 1000, 0, 0, 127, 0, 0, 255),
    VTX(-59, 0, 600, 0, 0, 127, 0, 0, 255),
    VTX(-59, 120, 600, 0, 0, 0, 0, 130, 255),
    VTX(-59, 0, 600, 0, 0, 0, 0, 130, 255),
    VTX(-559, 0, 600, 0, 0, 0, 0, 130, 255),
    VTX(800, 120, 580, 0, 0, 0, 0, 130, 255),
    VTX(800, 0, 580, 0, 0, 0, 0, 130, 255),
    VTX(700, 0, 580, 0, 0, 0, 0, 130, 255),
    VTX(1000, 120, -599, 0, 0, 130, 0, 0, 255),
    VTX(1000, 0, -599, 0, 0, 130, 0, 0, 255),
    VTX(1000, 0, -419, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001E80[12] = {
    VTX(1000, 120, -419, 0, 0, 0, 0, 130, 255),
    VTX(1000, 0, -419, 0, 0, 0, 0, 130, 255),
    VTX(820, 0, -419, 0, 0, 0, 0, 130, 255),
    VTX(820, 120, -419, 0, 0, 130, 0, 0, 255),
    VTX(820, 0, -419, 0, 0, 130, 0, 0, 255),
    VTX(820, 0, -279, 0, 0, 130, 0, 0, 255),
    VTX(820, 120, -279, 0, 0, 0, 0, 130, 255),
    VTX(820, 0, -279, 0, 0, 0, 0, 130, 255),
    VTX(520, 0, -279, 0, 0, 0, 0, 130, 255),
    VTX(520, 120, -279, 0, 0, 130, 0, 0, 255),
    VTX(520, 0, -279, 0, 0, 130, 0, 0, 255),
    VTX(520, 0, 380, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_market_1_room_00Vtx_001F40[12] = {
    VTX(520, 120, 380, 0, 0, 0, 0, 127, 255),
    VTX(520, 0, 380, 0, 0, 0, 0, 127, 255),
    VTX(800, 0, 380, 0, 0, 0, 0, 127, 255),
    VTX(800, 120, 380, 0, 0, 130, 0, 0, 255),
    VTX(800, 0, 380, 0, 0, 130, 0, 0, 255),
    VTX(800, 0, 580, 0, 0, 130, 0, 0, 255),
    VTX(-559, 120, 600, 0, 0, 130, 0, 0, 255),
    VTX(-559, 0, 600, 0, 0, 130, 0, 0, 255),
    VTX(-559, 0, 660, 0, 0, 130, 0, 0, 255),
    VTX(-559, 120, -599, 0, 0, 0, 0, 127, 255),
    VTX(-559, 0, -599, 0, 0, 0, 0, 127, 255),
    VTX(-59, 0, -599, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002000[12] = {
    VTX(-59, 120, -599, 0, 0, 127, 0, 0, 255),
    VTX(-59, 0, -599, 0, 0, 127, 0, 0, 255),
    VTX(-59, 0, -999, 0, 0, 127, 0, 0, 255),
    VTX(-59, 120, -999, 0, 0, 0, 0, 127, 255),
    VTX(-59, 0, -999, 0, 0, 0, 0, 127, 255),
    VTX(60, 0, -999, 0, 0, 0, 0, 127, 255),
    VTX(60, 120, -999, 0, 0, 130, 0, 0, 255),
    VTX(60, 0, -999, 0, 0, 130, 0, 0, 255),
    VTX(60, 0, -559, 0, 0, 130, 0, 0, 255),
    VTX(60, 120, -559, 0, 0, 0, 0, 127, 255),
    VTX(60, 0, -559, 0, 0, 0, 0, 127, 255),
    VTX(560, 0, -559, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_1_room_00Vtx_0020C0[12] = {
    VTX(560, 120, -559, 0, 0, 127, 0, 0, 255),
    VTX(560, 0, -559, 0, 0, 127, 0, 0, 255),
    VTX(560, 0, -599, 0, 0, 127, 0, 0, 255),
    VTX(560, 120, -599, 0, 0, 0, 0, 127, 255),
    VTX(560, 0, -599, 0, 0, 0, 0, 127, 255),
    VTX(1000, 0, -599, 0, 0, 0, 0, 127, 255),
    VTX(-559, 120, -639, 0, 0, 130, 0, 0, 255),
    VTX(-559, 0, -639, 0, 0, 130, 0, 0, 255),
    VTX(-559, 0, -599, 0, 0, 130, 0, 0, 255),
    VTX(-559, 120, 660, 0, 0, 0, 0, 130, 255),
    VTX(-559, 0, 660, 0, 0, 0, 0, 130, 255),
    VTX(-759, 0, 660, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002180[12] = {
    VTX(-759, 120, 660, 0, 0, 127, 0, 0, 255),
    VTX(-759, 0, 660, 0, 0, 127, 0, 0, 255),
    VTX(-759, 0, 440, 0, 0, 127, 0, 0, 255),
    VTX(-759, 120, 440, 0, 0, 0, 0, 127, 255),
    VTX(-759, 0, 440, 0, 0, 0, 0, 127, 255),
    VTX(-579, 0, 440, 0, 0, 0, 0, 127, 255),
    VTX(-579, 120, 440, 0, 0, 127, 0, 0, 255),
    VTX(-579, 0, 440, 0, 0, 127, 0, 0, 255),
    VTX(-579, 0, -439, 0, 0, 127, 0, 0, 255),
    VTX(-579, 120, -439, 0, 0, 0, 0, 130, 255),
    VTX(-579, 0, -439, 0, 0, 0, 0, 130, 255),
    VTX(-759, 0, -439, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002240[6] = {
    VTX(-759, 120, -439, 0, 0, 127, 0, 0, 255),
    VTX(-759, 0, -439, 0, 0, 127, 0, 0, 255),
    VTX(-759, 0, -639, 0, 0, 127, 0, 0, 255),
    VTX(-759, 120, -639, 0, 0, 0, 0, 127, 255),
    VTX(-759, 0, -639, 0, 0, 0, 0, 127, 255),
    VTX(-559, 0, -639, 0, 0, 0, 0, 127, 255),
}; 

Gfx pr_market_1_room_00Dlist0x0022A0[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_001B20[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001C20[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001DC0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001C60[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001E80[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001CA0[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001F40[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001CE0[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002000[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001D20[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_0020C0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001D60[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002180[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_001DA0[0], 2, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002240[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_market_1_room_00Vtx_002550[4] = {
    VTX(-999, 0, 1000, 0, 0, 0, 127, 0, 255),
    VTX(1000, 0, 1000, 0, 0, 0, 127, 0, 255),
    VTX(1000, 0, -999, 0, 0, 0, 127, 0, 255),
    VTX(-999, 0, -999, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x002590[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_002550[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_market_1_room_00Vtx_002600[16] = {
    VTX(-459, 2, 100, 0, 0, 0, 127, 0, 255),
    VTX(-459, 2, 260, 0, 0, 0, 127, 0, 255),
    VTX(-419, 2, 260, 0, 0, 0, 127, 0, 255),
    VTX(-419, 2, 100, 0, 0, 0, 127, 0, 255),
    VTX(-581, 0, 272, 0, 0, 0, 0, 127, 255),
    VTX(-457, 0, 272, 0, 0, 0, 0, 127, 255),
    VTX(-457, 120, 272, 0, 0, 0, 0, 127, 255),
    VTX(-581, 120, 272, 0, 0, 0, 0, 127, 255),
    VTX(-457, 120, 88, 0, 0, 0, 0, 130, 255),
    VTX(-457, 0, 88, 0, 0, 0, 0, 130, 255),
    VTX(-581, 0, 88, 0, 0, 0, 0, 130, 255),
    VTX(-581, 120, 88, 0, 0, 0, 0, 130, 255),
    VTX(-457, 0, 88, 0, 0, 127, 0, 0, 255),
    VTX(-457, 120, 88, 0, 0, 127, 0, 0, 255),
    VTX(-457, 120, 272, 0, 0, 127, 0, 0, 255),
    VTX(-457, 0, 272, 0, 0, 127, 0, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x002700[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_002600[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_0027A0[16] = {
    VTX(160, 2, 520, 0, 0, 0, 127, 0, 255),
    VTX(320, 2, 520, 0, 0, 0, 127, 0, 255),
    VTX(320, 2, 480, 0, 0, 0, 127, 0, 255),
    VTX(160, 2, 480, 0, 0, 0, 127, 0, 255),
    VTX(332, 0, 642, 0, 0, 127, 0, 0, 255),
    VTX(332, 0, 518, 0, 0, 127, 0, 0, 255),
    VTX(332, 120, 518, 0, 0, 127, 0, 0, 255),
    VTX(332, 120, 642, 0, 0, 127, 0, 0, 255),
    VTX(148, 120, 518, 0, 0, 130, 0, 0, 255),
    VTX(148, 0, 518, 0, 0, 130, 0, 0, 255),
    VTX(148, 0, 642, 0, 0, 130, 0, 0, 255),
    VTX(148, 120, 642, 0, 0, 130, 0, 0, 255),
    VTX(148, 0, 518, 0, 0, 0, 0, 130, 255),
    VTX(148, 120, 518, 0, 0, 0, 0, 130, 255),
    VTX(332, 120, 518, 0, 0, 0, 0, 130, 255),
    VTX(332, 0, 518, 0, 0, 0, 0, 130, 255),
}; 

Gfx pr_market_1_room_00Dlist0x0028A0[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_0027A0[0], 16, 0),
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

static Vtx pr_market_1_room_00Vtx_002940[16] = {
    VTX(-39, 13, -96, 0, 0, 0, 0, 127, 255),
    VTX(-39, 4, -96, 0, 0, 0, 0, 127, 255),
    VTX(40, 4, -96, 0, 0, 0, 0, 127, 255),
    VTX(40, 13, -96, 0, 0, 0, 0, 127, 255),
    VTX(40, 13, -96, 0, 0, 168, 0, 89, 255),
    VTX(40, 4, -96, 0, 0, 168, 0, 89, 255),
    VTX(97, 4, -39, 0, 0, 168, 0, 89, 255),
    VTX(97, 13, -39, 0, 0, 168, 0, 89, 255),
    VTX(97, 13, -39, 0, 0, 130, 0, 0, 255),
    VTX(97, 4, -39, 0, 0, 130, 0, 0, 255),
    VTX(97, 4, 40, 0, 0, 130, 0, 0, 255),
    VTX(97, 13, 40, 0, 0, 130, 0, 0, 255),
    VTX(97, 13, 40, 0, 0, 168, 0, 168, 255),
    VTX(97, 4, 40, 0, 0, 168, 0, 168, 255),
    VTX(40, 4, 97, 0, 0, 168, 0, 168, 255),
    VTX(40, 13, 97, 0, 0, 168, 0, 168, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002A40[13] = {
    VTX(40, 13, 97, 0, 0, 0, 0, 130, 255),
    VTX(-39, 13, 97, 0, 0, 89, 0, 168, 255),
    VTX(-96, 13, 40, 0, 0, 127, 0, 0, 255),
    VTX(-96, 4, -39, 0, 0, 0, 127, 0, 255),
    VTX(-96, 4, 40, 0, 0, 0, 127, 0, 255),
    VTX(-39, 4, -96, 0, 0, 0, 127, 0, 255),
    VTX(40, 4, -96, 0, 0, 0, 127, 0, 255),
    VTX(97, 4, -39, 0, 0, 0, 127, 0, 255),
    VTX(97, 4, 40, 0, 0, 0, 127, 0, 255),
    VTX(40, 4, 97, 0, 0, 0, 127, 0, 255),
    VTX(-39, 4, 97, 0, 0, 0, 127, 0, 255),
    VTX(-96, 13, -39, 0, 0, 89, 0, 89, 255),
    VTX(46, 0, -110, 0, 0, 89, 0, 168, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002B10[4] = {
    VTX(111, 0, -45, 0, 0, 127, 0, 0, 255),
    VTX(111, 0, 46, 0, 0, 89, 0, 89, 255),
    VTX(46, 0, 111, 0, 0, 0, 0, 127, 255),
    VTX(-45, 0, 111, 0, 0, 168, 0, 89, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002B50[9] = {
    VTX(-110, 0, 46, 0, 0, 130, 0, 0, 255),
    VTX(-110, 0, -45, 0, 0, 168, 0, 168, 255),
    VTX(-45, 0, -110, 0, 0, 0, 0, 130, 255),
    VTX(-45, 13, -110, 0, 0, 0, 127, 0, 255),
    VTX(-110, 13, -45, 0, 0, 0, 127, 0, 255),
    VTX(46, 13, -110, 0, 0, 0, 127, 0, 255),
    VTX(111, 13, -45, 0, 0, 0, 127, 0, 255),
    VTX(111, 13, 46, 0, 0, 0, 127, 0, 255),
    VTX(46, 13, 111, 0, 0, 0, 127, 0, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002BE0[2] = {
    VTX(-110, 13, 46, 0, 0, 0, 127, 0, 255),
    VTX(-45, 13, 111, 0, 0, 0, 127, 0, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002C00[23] = {
    VTX(40, 4, 97, 0, 0, 0, 0, 130, 255),
    VTX(-39, 4, 97, 0, 0, 0, 0, 130, 255),
    VTX(-39, 13, 97, 0, 0, 0, 0, 130, 255),
    VTX(-39, 4, 97, 0, 0, 89, 0, 168, 255),
    VTX(-96, 4, 40, 0, 0, 89, 0, 168, 255),
    VTX(-96, 13, 40, 0, 0, 89, 0, 168, 255),
    VTX(-96, 4, 40, 0, 0, 127, 0, 0, 255),
    VTX(-96, 4, -39, 0, 0, 127, 0, 0, 255),
    VTX(-96, 13, -39, 0, 0, 127, 0, 0, 255),
    VTX(-17, 4, -7, 0, 0, 0, 127, 0, 255),
    VTX(-7, 4, -17, 0, 0, 0, 127, 0, 255),
    VTX(-17, 4, 8, 0, 0, 0, 127, 0, 255),
    VTX(8, 4, -17, 0, 0, 0, 127, 0, 255),
    VTX(18, 4, -7, 0, 0, 0, 127, 0, 255),
    VTX(18, 4, 8, 0, 0, 0, 127, 0, 255),
    VTX(8, 4, 18, 0, 0, 0, 127, 0, 255),
    VTX(-7, 4, 18, 0, 0, 0, 127, 0, 255),
    VTX(-96, 4, -39, 0, 0, 89, 0, 89, 255),
    VTX(-39, 4, -96, 0, 0, 89, 0, 89, 255),
    VTX(-39, 13, -96, 0, 0, 89, 0, 89, 255),
    VTX(46, 13, -110, 0, 0, 89, 0, 168, 255),
    VTX(111, 13, -45, 0, 0, 89, 0, 168, 255),
    VTX(111, 0, -45, 0, 0, 89, 0, 168, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002D70[12] = {
    VTX(111, 13, -45, 0, 0, 127, 0, 0, 255),
    VTX(111, 13, 46, 0, 0, 127, 0, 0, 255),
    VTX(111, 0, 46, 0, 0, 127, 0, 0, 255),
    VTX(111, 13, 46, 0, 0, 89, 0, 89, 255),
    VTX(46, 13, 111, 0, 0, 89, 0, 89, 255),
    VTX(46, 0, 111, 0, 0, 89, 0, 89, 255),
    VTX(46, 13, 111, 0, 0, 0, 0, 127, 255),
    VTX(-45, 13, 111, 0, 0, 0, 0, 127, 255),
    VTX(-45, 0, 111, 0, 0, 0, 0, 127, 255),
    VTX(-45, 13, 111, 0, 0, 168, 0, 89, 255),
    VTX(-110, 13, 46, 0, 0, 168, 0, 89, 255),
    VTX(-110, 0, 46, 0, 0, 168, 0, 89, 255),
}; 

static Vtx pr_market_1_room_00Vtx_002E30[17] = {
    VTX(-110, 13, 46, 0, 0, 130, 0, 0, 255),
    VTX(-110, 13, -45, 0, 0, 130, 0, 0, 255),
    VTX(-110, 0, -45, 0, 0, 130, 0, 0, 255),
    VTX(-110, 13, -45, 0, 0, 168, 0, 168, 255),
    VTX(-45, 13, -110, 0, 0, 168, 0, 168, 255),
    VTX(-45, 0, -110, 0, 0, 168, 0, 168, 255),
    VTX(-45, 13, -110, 0, 0, 0, 0, 130, 255),
    VTX(46, 13, -110, 0, 0, 0, 0, 130, 255),
    VTX(46, 0, -110, 0, 0, 0, 0, 130, 255),
    VTX(-39, 13, -96, 0, 0, 0, 127, 0, 255),
    VTX(40, 13, -96, 0, 0, 0, 127, 0, 255),
    VTX(-96, 13, -39, 0, 0, 0, 127, 0, 255),
    VTX(97, 13, -39, 0, 0, 0, 127, 0, 255),
    VTX(97, 13, 40, 0, 0, 0, 127, 0, 255),
    VTX(40, 13, 97, 0, 0, 0, 127, 0, 255),
    VTX(-39, 13, 97, 0, 0, 0, 127, 0, 255),
    VTX(-96, 13, 40, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_market_1_room_00Dlist0x002F40[] = {
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
    gsSPVertex(&pr_market_1_room_00Vtx_002940[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002A40[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002A40[5], 1, 4),
    gsSPVertex(&pr_market_1_room_00Vtx_002C00[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSP1Triangle(3, 15, 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002A40[3], 7, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002C00[9], 7, 7),
    gsSP1Triangle(1, 9, 7, 0),
    gsSP1Triangle(1, 7, 0, 0),
    gsSP1Triangle(2, 8, 10, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 5, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002A40[4], 1, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002A40[9], 4, 1),
    gsSPVertex(&pr_market_1_room_00Vtx_002C00[11], 1, 5),
    gsSPVertex(&pr_market_1_room_00Vtx_002C00[15], 8, 6),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 2, 0),
    gsSP1Triangle(2, 7, 5, 0),
    gsSP1Triangle(2, 5, 0, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002B10[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002D70[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002B50[0], 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002B50[5], 1, 4),
    gsSPVertex(&pr_market_1_room_00Vtx_002E30[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSP1Triangle(3, 15, 4, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002B50[3], 6, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002BE0[1], 1, 6),
    gsSPVertex(&pr_market_1_room_00Vtx_002E30[9], 7, 7),
    gsSP1Triangle(1, 9, 7, 0),
    gsSP1Triangle(1, 7, 0, 0),
    gsSP1Triangle(2, 8, 10, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 5, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002B50[4], 1, 0),
    gsSPVertex(&pr_market_1_room_00Vtx_002BE0[0], 2, 1),
    gsSPVertex(&pr_market_1_room_00Vtx_002E30[11], 1, 3),
    gsSPVertex(&pr_market_1_room_00Vtx_002E30[15], 2, 4),
    gsSP1Triangle(1, 5, 3, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(2, 5, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx pr_market_1_room_00Dlist0x003248[] = {
    gsSPDisplayList(pr_market_1_room_00Dlist0x000220),
    gsSPDisplayList(pr_market_1_room_00Dlist0x0003C0),
    gsSPDisplayList(pr_market_1_room_00Dlist0x000560),
    gsSPDisplayList(pr_market_1_room_00Dlist0x000700),
    gsSPDisplayList(pr_market_1_room_00Dlist0x0008A0),
    gsSPDisplayList(pr_market_1_room_00Dlist0x000A40),
    gsSPDisplayList(pr_market_1_room_00Dlist0x000BE0),
    gsSPDisplayList(pr_market_1_room_00Dlist0x000D80),
    gsSPDisplayList(pr_market_1_room_00Dlist0x000F20),
    gsSPDisplayList(pr_market_1_room_00Dlist0x0010C0),
    gsSPDisplayList(pr_market_1_room_00Dlist0x001260),
    gsSPDisplayList(pr_market_1_room_00Dlist0x001400),
    gsSPDisplayList(pr_market_1_room_00Dlist0x0015A0),
    gsSPDisplayList(pr_market_1_room_00Dlist0x001740),
    gsSPDisplayList(pr_market_1_room_00Dlist0x0018E0),
    gsSPDisplayList(pr_market_1_room_00Dlist0x001A80),
    gsSPDisplayList(pr_market_1_room_00Dlist0x0022A0),
    gsSPDisplayList(pr_market_1_room_00Dlist0x002590),
    gsSPDisplayList(pr_market_1_room_00Dlist0x002700),
    gsSPDisplayList(pr_market_1_room_00Dlist0x0028A0),
    gsSPDisplayList(pr_market_1_room_00Dlist0x002F40),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0032F8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


