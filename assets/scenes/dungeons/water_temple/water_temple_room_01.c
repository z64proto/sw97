#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_01.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_01Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_01Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_01Set0000Cmd02;
static SCmdMesh water_temple_room_01Set0000Cmd03;
static SCmdObjectList water_temple_room_01Set0000Cmd04;
static SCmdActorList water_temple_room_01Set0000Cmd05;
static SCmdEndMarker water_temple_room_01Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx water_temple_room_01Vtx_0000B0[32];
static Vtx water_temple_room_01Vtx_0002B0[16];
static Vtx water_temple_room_01Vtx_0003B0[4];
static Vtx water_temple_room_01Vtx_0003F0[5];
static Vtx water_temple_room_01Vtx_000440[5];
static Vtx water_temple_room_01Vtx_000490[9];
static Vtx water_temple_room_01Vtx_000520[16];
static Vtx water_temple_room_01Vtx_000620[20];
static Vtx water_temple_room_01Vtx_000760[8];
static Vtx water_temple_room_01Vtx_0007E0[8];
static Vtx water_temple_room_01Vtx_000860[24];
static Vtx water_temple_room_01Vtx_0009E0[16];
static Vtx water_temple_room_01Vtx_000AE0[8];
static Vtx water_temple_room_01Vtx_007040[16];
static Vtx water_temple_room_01Vtx_007140[8];
static Vtx water_temple_room_01Vtx_0071C0[8];
static Vtx water_temple_room_01Vtx_007240[16];
static Vtx water_temple_room_01Vtx_007340[32];
static Vtx water_temple_room_01Vtx_007540[32];
static Vtx water_temple_room_01Vtx_007740[16];
static Vtx water_temple_room_01Vtx_007840[20];
static Vtx water_temple_room_01Vtx_007980[16];
static Vtx water_temple_room_01Vtx_007A80[8];
static Vtx water_temple_room_01Vtx_00AF18[16];
static Vtx water_temple_room_01Vtx_00B018[8];
static Vtx water_temple_room_01Vtx_00B098[8];
static Vtx water_temple_room_01Vtx_00B118[16];
static Vtx water_temple_room_01Vtx_00B218[63];
static Vtx water_temple_room_01Vtx_00B608[11];
static Vtx water_temple_room_01Vtx_00B6B8[20];
static Vtx water_temple_room_01Vtx_00B7F8[16];
static Vtx water_temple_room_01Vtx_00B8F8[8];
static Vtx water_temple_room_01Vtx_00ED50[16];
static Vtx water_temple_room_01Vtx_00EE50[8];
static Vtx water_temple_room_01Vtx_00EED0[6];
static Vtx water_temple_room_01Vtx_00EF30[5];
static Vtx water_temple_room_01Vtx_00EF80[32];
static Vtx water_temple_room_01Vtx_00F180[3];
static Vtx water_temple_room_01Vtx_00F1B0[32];
static Vtx water_temple_room_01Vtx_00F3B0[4];
static Vtx water_temple_room_01Vtx_00F3F0[19];
static Vtx water_temple_room_01Vtx_00F520[8];

static SCmdEchoSettings water_temple_room_01Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_01Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_01Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_01Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_01MeshHeader0x000090 }; // 0x0018

static SCmdObjectList water_temple_room_01Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_01ObjectList0x000038 }; // 0x0020

static SCmdActorList water_temple_room_01Set0000Cmd05 = {  0x01, 0x05, (u32)water_temple_room_01ActorList0x00003C }; // 0x0028 }; 

static SCmdEndMarker water_temple_room_01Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 water_temple_room_01ObjectList0x000038[1] = {
	OBJECT_BOX,
}; 

ActorEntry water_temple_room_01ActorList0x00003C[5] = {
	{ ACTOR_DUNGEON_KEEP, 640, 0, -410, 0, 0, 0, 0x0023 }, //0x00003C
	{ ACTOR_DUNGEON_KEEP, 640, 0, -170, 0, 0, 0, 0x0023 }, //0x00004C
	{ ACTOR_DUNGEON_KEEP, 880, 0, -170, 0, 0, 0, 0x0023 }, //0x00005C
	{ ACTOR_DUNGEON_KEEP, 880, 0, -290, 0, 0, 0, 0x0023 }, //0x00006C
	{ ACTOR_DUNGEON_KEEP, 880, 0, -410, 0, 0, 0, 0x0023 }, //0x00007C
}; 

static u32 pad8C = 0;

MeshHeader0 water_temple_room_01MeshHeader0x000090 = { { 0 }, 0x01, (u32)&water_temple_room_01MeshDListEntry0x00009C, (u32)&(water_temple_room_01MeshDListEntry0x00009C) + sizeof(water_temple_room_01MeshDListEntry0x00009C) }; 

MeshEntry0 water_temple_room_01MeshDListEntry0x00009C[1] = {
	{ (u32)water_temple_room_01Dlist0x013940, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 padA8 = 0;
static u32 padAC = 0;

static Vtx water_temple_room_01Vtx_0000B0[32] = {
    VTX(960, 100, -260, -512, 1024, 0, 0, 0, 255),
    VTX(940, 100, -260, -512, 512, 255, 255, 191, 255),
    VTX(940, 100, -320, 1024, 512, 255, 255, 191, 255),
    VTX(960, 100, -320, 1024, 1024, 0, 0, 0, 255),
    VTX(960, 100, -320, 2560, 512, 0, 0, 0, 255),
    VTX(940, 100, -320, 2560, 1024, 255, 255, 191, 255),
    VTX(960, 0, -320, 0, 512, 0, 0, 0, 255),
    VTX(960, 0, -320, 1024, 1024, 0, 0, 0, 255),
    VTX(940, 0, -320, 1024, 512, 255, 255, 191, 255),
    VTX(940, 0, -260, -512, 512, 82, 82, 82, 255),
    VTX(960, 0, -260, -512, 1024, 0, 0, 0, 255),
    VTX(960, 0, -260, 0, 512, 0, 0, 0, 255),
    VTX(940, 0, -260, 0, 1024, 255, 255, 191, 255),
    VTX(940, 100, -260, 2560, 1024, 255, 255, 191, 255),
    VTX(960, 100, -260, 2560, 512, 0, 0, 0, 255),
    VTX(940, 0, -320, 0, 1024, 255, 255, 191, 255),
    VTX(560, 0, -320, 0, 1536, 0, 0, 0, 255),
    VTX(580, 0, -320, 0, 1024, 255, 255, 191, 255),
    VTX(580, 100, -320, 2560, 1024, 255, 255, 191, 255),
    VTX(560, 100, -260, 2560, 1536, 0, 0, 0, 255),
    VTX(580, 100, -260, 2560, 1024, 255, 255, 191, 255),
    VTX(560, 0, -260, 0, 1536, 0, 0, 0, 255),
    VTX(580, 0, -260, 0, 1024, 255, 255, 191, 255),
    VTX(560, 0, -260, 1536, 1024, 0, 0, 0, 255),
    VTX(580, 0, -260, 1536, 1536, 82, 82, 82, 255),
    VTX(580, 0, -320, 0, 1536, 255, 255, 191, 255),
    VTX(560, 0, -320, 0, 1024, 0, 0, 0, 255),
    VTX(560, 100, -320, 2560, 1536, 0, 0, 0, 255),
    VTX(560, 100, -320, 0, 1024, 0, 0, 0, 255),
    VTX(580, 100, -320, 0, 1536, 255, 255, 191, 255),
    VTX(580, 100, -260, 1536, 1536, 255, 255, 191, 255),
    VTX(560, 100, -260, 1536, 1024, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_01Vtx_0002B0[16] = {
    VTX(730, 200, 260, 1024, 512, 0, 0, 0, 255),
    VTX(730, 200, 240, 1024, 1024, 255, 255, 191, 255),
    VTX(790, 200, 240, -512, 1024, 255, 255, 191, 255),
    VTX(790, 200, 260, -512, 512, 0, 0, 0, 255),
    VTX(730, 100, 260, 0, 512, 0, 0, 0, 255),
    VTX(730, 200, 240, 2560, 1024, 255, 255, 191, 255),
    VTX(730, 200, 260, 2560, 512, 0, 0, 0, 255),
    VTX(790, 100, 260, -512, 512, 0, 0, 0, 255),
    VTX(790, 100, 240, -512, 1024, 82, 82, 82, 255),
    VTX(730, 100, 240, 1024, 1024, 255, 255, 191, 255),
    VTX(730, 100, 260, 1024, 512, 0, 0, 0, 255),
    VTX(790, 200, 240, 2560, 1024, 255, 255, 191, 255),
    VTX(790, 100, 240, 0, 1024, 255, 255, 191, 255),
    VTX(790, 100, 260, 0, 512, 0, 0, 0, 255),
    VTX(790, 200, 260, 2560, 512, 0, 0, 0, 255),
    VTX(730, 100, 240, 0, 1024, 255, 255, 191, 255),
}; 

static Vtx water_temple_room_01Vtx_0003B0[4] = {
    VTX(790, 200, 240, 0, 2048, 255, 255, 191, 255),
    VTX(730, 200, 240, 2048, 2048, 255, 255, 191, 255),
    VTX(730, 270, 240, 2048, 0, 82, 82, 82, 255),
    VTX(790, 270, 240, 0, 0, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_0003F0[5] = {
    VTX(580, 0, -470, 5120, -4096, 82, 82, 82, 255),
    VTX(580, 0, -110, -1024, -4096, 82, 82, 82, 255),
    VTX(760, 0, -290, 2048, -1024, 255, 255, 191, 255),
    VTX(940, 0, -470, 5120, 2048, 82, 82, 82, 255),
    VTX(940, 0, -110, -1024, 2048, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_000440[5] = {
    VTX(870, 100, 240, -3072, 10240, 82, 82, 82, 255),
    VTX(870, 100, -110, -3072, 0, 82, 82, 82, 255),
    VTX(760, 100, 65, 0, 5120, 255, 255, 191, 255),
    VTX(650, 100, 240, 3072, 10240, 82, 82, 82, 255),
    VTX(650, 100, -110, 3072, 0, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_000490[9] = {
    VTX(760, 300, 65, -1024, 5120, 255, 255, 191, 255),
    VTX(650, 300, 240, 1024, 10240, 82, 82, 82, 255),
    VTX(650, 300, -110, 1024, 0, 82, 82, 82, 255),
    VTX(870, 300, 240, -3072, 10240, 82, 82, 82, 255),
    VTX(870, 300, -110, -3072, 0, 82, 82, 82, 255),
    VTX(790, 270, 240, 0, 1024, 255, 255, 191, 255),
    VTX(730, 270, 240, 2048, 1024, 132, 146, 129, 255),
    VTX(730, 300, 240, 2048, -1024, 82, 82, 82, 255),
    VTX(790, 300, 240, 0, -1024, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_000520[16] = {
    VTX(580, 330, -470, 0, 1024, 82, 82, 82, 255),
    VTX(580, 300, -470, 0, 0, 132, 146, 129, 255),
    VTX(940, 300, -470, 12288, 0, 255, 255, 191, 255),
    VTX(940, 330, -470, 12288, 1024, 82, 82, 82, 255),
    VTX(940, 330, -470, 12288, 1024, 82, 82, 82, 255),
    VTX(940, 300, -470, 12288, 2048, 132, 146, 129, 255),
    VTX(940, 300, -110, 0, 2048, 255, 255, 191, 255),
    VTX(940, 330, -110, 0, 1024, 82, 82, 82, 255),
    VTX(580, 330, -110, 0, 1024, 82, 82, 82, 255),
    VTX(580, 300, -110, 0, 2048, 132, 146, 129, 255),
    VTX(580, 300, -470, 12288, 2048, 255, 255, 191, 255),
    VTX(580, 330, -470, 12288, 1024, 82, 82, 82, 255),
    VTX(940, 330, -110, 12288, 1024, 82, 82, 82, 255),
    VTX(940, 300, -110, 12288, 0, 132, 146, 129, 255),
    VTX(580, 300, -110, 0, 0, 255, 255, 191, 255),
    VTX(580, 330, -110, 0, 1024, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_000620[20] = {
    VTX(580, 300, -110, 10240, -5120, 82, 82, 82, 255),
    VTX(580, 100, -110, 10240, 1024, 255, 255, 191, 255),
    VTX(580, 100, -470, 0, 1024, 255, 255, 191, 255),
    VTX(580, 300, -470, 0, -5120, 82, 82, 82, 255),
    VTX(940, 300, -470, 0, -5120, 82, 82, 82, 255),
    VTX(940, 100, -470, 0, 1024, 255, 255, 191, 255),
    VTX(940, 100, -110, 10240, 1024, 255, 255, 191, 255),
    VTX(940, 300, -110, 10240, -5120, 82, 82, 82, 255),
    VTX(580, 300, -470, 0, -5120, 82, 82, 82, 255),
    VTX(580, 100, -470, 0, 1024, 255, 255, 191, 255),
    VTX(940, 100, -470, 10240, 1024, 255, 255, 191, 255),
    VTX(940, 300, -470, 10240, -5120, 82, 82, 82, 255),
    VTX(870, 300, -110, 2048, -5120, 82, 82, 82, 255),
    VTX(940, 300, -110, 0, -5120, 82, 82, 82, 255),
    VTX(940, 100, -110, 0, 1024, 255, 255, 191, 255),
    VTX(870, 100, -110, 2048, 1024, 132, 146, 129, 255),
    VTX(650, 100, -110, 2048, 1024, 132, 146, 129, 255),
    VTX(580, 100, -110, 0, 1024, 255, 255, 191, 255),
    VTX(650, 300, -110, 2048, -5120, 82, 82, 82, 255),
    VTX(580, 300, -110, 0, -5120, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_000760[8] = {
    VTX(870, 300, 240, -1024, -2048, 82, 82, 82, 255),
    VTX(870, 100, 240, -1024, 2048, 255, 255, 191, 255),
    VTX(790, 100, 240, 1024, 2048, 255, 255, 191, 255),
    VTX(790, 300, 240, 1024, -2048, 82, 82, 82, 255),
    VTX(730, 300, 240, -1024, -2048, 82, 82, 82, 255),
    VTX(730, 100, 240, -1024, 2048, 255, 255, 191, 255),
    VTX(650, 100, 240, 1024, 2048, 255, 255, 191, 255),
    VTX(650, 300, 240, 1024, -2048, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_0007E0[8] = {
    VTX(650, 300, -110, 10240, -2048, 82, 82, 82, 255),
    VTX(650, 300, 240, 0, -2048, 82, 82, 82, 255),
    VTX(650, 100, 240, 0, 2048, 255, 255, 191, 255),
    VTX(650, 100, -110, 10240, 2048, 255, 255, 191, 255),
    VTX(870, 100, 240, 0, 2048, 255, 255, 191, 255),
    VTX(870, 300, 240, 0, -2048, 82, 82, 82, 255),
    VTX(870, 300, -110, 10240, -2048, 82, 82, 82, 255),
    VTX(870, 100, -110, 10240, 2048, 255, 255, 191, 255),
}; 

static Vtx water_temple_room_01Vtx_000860[24] = {
    VTX(580, 0, -110, 0, 1024, 255, 255, 191, 255),
    VTX(580, 0, -260, 4096, 1024, 132, 146, 129, 255),
    VTX(580, 100, -260, 4096, -1024, 82, 82, 82, 255),
    VTX(940, 100, -110, 0, -1024, 82, 82, 82, 255),
    VTX(940, 0, -110, 0, 1024, 255, 255, 191, 255),
    VTX(580, 100, -110, 8192, -1024, 82, 82, 82, 255),
    VTX(580, 0, -110, 8192, 1024, 132, 146, 129, 255),
    VTX(580, 100, -470, 0, -1024, 82, 82, 82, 255),
    VTX(580, 0, -470, 0, 1024, 255, 255, 191, 255),
    VTX(940, 100, -470, 8192, -1024, 82, 82, 82, 255),
    VTX(940, 0, -470, 8192, 1024, 132, 146, 129, 255),
    VTX(580, 100, -320, 0, -1024, 82, 82, 82, 255),
    VTX(580, 0, -320, 0, 1024, 255, 255, 191, 255),
    VTX(580, 100, -470, 4096, -1024, 82, 82, 82, 255),
    VTX(580, 0, -470, 4096, 1024, 132, 146, 129, 255),
    VTX(940, 100, -470, 0, -1024, 82, 82, 82, 255),
    VTX(940, 0, -470, 0, 1024, 255, 255, 191, 255),
    VTX(940, 100, -320, 4096, -1024, 82, 82, 82, 255),
    VTX(940, 0, -320, 4096, 1024, 132, 146, 129, 255),
    VTX(940, 100, -260, 0, -1024, 82, 82, 82, 255),
    VTX(940, 0, -260, 0, 1024, 255, 255, 191, 255),
    VTX(940, 100, -110, 4096, -1024, 82, 82, 82, 255),
    VTX(940, 0, -110, 4096, 1024, 132, 146, 129, 255),
    VTX(580, 100, -110, 0, -1024, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_0009E0[16] = {
    VTX(938, 570, -468, 6076, 0, 132, 146, 129, 255),
    VTX(582, 570, -468, 0, 0, 132, 146, 129, 255),
    VTX(582, 530, -468, 0, 512, 255, 255, 191, 255),
    VTX(938, 530, -468, 6076, 512, 255, 255, 191, 255),
    VTX(582, 570, -112, 0, 0, 132, 146, 129, 255),
    VTX(938, 570, -112, 6076, 0, 132, 146, 129, 255),
    VTX(938, 530, -112, 6076, 512, 255, 255, 191, 255),
    VTX(582, 530, -112, 0, 512, 255, 255, 191, 255),
    VTX(582, 570, -468, 6076, 0, 132, 146, 129, 255),
    VTX(582, 570, -112, 0, 0, 132, 146, 129, 255),
    VTX(582, 530, -112, 0, 512, 255, 255, 191, 255),
    VTX(582, 530, -468, 6076, 512, 255, 255, 191, 255),
    VTX(938, 570, -112, 0, 0, 132, 146, 129, 255),
    VTX(938, 570, -468, 6076, 0, 132, 146, 129, 255),
    VTX(938, 530, -468, 6076, 512, 255, 255, 191, 255),
    VTX(938, 530, -112, 0, 512, 255, 255, 191, 255),
}; 

static Vtx water_temple_room_01Vtx_000AE0[8] = {
    VTX(560, 0, -470, 0, 0, 0, 0, 0, 0),
    VTX(960, 0, -470, 0, 0, 0, 0, 0, 0),
    VTX(560, 570, -470, 0, 0, 0, 0, 0, 0),
    VTX(960, 570, -470, 0, 0, 0, 0, 0, 0),
    VTX(560, 0, 260, 0, 0, 0, 0, 0, 0),
    VTX(960, 0, 260, 0, 0, 0, 0, 0, 0),
    VTX(560, 570, 260, 0, 0, 0, 0, 0, 0),
    VTX(960, 570, 260, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_01Dlist0x000B60[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_01Vtx_000AE0[0], 8, 0),
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
    gsSPVertex(&water_temple_room_01Vtx_0000B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 5, 15, 6, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 16, 18, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_01Vtx_0002B0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 4, 15, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_001040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_0003B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_002040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_0003F0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_002840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_000440[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_003040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_000490[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 4, 0, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_003840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_000520[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_004040, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_000620[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_004840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_000760[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_005840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_0007E0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_006840, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_000860[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_01Vtx_0009E0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_01Tex_001040[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_001040.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_002040[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_002040.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_002840[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_002840.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_003040[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_003040.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_003840[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_003840.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_004040[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_004040.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_004840[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_004840.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_005840[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_005840.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_006840[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_006840.rgb5a1.inc.c"
};

static Vtx water_temple_room_01Vtx_007040[16] = {
    VTX(790, 970, 190, 1536, 512, 82, 82, 82, 255),
    VTX(790, 970, 170, 1536, 1024, 82, 82, 82, 255),
    VTX(730, 970, 170, 0, 1024, 255, 255, 191, 255),
    VTX(730, 970, 190, 0, 512, 82, 82, 82, 255),
    VTX(730, 970, 190, 0, 1024, 82, 82, 82, 255),
    VTX(730, 970, 170, 0, 512, 255, 255, 191, 255),
    VTX(730, 1070, 170, 2560, 512, 255, 255, 191, 255),
    VTX(790, 1070, 190, 2560, 1024, 82, 82, 82, 255),
    VTX(790, 1070, 170, 2560, 512, 255, 255, 191, 255),
    VTX(790, 970, 190, 0, 1024, 82, 82, 82, 255),
    VTX(790, 970, 170, 0, 512, 255, 255, 191, 255),
    VTX(730, 1070, 190, 2560, 1024, 82, 82, 82, 255),
    VTX(730, 1070, 190, 0, 512, 82, 82, 82, 255),
    VTX(730, 1070, 170, 0, 1024, 255, 255, 191, 255),
    VTX(790, 1070, 170, 1536, 1024, 255, 255, 191, 255),
    VTX(790, 1070, 190, 1536, 512, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_007140[8] = {
    VTX(410, 970, -530, 10923, -8980, 82, 82, 82, 255),
    VTX(410, 970, 170, -1024, -8980, 82, 82, 82, 255),
    VTX(540, 970, -70, 3072, -6932, 132, 146, 129, 255),
    VTX(540, 970, -510, 10581, -6932, 132, 146, 129, 255),
    VTX(980, 970, -510, 10581, 0, 132, 146, 129, 255),
    VTX(1110, 970, -530, 10923, 2048, 82, 82, 82, 255),
    VTX(1110, 970, 170, -1024, 2048, 82, 82, 82, 255),
    VTX(980, 970, -70, 3072, 0, 132, 146, 129, 255),
}; 

static Vtx water_temple_room_01Vtx_0071C0[8] = {
    VTX(920, 1290, -130, 5287, -7965, 132, 146, 129, 255),
    VTX(1110, 1290, 170, 0, -11313, 82, 82, 82, 255),
    VTX(410, 1290, 170, 0, 1024, 82, 82, 82, 255),
    VTX(600, 1290, -130, 5287, -2325, 132, 146, 129, 255),
    VTX(1110, 1290, -530, 12337, -11313, 82, 82, 82, 255),
    VTX(920, 1290, -450, 10927, -7965, 132, 146, 129, 255),
    VTX(600, 1290, -450, 10927, -2325, 132, 146, 129, 255),
    VTX(410, 1290, -530, 12337, 1024, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_007240[16] = {
    VTX(940, 330, -110, 8192, 1024, 255, 255, 191, 255),
    VTX(940, 940, -110, 8192, -14592, 82, 82, 82, 255),
    VTX(940, 940, -470, -1024, -14592, 82, 82, 82, 255),
    VTX(580, 330, -110, 8192, 1024, 132, 146, 129, 255),
    VTX(580, 330, -470, -1024, 1024, 255, 255, 191, 255),
    VTX(580, 940, -110, 8192, -14592, 82, 82, 82, 255),
    VTX(580, 940, -470, -1024, -14592, 82, 82, 82, 255),
    VTX(940, 330, -110, -3072, 1024, 132, 146, 129, 255),
    VTX(580, 330, -110, 6144, 1024, 255, 255, 191, 255),
    VTX(940, 940, -110, -3072, -14592, 82, 82, 82, 255),
    VTX(580, 940, -110, 6144, -14592, 82, 82, 82, 255),
    VTX(940, 940, -470, -3072, -14592, 82, 82, 82, 255),
    VTX(580, 940, -470, 6144, -14592, 82, 82, 82, 255),
    VTX(940, 330, -470, -3072, 1024, 255, 255, 191, 255),
    VTX(580, 330, -470, 6144, 1024, 132, 146, 129, 255),
    VTX(940, 330, -470, -1024, 1024, 132, 146, 129, 255),
}; 

static Vtx water_temple_room_01Vtx_007340[32] = {
    VTX(880, 1290, -170, 0, 2048, 255, 255, 191, 255),
    VTX(880, 1290, -410, 6144, 2048, 255, 255, 191, 255),
    VTX(920, 1290, -450, 7168, 1024, 132, 146, 129, 255),
    VTX(920, 1290, -130, -1024, 1024, 132, 146, 129, 255),
    VTX(640, 1290, -170, 0, 2048, 255, 255, 191, 255),
    VTX(880, 1290, -170, 6144, 2048, 255, 255, 191, 255),
    VTX(920, 1290, -130, 7168, 1024, 132, 146, 129, 255),
    VTX(600, 1290, -130, -1024, 1024, 132, 146, 129, 255),
    VTX(640, 1330, -170, 1024, 1024, 82, 82, 82, 255),
    VTX(640, 1290, -170, 1024, 2048, 255, 255, 191, 255),
    VTX(640, 1290, -410, -5120, 2048, 255, 255, 191, 255),
    VTX(640, 1330, -410, -5120, 1024, 82, 82, 82, 255),
    VTX(880, 1330, -170, 0, 0, 82, 82, 82, 255),
    VTX(880, 1290, -170, 0, 1024, 255, 255, 191, 255),
    VTX(640, 1290, -170, 6144, 1024, 255, 255, 191, 255),
    VTX(640, 1330, -170, 6144, 0, 82, 82, 82, 255),
    VTX(880, 1330, -410, -5120, 1024, 82, 82, 82, 255),
    VTX(880, 1290, -410, -5120, 2048, 255, 255, 191, 255),
    VTX(880, 1290, -170, 1024, 2048, 255, 255, 191, 255),
    VTX(880, 1330, -170, 1024, 1024, 82, 82, 82, 255),
    VTX(640, 1330, -410, 6144, 0, 82, 82, 82, 255),
    VTX(640, 1290, -410, 6144, 1024, 255, 255, 191, 255),
    VTX(880, 1290, -410, 0, 1024, 255, 255, 191, 255),
    VTX(880, 1330, -410, 0, 0, 82, 82, 82, 255),
    VTX(940, 970, -470, 9216, 1024, 255, 255, 191, 255),
    VTX(940, 970, -110, 0, 1024, 255, 255, 191, 255),
    VTX(980, 970, -70, -1024, 2048, 132, 146, 129, 255),
    VTX(980, 970, -510, 10240, 2048, 132, 146, 129, 255),
    VTX(540, 970, -70, -1024, 1024, 132, 146, 129, 255),
    VTX(580, 970, -110, 0, 2048, 255, 255, 191, 255),
    VTX(580, 970, -470, 9216, 2048, 255, 255, 191, 255),
    VTX(540, 970, -510, 10240, 1024, 132, 146, 129, 255),
}; 

static Vtx water_temple_room_01Vtx_007540[32] = {
    VTX(980, 970, -70, 10240, 1024, 132, 146, 129, 255),
    VTX(940, 970, -110, 9216, 0, 255, 255, 191, 255),
    VTX(580, 970, -110, 0, 0, 255, 255, 191, 255),
    VTX(540, 970, -70, -1024, 1024, 132, 146, 129, 255),
    VTX(940, 970, -470, 0, 1024, 255, 255, 191, 255),
    VTX(980, 970, -510, -1024, 2048, 132, 146, 129, 255),
    VTX(540, 970, -510, 10240, 2048, 132, 146, 129, 255),
    VTX(580, 970, -470, 9216, 1024, 255, 255, 191, 255),
    VTX(580, 970, -470, 0, 1024, 82, 82, 82, 255),
    VTX(580, 940, -470, 0, 0, 132, 146, 129, 255),
    VTX(940, 940, -470, 12288, 0, 255, 255, 191, 255),
    VTX(940, 970, -470, 12288, 1024, 82, 82, 82, 255),
    VTX(940, 970, -110, 12288, 1024, 82, 82, 82, 255),
    VTX(940, 940, -110, 12288, 0, 132, 146, 129, 255),
    VTX(580, 940, -110, 0, 0, 255, 255, 191, 255),
    VTX(580, 970, -110, 0, 1024, 82, 82, 82, 255),
    VTX(580, 970, -110, 0, 1024, 82, 82, 82, 255),
    VTX(580, 940, -110, 0, 2048, 132, 146, 129, 255),
    VTX(580, 940, -470, 12288, 2048, 255, 255, 191, 255),
    VTX(580, 970, -470, 12288, 1024, 82, 82, 82, 255),
    VTX(880, 1290, -410, 6144, 8192, 255, 255, 191, 255),
    VTX(640, 1290, -410, 0, 8192, 255, 255, 191, 255),
    VTX(600, 1290, -450, -1024, 9216, 132, 146, 129, 255),
    VTX(920, 1290, -450, 7168, 9216, 132, 146, 129, 255),
    VTX(940, 970, -470, 12288, 1024, 82, 82, 82, 255),
    VTX(940, 940, -470, 12288, 2048, 132, 146, 129, 255),
    VTX(940, 940, -110, 0, 2048, 255, 255, 191, 255),
    VTX(940, 970, -110, 0, 1024, 82, 82, 82, 255),
    VTX(640, 1290, -170, 0, 8192, 255, 255, 191, 255),
    VTX(600, 1290, -130, -1024, 9216, 132, 146, 129, 255),
    VTX(600, 1290, -450, 7168, 9216, 132, 146, 129, 255),
    VTX(640, 1290, -410, 6144, 8192, 255, 255, 191, 255),
}; 

static Vtx water_temple_room_01Vtx_007740[16] = {
    VTX(1110, 1070, 170, 12337, 1024, 255, 255, 191, 255),
    VTX(1110, 1290, 170, 12337, -3072, 82, 82, 82, 255),
    VTX(1110, 1290, -530, 0, -3072, 82, 82, 82, 255),
    VTX(1110, 1070, -530, 0, 1024, 132, 146, 129, 255),
    VTX(410, 1070, 170, 12288, 1024, 255, 255, 191, 255),
    VTX(410, 1290, 170, 12288, -3072, 82, 82, 82, 255),
    VTX(1110, 1290, 170, 0, -3072, 82, 82, 82, 255),
    VTX(1110, 1070, 170, 0, 1024, 132, 146, 129, 255),
    VTX(410, 1070, -530, 12337, 1024, 255, 255, 191, 255),
    VTX(410, 1290, -530, 12337, -3072, 82, 82, 82, 255),
    VTX(410, 1290, 170, 0, -3072, 82, 82, 82, 255),
    VTX(410, 1070, 170, 0, 1024, 132, 146, 129, 255),
    VTX(1110, 1070, -530, 12288, 1024, 255, 255, 191, 255),
    VTX(1110, 1290, -530, 12288, -3072, 82, 82, 82, 255),
    VTX(410, 1290, -530, 0, -3072, 82, 82, 82, 255),
    VTX(410, 1070, -530, 0, 1024, 132, 146, 129, 255),
}; 

static Vtx water_temple_room_01Vtx_007840[20] = {
    VTX(730, 1070, 170, 0, -1024, 82, 82, 82, 255),
    VTX(730, 970, 170, 0, 1024, 132, 146, 129, 255),
    VTX(410, 970, 170, 6146, 1024, 255, 255, 191, 255),
    VTX(410, 1070, 170, 6146, -1024, 82, 82, 82, 255),
    VTX(1110, 1070, -530, 12337, -1024, 82, 82, 82, 255),
    VTX(1110, 970, -530, 12337, 1024, 132, 146, 129, 255),
    VTX(1110, 970, 170, 0, 1024, 255, 255, 191, 255),
    VTX(1110, 1070, 170, 0, -1024, 82, 82, 82, 255),
    VTX(410, 1070, 170, 0, -1024, 82, 82, 82, 255),
    VTX(410, 970, 170, 0, 1024, 132, 146, 129, 255),
    VTX(410, 970, -530, 12337, 1024, 255, 255, 191, 255),
    VTX(410, 1070, -530, 12337, -1024, 82, 82, 82, 255),
    VTX(1110, 1070, 170, 0, -1024, 82, 82, 82, 255),
    VTX(1110, 970, 170, 0, 1024, 132, 146, 129, 255),
    VTX(790, 970, 170, 6146, 1024, 255, 255, 191, 255),
    VTX(790, 1070, 170, 6146, -1024, 82, 82, 82, 255),
    VTX(410, 1070, -530, 0, -1024, 82, 82, 82, 255),
    VTX(410, 970, -530, 0, 1024, 132, 146, 129, 255),
    VTX(1110, 970, -530, 12288, 1024, 255, 255, 191, 255),
    VTX(1110, 1070, -530, 12288, -1024, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_007980[16] = {
    VTX(412, 1130, -528, -2901, -7168, 255, 255, 191, 255),
    VTX(1108, 1130, -528, 8977, -7168, 255, 255, 191, 255),
    VTX(1108, 1170, -528, 8977, -7680, 132, 146, 129, 255),
    VTX(412, 1170, -528, -2901, -7680, 132, 146, 129, 255),
    VTX(1108, 1130, 168, 8977, -7168, 255, 255, 191, 255),
    VTX(412, 1130, 168, -2901, -7168, 255, 255, 191, 255),
    VTX(412, 1170, 168, -2901, -7680, 132, 146, 129, 255),
    VTX(1108, 1170, 168, 8977, -7680, 132, 146, 129, 255),
    VTX(412, 1130, 168, 11878, 512, 255, 255, 191, 255),
    VTX(412, 1130, -528, 0, 512, 255, 255, 191, 255),
    VTX(412, 1170, -528, 0, 0, 132, 146, 129, 255),
    VTX(412, 1170, 168, 11878, 0, 132, 146, 129, 255),
    VTX(1108, 1130, -528, 0, 512, 255, 255, 191, 255),
    VTX(1108, 1130, 168, 11878, 512, 255, 255, 191, 255),
    VTX(1108, 1170, 168, 11878, 0, 132, 146, 129, 255),
    VTX(1108, 1170, -528, 0, 0, 132, 146, 129, 255),
}; 

static Vtx water_temple_room_01Vtx_007A80[8] = {
    VTX(410, 330, -530, 0, 0, 0, 0, 0, 0),
    VTX(1110, 330, -530, 0, 0, 0, 0, 0, 0),
    VTX(410, 1330, -530, 0, 0, 0, 0, 0, 0),
    VTX(1110, 1330, -530, 0, 0, 0, 0, 0, 0),
    VTX(410, 330, 190, 0, 0, 0, 0, 0, 0),
    VTX(1110, 330, 190, 0, 0, 0, 0, 0, 0),
    VTX(410, 1330, 190, 0, 0, 0, 0, 0, 0),
    VTX(1110, 1330, 190, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_01Dlist0x007B00[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_01Vtx_007A80[0], 8, 0),
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
    gsSPVertex(&water_temple_room_01Vtx_007040[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 4, 6, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_007F18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_007140[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(5, 4, 7, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_008718, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_0071C0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_008F18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_007240[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 15, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_009718, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_007340[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_01Vtx_007540[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_009F18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_007740[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_00A718, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_007840[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_01Vtx_007980[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_01Tex_007F18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_007F18.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_008718[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_008718.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_008F18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_008F18.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_009718[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_009718.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_009F18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_009F18.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_00A718[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_00A718.rgb5a1.inc.c"
};

static Vtx water_temple_room_01Vtx_00AF18[16] = {
    VTX(730, 1510, 130, 0, 512, 0, 0, 0, 255),
    VTX(730, 1510, 110, 0, 1024, 255, 255, 191, 255),
    VTX(730, 1610, 110, 2560, 1024, 255, 255, 191, 255),
    VTX(790, 1610, 130, 2560, 512, 0, 0, 0, 255),
    VTX(790, 1610, 110, 2560, 1024, 255, 255, 191, 255),
    VTX(790, 1510, 130, 0, 512, 0, 0, 0, 255),
    VTX(790, 1510, 110, 0, 1024, 255, 255, 191, 255),
    VTX(730, 1610, 130, 2560, 512, 0, 0, 0, 255),
    VTX(790, 1510, 130, -512, 512, 0, 0, 0, 255),
    VTX(790, 1510, 110, -512, 1024, 255, 255, 191, 255),
    VTX(730, 1510, 110, 1024, 1024, 255, 255, 191, 255),
    VTX(730, 1510, 130, 1024, 512, 0, 0, 0, 255),
    VTX(730, 1610, 130, 1024, 512, 0, 0, 0, 255),
    VTX(730, 1610, 110, 1024, 1024, 255, 255, 191, 255),
    VTX(790, 1610, 130, -512, 512, 0, 0, 0, 255),
    VTX(790, 1610, 110, -512, 1024, 255, 255, 191, 255),
}; 

static Vtx water_temple_room_01Vtx_00B018[8] = {
    VTX(1050, 1510, 110, -3072, 2048, 82, 82, 82, 255),
    VTX(920, 1510, -130, 1024, 0, 132, 146, 129, 255),
    VTX(600, 1510, -130, 1024, -5041, 132, 146, 129, 255),
    VTX(470, 1510, 110, -3072, -7089, 82, 82, 82, 255),
    VTX(1050, 1510, -470, 6827, 2048, 82, 82, 82, 255),
    VTX(920, 1510, -450, 6485, 0, 132, 146, 129, 255),
    VTX(470, 1510, -470, 6827, -7089, 82, 82, 82, 255),
    VTX(600, 1510, -450, 6485, -5041, 132, 146, 129, 255),
}; 

static Vtx water_temple_room_01Vtx_00B098[8] = {
    VTX(1050, 1710, 110, 0, 1024, 82, 82, 82, 255),
    VTX(840, 1710, -130, 4237, -2684, 132, 146, 129, 255),
    VTX(840, 1710, -450, 9887, -2684, 255, 255, 191, 255),
    VTX(1050, 1710, -470, 10240, 1024, 82, 82, 82, 255),
    VTX(600, 1710, -450, 9887, -6921, 255, 255, 191, 255),
    VTX(470, 1710, -470, 10240, -9216, 82, 82, 82, 255),
    VTX(600, 1710, -130, 4237, -6921, 132, 146, 129, 255),
    VTX(470, 1710, 110, 0, -9216, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_00B118[16] = {
    VTX(640, 1470, -170, 0, -2560, 82, 82, 82, 255),
    VTX(640, 1330, -170, 0, 1024, 82, 82, 82, 255),
    VTX(640, 1330, -410, 6144, 1024, 255, 255, 191, 255),
    VTX(640, 1470, -410, 6144, -2560, 255, 255, 191, 255),
    VTX(880, 1470, -170, 0, -2560, 82, 82, 82, 255),
    VTX(880, 1330, -170, 0, 1024, 82, 82, 82, 255),
    VTX(640, 1330, -170, 6144, 1024, 255, 255, 191, 255),
    VTX(640, 1470, -170, 6144, -2560, 255, 255, 191, 255),
    VTX(880, 1470, -410, 6144, -2560, 82, 82, 82, 255),
    VTX(880, 1330, -410, 6144, 1024, 82, 82, 82, 255),
    VTX(880, 1330, -170, 0, 1024, 255, 255, 191, 255),
    VTX(880, 1470, -170, 0, -2560, 255, 255, 191, 255),
    VTX(640, 1470, -410, 6144, -2560, 82, 82, 82, 255),
    VTX(640, 1330, -410, 6144, 1024, 82, 82, 82, 255),
    VTX(880, 1330, -410, 0, 1024, 255, 255, 191, 255),
    VTX(880, 1470, -410, 0, -2560, 255, 255, 191, 255),
}; 

static Vtx water_temple_room_01Vtx_00B218[63] = {
    VTX(640, 1510, -170, 6144, 0, 82, 82, 82, 255),
    VTX(640, 1470, -410, 0, 1024, 255, 255, 191, 255),
    VTX(640, 1510, -410, 0, 0, 82, 82, 82, 255),
    VTX(640, 1470, -170, 6144, 1024, 82, 82, 82, 255),
    VTX(880, 1510, -170, 6144, 0, 82, 82, 82, 255),
    VTX(880, 1470, -170, 6144, 1024, 82, 82, 82, 255),
    VTX(640, 1470, -170, 0, 1024, 255, 255, 191, 255),
    VTX(640, 1510, -170, 0, 0, 82, 82, 82, 255),
    VTX(880, 1510, -410, 0, 0, 82, 82, 82, 255),
    VTX(880, 1470, -410, 0, 1024, 82, 82, 82, 255),
    VTX(880, 1470, -170, 6144, 1024, 255, 255, 191, 255),
    VTX(640, 1510, -410, 0, 0, 82, 82, 82, 255),
    VTX(640, 1470, -410, 0, 1024, 82, 82, 82, 255),
    VTX(880, 1470, -410, 6144, 1024, 255, 255, 191, 255),
    VTX(880, 1510, -410, 6144, 0, 82, 82, 82, 255),
    VTX(880, 1510, -410, 5120, 2048, 255, 255, 191, 255),
    VTX(920, 1510, -450, 6144, 1024, 132, 146, 129, 255),
    VTX(600, 1510, -450, -2048, 1024, 132, 146, 129, 255),
    VTX(640, 1510, -410, -1024, 2048, 255, 255, 191, 255),
    VTX(600, 1510, -130, -1024, 1024, 132, 146, 129, 255),
    VTX(640, 1510, -170, 0, 2048, 255, 255, 191, 255),
    VTX(640, 1510, -410, 6144, 2048, 255, 255, 191, 255),
    VTX(600, 1510, -450, 7168, 1024, 132, 146, 129, 255),
    VTX(880, 1510, -410, 0, 2048, 255, 255, 191, 255),
    VTX(880, 1510, -170, 6144, 2048, 255, 255, 191, 255),
    VTX(920, 1510, -130, 7168, 1024, 132, 146, 129, 255),
    VTX(920, 1510, -450, -1024, 1024, 132, 146, 129, 255),
    VTX(880, 1510, -170, 0, 2048, 255, 255, 191, 255),
    VTX(640, 1510, -170, 6144, 2048, 255, 255, 191, 255),
    VTX(600, 1510, -130, 7168, 1024, 132, 146, 129, 255),
    VTX(920, 1510, -130, -1024, 1024, 132, 146, 129, 255),
    VTX(810, 1510, 110, 0, 1024, 255, 255, 191, 255),
    VTX(790, 1510, 110, 0, 2048, 255, 255, 191, 255),
    VTX(790, 1610, 110, 5120, 2048, 255, 255, 191, 255),
    VTX(810, 1630, 110, 6144, 1024, 132, 146, 129, 255),
    VTX(710, 1630, 110, 6144, 6144, 132, 146, 129, 255),
    VTX(730, 1610, 110, 5120, 5120, 255, 255, 191, 255),
    VTX(730, 1510, 110, 0, 5120, 255, 255, 191, 255),
    VTX(710, 1510, 110, 0, 6144, 255, 255, 191, 255),
    VTX(730, 1610, 110, 3072, 0, 255, 255, 191, 255),
    VTX(710, 1630, 110, 4096, 1024, 132, 146, 129, 255),
    VTX(810, 1630, 110, -1024, 1024, 132, 146, 129, 255),
    VTX(790, 1610, 110, 0, 0, 255, 255, 191, 255),
    VTX(800, 1710, -410, 2560, 1024, 255, 255, 191, 255),
    VTX(640, 1710, -410, -1536, 1024, 255, 255, 191, 255),
    VTX(600, 1710, -450, -2560, 2048, 82, 82, 82, 255),
    VTX(840, 1710, -450, 3584, 2048, 82, 82, 82, 255),
    VTX(840, 1710, -130, -1024, 1024, 82, 82, 82, 255),
    VTX(800, 1710, -170, 0, 2048, 255, 255, 191, 255),
    VTX(800, 1710, -410, 6144, 2048, 255, 255, 191, 255),
    VTX(840, 1710, -450, 7168, 1024, 82, 82, 82, 255),
    VTX(640, 1710, -170, 0, 2048, 255, 255, 191, 255),
    VTX(800, 1710, -170, 4096, 2048, 255, 255, 191, 255),
    VTX(840, 1710, -130, 5120, 1024, 82, 82, 82, 255),
    VTX(600, 1710, -130, -1024, 1024, 82, 82, 82, 255),
    VTX(640, 1710, -410, -1024, 2048, 255, 255, 191, 255),
    VTX(640, 1710, -170, 5120, 2048, 255, 255, 191, 255),
    VTX(600, 1710, -130, 6144, 1024, 82, 82, 82, 255),
    VTX(600, 1710, -450, -2048, 1024, 82, 82, 82, 255),
    VTX(800, 1760, -410, 0, 0, 82, 82, 82, 255),
    VTX(800, 1710, -410, 0, 1024, 255, 255, 191, 255),
    VTX(800, 1710, -170, 4915, 1024, 255, 255, 191, 255),
    VTX(800, 1760, -170, 4915, 0, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_00B608[11] = {
    VTX(640, 1760, -170, 4915, 0, 82, 82, 82, 255),
    VTX(640, 1710, -170, 4915, 1024, 255, 255, 191, 255),
    VTX(640, 1710, -410, 0, 1024, 255, 255, 191, 255),
    VTX(640, 1760, -410, 0, 0, 82, 82, 82, 255),
    VTX(800, 1760, -170, 3277, 0, 82, 82, 82, 255),
    VTX(800, 1710, -170, 3277, 1024, 255, 255, 191, 255),
    VTX(640, 1710, -170, 0, 1024, 255, 255, 191, 255),
    VTX(640, 1760, -170, 0, 0, 82, 82, 82, 255),
    VTX(640, 1710, -410, 0, 1024, 255, 255, 191, 255),
    VTX(800, 1710, -410, 3277, 1024, 255, 255, 191, 255),
    VTX(800, 1760, -410, 3277, 0, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_00B6B8[20] = {
    VTX(710, 1630, 110, 4237, -410, 132, 146, 129, 255),
    VTX(470, 1710, 110, 0, -2048, 82, 82, 82, 255),
    VTX(1050, 1710, 110, 10240, -2048, 82, 82, 82, 255),
    VTX(810, 1630, 110, 6003, -410, 132, 146, 129, 255),
    VTX(1050, 1710, 110, 10240, -2048, 82, 82, 82, 255),
    VTX(1050, 1710, -470, 0, -2048, 82, 82, 82, 255),
    VTX(1050, 1510, 110, 10240, 2048, 255, 255, 191, 255),
    VTX(1050, 1510, -470, 0, 2048, 132, 146, 129, 255),
    VTX(1050, 1710, -470, 10240, -2048, 82, 82, 82, 255),
    VTX(470, 1710, -470, 0, -2048, 82, 82, 82, 255),
    VTX(1050, 1510, -470, 10240, 2048, 255, 255, 191, 255),
    VTX(470, 1510, -470, 0, 2048, 132, 146, 129, 255),
    VTX(470, 1710, -470, 0, -2048, 82, 82, 82, 255),
    VTX(470, 1710, 110, 12800, -2048, 82, 82, 82, 255),
    VTX(470, 1510, -470, 0, 2048, 255, 255, 191, 255),
    VTX(470, 1510, 110, 12800, 2048, 132, 146, 129, 255),
    VTX(1050, 1510, 110, 10240, 2048, 132, 146, 129, 255),
    VTX(810, 1510, 110, 6003, 2048, 255, 255, 191, 255),
    VTX(710, 1510, 110, 4237, 2048, 132, 146, 129, 255),
    VTX(470, 1510, 110, 0, 2048, 255, 255, 191, 255),
}; 

static Vtx water_temple_room_01Vtx_00B7F8[16] = {
    VTX(798, 1740, -408, -683, 512, 255, 255, 191, 255),
    VTX(798, 1740, -172, 3345, 512, 255, 255, 191, 255),
    VTX(798, 1760, -172, 3345, 0, 255, 255, 191, 255),
    VTX(798, 1760, -408, -683, 0, 132, 146, 129, 255),
    VTX(642, 1740, -408, 1024, -14976, 255, 255, 191, 255),
    VTX(798, 1740, -408, 3686, -14976, 255, 255, 191, 255),
    VTX(798, 1760, -408, 3686, -15232, 132, 146, 129, 255),
    VTX(642, 1760, -408, 1024, -15232, 132, 146, 129, 255),
    VTX(798, 1740, -172, 3686, -14976, 255, 255, 191, 255),
    VTX(642, 1740, -172, 1024, -14976, 255, 255, 191, 255),
    VTX(642, 1760, -172, 1024, -15232, 132, 146, 129, 255),
    VTX(798, 1760, -172, 3686, -15232, 255, 255, 191, 255),
    VTX(642, 1740, -172, 3345, 512, 255, 255, 191, 255),
    VTX(642, 1740, -408, -683, 512, 255, 255, 191, 255),
    VTX(642, 1760, -408, -683, 0, 132, 146, 129, 255),
    VTX(642, 1760, -172, 3345, 0, 132, 146, 129, 255),
}; 

static Vtx water_temple_room_01Vtx_00B8F8[8] = {
    VTX(470, 1330, -470, 0, 0, 0, 0, 0, 0),
    VTX(1050, 1330, -470, 0, 0, 0, 0, 0, 0),
    VTX(470, 1760, -470, 0, 0, 0, 0, 0, 0),
    VTX(1050, 1760, -470, 0, 0, 0, 0, 0, 0),
    VTX(470, 1330, 130, 0, 0, 0, 0, 0, 0),
    VTX(1050, 1330, 130, 0, 0, 0, 0, 0, 0),
    VTX(470, 1760, 130, 0, 0, 0, 0, 0, 0),
    VTX(1050, 1760, 130, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_01Dlist0x00B978[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_01Vtx_00B8F8[0], 8, 0),
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
    gsSPVertex(&water_temple_room_01Vtx_00AF18[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_00BD50, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00B018[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 3, 2, 0, 6, 2, 7, 0),
    gsSP2Triangles(7, 5, 4, 0, 7, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_00C550, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00B098[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 4, 3, 2, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(6, 1, 0, 0, 6, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_00CD50, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00B118[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_00D550, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00B218[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 4, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&water_temple_room_01Vtx_00B218[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_01Vtx_00B608[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 8, 9, 0, 3, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_00DD50, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00B6B8[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 3, 0, 16, 3, 2, 0),
    gsSP2Triangles(0, 18, 19, 0, 0, 19, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_01Vtx_00B7F8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_01Tex_00BD50[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_00BD50.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_00C550[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_00C550.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_00CD50[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_00CD50.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_00D550[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_00D550.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_00DD50[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_00DD50.rgb5a1.inc.c"
};

static Vtx water_temple_room_01Vtx_00ED50[16] = {
    VTX(790, 2050, 70, -512, 512, 0, 0, 0, 255),
    VTX(790, 2050, 50, -512, 1024, 255, 255, 191, 255),
    VTX(730, 2050, 50, 1024, 1024, 255, 255, 191, 255),
    VTX(730, 2050, 70, 1024, 512, 0, 0, 0, 255),
    VTX(730, 2050, 70, 0, 512, 0, 0, 0, 255),
    VTX(730, 2150, 50, 2560, 1024, 255, 255, 191, 255),
    VTX(730, 2150, 70, 2560, 512, 0, 0, 0, 255),
    VTX(730, 2050, 50, 0, 1024, 255, 255, 191, 255),
    VTX(730, 2150, 50, 1024, 1024, 255, 255, 191, 255),
    VTX(790, 2150, 50, -512, 1024, 255, 255, 191, 255),
    VTX(790, 2150, 70, -512, 512, 0, 0, 0, 255),
    VTX(730, 2150, 70, 1024, 512, 0, 0, 0, 255),
    VTX(790, 2150, 50, 2560, 1024, 255, 255, 191, 255),
    VTX(790, 2050, 50, 0, 1024, 255, 255, 191, 255),
    VTX(790, 2050, 70, 0, 512, 0, 0, 0, 255),
    VTX(790, 2150, 70, 2560, 512, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_01Vtx_00EE50[8] = {
    VTX(911, 1760, -253, 0, 1024, 82, 82, 82, 255),
    VTX(879, 1760, -253, 2048, 1024, 132, 146, 129, 255),
    VTX(879, 2011, -253, 2048, -16084, 82, 82, 82, 255),
    VTX(911, 2011, -253, 0, -16084, 82, 82, 82, 255),
    VTX(911, 1760, -251, 0, 1024, 0, 0, 0, 255),
    VTX(879, 1760, -251, 2048, 1024, 0, 0, 0, 255),
    VTX(879, 2011, -251, 2048, -16084, 0, 0, 0, 255),
    VTX(911, 2011, -251, 0, -16084, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_01Vtx_00EED0[6] = {
    VTX(530, 2050, 50, 1024, 10240, 82, 82, 82, 255),
    VTX(990, 2050, 50, 1024, 0, 82, 82, 82, 255),
    VTX(990, 2050, -133, -3052, 0, 255, 255, 191, 255),
    VTX(600, 2050, -133, -3052, 8682, 255, 255, 191, 255),
    VTX(600, 2050, -410, -9216, 8682, 255, 255, 191, 255),
    VTX(530, 2050, -410, -9216, 10240, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_00EF30[5] = {
    VTX(530, 2250, 50, 0, 1024, 82, 82, 82, 255),
    VTX(530, 2250, -410, 10240, 1024, 82, 82, 82, 255),
    VTX(760, 2250, -180, 5120, -4096, 255, 255, 191, 255),
    VTX(990, 2250, -410, 10240, -9216, 82, 82, 82, 255),
    VTX(990, 2250, 50, 0, -9216, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_00EF80[32] = {
    VTX(800, 1760, -170, 3277, 1024, 82, 82, 82, 255),
    VTX(640, 1760, -170, 0, 1024, 255, 255, 191, 255),
    VTX(800, 2000, -170, 3277, -3891, 82, 82, 82, 255),
    VTX(990, 2000, -410, 0, -3891, 82, 82, 82, 255),
    VTX(990, 1760, -410, 0, 1024, 255, 255, 191, 255),
    VTX(990, 1760, -250, 3277, 1024, 255, 255, 191, 255),
    VTX(990, 2000, -250, 3277, -3891, 82, 82, 82, 255),
    VTX(640, 2000, -170, -3891, -3891, 82, 82, 82, 255),
    VTX(640, 1760, -170, -3891, 1024, 255, 255, 191, 255),
    VTX(640, 1760, -410, 1024, 1024, 255, 255, 191, 255),
    VTX(640, 2000, -410, 1024, -3891, 82, 82, 82, 255),
    VTX(640, 2000, -410, 0, -3891, 82, 82, 82, 255),
    VTX(640, 1760, -410, 0, 1024, 255, 255, 191, 255),
    VTX(990, 1760, -410, 7168, 1024, 255, 255, 191, 255),
    VTX(990, 2000, -410, 7168, -3891, 82, 82, 82, 255),
    VTX(800, 1760, -410, 3891, 3277, 255, 255, 191, 255),
    VTX(800, 1760, -250, 3891, 0, 255, 255, 191, 255),
    VTX(990, 1760, -250, 0, 0, 82, 82, 82, 255),
    VTX(990, 1760, -410, 0, 3277, 82, 82, 82, 255),
    VTX(800, 1760, -250, 3277, 1024, 255, 255, 191, 255),
    VTX(895, 2000, -250, 5222, -3891, 0, 0, 0, 255),
    VTX(895, 1760, -250, 5222, 1024, 82, 82, 82, 255),
    VTX(800, 2000, -250, 3277, -3891, 82, 82, 82, 255),
    VTX(990, 1760, -250, 7168, 1024, 255, 255, 191, 255),
    VTX(990, 2000, -250, 7168, -3891, 82, 82, 82, 255),
    VTX(800, 1760, -170, 4915, 1024, 255, 255, 191, 255),
    VTX(800, 2000, -170, 4915, -3891, 82, 82, 82, 255),
    VTX(800, 1760, -250, 3277, 1024, 82, 82, 82, 255),
    VTX(800, 2000, -250, 3891, 2662, 255, 255, 191, 255),
    VTX(800, 2000, -170, 3891, 1024, 82, 82, 82, 255),
    VTX(990, 2000, -170, 0, 1024, 82, 82, 82, 255),
    VTX(990, 2000, -250, 0, 2662, 255, 255, 191, 255),
}; 

static Vtx water_temple_room_01Vtx_00F180[3] = {
    VTX(640, 1760, -170, 0, 1024, 255, 255, 191, 255),
    VTX(640, 2000, -170, 0, -3891, 82, 82, 82, 255),
    VTX(800, 2000, -170, 3277, -3891, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_00F1B0[32] = {
    VTX(640, 2050, -170, 4915, 0, 82, 82, 82, 255),
    VTX(640, 2000, -170, 4915, 1024, 255, 255, 191, 255),
    VTX(640, 2000, -410, 0, 1024, 255, 255, 191, 255),
    VTX(640, 2050, -410, 0, 0, 82, 82, 82, 255),
    VTX(730, 2150, 50, 3072, 0, 255, 255, 191, 255),
    VTX(710, 2170, 50, 4096, 1024, 132, 146, 129, 255),
    VTX(810, 2170, 50, -1024, 1024, 132, 146, 129, 255),
    VTX(790, 2150, 50, 0, 0, 255, 255, 191, 255),
    VTX(810, 2050, 50, 0, 1024, 255, 255, 191, 255),
    VTX(790, 2050, 50, 0, 2048, 255, 255, 191, 255),
    VTX(790, 2150, 50, 5120, 2048, 255, 255, 191, 255),
    VTX(810, 2170, 50, 6144, 1024, 132, 146, 129, 255),
    VTX(990, 2050, -410, 0, 0, 82, 82, 82, 255),
    VTX(990, 2000, -410, 0, 1024, 255, 255, 191, 255),
    VTX(990, 2000, -170, 4915, 1024, 255, 255, 191, 255),
    VTX(990, 2050, -170, 4915, 0, 82, 82, 82, 255),
    VTX(990, 2050, -133, -2048, 79, 82, 82, 82, 255),
    VTX(990, 2050, -170, -2048, 1024, 255, 255, 191, 255),
    VTX(640, 2050, -170, 6912, 1024, 255, 255, 191, 255),
    VTX(600, 2050, -133, 7936, 79, 82, 82, 82, 255),
    VTX(640, 2050, -410, 7168, 0, 82, 82, 82, 255),
    VTX(640, 2000, -410, 7168, 1024, 255, 255, 191, 255),
    VTX(990, 2000, -410, 0, 1024, 255, 255, 191, 255),
    VTX(990, 2050, -410, 0, 0, 82, 82, 82, 255),
    VTX(710, 2170, 50, 6144, 6144, 132, 146, 129, 255),
    VTX(730, 2150, 50, 5120, 5120, 255, 255, 191, 255),
    VTX(730, 2050, 50, 0, 5120, 255, 255, 191, 255),
    VTX(710, 2050, 50, 0, 6144, 255, 255, 191, 255),
    VTX(990, 2050, -170, 0, 0, 82, 82, 82, 255),
    VTX(990, 2000, -170, 0, 1024, 255, 255, 191, 255),
    VTX(640, 2000, -170, 7168, 1024, 255, 255, 191, 255),
    VTX(640, 2050, -170, 7168, 0, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_00F3B0[4] = {
    VTX(640, 2050, -170, 6144, 0, 255, 255, 191, 255),
    VTX(640, 2050, -410, 0, 0, 255, 255, 191, 255),
    VTX(600, 2050, -410, 0, 1024, 82, 82, 82, 255),
    VTX(600, 2050, -133, 7089, 1024, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_01Vtx_00F3F0[19] = {
    VTX(530, 2050, -410, 10240, 2048, 255, 255, 191, 255),
    VTX(530, 2250, -410, 10240, -2048, 82, 82, 82, 255),
    VTX(530, 2250, 50, 0, -2048, 82, 82, 82, 255),
    VTX(530, 2050, 50, 0, 2048, 132, 146, 129, 255),
    VTX(990, 2050, 50, 0, 2048, 255, 255, 191, 255),
    VTX(990, 2250, -410, 10240, -2048, 82, 82, 82, 255),
    VTX(990, 2050, -410, 10240, 2048, 132, 146, 129, 255),
    VTX(990, 2250, 50, 0, -2048, 82, 82, 82, 255),
    VTX(990, 2050, 50, 0, 2048, 132, 146, 129, 255),
    VTX(810, 2050, 50, 4007, 2048, 255, 255, 191, 255),
    VTX(810, 2170, 50, 4007, -410, 132, 146, 129, 255),
    VTX(990, 2250, 50, 0, -2048, 82, 82, 82, 255),
    VTX(710, 2170, 50, 6233, -410, 132, 146, 129, 255),
    VTX(530, 2250, 50, 10240, -2048, 82, 82, 82, 255),
    VTX(710, 2050, 50, 6233, 2048, 132, 146, 129, 255),
    VTX(530, 2050, 50, 10240, 2048, 255, 255, 191, 255),
    VTX(990, 2250, -410, 0, -2048, 82, 82, 82, 255),
    VTX(990, 2050, -410, 0, 2048, 255, 255, 191, 255),
    VTX(530, 2050, -410, 10240, 2048, 132, 146, 129, 255),
}; 

static Vtx water_temple_room_01Vtx_00F520[8] = {
    VTX(530, 1760, -410, 0, 0, 0, 0, 0, 0),
    VTX(990, 1760, -410, 0, 0, 0, 0, 0, 0),
    VTX(530, 2250, -410, 0, 0, 0, 0, 0, 0),
    VTX(990, 2250, -410, 0, 0, 0, 0, 0, 0),
    VTX(530, 1760, 70, 0, 0, 0, 0, 0, 0),
    VTX(990, 1760, 70, 0, 0, 0, 0, 0, 0),
    VTX(530, 2250, 70, 0, 0, 0, 0, 0, 0),
    VTX(990, 2250, 70, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_01Dlist0x00F5A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_01Vtx_00F520[0], 8, 0),
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
    gsSPVertex(&water_temple_room_01Vtx_00ED50[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_00F940, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_01Vtx_00EE50[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_010940, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_01Vtx_00EED0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_011140, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00EF30[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_011940, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00EF80[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 20, 23, 21, 0),
    gsSP2Triangles(20, 24, 23, 0, 25, 26, 22, 0),
    gsSP2Triangles(25, 22, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&water_temple_room_01Vtx_00F180[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_012140, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00F1B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_01Vtx_00F3B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_01Tex_012940, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_01Vtx_00F3F0[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 1, 17, 0, 1, 18, 17, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_01Tex_00F940[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_00F940.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_010940[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_010940.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_011140[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_011140.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_011940[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_011940.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_012140[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_012140.rgb5a1.inc.c"
};

u64 water_temple_room_01Tex_012940[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_01Tex_012940.rgb5a1.inc.c"
};

Gfx water_temple_room_01Dlist0x013940[] = {
    gsSPDisplayList(water_temple_room_01Dlist0x000B60),
    gsSPDisplayList(water_temple_room_01Dlist0x007B00),
    gsSPDisplayList(water_temple_room_01Dlist0x00B978),
    gsSPDisplayList(water_temple_room_01Dlist0x00F5A0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_013968[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


