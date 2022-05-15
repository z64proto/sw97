#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "pr_market_2_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "pr_market_2_scene.h"


static SCmdEchoSettings pr_market_2_room_00Set0000Cmd00;
static SCmdRoomBehavior pr_market_2_room_00Set0000Cmd01;
static SCmdSkyboxDisables pr_market_2_room_00Set0000Cmd02;
static SCmdTimeSettings pr_market_2_room_00Set0000Cmd03;
static SCmdMesh pr_market_2_room_00Set0000Cmd04;
static SCmdObjectList pr_market_2_room_00Set0000Cmd05;
static SCmdActorList pr_market_2_room_00Set0000Cmd06;
static SCmdEndMarker pr_market_2_room_00Set0000Cmd07;
static s32 terminatorMaybe;
static Vtx pr_market_2_room_00Vtx_000130[16];
static Vtx pr_market_2_room_00Vtx_0002D0[16];
static Vtx pr_market_2_room_00Vtx_000470[4];
static Vtx pr_market_2_room_00Vtx_000520[12];
static Vtx pr_market_2_room_00Vtx_0005E0[4];
static Vtx pr_market_2_room_00Vtx_0006D8[16];
static Vtx pr_market_2_room_00Vtx_000878[16];
static Vtx pr_market_2_room_00Vtx_000A18[16];
static Vtx pr_market_2_room_00Vtx_000BB8[16];
static Vtx pr_market_2_room_00Vtx_000D58[16];
static Vtx pr_market_2_room_00Vtx_000EF8[16];
static Vtx pr_market_2_room_00Vtx_000FF8[4];
static Vtx pr_market_2_room_00Vtx_001038[4];
static Vtx pr_market_2_room_00Vtx_001078[4];
static Vtx pr_market_2_room_00Vtx_0010B8[4];
static Vtx pr_market_2_room_00Vtx_0010F8[4];
static Vtx pr_market_2_room_00Vtx_001138[4];
static Vtx pr_market_2_room_00Vtx_001178[2];
static Vtx pr_market_2_room_00Vtx_001198[12];
static Vtx pr_market_2_room_00Vtx_001258[12];
static Vtx pr_market_2_room_00Vtx_001318[12];
static Vtx pr_market_2_room_00Vtx_0013D8[12];
static Vtx pr_market_2_room_00Vtx_001498[12];
static Vtx pr_market_2_room_00Vtx_001558[12];
static Vtx pr_market_2_room_00Vtx_001618[6];
static Vtx pr_market_2_room_00Vtx_001928[16];
static Vtx pr_market_2_room_00Vtx_001A28[13];
static Vtx pr_market_2_room_00Vtx_001AF8[4];
static Vtx pr_market_2_room_00Vtx_001B38[9];
static Vtx pr_market_2_room_00Vtx_001BC8[2];
static Vtx pr_market_2_room_00Vtx_001BE8[23];
static Vtx pr_market_2_room_00Vtx_001D58[12];
static Vtx pr_market_2_room_00Vtx_001E18[17];

static SCmdEchoSettings pr_market_2_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior pr_market_2_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables pr_market_2_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings pr_market_2_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x0B, 0x00, 0x01 }; // 0x0018

static SCmdMesh pr_market_2_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&pr_market_2_room_00MeshHeader0x000110 }; // 0x0020

static SCmdObjectList pr_market_2_room_00Set0000Cmd05 = {  0x0B, 0x0D, (u32)pr_market_2_room_00ObjectList0x000040 }; // 0x0028

static SCmdActorList pr_market_2_room_00Set0000Cmd06 = {  0x01, 0x0B, (u32)pr_market_2_room_00ActorList0x00005C }; // 0x0030 }; 

static SCmdEndMarker pr_market_2_room_00Set0000Cmd07 = {  0x14, 0x00, 0x00 }; // 0x0038

s16 pr_market_2_room_00ObjectList0x000040[13] = {
	OBJECT_OA1,
	OBJECT_OB1,
	OBJECT_O_ANIME,
	OBJECT_OA4,
	OBJECT_OA5,
	OBJECT_OA6,
	OBJECT_OA7,
	OBJECT_OA8,
	OBJECT_OA9,
	OBJECT_OB2,
	OBJECT_OB3,
	OBJECT_OB4,
	OBJECT_DY_OBJ,
}; 

ActorEntry pr_market_2_room_00ActorList0x00005C[11] = {
	{ ACTOR_EN_NPC, 4, 0, 194, 0, 32767, 0, 0x1500 }, //0x00005C
	{ ACTOR_EN_NPC, -150, 0, -200, 0, 0, 0, 0x1601 }, //0x00006C
	{ ACTOR_EN_NPC, 122, 0, -393, 0, 0, 0, 0x1802 }, //0x00007C
	{ ACTOR_EN_NPC, 188, 0, 10, 0, -16384, 0, 0x1A03 }, //0x00008C
	{ ACTOR_EN_NPC, 355, 0, -302, 0, -7282, 0, 0x1D04 }, //0x00009C
	{ ACTOR_EN_NPC, 318, 0, 164, 0, -16384, 0, 0x1F05 }, //0x0000AC
	{ ACTOR_EN_NPC, -318, 0, 264, 0, 16384, 0, 0x2106 }, //0x0000BC
	{ ACTOR_EN_NPC, -323, 0, -117, 0, 9102, 0, 0x2307 }, //0x0000CC
	{ ACTOR_EN_NPC, 254, 0, 333, 0, -27306, 0, 0x2508 }, //0x0000DC
	{ ACTOR_EN_NPC, -238, 0, 407, 0, 29126, 0, 0x2709 }, //0x0000EC
	{ ACTOR_BG_DY_YOSEIZO, -36, 0, 540, 0, 0, 0, 0x0000 }, //0x0000FC
}; 

static u32 pad10C = 0;

MeshHeader0 pr_market_2_room_00MeshHeader0x000110 = { { 0 }, 0x01, (u32)&pr_market_2_room_00MeshDListEntry0x00011C, (u32)&(pr_market_2_room_00MeshDListEntry0x00011C) + sizeof(pr_market_2_room_00MeshDListEntry0x00011C) }; 

MeshEntry0 pr_market_2_room_00MeshDListEntry0x00011C[1] = {
	{ (u32)pr_market_2_room_00Dlist0x002230, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad128 = 0;
static u32 pad12C = 0;

static Vtx pr_market_2_room_00Vtx_000130[16] = {
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

Gfx pr_market_2_room_00Dlist0x000230[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_000130[0], 16, 0),
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

static Vtx pr_market_2_room_00Vtx_0002D0[16] = {
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

Gfx pr_market_2_room_00Dlist0x0003D0[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_0002D0[0], 16, 0),
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

static Vtx pr_market_2_room_00Vtx_000470[4] = {
    VTX(-999, 0, -899, 0, 0, 0, 127, 0, 255),
    VTX(-999, 0, 1100, 0, 0, 0, 127, 0, 255),
    VTX(1000, 0, 1100, 0, 0, 0, 127, 0, 255),
    VTX(1000, 0, -899, 0, 0, 0, 127, 0, 255),
}; 

Gfx pr_market_2_room_00Dlist0x0004B0[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_000470[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_market_2_room_00Vtx_000520[12] = {
    VTX(410, 0, -489, 0, 0, 0, 0, 127, 255),
    VTX(470, 0, -489, 0, 0, 0, 0, 127, 255),
    VTX(470, 120, -489, 0, 0, 0, 0, 127, 255),
    VTX(410, 120, -489, 0, 0, 0, 0, 127, 255),
    VTX(470, 120, -549, 0, 0, 0, 0, 130, 255),
    VTX(470, 0, -549, 0, 0, 0, 0, 130, 255),
    VTX(410, 0, -549, 0, 0, 0, 0, 130, 255),
    VTX(410, 120, -549, 0, 0, 0, 0, 130, 255),
    VTX(470, 0, -549, 0, 0, 127, 0, 0, 255),
    VTX(470, 120, -549, 0, 0, 127, 0, 0, 255),
    VTX(470, 120, -489, 0, 0, 127, 0, 0, 255),
    VTX(470, 0, -489, 0, 0, 127, 0, 0, 255),
}; 

static Vtx pr_market_2_room_00Vtx_0005E0[4] = {
    VTX(410, 120, -489, 0, 0, 0, 161, 0, 255),
    VTX(410, 120, -549, 0, 0, 0, 161, 0, 255),
    VTX(410, 0, -549, 0, 0, 0, 161, 0, 255),
    VTX(410, 0, -489, 0, 0, 0, 161, 0, 255),
}; 

Gfx pr_market_2_room_00Dlist0x000620[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_000520[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_market_2_room_00Vtx_0005E0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_market_2_room_00Vtx_0006D8[16] = {
    VTX(450, 0, 70, 0, 0, 0, 0, 127, 255),
    VTX(510, 0, 70, 0, 0, 0, 0, 127, 255),
    VTX(510, 120, 70, 0, 0, 0, 0, 127, 255),
    VTX(450, 120, 70, 0, 0, 0, 0, 127, 255),
    VTX(510, 120, 10, 0, 0, 0, 0, 130, 255),
    VTX(510, 0, 10, 0, 0, 0, 0, 130, 255),
    VTX(450, 0, 10, 0, 0, 0, 0, 130, 255),
    VTX(450, 120, 10, 0, 0, 0, 0, 130, 255),
    VTX(510, 0, 10, 0, 0, 127, 0, 0, 255),
    VTX(510, 120, 10, 0, 0, 127, 0, 0, 255),
    VTX(510, 120, 70, 0, 0, 127, 0, 0, 255),
    VTX(510, 0, 70, 0, 0, 127, 0, 0, 255),
    VTX(450, 120, 70, 0, 0, 130, 0, 0, 255),
    VTX(450, 120, 10, 0, 0, 130, 0, 0, 255),
    VTX(450, 0, 10, 0, 0, 130, 0, 0, 255),
    VTX(450, 0, 70, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_2_room_00Dlist0x0007D8[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_0006D8[0], 16, 0),
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

static Vtx pr_market_2_room_00Vtx_000878[16] = {
    VTX(330, 0, 630, 0, 0, 0, 0, 127, 255),
    VTX(410, 0, 630, 0, 0, 0, 0, 127, 255),
    VTX(410, 120, 630, 0, 0, 0, 0, 127, 255),
    VTX(330, 120, 630, 0, 0, 0, 0, 127, 255),
    VTX(410, 120, 550, 0, 0, 0, 0, 130, 255),
    VTX(410, 0, 550, 0, 0, 0, 0, 130, 255),
    VTX(330, 0, 550, 0, 0, 0, 0, 130, 255),
    VTX(330, 120, 550, 0, 0, 0, 0, 130, 255),
    VTX(410, 0, 550, 0, 0, 127, 0, 0, 255),
    VTX(410, 120, 550, 0, 0, 127, 0, 0, 255),
    VTX(410, 120, 630, 0, 0, 127, 0, 0, 255),
    VTX(410, 0, 630, 0, 0, 127, 0, 0, 255),
    VTX(330, 120, 630, 0, 0, 130, 0, 0, 255),
    VTX(330, 120, 550, 0, 0, 130, 0, 0, 255),
    VTX(330, 0, 550, 0, 0, 130, 0, 0, 255),
    VTX(330, 0, 630, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_2_room_00Dlist0x000978[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_000878[0], 16, 0),
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

static Vtx pr_market_2_room_00Vtx_000A18[16] = {
    VTX(-569, 0, 350, 0, 0, 0, 0, 127, 255),
    VTX(-489, 0, 350, 0, 0, 0, 0, 127, 255),
    VTX(-489, 120, 350, 0, 0, 0, 0, 127, 255),
    VTX(-569, 120, 350, 0, 0, 0, 0, 127, 255),
    VTX(-489, 120, 270, 0, 0, 0, 0, 130, 255),
    VTX(-489, 0, 270, 0, 0, 0, 0, 130, 255),
    VTX(-569, 0, 270, 0, 0, 0, 0, 130, 255),
    VTX(-569, 120, 270, 0, 0, 0, 0, 130, 255),
    VTX(-489, 0, 270, 0, 0, 127, 0, 0, 255),
    VTX(-489, 120, 270, 0, 0, 127, 0, 0, 255),
    VTX(-489, 120, 350, 0, 0, 127, 0, 0, 255),
    VTX(-489, 0, 350, 0, 0, 127, 0, 0, 255),
    VTX(-569, 120, 350, 0, 0, 130, 0, 0, 255),
    VTX(-569, 120, 270, 0, 0, 130, 0, 0, 255),
    VTX(-569, 0, 270, 0, 0, 130, 0, 0, 255),
    VTX(-569, 0, 350, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_2_room_00Dlist0x000B18[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_000A18[0], 16, 0),
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

static Vtx pr_market_2_room_00Vtx_000BB8[16] = {
    VTX(-469, 0, -529, 0, 0, 0, 0, 127, 255),
    VTX(-409, 0, -529, 0, 0, 0, 0, 127, 255),
    VTX(-409, 120, -529, 0, 0, 0, 0, 127, 255),
    VTX(-469, 120, -529, 0, 0, 0, 0, 127, 255),
    VTX(-409, 120, -589, 0, 0, 0, 0, 130, 255),
    VTX(-409, 0, -589, 0, 0, 0, 0, 130, 255),
    VTX(-469, 0, -589, 0, 0, 0, 0, 130, 255),
    VTX(-469, 120, -589, 0, 0, 0, 0, 130, 255),
    VTX(-409, 0, -589, 0, 0, 127, 0, 0, 255),
    VTX(-409, 120, -589, 0, 0, 127, 0, 0, 255),
    VTX(-409, 120, -529, 0, 0, 127, 0, 0, 255),
    VTX(-409, 0, -529, 0, 0, 127, 0, 0, 255),
    VTX(-469, 120, -529, 0, 0, 130, 0, 0, 255),
    VTX(-469, 120, -589, 0, 0, 130, 0, 0, 255),
    VTX(-469, 0, -589, 0, 0, 130, 0, 0, 255),
    VTX(-469, 0, -529, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_2_room_00Dlist0x000CB8[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_000BB8[0], 16, 0),
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

static Vtx pr_market_2_room_00Vtx_000D58[16] = {
    VTX(-699, 0, -539, 0, 0, 0, 0, 127, 255),
    VTX(-619, 0, -539, 0, 0, 0, 0, 127, 255),
    VTX(-619, 120, -539, 0, 0, 0, 0, 127, 255),
    VTX(-699, 120, -539, 0, 0, 0, 0, 127, 255),
    VTX(-619, 120, -619, 0, 0, 0, 0, 130, 255),
    VTX(-619, 0, -619, 0, 0, 0, 0, 130, 255),
    VTX(-699, 0, -619, 0, 0, 0, 0, 130, 255),
    VTX(-699, 120, -619, 0, 0, 0, 0, 130, 255),
    VTX(-619, 0, -619, 0, 0, 127, 0, 0, 255),
    VTX(-619, 120, -619, 0, 0, 127, 0, 0, 255),
    VTX(-619, 120, -539, 0, 0, 127, 0, 0, 255),
    VTX(-619, 0, -539, 0, 0, 127, 0, 0, 255),
    VTX(-699, 120, -539, 0, 0, 130, 0, 0, 255),
    VTX(-699, 120, -619, 0, 0, 130, 0, 0, 255),
    VTX(-699, 0, -619, 0, 0, 130, 0, 0, 255),
    VTX(-699, 0, -539, 0, 0, 130, 0, 0, 255),
}; 

Gfx pr_market_2_room_00Dlist0x000E58[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_000D58[0], 16, 0),
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

static Vtx pr_market_2_room_00Vtx_000EF8[16] = {
    VTX(700, 120, 640, 0, 0, 130, 0, 0, 255),
    VTX(700, 120, 580, 0, 0, 130, 0, 0, 255),
    VTX(700, 0, 580, 0, 0, 130, 0, 0, 255),
    VTX(700, 0, 640, 0, 0, 130, 0, 0, 255),
    VTX(60, 120, 640, 0, 0, 0, 0, 130, 255),
    VTX(700, 120, 640, 0, 0, 0, 0, 130, 255),
    VTX(700, 0, 640, 0, 0, 0, 0, 130, 255),
    VTX(60, 0, 640, 0, 0, 0, 0, 130, 255),
    VTX(60, 120, 1100, 0, 0, 130, 0, 0, 255),
    VTX(60, 120, 640, 0, 0, 130, 0, 0, 255),
    VTX(60, 0, 640, 0, 0, 130, 0, 0, 255),
    VTX(60, 0, 1100, 0, 0, 130, 0, 0, 255),
    VTX(-59, 120, 1100, 0, 0, 0, 0, 130, 255),
    VTX(60, 120, 1100, 0, 0, 0, 0, 130, 255),
    VTX(60, 0, 1100, 0, 0, 0, 0, 130, 255),
    VTX(-59, 0, 1100, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_2_room_00Vtx_000FF8[4] = {
    VTX(-59, 120, 600, 0, 0, 127, 0, 0, 255),
    VTX(-639, 120, 600, 0, 0, 0, 0, 130, 255),
    VTX(700, 120, 580, 0, 0, 0, 0, 130, 255),
    VTX(1000, 120, -419, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001038[4] = {
    VTX(820, 120, -419, 0, 0, 0, 0, 130, 255),
    VTX(820, 120, -279, 0, 0, 130, 0, 0, 255),
    VTX(520, 120, -279, 0, 0, 0, 0, 130, 255),
    VTX(520, 120, 380, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001078[4] = {
    VTX(920, 120, 380, 0, 0, 0, 0, 127, 255),
    VTX(920, 120, 580, 0, 0, 130, 0, 0, 255),
    VTX(-639, 120, 660, 0, 0, 130, 0, 0, 255),
    VTX(-59, 120, -599, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_2_room_00Vtx_0010B8[4] = {
    VTX(-59, 120, -899, 0, 0, 127, 0, 0, 255),
    VTX(60, 120, -899, 0, 0, 0, 0, 127, 255),
    VTX(60, 120, -559, 0, 0, 130, 0, 0, 255),
    VTX(560, 120, -559, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_2_room_00Vtx_0010F8[4] = {
    VTX(560, 120, -599, 0, 0, 127, 0, 0, 255),
    VTX(1000, 120, -599, 0, 0, 0, 0, 127, 255),
    VTX(-559, 120, -599, 0, 0, 130, 0, 0, 255),
    VTX(-919, 120, 660, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001138[4] = {
    VTX(-919, 120, 440, 0, 0, 127, 0, 0, 255),
    VTX(-579, 120, 440, 0, 0, 0, 0, 127, 255),
    VTX(-579, 120, -439, 0, 0, 127, 0, 0, 255),
    VTX(-879, 120, -439, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001178[2] = {
    VTX(-879, 120, -639, 0, 0, 127, 0, 0, 255),
    VTX(-559, 120, -639, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001198[12] = {
    VTX(-59, 120, 1100, 0, 0, 127, 0, 0, 255),
    VTX(-59, 0, 1100, 0, 0, 127, 0, 0, 255),
    VTX(-59, 0, 600, 0, 0, 127, 0, 0, 255),
    VTX(-59, 120, 600, 0, 0, 0, 0, 130, 255),
    VTX(-59, 0, 600, 0, 0, 0, 0, 130, 255),
    VTX(-639, 0, 600, 0, 0, 0, 0, 130, 255),
    VTX(920, 120, 580, 0, 0, 0, 0, 130, 255),
    VTX(920, 0, 580, 0, 0, 0, 0, 130, 255),
    VTX(700, 0, 580, 0, 0, 0, 0, 130, 255),
    VTX(1000, 120, -599, 0, 0, 130, 0, 0, 255),
    VTX(1000, 0, -599, 0, 0, 130, 0, 0, 255),
    VTX(1000, 0, -419, 0, 0, 130, 0, 0, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001258[12] = {
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

static Vtx pr_market_2_room_00Vtx_001318[12] = {
    VTX(520, 120, 380, 0, 0, 0, 0, 127, 255),
    VTX(520, 0, 380, 0, 0, 0, 0, 127, 255),
    VTX(920, 0, 380, 0, 0, 0, 0, 127, 255),
    VTX(920, 120, 380, 0, 0, 130, 0, 0, 255),
    VTX(920, 0, 380, 0, 0, 130, 0, 0, 255),
    VTX(920, 0, 580, 0, 0, 130, 0, 0, 255),
    VTX(-639, 120, 600, 0, 0, 130, 0, 0, 255),
    VTX(-639, 0, 600, 0, 0, 130, 0, 0, 255),
    VTX(-639, 0, 660, 0, 0, 130, 0, 0, 255),
    VTX(-559, 120, -599, 0, 0, 0, 0, 127, 255),
    VTX(-559, 0, -599, 0, 0, 0, 0, 127, 255),
    VTX(-59, 0, -599, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_2_room_00Vtx_0013D8[12] = {
    VTX(-59, 120, -599, 0, 0, 127, 0, 0, 255),
    VTX(-59, 0, -599, 0, 0, 127, 0, 0, 255),
    VTX(-59, 0, -899, 0, 0, 127, 0, 0, 255),
    VTX(-59, 120, -899, 0, 0, 0, 0, 127, 255),
    VTX(-59, 0, -899, 0, 0, 0, 0, 127, 255),
    VTX(60, 0, -899, 0, 0, 0, 0, 127, 255),
    VTX(60, 120, -899, 0, 0, 130, 0, 0, 255),
    VTX(60, 0, -899, 0, 0, 130, 0, 0, 255),
    VTX(60, 0, -559, 0, 0, 130, 0, 0, 255),
    VTX(60, 120, -559, 0, 0, 0, 0, 127, 255),
    VTX(60, 0, -559, 0, 0, 0, 0, 127, 255),
    VTX(560, 0, -559, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001498[12] = {
    VTX(560, 120, -559, 0, 0, 127, 0, 0, 255),
    VTX(560, 0, -559, 0, 0, 127, 0, 0, 255),
    VTX(560, 0, -599, 0, 0, 127, 0, 0, 255),
    VTX(560, 120, -599, 0, 0, 0, 0, 127, 255),
    VTX(560, 0, -599, 0, 0, 0, 0, 127, 255),
    VTX(1000, 0, -599, 0, 0, 0, 0, 127, 255),
    VTX(-559, 120, -639, 0, 0, 130, 0, 0, 255),
    VTX(-559, 0, -639, 0, 0, 130, 0, 0, 255),
    VTX(-559, 0, -599, 0, 0, 130, 0, 0, 255),
    VTX(-639, 120, 660, 0, 0, 0, 0, 130, 255),
    VTX(-639, 0, 660, 0, 0, 0, 0, 130, 255),
    VTX(-919, 0, 660, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001558[12] = {
    VTX(-919, 120, 660, 0, 0, 127, 0, 0, 255),
    VTX(-919, 0, 660, 0, 0, 127, 0, 0, 255),
    VTX(-919, 0, 440, 0, 0, 127, 0, 0, 255),
    VTX(-919, 120, 440, 0, 0, 0, 0, 127, 255),
    VTX(-919, 0, 440, 0, 0, 0, 0, 127, 255),
    VTX(-579, 0, 440, 0, 0, 0, 0, 127, 255),
    VTX(-579, 120, 440, 0, 0, 127, 0, 0, 255),
    VTX(-579, 0, 440, 0, 0, 127, 0, 0, 255),
    VTX(-579, 0, -439, 0, 0, 127, 0, 0, 255),
    VTX(-579, 120, -439, 0, 0, 0, 0, 130, 255),
    VTX(-579, 0, -439, 0, 0, 0, 0, 130, 255),
    VTX(-879, 0, -439, 0, 0, 0, 0, 130, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001618[6] = {
    VTX(-879, 120, -439, 0, 0, 127, 0, 0, 255),
    VTX(-879, 0, -439, 0, 0, 127, 0, 0, 255),
    VTX(-879, 0, -639, 0, 0, 127, 0, 0, 255),
    VTX(-879, 120, -639, 0, 0, 0, 0, 127, 255),
    VTX(-879, 0, -639, 0, 0, 0, 0, 127, 255),
    VTX(-559, 0, -639, 0, 0, 0, 0, 127, 255),
}; 

Gfx pr_market_2_room_00Dlist0x001678[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_000EF8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_000FF8[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001198[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001038[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001258[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001078[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001318[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_0010B8[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_0013D8[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_0010F8[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001498[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001138[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001558[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001178[0], 2, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001618[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_market_2_room_00Vtx_001928[16] = {
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

static Vtx pr_market_2_room_00Vtx_001A28[13] = {
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

static Vtx pr_market_2_room_00Vtx_001AF8[4] = {
    VTX(111, 0, -45, 0, 0, 127, 0, 0, 255),
    VTX(111, 0, 46, 0, 0, 89, 0, 89, 255),
    VTX(46, 0, 111, 0, 0, 0, 0, 127, 255),
    VTX(-45, 0, 111, 0, 0, 168, 0, 89, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001B38[9] = {
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

static Vtx pr_market_2_room_00Vtx_001BC8[2] = {
    VTX(-110, 13, 46, 0, 0, 0, 127, 0, 255),
    VTX(-45, 13, 111, 0, 0, 0, 127, 0, 255),
}; 

static Vtx pr_market_2_room_00Vtx_001BE8[23] = {
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

static Vtx pr_market_2_room_00Vtx_001D58[12] = {
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

static Vtx pr_market_2_room_00Vtx_001E18[17] = {
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

Gfx pr_market_2_room_00Dlist0x001F28[] = {
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
    gsSPVertex(&pr_market_2_room_00Vtx_001928[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001A28[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001A28[5], 1, 4),
    gsSPVertex(&pr_market_2_room_00Vtx_001BE8[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSP1Triangle(3, 15, 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001A28[3], 7, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001BE8[9], 7, 7),
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
    gsSPVertex(&pr_market_2_room_00Vtx_001A28[4], 1, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001A28[9], 4, 1),
    gsSPVertex(&pr_market_2_room_00Vtx_001BE8[11], 1, 5),
    gsSPVertex(&pr_market_2_room_00Vtx_001BE8[15], 8, 6),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 2, 0),
    gsSP1Triangle(2, 7, 5, 0),
    gsSP1Triangle(2, 5, 0, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001AF8[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001D58[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001B38[0], 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001B38[5], 1, 4),
    gsSPVertex(&pr_market_2_room_00Vtx_001E18[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSP1Triangle(3, 15, 4, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001B38[3], 6, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001BC8[1], 1, 6),
    gsSPVertex(&pr_market_2_room_00Vtx_001E18[9], 7, 7),
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
    gsSPVertex(&pr_market_2_room_00Vtx_001B38[4], 1, 0),
    gsSPVertex(&pr_market_2_room_00Vtx_001BC8[0], 2, 1),
    gsSPVertex(&pr_market_2_room_00Vtx_001E18[11], 1, 3),
    gsSPVertex(&pr_market_2_room_00Vtx_001E18[15], 2, 4),
    gsSP1Triangle(1, 5, 3, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(2, 5, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx pr_market_2_room_00Dlist0x002230[] = {
    gsSPDisplayList(pr_market_2_room_00Dlist0x000230),
    gsSPDisplayList(pr_market_2_room_00Dlist0x0003D0),
    gsSPDisplayList(pr_market_2_room_00Dlist0x0004B0),
    gsSPDisplayList(pr_market_2_room_00Dlist0x000620),
    gsSPDisplayList(pr_market_2_room_00Dlist0x0007D8),
    gsSPDisplayList(pr_market_2_room_00Dlist0x000978),
    gsSPDisplayList(pr_market_2_room_00Dlist0x000B18),
    gsSPDisplayList(pr_market_2_room_00Dlist0x000CB8),
    gsSPDisplayList(pr_market_2_room_00Dlist0x000E58),
    gsSPDisplayList(pr_market_2_room_00Dlist0x001678),
    gsSPDisplayList(pr_market_2_room_00Dlist0x001F28),
    gsSPEndDisplayList(),
}; 


