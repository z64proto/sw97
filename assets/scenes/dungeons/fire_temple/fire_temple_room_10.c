#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "fire_temple_room_10.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "fire_temple_scene.h"


static SCmdEchoSettings fire_temple_room_10Set0000Cmd00;
static SCmdRoomBehavior fire_temple_room_10Set0000Cmd01;
static SCmdSkyboxDisables fire_temple_room_10Set0000Cmd02;
static SCmdMesh fire_temple_room_10Set0000Cmd03;
static SCmdObjectList fire_temple_room_10Set0000Cmd04;
static SCmdActorList fire_temple_room_10Set0000Cmd05;
static SCmdEndMarker fire_temple_room_10Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx fire_temple_room_10Vtx_000240[32];
static Vtx fire_temple_room_10Vtx_000440[8];
static Vtx fire_temple_room_10Vtx_0004C0[21];
static Vtx fire_temple_room_10Vtx_000610[8];
static Vtx fire_temple_room_10Vtx_000690[4];
static Vtx fire_temple_room_10Vtx_0006D0[16];
static Vtx fire_temple_room_10Vtx_0007D0[4];
static Vtx fire_temple_room_10Vtx_000810[28];
static Vtx fire_temple_room_10Vtx_0009D0[4];
static Vtx fire_temple_room_10Vtx_000A10[8];
static Vtx fire_temple_room_10Vtx_005E98[4];
static Vtx fire_temple_room_10Vtx_005ED8[4];
static Vtx fire_temple_room_10Vtx_005F18[4];
static Vtx fire_temple_room_10Vtx_005F58[4];
static Vtx fire_temple_room_10Vtx_005F98[7];
static Vtx fire_temple_room_10Vtx_006008[4];
static Vtx fire_temple_room_10Vtx_006048[4];
static Vtx fire_temple_room_10Vtx_006088[4];
static Vtx fire_temple_room_10Vtx_0060C8[8];
static Vtx fire_temple_room_10Vtx_00AC40[16];
static Vtx fire_temple_room_10Vtx_00AD40[4];
static Vtx fire_temple_room_10Vtx_00AD80[8];
static Vtx fire_temple_room_10Vtx_00AE00[4];
static Vtx fire_temple_room_10Vtx_00AE40[4];
static Vtx fire_temple_room_10Vtx_00AE80[4];
static Vtx fire_temple_room_10Vtx_00AEC0[4];
static Vtx fire_temple_room_10Vtx_00AF00[8];
static Vtx fire_temple_room_10Vtx_00F240[4];
static Vtx fire_temple_room_10Vtx_00F280[4];
static Vtx fire_temple_room_10Vtx_00F2C0[4];
static Vtx fire_temple_room_10Vtx_00F300[4];
static Vtx fire_temple_room_10Vtx_00F340[7];
static Vtx fire_temple_room_10Vtx_00F3B0[4];
static Vtx fire_temple_room_10Vtx_00F3F0[4];
static Vtx fire_temple_room_10Vtx_00F430[4];
static Vtx fire_temple_room_10Vtx_00F470[8];
static Vtx fire_temple_room_10Vtx_013FE8[16];
static Vtx fire_temple_room_10Vtx_0140E8[12];
static Vtx fire_temple_room_10Vtx_0141A8[6];
static Vtx fire_temple_room_10Vtx_014208[4];
static Vtx fire_temple_room_10Vtx_014248[29];
static Vtx fire_temple_room_10Vtx_014418[5];
static Vtx fire_temple_room_10Vtx_014468[12];
static Vtx fire_temple_room_10Vtx_014528[22];
static Vtx fire_temple_room_10Vtx_014688[8];
static Vtx fire_temple_room_10Vtx_014708[8];
static Vtx fire_temple_room_10Vtx_019BB0[4];
static Vtx fire_temple_room_10Vtx_019BF0[4];
static Vtx fire_temple_room_10Vtx_019C30[4];
static Vtx fire_temple_room_10Vtx_019C70[4];
static Vtx fire_temple_room_10Vtx_019CB0[7];
static Vtx fire_temple_room_10Vtx_019D20[4];
static Vtx fire_temple_room_10Vtx_019D60[4];
static Vtx fire_temple_room_10Vtx_019DA0[4];
static Vtx fire_temple_room_10Vtx_019DE0[8];
static Vtx fire_temple_room_10Vtx_01E958[14];
static Vtx fire_temple_room_10Vtx_01EA38[4];
static Vtx fire_temple_room_10Vtx_01EA78[8];
static Vtx fire_temple_room_10Vtx_01EAF8[4];
static Vtx fire_temple_room_10Vtx_01EB38[4];
static Vtx fire_temple_room_10Vtx_01EB78[4];
static Vtx fire_temple_room_10Vtx_01EBB8[4];
static Vtx fire_temple_room_10Vtx_01EBF8[8];
static Vtx fire_temple_room_10Vtx_022F38[4];
static Vtx fire_temple_room_10Vtx_022F78[4];
static Vtx fire_temple_room_10Vtx_022FB8[4];
static Vtx fire_temple_room_10Vtx_022FF8[4];
static Vtx fire_temple_room_10Vtx_023038[7];
static Vtx fire_temple_room_10Vtx_0230A8[4];
static Vtx fire_temple_room_10Vtx_0230E8[4];
static Vtx fire_temple_room_10Vtx_023128[4];
static Vtx fire_temple_room_10Vtx_023168[8];
static Vtx fire_temple_room_10Vtx_027CE0[16];
static Vtx fire_temple_room_10Vtx_027DE0[13];
static Vtx fire_temple_room_10Vtx_027EB0[32];
static Vtx fire_temple_room_10Vtx_0280B0[7];
static Vtx fire_temple_room_10Vtx_028120[8];
static Vtx fire_temple_room_10Vtx_029390[16];
static Vtx fire_temple_room_10Vtx_029490[8];
static Vtx fire_temple_room_10Vtx_02A600[8];
static Vtx fire_temple_room_10Vtx_02A680[8];
static Vtx fire_temple_room_10Vtx_02B030[8];
static Vtx fire_temple_room_10Vtx_02B0B0[8];

static SCmdEchoSettings fire_temple_room_10Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior fire_temple_room_10Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables fire_temple_room_10Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh fire_temple_room_10Set0000Cmd03 = {  0x0A, 0, (u32)&fire_temple_room_10MeshHeader0x000220 }; // 0x0018

static SCmdObjectList fire_temple_room_10Set0000Cmd04 = {  0x0B, 0x02, (u32)fire_temple_room_10ObjectList0x000038 }; // 0x0020

static SCmdActorList fire_temple_room_10Set0000Cmd05 = {  0x01, 0x1E, (u32)fire_temple_room_10ActorList0x00003C }; // 0x0028 }; 

static SCmdEndMarker fire_temple_room_10Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 fire_temple_room_10ObjectList0x000038[2] = {
	OBJECT_HIDAN_OBJECTS,
	OBJECT_FIRE,
}; 

ActorEntry fire_temple_room_10ActorList0x00003C[30] = {
	{ ACTOR_DUNGEON_KEEP, -1920, 2800, -660, 0, 32767, 0, 0x0019 }, //0x00003C
	{ ACTOR_BG_HIDAN_HROCK, -920, 2640, 0, 0, 16384, 0, 0xFFFF }, //0x00004C, 0xFFFF
	{ ACTOR_BG_HIDAN_HROCK, -1320, 2640, 0, 0, 16384, 0, 0xFFFF }, //0x00005C, 0xFFFF
	{ ACTOR_BG_HIDAN_SYOKU, -2720, 2820, 0, 0, 16384, 0, 0xFFFF }, //0x00006C
	{ ACTOR_BG_HIDAN_RSEKIZOU, -1580, 2800, 360, 0, 16384, 0, 0xFFFF }, //0x00007C
	{ ACTOR_BG_HIDAN_RSEKIZOU, -2400, 2800, 700, 0, 16384, 0, 0xFFFF }, //0x00008C
	{ ACTOR_BG_HIDAN_RSEKIZOU, -1480, 2800, -840, 0, 16384, 0, 0xFFFF }, //0x00009C
	{ ACTOR_BG_HIDAN_SEKIZOU, -1580, 2800, 840, 0, -24575, 0, 0x0000 }, //0x0000AC
	{ ACTOR_BG_HIDAN_SEKIZOU, -2530, 2800, -950, 0, 8192, 0, 0x0000 }, //0x0000BC
	{ ACTOR_BG_HIDAN_FWBIG, -2460, 3140, -520, 0, 24575, 0, 0x003F }, //0x0000CC, 0xFFFF
	{ ACTOR_BG_HIDAN_FWBIG, -2460, 3140, 520, 0, 8192, 0, 0x003F }, //0x0000DC, 0xFFFF
	{ ACTOR_BG_HIDAN_DALM, -2436, 2820, -72, 0, -16384, 0, 0xFFFF }, //0x0000EC, 0xFFFF
	{ ACTOR_BG_HIDAN_DALM, -876, 2820, 228, 0, -16384, 0, 0xFFFF }, //0x0000FC, 0xFFFF
	{ ACTOR_BG_HIDAN_DALM, -2436, 2852, -72, 0, -16384, 0, 0xFFFF }, //0x00010C, 0xFFFF
	{ ACTOR_BG_HIDAN_DALM, -2436, 2884, -72, 0, -16384, 0, 0xFFFF }, //0x00011C, 0xFFFF
	{ ACTOR_BG_HIDAN_DALM, -876, 2852, 228, 0, -16384, 0, 0xFFFF }, //0x00012C, 0xFFFF
	{ ACTOR_BG_HIDAN_DALM, -876, 2884, 228, 0, -16384, 0, 0xFFFF }, //0x00013C, 0xFFFF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1560, 2800, -160, 0, 0, 0, 0x0001 }, //0x00014C, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1000, 2800, -160, 0, 0, 0, 0x0001 }, //0x00015C, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1100, 2800, 320, 0, 0, 0, 0x0001 }, //0x00016C, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1120, 2800, 600, 0, 0, 0, 0x0001 }, //0x00017C, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -2140, 2800, 840, 0, 0, 0, 0x0001 }, //0x00018C, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -2000, 2800, 1000, 0, 0, 0, 0x0001 }, //0x00019C, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -2020, 2800, -560, 0, 0, 0, 0x0001 }, //0x0001AC, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -2300, 2800, -580, 0, 0, 0, 0x0001 }, //0x0001BC, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1460, 2800, -640, 0, 0, 0, 0x0001 }, //0x0001CC, 0x40FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1360, 2800, 160, 0, 0, 0, 0x0002 }, //0x0001DC, 0x80FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1880, 2800, 580, 0, 0, 0, 0x0002 }, //0x0001EC, 0x80FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1200, 2800, -460, 0, 0, 0, 0x0002 }, //0x0001FC, 0x80FF
	{ ACTOR_BG_HIDAN_SEKIZOU, -1740, 2800, -980, 0, 0, 0, 0x0002 }, //0x00020C, 0x80FF
}; 

static u32 pad21C = 0;

MeshHeader0 fire_temple_room_10MeshHeader0x000220 = { { 0 }, 0x01, (u32)&fire_temple_room_10MeshDListEntry0x00022C, (u32)&(fire_temple_room_10MeshDListEntry0x00022C) + sizeof(fire_temple_room_10MeshDListEntry0x00022C) }; 

MeshEntry0 fire_temple_room_10MeshDListEntry0x00022C[1] = {
	{ (u32)fire_temple_room_10Dlist0x02AFD0, (u32)fire_temple_room_10Dlist0x02B200 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad238 = 0;
static u32 pad23C = 0;

static Vtx fire_temple_room_10Vtx_000240[32] = {
    VTX(-740, 3040, 220, 0, -256, 104, 55, 15, 255),
    VTX(-720, 3040, 220, 512, -256, 0, 0, 0, 255),
    VTX(-720, 2940, 220, 512, 1024, 0, 0, 0, 255),
    VTX(-740, 2940, 220, 0, 1024, 104, 55, 15, 255),
    VTX(-740, 2940, 220, 1024, 256, 104, 55, 15, 255),
    VTX(-720, 2940, 220, 512, 256, 0, 0, 0, 255),
    VTX(-720, 2940, 160, 512, 1024, 0, 0, 0, 255),
    VTX(-740, 2940, 160, 1024, 1024, 104, 55, 15, 255),
    VTX(-740, 3040, 160, 1024, 1024, 104, 55, 15, 255),
    VTX(-720, 3040, 160, 512, 1024, 0, 0, 0, 255),
    VTX(-720, 3040, 220, 512, 256, 0, 0, 0, 255),
    VTX(-740, 3040, 220, 1024, 256, 104, 55, 15, 255),
    VTX(-740, 2940, 160, 0, 1024, 104, 55, 15, 255),
    VTX(-720, 2940, 160, 512, 1024, 0, 0, 0, 255),
    VTX(-720, 3040, 160, 512, -256, 0, 0, 0, 255),
    VTX(-740, 3040, 160, 0, -256, 104, 55, 15, 255),
    VTX(-1580, 2900, 30, 0, -273, 143, 94, 35, 255),
    VTX(-1610, 2900, 30, 512, -273, 0, 0, 0, 255),
    VTX(-1610, 2800, 30, 512, 1024, 0, 0, 0, 255),
    VTX(-1580, 2800, 30, 0, 1024, 143, 94, 35, 255),
    VTX(-1580, 2800, 30, 0, 1024, 143, 94, 35, 255),
    VTX(-1610, 2800, 30, 512, 1024, 0, 0, 0, 255),
    VTX(-1610, 2800, 90, 512, 256, 0, 0, 0, 255),
    VTX(-1580, 2800, 90, 0, 256, 143, 94, 35, 255),
    VTX(-1580, 2900, 90, 0, 256, 143, 94, 35, 255),
    VTX(-1610, 2900, 90, 512, 256, 0, 0, 0, 255),
    VTX(-1610, 2900, 30, 512, 1024, 0, 0, 0, 255),
    VTX(-1580, 2900, 30, 0, 1024, 143, 94, 35, 255),
    VTX(-1580, 2800, 90, 0, 1024, 143, 94, 35, 255),
    VTX(-1610, 2800, 90, 512, 1024, 0, 0, 0, 255),
    VTX(-1610, 2900, 90, 512, -273, 0, 0, 0, 255),
    VTX(-1580, 2900, 90, 0, -273, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_10Vtx_000440[8] = {
    VTX(-860, 2940, 400, 0, -2048, 104, 55, 15, 255),
    VTX(-740, 2940, 400, 3072, -2048, 104, 55, 15, 255),
    VTX(-860, 2940, 100, 0, 5632, 143, 94, 35, 255),
    VTX(-820, 2940, 400, 1024, -2048, 104, 55, 15, 255),
    VTX(-820, 2940, 480, 1024, -4096, 104, 55, 15, 255),
    VTX(-740, 2940, 220, 3072, 2560, 104, 55, 15, 255),
    VTX(-740, 2940, 100, 3072, 5632, 104, 55, 15, 255),
    VTX(-812, 2940, 220, 1229, 2560, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_10Vtx_0004C0[21] = {
    VTX(-1580, 2800, -120, -1843, -1434, 143, 94, 35, 255),
    VTX(-800, 2800, -120, -1843, 6554, 143, 94, 35, 255),
    VTX(-740, 2800, -400, 1024, 7168, 60, 37, 15, 255),
    VTX(-740, 2800, 400, -7168, 7168, 104, 55, 15, 255),
    VTX(-800, 2800, 120, -4301, 6554, 143, 94, 35, 255),
    VTX(-1440, 2800, 120, -4301, 0, 143, 94, 35, 255),
    VTX(-1580, 2800, 120, -4301, -1434, 143, 94, 35, 255),
    VTX(-1200, 2800, -120, -1843, 2458, 143, 94, 35, 255),
    VTX(-1200, 2800, 120, -4301, 2458, 143, 94, 35, 255),
    VTX(-1040, 2800, 120, -4301, 4096, 143, 94, 35, 255),
    VTX(-1040, 2800, -120, -1843, 4096, 143, 94, 35, 255),
    VTX(-960, 2820, -40, -2662, 4915, 109, 32, 16, 255),
    VTX(-960, 2820, 40, -3482, 4915, 109, 32, 16, 255),
    VTX(-880, 2820, 40, -3482, 5734, 109, 32, 16, 255),
    VTX(-1360, 2820, -40, -2662, 819, 109, 32, 16, 255),
    VTX(-1440, 2800, -120, -1843, 0, 143, 94, 35, 255),
    VTX(-1360, 2820, 40, -3482, 819, 109, 32, 16, 255),
    VTX(-880, 2820, -40, -2662, 5734, 109, 32, 16, 255),
    VTX(-880, 2820, 40, -3482, 5734, 52, 8, 0, 255),
    VTX(-1280, 2820, 40, -3482, 1638, 109, 32, 16, 255),
    VTX(-1280, 2820, -40, -2662, 1638, 109, 32, 16, 255),
}; 

static Vtx fire_temple_room_10Vtx_000610[8] = {
    VTX(-1580, 2800, 30, 2048, 2048, 143, 94, 35, 255),
    VTX(-1580, 2800, -120, 5888, 2048, 143, 94, 35, 255),
    VTX(-1580, 2980, -120, 5888, -2560, 104, 55, 15, 255),
    VTX(-1580, 2900, 30, 2048, -512, 143, 94, 35, 255),
    VTX(-1580, 2800, 90, 512, 2048, 143, 94, 35, 255),
    VTX(-1580, 2900, 90, 512, -512, 143, 94, 35, 255),
    VTX(-1580, 2980, 120, -256, -2560, 60, 37, 15, 255),
    VTX(-1580, 2800, 120, -256, 2048, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_10Vtx_000690[4] = {
    VTX(-1040, 3600, -300, -3379, -3072, 22, 3, 5, 255),
    VTX(-740, 3200, -400, -4403, 1024, 22, 3, 5, 255),
    VTX(-740, 3200, 400, 3789, 1024, 22, 3, 5, 255),
    VTX(-1040, 3600, 300, 2765, -3072, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_0006D0[16] = {
    VTX(-820, 2800, 400, -1536, 2048, 32, 19, 7, 255),
    VTX(-820, 2940, 400, -1536, -2048, 104, 55, 15, 255),
    VTX(-860, 2800, 400, -512, 2048, 60, 37, 15, 255),
    VTX(-860, 2800, 100, 3072, 2048, 60, 37, 15, 255),
    VTX(-860, 2940, 100, 3072, -2048, 143, 94, 35, 255),
    VTX(-740, 2940, 100, 0, -2048, 104, 55, 15, 255),
    VTX(-740, 2800, 100, 0, 2048, 60, 37, 15, 255),
    VTX(-860, 2800, 400, -6656, 2048, 60, 37, 15, 255),
    VTX(-860, 2940, 400, -6656, -2048, 104, 55, 15, 255),
    VTX(-860, 2800, 100, 1024, 2048, 60, 37, 15, 255),
    VTX(-860, 2940, 100, 1024, -2048, 143, 94, 35, 255),
    VTX(-860, 2940, 400, -512, -2048, 104, 55, 15, 255),
    VTX(-820, 2800, 480, -8704, 2048, 60, 37, 15, 255),
    VTX(-820, 2940, 480, -8704, -2048, 104, 55, 15, 255),
    VTX(-820, 2940, 400, -6656, -2048, 104, 55, 15, 255),
    VTX(-820, 2800, 400, -6656, 2048, 32, 19, 7, 255),
}; 

static Vtx fire_temple_room_10Vtx_0007D0[4] = {
    VTX(-1580, 2980, -120, 5888, 2048, 104, 55, 15, 255),
    VTX(-1580, 3600, -120, 5888, -13824, 0, 0, 0, 255),
    VTX(-1580, 3600, 120, -256, -13824, 22, 3, 5, 255),
    VTX(-1580, 2980, 120, -256, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_000810[28] = {
    VTX(-740, 3200, -400, 12800, -9216, 22, 3, 5, 255),
    VTX(-740, 3040, -400, 12800, -5120, 41, 23, 9, 255),
    VTX(-740, 3040, 160, -1536, -5120, 104, 55, 15, 255),
    VTX(-740, 2940, 400, -7680, -2560, 104, 55, 15, 255),
    VTX(-740, 3040, 220, -3072, -5120, 104, 55, 15, 255),
    VTX(-740, 2940, 220, -3072, -2560, 104, 55, 15, 255),
    VTX(-740, 2940, -400, 12800, -2560, 60, 37, 15, 255),
    VTX(-740, 2800, -400, 12800, 1024, 60, 37, 15, 255),
    VTX(-740, 2940, 100, 0, -2560, 104, 55, 15, 255),
    VTX(-740, 2800, 100, 0, 1024, 60, 37, 15, 255),
    VTX(-740, 3200, 400, -7680, -9216, 22, 3, 5, 255),
    VTX(-740, 2940, 160, -1536, -2560, 104, 55, 15, 255),
    VTX(-892, 2820, 244, 0, 0, 104, 55, 15, 255),
    VTX(-892, 2800, 244, 0, 1024, 41, 23, 9, 255),
    VTX(-860, 2800, 244, 1024, 1024, 60, 37, 15, 255),
    VTX(-860, 2820, 244, 1024, 0, 60, 37, 15, 255),
    VTX(-892, 2800, 212, 0, 1024, 41, 23, 9, 255),
    VTX(-892, 2800, 244, 1024, 1024, 41, 23, 9, 255),
    VTX(-892, 2820, 244, 1024, 0, 104, 55, 15, 255),
    VTX(-892, 2820, 212, 0, 0, 104, 55, 15, 255),
    VTX(-892, 2820, 212, 0, 1024, 104, 55, 15, 255),
    VTX(-892, 2820, 244, 1024, 1024, 104, 55, 15, 255),
    VTX(-860, 2820, 244, 1024, 0, 60, 37, 15, 255),
    VTX(-860, 2820, 212, 0, 0, 60, 37, 15, 255),
    VTX(-860, 2820, 212, 1024, 0, 60, 37, 15, 255),
    VTX(-860, 2800, 212, 1024, 1024, 60, 37, 15, 255),
    VTX(-892, 2800, 212, 0, 1024, 41, 23, 9, 255),
    VTX(-892, 2820, 212, 0, 0, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_0009D0[4] = {
    VTX(-1040, 3600, -300, -2867, -6554, 22, 3, 5, 255),
    VTX(-1040, 3600, 300, -5939, -3482, 22, 3, 5, 255),
    VTX(-1580, 3600, 120, -2253, -1638, 92, 0, 0, 255),
    VTX(-1580, 3600, -120, -1024, -2867, 92, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_000A10[8] = {
    VTX(-1610, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(-720, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(-720, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 2800, 480, 0, 0, 0, 0, 0, 0),
    VTX(-720, 2800, 480, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 3600, 480, 0, 0, 0, 0, 0, 0),
    VTX(-720, 3600, 480, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x000A90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_000A10[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_000240[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&fire_temple_room_10Vtx_000440[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 2, 0, 5, 2, 7, 0),
    gsSP1Triangle(1, 5, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_000E98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0004C0[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 10, 9, 0),
    gsSP2Triangles(11, 9, 12, 0, 12, 9, 4, 0),
    gsSP2Triangles(12, 4, 13, 0, 14, 15, 5, 0),
    gsSP2Triangles(14, 5, 16, 0, 6, 5, 15, 0),
    gsSP2Triangles(6, 15, 0, 0, 17, 1, 10, 0),
    gsSP2Triangles(17, 10, 11, 0, 18, 4, 1, 0),
    gsSP2Triangles(18, 1, 17, 0, 19, 8, 7, 0),
    gsSP2Triangles(19, 7, 20, 0, 20, 7, 15, 0),
    gsSP2Triangles(20, 15, 14, 0, 16, 5, 8, 0),
    gsSP2Triangles(16, 8, 19, 0, 4, 3, 2, 0),
    gsSP1Triangle(4, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_001E98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_000610[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 6, 0, 3, 6, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_002E98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_000690[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_003E98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0006D0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 1, 11, 2, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_004E98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0007D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_000810[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(2, 4, 10, 0, 2, 10, 0, 0),
    gsSP2Triangles(1, 6, 11, 0, 1, 11, 2, 0),
    gsSP2Triangles(4, 3, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(16, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP1Triangle(24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0009D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_000E98[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_000E98.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_001E98[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_001E98.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_002E98[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_002E98.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_003E98[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_003E98.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_004E98[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_004E98.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_005E98[4] = {
    VTX(-1126, 3180, -786, 0, 1024, 22, 3, 5, 255),
    VTX(-1154, 3180, -814, 410, 1024, 22, 3, 5, 255),
    VTX(-1714, 3180, -254, 410, -7086, 78, 32, 17, 255),
    VTX(-1686, 3180, -226, 0, -7086, 78, 32, 17, 255),
}; 

static Vtx fire_temple_room_10Vtx_005ED8[4] = {
    VTX(-740, 2800, -400, 1024, 7168, 60, 37, 15, 255),
    VTX(-1540, 2800, -1200, 9216, -1024, 104, 55, 15, 255),
    VTX(-1820, 2800, -360, 614, -3891, 60, 37, 15, 255),
    VTX(-1580, 2800, -120, -1843, -1434, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_10Vtx_005F18[4] = {
    VTX(-1820, 2980, -360, 9457, -2560, 104, 55, 15, 255),
    VTX(-1580, 2980, -120, 768, -2560, 60, 37, 15, 255),
    VTX(-1580, 2800, -120, 768, 2048, 143, 94, 35, 255),
    VTX(-1820, 2800, -360, 9457, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_005F58[4] = {
    VTX(-1640, 3600, -900, -3672, -3072, 22, 3, 5, 255),
    VTX(-1540, 3200, -1200, -5120, 1024, 22, 3, 5, 255),
    VTX(-740, 3200, -400, 6465, 1024, 22, 3, 5, 255),
    VTX(-1040, 3600, -300, 5017, -3072, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_005F98[7] = {
    VTX(-1686, 3180, -226, -9216, 1024, 78, 32, 17, 255),
    VTX(-1700, 3120, -240, -9216, 5, 78, 32, 17, 255),
    VTX(-1420, 3140, -520, 921, 5, 240, 141, 89, 255),
    VTX(-1140, 3120, -800, 11058, 5, 22, 3, 5, 255),
    VTX(-1154, 3180, -814, 11058, 1024, 22, 3, 5, 255),
    VTX(-1714, 3180, -254, -9216, 1024, 78, 32, 17, 255),
    VTX(-1126, 3180, -786, 11058, 1024, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_006008[4] = {
    VTX(-1820, 2980, -360, 9472, 2048, 104, 55, 15, 255),
    VTX(-1820, 3600, -360, 9472, -13824, 0, 0, 0, 255),
    VTX(-1580, 3600, -120, 783, -13824, 22, 3, 5, 255),
    VTX(-1580, 2980, -120, 783, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_006048[4] = {
    VTX(-740, 2800, -400, -13603, -3072, 60, 37, 15, 255),
    VTX(-740, 3200, -400, -13603, 7168, 22, 3, 5, 255),
    VTX(-1540, 3200, -1200, 15360, 7168, 22, 3, 5, 255),
    VTX(-1540, 2800, -1200, 15360, -3072, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_006088[4] = {
    VTX(-1820, 3600, -360, 1434, -2867, 92, 0, 0, 255),
    VTX(-1640, 3600, -900, 3277, -6554, 22, 3, 5, 255),
    VTX(-1040, 3600, -300, -2867, -6554, 22, 3, 5, 255),
    VTX(-1580, 3600, -120, -1024, -2867, 92, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_0060C8[8] = {
    VTX(-1540, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(-677, 2800, -476, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(-677, 3600, -476, 0, 0, 0, 0, 0, 0),
    VTX(-2088, 2800, -547, 0, 0, 0, 0, 0, 0),
    VTX(-1225, 2800, 178, 0, 0, 0, 0, 0, 0),
    VTX(-2088, 3600, -547, 0, 0, 0, 0, 0, 0),
    VTX(-1225, 3600, 178, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x006148[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_0060C8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_005E98[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_006440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_005ED8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_007440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_005F18[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_008440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_005F58[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_009440, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_005F98[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 5, 4, 0, 2, 1, 5, 0),
    gsSP2Triangles(6, 0, 2, 0, 6, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_009C40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_006008[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_006048[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_006088[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_006440[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_006440.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_007440[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_007440.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_008440[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_008440.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_009440[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_009440.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_009C40[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_009C40.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_00AC40[16] = {
    VTX(-1900, 2800, -360, 1024, 1024, 143, 94, 35, 255),
    VTX(-1900, 2800, -330, 512, 1024, 0, 0, 0, 255),
    VTX(-1900, 2900, -330, 512, -259, 0, 0, 0, 255),
    VTX(-1900, 2900, -360, 1024, -259, 143, 94, 35, 255),
    VTX(-1960, 2800, -360, 0, 1024, 143, 94, 35, 255),
    VTX(-1960, 2800, -330, 512, 1024, 0, 0, 0, 255),
    VTX(-1900, 2800, -330, 512, 279, 0, 0, 0, 255),
    VTX(-1900, 2800, -360, 0, 279, 143, 94, 35, 255),
    VTX(-1960, 2900, -360, 1024, -259, 143, 94, 35, 255),
    VTX(-1960, 2900, -330, 512, -259, 0, 0, 0, 255),
    VTX(-1960, 2800, -330, 512, 1024, 0, 0, 0, 255),
    VTX(-1960, 2800, -360, 1024, 1024, 143, 94, 35, 255),
    VTX(-1900, 2900, -360, 0, 279, 143, 94, 35, 255),
    VTX(-1900, 2900, -330, 512, 279, 0, 0, 0, 255),
    VTX(-1960, 2900, -330, 512, 1024, 0, 0, 0, 255),
    VTX(-1960, 2900, -360, 0, 1024, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_10Vtx_00AD40[4] = {
    VTX(-1820, 2800, -360, 614, -3891, 60, 37, 15, 255),
    VTX(-1540, 2800, -1200, 9216, -1024, 104, 55, 15, 255),
    VTX(-2340, 2800, -1200, 9216, -9216, 104, 55, 15, 255),
    VTX(-2060, 2800, -360, 614, -6349, 79, 74, 23, 255),
}; 

static Vtx fire_temple_room_10Vtx_00AD80[8] = {
    VTX(-1960, 2900, -360, 3840, -512, 143, 94, 35, 255),
    VTX(-2060, 2980, -360, 6400, -2560, 104, 55, 15, 255),
    VTX(-1820, 2980, -360, 256, -2560, 60, 37, 15, 255),
    VTX(-1900, 2900, -360, 2304, -512, 143, 94, 35, 255),
    VTX(-1960, 2800, -360, 3840, 2048, 143, 94, 35, 255),
    VTX(-2060, 2800, -360, 6400, 2048, 79, 74, 23, 255),
    VTX(-1900, 2800, -360, 2304, 2048, 143, 94, 35, 255),
    VTX(-1820, 2800, -360, 256, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_00AE00[4] = {
    VTX(-2240, 3600, -900, 8477, -3102, 22, 3, 5, 255),
    VTX(-2340, 3200, -1200, 9501, 994, 22, 3, 5, 255),
    VTX(-1540, 3200, -1200, 1309, 994, 22, 3, 5, 255),
    VTX(-1640, 3600, -900, 2333, -3102, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_00AE40[4] = {
    VTX(-2060, 2980, -360, 6400, 2048, 104, 55, 15, 255),
    VTX(-1820, 3600, -360, 256, -13824, 22, 3, 5, 255),
    VTX(-1820, 2980, -360, 256, 2048, 60, 37, 15, 255),
    VTX(-2060, 3600, -360, 6400, -13824, 0, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_00AE80[4] = {
    VTX(-1540, 2800, -1200, -10240, -3072, 104, 55, 15, 255),
    VTX(-1540, 3200, -1200, -10240, 7168, 22, 3, 5, 255),
    VTX(-2340, 3200, -1200, 10240, 7168, 22, 3, 5, 255),
    VTX(-2340, 2800, -1200, 10240, -3072, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_00AEC0[4] = {
    VTX(-1820, 3600, -360, 1434, -2867, 92, 0, 0, 255),
    VTX(-2060, 3600, -360, 2662, -1638, 92, 0, 0, 255),
    VTX(-2240, 3600, -900, 6349, -3482, 22, 3, 5, 255),
    VTX(-1640, 3600, -900, 3277, -6554, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_00AF00[8] = {
    VTX(-2340, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 2800, -1200, 0, 0, 0, 0, 0, 0),
    VTX(-2340, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 3600, -1200, 0, 0, 0, 0, 0, 0),
    VTX(-2340, 2800, -330, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 2800, -330, 0, 0, 0, 0, 0, 0),
    VTX(-2340, 3600, -330, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 3600, -330, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x00AF80[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_00AF00[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_00AC40[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_00B240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00AD40[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_00C240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00AD80[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 3, 2, 0, 6, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_00D240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00AE00[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_00E240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00AE40[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00AE80[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00AEC0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_00B240[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_00B240.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_00C240[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_00C240.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_00D240[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_00D240.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_00E240[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_00E240.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_00F240[4] = {
    VTX(-2194, 3180, -226, 410, 1024, 78, 32, 17, 255),
    VTX(-2166, 3180, -254, 0, 1024, 78, 32, 17, 255),
    VTX(-2726, 3180, -814, 0, 9134, 22, 3, 5, 255),
    VTX(-2754, 3180, -786, 410, 9134, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_00F280[4] = {
    VTX(-2060, 2800, -360, 614, -6349, 79, 74, 23, 255),
    VTX(-2340, 2800, -1200, 9216, -9216, 104, 55, 15, 255),
    VTX(-3140, 2800, -400, 1024, -17408, 109, 32, 16, 255),
    VTX(-2300, 2800, -120, -1843, -8806, 109, 32, 16, 255),
}; 

static Vtx fire_temple_room_10Vtx_00F2C0[4] = {
    VTX(-2300, 2800, -120, -256, 2048, 52, 8, 0, 255),
    VTX(-2300, 2980, -120, -256, -2560, 104, 55, 15, 255),
    VTX(-2060, 2980, -360, 8433, -2560, 60, 37, 15, 255),
    VTX(-2060, 2800, -360, 8433, 2048, 71, 71, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_00F300[4] = {
    VTX(-2340, 3200, -1200, 11585, 1024, 22, 3, 5, 255),
    VTX(-2240, 3600, -900, 10137, -3072, 22, 3, 5, 255),
    VTX(-2840, 3600, -300, 1448, -3072, 22, 3, 5, 255),
    VTX(-3140, 3200, -400, 0, 1024, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_00F340[7] = {
    VTX(-2460, 3140, -520, 921, 5, 240, 141, 89, 255),
    VTX(-2180, 3120, -240, -9216, 5, 78, 32, 17, 255),
    VTX(-2194, 3180, -226, -9216, 1024, 78, 32, 17, 255),
    VTX(-2740, 3120, -800, 11058, 5, 22, 3, 5, 255),
    VTX(-2754, 3180, -786, 11058, 1024, 22, 3, 5, 255),
    VTX(-2166, 3180, -254, -9216, 1024, 78, 32, 17, 255),
    VTX(-2726, 3180, -814, 11058, 1024, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_00F3B0[4] = {
    VTX(-2060, 3600, -360, 271, -13824, 22, 3, 5, 255),
    VTX(-2060, 2980, -360, 271, 2048, 60, 37, 15, 255),
    VTX(-2300, 2980, -120, 8960, 2048, 104, 55, 15, 255),
    VTX(-2300, 3600, -120, 8960, -13824, 0, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_00F3F0[4] = {
    VTX(-2340, 3200, -1200, -16675, 7168, 22, 3, 5, 255),
    VTX(-3140, 3200, -400, 12288, 7168, 22, 3, 5, 255),
    VTX(-3140, 2800, -400, 12288, -3072, 109, 32, 16, 255),
    VTX(-2340, 2800, -1200, -16675, -3072, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_00F430[4] = {
    VTX(-2240, 3600, -900, 6349, -3482, 22, 3, 5, 255),
    VTX(-2060, 3600, -360, 2662, -1638, 92, 0, 0, 255),
    VTX(-2300, 3600, -120, 2662, 819, 92, 0, 0, 255),
    VTX(-2840, 3600, -300, 6349, 2662, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_00F470[8] = {
    VTX(-2416, 2800, -1263, 0, 0, 0, 0, 0, 0),
    VTX(-1762, 2800, -715, 0, 0, 0, 0, 0, 0),
    VTX(-2416, 3600, -1263, 0, 0, 0, 0, 0, 0),
    VTX(-1762, 3600, -715, 0, 0, 0, 0, 0, 0),
    VTX(-3140, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(-2487, 2800, 148, 0, 0, 0, 0, 0, 0),
    VTX(-3140, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(-2487, 3600, 148, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x00F4F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_00F470[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_00F240[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_00F7E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00F280[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_0107E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00F2C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_0117E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00F300[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_0127E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00F340[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 1, 0, 0, 6, 5, 0, 0),
    gsSP2Triangles(6, 0, 3, 0, 0, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_012FE8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00F3B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00F3F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_00F430[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_00F7E8[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_00F7E8.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_0107E8[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_0107E8.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_0117E8[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_0117E8.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_0127E8[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_0127E8.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_012FE8[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_012FE8.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_013FE8[16] = {
    VTX(-2270, 3020, -100, 512, -1521, 22, 3, 5, 255),
    VTX(-2300, 3020, -100, 0, -1521, 60, 37, 15, 255),
    VTX(-2300, 2920, -100, 0, 1024, 60, 37, 15, 255),
    VTX(-2270, 2920, -100, 512, 1024, 22, 3, 5, 255),
    VTX(-2270, 3020, -40, 512, -510, 22, 3, 5, 255),
    VTX(-2300, 3020, -40, 0, -510, 49, 2, 2, 255),
    VTX(-2300, 3020, -100, 0, 1024, 60, 37, 15, 255),
    VTX(-2270, 3020, -100, 512, 1024, 22, 3, 5, 255),
    VTX(-2270, 2920, -100, 512, 1024, 22, 3, 5, 255),
    VTX(-2300, 2920, -100, 0, 1024, 60, 37, 15, 255),
    VTX(-2300, 2920, -40, 0, -510, 49, 2, 2, 255),
    VTX(-2270, 2920, -40, 512, -510, 22, 3, 5, 255),
    VTX(-2270, 2920, -40, 512, 1024, 22, 3, 5, 255),
    VTX(-2300, 2920, -40, 0, 1024, 49, 2, 2, 255),
    VTX(-2300, 3020, -40, 0, -1521, 49, 2, 2, 255),
    VTX(-2270, 3020, -40, 512, -1521, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_0140E8[12] = {
    VTX(-2300, 2800, -120, -1843, -8806, 109, 32, 16, 255),
    VTX(-3140, 2800, -400, 1024, -17408, 109, 32, 16, 255),
    VTX(-2840, 2800, -120, -1843, -14336, 109, 32, 16, 255),
    VTX(-2680, 2820, -40, -2662, -12698, 0, 0, 0, 255),
    VTX(-2600, 2800, -120, -1843, -11878, 109, 32, 16, 255),
    VTX(-2760, 2820, -40, -2662, -13517, 0, 0, 0, 255),
    VTX(-2840, 2800, 120, -4301, -14336, 109, 32, 16, 255),
    VTX(-2760, 2820, 40, -3482, -13517, 0, 0, 0, 255),
    VTX(-3140, 2800, 400, -7168, -17408, 109, 32, 16, 255),
    VTX(-2300, 2800, 120, -4301, -8806, 109, 32, 16, 255),
    VTX(-2680, 2820, 40, -3482, -12698, 0, 0, 0, 255),
    VTX(-2600, 2800, 120, -4301, -11878, 109, 32, 16, 255),
}; 

static Vtx fire_temple_room_10Vtx_0141A8[6] = {
    VTX(-2300, 2920, -40, 1792, -1024, 49, 2, 2, 255),
    VTX(-2300, 2920, 120, 5888, -1024, 52, 8, 0, 255),
    VTX(-2300, 2980, 120, 5888, -2560, 104, 55, 15, 255),
    VTX(-2300, 2980, -40, 1792, -2560, 60, 37, 15, 255),
    VTX(-2300, 2800, -40, 1792, 2048, 109, 32, 16, 255),
    VTX(-2300, 2800, 120, 5888, 2048, 52, 8, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_014208[4] = {
    VTX(-2840, 3600, 300, 1024, -3072, 22, 3, 5, 255),
    VTX(-3140, 3200, 400, 0, 1024, 22, 3, 5, 255),
    VTX(-3140, 3200, -400, 8192, 1024, 22, 3, 5, 255),
    VTX(-2840, 3600, -300, 7168, -3072, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_014248[29] = {
    VTX(-2300, 2800, -100, 0, 2048, 109, 32, 16, 255),
    VTX(-2420, 2800, -100, 3072, 2048, 104, 55, 15, 255),
    VTX(-2300, 2920, -100, 0, -2048, 49, 2, 2, 255),
    VTX(-2420, 2920, -100, 3072, -2048, 60, 37, 15, 255),
    VTX(-2300, 2920, -40, 0, -2048, 49, 2, 2, 255),
    VTX(-2420, 2800, -40, 3072, 2048, 52, 8, 0, 255),
    VTX(-2300, 2800, -40, 0, 2048, 109, 32, 16, 255),
    VTX(-2420, 2920, -40, 3072, -2048, 143, 94, 35, 255),
    VTX(-2420, 2820, -40, 3072, 1365, 104, 55, 15, 255),
    VTX(-2420, 2820, -100, 0, 1365, 104, 55, 15, 255),
    VTX(-2420, 2920, -100, 0, -2048, 60, 37, 15, 255),
    VTX(-2452, 2820, -54, 819, 1365, 104, 55, 15, 255),
    VTX(-2452, 2800, -54, 819, 2048, 52, 8, 0, 255),
    VTX(-2420, 2800, -54, 0, 2048, 52, 8, 0, 255),
    VTX(-2420, 2820, -54, 0, 1365, 104, 55, 15, 255),
    VTX(-2420, 2820, -86, 819, 1365, 104, 55, 15, 255),
    VTX(-2420, 2800, -86, 819, 2048, 52, 8, 0, 255),
    VTX(-2452, 2800, -86, 0, 2048, 52, 8, 0, 255),
    VTX(-2452, 2820, -86, 0, 1365, 104, 55, 15, 255),
    VTX(-2420, 2800, -100, 0, 2048, 104, 55, 15, 255),
    VTX(-2420, 2800, -86, 717, 2048, 52, 8, 0, 255),
    VTX(-2420, 2820, -86, 717, 1365, 104, 55, 15, 255),
    VTX(-2420, 2800, -54, 2355, 2048, 52, 8, 0, 255),
    VTX(-2420, 2800, -40, 3072, 2048, 104, 55, 15, 255),
    VTX(-2420, 2820, -54, 2355, 1365, 104, 55, 15, 255),
    VTX(-2452, 2800, -86, 717, 2048, 52, 8, 0, 255),
    VTX(-2452, 2800, -54, 2355, 2048, 52, 8, 0, 255),
    VTX(-2452, 2820, -54, 2355, 1365, 104, 55, 15, 255),
    VTX(-2452, 2820, -86, 717, 1365, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_014418[5] = {
    VTX(-2680, 2820, -40, 1024, 0, 0, 0, 0, 255),
    VTX(-2760, 2820, -40, 0, 0, 0, 0, 0, 255),
    VTX(-2720, 2820, 0, 512, 512, 255, 255, 255, 255),
    VTX(-2680, 2820, 40, 1024, 1024, 0, 0, 0, 255),
    VTX(-2760, 2820, 40, 0, 1024, 0, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_014468[12] = {
    VTX(-2300, 3020, -120, 768, 1024, 60, 37, 15, 255),
    VTX(-2300, 2980, -120, 768, 2048, 60, 37, 15, 255),
    VTX(-2300, 2980, -100, 1280, 2048, 60, 37, 15, 255),
    VTX(-2300, 3020, -100, 1280, 1024, 60, 37, 15, 255),
    VTX(-2300, 2980, -40, 2816, 2048, 60, 37, 15, 255),
    VTX(-2300, 2980, 120, 6912, 2048, 104, 55, 15, 255),
    VTX(-2300, 3020, 120, 6912, 1024, 104, 55, 15, 255),
    VTX(-2300, 3020, -40, 2816, 1024, 49, 2, 2, 255),
    VTX(-2300, 3600, -40, 2816, -13824, 0, 0, 0, 255),
    VTX(-2300, 3600, -100, 1280, -13824, 0, 0, 0, 255),
    VTX(-2300, 3600, 120, 6912, -13824, 0, 0, 0, 255),
    VTX(-2300, 3600, -120, 768, -13824, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_014528[22] = {
    VTX(-3140, 2800, -400, -9216, -3072, 109, 32, 16, 255),
    VTX(-3140, 3200, -400, -9216, 7168, 22, 3, 5, 255),
    VTX(-3140, 3200, 400, 11264, 7168, 22, 3, 5, 255),
    VTX(-3140, 2800, 400, 11264, -3072, 109, 32, 16, 255),
    VTX(-2300, 2920, -120, 0, 0, 60, 37, 15, 255),
    VTX(-2300, 2800, -120, 0, 6144, 41, 23, 9, 255),
    VTX(-2300, 2800, -100, 1024, 6144, 109, 32, 16, 255),
    VTX(-2300, 2920, -100, 1024, 0, 60, 37, 15, 255),
    VTX(-2360, 2920, -40, 3072, 1024, 60, 37, 15, 255),
    VTX(-2360, 2920, -100, 3072, -2048, 143, 94, 35, 255),
    VTX(-2420, 2920, -100, 0, -2048, 52, 8, 0, 255),
    VTX(-2420, 2920, -40, 0, 1024, 60, 37, 15, 255),
    VTX(-2300, 2920, -40, 3072, 1024, 49, 2, 2, 255),
    VTX(-2300, 2920, -100, 3072, -2048, 60, 37, 15, 255),
    VTX(-2360, 2920, -100, 0, -2048, 143, 94, 35, 255),
    VTX(-2360, 2920, -40, 0, 1024, 60, 37, 15, 255),
    VTX(-2300, 2980, -120, 0, -3072, 60, 37, 15, 255),
    VTX(-2300, 2980, -100, 1024, -3072, 60, 37, 15, 255),
    VTX(-2452, 2820, -86, 0, 1024, 104, 55, 15, 255),
    VTX(-2452, 2820, -54, 1024, 1024, 104, 55, 15, 255),
    VTX(-2420, 2820, -54, 1024, 0, 104, 55, 15, 255),
    VTX(-2420, 2820, -86, 0, 0, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_014688[8] = {
    VTX(-2300, 3600, 120, 1434, 2048, 92, 0, 0, 255),
    VTX(-2840, 3600, 300, 3277, 5734, 22, 3, 5, 255),
    VTX(-2800, 3600, 80, 4198, 4403, 22, 3, 5, 255),
    VTX(-2640, 3600, 80, 3379, 3584, 22, 3, 5, 255),
    VTX(-2640, 3600, -80, 4198, 2765, 22, 3, 5, 255),
    VTX(-2300, 3600, -120, 2662, 819, 92, 0, 0, 255),
    VTX(-2800, 3600, -80, 5018, 3584, 22, 3, 5, 255),
    VTX(-2840, 3600, -300, 6349, 2662, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_014708[8] = {
    VTX(-3140, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(-2270, 2800, -400, 0, 0, 0, 0, 0, 0),
    VTX(-3140, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(-2270, 3600, -400, 0, 0, 0, 0, 0, 0),
    VTX(-3140, 2800, 400, 0, 0, 0, 0, 0, 0),
    VTX(-2270, 2800, 400, 0, 0, 0, 0, 0, 0),
    VTX(-3140, 3600, 400, 0, 0, 0, 0, 0, 0),
    VTX(-2270, 3600, 400, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x014788[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_014708[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_013FE8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_014BB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0140E8[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(3, 2, 5, 0, 5, 2, 6, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 6, 2, 0),
    gsSP2Triangles(8, 2, 1, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 4, 0, 10, 4, 3, 0),
    gsSP2Triangles(7, 6, 11, 0, 7, 11, 10, 0),
    gsSP2Triangles(9, 0, 4, 0, 9, 4, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_015BB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0141A8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_016BB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_014208[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_017BB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_014248[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 7, 9, 0, 7, 10, 9, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 9, 0),
    gsSP2Triangles(22, 23, 8, 0, 22, 8, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_014418[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 1, 4, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_018BB0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_014468[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 3, 0, 8, 3, 7, 0),
    gsSP2Triangles(10, 8, 7, 0, 10, 7, 6, 0),
    gsSP2Triangles(9, 11, 0, 0, 9, 0, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_014528[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 4, 7, 0, 16, 7, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_014688[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 2, 0, 7, 2, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_014BB0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_014BB0.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_015BB0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_015BB0.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_016BB0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_016BB0.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_017BB0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_017BB0.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_018BB0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_018BB0.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_019BB0[4] = {
    VTX(-2754, 3180, 786, 410, -7086, 22, 3, 5, 255),
    VTX(-2726, 3180, 814, 0, -7086, 22, 3, 5, 255),
    VTX(-2166, 3180, 254, 0, 1024, 78, 32, 17, 255),
    VTX(-2194, 3180, 226, 410, 1024, 78, 32, 17, 255),
}; 

static Vtx fire_temple_room_10Vtx_019BF0[4] = {
    VTX(-2300, 2800, 120, -4301, -8806, 109, 32, 16, 255),
    VTX(-3140, 2800, 400, -7168, -17408, 109, 32, 16, 255),
    VTX(-2340, 2800, 1200, -15360, -9216, 104, 55, 15, 255),
    VTX(-2060, 2800, 360, -6758, -6349, 71, 71, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_019C30[4] = {
    VTX(-2060, 2800, 360, 8433, 2048, 71, 71, 0, 255),
    VTX(-2060, 2980, 360, 8433, -2560, 104, 55, 15, 255),
    VTX(-2300, 2980, 120, -256, -2560, 60, 37, 15, 255),
    VTX(-2300, 2800, 120, -256, 2048, 52, 8, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_019C70[4] = {
    VTX(-2240, 3600, 900, 103, -3072, 22, 3, 5, 255),
    VTX(-2340, 3200, 1200, -1345, 1024, 22, 3, 5, 255),
    VTX(-3140, 3200, 400, 10240, 1024, 22, 3, 5, 255),
    VTX(-2840, 3600, 300, 8792, -3072, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_019CB0[7] = {
    VTX(-2460, 3140, 520, 921, 5, 240, 141, 89, 255),
    VTX(-2166, 3180, 254, -9216, 1024, 78, 32, 17, 255),
    VTX(-2726, 3180, 814, 11058, 1024, 22, 3, 5, 255),
    VTX(-2180, 3120, 240, -9216, 5, 78, 32, 17, 255),
    VTX(-2740, 3120, 800, 11058, 5, 22, 3, 5, 255),
    VTX(-2194, 3180, 226, -9216, 1024, 78, 32, 17, 255),
    VTX(-2754, 3180, 786, 11058, 1024, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_019D20[4] = {
    VTX(-2060, 2980, 360, 241, 2048, 104, 55, 15, 255),
    VTX(-2060, 3600, 360, 241, -13824, 0, 0, 0, 255),
    VTX(-2300, 3600, 120, -8448, -13824, 22, 3, 5, 255),
    VTX(-2300, 2980, 120, -8448, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_019D60[4] = {
    VTX(-3140, 2800, 400, -15360, -3072, 109, 32, 16, 255),
    VTX(-3140, 3200, 400, -15360, 7168, 22, 3, 5, 255),
    VTX(-2340, 3200, 1200, 13603, 7168, 22, 3, 5, 255),
    VTX(-2340, 2800, 1200, 13603, -3072, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_019DA0[4] = {
    VTX(-2060, 3600, 360, -1024, 2048, 92, 0, 0, 255),
    VTX(-2240, 3600, 900, -2867, 5734, 22, 3, 5, 255),
    VTX(-2840, 3600, 300, 3277, 5734, 22, 3, 5, 255),
    VTX(-2300, 3600, 120, 1434, 2048, 92, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_019DE0[8] = {
    VTX(-2655, 2800, -178, 0, 0, 0, 0, 0, 0),
    VTX(-1792, 2800, 547, 0, 0, 0, 0, 0, 0),
    VTX(-2655, 3600, -178, 0, 0, 0, 0, 0, 0),
    VTX(-1792, 3600, 547, 0, 0, 0, 0, 0, 0),
    VTX(-3203, 2800, 476, 0, 0, 0, 0, 0, 0),
    VTX(-2340, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(-3203, 3600, 476, 0, 0, 0, 0, 0, 0),
    VTX(-2340, 3600, 1200, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x019E60[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_019DE0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_019BB0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_01A158, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_019BF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_01B158, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_019C30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_01C158, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_019C70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_01D158, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_019CB0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 3, 0, 0),
    gsSP2Triangles(6, 5, 0, 0, 6, 0, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_01D958, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_019D20[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_019D60[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_019DA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_01A158[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_01A158.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_01B158[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_01B158.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_01C158[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_01C158.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_01D158[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_01D158.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_01D958[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_01D958.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_01E958[14] = {
    VTX(-1990, 2800, 360, 1024, 1024, 143, 94, 35, 255),
    VTX(-1990, 2800, 330, 512, 1024, 0, 0, 0, 255),
    VTX(-1990, 2900, 330, 512, -248, 0, 0, 0, 255),
    VTX(-1990, 2900, 360, 1024, -248, 143, 94, 35, 255),
    VTX(-1930, 2800, 360, 1024, 257, 143, 94, 35, 255),
    VTX(-1930, 2800, 330, 512, 257, 0, 0, 0, 255),
    VTX(-1990, 2900, 360, 1024, 1024, 143, 94, 35, 255),
    VTX(-1990, 2900, 330, 512, 1024, 0, 0, 0, 255),
    VTX(-1930, 2900, 330, 512, 257, 0, 0, 0, 255),
    VTX(-1930, 2900, 360, 1024, 257, 143, 94, 35, 255),
    VTX(-1930, 2900, 360, 1024, -248, 143, 94, 35, 255),
    VTX(-1930, 2900, 330, 512, -248, 0, 0, 0, 255),
    VTX(-1930, 2800, 330, 512, 1024, 0, 0, 0, 255),
    VTX(-1930, 2800, 360, 1024, 1024, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_10Vtx_01EA38[4] = {
    VTX(-2060, 2800, 360, -6758, -6349, 71, 71, 0, 255),
    VTX(-2340, 2800, 1200, -15360, -9216, 104, 55, 15, 255),
    VTX(-1540, 2800, 1200, -15360, -1024, 104, 55, 15, 255),
    VTX(-1820, 2800, 360, -6758, -3891, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_01EA78[8] = {
    VTX(-1990, 2800, 360, 2048, 2048, 143, 94, 35, 255),
    VTX(-1990, 2900, 360, 2048, -512, 143, 94, 35, 255),
    VTX(-2060, 2980, 360, 256, -2560, 60, 37, 15, 255),
    VTX(-2060, 2800, 360, 256, 2048, 71, 71, 0, 255),
    VTX(-1930, 2900, 360, 3584, -512, 143, 94, 35, 255),
    VTX(-1820, 2980, 360, 6400, -2560, 104, 55, 15, 255),
    VTX(-1930, 2800, 360, 3584, 2048, 143, 94, 35, 255),
    VTX(-1820, 2800, 360, 6400, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_01EAF8[4] = {
    VTX(-1640, 3600, 900, 1024, -3072, 22, 3, 5, 255),
    VTX(-1540, 3200, 1200, 0, 1024, 22, 3, 5, 255),
    VTX(-2340, 3200, 1200, 8192, 1024, 22, 3, 5, 255),
    VTX(-2240, 3600, 900, 7168, -3072, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_01EB38[4] = {
    VTX(-1820, 2980, 360, 256, 2048, 104, 55, 15, 255),
    VTX(-1820, 3600, 360, 256, -13824, 0, 0, 0, 255),
    VTX(-2060, 3600, 360, -5888, -13824, 22, 3, 5, 255),
    VTX(-2060, 2980, 360, -5888, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_01EB78[4] = {
    VTX(-2340, 2800, 1200, -9216, -3072, 104, 55, 15, 255),
    VTX(-2340, 3200, 1200, -9216, 7168, 22, 3, 5, 255),
    VTX(-1540, 3200, 1200, 11264, 7168, 22, 3, 5, 255),
    VTX(-1540, 2800, 1200, 11264, -3072, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_01EBB8[4] = {
    VTX(-2060, 3600, 360, -1024, 2048, 92, 0, 0, 255),
    VTX(-1820, 3600, 360, -2253, 819, 92, 0, 0, 255),
    VTX(-1640, 3600, 900, -5939, 2662, 22, 3, 5, 255),
    VTX(-2240, 3600, 900, -2867, 5734, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_01EBF8[8] = {
    VTX(-2340, 2800, 330, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 2800, 330, 0, 0, 0, 0, 0, 0),
    VTX(-2340, 3600, 330, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 3600, 330, 0, 0, 0, 0, 0, 0),
    VTX(-2340, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 2800, 1200, 0, 0, 0, 0, 0, 0),
    VTX(-2340, 3600, 1200, 0, 0, 0, 0, 0, 0),
    VTX(-1540, 3600, 1200, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x01EC78[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_01EBF8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_01E958[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_01EF38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_01EA38[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_01FF38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_01EA78[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_020F38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_01EAF8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_021F38, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_01EB38[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_01EB78[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_01EBB8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_01EF38[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_01EF38.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_01FF38[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_01FF38.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_020F38[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_020F38.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_021F38[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_021F38.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_022F38[4] = {
    VTX(-1686, 3180, 226, 0, 942, 78, 32, 17, 255),
    VTX(-1714, 3180, 254, 410, 942, 78, 32, 17, 255),
    VTX(-1154, 3180, 814, 410, -7168, 22, 3, 5, 255),
    VTX(-1126, 3180, 786, 0, -7168, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_022F78[4] = {
    VTX(-1820, 2800, 360, -6758, -3891, 60, 37, 15, 255),
    VTX(-1540, 2800, 1200, -15360, -1024, 104, 55, 15, 255),
    VTX(-740, 2800, 400, -7168, 7168, 104, 55, 15, 255),
    VTX(-1580, 2800, 120, -4301, -1434, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_10Vtx_022FB8[4] = {
    VTX(-1580, 2980, 120, 753, -2560, 104, 55, 15, 255),
    VTX(-1820, 2980, 360, -7936, -2560, 60, 37, 15, 255),
    VTX(-1820, 2800, 360, -7936, 2048, 60, 37, 15, 255),
    VTX(-1580, 2800, 120, 753, 2048, 143, 94, 35, 255),
}; 

static Vtx fire_temple_room_10Vtx_022FF8[4] = {
    VTX(-1040, 3600, 300, -600, -3072, 22, 3, 5, 255),
    VTX(-740, 3200, 400, -2048, 1024, 22, 3, 5, 255),
    VTX(-1540, 3200, 1200, 9537, 1024, 22, 3, 5, 255),
    VTX(-1640, 3600, 900, 8089, -3072, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_023038[7] = {
    VTX(-1140, 3120, 800, 11058, 5, 22, 3, 5, 255),
    VTX(-1420, 3140, 520, 921, 5, 240, 141, 89, 255),
    VTX(-1126, 3180, 786, 11058, 1024, 22, 3, 5, 255),
    VTX(-1714, 3180, 254, -9216, 1024, 78, 32, 17, 255),
    VTX(-1700, 3120, 240, -9216, 5, 78, 32, 17, 255),
    VTX(-1154, 3180, 814, 11058, 1024, 22, 3, 5, 255),
    VTX(-1686, 3180, 226, -9216, 1024, 78, 32, 17, 255),
}; 

static Vtx fire_temple_room_10Vtx_0230A8[4] = {
    VTX(-1580, 2980, 120, 753, 2048, 104, 55, 15, 255),
    VTX(-1580, 3600, 120, 753, -13824, 0, 0, 0, 255),
    VTX(-1820, 3600, 360, -7936, -13824, 22, 3, 5, 255),
    VTX(-1820, 2980, 360, -7936, 2048, 60, 37, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_0230E8[4] = {
    VTX(-1540, 3200, 1200, -13603, 7168, 22, 3, 5, 255),
    VTX(-740, 3200, 400, 15360, 7168, 22, 3, 5, 255),
    VTX(-1540, 2800, 1200, -13603, -3072, 104, 55, 15, 255),
    VTX(-740, 2800, 400, 15360, -3072, 104, 55, 15, 255),
}; 

static Vtx fire_temple_room_10Vtx_023128[4] = {
    VTX(-1580, 3600, 120, -2253, -1638, 92, 0, 0, 255),
    VTX(-1040, 3600, 300, -5939, -3482, 22, 3, 5, 255),
    VTX(-1640, 3600, 900, -5939, 2662, 22, 3, 5, 255),
    VTX(-1820, 3600, 360, -2253, 819, 92, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_023168[8] = {
    VTX(-1393, 2800, -148, 0, 0, 0, 0, 0, 0),
    VTX(-740, 2800, 400, 0, 0, 0, 0, 0, 0),
    VTX(-1393, 3600, -148, 0, 0, 0, 0, 0, 0),
    VTX(-740, 3600, 400, 0, 0, 0, 0, 0, 0),
    VTX(-2118, 2800, 715, 0, 0, 0, 0, 0, 0),
    VTX(-1464, 2800, 1263, 0, 0, 0, 0, 0, 0),
    VTX(-2118, 3600, 715, 0, 0, 0, 0, 0, 0),
    VTX(-1464, 3600, 1263, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x0231E8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_023168[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_022F38[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_0234E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_022F78[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_0244E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_022FB8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_0254E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_022FF8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_0264E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_023038[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 3, 1, 0, 5, 1, 0, 0),
    gsSP2Triangles(1, 6, 2, 0, 1, 4, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_026CE0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0230A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0230E8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_023128[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_0234E0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_0234E0.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_0244E0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_0244E0.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_0254E0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_0254E0.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_0264E0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_0264E0.rgb5a1.inc.c"
};

u64 fire_temple_room_10Tex_026CE0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_026CE0.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_027CE0[16] = {
    VTX(-2490, 4100, 50, 512, -512, 22, 3, 5, 255),
    VTX(-2510, 4100, 50, 0, -512, 70, 25, 3, 255),
    VTX(-2510, 4100, -10, 0, 1024, 70, 25, 3, 255),
    VTX(-2490, 4100, -10, 512, 1024, 22, 3, 5, 255),
    VTX(-2490, 4100, -10, 512, -1536, 22, 3, 5, 255),
    VTX(-2510, 4100, -10, 0, -1536, 70, 25, 3, 255),
    VTX(-2510, 4000, -10, 0, 1024, 70, 25, 3, 255),
    VTX(-2490, 4000, -10, 512, 1024, 22, 3, 5, 255),
    VTX(-2490, 4000, 50, 512, 1024, 22, 3, 5, 255),
    VTX(-2510, 4000, 50, 0, 1024, 70, 25, 3, 255),
    VTX(-2510, 4100, 50, 0, -1536, 70, 25, 3, 255),
    VTX(-2490, 4100, 50, 512, -1536, 22, 3, 5, 255),
    VTX(-2490, 4000, -10, 512, 1024, 22, 3, 5, 255),
    VTX(-2510, 4000, -10, 0, 1024, 70, 25, 3, 255),
    VTX(-2510, 4000, 50, 0, -512, 70, 25, 3, 255),
    VTX(-2490, 4000, 50, 512, -512, 22, 3, 5, 255),
}; 

static Vtx fire_temple_room_10Vtx_027DE0[13] = {
    VTX(-2640, 3600, 80, 0, -1024, 0, 0, 0, 255),
    VTX(-2800, 3600, 80, 2731, -1024, 0, 0, 0, 255),
    VTX(-2800, 4000, 80, 2731, 5803, 70, 25, 3, 255),
    VTX(-2640, 4000, 80, 1, 5803, 70, 25, 3, 255),
    VTX(-2640, 4000, -80, 1, 5803, 70, 25, 3, 255),
    VTX(-2800, 4000, -80, 2731, 5803, 70, 25, 3, 255),
    VTX(-2800, 3600, -80, 2731, -1024, 0, 0, 0, 255),
    VTX(-2640, 3600, -80, 0, -1024, 0, 0, 0, 255),
    VTX(-2800, 4000, 80, 1, 5803, 70, 25, 3, 255),
    VTX(-2800, 3600, 80, 0, -1024, 0, 0, 0, 255),
    VTX(-2640, 4000, -80, 2731, 5803, 70, 25, 3, 255),
    VTX(-2640, 3600, -80, 2731, -1024, 0, 0, 0, 255),
    VTX(-2640, 3600, 80, 0, -1024, 0, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_027EB0[32] = {
    VTX(-2510, 4000, 120, 10240, -9728, 109, 32, 16, 255),
    VTX(-2640, 4000, 80, 3584, -7680, 104, 55, 15, 255),
    VTX(-2800, 4000, 80, -4608, -7680, 104, 55, 15, 255),
    VTX(-2840, 4000, 120, -6656, -9728, 109, 32, 16, 255),
    VTX(-2510, 4140, 120, 10752, -15360, 22, 3, 5, 255),
    VTX(-2840, 4140, 120, 10752, 1536, 22, 3, 5, 255),
    VTX(-2715, 4140, 20, 5632, -4864, 52, 8, 0, 255),
    VTX(-2510, 4140, -100, -512, -15360, 22, 3, 5, 255),
    VTX(-2840, 4140, -100, -512, 1536, 22, 3, 5, 255),
    VTX(-2840, 4140, 120, 7680, -6144, 22, 3, 5, 255),
    VTX(-2840, 4000, 120, 7680, 1024, 109, 32, 16, 255),
    VTX(-2840, 4000, -100, -2560, 1024, 109, 32, 16, 255),
    VTX(-2840, 4140, -100, -2560, -6144, 22, 3, 5, 255),
    VTX(-2840, 4000, 120, -1536, 1024, 109, 32, 16, 255),
    VTX(-2840, 4140, 120, -1536, 8192, 22, 3, 5, 255),
    VTX(-2510, 4140, 120, 15360, 8192, 22, 3, 5, 255),
    VTX(-2510, 4000, 120, 15360, 1024, 109, 32, 16, 255),
    VTX(-2510, 4000, -100, 15360, 1024, 109, 32, 16, 255),
    VTX(-2510, 4140, -100, 15360, 8192, 22, 3, 5, 255),
    VTX(-2840, 4140, -100, -1536, 8192, 22, 3, 5, 255),
    VTX(-2840, 4000, -100, -1536, 1024, 109, 32, 16, 255),
    VTX(-2800, 4000, -80, -4608, 512, 104, 55, 15, 255),
    VTX(-2840, 4000, -100, -6656, 1536, 109, 32, 16, 255),
    VTX(-2510, 4000, -100, 10240, 1536, 109, 32, 16, 255),
    VTX(-2640, 4000, -80, 3584, 512, 104, 55, 15, 255),
    VTX(-2510, 4140, 120, 7680, -6144, 22, 3, 5, 255),
    VTX(-2510, 4140, -100, -2560, -6144, 22, 3, 5, 255),
    VTX(-2510, 4100, -10, 1024, -4096, 70, 25, 3, 255),
    VTX(-2510, 4100, 50, 4096, -4096, 70, 25, 3, 255),
    VTX(-2510, 4000, 120, 7680, 1024, 109, 32, 16, 255),
    VTX(-2510, 4000, 50, 4096, 1024, 109, 32, 16, 255),
    VTX(-2510, 4000, -100, -2560, 1024, 109, 32, 16, 255),
}; 

static Vtx fire_temple_room_10Vtx_0280B0[7] = {
    VTX(-2510, 4100, -10, 1024, -4096, 70, 25, 3, 255),
    VTX(-2510, 4000, -100, -2560, 1024, 109, 32, 16, 255),
    VTX(-2510, 4000, -10, 1024, 1024, 109, 32, 16, 255),
    VTX(-2840, 4000, -100, -6656, 1536, 109, 32, 16, 255),
    VTX(-2800, 4000, -80, -4608, 512, 104, 55, 15, 255),
    VTX(-2640, 4000, -80, 3584, 512, 104, 55, 15, 255),
    VTX(-2510, 4000, -100, 10240, 1536, 109, 32, 16, 255),
}; 

static Vtx fire_temple_room_10Vtx_028120[8] = {
    VTX(-2840, 3600, -100, 0, 0, 0, 0, 0, 0),
    VTX(-2490, 3600, -100, 0, 0, 0, 0, 0, 0),
    VTX(-2840, 4140, -100, 0, 0, 0, 0, 0, 0),
    VTX(-2490, 4140, -100, 0, 0, 0, 0, 0, 0),
    VTX(-2840, 3600, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2490, 3600, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2840, 4140, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2490, 4140, 120, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x0281A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_028120[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_027CE0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_028390, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_027DE0[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 8, 6, 5, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(fire_temple_sceneTex_018570, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&fire_temple_room_10Vtx_027EB0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(6, 5, 8, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 19, 20, 0),
    gsSP2Triangles(21, 22, 3, 0, 21, 3, 2, 0),
    gsSP2Triangles(23, 24, 1, 0, 23, 1, 0, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP2Triangles(29, 25, 28, 0, 29, 28, 30, 0),
    gsSP1Triangle(27, 26, 31, 0),
    gsSPVertex(&fire_temple_room_10Vtx_0280B0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_028390[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_028390.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_029390[16] = {
    VTX(-1280, 2820, -40, 1738, -7250, 52, 8, 0, 255),
    VTX(-1240, 1200, -80, 2317, 1024, 255, 19, 18, 255),
    VTX(-1240, 1200, 80, 1159, 1064, 255, 19, 18, 255),
    VTX(-1280, 2820, 40, 1159, -7230, 52, 8, 0, 255),
    VTX(-1360, 2820, -40, 1159, -7270, 52, 8, 0, 255),
    VTX(-1400, 1200, -80, 1159, 984, 255, 19, 18, 255),
    VTX(-1360, 2820, 40, 579, -7250, 52, 8, 0, 255),
    VTX(-1400, 1200, 80, 0, 1024, 255, 19, 18, 255),
    VTX(-880, 2820, 40, 4055, -7129, 52, 8, 0, 255),
    VTX(-840, 1200, 80, 4055, 1165, 255, 19, 18, 255),
    VTX(-1000, 1200, 80, 2896, 1125, 255, 19, 18, 255),
    VTX(-960, 2820, 40, 3476, -7149, 52, 8, 0, 255),
    VTX(-1000, 1200, -80, 4055, 1085, 255, 19, 18, 255),
    VTX(-960, 2820, -40, 4055, -7170, 52, 8, 0, 255),
    VTX(-840, 1200, -80, 5213, 1125, 255, 19, 18, 255),
    VTX(-880, 2820, -40, 4634, -7149, 52, 8, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_029490[8] = {
    VTX(-1400, 1200, -80, 0, 0, 0, 0, 0, 0),
    VTX(-840, 1200, -80, 0, 0, 0, 0, 0, 0),
    VTX(-1400, 2820, -80, 0, 0, 0, 0, 0, 0),
    VTX(-840, 2820, -80, 0, 0, 0, 0, 0, 0),
    VTX(-1400, 1200, 80, 0, 0, 0, 0, 0, 0),
    VTX(-840, 1200, 80, 0, 0, 0, 0, 0, 0),
    VTX(-1400, 2820, 80, 0, 0, 0, 0, 0, 0),
    VTX(-840, 2820, 80, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x029510[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_029490[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_029600, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&fire_temple_room_10Vtx_029390[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 9, 0, 15, 9, 8, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_029600[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_029600.rgb5a1.inc.c"
};

static Vtx fire_temple_room_10Vtx_02A600[8] = {
    VTX(-740, 0, 800, -768, 256, 202, 0, 0, 255),
    VTX(-960, 0, 150, 896, -307, 255, 255, 255, 255),
    VTX(-1480, 0, 800, -767, -1638, 202, 0, 0, 255),
    VTX(-440, 0, 500, 0, 1024, 202, 0, 0, 255),
    VTX(-440, 0, -500, 2560, 1024, 202, 0, 0, 255),
    VTX(-740, 0, -800, 3328, 256, 202, 0, 0, 255),
    VTX(-960, 0, 150, 896, -307, 255, 255, 255, 255),
    VTX(-1480, 0, -800, 3331, -1638, 255, 53, 53, 255),
}; 

static Vtx fire_temple_room_10Vtx_02A680[8] = {
    VTX(-1480, 0, -800, 0, 0, 0, 0, 0, 0),
    VTX(-440, 0, -800, 0, 0, 0, 0, 0, 0),
    VTX(-1480, 0, -800, 0, 0, 0, 0, 0, 0),
    VTX(-440, 0, -800, 0, 0, 0, 0, 0, 0),
    VTX(-1480, 0, 800, 0, 0, 0, 0, 0, 0),
    VTX(-440, 0, 800, 0, 0, 0, 0, 0, 0),
    VTX(-1480, 0, 800, 0, 0, 0, 0, 0, 0),
    VTX(-440, 0, 800, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x02A700[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_02A680[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_room_10Tex_02A7D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&fire_temple_room_10Vtx_02A600[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 5, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 7, 2, 6, 0),
    gsSPEndDisplayList(),
}; 

u64 fire_temple_room_10Tex_02A7D0[] = {
#include "assets/scenes/dungeons/fire_temple//fire_temple_room_10Tex_02A7D0.rgb5a1.inc.c"
};

Gfx fire_temple_room_10Dlist0x02AFD0[] = {
    gsSPDisplayList(fire_temple_room_10Dlist0x000A90),
    gsSPDisplayList(fire_temple_room_10Dlist0x006148),
    gsSPDisplayList(fire_temple_room_10Dlist0x00AF80),
    gsSPDisplayList(fire_temple_room_10Dlist0x00F4F0),
    gsSPDisplayList(fire_temple_room_10Dlist0x014788),
    gsSPDisplayList(fire_temple_room_10Dlist0x019E60),
    gsSPDisplayList(fire_temple_room_10Dlist0x01EC78),
    gsSPDisplayList(fire_temple_room_10Dlist0x0231E8),
    gsSPDisplayList(fire_temple_room_10Dlist0x0281A0),
    gsSPDisplayList(fire_temple_room_10Dlist0x029510),
    gsSPDisplayList(fire_temple_room_10Dlist0x02A700),
    gsSPEndDisplayList(),
}; 

static Vtx fire_temple_room_10Vtx_02B030[8] = {
    VTX(-1480, 20, -800, 3331, -1638, 255, 53, 53, 255),
    VTX(-1480, 20, 800, -767, -1638, 202, 0, 0, 255),
    VTX(-960, 20, 150, 896, -307, 255, 255, 255, 255),
    VTX(-740, 20, -800, 3328, 256, 202, 0, 0, 255),
    VTX(-440, 20, -500, 2560, 1024, 202, 0, 0, 255),
    VTX(-440, 20, 500, 0, 1024, 202, 0, 0, 255),
    VTX(-960, 20, 150, 896, -307, 255, 255, 255, 255),
    VTX(-740, 20, 800, -768, 256, 202, 0, 0, 255),
}; 

static Vtx fire_temple_room_10Vtx_02B0B0[8] = {
    VTX(-1480, 20, -800, 0, 0, 0, 0, 0, 0),
    VTX(-440, 20, -800, 0, 0, 0, 0, 0, 0),
    VTX(-1480, 20, -800, 0, 0, 0, 0, 0, 0),
    VTX(-440, 20, -800, 0, 0, 0, 0, 0, 0),
    VTX(-1480, 20, 800, 0, 0, 0, 0, 0, 0),
    VTX(-440, 20, 800, 0, 0, 0, 0, 0, 0),
    VTX(-1480, 20, 800, 0, 0, 0, 0, 0, 0),
    VTX(-440, 20, 800, 0, 0, 0, 0, 0, 0),
}; 

Gfx fire_temple_room_10Dlist0x02B130[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&fire_temple_room_10Vtx_02B0B0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(fire_temple_sceneTex_017D70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&fire_temple_room_10Vtx_02B030[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 5, 6, 0, 7, 6, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx fire_temple_room_10Dlist0x02B200[] = {
    gsSPDisplayList(fire_temple_room_10Dlist0x02B130),
    gsSPEndDisplayList(),
}; 


