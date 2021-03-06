#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_07.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_07Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_07Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_07Set0000Cmd02;
static SCmdMesh water_temple_room_07Set0000Cmd03;
static SCmdObjectList water_temple_room_07Set0000Cmd04;
static SCmdActorList water_temple_room_07Set0000Cmd05;
static SCmdEndMarker water_temple_room_07Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx water_temple_room_07Vtx_000080[4];
static Vtx water_temple_room_07Vtx_0000C0[32];
static Vtx water_temple_room_07Vtx_0002C0[63];
static Vtx water_temple_room_07Vtx_0006B0[39];
static Vtx water_temple_room_07Vtx_000920[32];
static Vtx water_temple_room_07Vtx_000B20[32];
static Vtx water_temple_room_07Vtx_000D20[32];
static Vtx water_temple_room_07Vtx_000F20[32];
static Vtx water_temple_room_07Vtx_001120[32];
static Vtx water_temple_room_07Vtx_001320[20];
static Vtx water_temple_room_07Vtx_001460[8];
static Vtx water_temple_room_07Vtx_0014E0[4];
static Vtx water_temple_room_07Vtx_001520[10];
static Vtx water_temple_room_07Vtx_0015C0[12];
static Vtx water_temple_room_07Vtx_001680[4];
static Vtx water_temple_room_07Vtx_0016C0[12];
static Vtx water_temple_room_07Vtx_001780[4];
static Vtx water_temple_room_07Vtx_0017C0[4];
static Vtx water_temple_room_07Vtx_001800[5];
static Vtx water_temple_room_07Vtx_001850[15];
static Vtx water_temple_room_07Vtx_001940[16];
static Vtx water_temple_room_07Vtx_001A40[8];

static SCmdEchoSettings water_temple_room_07Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_07Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_07Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_07Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_07MeshHeader0x000060 }; // 0x0018

static SCmdObjectList water_temple_room_07Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_07ObjectList0x000038 }; // 0x0020

static SCmdActorList water_temple_room_07Set0000Cmd05 = {  0x01, 0x02, (u32)water_temple_room_07ActorList0x00003C }; // 0x0028 }; 

static SCmdEndMarker water_temple_room_07Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 water_temple_room_07ObjectList0x000038[1] = {
	OBJECT_BOX,
}; 

ActorEntry water_temple_room_07ActorList0x00003C[2] = {
	{ ACTOR_DUNGEON_KEEP, -1820, 630, 540, 0, 0, 0, 0x0015 }, //0x00003C
	{ ACTOR_EN_BOX, -2540, 630, 540, 0, 0, 0, 0xFFFF }, //0x00004C
}; 

static u32 pad5C = 0;

MeshHeader0 water_temple_room_07MeshHeader0x000060 = { { 0 }, 0x01, (u32)&water_temple_room_07MeshDListEntry0x00006C, (u32)&(water_temple_room_07MeshDListEntry0x00006C) + sizeof(water_temple_room_07MeshDListEntry0x00006C) }; 

MeshEntry0 water_temple_room_07MeshDListEntry0x00006C[1] = {
	{ (u32)water_temple_room_07Dlist0x006A68, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad78 = 0;
static u32 pad7C = 0;

static Vtx water_temple_room_07Vtx_000080[4] = {
    VTX(-2150, -360, 220, -512, 512, 50, 50, 50, 255),
    VTX(-2150, -360, 200, -512, 1024, 50, 50, 50, 255),
    VTX(-2210, -360, 200, 1024, 1024, 50, 50, 50, 255),
    VTX(-2210, -360, 220, 1024, 512, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_0000C0[32] = {
    VTX(-1700, -200, 1380, 9216, 1536, 93, 93, 94, 255),
    VTX(-1700, 590, 1380, 9216, -8576, 37, 37, 38, 255),
    VTX(-1700, -200, 420, -3072, 1536, 255, 255, 255, 255),
    VTX(-1700, -360, 1380, 9216, 3584, 50, 50, 50, 255),
    VTX(-1700, -360, 420, -3072, 3584, 50, 50, 50, 255),
    VTX(-2300, 560, 1260, 0, 1024, 255, 255, 255, 255),
    VTX(-2300, 590, 1260, 0, 256, 50, 50, 50, 255),
    VTX(-2300, 590, 1340, 2048, 256, 50, 50, 50, 255),
    VTX(-2300, 560, 1340, 2048, 1024, 93, 93, 94, 255),
    VTX(-2060, 560, 1340, 2048, 1024, 93, 93, 94, 255),
    VTX(-2060, 590, 1340, 2048, 256, 50, 50, 50, 255),
    VTX(-2060, 590, 1260, 0, 256, 50, 50, 50, 255),
    VTX(-2060, 560, 1260, 0, 1024, 255, 255, 255, 255),
    VTX(-2060, 560, 1340, -1024, -1024, 50, 50, 50, 255),
    VTX(-2060, 560, 1260, -1024, 1024, 93, 93, 94, 255),
    VTX(-2300, 560, 1260, 5120, 1024, 93, 93, 94, 255),
    VTX(-2300, 560, 1340, 5120, -1024, 50, 50, 50, 255),
    VTX(-2060, 560, 1260, -1024, -256, 50, 50, 50, 255),
    VTX(-2060, 510, 1260, -1024, 1024, 255, 255, 255, 255),
    VTX(-2300, 510, 1260, 5120, 1024, 255, 255, 255, 255),
    VTX(-2300, 560, 1260, 5120, -256, 50, 50, 50, 255),
    VTX(-2060, 590, 1340, -2048, 256, 50, 50, 50, 255),
    VTX(-2060, 560, 1340, -2048, 1024, 204, 204, 204, 255),
    VTX(-2300, 560, 1340, 4096, 1024, 204, 204, 204, 255),
    VTX(-2300, 590, 1340, 4096, 256, 50, 50, 50, 255),
    VTX(-2660, -360, 1380, 11776, 1024, 50, 50, 50, 255),
    VTX(-2620, -360, 1340, 11264, 0, 255, 255, 255, 255),
    VTX(-2620, -360, 460, 0, 0, 255, 255, 255, 255),
    VTX(-2660, -360, 420, -512, 1024, 50, 50, 50, 255),
    VTX(-1700, -360, 420, -3072, 1024, 50, 50, 50, 255),
    VTX(-2660, -360, 420, 9216, 1024, 50, 50, 50, 255),
    VTX(-2620, -360, 460, 8704, 0, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_07Vtx_0002C0[63] = {
    VTX(-1740, -360, 460, -2560, 0, 255, 255, 255, 255),
    VTX(-1700, -360, 420, -3072, 1024, 50, 50, 50, 255),
    VTX(-2620, -360, 460, 8704, 0, 255, 255, 255, 255),
    VTX(-1700, -360, 1380, 8499, 1024, 50, 50, 50, 255),
    VTX(-1740, -360, 1340, 8051, 0, 255, 255, 255, 255),
    VTX(-2620, -360, 1340, -1789, 0, 255, 255, 255, 255),
    VTX(-2660, -360, 1380, -2236, 1024, 50, 50, 50, 255),
    VTX(-1700, -360, 420, 2560, 1024, 50, 50, 50, 255),
    VTX(-1740, -360, 460, 2048, 0, 255, 255, 255, 255),
    VTX(-1740, -360, 1340, -9216, 0, 255, 255, 255, 255),
    VTX(-1700, -360, 1380, -9728, 1024, 50, 50, 50, 255),
    VTX(-1740, -360, 1340, 7936, 2816, 93, 93, 94, 255),
    VTX(-1740, -360, 460, 7936, -8448, 93, 93, 94, 255),
    VTX(-1880, -360, 600, 6144, -6656, 255, 255, 255, 255),
    VTX(-1880, -360, 1200, 6144, 1024, 255, 255, 255, 255),
    VTX(-2020, -360, 900, 4352, -2816, 255, 255, 255, 255),
    VTX(-2020, -360, 1060, 4352, -768, 50, 50, 50, 255),
    VTX(-2020, -360, 740, 4352, -4864, 50, 50, 50, 255),
    VTX(-2620, -360, 1340, -3328, 2816, 93, 93, 94, 255),
    VTX(-2480, -360, 1200, -1536, 1024, 255, 255, 255, 255),
    VTX(-2180, -360, 1060, 2304, -768, 255, 255, 255, 255),
    VTX(-2340, -360, 1060, 256, -768, 50, 50, 50, 255),
    VTX(-2620, -360, 460, -3328, -8448, 93, 93, 94, 255),
    VTX(-2480, -360, 600, -1536, -6656, 255, 255, 255, 255),
    VTX(-2340, -360, 900, 256, -2816, 255, 255, 255, 255),
    VTX(-2340, -360, 740, 256, -4864, 50, 50, 50, 255),
    VTX(-2180, -360, 740, 2304, -4864, 255, 255, 255, 255),
    VTX(-2660, -360, 1380, 11776, 1024, 50, 50, 50, 255),
    VTX(-1700, -200, 1380, -512, -1024, 255, 255, 255, 255),
    VTX(-1700, -360, 1380, -512, 1024, 50, 50, 50, 255),
    VTX(-2660, -200, 1380, 11776, -1024, 93, 93, 94, 255),
    VTX(-2660, 510, 1380, 11776, -10113, 50, 50, 50, 255),
    VTX(-1700, 510, 1380, -512, -10113, 50, 50, 50, 255),
    VTX(-1700, -200, 1380, -512, -1024, 255, 255, 255, 255),
    VTX(-2660, -200, 1380, 11776, -1024, 93, 93, 94, 255),
    VTX(-2660, -360, 420, 9216, 3584, 50, 50, 50, 255),
    VTX(-2660, -200, 420, 9216, 1536, 93, 93, 94, 255),
    VTX(-2660, -200, 1380, -3072, 1536, 255, 255, 255, 255),
    VTX(-2660, -360, 1380, -3072, 3584, 50, 50, 50, 255),
    VTX(-2660, 590, 420, 9216, -8576, 37, 37, 38, 255),
    VTX(-2660, 590, 1380, -3072, -8576, 50, 50, 50, 255),
    VTX(-1700, -200, 420, 9728, -512, 93, 93, 94, 255),
    VTX(-1700, 590, 420, 9728, -10624, 50, 50, 50, 255),
    VTX(-2660, -200, 420, -2560, -512, 255, 255, 255, 255),
    VTX(-2660, 590, 420, -2560, -10624, 37, 37, 38, 255),
    VTX(-1700, -360, 420, 9728, 1536, 50, 50, 50, 255),
    VTX(-2040, -200, 420, 5376, -512, 255, 255, 255, 255),
    VTX(-2040, -360, 420, 5376, 1536, 255, 255, 255, 255),
    VTX(-2660, -360, 420, -2560, 1536, 50, 50, 50, 255),
    VTX(-2320, -360, 420, 1792, 1536, 255, 255, 255, 255),
    VTX(-2320, -200, 420, 1792, -512, 255, 255, 255, 255),
    VTX(-2320, -360, 420, -2560, 2560, 255, 255, 255, 255),
    VTX(-2040, -360, 420, 4608, 2560, 50, 50, 50, 255),
    VTX(-2180, -360, 320, 1024, 0, 255, 255, 255, 255),
    VTX(-2320, -360, 220, -2560, -2560, 50, 50, 50, 255),
    VTX(-2040, -360, 220, 4608, -2560, 50, 50, 50, 255),
    VTX(-2040, -360, 420, 3072, 1024, 50, 50, 50, 255),
    VTX(-2040, -200, 420, 3072, -3072, 93, 93, 94, 255),
    VTX(-2040, -360, 220, -2048, 1024, 255, 255, 255, 255),
    VTX(-2040, -200, 220, -2048, -3072, 50, 50, 50, 255),
    VTX(-2320, -360, 220, -2048, 1024, 50, 50, 50, 255),
    VTX(-2320, -200, 220, -2048, -3072, 50, 50, 50, 255),
    VTX(-2320, -360, 420, 3072, 1024, 93, 93, 94, 255),
}; 

static Vtx water_temple_room_07Vtx_0006B0[39] = {
    VTX(-2320, -200, 220, -2048, -3072, 50, 50, 50, 255),
    VTX(-2320, -200, 420, 3072, -3072, 93, 93, 94, 255),
    VTX(-2320, -360, 420, 3072, 1024, 93, 93, 94, 255),
    VTX(-2320, -200, 420, -2560, 2560, 93, 93, 94, 255),
    VTX(-2320, -200, 220, -2560, -2560, 50, 50, 50, 255),
    VTX(-2180, -200, 320, 1024, 0, 255, 255, 255, 255),
    VTX(-2040, -200, 420, 4608, 2560, 93, 93, 94, 255),
    VTX(-2040, -200, 220, 4608, -2560, 50, 50, 50, 255),
    VTX(-1700, 590, 1380, 9216, -8576, 37, 37, 38, 255),
    VTX(-1700, 590, 420, -3072, -8576, 50, 50, 50, 255),
    VTX(-1700, -200, 420, -3072, 1536, 255, 255, 255, 255),
    VTX(-2300, 590, 780, 3072, 1024, 93, 93, 94, 255),
    VTX(-2660, 590, 420, 7680, -3584, 37, 37, 38, 255),
    VTX(-1700, 590, 420, -4608, -3584, 50, 50, 50, 255),
    VTX(-2060, 590, 780, 0, 1024, 93, 93, 94, 255),
    VTX(-2300, 590, 1260, 5120, -1024, 50, 50, 50, 255),
    VTX(-2300, 510, 1260, 5120, 1024, 204, 204, 204, 255),
    VTX(-2660, 510, 1260, 14336, 1024, 93, 93, 94, 255),
    VTX(-2660, 590, 1260, 14336, -1024, 50, 50, 50, 255),
    VTX(-2300, 590, 1260, 3072, 7168, 93, 93, 94, 255),
    VTX(-2660, 590, 1260, 7680, 7168, 50, 50, 50, 255),
    VTX(-1700, 590, 1260, -10240, -1024, 50, 50, 50, 255),
    VTX(-1700, 510, 1260, -10240, 1024, 93, 93, 94, 255),
    VTX(-2060, 510, 1260, -1024, 1024, 204, 204, 204, 255),
    VTX(-2060, 590, 1260, -1024, -1024, 50, 50, 50, 255),
    VTX(-1700, 510, 1260, -8192, -2048, 50, 50, 50, 255),
    VTX(-1700, 510, 1380, -8192, 1024, 93, 93, 94, 255),
    VTX(-2660, 510, 1380, 16384, 1024, 93, 93, 94, 255),
    VTX(-2660, 510, 1260, 16384, -2048, 50, 50, 50, 255),
    VTX(-2060, 590, 1260, 0, 7168, 50, 50, 50, 255),
    VTX(-1700, 590, 1260, -4608, 7168, 50, 50, 50, 255),
    VTX(-2230, -200, 220, -768, -3072, 50, 50, 50, 255),
    VTX(-2320, -200, 220, -3072, -3072, 50, 50, 50, 255),
    VTX(-2320, -360, 220, -3072, 1024, 255, 255, 255, 255),
    VTX(-2230, -360, 220, -768, 1024, 255, 255, 255, 255),
    VTX(-2130, -360, 220, 1792, 1024, 255, 255, 255, 255),
    VTX(-2040, -360, 220, 4096, 1024, 50, 50, 50, 255),
    VTX(-2040, -200, 220, 4096, -3072, 50, 50, 50, 255),
    VTX(-2130, -200, 220, 1792, -3072, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_000920[32] = {
    VTX(-2000, -360, 720, 1024, 1024, 255, 255, 255, 255),
    VTX(-2000, -300, 720, 1024, 0, 93, 93, 94, 255),
    VTX(-2000, -300, 760, 0, 0, 50, 50, 50, 255),
    VTX(-2000, -360, 760, 0, 1024, 255, 255, 255, 255),
    VTX(-2000, -360, 760, 1024, 1024, 255, 255, 255, 255),
    VTX(-2000, -300, 760, 1024, 0, 93, 93, 94, 255),
    VTX(-2040, -300, 760, 0, 0, 50, 50, 50, 255),
    VTX(-2040, -360, 760, 0, 1024, 255, 255, 255, 255),
    VTX(-2320, -360, 760, 1024, 1024, 255, 255, 255, 255),
    VTX(-2320, -300, 760, 1024, 0, 93, 93, 94, 255),
    VTX(-2360, -300, 760, 0, 0, 50, 50, 50, 255),
    VTX(-2360, -360, 760, 0, 1024, 255, 255, 255, 255),
    VTX(-2320, -360, 720, 1024, 1024, 255, 255, 255, 255),
    VTX(-2320, -300, 720, 1024, 0, 93, 93, 94, 255),
    VTX(-2320, -300, 760, 0, 0, 50, 50, 50, 255),
    VTX(-2320, -360, 760, 0, 1024, 255, 255, 255, 255),
    VTX(-2360, -360, 760, 1024, 1024, 255, 255, 255, 255),
    VTX(-2360, -300, 760, 1024, 0, 93, 93, 94, 255),
    VTX(-2360, -300, 720, 0, 0, 50, 50, 50, 255),
    VTX(-2360, -360, 720, 0, 1024, 255, 255, 255, 255),
    VTX(-2360, -360, 720, 1024, 1024, 255, 255, 255, 255),
    VTX(-2360, -300, 720, 1024, 0, 93, 93, 94, 255),
    VTX(-2320, -300, 720, 0, 0, 50, 50, 50, 255),
    VTX(-2320, -360, 720, 0, 1024, 255, 255, 255, 255),
    VTX(-2360, -360, 1040, 1024, 1024, 255, 255, 255, 255),
    VTX(-2360, -300, 1040, 1024, 0, 93, 93, 94, 255),
    VTX(-2320, -300, 1040, 0, 0, 50, 50, 50, 255),
    VTX(-2320, -360, 1040, 0, 1024, 255, 255, 255, 255),
    VTX(-2360, -360, 1080, 1024, 1024, 255, 255, 255, 255),
    VTX(-2360, -300, 1080, 1024, 0, 93, 93, 94, 255),
    VTX(-2360, -300, 1040, 0, 0, 50, 50, 50, 255),
    VTX(-2360, -360, 1040, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_07Vtx_000B20[32] = {
    VTX(-2320, -360, 1040, 1024, 1024, 255, 255, 255, 255),
    VTX(-2320, -300, 1040, 1024, 0, 93, 93, 94, 255),
    VTX(-2320, -300, 1080, 0, 0, 50, 50, 50, 255),
    VTX(-2320, -360, 1080, 0, 1024, 255, 255, 255, 255),
    VTX(-2320, -360, 1080, 1024, 1024, 255, 255, 255, 255),
    VTX(-2320, -300, 1080, 1024, 0, 93, 93, 94, 255),
    VTX(-2360, -300, 1080, 0, 0, 50, 50, 50, 255),
    VTX(-2360, -360, 1080, 0, 1024, 255, 255, 255, 255),
    VTX(-2000, -360, 1080, 1024, 1024, 255, 255, 255, 255),
    VTX(-2000, -300, 1080, 1024, 0, 93, 93, 94, 255),
    VTX(-2040, -300, 1080, 0, 0, 50, 50, 50, 255),
    VTX(-2040, -360, 1080, 0, 1024, 255, 255, 255, 255),
    VTX(-2000, -360, 1040, 1024, 1024, 255, 255, 255, 255),
    VTX(-2000, -300, 1040, 1024, 0, 93, 93, 94, 255),
    VTX(-2000, -300, 1080, 0, 0, 50, 50, 50, 255),
    VTX(-2000, -360, 1080, 0, 1024, 255, 255, 255, 255),
    VTX(-2040, -360, 1080, 1024, 1024, 255, 255, 255, 255),
    VTX(-2040, -300, 1080, 1024, 0, 93, 93, 94, 255),
    VTX(-2040, -300, 1040, 0, 0, 50, 50, 50, 255),
    VTX(-2040, -360, 1040, 0, 1024, 255, 255, 255, 255),
    VTX(-2040, -360, 1040, 1024, 1024, 255, 255, 255, 255),
    VTX(-2040, -300, 1040, 1024, 0, 93, 93, 94, 255),
    VTX(-2000, -300, 1040, 0, 0, 50, 50, 50, 255),
    VTX(-2000, -360, 1040, 0, 1024, 255, 255, 255, 255),
    VTX(-2040, -360, 720, 1024, 1024, 255, 255, 255, 255),
    VTX(-2040, -300, 720, 1024, 0, 93, 93, 94, 255),
    VTX(-2000, -300, 720, 0, 0, 50, 50, 50, 255),
    VTX(-2000, -360, 720, 0, 1024, 255, 255, 255, 255),
    VTX(-2040, -360, 760, 1024, 1024, 255, 255, 255, 255),
    VTX(-2040, -300, 760, 1024, 0, 93, 93, 94, 255),
    VTX(-2040, -300, 720, 0, 0, 50, 50, 50, 255),
    VTX(-2040, -360, 720, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_07Vtx_000D20[32] = {
    VTX(-2340, 630, 740, -1024, 0, 255, 255, 255, 255),
    VTX(-2300, 630, 780, 0, 1024, 93, 93, 94, 255),
    VTX(-2060, 630, 780, 6144, 1024, 93, 93, 94, 255),
    VTX(-2020, 630, 740, 7168, 0, 255, 255, 255, 255),
    VTX(-2300, 630, 1340, -1024, 0, 93, 93, 94, 255),
    VTX(-2300, 590, 1340, -1024, 1024, 37, 37, 38, 255),
    VTX(-2300, 590, 780, 13312, 1024, 37, 37, 38, 255),
    VTX(-2300, 630, 780, 13312, 0, 255, 255, 255, 255),
    VTX(-2060, 590, 1340, -1024, 1024, 50, 50, 50, 255),
    VTX(-2060, 630, 1340, -1024, 0, 255, 255, 255, 255),
    VTX(-2060, 630, 780, 13312, 0, 93, 93, 94, 255),
    VTX(-2060, 590, 780, 13312, 1024, 37, 37, 38, 255),
    VTX(-2060, 590, 780, 5120, 1024, 37, 37, 38, 255),
    VTX(-2060, 630, 780, 5120, 0, 255, 255, 255, 255),
    VTX(-2300, 630, 780, -1024, 0, 93, 93, 94, 255),
    VTX(-2300, 590, 780, -1024, 1024, 37, 37, 38, 255),
    VTX(-2060, 630, 1340, 0, 0, 93, 93, 94, 255),
    VTX(-2060, 590, 1340, 0, 1024, 50, 50, 50, 255),
    VTX(-2300, 590, 1340, 6144, 1024, 50, 50, 50, 255),
    VTX(-2300, 630, 1340, 6144, 0, 255, 255, 255, 255),
    VTX(-2020, 630, 740, -1024, 0, 255, 255, 255, 255),
    VTX(-2060, 630, 780, 0, 1024, 93, 93, 94, 255),
    VTX(-2060, 630, 1340, 14336, 1024, 93, 93, 94, 255),
    VTX(-2020, 630, 1380, 15360, 0, 255, 255, 255, 255),
    VTX(-2060, 630, 1340, -1024, 1024, 93, 93, 94, 255),
    VTX(-2300, 630, 1340, 5120, 1024, 93, 93, 94, 255),
    VTX(-2340, 630, 1380, 6144, 0, 255, 255, 255, 255),
    VTX(-2020, 630, 1380, -2048, 0, 255, 255, 255, 255),
    VTX(-2340, 630, 1380, 15360, 8192, 255, 255, 255, 255),
    VTX(-2300, 630, 1340, 14336, 7168, 93, 93, 94, 255),
    VTX(-2300, 630, 780, 0, 7168, 93, 93, 94, 255),
    VTX(-2340, 630, 740, -1024, 8192, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_07Vtx_000F20[32] = {
    VTX(-2360, -300, 720, 1024, 1024, 93, 93, 94, 255),
    VTX(-2360, 590, 720, 1024, -10368, 50, 50, 50, 255),
    VTX(-2320, 590, 720, 0, -10368, 50, 50, 50, 255),
    VTX(-2320, -300, 720, 0, 1024, 255, 255, 255, 255),
    VTX(-2360, -300, 1040, 1024, 1024, 93, 93, 94, 255),
    VTX(-2360, 590, 1040, 1024, -10368, 50, 50, 50, 255),
    VTX(-2320, 590, 1040, 0, -10368, 50, 50, 50, 255),
    VTX(-2320, -300, 1040, 0, 1024, 255, 255, 255, 255),
    VTX(-2040, -300, 720, 1024, 1024, 93, 93, 94, 255),
    VTX(-2040, 590, 720, 1024, -10368, 50, 50, 50, 255),
    VTX(-2000, 590, 720, 0, -10368, 50, 50, 50, 255),
    VTX(-2000, -300, 720, 0, 1024, 255, 255, 255, 255),
    VTX(-2000, -300, 760, 1024, 1024, 93, 93, 94, 255),
    VTX(-2000, 590, 760, 1024, -10368, 50, 50, 50, 255),
    VTX(-2040, 590, 760, 0, -10368, 50, 50, 50, 255),
    VTX(-2040, -300, 760, 0, 1024, 255, 255, 255, 255),
    VTX(-2360, -300, 1080, 1024, 1024, 93, 93, 94, 255),
    VTX(-2360, 590, 1080, 1024, -10368, 50, 50, 50, 255),
    VTX(-2360, 590, 1040, 0, -10368, 50, 50, 50, 255),
    VTX(-2360, -300, 1040, 0, 1024, 255, 255, 255, 255),
    VTX(-2320, -300, 1040, 1024, 1024, 93, 93, 94, 255),
    VTX(-2320, 590, 1040, 1024, -10368, 50, 50, 50, 255),
    VTX(-2320, 590, 1080, 0, -10368, 50, 50, 50, 255),
    VTX(-2320, -300, 1080, 0, 1024, 255, 255, 255, 255),
    VTX(-2210, -260, 220, 1024, -2048, 255, 255, 255, 255),
    VTX(-2210, -260, 200, 0, -2048, 50, 50, 50, 255),
    VTX(-2150, -260, 200, 0, 1024, 50, 50, 50, 255),
    VTX(-2150, -260, 220, 1024, 1024, 255, 255, 255, 255),
    VTX(-2320, -300, 1080, 1024, 1024, 93, 93, 94, 255),
    VTX(-2320, 590, 1080, 1024, -10368, 50, 50, 50, 255),
    VTX(-2360, 590, 1080, 0, -10368, 50, 50, 50, 255),
    VTX(-2360, -300, 1080, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_07Vtx_001120[32] = {
    VTX(-2150, -260, 220, 1024, -1536, 255, 255, 255, 255),
    VTX(-2150, -260, 200, 0, -1536, 50, 50, 50, 255),
    VTX(-2150, -360, 200, 0, 1024, 50, 50, 50, 255),
    VTX(-2150, -360, 220, 1024, 1024, 50, 50, 50, 255),
    VTX(-2320, -300, 760, 1024, 1024, 93, 93, 94, 255),
    VTX(-2320, 590, 760, 1024, -10368, 50, 50, 50, 255),
    VTX(-2360, 590, 760, 0, -10368, 50, 50, 50, 255),
    VTX(-2360, -300, 760, 0, 1024, 255, 255, 255, 255),
    VTX(-2000, -300, 1080, 1024, 1024, 93, 93, 94, 255),
    VTX(-2000, 590, 1080, 1024, -10368, 50, 50, 50, 255),
    VTX(-2040, 590, 1080, 0, -10368, 50, 50, 50, 255),
    VTX(-2040, -300, 1080, 0, 1024, 255, 255, 255, 255),
    VTX(-2210, -360, 220, 0, 1024, 50, 50, 50, 255),
    VTX(-2210, -360, 200, 1024, 1024, 50, 50, 50, 255),
    VTX(-2210, -260, 200, 1024, -1536, 50, 50, 50, 255),
    VTX(-2210, -260, 220, 0, -1536, 255, 255, 255, 255),
    VTX(-2000, -300, 1040, 1024, 1024, 93, 93, 94, 255),
    VTX(-2000, 590, 1040, 1024, -10368, 50, 50, 50, 255),
    VTX(-2000, 590, 1080, 0, -10368, 50, 50, 50, 255),
    VTX(-2000, -300, 1080, 0, 1024, 255, 255, 255, 255),
    VTX(-2040, -300, 1080, 1024, 1024, 93, 93, 94, 255),
    VTX(-2040, 590, 1080, 1024, -10368, 50, 50, 50, 255),
    VTX(-2040, 590, 1040, 0, -10368, 50, 50, 50, 255),
    VTX(-2040, -300, 1040, 0, 1024, 255, 255, 255, 255),
    VTX(-2320, -300, 720, 1024, 1024, 93, 93, 94, 255),
    VTX(-2320, 590, 720, 1024, -10368, 50, 50, 50, 255),
    VTX(-2320, 590, 760, 0, -10368, 50, 50, 50, 255),
    VTX(-2320, -300, 760, 0, 1024, 255, 255, 255, 255),
    VTX(-2360, -300, 760, 1024, 1024, 93, 93, 94, 255),
    VTX(-2360, 590, 760, 1024, -10368, 50, 50, 50, 255),
    VTX(-2360, 590, 720, 0, -10368, 50, 50, 50, 255),
    VTX(-2360, -300, 720, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_07Vtx_001320[20] = {
    VTX(-2040, -300, 1040, 1024, 1024, 93, 93, 94, 255),
    VTX(-2040, 590, 1040, 1024, -10368, 50, 50, 50, 255),
    VTX(-2000, 590, 1040, 0, -10368, 50, 50, 50, 255),
    VTX(-2000, -300, 1040, 0, 1024, 255, 255, 255, 255),
    VTX(-2210, -200, 220, 1024, -3072, 50, 50, 50, 255),
    VTX(-2230, -200, 220, 0, -3072, 50, 50, 50, 255),
    VTX(-2230, -360, 220, 0, 1024, 255, 255, 255, 255),
    VTX(-2210, -360, 220, 1024, 1024, 50, 50, 50, 255),
    VTX(-2040, -300, 760, 1024, 1024, 93, 93, 94, 255),
    VTX(-2040, 590, 760, 1024, -10368, 50, 50, 50, 255),
    VTX(-2040, 590, 720, 0, -10368, 50, 50, 50, 255),
    VTX(-2040, -300, 720, 0, 1024, 255, 255, 255, 255),
    VTX(-2000, -300, 720, 1024, 1024, 93, 93, 94, 255),
    VTX(-2000, 590, 720, 1024, -10368, 50, 50, 50, 255),
    VTX(-2000, 590, 760, 0, -10368, 50, 50, 50, 255),
    VTX(-2000, -300, 760, 0, 1024, 255, 255, 255, 255),
    VTX(-2150, -360, 220, 4096, 1024, 255, 255, 255, 255),
    VTX(-2130, -360, 220, 5120, 1024, 255, 255, 255, 255),
    VTX(-2130, -200, 220, 5120, -3072, 50, 50, 50, 255),
    VTX(-2150, -200, 220, 4096, -3072, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_001460[8] = {
    VTX(-2660, 630, 420, -3072, 4096, 50, 50, 50, 255),
    VTX(-2340, 630, 740, 1024, 0, 255, 255, 255, 255),
    VTX(-2020, 630, 740, 5120, 0, 255, 255, 255, 255),
    VTX(-1700, 630, 420, 9216, 4096, 50, 50, 50, 255),
    VTX(-2020, 630, 1380, 5120, -8192, 255, 255, 255, 255),
    VTX(-1700, 630, 1380, 9216, -8192, 50, 50, 50, 255),
    VTX(-2660, 630, 1380, -3072, -8192, 50, 50, 50, 255),
    VTX(-2340, 630, 1380, 1024, -8192, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_07Vtx_0014E0[4] = {
    VTX(-2020, 210, 1040, 4096, -1024, 135, 135, 135, 255),
    VTX(-2020, 210, 760, 0, -1024, 135, 135, 135, 255),
    VTX(-2020, 110, 760, 0, 1024, 135, 135, 135, 255),
    VTX(-2020, 110, 1040, 4096, 1024, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_07Vtx_001520[10] = {
    VTX(-2020, -360, 740, 0, 1024, 50, 50, 50, 255),
    VTX(-2180, -360, 900, 1024, 0, 255, 255, 255, 255),
    VTX(-2020, -360, 900, 0, 0, 255, 255, 255, 255),
    VTX(-2340, -360, 740, 2048, 1024, 50, 50, 50, 255),
    VTX(-2180, -360, 740, 1024, 1024, 255, 255, 255, 255),
    VTX(-2210, -260, 220, 0, 1024, 255, 255, 255, 255),
    VTX(-2150, -260, 220, 2048, 1024, 255, 255, 255, 255),
    VTX(-2150, -200, 220, 2048, -1024, 50, 50, 50, 255),
    VTX(-2210, -200, 220, 0, -1024, 50, 50, 50, 255),
    VTX(-2020, -360, 1060, 0, -1024, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_0015C0[12] = {
    VTX(-2020, 590, 1040, 4096, -1024, 135, 135, 135, 255),
    VTX(-2020, 590, 760, 0, -1024, 135, 135, 135, 255),
    VTX(-2020, 490, 760, 0, 1024, 135, 135, 135, 255),
    VTX(-2020, 490, 1040, 4096, 1024, 135, 135, 135, 255),
    VTX(-2320, 590, 740, 4096, -1024, 135, 135, 135, 255),
    VTX(-2040, 590, 740, 0, -1024, 135, 135, 135, 255),
    VTX(-2040, 490, 740, 0, 1024, 135, 135, 135, 255),
    VTX(-2320, 490, 740, 4096, 1024, 135, 135, 135, 255),
    VTX(-2340, 590, 760, 4096, -1024, 135, 135, 135, 255),
    VTX(-2340, 590, 1040, 0, -1024, 135, 135, 135, 255),
    VTX(-2340, 490, 1040, 0, 1024, 135, 135, 135, 255),
    VTX(-2340, 490, 760, 4096, 1024, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_07Vtx_001680[4] = {
    VTX(-2020, -360, 1060, 0, -1024, 50, 50, 50, 255),
    VTX(-2180, -360, 900, 1024, 0, 255, 255, 255, 255),
    VTX(-2180, -360, 1060, 1024, -1024, 255, 255, 255, 255),
    VTX(-2340, -360, 1060, 2048, -1024, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_0016C0[12] = {
    VTX(-2040, 590, 1060, 4096, -1024, 135, 135, 135, 255),
    VTX(-2320, 590, 1060, 0, -1024, 135, 135, 135, 255),
    VTX(-2320, 490, 1060, 0, 1024, 135, 135, 135, 255),
    VTX(-2040, 490, 1060, 4096, 1024, 135, 135, 135, 255),
    VTX(-2040, 210, 1060, 4096, -1024, 135, 135, 135, 255),
    VTX(-2320, 210, 1060, 0, -1024, 135, 135, 135, 255),
    VTX(-2320, 110, 1060, 0, 1024, 135, 135, 135, 255),
    VTX(-2040, 110, 1060, 4096, 1024, 135, 135, 135, 255),
    VTX(-2340, 210, 760, 4096, -1024, 135, 135, 135, 255),
    VTX(-2340, 210, 1040, 0, -1024, 135, 135, 135, 255),
    VTX(-2340, 110, 1040, 0, 1024, 135, 135, 135, 255),
    VTX(-2340, 110, 760, 4096, 1024, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_07Vtx_001780[4] = {
    VTX(-2340, -360, 1060, 2048, -1024, 50, 50, 50, 255),
    VTX(-2180, -360, 900, 1024, 0, 255, 255, 255, 255),
    VTX(-2340, -360, 900, 2048, 0, 255, 255, 255, 255),
    VTX(-2340, -360, 740, 2048, 1024, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_0017C0[4] = {
    VTX(-2320, 210, 740, 4096, -1024, 135, 135, 135, 255),
    VTX(-2040, 210, 740, 0, -1024, 135, 135, 135, 255),
    VTX(-2040, 110, 740, 0, 1024, 135, 135, 135, 255),
    VTX(-2320, 110, 740, 4096, 1024, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_07Vtx_001800[5] = {
    VTX(-1700, 1030, 420, 0, -7099, 50, 50, 50, 255),
    VTX(-2180, 1030, 900, 4096, -3003, 93, 93, 94, 255),
    VTX(-2660, 1030, 420, 0, 1093, 50, 50, 50, 255),
    VTX(-1700, 1030, 1380, 8192, -7099, 50, 50, 50, 255),
    VTX(-2660, 1030, 1380, 8192, 1093, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_001850[15] = {
    VTX(-2660, 1030, 420, 0, -2048, 50, 50, 50, 255),
    VTX(-2660, 630, 420, 0, 2048, 93, 93, 94, 255),
    VTX(-1700, 630, 420, 8192, 2048, 255, 255, 255, 255),
    VTX(-1700, 1030, 1380, 8192, -2048, 50, 50, 50, 255),
    VTX(-2660, 630, 1380, 0, 2048, 255, 255, 255, 255),
    VTX(-2660, 1030, 1380, 0, -2048, 50, 50, 50, 255),
    VTX(-1700, 630, 1380, 8192, 2048, 93, 93, 94, 255),
    VTX(-2660, 1030, 1380, 8192, -2048, 50, 50, 50, 255),
    VTX(-2660, 630, 420, 0, 2048, 255, 255, 255, 255),
    VTX(-2660, 1030, 420, 0, -2048, 50, 50, 50, 255),
    VTX(-2660, 630, 1380, 8192, 2048, 93, 93, 94, 255),
    VTX(-1700, 1030, 420, 0, -2048, 50, 50, 50, 255),
    VTX(-1700, 630, 1380, 8192, 2048, 255, 255, 255, 255),
    VTX(-1700, 630, 420, 0, 2048, 93, 93, 94, 255),
    VTX(-1700, 1030, 420, 8192, -2048, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_001940[16] = {
    VTX(-1702, 530, 422, 10240, 512, 93, 93, 94, 255),
    VTX(-1702, 530, 1258, -4062, 512, 93, 93, 94, 255),
    VTX(-1702, 570, 1258, -4062, 0, 50, 50, 50, 255),
    VTX(-1702, 570, 422, 10240, 0, 50, 50, 50, 255),
    VTX(-2658, 570, 1258, 11537, 0, 50, 50, 50, 255),
    VTX(-1702, 570, 1258, -4779, 0, 50, 50, 50, 255),
    VTX(-1702, 530, 1258, -4779, 512, 93, 93, 94, 255),
    VTX(-2658, 530, 1258, 11537, 512, 93, 93, 94, 255),
    VTX(-2658, 530, 422, 11537, 512, 93, 93, 94, 255),
    VTX(-1702, 530, 422, -4779, 512, 93, 93, 94, 255),
    VTX(-1702, 570, 422, -4779, 0, 50, 50, 50, 255),
    VTX(-2658, 570, 422, 11537, 0, 50, 50, 50, 255),
    VTX(-2658, 530, 1258, -4062, 512, 93, 93, 94, 255),
    VTX(-2658, 530, 422, 10240, 512, 93, 93, 94, 255),
    VTX(-2658, 570, 422, 10240, 0, 50, 50, 50, 255),
    VTX(-2658, 570, 1258, -4062, 0, 50, 50, 50, 255),
}; 

static Vtx water_temple_room_07Vtx_001A40[8] = {
    VTX(-2660, -360, 200, 0, 0, 0, 0, 0, 0),
    VTX(-1700, -360, 200, 0, 0, 0, 0, 0, 0),
    VTX(-2660, 1030, 200, 0, 0, 0, 0, 0, 0),
    VTX(-1700, 1030, 200, 0, 0, 0, 0, 0, 0),
    VTX(-2660, -360, 1380, 0, 0, 0, 0, 0, 0),
    VTX(-1700, -360, 1380, 0, 0, 0, 0, 0, 0),
    VTX(-2660, 1030, 1380, 0, 0, 0, 0, 0, 0),
    VTX(-1700, 1030, 1380, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_07Dlist0x001AC0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_07Vtx_001A40[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_sceneTex_018B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_07Vtx_000080[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_07Tex_002268, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_07Vtx_0000C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&water_temple_room_07Vtx_0002C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 13, 17, 15, 0),
    gsSP2Triangles(18, 11, 14, 0, 18, 14, 19, 0),
    gsSP2Triangles(14, 20, 21, 0, 14, 21, 19, 0),
    gsSP2Triangles(14, 16, 20, 0, 22, 18, 19, 0),
    gsSP2Triangles(22, 19, 23, 0, 19, 24, 25, 0),
    gsSP2Triangles(19, 25, 23, 0, 19, 21, 24, 0),
    gsSP2Triangles(22, 23, 13, 0, 22, 13, 12, 0),
    gsSP2Triangles(23, 26, 17, 0, 23, 17, 13, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&water_temple_room_07Vtx_0002C0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 5, 8, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 10, 15, 0, 14, 15, 16, 0),
    gsSP2Triangles(12, 17, 18, 0, 12, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(22, 21, 24, 0, 23, 22, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 27, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&water_temple_room_07Vtx_0006B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 6, 5, 0),
    gsSP2Triangles(7, 5, 4, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(11, 19, 20, 0, 11, 20, 12, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(29, 14, 13, 0, 29, 13, 30, 0),
    gsSPVertex(&water_temple_room_07Vtx_0006B0[31], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_07Tex_002A68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_07Vtx_000920[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_07Vtx_000B20[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_07Tex_003268, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_07Vtx_000D20[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_07Tex_003A68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_07Vtx_000F20[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_07Vtx_001120[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_07Vtx_001320[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_07Tex_004268, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_07Vtx_001460[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 1, 0, 6, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_07Tex_004A68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_07Vtx_0014E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_07Vtx_001520[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(1, 0, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 1, 9, 2, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_07Vtx_0015C0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_07Vtx_001680[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_07Vtx_0016C0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_07Vtx_001780[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_07Vtx_0017C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_07Tex_005268, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_07Vtx_001800[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_07Tex_005A68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_07Vtx_001850[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 3, 0),
    gsSP2Triangles(11, 13, 12, 0, 0, 2, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_07Vtx_001940[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_07Tex_002268[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_07Tex_002268.rgb5a1.inc.c"
};

u64 water_temple_room_07Tex_002A68[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_07Tex_002A68.rgb5a1.inc.c"
};

u64 water_temple_room_07Tex_003268[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_07Tex_003268.rgb5a1.inc.c"
};

u64 water_temple_room_07Tex_003A68[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_07Tex_003A68.rgb5a1.inc.c"
};

u64 water_temple_room_07Tex_004268[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_07Tex_004268.rgb5a1.inc.c"
};

u64 water_temple_room_07Tex_004A68[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_07Tex_004A68.rgb5a1.inc.c"
};

u64 water_temple_room_07Tex_005268[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_07Tex_005268.rgb5a1.inc.c"
};

u64 water_temple_room_07Tex_005A68[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_07Tex_005A68.rgb5a1.inc.c"
};

Gfx water_temple_room_07Dlist0x006A68[] = {
    gsSPDisplayList(water_temple_room_07Dlist0x001AC0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_006A78[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


