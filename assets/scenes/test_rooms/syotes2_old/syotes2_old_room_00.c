#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "syotes2_old_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "syotes2_old_scene.h"


static SCmdRoomBehavior syotes2_old_room_00Set0000Cmd00;
static SCmdBase syotes2_old_room_00Set0000Cmd01;
static SCmdSkyboxDisables syotes2_old_room_00Set0000Cmd02;
static SCmdMesh syotes2_old_room_00Set0000Cmd03;
static SCmdObjectList syotes2_old_room_00Set0000Cmd04;
static SCmdActorList syotes2_old_room_00Set0000Cmd05;
static SCmdEndMarker syotes2_old_room_00Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx syotes2_old_room_00Vtx_0000E0[4];
static Vtx syotes2_old_room_00Vtx_000120[4];
static Vtx syotes2_old_room_00Vtx_000160[16];
static Vtx syotes2_old_room_00Vtx_000260[12];
static Vtx syotes2_old_room_00Vtx_000320[16];
static Vtx syotes2_old_room_00Vtx_000420[4];
static Vtx syotes2_old_room_00Vtx_000460[19];
static Vtx syotes2_old_room_00Vtx_000590[6];
static Vtx syotes2_old_room_00Vtx_0005F0[18];
static Vtx syotes2_old_room_00Vtx_000710[5];
static Vtx syotes2_old_room_00Vtx_000760[8];
static Vtx syotes2_old_room_00Vtx_0007E0[7];
static Vtx syotes2_old_room_00Vtx_000850[10];
static Vtx syotes2_old_room_00Vtx_0008F0[31];
static Vtx syotes2_old_room_00Vtx_000AE0[1];
static Vtx syotes2_old_room_00Vtx_000AF0[9];
static Vtx syotes2_old_room_00Vtx_000B80[10];
static Vtx syotes2_old_room_00Vtx_000C20[4];
static Vtx syotes2_old_room_00Vtx_000C60[16];
static Vtx syotes2_old_room_00Vtx_000D60[4];
static Vtx syotes2_old_room_00Vtx_000DA0[4];
static Vtx syotes2_old_room_00Vtx_000DE0[4];
static Vtx syotes2_old_room_00Vtx_000E20[4];
static Vtx syotes2_old_room_00Vtx_000E60[4];
static Vtx syotes2_old_room_00Vtx_000EA0[4];
static Vtx syotes2_old_room_00Vtx_000EE0[4];
static Vtx syotes2_old_room_00Vtx_000F20[4];
static Vtx syotes2_old_room_00Vtx_000F60[4];
static Vtx syotes2_old_room_00Vtx_000FA0[4];
static Vtx syotes2_old_room_00Vtx_000FE0[4];
static Vtx syotes2_old_room_00Vtx_001020[4];
static Vtx syotes2_old_room_00Vtx_001060[4];
static Vtx syotes2_old_room_00Vtx_0010A0[11];
static Vtx syotes2_old_room_00Vtx_001150[12];
static Vtx syotes2_old_room_00Vtx_001210[12];
static Vtx syotes2_old_room_00Vtx_0012D0[12];
static Vtx syotes2_old_room_00Vtx_001390[12];
static Vtx syotes2_old_room_00Vtx_001450[12];
static Vtx syotes2_old_room_00Vtx_001510[12];
static Vtx syotes2_old_room_00Vtx_0015D0[12];
static Vtx syotes2_old_room_00Vtx_001690[12];
static Vtx syotes2_old_room_00Vtx_001750[12];
static Vtx syotes2_old_room_00Vtx_001810[12];
static Vtx syotes2_old_room_00Vtx_0018D0[12];
static Vtx syotes2_old_room_00Vtx_001990[12];
static Vtx syotes2_old_room_00Vtx_001A50[8];
static Vtx syotes2_old_room_00Vtx_001AD0[8];
static Vtx syotes2_old_room_00Vtx_006820[18];
static Vtx syotes2_old_room_00Vtx_006940[16];
static Vtx syotes2_old_room_00Vtx_006A40[16];
static Vtx syotes2_old_room_00Vtx_006D40[18];
static Vtx syotes2_old_room_00Vtx_006E60[16];
static Vtx syotes2_old_room_00Vtx_006F60[16];
static Vtx syotes2_old_room_00Vtx_007268[18];
static Vtx syotes2_old_room_00Vtx_007388[16];
static Vtx syotes2_old_room_00Vtx_007488[16];
static Vtx syotes2_old_room_00Vtx_007790[16];
static Vtx syotes2_old_room_00Vtx_007890[2];
static Vtx syotes2_old_room_00Vtx_0078B0[16];
static Vtx syotes2_old_room_00Vtx_0079B0[16];
static Vtx syotes2_old_room_00Vtx_007CC0[18];
static Vtx syotes2_old_room_00Vtx_007DE0[16];
static Vtx syotes2_old_room_00Vtx_007EE0[16];
static Vtx syotes2_old_room_00Vtx_0081E8[16];
static Vtx syotes2_old_room_00Vtx_0082E8[2];
static Vtx syotes2_old_room_00Vtx_008308[16];
static Vtx syotes2_old_room_00Vtx_008408[16];

static SCmdRoomBehavior syotes2_old_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000001 }; // 0x0000

static SCmdBase syotes2_old_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables syotes2_old_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x00 }; // 0x0010

static SCmdMesh syotes2_old_room_00Set0000Cmd03 = {  0x0A, 0, (u32)&syotes2_old_room_00MeshHeader0x0000C0 }; // 0x0018

static SCmdObjectList syotes2_old_room_00Set0000Cmd04 = {  0x0B, 0x04, (u32)syotes2_old_room_00ObjectList0x000038 }; // 0x0020

static SCmdActorList syotes2_old_room_00Set0000Cmd05 = {  0x01, /*0x01,*/ 0x08, (u32)syotes2_old_room_00ActorList0x000040 }; // re-added dummied out actors

static SCmdEndMarker syotes2_old_room_00Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 syotes2_old_room_00ObjectList0x000038[4] = {
	OBJECT_SKELETON,
	OBJECT_B_HEART,
	OBJECT_WARP1,
	OBJECT_TORCH2 // manually replacing OBJECT_UNSET_0,
}; 

ActorEntry syotes2_old_room_00ActorList0x000040[8] = {
	{ ACTOR_DOOR_WARP1, 50, 0, -100, 0, 0, 0, 0x0000 }, //0x000040
	{ ACTOR_ITEM_B_HEART, 50, 0, -200, 0, 0, 0, 0x0000 }, //0x000050
	{ ACTOR_OBJ_SYOKUDAI, 250, 0, -420, 0, 0, 0, 0x0000 }, //0x000060
	{ ACTOR_OBJ_SYOKUDAI, 150, 0, -420, 0, 0, 0, 0x0001 }, //0x000070
	{ ACTOR_OBJ_SYOKUDAI, 50, 0, -420, 0, 0, 0, 0x0002 }, //0x000080
	{ ACTOR_OBJ_SYOKUDAI, -50, 0, -420, 0, 0, 0, 0x0003 }, //0x000090
	{ ACTOR_OBJ_SYOKUDAI, -150, 0, -420, 0, 0, 0, 0x0004 }, //0x0000A0
	{ ACTOR_OBJ_SYOKUDAI, -250, 0, -420, 0, 0, 0, 0x0005 }, //0x0000B0
}; 

MeshHeader0 syotes2_old_room_00MeshHeader0x0000C0 = { { 0 }, 0x01, (u32)&syotes2_old_room_00MeshDListEntry0x0000CC, (u32)&(syotes2_old_room_00MeshDListEntry0x0000CC) + sizeof(syotes2_old_room_00MeshDListEntry0x0000CC) }; 

MeshEntry0 syotes2_old_room_00MeshDListEntry0x0000CC[1] = {
	{ (u32)syotes2_old_room_00Dlist0x008718, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 padD8 = 0;
static u32 padDC = 0;

static Vtx syotes2_old_room_00Vtx_0000E0[4] = {
    VTX(-399, 400, -519, 0, 0, 0, 130, 0, 255),
    VTX(400, 400, -519, 0, 0, 0, 130, 0, 255),
    VTX(400, 400, 440, 0, 0, 0, 130, 0, 255),
    VTX(-399, 400, 440, 0, 0, 0, 130, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000120[4] = {
    VTX(-99, 0, 320, 2048, 0, 0, 0, 130, 255),
    VTX(-99, 20, 320, 2048, 205, 0, 0, 130, 255),
    VTX(100, 20, 320, 0, 205, 0, 0, 130, 255),
    VTX(100, 0, 320, 0, 0, 0, 0, 130, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000160[16] = {
    VTX(-39, 20, -519, 171, 0, 0, 0, 127, 255),
    VTX(-39, 100, -519, 171, 431, 0, 0, 127, 255),
    VTX(-139, 400, -519, -682, 2048, 0, 0, 127, 255),
    VTX(-139, 20, -519, -682, 0, 0, 0, 127, 255),
    VTX(40, 100, -519, 853, 431, 0, 0, 127, 255),
    VTX(140, 400, -519, 1707, 2048, 0, 0, 127, 255),
    VTX(40, 20, -519, 853, 0, 0, 0, 127, 255),
    VTX(140, 20, -519, 1707, 0, 0, 0, 127, 255),
    VTX(-339, 20, 440, 3243, 0, 0, 0, 130, 255),
    VTX(-339, 400, 440, 3243, 2048, 0, 0, 130, 255),
    VTX(340, 400, 440, -2559, 2048, 0, 0, 130, 255),
    VTX(340, 20, 440, -2559, 0, 0, 0, 130, 255),
    VTX(-399, 20, -459, 4267, 0, 127, 0, 0, 255),
    VTX(-399, 400, -459, 4267, 2048, 127, 0, 0, 255),
    VTX(-399, 400, 380, -2900, 2048, 127, 0, 0, 255),
    VTX(-399, 20, 380, -2900, 0, 127, 0, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000260[12] = {
    VTX(-219, 20, -519, -1364, 0, 0, 0, 127, 255),
    VTX(340, 20, -519, 3413, 0, 0, 0, 127, 255),
    VTX(400, 20, 380, 3755, 0, 130, 0, 0, 255),
    VTX(-219, 400, -519, -1364, 2048, 0, 0, 127, 255),
    VTX(-339, 400, -519, -2388, 2048, 0, 0, 127, 255),
    VTX(-339, 20, -519, -2388, 0, 0, 0, 127, 255),
    VTX(340, 400, -519, 3413, 2048, 0, 0, 127, 255),
    VTX(220, 400, -519, 2389, 2048, 0, 0, 127, 255),
    VTX(220, 20, -519, 2389, 0, 0, 0, 127, 255),
    VTX(400, 400, 380, 3755, 2048, 130, 0, 0, 255),
    VTX(400, 400, -459, -3412, 2048, 130, 0, 0, 255),
    VTX(400, 20, -459, -3412, 0, 130, 0, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000320[16] = {
    VTX(-99, 20, 320, 6144, -1023, 0, 127, 0, 255),
    VTX(-159, 20, 400, 7680, 1024, 0, 127, 0, 255),
    VTX(-159, 20, 440, 7680, 2048, 0, 127, 0, 255),
    VTX(-99, 20, 440, 6144, 2048, 0, 127, 0, 255),
    VTX(160, 20, 400, -511, 1024, 0, 127, 0, 255),
    VTX(100, 20, 320, 1024, -1023, 0, 127, 0, 255),
    VTX(100, 20, 440, 1024, 2048, 0, 127, 0, 255),
    VTX(160, 20, 440, -511, 2048, 0, 127, 0, 255),
    VTX(100, 0, 440, -1535, 14336, 0, 127, 0, 255),
    VTX(260, 0, 440, -5631, 14336, 0, 127, 0, 255),
    VTX(260, 0, -519, -5631, -10239, 0, 127, 0, 255),
    VTX(100, 0, -519, -1535, -10239, 0, 127, 0, 255),
    VTX(-259, 0, 440, 7680, 14336, 0, 127, 0, 255),
    VTX(-99, 0, 440, 3584, 14336, 0, 127, 0, 255),
    VTX(-99, 0, -519, 3584, -10239, 0, 127, 0, 255),
    VTX(-259, 0, -519, 7680, -10239, 0, 127, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000420[4] = {
    VTX(40, 0, -519, 2048, 512, 0, 127, 0, 255),
    VTX(40, 0, -539, 2048, 1024, 0, 127, 0, 255),
    VTX(-39, 0, -539, 0, 1024, 0, 127, 0, 255),
    VTX(-39, 0, -519, 0, 512, 0, 127, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000460[19] = {
    VTX(-379, 20, -159, 1877, 0, 117, 0, 48, 255),
    VTX(-379, 400, -159, 1877, 2048, 117, 0, 48, 255),
    VTX(-399, 400, -139, 1707, 2048, 89, 0, 89, 255),
    VTX(-399, 20, -139, 1707, 0, 89, 0, 89, 255),
    VTX(-379, 20, -199, 2219, 0, 117, 0, 209, 255),
    VTX(-379, 400, -199, 2219, 2048, 117, 0, 209, 255),
    VTX(220, 20, -519, 768, 0, 125, 0, 19, 255),
    VTX(220, 400, -519, 768, 2048, 122, 0, 32, 255),
    VTX(220, 400, -499, 655, 2048, 122, 0, 32, 255),
    VTX(220, 20, -499, 655, 0, 117, 0, 48, 255),
    VTX(200, 400, -479, 497, 2048, 48, 0, 117, 255),
    VTX(200, 20, -479, 497, 0, 48, 0, 117, 255),
    VTX(160, 400, -479, 271, 2048, 209, 0, 117, 255),
    VTX(160, 20, -479, 271, 0, 209, 0, 117, 255),
    VTX(-399, 20, 60, 0, 0, 89, 0, 168, 255),
    VTX(-379, 20, 80, -170, 0, 117, 0, 209, 255),
    VTX(140, 20, -519, 0, 0, 132, 0, 19, 255),
    VTX(140, 400, -499, 113, 2048, 135, 0, 32, 255),
    VTX(-379, 20, 120, -511, 0, 117, 0, 48, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000590[6] = {
    VTX(-219, 20, -519, 0, 0, 132, 0, 19, 255),
    VTX(-199, 20, -479, 271, 0, 209, 0, 117, 255),
    VTX(-159, 20, -479, 497, 0, 48, 0, 117, 255),
    VTX(-139, 20, -499, 655, 0, 117, 0, 48, 255),
    VTX(-139, 20, -519, 768, 0, 125, 0, 19, 255),
    VTX(40, 100, -519, 1024, 431, 130, 0, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0005F0[18] = {
    VTX(-39, 20, -539, 853, 0, 127, 0, 0, 255),
    VTX(-399, 20, -219, 2389, 0, 89, 0, 168, 255),
    VTX(-379, 20, -459, 171, 0, 48, 0, 117, 255),
    VTX(-339, 20, -499, 853, 0, 117, 0, 48, 255),
    VTX(-339, 20, -519, 1024, 0, 125, 0, 19, 255),
    VTX(-399, 20, 380, 0, 0, 19, 0, 132, 255),
    VTX(-379, 20, 380, 171, 0, 48, 0, 140, 255),
    VTX(-339, 20, 420, 853, 0, 120, 0, 216, 255),
    VTX(380, 20, -459, 853, 0, 216, 0, 120, 255),
    VTX(340, 20, -499, 171, 0, 140, 0, 48, 255),
    VTX(400, 20, 140, -682, 0, 168, 0, 89, 255),
    VTX(380, 20, 120, -511, 0, 140, 0, 48, 255),
    VTX(380, 20, 80, -170, 0, 140, 0, 209, 255),
    VTX(160, 20, 400, 271, 0, 233, 0, 133, 255),
    VTX(140, 20, 420, 113, 0, 135, 0, 225, 255),
    VTX(200, 20, 400, 497, 0, 48, 0, 140, 255),
    VTX(340, 20, 420, 171, 0, 137, 0, 216, 255),
    VTX(380, 20, 380, 853, 0, 216, 0, 137, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000710[5] = {
    VTX(380, 20, -159, 1877, 0, 140, 0, 48, 255),
    VTX(380, 20, -199, 2219, 0, 140, 0, 209, 255),
    VTX(-39, 100, -519, 102, 26, 0, 130, 0, 255),
    VTX(400, 20, -139, 1707, 0, 168, 0, 89, 255),
    VTX(400, 20, -459, 1024, 0, 0, 0, 127, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000760[8] = {
    VTX(340, 20, 440, 0, 0, 130, 0, 0, 255),
    VTX(-159, 20, 400, 497, 0, 24, 0, 133, 255),
    VTX(-199, 20, 400, 271, 0, 209, 0, 140, 255),
    VTX(-139, 20, 420, 655, 0, 122, 0, 225, 255),
    VTX(-219, 20, 420, 113, 0, 137, 0, 216, 255),
    VTX(-219, 400, 440, 0, 2048, 135, 0, 225, 255),
    VTX(140, 400, 440, 0, 2048, 135, 0, 225, 255),
    VTX(220, 20, 420, 655, 0, 120, 0, 216, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0007E0[7] = {
    VTX(-399, 400, 60, 0, 2048, 89, 0, 168, 255),
    VTX(-379, 400, 80, -170, 2048, 117, 0, 209, 255),
    VTX(-379, 400, 120, -511, 2048, 117, 0, 48, 255),
    VTX(140, 20, -499, 113, 0, 140, 0, 48, 255),
    VTX(140, 400, -519, 0, 2048, 135, 0, 32, 255),
    VTX(-399, 400, 140, -682, 2048, 89, 0, 89, 255),
    VTX(-399, 20, 140, -682, 0, 89, 0, 89, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000850[10] = {
    VTX(-219, 20, -499, 113, 0, 140, 0, 48, 255),
    VTX(-219, 400, -499, 113, 2048, 135, 0, 32, 255),
    VTX(-219, 400, -519, 0, 2048, 135, 0, 32, 255),
    VTX(-199, 400, -479, 271, 2048, 209, 0, 117, 255),
    VTX(-159, 400, -479, 497, 2048, 48, 0, 117, 255),
    VTX(-139, 400, -499, 655, 2048, 122, 0, 32, 255),
    VTX(-139, 400, -519, 768, 2048, 122, 0, 32, 255),
    VTX(40, 100, -539, 853, 431, 130, 0, 0, 255),
    VTX(40, 20, -539, 853, 0, 130, 0, 0, 255),
    VTX(40, 20, -519, 1024, 0, 130, 0, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0008F0[31] = {
    VTX(-39, 100, -539, 853, 431, 127, 0, 0, 255),
    VTX(-39, 100, -519, 1024, 431, 127, 0, 0, 255),
    VTX(-39, 20, -519, 1024, 0, 127, 0, 0, 255),
    VTX(-399, 400, -219, 2389, 2048, 89, 0, 168, 255),
    VTX(-379, 400, -459, 171, 2048, 32, 0, 122, 255),
    VTX(-399, 400, -459, 0, 2048, 32, 0, 122, 255),
    VTX(-399, 20, -459, 0, 0, 19, 0, 125, 255),
    VTX(-339, 400, -499, 853, 2048, 122, 0, 32, 255),
    VTX(-339, 400, -519, 1024, 2048, 122, 0, 32, 255),
    VTX(-399, 400, 380, 0, 2048, 32, 0, 135, 255),
    VTX(-379, 400, 380, 171, 2048, 32, 0, 135, 255),
    VTX(-339, 400, 420, 853, 2048, 122, 0, 225, 255),
    VTX(-339, 400, 440, 1024, 2048, 122, 0, 225, 255),
    VTX(-339, 20, 440, 1024, 0, 127, 0, 0, 255),
    VTX(380, 400, -459, 853, 2048, 225, 0, 122, 255),
    VTX(340, 400, -499, 171, 2048, 135, 0, 32, 255),
    VTX(340, 400, -519, 0, 2048, 135, 0, 32, 255),
    VTX(340, 20, -519, 0, 0, 132, 0, 19, 255),
    VTX(400, 400, 140, -682, 2048, 168, 0, 89, 255),
    VTX(380, 400, 120, -511, 2048, 140, 0, 48, 255),
    VTX(380, 400, 80, -170, 2048, 140, 0, 209, 255),
    VTX(400, 400, 60, 0, 2048, 168, 0, 168, 255),
    VTX(400, 20, 60, 0, 0, 168, 0, 168, 255),
    VTX(160, 400, 400, 271, 2048, 209, 0, 140, 255),
    VTX(200, 400, 400, 497, 2048, 48, 0, 140, 255),
    VTX(140, 400, 420, 113, 2048, 135, 0, 225, 255),
    VTX(220, 400, 420, 655, 2048, 122, 0, 225, 255),
    VTX(340, 400, 420, 171, 2048, 135, 0, 225, 255),
    VTX(380, 400, 380, 853, 2048, 225, 0, 135, 255),
    VTX(400, 400, 380, 1024, 2048, 225, 0, 135, 255),
    VTX(400, 20, 380, 1024, 0, 0, 0, 130, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000AE0[1] = {
    VTX(220, 400, 440, 768, 2048, 122, 0, 225, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000AF0[9] = {
    VTX(380, 400, -159, 1877, 2048, 140, 0, 48, 255),
    VTX(380, 400, -199, 2219, 2048, 140, 0, 209, 255),
    VTX(400, 400, -219, 2389, 2048, 168, 0, 168, 255),
    VTX(400, 20, -219, 2389, 0, 168, 0, 168, 255),
    VTX(-39, 100, -539, 102, 0, 0, 130, 0, 255),
    VTX(40, 100, -539, 0, 0, 0, 130, 0, 255),
    VTX(40, 100, -519, 0, 26, 0, 130, 0, 255),
    VTX(400, 400, -139, 1707, 2048, 168, 0, 89, 255),
    VTX(400, 400, -459, 1024, 2048, 225, 0, 122, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000B80[10] = {
    VTX(340, 400, 440, 0, 2048, 135, 0, 225, 255),
    VTX(-159, 400, 400, 497, 2048, 48, 0, 140, 255),
    VTX(-139, 400, 420, 655, 2048, 122, 0, 225, 255),
    VTX(-199, 400, 400, 271, 2048, 209, 0, 140, 255),
    VTX(-139, 400, 440, 768, 2048, 122, 0, 225, 255),
    VTX(-139, 20, 440, 768, 0, 122, 0, 225, 255),
    VTX(-219, 400, 420, 113, 2048, 135, 0, 225, 255),
    VTX(-219, 20, 440, 0, 0, 130, 0, 0, 255),
    VTX(140, 20, 440, 0, 0, 135, 0, 225, 255),
    VTX(220, 20, 440, 768, 0, 127, 0, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000C20[4] = {
    VTX(-39, 0, -539, 0, 0, 0, 0, 127, 255),
    VTX(40, 0, -539, 2048, 0, 0, 0, 127, 255),
    VTX(40, 100, -539, 2048, 2048, 0, 0, 127, 255),
    VTX(-39, 100, -539, 0, 2048, 0, 0, 127, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000C60[16] = {
    VTX(-139, 0, -519, -6143, 0, 0, 0, 127, 255),
    VTX(-39, 0, -519, -1023, 0, 0, 0, 127, 255),
    VTX(-39, 20, -519, -1023, 1024, 0, 0, 127, 255),
    VTX(-139, 20, -519, -6143, 1024, 0, 0, 127, 255),
    VTX(40, 20, -539, 0, 1024, 130, 0, 0, 255),
    VTX(40, 0, -539, 0, 0, 130, 0, 0, 255),
    VTX(40, 0, -519, 1024, 0, 130, 0, 0, 255),
    VTX(40, 20, -519, 1024, 1024, 130, 0, 0, 255),
    VTX(40, 20, -519, 3072, 1024, 0, 0, 127, 255),
    VTX(40, 0, -519, 3072, 0, 0, 0, 127, 255),
    VTX(140, 0, -519, 8192, 0, 0, 0, 127, 255),
    VTX(140, 20, -519, 8192, 1024, 0, 0, 127, 255),
    VTX(-39, 0, -519, 0, 0, 127, 0, 0, 255),
    VTX(-39, 0, -539, 1024, 0, 127, 0, 0, 255),
    VTX(-39, 20, -539, 1024, 1024, 127, 0, 0, 255),
    VTX(-39, 20, -519, 0, 1024, 127, 0, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000D60[4] = {
    VTX(400, 0, 380, 6144, 0, 130, 0, 0, 255),
    VTX(400, 0, -139, 2048, 0, 168, 0, 89, 255),
    VTX(380, 0, 120, 2048, 0, 140, 0, 48, 255),
    VTX(380, 0, 80, 0, 0, 140, 0, 209, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000DA0[4] = {
    VTX(400, 0, 140, 6144, 0, 168, 0, 89, 255),
    VTX(380, 0, 380, 1024, 0, 216, 0, 137, 255),
    VTX(380, 0, -159, 2048, 0, 140, 0, 48, 255),
    VTX(-379, 0, 120, 2048, 0, 117, 0, 48, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000DE0[4] = {
    VTX(-379, 0, 80, 2048, 0, 117, 0, 209, 255),
    VTX(-379, 0, -159, 2048, 0, 117, 0, 48, 255),
    VTX(-379, 0, -199, 2048, 0, 117, 0, 209, 255),
    VTX(-399, 0, -219, 2048, 0, 89, 0, 168, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000E20[4] = {
    VTX(380, 0, -199, 1024, 0, 140, 0, 209, 255),
    VTX(340, 0, 420, 4096, 0, 137, 0, 216, 255),
    VTX(340, 0, -499, 1024, 0, 132, 0, 19, 255),
    VTX(380, 0, -459, 4096, 0, 216, 0, 120, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000E60[4] = {
    VTX(400, 0, -459, 1024, 0, 216, 0, 120, 255),
    VTX(-159, 0, 400, 6144, 0, 156, 0, 181, 255),
    VTX(100, 0, 320, 1024, 0, 101, 0, 181, 255),
    VTX(-339, 0, -519, 1024, 0, 125, 0, 19, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000EA0[4] = {
    VTX(340, 0, 440, 1024, 0, 137, 0, 216, 255),
    VTX(-339, 0, 420, 1024, 0, 120, 0, 216, 255),
    VTX(-379, 0, 380, 4096, 0, 19, 0, 132, 255),
    VTX(-399, 0, 380, 1024, 0, 19, 0, 132, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000EE0[4] = {
    VTX(-379, 0, -459, 1024, 0, 19, 0, 125, 255),
    VTX(-339, 0, -499, 4096, 0, 125, 0, 19, 255),
    VTX(-399, 0, 60, 2048, 0, 89, 0, 168, 255),
    VTX(-399, 0, -139, 6144, 0, 127, 0, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000F20[4] = {
    VTX(-399, 0, 140, 7168, 0, 127, 0, 0, 255),
    VTX(160, 0, -479, 2048, 0, 209, 0, 117, 255),
    VTX(220, 0, -499, 2048, 0, 125, 0, 19, 255),
    VTX(-199, 0, -479, 2048, 0, 209, 0, 117, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000F60[4] = {
    VTX(-399, 0, -459, 7168, 0, 127, 0, 0, 255),
    VTX(200, 0, 400, 2048, 0, 48, 0, 140, 255),
    VTX(160, 0, 400, 2048, 0, 233, 0, 133, 255),
    VTX(-219, 0, 420, 2048, 0, 137, 0, 216, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000FA0[4] = {
    VTX(-199, 0, 400, 2048, 0, 209, 0, 140, 255),
    VTX(400, 0, -219, 7168, 0, 130, 0, 0, 255),
    VTX(400, 0, 60, 6144, 0, 130, 0, 0, 255),
    VTX(200, 0, -479, 2048, 0, 48, 0, 117, 255),
}; 

static Vtx syotes2_old_room_00Vtx_000FE0[4] = {
    VTX(220, 0, -519, 0, 0, 0, 0, 127, 255),
    VTX(-339, 0, -519, -3071, 0, 0, 0, 127, 255),
    VTX(220, 0, 420, 1024, 0, 120, 0, 216, 255),
    VTX(-219, 0, 440, 0, 0, 0, 0, 130, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001020[4] = {
    VTX(340, 0, 440, -2047, 0, 0, 0, 130, 255),
    VTX(-219, 20, 420, 0, 1024, 137, 0, 216, 255),
    VTX(-139, 0, -499, 2048, 0, 125, 0, 19, 255),
    VTX(-159, 0, -479, 2048, 0, 48, 0, 117, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001060[4] = {
    VTX(220, 20, -499, 0, 1024, 117, 0, 48, 255),
    VTX(-139, 20, -499, 0, 1024, 117, 0, 48, 255),
    VTX(-219, 0, -499, 1024, 0, 132, 0, 19, 255),
    VTX(140, 0, -499, 1024, 0, 132, 0, 19, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0010A0[11] = {
    VTX(400, 20, 380, 6144, 1024, 130, 0, 0, 255),
    VTX(400, 20, 140, -6143, 1024, 130, 0, 0, 255),
    VTX(400, 0, 140, -6143, 0, 130, 0, 0, 255),
    VTX(400, 20, -139, 2048, 1024, 168, 0, 89, 255),
    VTX(380, 20, -159, 0, 1024, 140, 0, 48, 255),
    VTX(380, 0, -159, 0, 0, 140, 0, 48, 255),
    VTX(380, 20, 120, 2048, 1024, 140, 0, 48, 255),
    VTX(380, 20, 80, 0, 1024, 140, 0, 209, 255),
    VTX(380, 20, 80, 0, 1024, 140, 0, 209, 255),
    VTX(400, 20, 60, -2047, 1024, 168, 0, 168, 255),
    VTX(400, 0, 60, -2047, 0, 168, 0, 168, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001150[12] = {
    VTX(400, 20, 140, 6144, 1024, 168, 0, 89, 255),
    VTX(380, 20, 120, 4096, 1024, 140, 0, 48, 255),
    VTX(380, 0, 120, 4096, 0, 140, 0, 48, 255),
    VTX(380, 20, 380, 1024, 1024, 216, 0, 137, 255),
    VTX(400, 20, 380, 0, 1024, 0, 0, 130, 255),
    VTX(400, 0, 380, 0, 0, 216, 0, 137, 255),
    VTX(380, 20, -159, 2048, 1024, 140, 0, 48, 255),
    VTX(380, 20, -199, 0, 1024, 140, 0, 209, 255),
    VTX(380, 0, -199, 0, 0, 140, 0, 209, 255),
    VTX(-379, 20, 120, 2048, 1024, 117, 0, 48, 255),
    VTX(-399, 20, 140, 0, 1024, 89, 0, 89, 255),
    VTX(-399, 0, 140, 0, 0, 89, 0, 89, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001210[12] = {
    VTX(-379, 20, 80, 2048, 1024, 117, 0, 209, 255),
    VTX(-379, 20, 120, 0, 1024, 117, 0, 48, 255),
    VTX(-379, 0, 120, 0, 0, 117, 0, 48, 255),
    VTX(-379, 20, -159, 2048, 1024, 117, 0, 48, 255),
    VTX(-399, 20, -139, 0, 1024, 89, 0, 89, 255),
    VTX(-399, 0, -139, 0, 0, 89, 0, 89, 255),
    VTX(-379, 20, -199, 2048, 1024, 117, 0, 209, 255),
    VTX(-379, 20, -159, 0, 1024, 117, 0, 48, 255),
    VTX(-379, 0, -159, 0, 0, 117, 0, 48, 255),
    VTX(-399, 20, -219, 2048, 1024, 89, 0, 168, 255),
    VTX(-379, 20, -199, 0, 1024, 117, 0, 209, 255),
    VTX(-379, 0, -199, 0, 0, 117, 0, 209, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0012D0[12] = {
    VTX(380, 20, -199, 1024, 1024, 140, 0, 209, 255),
    VTX(400, 20, -219, -1023, 1024, 168, 0, 168, 255),
    VTX(400, 0, -219, -1023, 0, 168, 0, 168, 255),
    VTX(340, 20, 420, 4096, 1024, 137, 0, 216, 255),
    VTX(380, 20, 380, 0, 1024, 216, 0, 137, 255),
    VTX(380, 0, 380, 0, 0, 216, 0, 137, 255),
    VTX(340, 20, -499, 1024, 1024, 140, 0, 48, 255),
    VTX(340, 20, -519, 0, 1024, 132, 0, 19, 255),
    VTX(340, 0, -519, 0, 0, 132, 0, 19, 255),
    VTX(380, 20, -459, 4096, 1024, 216, 0, 120, 255),
    VTX(340, 20, -499, 0, 1024, 140, 0, 48, 255),
    VTX(340, 0, -499, 0, 0, 132, 0, 19, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001390[12] = {
    VTX(400, 20, -459, 1024, 1024, 0, 0, 127, 255),
    VTX(380, 20, -459, 0, 1024, 216, 0, 120, 255),
    VTX(380, 0, -459, 0, 0, 216, 0, 120, 255),
    VTX(-159, 20, 400, 6144, 1024, 156, 0, 181, 255),
    VTX(-99, 20, 320, 0, 1024, 156, 0, 181, 255),
    VTX(-99, 0, 320, 0, 0, 156, 0, 181, 255),
    VTX(100, 20, 320, 1024, 1024, 101, 0, 181, 255),
    VTX(160, 20, 400, -5119, 1024, 101, 0, 181, 255),
    VTX(160, 0, 400, -5119, 0, 101, 0, 181, 255),
    VTX(-339, 20, -519, 1024, 1024, 125, 0, 19, 255),
    VTX(-339, 20, -499, 0, 1024, 117, 0, 48, 255),
    VTX(-339, 0, -499, 0, 0, 125, 0, 19, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001450[12] = {
    VTX(340, 20, 440, 1024, 1024, 130, 0, 0, 255),
    VTX(340, 20, 420, 0, 1024, 137, 0, 216, 255),
    VTX(340, 0, 420, 0, 0, 137, 0, 216, 255),
    VTX(-339, 20, 420, 1024, 1024, 120, 0, 216, 255),
    VTX(-339, 20, 440, 0, 1024, 127, 0, 0, 255),
    VTX(-339, 0, 440, 0, 0, 120, 0, 216, 255),
    VTX(-379, 20, 380, 4096, 1024, 48, 0, 140, 255),
    VTX(-339, 20, 420, 0, 1024, 120, 0, 216, 255),
    VTX(-339, 0, 420, 0, 0, 120, 0, 216, 255),
    VTX(-399, 20, 380, 1024, 1024, 19, 0, 132, 255),
    VTX(-379, 20, 380, 0, 1024, 48, 0, 140, 255),
    VTX(-379, 0, 380, 0, 0, 19, 0, 132, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001510[12] = {
    VTX(-379, 20, -459, 1024, 1024, 48, 0, 117, 255),
    VTX(-399, 20, -459, 0, 1024, 19, 0, 125, 255),
    VTX(-399, 0, -459, 0, 0, 19, 0, 125, 255),
    VTX(-339, 20, -499, 4096, 1024, 117, 0, 48, 255),
    VTX(-379, 20, -459, 0, 1024, 48, 0, 117, 255),
    VTX(-379, 0, -459, 0, 0, 19, 0, 125, 255),
    VTX(-399, 20, 60, 2048, 1024, 89, 0, 168, 255),
    VTX(-379, 20, 80, 0, 1024, 117, 0, 209, 255),
    VTX(-379, 0, 80, 0, 0, 117, 0, 209, 255),
    VTX(-399, 20, -139, 6144, 1024, 127, 0, 0, 255),
    VTX(-399, 20, 60, -4095, 1024, 127, 0, 0, 255),
    VTX(-399, 0, 60, -4095, 0, 127, 0, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0015D0[12] = {
    VTX(-399, 20, 140, 7168, 1024, 127, 0, 0, 255),
    VTX(-399, 20, 380, -5119, 1024, 127, 0, 0, 255),
    VTX(-399, 0, 380, -5119, 0, 127, 0, 0, 255),
    VTX(160, 20, -479, 2048, 1024, 209, 0, 117, 255),
    VTX(140, 20, -499, 0, 1024, 140, 0, 48, 255),
    VTX(140, 0, -499, 0, 0, 132, 0, 19, 255),
    VTX(220, 20, -499, 2048, 1024, 117, 0, 48, 255),
    VTX(200, 20, -479, 0, 1024, 48, 0, 117, 255),
    VTX(200, 0, -479, 0, 0, 48, 0, 117, 255),
    VTX(-199, 20, -479, 2048, 1024, 209, 0, 117, 255),
    VTX(-219, 20, -499, 0, 1024, 140, 0, 48, 255),
    VTX(-219, 0, -499, 0, 0, 132, 0, 19, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001690[12] = {
    VTX(-399, 20, -459, 7168, 1024, 127, 0, 0, 255),
    VTX(-399, 20, -219, -5119, 1024, 127, 0, 0, 255),
    VTX(-399, 0, -219, -5119, 0, 127, 0, 0, 255),
    VTX(200, 20, 400, 2048, 1024, 48, 0, 140, 255),
    VTX(220, 20, 420, 0, 1024, 120, 0, 216, 255),
    VTX(220, 0, 420, 0, 0, 120, 0, 216, 255),
    VTX(160, 20, 400, 2048, 1024, 233, 0, 133, 255),
    VTX(200, 20, 400, 0, 1024, 48, 0, 140, 255),
    VTX(200, 0, 400, 0, 0, 48, 0, 140, 255),
    VTX(-219, 20, 420, 2048, 1024, 137, 0, 216, 255),
    VTX(-199, 20, 400, 0, 1024, 209, 0, 140, 255),
    VTX(-199, 0, 400, 0, 0, 209, 0, 140, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001750[12] = {
    VTX(-199, 20, 400, 2048, 1024, 209, 0, 140, 255),
    VTX(-159, 20, 400, 0, 1024, 24, 0, 133, 255),
    VTX(-159, 0, 400, 0, 0, 24, 0, 133, 255),
    VTX(400, 20, -219, 7168, 1024, 130, 0, 0, 255),
    VTX(400, 20, -459, -5119, 1024, 130, 0, 0, 255),
    VTX(400, 0, -459, -5119, 0, 130, 0, 0, 255),
    VTX(400, 20, 60, 6144, 1024, 130, 0, 0, 255),
    VTX(400, 20, -139, -4095, 1024, 130, 0, 0, 255),
    VTX(400, 0, -139, -4095, 0, 130, 0, 0, 255),
    VTX(200, 20, -479, 2048, 1024, 48, 0, 117, 255),
    VTX(160, 20, -479, 0, 1024, 209, 0, 117, 255),
    VTX(160, 0, -479, 0, 0, 209, 0, 117, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001810[12] = {
    VTX(340, 0, -519, 6144, 0, 0, 0, 127, 255),
    VTX(340, 20, -519, 6144, 1024, 0, 0, 127, 255),
    VTX(220, 20, -519, 0, 1024, 0, 0, 127, 255),
    VTX(-219, 0, -519, 3072, 0, 0, 0, 127, 255),
    VTX(-219, 20, -519, 3072, 1024, 0, 0, 127, 255),
    VTX(-339, 20, -519, -3071, 1024, 0, 0, 127, 255),
    VTX(220, 20, 420, 1024, 1024, 120, 0, 216, 255),
    VTX(220, 20, 440, 0, 1024, 127, 0, 0, 255),
    VTX(220, 0, 440, 0, 0, 120, 0, 216, 255),
    VTX(-339, 0, 440, 6144, 0, 0, 0, 130, 255),
    VTX(-339, 20, 440, 6144, 1024, 0, 0, 130, 255),
    VTX(-219, 20, 440, 0, 1024, 0, 0, 130, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0018D0[12] = {
    VTX(220, 0, 440, 4096, 0, 0, 0, 130, 255),
    VTX(220, 20, 440, 4096, 1024, 0, 0, 130, 255),
    VTX(340, 20, 440, -2047, 1024, 0, 0, 130, 255),
    VTX(-219, 0, 420, 0, 0, 137, 0, 216, 255),
    VTX(-219, 0, 440, 1024, 0, 137, 0, 216, 255),
    VTX(-219, 20, 440, 1024, 1024, 130, 0, 0, 255),
    VTX(-139, 20, -499, 2048, 1024, 117, 0, 48, 255),
    VTX(-159, 20, -479, 0, 1024, 48, 0, 117, 255),
    VTX(-159, 0, -479, 0, 0, 48, 0, 117, 255),
    VTX(-159, 20, -479, 2048, 1024, 48, 0, 117, 255),
    VTX(-199, 20, -479, 0, 1024, 209, 0, 117, 255),
    VTX(-199, 0, -479, 0, 0, 209, 0, 117, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001990[12] = {
    VTX(220, 0, -499, 0, 0, 125, 0, 19, 255),
    VTX(220, 0, -519, 1024, 0, 125, 0, 19, 255),
    VTX(220, 20, -519, 1024, 1024, 125, 0, 19, 255),
    VTX(-139, 0, -499, 0, 0, 125, 0, 19, 255),
    VTX(-139, 0, -519, 1024, 0, 125, 0, 19, 255),
    VTX(-139, 20, -519, 1024, 1024, 125, 0, 19, 255),
    VTX(-219, 20, -499, 1024, 1024, 140, 0, 48, 255),
    VTX(-219, 20, -519, 0, 1024, 132, 0, 19, 255),
    VTX(-219, 0, -519, 0, 0, 132, 0, 19, 255),
    VTX(140, 20, -499, 1024, 1024, 140, 0, 48, 255),
    VTX(140, 20, -519, 0, 1024, 132, 0, 19, 255),
    VTX(140, 0, -519, 0, 0, 132, 0, 19, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001A50[8] = {
    VTX(260, 0, 440, -3071, -1279, 0, 127, 0, 255),
    VTX(400, 0, 440, -3071, -2175, 0, 127, 0, 255),
    VTX(400, 0, -519, 3072, -2175, 0, 127, 0, 255),
    VTX(260, 0, -519, 3072, -1279, 0, 127, 0, 255),
    VTX(-399, 0, 440, -3071, 2944, 0, 127, 0, 255),
    VTX(-259, 0, 440, -3071, 2048, 0, 127, 0, 255),
    VTX(-259, 0, -519, 3072, 2048, 0, 127, 0, 255),
    VTX(-399, 0, -519, 3072, 2944, 0, 127, 0, 255),
}; 

static Vtx syotes2_old_room_00Vtx_001AD0[8] = {
    VTX(100, 20, 320, 0, 5530, 0, 127, 0, 255),
    VTX(-99, 20, 320, 2048, 5530, 0, 127, 0, 255),
    VTX(-99, 20, 440, 2048, 6758, 0, 127, 0, 255),
    VTX(100, 20, 440, 0, 6758, 0, 127, 0, 255),
    VTX(100, 0, 320, 0, 5530, 0, 127, 0, 255),
    VTX(100, 0, -519, 0, -3071, 0, 127, 0, 255),
    VTX(-99, 0, -519, 2048, -3071, 0, 127, 0, 255),
    VTX(-99, 0, 320, 2048, 5530, 0, 127, 0, 255),
}; 

Gfx syotes2_old_room_00Dlist0x001B50[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 0, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes2_old_room_00Vtx_0000E0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 136, 136, 136, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_room_00Tex_004820, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000120[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 153, 153, 153, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_room_00Tex_003820, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000160[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 2, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000260[0], 12, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_room_00Tex_003020, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000320[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000420[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_room_00Tex_003820, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000460[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000460[12], 7, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0007E0[0], 7, 7),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(2, 8, 3, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(3, 9, 6, 0),
    gsSP1Triangle(4, 10, 5, 0),
    gsSP1Triangle(4, 5, 11, 0),
    gsSP1Triangle(1, 0, 5, 0),
    gsSP1Triangle(1, 5, 10, 0),
    gsSP1Triangle(6, 9, 12, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000590[0], 6, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000850[0], 10, 6),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(1, 9, 7, 0),
    gsSP1Triangle(1, 7, 6, 0),
    gsSP1Triangle(2, 10, 9, 0),
    gsSP1Triangle(2, 9, 1, 0),
    gsSP1Triangle(3, 11, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(4, 12, 11, 0),
    gsSP1Triangle(4, 11, 3, 0),
    gsSP1Triangle(5, 13, 14, 0),
    gsSP1Triangle(5, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000460[4], 2, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0005F0[0], 4, 2),
    gsSPVertex(&syotes2_old_room_00Vtx_0008F0[0], 8, 6),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(3, 9, 1, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 10, 11, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(5, 13, 10, 0),
    gsSP1Triangle(5, 10, 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0005F0[3], 7, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0008F0[7], 9, 7),
    gsSP1Triangle(1, 8, 7, 0),
    gsSP1Triangle(1, 7, 0, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSP1Triangle(5, 14, 15, 0),
    gsSP1Triangle(5, 15, 6, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0005F0[9], 5, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0005F0[15], 1, 5),
    gsSPVertex(&syotes2_old_room_00Vtx_0008F0[15], 10, 6),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(1, 10, 2, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 3, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(4, 14, 15, 0),
    gsSP1Triangle(4, 15, 5, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0005F0[13], 5, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000760[7], 1, 5),
    gsSPVertex(&syotes2_old_room_00Vtx_0008F0[23], 8, 6),
    gsSP1Triangle(1, 8, 6, 0),
    gsSP1Triangle(1, 6, 0, 0),
    gsSP1Triangle(2, 7, 9, 0),
    gsSP1Triangle(2, 9, 5, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0005F0[8], 1, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000710[0], 5, 1),
    gsSPVertex(&syotes2_old_room_00Vtx_0008F0[14], 1, 6),
    gsSPVertex(&syotes2_old_room_00Vtx_000AF0[0], 9, 7),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(4, 14, 7, 0),
    gsSP1Triangle(4, 7, 1, 0),
    gsSP1Triangle(5, 15, 6, 0),
    gsSP1Triangle(5, 6, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0005F0[16], 1, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000760[0], 5, 1),
    gsSPVertex(&syotes2_old_room_00Vtx_0008F0[27], 1, 6),
    gsSPVertex(&syotes2_old_room_00Vtx_000B80[0], 7, 7),
    gsSP1Triangle(1, 7, 6, 0),
    gsSP1Triangle(1, 6, 0, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(2, 9, 4, 0),
    gsSP1Triangle(3, 10, 8, 0),
    gsSP1Triangle(3, 8, 2, 0),
    gsSP1Triangle(4, 9, 11, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(5, 13, 10, 0),
    gsSP1Triangle(5, 10, 3, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0005F0[14], 1, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000760[4], 4, 1),
    gsSPVertex(&syotes2_old_room_00Vtx_0008F0[25], 2, 5),
    gsSPVertex(&syotes2_old_room_00Vtx_000AE0[0], 1, 7),
    gsSPVertex(&syotes2_old_room_00Vtx_000B80[6], 4, 8),
    gsSP1Triangle(2, 8, 1, 0),
    gsSP1Triangle(2, 1, 9, 0),
    gsSP1Triangle(3, 5, 0, 0),
    gsSP1Triangle(3, 0, 10, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(4, 7, 11, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_room_00Tex_005820, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000C20[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002470, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000C60[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000D60[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0010A0[0], 11, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 3, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000DA0[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001150[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000DE0[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001210[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000E20[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0012D0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000E60[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001390[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000EA0[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001450[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000EE0[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001510[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000F20[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0015D0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000F60[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001690[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000FA0[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001750[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_000FE0[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001810[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001020[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0018D0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001060[0], 4, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001990[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_room_00Tex_002820, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001A50[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_room_00Tex_004820, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_001AD0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 syotes2_old_room_00Tex_002820[] = {
#include "assets/scenes/test_rooms/syotes2_old//syotes2_old_room_00Tex_002820.rgb5a1.inc.c"
};

u64 syotes2_old_room_00Tex_003020[] = {
#include "assets/scenes/test_rooms/syotes2_old//syotes2_old_room_00Tex_003020.rgb5a1.inc.c"
};

u64 syotes2_old_room_00Tex_003820[] = {
#include "assets/scenes/test_rooms/syotes2_old//syotes2_old_room_00Tex_003820.rgb5a1.inc.c"
};

u64 syotes2_old_room_00Tex_004820[] = {
#include "assets/scenes/test_rooms/syotes2_old//syotes2_old_room_00Tex_004820.rgb5a1.inc.c"
};

u64 syotes2_old_room_00Tex_005820[] = {
#include "assets/scenes/test_rooms/syotes2_old//syotes2_old_room_00Tex_005820.rgb5a1.inc.c"
};

static Vtx syotes2_old_room_00Vtx_006820[18] = {
    VTX(-219, 20, 220, 873, 0, 140, 0, 48, 255),
    VTX(-219, 400, 220, 873, 2048, 140, 0, 48, 255),
    VTX(-219, 400, 180, 1175, 2048, 140, 0, 209, 255),
    VTX(-219, 20, 180, 1175, 0, 140, 0, 209, 255),
    VTX(-199, 20, 240, 663, 0, 209, 0, 117, 255),
    VTX(-199, 400, 240, 663, 2048, 209, 0, 117, 255),
    VTX(-199, 400, 160, 1385, 2048, 209, 0, 140, 255),
    VTX(-199, 20, 160, 1385, 0, 209, 0, 140, 255),
    VTX(-159, 20, 240, 361, 0, 48, 0, 117, 255),
    VTX(-159, 400, 240, 361, 2048, 48, 0, 117, 255),
    VTX(-139, 20, 220, 151, 0, 117, 0, 48, 255),
    VTX(-139, 400, 220, 151, 2048, 117, 0, 48, 255),
    VTX(-159, 400, 160, 1687, 2048, 48, 0, 140, 255),
    VTX(-159, 20, 160, 1687, 0, 48, 0, 140, 255),
    VTX(-139, 400, 180, 1897, 2048, 117, 0, 209, 255),
    VTX(-139, 20, 180, 1897, 0, 117, 0, 209, 255),
    VTX(-139, 400, 220, 2199, 2048, 117, 0, 48, 255),
    VTX(-139, 20, 220, 2199, 0, 117, 0, 48, 255),
}; 

static Vtx syotes2_old_room_00Vtx_006940[16] = {
    VTX(-199, 0, 240, 3072, 0, 209, 0, 117, 255),
    VTX(-199, 20, 240, 3072, 1024, 209, 0, 117, 255),
    VTX(-219, 20, 220, 5120, 1024, 140, 0, 48, 255),
    VTX(-219, 0, 220, 5120, 0, 140, 0, 48, 255),
    VTX(-159, 0, 240, 0, 0, 48, 0, 117, 255),
    VTX(-159, 20, 240, 0, 1024, 48, 0, 117, 255),
    VTX(-199, 20, 240, 2048, 1024, 209, 0, 117, 255),
    VTX(-199, 0, 240, 2048, 0, 209, 0, 117, 255),
    VTX(-219, 0, 180, -1023, 0, 140, 0, 209, 255),
    VTX(-219, 20, 180, -1023, 1024, 140, 0, 209, 255),
    VTX(-199, 20, 160, 1024, 1024, 209, 0, 140, 255),
    VTX(-199, 0, 160, 1024, 0, 209, 0, 140, 255),
    VTX(-219, 0, 220, 0, 0, 140, 0, 48, 255),
    VTX(-219, 20, 220, 0, 1024, 140, 0, 48, 255),
    VTX(-219, 20, 180, 2048, 1024, 140, 0, 209, 255),
    VTX(-219, 0, 180, 2048, 0, 140, 0, 209, 255),
}; 

static Vtx syotes2_old_room_00Vtx_006A40[16] = {
    VTX(-199, 0, 160, 0, 0, 209, 0, 140, 255),
    VTX(-139, 0, 220, -3071, 0, 117, 0, 48, 255),
    VTX(-139, 0, 180, 0, 0, 117, 0, 209, 255),
    VTX(-159, 0, 160, 0, 0, 48, 0, 140, 255),
    VTX(-199, 20, 160, 0, 1024, 209, 0, 140, 255),
    VTX(-159, 20, 160, 2048, 1024, 48, 0, 140, 255),
    VTX(-159, 0, 160, 2048, 0, 48, 0, 140, 255),
    VTX(-139, 20, 220, -3071, 1024, 117, 0, 48, 255),
    VTX(-159, 20, 240, -1023, 1024, 48, 0, 117, 255),
    VTX(-159, 0, 240, -1023, 0, 48, 0, 117, 255),
    VTX(-139, 20, 180, 0, 1024, 117, 0, 209, 255),
    VTX(-139, 20, 220, 2048, 1024, 117, 0, 48, 255),
    VTX(-139, 0, 220, 2048, 0, 117, 0, 48, 255),
    VTX(-159, 20, 160, 0, 1024, 48, 0, 140, 255),
    VTX(-139, 20, 180, 2048, 1024, 117, 0, 209, 255),
    VTX(-139, 0, 180, 2048, 0, 117, 0, 209, 255),
}; 

Gfx syotes2_old_room_00Dlist0x006B40[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002C70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes2_old_room_00Vtx_006820[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(8, 9, 5, 0),
    gsSP1Triangle(8, 5, 4, 0),
    gsSP1Triangle(10, 11, 9, 0),
    gsSP1Triangle(10, 9, 8, 0),
    gsSP1Triangle(7, 6, 12, 0),
    gsSP1Triangle(7, 12, 13, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_006820[12], 6, 0),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002470, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_006940[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_006A40[0], 16, 0),
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

static Vtx syotes2_old_room_00Vtx_006D40[18] = {
    VTX(200, 20, 160, 1385, 0, 48, 0, 140, 255),
    VTX(200, 400, 160, 1385, 2048, 48, 0, 140, 255),
    VTX(220, 400, 180, 1175, 2048, 117, 0, 209, 255),
    VTX(220, 20, 180, 1175, 0, 117, 0, 209, 255),
    VTX(220, 400, 220, 873, 2048, 117, 0, 48, 255),
    VTX(220, 20, 220, 873, 0, 117, 0, 48, 255),
    VTX(200, 400, 240, 663, 2048, 48, 0, 117, 255),
    VTX(200, 20, 240, 663, 0, 48, 0, 117, 255),
    VTX(160, 400, 240, 361, 2048, 209, 0, 117, 255),
    VTX(160, 20, 240, 361, 0, 209, 0, 117, 255),
    VTX(140, 400, 220, 151, 2048, 140, 0, 48, 255),
    VTX(140, 20, 220, 151, 0, 140, 0, 48, 255),
    VTX(140, 20, 220, 2199, 0, 140, 0, 48, 255),
    VTX(140, 400, 220, 2199, 2048, 140, 0, 48, 255),
    VTX(140, 400, 180, 1897, 2048, 140, 0, 209, 255),
    VTX(140, 20, 180, 1897, 0, 140, 0, 209, 255),
    VTX(160, 400, 160, 1687, 2048, 209, 0, 140, 255),
    VTX(160, 20, 160, 1687, 0, 209, 0, 140, 255),
}; 

static Vtx syotes2_old_room_00Vtx_006E60[16] = {
    VTX(200, 0, 160, 1024, 0, 48, 0, 140, 255),
    VTX(200, 20, 160, 1024, 1024, 48, 0, 140, 255),
    VTX(220, 20, 180, -1023, 1024, 117, 0, 209, 255),
    VTX(220, 0, 180, -1023, 0, 117, 0, 209, 255),
    VTX(220, 0, 180, 2048, 0, 117, 0, 209, 255),
    VTX(220, 20, 180, 2048, 1024, 117, 0, 209, 255),
    VTX(220, 20, 220, 0, 1024, 117, 0, 48, 255),
    VTX(220, 0, 220, 0, 0, 117, 0, 48, 255),
    VTX(220, 0, 220, 5120, 0, 117, 0, 48, 255),
    VTX(220, 20, 220, 5120, 1024, 117, 0, 48, 255),
    VTX(200, 20, 240, 3072, 1024, 48, 0, 117, 255),
    VTX(200, 0, 240, 3072, 0, 48, 0, 117, 255),
    VTX(200, 0, 240, 2048, 0, 48, 0, 117, 255),
    VTX(200, 20, 240, 2048, 1024, 48, 0, 117, 255),
    VTX(160, 20, 240, 0, 1024, 209, 0, 117, 255),
    VTX(160, 0, 240, 0, 0, 209, 0, 117, 255),
}; 

static Vtx syotes2_old_room_00Vtx_006F60[16] = {
    VTX(160, 0, 160, 2048, 0, 209, 0, 140, 255),
    VTX(140, 0, 180, 2048, 0, 140, 0, 209, 255),
    VTX(140, 0, 220, 2048, 0, 140, 0, 48, 255),
    VTX(160, 0, 240, -1023, 0, 209, 0, 117, 255),
    VTX(160, 20, 160, 2048, 1024, 209, 0, 140, 255),
    VTX(200, 20, 160, 0, 1024, 48, 0, 140, 255),
    VTX(200, 0, 160, 0, 0, 48, 0, 140, 255),
    VTX(140, 20, 180, 2048, 1024, 140, 0, 209, 255),
    VTX(160, 20, 160, 0, 1024, 209, 0, 140, 255),
    VTX(160, 0, 160, 0, 0, 209, 0, 140, 255),
    VTX(140, 20, 220, 2048, 1024, 140, 0, 48, 255),
    VTX(140, 20, 180, 0, 1024, 140, 0, 209, 255),
    VTX(140, 0, 180, 0, 0, 140, 0, 209, 255),
    VTX(160, 20, 240, -1023, 1024, 209, 0, 117, 255),
    VTX(140, 20, 220, -3071, 1024, 140, 0, 48, 255),
    VTX(140, 0, 220, -3071, 0, 140, 0, 48, 255),
}; 

Gfx syotes2_old_room_00Dlist0x007060[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002C70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes2_old_room_00Vtx_006D40[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(7, 6, 8, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_006D40[1], 1, 1),
    gsSPVertex(&syotes2_old_room_00Vtx_006D40[14], 4, 2),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 1, 0),
    gsSP1Triangle(5, 1, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002470, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_006E60[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_006F60[0], 16, 0),
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

static Vtx syotes2_old_room_00Vtx_007268[18] = {
    VTX(-199, 20, -79, 1385, 0, 209, 0, 140, 255),
    VTX(-199, 400, -79, 1385, 2048, 209, 0, 140, 255),
    VTX(-159, 400, -79, 1687, 2048, 48, 0, 140, 255),
    VTX(-159, 20, -79, 1687, 0, 48, 0, 140, 255),
    VTX(-139, 400, -59, 1897, 2048, 117, 0, 209, 255),
    VTX(-139, 20, -59, 1897, 0, 117, 0, 209, 255),
    VTX(-139, 400, -19, 2199, 2048, 117, 0, 48, 255),
    VTX(-139, 20, -19, 2199, 0, 117, 0, 48, 255),
    VTX(-139, 20, -19, 151, 0, 117, 0, 48, 255),
    VTX(-139, 400, -19, 151, 2048, 117, 0, 48, 255),
    VTX(-159, 400, 0, 361, 2048, 48, 0, 117, 255),
    VTX(-159, 20, 0, 361, 0, 48, 0, 117, 255),
    VTX(-199, 400, 0, 663, 2048, 209, 0, 117, 255),
    VTX(-199, 20, 0, 663, 0, 209, 0, 117, 255),
    VTX(-219, 400, -19, 873, 2048, 140, 0, 48, 255),
    VTX(-219, 20, -59, 1175, 0, 140, 0, 209, 255),
    VTX(-219, 20, -19, 873, 0, 140, 0, 48, 255),
    VTX(-219, 400, -59, 1175, 2048, 140, 0, 209, 255),
}; 

static Vtx syotes2_old_room_00Vtx_007388[16] = {
    VTX(-139, 0, -19, -3071, 0, 117, 0, 48, 255),
    VTX(-139, 20, -19, -3071, 1024, 117, 0, 48, 255),
    VTX(-159, 20, 0, -1023, 1024, 48, 0, 117, 255),
    VTX(-159, 0, 0, -1023, 0, 48, 0, 117, 255),
    VTX(-159, 0, 0, 0, 0, 48, 0, 117, 255),
    VTX(-159, 20, 0, 0, 1024, 48, 0, 117, 255),
    VTX(-199, 20, 0, 2048, 1024, 209, 0, 117, 255),
    VTX(-199, 0, 0, 2048, 0, 209, 0, 117, 255),
    VTX(-159, 0, -79, 0, 0, 48, 0, 140, 255),
    VTX(-159, 20, -79, 0, 1024, 48, 0, 140, 255),
    VTX(-139, 20, -59, 2048, 1024, 117, 0, 209, 255),
    VTX(-139, 0, -59, 2048, 0, 117, 0, 209, 255),
    VTX(-139, 0, -59, 0, 0, 117, 0, 209, 255),
    VTX(-139, 20, -59, 0, 1024, 117, 0, 209, 255),
    VTX(-139, 20, -19, 2048, 1024, 117, 0, 48, 255),
    VTX(-139, 0, -19, 2048, 0, 117, 0, 48, 255),
}; 

static Vtx syotes2_old_room_00Vtx_007488[16] = {
    VTX(-199, 0, -79, 0, 0, 209, 0, 140, 255),
    VTX(-199, 0, 0, 3072, 0, 209, 0, 117, 255),
    VTX(-219, 0, -19, 0, 0, 140, 0, 48, 255),
    VTX(-219, 0, -59, -1023, 0, 140, 0, 209, 255),
    VTX(-199, 20, -79, 0, 1024, 209, 0, 140, 255),
    VTX(-159, 20, -79, 2048, 1024, 48, 0, 140, 255),
    VTX(-159, 0, -79, 2048, 0, 48, 0, 140, 255),
    VTX(-199, 20, 0, 3072, 1024, 209, 0, 117, 255),
    VTX(-219, 20, -19, 5120, 1024, 140, 0, 48, 255),
    VTX(-219, 0, -19, 5120, 0, 140, 0, 48, 255),
    VTX(-219, 20, -19, 0, 1024, 140, 0, 48, 255),
    VTX(-219, 20, -59, 2048, 1024, 140, 0, 209, 255),
    VTX(-219, 0, -59, 2048, 0, 140, 0, 209, 255),
    VTX(-219, 20, -59, -1023, 1024, 140, 0, 209, 255),
    VTX(-199, 20, -79, 1024, 1024, 209, 0, 140, 255),
    VTX(-199, 0, -79, 1024, 0, 209, 0, 140, 255),
}; 

Gfx syotes2_old_room_00Dlist0x007588[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002C70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes2_old_room_00Vtx_007268[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_007268[1], 1, 1),
    gsSPVertex(&syotes2_old_room_00Vtx_007268[12], 6, 2),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 6, 0),
    gsSP1Triangle(5, 7, 1, 0),
    gsSP1Triangle(5, 1, 0, 0),
    gsSP1Triangle(6, 4, 7, 0),
    gsSP1Triangle(6, 7, 5, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002470, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_007388[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_007488[0], 16, 0),
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

static Vtx syotes2_old_room_00Vtx_007790[16] = {
    VTX(140, 20, -59, 1897, 0, 140, 0, 209, 255),
    VTX(140, 400, -59, 1897, 2048, 140, 0, 209, 255),
    VTX(160, 400, -79, 1687, 2048, 209, 0, 140, 255),
    VTX(160, 20, -79, 1687, 0, 209, 0, 140, 255),
    VTX(200, 400, -79, 1385, 2048, 48, 0, 140, 255),
    VTX(200, 20, -79, 1385, 0, 48, 0, 140, 255),
    VTX(220, 400, -59, 1175, 2048, 117, 0, 209, 255),
    VTX(220, 20, -59, 1175, 0, 117, 0, 209, 255),
    VTX(140, 20, -19, 2199, 0, 140, 0, 48, 255),
    VTX(140, 400, -19, 2199, 2048, 140, 0, 48, 255),
    VTX(200, 20, 0, 663, 0, 48, 0, 117, 255),
    VTX(200, 400, 0, 663, 2048, 48, 0, 117, 255),
    VTX(160, 400, 0, 361, 2048, 209, 0, 117, 255),
    VTX(160, 20, 0, 361, 0, 209, 0, 117, 255),
    VTX(140, 400, -19, 151, 2048, 140, 0, 48, 255),
    VTX(140, 20, -19, 151, 0, 140, 0, 48, 255),
}; 

static Vtx syotes2_old_room_00Vtx_007890[2] = {
    VTX(220, 20, -19, 873, 0, 117, 0, 48, 255),
    VTX(220, 400, -19, 873, 2048, 117, 0, 48, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0078B0[16] = {
    VTX(200, 0, -79, 1024, 0, 48, 0, 140, 255),
    VTX(200, 20, -79, 1024, 1024, 48, 0, 140, 255),
    VTX(220, 20, -59, -1023, 1024, 117, 0, 209, 255),
    VTX(220, 0, -59, -1023, 0, 117, 0, 209, 255),
    VTX(160, 0, -79, 2048, 0, 209, 0, 140, 255),
    VTX(160, 20, -79, 2048, 1024, 209, 0, 140, 255),
    VTX(200, 20, -79, 0, 1024, 48, 0, 140, 255),
    VTX(200, 0, -79, 0, 0, 48, 0, 140, 255),
    VTX(140, 0, -59, 2048, 0, 140, 0, 209, 255),
    VTX(140, 20, -59, 2048, 1024, 140, 0, 209, 255),
    VTX(160, 20, -79, 0, 1024, 209, 0, 140, 255),
    VTX(160, 0, -79, 0, 0, 209, 0, 140, 255),
    VTX(140, 0, -19, 2048, 0, 140, 0, 48, 255),
    VTX(140, 20, -19, 2048, 1024, 140, 0, 48, 255),
    VTX(140, 20, -59, 0, 1024, 140, 0, 209, 255),
    VTX(140, 0, -59, 0, 0, 140, 0, 209, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0079B0[16] = {
    VTX(220, 0, -59, 2048, 0, 117, 0, 209, 255),
    VTX(220, 0, -19, 5120, 0, 117, 0, 48, 255),
    VTX(200, 0, 0, 2048, 0, 48, 0, 117, 255),
    VTX(160, 0, 0, -1023, 0, 209, 0, 117, 255),
    VTX(220, 20, -59, 2048, 1024, 117, 0, 209, 255),
    VTX(220, 20, -19, 0, 1024, 117, 0, 48, 255),
    VTX(220, 0, -19, 0, 0, 117, 0, 48, 255),
    VTX(220, 20, -19, 5120, 1024, 117, 0, 48, 255),
    VTX(200, 20, 0, 3072, 1024, 48, 0, 117, 255),
    VTX(200, 0, 0, 3072, 0, 48, 0, 117, 255),
    VTX(200, 20, 0, 2048, 1024, 48, 0, 117, 255),
    VTX(160, 20, 0, 0, 1024, 209, 0, 117, 255),
    VTX(160, 0, 0, 0, 0, 209, 0, 117, 255),
    VTX(160, 20, 0, -1023, 1024, 209, 0, 117, 255),
    VTX(140, 20, -19, -3071, 1024, 140, 0, 48, 255),
    VTX(140, 0, -19, -3071, 0, 140, 0, 48, 255),
}; 

Gfx syotes2_old_room_00Dlist0x007AB0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002C70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes2_old_room_00Vtx_007790[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(8, 9, 1, 0),
    gsSP1Triangle(8, 1, 0, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(13, 12, 14, 0),
    gsSP1Triangle(13, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_007790[6], 2, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_007790[10], 2, 2),
    gsSPVertex(&syotes2_old_room_00Vtx_007890[0], 2, 4),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsSP1Triangle(1, 0, 5, 0),
    gsSP1Triangle(1, 5, 4, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002470, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0078B0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0079B0[0], 16, 0),
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

static Vtx syotes2_old_room_00Vtx_007CC0[18] = {
    VTX(-159, 20, -319, 1687, 0, 48, 0, 140, 255),
    VTX(-159, 400, -319, 1687, 2048, 48, 0, 140, 255),
    VTX(-139, 400, -299, 1897, 2048, 117, 0, 209, 255),
    VTX(-139, 20, -299, 1897, 0, 117, 0, 209, 255),
    VTX(-139, 400, -259, 2199, 2048, 117, 0, 48, 255),
    VTX(-139, 20, -259, 2199, 0, 117, 0, 48, 255),
    VTX(-139, 20, -259, 151, 0, 117, 0, 48, 255),
    VTX(-139, 400, -259, 151, 2048, 117, 0, 48, 255),
    VTX(-159, 400, -239, 361, 2048, 48, 0, 117, 255),
    VTX(-159, 20, -239, 361, 0, 48, 0, 117, 255),
    VTX(-199, 400, -239, 663, 2048, 209, 0, 117, 255),
    VTX(-199, 20, -239, 663, 0, 209, 0, 117, 255),
    VTX(-219, 400, -259, 873, 2048, 140, 0, 48, 255),
    VTX(-219, 20, -259, 873, 0, 140, 0, 48, 255),
    VTX(-219, 400, -299, 1175, 2048, 140, 0, 209, 255),
    VTX(-219, 20, -299, 1175, 0, 140, 0, 209, 255),
    VTX(-199, 20, -319, 1385, 0, 209, 0, 140, 255),
    VTX(-199, 400, -319, 1385, 2048, 209, 0, 140, 255),
}; 

static Vtx syotes2_old_room_00Vtx_007DE0[16] = {
    VTX(-199, 0, -319, 0, 0, 209, 0, 140, 255),
    VTX(-199, 20, -319, 0, 1024, 209, 0, 140, 255),
    VTX(-159, 20, -319, 2048, 1024, 48, 0, 140, 255),
    VTX(-159, 0, -319, 2048, 0, 48, 0, 140, 255),
    VTX(-219, 0, -259, 0, 0, 140, 0, 48, 255),
    VTX(-219, 20, -259, 0, 1024, 140, 0, 48, 255),
    VTX(-219, 20, -299, 2048, 1024, 140, 0, 209, 255),
    VTX(-219, 0, -299, 2048, 0, 140, 0, 209, 255),
    VTX(-219, 0, -299, -1023, 0, 140, 0, 209, 255),
    VTX(-219, 20, -299, -1023, 1024, 140, 0, 209, 255),
    VTX(-199, 20, -319, 1024, 1024, 209, 0, 140, 255),
    VTX(-199, 0, -319, 1024, 0, 209, 0, 140, 255),
    VTX(-139, 0, -299, 0, 0, 117, 0, 209, 255),
    VTX(-139, 20, -299, 0, 1024, 117, 0, 209, 255),
    VTX(-139, 20, -259, 2048, 1024, 117, 0, 48, 255),
    VTX(-139, 0, -259, 2048, 0, 117, 0, 48, 255),
}; 

static Vtx syotes2_old_room_00Vtx_007EE0[16] = {
    VTX(-139, 0, -259, -3071, 0, 117, 0, 48, 255),
    VTX(-159, 0, -319, 0, 0, 48, 0, 140, 255),
    VTX(-159, 0, -239, 0, 0, 48, 0, 117, 255),
    VTX(-199, 0, -239, 3072, 0, 209, 0, 117, 255),
    VTX(-139, 20, -259, -3071, 1024, 117, 0, 48, 255),
    VTX(-159, 20, -239, -1023, 1024, 48, 0, 117, 255),
    VTX(-159, 0, -239, -1023, 0, 48, 0, 117, 255),
    VTX(-159, 20, -319, 0, 1024, 48, 0, 140, 255),
    VTX(-139, 20, -299, 2048, 1024, 117, 0, 209, 255),
    VTX(-139, 0, -299, 2048, 0, 117, 0, 209, 255),
    VTX(-159, 20, -239, 0, 1024, 48, 0, 117, 255),
    VTX(-199, 20, -239, 2048, 1024, 209, 0, 117, 255),
    VTX(-199, 0, -239, 2048, 0, 209, 0, 117, 255),
    VTX(-199, 20, -239, 3072, 1024, 209, 0, 117, 255),
    VTX(-219, 20, -259, 5120, 1024, 140, 0, 48, 255),
    VTX(-219, 0, -259, 5120, 0, 140, 0, 48, 255),
}; 

Gfx syotes2_old_room_00Dlist0x007FE0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002C70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes2_old_room_00Vtx_007CC0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_007CC0[1], 1, 1),
    gsSPVertex(&syotes2_old_room_00Vtx_007CC0[12], 6, 2),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 7, 0),
    gsSP1Triangle(5, 7, 6, 0),
    gsSP1Triangle(6, 7, 1, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002470, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_007DE0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_007EE0[0], 16, 0),
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

static Vtx syotes2_old_room_00Vtx_0081E8[16] = {
    VTX(220, 20, -299, 1175, 0, 117, 0, 209, 255),
    VTX(220, 400, -299, 1175, 2048, 117, 0, 209, 255),
    VTX(220, 400, -259, 873, 2048, 117, 0, 48, 255),
    VTX(220, 20, -259, 873, 0, 117, 0, 48, 255),
    VTX(200, 400, -239, 663, 2048, 48, 0, 117, 255),
    VTX(200, 20, -239, 663, 0, 48, 0, 117, 255),
    VTX(160, 400, -239, 361, 2048, 209, 0, 117, 255),
    VTX(160, 20, -239, 361, 0, 209, 0, 117, 255),
    VTX(140, 400, -259, 151, 2048, 140, 0, 48, 255),
    VTX(140, 20, -259, 151, 0, 140, 0, 48, 255),
    VTX(140, 20, -299, 1897, 0, 140, 0, 209, 255),
    VTX(140, 400, -299, 1897, 2048, 140, 0, 209, 255),
    VTX(160, 400, -319, 1687, 2048, 209, 0, 140, 255),
    VTX(160, 20, -319, 1687, 0, 209, 0, 140, 255),
    VTX(140, 20, -259, 2199, 0, 140, 0, 48, 255),
    VTX(140, 400, -259, 2199, 2048, 140, 0, 48, 255),
}; 

static Vtx syotes2_old_room_00Vtx_0082E8[2] = {
    VTX(200, 400, -319, 1385, 2048, 48, 0, 140, 255),
    VTX(200, 20, -319, 1385, 0, 48, 0, 140, 255),
}; 

static Vtx syotes2_old_room_00Vtx_008308[16] = {
    VTX(160, 0, -319, 2048, 0, 209, 0, 140, 255),
    VTX(160, 20, -319, 2048, 1024, 209, 0, 140, 255),
    VTX(200, 20, -319, 0, 1024, 48, 0, 140, 255),
    VTX(200, 0, -319, 0, 0, 48, 0, 140, 255),
    VTX(140, 0, -259, 2048, 0, 140, 0, 48, 255),
    VTX(140, 20, -259, 2048, 1024, 140, 0, 48, 255),
    VTX(140, 20, -299, 0, 1024, 140, 0, 209, 255),
    VTX(140, 0, -299, 0, 0, 140, 0, 209, 255),
    VTX(140, 0, -299, 2048, 0, 140, 0, 209, 255),
    VTX(140, 20, -299, 2048, 1024, 140, 0, 209, 255),
    VTX(160, 20, -319, 0, 1024, 209, 0, 140, 255),
    VTX(160, 0, -319, 0, 0, 209, 0, 140, 255),
    VTX(200, 0, -319, 1024, 0, 48, 0, 140, 255),
    VTX(200, 20, -319, 1024, 1024, 48, 0, 140, 255),
    VTX(220, 20, -299, -1023, 1024, 117, 0, 209, 255),
    VTX(220, 0, -299, -1023, 0, 117, 0, 209, 255),
}; 

static Vtx syotes2_old_room_00Vtx_008408[16] = {
    VTX(220, 0, -299, 2048, 0, 117, 0, 209, 255),
    VTX(220, 0, -259, 5120, 0, 117, 0, 48, 255),
    VTX(200, 0, -239, 2048, 0, 48, 0, 117, 255),
    VTX(160, 0, -239, -1023, 0, 209, 0, 117, 255),
    VTX(220, 20, -299, 2048, 1024, 117, 0, 209, 255),
    VTX(220, 20, -259, 0, 1024, 117, 0, 48, 255),
    VTX(220, 0, -259, 0, 0, 117, 0, 48, 255),
    VTX(220, 20, -259, 5120, 1024, 117, 0, 48, 255),
    VTX(200, 20, -239, 3072, 1024, 48, 0, 117, 255),
    VTX(200, 0, -239, 3072, 0, 48, 0, 117, 255),
    VTX(200, 20, -239, 2048, 1024, 48, 0, 117, 255),
    VTX(160, 20, -239, 0, 1024, 209, 0, 117, 255),
    VTX(160, 0, -239, 0, 0, 209, 0, 117, 255),
    VTX(160, 20, -239, -1023, 1024, 209, 0, 117, 255),
    VTX(140, 20, -259, -3071, 1024, 140, 0, 48, 255),
    VTX(140, 0, -259, -3071, 0, 140, 0, 48, 255),
}; 

Gfx syotes2_old_room_00Dlist0x008508[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002C70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes2_old_room_00Vtx_0081E8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(7, 6, 8, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(14, 15, 11, 0),
    gsSP1Triangle(14, 11, 10, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_0081E8[1], 1, 1),
    gsSPVertex(&syotes2_old_room_00Vtx_0081E8[12], 2, 2),
    gsSPVertex(&syotes2_old_room_00Vtx_0082E8[0], 2, 4),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 1, 0),
    gsSP1Triangle(5, 1, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes2_old_sceneTex_002470, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_008308[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes2_old_room_00Vtx_008408[0], 16, 0),
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

Gfx syotes2_old_room_00Dlist0x008718[] = {
    gsSPDisplayList(syotes2_old_room_00Dlist0x001B50),
    gsSPDisplayList(syotes2_old_room_00Dlist0x006B40),
    gsSPDisplayList(syotes2_old_room_00Dlist0x007060),
    gsSPDisplayList(syotes2_old_room_00Dlist0x007588),
    gsSPDisplayList(syotes2_old_room_00Dlist0x007AB0),
    gsSPDisplayList(syotes2_old_room_00Dlist0x007FE0),
    gsSPDisplayList(syotes2_old_room_00Dlist0x008508),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_008758[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


