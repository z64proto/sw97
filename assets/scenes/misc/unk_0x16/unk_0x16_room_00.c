#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "unk_0x16_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "unk_0x16_scene.h"


static SCmdRoomBehavior unk_0x16_room_00Set0000Cmd00;
static SCmdBase unk_0x16_room_00Set0000Cmd01;
static SCmdSkyboxDisables unk_0x16_room_00Set0000Cmd02;
static SCmdTimeSettings unk_0x16_room_00Set0000Cmd03;
static SCmdMesh unk_0x16_room_00Set0000Cmd04;
static SCmdObjectList unk_0x16_room_00Set0000Cmd05;
static SCmdActorList unk_0x16_room_00Set0000Cmd06;
static SCmdEndMarker unk_0x16_room_00Set0000Cmd07;
static s32 terminatorMaybe;
static Vtx unk_0x16_room_00Vtx_0002A8[4];
static Vtx unk_0x16_room_00Vtx_0002E8[17];
static Vtx unk_0x16_room_00Vtx_000858[3];
static Vtx unk_0x16_room_00Vtx_000888[2];
static Vtx unk_0x16_room_00Vtx_0008A8[1];
static Vtx unk_0x16_room_00Vtx_0008C8[1];
static Vtx unk_0x16_room_00Vtx_0008F8[18];
static Vtx unk_0x16_room_00Vtx_000A18[3];
static Vtx unk_0x16_room_00Vtx_000A58[1];
static Vtx unk_0x16_room_00Vtx_000A68[1];
static Vtx unk_0x16_room_00Vtx_000A78[2];
static Vtx unk_0x16_room_00Vtx_000AA8[6];
static Vtx unk_0x16_room_00Vtx_000B08[4];
static Vtx unk_0x16_room_00Vtx_000B48[1];
static Vtx unk_0x16_room_00Vtx_000B58[8];
static Vtx unk_0x16_room_00Vtx_000BD8[1];
static Vtx unk_0x16_room_00Vtx_000C98[4];
static Vtx unk_0x16_room_00Vtx_000D88[4];
static Vtx unk_0x16_room_00Vtx_000E78[4];
static Vtx unk_0x16_room_00Vtx_000F68[4];
static Vtx unk_0x16_room_00Vtx_001058[4];
static Vtx unk_0x16_room_00Vtx_001148[4];
static Vtx unk_0x16_room_00Vtx_001238[4];
static Vtx unk_0x16_room_00Vtx_001328[4];
static Vtx unk_0x16_room_00Vtx_001588[2];
static Vtx unk_0x16_room_00Vtx_0015A8[1];
static Vtx unk_0x16_room_00Vtx_0015B8[2];
static Vtx unk_0x16_room_00Vtx_0015D8[4];
static Vtx unk_0x16_room_00Vtx_001618[12];

static SCmdRoomBehavior unk_0x16_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000000 }; // 0x0000

static SCmdBase unk_0x16_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables unk_0x16_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdTimeSettings unk_0x16_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x01 }; // 0x0018

static SCmdMesh unk_0x16_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&unk_0x16_room_00MeshHeader0x0000DC }; // 0x0020

static SCmdObjectList unk_0x16_room_00Set0000Cmd05 = {  0x0B, 0x05, (u32)unk_0x16_room_00ObjectList0x000040 }; // 0x0028

static SCmdActorList unk_0x16_room_00Set0000Cmd06 = {  0x01, 0x08, (u32)unk_0x16_room_00ActorList0x00004C }; // 0x0030 }; 

static SCmdEndMarker unk_0x16_room_00Set0000Cmd07 = {  0x14, 0x00, 0x00 }; // 0x0038

s16 unk_0x16_room_00ObjectList0x000040[5] = {
	OBJECT_BOX,
	OBJECT_IRONKNACK,
	OBJECT_FIREFLY,
	OBJECT_SLIME,
	OBJECT_BABY_SKEL,
}; 

ActorEntry unk_0x16_room_00ActorList0x00004C[8] = {
	{ ACTOR_EN_BOX, 284, 418, -554, 0, 0, 0, 0xFFFF }, //0x00004C
	{ ACTOR_SLIM, -329, 898, -237, 0, 0, 0, 0xFFFF }, //0x00005C
	{ ACTOR_SLIM, 304, 858, -138, 0, 0, 0, 0xFFFF }, //0x00006C
	{ ACTOR_SLIM, 700, 918, -514, 0, 0, 0, 0xFFFF }, //0x00007C
	{ ACTOR_SLIM, -92, 405, -752, 0, 0, 0, 0xFFFF }, //0x00008C
	{ ACTOR_EN_FIREFLY, -725, 641, -138, 0, 0, 0, 0xFFFF }, //0x00009C
	{ ACTOR_EN_FIREFLY, 740, 700, 277, 0, 0, 0, 0xFFFF }, //0x0000AC
	{ ACTOR_EN_FIREFLY, -191, 379, 574, 0, 16384, 0, 0xFFFF }, //0x0000BC
}; 

MeshEntry0 unk_0x16_room_00MeshDListEntry0x0000D4[1] = {
	{ (u32)unk_0x16_room_00Dlist0x0016E8, 0 },

}; 

MeshHeader0 unk_0x16_room_00MeshHeader0x0000DC = {
    { 0 },
    1,
    unk_0x16_room_00MeshDListEntry0x0000D4,
    (u32)unk_0x16_room_00MeshDListEntry0x0000D4 + (sizeof(MeshEntry0) * ARRAY_COUNT(unk_0x16_room_00MeshDListEntry0x0000D4)),
};

static s32 terminatorMaybe = {  0x01000000  }; 

static u8 unaccounted_0000E0[16] = {
    0x03, 0x00, 0x00, 0xD4, 0x03, 0x00, 0x00, 0xDC, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx unk_0x16_room_00Dlist0x0000F0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(K5, K5, 0, SHADE, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_0002A8[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0002E8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 2, 5, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 6, 0),
    gsSP1Triangle(2, 7, 5, 0),
    gsSP1Triangle(2, 1, 8, 0),
    gsSP1Triangle(2, 8, 7, 0),
    gsSP1Triangle(9, 10, 7, 0),
    gsSP1Triangle(9, 7, 11, 0),
    gsSP1Triangle(11, 7, 8, 0),
    gsSP1Triangle(11, 8, 12, 0),
    gsSP1Triangle(7, 10, 5, 0),
    gsSP1Triangle(13, 14, 1, 0),
    gsSP1Triangle(13, 1, 0, 0),
    gsSP1Triangle(1, 14, 15, 0),
    gsSP1Triangle(1, 15, 8, 0),
    gsSP1Triangle(9, 11, 3, 0),
    gsSP1Triangle(9, 3, 6, 0),
    gsSP1Triangle(11, 12, 0, 0),
    gsSP1Triangle(11, 0, 3, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0002E8[8], 1, 1),
    gsSPVertex(&unk_0x16_room_00Vtx_0002E8[12], 2, 2),
    gsSPVertex(&unk_0x16_room_00Vtx_0002E8[15], 2, 4),
    gsSP1Triangle(2, 1, 4, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(2, 5, 3, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_0002A8[4] = {
    VTX(-3394, 1400, 55, 0, 0, 255, 255, 255, 255),
    VTX(-3394, 1200, 55, 0, 0, 255, 255, 255, 255),
    VTX(-3394, 1200, -104, 0, 0, 255, 255, 255, 255),
    VTX(-3394, 1400, -104, 0, 0, 255, 255, 255, 255),
}; 

static Vtx unk_0x16_room_00Vtx_0002E8[17] = {
    VTX(-2594, 1200, -104, -9469, 9170, 51, 51, 51, 255),
    VTX(-2594, 1000, -104, -9469, 8249, 179, 179, 179, 255),
    VTX(-1997, 800, -312, -6286, 7064, 179, 179, 179, 255),
    VTX(-1997, 1000, -312, -6286, 7985, 51, 51, 51, 255),
    VTX(-1471, 600, -570, -3296, 6055, 102, 102, 102, 255),
    VTX(-1471, 600, -148, -4375, 5237, 102, 102, 102, 255),
    VTX(-1471, 960, -570, -3296, 6976, 51, 51, 51, 255),
    VTX(-2014, 800, 115, -7461, 6253, 179, 179, 179, 255),
    VTX(-2594, 1000, 55, -9878, 7939, 179, 179, 179, 255),
    VTX(-1471, 960, 272, -5455, 5340, 51, 51, 51, 255),
    VTX(-1471, 600, 272, -5455, 4419, 102, 102, 102, 255),
    VTX(-2014, 1000, 115, -7461, 7174, 51, 51, 51, 255),
    VTX(-2594, 1200, 55, -9878, 8860, 51, 51, 51, 255),
    VTX(-3394, 1400, -104, -13016, 10987, 255, 255, 255, 255),
    VTX(-3394, 1200, -104, -13016, 10066, 255, 255, 255, 255),
    VTX(-3394, 1200, 55, -13426, 9756, 255, 255, 255, 255),
    VTX(-3394, 1400, 55, -13426, 10677, 255, 255, 255, 255),
}; 

Gfx unk_0x16_room_00Dlist0x0003F8[] = {
    gsSPDisplayList(unk_0x16_room_00Dlist0x0000F0),
    gsSPEndDisplayList(),
}; 

Gfx unk_0x16_room_00Dlist0x000408[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_000858[0], 3, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_000888[0], 2, 3),
    gsSPVertex(&unk_0x16_room_00Vtx_0008A8[0], 9, 5),
    gsSP1Triangle(5, 0, 1, 0),
    gsSP1Triangle(5, 1, 6, 0),
    gsSP1Triangle(1, 4, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 9, 6, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(10, 7, 4, 0),
    gsSP1Triangle(11, 10, 4, 0),
    gsSP1Triangle(11, 4, 3, 0),
    gsSP1Triangle(11, 3, 2, 0),
    gsSP1Triangle(11, 2, 12, 0),
    gsSP1Triangle(2, 0, 13, 0),
    gsSP1Triangle(2, 13, 12, 0),
    gsSP1Triangle(0, 5, 13, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008A8[0], 1, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[2], 9, 1),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[15], 1, 10),
    gsSPVertex(&unk_0x16_room_00Vtx_000AA8[0], 1, 11),
    gsSPVertex(&unk_0x16_room_00Vtx_000AA8[2], 4, 12),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(1, 3, 5, 0),
    gsSP1Triangle(2, 0, 4, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsSP1Triangle(5, 3, 7, 0),
    gsSP1Triangle(5, 7, 9, 0),
    gsSP1Triangle(3, 4, 8, 0),
    gsSP1Triangle(3, 8, 7, 0),
    gsSP1Triangle(4, 0, 11, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(6, 8, 4, 0),
    gsSP1Triangle(6, 4, 13, 0),
    gsSP1Triangle(7, 8, 14, 0),
    gsSP1Triangle(7, 14, 10, 0),
    gsSP1Triangle(8, 6, 15, 0),
    gsSP1Triangle(8, 15, 14, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[6], 1, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[8], 1, 1),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[10], 8, 2),
    gsSPVertex(&unk_0x16_room_00Vtx_000AA8[4], 1, 10),
    gsSPVertex(&unk_0x16_room_00Vtx_000B08[0], 3, 11),
    gsSP1Triangle(2, 1, 7, 0),
    gsSP1Triangle(2, 7, 6, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(4, 0, 2, 0),
    gsSP1Triangle(5, 2, 6, 0),
    gsSP1Triangle(5, 3, 2, 0),
    gsSP1Triangle(6, 7, 11, 0),
    gsSP1Triangle(6, 11, 12, 0),
    gsSP1Triangle(7, 10, 11, 0),
    gsSP1Triangle(5, 6, 12, 0),
    gsSP1Triangle(8, 11, 10, 0),
    gsSP1Triangle(8, 10, 13, 0),
    gsSP1Triangle(9, 5, 12, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008C8[0], 1, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[0], 3, 1),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[6], 1, 4),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[12], 1, 5),
    gsSPVertex(&unk_0x16_room_00Vtx_000A18[0], 4, 6),
    gsSPVertex(&unk_0x16_room_00Vtx_000A68[0], 1, 10),
    gsSPVertex(&unk_0x16_room_00Vtx_000B48[0], 3, 11),
    gsSP1Triangle(5, 2, 3, 0),
    gsSP1Triangle(5, 3, 4, 0),
    gsSP1Triangle(5, 6, 1, 0),
    gsSP1Triangle(5, 1, 2, 0),
    gsSP1Triangle(6, 9, 0, 0),
    gsSP1Triangle(6, 0, 1, 0),
    gsSP1Triangle(7, 0, 9, 0),
    gsSP1Triangle(7, 9, 11, 0),
    gsSP1Triangle(8, 12, 9, 0),
    gsSP1Triangle(8, 9, 6, 0),
    gsSP1Triangle(9, 12, 10, 0),
    gsSP1Triangle(9, 10, 13, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[16], 1, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_000A58[0], 5, 1),
    gsSPVertex(&unk_0x16_room_00Vtx_000B58[0], 8, 6),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 8, 0),
    gsSP1Triangle(2, 6, 5, 0),
    gsSP1Triangle(2, 5, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 7, 0),
    gsSP1Triangle(3, 2, 9, 0),
    gsSP1Triangle(3, 9, 11, 0),
    gsSP1Triangle(4, 5, 12, 0),
    gsSP1Triangle(5, 4, 0, 0),
    gsSP1Triangle(5, 0, 13, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[7], 1, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[13], 1, 1),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[16], 2, 2),
    gsSPVertex(&unk_0x16_room_00Vtx_000A78[0], 2, 4),
    gsSPVertex(&unk_0x16_room_00Vtx_000AA8[3], 1, 6),
    gsSPVertex(&unk_0x16_room_00Vtx_000AA8[5], 1, 7),
    gsSPVertex(&unk_0x16_room_00Vtx_000B08[2], 2, 8),
    gsSPVertex(&unk_0x16_room_00Vtx_000B58[4], 4, 10),
    gsSP1Triangle(3, 5, 12, 0),
    gsSP1Triangle(3, 12, 1, 0),
    gsSP1Triangle(2, 9, 13, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(4, 0, 6, 0),
    gsSP1Triangle(4, 6, 10, 0),
    gsSP1Triangle(0, 4, 11, 0),
    gsSP1Triangle(0, 11, 7, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0008F8[11], 3, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_000A18[0], 3, 3),
    gsSPVertex(&unk_0x16_room_00Vtx_000A58[0], 1, 6),
    gsSPVertex(&unk_0x16_room_00Vtx_000AA8[0], 3, 7),
    gsSPVertex(&unk_0x16_room_00Vtx_000B48[0], 1, 10),
    gsSPVertex(&unk_0x16_room_00Vtx_000B58[2], 1, 11),
    gsSPVertex(&unk_0x16_room_00Vtx_000BD8[0], 1, 12),
    gsSP1Triangle(0, 5, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(7, 8, 12, 0),
    gsSP1Triangle(7, 12, 9, 0),
    gsSP1Triangle(8, 4, 10, 0),
    gsSP1Triangle(8, 10, 12, 0),
    gsSP1Triangle(2, 6, 11, 0),
    gsSP1Triangle(2, 11, 0, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_000858[3] = {
    VTX(-1471, 600, -570, -3296, 6055, 102, 102, 102, 255),
    VTX(-1471, 600, -148, -4375, 5237, 102, 102, 102, 255),
    VTX(-1471, 960, -570, -3296, 6976, 51, 51, 51, 255),
}; 

static Vtx unk_0x16_room_00Vtx_000888[2] = {
    VTX(-1471, 960, 272, -5455, 5340, 51, 51, 51, 255),
    VTX(-1471, 600, 272, -5455, 4419, 102, 102, 102, 255),
}; 

static Vtx unk_0x16_room_00Vtx_0008A8[1] = {
    VTX(-752, 400, -858, 630, 4886, 76, 76, 76, 255),
}; 

static u8 unaccounted_0008B8[16] = {
    0xFC, 0xC4, 0x01, 0xB8, 0xFD, 0xE3, 0x00, 0x00, 0xFD, 0xFA, 0x11, 0x06, 0xA6, 0xA6, 0xA6, 0xFF, 
}; 

static Vtx unk_0x16_room_00Vtx_0008C8[1] = {
    VTX(-1057, 400, 408, -3965, 2771, 76, 76, 76, 255),
}; 

static u8 unaccounted_0008D8[32] = {
    0xFC, 0x2B, 0x01, 0x90, 0x00, 0x5B, 0x00, 0x00, 0xF5, 0x00, 0x0C, 0xE4, 0x66, 0x66, 0x66, 0xFF, 
    0xFC, 0x78, 0x01, 0x90, 0xFF, 0x20, 0x00, 0x00, 0xF9, 0x7D, 0x0E, 0xF5, 0x66, 0x66, 0x66, 0xFF, 
}; 

static Vtx unk_0x16_room_00Vtx_0008F8[18] = {
    VTX(-1057, 520, 408, -3965, 3323, 170, 170, 255, 255),
    VTX(-1057, 1000, 408, -3965, 5533, 0, 0, 0, 255),
    VTX(-752, 1000, -858, 630, 7649, 0, 0, 0, 255),
    VTX(-752, 520, -858, 630, 5439, 170, 170, 255, 255),
    VTX(71, 520, -906, 4408, 4609, 170, 170, 255, 255),
    VTX(71, 400, -906, 4408, 4056, 76, 76, 76, 255),
    VTX(71, 1000, -906, 4408, 6819, 0, 0, 0, 255),
    VTX(596, 440, -194, 4911, 2087, 166, 166, 166, 255),
    VTX(833, 520, -575, 6939, 3113, 170, 170, 255, 255),
    VTX(833, 400, -575, 6939, 2560, 76, 76, 76, 255),
    VTX(833, 1000, -575, 6939, 5323, 0, 0, 0, 255),
    VTX(-115, 1000, 948, -1170, 3430, 0, 0, 0, 255),
    VTX(-678, 1000, 649, -2902, 4641, 0, 0, 0, 255),
    VTX(408, 1000, 1084, 802, 2579, 0, 0, 0, 255),
    VTX(1263, 1000, 76, 7175, 3579, 0, 0, 0, 255),
    VTX(1263, 520, 76, 7175, 1369, 170, 170, 255, 255),
    VTX(1090, 400, 1071, 3862, -920, 102, 102, 102, 255),
    VTX(783, 760, 1248, 2048, 0, 51, 51, 51, 255),
}; 

static Vtx unk_0x16_room_00Vtx_000A18[3] = {
    VTX(-678, 520, 649, -2902, 2431, 170, 170, 255, 255),
    VTX(-981, 400, 91, -2816, 3300, 102, 102, 102, 255),
    VTX(-115, 520, 948, -1170, 1220, 170, 170, 255, 255),
}; 

static u8 unaccounted_000A48[16] = {
    0xFD, 0x5A, 0x01, 0x90, 0x02, 0x89, 0x00, 0x00, 0xF4, 0xAA, 0x07, 0x56, 0x4C, 0x4C, 0x4C, 0xFF, 
}; 

static Vtx unk_0x16_room_00Vtx_000A58[1] = {
    VTX(408, 520, 1084, 802, 369, 170, 170, 255, 255),
}; 

static Vtx unk_0x16_room_00Vtx_000A68[1] = {
    VTX(121, 360, 567, 856, 1141, 102, 102, 102, 255),
}; 

static Vtx unk_0x16_room_00Vtx_000A78[2] = {
    VTX(359, 400, 186, 2884, 1614, 102, 102, 102, 255),
    VTX(783, 400, 1248, 2048, -920, 102, 102, 102, 255),
}; 

static u8 unaccounted_000A98[16] = {
    0x01, 0x98, 0x01, 0x90, 0x04, 0x3C, 0x00, 0x00, 0x03, 0x22, 0xFF, 0x4A, 0x4C, 0x4C, 0x4C, 0xFF, 
}; 

static Vtx unk_0x16_room_00Vtx_000AA8[6] = {
    VTX(-828, 440, -541, -518, 4358, 166, 166, 166, 255),
    VTX(-904, 400, -224, -1667, 3829, 102, 102, 102, 255),
    VTX(-115, 400, -517, 2580, 3512, 102, 102, 102, 255),
    VTX(-115, 400, -517, 2580, 3512, 102, 102, 102, 255),
    VTX(1263, 400, 76, 7175, 816, 76, 76, 76, 255),
    VTX(1049, 400, 328, 5582, 566, 102, 102, 102, 255),
}; 

static Vtx unk_0x16_room_00Vtx_000B08[4] = {
    VTX(1397, 400, 893, 5677, -920, 102, 102, 102, 255),
    VTX(1397, 760, 893, 5677, 0, 51, 51, 51, 255),
    VTX(1049, 400, 328, 5582, 566, 102, 102, 102, 255),
    VTX(835, 400, 580, 3989, 317, 102, 102, 102, 255),
}; 

static Vtx unk_0x16_room_00Vtx_000B48[1] = {
    VTX(-490, 440, 260, -1074, 2423, 166, 166, 166, 255),
}; 

static Vtx unk_0x16_room_00Vtx_000B58[8] = {
    VTX(-115, 400, 948, -1170, 668, 76, 76, 76, 255),
    VTX(-490, 440, 260, -1074, 2423, 166, 166, 166, 255),
    VTX(-115, 520, 948, -1170, 1220, 170, 170, 255, 255),
    VTX(622, 400, 832, 2396, 67, 102, 102, 102, 255),
    VTX(-303, 360, -128, 752, 2967, 102, 102, 102, 255),
    VTX(835, 400, 580, 3989, 317, 102, 102, 102, 255),
    VTX(408, 520, 1084, 802, 369, 170, 170, 255, 255),
    VTX(622, 400, 832, 2396, 67, 102, 102, 102, 255),
}; 

static Vtx unk_0x16_room_00Vtx_000BD8[1] = {
    VTX(-303, 360, -128, 752, 2967, 102, 102, 102, 255),
}; 

Gfx unk_0x16_room_00Dlist0x000BE8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_000C98[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_000C98[4] = {
    VTX(71, 1000, -406, 3128, 5849, 0, 0, 0, 255),
    VTX(158, 1000, -256, 3128, 5461, 0, 0, 0, 255),
    VTX(71, 600, -306, 2872, 3813, 170, 170, 255, 255),
    VTX(-14, 1000, -256, 2360, 5655, 0, 0, 0, 255),
}; 

Gfx unk_0x16_room_00Dlist0x000CD8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_000D88[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_000D88[4] = {
    VTX(-528, 1000, -6, -556, 5745, 0, 0, 0, 255),
    VTX(-441, 1000, 143, -556, 5357, 0, 0, 0, 255),
    VTX(-528, 600, 93, -812, 3709, 170, 170, 255, 255),
    VTX(-614, 1000, 143, -1324, 5551, 0, 0, 0, 255),
}; 

Gfx unk_0x16_room_00Dlist0x000DC8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_000E78[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_000E78[4] = {
    VTX(71, 1000, 593, 568, 3909, 0, 0, 0, 255),
    VTX(158, 1000, 743, 568, 3521, 0, 0, 0, 255),
    VTX(71, 600, 693, 312, 1873, 170, 170, 255, 255),
    VTX(-14, 1000, 743, -199, 3715, 0, 0, 0, 255),
}; 

Gfx unk_0x16_room_00Dlist0x000EB8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_000F68[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_000F68[4] = {
    VTX(471, 1000, -6, 3877, 4625, 0, 0, 0, 255),
    VTX(558, 1000, 143, 3877, 4237, 0, 0, 0, 255),
    VTX(471, 600, 93, 3621, 2589, 170, 170, 255, 255),
    VTX(385, 1000, 143, 3109, 4431, 0, 0, 0, 255),
}; 

Gfx unk_0x16_room_00Dlist0x000FA8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_001058[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_001058[4] = {
    VTX(-528, 1000, -606, 979, 6909, 0, 0, 0, 255),
    VTX(-419, 1000, -418, 979, 6423, 0, 0, 0, 255),
    VTX(-528, 499, -480, 659, 4358, 170, 170, 255, 255),
    VTX(-636, 1000, -418, 17, 6666, 0, 0, 0, 255),
}; 

Gfx unk_0x16_room_00Dlist0x001098[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_001148[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_001148[4] = {
    VTX(871, 1000, -206, 6163, 4565, 0, 0, 0, 255),
    VTX(968, 1000, -38, 6163, 4131, 0, 0, 0, 255),
    VTX(871, 553, -94, 5877, 2291, 170, 170, 255, 255),
    VTX(775, 1000, -38, 5305, 4348, 0, 0, 0, 255),
}; 

Gfx unk_0x16_room_00Dlist0x001188[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_001238[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_001238[4] = {
    VTX(-128, 1000, 193, 705, 4909, 0, 0, 0, 255),
    VTX(-22, 1000, 375, 705, 4438, 0, 0, 0, 255),
    VTX(-128, 515, 315, 394, 2439, 170, 170, 255, 255),
    VTX(-233, 1000, 375, -226, 4673, 0, 0, 0, 255),
}; 

Gfx unk_0x16_room_00Dlist0x001278[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_001328[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_001328[4] = {
    VTX(-909, 1000, 161, -2677, 5846, 0, 0, 0, 255),
    VTX(-804, 1000, 343, -2677, 5375, 0, 0, 0, 255),
    VTX(-909, 515, 283, -2988, 3376, 170, 170, 255, 255),
    VTX(-1014, 1000, 343, -3609, 5611, 0, 0, 0, 255),
}; 

Gfx unk_0x16_room_00Dlist0x001368[] = {
    gsSPDisplayList(unk_0x16_room_00Dlist0x000408),
    gsSPDisplayList(unk_0x16_room_00Dlist0x000BE8),
    gsSPDisplayList(unk_0x16_room_00Dlist0x000CD8),
    gsSPDisplayList(unk_0x16_room_00Dlist0x000DC8),
    gsSPDisplayList(unk_0x16_room_00Dlist0x000EB8),
    gsSPDisplayList(unk_0x16_room_00Dlist0x000FA8),
    gsSPDisplayList(unk_0x16_room_00Dlist0x001098),
    gsSPDisplayList(unk_0x16_room_00Dlist0x001188),
    gsSPDisplayList(unk_0x16_room_00Dlist0x001278),
    gsSPEndDisplayList(),
}; 

Gfx unk_0x16_room_00Dlist0x0013B8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 254, 2, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(K5, K5, 0, SHADE, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unk_0x16_room_00Vtx_0015D8[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unk_0x16_sceneTex_000D40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_001588[0], 2, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_0015A8[0], 1, 2),
    gsSPVertex(&unk_0x16_room_00Vtx_0015B8[0], 2, 3),
    gsSPVertex(&unk_0x16_room_00Vtx_001618[0], 11, 5),
    gsSP1Triangle(5, 3, 0, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(7, 1, 4, 0),
    gsSP1Triangle(7, 4, 6, 0),
    gsSP1Triangle(0, 2, 8, 0),
    gsSP1Triangle(7, 8, 2, 0),
    gsSP1Triangle(7, 2, 1, 0),
    gsSP1Triangle(5, 0, 8, 0),
    gsSP1Triangle(9, 10, 5, 0),
    gsSP1Triangle(9, 5, 8, 0),
    gsSP1Triangle(6, 5, 10, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(7, 6, 11, 0),
    gsSP1Triangle(7, 11, 12, 0),
    gsSP1Triangle(13, 14, 10, 0),
    gsSP1Triangle(13, 10, 9, 0),
    gsSP1Triangle(11, 10, 14, 0),
    gsSP1Triangle(11, 14, 15, 0),
    gsSP1Triangle(12, 9, 8, 0),
    gsSP1Triangle(12, 8, 7, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_001618[4], 1, 0),
    gsSPVertex(&unk_0x16_room_00Vtx_001618[6], 3, 1),
    gsSPVertex(&unk_0x16_room_00Vtx_001618[10], 2, 4),
    gsSP1Triangle(2, 1, 4, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(5, 3, 0, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unk_0x16_room_00Vtx_001588[2] = {
    VTX(1090, 400, 1071, 3862, -920, 102, 102, 102, 255),
    VTX(783, 760, 1248, 2048, 0, 51, 51, 51, 255),
}; 

static Vtx unk_0x16_room_00Vtx_0015A8[1] = {
    VTX(783, 400, 1248, 2048, -920, 102, 102, 102, 255),
}; 

static Vtx unk_0x16_room_00Vtx_0015B8[2] = {
    VTX(1397, 400, 893, 5677, -920, 102, 102, 102, 255),
    VTX(1397, 760, 893, 5677, 0, 51, 51, 51, 255),
}; 

static Vtx unk_0x16_room_00Vtx_0015D8[4] = {
    VTX(1588, 200, 3400, 0, 0, 255, 255, 255, 255),
    VTX(1588, 0, 3400, 0, 0, 255, 255, 255, 255),
    VTX(1428, 0, 3400, 0, 0, 255, 255, 255, 255),
    VTX(1428, 200, 3400, 0, 0, 255, 255, 255, 255),
}; 

static Vtx unk_0x16_room_00Vtx_001618[12] = {
    VTX(1540, 200, 1629, 4429, -3427, 179, 179, 179, 255),
    VTX(1540, 480, 1629, 4429, -2506, 51, 51, 51, 255),
    VTX(1217, 480, 1726, 2749, -2334, 51, 51, 51, 255),
    VTX(1217, 200, 1726, 2749, -3254, 179, 179, 179, 255),
    VTX(1428, 0, 2440, 1854, -5796, 179, 179, 179, 255),
    VTX(1588, 0, 2440, 2564, -5976, 179, 179, 179, 255),
    VTX(1588, 200, 2440, 2564, -5055, 51, 51, 51, 255),
    VTX(1428, 200, 2440, 1854, -4876, 51, 51, 51, 255),
    VTX(1428, 0, 3400, -602, -7659, 255, 255, 255, 255),
    VTX(1588, 0, 3400, 106, -7838, 255, 255, 255, 255),
    VTX(1588, 200, 3400, 106, -6917, 255, 255, 255, 255),
    VTX(1428, 200, 3400, -602, -6738, 255, 255, 255, 255),
}; 

Gfx unk_0x16_room_00Dlist0x0016D8[] = {
    gsSPDisplayList(unk_0x16_room_00Dlist0x0013B8),
    gsSPEndDisplayList(),
}; 

Gfx unk_0x16_room_00Dlist0x0016E8[] = {
    gsSPDisplayList(unk_0x16_room_00Dlist0x0003F8),
    gsSPDisplayList(unk_0x16_room_00Dlist0x001368),
    gsSPDisplayList(unk_0x16_room_00Dlist0x0016D8),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_001708[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


