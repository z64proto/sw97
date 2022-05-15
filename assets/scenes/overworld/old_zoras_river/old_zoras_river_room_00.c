#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_zoras_river_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_zoras_river_scene.h"


static SCmdEchoSettings old_zoras_river_room_00Set0000Cmd00;
static SCmdRoomBehavior old_zoras_river_room_00Set0000Cmd01;
static SCmdSkyboxDisables old_zoras_river_room_00Set0000Cmd02;
static SCmdTimeSettings old_zoras_river_room_00Set0000Cmd03;
static SCmdMesh old_zoras_river_room_00Set0000Cmd04;
static SCmdObjectList old_zoras_river_room_00Set0000Cmd05;
static SCmdActorList old_zoras_river_room_00Set0000Cmd06;
static SCmdEndMarker old_zoras_river_room_00Set0000Cmd07;
static s32 terminatorMaybe;
static Vtx old_zoras_river_room_00Vtx_000100[16];
static Vtx old_zoras_river_room_00Vtx_000200[4];
static Vtx old_zoras_river_room_00Vtx_000240[24];
static Vtx old_zoras_river_room_00Vtx_0003C0[6];
static Vtx old_zoras_river_room_00Vtx_000420[14];
static Vtx old_zoras_river_room_00Vtx_000500[14];
static Vtx old_zoras_river_room_00Vtx_0005E0[14];
static Vtx old_zoras_river_room_00Vtx_0006C0[4];
static Vtx old_zoras_river_room_00Vtx_000700[4];
static Vtx old_zoras_river_room_00Vtx_000740[1];
static Vtx old_zoras_river_room_00Vtx_000750[12];
static Vtx old_zoras_river_room_00Vtx_000810[12];
static Vtx old_zoras_river_room_00Vtx_0008D0[3];
static Vtx old_zoras_river_room_00Vtx_000900[22];
static Vtx old_zoras_river_room_00Vtx_000A60[2];
static Vtx old_zoras_river_room_00Vtx_000A80[8];
static Vtx old_zoras_river_room_00Vtx_000B00[6];
static Vtx old_zoras_river_room_00Vtx_000B60[25];
static Vtx old_zoras_river_room_00Vtx_000CF0[2];
static Vtx old_zoras_river_room_00Vtx_000D10[6];
static Vtx old_zoras_river_room_00Vtx_000D70[10];
static Vtx old_zoras_river_room_00Vtx_000E10[9];
static Vtx old_zoras_river_room_00Vtx_000EA0[19];
static Vtx old_zoras_river_room_00Vtx_002F98[2];
static Vtx old_zoras_river_room_00Vtx_002FB8[2];
static Vtx old_zoras_river_room_00Vtx_002FD8[8];
static Vtx old_zoras_river_room_00Vtx_003058[4];
static Vtx old_zoras_river_room_00Vtx_003098[6];
static Vtx old_zoras_river_room_00Vtx_0032E0[16];
static Vtx old_zoras_river_room_00Vtx_0033E0[5];
static Vtx old_zoras_river_room_00Vtx_003430[1];
static Vtx old_zoras_river_room_00Vtx_003440[7];
static Vtx old_zoras_river_room_00Vtx_0034B0[3];
static Vtx old_zoras_river_room_00Vtx_003640[4];

static SCmdEchoSettings old_zoras_river_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_zoras_river_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables old_zoras_river_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings old_zoras_river_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x06, 0x1E, 0x01 }; // 0x0018

static SCmdMesh old_zoras_river_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&old_zoras_river_room_00MeshHeader0x0000D0 }; // 0x0020

static SCmdObjectList old_zoras_river_room_00Set0000Cmd05 = {  0x0B, 0x04, (u32)old_zoras_river_room_00ObjectList0x000040 }; // 0x0028

static SCmdActorList old_zoras_river_room_00Set0000Cmd06 = {  0x01, 0x08, (u32)old_zoras_river_room_00ActorList0x000048 }; // 0x0030 }; 

static SCmdEndMarker old_zoras_river_room_00Set0000Cmd07 = {  0x14, 0x00, 0x00 }; // 0x0038

s16 old_zoras_river_room_00ObjectList0x000040[4] = {
	OBJECT_OKUTA,
	OBJECT_CROW,
	OBJECT_TITE,
	OBJECT_PEEHAT,
}; 

ActorEntry old_zoras_river_room_00ActorList0x000048[8] = {
	{ ACTOR_EN_TITE, -780, 19, 805, 0, 0, 0, 0xFFFF }, //0x000048
	{ ACTOR_EN_TITE, 390, 14, 1171, 0, 0, 0, 0xFFFF }, //0x000058
	{ ACTOR_EN_OKUTA, -2243, 0, 2073, 0, 0, 0, 0x0000 }, //0x000068
	{ ACTOR_EN_OKUTA, -2048, 10, 1414, 0, 0, 0, 0x0000 }, //0x000078
	{ ACTOR_EN_OKUTA, 2267, 0, -389, 0, 0, 0, 0x0000 }, //0x000088
	{ ACTOR_EN_OKUTA, 2364, 240, -1535, 0, 0, 0, 0x0000 }, //0x000098
	{ ACTOR_EN_FISH, 1950, 400, -2413, 0, 0, 0, 0xFFFF }, //0x0000A8
	{ ACTOR_EN_FISH, 2048, 200, -1584, 0, 0, 0, 0xFFFF }, //0x0000B8
}; 

static u32 padC8 = 0;
static u32 padCC = 0;

MeshHeader2 old_zoras_river_room_00MeshHeader0x0000D0 = { { 2 }, 0x02, (u32)&old_zoras_river_room_00MeshDListEntry0x0000DC, (u32)&(old_zoras_river_room_00MeshDListEntry0x0000DC) + sizeof(old_zoras_river_room_00MeshDListEntry0x0000DC) }; 

MeshEntry2 old_zoras_river_room_00MeshDListEntry0x0000DC[2] = {
	{ 0, 660, 180, 4405, (u32)old_zoras_river_room_00Dlist0x002F88, (u32)old_zoras_river_room_00Dlist0x003630 },
	{ -2199, 380, 4800, 1932, (u32)old_zoras_river_room_00Dlist0x0032B0, (u32)old_zoras_river_room_00Dlist0x003728 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx old_zoras_river_room_00Vtx_000100[16] = {
    VTX(2580, 40, 50, 1024, -2047, 0, 126, 10, 255),
    VTX(2580, 240, -1199, 1024, 6144, 0, 126, 10, 255),
    VTX(2500, 240, -1199, 0, 6144, 213, 109, 46, 255),
    VTX(2500, 40, 50, 0, -2047, 242, 126, 4, 255),
    VTX(2580, 240, -1199, 1024, 0, 0, 126, 10, 255),
    VTX(2380, 240, -1599, 1024, 3072, 0, 127, 0, 255),
    VTX(2300, 240, -1599, 0, 3072, 221, 118, 29, 255),
    VTX(2500, 240, -1199, 0, 0, 213, 109, 46, 255),
    VTX(2458, 581, -2444, 1024, 0, 203, 95, 64, 255),
    VTX(2380, 880, -2799, 1024, 2048, 175, 64, 72, 255),
    VTX(2300, 880, -2799, 0, 2048, 202, 43, 105, 255),
    VTX(2378, 581, -2444, 0, 0, 192, 100, 41, 255),
    VTX(2380, 240, -1599, 1024, 0, 163, 47, 70, 255),
    VTX(2180, 440, -1999, 1024, 3072, 209, 98, 64, 255),
    VTX(2100, 440, -1999, 0, 3072, 208, 102, 57, 255),
    VTX(2300, 240, -1599, 0, 0, 221, 118, 29, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000200[4] = {
    VTX(2180, 440, -1999, 1024, 0, 209, 98, 64, 255),
    VTX(2458, 581, -2444, 1024, 4096, 203, 95, 64, 255),
    VTX(2378, 581, -2444, 0, 4096, 192, 100, 41, 255),
    VTX(2100, 440, -1999, 0, 0, 208, 102, 57, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000240[24] = {
    VTX(1700, 880, -2799, -2925, 6144, 59, 35, 106, 255),
    VTX(1200, 1200, -2799, -6582, 6144, 96, 75, 35, 255),
    VTX(1350, 820, -2399, -5485, 3218, 107, 55, 38, 255),
    VTX(1200, 1200, -1999, -6582, 293, 116, 49, 3, 255),
    VTX(1500, 440, -1999, -4388, 293, 105, 61, 36, 255),
    VTX(1700, 440, -2799, -2925, 6144, 74, 64, 80, 255),
    VTX(1900, 240, -1199, -1462, -5558, 91, 87, 12, 255),
    VTX(1500, 240, -1999, -4388, 293, 93, 79, 32, 255),
    VTX(1446, 592, -1481, -4779, -3498, 113, 56, 245, 255),
    VTX(1200, 1000, -1199, -6582, -5558, 103, 72, 12, 255),
    VTX(1200, 800, 0, -6582, -1023, 82, 89, 37, 255),
    VTX(1550, 280, -799, -4022, 4827, 100, 70, 32, 255),
    VTX(1200, 1000, -1199, -6582, 7753, 103, 72, 12, 255),
    VTX(1900, 40, 700, -1462, -6143, 43, 116, 24, 255),
    VTX(1900, 40, -1199, -1462, 7753, 49, 117, 0, 255),
    VTX(1900, 240, -1199, -1462, 7753, 91, 87, 12, 255),
    VTX(2580, 400, -1199, 3511, 7753, 150, 62, 27, 255),
    VTX(2850, 580, -799, 5486, 4827, 158, 78, 8, 255),
    VTX(2380, 1040, -2799, 2048, 6144, 165, 70, 51, 255),
    VTX(2650, 980, -2399, 4023, 3218, 183, 102, 12, 255),
    VTX(2180, 600, -1999, 585, 293, 153, 70, 21, 255),
    VTX(2850, 780, -1599, 5486, -2632, 174, 85, 43, 255),
    VTX(0, 40, 1300, 13312, 1755, 0, 96, 174, 255),
    VTX(-1199, 800, 2000, 4535, -3364, 203, 100, 203, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_0003C0[6] = {
    VTX(2500, 40, 1300, 2926, -10532, 249, 117, 210, 255),
    VTX(0, 800, 2000, -7167, -6436, 254, 86, 164, 255),
    VTX(0, 40, 700, -7167, 3072, 0, 110, 62, 255),
    VTX(0, 800, 0, 13312, 11264, 0, 86, 93, 255),
    VTX(-2499, 40, 700, -4973, 6144, 33, 118, 33, 255),
    VTX(2378, 581, -2444, 2036, 3550, 192, 100, 41, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000420[14] = {
    VTX(3200, 1160, -1199, 8046, 7753, 156, 75, 16, 255),
    VTX(2580, 200, 50, 3511, -1389, 138, 42, 0, 255),
    VTX(2500, 200, 1300, 2926, -10532, 167, 63, 194, 255),
    VTX(3200, 960, 2000, 8046, -15652, 178, 92, 223, 255),
    VTX(3200, 1200, -2799, 8046, 6144, 214, 119, 6, 255),
    VTX(2458, 741, -2444, 2621, 3550, 137, 40, 0, 255),
    VTX(3200, 1360, -1999, 8046, 293, 178, 97, 19, 255),
    VTX(2380, 400, -1599, 2048, -2632, 157, 48, 61, 255),
    VTX(2580, 400, -1199, 3511, -5558, 150, 62, 27, 255),
    VTX(3200, 1160, -1199, 8046, -5558, 156, 75, 16, 255),
    VTX(-1899, 40, 1300, -584, 1755, 224, 118, 224, 255),
    VTX(0, 800, 2000, 13312, -3364, 254, 86, 164, 255),
    VTX(-1899, 40, 3200, -584, -12141, 195, 110, 0, 255),
    VTX(-1199, 800, 3200, 4535, -12141, 164, 86, 0, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000500[14] = {
    VTX(2580, 40, 50, 3511, -1389, 0, 126, 10, 255),
    VTX(2500, 40, 50, 2926, -1389, 242, 126, 4, 255),
    VTX(3200, 960, 2000, 16238, -6436, 178, 92, 223, 255),
    VTX(2500, 200, 1300, 11118, -1316, 167, 63, 194, 255),
    VTX(0, 40, 1300, -7167, -1316, 0, 96, 174, 255),
    VTX(1900, 40, 700, 6729, 3072, 43, 116, 24, 255),
    VTX(1200, 800, 0, 1609, 8192, 82, 89, 37, 255),
    VTX(0, 800, 0, -7167, 8192, 0, 86, 93, 255),
    VTX(-3199, 800, 0, -10093, 11264, 54, 100, 54, 255),
    VTX(0, 40, 700, 13312, 6144, 0, 110, 62, 255),
    VTX(-3199, 800, 3200, -10093, -12141, 93, 86, 0, 255),
    VTX(-2499, 40, 3200, -4973, -12141, 62, 110, 0, 255),
    VTX(2300, 440, -2799, 1463, 6144, 166, 88, 0, 255),
    VTX(2100, 440, -1999, 0, 293, 208, 102, 57, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_0005E0[14] = {
    VTX(2500, 240, -1199, 0, -15891, 213, 109, 46, 255),
    VTX(2300, 240, -1599, 0, -9993, 221, 118, 29, 255),
    VTX(2300, 200, -1199, 1024, -16383, 218, 93, 77, 255),
    VTX(1900, 200, -1999, 1024, -4095, 218, 93, 77, 255),
    VTX(2100, 240, -1999, 0, -4095, 192, 58, 92, 255),
    VTX(2100, 200, -1199, 1024, -17407, 32, 121, 241, 255),
    VTX(1700, 200, -1999, 1024, -5119, 32, 121, 241, 255),
    VTX(1500, 240, -1999, 0, -5119, 93, 79, 32, 255),
    VTX(1900, 240, -1199, 0, -18054, 91, 87, 12, 255),
    VTX(2500, 40, 50, 0, -9993, 242, 126, 4, 255),
    VTX(2500, 40, -1199, 0, -4095, 159, 80, 0, 255),
    VTX(2300, 0, -1199, 1024, -4095, 218, 100, 67, 255),
    VTX(2300, 0, 1100, 1024, -16383, 237, 124, 242, 255),
    VTX(2500, 40, 1300, 0, -15891, 249, 117, 210, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_0006C0[4] = {
    VTX(2100, 0, 900, 1024, -17407, 18, 124, 18, 255),
    VTX(2100, 440, -1999, 0, -15891, 208, 102, 57, 255),
    VTX(1700, 400, -1999, 1024, -17407, 41, 80, 88, 255),
    VTX(-1899, 40, 1300, 0, 29696, 224, 118, 224, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000700[4] = {
    VTX(-1899, 40, 1300, 0, -25599, 224, 118, 224, 255),
    VTX(-2299, 0, 900, 1024, -27647, 18, 124, 18, 255),
    VTX(0, 40, 1300, 0, 9216, 0, 96, 174, 255),
    VTX(1900, 40, 700, 0, 29696, 43, 116, 24, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000740[1] = {
    VTX(0, 40, 700, 0, 9216, 0, 110, 62, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000750[12] = {
    VTX(2100, 0, -1199, 1024, -5119, 51, 104, 51, 255),
    VTX(1900, 40, -1199, 0, -5119, 49, 117, 0, 255),
    VTX(1900, 40, 700, 0, -18054, 43, 116, 24, 255),
    VTX(2300, 440, -2799, 0, -4095, 166, 88, 0, 255),
    VTX(2100, 400, -2799, 1024, -4095, 223, 122, 248, 255),
    VTX(1900, 400, -1999, 1024, -16383, 216, 87, 82, 255),
    VTX(1900, 400, -2799, 1024, -5119, 41, 80, 88, 255),
    VTX(1700, 440, -2799, 0, -5119, 74, 64, 80, 255),
    VTX(1500, 440, -1999, 0, -18054, 105, 61, 36, 255),
    VTX(0, 40, 1300, 0, 9216, 0, 96, 174, 255),
    VTX(0, 0, 1100, 1024, 9216, 0, 121, 221, 255),
    VTX(-2099, 0, 1100, 1024, 30720, 239, 124, 239, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000810[12] = {
    VTX(-2099, 0, 1100, 1024, -26623, 239, 124, 239, 255),
    VTX(-2099, 0, 3200, 1024, -5119, 221, 121, 0, 255),
    VTX(-1899, 40, 3200, 0, -5119, 195, 110, 0, 255),
    VTX(-2499, 40, 700, 0, -28671, 33, 118, 33, 255),
    VTX(-2499, 40, 3200, 0, -4095, 62, 110, 0, 255),
    VTX(-2299, 0, 3200, 1024, -4095, 36, 121, 0, 255),
    VTX(2500, 40, 1300, 0, 32767, 249, 117, 210, 255),
    VTX(2300, 0, 1100, 1024, 32767, 237, 124, 242, 255),
    VTX(0, 0, 1100, 1024, 9216, 0, 121, 221, 255),
    VTX(0, 40, 700, 0, 9216, 0, 110, 62, 255),
    VTX(0, 0, 900, 1024, 9216, 0, 121, 36, 255),
    VTX(2100, 0, 900, 1024, 30720, 18, 124, 18, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_0008D0[3] = {
    VTX(-2499, 40, 700, 0, 32767, 33, 118, 33, 255),
    VTX(-2299, 0, 900, 1024, 32767, 18, 124, 18, 255),
    VTX(0, 0, 900, 1024, 9216, 0, 121, 36, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000900[22] = {
    VTX(0, -39, 1000, -6143, 796, 0, 127, 0, 255),
    VTX(-2199, -39, 1000, 6372, 796, 0, 127, 0, 255),
    VTX(-2099, 0, 1100, 5803, 1365, 239, 124, 239, 255),
    VTX(0, 0, 1100, -6143, 1365, 0, 121, 221, 255),
    VTX(0, 0, 900, -6143, 228, 0, 121, 36, 255),
    VTX(-2299, 0, 900, 6940, 228, 18, 124, 18, 255),
    VTX(2300, 0, 1100, 796, -682, 237, 124, 242, 255),
    VTX(2300, 0, -1199, 796, 6144, 218, 100, 67, 255),
    VTX(2200, -39, -1239, 228, 6144, 22, 111, 56, 255),
    VTX(2200, -39, 1000, 228, -783, 0, 127, 0, 255),
    VTX(2100, 0, -1199, -340, 6144, 51, 104, 51, 255),
    VTX(2100, 0, 900, -340, -682, 18, 124, 18, 255),
    VTX(0, 0, 1100, -6143, 228, 0, 121, 221, 255),
    VTX(2300, 0, 1100, 6940, 228, 237, 124, 242, 255),
    VTX(2200, -39, 1000, 6372, 796, 0, 127, 0, 255),
    VTX(0, -39, 1000, -6143, 796, 0, 127, 0, 255),
    VTX(2100, 0, 900, 5803, 1365, 18, 124, 18, 255),
    VTX(0, 0, 900, -6143, 1365, 0, 121, 36, 255),
    VTX(-2099, 0, 1100, -340, -5802, 239, 124, 239, 255),
    VTX(-2199, -39, 1000, 228, -6371, 0, 127, 0, 255),
    VTX(2200, 160, -1239, 228, -783, 251, 87, 92, 255),
    VTX(2300, 200, -1199, 796, -682, 218, 93, 77, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000A60[2] = {
    VTX(1800, 360, -2039, 228, -783, 51, 115, 13, 255),
    VTX(1900, 400, -1999, 796, -682, 216, 87, 82, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000A80[8] = {
    VTX(-2199, -39, 3200, 228, 6144, 0, 127, 0, 255),
    VTX(-2099, 0, 3200, -340, 6144, 221, 121, 0, 255),
    VTX(-2299, 0, 900, 796, -6939, 18, 124, 18, 255),
    VTX(-2299, 0, 3200, 796, 6144, 36, 121, 0, 255),
    VTX(1800, 160, -2039, 228, 6144, 248, 126, 4, 255),
    VTX(1700, 200, -1999, -340, 6144, 32, 121, 241, 255),
    VTX(2100, 200, -1199, -340, -682, 32, 121, 241, 255),
    VTX(1900, 200, -1999, 796, 6144, 218, 93, 77, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000B00[6] = {
    VTX(2000, 360, -2839, 228, 6144, 23, 52, 113, 255),
    VTX(1900, 400, -2799, -340, 6144, 41, 80, 88, 255),
    VTX(1700, 400, -1999, -340, -682, 41, 80, 88, 255),
    VTX(2100, 400, -2799, 796, 6144, 223, 122, 248, 255),
    VTX(2000, 360, -2839, 228, 6144, 214, 118, 246, 255),
    VTX(1800, 360, -2039, 228, -783, 236, 58, 110, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000B60[25] = {
    VTX(2300, 200, -1199, 430, 1317, 218, 93, 77, 255),
    VTX(2300, 0, -1199, 430, -145, 218, 100, 67, 255),
    VTX(2500, 40, -1199, 1516, 146, 0, 0, 127, 255),
    VTX(2500, 240, -1199, 1516, 1609, 213, 109, 46, 255),
    VTX(2500, 40, -1199, 1516, 146, 159, 80, 0, 255),
    VTX(2500, 40, 50, -4603, 146, 130, 0, 0, 255),
    VTX(1900, 400, -1999, 2173, 2779, 216, 87, 82, 255),
    VTX(1900, 200, -1999, 2173, 1317, 218, 93, 77, 255),
    VTX(2100, 240, -1999, 3260, 1609, 192, 58, 92, 255),
    VTX(2100, 440, -1999, 3260, 3072, 208, 102, 57, 255),
    VTX(2300, 240, -1599, 2388, 1609, 221, 118, 29, 255),
    VTX(2580, 200, 50, 7360, 0, 138, 42, 0, 255),
    VTX(2580, 40, 50, 7360, -1023, 131, 0, 253, 255),
    VTX(2500, 40, 1300, 15360, -1023, 131, 0, 249, 255),
    VTX(2500, 200, 1300, 15360, 0, 167, 63, 194, 255),
    VTX(2580, 400, -1199, -639, 1280, 150, 62, 27, 255),
    VTX(2580, 240, -1199, -639, 256, 134, 0, 29, 255),
    VTX(2500, 200, 1300, -5119, 1024, 167, 63, 194, 255),
    VTX(2380, 400, -1599, -3199, 1280, 157, 48, 61, 255),
    VTX(2180, 600, -1999, -5759, 2560, 153, 70, 21, 255),
    VTX(2380, 1040, -2799, -10879, 5376, 165, 70, 51, 255),
    VTX(2458, 741, -2444, -8609, 3463, 137, 40, 0, 255),
    VTX(2100, 840, -2799, 2951, 1755, 233, 0, 124, 255),
    VTX(2300, 880, -2799, 3914, 2048, 202, 43, 105, 255),
    VTX(1700, 440, -2799, 1024, -1169, 74, 64, 80, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000CF0[2] = {
    VTX(1500, 240, -1999, 0, 1609, 93, 79, 32, 255),
    VTX(1900, 40, -1199, -1743, 146, 52, 0, 115, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000D10[6] = {
    VTX(2500, 40, 1300, -5119, 0, 249, 117, 210, 255),
    VTX(0, 40, 1300, 10880, 0, 0, 96, 174, 255),
    VTX(2380, 240, -1599, -3199, 256, 163, 47, 70, 255),
    VTX(2180, 440, -1999, -5759, 1536, 209, 98, 64, 255),
    VTX(2380, 880, -2799, -10879, 4352, 175, 64, 72, 255),
    VTX(2458, 581, -2444, -8609, 2439, 203, 95, 64, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000D70[10] = {
    VTX(2458, 581, -2444, -8609, 2439, 150, 0, 190, 255),
    VTX(2180, 440, -1999, -5759, 1536, 150, 0, 190, 255),
    VTX(2100, 400, -2799, 2951, -1462, 233, 0, 124, 255),
    VTX(2300, 440, -2799, 3914, -1169, 0, 0, 127, 255),
    VTX(2300, 440, -2799, 3914, -1169, 166, 88, 0, 255),
    VTX(2378, 581, -2444, 2339, -138, 192, 100, 41, 255),
    VTX(1900, 400, -2799, 1987, -1462, 41, 80, 88, 255),
    VTX(1900, 840, -2799, 1987, 1755, 24, 0, 124, 255),
    VTX(1700, 880, -2799, 1024, 2048, 59, 35, 106, 255),
    VTX(1350, 820, -2399, -2863, 1609, 107, 55, 38, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000E10[9] = {
    VTX(1500, 440, -1999, 0, 3072, 105, 61, 36, 255),
    VTX(1446, 592, -1481, -2828, 4187, 113, 56, 245, 255),
    VTX(1700, 200, -1999, 1087, 1317, 24, 0, 124, 255),
    VTX(1700, 400, -1999, 1087, 2779, 41, 80, 88, 255),
    VTX(1900, 240, -1199, -1743, 1609, 91, 87, 12, 255),
    VTX(1550, 280, -799, -5603, 1902, 100, 70, 32, 255),
    VTX(2100, 0, -1199, -656, -145, 0, 0, 127, 255),
    VTX(2100, 200, -1199, -656, 1317, 24, 0, 124, 255),
    VTX(1900, 240, -1199, -1743, 1609, 0, 0, 127, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_000EA0[19] = {
    VTX(2100, 200, -1199, 896, 1664, 24, 0, 124, 255),
    VTX(2100, 0, -1199, -383, 384, 51, 104, 51, 255),
    VTX(2200, -39, -1239, 0, -511, 22, 111, 56, 255),
    VTX(2200, 160, -1239, 1280, 768, 251, 87, 92, 255),
    VTX(2200, -39, -1239, 0, -511, 210, 0, 117, 255),
    VTX(2300, 0, -1199, 896, -895, 218, 100, 67, 255),
    VTX(2300, 200, -1199, 2176, 384, 218, 93, 77, 255),
    VTX(1900, 840, -2799, 1434, 4403, 24, 0, 124, 255),
    VTX(1900, 400, -2799, -1637, -1740, 41, 80, 88, 255),
    VTX(2000, 360, -2839, -818, -2661, 23, 52, 113, 255),
    VTX(2000, 800, -2839, 2253, 3482, 0, 0, 127, 255),
    VTX(2100, 400, -2799, 410, -2764, 233, 0, 124, 255),
    VTX(2100, 840, -2799, 3482, 3379, 233, 0, 124, 255),
    VTX(1700, 400, -1999, 614, 2765, 41, 80, 88, 255),
    VTX(1700, 200, -1999, -409, 717, 24, 0, 124, 255),
    VTX(1800, 160, -2039, 410, -204, 0, 0, 127, 255),
    VTX(1800, 360, -2039, 1434, 1843, 236, 58, 110, 255),
    VTX(1900, 200, -1999, 1638, -306, 218, 93, 77, 255),
    VTX(1900, 400, -1999, 2662, 1741, 216, 87, 82, 255),
}; 

Gfx old_zoras_river_room_00Dlist0x000FD0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_room_00Tex_002788, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_zoras_river_room_00Vtx_000100[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000200[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_sceneTex_001E80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000240[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsSP1Triangle(4, 5, 2, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(9, 6, 8, 0),
    gsSP1Triangle(9, 8, 3, 0),
    gsSP1Triangle(4, 3, 8, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 13, 11, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000240[11], 9, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000420[0], 6, 9),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(5, 6, 9, 0),
    gsSP1Triangle(6, 5, 10, 0),
    gsSP1Triangle(6, 11, 12, 0),
    gsSP1Triangle(6, 12, 9, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(7, 8, 13, 0),
    gsSP1Triangle(7, 14, 8, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000240[19], 5, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000420[4], 10, 5),
    gsSP1Triangle(0, 6, 1, 0),
    gsSP1Triangle(0, 7, 5, 0),
    gsSP1Triangle(0, 1, 7, 0),
    gsSP1Triangle(1, 2, 7, 0),
    gsSP1Triangle(2, 1, 8, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 7, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(3, 4, 12, 0),
    gsSP1Triangle(4, 11, 13, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_0003C0[0], 5, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000500[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 4, 0),
    gsSP1Triangle(3, 4, 14, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_0003C0[4], 2, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000500[8], 1, 2),
    gsSPVertex(&old_zoras_river_room_00Vtx_000500[10], 4, 3),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_sceneTex_001680, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 0, 5, 5, 0, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_0005E0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(1, 4, 3, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(5, 7, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsSP1Triangle(13, 9, 12, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_0006C0[0], 4, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000750[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000700[0], 4, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000810[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000740[0], 1, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_0008D0[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_sceneTex_002680, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000900[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000900[14], 8, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000A80[0], 8, 8),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(4, 5, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(5, 11, 8, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(6, 13, 14, 0),
    gsSP1Triangle(7, 15, 12, 0),
    gsSP1Triangle(7, 12, 6, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000A60[0], 2, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000B00[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_room_00Tex_001788, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000B60[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000B60[11], 2, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000B60[15], 7, 2),
    gsSPVertex(&old_zoras_river_room_00Vtx_000D10[0], 6, 9),
    gsSP1Triangle(2, 3, 1, 0),
    gsSP1Triangle(2, 1, 0, 0),
    gsSP1Triangle(4, 9, 10, 0),
    gsSP1Triangle(5, 11, 3, 0),
    gsSP1Triangle(5, 3, 2, 0),
    gsSP1Triangle(6, 12, 11, 0),
    gsSP1Triangle(6, 11, 5, 0),
    gsSP1Triangle(7, 13, 14, 0),
    gsSP1Triangle(7, 14, 8, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000B60[19], 1, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000B60[21], 4, 1),
    gsSPVertex(&old_zoras_river_room_00Vtx_000D70[0], 10, 5),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 0, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(2, 8, 3, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000CF0[0], 2, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000E10[0], 9, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 2, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_room_00Tex_001F88, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000EA0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(10, 9, 11, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_000EA0[13], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

u64 old_zoras_river_room_00Tex_001788[] = {
#include "assets/scenes/overworld/old_zoras_river//old_zoras_river_room_00Tex_001788.rgb5a1.inc.c"
};

u64 old_zoras_river_room_00Tex_001F88[] = {
#include "assets/scenes/overworld/old_zoras_river//old_zoras_river_room_00Tex_001F88.rgb5a1.inc.c"
};

u64 old_zoras_river_room_00Tex_002788[] = {
#include "assets/scenes/overworld/old_zoras_river//old_zoras_river_room_00Tex_002788.rgb5a1.inc.c"
};

Gfx old_zoras_river_room_00Dlist0x002F88[] = {
    gsSPDisplayList(old_zoras_river_room_00Dlist0x000FD0),
    gsSPEndDisplayList(),
}; 

static Vtx old_zoras_river_room_00Vtx_002F98[2] = {
    VTX(-2099, 0, 3200, 1024, -5119, 221, 121, 0, 255),
    VTX(-1899, 40, 3200, 0, -5119, 195, 110, 0, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_002FB8[2] = {
    VTX(-2499, 40, 3200, 0, -4095, 62, 110, 0, 255),
    VTX(-2299, 0, 3200, 1024, -4095, 36, 121, 0, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_002FD8[8] = {
    VTX(-1899, 40, 3200, 2487, 11410, 195, 110, 0, 255),
    VTX(-1899, 40, 6400, 2487, -11994, 195, 110, 0, 255),
    VTX(-1199, 800, 6400, 7607, -11994, 164, 86, 0, 255),
    VTX(-1199, 800, 3200, 7607, 11410, 164, 86, 0, 255),
    VTX(-3199, 800, 3200, -7021, 11410, 93, 86, 0, 255),
    VTX(-3199, 800, 6400, -7021, -11994, 93, 86, 0, 255),
    VTX(-2499, 40, 6400, -1901, -11994, 62, 110, 0, 255),
    VTX(-2499, 40, 3200, -1901, 11410, 62, 110, 0, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_003058[4] = {
    VTX(-2099, 0, 6400, 1024, 27648, 221, 121, 0, 255),
    VTX(-1899, 40, 6400, 0, 27648, 195, 110, 0, 255),
    VTX(-2499, 40, 6400, 0, 28672, 62, 110, 0, 255),
    VTX(-2299, 0, 6400, 1024, 28672, 36, 121, 0, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_003098[6] = {
    VTX(-2299, 0, 3200, 796, -7167, 36, 121, 0, 255),
    VTX(-2299, 0, 6400, 796, 11036, 36, 121, 0, 255),
    VTX(-2199, -39, 6400, 228, 11036, 0, 127, 0, 255),
    VTX(-2199, -39, 3200, 228, -7167, 0, 127, 0, 255),
    VTX(-2099, 0, 6400, -340, 11036, 221, 121, 0, 255),
    VTX(-2099, 0, 3200, -340, -7167, 221, 121, 0, 255),
}; 

Gfx old_zoras_river_room_00Dlist0x0030F8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_sceneTex_001E80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_zoras_river_room_00Vtx_002FD8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_sceneTex_001680, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 0, 5, 5, 0, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_002F98[0], 2, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_002FB8[0], 2, 2),
    gsSPVertex(&old_zoras_river_room_00Vtx_003058[0], 4, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 1, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_sceneTex_002680, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_003098[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx old_zoras_river_room_00Dlist0x0032B0[] = {
    gsSPDisplayList(old_zoras_river_room_00Dlist0x0030F8),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0032C0[32] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2F, 0x88, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x32, 0xB0, 
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx old_zoras_river_room_00Vtx_0032E0[16] = {
    VTX(1700, 200, -1999, 0, 0, 0, 89, 89, 255),
    VTX(1900, 200, -1999, 2048, -1364, 0, 89, 89, 255),
    VTX(1900, 400, -1999, 2048, -682, 0, 89, 89, 255),
    VTX(1700, 400, -1999, 0, 683, 0, 89, 89, 255),
    VTX(2300, 200, -1199, 6912, 3072, 0, 89, 89, 255),
    VTX(1900, 200, -1999, 5888, 5120, 0, 89, 89, 255),
    VTX(1700, 200, -1999, 5376, 5120, 0, 89, 89, 255),
    VTX(2100, 200, -1199, 6400, 3072, 0, 89, 89, 255),
    VTX(2100, 0, -1199, 0, 0, 0, 89, 89, 255),
    VTX(2300, 0, -1199, 2048, -1023, 0, 89, 89, 255),
    VTX(2300, 200, -1199, 2048, -511, 0, 89, 89, 255),
    VTX(2100, 200, -1199, 0, 512, 0, 89, 89, 255),
    VTX(0, 0, 1100, 1024, -2815, 0, 127, 0, 255),
    VTX(2300, 0, 1100, 6912, -2815, 0, 127, 0, 255),
    VTX(2100, 0, 900, 6400, -2303, 0, 127, 0, 255),
    VTX(0, 0, 900, 1024, -2303, 0, 127, 0, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_0033E0[5] = {
    VTX(2300, 0, -1199, 6912, 3072, 0, 89, 89, 255),
    VTX(2100, 0, -1199, 6400, 3072, 0, 89, 89, 255),
    VTX(1900, 400, -1999, 5888, 5120, 0, 89, 89, 255),
    VTX(0, 0, 900, 1024, -2303, 0, 127, 0, 255),
    VTX(-2299, 0, 900, -4863, -2303, 0, 127, 0, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_003430[1] = {
    VTX(1900, 400, -2799, 0, 0, 0, 89, 89, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_003440[7] = {
    VTX(2100, 400, -2799, 6400, 7168, 0, 89, 89, 255),
    VTX(1900, 400, -2799, 5888, 7168, 0, 89, 89, 255),
    VTX(1700, 400, -1999, 5376, 5120, 0, 89, 89, 255),
    VTX(-2099, 0, 1100, -4351, -2815, 0, 127, 0, 255),
    VTX(0, 0, 1100, 1024, -2815, 0, 127, 0, 255),
    VTX(-2299, 0, 3200, -4863, -8191, 0, 127, 0, 255),
    VTX(-2099, 0, 3200, -4351, -8191, 0, 127, 0, 255),
}; 

static Vtx old_zoras_river_room_00Vtx_0034B0[3] = {
    VTX(2100, 400, -2799, 2048, -2047, 0, 89, 89, 255),
    VTX(2100, 840, -2799, 2048, 0, 0, 0, 127, 255),
    VTX(1900, 840, -2799, 0, 2048, 0, 0, 127, 255),
}; 

Gfx old_zoras_river_room_00Dlist0x0034E0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_sceneTex_000E80, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_zoras_river_room_00Vtx_0032E0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_0032E0[13], 2, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_0033E0[0], 5, 2),
    gsSPVertex(&old_zoras_river_room_00Vtx_003440[0], 7, 7),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 6, 10, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(6, 13, 10, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_003430[0], 1, 0),
    gsSPVertex(&old_zoras_river_room_00Vtx_0034B0[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx old_zoras_river_room_00Dlist0x003630[] = {
    gsSPDisplayList(old_zoras_river_room_00Dlist0x0034E0),
    gsSPEndDisplayList(),
}; 

static Vtx old_zoras_river_room_00Vtx_003640[4] = {
    VTX(-2299, 0, 3200, 256, 4096, 0, 127, 0, 255),
    VTX(-2299, 0, 6400, 256, -4095, 0, 127, 0, 255),
    VTX(-2099, 0, 6400, 768, -4095, 0, 127, 0, 255),
    VTX(-2099, 0, 3200, 768, 4096, 0, 127, 0, 255),
}; 

Gfx old_zoras_river_room_00Dlist0x003680[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_zoras_river_sceneTex_000E80, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_zoras_river_room_00Vtx_003640[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx old_zoras_river_room_00Dlist0x003728[] = {
    gsSPDisplayList(old_zoras_river_room_00Dlist0x003680),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_003738[24] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x36, 0x30, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x37, 0x28, 
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


