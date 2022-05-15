#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "unfinished_fire_temple_room_02.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "unfinished_fire_temple_scene.h"


static SCmdRoomBehavior unfinished_fire_temple_room_02Set0000Cmd00;
static SCmdBase unfinished_fire_temple_room_02Set0000Cmd01;
static SCmdSkyboxDisables unfinished_fire_temple_room_02Set0000Cmd02;
static SCmdMesh unfinished_fire_temple_room_02Set0000Cmd03;
static SCmdObjectList unfinished_fire_temple_room_02Set0000Cmd04;
static SCmdActorList unfinished_fire_temple_room_02Set0000Cmd05;
static SCmdEndMarker unfinished_fire_temple_room_02Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx unfinished_fire_temple_room_02Vtx_0000E0[29];
static Vtx unfinished_fire_temple_room_02Vtx_0002B0[6];
static Vtx unfinished_fire_temple_room_02Vtx_000310[20];
static Vtx unfinished_fire_temple_room_02Vtx_000450[4];
static Vtx unfinished_fire_temple_room_02Vtx_000490[8];
static Vtx unfinished_fire_temple_room_02Vtx_000510[4];
static Vtx unfinished_fire_temple_room_02Vtx_000550[32];
static Vtx unfinished_fire_temple_room_02Vtx_000750[34];
static Vtx unfinished_fire_temple_room_02Vtx_000970[4];
static Vtx unfinished_fire_temple_room_02Vtx_0009B0[38];
static Vtx unfinished_fire_temple_room_02Vtx_000C10[4];
static Vtx unfinished_fire_temple_room_02Vtx_000C50[8];
static Vtx unfinished_fire_temple_room_02Vtx_0071C8[85];
static Vtx unfinished_fire_temple_room_02Vtx_007718[6];
static Vtx unfinished_fire_temple_room_02Vtx_007778[32];
static Vtx unfinished_fire_temple_room_02Vtx_007978[4];
static Vtx unfinished_fire_temple_room_02Vtx_0079B8[4];
static Vtx unfinished_fire_temple_room_02Vtx_0079F8[26];
static Vtx unfinished_fire_temple_room_02Vtx_007B98[26];
static Vtx unfinished_fire_temple_room_02Vtx_007D38[16];
static Vtx unfinished_fire_temple_room_02Vtx_007E38[9];
static Vtx unfinished_fire_temple_room_02Vtx_007EC8[4];
static Vtx unfinished_fire_temple_room_02Vtx_007F08[8];
static Vtx unfinished_fire_temple_room_02Vtx_00DC78[32];
static Vtx unfinished_fire_temple_room_02Vtx_00DE78[8];
static Vtx unfinished_fire_temple_room_02Vtx_00DEF8[7];
static Vtx unfinished_fire_temple_room_02Vtx_00DF68[16];
static Vtx unfinished_fire_temple_room_02Vtx_00E068[4];
static Vtx unfinished_fire_temple_room_02Vtx_00E0A8[4];
static Vtx unfinished_fire_temple_room_02Vtx_00E0E8[4];
static Vtx unfinished_fire_temple_room_02Vtx_00E128[32];
static Vtx unfinished_fire_temple_room_02Vtx_00E328[15];
static Vtx unfinished_fire_temple_room_02Vtx_00E418[8];
static Vtx unfinished_fire_temple_room_02Vtx_00E498[16];
static Vtx unfinished_fire_temple_room_02Vtx_00E598[4];
static Vtx unfinished_fire_temple_room_02Vtx_00E5D8[10];
static Vtx unfinished_fire_temple_room_02Vtx_00E678[8];
static Vtx unfinished_fire_temple_room_02Vtx_015BF0[20];
static Vtx unfinished_fire_temple_room_02Vtx_015D30[6];
static Vtx unfinished_fire_temple_room_02Vtx_015D90[25];
static Vtx unfinished_fire_temple_room_02Vtx_015F20[8];
static Vtx unfinished_fire_temple_room_02Vtx_015FA0[4];
static Vtx unfinished_fire_temple_room_02Vtx_015FE0[4];
static Vtx unfinished_fire_temple_room_02Vtx_016020[32];
static Vtx unfinished_fire_temple_room_02Vtx_016220[32];
static Vtx unfinished_fire_temple_room_02Vtx_016420[12];
static Vtx unfinished_fire_temple_room_02Vtx_0164E0[8];
static Vtx unfinished_fire_temple_room_02Vtx_016560[3];
static Vtx unfinished_fire_temple_room_02Vtx_016590[7];
static Vtx unfinished_fire_temple_room_02Vtx_016600[8];
static Vtx unfinished_fire_temple_room_02Vtx_01CB28[16];
static Vtx unfinished_fire_temple_room_02Vtx_01CC28[6];
static Vtx unfinished_fire_temple_room_02Vtx_01CC88[34];
static Vtx unfinished_fire_temple_room_02Vtx_01CEA8[4];
static Vtx unfinished_fire_temple_room_02Vtx_01CEE8[4];
static Vtx unfinished_fire_temple_room_02Vtx_01CF28[51];
static Vtx unfinished_fire_temple_room_02Vtx_01D258[20];
static Vtx unfinished_fire_temple_room_02Vtx_01D398[3];
static Vtx unfinished_fire_temple_room_02Vtx_01D3C8[4];
static Vtx unfinished_fire_temple_room_02Vtx_01D408[3];
static Vtx unfinished_fire_temple_room_02Vtx_01D438[8];
static Vtx unfinished_fire_temple_room_02Vtx_022918[32];
static Vtx unfinished_fire_temple_room_02Vtx_022B18[26];
static Vtx unfinished_fire_temple_room_02Vtx_022CB8[6];
static Vtx unfinished_fire_temple_room_02Vtx_022D18[27];
static Vtx unfinished_fire_temple_room_02Vtx_022EC8[4];
static Vtx unfinished_fire_temple_room_02Vtx_022F08[4];
static Vtx unfinished_fire_temple_room_02Vtx_022F48[62];
static Vtx unfinished_fire_temple_room_02Vtx_023328[4];
static Vtx unfinished_fire_temple_room_02Vtx_023368[16];
static Vtx unfinished_fire_temple_room_02Vtx_023468[4];
static Vtx unfinished_fire_temple_room_02Vtx_0234A8[9];
static Vtx unfinished_fire_temple_room_02Vtx_023538[7];
static Vtx unfinished_fire_temple_room_02Vtx_0235A8[8];
static Vtx unfinished_fire_temple_room_02Vtx_02A368[50];
static Vtx unfinished_fire_temple_room_02Vtx_02A688[6];
static Vtx unfinished_fire_temple_room_02Vtx_02A6E8[14];
static Vtx unfinished_fire_temple_room_02Vtx_02A7C8[4];
static Vtx unfinished_fire_temple_room_02Vtx_02A808[4];
static Vtx unfinished_fire_temple_room_02Vtx_02A848[9];
static Vtx unfinished_fire_temple_room_02Vtx_02A8D8[4];
static Vtx unfinished_fire_temple_room_02Vtx_02A918[8];
static Vtx unfinished_fire_temple_room_02Vtx_02E4C8[32];
static Vtx unfinished_fire_temple_room_02Vtx_02E6C8[32];
static Vtx unfinished_fire_temple_room_02Vtx_02E8C8[16];
static Vtx unfinished_fire_temple_room_02Vtx_02E9C8[6];
static Vtx unfinished_fire_temple_room_02Vtx_02EA28[25];
static Vtx unfinished_fire_temple_room_02Vtx_02EBB8[4];
static Vtx unfinished_fire_temple_room_02Vtx_02EBF8[6];
static Vtx unfinished_fire_temple_room_02Vtx_02EC58[4];
static Vtx unfinished_fire_temple_room_02Vtx_02EC98[16];
static Vtx unfinished_fire_temple_room_02Vtx_02ED98[17];
static Vtx unfinished_fire_temple_room_02Vtx_02EEA8[16];
static Vtx unfinished_fire_temple_room_02Vtx_02EFA8[6];
static Vtx unfinished_fire_temple_room_02Vtx_02F008[4];
static Vtx unfinished_fire_temple_room_02Vtx_02F048[8];

static SCmdRoomBehavior unfinished_fire_temple_room_02Set0000Cmd00 = {  0x08, 0x00, 0x00000001 }; // 0x0000

static SCmdBase unfinished_fire_temple_room_02Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables unfinished_fire_temple_room_02Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh unfinished_fire_temple_room_02Set0000Cmd03 = {  0x0A, 0, (u32)&unfinished_fire_temple_room_02MeshHeader0x0000C0 }; // 0x0018

static SCmdObjectList unfinished_fire_temple_room_02Set0000Cmd04 = {  0x0B, 0x02, (u32)unfinished_fire_temple_room_02ObjectList0x000038 }; // 0x0020

static SCmdActorList unfinished_fire_temple_room_02Set0000Cmd05 = {  0x01, 0x08, (u32)unfinished_fire_temple_room_02ActorList0x00003C }; // 0x0028 }; 

static SCmdEndMarker unfinished_fire_temple_room_02Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 unfinished_fire_temple_room_02ObjectList0x000038[2] = {
	OBJECT_FIRE,
    OBJECT_DDAN_OBJECTS, // manually added
}; 

ActorEntry unfinished_fire_temple_room_02ActorList0x00003C[8] = {
	{ ACTOR_EN_LIGHT, 1480, 2880, 1050, 0, 16384, 0, 0x0000 }, //0x00003C
	{ ACTOR_EN_LIGHT, 1629, 2880, 707, 0, 16384, 0, 0x0000 }, //0x00004C
	{ ACTOR_EN_LIGHT, 1480, 3020, 300, 0, 16384, 0, 0x0000 }, //0x00005C
	{ ACTOR_EN_LIGHT, 2080, 3020, -420, 0, 16384, 0, 0x0000 }, //0x00006C
	{ ACTOR_EN_LIGHT, 2683, 2880, -843, 0, 16384, 0, 0x0000 }, //0x00007C
	{ ACTOR_EN_LIGHT, 1626, 2880, -369, 0, 16384, 0, 0x0000 }, //0x00008C
	{ ACTOR_EN_LIGHT, 950, 2880, -91, 0, 16384, 0, 0x0000 }, //0x00009C
	{ ACTOR_EN_LIGHT, 2540, 3020, 720, 0, 16384, 0, 0x0000 }, //0x0000AC
}; 

static u32 padBC = 0;

MeshHeader0 unfinished_fire_temple_room_02MeshHeader0x0000C0 = { { 0 }, 0x01, (u32)&unfinished_fire_temple_room_02MeshDListEntry0x0000CC, (u32)&(unfinished_fire_temple_room_02MeshDListEntry0x0000CC) + sizeof(unfinished_fire_temple_room_02MeshDListEntry0x0000CC) }; 

MeshEntry0 unfinished_fire_temple_room_02MeshDListEntry0x0000CC[1] = {
	{ (u32)unfinished_fire_temple_room_02Dlist0x035DF0, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 padD8 = 0;
static u32 padDC = 0;

static Vtx unfinished_fire_temple_room_02Vtx_0000E0[29] = {
    VTX(2480, 2800, 40, 3072, -1024, 32, 19, 7, 255),
    VTX(2480, 2940, 40, 3072, 2560, 41, 23, 9, 255),
    VTX(2480, 2940, 120, 5120, 2560, 104, 55, 15, 255),
    VTX(2480, 2800, 120, 5120, -1024, 32, 19, 7, 255),
    VTX(2480, 2800, 120, 0, -1536, 32, 19, 7, 255),
    VTX(2480, 2940, 120, 0, 2048, 104, 55, 15, 255),
    VTX(2300, 2940, 120, 5120, 2048, 143, 94, 35, 255),
    VTX(2300, 2800, 120, 5120, -1536, 32, 19, 7, 255),
    VTX(2300, 2800, 40, 5120, 4096, 32, 19, 7, 255),
    VTX(2300, 2940, 40, 5120, 512, 60, 37, 15, 255),
    VTX(2480, 2800, 40, 0, 4096, 32, 19, 7, 255),
    VTX(2480, 2940, 40, 0, 512, 41, 23, 9, 255),
    VTX(2620, 2800, -280, -1536, 2560, 32, 19, 7, 255),
    VTX(2620, 2940, -140, 2048, -1024, 104, 55, 15, 255),
    VTX(2620, 2800, -140, 2048, 2560, 32, 19, 7, 255),
    VTX(2420, 2800, -100, -2048, -512, 32, 19, 7, 255),
    VTX(2420, 2940, -100, -2048, 3072, 41, 23, 9, 255),
    VTX(2420, 2800, -280, 2560, -512, 32, 19, 7, 255),
    VTX(2900, 2940, -280, -1536, 2048, 60, 37, 15, 255),
    VTX(2760, 2800, -280, 2048, -1536, 32, 19, 7, 255),
    VTX(2900, 2800, -280, -1536, -1536, 32, 19, 7, 255),
    VTX(2520, 2840, -100, 2560, 2048, 104, 55, 15, 255),
    VTX(2420, 2800, -100, 5120, 1024, 32, 19, 7, 255),
    VTX(2620, 2800, -100, 0, 1024, 32, 19, 7, 255),
    VTX(2580, 2840, -100, 1024, 2048, 104, 55, 15, 255),
    VTX(2520, 2900, -100, 2560, 3584, 143, 94, 35, 255),
    VTX(2420, 2940, -100, 5120, 4608, 41, 23, 9, 255),
    VTX(2580, 2900, -100, 1024, 3584, 143, 94, 35, 255),
    VTX(2620, 2940, -100, 0, 4608, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_0002B0[6] = {
    VTX(2300, 3200, 120, -5632, -4608, 22, 3, 5, 255),
    VTX(2300, 3600, -120, 512, -14848, 22, 3, 5, 255),
    VTX(2300, 3600, 120, -5632, -14848, 22, 3, 5, 255),
    VTX(2300, 2940, -120, 512, 2048, 143, 94, 35, 255),
    VTX(2300, 3200, -120, 512, -4608, 41, 23, 9, 255),
    VTX(2300, 2940, 120, -5632, 2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000310[20] = {
    VTX(2480, 2940, 40, 0, 1024, 41, 23, 9, 255),
    VTX(2300, 2940, 120, 2048, 5632, 143, 94, 35, 255),
    VTX(2480, 2940, 120, 2048, 1024, 104, 55, 15, 255),
    VTX(2300, 2940, 40, 0, 5632, 60, 37, 15, 255),
    VTX(2980, 2800, -30, 0, 0, 32, 19, 7, 255),
    VTX(2960, 2800, -30, 0, 512, 60, 37, 15, 255),
    VTX(2960, 2800, 30, 1536, 512, 60, 37, 15, 255),
    VTX(2980, 2800, 30, 1536, 0, 32, 19, 7, 255),
    VTX(2980, 2900, -30, -1536, -1536, 143, 94, 35, 255),
    VTX(2960, 2900, -30, -1024, -1536, 60, 37, 15, 255),
    VTX(2960, 2800, -30, -1024, 1024, 60, 37, 15, 255),
    VTX(2980, 2800, -30, -1536, 1024, 32, 19, 7, 255),
    VTX(2980, 2800, 30, -1536, 1024, 32, 19, 7, 255),
    VTX(2960, 2800, 30, -1024, 1024, 60, 37, 15, 255),
    VTX(2960, 2900, 30, -1024, -1536, 60, 37, 15, 255),
    VTX(2980, 2900, 30, -1536, -1536, 143, 94, 35, 255),
    VTX(2960, 2900, -30, 0, 1024, 60, 37, 15, 255),
    VTX(2980, 2900, -30, 512, 1024, 143, 94, 35, 255),
    VTX(2980, 2900, 30, 512, 2560, 143, 94, 35, 255),
    VTX(2960, 2900, 30, 0, 2560, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000450[4] = {
    VTX(3140, 2840, -30, 0, 2048, 143, 94, 35, 255),
    VTX(3140, 2840, 30, 2048, 2048, 143, 94, 35, 255),
    VTX(3140, 2900, 30, 2048, 0, 143, 94, 35, 255),
    VTX(3140, 2900, -30, 0, 0, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000490[8] = {
    VTX(2300, 2800, -120, 1229, -6554, 32, 19, 7, 255),
    VTX(2620, 2800, -140, 1434, -3277, 32, 19, 7, 255),
    VTX(3140, 2800, -400, 4096, 2048, 32, 19, 7, 255),
    VTX(2620, 2800, 140, -1434, -3277, 32, 19, 7, 255),
    VTX(2300, 2800, 120, -1229, -6554, 32, 19, 7, 255),
    VTX(2980, 2800, -140, 1434, 410, 32, 19, 7, 255),
    VTX(2980, 2800, 140, -1434, 410, 32, 19, 7, 255),
    VTX(3140, 2800, 400, -4096, 2048, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000510[4] = {
    VTX(2840, 3600, -300, 8192, 512, 0, 0, 0, 255),
    VTX(3140, 3200, 400, 0, -3072, 32, 19, 7, 255),
    VTX(2840, 3600, 300, 8192, -2560, 0, 0, 0, 255),
    VTX(3140, 3200, -400, 0, 1024, 36, 14, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000550[32] = {
    VTX(2980, 2800, 140, 1024, 2048, 32, 19, 7, 255),
    VTX(2980, 2960, 140, 1024, -2048, 143, 94, 35, 255),
    VTX(2620, 2800, 140, -8192, 2048, 32, 19, 7, 255),
    VTX(3140, 2900, 30, 2048, 512, 143, 94, 35, 255),
    VTX(3140, 2820, 50, 2560, 2560, 104, 55, 15, 255),
    VTX(3140, 2920, 50, 2560, 0, 104, 55, 15, 255),
    VTX(3140, 2820, -50, 0, 2560, 104, 55, 15, 255),
    VTX(3140, 2840, -30, 512, 2048, 143, 94, 35, 255),
    VTX(3140, 2900, -30, 512, 512, 143, 94, 35, 255),
    VTX(3140, 2920, -50, 0, 0, 104, 55, 15, 255),
    VTX(3140, 2940, 400, 8960, -1536, 143, 94, 35, 255),
    VTX(3140, 2940, 0, -1280, -1536, 143, 94, 35, 255),
    VTX(3140, 2920, 50, 0, -1024, 104, 55, 15, 255),
    VTX(3140, 2920, -50, -2560, -1024, 104, 55, 15, 255),
    VTX(2300, 2800, 40, 0, 2048, 32, 19, 7, 255),
    VTX(2300, 2800, -120, 4096, 2048, 32, 19, 7, 255),
    VTX(2300, 2940, -120, 4096, -1536, 143, 94, 35, 255),
    VTX(2300, 2940, 40, 0, -1536, 60, 37, 15, 255),
    VTX(3140, 2940, -400, -11520, -1536, 60, 37, 15, 255),
    VTX(3140, 2800, -400, -11520, 2048, 32, 19, 7, 255),
    VTX(3140, 2800, 0, -1280, 2048, 32, 19, 7, 255),
    VTX(3140, 2820, -50, -2560, 1536, 104, 55, 15, 255),
    VTX(3140, 2820, 50, 0, 1536, 104, 55, 15, 255),
    VTX(3140, 2840, 30, 2048, 2048, 143, 94, 35, 255),
    VTX(3140, 2800, 400, 8960, 2048, 32, 19, 7, 255),
    VTX(2620, 2800, -140, -8192, 2048, 32, 19, 7, 255),
    VTX(2620, 2960, -140, -8192, -2048, 104, 55, 15, 255),
    VTX(2980, 2960, -140, 1024, -2048, 60, 37, 15, 255),
    VTX(2980, 2800, 50, -2560, 2048, 32, 19, 7, 255),
    VTX(2980, 2920, 50, -2560, -1024, 104, 55, 15, 255),
    VTX(2980, 2960, 140, -4864, -2048, 143, 94, 35, 255),
    VTX(2980, 2800, 140, -4864, 2048, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000750[34] = {
    VTX(3140, 2940, 400, 10240, 2048, 143, 94, 35, 255),
    VTX(3140, 3200, 400, 10240, -1280, 32, 19, 7, 255),
    VTX(3140, 2940, -400, 0, 2048, 60, 37, 15, 255),
    VTX(2980, 2920, -50, 0, -1024, 104, 55, 15, 255),
    VTX(2980, 2800, -50, 0, 2048, 32, 19, 7, 255),
    VTX(2980, 2800, -140, 2304, 2048, 32, 19, 7, 255),
    VTX(2980, 2960, 140, -4864, -2048, 143, 94, 35, 255),
    VTX(2980, 2920, 50, -2560, -1024, 104, 55, 15, 255),
    VTX(2620, 2960, -100, 0, -2048, 143, 94, 35, 255),
    VTX(2620, 2960, -140, -1024, -2048, 104, 55, 15, 255),
    VTX(2620, 2940, -100, 0, -1536, 104, 55, 15, 255),
    VTX(2620, 2940, -140, -1024, -1536, 104, 55, 15, 255),
    VTX(3140, 2940, -400, -11520, -1536, 60, 37, 15, 255),
    VTX(3140, 2800, -400, -11520, 2048, 32, 19, 7, 255),
    VTX(3140, 2820, -50, -2560, 1536, 104, 55, 15, 255),
    VTX(3140, 2920, -50, -2560, -1024, 104, 55, 15, 255),
    VTX(3140, 3200, -400, 0, -1280, 36, 14, 5, 255),
    VTX(2980, 2960, -140, 2304, -2048, 60, 37, 15, 255),
    VTX(2620, 2800, -140, -8192, 2048, 32, 19, 7, 255),
    VTX(2980, 2960, -140, 1024, -2048, 60, 37, 15, 255),
    VTX(2980, 2800, -140, 1024, 2048, 32, 19, 7, 255),
    VTX(3140, 2820, 50, 0, 1536, 104, 55, 15, 255),
    VTX(3140, 2800, 400, 8960, 2048, 32, 19, 7, 255),
    VTX(3140, 2940, 400, 8960, -1536, 143, 94, 35, 255),
    VTX(3140, 2920, 50, 0, -1024, 104, 55, 15, 255),
    VTX(3140, 2900, 30, 2048, 512, 143, 94, 35, 255),
    VTX(3140, 2840, 30, 2048, 2048, 143, 94, 35, 255),
    VTX(3140, 2820, 50, 2560, 2560, 104, 55, 15, 255),
    VTX(2620, 2960, 140, 6144, -2048, 104, 55, 15, 255),
    VTX(2620, 2800, -100, 0, 2048, 32, 19, 7, 255),
    VTX(2620, 2800, 140, 6144, 2048, 32, 19, 7, 255),
    VTX(2980, 2960, 140, 1024, -2048, 143, 94, 35, 255),
    VTX(2620, 2960, 140, -8192, -2048, 104, 55, 15, 255),
    VTX(2620, 2800, 140, -8192, 2048, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000970[4] = {
    VTX(2520, 2840, -100, 0, 2048, 104, 55, 15, 255),
    VTX(2580, 2840, -100, 2048, 2048, 104, 55, 15, 255),
    VTX(2580, 2900, -100, 2048, 0, 143, 94, 35, 255),
    VTX(2520, 2900, -100, 0, 0, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_0009B0[38] = {
    VTX(2980, 2900, 30, 1024, -4096, 143, 94, 35, 255),
    VTX(2990, 2800, 30, 0, 1024, 32, 19, 7, 255),
    VTX(2980, 2800, 30, 1024, 1024, 32, 19, 7, 255),
    VTX(2980, 2800, 50, 1024, 1024, 32, 19, 7, 255),
    VTX(2990, 2800, 50, 0, 1024, 32, 19, 7, 255),
    VTX(2990, 2920, 50, 0, -5120, 143, 94, 35, 255),
    VTX(2980, 2920, 50, 1024, -5120, 104, 55, 15, 255),
    VTX(2620, 2960, -140, 0, 1024, 104, 55, 15, 255),
    VTX(2620, 2960, 140, 7168, 1024, 104, 55, 15, 255),
    VTX(2980, 2960, -140, 0, -8192, 60, 37, 15, 255),
    VTX(2980, 2960, 140, 7168, -8192, 143, 94, 35, 255),
    VTX(2990, 2800, -30, 4096, 1024, 32, 19, 7, 255),
    VTX(2990, 2800, -50, 5120, 1024, 32, 19, 7, 255),
    VTX(2990, 2900, -30, 4096, -4096, 143, 94, 35, 255),
    VTX(2980, 2920, -50, 1024, -5120, 104, 55, 15, 255),
    VTX(2990, 2920, -50, 0, -5120, 143, 94, 35, 255),
    VTX(2990, 2800, -50, 0, 1024, 32, 19, 7, 255),
    VTX(2980, 2800, -50, 1024, 1024, 32, 19, 7, 255),
    VTX(2990, 2920, -50, 5120, -5120, 143, 94, 35, 255),
    VTX(2990, 2920, 50, 0, -5120, 143, 94, 35, 255),
    VTX(2990, 2900, 30, 1024, -4096, 143, 94, 35, 255),
    VTX(2990, 2800, 50, 0, 1024, 32, 19, 7, 255),
    VTX(2990, 2800, 30, 1024, 1024, 32, 19, 7, 255),
    VTX(2980, 2920, 50, 0, -3072, 104, 55, 15, 255),
    VTX(2990, 2920, 50, 1024, -3072, 143, 94, 35, 255),
    VTX(2990, 2920, -50, 1024, 2048, 143, 94, 35, 255),
    VTX(2980, 2920, -50, 0, 2048, 104, 55, 15, 255),
    VTX(2980, 2900, -30, 0, 1024, 143, 94, 35, 255),
    VTX(2990, 2900, -30, 1024, 1024, 143, 94, 35, 255),
    VTX(2990, 2900, 30, 1024, -2048, 143, 94, 35, 255),
    VTX(2980, 2900, 30, 0, -2048, 143, 94, 35, 255),
    VTX(2980, 2800, -30, 1024, 1024, 32, 19, 7, 255),
    VTX(2990, 2800, -30, 0, 1024, 32, 19, 7, 255),
    VTX(2990, 2900, -30, 0, -4096, 143, 94, 35, 255),
    VTX(2980, 2900, -30, 1024, -4096, 143, 94, 35, 255),
    VTX(2980, 2900, 30, 1024, -4096, 143, 94, 35, 255),
    VTX(2990, 2900, 30, 0, -4096, 143, 94, 35, 255),
    VTX(2990, 2800, 30, 0, 1024, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000C10[4] = {
    VTX(2300, 3600, 120, -4915, -6554, 22, 3, 5, 255),
    VTX(2300, 3600, -120, -4915, -9011, 22, 3, 5, 255),
    VTX(2840, 3600, -300, -10445, -10854, 0, 0, 0, 255),
    VTX(2840, 3600, 300, -10445, -4710, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_000C50[8] = {
    VTX(2300, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(2300, 2800, 400, 0, 0, 0, 0, 0, 0),
    VTX(2300, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(2300, 3600, 400, 0, 0, 0, 0, 0, 0),
    VTX(3140, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(3140, 2800, 400, 0, 0, 0, 0, 0, 0),
    VTX(3140, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(3140, 3600, 400, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_02Dlist0x000CD0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000C50[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_003CB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0000E0[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 22, 21, 25, 0),
    gsSP2Triangles(22, 25, 26, 0, 25, 27, 28, 0),
    gsSP2Triangles(25, 28, 26, 0, 27, 24, 23, 0),
    gsSP1Triangle(27, 23, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0044B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0002B0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 5, 3, 0, 0, 4, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000310[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0011C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000450[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0021C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000490[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(3, 0, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 2, 0, 1, 5, 2, 0),
    gsSP2Triangles(7, 6, 3, 0, 7, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0031C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000510[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0041C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000550[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 11, 13, 0),
    gsSP2Triangles(8, 3, 5, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 8, 5, 9, 0),
    gsSP2Triangles(13, 11, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(21, 20, 22, 0, 23, 7, 6, 0),
    gsSP2Triangles(23, 6, 4, 0, 22, 20, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(31, 28, 30, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000750[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 3, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 1, 16, 2, 0),
    gsSP2Triangles(3, 5, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(6, 3, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 8, 29, 0, 28, 29, 30, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000750[31], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0051C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000970[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0061C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0009B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(12, 18, 13, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 13, 0, 19, 21, 20, 0),
    gsSP2Triangles(21, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0009B0[31], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0069C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_000C10[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_02Tex_0011C8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0011C8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0021C8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0021C8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0031C8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0031C8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0041C8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0041C8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0051C8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0051C8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0061C8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0061C8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0069C8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0069C8.rgb5a1.inc.c"
};

static Vtx unfinished_fire_temple_room_02Vtx_0071C8[85] = {
    VTX(2480, 2940, -660, -512, 2048, 104, 55, 15, 255),
    VTX(2480, 2940, -780, 2560, 2048, 143, 94, 35, 255),
    VTX(2480, 2800, -780, 2560, -1536, 32, 19, 7, 255),
    VTX(2480, 2800, -660, -512, -1536, 32, 19, 7, 255),
    VTX(2340, 2800, -660, 2048, 4096, 32, 19, 7, 255),
    VTX(2340, 2940, -660, 2048, 512, 104, 55, 15, 255),
    VTX(2480, 2940, -660, -1536, 512, 104, 55, 15, 255),
    VTX(2480, 2800, -660, -1536, 4096, 32, 19, 7, 255),
    VTX(2900, 2940, -280, -1536, 2048, 60, 37, 15, 255),
    VTX(2760, 2940, -280, 2048, 2048, 60, 37, 15, 255),
    VTX(2760, 2800, -280, 2048, -1536, 32, 19, 7, 255),
    VTX(2760, 2940, -280, -1536, 2048, 60, 37, 15, 255),
    VTX(2760, 2940, -420, 2048, 2048, 143, 94, 35, 255),
    VTX(2760, 2800, -420, 2048, -1536, 32, 19, 7, 255),
    VTX(2760, 2800, -280, -1536, -1536, 32, 19, 7, 255),
    VTX(2760, 2940, -420, 3072, 512, 104, 55, 15, 255),
    VTX(2900, 2940, -420, -512, 512, 60, 37, 15, 255),
    VTX(2900, 2800, -420, -512, 4096, 32, 19, 7, 255),
    VTX(2760, 2800, -420, 3072, 4096, 32, 19, 7, 255),
    VTX(2760, 2800, -560, -2560, -1536, 32, 19, 7, 255),
    VTX(2760, 2940, -560, -2560, 2048, 143, 94, 35, 255),
    VTX(2760, 2940, -780, 3072, 2048, 104, 55, 15, 255),
    VTX(2760, 2800, -780, 3072, -1536, 32, 19, 7, 255),
    VTX(2620, 2940, -920, 5120, 512, 104, 55, 15, 255),
    VTX(2340, 2940, -920, -2048, 512, 104, 55, 15, 255),
    VTX(2340, 2800, -920, -2048, 4096, 32, 19, 7, 255),
    VTX(2620, 2800, -920, 5120, 4096, 32, 19, 7, 255),
    VTX(2620, 2800, -780, -14336, 2560, 32, 19, 7, 255),
    VTX(2620, 2940, -780, -14336, -1024, 240, 148, 0, 255),
    VTX(2620, 2800, -420, -5120, 2560, 32, 19, 7, 255),
    VTX(2620, 2940, -420, -5120, -1024, 60, 37, 15, 255),
    VTX(2480, 2800, -780, -1536, 4096, 32, 19, 7, 255),
    VTX(2480, 2940, -780, -1536, 512, 143, 94, 35, 255),
    VTX(2620, 2940, -780, -5120, 512, 240, 148, 0, 255),
    VTX(2620, 2800, -780, -5120, 4096, 32, 19, 7, 255),
    VTX(2620, 2800, -280, -1536, 2560, 32, 19, 7, 255),
    VTX(2620, 2940, -280, -1536, -1024, 104, 55, 15, 255),
    VTX(2620, 2940, -140, 2048, -1024, 104, 55, 15, 255),
    VTX(2480, 2800, -420, -6656, -1536, 32, 19, 7, 255),
    VTX(2480, 2940, -420, -6656, 2048, 60, 37, 15, 255),
    VTX(2480, 2940, -520, -4096, 2048, 60, 37, 15, 255),
    VTX(2480, 2800, -520, -4096, -1536, 32, 19, 7, 255),
    VTX(2480, 2940, -520, 1024, 512, 60, 37, 15, 255),
    VTX(2340, 2940, -520, -2560, 512, 60, 37, 15, 255),
    VTX(2340, 2800, -520, -2560, 4096, 32, 19, 7, 255),
    VTX(2480, 2800, -520, 1024, 4096, 32, 19, 7, 255),
    VTX(2620, 2800, -420, 4608, 4096, 32, 19, 7, 255),
    VTX(2620, 2940, -420, 4608, 512, 60, 37, 15, 255),
    VTX(2480, 2940, -420, 1024, 512, 60, 37, 15, 255),
    VTX(2480, 2800, -420, 1024, 4096, 32, 19, 7, 255),
    VTX(2420, 2800, -280, 3584, 4096, 32, 19, 7, 255),
    VTX(2420, 2940, -280, 3584, 512, 60, 37, 15, 255),
    VTX(2620, 2940, -280, -1536, 512, 60, 37, 15, 255),
    VTX(2620, 2800, -280, -1536, 4096, 32, 19, 7, 255),
    VTX(2420, 2940, -100, -2048, 3072, 41, 23, 9, 255),
    VTX(2420, 2940, -280, 2560, 3072, 143, 94, 35, 255),
    VTX(2420, 2800, -280, 2560, -512, 32, 19, 7, 255),
    VTX(2340, 2940, -380, -2560, 512, 104, 55, 15, 255),
    VTX(2280, 2940, -380, -4096, 512, 182, 136, 83, 255),
    VTX(2340, 2800, -380, -2560, 4096, 32, 19, 7, 255),
    VTX(2280, 2800, -380, -4096, 4096, 32, 19, 7, 255),
    VTX(2340, 2940, -520, -7680, -1024, 60, 37, 15, 255),
    VTX(2340, 2940, -380, -4096, -1024, 104, 55, 15, 255),
    VTX(2340, 2800, -380, -4096, 2560, 32, 19, 7, 255),
    VTX(2340, 2800, -520, -7680, 2560, 32, 19, 7, 255),
    VTX(2280, 2800, -380, -3584, -1536, 32, 19, 7, 255),
    VTX(2280, 2940, -380, -3584, 2048, 240, 148, 0, 255),
    VTX(2280, 2800, -700, 4608, -1536, 32, 19, 7, 255),
    VTX(2280, 2940, -700, 4608, 2048, 60, 37, 15, 255),
    VTX(2140, 2800, -500, 4096, 4096, 32, 19, 7, 255),
    VTX(2140, 2940, -500, 4096, 512, 143, 94, 35, 255),
    VTX(2140, 2800, -280, -1536, 4096, 32, 19, 7, 255),
    VTX(2140, 2940, -280, -1536, 512, 143, 94, 35, 255),
    VTX(2340, 2800, -780, 0, 1024, 32, 19, 7, 255),
    VTX(2340, 2940, -780, 0, 4608, 143, 94, 35, 255),
    VTX(2340, 2940, -660, 3072, 4608, 104, 55, 15, 255),
    VTX(2340, 2800, -660, 3072, 1024, 32, 19, 7, 255),
    VTX(2180, 2940, -780, 6144, 512, 60, 37, 15, 255),
    VTX(2340, 2800, -780, 2048, 4096, 32, 19, 7, 255),
    VTX(2180, 2800, -780, 6144, 4096, 32, 19, 7, 255),
    VTX(2340, 2940, -780, 2048, 512, 143, 94, 35, 255),
    VTX(2280, 2800, -700, 1536, 4096, 32, 19, 7, 255),
    VTX(2180, 2940, -700, -1024, 512, 240, 148, 0, 255),
    VTX(2180, 2800, -700, -1024, 4096, 32, 19, 7, 255),
    VTX(2280, 2940, -700, 1536, 512, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_007718[6] = {
    VTX(2300, 3600, -120, -3569, -12800, 22, 3, 5, 255),
    VTX(2300, 3200, -120, -3569, -2560, 22, 3, 5, 255),
    VTX(2060, 3200, -360, 5120, -2560, 41, 23, 9, 255),
    VTX(2060, 3600, -360, 5120, -12800, 22, 3, 5, 255),
    VTX(2300, 2940, -120, -3569, 4096, 104, 55, 15, 255),
    VTX(2060, 2940, -360, 5120, 4096, 240, 148, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_007778[32] = {
    VTX(2420, 2940, -280, 7168, -1536, 143, 94, 35, 255),
    VTX(2420, 2940, -100, 11776, -1536, 41, 23, 9, 255),
    VTX(2620, 2940, -100, 11776, -6656, 104, 55, 15, 255),
    VTX(2060, 2940, -360, -512, -5632, 240, 148, 0, 255),
    VTX(2140, 2940, -280, -2560, -7680, 143, 94, 35, 255),
    VTX(2080, 2940, -420, -1024, -4096, 32, 19, 7, 255),
    VTX(2140, 2940, -500, -2560, -2048, 240, 148, 0, 255),
    VTX(2340, 2940, -780, -5632, 512, 143, 94, 35, 255),
    VTX(2280, 2940, -700, -3584, 2048, 143, 94, 35, 255),
    VTX(2280, 2940, -380, 4608, 2048, 240, 148, 0, 255),
    VTX(2340, 2940, -380, 4608, 512, 104, 55, 15, 255),
    VTX(2620, 2940, -780, -5632, -6656, 240, 148, 0, 255),
    VTX(2480, 2940, -420, 3584, -3072, 60, 37, 15, 255),
    VTX(2620, 2940, -420, 3584, -6656, 60, 37, 15, 255),
    VTX(2480, 2940, -780, -5632, -3072, 143, 94, 35, 255),
    VTX(2340, 2940, -1200, -16384, 512, 104, 55, 15, 255),
    VTX(2340, 2940, -920, -9216, 512, 60, 37, 15, 255),
    VTX(2620, 2940, -920, -9216, -6656, 104, 55, 15, 255),
    VTX(2760, 2940, -780, -5632, -10240, 104, 55, 15, 255),
    VTX(2760, 2940, -560, 0, -10240, 143, 94, 35, 255),
    VTX(2980, 2940, -560, 0, -15872, 60, 37, 15, 255),
    VTX(2340, 2940, -660, -2560, 512, 143, 94, 35, 255),
    VTX(2340, 2940, -520, 1024, 512, 60, 37, 15, 255),
    VTX(2480, 2940, -520, 1024, -3072, 60, 37, 15, 255),
    VTX(2180, 2940, -700, -3584, 4608, 240, 148, 0, 255),
    VTX(2180, 2940, -780, -5632, 4608, 60, 37, 15, 255),
    VTX(2480, 2940, -660, -2560, -3072, 143, 94, 35, 255),
    VTX(2760, 2940, -420, -2560, 512, 143, 94, 35, 255),
    VTX(2760, 2940, -280, 1024, 512, 60, 37, 15, 255),
    VTX(2900, 2940, -280, 1024, -3072, 60, 37, 15, 255),
    VTX(2900, 2940, -420, -2560, -3072, 60, 37, 15, 255),
    VTX(2620, 2940, -280, 7168, -6656, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_007978[4] = {
    VTX(2340, 2800, -1200, 12288, -6144, 32, 19, 7, 255),
    VTX(2300, 2800, -120, 1229, -6554, 32, 19, 7, 255),
    VTX(3140, 2800, -400, 4096, 2048, 32, 19, 7, 255),
    VTX(2060, 2800, -360, 3686, -9011, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_0079B8[4] = {
    VTX(3140, 3200, -400, 0, -4769, 36, 14, 5, 255),
    VTX(2240, 3600, -900, 8192, 300, 0, 0, 0, 255),
    VTX(2340, 3200, -1200, 0, 1024, 36, 14, 5, 255),
    VTX(2840, 3600, -300, 8192, -4045, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_0079F8[26] = {
    VTX(2340, 2800, -920, 7168, 2048, 32, 19, 7, 255),
    VTX(2340, 2940, -920, 7168, -2048, 104, 55, 15, 255),
    VTX(2340, 2940, -1200, 0, -2048, 104, 55, 15, 255),
    VTX(2340, 2800, -1200, 0, 2048, 32, 19, 7, 255),
    VTX(2100, 3020, -440, 1024, 1992, 240, 141, 89, 255),
    VTX(2100, 3020, -400, 0, 1992, 143, 94, 35, 255),
    VTX(2090, 2960, -410, 256, 6144, 104, 55, 15, 255),
    VTX(2090, 2960, -430, 768, 6144, 104, 55, 15, 255),
    VTX(2060, 3020, -440, 1024, 2048, 143, 94, 35, 255),
    VTX(2100, 3020, -440, 0, 2048, 240, 141, 89, 255),
    VTX(2090, 2960, -430, 256, 6201, 104, 55, 15, 255),
    VTX(2070, 2960, -430, 768, 6201, 60, 37, 15, 255),
    VTX(2060, 3020, -400, 1024, 2048, 240, 141, 89, 255),
    VTX(2060, 3020, -440, 0, 2048, 143, 94, 35, 255),
    VTX(2070, 2960, -430, 256, 6201, 60, 37, 15, 255),
    VTX(2070, 2960, -410, 768, 6201, 143, 94, 35, 255),
    VTX(2100, 3020, -400, 1024, 2048, 143, 94, 35, 255),
    VTX(2060, 3020, -400, 0, 2048, 240, 141, 89, 255),
    VTX(2070, 2960, -410, 256, 6201, 143, 94, 35, 255),
    VTX(2090, 2960, -410, 768, 6201, 104, 55, 15, 255),
    VTX(2670, 2880, -830, 1022, -2047, 143, 94, 35, 255),
    VTX(2670, 2880, -870, 0, -2048, 60, 37, 15, 255),
    VTX(2690, 2800, -850, 509, 2175, 32, 19, 7, 255),
    VTX(2710, 2880, -830, 3, -2055, 60, 37, 15, 255),
    VTX(2670, 2880, -830, 1025, -2053, 182, 136, 83, 255),
    VTX(2690, 2800, -850, 512, 2164, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_007B98[26] = {
    VTX(2620, 2940, -920, 5069, -1536, 104, 55, 15, 255),
    VTX(2620, 2800, -920, 5069, 2048, 32, 19, 7, 255),
    VTX(2690, 2893, -850, 2534, -341, 240, 148, 0, 255),
    VTX(2690, 2800, -850, 2534, 2048, 32, 19, 7, 255),
    VTX(2760, 2800, -780, 0, 2048, 32, 19, 7, 255),
    VTX(2760, 2940, -780, 0, -1536, 104, 55, 15, 255),
    VTX(2140, 2940, -280, 5793, -1536, 143, 94, 35, 255),
    VTX(2300, 2800, -120, 0, 2048, 32, 19, 7, 255),
    VTX(2140, 2800, -280, 5793, 2048, 32, 19, 7, 255),
    VTX(2340, 3200, -1200, 14482, -1280, 36, 14, 5, 255),
    VTX(2340, 2940, -1200, 14482, 2048, 104, 55, 15, 255),
    VTX(3140, 2940, -400, 0, 2048, 60, 37, 15, 255),
    VTX(3140, 3200, -400, 0, -1280, 36, 14, 5, 255),
    VTX(2900, 2940, -420, 20992, -1536, 60, 37, 15, 255),
    VTX(2900, 2940, -280, 17408, -1536, 60, 37, 15, 255),
    VTX(2900, 2800, -280, 17408, 2048, 32, 19, 7, 255),
    VTX(2900, 2800, -420, 20992, 2048, 32, 19, 7, 255),
    VTX(3140, 2800, -400, -1313, 2044, 32, 19, 7, 255),
    VTX(3140, 2940, -400, -1313, -1540, 60, 37, 15, 255),
    VTX(2980, 2940, -560, -7106, -1540, 60, 37, 15, 255),
    VTX(2980, 2940, -560, 1024, -1536, 60, 37, 15, 255),
    VTX(2760, 2940, -560, -4608, -1536, 143, 94, 35, 255),
    VTX(2760, 2800, -560, -4608, 2048, 32, 19, 7, 255),
    VTX(2980, 2800, -560, 1024, 2048, 32, 19, 7, 255),
    VTX(2980, 2800, -560, -7106, 2044, 32, 19, 7, 255),
    VTX(2300, 2940, -120, 0, -1536, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_007D38[16] = {
    VTX(2090, 2960, -430, 256, -121, 104, 55, 15, 255),
    VTX(2100, 2940, -440, 0, 1024, 155, 84, 21, 255),
    VTX(2060, 2940, -440, 1024, 1024, 155, 84, 21, 255),
    VTX(2070, 2960, -430, 768, -121, 60, 37, 15, 255),
    VTX(2090, 2960, -410, 256, -121, 104, 55, 15, 255),
    VTX(2100, 2940, -400, 0, 1024, 155, 84, 21, 255),
    VTX(2100, 2940, -440, 1024, 1024, 155, 84, 21, 255),
    VTX(2090, 2960, -430, 768, -121, 104, 55, 15, 255),
    VTX(2070, 2960, -410, 256, -121, 143, 94, 35, 255),
    VTX(2060, 2940, -400, 0, 1024, 155, 84, 21, 255),
    VTX(2100, 2940, -400, 1024, 1024, 155, 84, 21, 255),
    VTX(2090, 2960, -410, 768, -121, 104, 55, 15, 255),
    VTX(2070, 2960, -430, 256, -121, 60, 37, 15, 255),
    VTX(2060, 2940, -440, 0, 1024, 155, 84, 21, 255),
    VTX(2060, 2940, -400, 1024, 1024, 155, 84, 21, 255),
    VTX(2070, 2960, -410, 768, -121, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_007E38[9] = {
    VTX(2670, 2880, -870, 0, 2955, 22, 3, 5, 255),
    VTX(2670, 2880, -830, 965, 1989, 255, 255, 255, 255),
    VTX(2710, 2880, -830, 0, 1024, 22, 3, 5, 255),
    VTX(2100, 3020, -440, 1024, 2048, 240, 141, 89, 255),
    VTX(2060, 3020, -440, 1024, 1024, 143, 94, 35, 255),
    VTX(2060, 3020, -400, 0, 1024, 240, 141, 89, 255),
    VTX(2060, 3020, -400, 0, 1024, 240, 141, 89, 255),
    VTX(2100, 3020, -400, 0, 2048, 143, 94, 35, 255),
    VTX(2100, 3020, -440, 1024, 2048, 240, 141, 89, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_007EC8[4] = {
    VTX(2840, 3600, -300, -10445, -10854, 0, 0, 0, 255),
    VTX(2300, 3600, -120, -4915, -9011, 22, 3, 5, 255),
    VTX(2060, 3600, -360, -2458, -11469, 22, 3, 5, 255),
    VTX(2240, 3600, -900, -4301, -16998, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_007F08[8] = {
    VTX(2060, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(2060, 2800, -100, 0, 0, 0, 0, 0, 0),
    VTX(2060, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(2060, 3600, -100, 0, 0, 0, 0, 0, 0),
    VTX(3140, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(3140, 2800, -100, 0, 0, 0, 0, 0, 0),
    VTX(3140, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(3140, 3600, -100, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_02Dlist0x007F88[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_007F08[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_003CB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0071C8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 23, 25, 0, 27, 28, 29, 0),
    gsSP1Triangle(28, 30, 29, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0071C8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 27, 29, 28, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0071C8[61], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0044B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_007718[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_007778[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 8, 7, 0, 24, 7, 25, 0),
    gsSP2Triangles(21, 23, 26, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 0, 2, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_008478, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_007978[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_009478, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0079B8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_00A478, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0079F8[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_00B478, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_007B98[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(0, 2, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 20, 22, 0, 24, 17, 19, 0),
    gsSP1Triangle(6, 25, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_00C478, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_007D38[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_00CC78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_007E38[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_00D478, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_007EC8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_02Tex_008478[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_008478.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_009478[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_009478.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_00A478[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_00A478.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_00B478[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_00B478.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_00C478[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_00C478.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_00CC78[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_00CC78.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_00D478[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_00D478.rgb5a1.inc.c"
};

static Vtx unfinished_fire_temple_room_02Vtx_00DC78[32] = {
    VTX(2120, 2800, -920, 0, 1024, 32, 19, 7, 255),
    VTX(2120, 2940, -920, 0, 4608, 143, 94, 35, 255),
    VTX(1780, 2940, -920, 8704, 4608, 104, 55, 15, 255),
    VTX(1780, 2800, -920, 8704, 1024, 32, 19, 7, 255),
    VTX(2040, 2940, -500, 1536, 2048, 104, 55, 15, 255),
    VTX(2140, 2940, -500, 4096, 2048, 143, 94, 35, 255),
    VTX(2040, 2800, -500, 1536, -1536, 32, 19, 7, 255),
    VTX(2140, 2800, -500, 4096, -1536, 32, 19, 7, 255),
    VTX(2040, 2800, -780, 2048, 4096, 32, 19, 7, 255),
    VTX(2040, 2940, -780, 2048, 512, 143, 94, 35, 255),
    VTX(2040, 2800, -500, -5120, 4096, 32, 19, 7, 255),
    VTX(2040, 2940, -500, -5120, 512, 104, 55, 15, 255),
    VTX(1920, 2800, -640, -4608, -1536, 32, 19, 7, 255),
    VTX(1920, 2940, -640, -4608, 2048, 60, 37, 15, 255),
    VTX(1920, 2940, -780, -1024, 2048, 104, 55, 15, 255),
    VTX(1920, 2800, -780, -1024, -1536, 32, 19, 7, 255),
    VTX(1780, 2800, -640, -5120, -1536, 32, 19, 7, 255),
    VTX(1780, 2940, -640, -5120, 2048, 104, 55, 15, 255),
    VTX(1920, 2940, -640, -1536, 2048, 60, 37, 15, 255),
    VTX(1920, 2800, -640, -1536, -1536, 32, 19, 7, 255),
    VTX(1780, 2800, -920, 0, 1024, 32, 19, 7, 255),
    VTX(1780, 2840, -880, 1024, 2048, 60, 37, 15, 255),
    VTX(1780, 2840, -820, 2560, 2048, 60, 37, 15, 255),
    VTX(1780, 2800, -640, 7168, 1024, 32, 19, 7, 255),
    VTX(1920, 2800, -780, -1536, -1536, 32, 19, 7, 255),
    VTX(1920, 2940, -780, -1536, 2048, 60, 37, 15, 255),
    VTX(2040, 2940, -780, 1536, 2048, 60, 37, 15, 255),
    VTX(2040, 2800, -780, 1536, -1536, 32, 19, 7, 255),
    VTX(2180, 2940, -700, -3072, 2048, 240, 148, 0, 255),
    VTX(2180, 2940, -780, -1024, 2048, 60, 37, 15, 255),
    VTX(2180, 2800, -700, -3072, -1536, 32, 19, 7, 255),
    VTX(2180, 2800, -780, -1024, -1536, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00DE78[8] = {
    VTX(1780, 2940, -920, 0, 4608, 104, 55, 15, 255),
    VTX(1780, 2940, -640, 7168, 4608, 104, 55, 15, 255),
    VTX(1780, 2900, -820, 2560, 3584, 143, 94, 35, 255),
    VTX(1780, 2900, -880, 1024, 3584, 143, 94, 35, 255),
    VTX(1780, 2800, -920, 0, 1024, 32, 19, 7, 255),
    VTX(1780, 2840, -880, 1024, 2048, 60, 37, 15, 255),
    VTX(1780, 2800, -640, 7168, 1024, 32, 19, 7, 255),
    VTX(1780, 2840, -820, 2560, 2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00DEF8[7] = {
    VTX(1820, 2940, -360, 6144, 2048, 60, 37, 15, 255),
    VTX(2060, 3200, -360, 0, -4608, 41, 23, 9, 255),
    VTX(1960, 2940, -360, 2560, 2048, 60, 37, 15, 255),
    VTX(2060, 2940, -360, 0, 2048, 240, 148, 0, 255),
    VTX(1820, 3200, -360, 6144, -4608, 41, 23, 9, 255),
    VTX(1820, 3600, -360, 6144, -14848, 22, 3, 5, 255),
    VTX(2060, 3600, -360, 0, -14848, 22, 3, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00DF68[16] = {
    VTX(1680, 2940, -920, 9216, 8704, 104, 55, 15, 255),
    VTX(2120, 2940, -920, -2048, 8704, 143, 94, 35, 255),
    VTX(2120, 2940, -1060, -2048, 12288, 60, 37, 15, 255),
    VTX(1920, 2940, -640, 3072, 1536, 143, 94, 35, 255),
    VTX(1780, 2940, -640, 6656, 1536, 60, 37, 15, 255),
    VTX(1680, 2940, -500, 9216, -2048, 240, 148, 0, 255),
    VTX(2040, 2940, -500, 0, -2048, 182, 136, 83, 255),
    VTX(2060, 2940, -360, -512, -5632, 240, 148, 0, 255),
    VTX(2080, 2940, -420, -1024, -4096, 32, 19, 7, 255),
    VTX(1960, 2940, -500, 2048, -2048, 143, 94, 35, 255),
    VTX(1960, 2940, -360, 2048, -5632, 104, 55, 15, 255),
    VTX(2140, 2940, -500, -2560, -2048, 240, 148, 0, 255),
    VTX(2040, 2940, -780, 0, 5120, 143, 94, 35, 255),
    VTX(1920, 2940, -780, 3072, 5120, 104, 55, 15, 255),
    VTX(1680, 2940, -1060, 9216, 12288, 60, 37, 15, 255),
    VTX(1780, 2940, -920, 6656, 8704, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E068[4] = {
    VTX(1780, 2840, -880, 2048, 2048, 60, 37, 15, 255),
    VTX(1780, 2900, -880, 2048, 0, 143, 94, 35, 255),
    VTX(1780, 2900, -820, 0, 0, 143, 94, 35, 255),
    VTX(1780, 2840, -820, 0, 2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E0A8[4] = {
    VTX(2060, 2800, -360, 3686, -9011, 32, 19, 7, 255),
    VTX(2340, 2800, -1200, 12288, -6144, 32, 19, 7, 255),
    VTX(1540, 2800, -1200, 12288, -14336, 32, 19, 7, 255),
    VTX(1820, 2800, -360, 3686, -11469, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E0E8[4] = {
    VTX(1640, 3600, -900, 8192, 512, 0, 0, 0, 255),
    VTX(1540, 3200, -1200, 0, 1024, 36, 14, 5, 255),
    VTX(2340, 3200, -1200, 0, -3072, 36, 14, 5, 255),
    VTX(2240, 3600, -900, 8192, -2560, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E128[32] = {
    VTX(2120, 2940, -1060, 0, -2048, 60, 37, 15, 255),
    VTX(2120, 2800, -1060, 0, 2048, 32, 19, 7, 255),
    VTX(1680, 2940, -1060, 11264, -2048, 60, 37, 15, 255),
    VTX(1960, 2800, -500, 7168, 2048, 32, 19, 7, 255),
    VTX(1960, 2940, -500, 7168, -2048, 60, 37, 15, 255),
    VTX(1680, 2940, -500, 0, -2048, 240, 148, 0, 255),
    VTX(1680, 2800, -500, 0, 2048, 32, 19, 7, 255),
    VTX(2120, 2800, -1060, 3584, 2048, 32, 19, 7, 255),
    VTX(2120, 2940, -920, 0, -2048, 143, 94, 35, 255),
    VTX(2120, 2800, -920, 0, 2048, 32, 19, 7, 255),
    VTX(2120, 2940, -1060, 3584, -2048, 60, 37, 15, 255),
    VTX(2340, 2800, -1200, 1024, 2048, 32, 19, 7, 255),
    VTX(2340, 2940, -1200, 1024, -2048, 104, 55, 15, 255),
    VTX(1540, 2940, -1200, -19456, -2048, 104, 55, 15, 255),
    VTX(1540, 2800, -1200, -19456, 2048, 32, 19, 7, 255),
    VTX(1680, 2940, -780, 7168, -2048, 104, 55, 15, 255),
    VTX(1680, 2800, -780, 7168, 2048, 32, 19, 7, 255),
    VTX(1680, 2800, -500, 14336, 2048, 32, 19, 7, 255),
    VTX(1680, 2840, -960, 2560, 878, 60, 37, 15, 255),
    VTX(1680, 2840, -1020, 1024, 878, 60, 37, 15, 255),
    VTX(1680, 2800, -1060, 0, 2048, 32, 19, 7, 255),
    VTX(1680, 2900, -1020, 1024, -878, 143, 94, 35, 255),
    VTX(1680, 2940, -1060, 0, -2048, 60, 37, 15, 255),
    VTX(1680, 2900, -960, 2560, -878, 143, 94, 35, 255),
    VTX(1960, 3020, -1000, 1024, 2048, 143, 94, 35, 255),
    VTX(1920, 3020, -1000, 0, 2048, 104, 55, 15, 255),
    VTX(1930, 2960, -1010, 256, 6201, 60, 37, 15, 255),
    VTX(1950, 2960, -1010, 768, 6201, 104, 55, 15, 255),
    VTX(1960, 3020, -1040, 1024, 1992, 60, 37, 15, 255),
    VTX(1960, 3020, -1000, 0, 1992, 143, 94, 35, 255),
    VTX(1950, 2960, -1010, 256, 6144, 104, 55, 15, 255),
    VTX(1950, 2960, -1030, 768, 6144, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E328[15] = {
    VTX(1920, 3020, -1000, 1024, 2048, 104, 55, 15, 255),
    VTX(1920, 3020, -1040, 0, 2048, 60, 37, 15, 255),
    VTX(1930, 2960, -1030, 256, 6201, 60, 37, 15, 255),
    VTX(1930, 2960, -1010, 768, 6201, 60, 37, 15, 255),
    VTX(1920, 3020, -1040, 1024, 2048, 60, 37, 15, 255),
    VTX(1960, 3020, -1040, 0, 2048, 60, 37, 15, 255),
    VTX(1950, 2960, -1030, 256, 6201, 60, 37, 15, 255),
    VTX(1930, 2960, -1030, 768, 6201, 60, 37, 15, 255),
    VTX(2120, 2800, -1060, 0, 2048, 32, 19, 7, 255),
    VTX(1680, 2800, -1060, 11264, 2048, 32, 19, 7, 255),
    VTX(1680, 2940, -1060, 11264, -2048, 60, 37, 15, 255),
    VTX(1960, 2800, -360, 0, 2048, 32, 19, 7, 255),
    VTX(1820, 2800, -360, 3584, 2048, 32, 19, 7, 255),
    VTX(1960, 2940, -360, 0, -2048, 143, 94, 35, 255),
    VTX(1820, 2940, -360, 3584, -2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E418[8] = {
    VTX(2340, 2940, -1200, 0, 2048, 104, 55, 15, 255),
    VTX(1540, 3200, -1200, 10240, -1280, 36, 14, 5, 255),
    VTX(1540, 2940, -1200, 10240, 2048, 104, 55, 15, 255),
    VTX(1960, 2800, -360, 2048, 2048, 32, 19, 7, 255),
    VTX(1960, 2940, -500, -1536, -1536, 60, 37, 15, 255),
    VTX(1960, 2800, -500, -1536, 2048, 32, 19, 7, 255),
    VTX(1960, 2940, -360, 2048, -1536, 143, 94, 35, 255),
    VTX(2340, 3200, -1200, 0, -1280, 36, 14, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E498[16] = {
    VTX(1930, 2960, -1010, 256, -121, 60, 37, 15, 255),
    VTX(1960, 2940, -1000, 1024, 1024, 155, 84, 21, 255),
    VTX(1950, 2960, -1010, 768, -121, 104, 55, 15, 255),
    VTX(1950, 2960, -1030, 256, -121, 60, 37, 15, 255),
    VTX(1960, 2940, -1040, 0, 1024, 60, 37, 15, 255),
    VTX(1920, 2940, -1040, 1024, 1024, 60, 37, 15, 255),
    VTX(1930, 2960, -1030, 768, -121, 60, 37, 15, 255),
    VTX(1950, 2960, -1010, 256, -121, 104, 55, 15, 255),
    VTX(1960, 2940, -1000, 0, 1024, 155, 84, 21, 255),
    VTX(1960, 2940, -1040, 1024, 1024, 60, 37, 15, 255),
    VTX(1950, 2960, -1030, 768, -121, 60, 37, 15, 255),
    VTX(1930, 2960, -1030, 256, -121, 60, 37, 15, 255),
    VTX(1920, 2940, -1040, 0, 1024, 60, 37, 15, 255),
    VTX(1920, 2940, -1000, 1024, 1024, 155, 84, 21, 255),
    VTX(1930, 2960, -1010, 768, -121, 60, 37, 15, 255),
    VTX(1920, 2940, -1000, 0, 1024, 155, 84, 21, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E598[4] = {
    VTX(1680, 2840, -960, 2048, 2048, 60, 37, 15, 255),
    VTX(1680, 2900, -1020, 0, 0, 143, 94, 35, 255),
    VTX(1680, 2840, -1020, 0, 2048, 60, 37, 15, 255),
    VTX(1680, 2900, -960, 2048, 0, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E5D8[10] = {
    VTX(1960, 3020, -1040, 1024, 2048, 60, 37, 15, 255),
    VTX(1920, 3020, -1040, 1024, 1024, 60, 37, 15, 255),
    VTX(1920, 3020, -1000, 0, 1024, 104, 55, 15, 255),
    VTX(1920, 3020, -1000, 0, 1024, 104, 55, 15, 255),
    VTX(1960, 3020, -1000, 0, 2048, 143, 94, 35, 255),
    VTX(1960, 3020, -1040, 1024, 2048, 60, 37, 15, 255),
    VTX(1640, 3600, -900, -10445, -4710, 0, 0, 0, 255),
    VTX(2240, 3600, -900, -10445, -10854, 0, 0, 0, 255),
    VTX(1820, 3600, -360, -4915, -6554, 22, 3, 5, 255),
    VTX(2060, 3600, -360, -4915, -9011, 22, 3, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_00E678[8] = {
    VTX(1540, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(1540, 2800, -360, 0, 0, 0, 0, 0, 0),
    VTX(1540, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(1540, 3600, -360, 0, 0, 0, 0, 0, 0),
    VTX(2340, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(2340, 2800, -360, 0, 0, 0, 0, 0, 0),
    VTX(2340, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(2340, 3600, -360, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_02Dlist0x00E6F8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E678[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_003CB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00DC78[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00DE78[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0044B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00DEF8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 5, 6, 0),
    gsSP1Triangle(4, 6, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00DF68[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 3, 0, 12, 3, 6, 0),
    gsSP2Triangles(14, 0, 2, 0, 15, 0, 5, 0),
    gsSP1Triangle(15, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_00EBF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E068[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_00FBF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E0A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_010BF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E0E8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_011BF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E128[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 21, 22, 20, 0),
    gsSP2Triangles(18, 16, 23, 0, 16, 15, 23, 0),
    gsSP2Triangles(21, 23, 15, 0, 21, 15, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E328[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP1Triangle(12, 14, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_012BF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E418[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 0, 7, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_013BF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E498[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 0, 15, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0143F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E598[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0153F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_00E5D8[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_02Tex_00EBF0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_00EBF0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_00FBF0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_00FBF0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_010BF0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_010BF0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_011BF0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_011BF0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_012BF0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_012BF0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_013BF0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_013BF0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0143F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0143F0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0153F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0153F0.rgb5a1.inc.c"
};

static Vtx unfinished_fire_temple_room_02Vtx_015BF0[20] = {
    VTX(1140, 2940, -740, 1536, 4608, 104, 55, 15, 255),
    VTX(1080, 2940, -740, 0, 4608, 104, 55, 15, 255),
    VTX(1080, 2800, -740, 0, 1024, 32, 19, 7, 255),
    VTX(1140, 2800, -740, 1536, 1024, 32, 19, 7, 255),
    VTX(1140, 2800, -500, -3584, 4608, 32, 19, 7, 255),
    VTX(1140, 2940, -500, -3584, 1024, 60, 37, 15, 255),
    VTX(1140, 2940, -740, -9728, 1024, 104, 55, 15, 255),
    VTX(1140, 2800, -740, -9728, 4608, 32, 19, 7, 255),
    VTX(1000, 2800, -660, -6656, 1024, 32, 19, 7, 255),
    VTX(1000, 2940, -660, -6656, 4608, 60, 37, 15, 255),
    VTX(1000, 2940, -400, 0, 4608, 104, 55, 15, 255),
    VTX(1000, 2800, -400, 0, 1024, 32, 19, 7, 255),
    VTX(1000, 2800, -400, -2048, 1024, 32, 19, 7, 255),
    VTX(1000, 2940, -400, -2048, 4608, 104, 55, 15, 255),
    VTX(740, 2940, -400, -8704, 4608, 60, 37, 15, 255),
    VTX(740, 2800, -400, -8704, 1024, 32, 19, 7, 255),
    VTX(1140, 2800, -260, 2560, 4608, 32, 19, 7, 255),
    VTX(1140, 2940, -260, 2560, 1024, 60, 37, 15, 255),
    VTX(1140, 2940, -360, 0, 1024, 60, 37, 15, 255),
    VTX(1140, 2800, -360, 0, 4608, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_015D30[6] = {
    VTX(1580, 2940, -120, 512, 2048, 143, 94, 35, 255),
    VTX(1580, 3200, -120, 512, -4608, 41, 23, 9, 255),
    VTX(1820, 3200, -360, -8177, -4608, 22, 3, 5, 255),
    VTX(1820, 2940, -360, -8177, 2048, 60, 37, 15, 255),
    VTX(1580, 3600, -120, 512, -14848, 22, 3, 5, 255),
    VTX(1820, 3600, -360, -8177, -14848, 22, 3, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_015D90[25] = {
    VTX(1820, 2940, -360, 15872, -1536, 60, 37, 15, 255),
    VTX(1580, 2940, -220, 9728, 2048, 104, 55, 15, 255),
    VTX(1580, 2940, -120, 9728, 4608, 143, 94, 35, 255),
    VTX(1140, 2940, -360, -1536, -1536, 60, 37, 15, 255),
    VTX(1300, 2940, -220, 2560, 2048, 60, 37, 15, 255),
    VTX(1260, 2940, -500, -2048, -5120, 143, 94, 35, 255),
    VTX(1260, 2940, -920, -2048, 5632, 104, 55, 15, 255),
    VTX(1140, 2940, -800, 1024, 2560, 104, 55, 15, 255),
    VTX(1140, 2940, -500, 1024, -5120, 60, 37, 15, 255),
    VTX(1400, 2940, -1060, 3584, 1024, 104, 55, 15, 255),
    VTX(1400, 2940, -780, 3584, -6144, 143, 94, 35, 255),
    VTX(1540, 2940, -780, 0, -6144, 60, 37, 15, 255),
    VTX(1540, 2940, -1060, 0, 1024, 104, 55, 15, 255),
    VTX(1400, 2940, -1000, 3584, -512, 104, 55, 15, 255),
    VTX(1340, 2940, -1000, 5120, -512, 104, 55, 15, 255),
    VTX(1140, 2940, -740, 1024, 1024, 104, 55, 15, 255),
    VTX(1080, 2940, -740, 2560, 1024, 104, 55, 15, 255),
    VTX(740, 2940, -400, 4096, 7680, 60, 37, 15, 255),
    VTX(1000, 2940, -400, 4096, 1024, 104, 55, 15, 255),
    VTX(1000, 2940, -660, -2560, 1024, 60, 37, 15, 255),
    VTX(1540, 2940, -1200, 0, 4608, 104, 55, 15, 255),
    VTX(1540, 2940, -640, 0, -9728, 60, 37, 15, 255),
    VTX(1400, 2940, -640, 3584, -9728, 60, 37, 15, 255),
    VTX(1400, 2940, -500, 3584, -13312, 143, 94, 35, 255),
    VTX(1540, 2940, -500, 0, -13312, 240, 148, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_015F20[8] = {
    VTX(1440, 2900, -640, 2048, 0, 104, 55, 15, 255),
    VTX(1500, 2840, -640, 0, 2048, 104, 55, 15, 255),
    VTX(1440, 2840, -640, 2048, 2048, 104, 55, 15, 255),
    VTX(1500, 2900, -640, 0, 0, 104, 55, 15, 255),
    VTX(1440, 2840, -500, 2048, 2048, 104, 55, 15, 255),
    VTX(1500, 2900, -500, 0, 0, 143, 94, 35, 255),
    VTX(1440, 2900, -500, 2048, 0, 143, 94, 35, 255),
    VTX(1500, 2840, -500, 0, 2048, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_015FA0[4] = {
    VTX(1580, 2800, -120, 1229, -13926, 32, 19, 7, 255),
    VTX(1540, 2800, -1200, 12288, -14336, 32, 19, 7, 255),
    VTX(740, 2800, -400, 4096, -22528, 32, 19, 7, 255),
    VTX(1820, 2800, -360, 3686, -11469, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_015FE0[4] = {
    VTX(1040, 3600, -300, 8192, 300, 0, 0, 0, 255),
    VTX(740, 3200, -400, 0, 1024, 36, 14, 5, 255),
    VTX(1540, 3200, -1200, 0, -4769, 36, 14, 5, 255),
    VTX(1640, 3600, -900, 8192, -4045, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_016020[32] = {
    VTX(1540, 2800, -780, 3584, 2048, 32, 19, 7, 255),
    VTX(1540, 2940, -780, 3584, -2048, 60, 37, 15, 255),
    VTX(1400, 2940, -780, 0, -2048, 143, 94, 35, 255),
    VTX(1400, 2800, -780, 0, 2048, 32, 19, 7, 255),
    VTX(1260, 2800, -920, 10752, 2048, 32, 19, 7, 255),
    VTX(1260, 2940, -920, 10752, -2048, 104, 55, 15, 255),
    VTX(1260, 2940, -500, 0, -2048, 143, 94, 35, 255),
    VTX(1260, 2800, -500, 0, 2048, 32, 19, 7, 255),
    VTX(1540, 2800, -640, 0, 2048, 32, 19, 7, 255),
    VTX(1540, 2940, -640, 0, -2048, 60, 37, 15, 255),
    VTX(1540, 2940, -500, 3584, -2048, 240, 148, 0, 255),
    VTX(1540, 2800, -500, 3584, 2048, 32, 19, 7, 255),
    VTX(1260, 2940, -920, 2896, -2048, 104, 55, 15, 255),
    VTX(1260, 2800, -920, 2896, 2048, 32, 19, 7, 255),
    VTX(1340, 2800, -1000, 0, 2048, 32, 19, 7, 255),
    VTX(1140, 2800, -500, 0, 2048, 32, 19, 7, 255),
    VTX(1260, 2800, -500, 3072, 2048, 32, 19, 7, 255),
    VTX(1260, 2940, -500, 3072, -2048, 143, 94, 35, 255),
    VTX(1140, 2940, -500, 0, -2048, 60, 37, 15, 255),
    VTX(1400, 2940, -640, 9216, -2048, 60, 37, 15, 255),
    VTX(1400, 2800, -640, 9216, 2048, 32, 19, 7, 255),
    VTX(1400, 2800, -500, 12800, 2048, 32, 19, 7, 255),
    VTX(1400, 2940, -500, 12800, -2048, 143, 94, 35, 255),
    VTX(1400, 2940, -1000, 0, -2048, 104, 55, 15, 255),
    VTX(1400, 2800, -1000, 0, 2048, 32, 19, 7, 255),
    VTX(1400, 2800, -780, 5632, 2048, 32, 19, 7, 255),
    VTX(1400, 2940, -780, 5632, -2048, 143, 94, 35, 255),
    VTX(1340, 2940, -1000, 0, -2048, 104, 55, 15, 255),
    VTX(1400, 2940, -1000, 0, -2048, 104, 55, 15, 255),
    VTX(1340, 2940, -1000, -1536, -2048, 104, 55, 15, 255),
    VTX(1340, 2800, -1000, -1536, 2048, 32, 19, 7, 255),
    VTX(1500, 2840, -640, 1024, 878, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_016220[32] = {
    VTX(1540, 2940, -640, 0, -2048, 60, 37, 15, 255),
    VTX(1500, 2840, -640, 1024, 878, 104, 55, 15, 255),
    VTX(1500, 2900, -640, 1024, -878, 104, 55, 15, 255),
    VTX(1400, 2940, -640, 3584, -2048, 60, 37, 15, 255),
    VTX(1440, 2900, -640, 2560, -878, 104, 55, 15, 255),
    VTX(1540, 2800, -640, 0, 2048, 32, 19, 7, 255),
    VTX(1400, 2800, -640, 3584, 2048, 32, 19, 7, 255),
    VTX(1440, 2840, -640, 2560, 878, 104, 55, 15, 255),
    VTX(1400, 2940, -1000, 0, -2048, 104, 55, 15, 255),
    VTX(1340, 2800, -1000, -1536, 2048, 32, 19, 7, 255),
    VTX(1400, 2800, -1000, 0, 2048, 32, 19, 7, 255),
    VTX(1680, 2940, -780, 7168, -2048, 104, 55, 15, 255),
    VTX(1680, 2800, -500, 14336, 2048, 32, 19, 7, 255),
    VTX(1680, 2940, -500, 14336, -2048, 240, 148, 0, 255),
    VTX(1820, 2800, -360, 3584, 2048, 32, 19, 7, 255),
    VTX(1626, 2893, -360, 8558, -683, 240, 148, 0, 255),
    VTX(1820, 2940, -360, 3584, -2048, 60, 37, 15, 255),
    VTX(1626, 2800, -360, 8558, 2048, 32, 19, 7, 255),
    VTX(1140, 2800, -360, 20992, 2048, 32, 19, 7, 255),
    VTX(1140, 2940, -360, 20992, -2048, 60, 37, 15, 255),
    VTX(1540, 2800, -1200, 1024, 2048, 32, 19, 7, 255),
    VTX(1540, 2940, -1200, 1024, -2048, 104, 55, 15, 255),
    VTX(1540, 2940, -780, -9728, -2048, 60, 37, 15, 255),
    VTX(1540, 2800, -780, -9728, 2048, 32, 19, 7, 255),
    VTX(1440, 2900, -500, 1024, -878, 143, 94, 35, 255),
    VTX(1540, 2940, -500, 3584, -2048, 240, 148, 0, 255),
    VTX(1400, 2940, -500, 0, -2048, 143, 94, 35, 255),
    VTX(1500, 2900, -500, 2560, -878, 143, 94, 35, 255),
    VTX(1400, 2800, -500, 0, 2048, 32, 19, 7, 255),
    VTX(1440, 2840, -500, 1024, 878, 104, 55, 15, 255),
    VTX(1540, 2800, -500, 3584, 2048, 32, 19, 7, 255),
    VTX(1500, 2840, -500, 2560, 878, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_016420[12] = {
    VTX(1597, 2880, -360, 3, -2055, 155, 84, 21, 255),
    VTX(1626, 2880, -388, 1025, -2053, 182, 136, 83, 255),
    VTX(1626, 2800, -360, 512, 2164, 32, 19, 7, 255),
    VTX(1626, 2880, -388, 1022, -2047, 182, 136, 83, 255),
    VTX(1654, 2880, -360, 0, -2048, 155, 84, 21, 255),
    VTX(1626, 2800, -360, 509, 2175, 32, 19, 7, 255),
    VTX(1228, 2880, -500, 3, -2055, 60, 37, 15, 255),
    VTX(1200, 2880, -472, 1025, -2053, 104, 55, 15, 255),
    VTX(1200, 2800, -500, 512, 2164, 32, 19, 7, 255),
    VTX(1200, 2880, -472, 1022, -2047, 104, 55, 15, 255),
    VTX(1172, 2880, -500, 0, -2048, 60, 37, 15, 255),
    VTX(1200, 2800, -500, 509, 2175, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_0164E0[8] = {
    VTX(740, 3200, -400, 14482, -1280, 36, 14, 5, 255),
    VTX(1540, 2940, -1200, 0, 2048, 104, 55, 15, 255),
    VTX(1540, 3200, -1200, 0, -1280, 36, 14, 5, 255),
    VTX(1000, 2940, -660, 0, -1536, 60, 37, 15, 255),
    VTX(1080, 2800, -740, 2896, 2048, 32, 19, 7, 255),
    VTX(1080, 2940, -740, 2896, -1536, 104, 55, 15, 255),
    VTX(1000, 2800, -660, 0, 2048, 32, 19, 7, 255),
    VTX(740, 2940, -400, 14482, 2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_016560[3] = {
    VTX(1654, 2880, -360, 0, 2955, 155, 84, 21, 255),
    VTX(1626, 2880, -388, 965, 1989, 182, 136, 83, 255),
    VTX(1597, 2880, -360, 0, 1024, 155, 84, 21, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_016590[7] = {
    VTX(1172, 2880, -500, 0, 0, 60, 37, 15, 255),
    VTX(1200, 2880, -472, 0, 1024, 104, 55, 15, 255),
    VTX(1228, 2880, -500, 1024, 1024, 60, 37, 15, 255),
    VTX(1580, 3600, -120, -2458, -4096, 22, 3, 5, 255),
    VTX(1040, 3600, -300, -4301, 1434, 0, 0, 0, 255),
    VTX(1820, 3600, -360, -4915, -6554, 22, 3, 5, 255),
    VTX(1640, 3600, -900, -10445, -4710, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_016600[8] = {
    VTX(740, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(740, 2800, -120, 0, 0, 0, 0, 0, 0),
    VTX(740, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(740, 3600, -120, 0, 0, 0, 0, 0, 0),
    VTX(1820, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(1820, 2800, -120, 0, 0, 0, 0, 0, 0),
    VTX(1820, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(1820, 3600, -120, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_02Dlist0x016680[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_016600[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_003CB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_015BF0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0044B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_015D30[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_015D90[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 9, 14, 0),
    gsSP2Triangles(15, 7, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 9, 12, 0, 21, 22, 23, 0),
    gsSP1Triangle(21, 23, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_016B28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_015F20[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_017B28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_015FA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_018B28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_015FE0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_019B28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_016020[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 12, 14, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 9, 8, 31, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_016220[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 1, 5, 6, 0),
    gsSP2Triangles(1, 6, 7, 0, 3, 4, 7, 0),
    gsSP2Triangles(3, 7, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 17, 15, 0, 17, 18, 15, 0),
    gsSP2Triangles(18, 19, 15, 0, 15, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 24, 26, 0, 28, 29, 24, 0),
    gsSP2Triangles(27, 30, 25, 0, 27, 31, 30, 0),
    gsSP2Triangles(29, 30, 31, 0, 29, 28, 30, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_016420[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_01AB28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0164E0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 0, 7, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_01BB28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_016560[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_01C328, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_016590[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_02Tex_016B28[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_016B28.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_017B28[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_017B28.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_018B28[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_018B28.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_019B28[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_019B28.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_01AB28[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_01AB28.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_01BB28[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_01BB28.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_01C328[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_01C328.rgb5a1.inc.c"
};

static Vtx unfinished_fire_temple_room_02Vtx_01CB28[16] = {
    VTX(740, 2800, -260, 3584, 1024, 32, 19, 7, 255),
    VTX(740, 2800, -400, 0, 1024, 32, 19, 7, 255),
    VTX(740, 2940, -400, 0, 4608, 60, 37, 15, 255),
    VTX(740, 2940, -260, 3584, 4608, 60, 37, 15, 255),
    VTX(740, 2800, -260, -8704, 1024, 32, 19, 7, 255),
    VTX(740, 2940, -260, -8704, 4608, 60, 37, 15, 255),
    VTX(1140, 2940, -260, 1536, 4608, 60, 37, 15, 255),
    VTX(1140, 2800, -260, 1536, 1024, 32, 19, 7, 255),
    VTX(1440, 2800, 80, 0, 1024, 32, 19, 7, 255),
    VTX(1440, 2940, 200, 3072, 4608, 143, 94, 35, 255),
    VTX(1440, 2800, 200, 3072, 1024, 32, 19, 7, 255),
    VTX(1440, 2940, 80, 0, 4608, 143, 94, 35, 255),
    VTX(1360, 2800, 80, 1024, 1024, 32, 19, 7, 255),
    VTX(1360, 2940, 80, 1024, -2560, 104, 55, 15, 255),
    VTX(1440, 2940, 80, -1024, -2560, 104, 55, 15, 255),
    VTX(1440, 2800, 80, -1024, 1024, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01CC28[6] = {
    VTX(1580, 2940, 120, 512, 2048, 143, 94, 35, 255),
    VTX(1580, 3200, 120, 512, -4608, 41, 23, 9, 255),
    VTX(1580, 3200, -120, -5632, -4608, 22, 3, 5, 255),
    VTX(1580, 2940, -120, -5632, 2048, 143, 94, 35, 255),
    VTX(1580, 3600, 120, 512, -14848, 22, 3, 5, 255),
    VTX(1580, 3600, -120, -5632, -14848, 22, 3, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01CC88[34] = {
    VTX(740, 2940, 150, 1024, 1024, 104, 55, 15, 255),
    VTX(720, 2940, 150, 512, 1024, 104, 55, 15, 255),
    VTX(720, 2940, 310, 512, -512, 104, 55, 15, 255),
    VTX(740, 2940, 310, 1024, -512, 104, 55, 15, 255),
    VTX(740, 3100, 310, 1024, -512, 143, 94, 35, 255),
    VTX(720, 3100, 310, 512, -512, 60, 37, 15, 255),
    VTX(720, 3100, 150, 512, 1024, 60, 37, 15, 255),
    VTX(740, 3100, 150, 1024, 1024, 143, 94, 35, 255),
    VTX(740, 3100, 150, -2048, -2048, 143, 94, 35, 255),
    VTX(720, 3100, 150, -1536, -2048, 60, 37, 15, 255),
    VTX(720, 2940, 150, -1536, 2048, 104, 55, 15, 255),
    VTX(740, 2940, 150, -2048, 2048, 60, 37, 15, 255),
    VTX(1160, 2940, -100, -1024, 5120, 104, 55, 15, 255),
    VTX(1020, 2940, -100, -4608, 5120, 60, 37, 15, 255),
    VTX(1020, 2940, 40, -4608, 8704, 60, 37, 15, 255),
    VTX(1160, 2940, 40, -1024, 8704, 143, 94, 35, 255),
    VTX(1300, 2940, -220, 2560, 2048, 60, 37, 15, 255),
    VTX(1140, 2940, -360, -1536, -1536, 60, 37, 15, 255),
    VTX(1140, 2940, -260, -1536, 1024, 60, 37, 15, 255),
    VTX(1300, 2940, -100, 2560, 5120, 143, 94, 35, 255),
    VTX(860, 2940, 100, 0, 5632, 143, 94, 35, 255),
    VTX(740, 2940, 100, 3072, 5632, 60, 37, 15, 255),
    VTX(740, 2940, 400, 3072, -2048, 104, 55, 15, 255),
    VTX(860, 2940, 400, 0, -2048, 104, 55, 15, 255),
    VTX(740, 2940, -100, -11776, 5120, 60, 37, 15, 255),
    VTX(740, 2940, -260, -11776, 1024, 60, 37, 15, 255),
    VTX(740, 2940, 310, -2048, 2048, 32, 19, 7, 255),
    VTX(720, 2940, 310, -1536, 2048, 104, 55, 15, 255),
    VTX(720, 3100, 310, -1536, -2048, 60, 37, 15, 255),
    VTX(740, 3100, 310, -2048, -2048, 143, 94, 35, 255),
    VTX(1360, 2940, 400, 4608, 17408, 240, 148, 0, 255),
    VTX(1440, 2940, 200, 2560, 22528, 143, 94, 35, 255),
    VTX(1440, 2940, 80, 2560, 25600, 143, 94, 35, 255),
    VTX(1360, 2940, 80, 4608, 25600, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01CEA8[4] = {
    VTX(740, 2800, 400, -4096, -22528, 32, 19, 7, 255),
    VTX(1580, 2800, 120, -1229, -13926, 32, 19, 7, 255),
    VTX(1580, 2800, -120, 1229, -13926, 32, 19, 7, 255),
    VTX(740, 2800, -400, 4096, -22528, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01CEE8[4] = {
    VTX(1040, 3600, 300, 8192, -2560, 0, 0, 0, 255),
    VTX(740, 3200, 400, 0, -3072, 36, 14, 5, 255),
    VTX(740, 3200, -400, 0, 1024, 36, 14, 5, 255),
    VTX(1040, 3600, -300, 8192, 512, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01CF28[51] = {
    VTX(860, 2800, 100, 1024, 2048, 32, 19, 7, 255),
    VTX(860, 2940, 100, 1024, -2048, 143, 94, 35, 255),
    VTX(860, 2940, 400, -6656, -2048, 104, 55, 15, 255),
    VTX(860, 2800, 400, -6656, 2048, 32, 19, 7, 255),
    VTX(740, 2800, 100, -3584, 2048, 32, 19, 7, 255),
    VTX(740, 2940, 100, -3584, -2048, 60, 37, 15, 255),
    VTX(860, 2940, 100, -512, -2048, 143, 94, 35, 255),
    VTX(860, 2800, 100, -512, 2048, 32, 19, 7, 255),
    VTX(1020, 2800, 40, 2560, 2048, 32, 19, 7, 255),
    VTX(1020, 2940, -100, 6144, -2048, 143, 94, 35, 255),
    VTX(1020, 2800, -100, 6144, 2048, 32, 19, 7, 255),
    VTX(1020, 2940, 40, 2560, -2048, 60, 37, 15, 255),
    VTX(740, 2800, 100, 5120, 2048, 32, 19, 7, 255),
    VTX(740, 2800, -100, 0, 2048, 32, 19, 7, 255),
    VTX(740, 2940, -100, 0, -2048, 60, 37, 15, 255),
    VTX(740, 2940, 100, 5120, -2048, 60, 37, 15, 255),
    VTX(1160, 2800, -100, 6144, 2048, 32, 19, 7, 255),
    VTX(1160, 2940, -100, 6144, -2048, 104, 55, 15, 255),
    VTX(1160, 2940, 40, 2560, -2048, 143, 94, 35, 255),
    VTX(1160, 2800, 40, 2560, 2048, 32, 19, 7, 255),
    VTX(1020, 2800, -100, 3584, 2048, 32, 19, 7, 255),
    VTX(950, 2893, -100, 1792, -683, 240, 148, 0, 255),
    VTX(950, 2800, -100, 1792, 2048, 32, 19, 7, 255),
    VTX(1020, 2940, -100, 3584, -2048, 60, 37, 15, 255),
    VTX(740, 2940, -100, -3584, -2048, 60, 37, 15, 255),
    VTX(740, 2800, -100, -3584, 2048, 32, 19, 7, 255),
    VTX(1300, 2800, -100, 3584, 2048, 32, 19, 7, 255),
    VTX(1300, 2940, -100, 3584, -2048, 143, 94, 35, 255),
    VTX(1160, 2940, -100, 0, -2048, 104, 55, 15, 255),
    VTX(1160, 2800, -100, 0, 2048, 32, 19, 7, 255),
    VTX(1160, 2800, 40, 7168, 2048, 32, 19, 7, 255),
    VTX(1160, 2940, 40, 7168, -2048, 143, 94, 35, 255),
    VTX(1020, 2940, 40, 3584, -2048, 60, 37, 15, 255),
    VTX(1020, 2800, 40, 3584, 2048, 32, 19, 7, 255),
    VTX(1360, 2800, 400, 8192, 2048, 32, 19, 7, 255),
    VTX(1360, 2940, 400, 8192, -2048, 104, 55, 15, 255),
    VTX(1360, 2940, 80, 0, -2048, 104, 55, 15, 255),
    VTX(1360, 2800, 80, 0, 2048, 32, 19, 7, 255),
    VTX(1020, 2800, 240, 3584, 2048, 32, 19, 7, 255),
    VTX(1020, 2940, 240, 3584, -2048, 143, 94, 35, 255),
    VTX(1160, 2940, 240, 7168, -2048, 143, 94, 35, 255),
    VTX(1160, 2800, 240, 7168, 2048, 32, 19, 7, 255),
    VTX(740, 2940, -100, -3584, -2048, 60, 37, 15, 255),
    VTX(950, 2893, -100, 1792, -683, 240, 148, 0, 255),
    VTX(1020, 2940, -100, 3584, -2048, 60, 37, 15, 255),
    VTX(950, 2880, -72, 1022, -2047, 182, 136, 83, 255),
    VTX(922, 2880, -100, 0, -2048, 104, 55, 15, 255),
    VTX(950, 2800, -100, 509, 2175, 32, 19, 7, 255),
    VTX(978, 2880, -100, 3, -2055, 104, 55, 15, 255),
    VTX(950, 2880, -72, 1025, -2053, 182, 136, 83, 255),
    VTX(950, 2800, -100, 512, 2164, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01D258[20] = {
    VTX(1580, 2800, -220, 7168, 2048, 32, 19, 7, 255),
    VTX(1300, 2940, -220, 0, -1536, 60, 37, 15, 255),
    VTX(1300, 2800, -220, 0, 2048, 32, 19, 7, 255),
    VTX(1580, 2800, 120, 8704, 2048, 32, 19, 7, 255),
    VTX(1580, 2940, 120, 8704, -1536, 143, 94, 35, 255),
    VTX(1580, 2940, -220, 0, -1536, 104, 55, 15, 255),
    VTX(1580, 2800, -220, 0, 2048, 32, 19, 7, 255),
    VTX(740, 3100, 310, 1152, 0, 36, 14, 5, 255),
    VTX(740, 3100, 150, 3200, 0, 36, 14, 5, 255),
    VTX(740, 3200, -400, 10240, -1280, 36, 14, 5, 255),
    VTX(740, 3200, 400, 0, -1280, 36, 14, 5, 255),
    VTX(740, 2940, 400, 0, 2048, 104, 55, 15, 255),
    VTX(740, 2940, 310, 1152, 2048, 32, 19, 7, 255),
    VTX(740, 2940, -400, 10240, 2048, 60, 37, 15, 255),
    VTX(740, 2940, 150, 3200, 2048, 60, 37, 15, 255),
    VTX(1300, 2800, -220, 3072, 2048, 32, 19, 7, 255),
    VTX(1300, 2940, -220, 3072, -1536, 60, 37, 15, 255),
    VTX(1300, 2940, -100, 0, -1536, 143, 94, 35, 255),
    VTX(1300, 2800, -100, 0, 2048, 32, 19, 7, 255),
    VTX(1580, 2940, -220, 7168, -1536, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01D398[3] = {
    VTX(922, 2880, -100, 0, 2955, 104, 55, 15, 255),
    VTX(950, 2880, -72, 965, 1989, 182, 136, 83, 255),
    VTX(978, 2880, -100, 0, 1024, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01D3C8[4] = {
    VTX(1580, 3600, -120, 2458, -9011, 22, 3, 5, 255),
    VTX(1580, 3600, 120, 2458, -6554, 22, 3, 5, 255),
    VTX(1040, 3600, 300, 7987, -4710, 0, 0, 0, 255),
    VTX(1040, 3600, -300, 7987, -10854, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01D408[3] = {
    VTX(1360, 2800, 80, 0, 0, 32, 19, 7, 255),
    VTX(1360, 2940, 80, 0, 0, 104, 55, 15, 255),
    VTX(1440, 2940, 80, 0, 0, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_01D438[8] = {
    VTX(720, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(720, 2800, 400, 0, 0, 0, 0, 0, 0),
    VTX(720, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(720, 3600, 400, 0, 0, 0, 0, 0, 0),
    VTX(1580, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(1580, 2800, 400, 0, 0, 0, 0, 0, 0),
    VTX(1580, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(1580, 3600, 400, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_02Dlist0x01D4B8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01D438[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_003CB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01CB28[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0044B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01CC28[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01CC88[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(18, 24, 19, 0, 18, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01CC88[30], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_01D918, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01CEA8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_01E918, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01CEE8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_01F918, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01CF28[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 21, 0, 25, 22, 21, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01CF28[30], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_020918, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01D258[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 7, 10, 0),
    gsSP2Triangles(11, 12, 7, 0, 9, 8, 13, 0),
    gsSP2Triangles(8, 14, 13, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 0, 19, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_021918, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01D398[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_022118, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01D3C8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_01D408[0], 3, 0),
    gsSP2Triangles(0, 1, 0, 0, 0, 1, 1, 0),
    gsSP2Triangles(0, 1, 0, 0, 2, 1, 1, 0),
    gsSP1Triangle(0, 1, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_02Tex_01D918[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_01D918.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_01E918[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_01E918.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_01F918[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_01F918.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_020918[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_020918.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_021918[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_021918.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_022118[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_022118.rgb5a1.inc.c"
};

static Vtx unfinished_fire_temple_room_02Vtx_022918[32] = {
    VTX(1820, 2940, 360, -497, 4096, 143, 94, 35, 255),
    VTX(1580, 2940, 120, 8192, 4096, 240, 148, 0, 255),
    VTX(1820, 2800, 360, -497, 512, 32, 19, 7, 255),
    VTX(1580, 2800, 120, 8192, 512, 32, 19, 7, 255),
    VTX(1180, 2800, 840, 176, 1024, 32, 19, 7, 255),
    VTX(1100, 2800, 760, 3072, 1024, 32, 19, 7, 255),
    VTX(1100, 2940, 760, 3072, -2560, 104, 55, 15, 255),
    VTX(1180, 2940, 840, 176, -2560, 104, 55, 15, 255),
    VTX(1360, 2800, 680, 6144, 1024, 32, 19, 7, 255),
    VTX(1360, 2940, 680, 6144, -2560, 60, 37, 15, 255),
    VTX(1100, 2940, 680, -512, -2560, 60, 37, 15, 255),
    VTX(1100, 2800, 680, -512, 1024, 32, 19, 7, 255),
    VTX(1320, 2800, 840, -2048, 1024, 32, 19, 7, 255),
    VTX(1320, 2940, 840, -2048, -2560, 143, 94, 35, 255),
    VTX(1320, 2940, 980, -5632, -2560, 104, 55, 15, 255),
    VTX(1320, 2800, 980, -5632, 1024, 32, 19, 7, 255),
    VTX(1520, 2800, 400, 3072, 1536, 32, 19, 7, 255),
    VTX(1520, 2940, 400, 3072, -2048, 143, 94, 35, 255),
    VTX(1360, 2940, 400, -1024, -2048, 104, 55, 15, 255),
    VTX(1360, 2800, 400, -1024, 1536, 32, 19, 7, 255),
    VTX(1180, 2800, 840, 3584, 1536, 32, 19, 7, 255),
    VTX(1180, 2940, 840, 3584, -2048, 104, 55, 15, 255),
    VTX(1320, 2940, 840, 0, -2048, 143, 94, 35, 255),
    VTX(1320, 2800, 840, 0, 1536, 32, 19, 7, 255),
    VTX(1440, 2800, 200, 0, 1024, 32, 19, 7, 255),
    VTX(1440, 2940, 200, 0, 4608, 143, 94, 35, 255),
    VTX(1620, 2800, 400, 6888, 1024, 32, 19, 7, 255),
    VTX(1620, 2940, 400, 6888, 4608, 41, 23, 9, 255),
    VTX(1520, 2800, 860, 7680, 512, 32, 19, 7, 255),
    VTX(1520, 2940, 860, 7680, -3072, 104, 55, 15, 255),
    VTX(1520, 2940, 400, -4096, -3072, 143, 94, 35, 255),
    VTX(1520, 2800, 400, -4096, 512, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_022B18[26] = {
    VTX(1100, 2800, 680, 2048, 1024, 32, 19, 7, 255),
    VTX(1100, 2940, 680, 2048, -2560, 60, 37, 15, 255),
    VTX(1100, 2940, 760, 0, -2560, 104, 55, 15, 255),
    VTX(1100, 2800, 760, 0, 1024, 32, 19, 7, 255),
    VTX(1360, 2800, 540, 2048, 1024, 32, 19, 7, 255),
    VTX(1360, 2940, 540, 2048, -2560, 240, 148, 0, 255),
    VTX(1360, 2940, 680, -1536, -2560, 60, 37, 15, 255),
    VTX(1360, 2800, 680, -1536, 1024, 32, 19, 7, 255),
    VTX(1400, 2800, 1060, 176, 1024, 32, 19, 7, 255),
    VTX(1320, 2800, 980, 3072, 1024, 32, 19, 7, 255),
    VTX(1320, 2940, 980, 3072, -2560, 104, 55, 15, 255),
    VTX(1400, 2940, 1060, 176, -2560, 104, 55, 15, 255),
    VTX(1620, 2940, 860, -1024, -2048, 41, 23, 9, 255),
    VTX(1520, 2940, 860, 1536, -2048, 104, 55, 15, 255),
    VTX(1520, 2800, 860, 1536, 1536, 32, 19, 7, 255),
    VTX(1620, 2800, 860, -1024, 1536, 32, 19, 7, 255),
    VTX(1400, 2800, 1060, 4608, 1536, 32, 19, 7, 255),
    VTX(1400, 2940, 1060, 4608, -2048, 104, 55, 15, 255),
    VTX(1580, 2940, 1060, 0, -2048, 60, 37, 15, 255),
    VTX(1580, 2800, 1060, 0, 1536, 32, 19, 7, 255),
    VTX(1620, 2800, 860, 0, 1024, 32, 19, 7, 255),
    VTX(1620, 2893, 707, 3925, -1365, 240, 148, 0, 255),
    VTX(1620, 2940, 860, 0, -2560, 41, 23, 9, 255),
    VTX(1620, 2800, 707, 3925, 1024, 32, 19, 7, 255),
    VTX(1620, 2800, 400, 11776, 1024, 32, 19, 7, 255),
    VTX(1620, 2940, 400, 11776, -2560, 41, 23, 9, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_022CB8[6] = {
    VTX(1820, 3200, 360, 4081, 1536, 41, 23, 9, 255),
    VTX(1580, 3200, 120, -4608, 1536, 22, 3, 5, 255),
    VTX(1580, 2940, 120, -4608, 8192, 240, 148, 0, 255),
    VTX(1820, 3600, 360, 4081, -8704, 22, 3, 5, 255),
    VTX(1580, 3600, 120, -4608, -8704, 22, 3, 5, 255),
    VTX(1820, 2940, 360, 4081, 8192, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_022D18[27] = {
    VTX(1400, 2940, 1060, -2048, -4608, 104, 55, 15, 255),
    VTX(1540, 2940, 1200, -5632, -8192, 104, 55, 15, 255),
    VTX(1580, 2940, 1200, -6656, -8192, 104, 55, 15, 255),
    VTX(1580, 2940, 1060, -6656, -4608, 60, 37, 15, 255),
    VTX(1520, 2940, 860, 512, 5632, 104, 55, 15, 255),
    VTX(1620, 2940, 860, -2048, 5632, 41, 23, 9, 255),
    VTX(1520, 2940, 400, 512, 17408, 143, 94, 35, 255),
    VTX(1620, 2940, 400, -2048, 17408, 41, 23, 9, 255),
    VTX(1480, 2940, 300, 1536, 19968, 32, 19, 7, 255),
    VTX(1440, 2940, 200, 2560, 22528, 143, 94, 35, 255),
    VTX(1360, 2940, 400, 4608, 17408, 240, 148, 0, 255),
    VTX(1160, 2940, 240, -7680, 2048, 143, 94, 35, 255),
    VTX(1020, 2940, 240, -4096, 2048, 143, 94, 35, 255),
    VTX(1020, 2940, 400, -4096, -2048, 60, 37, 15, 255),
    VTX(1160, 2940, 400, -7680, -2048, 143, 94, 35, 255),
    VTX(820, 2940, 480, 1024, -4096, 104, 55, 15, 255),
    VTX(820, 2940, 400, 1024, -2048, 60, 37, 15, 255),
    VTX(740, 2940, 400, 3072, -2048, 104, 55, 15, 255),
    VTX(880, 2940, 540, -512, -5632, 104, 55, 15, 255),
    VTX(1020, 2940, 680, -4096, -9216, 104, 55, 15, 255),
    VTX(1360, 2940, 540, -12800, -5632, 240, 148, 0, 255),
    VTX(1360, 2940, 680, -12800, -9216, 60, 37, 15, 255),
    VTX(1320, 2940, 980, 0, -2560, 104, 55, 15, 255),
    VTX(1320, 2940, 840, 0, 1024, 143, 94, 35, 255),
    VTX(1180, 2940, 840, 3584, 1024, 104, 55, 15, 255),
    VTX(1100, 2940, 760, -6144, -11264, 104, 55, 15, 255),
    VTX(1100, 2940, 680, -6144, -9216, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_022EC8[4] = {
    VTX(1580, 2800, 120, -1229, -13926, 32, 19, 7, 255),
    VTX(740, 2800, 400, -4096, -22528, 32, 19, 7, 255),
    VTX(1540, 2800, 1200, -12288, -14336, 32, 19, 7, 255),
    VTX(1820, 2800, 360, -3686, -11469, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_022F08[4] = {
    VTX(1640, 3600, 900, 8192, -4045, 0, 0, 0, 255),
    VTX(740, 3200, 400, 0, 1024, 36, 14, 5, 255),
    VTX(1040, 3600, 300, 8192, 300, 0, 0, 0, 255),
    VTX(1540, 3200, 1200, 0, -4769, 36, 14, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_022F48[62] = {
    VTX(880, 2940, 540, 0, -2048, 104, 55, 15, 255),
    VTX(1360, 2940, 540, 16384, -2048, 240, 148, 0, 255),
    VTX(1280, 2900, 540, 13653, -878, 143, 94, 35, 255),
    VTX(1220, 2900, 540, 11605, -878, 143, 94, 35, 255),
    VTX(880, 2800, 540, 0, 2048, 32, 19, 7, 255),
    VTX(1220, 2840, 540, 11605, 878, 104, 55, 15, 255),
    VTX(1360, 2800, 540, 16384, 2048, 32, 19, 7, 255),
    VTX(1280, 2840, 540, 13653, 878, 104, 55, 15, 255),
    VTX(820, 2800, 400, -6656, 2048, 32, 19, 7, 255),
    VTX(820, 2940, 400, -6656, -2048, 60, 37, 15, 255),
    VTX(820, 2800, 480, -8704, 2048, 32, 19, 7, 255),
    VTX(820, 2940, 480, -8704, -2048, 104, 55, 15, 255),
    VTX(880, 2800, 540, 2896, 2048, 32, 19, 7, 255),
    VTX(820, 2940, 480, 0, -2048, 104, 55, 15, 255),
    VTX(880, 2940, 540, 2896, -2048, 104, 55, 15, 255),
    VTX(820, 2800, 480, 0, 2048, 32, 19, 7, 255),
    VTX(860, 2800, 400, -512, 2048, 32, 19, 7, 255),
    VTX(860, 2940, 400, -512, -2048, 104, 55, 15, 255),
    VTX(820, 2940, 400, -1536, -2048, 60, 37, 15, 255),
    VTX(820, 2800, 400, -1536, 2048, 32, 19, 7, 255),
    VTX(1160, 2800, 240, -2560, 2048, 32, 19, 7, 255),
    VTX(1160, 2940, 240, -2560, -2048, 143, 94, 35, 255),
    VTX(1160, 2940, 400, -6656, -2048, 143, 94, 35, 255),
    VTX(1500, 3020, 280, 1024, 1992, 240, 141, 89, 255),
    VTX(1500, 3020, 320, 0, 1992, 143, 94, 35, 255),
    VTX(1490, 2960, 310, 256, 6144, 104, 55, 15, 255),
    VTX(1490, 2960, 290, 768, 6144, 104, 55, 15, 255),
    VTX(1460, 3020, 280, 1024, 2048, 143, 94, 35, 255),
    VTX(1500, 3020, 280, 0, 2048, 240, 141, 89, 255),
    VTX(1490, 2960, 290, 256, 6201, 104, 55, 15, 255),
    VTX(1470, 2960, 290, 768, 6201, 60, 37, 15, 255),
    VTX(1460, 3020, 320, 1024, 2048, 240, 141, 89, 255),
    VTX(1460, 3020, 280, 0, 2048, 143, 94, 35, 255),
    VTX(1470, 2960, 290, 256, 6201, 60, 37, 15, 255),
    VTX(1470, 2960, 310, 768, 6201, 143, 94, 35, 255),
    VTX(1500, 3020, 320, 1024, 2048, 143, 94, 35, 255),
    VTX(1460, 3020, 320, 0, 2048, 240, 141, 89, 255),
    VTX(1470, 2960, 310, 256, 6201, 143, 94, 35, 255),
    VTX(1490, 2960, 310, 768, 6201, 104, 55, 15, 255),
    VTX(1160, 2800, 240, -2560, 2048, 32, 19, 7, 255),
    VTX(1160, 2940, 400, -6656, -2048, 143, 94, 35, 255),
    VTX(1160, 2800, 400, -6656, 2048, 32, 19, 7, 255),
    VTX(1160, 2800, 400, 7168, 2048, 32, 19, 7, 255),
    VTX(1160, 2940, 400, 7168, -2048, 143, 94, 35, 255),
    VTX(1020, 2940, 400, 3584, -2048, 60, 37, 15, 255),
    VTX(1020, 2800, 400, 3584, 2048, 32, 19, 7, 255),
    VTX(1020, 2800, 400, -6656, 2048, 32, 19, 7, 255),
    VTX(1020, 2940, 400, -6656, -2048, 60, 37, 15, 255),
    VTX(1020, 2940, 240, -2560, -2048, 143, 94, 35, 255),
    VTX(1020, 2800, 240, -2560, 2048, 32, 19, 7, 255),
    VTX(1480, 2880, 1032, 1022, -2047, 104, 55, 15, 255),
    VTX(1508, 2880, 1060, 0, -2048, 41, 23, 9, 255),
    VTX(1480, 2800, 1060, 509, 2175, 32, 19, 7, 255),
    VTX(1452, 2880, 1060, 3, -2055, 41, 23, 9, 255),
    VTX(1480, 2880, 1032, 1025, -2053, 104, 55, 15, 255),
    VTX(1480, 2800, 1060, 512, 2164, 32, 19, 7, 255),
    VTX(1620, 2880, 678, 3, -2055, 60, 37, 15, 255),
    VTX(1648, 2880, 707, 1025, -2053, 182, 136, 83, 255),
    VTX(1620, 2800, 707, 512, 2164, 32, 19, 7, 255),
    VTX(1648, 2880, 707, 1022, -2047, 182, 136, 83, 255),
    VTX(1620, 2880, 735, 0, -2048, 60, 37, 15, 255),
    VTX(1620, 2800, 707, 509, 2175, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_023328[4] = {
    VTX(740, 3200, 400, 14482, -1280, 36, 14, 5, 255),
    VTX(1540, 2940, 1200, 0, 2048, 104, 55, 15, 255),
    VTX(740, 2940, 400, 14482, 2048, 104, 55, 15, 255),
    VTX(1540, 3200, 1200, 0, -1280, 36, 14, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_023368[16] = {
    VTX(1470, 2960, 290, 256, -121, 60, 37, 15, 255),
    VTX(1460, 2940, 320, 1024, 1024, 155, 84, 21, 255),
    VTX(1470, 2960, 310, 768, -121, 143, 94, 35, 255),
    VTX(1490, 2960, 310, 256, -121, 104, 55, 15, 255),
    VTX(1500, 2940, 320, 0, 1024, 60, 37, 15, 255),
    VTX(1500, 2940, 280, 1024, 1024, 155, 84, 21, 255),
    VTX(1490, 2960, 290, 768, -121, 104, 55, 15, 255),
    VTX(1490, 2960, 290, 256, -121, 104, 55, 15, 255),
    VTX(1500, 2940, 280, 0, 1024, 155, 84, 21, 255),
    VTX(1460, 2940, 280, 1024, 1024, 60, 37, 15, 255),
    VTX(1470, 2960, 290, 768, -121, 60, 37, 15, 255),
    VTX(1470, 2960, 310, 256, -121, 143, 94, 35, 255),
    VTX(1460, 2940, 320, 0, 1024, 155, 84, 21, 255),
    VTX(1500, 2940, 320, 1024, 1024, 60, 37, 15, 255),
    VTX(1490, 2960, 310, 768, -121, 104, 55, 15, 255),
    VTX(1460, 2940, 280, 0, 1024, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_023468[4] = {
    VTX(1220, 2840, 540, 2048, 2048, 104, 55, 15, 255),
    VTX(1220, 2900, 540, 2048, 0, 143, 94, 35, 255),
    VTX(1280, 2900, 540, 0, 0, 143, 94, 35, 255),
    VTX(1280, 2840, 540, 0, 2048, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_0234A8[9] = {
    VTX(1460, 3020, 320, 0, 1024, 240, 141, 89, 255),
    VTX(1500, 3020, 320, 0, 2048, 143, 94, 35, 255),
    VTX(1500, 3020, 280, 1024, 2048, 240, 141, 89, 255),
    VTX(1500, 3020, 280, 1024, 2048, 240, 141, 89, 255),
    VTX(1460, 3020, 280, 1024, 1024, 143, 94, 35, 255),
    VTX(1460, 3020, 320, 0, 1024, 240, 141, 89, 255),
    VTX(1620, 2880, 735, 0, 2955, 60, 37, 15, 255),
    VTX(1648, 2880, 707, 965, 1989, 182, 136, 83, 255),
    VTX(1620, 2880, 678, 0, 1024, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_023538[7] = {
    VTX(1508, 2880, 1060, 0, 0, 41, 23, 9, 255),
    VTX(1480, 2880, 1032, 0, 1024, 104, 55, 15, 255),
    VTX(1452, 2880, 1060, 1024, 1024, 41, 23, 9, 255),
    VTX(1820, 3600, 360, 0, -4096, 22, 3, 5, 255),
    VTX(1040, 3600, 300, 7987, -4710, 0, 0, 0, 255),
    VTX(1580, 3600, 120, 2458, -6554, 22, 3, 5, 255),
    VTX(1640, 3600, 900, 1843, 1434, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_0235A8[8] = {
    VTX(740, 2800, 120, 0, 0, 0, 0, 0, 0),
    VTX(740, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(740, 3600, 120, 0, 0, 0, 0, 0, 0),
    VTX(740, 3600, 1200, 0, 0, 0, 0, 0, 0),
    VTX(1820, 2800, 120, 0, 0, 0, 0, 0, 0),
    VTX(1820, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(1820, 3600, 120, 0, 0, 0, 0, 0, 0),
    VTX(1820, 3600, 1200, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_02Dlist0x023628[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0235A8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_003CB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_022918[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_022B18[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(23, 24, 21, 0, 24, 25, 21, 0),
    gsSP1Triangle(21, 25, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0044B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_022CB8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_022D18[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 8, 9, 0, 10, 6, 8, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 22, 23, 24, 0),
    gsSP1Triangle(25, 26, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_023B68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_022EC8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_024B68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_022F08[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_025B68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_022F48[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsSP2Triangles(2, 1, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(4, 5, 7, 0, 4, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_022F48[31], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_026B68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_023328[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_027B68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_023368[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 0, 15, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_028368, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_023468[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_029368, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_0234A8[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_029B68, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_023538[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 6, 4, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_02Tex_023B68[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_023B68.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_024B68[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_024B68.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_025B68[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_025B68.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_026B68[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_026B68.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_027B68[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_027B68.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_028368[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_028368.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_029368[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_029368.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_029B68[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_029B68.rgb5a1.inc.c"
};

static Vtx unfinished_fire_temple_room_02Vtx_02A368[50] = {
    VTX(1580, 2940, 1200, 10240, 512, 104, 55, 15, 255),
    VTX(1940, 2940, 1200, 1024, 512, 104, 55, 15, 255),
    VTX(1940, 2800, 1200, 1024, 4096, 32, 19, 7, 255),
    VTX(1580, 2800, 1200, 10240, 4096, 32, 19, 7, 255),
    VTX(1920, 2800, 780, -5120, 0, 32, 19, 7, 255),
    VTX(1920, 2940, 780, -5120, 3584, 60, 37, 15, 255),
    VTX(1920, 2940, 1060, 2048, 3584, 60, 37, 15, 255),
    VTX(1920, 2800, 1060, 2048, 0, 32, 19, 7, 255),
    VTX(1780, 2940, 780, -1024, -2560, 240, 148, 0, 255),
    VTX(1920, 2940, 780, 2560, -2560, 60, 37, 15, 255),
    VTX(1920, 2800, 780, 2560, 1024, 32, 19, 7, 255),
    VTX(1780, 2800, 780, -1024, 1024, 32, 19, 7, 255),
    VTX(1920, 2800, 1060, 2560, 1024, 32, 19, 7, 255),
    VTX(1920, 2940, 1060, 2560, -2560, 60, 37, 15, 255),
    VTX(1780, 2940, 1060, -1024, -2560, 104, 55, 15, 255),
    VTX(1780, 2800, 1060, -1024, 1024, 32, 19, 7, 255),
    VTX(1820, 2800, 640, 0, 1024, 32, 19, 7, 255),
    VTX(1820, 2940, 640, 0, 4608, 240, 148, 0, 255),
    VTX(1820, 2800, 360, 7168, 1024, 32, 19, 7, 255),
    VTX(1820, 2940, 360, 7168, 4608, 143, 94, 35, 255),
    VTX(2060, 2800, 640, 6144, 1024, 32, 19, 7, 255),
    VTX(1820, 2940, 640, 0, -2560, 240, 148, 0, 255),
    VTX(1820, 2800, 640, 0, 1024, 32, 19, 7, 255),
    VTX(2060, 2940, 640, 6144, -2560, 104, 55, 15, 255),
    VTX(2340, 2940, 1200, -9216, 512, 60, 37, 15, 255),
    VTX(2340, 2800, 1200, -9216, 4096, 32, 19, 7, 255),
    VTX(2200, 2800, 1060, 3584, 1536, 32, 19, 7, 255),
    VTX(2200, 2940, 1060, 3584, -2048, 60, 37, 15, 255),
    VTX(2060, 2940, 1060, 0, -2048, 60, 37, 15, 255),
    VTX(2060, 2800, 1060, 0, 1536, 32, 19, 7, 255),
    VTX(2060, 2800, 1060, 7168, 3584, 32, 19, 7, 255),
    VTX(2060, 2940, 1060, 7168, 0, 60, 37, 15, 255),
    VTX(2060, 2940, 640, -3584, 0, 104, 55, 15, 255),
    VTX(2060, 2800, 640, -3584, 3584, 32, 19, 7, 255),
    VTX(1780, 2800, 1060, 0, 1024, 32, 19, 7, 255),
    VTX(1780, 2940, 1060, 0, -2560, 104, 55, 15, 255),
    VTX(1780, 2940, 780, 7168, -2560, 240, 148, 0, 255),
    VTX(1780, 2800, 780, 7168, 1024, 32, 19, 7, 255),
    VTX(1580, 2800, 1060, 0, 1024, 32, 19, 7, 255),
    VTX(1580, 2940, 1060, 0, 4608, 60, 37, 15, 255),
    VTX(1580, 2940, 1200, 3584, 4608, 104, 55, 15, 255),
    VTX(1580, 2800, 1200, 3584, 1024, 32, 19, 7, 255),
    VTX(2200, 2940, 460, -1792, -2560, 143, 94, 35, 255),
    VTX(2200, 2800, 460, -1792, 1024, 32, 19, 7, 255),
    VTX(1930, 2800, 460, 5120, 1024, 60, 37, 15, 255),
    VTX(1930, 2940, 460, 5120, -2560, 104, 55, 15, 255),
    VTX(2200, 2940, 1060, 10240, 3584, 104, 55, 15, 255),
    VTX(2200, 2800, 1060, 10240, 0, 32, 19, 7, 255),
    VTX(2200, 2800, 780, 3072, 0, 32, 19, 7, 255),
    VTX(2200, 2940, 780, 3072, 3584, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02A688[6] = {
    VTX(2060, 3200, 360, 4096, -2560, 41, 23, 9, 255),
    VTX(2060, 3600, 360, 4096, -12800, 22, 3, 5, 255),
    VTX(1820, 3600, 360, -2048, -12800, 22, 3, 5, 255),
    VTX(1820, 3200, 360, -2048, -2560, 22, 3, 5, 255),
    VTX(2060, 2940, 360, 4096, 4096, 104, 55, 15, 255),
    VTX(1820, 2940, 360, -2048, 4096, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02A6E8[14] = {
    VTX(1930, 2940, 360, 5376, 14848, 143, 94, 35, 255),
    VTX(1820, 2940, 360, 8192, 14848, 143, 94, 35, 255),
    VTX(1930, 2940, 460, 5376, 12288, 104, 55, 15, 255),
    VTX(1820, 2940, 640, 8192, 7680, 240, 148, 0, 255),
    VTX(1920, 2940, 780, 5632, 4096, 60, 37, 15, 255),
    VTX(1780, 2940, 780, 9216, 4096, 240, 148, 0, 255),
    VTX(1920, 2940, 1060, 5632, -3072, 60, 37, 15, 255),
    VTX(1780, 2940, 1060, 9216, -3072, 104, 55, 15, 255),
    VTX(2060, 2940, 640, 2048, 7680, 104, 55, 15, 255),
    VTX(2060, 2940, 460, 2048, 12288, 143, 94, 35, 255),
    VTX(2200, 2940, 1060, -1536, -3072, 104, 55, 15, 255),
    VTX(2200, 2940, 640, -1536, 7680, 104, 55, 15, 255),
    VTX(2060, 2940, 1060, 2048, -3072, 60, 37, 15, 255),
    VTX(2200, 2940, 460, -1536, 12288, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02A7C8[4] = {
    VTX(1540, 2800, 1200, -12288, -14336, 32, 19, 7, 255),
    VTX(2340, 2800, 1200, -12288, -6144, 32, 19, 7, 255),
    VTX(2060, 2800, 360, -3686, -9011, 32, 19, 7, 255),
    VTX(1820, 2800, 360, -3686, -11469, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02A808[4] = {
    VTX(2240, 3600, 900, 8192, -2560, 0, 0, 0, 255),
    VTX(2340, 3200, 1200, 0, -3072, 32, 19, 7, 255),
    VTX(1540, 3200, 1200, 0, 1024, 36, 14, 5, 255),
    VTX(1640, 3600, 900, 8192, 512, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02A848[9] = {
    VTX(1930, 2800, 360, 0, 2048, 32, 19, 7, 255),
    VTX(1930, 2940, 360, 0, -1536, 143, 94, 35, 255),
    VTX(1930, 2940, 460, 2560, -1536, 104, 55, 15, 255),
    VTX(1930, 2800, 460, 2560, 2048, 60, 37, 15, 255),
    VTX(1540, 3200, 1200, 10240, -1280, 36, 14, 5, 255),
    VTX(1940, 2940, 1200, 5120, 2048, 104, 55, 15, 255),
    VTX(1540, 2940, 1200, 10240, 2048, 104, 55, 15, 255),
    VTX(2340, 3200, 1200, 0, -1280, 32, 19, 7, 255),
    VTX(2340, 2940, 1200, 0, 2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02A8D8[4] = {
    VTX(2240, 3600, 900, -4301, 1434, 0, 0, 0, 255),
    VTX(1820, 3600, 360, 0, -4096, 22, 3, 5, 255),
    VTX(2060, 3600, 360, -2458, -4096, 22, 3, 5, 255),
    VTX(1640, 3600, 900, 1843, 1434, 0, 0, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02A918[8] = {
    VTX(1540, 2800, 360, 0, 0, 0, 0, 0, 0),
    VTX(1540, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(1540, 3600, 360, 0, 0, 0, 0, 0, 0),
    VTX(1540, 3600, 1200, 0, 0, 0, 0, 0, 0),
    VTX(2340, 2800, 360, 0, 0, 0, 0, 0, 0),
    VTX(2340, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(2340, 3600, 360, 0, 0, 0, 0, 0, 0),
    VTX(2340, 3600, 1200, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_02Dlist0x02A998[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A918[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_003CB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A368[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(1, 24, 25, 0, 1, 25, 2, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A368[30], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0044B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A688[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A6E8[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(2, 8, 9, 0, 2, 3, 8, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 12, 10, 0),
    gsSP2Triangles(9, 8, 13, 0, 8, 11, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_02ACC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A7C8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_02BCC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A808[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_02CCC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A848[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP1Triangle(7, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_02DCC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02A8D8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_02Tex_02ACC8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_02ACC8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_02BCC8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_02BCC8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_02CCC8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_02CCC8.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_02DCC8[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_02DCC8.rgb5a1.inc.c"
};

static Vtx unfinished_fire_temple_room_02Vtx_02E4C8[32] = {
    VTX(2300, 2940, 120, 0, 4608, 143, 94, 35, 255),
    VTX(2239, 2940, 181, 2216, 4608, 143, 94, 35, 255),
    VTX(2239, 2800, 181, 2216, 1024, 32, 19, 7, 255),
    VTX(2300, 2800, 120, 0, 1024, 32, 19, 7, 255),
    VTX(2680, 2940, 860, -336, 4608, 240, 148, 0, 255),
    VTX(2760, 2940, 780, 2560, 4608, 240, 148, 0, 255),
    VTX(2760, 2800, 780, 2560, 1024, 32, 19, 7, 255),
    VTX(2680, 2800, 860, -336, 1024, 32, 19, 7, 255),
    VTX(2620, 2940, 680, 3072, 2048, 240, 148, 0, 255),
    VTX(2340, 2800, 680, -4096, -1536, 32, 19, 7, 255),
    VTX(2340, 2940, 680, -4096, 2048, 104, 55, 15, 255),
    VTX(2620, 2800, 680, 3072, -1536, 32, 19, 7, 255),
    VTX(2340, 2940, 680, 2560, 2048, 104, 55, 15, 255),
    VTX(2340, 2800, 1200, -11776, -1536, 32, 19, 7, 255),
    VTX(2340, 2940, 1200, -11776, 2048, 60, 37, 15, 255),
    VTX(2340, 2800, 680, 2560, -1536, 32, 19, 7, 255),
    VTX(2340, 2940, 520, 2048, 2048, 104, 55, 15, 255),
    VTX(2340, 2800, 520, 2048, -1536, 32, 19, 7, 255),
    VTX(2480, 2940, 520, -1536, 2048, 240, 148, 0, 255),
    VTX(2480, 2800, 520, -1536, -1536, 32, 19, 7, 255),
    VTX(2340, 2800, 360, 9728, -1536, 32, 19, 7, 255),
    VTX(2340, 2800, 520, 6144, -1536, 32, 19, 7, 255),
    VTX(2340, 2940, 360, 9728, 2048, 104, 55, 15, 255),
    VTX(2340, 2940, 520, 6144, 2048, 104, 55, 15, 255),
    VTX(2480, 2800, 260, -512, -1536, 32, 19, 7, 255),
    VTX(2239, 2800, 260, -6687, -1536, 32, 19, 7, 255),
    VTX(2239, 2940, 260, -6687, 2048, 60, 37, 15, 255),
    VTX(2480, 2940, 260, -512, 2048, 41, 23, 9, 255),
    VTX(2239, 2800, 260, 2017, 1024, 32, 19, 7, 255),
    VTX(2239, 2800, 181, 0, 1024, 32, 19, 7, 255),
    VTX(2239, 2940, 181, 0, 4608, 143, 94, 35, 255),
    VTX(2239, 2940, 260, 2017, 4608, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02E6C8[32] = {
    VTX(2200, 2940, 460, -5120, 3584, 143, 94, 35, 255),
    VTX(2200, 2900, 550, -2816, 2559, 143, 94, 35, 255),
    VTX(2200, 2840, 550, -2816, 1023, 143, 94, 35, 255),
    VTX(2200, 2800, 460, -5120, 0, 32, 19, 7, 255),
    VTX(2200, 2800, 780, 3072, 0, 32, 19, 7, 255),
    VTX(2200, 2840, 610, -1280, 1023, 143, 94, 35, 255),
    VTX(2200, 2940, 780, 3072, 3584, 143, 94, 35, 255),
    VTX(2200, 2900, 610, -1280, 2559, 143, 94, 35, 255),
    VTX(2620, 2940, 680, 6656, 2048, 240, 148, 0, 255),
    VTX(2620, 2940, 760, 8704, 2048, 143, 94, 35, 255),
    VTX(2620, 2800, 760, 8704, -1536, 32, 19, 7, 255),
    VTX(2620, 2800, 680, 6656, -1536, 32, 19, 7, 255),
    VTX(2620, 2800, 760, -11264, -1536, 32, 19, 7, 255),
    VTX(2620, 2940, 760, -11264, 2048, 240, 148, 0, 255),
    VTX(2480, 2940, 760, -7680, 2048, 240, 148, 0, 255),
    VTX(2480, 2800, 760, -7680, -1536, 32, 19, 7, 255),
    VTX(2340, 2800, 360, 2048, -1536, 32, 19, 7, 255),
    VTX(2340, 2940, 360, 2048, 2048, 143, 94, 35, 255),
    VTX(1930, 2800, 360, 9216, -1536, 32, 19, 7, 255),
    VTX(1930, 2940, 360, 9216, 2048, 104, 55, 15, 255),
    VTX(2480, 2800, 760, 8704, -1536, 32, 19, 7, 255),
    VTX(2480, 2940, 760, 8704, 2048, 240, 148, 0, 255),
    VTX(2480, 2940, 860, 12288, 2048, 240, 148, 0, 255),
    VTX(2480, 2800, 860, 12288, -1536, 32, 19, 7, 255),
    VTX(2480, 2800, 860, -512, -1536, 32, 19, 7, 255),
    VTX(2480, 2940, 860, -512, 2048, 240, 148, 0, 255),
    VTX(2680, 2940, 860, 4608, 2048, 240, 148, 0, 255),
    VTX(2680, 2800, 860, 4608, -1536, 32, 19, 7, 255),
    VTX(2620, 2800, 280, 3072, -1536, 32, 19, 7, 255),
    VTX(2620, 2940, 280, 3072, 2048, 104, 55, 15, 255),
    VTX(2900, 2800, 280, 10240, -1536, 32, 19, 7, 255),
    VTX(2900, 2940, 280, 10240, 2048, 60, 37, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02E8C8[16] = {
    VTX(2900, 2800, 400, -12288, -1536, 32, 19, 7, 255),
    VTX(2900, 2940, 400, -12288, 2048, 143, 94, 35, 255),
    VTX(2620, 2940, 400, -5120, 2048, 143, 94, 35, 255),
    VTX(2620, 2800, 400, -5120, -1536, 32, 19, 7, 255),
    VTX(2620, 2800, 400, 8704, -1536, 32, 19, 7, 255),
    VTX(2620, 2940, 400, 8704, 2048, 143, 94, 35, 255),
    VTX(2620, 2800, 280, 11776, -1536, 32, 19, 7, 255),
    VTX(2620, 2940, 280, 11776, 2048, 104, 55, 15, 255),
    VTX(2760, 2940, 780, -1024, 2048, 240, 148, 0, 255),
    VTX(2760, 2940, 540, 5120, 2048, 143, 94, 35, 255),
    VTX(2760, 2800, 540, 5120, -1536, 32, 19, 7, 255),
    VTX(2760, 2800, 780, -1024, -1536, 32, 19, 7, 255),
    VTX(2480, 2800, 520, 3072, -1536, 32, 19, 7, 255),
    VTX(2480, 2800, 260, -3072, -1536, 32, 19, 7, 255),
    VTX(2480, 2940, 520, 3072, 2048, 240, 148, 0, 255),
    VTX(2480, 2940, 260, -3072, 2048, 41, 23, 9, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02E9C8[6] = {
    VTX(2300, 2940, 120, -497, 2048, 143, 94, 35, 255),
    VTX(2300, 3200, 120, -497, -4608, 41, 23, 9, 255),
    VTX(2060, 3200, 360, 8192, -4608, 22, 3, 5, 255),
    VTX(2060, 2940, 360, 8192, 2048, 104, 55, 15, 255),
    VTX(2300, 3600, 120, -497, -14848, 22, 3, 5, 255),
    VTX(2060, 3600, 360, 8192, -14848, 22, 3, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02EA28[25] = {
    VTX(2480, 2940, 760, 2048, 512, 240, 148, 0, 255),
    VTX(2620, 2940, 760, 2048, -3072, 143, 94, 35, 255),
    VTX(2550, 2940, 720, 1024, -1280, 32, 19, 7, 255),
    VTX(2620, 2940, 680, 0, -3072, 240, 148, 0, 255),
    VTX(2160, 2940, 260, 0, 3041, 143, 94, 35, 255),
    VTX(2060, 2940, 360, 2560, 5601, 104, 55, 15, 255),
    VTX(2340, 2940, 360, 2560, -1567, 143, 94, 35, 255),
    VTX(2340, 2940, 860, 4608, 4096, 104, 55, 15, 255),
    VTX(2480, 2940, 860, 4608, 512, 240, 148, 0, 255),
    VTX(2340, 2940, 680, 0, 4096, 104, 55, 15, 255),
    VTX(2239, 2940, 260, 0, 1024, 60, 37, 15, 255),
    VTX(2239, 2940, 181, -2017, 1024, 143, 94, 35, 255),
    VTX(2760, 2940, 540, -3584, -6656, 143, 94, 35, 255),
    VTX(2760, 2940, 780, 2560, -6656, 240, 148, 0, 255),
    VTX(3000, 2940, 540, -3584, -12800, 143, 94, 35, 255),
    VTX(2480, 2940, 260, 0, -5151, 41, 23, 9, 255),
    VTX(2480, 2940, 680, 0, 512, 143, 94, 35, 255),
    VTX(2620, 2940, 280, 512, -8735, 104, 55, 15, 255),
    VTX(2620, 2940, 400, 3584, -8735, 143, 94, 35, 255),
    VTX(2900, 2940, 280, 512, -15903, 60, 37, 15, 255),
    VTX(2900, 2940, 400, 3584, -15903, 143, 94, 35, 255),
    VTX(2340, 2940, 1200, 13312, 4096, 60, 37, 15, 255),
    VTX(2680, 2940, 860, 4608, -4608, 240, 148, 0, 255),
    VTX(2340, 2940, 520, 6656, -1567, 104, 55, 15, 255),
    VTX(2480, 2940, 520, 6656, -5151, 240, 148, 0, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02EBB8[4] = {
    VTX(2200, 2840, 610, 0, 2048, 143, 94, 35, 255),
    VTX(2200, 2900, 550, 2048, 0, 143, 94, 35, 255),
    VTX(2200, 2900, 610, 0, 0, 143, 94, 35, 255),
    VTX(2200, 2840, 550, 2048, 2048, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02EBF8[6] = {
    VTX(2060, 2800, 360, -3686, -9011, 32, 19, 7, 255),
    VTX(2740, 2800, 800, -8192, -2048, 32, 19, 7, 255),
    VTX(2160, 2800, 260, -2662, -7987, 32, 19, 7, 255),
    VTX(3140, 2800, 400, -4096, 2048, 32, 19, 7, 255),
    VTX(2300, 2800, 120, -1229, -6554, 32, 19, 7, 255),
    VTX(2340, 2800, 1200, -12288, -6144, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02EC58[4] = {
    VTX(2840, 3600, 300, 8192, -4045, 0, 0, 0, 255),
    VTX(3140, 3200, 400, 0, -4769, 32, 19, 7, 255),
    VTX(2240, 3600, 900, 8192, 300, 0, 0, 0, 255),
    VTX(2340, 3200, 1200, 0, 1024, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02EC98[16] = {
    VTX(2560, 3020, 700, 1024, 1992, 240, 141, 89, 255),
    VTX(2560, 3020, 740, 0, 1992, 143, 94, 35, 255),
    VTX(2550, 2960, 730, 256, 6144, 104, 55, 15, 255),
    VTX(2520, 3020, 700, 1024, 2048, 143, 94, 35, 255),
    VTX(2550, 2960, 710, 256, 6201, 104, 55, 15, 255),
    VTX(2530, 2960, 710, 768, 6201, 60, 37, 15, 255),
    VTX(2560, 3020, 700, 0, 2048, 240, 141, 89, 255),
    VTX(2520, 3020, 740, 1024, 2048, 240, 141, 89, 255),
    VTX(2530, 2960, 710, 256, 6201, 60, 37, 15, 255),
    VTX(2530, 2960, 730, 768, 6201, 143, 94, 35, 255),
    VTX(2520, 3020, 700, 0, 2048, 143, 94, 35, 255),
    VTX(2560, 3020, 740, 1024, 2048, 143, 94, 35, 255),
    VTX(2530, 2960, 730, 256, 6201, 143, 94, 35, 255),
    VTX(2550, 2960, 730, 768, 6201, 104, 55, 15, 255),
    VTX(2520, 3020, 740, 0, 2048, 240, 141, 89, 255),
    VTX(2550, 2960, 710, 768, 6144, 104, 55, 15, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02ED98[17] = {
    VTX(2900, 2800, 280, 3072, 2048, 32, 19, 7, 255),
    VTX(2900, 2940, 400, 0, -1536, 143, 94, 35, 255),
    VTX(2900, 2800, 400, 0, 2048, 32, 19, 7, 255),
    VTX(2900, 2940, 280, 3072, -1536, 60, 37, 15, 255),
    VTX(3140, 2800, 400, 7865, 2047, 32, 19, 7, 255),
    VTX(3000, 2800, 540, 12933, 2047, 32, 19, 7, 255),
    VTX(3000, 2940, 540, 12933, -1537, 143, 94, 35, 255),
    VTX(3140, 2940, 400, 7865, -1537, 143, 94, 35, 255),
    VTX(2340, 2940, 1200, 14482, 2048, 60, 37, 15, 255),
    VTX(2340, 3200, 1200, 14482, -1280, 32, 19, 7, 255),
    VTX(2740, 2940, 800, 7241, 2048, 240, 148, 0, 255),
    VTX(3140, 3200, 400, 0, -1280, 32, 19, 7, 255),
    VTX(3140, 2940, 400, 0, 2048, 143, 94, 35, 255),
    VTX(2760, 2800, 540, -4608, 2048, 32, 19, 7, 255),
    VTX(2760, 2940, 540, -4608, -1536, 143, 94, 35, 255),
    VTX(3000, 2940, 540, 1536, -1536, 143, 94, 35, 255),
    VTX(3000, 2800, 540, 1536, 2048, 32, 19, 7, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02EEA8[16] = {
    VTX(2530, 2960, 710, 256, -121, 60, 37, 15, 255),
    VTX(2520, 2940, 700, 0, 1024, 155, 84, 21, 255),
    VTX(2520, 2940, 740, 1024, 1024, 155, 84, 21, 255),
    VTX(2550, 2960, 710, 256, -121, 104, 55, 15, 255),
    VTX(2520, 2940, 700, 1024, 1024, 155, 84, 21, 255),
    VTX(2530, 2960, 710, 768, -121, 60, 37, 15, 255),
    VTX(2560, 2940, 700, 0, 1024, 155, 84, 21, 255),
    VTX(2550, 2960, 730, 256, -121, 104, 55, 15, 255),
    VTX(2560, 2940, 700, 1024, 1024, 155, 84, 21, 255),
    VTX(2550, 2960, 710, 768, -121, 104, 55, 15, 255),
    VTX(2560, 2940, 740, 0, 1024, 155, 84, 21, 255),
    VTX(2530, 2960, 730, 256, -121, 143, 94, 35, 255),
    VTX(2560, 2940, 740, 1024, 1024, 155, 84, 21, 255),
    VTX(2550, 2960, 730, 768, -121, 104, 55, 15, 255),
    VTX(2520, 2940, 740, 0, 1024, 155, 84, 21, 255),
    VTX(2530, 2960, 730, 768, -121, 143, 94, 35, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02EFA8[6] = {
    VTX(2520, 3020, 740, 0, 1024, 240, 141, 89, 255),
    VTX(2560, 3020, 740, 0, 2048, 143, 94, 35, 255),
    VTX(2560, 3020, 700, 1024, 2048, 240, 141, 89, 255),
    VTX(2560, 3020, 700, 1024, 2048, 240, 141, 89, 255),
    VTX(2520, 3020, 700, 1024, 1024, 143, 94, 35, 255),
    VTX(2520, 3020, 740, 0, 1024, 240, 141, 89, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02F008[4] = {
    VTX(2300, 3600, 120, -4915, -6554, 22, 3, 5, 255),
    VTX(2840, 3600, 300, -10445, -4710, 0, 0, 0, 255),
    VTX(2240, 3600, 900, -4301, 1434, 0, 0, 0, 255),
    VTX(2060, 3600, 360, -2458, -4096, 22, 3, 5, 255),
}; 

static Vtx unfinished_fire_temple_room_02Vtx_02F048[8] = {
    VTX(1930, 2800, 120, 0, 0, 0, 0, 0, 0),
    VTX(1930, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(1930, 3600, 120, 0, 0, 0, 0, 0, 0),
    VTX(1930, 3600, 1200, 0, 0, 0, 0, 0, 0),
    VTX(3140, 2800, 120, 0, 0, 0, 0, 0, 0),
    VTX(3140, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(3140, 3600, 120, 0, 0, 0, 0, 0, 0),
    VTX(3140, 3600, 1200, 0, 0, 0, 0, 0, 0),
}; 

Gfx unfinished_fire_temple_room_02Dlist0x02F0C8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02F048[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_003CB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02E4C8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02E6C8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(1, 0, 6, 0, 1, 6, 7, 0),
    gsSP2Triangles(5, 7, 6, 0, 4, 5, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02E8C8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0044B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02E9C8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_sceneTex_0054B0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02EA28[0], 25, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 0, 7, 8, 0),
    gsSP2Triangles(0, 9, 7, 0, 10, 11, 4, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 4, 6, 0),
    gsSP2Triangles(9, 0, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 20, 19, 0, 8, 7, 21, 0),
    gsSP2Triangles(22, 8, 21, 0, 23, 24, 6, 0),
    gsSP2Triangles(24, 15, 6, 0, 16, 2, 3, 0),
    gsSP1Triangle(16, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_02F5F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02EBB8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0305F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02EBF8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 3, 4, 0, 0, 5, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0315F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02EC58[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0325F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02EC98[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 0, 2, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0335F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02ED98[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 12, 10, 0, 13, 14, 15, 0),
    gsSP1Triangle(13, 15, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0345F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02EEA8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 0, 2, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_034DF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02EFA8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(unfinished_fire_temple_room_02Tex_0355F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&unfinished_fire_temple_room_02Vtx_02F008[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 unfinished_fire_temple_room_02Tex_02F5F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_02F5F0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0305F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0305F0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0315F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0315F0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0325F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0325F0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0335F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0335F0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0345F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0345F0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_034DF0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_034DF0.rgb5a1.inc.c"
};

u64 unfinished_fire_temple_room_02Tex_0355F0[] = {
#include "assets/scenes/dungeons/unfinished_fire_temple//unfinished_fire_temple_room_02Tex_0355F0.rgb5a1.inc.c"
};

Gfx unfinished_fire_temple_room_02Dlist0x035DF0[] = {
    gsSPDisplayList(unfinished_fire_temple_room_02Dlist0x000CD0),
    gsSPDisplayList(unfinished_fire_temple_room_02Dlist0x007F88),
    gsSPDisplayList(unfinished_fire_temple_room_02Dlist0x00E6F8),
    gsSPDisplayList(unfinished_fire_temple_room_02Dlist0x016680),
    gsSPDisplayList(unfinished_fire_temple_room_02Dlist0x01D4B8),
    gsSPDisplayList(unfinished_fire_temple_room_02Dlist0x023628),
    gsSPDisplayList(unfinished_fire_temple_room_02Dlist0x02A998),
    gsSPDisplayList(unfinished_fire_temple_room_02Dlist0x02F0C8),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_035E38[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


