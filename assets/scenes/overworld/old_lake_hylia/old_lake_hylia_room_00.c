#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_lake_hylia_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_lake_hylia_scene.h"


static SCmdEchoSettings old_lake_hylia_room_00Set0000Cmd00;
static SCmdRoomBehavior old_lake_hylia_room_00Set0000Cmd01;
static SCmdSkyboxDisables old_lake_hylia_room_00Set0000Cmd02;
static SCmdTimeSettings old_lake_hylia_room_00Set0000Cmd03;
static SCmdMesh old_lake_hylia_room_00Set0000Cmd04;
static SCmdObjectList old_lake_hylia_room_00Set0000Cmd05;
static SCmdActorList old_lake_hylia_room_00Set0000Cmd06;
static SCmdEndMarker old_lake_hylia_room_00Set0000Cmd07;
static s32 terminatorMaybe;
static Vtx old_lake_hylia_room_00Vtx_0002A0[16];
static Vtx old_lake_hylia_room_00Vtx_0003A0[9];
static Vtx old_lake_hylia_room_00Vtx_000430[1];
static Vtx old_lake_hylia_room_00Vtx_000440[1];
static Vtx old_lake_hylia_room_00Vtx_000450[1];
static Vtx old_lake_hylia_room_00Vtx_000460[1];
static Vtx old_lake_hylia_room_00Vtx_000480[1];
static Vtx old_lake_hylia_room_00Vtx_000490[1];
static Vtx old_lake_hylia_room_00Vtx_0004B0[2];
static Vtx old_lake_hylia_room_00Vtx_0004F0[7];
static Vtx old_lake_hylia_room_00Vtx_000560[6];
static Vtx old_lake_hylia_room_00Vtx_0005C0[1];
static Vtx old_lake_hylia_room_00Vtx_0005D0[1];
static Vtx old_lake_hylia_room_00Vtx_0005F0[26];
static Vtx old_lake_hylia_room_00Vtx_000790[6];
static Vtx old_lake_hylia_room_00Vtx_0007F0[35];
static Vtx old_lake_hylia_room_00Vtx_000A20[2];
static Vtx old_lake_hylia_room_00Vtx_000A40[1];
static Vtx old_lake_hylia_room_00Vtx_000A50[1];
static Vtx old_lake_hylia_room_00Vtx_000A60[1];
static Vtx old_lake_hylia_room_00Vtx_000A70[1];
static Vtx old_lake_hylia_room_00Vtx_000AA0[5];
static Vtx old_lake_hylia_room_00Vtx_000AF0[3];
static Vtx old_lake_hylia_room_00Vtx_000B20[1];
static Vtx old_lake_hylia_room_00Vtx_000B30[1];
static Vtx old_lake_hylia_room_00Vtx_000B40[10];
static Vtx old_lake_hylia_room_00Vtx_000BE0[2];
static Vtx old_lake_hylia_room_00Vtx_000C00[2];
static Vtx old_lake_hylia_room_00Vtx_000C20[1];
static Vtx old_lake_hylia_room_00Vtx_000C30[1];
static Vtx old_lake_hylia_room_00Vtx_000C40[4];
static Vtx old_lake_hylia_room_00Vtx_000C80[2];
static Vtx old_lake_hylia_room_00Vtx_000CA0[7];
static Vtx old_lake_hylia_room_00Vtx_000D10[12];
static Vtx old_lake_hylia_room_00Vtx_001908[16];
static Vtx old_lake_hylia_room_00Vtx_001A08[3];
static Vtx old_lake_hylia_room_00Vtx_001A38[10];
static Vtx old_lake_hylia_room_00Vtx_001AD8[18];
static Vtx old_lake_hylia_room_00Vtx_001BF8[6];
static Vtx old_lake_hylia_room_00Vtx_001C58[1];
static Vtx old_lake_hylia_room_00Vtx_001C68[10];
static Vtx old_lake_hylia_room_00Vtx_001D08[1];
static Vtx old_lake_hylia_room_00Vtx_001D28[1];
static Vtx old_lake_hylia_room_00Vtx_001D38[7];
static Vtx old_lake_hylia_room_00Vtx_001DA8[1];
static Vtx old_lake_hylia_room_00Vtx_001DB8[1];
static Vtx old_lake_hylia_room_00Vtx_001DC8[2];
static Vtx old_lake_hylia_room_00Vtx_001DE8[2];
static Vtx old_lake_hylia_room_00Vtx_001E08[1];
static Vtx old_lake_hylia_room_00Vtx_001E18[3];
static Vtx old_lake_hylia_room_00Vtx_001E48[8];
static Vtx old_lake_hylia_room_00Vtx_001EC8[16];
static Vtx old_lake_hylia_room_00Vtx_001FC8[6];
static Vtx old_lake_hylia_room_00Vtx_002028[8];
static Vtx old_lake_hylia_room_00Vtx_0020A8[4];
static Vtx old_lake_hylia_room_00Vtx_0020E8[4];
static Vtx old_lake_hylia_room_00Vtx_002128[4];
static Vtx old_lake_hylia_room_00Vtx_002168[4];
static Vtx old_lake_hylia_room_00Vtx_0021A8[3];
static Vtx old_lake_hylia_room_00Vtx_0021D8[7];
static Vtx old_lake_hylia_room_00Vtx_002248[8];
static Vtx old_lake_hylia_room_00Vtx_0022C8[10];
static Vtx old_lake_hylia_room_00Vtx_002368[12];
static Vtx old_lake_hylia_room_00Vtx_002428[12];
static Vtx old_lake_hylia_room_00Vtx_0024E8[12];
static Vtx old_lake_hylia_room_00Vtx_0025A8[11];
static Vtx old_lake_hylia_room_00Vtx_002658[9];
static Vtx old_lake_hylia_room_00Vtx_0026E8[12];
static Vtx old_lake_hylia_room_00Vtx_0027A8[14];
static Vtx old_lake_hylia_room_00Vtx_002888[6];
static Vtx old_lake_hylia_room_00Vtx_0028E8[5];
static Vtx old_lake_hylia_room_00Vtx_002938[9];
static Vtx old_lake_hylia_room_00Vtx_0029C8[1];
static Vtx old_lake_hylia_room_00Vtx_0029D8[7];
static Vtx old_lake_hylia_room_00Vtx_002A48[1];
static Vtx old_lake_hylia_room_00Vtx_002A68[2];
static Vtx old_lake_hylia_room_00Vtx_002AB8[2];
static Vtx old_lake_hylia_room_00Vtx_002B18[2];
static Vtx old_lake_hylia_room_00Vtx_002B38[9];
static Vtx old_lake_hylia_room_00Vtx_002BC8[4];
static Vtx old_lake_hylia_room_00Vtx_002C08[1];
static Vtx old_lake_hylia_room_00Vtx_002C18[3];
static Vtx old_lake_hylia_room_00Vtx_002C78[1];
static Vtx old_lake_hylia_room_00Vtx_002CA8[4];
static Vtx old_lake_hylia_room_00Vtx_002CE8[14];
static Vtx old_lake_hylia_room_00Vtx_002DD8[6];
static Vtx old_lake_hylia_room_00Vtx_002E38[6];
static Vtx old_lake_hylia_room_00Vtx_002E98[14];
static Vtx old_lake_hylia_room_00Vtx_002F78[1];
static Vtx old_lake_hylia_room_00Vtx_002FC8[4];
static Vtx old_lake_hylia_room_00Vtx_003008[1];
static Vtx old_lake_hylia_room_00Vtx_003018[4];
static Vtx old_lake_hylia_room_00Vtx_003058[3];
static Vtx old_lake_hylia_room_00Vtx_003098[1];
static Vtx old_lake_hylia_room_00Vtx_0030B8[1];
static Vtx old_lake_hylia_room_00Vtx_0030C8[3];
static Vtx old_lake_hylia_room_00Vtx_0030F8[1];
static Vtx old_lake_hylia_room_00Vtx_003108[3];
static Vtx old_lake_hylia_room_00Vtx_003138[17];
static Vtx old_lake_hylia_room_00Vtx_003248[3];
static Vtx old_lake_hylia_room_00Vtx_003278[11];
static Vtx old_lake_hylia_room_00Vtx_0066A0[16];
static Vtx old_lake_hylia_room_00Vtx_0067A0[4];
static Vtx old_lake_hylia_room_00Vtx_0067E0[16];
static Vtx old_lake_hylia_room_00Vtx_0068E0[4];
static Vtx old_lake_hylia_room_00Vtx_006920[4];
static Vtx old_lake_hylia_room_00Vtx_006960[10];
static Vtx old_lake_hylia_room_00Vtx_006A00[12];
static Vtx old_lake_hylia_room_00Vtx_006AC0[16];
static Vtx old_lake_hylia_room_00Vtx_006BC0[7];
static Vtx old_lake_hylia_room_00Vtx_006C30[13];
static Vtx old_lake_hylia_room_00Vtx_006D00[16];
static Vtx old_lake_hylia_room_00Vtx_006E00[4];
static Vtx old_lake_hylia_room_00Vtx_006E40[23];
static Vtx old_lake_hylia_room_00Vtx_006FB0[1];
static Vtx old_lake_hylia_room_00Vtx_006FC0[3];
static Vtx old_lake_hylia_room_00Vtx_00A578[16];
static Vtx old_lake_hylia_room_00Vtx_00A678[4];
static Vtx old_lake_hylia_room_00Vtx_00A6B8[8];
static Vtx old_lake_hylia_room_00Vtx_00A738[6];
static Vtx old_lake_hylia_room_00Vtx_00A798[16];
static Vtx old_lake_hylia_room_00Vtx_00A898[4];
static Vtx old_lake_hylia_room_00Vtx_00A8D8[4];
static Vtx old_lake_hylia_room_00Vtx_00A918[4];
static Vtx old_lake_hylia_room_00Vtx_00A958[12];
static Vtx old_lake_hylia_room_00Vtx_00AA18[12];
static Vtx old_lake_hylia_room_00Vtx_00AAD8[12];
static Vtx old_lake_hylia_room_00Vtx_00AB98[12];
static Vtx old_lake_hylia_room_00Vtx_00AC58[4];
static Vtx old_lake_hylia_room_00Vtx_00AC98[14];
static Vtx old_lake_hylia_room_00Vtx_00AD78[5];
static Vtx old_lake_hylia_room_00Vtx_00ADC8[4];
static Vtx old_lake_hylia_room_00Vtx_00AE08[3];
static Vtx old_lake_hylia_room_00Vtx_00AE38[8];
static Vtx old_lake_hylia_room_00Vtx_00AEB8[11];
static Vtx old_lake_hylia_room_00Vtx_00AF68[5];
static Vtx old_lake_hylia_room_00Vtx_00AFB8[16];
static Vtx old_lake_hylia_room_00Vtx_00B0B8[4];
static Vtx old_lake_hylia_room_00Vtx_00B0F8[2];
static Vtx old_lake_hylia_room_00Vtx_00B118[10];
static Vtx old_lake_hylia_room_00Vtx_00B1B8[6];
static Vtx old_lake_hylia_room_00Vtx_00E700[4];
static Vtx old_lake_hylia_room_00Vtx_00E740[16];
static Vtx old_lake_hylia_room_00Vtx_00E840[4];
static Vtx old_lake_hylia_room_00Vtx_00E880[4];
static Vtx old_lake_hylia_room_00Vtx_00E8C0[4];
static Vtx old_lake_hylia_room_00Vtx_00E900[3];
static Vtx old_lake_hylia_room_00Vtx_00E930[12];
static Vtx old_lake_hylia_room_00Vtx_00E9F0[12];
static Vtx old_lake_hylia_room_00Vtx_00EAB0[12];
static Vtx old_lake_hylia_room_00Vtx_00EB70[9];
static Vtx old_lake_hylia_room_00Vtx_00F870[12];
static Vtx old_lake_hylia_room_00Vtx_00F930[4];
static Vtx old_lake_hylia_room_00Vtx_011AC0[8];
static Vtx old_lake_hylia_room_00Vtx_011FF8[20];
static Vtx old_lake_hylia_room_00Vtx_012138[1];
static Vtx old_lake_hylia_room_00Vtx_012148[6];
static Vtx old_lake_hylia_room_00Vtx_0121A8[3];
static Vtx old_lake_hylia_room_00Vtx_012B60[15];
static Vtx old_lake_hylia_room_00Vtx_012C50[3];
static Vtx old_lake_hylia_room_00Vtx_012C80[2];
static Vtx old_lake_hylia_room_00Vtx_012CB0[1];
static Vtx old_lake_hylia_room_00Vtx_012CC0[1];
static Vtx old_lake_hylia_room_00Vtx_012CD0[8];
static Vtx old_lake_hylia_room_00Vtx_012D70[2];
static Vtx old_lake_hylia_room_00Vtx_012DB0[2];
static Vtx old_lake_hylia_room_00Vtx_012DD0[4];
static Vtx old_lake_hylia_room_00Vtx_012E10[12];
static Vtx old_lake_hylia_room_00Vtx_012ED0[13];
static Vtx old_lake_hylia_room_00Vtx_012FA0[9];
static Vtx old_lake_hylia_room_00Vtx_013030[1];
static Vtx old_lake_hylia_room_00Vtx_013040[1];
static Vtx old_lake_hylia_room_00Vtx_013050[2];
static Vtx old_lake_hylia_room_00Vtx_013070[1];
static Vtx old_lake_hylia_room_00Vtx_013080[1];
static Vtx old_lake_hylia_room_00Vtx_013090[1];
static Vtx old_lake_hylia_room_00Vtx_0130A0[1];
static Vtx old_lake_hylia_room_00Vtx_0130B0[2];
static Vtx old_lake_hylia_room_00Vtx_0130D0[1];
static Vtx old_lake_hylia_room_00Vtx_0130E0[3];
static Vtx old_lake_hylia_room_00Vtx_013110[1];
static Vtx old_lake_hylia_room_00Vtx_013120[3];
static Vtx old_lake_hylia_room_00Vtx_013150[1];
static Vtx old_lake_hylia_room_00Vtx_013160[6];
static Vtx old_lake_hylia_room_00Vtx_0131C0[15];
static Vtx old_lake_hylia_room_00Vtx_0132B0[1];
static Vtx old_lake_hylia_room_00Vtx_0132F0[3];

static SCmdEchoSettings old_lake_hylia_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_lake_hylia_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables old_lake_hylia_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings old_lake_hylia_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x01 }; // 0x0018

static SCmdMesh old_lake_hylia_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&old_lake_hylia_room_00MeshHeader0x000200 }; // 0x0020

static SCmdObjectList old_lake_hylia_room_00Set0000Cmd05 = {  0x0B, 0x08, (u32)old_lake_hylia_room_00ObjectList0x000040 }; // 0x0028

static SCmdActorList old_lake_hylia_room_00Set0000Cmd06 = {  0x01, 0x1B, (u32)old_lake_hylia_room_00ActorList0x000050 }; // 0x0030 }; 

static SCmdEndMarker old_lake_hylia_room_00Set0000Cmd07 = {  0x14, 0x00, 0x00 }; // 0x0038

s16 old_lake_hylia_room_00ObjectList0x000040[8] = {
	OBJECT_O_ANIME,
	OBJECT_OE_ANIME,
	OBJECT_HORSE,
	OBJECT_OA7,
	OBJECT_OA5,
	OBJECT_HUMAN,
	OBJECT_NIW,
	OBJECT_JJ,
}; 

// En_GirlA was likely "Aria" at one point, however it crashes!!
ActorEntry old_lake_hylia_room_00ActorList0x000050[0x1B] = {
	{ ACTOR_EN_FISH, 1367, 26, 2970, 0, 0, 0, 0xFFFF }, //0x000050
	{ ACTOR_EN_FISH, 2238, -92, 3250, 0, 0, 0, 0xFFFF }, //0x000060
	{ ACTOR_EN_FISH, 2105, -107, 1626, 0, 0, 0, 0xFFFF }, //0x000070
	{ ACTOR_EN_FISH, 4560, -358, 3590, 0, 0, 0, 0xFFFF }, //0x000080
	{ ACTOR_EN_FISH, 4338, -225, 1729, 0, 0, 0, 0xFFFF }, //0x000090
	{ ACTOR_EN_FISH, 4545, -210, 5303, 0, 0, 0, 0xFFFF }, //0x0000A0
	{ ACTOR_FIELD_KEEP, -5400, 113, 3295, 0, -10922, 0, 0xFF08 }, //0x0000B0
    { ACTOR_FIELD_KEEP, -4692, 151, 3472, 0, 0, 0, 0x0005 }, //0x0000C0
    { ACTOR_FIELD_KEEP, -4772, 129, 3792, 0, 0, 0, 0x0005 }, //0x0000D0
    { ACTOR_FIELD_KEEP, -4239, 164, 3872, 0, 0, 0, 0x0005 }, //0x0000E0
    { ACTOR_FIELD_KEEP, -4105, 184, 3605, 0, 0, 0, 0x0005 }, //0x0000F0
    { ACTOR_FIELD_KEEP, -3626, 202, 4032, 0, 0, 0, 0x0005 }, //0x000100
    { ACTOR_FIELD_KEEP, -3439, 225, 3712, 0, 0, 0, 0x0005 }, //0x000110
    { ACTOR_FIELD_KEEP, -2799, 242, 4218, 0, 0, 0, 0x0005 }, //0x000120
    { ACTOR_FIELD_KEEP, -2640, 281, 3899, 0, 0, 0, 0x0005 }, //0x000130
    { ACTOR_FIELD_KEEP, -1947, 285, 4485, 0, 0, 0, 0x0005 }, //0x000140
    { ACTOR_FIELD_KEEP, -1733, 320, 4218, 0, 0, 0, 0x0005 }, //0x000150
    { ACTOR_FIELD_KEEP, -1067, 274, 4831, 0, 0, 0, 0x0005 }, //0x000160
    { ACTOR_FIELD_KEEP, -934, 299, 4565, 0, 0, 0, 0x0005 }, //0x000170
    { ACTOR_FIELD_KEEP, -427, 238, 5151, 0, 0, 0, 0x0005 }, //0x000180
    { ACTOR_FIELD_KEEP, -214, 236, 4858, 0, 0, 0, 0x0005 }, //0x000190
    { ACTOR_FIELD_KEEP, 612, 120, 5258, 0, -16384, 0, 0xFF08 }, //0x0001A0
    { ACTOR_EN_NIW, 633, 121, 4850, 0, 0, 0, 0xFFFF }, //0x0001B0
	{ ACTOR_EN_NIW, 530, 120, 4923, 0, 0, 0, 0xFFFF }, //0x0001C0
	{ ACTOR_EN_NIW, 589, 120, 5026, 0, 0, 0, 0xFFFF }, //0x0001D0
	{ ACTOR_EN_GIRLA, 626, 120, 4923, 0, -16384, 0, 0xFFFF }, //0x0001E0
	{ ACTOR_EN_JJ, 1610, 84, 3469, 0, -5461, 0, 0xFFFF }, //0x0001F0
}; 

MeshHeader2 old_lake_hylia_room_00MeshHeader0x000200 = { { 2 }, 0x09, (u32)&old_lake_hylia_room_00MeshDListEntry0x00020C, (u32)&(old_lake_hylia_room_00MeshDListEntry0x00020C) + sizeof(old_lake_hylia_room_00MeshDListEntry0x00020C) }; 

MeshEntry2 old_lake_hylia_room_00MeshDListEntry0x00020C[9] = {
	{ -184, -400, 2530, 11345, (u32)old_lake_hylia_room_00Dlist0x000DD0, 0 },
	{ -184, 967, 3227, 11560, (u32)old_lake_hylia_room_00Dlist0x003328, 0 },
	{ -3780, 638, -1239, 6174, (u32)old_lake_hylia_room_00Dlist0x006FF0, 0 },
	{ 909, 273, 5098, 349, (u32)old_lake_hylia_room_00Dlist0x00B218, 0 },
	{ 1419, -4, 3797, 431, (u32)old_lake_hylia_room_00Dlist0x00EC00, 0 },
	{ 2302, 18, 6322, 409, (u32)old_lake_hylia_room_00Dlist0x00F970, 0 },
	{ -184, -124, 2530, 11339, 0, (u32)old_lake_hylia_room_00Dlist0x013320 },
	{ 5600, 400, 3400, 7727, (u32)old_lake_hylia_room_00Dlist0x011B40, 0 },
	{ -4436, 89, 4112, 5400, (u32)old_lake_hylia_room_00Dlist0x0121D8, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx old_lake_hylia_room_00Vtx_0002A0[16] = {
    VTX(4037, -199, 1019, -14798, 26720, 126, 126, 126, 255),
    VTX(2047, -199, 1438, -13725, 21624, 126, 126, 126, 255),
    VTX(1964, -195, 2714, -10436, 21473, 126, 126, 126, 255),
    VTX(2776, -199, 293, -16657, 23491, 126, 126, 126, 255),
    VTX(3346, -199, -1278, -20680, 24951, 126, 126, 126, 255),
    VTX(5600, -399, -1199, -20479, 30720, 126, 126, 126, 255),
    VTX(5600, -599, 800, -15359, 30720, 126, 126, 126, 255),
    VTX(5600, -599, 2800, -10239, 30720, 126, 126, 126, 255),
    VTX(3794, -399, 2761, -10338, 26097, 126, 126, 126, 255),
    VTX(3600, -399, 4800, -5119, 25600, 126, 126, 126, 255),
    VTX(5600, -599, 4800, -5119, 30720, 126, 126, 126, 255),
    VTX(2409, -199, 3524, -8386, 22552, 126, 126, 126, 255),
    VTX(3011, -199, 5060, -4452, 24091, 126, 126, 126, 255),
    VTX(3379, -399, 5600, -3071, 25034, 126, 126, 126, 255),
    VTX(3889, -399, 6090, -1816, 26339, 126, 126, 126, 255),
    VTX(4479, -399, 5897, -2311, 27851, 126, 126, 126, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0003A0[9] = {
    VTX(5600, 0, -3199, -25599, 30720, 255, 255, 255, 255),
    VTX(3600, 0, -3199, -25599, 25600, 255, 255, 255, 255),
    VTX(2040, 0, -3199, -25599, 21606, 255, 255, 255, 255),
    VTX(1979, 0, -1418, -21041, 21451, 255, 255, 255, 255),
    VTX(1876, 0, -799, -19456, 21187, 255, 255, 255, 255),
    VTX(5600, -399, -1199, -8191, -4095, 126, 126, 126, 255),
    VTX(7600, -799, -1199, -8191, 1024, 126, 126, 126, 255),
    VTX(7600, -799, 800, -3071, 1024, 126, 126, 126, 255),
    VTX(5600, -599, 2800, 2048, -4095, 126, 126, 126, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000430[1] = {
    VTX(9600, 0, 800, -3071, 6144, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000440[1] = {
    VTX(7600, -799, 2800, 2048, 1024, 126, 126, 126, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000450[1] = {
    VTX(7600, 0, -3199, -13311, 1024, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000460[1] = {
    VTX(1444, 0, 3991, -7141, 20149, 255, 255, 255, 255),
}; 

static u8 unaccounted_000470[16] = {
    0x07, 0x36, 0x00, 0x00, 0x10, 0x9D, 0x00, 0x00, 0xE6, 0x88, 0x52, 0x76, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_000480[1] = {
    VTX(2357, 0, 4701, -5373, 22418, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000490[1] = {
    VTX(9600, 0, 2800, 2048, 6144, 255, 255, 255, 255),
}; 

static u8 unaccounted_0004A0[16] = {
    0x25, 0x80, 0x00, 0x00, 0x12, 0xC0, 0x00, 0x00, 0x1C, 0x00, 0x18, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_0004B0[2] = {
    VTX(7600, -599, 4800, 7168, 1024, 126, 126, 126, 255),
    VTX(5600, -599, 4800, 7168, -4095, 126, 126, 126, 255),
}; 

static u8 unaccounted_0004D0[32] = {
    0x21, 0x5F, 0xFE, 0x71, 0x1B, 0x5B, 0x00, 0x00, 0x32, 0x08, 0x0D, 0x6F, 0x7E, 0x7E, 0x7E, 0xFF, 
    0x1D, 0x80, 0xFE, 0x71, 0x1A, 0xA7, 0x00, 0x00, 0x30, 0x3A, 0x03, 0x85, 0x7E, 0x7E, 0x7E, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_0004F0[7] = {
    VTX(9261, -399, 7368, 13743, 5276, 126, 126, 126, 255),
    VTX(9600, 0, 6800, 12288, 6144, 255, 255, 255, 255),
    VTX(9335, 0, 7990, 15335, 5465, 255, 255, 255, 255),
    VTX(9600, 0, 8260, 16025, 6144, 255, 255, 255, 255),
    VTX(6853, -399, 6726, 12098, -887, 126, 126, 126, 255),
    VTX(6145, 0, 7034, 12888, -2700, 255, 255, 255, 255),
    VTX(5267, -399, 5809, -2535, 29867, 126, 126, 126, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000560[6] = {
    VTX(1964, -195, 2714, -10436, 21473, 126, 126, 126, 255),
    VTX(808, 0, 2303, -11512, 18453, 255, 255, 255, 255),
    VTX(844, 0, 3386, -8738, 18545, 255, 255, 255, 255),
    VTX(2619, 0, 5148, -4229, 23089, 255, 255, 255, 255),
    VTX(2708, 0, 5679, -2869, 23316, 255, 255, 255, 255),
    VTX(2931, -199, 5659, -2920, 23886, 126, 126, 126, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0005C0[1] = {
    VTX(744, 0, 1407, -13804, 18290, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0005D0[1] = {
    VTX(6193, -399, 6223, 10812, -2578, 126, 126, 126, 255),
}; 

static u8 unaccounted_0005E0[16] = {
    0x14, 0xD7, 0x00, 0x00, 0x18, 0xF6, 0x00, 0x00, 0x2B, 0xE7, 0xED, 0x5B, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_0005F0[26] = {
    VTX(-5834, -239, 6942, 363, 1446, 255, 255, 255, 255),
    VTX(-6564, -239, 6518, -722, -420, 255, 255, 255, 255),
    VTX(-6646, -269, 6654, -372, -632, 126, 126, 126, 255),
    VTX(-5908, -269, 7084, 727, 1256, 126, 126, 126, 255),
    VTX(-6057, -269, 7368, 1453, 876, 126, 126, 126, 255),
    VTX(-6812, -269, 6928, 328, -1056, 126, 126, 126, 255),
    VTX(-5564, -269, 7245, 1138, 2138, 126, 126, 126, 255),
    VTX(-5652, -269, 7557, 1937, 1913, 126, 126, 126, 255),
    VTX(-5520, -239, 7089, 739, 2251, 255, 255, 255, 255),
    VTX(-5147, -239, 7132, 849, 3206, 255, 255, 255, 255),
    VTX(-5158, -269, 7291, 1258, 3176, 126, 126, 126, 255),
    VTX(-5182, -269, 7611, 2075, 3116, 126, 126, 126, 255),
    VTX(-7186, -269, 6316, -1239, -2013, 126, 126, 126, 255),
    VTX(-9890, -269, 4996, -4619, -8936, 126, 126, 126, 255),
    VTX(-7356, -269, 6587, -545, -2449, 126, 126, 126, 255),
    VTX(-9737, -269, 4714, -5339, -8544, 126, 126, 126, 255),
    VTX(-7101, -239, 6180, -1586, -1795, 255, 255, 255, 255),
    VTX(-9660, -239, 4573, -5700, -8348, 255, 255, 255, 255),
    VTX(-4597, -269, 7629, 2122, 4614, 126, 126, 126, 255),
    VTX(-4621, -269, 7308, 1301, 4551, 126, 126, 126, 255),
    VTX(-3991, -269, 7191, 1001, 6164, 126, 126, 126, 255),
    VTX(-3936, -269, 7506, 1808, 6306, 126, 126, 126, 255),
    VTX(-4019, -239, 7033, 597, 6093, 255, 255, 255, 255),
    VTX(-4633, -239, 7148, 890, 4520, 255, 255, 255, 255),
    VTX(-3248, -269, 6970, 435, 8066, 126, 126, 126, 255),
    VTX(-3271, -239, 6812, 30, 8008, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000790[6] = {
    VTX(3473, -399, 6295, -1293, 25276, 126, 126, 126, 255),
    VTX(3156, -199, 6066, -1878, 24463, 126, 126, 126, 255),
    VTX(3925, 0, 6497, -776, 26431, 255, 255, 255, 255),
    VTX(4358, 0, 6373, -1091, 27542, 255, 255, 255, 255),
    VTX(2796, -23, 5801, -2557, 23542, 255, 255, 255, 255),
    VTX(2945, -23, 6066, -1879, 23923, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0007F0[35] = {
    VTX(1050, 0, 661, -15715, 19072, 255, 255, 255, 255),
    VTX(860, 0, 928, -15031, 18584, 255, 255, 255, 255),
    VTX(1542, 0, -349, -18302, 20332, 255, 255, 255, 255),
    VTX(1350, 0, 201, -16893, 19840, 255, 255, 255, 255),
    VTX(208, -239, 6965, 423, 16915, 255, 255, 255, 255),
    VTX(555, -239, 6965, 423, 17804, 255, 255, 255, 255),
    VTX(581, -269, 7125, 833, 17871, 126, 126, 126, 255),
    VTX(200, -269, 7125, 833, 16897, 126, 126, 126, 255),
    VTX(975, -269, 7015, 551, 18880, 126, 126, 126, 255),
    VTX(918, -239, 6866, 168, 18735, 255, 255, 255, 255),
    VTX(-3203, -269, 7287, 1246, 8182, 126, 126, 126, 255),
    VTX(-2634, -269, 7171, 950, 9638, 126, 126, 126, 255),
    VTX(-2655, -269, 6885, 218, 9586, 126, 126, 126, 255),
    VTX(-1963, -269, 7133, 853, 11355, 126, 126, 126, 255),
    VTX(-1951, -269, 6885, 218, 11388, 126, 126, 126, 255),
    VTX(-2666, -239, 6725, -190, 9557, 255, 255, 255, 255),
    VTX(-1941, -239, 6725, -190, 11414, 255, 255, 255, 255),
    VTX(-1281, -269, 6969, 433, 13102, 126, 126, 126, 255),
    VTX(-1311, -269, 7203, 1033, 13026, 126, 126, 126, 255),
    VTX(-679, -269, 7326, 1345, 14644, 126, 126, 126, 255),
    VTX(-649, -269, 7048, 635, 14720, 126, 126, 126, 255),
    VTX(-1261, -239, 6810, 26, 13153, 255, 255, 255, 255),
    VTX(186, -269, 7445, 1652, 16860, 126, 126, 126, 255),
    VTX(633, -269, 7445, 1652, 18003, 126, 126, 126, 255),
    VTX(1082, -269, 7296, 1269, 19153, 126, 126, 126, 255),
    VTX(1383, -239, 6644, -398, 19924, 255, 255, 255, 255),
    VTX(1462, -269, 6785, -39, 20126, 126, 126, 126, 255),
    VTX(1620, -269, 7065, 678, 20530, 126, 126, 126, 255),
    VTX(2167, -269, 6674, -321, 21931, 126, 126, 126, 255),
    VTX(1983, -269, 6412, -992, 21461, 126, 126, 126, 255),
    VTX(1892, -239, 6281, -1328, 21227, 255, 255, 255, 255),
    VTX(2760, -265, 6159, -1639, 23450, 126, 126, 126, 255),
    VTX(2601, -192, 5733, -2730, 23042, 255, 255, 255, 255),
    VTX(2671, -214, 5864, -2395, 23222, 255, 255, 255, 255),
    VTX(-632, -239, 6889, 228, 14764, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000A20[2] = {
    VTX(2055, 0, -2277, -23239, 21644, 255, 255, 255, 255),
    VTX(9600, 0, -1199, -8191, 6144, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000A40[1] = {
    VTX(5600, -599, 800, -3071, -4095, 126, 126, 126, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000A50[1] = {
    VTX(9600, 0, -3199, -13311, 6144, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000A60[1] = {
    VTX(5600, 0, -3199, -13311, -4095, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000A70[1] = {
    VTX(5267, -399, 5809, 9752, -4948, 126, 126, 126, 255),
}; 

static u8 unaccounted_000A80[32] = {
    0x04, 0xEA, 0x00, 0x00, 0x0F, 0x11, 0x00, 0x00, 0xE2, 0x93, 0x4C, 0x93, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x02, 0xF8, 0x00, 0x00, 0x0A, 0xED, 0x00, 0x00, 0xD7, 0xF9, 0x47, 0x99, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_000AA0[5] = {
    VTX(7916, 0, 7417, 13866, 1834, 255, 255, 255, 255),
    VTX(7059, 0, 7334, 13656, -359, 255, 255, 255, 255),
    VTX(7479, 0, 7370, 13746, 715, 255, 255, 255, 255),
    VTX(8684, 0, 7657, 14483, 3799, 255, 255, 255, 255),
    VTX(8328, 0, 7546, 14197, 2887, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000AF0[3] = {
    VTX(9600, 0, 7516, 14121, 6144, 255, 255, 255, 255),
    VTX(8989, 0, 7837, 14942, 4579, 255, 255, 255, 255),
    VTX(6525, 0, 7256, 13456, -1728, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000B20[1] = {
    VTX(5725, 0, 6671, 11957, -3776, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000B30[1] = {
    VTX(4867, 0, 6293, -1297, 28844, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000B40[10] = {
    VTX(-6131, -239, 7510, 1817, 686, 255, 255, 255, 255),
    VTX(-5696, -239, 7713, 2336, 1800, 255, 255, 255, 255),
    VTX(-6895, -239, 7065, 679, -1268, 255, 255, 255, 255),
    VTX(-5193, -239, 7770, 2484, 3086, 255, 255, 255, 255),
    VTX(-4584, -239, 7790, 2533, 4645, 255, 255, 255, 255),
    VTX(-9967, -239, 5136, -4258, -9133, 255, 255, 255, 255),
    VTX(-7441, -239, 6722, -198, -2667, 255, 255, 255, 255),
    VTX(-3908, -239, 7664, 2211, 6377, 255, 255, 255, 255),
    VTX(-3203, -269, 7287, 1246, 8182, 126, 126, 126, 255),
    VTX(-3180, -239, 7445, 1652, 8240, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000BE0[2] = {
    VTX(-3180, -239, 7445, 1652, 8240, 255, 255, 255, 255),
    VTX(-2623, -239, 7331, 1360, 9667, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000C00[2] = {
    VTX(3005, 0, 6209, -1512, 24076, 255, 255, 255, 255),
    VTX(3445, 0, 6439, -924, 25204, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000C20[1] = {
    VTX(5335, 0, 6390, -1048, 30042, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000C30[1] = {
    VTX(-1973, -239, 7293, 1263, 11330, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000C40[4] = {
    VTX(179, -239, 7605, 2061, 16841, 255, 255, 255, 255),
    VTX(659, -239, 7605, 2061, 18070, 255, 255, 255, 255),
    VTX(1148, -239, 7470, 1714, 19322, 255, 255, 255, 255),
    VTX(1699, -239, 7205, 1037, 20732, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000C80[2] = {
    VTX(-1331, -239, 7362, 1439, 12975, 255, 255, 255, 255),
    VTX(-696, -239, 7485, 1753, 14600, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000CA0[7] = {
    VTX(2259, -239, 6805, 13, 22166, 255, 255, 255, 255),
    VTX(2826, -239, 6300, -1279, 23617, 255, 255, 255, 255),
    VTX(2760, -265, 6159, -1639, 23450, 126, 126, 126, 255),
    VTX(2601, -269, 5900, -2304, 23042, 126, 126, 126, 255),
    VTX(2507, -247, 5781, -2608, 22801, 255, 255, 255, 255),
    VTX(2899, -185, 6263, -1374, 23805, 255, 255, 255, 255),
    VTX(2815, -180, 6135, -1702, 23589, 255, 255, 255, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_000D10[12] = {
    VTX(2708, 0, 5679, 1143, 1848, 255, 255, 255, 255),
    VTX(2652, -64, 5707, 789, 1223, 255, 255, 255, 255),
    VTX(2796, -23, 5801, 1655, 1374, 255, 255, 255, 255),
    VTX(2723, -74, 5873, 1416, 737, 255, 255, 255, 255),
    VTX(2601, -192, 5733, 205, 107, 255, 255, 255, 255),
    VTX(2671, -214, 5864, 690, -387, 255, 255, 255, 255),
    VTX(2890, -84, 6094, 2489, 147, 255, 255, 255, 255),
    VTX(2945, -23, 6066, 2827, 738, 255, 255, 255, 255),
    VTX(2815, -180, 6135, 1988, -769, 255, 255, 255, 255),
    VTX(2899, -185, 6263, 2576, -1108, 255, 255, 255, 255),
    VTX(2950, -59, 6237, 3154, -2, 255, 255, 255, 255),
    VTX(3005, 0, 6209, 3486, 576, 255, 255, 255, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x000DD0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_sceneTex_005630, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsSP1Triangle(5, 4, 0, 0),
    gsSP1Triangle(0, 7, 6, 0),
    gsSP1Triangle(2, 8, 0, 0),
    gsSP1Triangle(8, 7, 0, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(9, 10, 7, 0),
    gsSP1Triangle(8, 2, 11, 0),
    gsSP1Triangle(8, 11, 9, 0),
    gsSP1Triangle(11, 12, 9, 0),
    gsSP1Triangle(13, 14, 9, 0),
    gsSP1Triangle(9, 14, 15, 0),
    gsSP1Triangle(9, 12, 13, 0),
    gsSP1Triangle(15, 10, 9, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[3], 3, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0003A0[0], 9, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000440[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000490[0], 1, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000A20[0], 2, 14),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(2, 4, 1, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(5, 14, 1, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(7, 0, 1, 0),
    gsSP1Triangle(6, 1, 14, 0),
    gsSP1Triangle(8, 10, 9, 0),
    gsSP1Triangle(9, 10, 15, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(11, 12, 10, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[11], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0003A0[5], 4, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000440[0], 5, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0004B0[0], 2, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000560[0], 1, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000A40[0], 1, 14),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000A60[0], 1, 15),
    gsSP1Triangle(4, 14, 5, 0),
    gsSP1Triangle(2, 14, 4, 0),
    gsSP1Triangle(6, 5, 11, 0),
    gsSP1Triangle(5, 12, 11, 0),
    gsSP1Triangle(7, 2, 3, 0),
    gsSP1Triangle(7, 15, 2, 0),
    gsSP1Triangle(8, 9, 0, 0),
    gsSP1Triangle(8, 0, 13, 0),
    gsSP1Triangle(9, 10, 0, 0),
    gsSP1Triangle(10, 1, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000440[0], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000490[0], 8, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0004F0[4], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005D0[0], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000AA0[0], 5, 11),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(1, 0, 3, 0),
    gsSP1Triangle(2, 3, 8, 0),
    gsSP1Triangle(3, 5, 8, 0),
    gsSP1Triangle(3, 6, 5, 0),
    gsSP1Triangle(3, 9, 6, 0),
    gsSP1Triangle(4, 10, 3, 0),
    gsSP1Triangle(3, 10, 9, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(6, 13, 11, 0),
    gsSP1Triangle(6, 9, 12, 0),
    gsSP1Triangle(7, 5, 14, 0),
    gsSP1Triangle(5, 15, 14, 0),
    gsSP1Triangle(5, 11, 15, 0),
    gsSP1Triangle(8, 5, 7, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[10], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[15], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0004F0[0], 7, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005D0[0], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000AA0[1], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000AA0[3], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000AF0[0], 3, 12),
    gsSP1Triangle(3, 2, 12, 0),
    gsSP1Triangle(2, 11, 13, 0),
    gsSP1Triangle(4, 12, 2, 0),
    gsSP1Triangle(2, 13, 4, 0),
    gsSP1Triangle(5, 12, 4, 0),
    gsSP1Triangle(6, 14, 10, 0),
    gsSP1Triangle(6, 7, 14, 0),
    gsSP1Triangle(7, 6, 9, 0),
    gsSP1Triangle(0, 1, 8, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[1], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[12], 2, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000460[0], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000480[0], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0004B0[1], 1, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000560[0], 6, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005D0[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000A70[0], 3, 13),
    gsSP1Triangle(5, 13, 12, 0),
    gsSP1Triangle(6, 14, 3, 0),
    gsSP1Triangle(7, 6, 0, 0),
    gsSP1Triangle(8, 14, 6, 0),
    gsSP1Triangle(6, 15, 8, 0),
    gsSP1Triangle(7, 15, 6, 0),
    gsSP1Triangle(9, 1, 4, 0),
    gsSP1Triangle(10, 11, 1, 0),
    gsSP1Triangle(10, 1, 9, 0),
    gsSP1Triangle(1, 11, 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0003A0[6], 2, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000430[0], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000450[0], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000490[0], 1, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0004F0[5], 1, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000560[1], 1, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005C0[0], 3, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000A20[1], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000A50[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000A70[0], 1, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000B20[0], 1, 14),
    gsSP1Triangle(8, 7, 0, 0),
    gsSP1Triangle(4, 1, 12, 0),
    gsSP1Triangle(1, 11, 12, 0),
    gsSP1Triangle(3, 11, 2, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(9, 10, 14, 0),
    gsSP1Triangle(10, 9, 13, 0),
    gsSP1Triangle(9, 14, 6, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[0], 9, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[10], 2, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000B40[0], 4, 11),
    gsSP1Triangle(0, 3, 6, 0),
    gsSP1Triangle(0, 6, 8, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSP1Triangle(2, 5, 4, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsSP1Triangle(3, 4, 7, 0),
    gsSP1Triangle(3, 7, 6, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 7, 0),
    gsSP1Triangle(5, 13, 11, 0),
    gsSP1Triangle(5, 11, 4, 0),
    gsSP1Triangle(6, 7, 10, 0),
    gsSP1Triangle(6, 10, 9, 0),
    gsSP1Triangle(7, 12, 14, 0),
    gsSP1Triangle(7, 14, 10, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[2], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[5], 2, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[8], 7, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[18], 2, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[23], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000B40[3], 3, 13),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(3, 5, 4, 0),
    gsSP1Triangle(4, 5, 11, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(5, 6, 10, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(6, 13, 14, 0),
    gsSP1Triangle(6, 14, 10, 0),
    gsSP1Triangle(7, 9, 1, 0),
    gsSP1Triangle(7, 1, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[1], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[5], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[12], 7, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[21], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000B40[2], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000B40[4], 4, 12),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(4, 14, 5, 0),
    gsSP1Triangle(5, 14, 11, 0),
    gsSP1Triangle(5, 11, 2, 0),
    gsSP1Triangle(7, 3, 1, 0),
    gsSP1Triangle(7, 1, 0, 0),
    gsSP1Triangle(8, 6, 3, 0),
    gsSP1Triangle(8, 3, 7, 0),
    gsSP1Triangle(6, 4, 5, 0),
    gsSP1Triangle(6, 5, 3, 0),
    gsSP1Triangle(9, 12, 15, 0),
    gsSP1Triangle(9, 15, 10, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005F0[18], 8, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[10], 3, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[15], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000B40[7], 3, 12),
    gsSP1Triangle(1, 0, 3, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(2, 3, 13, 0),
    gsSP1Triangle(2, 13, 6, 0),
    gsSP1Triangle(3, 12, 14, 0),
    gsSP1Triangle(3, 14, 13, 0),
    gsSP1Triangle(4, 2, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(5, 1, 2, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSP1Triangle(7, 6, 10, 0),
    gsSP1Triangle(7, 10, 11, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[13], 3, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0004F0[6], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000560[4], 2, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000790[0], 6, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000B30[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000C00[0], 2, 13),
    gsSP1Triangle(0, 5, 7, 0),
    gsSP1Triangle(0, 6, 1, 0),
    gsSP1Triangle(0, 7, 6, 0),
    gsSP1Triangle(7, 13, 14, 0),
    gsSP1Triangle(7, 14, 6, 0),
    gsSP1Triangle(8, 6, 14, 0),
    gsSP1Triangle(8, 1, 6, 0),
    gsSP1Triangle(8, 9, 1, 0),
    gsSP1Triangle(2, 1, 9, 0),
    gsSP1Triangle(10, 11, 7, 0),
    gsSP1Triangle(10, 7, 5, 0),
    gsSP1Triangle(11, 13, 7, 0),
    gsSP1Triangle(4, 10, 5, 0),
    gsSP1Triangle(3, 2, 12, 0),
    gsSP1Triangle(2, 9, 12, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[1], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0002A0[3], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0003A0[4], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0004F0[6], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0005C0[0], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[0], 9, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000B30[0], 1, 14),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000C20[0], 1, 15),
    gsSP1Triangle(3, 14, 15, 0),
    gsSP1Triangle(0, 1, 5, 0),
    gsSP1Triangle(5, 6, 0, 0),
    gsSP1Triangle(0, 6, 4, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 5, 0),
    gsSP1Triangle(1, 2, 7, 0),
    gsSP1Triangle(9, 12, 11, 0),
    gsSP1Triangle(9, 11, 10, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[5], 7, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[22], 6, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000BE0[0], 2, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000C30[0], 1, 15),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 3, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(2, 8, 1, 0),
    gsSP1Triangle(0, 1, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(3, 9, 12, 0),
    gsSP1Triangle(3, 12, 11, 0),
    gsSP1Triangle(4, 3, 11, 0),
    gsSP1Triangle(4, 11, 10, 0),
    gsSP1Triangle(5, 13, 14, 0),
    gsSP1Triangle(5, 14, 6, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[11], 11, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000BE0[1], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000C30[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000C80[0], 2, 13),
    gsSP1Triangle(0, 11, 12, 0),
    gsSP1Triangle(0, 12, 2, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP1Triangle(2, 13, 7, 0),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(3, 7, 6, 0),
    gsSP1Triangle(4, 1, 3, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(5, 3, 6, 0),
    gsSP1Triangle(5, 6, 10, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(7, 13, 14, 0),
    gsSP1Triangle(7, 14, 8, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[7], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[17], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[19], 6, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[27], 1, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[34], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000C40[0], 4, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000C80[1], 1, 14),
    gsSP1Triangle(2, 14, 10, 0),
    gsSP1Triangle(2, 10, 5, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(3, 5, 0, 0),
    gsSP1Triangle(4, 1, 3, 0),
    gsSP1Triangle(4, 3, 9, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(5, 11, 6, 0),
    gsSP1Triangle(6, 11, 12, 0),
    gsSP1Triangle(6, 12, 7, 0),
    gsSP1Triangle(7, 12, 13, 0),
    gsSP1Triangle(7, 13, 8, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[25], 7, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000C40[3], 1, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000CA0[0], 7, 8),
    gsSP1Triangle(0, 1, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(2, 8, 3, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(4, 3, 10, 0),
    gsSP1Triangle(4, 10, 11, 0),
    gsSP1Triangle(5, 4, 11, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(6, 9, 13, 0),
    gsSP1Triangle(6, 13, 14, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[4], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[7], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[20], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0007F0[31], 4, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000CA0[3], 2, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000CA0[6], 1, 9),
    gsSP1Triangle(4, 8, 7, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(5, 7, 3, 0),
    gsSP1Triangle(5, 3, 9, 0),
    gsSP1Triangle(6, 2, 1, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_sceneTex_004E30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_000D10[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 3, 0),
    gsSP1Triangle(6, 7, 2, 0),
    gsSP1Triangle(6, 2, 3, 0),
    gsSP1Triangle(8, 9, 6, 0),
    gsSP1Triangle(9, 10, 6, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(6, 11, 7, 0),
    gsSP1Triangle(6, 3, 5, 0),
    gsSP1Triangle(8, 6, 5, 0),
    gsSPEndDisplayList(),
}; 

static Vtx old_lake_hylia_room_00Vtx_001908[16] = {
    VTX(-5147, -239, 7132, 26462, 4735, 0, 126, 7, 255),
    VTX(-4633, -239, 7148, 26554, 7655, 0, 126, 6, 255),
    VTX(-5150, -199, 6400, 22302, 4717, 254, 126, 10, 255),
    VTX(-3199, 235, 4005, 6820, 15815, 250, 125, 14, 255),
    VTX(-5150, -15, 5093, 13935, 4717, 251, 125, 15, 255),
    VTX(-7101, -239, 6180, 21050, -6380, 251, 126, 12, 255),
    VTX(-6564, -239, 6518, 22969, -3325, 254, 126, 5, 255),
    VTX(-5834, -239, 6942, 25383, 823, 254, 126, 6, 255),
    VTX(-5520, -239, 7089, 26218, 2613, 255, 126, 6, 255),
    VTX(-4019, -239, 7033, 25903, 11152, 4, 124, 25, 255),
    VTX(-3199, -159, 6620, 23554, 15815, 2, 121, 36, 255),
    VTX(-7101, -239, 6180, 21050, -6380, 251, 126, 12, 255),
    VTX(-949, 480, 2070, -8475, -1078, 25, 124, 1, 255),
    VTX(-2074, 484, 2635, -5261, -7479, 252, 126, 6, 255),
    VTX(-2001, 440, 3514, -264, -7066, 250, 125, 19, 255),
    VTX(-804, 441, 3827, 1519, -253, 13, 125, 10, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001A08[3] = {
    VTX(-1871, 451, 941, -14900, -6327, 0, 126, 252, 255),
    VTX(-806, 412, 332, -18363, -264, 10, 126, 251, 255),
    VTX(415, 120, 725, -16126, 6682, 27, 123, 6, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001A38[10] = {
    VTX(387, 120, 3581, 117, 6524, 25, 124, 252, 255),
    VTX(260, 120, 1367, -12472, 5805, 29, 123, 3, 255),
    VTX(327, 120, 2296, -7188, 6181, 28, 123, 0, 255),
    VTX(276, 120, 2808, -4280, 5895, 29, 123, 0, 255),
    VTX(615, 80, 3483, -434, 7825, 27, 123, 245, 255),
    VTX(518, 80, 2802, -4310, 7270, 30, 123, 0, 255),
    VTX(252, 161, 4227, 3794, 5755, 17, 125, 0, 255),
    VTX(567, 80, 2300, -7169, 7551, 30, 123, 0, 255),
    VTX(502, 80, 1387, -12359, 7182, 30, 123, 2, 255),
    VTX(1140, 120, 4642, 6158, 10809, 2, 126, 2, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001AD8[18] = {
    VTX(-1614, 320, 4281, 5452, -4182, 245, 124, 22, 255),
    VTX(-467, 277, 4804, 7633, 1666, 10, 125, 13, 255),
    VTX(-3199, 235, 3807, 676, -13880, 246, 125, 15, 255),
    VTX(594, 109, 5679, 11205, 8461, 0, 125, 18, 255),
    VTX(890, -69, 6550, 17012, 9384, 10, 118, 44, 255),
    VTX(376, 109, 5484, 10096, 7216, 1, 126, 15, 255),
    VTX(-1494, -159, 6541, 16960, -4182, 254, 120, 40, 255),
    VTX(-465, 277, 4999, 7633, 1666, 253, 123, 28, 255),
    VTX(637, 80, 827, -15549, 7948, 27, 123, 12, 255),
    VTX(1096, 80, 4041, 2735, 10561, 20, 123, 235, 255),
    VTX(1295, 120, 4471, 5185, 11691, 5, 126, 250, 255),
    VTX(1553, 120, 4634, 6111, 13159, 7, 126, 251, 255),
    VTX(1343, 80, 4213, 3717, 11964, 17, 123, 232, 255),
    VTX(1700, 80, 4443, 5026, 13992, 20, 123, 234, 255),
    VTX(1315, 120, 5326, 10044, 11807, 3, 126, 3, 255),
    VTX(2170, 60, 4856, 7371, 16667, 24, 123, 242, 255),
    VTX(2160, 80, 5314, 9978, 16613, 12, 126, 4, 255),
    VTX(2390, 60, 5231, 9505, 17918, 24, 124, 254, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001BF8[6] = {
    VTX(799, 80, 599, -16844, 8871, 29, 122, 20, 255),
    VTX(-5150, -15, 5093, 13935, 4717, 251, 125, 15, 255),
    VTX(-6430, -15, 4289, 9364, -2562, 249, 126, 9, 255),
    VTX(-9660, -239, 4573, 11907, -20941, 249, 126, 9, 255),
    VTX(-1603, 320, 4477, 5452, -4182, 247, 124, 23, 255),
    VTX(-467, 277, 4804, 7633, 1666, 10, 125, 13, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001C58[1] = {
    VTX(2242, 43, 5802, 12756, 17076, 17, 123, 23, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001C68[10] = {
    VTX(-1769, 371, 83, -19780, -5743, 1, 126, 249, 255),
    VTX(-3199, 451, 1600, -11149, -13880, 249, 126, 4, 255),
    VTX(-6399, 214, -1492, -22599, -2388, 249, 126, 0, 255),
    VTX(-3199, 451, 1600, -5005, 15815, 249, 126, 4, 255),
    VTX(-9599, -3, -2959, -30944, -20593, 247, 126, 2, 255),
    VTX(-6399, 46, 3176, 5458, -2388, 247, 126, 7, 255),
    VTX(-9599, -142, 2545, 4096, -20593, 248, 126, 3, 255),
    VTX(-9599, -142, 2745, 4096, -20593, 249, 126, 4, 255),
    VTX(-3199, 431, -25, -14254, 15815, 255, 126, 253, 255),
    VTX(-6399, 206, -1731, -23963, -2388, 249, 126, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001D08[1] = {
    VTX(935, 120, 4224, 3779, 9645, 9, 126, 249, 255),
}; 

static u8 unaccounted_001D18[16] = {
    0x02, 0x02, 0x00, 0x78, 0x12, 0xFC, 0x00, 0x00, 0x1C, 0xE4, 0x1C, 0x4E, 0x09, 0x7E, 0x04, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_001D28[1] = {
    VTX(730, 145, 4644, 6167, 8475, 1, 126, 9, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001D38[7] = {
    VTX(508, 120, 5335, 10096, 7216, 4, 126, 7, 255),
    VTX(514, 120, 4860, 7396, 7246, 9, 126, 4, 255),
    VTX(-457, 62, 5899, 13309, 1719, 252, 124, 26, 255),
    VTX(1111, 120, 5530, 11205, 10646, 4, 126, 10, 255),
    VTX(727, 120, 5530, 11205, 9553, 1, 126, 6, 255),
    VTX(-278, -159, 6738, 18078, 2735, 253, 120, 40, 255),
    VTX(342, -126, 6668, 17681, 6270, 254, 120, 39, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001DA8[1] = {
    VTX(1904, 36, 6098, 14436, 15156, 19, 117, 45, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001DB8[1] = {
    VTX(1356, 120, 4791, 7001, 12036, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001DC8[2] = {
    VTX(-3199, -159, 6620, 17410, -13880, 2, 121, 36, 255),
    VTX(-3199, 235, 4005, 676, -13880, 250, 125, 14, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001DE8[2] = {
    VTX(1982, 100, 5011, 8252, 15600, 13, 126, 254, 255),
    VTX(2467, 40, 5695, 12146, 18359, 22, 123, 20, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001E08[1] = {
    VTX(1111, 120, 5530, 11205, 10646, 4, 126, 10, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001E18[3] = {
    VTX(-6430, -15, 4289, 9364, -2562, 249, 126, 9, 255),
    VTX(-6402, 27, 3375, 5458, -2388, 249, 126, 6, 255),
    VTX(252, 161, 4227, 3794, 5755, 17, 125, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001E48[8] = {
    VTX(-3199, 411, -264, -21759, -13880, 0, 126, 250, 255),
    VTX(-3199, 431, -25, -20398, -13880, 255, 126, 253, 255),
    VTX(-6399, 223, -679, -17975, -2388, 247, 126, 2, 255),
    VTX(-3199, 411, -264, -15615, 15815, 0, 126, 250, 255),
    VTX(-3199, 235, 3807, 6820, 15815, 246, 125, 15, 255),
    VTX(-6399, 214, -1492, -18769, 6713, 249, 126, 0, 255),
    VTX(-9599, 2, -3199, -32312, -20593, 247, 126, 3, 255),
    VTX(-9599, -3, -2959, -23283, -2388, 247, 126, 2, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001EC8[16] = {
    VTX(1904, 36, 6098, 118, 1791, 19, 117, 45, 255),
    VTX(1942, -37, 6198, 763, 1509, 53, 80, 82, 255),
    VTX(2051, 16, 6038, 443, 2358, 39, 104, 61, 255),
    VTX(2080, 0, 6047, 612, 2394, 45, 99, 65, 255),
    VTX(2029, 36, 6017, 255, 2381, 23, 119, 37, 255),
    VTX(2097, 36, 5974, 332, 2700, 32, 118, 32, 255),
    VTX(2242, 43, 5802, 229, 3643, 17, 123, 23, 255),
    VTX(1383, -239, 6644, 1010, -1585, 37, 91, 80, 255),
    VTX(-278, -159, 6738, 176, 8476, 253, 120, 40, 255),
    VTX(-1261, -239, 6810, 1024, 3542, 251, 119, 43, 255),
    VTX(-632, -239, 6889, 1024, 6822, 252, 116, 49, 255),
    VTX(-1494, -159, 6541, 5, 2096, 254, 120, 40, 255),
    VTX(-1941, -239, 6725, 1024, 0, 254, 118, 45, 255),
    VTX(2490, 21, 5747, 776, 1381, 43, 69, 97, 255),
    VTX(2242, 43, 5802, 133, 51, 17, 123, 23, 255),
    VTX(2336, -1, 5862, 924, 168, 59, 81, 78, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_001FC8[6] = {
    VTX(2467, 40, 5695, 355, 1527, 22, 123, 20, 255),
    VTX(208, -239, 6965, 974, 487, 255, 118, 47, 255),
    VTX(342, -126, 6668, 87, 1242, 254, 120, 39, 255),
    VTX(-3199, -159, 6620, 0, 0, 2, 121, 36, 255),
    VTX(-2666, -239, 6725, 755, 2630, 3, 113, 56, 255),
    VTX(2490, 21, 5747, 758, -69, 43, 69, 97, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002028[8] = {
    VTX(2336, -1, 5862, 837, 3669, 59, 81, 78, 255),
    VTX(890, -69, 6550, 101, -642, 10, 118, 44, 255),
    VTX(-632, -239, 6889, 1041, -934, 252, 116, 49, 255),
    VTX(555, -239, 6965, 991, -679, 5, 116, 50, 255),
    VTX(918, -239, 6866, 1029, 578, 22, 111, 58, 255),
    VTX(727, 120, 4858, 1024, 0, 0, 126, 10, 255),
    VTX(1258, 0, 3857, 1024, 1024, 27, 120, 228, 255),
    VTX(760, 0, 2797, 1024, 2062, 40, 120, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0020A8[4] = {
    VTX(808, 0, 2303, 1024, 2011, 40, 120, 1, 255),
    VTX(860, 0, 928, 1024, 2123, 36, 120, 16, 255),
    VTX(1050, 0, 661, 1024, 1389, 33, 120, 22, 255),
    VTX(1444, 0, 3991, 1024, 1368, 22, 120, 224, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0020E8[4] = {
    VTX(1111, 120, 5338, 1024, 2048, 0, 127, 0, 255),
    VTX(727, 120, 5338, 1024, 0, 0, 127, 0, 255),
    VTX(727, 120, 4858, 1024, 2048, 0, 126, 10, 255),
    VTX(2619, 0, 5148, 1024, 0, 29, 123, 249, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002128[4] = {
    VTX(2357, 0, 4701, 1024, 1992, 28, 121, 235, 255),
    VTX(844, 0, 3386, 1024, 1024, 35, 120, 241, 255),
    VTX(2055, 0, -2277, 1024, 3309, 40, 120, 1, 255),
    VTX(1800, 80, -3203, 0, 4189, 40, 120, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002168[4] = {
    VTX(744, 0, 1407, 1024, 4919, 39, 120, 3, 255),
    VTX(1846, 0, 4253, 1024, 2622, 25, 120, 226, 255),
    VTX(-3199, -159, 6620, 0, -849, 2, 121, 36, 255),
    VTX(1350, 0, 201, 1024, 2129, 35, 120, 19, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0021A8[3] = {
    VTX(1542, 0, -349, 1024, 2568, 35, 120, 19, 255),
    VTX(1979, 0, -1418, 1024, 2513, 40, 120, 5, 255),
    VTX(1876, 0, -799, 1024, 2346, 36, 120, 15, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0021D8[7] = {
    VTX(-278, -159, 6738, 172, -714, 253, 120, 40, 255),
    VTX(555, -239, 6965, 1051, 1533, 5, 116, 50, 255),
    VTX(-3271, -239, 6812, 1024, 0, 12, 115, 52, 255),
    VTX(-1494, -159, 6541, 0, 7644, 254, 120, 40, 255),
    VTX(-1941, -239, 6725, 911, 5930, 254, 118, 45, 255),
    VTX(2708, 0, 5679, 821, 1310, 37, 104, 62, 255),
    VTX(2467, 40, 5695, 344, -105, 22, 123, 20, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002248[8] = {
    VTX(2109, 16, 6000, 510, 2634, 50, 102, 56, 255),
    VTX(2108, 0, 6029, 644, 2524, 48, 98, 65, 255),
    VTX(1383, -239, 6644, 1022, 363, 37, 91, 80, 255),
    VTX(1904, 36, 6098, 119, 3989, 19, 117, 45, 255),
    VTX(208, -239, 6965, 994, 1611, 255, 118, 47, 255),
    VTX(-278, -159, 6738, 185, 0, 253, 120, 40, 255),
    VTX(890, -69, 6550, 206, 909, 10, 118, 44, 255),
    VTX(342, -126, 6668, 124, -974, 254, 120, 39, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0022C8[10] = {
    VTX(1383, -239, 6644, 878, 2289, 37, 91, 80, 255),
    VTX(1111, 120, 4858, 1024, 2048, 0, 126, 5, 255),
    VTX(1140, 120, 4642, 0, 2048, 2, 126, 2, 255),
    VTX(730, 145, 4644, 0, 0, 1, 126, 9, 255),
    VTX(1096, 80, 4041, -13, 1176, 20, 123, 235, 255),
    VTX(1343, 80, 4213, 0, 0, 17, 123, 232, 255),
    VTX(1444, 0, 3991, 1024, 0, 22, 120, 224, 255),
    VTX(518, 80, 2802, 0, 2383, 30, 123, 0, 255),
    VTX(615, 80, 3483, 0, 0, 27, 123, 245, 255),
    VTX(844, 0, 3386, 1024, 0, 35, 120, 241, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002368[12] = {
    VTX(567, 80, 2300, 0, 2046, 30, 123, 0, 255),
    VTX(518, 80, 2802, 0, 0, 30, 123, 0, 255),
    VTX(760, 0, 2797, 1024, 0, 40, 120, 0, 255),
    VTX(637, 80, 827, 0, 2484, 27, 123, 12, 255),
    VTX(502, 80, 1387, 0, 0, 30, 123, 2, 255),
    VTX(744, 0, 1407, 1024, 0, 39, 120, 3, 255),
    VTX(799, 80, 599, 0, 1183, 29, 122, 20, 255),
    VTX(637, 80, 827, 0, 0, 27, 123, 12, 255),
    VTX(860, 0, 928, 1024, 0, 36, 120, 16, 255),
    VTX(1343, 80, 4213, 0, 1298, 17, 123, 232, 255),
    VTX(1700, 80, 4443, 0, 0, 20, 123, 234, 255),
    VTX(1846, 0, 4253, 1024, 0, 25, 120, 226, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002428[12] = {
    VTX(1315, 120, 5326, 0, 2048, 3, 126, 3, 255),
    VTX(1356, 120, 4791, 0, 0, 0, 127, 0, 255),
    VTX(1111, 120, 4858, 1024, 0, 0, 126, 5, 255),
    VTX(727, 120, 5530, 0, 0, 1, 126, 6, 255),
    VTX(1111, 120, 5530, 0, 2048, 4, 126, 10, 255),
    VTX(1111, 120, 5338, 1024, 2048, 0, 127, 0, 255),
    VTX(514, 120, 4860, 0, 2048, 9, 126, 4, 255),
    VTX(508, 120, 5335, 0, 0, 4, 126, 7, 255),
    VTX(727, 120, 5338, 1024, 0, 0, 127, 0, 255),
    VTX(2390, 60, 5231, 0, 0, 24, 124, 254, 255),
    VTX(2467, 40, 5695, 20, 2550, 22, 123, 20, 255),
    VTX(2708, 0, 5679, 1024, 2913, 37, 104, 62, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0024E8[12] = {
    VTX(2170, 60, 4856, 0, 1673, 24, 123, 242, 255),
    VTX(2390, 60, 5231, 0, 0, 24, 124, 254, 255),
    VTX(2619, 0, 5148, 1024, 0, 29, 123, 249, 255),
    VTX(615, 80, 3483, 25, 1202, 27, 123, 245, 255),
    VTX(1096, 80, 4041, 0, 0, 20, 123, 235, 255),
    VTX(1258, 0, 3857, 1024, 0, 27, 120, 228, 255),
    VTX(1815, 80, -2286, 0, 3225, 40, 120, 1, 255),
    VTX(1741, 80, -1449, 0, 0, 40, 120, 5, 255),
    VTX(1979, 0, -1418, 1024, 0, 40, 120, 5, 255),
    VTX(1815, 80, -2286, 0, 0, 40, 120, 1, 255),
    VTX(2055, 0, -2277, 1024, 0, 40, 120, 1, 255),
    VTX(2040, 0, -3199, 1024, 4209, 40, 120, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0025A8[11] = {
    VTX(502, 80, 1387, 0, 5011, 30, 123, 2, 255),
    VTX(567, 80, 2300, 0, 0, 30, 123, 0, 255),
    VTX(808, 0, 2303, 1024, 0, 40, 120, 1, 255),
    VTX(1700, 80, 4443, -19, 2409, 20, 123, 234, 255),
    VTX(2170, 60, 4856, 0, 0, 24, 123, 242, 255),
    VTX(2357, 0, 4701, 1024, 0, 28, 121, 235, 255),
    VTX(-4019, -239, 7033, 0, 4180, 4, 124, 25, 255),
    VTX(-3271, -239, 6812, 1024, 0, 12, 115, 52, 255),
    VTX(799, 80, 599, 0, 0, 29, 122, 20, 255),
    VTX(1050, 0, 661, 1024, 0, 33, 120, 22, 255),
    VTX(1133, 80, 95, 15, 2339, 36, 120, 18, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002658[9] = {
    VTX(1327, 80, -462, 0, 2604, 35, 120, 19, 255),
    VTX(1133, 80, 95, 0, 0, 36, 120, 18, 255),
    VTX(1350, 0, 201, 1024, 0, 35, 120, 19, 255),
    VTX(1741, 80, -1449, 0, 2244, 40, 120, 5, 255),
    VTX(1649, 80, -896, 0, 0, 36, 120, 15, 255),
    VTX(1876, 0, -799, 1024, 0, 36, 120, 15, 255),
    VTX(1649, 80, -896, 0, 2257, 36, 120, 15, 255),
    VTX(1327, 80, -462, 0, 0, 35, 120, 19, 255),
    VTX(1542, 0, -349, 1024, 0, 35, 120, 19, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0026E8[12] = {
    VTX(1111, 120, 4858, 1024, 982, 0, 126, 5, 255),
    VTX(1356, 120, 4791, 0, 982, 0, 127, 0, 255),
    VTX(1140, 120, 4642, 1024, 0, 2, 126, 2, 255),
    VTX(1111, 120, 5530, 0, 1024, 4, 126, 10, 255),
    VTX(1315, 120, 5326, 1024, 0, 3, 126, 3, 255),
    VTX(1111, 120, 5338, 1024, 1024, 0, 127, 0, 255),
    VTX(727, 120, 5338, 1024, 1024, 0, 127, 0, 255),
    VTX(508, 120, 5335, 0, 1024, 4, 126, 7, 255),
    VTX(727, 120, 5530, 1024, 0, 1, 126, 6, 255),
    VTX(730, 145, 4644, 0, 1024, 1, 126, 9, 255),
    VTX(514, 120, 4860, 1024, 0, 9, 126, 4, 255),
    VTX(727, 120, 4858, 1024, 1024, 0, 126, 10, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0027A8[14] = {
    VTX(8650, 480, 8138, 2757, 4353, 0, 127, 0, 255),
    VTX(8650, 480, 7898, 1528, 4353, 0, 127, 0, 255),
    VTX(8256, 480, 7775, 895, 2335, 0, 127, 0, 255),
    VTX(8256, 480, 8015, 2124, 2335, 0, 127, 0, 255),
    VTX(7867, 480, 7653, 270, 343, 0, 127, 0, 255),
    VTX(7867, 480, 7893, 1498, 343, 0, 127, 0, 255),
    VTX(7457, 480, 7608, 43, -1757, 250, 126, 0, 255),
    VTX(7457, 480, 7848, 1272, -1757, 250, 126, 0, 255),
    VTX(9010, 480, 8316, 3667, 6197, 0, 127, 0, 255),
    VTX(9010, 480, 8076, 2438, 6197, 0, 127, 0, 255),
    VTX(7035, 431, 7555, -228, -3915, 244, 126, 0, 255),
    VTX(7035, 431, 7795, 1000, -3915, 244, 126, 0, 255),
    VTX(6466, 384, 7447, -785, -6832, 243, 126, 0, 255),
    VTX(6466, 384, 7687, 443, -6832, 243, 126, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002888[6] = {
    VTX(6466, 384, 7687, 4539, 6479, 243, 126, 0, 255),
    VTX(6005, 320, 7471, 3433, 4120, 248, 126, 0, 255),
    VTX(3056, 160, 6463, -1726, -10979, 212, 118, 255, 255),
    VTX(2836, 88, 6700, -510, -12105, 235, 124, 255, 255),
    VTX(2575, 36, 6617, -934, -13438, 243, 126, 255, 255),
    VTX(2266, 0, 6886, 438, -15022, 240, 125, 1, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0028E8[5] = {
    VTX(9600, 480, 8755, 5913, 9216, 0, 127, 0, 255),
    VTX(9326, 480, 8441, 4305, 7811, 0, 127, 0, 255),
    VTX(3411, 313, 6878, 401, -9159, 232, 124, 0, 255),
    VTX(3981, 313, 6948, 755, -6238, 0, 126, 0, 255),
    VTX(4410, 320, 6848, 247, -4043, 0, 126, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002938[9] = {
    VTX(5236, 320, 6855, 280, 185, 0, 127, 0, 255),
    VTX(5576, 320, 7099, 1532, 1923, 0, 127, 0, 255),
    VTX(6466, 384, 7447, 3310, 6479, 243, 126, 0, 255),
    VTX(6005, 320, 7231, 2204, 4120, 248, 126, 0, 255),
    VTX(5576, 320, 6859, 303, 1923, 0, 127, 0, 255),
    VTX(2882, 96, 6407, -2011, -11868, 225, 122, 255, 255),
    VTX(3056, 160, 6703, -497, -10979, 212, 118, 255, 255),
    VTX(2516, 36, 6671, -658, -13743, 247, 126, 0, 255),
    VTX(2571, 43, 6886, 442, -13457, 247, 126, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0029C8[1] = {
    VTX(5236, 320, 6615, -948, 185, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0029D8[7] = {
    VTX(9600, 480, 8515, 4684, 9216, 0, 127, 0, 255),
    VTX(9310, 480, 8192, 3029, 7733, 0, 127, 0, 255),
    VTX(3411, 313, 6638, -827, -9159, 232, 124, 0, 255),
    VTX(3981, 313, 6708, -473, -6238, 0, 126, 0, 255),
    VTX(4410, 320, 6608, -981, -4043, 0, 126, 0, 255),
    VTX(4862, 320, 6777, -117, -1732, 0, 127, 0, 255),
    VTX(4862, 320, 6537, -1346, -1732, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002A48[1] = {
    VTX(-9892, 240, 5414, 24474, 2265, 55, 75, 171, 255),
}; 

static u8 unaccounted_002A58[16] = {
    0xDA, 0x81, 0x03, 0x85, 0x1B, 0xC0, 0x00, 0x00, 0x5C, 0x62, 0x0E, 0x22, 0x19, 0x65, 0xB9, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_002A68[2] = {
    VTX(-6922, 240, 7323, 17421, 1727, 51, 74, 168, 255),
    VTX(-5776, 240, 7883, 14702, 1519, 27, 37, 139, 255),
}; 

static u8 unaccounted_002A88[48] = {
    0xE4, 0xA1, 0x03, 0xFA, 0x1E, 0x27, 0x00, 0x00, 0x44, 0x3F, 0x0D, 0x46, 0x0C, 0x53, 0xA2, 0xFF, 
    0xDA, 0x81, 0x05, 0x50, 0x25, 0x80, 0x00, 0x00, 0x5C, 0x08, 0x11, 0xF3, 0x00, 0x7C, 0xEA, 0xFF, 
    0xE7, 0x01, 0x05, 0x50, 0x25, 0x80, 0x00, 0x00, 0x3E, 0x5A, 0x0F, 0xAF, 0x00, 0x7C, 0xEA, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_002AB8[2] = {
    VTX(-3199, 1360, 9600, 8363, 3435, 0, 125, 235, 255),
    VTX(-4460, 1060, 7921, 11417, 3026, 4, 59, 145, 255),
}; 

static u8 unaccounted_002AD8[64] = {
    0x24, 0x77, 0x00, 0x00, 0x1F, 0x36, 0x00, 0x00, 0xAD, 0x72, 0xF9, 0x3E, 0x46, 0x2D, 0xA2, 0xFF, 
    0x24, 0x5E, 0x01, 0xE0, 0x20, 0x00, 0x00, 0x00, 0xAD, 0x4E, 0xFD, 0x40, 0x46, 0x2D, 0xA2, 0xFF, 
    0x25, 0x80, 0x01, 0xE0, 0x21, 0x43, 0x00, 0x00, 0xAA, 0x9E, 0xFD, 0x0C, 0x5A, 0x26, 0xB1, 0xFF, 
    0x25, 0x80, 0x00, 0x00, 0x20, 0x44, 0x00, 0x00, 0xAA, 0xFC, 0xF9, 0x0E, 0x5A, 0x26, 0xB1, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_002B18[2] = {
    VTX(8989, 0, 7837, -20312, -1667, 49, 53, 153, 255),
    VTX(9010, 480, 8076, -20457, -650, 49, 53, 153, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002B38[9] = {
    VTX(9326, 480, 8441, -21206, -707, 72, 34, 159, 255),
    VTX(9010, 480, 8316, -20457, -650, 45, 41, 146, 255),
    VTX(9600, 920, 8930, -21943, 179, 93, 37, 180, 255),
    VTX(9300, 920, 8566, -21231, 233, 68, 53, 164, 255),
    VTX(-4535, 240, 7965, 11755, 1294, 247, 27, 134, 255),
    VTX(-3908, -239, 7664, 10359, 159, 227, 37, 140, 255),
    VTX(-3199, 240, 7598, 8582, 1052, 243, 49, 141, 255),
    VTX(-3199, 1059, 7892, 8422, 2794, 253, 80, 159, 255),
    VTX(-5193, -239, 7770, 13412, 392, 8, 42, 138, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002BC8[4] = {
    VTX(-3180, -239, 7445, 8632, 27, 227, 36, 139, 255),
    VTX(-1973, -239, 7293, 5765, -191, 3, 62, 147, 255),
    VTX(3411, 313, 6878, -7129, 8, 38, 54, 149, 255),
    VTX(3981, 313, 6948, -8483, -94, 252, 67, 150, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002C08[1] = {
    VTX(4836, 1200, 8276, -10685, 1638, 9, 110, 195, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002C18[3] = {
    VTX(3963, 600, 7145, -8495, 520, 0, 98, 177, 255),
    VTX(4462, 600, 7003, -9680, 429, 239, 95, 175, 255),
    VTX(4410, 320, 6848, -9503, -156, 234, 66, 151, 255),
}; 

static u8 unaccounted_002C48[48] = {
    0x14, 0x74, 0x01, 0x40, 0x1A, 0xC7, 0x00, 0x00, 0xD3, 0x38, 0xFE, 0xCE, 0x2B, 0x42, 0x9E, 0xFF, 
    0x15, 0xC8, 0x01, 0x40, 0x1B, 0xBB, 0x00, 0x00, 0xD0, 0x12, 0xFE, 0x91, 0x42, 0x44, 0xAD, 0xFF, 
    0x15, 0x33, 0x02, 0x58, 0x1C, 0x28, 0x00, 0x00, 0xD1, 0x3D, 0x00, 0xFE, 0x35, 0x5E, 0xBF, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_002C78[1] = {
    VTX(6005, 320, 7471, -13289, -445, 53, 66, 163, 255),
}; 

static u8 unaccounted_002C88[32] = {
    0x12, 0xFE, 0x01, 0x40, 0x1A, 0x79, 0x00, 0x00, 0xD6, 0xB1, 0xFF, 0x12, 0x03, 0x40, 0x94, 0xFF, 
    0x14, 0x11, 0x02, 0x58, 0x1B, 0x57, 0x00, 0x00, 0xD3, 0xEC, 0x01, 0x33, 0x22, 0x5F, 0xB4, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_002CA8[4] = {
    VTX(3038, 463, 6818, -6273, 396, 6, 77, 157, 255),
    VTX(2277, 1200, 7965, -4609, 2102, 243, 102, 183, 255),
    VTX(2836, 88, 6700, -5719, -364, 217, 28, 140, 255),
    VTX(2760, 363, 6797, -5594, 233, 210, 58, 155, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002CE8[14] = {
    VTX(-5696, -239, 7713, 14605, 483, 32, 46, 144, 255),
    VTX(-6131, -239, 7510, 15638, 562, 53, 49, 153, 255),
    VTX(-9967, -239, 5136, 24746, 1257, 62, 48, 158, 255),
    VTX(-7441, -239, 6722, 18749, 799, 62, 52, 160, 255),
    VTX(-6895, -239, 7065, 17452, 700, 59, 56, 160, 255),
    VTX(7035, 431, 7795, -15758, -396, 11, 47, 140, 255),
    VTX(7457, 480, 7848, -16768, -368, 11, 43, 139, 255),
    VTX(7434, 920, 8007, -16800, 572, 7, 80, 159, 255),
    VTX(7818, 920, 8049, -17711, 502, 20, 81, 162, 255),
    VTX(8184, 920, 8164, -18582, 435, 29, 82, 165, 255),
    VTX(7867, 480, 7893, -17742, -442, 24, 44, 141, 255),
    VTX(-1121, 1108, 8231, 3478, 2522, 1, 91, 169, 255),
    VTX(-796, 240, 7659, 2875, 616, 4, 53, 142, 255),
    VTX(179, -239, 7605, 653, -581, 4, 21, 132, 255),
}; 

static u8 unaccounted_002DC8[16] = {
    0x00, 0xDE, 0x00, 0xF0, 0x1D, 0xD2, 0x00, 0x00, 0x01, 0xCA, 0x01, 0xB0, 0xF4, 0x14, 0x85, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_002DD8[6] = {
    VTX(5335, 0, 6390, -11636, -1005, 40, 77, 165, 255),
    VTX(5725, 0, 6671, -12562, -1075, 63, 76, 178, 255),
    VTX(6145, 0, 7034, -13559, -1152, 51, 76, 170, 255),
    VTX(4867, 0, 6293, -10526, -920, 2, 77, 156, 255),
    VTX(4358, 0, 6373, -9318, -828, 235, 74, 157, 255),
    VTX(6525, 0, 7256, -14461, -1220, 26, 66, 153, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002E38[6] = {
    VTX(8684, 0, 7657, -19589, -1612, 42, 56, 152, 255),
    VTX(8328, 0, 7546, -18743, -1547, 34, 57, 149, 255),
    VTX(7916, 0, 7417, -17766, -1473, 23, 57, 146, 255),
    VTX(7479, 0, 7370, -16728, -1393, 10, 57, 145, 255),
    VTX(7059, 0, 7334, -15731, -1317, 12, 58, 145, 255),
    VTX(3925, 0, 6497, -8287, -749, 249, 72, 153, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002E98[14] = {
    VTX(8650, 480, 8138, -19602, -584, 41, 44, 146, 255),
    VTX(9032, 920, 8476, -20595, 282, 40, 64, 156, 255),
    VTX(8256, 480, 8015, -18666, -513, 35, 44, 144, 255),
    VTX(7311, 1600, 9119, -16640, 2041, 7, 98, 178, 255),
    VTX(8617, 920, 8299, -19608, 357, 31, 80, 164, 255),
    VTX(6466, 384, 7687, -14396, -393, 23, 56, 146, 255),
    VTX(6385, 744, 7837, -14274, 386, 11, 88, 167, 255),
    VTX(3005, 0, 6209, -6104, -582, 230, 95, 178, 255),
    VTX(3056, 160, 6463, -6255, -251, 13, 95, 175, 255),
    VTX(3445, 0, 6439, -7149, -662, 24, 80, 162, 255),
    VTX(3005, 0, 6209, -6104, -582, 230, 95, 178, 255),
    VTX(2950, -59, 6237, -5962, -700, 160, 37, 184, 255),
    VTX(2826, -239, 6300, -5631, -1061, 177, 34, 165, 255),
    VTX(2899, -185, 6263, -5816, -959, 166, 35, 177, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_002F78[1] = {
    VTX(2273, 240, 6966, -4413, 60, 219, 54, 149, 255),
}; 

static u8 unaccounted_002F88[64] = {
    0x05, 0x98, 0x00, 0xF0, 0x1C, 0xA2, 0x00, 0x00, 0xF6, 0x90, 0x00, 0xD4, 0xDC, 0x1C, 0x8B, 0xFF, 
    0x02, 0x93, 0xFF, 0x11, 0x1D, 0xB5, 0x00, 0x00, 0xFE, 0x1B, 0xFD, 0x64, 0xEB, 0xF7, 0x85, 0xFF, 
    0x04, 0x7C, 0xFF, 0x11, 0x1D, 0x2E, 0x00, 0x00, 0xF9, 0x91, 0xFD, 0x0B, 0xD5, 0xF9, 0x8B, 0xFF, 
    0x09, 0xD4, 0x00, 0x24, 0x1A, 0x0F, 0x00, 0x00, 0xEC, 0xAB, 0xFE, 0x5F, 0xAF, 0x21, 0xA7, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_002FC8[4] = {
    VTX(2259, -239, 6805, -4285, -958, 178, 33, 164, 255),
    VTX(2571, 43, 6886, -5083, -413, 217, 28, 140, 255),
    VTX(3200, 2000, 9600, -6958, 3637, 255, 111, 197, 255),
    VTX(2552, 0, 6625, -5027, -501, 175, 31, 165, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_003008[1] = {
    VTX(9312, 1955, 9480, -21461, 2433, 7, 69, 151, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_003018[4] = {
    VTX(9600, 480, 8755, -21858, -756, 95, 28, 179, 255),
    VTX(9600, 1600, 9352, -22076, 1626, 37, 78, 165, 255),
    VTX(-4584, -239, 7790, 11966, 282, 248, 44, 139, 255),
    VTX(-3180, -239, 7445, 8632, 27, 227, 36, 139, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_003058[3] = {
    VTX(-2623, -239, 7331, 7308, -73, 241, 46, 140, 255),
    VTX(0, 1760, 9600, 687, 3706, 252, 118, 211, 255),
    VTX(3339, 593, 7031, -7012, 617, 23, 86, 167, 255),
}; 

static u8 unaccounted_003088[16] = {
    0x12, 0xF8, 0x02, 0x58, 0x1B, 0x1D, 0x00, 0x00, 0xD6, 0x88, 0x01, 0x66, 0x02, 0x5E, 0xAD, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_003098[1] = {
    VTX(397, 974, 7941, -102, 1961, 245, 82, 161, 255),
}; 

static u8 unaccounted_0030A8[16] = {
    0xFA, 0xCD, 0xFF, 0x11, 0x1C, 0xC2, 0x00, 0x00, 0x10, 0x90, 0xFE, 0xCD, 0x11, 0x33, 0x8F, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_0030B8[1] = {
    VTX(-696, -239, 7485, 2733, -422, 19, 46, 141, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0030C8[3] = {
    VTX(5864, 600, 7587, -13011, 175, 39, 90, 177, 255),
    VTX(3056, 160, 6703, -6255, -251, 26, 43, 141, 255),
    VTX(2477, 289, 6983, -4905, 127, 214, 57, 153, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0030F8[1] = {
    VTX(7008, 871, 7954, -15779, 544, 2, 82, 161, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_003108[3] = {
    VTX(2266, 0, 6886, -4349, -448, 202, 38, 149, 255),
    VTX(6400, 2160, 9600, -14587, 3397, 3, 95, 174, 255),
    VTX(8141, 2182, 9658, -18727, 3129, 2, 84, 163, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_003138[17] = {
    VTX(5236, 320, 6615, -11464, -306, 40, 77, 165, 255),
    VTX(5576, 320, 6859, -12270, -367, 63, 76, 178, 255),
    VTX(6005, 320, 7231, -13289, -445, 51, 76, 170, 255),
    VTX(6466, 384, 7447, -14396, -393, 26, 66, 153, 255),
    VTX(4862, 320, 6537, -10575, -238, 2, 77, 156, 255),
    VTX(4410, 320, 6608, -9503, -156, 235, 74, 157, 255),
    VTX(7035, 431, 7555, -15758, -396, 12, 58, 145, 255),
    VTX(7457, 480, 7608, -16768, -368, 10, 57, 145, 255),
    VTX(8650, 480, 7898, -19602, -584, 42, 56, 152, 255),
    VTX(8256, 480, 7775, -18666, -513, 34, 57, 149, 255),
    VTX(7867, 480, 7653, -17742, -442, 23, 57, 146, 255),
    VTX(3981, 313, 6708, -8483, -94, 249, 72, 153, 255),
    VTX(3411, 313, 6638, -7129, 8, 17, 69, 152, 255),
    VTX(2882, 96, 6407, -5830, -356, 179, 54, 174, 255),
    VTX(3056, 160, 6463, -6255, -251, 13, 95, 175, 255),
    VTX(2568, 16, 6617, -5069, -469, 176, 32, 165, 255),
    VTX(2575, 36, 6617, -5090, -428, 176, 32, 165, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_003248[3] = {
    VTX(1699, -239, 7205, -2955, -856, 198, 12, 146, 255),
    VTX(2516, 16, 6663, -4947, -459, 175, 33, 167, 255),
    VTX(2527, 0, 6647, -4970, -497, 175, 32, 166, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_003278[11] = {
    VTX(1942, -37, 6198, -1283, 1355, 53, 80, 82, 255),
    VTX(1892, -239, 6281, -2076, -506, 76, 22, 99, 255),
    VTX(2507, -247, 5781, 3566, -384, 67, 18, 106, 255),
    VTX(2336, -1, 5862, 2434, 1824, 59, 81, 78, 255),
    VTX(1383, -239, 6644, -6518, -606, 37, 91, 80, 255),
    VTX(1942, -37, 6198, -1283, 1355, 53, 80, 82, 255),
    VTX(2490, 21, 5747, 3812, 2057, 43, 69, 97, 255),
    VTX(2336, -1, 5862, 2434, 1824, 59, 81, 78, 255),
    VTX(2601, -192, 5733, 4336, 101, 42, 14, 119, 255),
    VTX(2652, -64, 5707, 4825, 1230, 37, 14, 120, 255),
    VTX(2708, 0, 5679, 5300, 1807, 37, 104, 62, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x003328[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_005EA0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(5, 6, 2, 0),
    gsSP1Triangle(6, 7, 2, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(2, 1, 9, 0),
    gsSP1Triangle(8, 0, 2, 0),
    gsSP1Triangle(9, 10, 2, 0),
    gsSP1Triangle(11, 2, 4, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[12], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[15], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A38[0], 9, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[1], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[9], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D08[0], 3, 13),
    gsSP1Triangle(2, 0, 1, 0),
    gsSP1Triangle(3, 0, 4, 0),
    gsSP1Triangle(0, 2, 5, 0),
    gsSP1Triangle(6, 2, 13, 0),
    gsSP1Triangle(6, 13, 12, 0),
    gsSP1Triangle(7, 5, 2, 0),
    gsSP1Triangle(7, 2, 6, 0),
    gsSP1Triangle(8, 13, 2, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(9, 4, 5, 0),
    gsSP1Triangle(9, 5, 7, 0),
    gsSP1Triangle(4, 0, 5, 0),
    gsSP1Triangle(10, 3, 4, 0),
    gsSP1Triangle(10, 4, 9, 0),
    gsSP1Triangle(8, 1, 11, 0),
    gsSP1Triangle(8, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[14], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[0], 6, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D38[0], 7, 8),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(4, 2, 0, 0),
    gsSP1Triangle(5, 7, 10, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 10, 13, 0),
    gsSP1Triangle(5, 13, 14, 0),
    gsSP1Triangle(6, 5, 14, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[12], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A08[2], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A38[1], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A38[8], 2, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[5], 6, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[12], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001BF8[4], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D08[0], 1, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D38[2], 1, 14),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D38[5], 1, 15),
    gsSP1Triangle(5, 7, 14, 0),
    gsSP1Triangle(6, 14, 12, 0),
    gsSP1Triangle(7, 12, 14, 0),
    gsSP1Triangle(6, 15, 14, 0),
    gsSP1Triangle(2, 1, 0, 0),
    gsSP1Triangle(8, 1, 2, 0),
    gsSP1Triangle(8, 2, 3, 0),
    gsSP1Triangle(9, 13, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(10, 13, 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A08[1], 2, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A38[9], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[10], 8, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001C58[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001DB8[0], 1, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001DE8[0], 2, 14),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(3, 13, 4, 0),
    gsSP1Triangle(5, 4, 13, 0),
    gsSP1Triangle(6, 4, 5, 0),
    gsSP1Triangle(6, 5, 7, 0),
    gsSP1Triangle(7, 5, 14, 0),
    gsSP1Triangle(7, 14, 9, 0),
    gsSP1Triangle(5, 13, 8, 0),
    gsSP1Triangle(8, 14, 5, 0),
    gsSP1Triangle(9, 14, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(10, 14, 8, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(11, 12, 15, 0),
    gsSP1Triangle(8, 12, 10, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[3], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[11], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A08[2], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[6], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[8], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001BF8[0], 6, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D38[1], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001DC8[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001E18[0], 3, 13),
    gsSP1Triangle(5, 2, 4, 0),
    gsSP1Triangle(6, 0, 13, 0),
    gsSP1Triangle(7, 0, 14, 0),
    gsSP1Triangle(1, 6, 13, 0),
    gsSP1Triangle(8, 1, 13, 0),
    gsSP1Triangle(9, 12, 3, 0),
    gsSP1Triangle(10, 11, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[13], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A38[6], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A38[9], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[2], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[4], 1, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[14], 1, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001BF8[4], 1, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001C58[0], 1, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D08[0], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D28[0], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001D38[3], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001DA8[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001DC8[0], 2, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001E08[0], 1, 15),
    gsSP1Triangle(8, 11, 12, 0),
    gsSP1Triangle(8, 6, 15, 0),
    gsSP1Triangle(5, 12, 11, 0),
    gsSP1Triangle(0, 4, 1, 0),
    gsSP1Triangle(3, 9, 2, 0),
    gsSP1Triangle(3, 2, 10, 0),
    gsSP1Triangle(7, 14, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001908[12], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001A08[0], 2, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001AD8[2], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001C68[0], 5, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001C68[8], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001E48[0], 3, 11),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(0, 3, 2, 0),
    gsSP1Triangle(3, 5, 2, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 6, 0),
    gsSP1Triangle(5, 6, 2, 0),
    gsSP1Triangle(6, 1, 2, 0),
    gsSP1Triangle(6, 4, 1, 0),
    gsSP1Triangle(7, 9, 13, 0),
    gsSP1Triangle(8, 10, 7, 0),
    gsSP1Triangle(8, 7, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001BF8[2], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001C68[3], 7, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001E18[1], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001E48[2], 4, 10),
    gsSP1Triangle(3, 5, 10, 0),
    gsSP1Triangle(4, 2, 10, 0),
    gsSP1Triangle(5, 4, 10, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsSP1Triangle(6, 0, 9, 0),
    gsSP1Triangle(4, 12, 2, 0),
    gsSP1Triangle(7, 11, 8, 0),
    gsSP1Triangle(7, 8, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001C68[9], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001E48[5], 3, 1),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_0056A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 0, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001EC8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(7, 1, 0, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(11, 9, 8, 0),
    gsSP1Triangle(12, 9, 11, 0),
    gsSP1Triangle(13, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001EC8[13], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001FC8[0], 6, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0021D8[0], 7, 8),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(3, 4, 8, 0),
    gsSP1Triangle(4, 3, 9, 0),
    gsSP1Triangle(5, 10, 6, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 12, 11, 0),
    gsSP1Triangle(7, 13, 14, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001EC8[1], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001EC8[3], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_001EC8[5], 2, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002028[0], 4, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002248[0], 8, 8),
    gsSP1Triangle(4, 3, 2, 0),
    gsSP1Triangle(4, 2, 8, 0),
    gsSP1Triangle(4, 9, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(7, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002028[3], 5, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002248[6], 1, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0022C8[0], 10, 6),
    gsSP1Triangle(1, 6, 5, 0),
    gsSP1Triangle(0, 1, 5, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(4, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0020A8[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002368[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0020E8[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002428[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002128[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0024E8[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002168[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0025A8[0], 11, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 14, 12, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0021A8[0], 3, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002658[0], 9, 3),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_004EA0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0026E8[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_sceneTex_005630, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0027A8[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(8, 9, 1, 0),
    gsSP1Triangle(8, 1, 0, 0),
    gsSP1Triangle(7, 6, 10, 0),
    gsSP1Triangle(7, 10, 11, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002888[0], 6, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002938[1], 8, 6),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(0, 8, 1, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 6, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(2, 3, 11, 0),
    gsSP1Triangle(3, 4, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(4, 3, 10, 0),
    gsSP1Triangle(5, 13, 12, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0027A8[8], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002888[2], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0028E8[0], 5, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002938[6], 1, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0029D8[0], 7, 9),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(3, 10, 4, 0),
    gsSP1Triangle(4, 10, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(5, 11, 2, 0),
    gsSP1Triangle(5, 2, 8, 0),
    gsSP1Triangle(6, 12, 11, 0),
    gsSP1Triangle(6, 11, 5, 0),
    gsSP1Triangle(7, 13, 12, 0),
    gsSP1Triangle(7, 12, 6, 0),
    gsSP1Triangle(7, 14, 15, 0),
    gsSP1Triangle(7, 15, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002938[0], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002938[4], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0029C8[0], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0029D8[5], 2, 4),
    gsSP1Triangle(0, 3, 5, 0),
    gsSP1Triangle(0, 5, 4, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_0046A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002A48[0], 15, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 1, 4, 0),
    gsSP1Triangle(3, 2, 1, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 4, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 4, 0),
    gsSP1Triangle(8, 3, 4, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsSP1Triangle(13, 14, 10, 0),
    gsSP1Triangle(13, 10, 9, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002A68[1], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002AB8[1], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002B38[0], 9, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E98[1], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003018[0], 4, 12),
    gsSP1Triangle(2, 5, 4, 0),
    gsSP1Triangle(2, 4, 12, 0),
    gsSP1Triangle(3, 11, 5, 0),
    gsSP1Triangle(3, 5, 2, 0),
    gsSP1Triangle(4, 5, 13, 0),
    gsSP1Triangle(5, 11, 13, 0),
    gsSP1Triangle(6, 7, 14, 0),
    gsSP1Triangle(7, 6, 8, 0),
    gsSP1Triangle(8, 15, 7, 0),
    gsSP1Triangle(1, 6, 0, 0),
    gsSP1Triangle(6, 1, 9, 0),
    gsSP1Triangle(9, 8, 6, 0),
    gsSP1Triangle(6, 14, 10, 0),
    gsSP1Triangle(10, 0, 6, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002AB8[0], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002B38[6], 2, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002BC8[0], 4, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002C18[0], 3, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CE8[11], 2, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003058[0], 3, 13),
    gsSP1Triangle(4, 2, 13, 0),
    gsSP1Triangle(5, 13, 2, 0),
    gsSP1Triangle(5, 2, 12, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(2, 3, 11, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(3, 0, 14, 0),
    gsSP1Triangle(3, 14, 11, 0),
    gsSP1Triangle(6, 15, 8, 0),
    gsSP1Triangle(6, 8, 7, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002C08[0], 10, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CA8[1], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003058[2], 2, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0030C8[0], 1, 13),
    gsSP1Triangle(0, 1, 10, 0),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(1, 11, 10, 0),
    gsSP1Triangle(2, 0, 12, 0),
    gsSP1Triangle(3, 2, 12, 0),
    gsSP1Triangle(3, 12, 8, 0),
    gsSP1Triangle(4, 9, 6, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSP1Triangle(5, 6, 13, 0),
    gsSP1Triangle(5, 13, 7, 0),
    gsSP1Triangle(0, 13, 6, 0),
    gsSP1Triangle(6, 9, 0, 0),
    gsSP1Triangle(8, 12, 9, 0),
    gsSP1Triangle(8, 9, 4, 0),
    gsSP1Triangle(9, 12, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002BC8[2], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002C08[0], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002C78[0], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CA8[0], 4, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E98[5], 2, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002FC8[1], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003058[2], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0030C8[0], 3, 11),
    gsSP1Triangle(1, 8, 11, 0),
    gsSP1Triangle(2, 11, 8, 0),
    gsSP1Triangle(2, 8, 7, 0),
    gsSP1Triangle(3, 10, 0, 0),
    gsSP1Triangle(3, 0, 12, 0),
    gsSP1Triangle(4, 10, 3, 0),
    gsSP1Triangle(5, 9, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSP1Triangle(5, 6, 3, 0),
    gsSP1Triangle(5, 3, 12, 0),
    gsSP1Triangle(6, 4, 3, 0),
    gsSP1Triangle(4, 6, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002A48[0], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002A68[0], 2, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002B38[8], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CE8[0], 9, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CE8[10], 1, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0030F8[0], 1, 14),
    gsSP1Triangle(4, 2, 3, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSP1Triangle(5, 1, 2, 0),
    gsSP1Triangle(6, 0, 7, 0),
    gsSP1Triangle(7, 0, 1, 0),
    gsSP1Triangle(1, 8, 7, 0),
    gsSP1Triangle(8, 1, 5, 0),
    gsSP1Triangle(9, 14, 11, 0),
    gsSP1Triangle(9, 11, 10, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002BC8[1], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CA8[1], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CE8[7], 6, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E98[2], 2, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002FC8[2], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003058[1], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003098[0], 3, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0030F8[0], 1, 15),
    gsSP1Triangle(2, 15, 9, 0),
    gsSP1Triangle(3, 2, 9, 0),
    gsSP1Triangle(4, 3, 9, 0),
    gsSP1Triangle(5, 3, 4, 0),
    gsSP1Triangle(5, 4, 8, 0),
    gsSP1Triangle(6, 12, 7, 0),
    gsSP1Triangle(6, 11, 12, 0),
    gsSP1Triangle(1, 11, 10, 0),
    gsSP1Triangle(1, 12, 11, 0),
    gsSP1Triangle(7, 13, 0, 0),
    gsSP1Triangle(7, 14, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002DD8[0], 6, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E38[4], 1, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003138[0], 7, 7),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(0, 8, 1, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 2, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 5, 0),
    gsSP1Triangle(3, 11, 7, 0),
    gsSP1Triangle(3, 7, 0, 0),
    gsSP1Triangle(4, 12, 11, 0),
    gsSP1Triangle(4, 11, 3, 0),
    gsSP1Triangle(5, 10, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002B18[0], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002DD8[4], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E38[0], 6, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003138[5], 7, 9),
    gsSP1Triangle(3, 12, 1, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 13, 12, 0),
    gsSP1Triangle(4, 12, 3, 0),
    gsSP1Triangle(5, 14, 13, 0),
    gsSP1Triangle(5, 13, 4, 0),
    gsSP1Triangle(6, 11, 14, 0),
    gsSP1Triangle(6, 14, 5, 0),
    gsSP1Triangle(7, 10, 11, 0),
    gsSP1Triangle(7, 11, 6, 0),
    gsSP1Triangle(8, 15, 9, 0),
    gsSP1Triangle(8, 9, 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002B38[1], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002C08[0], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CE8[5], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CE8[9], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E98[0], 10, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003018[1], 1, 14),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0030F8[0], 1, 15),
    gsSP1Triangle(4, 8, 5, 0),
    gsSP1Triangle(4, 5, 0, 0),
    gsSP1Triangle(5, 8, 14, 0),
    gsSP1Triangle(6, 3, 8, 0),
    gsSP1Triangle(6, 8, 4, 0),
    gsSP1Triangle(7, 14, 8, 0),
    gsSP1Triangle(8, 3, 7, 0),
    gsSP1Triangle(9, 10, 15, 0),
    gsSP1Triangle(9, 15, 2, 0),
    gsSP1Triangle(10, 7, 15, 0),
    gsSP1Triangle(1, 7, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002C08[0], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CA8[1], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E38[5], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E98[8], 6, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002FC8[2], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003138[11], 6, 10),
    gsSP1Triangle(4, 11, 10, 0),
    gsSP1Triangle(4, 10, 2, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(5, 6, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(6, 8, 12, 0),
    gsSP1Triangle(7, 14, 15, 0),
    gsSP1Triangle(7, 15, 12, 0),
    gsSP1Triangle(8, 7, 12, 0),
    gsSP1Triangle(0, 1, 9, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CA8[1], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CE8[12], 3, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002F78[0], 6, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002FC8[3], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003098[0], 1, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003108[0], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003248[0], 3, 13),
    gsSP1Triangle(3, 2, 1, 0),
    gsSP1Triangle(1, 11, 3, 0),
    gsSP1Triangle(0, 5, 11, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(5, 13, 7, 0),
    gsSP1Triangle(6, 3, 5, 0),
    gsSP1Triangle(7, 6, 5, 0),
    gsSP1Triangle(5, 4, 13, 0),
    gsSP1Triangle(5, 3, 11, 0),
    gsSP1Triangle(6, 2, 3, 0),
    gsSP1Triangle(8, 14, 9, 0),
    gsSP1Triangle(8, 9, 12, 0),
    gsSP1Triangle(9, 14, 15, 0),
    gsSP1Triangle(9, 13, 4, 0),
    gsSP1Triangle(9, 4, 12, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002C08[0], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CA8[1], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E98[3], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E98[12], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002F78[0], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002FC8[0], 4, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0030C8[2], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003108[0], 2, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003138[15], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003248[2], 1, 13),
    gsSP1Triangle(6, 10, 4, 0),
    gsSP1Triangle(6, 4, 9, 0),
    gsSP1Triangle(4, 1, 9, 0),
    gsSP1Triangle(2, 0, 11, 0),
    gsSP1Triangle(7, 11, 0, 0),
    gsSP1Triangle(5, 13, 8, 0),
    gsSP1Triangle(5, 8, 3, 0),
    gsSP1Triangle(8, 12, 3, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002CE8[12], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_002E98[3], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003008[0], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003018[1], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0030B8[0], 1, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003108[1], 2, 6),
    gsSP1Triangle(1, 5, 0, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 3, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_sceneTex_004E30, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_003278[0], 11, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 1, 5, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 8, 6, 0),
    gsSP1Triangle(8, 9, 6, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSPEndDisplayList(),
}; 

u64 old_lake_hylia_room_00Tex_0046A0[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_0046A0.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_004EA0[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_004EA0.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_0056A0[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_0056A0.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_005EA0[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_005EA0.rgb5a1.inc.c"
};

static Vtx old_lake_hylia_room_00Vtx_0066A0[16] = {
    VTX(-9599, 236, -2959, 0, 1024, 126, 13, 7, 255),
    VTX(-9599, -3, -2959, 0, 0, 112, 51, 29, 255),
    VTX(-9599, 2, -3199, 1024, 0, 87, 1, 92, 255),
    VTX(-9599, 242, -3199, 1024, 1024, 77, 15, 100, 255),
    VTX(-3199, 671, -25, 0, 1024, 113, 51, 27, 255),
    VTX(-3199, 431, -25, 0, 0, 75, 90, 48, 255),
    VTX(-3199, 411, -264, 1024, 0, 177, 0, 98, 255),
    VTX(-3199, 651, -264, 1024, 1024, 216, 0, 120, 255),
    VTX(1800, 320, -3203, 1024, 1024, 74, 0, 103, 255),
    VTX(1800, 80, -3203, 1024, 0, 89, 0, 90, 255),
    VTX(2040, 0, -3199, 0, 0, 249, 51, 116, 255),
    VTX(2040, 240, -3199, 0, 1024, 25, 1, 124, 255),
    VTX(1649, 320, -896, 1024, 1024, 65, 23, 106, 255),
    VTX(1649, 80, -896, 1024, 0, 47, 2, 117, 255),
    VTX(1876, 0, -799, 0, 0, 239, 1, 125, 255),
    VTX(1876, 240, -799, 0, 1024, 215, 0, 119, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0067A0[4] = {
    VTX(799, 320, 599, 1024, 1024, 32, 17, 121, 255),
    VTX(799, 80, 599, 1024, 0, 24, 1, 124, 255),
    VTX(1050, 0, 661, 0, 0, 245, 0, 126, 255),
    VTX(1050, 240, 661, 0, 1024, 231, 0, 124, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0067E0[16] = {
    VTX(-1769, 611, 83, 0, 1024, 233, 1, 124, 255),
    VTX(-1769, 371, 83, 0, 0, 10, 9, 126, 255),
    VTX(-806, 412, 332, 4102, 0, 4, 0, 126, 255),
    VTX(-806, 652, 332, 4102, 1024, 227, 0, 123, 255),
    VTX(799, 320, 599, 0, 1024, 32, 17, 121, 255),
    VTX(799, 80, 599, 0, 0, 24, 1, 124, 255),
    VTX(1133, 80, 95, 2048, 0, 102, 34, 67, 255),
    VTX(1133, 320, 95, 2048, 1024, 111, 6, 61, 255),
    VTX(1133, 320, 95, 0, 1024, 111, 6, 61, 255),
    VTX(1133, 80, 95, 0, 0, 102, 34, 67, 255),
    VTX(1327, 80, -462, 2048, 0, 105, 34, 63, 255),
    VTX(1327, 320, -462, 2048, 1024, 110, 6, 63, 255),
    VTX(1327, 320, -462, 0, 1024, 110, 6, 63, 255),
    VTX(1327, 80, -462, 0, 0, 105, 34, 63, 255),
    VTX(1649, 80, -896, 2048, 0, 47, 2, 117, 255),
    VTX(1649, 320, -896, 2048, 1024, 65, 23, 106, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0068E0[4] = {
    VTX(1649, 320, -896, 0, 1024, 65, 23, 106, 255),
    VTX(-3199, 651, -264, 0, 1024, 216, 0, 120, 255),
    VTX(-9599, 242, -3199, -18055, 1024, 77, 15, 100, 255),
    VTX(-6399, 206, -1731, -6979, 0, 227, 35, 118, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006920[4] = {
    VTX(1741, 320, -1449, 0, 1024, 125, 6, 18, 255),
    VTX(-806, 652, 332, 0, 1024, 227, 0, 123, 255),
    VTX(415, 360, 725, 0, 1024, 247, 0, 126, 255),
    VTX(1815, 320, -2286, 0, 1024, 126, 7, 4, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006960[10] = {
    VTX(1649, 80, -896, 0, 0, 47, 2, 117, 255),
    VTX(1741, 80, -1449, 2048, 0, 119, 37, 23, 255),
    VTX(1741, 320, -1449, 2048, 1024, 125, 6, 18, 255),
    VTX(-3199, 411, -264, 0, 0, 177, 0, 98, 255),
    VTX(-1769, 371, 83, 4096, 0, 10, 9, 126, 255),
    VTX(-1769, 611, 83, 4096, 1024, 233, 1, 124, 255),
    VTX(-9599, 2, -3199, -18055, 0, 87, 1, 92, 255),
    VTX(-6399, 446, -1731, -6979, 1024, 208, 6, 116, 255),
    VTX(-3199, 411, -264, 4095, 0, 177, 0, 98, 255),
    VTX(-3199, 651, -264, 4095, 1024, 216, 0, 120, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006A00[12] = {
    VTX(1741, 80, -1449, 0, 0, 119, 37, 23, 255),
    VTX(1815, 80, -2286, 2048, 0, 120, 40, 10, 255),
    VTX(1815, 320, -2286, 2048, 1024, 126, 7, 4, 255),
    VTX(-806, 412, 332, 0, 0, 4, 0, 126, 255),
    VTX(415, 120, 725, 7705, 0, 240, 0, 125, 255),
    VTX(415, 360, 725, 7705, 1024, 247, 0, 126, 255),
    VTX(415, 120, 725, 0, 0, 240, 0, 125, 255),
    VTX(799, 80, 599, 2048, 0, 24, 1, 124, 255),
    VTX(799, 320, 599, 2048, 1024, 32, 17, 121, 255),
    VTX(1815, 80, -2286, 0, 0, 120, 40, 10, 255),
    VTX(1800, 80, -3203, 2048, 0, 89, 0, 90, 255),
    VTX(1800, 320, -3203, 2048, 1024, 74, 0, 103, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006AC0[16] = {
    VTX(1327, 560, -462, -1079, 1024, 109, 1, 64, 255),
    VTX(1327, 320, -462, -1079, 0, 110, 6, 63, 255),
    VTX(1649, 320, -896, -154, 0, 65, 23, 106, 255),
    VTX(1649, 560, -896, -154, 1024, 51, 6, 115, 255),
    VTX(1741, 320, -1449, 1024, 0, 125, 6, 18, 255),
    VTX(1741, 560, -1449, 1024, 1024, 125, 2, 18, 255),
    VTX(1815, 320, -2286, 2809, 0, 126, 7, 4, 255),
    VTX(1815, 560, -2286, 2809, 1024, 126, 2, 3, 255),
    VTX(-3199, 891, -264, 0, 1024, 185, 0, 104, 255),
    VTX(-3199, 651, -264, 0, 0, 216, 0, 120, 255),
    VTX(-1769, 611, 83, 2076, 0, 233, 1, 124, 255),
    VTX(-1769, 851, 83, 2076, 1024, 228, 34, 119, 255),
    VTX(415, 600, 725, 0, 1024, 16, 32, 121, 255),
    VTX(415, 360, 725, 0, 0, 247, 0, 126, 255),
    VTX(799, 320, 599, 1024, 0, 32, 17, 121, 255),
    VTX(799, 560, 599, 1024, 1024, 26, 4, 124, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006BC0[7] = {
    VTX(-806, 892, 332, 0, 1024, 227, 32, 118, 255),
    VTX(1800, 320, -3203, 4767, 0, 74, 0, 103, 255),
    VTX(-1769, 851, 83, 0, 1024, 228, 34, 119, 255),
    VTX(1133, 560, 95, -2270, 1024, 115, 1, 54, 255),
    VTX(799, 560, 599, -3346, 1024, 26, 4, 124, 255),
    VTX(-9599, 482, -3199, -4283, 1024, 100, 5, 77, 255),
    VTX(-6399, 446, -1731, 3992, 0, 208, 6, 116, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006C30[13] = {
    VTX(-806, 652, 332, 0, 0, 227, 0, 123, 255),
    VTX(415, 360, 725, 3072, 0, 247, 0, 126, 255),
    VTX(415, 600, 725, 3072, 1024, 16, 32, 121, 255),
    VTX(1800, 560, -3203, 4767, 1024, 95, 57, 61, 255),
    VTX(-1769, 611, 83, 0, 0, 233, 1, 124, 255),
    VTX(-806, 652, 332, 2078, 0, 227, 0, 123, 255),
    VTX(-806, 892, 332, 2078, 1024, 227, 32, 118, 255),
    VTX(1133, 320, 95, -2270, 0, 111, 6, 61, 255),
    VTX(799, 320, 599, -3346, 0, 32, 17, 121, 255),
    VTX(-9599, 242, -3199, -4283, 0, 77, 15, 100, 255),
    VTX(-6399, 686, -1731, 3992, 1024, 204, 28, 112, 255),
    VTX(-3199, 651, -264, 12269, 0, 216, 0, 120, 255),
    VTX(-3199, 891, -264, 12269, 1024, 185, 0, 104, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006D00[16] = {
    VTX(1649, 560, -896, 1024, 1024, 51, 6, 115, 255),
    VTX(1649, 320, -896, 1024, 0, 65, 23, 106, 255),
    VTX(1876, 240, -799, 0, 0, 215, 0, 119, 255),
    VTX(1876, 480, -799, 0, 1024, 210, 0, 117, 255),
    VTX(-3199, 911, -25, 0, 1024, 123, 26, 14, 255),
    VTX(-3199, 671, -25, 0, 0, 113, 51, 27, 255),
    VTX(-3199, 651, -264, 1024, 0, 216, 0, 120, 255),
    VTX(-3199, 891, -264, 1024, 1024, 185, 0, 104, 255),
    VTX(799, 560, 599, 1024, 1024, 26, 4, 124, 255),
    VTX(799, 320, 599, 1024, 0, 32, 17, 121, 255),
    VTX(1050, 240, 661, 0, 0, 231, 0, 124, 255),
    VTX(1050, 480, 661, 0, 1024, 228, 0, 123, 255),
    VTX(-9599, 476, -2959, 0, 1024, 126, 4, 2, 255),
    VTX(-9599, 236, -2959, 0, 0, 126, 13, 7, 255),
    VTX(-9599, 242, -3199, 1024, 0, 77, 15, 100, 255),
    VTX(-9599, 482, -3199, 1024, 1024, 100, 5, 77, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006E00[4] = {
    VTX(1800, 560, -3203, 1024, 1024, 95, 57, 61, 255),
    VTX(1800, 320, -3203, 1024, 0, 74, 0, 103, 255),
    VTX(2040, 240, -3199, 0, 0, 25, 1, 124, 255),
    VTX(2040, 480, -3199, 0, 1024, 29, 0, 123, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006E40[23] = {
    VTX(-9599, 362, -3199, -1279, 2816, 244, 109, 62, 255),
    VTX(-6399, 940, -2896, -352, 1695, 4, 122, 34, 255),
    VTX(-6279, 1021, -3201, -216, 1754, 242, 123, 26, 255),
    VTX(-3199, 1119, -2594, 574, 574, 252, 123, 28, 255),
    VTX(-2959, 1280, -3203, 846, 693, 3, 123, 28, 255),
    VTX(-1759, 1280, -3203, 1230, 309, 255, 123, 30, 255),
    VTX(-1913, 1113, -2562, 976, 153, 254, 124, 24, 255),
    VTX(-6399, 566, -1731, -725, 1322, 222, 102, 65, 255),
    VTX(-3199, 771, -264, -170, -170, 219, 106, 57, 255),
    VTX(-6399, 940, -2896, -352, 1695, 4, 122, 34, 255),
    VTX(-1769, 731, 83, 175, -739, 248, 118, 45, 255),
    VTX(-1913, 1113, -2562, 976, 153, 254, 124, 24, 255),
    VTX(-806, 772, 332, 404, -1127, 2, 114, 55, 255),
    VTX(-346, 1020, -1586, 1165, -660, 17, 123, 23, 255),
    VTX(415, 480, 725, 669, -1644, 16, 111, 58, 255),
    VTX(1327, 440, -462, 1341, -1556, 14, 114, 53, 255),
    VTX(1815, 440, -2286, 2080, -1128, 68, 106, 10, 255),
    VTX(1649, 440, -896, 1583, -1520, 39, 119, 14, 255),
    VTX(1741, 440, -1449, 1789, -1372, 66, 107, 9, 255),
    VTX(1133, 440, 95, 1100, -1672, 19, 116, 47, 255),
    VTX(799, 440, 599, 832, -1726, 13, 115, 51, 255),
    VTX(1800, 560, -3203, 2369, -830, 95, 57, 61, 255),
    VTX(620, 940, -3203, 1992, -452, 52, 112, 27, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006FB0[1] = {
    VTX(-346, 1020, -1586, 1165, -660, 17, 123, 23, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_006FC0[3] = {
    VTX(1815, 440, -2286, 2080, -1128, 68, 106, 10, 255),
    VTX(-559, 1160, -3203, 1614, -74, 22, 123, 18, 255),
    VTX(-346, 1020, -1586, 1165, -660, 17, 123, 23, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x006FF0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_007D78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0066A0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(7, 6, 5, 0),
    gsSP1Triangle(7, 5, 4, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0067A0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_009578, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0067E0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0068E0[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006960[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(2, 3, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 11, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006920[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006A00[0], 12, 4),
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
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_008578, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006AC0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006AC0[1], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006AC0[6], 2, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006BC0[0], 4, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006C30[0], 8, 8),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(4, 9, 10, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(3, 5, 11, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(6, 13, 14, 0),
    gsSP1Triangle(7, 15, 1, 0),
    gsSP1Triangle(7, 1, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006BC0[3], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006C30[7], 6, 4),
    gsSP1Triangle(1, 5, 4, 0),
    gsSP1Triangle(1, 4, 0, 0),
    gsSP1Triangle(2, 6, 3, 0),
    gsSP1Triangle(2, 3, 7, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(3, 9, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_007578, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006D00[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(7, 6, 5, 0),
    gsSP1Triangle(7, 5, 4, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006E00[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_008D78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006E40[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(5, 3, 6, 0),
    gsSP1Triangle(7, 8, 3, 0),
    gsSP1Triangle(7, 3, 9, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(8, 11, 3, 0),
    gsSP1Triangle(0, 7, 9, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(10, 13, 11, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006E40[12], 11, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006FC0[0], 3, 11),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(3, 5, 1, 0),
    gsSP1Triangle(4, 9, 1, 0),
    gsSP1Triangle(5, 6, 1, 0),
    gsSP1Triangle(6, 11, 1, 0),
    gsSP1Triangle(7, 3, 1, 0),
    gsSP1Triangle(8, 7, 1, 0),
    gsSP1Triangle(9, 10, 1, 0),
    gsSP1Triangle(2, 8, 1, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006E40[5], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006E40[11], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006FB0[0], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_006FC0[1], 1, 3),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(2, 0, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 old_lake_hylia_room_00Tex_007578[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_007578.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_007D78[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_007D78.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_008578[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_008578.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_008D78[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_008D78.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_009578[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_009578.rgb5a1.inc.c"
};

static Vtx old_lake_hylia_room_00Vtx_00A578[16] = {
    VTX(736, 185, 5053, 0, 0, 0, 0, 130, 255),
    VTX(732, 185, 5053, 0, 0, 0, 0, 130, 255),
    VTX(732, 191, 5053, 0, 0, 0, 0, 130, 255),
    VTX(736, 191, 5053, 0, 0, 0, 0, 130, 255),
    VTX(736, 185, 5058, 0, 0, 0, 130, 0, 255),
    VTX(732, 185, 5058, 0, 0, 0, 130, 0, 255),
    VTX(732, 185, 5053, 0, 0, 0, 130, 0, 255),
    VTX(736, 185, 5053, 0, 0, 0, 130, 0, 255),
    VTX(736, 191, 5058, 0, 0, 0, 0, 127, 255),
    VTX(732, 191, 5058, 0, 0, 0, 0, 127, 255),
    VTX(732, 185, 5058, 0, 0, 0, 0, 127, 255),
    VTX(736, 185, 5058, 0, 0, 0, 0, 127, 255),
    VTX(732, 191, 5058, 0, 0, 130, 0, 0, 255),
    VTX(732, 191, 5053, 0, 0, 130, 0, 0, 255),
    VTX(732, 185, 5053, 0, 0, 130, 0, 0, 255),
    VTX(732, 185, 5058, 0, 0, 130, 0, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00A678[4] = {
    VTX(736, 191, 5053, 0, 0, 0, 127, 0, 255),
    VTX(732, 191, 5053, 0, 0, 0, 127, 0, 255),
    VTX(732, 191, 5058, 0, 0, 0, 127, 0, 255),
    VTX(736, 191, 5058, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00A6B8[8] = {
    VTX(727, 427, 5050, -4095, 3072, 0, 117, 49, 255),
    VTX(727, 307, 5338, -4095, -3583, 0, 117, 49, 255),
    VTX(1111, 307, 5338, 4096, -3583, 0, 117, 49, 255),
    VTX(1111, 427, 5050, 4096, 3072, 0, 117, 49, 255),
    VTX(1111, 307, 4858, -3071, -1757, 0, 107, 190, 255),
    VTX(727, 307, 4858, 5120, -1757, 0, 107, 190, 255),
    VTX(727, 427, 5050, 5120, 3072, 0, 107, 190, 255),
    VTX(1111, 427, 5050, -3071, 3072, 0, 107, 190, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00A738[6] = {
    VTX(727, 136, 5062, 341, 171, 0, 0, 127, 255),
    VTX(727, 136, 5062, 341, 0, 0, 0, 127, 255),
    VTX(727, 177, 5198, 2048, 683, 0, 0, 127, 255),
    VTX(727, 136, 4877, -2559, 0, 0, 0, 127, 255),
    VTX(727, 136, 5002, -682, 0, 0, 0, 127, 255),
    VTX(727, 136, 5002, -682, 171, 0, 0, 127, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00A798[16] = {
    VTX(727, 295, 5338, 0, 2048, 0, 0, 127, 255),
    VTX(727, 136, 5338, 0, 0, 0, 0, 127, 255),
    VTX(746, 136, 5338, 512, 0, 0, 0, 127, 255),
    VTX(746, 295, 5338, 512, 1877, 0, 0, 127, 255),
    VTX(1092, 295, 5338, 0, 1317, 0, 0, 127, 255),
    VTX(1092, 136, 5338, 0, -292, 0, 0, 127, 255),
    VTX(1111, 136, 5338, 512, -292, 0, 0, 127, 255),
    VTX(1111, 295, 5338, 512, 1463, 0, 0, 127, 255),
    VTX(727, 307, 5338, 0, -2047, 0, 0, 127, 255),
    VTX(727, 295, 5338, 512, -1901, 0, 0, 127, 255),
    VTX(1111, 295, 5338, 512, 2487, 0, 0, 127, 255),
    VTX(1111, 307, 5338, 0, 2633, 0, 0, 127, 255),
    VTX(727, 307, 4858, 0, -1433, 130, 0, 0, 255),
    VTX(727, 295, 4858, 512, -1330, 130, 0, 0, 255),
    VTX(727, 295, 5338, 512, 2560, 130, 0, 0, 255),
    VTX(727, 307, 5338, 0, 2662, 130, 0, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00A898[4] = {
    VTX(727, 295, 5318, 0, 1536, 130, 0, 0, 255),
    VTX(727, 295, 4858, 0, 1536, 130, 0, 0, 255),
    VTX(1111, 307, 5338, 512, -640, 127, 0, 0, 255),
    VTX(746, 295, 4858, 0, 1877, 0, 0, 130, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00A8D8[4] = {
    VTX(727, 427, 5050, 512, 2033, 130, 0, 0, 255),
    VTX(727, 307, 4858, 0, -417, 130, 0, 0, 255),
    VTX(1111, 427, 5050, 4, 1152, 127, 0, 0, 255),
    VTX(1111, 307, 4858, 0, -1535, 0, 0, 130, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00A918[4] = {
    VTX(1111, 295, 5338, 0, 1755, 127, 0, 0, 255),
    VTX(1111, 307, 5338, 0, -1919, 127, 0, 0, 255),
    VTX(1111, 295, 4877, 0, 1365, 127, 0, 0, 255),
    VTX(1111, 295, 4858, 0, 2048, 0, 0, 130, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00A958[12] = {
    VTX(727, 136, 5318, 0, -340, 130, 0, 0, 255),
    VTX(727, 136, 5338, 512, -340, 130, 0, 0, 255),
    VTX(727, 295, 5338, 512, 1707, 130, 0, 0, 255),
    VTX(727, 136, 4858, 0, 0, 130, 0, 0, 255),
    VTX(727, 136, 4877, 512, 0, 130, 0, 0, 255),
    VTX(727, 295, 4877, 512, 1408, 130, 0, 0, 255),
    VTX(1111, 307, 5301, -5, -353, 127, 0, 0, 255),
    VTX(1111, 413, 5050, 35, 1982, 127, 0, 0, 255),
    VTX(1111, 427, 5050, 512, 2033, 127, 0, 0, 255),
    VTX(746, 136, 4858, 0, 0, 0, 0, 130, 255),
    VTX(727, 136, 4858, 512, 0, 0, 0, 130, 255),
    VTX(727, 295, 4858, 512, 2048, 0, 0, 130, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AA18[12] = {
    VTX(727, 413, 5050, 35, 1982, 130, 0, 0, 255),
    VTX(727, 307, 5301, -5, -353, 130, 0, 0, 255),
    VTX(727, 307, 5338, 512, -640, 130, 0, 0, 255),
    VTX(727, 307, 4880, 511, -282, 130, 0, 0, 255),
    VTX(727, 413, 5050, 516, 1102, 130, 0, 0, 255),
    VTX(727, 427, 5050, 4, 1152, 130, 0, 0, 255),
    VTX(1111, 413, 5050, 516, 1102, 127, 0, 0, 255),
    VTX(1111, 307, 4880, 511, -282, 127, 0, 0, 255),
    VTX(1111, 307, 4858, 0, -417, 127, 0, 0, 255),
    VTX(1111, 295, 4858, 512, -1407, 0, 0, 130, 255),
    VTX(727, 295, 4858, 512, 2432, 0, 0, 130, 255),
    VTX(727, 307, 4858, 0, 2560, 0, 0, 130, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AAD8[12] = {
    VTX(1111, 136, 5338, 0, 0, 127, 0, 0, 255),
    VTX(1111, 136, 5318, 512, 0, 127, 0, 0, 255),
    VTX(1111, 295, 5318, 512, 1609, 127, 0, 0, 255),
    VTX(1111, 295, 5338, 512, -1791, 127, 0, 0, 255),
    VTX(1111, 295, 4858, 512, 3072, 127, 0, 0, 255),
    VTX(1111, 307, 4858, 0, 3200, 127, 0, 0, 255),
    VTX(1111, 136, 4877, 0, -511, 127, 0, 0, 255),
    VTX(1111, 136, 4858, 512, -511, 127, 0, 0, 255),
    VTX(1111, 295, 4858, 512, 1536, 127, 0, 0, 255),
    VTX(1111, 136, 4858, 0, -409, 0, 0, 130, 255),
    VTX(1092, 136, 4858, 512, -409, 0, 0, 130, 255),
    VTX(1092, 295, 4858, 512, 1843, 0, 0, 130, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AB98[12] = {
    VTX(727, 235, 5198, 0, 1024, 130, 0, 0, 255),
    VTX(727, 177, 5198, 0, 0, 130, 0, 0, 255),
    VTX(727, 177, 5256, 1024, 0, 130, 0, 0, 255),
    VTX(727, 235, 5256, 1024, 1024, 130, 0, 0, 255),
    VTX(727, 177, 5198, 1024, 0, 130, 0, 0, 255),
    VTX(727, 235, 5198, 1024, 1024, 130, 0, 0, 255),
    VTX(727, 235, 5141, 0, 1024, 130, 0, 0, 255),
    VTX(727, 177, 5141, 0, 0, 130, 0, 0, 255),
    VTX(775, 177, 4858, 1024, 0, 0, 0, 130, 255),
    VTX(775, 249, 4858, 1024, 1024, 0, 0, 130, 255),
    VTX(847, 249, 4858, 0, 1024, 0, 0, 130, 255),
    VTX(847, 177, 4858, 0, 0, 0, 0, 130, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AC58[4] = {
    VTX(737, 236, 5002, 1024, 1024, 130, 0, 0, 255),
    VTX(737, 136, 5002, 1024, 0, 130, 0, 0, 255),
    VTX(737, 136, 5062, 0, 0, 130, 0, 0, 255),
    VTX(737, 236, 5062, 0, 1024, 130, 0, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AC98[14] = {
    VTX(727, 136, 4877, -1023, 0, 130, 0, 0, 255),
    VTX(727, 136, 5002, -204, 0, 130, 0, 0, 255),
    VTX(727, 236, 5002, -204, 788, 130, 0, 0, 255),
    VTX(727, 295, 4877, -1023, 1024, 130, 0, 0, 255),
    VTX(727, 236, 5062, 268, 788, 130, 0, 0, 255),
    VTX(727, 295, 5318, 1875, 1024, 130, 0, 0, 255),
    VTX(727, 235, 5141, 583, 721, 130, 0, 0, 255),
    VTX(727, 136, 5062, 268, 0, 130, 0, 0, 255),
    VTX(727, 177, 5141, 583, 248, 130, 0, 0, 255),
    VTX(727, 235, 5198, 1213, 721, 130, 0, 0, 255),
    VTX(727, 235, 5256, 1686, 721, 130, 0, 0, 255),
    VTX(727, 177, 5256, 1686, 248, 130, 0, 0, 255),
    VTX(727, 136, 5318, 1875, 0, 130, 0, 0, 255),
    VTX(727, 235, 5198, 1056, 721, 130, 0, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AD78[5] = {
    VTX(727, 177, 5198, 1056, 248, 130, 0, 0, 255),
    VTX(1092, 295, 4858, -220, 1024, 0, 0, 130, 255),
    VTX(746, 136, 4858, 2048, 0, 0, 0, 130, 255),
    VTX(1111, 136, 4877, 1875, 0, 127, 0, 0, 255),
    VTX(775, 249, 4858, 1859, 721, 0, 0, 130, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00ADC8[4] = {
    VTX(1111, 307, 4880, -1023, 1024, 127, 0, 0, 255),
    VTX(727, 236, 5062, 268, 788, 0, 0, 130, 255),
    VTX(737, 236, 5002, -204, 788, 0, 0, 127, 255),
    VTX(1092, 136, 5338, 1245, 0, 0, 0, 127, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AE08[3] = {
    VTX(727, 307, 5301, -711, 1024, 130, 0, 0, 255),
    VTX(727, 236, 5002, -204, 788, 0, 130, 0, 255),
    VTX(727, 177, 5198, 1213, 248, 130, 0, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AE38[8] = {
    VTX(1092, 136, 4858, -220, 0, 0, 0, 130, 255),
    VTX(847, 177, 4858, 1386, 248, 0, 0, 130, 255),
    VTX(847, 249, 4858, 1386, 721, 0, 0, 130, 255),
    VTX(746, 295, 4858, 2048, 1024, 0, 0, 130, 255),
    VTX(775, 177, 4858, 1859, 248, 0, 0, 130, 255),
    VTX(1111, 295, 4877, 1875, 1024, 127, 0, 0, 255),
    VTX(1111, 295, 5318, -1023, 1024, 127, 0, 0, 255),
    VTX(1111, 136, 5318, -1023, 0, 127, 0, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AEB8[11] = {
    VTX(1111, 413, 5050, 88, 329, 127, 0, 0, 255),
    VTX(1111, 307, 5301, 1736, 1024, 127, 0, 0, 255),
    VTX(737, 236, 5062, 268, 788, 0, 0, 130, 255),
    VTX(737, 136, 5062, 268, 0, 0, 0, 130, 255),
    VTX(727, 136, 5062, 268, 0, 0, 0, 130, 255),
    VTX(727, 236, 5002, -204, 788, 0, 0, 127, 255),
    VTX(727, 136, 5002, -204, 0, 0, 0, 127, 255),
    VTX(737, 136, 5002, -204, 0, 0, 0, 127, 255),
    VTX(1092, 295, 5338, 1245, 1024, 0, 0, 127, 255),
    VTX(746, 295, 5338, -1023, 1024, 0, 0, 127, 255),
    VTX(746, 136, 5338, -1023, 0, 0, 0, 127, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AF68[5] = {
    VTX(727, 413, 5050, 936, 329, 130, 0, 0, 255),
    VTX(727, 307, 4880, 2048, 1024, 130, 0, 0, 255),
    VTX(737, 236, 5002, -204, 788, 0, 130, 0, 255),
    VTX(737, 236, 5062, 268, 788, 0, 130, 0, 255),
    VTX(727, 236, 5062, 268, 788, 0, 130, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00AFB8[16] = {
    VTX(727, 120, 5062, 320, 0, 130, 0, 0, 255),
    VTX(727, 120, 5338, 7680, 0, 130, 0, 0, 255),
    VTX(727, 136, 5338, 7680, 512, 130, 0, 0, 255),
    VTX(727, 136, 5062, 320, 512, 130, 0, 0, 255),
    VTX(727, 136, 4858, -5119, 512, 130, 0, 0, 255),
    VTX(727, 120, 4858, -5119, 0, 130, 0, 0, 255),
    VTX(727, 120, 5002, -1279, 0, 130, 0, 0, 255),
    VTX(727, 136, 5002, -1279, 512, 130, 0, 0, 255),
    VTX(707, 136, 5002, 640, 512, 0, 0, 130, 255),
    VTX(727, 136, 5002, 0, 512, 0, 0, 130, 255),
    VTX(727, 120, 5002, 0, 0, 0, 0, 130, 255),
    VTX(707, 120, 5002, 640, 0, 0, 0, 130, 255),
    VTX(1111, 136, 5338, 5632, 512, 0, 0, 127, 255),
    VTX(727, 136, 5338, -4607, 512, 0, 0, 127, 255),
    VTX(727, 120, 5338, -4607, 0, 0, 0, 127, 255),
    VTX(1111, 120, 5338, 5632, 0, 0, 0, 127, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00B0B8[4] = {
    VTX(727, 136, 4858, 5120, 512, 0, 0, 130, 255),
    VTX(1111, 136, 5338, -5631, 512, 127, 0, 0, 255),
    VTX(737, 136, 5002, -894, -408, 0, 127, 0, 255),
    VTX(727, 136, 5002, -895, -116, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00B0F8[2] = {
    VTX(707, 136, 5002, -383, 512, 130, 0, 0, 255),
    VTX(727, 136, 5062, 640, 512, 0, 0, 127, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00B118[10] = {
    VTX(1111, 136, 4858, -5119, 512, 0, 0, 130, 255),
    VTX(1111, 120, 4858, -5119, 0, 0, 0, 130, 255),
    VTX(727, 120, 4858, 5120, 0, 0, 0, 130, 255),
    VTX(1111, 120, 5338, -5631, 0, 127, 0, 0, 255),
    VTX(1111, 120, 4858, 7168, 0, 127, 0, 0, 255),
    VTX(1111, 136, 4858, 7168, 512, 127, 0, 0, 255),
    VTX(727, 136, 5062, 1024, -116, 0, 127, 0, 255),
    VTX(737, 136, 5062, 1025, -408, 0, 127, 0, 255),
    VTX(707, 136, 5002, -896, 468, 0, 127, 0, 255),
    VTX(707, 136, 5062, 1023, 468, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00B1B8[6] = {
    VTX(707, 120, 5002, -383, 0, 130, 0, 0, 255),
    VTX(707, 120, 5062, 1536, 0, 130, 0, 0, 255),
    VTX(707, 136, 5062, 1536, 512, 130, 0, 0, 255),
    VTX(707, 136, 5062, 0, 512, 0, 0, 127, 255),
    VTX(707, 120, 5062, 0, 0, 0, 0, 127, 255),
    VTX(727, 120, 5062, 640, 0, 0, 0, 127, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x00B218[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A578[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A678[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00B900, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A6B8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00D500, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A738[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00C900, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A798[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A898[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A958[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A8D8[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AA18[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00A918[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AAD8[0], 12, 4),
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
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00C100, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AB98[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00DD00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AC58[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00CD00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AC98[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 6, 0),
    gsSP1Triangle(9, 10, 5, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(6, 13, 5, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AC98[7], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AC98[12], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AD78[0], 5, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AE38[0], 8, 8),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(4, 9, 10, 0),
    gsSP1Triangle(4, 10, 7, 0),
    gsSP1Triangle(4, 7, 11, 0),
    gsSP1Triangle(5, 12, 9, 0),
    gsSP1Triangle(5, 9, 8, 0),
    gsSP1Triangle(6, 13, 14, 0),
    gsSP1Triangle(6, 14, 15, 0),
    gsSP1Triangle(7, 12, 5, 0),
    gsSP1Triangle(7, 5, 11, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00ADC8[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AEB8[0], 11, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AC98[11], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AE08[0], 3, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AF68[0], 5, 5),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(3, 7, 8, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00E500, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00AFB8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00B0B8[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00B118[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00B0F8[0], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00B1B8[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_lake_hylia_room_00Tex_00B900[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00B900.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_00C100[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00C100.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_00C900[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00C900.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_00CD00[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00CD00.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_00D500[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00D500.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_00DD00[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00DD00.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_00E500[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00E500.rgb5a1.inc.c"
};

static Vtx old_lake_hylia_room_00Vtx_00E700[4] = {
    VTX(1742, 80, 3534, -4095, 1365, 0, 127, 0, 255),
    VTX(1483, 80, 3382, -4095, 85, 0, 127, 0, 255),
    VTX(1096, 80, 4041, 5678, 85, 0, 127, 0, 255),
    VTX(1343, 80, 4213, 5986, 1365, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00E740[16] = {
    VTX(1483, -73, 3382, 512, -286, 64, 0, 148, 255),
    VTX(1483, 80, 3382, 512, 1024, 64, 0, 148, 255),
    VTX(1509, 64, 3397, 0, 887, 64, 0, 148, 255),
    VTX(1509, -74, 3397, 0, -298, 64, 0, 148, 255),
    VTX(1509, -74, 3397, 512, -810, 109, 0, 64, 255),
    VTX(1509, 64, 3397, 512, 375, 109, 0, 64, 255),
    VTX(1494, 64, 3423, 0, 375, 109, 0, 64, 255),
    VTX(1494, -70, 3423, 0, -773, 109, 0, 64, 255),
    VTX(1494, -70, 3423, 512, -261, 193, 0, 109, 255),
    VTX(1494, 64, 3423, 512, 887, 193, 0, 109, 255),
    VTX(1468, 64, 3408, 0, 887, 193, 0, 109, 255),
    VTX(1468, -68, 3408, 0, -249, 193, 0, 109, 255),
    VTX(1701, -80, 3545, 512, -348, 148, 0, 193, 255),
    VTX(1701, 64, 3545, 512, 887, 148, 0, 193, 255),
    VTX(1716, 64, 3519, 0, 887, 148, 0, 193, 255),
    VTX(1716, -85, 3519, 0, -388, 148, 0, 193, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00E840[4] = {
    VTX(1468, -68, 3408, 512, -249, 148, 0, 193, 255),
    VTX(1316, -25, 3667, 512, -134, 148, 0, 193, 255),
    VTX(1331, -29, 3641, 512, 84, 64, 0, 148, 255),
    VTX(1357, -31, 3656, 512, -183, 109, 0, 64, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00E880[4] = {
    VTX(1342, -26, 3682, 512, 109, 193, 0, 109, 255),
    VTX(1716, -85, 3519, 512, -644, 64, 0, 148, 255),
    VTX(1575, -35, 3819, 1024, 31, 193, 0, 109, 255),
    VTX(1742, 80, 3534, 0, -1085, 64, 0, 148, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00E8C0[4] = {
    VTX(1726, 64, 3560, 512, 1520, 109, 0, 64, 255),
    VTX(1483, 80, 3382, 0, -2540, 148, 0, 193, 255),
    VTX(1590, -40, 3793, 512, -265, 109, 0, 64, 255),
    VTX(1742, -88, 3534, 512, -925, 109, 0, 64, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00E900[3] = {
    VTX(1726, -83, 3560, 1024, -373, 193, 0, 109, 255),
    VTX(1549, -32, 3803, 512, -199, 148, 0, 193, 255),
    VTX(1564, -37, 3778, 512, -240, 64, 0, 148, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00E930[12] = {
    VTX(1468, 64, 3408, 512, 887, 148, 0, 193, 255),
    VTX(1483, 80, 3382, 0, 1024, 148, 0, 193, 255),
    VTX(1483, -73, 3382, 0, -286, 148, 0, 193, 255),
    VTX(1316, 64, 3667, 512, 631, 148, 0, 193, 255),
    VTX(1331, 64, 3641, 0, 631, 148, 0, 193, 255),
    VTX(1331, -29, 3641, 0, -171, 148, 0, 193, 255),
    VTX(1331, 64, 3641, 512, 887, 64, 0, 148, 255),
    VTX(1357, 64, 3656, 0, 887, 64, 0, 148, 255),
    VTX(1357, -31, 3656, 0, 72, 64, 0, 148, 255),
    VTX(1357, 64, 3656, 512, 631, 109, 0, 64, 255),
    VTX(1342, 64, 3682, 0, 631, 109, 0, 64, 255),
    VTX(1342, -26, 3682, 0, -146, 109, 0, 64, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00E9F0[12] = {
    VTX(1342, 64, 3682, 512, 887, 193, 0, 109, 255),
    VTX(1316, 64, 3667, 0, 887, 193, 0, 109, 255),
    VTX(1316, -25, 3667, 0, 121, 193, 0, 109, 255),
    VTX(1716, 64, 3519, 512, 631, 64, 0, 148, 255),
    VTX(1742, 80, 3534, 0, 768, 64, 0, 148, 255),
    VTX(1742, -88, 3534, 0, -669, 64, 0, 148, 255),
    VTX(1575, 64, 3819, 1024, 887, 193, 0, 109, 255),
    VTX(1549, 64, 3803, 512, 887, 193, 0, 109, 255),
    VTX(1549, -32, 3803, 512, 56, 193, 0, 109, 255),
    VTX(1716, 64, 3519, 512, -845, 64, 0, 148, 255),
    VTX(1509, 64, 3397, 512, 1074, 64, 0, 148, 255),
    VTX(1483, 80, 3382, 0, 1314, 64, 0, 148, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00EAB0[12] = {
    VTX(1742, 80, 3534, 0, 1712, 109, 0, 64, 255),
    VTX(1343, 80, 4213, 0, -3328, 109, 0, 64, 255),
    VTX(1343, 64, 4213, 512, -3328, 109, 0, 64, 255),
    VTX(1468, 64, 3408, 512, -2300, 148, 0, 193, 255),
    VTX(1096, 64, 4041, 512, 3568, 148, 0, 193, 255),
    VTX(1096, 80, 4041, 0, 3568, 148, 0, 193, 255),
    VTX(1590, 64, 3793, 512, 631, 109, 0, 64, 255),
    VTX(1575, 64, 3819, 0, 631, 109, 0, 64, 255),
    VTX(1575, -35, 3819, 0, -224, 109, 0, 64, 255),
    VTX(1742, 80, 3534, 512, 512, 109, 0, 64, 255),
    VTX(1726, 64, 3560, 0, 375, 109, 0, 64, 255),
    VTX(1726, -83, 3560, 0, -885, 109, 0, 64, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00EB70[9] = {
    VTX(1726, 64, 3560, 1024, 887, 193, 0, 109, 255),
    VTX(1701, 64, 3545, 512, 887, 193, 0, 109, 255),
    VTX(1701, -80, 3545, 512, -348, 193, 0, 109, 255),
    VTX(1549, 64, 3803, 512, 631, 148, 0, 193, 255),
    VTX(1564, 64, 3778, 0, 631, 148, 0, 193, 255),
    VTX(1564, -37, 3778, 0, -240, 148, 0, 193, 255),
    VTX(1564, 64, 3778, 512, 631, 64, 0, 148, 255),
    VTX(1590, 64, 3793, 0, 631, 64, 0, 148, 255),
    VTX(1590, -40, 3793, 0, -265, 64, 0, 148, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x00EC00[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00F070, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00E700[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00EE70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00E740[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00E840[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00E930[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00E880[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00E9F0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00E8C0[0], 4, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00EAB0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00E900[0], 3, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00EB70[0], 9, 3),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 old_lake_hylia_room_00Tex_00EE70[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00EE70.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_00F070[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00F070.rgb5a1.inc.c"
};

static Vtx old_lake_hylia_room_00Vtx_00F870[12] = {
    VTX(2097, 36, 5974, -682, -3217, 98, 224, 184, 255),
    VTX(2575, 36, 6617, -682, 4109, 98, 224, 184, 255),
    VTX(2568, 16, 6617, 171, 4065, 87, 191, 193, 255),
    VTX(2109, 16, 6000, 171, -2959, 87, 191, 193, 255),
    VTX(2552, 0, 6625, 876, 4040, 36, 139, 230, 255),
    VTX(2108, 0, 6029, 876, -2754, 36, 139, 230, 255),
    VTX(2527, 0, 6647, 876, 4070, 221, 139, 27, 255),
    VTX(2080, 0, 6047, 876, -2776, 221, 139, 27, 255),
    VTX(2516, 16, 6663, 171, 4127, 170, 191, 64, 255),
    VTX(2051, 16, 6038, 171, -3006, 170, 191, 64, 255),
    VTX(2516, 36, 6671, -682, 4181, 159, 224, 73, 255),
    VTX(2029, 36, 6017, -682, -3272, 159, 224, 73, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_00F930[4] = {
    VTX(2575, 36, 6617, 1024, 2048, 0, 127, 0, 255),
    VTX(2097, 36, 5974, 17, 2048, 0, 127, 0, 255),
    VTX(2029, 36, 6017, 0, 0, 0, 127, 0, 255),
    VTX(2516, 36, 6671, 1024, 0, 0, 127, 0, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x00F970[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_010AC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00F870[0], 12, 0),
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
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_00FAC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 2, 2, 5, 6, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_00F930[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 old_lake_hylia_room_00Tex_00FAC0[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_00FAC0.rgb5a1.inc.c"
};

u64 old_lake_hylia_room_00Tex_010AC0[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_010AC0.rgb5a1.inc.c"
};

static Vtx old_lake_hylia_room_00Vtx_011AC0[8] = {
    VTX(1600, 0, -3199, -2047, 0, 0, 0, 127, 255),
    VTX(9600, 0, -3199, 3072, 0, 0, 0, 127, 255),
    VTX(9600, 800, -3199, 3072, 512, 0, 0, 127, 255),
    VTX(1600, 800, -3199, -2047, 512, 0, 0, 127, 255),
    VTX(9600, 800, -3199, -3327, 512, 130, 0, 0, 255),
    VTX(9600, 0, -3199, -3327, 0, 130, 0, 0, 255),
    VTX(9600, 0, 10000, 5120, 0, 130, 0, 0, 255),
    VTX(9600, 800, 10000, 5120, 512, 130, 0, 0, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x011B40[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_011BF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, 0, 2, 5, 4, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_011AC0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_lake_hylia_room_00Tex_011BF8[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_011BF8.rgb5a1.inc.c"
};

static Vtx old_lake_hylia_room_00Vtx_011FF8[20] = {
    VTX(508, 120, 5335, 0, 0, 4, 126, 7, 255),
    VTX(376, 109, 5484, 1024, 0, 1, 126, 15, 255),
    VTX(592, 112, 5610, 768, 628, 252, 126, 5, 255),
    VTX(658, 117, 5535, 256, 628, 252, 126, 5, 255),
    VTX(594, 109, 5679, 1024, 751, 0, 125, 18, 255),
    VTX(-467, 277, 4804, 0, 2560, 10, 125, 13, 255),
    VTX(-1614, 320, 4281, 0, -1023, 245, 124, 22, 255),
    VTX(-1603, 320, 4477, 1024, -1023, 247, 124, 23, 255),
    VTX(-465, 277, 4999, 1024, 2560, 253, 123, 28, 255),
    VTX(508, 120, 5335, 0, 2048, 4, 126, 7, 255),
    VTX(-467, 277, 4804, 0, -511, 10, 125, 13, 255),
    VTX(-465, 277, 4999, 1024, -511, 253, 123, 28, 255),
    VTX(376, 109, 5484, 1024, 2048, 1, 126, 15, 255),
    VTX(658, 117, 5535, 245, 128, 252, 126, 5, 255),
    VTX(592, 112, 5610, 245, 384, 252, 126, 5, 255),
    VTX(594, 109, 5679, 0, 512, 0, 125, 18, 255),
    VTX(727, 120, 5530, 0, 0, 1, 126, 6, 255),
    VTX(727, 120, 5530, 0, 751, 1, 126, 6, 255),
    VTX(-6399, 46, 3176, 0, 4096, 247, 126, 7, 255),
    VTX(-3199, 235, 3807, 0, 5120, 246, 125, 15, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012138[1] = {
    VTX(-1614, 320, 4281, 0, 3072, 245, 124, 22, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012148[6] = {
    VTX(-9599, -142, 2545, 0, -4095, 248, 126, 3, 255),
    VTX(-9599, -142, 2745, 1024, -4095, 249, 126, 4, 255),
    VTX(-6402, 27, 3375, 1024, 4096, 249, 126, 6, 255),
    VTX(-6399, 46, 3176, 0, -3071, 247, 126, 7, 255),
    VTX(-6402, 27, 3375, 1024, -3071, 249, 126, 6, 255),
    VTX(-3199, 235, 4005, 1024, 5120, 250, 125, 14, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0121A8[3] = {
    VTX(-3199, 235, 3807, 0, -1023, 246, 125, 15, 255),
    VTX(-3199, 235, 4005, 1024, -1023, 250, 125, 14, 255),
    VTX(-1603, 320, 4477, 1024, 3072, 247, 124, 23, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x0121D8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_012318, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_011FF8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(5, 7, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_011FF8[3], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_011FF8[13], 7, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012148[0], 6, 9),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(6, 0, 1, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(7, 10, 11, 0),
    gsSP1Triangle(8, 12, 13, 0),
    gsSP1Triangle(8, 13, 14, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012138[0], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0121A8[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 old_lake_hylia_room_00Tex_012318[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_012318.rgb5a1.inc.c"
};

static u8 unaccounted_012B18[72] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0D, 0xD0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x33, 0x28, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x6F, 0xF0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xB2, 0x18, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xEC, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xF9, 0x70, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0x1B, 0x40, 0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0x21, 0xD8, 
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx old_lake_hylia_room_00Vtx_012B60[15] = {
    VTX(4037, 0, 1019, -927, 3535, 0, 127, 0, 255),
    VTX(2047, 0, 1438, -6023, 2462, 0, 127, 0, 255),
    VTX(1964, 0, 2714, -6235, -804, 0, 127, 0, 255),
    VTX(3794, 0, 2761, -1550, -924, 0, 127, 0, 255),
    VTX(2409, 0, 3524, -5095, -2876, 0, 127, 0, 255),
    VTX(3600, 0, 4800, -2047, -6143, 0, 127, 0, 255),
    VTX(5600, 0, 2800, 3072, -1023, 0, 127, 0, 255),
    VTX(3346, 0, -1278, -2696, 9417, 0, 127, 0, 255),
    VTX(2776, 0, 293, -4156, 5394, 0, 127, 0, 255),
    VTX(5600, 0, 800, 3072, 4096, 0, 127, 0, 255),
    VTX(5600, 0, -1199, 3072, 9216, 0, 127, 0, 255),
    VTX(5600, 0, 4800, 3072, -6143, 0, 127, 0, 255),
    VTX(7600, 0, 4800, 8192, -6143, 0, 127, 0, 255),
    VTX(7600, 0, 800, 8192, 4096, 0, 127, 0, 255),
    VTX(7600, 0, 2800, 8192, -1023, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012C50[3] = {
    VTX(3379, 0, 5600, -2613, -8191, 0, 127, 0, 255),
    VTX(3889, 0, 6090, -1308, -9446, 0, 127, 0, 255),
    VTX(4479, 0, 5897, 203, -8951, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012C80[2] = {
    VTX(3011, 0, 5060, -3556, -6810, 0, 127, 0, 255),
    VTX(2357, 0, 4701, -5229, -5889, 0, 127, 0, 255),
}; 

static u8 unaccounted_012CA0[16] = {
    0x07, 0x36, 0x00, 0x00, 0x10, 0x9D, 0x00, 0x00, 0xE6, 0x77, 0xED, 0x7A, 0x00, 0x7F, 0x00, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_012CB0[1] = {
    VTX(1444, 0, 3991, -7566, -4072, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012CC0[1] = {
    VTX(5267, 0, 5809, 2219, -8727, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012CD0[8] = {
    VTX(6193, 0, 6223, 4589, -9787, 0, 127, 0, 255),
    VTX(9600, 0, 2800, 13312, -1023, 0, 127, 0, 255),
    VTX(7552, 0, 6823, 8069, -11321, 0, 127, 0, 255),
    VTX(8543, 0, 7003, 10607, -11783, 0, 127, 0, 255),
    VTX(9600, 0, 4800, 13312, -6143, 0, 127, 0, 255),
    VTX(6853, 0, 6726, 6280, -11073, 0, 127, 0, 255),
    VTX(9600, 0, 800, 13312, 4096, 0, 127, 0, 255),
    VTX(7600, 0, -1199, 8192, 9216, 0, 127, 0, 255),
}; 

static u8 unaccounted_012D50[32] = {
    0x0E, 0x10, 0x00, 0x00, 0xF3, 0x81, 0x00, 0x00, 0xF8, 0x01, 0x38, 0x00, 0x00, 0x7F, 0x00, 0xFF, 
    0x15, 0xE0, 0x00, 0x00, 0xF3, 0x81, 0x00, 0x00, 0x0C, 0x00, 0x38, 0x00, 0x00, 0x7F, 0x00, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_012D70[2] = {
    VTX(7600, 0, -3199, 8192, 14336, 0, 127, 0, 255),
    VTX(1876, 0, -799, -6460, 8193, 0, 127, 0, 255),
}; 

static u8 unaccounted_012D90[32] = {
    0x07, 0xBB, 0x00, 0x00, 0xFA, 0x76, 0x00, 0x00, 0xE7, 0xCC, 0x26, 0x32, 0x00, 0x7F, 0x00, 0xFF, 
    0x07, 0xF8, 0x00, 0x00, 0xF3, 0x81, 0x00, 0x00, 0xE8, 0x67, 0x38, 0x00, 0x00, 0x7F, 0x00, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_012DB0[2] = {
    VTX(2708, 0, 5679, -4331, -8393, 228, 122, 16, 255),
    VTX(2619, 0, 5148, -4558, -7033, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012DD0[4] = {
    VTX(9600, 0, 8260, 13312, -15000, 0, 127, 0, 255),
    VTX(9600, 0, 6800, 13312, -11263, 0, 127, 0, 255),
    VTX(9335, 0, 7990, 12633, -14310, 0, 127, 0, 255),
    VTX(9261, 0, 7368, 12444, -12718, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012E10[12] = {
    VTX(2796, 0, 5801, -4105, -8705, 0, 127, 0, 255),
    VTX(808, 0, 2303, -9194, 249, 0, 127, 0, 255),
    VTX(744, 0, 1407, -9357, 2541, 0, 127, 0, 255),
    VTX(860, 0, 928, -9063, 3768, 0, 127, 0, 255),
    VTX(1050, 0, 661, -8575, 4452, 0, 127, 0, 255),
    VTX(1350, 0, 201, -7807, 5630, 0, 127, 0, 255),
    VTX(1542, 0, -349, -7315, 7039, 0, 127, 0, 255),
    VTX(1964, 0, 2714, -6235, -804, 0, 127, 0, 255),
    VTX(844, 0, 3386, -9102, -2524, 0, 127, 0, 255),
    VTX(-4584, -239, 7790, 1573, -484, 0, 127, 0, 255),
    VTX(-3908, -239, 7664, 3305, -162, 0, 127, 0, 255),
    VTX(-3271, -239, 6812, 4936, 2018, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012ED0[13] = {
    VTX(-5193, -239, 7770, 14, -435, 0, 127, 0, 255),
    VTX(-5696, -239, 7713, -1271, -287, 0, 127, 0, 255),
    VTX(-6131, -239, 7510, -2385, 231, 0, 127, 0, 255),
    VTX(-6895, -239, 7065, -4340, 1369, 0, 127, 0, 255),
    VTX(-7441, -239, 6722, -5739, 2247, 0, 127, 0, 255),
    VTX(3156, 0, 6066, -3184, -9384, 0, 127, 0, 255),
    VTX(2945, 0, 6066, -3724, -9383, 0, 127, 0, 255),
    VTX(3925, 0, 6497, -1216, -10486, 0, 127, 0, 255),
    VTX(-632, -239, 6889, -12883, -11491, 0, 127, 0, 255),
    VTX(208, -239, 6965, -10732, -11686, 0, 127, 0, 255),
    VTX(555, -239, 6965, -9843, -11686, 0, 127, 0, 255),
    VTX(-1941, -239, 6725, 8342, 2239, 0, 127, 0, 255),
    VTX(-1261, -239, 6810, 10081, 2022, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_012FA0[9] = {
    VTX(-2666, -239, 6725, 6485, 2239, 0, 127, 0, 255),
    VTX(918, -239, 6866, -8912, -11431, 0, 127, 0, 255),
    VTX(2708, 0, 5679, -4331, -8393, 228, 122, 16, 255),
    VTX(2899, -185, 6263, -3842, -9888, 177, 87, 45, 255),
    VTX(2826, -239, 6300, -4030, -9983, 231, 123, 15, 255),
    VTX(1892, -239, 6281, -6420, -9934, 1, 126, 0, 255),
    VTX(1383, -239, 6644, -7723, -10864, 0, 127, 0, 255),
    VTX(6145, 0, 7034, 4467, -11863, 0, 127, 0, 255),
    VTX(5335, 0, 6390, 2394, -10214, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013030[1] = {
    VTX(2931, 0, 5659, -3761, -8342, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013040[1] = {
    VTX(3473, 0, 6295, -2371, -9969, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013050[2] = {
    VTX(1258, 0, 3857, -8044, -3729, 0, 127, 0, 255),
    VTX(760, 0, 2797, -9318, -1015, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013070[1] = {
    VTX(4358, 0, 6373, -105, -10171, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013080[1] = {
    VTX(5725, 0, 6671, 3391, -10932, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013090[1] = {
    VTX(4867, 0, 6293, 1196, -9965, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0130A0[1] = {
    VTX(9600, 0, -1199, 13312, 9216, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0130B0[2] = {
    VTX(8328, 0, 7546, 10055, -13172, 0, 127, 0, 255),
    VTX(7916, 0, 7417, 9002, -12841, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0130D0[1] = {
    VTX(9600, 0, -3199, 13312, 14336, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0130E0[3] = {
    VTX(6525, 0, 7256, 5439, -12431, 0, 127, 0, 255),
    VTX(7059, 0, 7334, 6808, -12631, 0, 127, 0, 255),
    VTX(7479, 0, 7370, 7883, -12721, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013110[1] = {
    VTX(2055, 0, -2277, -6003, 11976, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013120[3] = {
    VTX(9600, 0, 7516, 13312, -13096, 0, 127, 0, 255),
    VTX(8989, 0, 7837, 11747, -13917, 0, 127, 0, 255),
    VTX(8684, 0, 7657, 10967, -13458, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013150[1] = {
    VTX(3005, 0, 6209, -3571, -9750, 228, 122, 16, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_013160[6] = {
    VTX(-4019, -239, 7033, 3021, 1451, 0, 127, 0, 255),
    VTX(-4633, -239, 7148, 1448, 1158, 0, 127, 0, 255),
    VTX(-3180, -239, 7445, 5168, 396, 0, 127, 0, 255),
    VTX(-3180, -239, 7445, 5168, 396, 0, 127, 0, 255),
    VTX(-2623, -239, 7331, 6595, 688, 0, 127, 0, 255),
    VTX(-1973, -239, 7293, 8258, 785, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0131C0[15] = {
    VTX(-5147, -239, 7132, 134, 1199, 0, 127, 0, 255),
    VTX(-5520, -239, 7089, -820, 1309, 0, 127, 0, 255),
    VTX(-5834, -239, 6942, -1625, 1685, 0, 127, 0, 255),
    VTX(-6564, -239, 6518, -3492, 2771, 0, 127, 0, 255),
    VTX(-7101, -239, 6180, -4867, 3635, 0, 127, 0, 255),
    VTX(3445, 0, 6439, -2443, -10338, 0, 127, 0, 255),
    VTX(-9660, -239, 4573, -11420, 7749, 0, 127, 0, 255),
    VTX(-9967, -239, 5136, -12205, 6307, 0, 127, 0, 255),
    VTX(-696, -239, 7485, -13047, -13016, 0, 127, 0, 255),
    VTX(179, -239, 7605, -10806, -13324, 0, 127, 0, 255),
    VTX(659, -239, 7605, -9577, -13324, 0, 127, 0, 255),
    VTX(1148, -239, 7470, -8325, -12977, 0, 127, 0, 255),
    VTX(-1331, -239, 7362, 9903, 609, 0, 127, 0, 255),
    VTX(-696, -239, 7485, 11528, 295, 0, 127, 0, 255),
    VTX(-632, -239, 6889, 11692, 1820, 0, 127, 0, 255),
}; 

static Vtx old_lake_hylia_room_00Vtx_0132B0[1] = {
    VTX(1699, -239, 7205, -6915, -12300, 0, 127, 0, 255),
}; 

static u8 unaccounted_0132C0[48] = {
    0x0A, 0x5C, 0xFF, 0xC0, 0x16, 0x4B, 0x00, 0x00, 0xEE, 0x87, 0xDE, 0xEF, 0xA5, 0x47, 0x33, 0xFF, 
    0x0B, 0x86, 0xFF, 0xC5, 0x18, 0x5D, 0x00, 0x00, 0xF1, 0x81, 0xD9, 0xA3, 0xA5, 0x47, 0x33, 0xFF, 
    0x0B, 0xBD, 0x00, 0x00, 0x18, 0x41, 0x00, 0x00, 0xF2, 0x0D, 0xD9, 0xEA, 0xE4, 0x7A, 0x10, 0xFF, 
}; 

static Vtx old_lake_hylia_room_00Vtx_0132F0[3] = {
    VTX(2601, -192, 5733, -4605, -8532, 177, 87, 45, 255),
    VTX(2259, -239, 6805, -5481, -11276, 1, 126, 0, 255),
    VTX(2507, -247, 5781, -4846, -8654, 231, 123, 15, 255),
}; 

Gfx old_lake_hylia_room_00Dlist0x013320[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_lake_hylia_room_00Tex_013AC8, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[0], 15, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 3, 5, 0),
    gsSP1Triangle(3, 6, 0, 0),
    gsSP1Triangle(7, 8, 0, 0),
    gsSP1Triangle(0, 8, 1, 0),
    gsSP1Triangle(0, 6, 9, 0),
    gsSP1Triangle(10, 7, 0, 0),
    gsSP1Triangle(10, 0, 9, 0),
    gsSP1Triangle(6, 11, 12, 0),
    gsSP1Triangle(5, 11, 6, 0),
    gsSP1Triangle(13, 9, 6, 0),
    gsSP1Triangle(6, 14, 13, 0),
    gsSP1Triangle(14, 6, 12, 0),
    gsSP1Triangle(10, 9, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[4], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[11], 2, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012C50[0], 9, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012E10[7], 1, 13),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(6, 2, 1, 0),
    gsSP1Triangle(1, 7, 4, 0),
    gsSP1Triangle(0, 7, 1, 0),
    gsSP1Triangle(8, 7, 0, 0),
    gsSP1Triangle(9, 8, 0, 0),
    gsSP1Triangle(10, 0, 13, 0),
    gsSP1Triangle(10, 9, 0, 0),
    gsSP1Triangle(2, 6, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(2, 12, 3, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[10], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[12], 3, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CD0[0], 8, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012DD0[1], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0130A0[0], 1, 13),
    gsSP1Triangle(5, 3, 1, 0),
    gsSP1Triangle(2, 3, 5, 0),
    gsSP1Triangle(1, 4, 9, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 12, 0),
    gsSP1Triangle(8, 1, 12, 0),
    gsSP1Triangle(1, 9, 6, 0),
    gsSP1Triangle(5, 1, 8, 0),
    gsSP1Triangle(10, 2, 5, 0),
    gsSP1Triangle(10, 13, 2, 0),
    gsSP1Triangle(11, 2, 13, 0),
    gsSP1Triangle(0, 2, 11, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[7], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[10], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012C50[0], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012C80[0], 1, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CD0[7], 9, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013030[0], 1, 14),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013110[0], 1, 15),
    gsSP1Triangle(2, 6, 0, 0),
    gsSP1Triangle(7, 6, 2, 0),
    gsSP1Triangle(8, 7, 2, 0),
    gsSP1Triangle(8, 2, 5, 0),
    gsSP1Triangle(0, 6, 11, 0),
    gsSP1Triangle(9, 1, 0, 0),
    gsSP1Triangle(0, 10, 9, 0),
    gsSP1Triangle(10, 0, 15, 0),
    gsSP1Triangle(11, 15, 0, 0),
    gsSP1Triangle(4, 14, 3, 0),
    gsSP1Triangle(12, 14, 4, 0),
    gsSP1Triangle(12, 4, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012C50[0], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CD0[3], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012DD0[0], 4, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012ED0[5], 1, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013030[0], 2, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0130B0[0], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013120[0], 3, 11),
    gsSP1Triangle(0, 7, 9, 0),
    gsSP1Triangle(0, 8, 7, 0),
    gsSP1Triangle(0, 9, 1, 0),
    gsSP1Triangle(3, 11, 5, 0),
    gsSP1Triangle(4, 6, 11, 0),
    gsSP1Triangle(5, 11, 6, 0),
    gsSP1Triangle(6, 12, 5, 0),
    gsSP1Triangle(4, 2, 6, 0),
    gsSP1Triangle(6, 2, 13, 0),
    gsSP1Triangle(6, 13, 12, 0),
    gsSP1Triangle(2, 10, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[1], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012C80[0], 2, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CD0[2], 2, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012DB0[0], 2, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012E10[0], 3, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012E10[7], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012ED0[5], 2, 11),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013030[0], 1, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0130B0[0], 2, 14),
    gsSP1Triangle(6, 1, 2, 0),
    gsSP1Triangle(4, 15, 14, 0),
    gsSP1Triangle(4, 3, 15, 0),
    gsSP1Triangle(5, 7, 13, 0),
    gsSP1Triangle(7, 12, 11, 0),
    gsSP1Triangle(7, 11, 13, 0),
    gsSP1Triangle(8, 10, 0, 0),
    gsSP1Triangle(9, 8, 0, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012B60[8], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CD0[7], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012D70[0], 2, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012E10[1], 7, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013050[1], 1, 12),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0130A0[0], 1, 13),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0130D0[0], 1, 14),
    gsSP1Triangle(0, 7, 6, 0),
    gsSP1Triangle(1, 9, 8, 0),
    gsSP1Triangle(0, 1, 8, 0),
    gsSP1Triangle(1, 10, 9, 0),
    gsSP1Triangle(1, 4, 10, 0),
    gsSP1Triangle(3, 2, 14, 0),
    gsSP1Triangle(2, 13, 14, 0),
    gsSP1Triangle(8, 7, 0, 0),
    gsSP1Triangle(5, 12, 11, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CB0[0], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012E10[7], 5, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012FA0[0], 1, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013050[0], 2, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013160[0], 5, 9),
    gsSP1Triangle(1, 7, 0, 0),
    gsSP1Triangle(2, 7, 1, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(3, 4, 9, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(4, 11, 5, 0),
    gsSP1Triangle(4, 5, 9, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012E10[9], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012ED0[0], 6, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013040[0], 1, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013150[0], 1, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013160[1], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0131C0[0], 6, 10),
    gsSP1Triangle(1, 0, 9, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(2, 1, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 2, 11, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 3, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSP1Triangle(5, 4, 13, 0),
    gsSP1Triangle(5, 13, 14, 0),
    gsSP1Triangle(6, 8, 15, 0),
    gsSP1Triangle(6, 15, 7, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012C50[1], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012ED0[4], 5, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013040[0], 1, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013070[0], 1, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013150[0], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0131C0[4], 6, 10),
    gsSP1Triangle(4, 9, 3, 0),
    gsSP1Triangle(5, 7, 11, 0),
    gsSP1Triangle(5, 0, 7, 0),
    gsSP1Triangle(5, 8, 0, 0),
    gsSP1Triangle(1, 0, 8, 0),
    gsSP1Triangle(2, 10, 12, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012ED0[8], 5, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012FA0[1], 1, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013160[5], 1, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0131C0[8], 7, 7),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(0, 8, 1, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 2, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 5, 0),
    gsSP1Triangle(3, 6, 11, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012ED0[11], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012FA0[0], 4, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012FA0[6], 1, 5),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013160[4], 2, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0131C0[11], 1, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0132B0[0], 5, 9),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 0, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(2, 9, 5, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 11, 10, 0),
    gsSP1Triangle(4, 10, 13, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CC0[0], 2, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CD0[5], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012FA0[3], 6, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013080[0], 1, 9),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0132B0[0], 1, 10),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0132F0[0], 3, 11),
    gsSP1Triangle(4, 3, 11, 0),
    gsSP1Triangle(4, 11, 13, 0),
    gsSP1Triangle(5, 12, 4, 0),
    gsSP1Triangle(5, 4, 13, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(6, 12, 5, 0),
    gsSP1Triangle(7, 2, 1, 0),
    gsSP1Triangle(8, 1, 0, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 7, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012C50[2], 1, 0),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CC0[0], 1, 1),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CD0[2], 1, 2),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012CD0[5], 1, 3),
    gsSPVertex(&old_lake_hylia_room_00Vtx_012FA0[7], 2, 4),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013070[0], 1, 6),
    gsSPVertex(&old_lake_hylia_room_00Vtx_013090[0], 1, 7),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0130B0[1], 1, 8),
    gsSPVertex(&old_lake_hylia_room_00Vtx_0130E0[0], 3, 9),
    gsSP1Triangle(3, 4, 9, 0),
    gsSP1Triangle(1, 7, 5, 0),
    gsSP1Triangle(1, 0, 7, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 11, 8, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 old_lake_hylia_room_00Tex_013AC8[] = {
#include "assets/scenes/overworld/old_lake_hylia//old_lake_hylia_room_00Tex_013AC8.ia16.inc.c"
};

static u8 unaccounted_0142C8[24] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0x33, 0x20, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


