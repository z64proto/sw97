#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "chamber_of_sages_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "chamber_of_sages_scene.h"


static SCmdRoomBehavior chamber_of_sages_room_00Set0000Cmd00;
static SCmdBase chamber_of_sages_room_00Set0000Cmd01;
static SCmdSkyboxDisables chamber_of_sages_room_00Set0000Cmd02;
static SCmdMesh chamber_of_sages_room_00Set0000Cmd03;
static SCmdObjectList chamber_of_sages_room_00Set0000Cmd04;
static SCmdActorList chamber_of_sages_room_00Set0000Cmd05;
static SCmdEndMarker chamber_of_sages_room_00Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx chamber_of_sages_room_00Vtx_0000C0[32];
static Vtx chamber_of_sages_room_00Vtx_0002C0[32];
static Vtx chamber_of_sages_room_00Vtx_0004C0[32];
static Vtx chamber_of_sages_room_00Vtx_0006C0[32];
static Vtx chamber_of_sages_room_00Vtx_0008C0[32];
static Vtx chamber_of_sages_room_00Vtx_000AC0[32];
static Vtx chamber_of_sages_room_00Vtx_0016E0[4];
static Vtx chamber_of_sages_room_00Vtx_001778[42];
static Vtx chamber_of_sages_room_00Vtx_001A18[18];
static Vtx chamber_of_sages_room_00Vtx_002C70[4];
static Vtx chamber_of_sages_room_00Vtx_002CB0[4];
static Vtx chamber_of_sages_room_00Vtx_002CF0[4];
static Vtx chamber_of_sages_room_00Vtx_002D30[4];
static Vtx chamber_of_sages_room_00Vtx_002D70[4];
static Vtx chamber_of_sages_room_00Vtx_002DB0[4];
static Vtx chamber_of_sages_room_00Vtx_002DF0[4];
static Vtx chamber_of_sages_room_00Vtx_002E30[4];
static Vtx chamber_of_sages_room_00Vtx_002E70[4];
static Vtx chamber_of_sages_room_00Vtx_002EB0[4];
static Vtx chamber_of_sages_room_00Vtx_002EF0[4];
static Vtx chamber_of_sages_room_00Vtx_002F30[4];
static Vtx chamber_of_sages_room_00Vtx_002F70[10];
static Vtx chamber_of_sages_room_00Vtx_00F450[32];
static Vtx chamber_of_sages_room_00Vtx_00F650[32];
static Vtx chamber_of_sages_room_00Vtx_00F850[32];
static Vtx chamber_of_sages_room_00Vtx_00FA50[32];
static Vtx chamber_of_sages_room_00Vtx_00FC50[32];
static Vtx chamber_of_sages_room_00Vtx_00FE50[8];
static Vtx chamber_of_sages_room_00Vtx_0108C8[20];

static SCmdRoomBehavior chamber_of_sages_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000000 }; // 0x0000

static SCmdBase chamber_of_sages_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables chamber_of_sages_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh chamber_of_sages_room_00Set0000Cmd03 = {  0x0A, 0, (u32)&chamber_of_sages_room_00MeshHeader0x0000A0 }; // 0x0018

static SCmdObjectList chamber_of_sages_room_00Set0000Cmd04 = {  0x0B, 0x09, (u32)chamber_of_sages_room_00ObjectList0x000038 }; // 0x0020

static SCmdActorList chamber_of_sages_room_00Set0000Cmd05 = {  0x01, 0x05, (u32)chamber_of_sages_room_00ActorList0x00004C }; // 0x0028 }; 

static SCmdEndMarker chamber_of_sages_room_00Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 chamber_of_sages_room_00ObjectList0x000038[9] = {
	OBJECT_O_ANIME,
	OBJECT_OE_ANIME,
	OBJECT_IM, // originally OBJECT_OA2 (sheikah)
	OBJECT_OE1, // mido
	OBJECT_OE2, // generic kokiri girl
	OBJECT_OF1D_MAP, // originally OBJECT_OF1 (goron)
	OBJECT_ZL1, // zelda
	OBJECT_HUMAN, // testgirl "aria"
	OBJECT_OA5, // purple dress woman
}; 

ActorEntry chamber_of_sages_room_00ActorList0x00004C[5] = {
	{ ACTOR_DEMO_IM, 97, 0, -168, 0, -5461, 0, 0xFFFF }, // fire (sheikah). originally ACTOR_XC 0xFFFF
	{ ACTOR_EN_ZL1, -196, 0, 2, 0, 16566, 0, 0xFFFF }, // light (zelda)
	{ ACTOR_EN_NPC, 102, 0, 175, 0, -27124, 0, 0x0032 }, // spirit/soul
	{ ACTOR_EN_NPC, -97, 0, -167, 0, 5461, 0, 0x0028 }, // forest/wind
	{ ACTOR_EN_NPC, -97, 0, 171, 0, 27306, 0, 0x0029 }, // shadow/dark
}; 

static u32 pad9C = 0;

MeshHeader0 chamber_of_sages_room_00MeshHeader0x0000A0 = { { 0 }, 0x01, (u32)&chamber_of_sages_room_00MeshDListEntry0x0000AC, (u32)&(chamber_of_sages_room_00MeshDListEntry0x0000AC) + sizeof(chamber_of_sages_room_00MeshDListEntry0x0000AC) }; 

MeshEntry0 chamber_of_sages_room_00MeshDListEntry0x0000AC[1] = {
	{ (u32)chamber_of_sages_room_00Dlist0x00F428, (u32)chamber_of_sages_room_00Dlist0x010A90 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 padB8 = 0;
static u32 padBC = 0;

static Vtx chamber_of_sages_room_00Vtx_0000C0[32] = {
    VTX(140, -284, -242, 2048, 1024, 0, 97, 243, 255),
    VTX(140, -4, -242, 2048, 0, 0, 97, 243, 255),
    VTX(280, -4, 0, 0, 0, 0, 97, 243, 255),
    VTX(280, -284, 0, 0, 1024, 0, 97, 243, 255),
    VTX(-140, -284, -242, 2048, 1024, 0, 97, 243, 255),
    VTX(-140, -4, -242, 2048, 0, 0, 97, 243, 255),
    VTX(140, -4, -242, 0, 0, 0, 97, 243, 255),
    VTX(140, -284, -242, 0, 1024, 0, 97, 243, 255),
    VTX(-280, -284, 0, 2048, 1024, 0, 97, 243, 255),
    VTX(-280, -4, 0, 2048, 0, 0, 97, 243, 255),
    VTX(-140, -4, -242, 0, 0, 0, 97, 243, 255),
    VTX(-140, -284, -242, 0, 1024, 0, 97, 243, 255),
    VTX(-140, -284, 242, 2048, 1024, 0, 97, 243, 255),
    VTX(-140, -4, 242, 2048, 0, 0, 97, 243, 255),
    VTX(-280, -4, 0, 0, 0, 0, 97, 243, 255),
    VTX(-280, -284, 0, 0, 1024, 0, 97, 243, 255),
    VTX(140, -284, 242, 2048, 1024, 0, 97, 243, 255),
    VTX(140, -4, 242, 2048, 0, 0, 97, 243, 255),
    VTX(-140, -4, 242, 0, 0, 0, 97, 243, 255),
    VTX(-140, -284, 242, 0, 1024, 0, 97, 243, 255),
    VTX(280, -284, 0, 2048, 1024, 0, 97, 243, 255),
    VTX(280, -4, 0, 2048, 0, 0, 97, 243, 255),
    VTX(140, -4, 242, 0, 0, 0, 97, 243, 255),
    VTX(140, -284, 242, 0, 1024, 0, 97, 243, 255),
    VTX(-541, -765, -762, 2048, 1024, 0, 97, 243, 255),
    VTX(-541, -5, -762, 2048, 0, 0, 97, 243, 255),
    VTX(-441, -5, -589, 0, 0, 0, 97, 243, 255),
    VTX(-441, -765, -589, 0, 1024, 0, 97, 243, 255),
    VTX(-741, -765, -762, 2048, 1024, 0, 97, 243, 255),
    VTX(-741, -5, -762, 2048, 0, 0, 97, 243, 255),
    VTX(-541, -5, -762, 0, 0, 0, 97, 243, 255),
    VTX(-541, -765, -762, 0, 1024, 0, 97, 243, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_0002C0[32] = {
    VTX(-841, -765, -589, 2048, 1024, 0, 97, 243, 255),
    VTX(-841, -5, -589, 2048, 0, 0, 97, 243, 255),
    VTX(-741, -5, -762, 0, 0, 0, 97, 243, 255),
    VTX(-741, -765, -762, 0, 1024, 0, 97, 243, 255),
    VTX(-741, -765, -416, 2048, 1024, 0, 97, 243, 255),
    VTX(-741, -5, -416, 2048, 0, 0, 97, 243, 255),
    VTX(-841, -5, -589, 0, 0, 0, 97, 243, 255),
    VTX(-841, -765, -589, 0, 1024, 0, 97, 243, 255),
    VTX(-541, -765, -416, 2048, 1024, 0, 97, 243, 255),
    VTX(-541, -5, -416, 2048, 0, 0, 97, 243, 255),
    VTX(-741, -5, -416, 0, 0, 0, 97, 243, 255),
    VTX(-741, -765, -416, 0, 1024, 0, 97, 243, 255),
    VTX(-441, -765, -589, 2048, 1024, 0, 97, 243, 255),
    VTX(-441, -5, -589, 2048, 0, 0, 97, 243, 255),
    VTX(-541, -5, -416, 0, 0, 0, 97, 243, 255),
    VTX(-541, -765, -416, 0, 1024, 0, 97, 243, 255),
    VTX(878, -681, -178, 2048, 1024, 0, 97, 243, 255),
    VTX(878, 184, -178, 2048, 0, 0, 97, 243, 255),
    VTX(978, 184, -5, 0, 0, 0, 97, 243, 255),
    VTX(978, -681, -5, 0, 1024, 0, 97, 243, 255),
    VTX(678, -681, -178, 2048, 1024, 0, 97, 243, 255),
    VTX(678, 184, -178, 2048, 0, 0, 97, 243, 255),
    VTX(878, 184, -178, 0, 0, 0, 97, 243, 255),
    VTX(878, -681, -178, 0, 1024, 0, 97, 243, 255),
    VTX(578, -681, -5, 2048, 1024, 0, 97, 243, 255),
    VTX(578, 184, -5, 2048, 0, 0, 97, 243, 255),
    VTX(678, 184, -178, 0, 0, 0, 97, 243, 255),
    VTX(678, -681, -178, 0, 1024, 0, 97, 243, 255),
    VTX(678, -681, 169, 2048, 1024, 0, 97, 243, 255),
    VTX(678, 184, 169, 2048, 0, 0, 97, 243, 255),
    VTX(578, 184, -5, 0, 0, 0, 97, 243, 255),
    VTX(578, -681, -5, 0, 1024, 0, 97, 243, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_0004C0[32] = {
    VTX(878, -681, 169, 2048, 1024, 0, 97, 243, 255),
    VTX(878, 184, 169, 2048, 0, 0, 97, 243, 255),
    VTX(678, 184, 169, 0, 0, 0, 97, 243, 255),
    VTX(678, -681, 169, 0, 1024, 0, 97, 243, 255),
    VTX(978, -681, -5, 2048, 1024, 0, 97, 243, 255),
    VTX(978, 184, -5, 2048, 0, 0, 97, 243, 255),
    VTX(878, 184, 169, 0, 0, 0, 97, 243, 255),
    VTX(878, -681, 169, 0, 1024, 0, 97, 243, 255),
    VTX(-4, -701, 510, 1024, 1024, 0, 97, 243, 255),
    VTX(-4, 292, 510, 1024, 0, 0, 97, 243, 255),
    VTX(124, 292, 730, 0, 0, 0, 97, 243, 255),
    VTX(124, -701, 730, 0, 1024, 0, 97, 243, 255),
    VTX(-258, -701, 510, 1024, 1024, 0, 97, 243, 255),
    VTX(-258, 292, 510, 1024, 0, 0, 97, 243, 255),
    VTX(-4, 292, 510, 0, 0, 0, 97, 243, 255),
    VTX(-4, -701, 510, 0, 1024, 0, 97, 243, 255),
    VTX(-385, -701, 730, 1024, 1024, 0, 97, 243, 255),
    VTX(-385, 292, 730, 1024, -6, 0, 97, 243, 255),
    VTX(-258, 292, 510, 0, -6, 0, 97, 243, 255),
    VTX(-258, -701, 510, 0, 1024, 0, 97, 243, 255),
    VTX(-258, -701, 950, 1024, 1024, 0, 97, 243, 255),
    VTX(-258, 292, 950, 1024, 0, 0, 97, 243, 255),
    VTX(-385, 292, 730, 0, 0, 0, 97, 243, 255),
    VTX(-385, -701, 730, 0, 1024, 0, 97, 243, 255),
    VTX(-4, -701, 950, 1024, 1024, 0, 97, 243, 255),
    VTX(-4, 292, 950, 1024, 0, 0, 97, 243, 255),
    VTX(-258, 292, 950, 0, 0, 0, 97, 243, 255),
    VTX(-258, -701, 950, 0, 1024, 0, 97, 243, 255),
    VTX(124, -701, 730, 1024, 1024, 0, 97, 243, 255),
    VTX(124, 292, 730, 1024, 0, 0, 97, 243, 255),
    VTX(-4, 292, 950, -43, 0, 0, 97, 243, 255),
    VTX(-4, -701, 950, -43, 1024, 0, 97, 243, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_0006C0[32] = {
    VTX(968, -845, 324, 2048, 1024, 0, 97, 243, 255),
    VTX(968, -5, 324, 2048, 0, 0, 97, 243, 255),
    VTX(1075, -5, 510, 0, 0, 0, 97, 243, 255),
    VTX(1075, -845, 510, 0, 1024, 0, 97, 243, 255),
    VTX(753, -845, 324, 2048, 1024, 0, 97, 243, 255),
    VTX(753, -5, 324, 2048, 0, 0, 97, 243, 255),
    VTX(968, -5, 324, 0, 0, 0, 97, 243, 255),
    VTX(968, -845, 324, 0, 1024, 0, 97, 243, 255),
    VTX(646, -845, 510, 2048, 1024, 0, 97, 243, 255),
    VTX(646, -5, 510, 2048, 0, 0, 97, 243, 255),
    VTX(753, -5, 324, 0, 0, 0, 97, 243, 255),
    VTX(753, -845, 324, 0, 1024, 0, 97, 243, 255),
    VTX(753, -845, 696, 2048, 1024, 0, 97, 243, 255),
    VTX(753, -5, 696, 2048, 0, 0, 97, 243, 255),
    VTX(646, -5, 510, 0, 0, 0, 97, 243, 255),
    VTX(646, -845, 510, 0, 1024, 0, 97, 243, 255),
    VTX(968, -845, 696, 2048, 1024, 0, 97, 243, 255),
    VTX(968, -5, 696, 2048, 0, 0, 97, 243, 255),
    VTX(753, -5, 696, 0, 0, 0, 97, 243, 255),
    VTX(753, -845, 696, 0, 1024, 0, 97, 243, 255),
    VTX(1075, -845, 510, 2048, 1024, 0, 97, 243, 255),
    VTX(1075, -5, 510, 2048, 0, 0, 97, 243, 255),
    VTX(968, -5, 696, 0, 0, 0, 97, 243, 255),
    VTX(968, -845, 696, 0, 1024, 0, 97, 243, 255),
    VTX(980, -565, -1073, 2048, 1024, 0, 97, 243, 255),
    VTX(980, -5, -1073, 2048, 0, 0, 97, 243, 255),
    VTX(1080, -5, -900, 0, 0, 0, 97, 243, 255),
    VTX(1080, -565, -900, 0, 1024, 0, 97, 243, 255),
    VTX(780, -565, -1073, 2048, 1024, 0, 97, 243, 255),
    VTX(780, -5, -1073, 2048, 0, 0, 97, 243, 255),
    VTX(980, -5, -1073, 0, 0, 0, 97, 243, 255),
    VTX(980, -565, -1073, 0, 1024, 0, 97, 243, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_0008C0[32] = {
    VTX(680, -565, -900, 1024, 1024, 0, 97, 243, 255),
    VTX(680, -5, -900, 1024, 0, 0, 97, 243, 255),
    VTX(780, -5, -1073, 0, 0, 0, 97, 243, 255),
    VTX(780, -565, -1073, 0, 1024, 0, 97, 243, 255),
    VTX(780, -565, -727, 1024, 1024, 0, 97, 243, 255),
    VTX(780, -5, -727, 1024, 0, 0, 97, 243, 255),
    VTX(680, -5, -900, 0, 0, 0, 97, 243, 255),
    VTX(680, -565, -900, 0, 1024, 0, 97, 243, 255),
    VTX(980, -565, -727, 1024, 1024, 0, 97, 243, 255),
    VTX(980, -5, -727, 1024, 0, 0, 97, 243, 255),
    VTX(780, -5, -727, 0, 0, 0, 97, 243, 255),
    VTX(780, -565, -727, 0, 1024, 0, 97, 243, 255),
    VTX(1080, -565, -900, 2048, 1024, 0, 97, 243, 255),
    VTX(1080, -5, -900, 2048, 0, 0, 97, 243, 255),
    VTX(980, -5, -727, 0, 0, 0, 97, 243, 255),
    VTX(980, -565, -727, 0, 1024, 0, 97, 243, 255),
    VTX(81, -322, -1313, 2048, 1024, 0, 97, 243, 255),
    VTX(81, 96, -1313, 2048, 0, 0, 97, 243, 255),
    VTX(163, 96, -1172, 0, 0, 0, 97, 243, 255),
    VTX(163, -322, -1172, 0, 1024, 0, 97, 243, 255),
    VTX(-82, -322, -1313, 2048, 1024, 0, 97, 243, 255),
    VTX(-82, 96, -1313, 2048, 0, 0, 97, 243, 255),
    VTX(81, 96, -1313, 0, 0, 0, 97, 243, 255),
    VTX(81, -322, -1313, 0, 1024, 0, 97, 243, 255),
    VTX(-164, -322, -1172, 1024, 1024, 0, 97, 243, 255),
    VTX(-164, 96, -1172, 1024, 0, 0, 97, 243, 255),
    VTX(-82, 96, -1313, -10, 0, 0, 97, 243, 255),
    VTX(-82, -322, -1313, -10, 1024, 0, 97, 243, 255),
    VTX(-82, -322, -1030, 1024, 1024, 0, 97, 243, 255),
    VTX(-82, 96, -1030, 1024, -5, 0, 97, 243, 255),
    VTX(-164, 96, -1172, 0, -5, 0, 97, 243, 255),
    VTX(-164, -322, -1172, 0, 1024, 0, 97, 243, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_000AC0[32] = {
    VTX(81, -322, -1030, 1024, 1024, 0, 97, 243, 255),
    VTX(81, 96, -1030, 1024, -2, 0, 97, 243, 255),
    VTX(-82, 96, -1030, 0, -2, 0, 97, 243, 255),
    VTX(-82, -322, -1030, 0, 1024, 0, 97, 243, 255),
    VTX(163, -322, -1172, 2048, 1024, 0, 97, 243, 255),
    VTX(163, 96, -1172, 2048, 0, 0, 97, 243, 255),
    VTX(81, 96, -1030, 0, 0, 0, 97, 243, 255),
    VTX(81, -322, -1030, 0, 1024, 0, 97, 243, 255),
    VTX(-604, -919, -2, 2048, 1024, 0, 97, 243, 255),
    VTX(-604, -145, -2, 2048, 0, 0, 97, 243, 255),
    VTX(-512, -145, 159, 0, 0, 0, 97, 243, 255),
    VTX(-512, -919, 159, 0, 1024, 0, 97, 243, 255),
    VTX(-790, -919, -2, 2048, 1024, 0, 97, 243, 255),
    VTX(-790, -145, -2, 2048, 0, 0, 97, 243, 255),
    VTX(-604, -145, -2, 0, 0, 0, 97, 243, 255),
    VTX(-604, -919, -2, 0, 1024, 0, 97, 243, 255),
    VTX(-883, -919, 159, 2048, 1024, 0, 97, 243, 255),
    VTX(-883, -145, 159, 2048, 0, 0, 97, 243, 255),
    VTX(-790, -145, -2, 0, 0, 0, 97, 243, 255),
    VTX(-790, -919, -2, 0, 1024, 0, 97, 243, 255),
    VTX(-790, -919, 320, 2048, 1024, 0, 97, 243, 255),
    VTX(-790, -145, 320, 2048, 0, 0, 97, 243, 255),
    VTX(-883, -145, 159, 0, 0, 0, 97, 243, 255),
    VTX(-883, -919, 159, 0, 1024, 0, 97, 243, 255),
    VTX(-604, -919, 320, 2048, 1024, 0, 97, 243, 255),
    VTX(-604, -145, 320, 2048, 0, 0, 97, 243, 255),
    VTX(-790, -145, 320, 0, 0, 0, 97, 243, 255),
    VTX(-790, -919, 320, 0, 1024, 0, 97, 243, 255),
    VTX(-512, -919, 159, 2048, 1024, 0, 97, 243, 255),
    VTX(-512, -145, 159, 2048, 0, 0, 97, 243, 255),
    VTX(-604, -145, 320, 0, 0, 0, 97, 243, 255),
    VTX(-604, -919, 320, 0, 1024, 0, 97, 243, 255),
}; 

Gfx chamber_of_sages_room_00Dlist0x000CC0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_000EE0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&chamber_of_sages_room_00Vtx_0000C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_0002C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_0004C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_0006C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_0008C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_000AC0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
}; 

u64 chamber_of_sages_room_00Tex_000EE0[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_000EE0.ia16.inc.c"
};

static Vtx chamber_of_sages_room_00Vtx_0016E0[4] = {
    VTX(1253, -2021, 2188, -504, 2053, 0, 97, 243, 255),
    VTX(1253, 1800, 2188, -505, -2042, 0, 97, 243, 255),
    VTX(2467, 1800, 86, 1529, -2040, 0, 97, 243, 255),
    VTX(2467, -2021, 86, 1530, 2055, 0, 97, 243, 255),
}; 

Gfx chamber_of_sages_room_00Dlist0x001720[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_sceneTex_0005B0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_0016E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx chamber_of_sages_room_00Vtx_001778[42] = {
    VTX(280, -4, 0, 2048, 1024, 255, 255, 255, 255),
    VTX(0, -4, 0, 1024, -896, 255, 255, 255, 255),
    VTX(140, -4, 242, 0, 1024, 255, 255, 255, 255),
    VTX(0, -4, 0, 1024, -1045, 255, 255, 255, 255),
    VTX(-140, -4, 242, 0, 1024, 255, 255, 255, 255),
    VTX(140, -4, 242, 2048, 1024, 255, 255, 255, 255),
    VTX(0, -4, 0, 1024, -750, 255, 255, 255, 255),
    VTX(-280, -4, 0, 0, 1024, 255, 255, 255, 255),
    VTX(-140, -4, 242, 2048, 1024, 255, 255, 255, 255),
    VTX(280, -4, 0, 0, 1024, 255, 255, 255, 255),
    VTX(140, -4, -242, 2048, 1024, 255, 255, 255, 255),
    VTX(0, -4, 0, 1024, -1038, 255, 255, 255, 255),
    VTX(140, -4, -242, 0, 1024, 255, 255, 255, 255),
    VTX(-140, -4, -242, 2048, 1024, 255, 255, 255, 255),
    VTX(0, -4, 0, 1024, -1127, 255, 255, 255, 255),
    VTX(-140, -4, -242, 0, 1024, 255, 255, 255, 255),
    VTX(-280, -4, 0, 2048, 1024, 255, 255, 255, 255),
    VTX(0, -4, 0, 1024, -1509, 255, 255, 255, 255),
    VTX(-441, -5, -589, 0, -2166, 255, 255, 255, 255),
    VTX(-541, -5, -762, -921, -571, 255, 255, 255, 255),
    VTX(-741, -5, -762, 0, 1024, 255, 255, 255, 255),
    VTX(-841, -5, -589, 1842, 1024, 255, 255, 255, 255),
    VTX(-741, -5, -416, 2762, -571, 255, 255, 255, 255),
    VTX(-541, -5, -416, 1842, -2166, 255, 255, 255, 255),
    VTX(578, 184, -5, 0, 1024, 255, 255, 255, 255),
    VTX(678, 184, 169, 1513, 1024, 255, 255, 255, 255),
    VTX(878, 184, 169, 2269, -286, 255, 255, 255, 255),
    VTX(978, 184, -5, 1513, -1596, 255, 255, 255, 255),
    VTX(878, 184, -178, 0, -1596, 255, 255, 255, 255),
    VTX(678, 184, -178, -756, -286, 255, 255, 255, 255),
    VTX(124, 292, 730, 222, 2412, 255, 255, 255, 255),
    VTX(-4, 292, 510, 1246, 2412, 255, 255, 255, 255),
    VTX(-258, 292, 510, 1758, 1526, 255, 255, 255, 255),
    VTX(-385, 292, 730, 1246, 639, 255, 255, 255, 255),
    VTX(-258, 292, 950, 222, 639, 255, 255, 255, 255),
    VTX(-4, 292, 950, -290, 1526, 255, 255, 255, 255),
    VTX(1075, -5, 510, -57, -1610, 255, 255, 255, 255),
    VTX(968, -5, 324, -817, -293, 255, 255, 255, 255),
    VTX(753, -5, 324, -57, 1024, 255, 255, 255, 255),
    VTX(646, -5, 510, 1464, 1024, 255, 255, 255, 255),
    VTX(753, -5, 696, 2224, -293, 255, 255, 255, 255),
    VTX(968, -5, 696, 1464, -1610, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_001A18[18] = {
    VTX(1080, -5, -900, -1280, 1467, 255, 255, 255, 255),
    VTX(980, -5, -1073, -256, 1467, 255, 255, 255, 255),
    VTX(780, -5, -1073, 256, 581, 255, 255, 255, 255),
    VTX(680, -5, -900, -256, -306, 255, 255, 255, 255),
    VTX(780, -5, -727, -1280, -306, 255, 255, 255, 255),
    VTX(980, -5, -727, -1792, 581, 255, 255, 255, 255),
    VTX(-82, 96, -1030, -1346, 2348, 255, 255, 255, 255),
    VTX(81, 96, -1030, -322, 2348, 255, 255, 255, 255),
    VTX(163, 96, -1172, 190, 1461, 255, 255, 255, 255),
    VTX(81, 96, -1313, -322, 574, 255, 255, 255, 255),
    VTX(-82, 96, -1313, -1346, 574, 255, 255, 255, 255),
    VTX(-164, 96, -1172, -1858, 1461, 255, 255, 255, 255),
    VTX(-512, -145, 159, 1024, 1024, 255, 255, 255, 255),
    VTX(-604, -145, -2, 1536, 137, 255, 255, 255, 255),
    VTX(-790, -145, -2, 1024, -750, 255, 255, 255, 255),
    VTX(-883, -145, 159, 0, -750, 255, 255, 255, 255),
    VTX(-790, -145, 320, -512, 137, 255, 255, 255, 255),
    VTX(-604, -145, 320, 0, 1024, 255, 255, 255, 255),
}; 

Gfx chamber_of_sages_room_00Dlist0x001B38[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_001C70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&chamber_of_sages_room_00Vtx_001778[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 27, 28, 0, 24, 28, 29, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_001778[30], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_002470, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_001A18[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 15, 16, 0, 12, 16, 17, 0),
    gsSPEndDisplayList(),
}; 

u64 chamber_of_sages_room_00Tex_001C70[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_001C70.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_002470[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_002470.rgb5a1.inc.c"
};

static Vtx chamber_of_sages_room_00Vtx_002C70[4] = {
    VTX(-62, 0, 191, 0, 0, 255, 255, 255, 255),
    VTX(-41, 0, 154, 0, 1024, 255, 255, 255, 255),
    VTX(-113, 0, 112, 2048, 1024, 255, 255, 255, 255),
    VTX(-134, 0, 149, 2048, 0, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002CB0[4] = {
    VTX(-83, 0, 227, 0, 0, 255, 255, 255, 255),
    VTX(-62, 0, 191, 0, 1024, 255, 255, 255, 255),
    VTX(-134, 0, 149, 2048, 1024, 255, 255, 255, 255),
    VTX(-155, 0, 185, 2048, 0, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002CF0[4] = {
    VTX(134, 0, -149, 2048, 1024, 255, 255, 255, 255),
    VTX(155, 0, -185, 2048, 0, 255, 255, 255, 255),
    VTX(83, 0, -227, 0, 0, 255, 255, 255, 255),
    VTX(62, 0, -191, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002D30[4] = {
    VTX(113, 0, -112, 2048, 1024, 255, 255, 255, 255),
    VTX(134, 0, -149, 2034, 0, 255, 255, 255, 255),
    VTX(62, 0, -191, -13, 28, 255, 255, 255, 255),
    VTX(41, 0, -154, 0, 1052, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002D70[4] = {
    VTX(-41, 0, -152, 2048, 1024, 255, 255, 255, 255),
    VTX(-62, 0, -189, 2048, 0, 255, 255, 255, 255),
    VTX(-135, 0, -147, 0, 0, 255, 255, 255, 255),
    VTX(-114, 0, -110, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002DB0[4] = {
    VTX(-62, 0, -189, 2048, 1024, 255, 255, 255, 255),
    VTX(-83, 0, -225, 2048, 0, 255, 255, 255, 255),
    VTX(-156, 0, -183, 0, 0, 255, 255, 255, 255),
    VTX(-135, 0, -147, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002DF0[4] = {
    VTX(-238, 0, 42, 0, 0, 255, 255, 255, 255),
    VTX(-196, 0, 42, 0, 1024, 255, 255, 255, 255),
    VTX(-196, 0, -42, 2048, 1024, 255, 255, 255, 255),
    VTX(-238, 0, -42, 2048, 0, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002E30[4] = {
    VTX(-196, 0, 42, 0, 0, 255, 255, 255, 255),
    VTX(-154, 0, 42, 0, 1024, 255, 255, 255, 255),
    VTX(-154, 0, -42, 2048, 1024, 255, 255, 255, 255),
    VTX(-196, 0, -42, 2048, 0, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002E70[4] = {
    VTX(76, 0, 135, 0, 2048, 255, 255, 255, 255),
    VTX(40, 0, 156, 1024, 2048, 255, 255, 255, 255),
    VTX(82, 0, 229, 1024, 0, 255, 255, 255, 255),
    VTX(118, 0, 208, 0, 0, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002EB0[4] = {
    VTX(155, 0, 187, 0, 0, 255, 255, 255, 255),
    VTX(113, 0, 114, 0, 2048, 255, 255, 255, 255),
    VTX(76, 0, 135, 1024, 2048, 255, 255, 255, 255),
    VTX(118, 0, 208, 1024, 0, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002EF0[4] = {
    VTX(154, 0, 42, 2048, 1024, 255, 255, 255, 255),
    VTX(196, 0, 42, 2048, 0, 255, 255, 255, 255),
    VTX(196, 0, -42, 0, 0, 255, 255, 255, 255),
    VTX(154, 0, -42, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002F30[4] = {
    VTX(196, 0, 42, 2048, 1024, 255, 255, 255, 255),
    VTX(238, 0, 42, 2048, 0, 255, 255, 255, 255),
    VTX(238, 0, -42, 0, 0, 255, 255, 255, 255),
    VTX(196, 0, -42, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_002F70[10] = {
    VTX(-60, 0, -104, 0, 0, 243, 243, 0, 255),
    VTX(-60, 0, 0, 0, 0, 243, 243, 0, 255),
    VTX(30, 0, -52, 0, 0, 243, 243, 0, 255),
    VTX(-60, 0, 0, 0, 0, 243, 243, 0, 255),
    VTX(-60, 0, 104, 0, 0, 243, 243, 0, 255),
    VTX(30, 0, 52, 0, 0, 243, 243, 0, 255),
    VTX(120, 0, 0, 0, 0, 243, 243, 0, 255),
    VTX(30, 0, -52, 0, 0, 255, 255, 255, 255),
    VTX(-60, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(30, 0, 52, 0, 0, 255, 255, 255, 255),
}; 

Gfx chamber_of_sages_room_00Dlist0x003010[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_003428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002C70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_004428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002CB0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_005428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002CF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_006428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002D30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_007428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 2, 2, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002D70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_008428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002DB0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_009428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002DF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_00A428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002E30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_00B428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 3, 3, 5, 6, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002E70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_00C428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 3, 3, 5, 6, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002EB0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_00D428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002EF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_00E428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002F30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&chamber_of_sages_room_00Vtx_002F70[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 5, 6, 0, 7, 8, 9, 0),
    gsSPEndDisplayList(),
}; 

u64 chamber_of_sages_room_00Tex_003428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_003428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_004428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_004428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_005428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_005428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_006428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_006428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_007428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_007428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_008428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_008428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_009428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_009428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_00A428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_00A428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_00B428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_00B428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_00C428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_00C428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_00D428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_00D428.rgb5a1.inc.c"
};

u64 chamber_of_sages_room_00Tex_00E428[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_00E428.rgb5a1.inc.c"
};

Gfx chamber_of_sages_room_00Dlist0x00F428[] = {
    gsSPDisplayList(chamber_of_sages_room_00Dlist0x000CC0),
    gsSPDisplayList(chamber_of_sages_room_00Dlist0x001720),
    gsSPDisplayList(chamber_of_sages_room_00Dlist0x001B38),
    gsSPDisplayList(chamber_of_sages_room_00Dlist0x003010),
    gsSPEndDisplayList(),
}; 

static Vtx chamber_of_sages_room_00Vtx_00F450[32] = {
    VTX(-669, -627, -536, 1024, 1024, 255, 255, 255, 255),
    VTX(-669, 1435, -536, 1023, -1025, 255, 255, 255, 255),
    VTX(-702, 1435, -597, -1, -1025, 255, 255, 255, 255),
    VTX(-702, -627, -597, 0, 1024, 255, 255, 255, 255),
    VTX(-600, -627, -534, 1024, 1024, 255, 255, 255, 255),
    VTX(-600, 1435, -534, 1030, -1035, 255, 255, 255, 255),
    VTX(-669, 1435, -536, 6, -1035, 255, 255, 255, 255),
    VTX(-669, -627, -536, 0, 1024, 255, 255, 255, 255),
    VTX(-564, -627, -592, 1024, 1024, 255, 255, 255, 255),
    VTX(-563, 1435, -593, 1031, -1029, 255, 255, 255, 255),
    VTX(-600, 1435, -534, 7, -1029, 255, 255, 255, 255),
    VTX(-600, -627, -534, 0, 1024, 255, 255, 255, 255),
    VTX(-597, -627, -653, 1024, 1024, 255, 255, 255, 255),
    VTX(-596, 1435, -654, 1025, -1028, 255, 255, 255, 255),
    VTX(-563, 1435, -593, 1, -1028, 255, 255, 255, 255),
    VTX(-564, -627, -592, 0, 1024, 255, 255, 255, 255),
    VTX(-666, -627, -655, 1024, 1024, 255, 255, 255, 255),
    VTX(-665, 1435, -656, 1018, -1031, 255, 255, 255, 255),
    VTX(-596, 1435, -654, -6, -1031, 255, 255, 255, 255),
    VTX(-597, -627, -653, 0, 1024, 255, 255, 255, 255),
    VTX(-702, -627, -597, 1024, 1024, 255, 255, 255, 255),
    VTX(-702, 1435, -597, 1017, -1012, 255, 255, 255, 255),
    VTX(-665, 1435, -656, -7, -1012, 255, 255, 255, 255),
    VTX(-666, -627, -655, 0, 1024, 255, 255, 255, 255),
    VTX(-733, -627, 227, 1024, 1024, 255, 255, 255, 255),
    VTX(-733, 1435, 226, 1023, -1025, 255, 255, 255, 255),
    VTX(-766, 1435, 165, -1, -1025, 255, 255, 255, 255),
    VTX(-766, -627, 166, 0, 1024, 255, 255, 255, 255),
    VTX(-664, -627, 229, 1024, 1024, 255, 255, 255, 255),
    VTX(-664, 1435, 229, 1030, -1035, 255, 255, 255, 255),
    VTX(-733, 1435, 226, 6, -1035, 255, 255, 255, 255),
    VTX(-733, -627, 227, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_00F650[32] = {
    VTX(-628, -627, 170, 1024, 1024, 255, 255, 255, 255),
    VTX(-627, 1435, 170, 1031, -1029, 255, 255, 255, 255),
    VTX(-664, 1435, 229, 7, -1029, 255, 255, 255, 255),
    VTX(-664, -627, 229, 0, 1024, 255, 255, 255, 255),
    VTX(-660, -627, 109, 1024, 1024, 255, 255, 255, 255),
    VTX(-660, 1435, 109, 1025, -1028, 255, 255, 255, 255),
    VTX(-627, 1435, 170, 1, -1028, 255, 255, 255, 255),
    VTX(-628, -627, 170, 0, 1024, 255, 255, 255, 255),
    VTX(-730, -627, 107, 1024, 1024, 255, 255, 255, 255),
    VTX(-729, 1435, 107, 1018, -1031, 255, 255, 255, 255),
    VTX(-660, 1435, 109, -6, -1031, 255, 255, 255, 255),
    VTX(-660, -627, 109, 0, 1024, 255, 255, 255, 255),
    VTX(-766, -627, 166, 1024, 1024, 255, 255, 255, 255),
    VTX(-766, 1435, 165, 1017, -1012, 255, 255, 255, 255),
    VTX(-729, 1435, 107, -7, -1012, 255, 255, 255, 255),
    VTX(-730, -627, 107, 0, 1024, 255, 255, 255, 255),
    VTX(-159, -627, 782, 1024, 1024, 255, 255, 255, 255),
    VTX(-158, 1435, 782, 1023, -1025, 255, 255, 255, 255),
    VTX(-191, 1435, 721, -1, -1025, 255, 255, 255, 255),
    VTX(-191, -627, 721, 0, 1024, 255, 255, 255, 255),
    VTX(-90, -627, 785, 1024, 1024, 255, 255, 255, 255),
    VTX(-89, 1435, 784, 1030, -1035, 255, 255, 255, 255),
    VTX(-158, 1435, 782, 6, -1035, 255, 255, 255, 255),
    VTX(-159, -627, 782, 0, 1024, 255, 255, 255, 255),
    VTX(-53, -627, 726, 1024, 1024, 255, 255, 255, 255),
    VTX(-53, 1435, 725, 1031, -1029, 255, 255, 255, 255),
    VTX(-89, 1435, 784, 7, -1029, 255, 255, 255, 255),
    VTX(-90, -627, 785, 0, 1024, 255, 255, 255, 255),
    VTX(-86, -627, 665, 1024, 1024, 255, 255, 255, 255),
    VTX(-85, 1435, 665, 1025, -1028, 255, 255, 255, 255),
    VTX(-53, 1435, 725, 1, -1028, 255, 255, 255, 255),
    VTX(-53, -627, 726, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_00F850[32] = {
    VTX(-155, -627, 663, 1024, 1024, 255, 255, 255, 255),
    VTX(-155, 1435, 662, 1018, -1031, 255, 255, 255, 255),
    VTX(-85, 1435, 665, -6, -1031, 255, 255, 255, 255),
    VTX(-86, -627, 665, 0, 1024, 255, 255, 255, 255),
    VTX(-191, -627, 721, 1024, 1024, 255, 255, 255, 255),
    VTX(-191, 1435, 721, 1017, -1012, 255, 255, 255, 255),
    VTX(-155, 1435, 662, -7, -1012, 255, 255, 255, 255),
    VTX(-155, -627, 663, 0, 1024, 255, 255, 255, 255),
    VTX(821, -627, 576, 1024, 1024, 255, 255, 255, 255),
    VTX(822, 1435, 576, 1023, -1025, 255, 255, 255, 255),
    VTX(789, 1435, 515, -1, -1025, 255, 255, 255, 255),
    VTX(789, -627, 515, 0, 1024, 255, 255, 255, 255),
    VTX(891, -627, 578, 1024, 1024, 255, 255, 255, 255),
    VTX(891, 1435, 578, 1030, -1035, 255, 255, 255, 255),
    VTX(822, 1435, 576, 6, -1035, 255, 255, 255, 255),
    VTX(821, -627, 576, 0, 1024, 255, 255, 255, 255),
    VTX(927, -627, 519, 1024, 1024, 255, 255, 255, 255),
    VTX(927, 1435, 519, 1031, -1029, 255, 255, 255, 255),
    VTX(891, 1435, 578, 7, -1029, 255, 255, 255, 255),
    VTX(891, -627, 578, 0, 1024, 255, 255, 255, 255),
    VTX(894, -627, 458, 1024, 1024, 255, 255, 255, 255),
    VTX(895, 1435, 458, 1025, -1028, 255, 255, 255, 255),
    VTX(927, 1435, 519, 1, -1028, 255, 255, 255, 255),
    VTX(927, -627, 519, 0, 1024, 255, 255, 255, 255),
    VTX(825, -627, 456, 1024, 1024, 255, 255, 255, 255),
    VTX(826, 1435, 456, 1018, -1031, 255, 255, 255, 255),
    VTX(895, 1435, 458, -6, -1031, 255, 255, 255, 255),
    VTX(894, -627, 458, 0, 1024, 255, 255, 255, 255),
    VTX(789, -627, 515, 1024, 1024, 255, 255, 255, 255),
    VTX(789, 1435, 515, 1017, -1012, 255, 255, 255, 255),
    VTX(826, 1435, 456, -7, -1012, 255, 255, 255, 255),
    VTX(825, -627, 456, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_00FA50[32] = {
    VTX(750, -627, 54, 1024, 1024, 255, 255, 255, 255),
    VTX(750, 1435, 54, 1023, -1025, 255, 255, 255, 255),
    VTX(718, 1435, -7, -1, -1025, 255, 255, 255, 255),
    VTX(717, -627, -7, 0, 1024, 255, 255, 255, 255),
    VTX(819, -627, 56, 1024, 1024, 255, 255, 255, 255),
    VTX(820, 1435, 56, 1030, -1035, 255, 255, 255, 255),
    VTX(750, 1435, 54, 6, -1035, 255, 255, 255, 255),
    VTX(750, -627, 54, 0, 1024, 255, 255, 255, 255),
    VTX(856, -627, -3, 1024, 1024, 255, 255, 255, 255),
    VTX(856, 1435, -3, 1031, -1029, 255, 255, 255, 255),
    VTX(820, 1435, 56, 7, -1029, 255, 255, 255, 255),
    VTX(819, -627, 56, 0, 1024, 255, 255, 255, 255),
    VTX(823, -627, -64, 1024, 1024, 255, 255, 255, 255),
    VTX(823, 1435, -64, 1025, -1028, 255, 255, 255, 255),
    VTX(856, 1435, -3, 1, -1028, 255, 255, 255, 255),
    VTX(856, -627, -3, 0, 1024, 255, 255, 255, 255),
    VTX(754, -627, -66, 1024, 1024, 255, 255, 255, 255),
    VTX(754, 1435, -66, 1018, -1031, 255, 255, 255, 255),
    VTX(823, 1435, -64, -6, -1031, 255, 255, 255, 255),
    VTX(823, -627, -64, 0, 1024, 255, 255, 255, 255),
    VTX(717, -627, -7, 1024, 1024, 255, 255, 255, 255),
    VTX(718, 1435, -7, 1017, -1012, 255, 255, 255, 255),
    VTX(754, 1435, -66, -7, -1012, 255, 255, 255, 255),
    VTX(754, -627, -66, 0, 1024, 255, 255, 255, 255),
    VTX(-42, -627, -1121, 1024, 1024, 255, 255, 255, 255),
    VTX(-42, 1435, -1122, 1023, -1025, 255, 255, 255, 255),
    VTX(-75, 1435, -1183, -1, -1025, 255, 255, 255, 255),
    VTX(-75, -627, -1182, 0, 1024, 255, 255, 255, 255),
    VTX(27, -627, -1119, 1024, 1024, 255, 255, 255, 255),
    VTX(27, 1435, -1120, 1030, -1035, 255, 255, 255, 255),
    VTX(-42, 1435, -1122, 6, -1035, 255, 255, 255, 255),
    VTX(-42, -627, -1121, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_00FC50[32] = {
    VTX(63, -627, -1178, 1024, 1024, 255, 255, 255, 255),
    VTX(64, 1435, -1178, 1031, -1029, 255, 255, 255, 255),
    VTX(27, 1435, -1120, 7, -1029, 255, 255, 255, 255),
    VTX(27, -627, -1119, 0, 1024, 255, 255, 255, 255),
    VTX(31, -627, -1239, 1024, 1024, 255, 255, 255, 255),
    VTX(31, 1435, -1239, 1025, -1028, 255, 255, 255, 255),
    VTX(64, 1435, -1178, 1, -1028, 255, 255, 255, 255),
    VTX(63, -627, -1178, 0, 1024, 255, 255, 255, 255),
    VTX(-39, -627, -1241, 1024, 1024, 255, 255, 255, 255),
    VTX(-38, 1435, -1242, 1018, -1031, 255, 255, 255, 255),
    VTX(31, 1435, -1239, -6, -1031, 255, 255, 255, 255),
    VTX(31, -627, -1239, 0, 1024, 255, 255, 255, 255),
    VTX(-75, -627, -1182, 1024, 1024, 255, 255, 255, 255),
    VTX(-75, 1435, -1183, 1017, -1012, 255, 255, 255, 255),
    VTX(-38, 1435, -1242, -7, -1012, 255, 255, 255, 255),
    VTX(-39, -627, -1241, 0, 1024, 255, 255, 255, 255),
    VTX(833, -627, -814, 1024, 1024, 255, 255, 255, 255),
    VTX(834, 1435, -814, 1023, -1025, 255, 255, 255, 255),
    VTX(794, 1435, -889, -1, -1025, 255, 255, 255, 255),
    VTX(793, -627, -889, 0, 1024, 255, 255, 255, 255),
    VTX(918, -627, -811, 1024, 1024, 255, 255, 255, 255),
    VTX(918, 1435, -812, 1030, -1035, 255, 255, 255, 255),
    VTX(834, 1435, -814, 6, -1035, 255, 255, 255, 255),
    VTX(833, -627, -814, 0, 1024, 255, 255, 255, 255),
    VTX(963, -627, -883, 1024, 1024, 255, 255, 255, 255),
    VTX(963, 1435, -884, 1031, -1029, 255, 255, 255, 255),
    VTX(918, 1435, -812, 7, -1029, 255, 255, 255, 255),
    VTX(918, -627, -811, 0, 1024, 255, 255, 255, 255),
    VTX(923, -627, -958, 1024, 1024, 255, 255, 255, 255),
    VTX(923, 1435, -958, 1025, -1028, 255, 255, 255, 255),
    VTX(963, 1435, -884, 1, -1028, 255, 255, 255, 255),
    VTX(963, -627, -883, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx chamber_of_sages_room_00Vtx_00FE50[8] = {
    VTX(838, -627, -961, 1024, 1024, 255, 255, 255, 255),
    VTX(838, 1435, -961, 1018, -1031, 255, 255, 255, 255),
    VTX(923, 1435, -958, -6, -1031, 255, 255, 255, 255),
    VTX(923, -627, -958, 0, 1024, 255, 255, 255, 255),
    VTX(793, -627, -889, 1024, 1024, 255, 255, 255, 255),
    VTX(794, 1435, -889, 1017, -1012, 255, 255, 255, 255),
    VTX(838, 1435, -961, -7, -1012, 255, 255, 255, 255),
    VTX(838, -627, -961, 0, 1024, 255, 255, 255, 255),
}; 

Gfx chamber_of_sages_room_00Dlist0x00FED0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(chamber_of_sages_room_00Tex_0100C8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 0, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 153),
    gsSPVertex(&chamber_of_sages_room_00Vtx_00F450[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_00F650[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_00F850[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_00FA50[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_00FC50[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&chamber_of_sages_room_00Vtx_00FE50[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 chamber_of_sages_room_00Tex_0100C8[] = {
#include "assets/scenes/misc/chamber_of_sages//chamber_of_sages_room_00Tex_0100C8.ia16.inc.c"
};

static Vtx chamber_of_sages_room_00Vtx_0108C8[20] = {
    VTX(2467, -2021, 86, -474, 2033, 0, 97, 243, 255),
    VTX(2467, 1800, 86, -474, -2064, 0, 97, 243, 255),
    VTX(1253, 1800, -2015, 1573, -2064, 0, 97, 243, 255),
    VTX(1253, -2021, -2015, 1573, 2033, 0, 97, 243, 255),
    VTX(1253, -2021, -2015, -520, 2035, 0, 97, 243, 255),
    VTX(1253, 1800, -2015, -522, -2074, 0, 97, 243, 255),
    VTX(-1173, 1800, -2015, 1520, -2068, 0, 97, 243, 255),
    VTX(-1173, -2021, -2015, 1522, 2041, 0, 97, 243, 255),
    VTX(-1173, -2021, -2015, -517, 2026, 0, 97, 243, 255),
    VTX(-1173, 1800, -2015, -517, -2086, 0, 97, 243, 255),
    VTX(-2387, 1800, 86, 1540, -2086, 0, 97, 243, 255),
    VTX(-2387, -2021, 86, 1540, 2026, 0, 97, 243, 255),
    VTX(-2387, -2021, 86, -496, 2026, 0, 97, 243, 255),
    VTX(-2387, 1800, 86, -496, -2082, 0, 97, 243, 255),
    VTX(-1173, 1800, 2188, 1569, -2082, 0, 97, 243, 255),
    VTX(-1173, -2021, 2188, 1569, 2026, 0, 97, 243, 255),
    VTX(-1173, -2021, 2188, -486, 2046, 0, 97, 243, 255),
    VTX(-1173, 1800, 2188, -486, -2057, 0, 97, 243, 255),
    VTX(1253, 1800, 2188, 1559, -2057, 0, 97, 243, 255),
    VTX(1253, -2021, 2188, 1559, 2046, 0, 97, 243, 255),
}; 

Gfx chamber_of_sages_room_00Dlist0x010A08[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(chamber_of_sages_sceneTex_0005B0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 229),
    gsSPVertex(&chamber_of_sages_room_00Vtx_0108C8[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
}; 

Gfx chamber_of_sages_room_00Dlist0x010A90[] = {
    gsSPDisplayList(chamber_of_sages_room_00Dlist0x00FED0),
    gsSPDisplayList(chamber_of_sages_room_00Dlist0x010A08),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_010AA8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


