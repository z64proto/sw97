#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "hyrule_field_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "hyrule_field_scene.h"


static SCmdAltHeaders hyrule_field_room_00Set0000Cmd00;
static SCmdEchoSettings hyrule_field_room_00Set0000Cmd01;
static SCmdRoomBehavior hyrule_field_room_00Set0000Cmd02;
static SCmdSkyboxDisables hyrule_field_room_00Set0000Cmd03;
static SCmdTimeSettings hyrule_field_room_00Set0000Cmd04;
static SCmdWindSettings hyrule_field_room_00Set0000Cmd05;
static SCmdMesh hyrule_field_room_00Set0000Cmd06;
static SCmdObjectList hyrule_field_room_00Set0000Cmd07;
static SCmdActorList hyrule_field_room_00Set0000Cmd08;
static SCmdEndMarker hyrule_field_room_00Set0000Cmd09;
static SCmdEchoSettings hyrule_field_room_00Set0170Cmd00;
static SCmdRoomBehavior hyrule_field_room_00Set0170Cmd01;
static SCmdSkyboxDisables hyrule_field_room_00Set0170Cmd02;
static SCmdTimeSettings hyrule_field_room_00Set0170Cmd03;
static SCmdWindSettings hyrule_field_room_00Set0170Cmd04;
static SCmdMesh hyrule_field_room_00Set0170Cmd05;
static SCmdObjectList hyrule_field_room_00Set0170Cmd06;
static SCmdActorList hyrule_field_room_00Set0170Cmd07;
static SCmdEndMarker hyrule_field_room_00Set0170Cmd08;
static s32 terminatorMaybe;
static Vtx hyrule_field_room_00Vtx_000580[7];
static Vtx hyrule_field_room_00Vtx_0005F0[3];
static Vtx hyrule_field_room_00Vtx_000620[8];
static Vtx hyrule_field_room_00Vtx_0007B8[7];
static Vtx hyrule_field_room_00Vtx_000828[3];
static Vtx hyrule_field_room_00Vtx_000858[8];
static Vtx hyrule_field_room_00Vtx_0009F0[7];
static Vtx hyrule_field_room_00Vtx_000A60[3];
static Vtx hyrule_field_room_00Vtx_000A90[8];
static Vtx hyrule_field_room_00Vtx_000C28[7];
static Vtx hyrule_field_room_00Vtx_000C98[3];
static Vtx hyrule_field_room_00Vtx_000CC8[8];
static Vtx hyrule_field_room_00Vtx_000E60[10];
static Vtx hyrule_field_room_00Vtx_000F00[3];
static Vtx hyrule_field_room_00Vtx_000F30[8];
static Vtx hyrule_field_room_00Vtx_000FB0[8];
static Vtx hyrule_field_room_00Vtx_0011B0[18];
static Vtx hyrule_field_room_00Vtx_0012D0[3];
static Vtx hyrule_field_room_00Vtx_001300[8];
static Vtx hyrule_field_room_00Vtx_001380[4];
static Vtx hyrule_field_room_00Vtx_0013C0[8];
static Vtx hyrule_field_room_00Vtx_001628[11];
static Vtx hyrule_field_room_00Vtx_0016D8[3];
static Vtx hyrule_field_room_00Vtx_001708[8];
static Vtx hyrule_field_room_00Vtx_0018B0[21];
static Vtx hyrule_field_room_00Vtx_001A00[3];
static Vtx hyrule_field_room_00Vtx_001A30[16];
static Vtx hyrule_field_room_00Vtx_001B30[6];
static Vtx hyrule_field_room_00Vtx_001B90[16];
static Vtx hyrule_field_room_00Vtx_001C90[8];
static Vtx hyrule_field_room_00Vtx_001FB0[7];
static Vtx hyrule_field_room_00Vtx_002020[3];
static Vtx hyrule_field_room_00Vtx_002050[8];
static Vtx hyrule_field_room_00Vtx_0021E8[7];
static Vtx hyrule_field_room_00Vtx_002258[3];
static Vtx hyrule_field_room_00Vtx_002288[8];
static Vtx hyrule_field_room_00Vtx_002308[4];
static Vtx hyrule_field_room_00Vtx_002348[8];
static Vtx hyrule_field_room_00Vtx_0025A8[8];
static Vtx hyrule_field_room_00Vtx_002628[3];
static Vtx hyrule_field_room_00Vtx_002658[12];
static Vtx hyrule_field_room_00Vtx_002718[8];
static Vtx hyrule_field_room_00Vtx_002920[7];
static Vtx hyrule_field_room_00Vtx_002990[3];
static Vtx hyrule_field_room_00Vtx_0029C0[8];
static Vtx hyrule_field_room_00Vtx_002B58[12];
static Vtx hyrule_field_room_00Vtx_002C18[3];
static Vtx hyrule_field_room_00Vtx_002C48[8];
static Vtx hyrule_field_room_00Vtx_002CC8[5];
static Vtx hyrule_field_room_00Vtx_002D18[4];
static Vtx hyrule_field_room_00Vtx_002D58[8];
static Vtx hyrule_field_room_00Vtx_002DD8[8];
static Vtx hyrule_field_room_00Vtx_003100[7];
static Vtx hyrule_field_room_00Vtx_003170[3];
static Vtx hyrule_field_room_00Vtx_0031A0[6];
static Vtx hyrule_field_room_00Vtx_003200[8];
static Vtx hyrule_field_room_00Vtx_003400[12];
static Vtx hyrule_field_room_00Vtx_0034C0[3];
static Vtx hyrule_field_room_00Vtx_0034F0[4];
static Vtx hyrule_field_room_00Vtx_003530[24];
static Vtx hyrule_field_room_00Vtx_0036B0[8];
static Vtx hyrule_field_room_00Vtx_003938[10];
static Vtx hyrule_field_room_00Vtx_0039D8[3];
static Vtx hyrule_field_room_00Vtx_003A08[8];
static Vtx hyrule_field_room_00Vtx_003A88[20];
static Vtx hyrule_field_room_00Vtx_003BC8[8];
static Vtx hyrule_field_room_00Vtx_003E40[7];
static Vtx hyrule_field_room_00Vtx_003EB0[3];
static Vtx hyrule_field_room_00Vtx_003EE0[3];
static Vtx hyrule_field_room_00Vtx_003F10[8];
static Vtx hyrule_field_room_00Vtx_004100[20];
static Vtx hyrule_field_room_00Vtx_004240[3];
static Vtx hyrule_field_room_00Vtx_004270[8];
static Vtx hyrule_field_room_00Vtx_0042F0[9];
static Vtx hyrule_field_room_00Vtx_004380[14];
static Vtx hyrule_field_room_00Vtx_004460[28];
static Vtx hyrule_field_room_00Vtx_004620[11];
static Vtx hyrule_field_room_00Vtx_0046D0[10];
static Vtx hyrule_field_room_00Vtx_004770[8];
static Vtx hyrule_field_room_00Vtx_004BD0[7];
static Vtx hyrule_field_room_00Vtx_004C40[3];
static Vtx hyrule_field_room_00Vtx_004C70[8];
static Vtx hyrule_field_room_00Vtx_004CF0[12];
static Vtx hyrule_field_room_00Vtx_004DB0[8];
static Vtx hyrule_field_room_00Vtx_005020[7];
static Vtx hyrule_field_room_00Vtx_005090[3];
static Vtx hyrule_field_room_00Vtx_0050C0[8];
static Vtx hyrule_field_room_00Vtx_005140[8];
static Vtx hyrule_field_room_00Vtx_005340[20];
static Vtx hyrule_field_room_00Vtx_005480[8];
static Vtx hyrule_field_room_00Vtx_0055D8[7];
static Vtx hyrule_field_room_00Vtx_005648[3];
static Vtx hyrule_field_room_00Vtx_005678[8];
static Vtx hyrule_field_room_00Vtx_0056F8[8];
static Vtx hyrule_field_room_00Vtx_0058F8[7];
static Vtx hyrule_field_room_00Vtx_005968[3];
static Vtx hyrule_field_room_00Vtx_005998[4];
static Vtx hyrule_field_room_00Vtx_0059D8[3];
static Vtx hyrule_field_room_00Vtx_005A08[8];
static Vtx hyrule_field_room_00Vtx_005C58[22];
static Vtx hyrule_field_room_00Vtx_005DB8[3];
static Vtx hyrule_field_room_00Vtx_005DE8[4];
static Vtx hyrule_field_room_00Vtx_005E28[4];
static Vtx hyrule_field_room_00Vtx_005E68[12];
static Vtx hyrule_field_room_00Vtx_005F28[4];
static Vtx hyrule_field_room_00Vtx_005F68[8];
static Vtx hyrule_field_room_00Vtx_006290[7];
static Vtx hyrule_field_room_00Vtx_006300[3];
static Vtx hyrule_field_room_00Vtx_006330[8];
static Vtx hyrule_field_room_00Vtx_0064C8[7];
static Vtx hyrule_field_room_00Vtx_006538[3];
static Vtx hyrule_field_room_00Vtx_006568[4];
static Vtx hyrule_field_room_00Vtx_0065A8[8];
static Vtx hyrule_field_room_00Vtx_0067A0[7];
static Vtx hyrule_field_room_00Vtx_006810[3];
static Vtx hyrule_field_room_00Vtx_006840[8];
static Vtx hyrule_field_room_00Vtx_0069D8[7];
static Vtx hyrule_field_room_00Vtx_006A48[3];
static Vtx hyrule_field_room_00Vtx_006A78[4];
static Vtx hyrule_field_room_00Vtx_006AB8[8];
static Vtx hyrule_field_room_00Vtx_006CB0[7];
static Vtx hyrule_field_room_00Vtx_006D20[3];
static Vtx hyrule_field_room_00Vtx_006D50[8];
static Vtx hyrule_field_room_00Vtx_006EE8[7];
static Vtx hyrule_field_room_00Vtx_006F58[3];
static Vtx hyrule_field_room_00Vtx_006F88[8];
static Vtx hyrule_field_room_00Vtx_007120[12];
static Vtx hyrule_field_room_00Vtx_0071E0[8];
static Vtx hyrule_field_room_00Vtx_007330[7];
static Vtx hyrule_field_room_00Vtx_0073A0[3];
static Vtx hyrule_field_room_00Vtx_0073D0[8];
static Vtx hyrule_field_room_00Vtx_007450[12];
static Vtx hyrule_field_room_00Vtx_007510[8];
static Vtx hyrule_field_room_00Vtx_007780[7];
static Vtx hyrule_field_room_00Vtx_0077F0[3];
static Vtx hyrule_field_room_00Vtx_007820[8];
static Vtx hyrule_field_room_00Vtx_0078A0[8];
static Vtx hyrule_field_room_00Vtx_007AA0[8];
static Vtx hyrule_field_room_00Vtx_007B20[3];
static Vtx hyrule_field_room_00Vtx_007B50[12];
static Vtx hyrule_field_room_00Vtx_007C10[8];
static Vtx hyrule_field_room_00Vtx_007E20[8];
static Vtx hyrule_field_room_00Vtx_007EA0[32];
static Vtx hyrule_field_room_00Vtx_0080A0[8];
static Vtx hyrule_field_room_00Vtx_008270[12];
static Vtx hyrule_field_room_00Vtx_008330[8];
static Vtx hyrule_field_room_00Vtx_008480[8];
static Vtx hyrule_field_room_00Vtx_008500[32];
static Vtx hyrule_field_room_00Vtx_008700[8];
static Vtx hyrule_field_room_00Vtx_008780[62];
static Vtx hyrule_field_room_00Vtx_008B60[8];
static Vtx hyrule_field_room_00Vtx_008BE0[8];
static Vtx hyrule_field_room_00Vtx_008EB0[28];
static Vtx hyrule_field_room_00Vtx_009070[23];
static Vtx hyrule_field_room_00Vtx_0091E0[32];
static Vtx hyrule_field_room_00Vtx_0093E0[32];
static Vtx hyrule_field_room_00Vtx_0095E0[84];
static Vtx hyrule_field_room_00Vtx_009B20[3];
static Vtx hyrule_field_room_00Vtx_009B50[32];
static Vtx hyrule_field_room_00Vtx_009D50[32];
static Vtx hyrule_field_room_00Vtx_009F50[8];
static Vtx hyrule_field_room_00Vtx_009FD0[8];
static Vtx hyrule_field_room_00Vtx_00A458[20];
static Vtx hyrule_field_room_00Vtx_00A598[8];
static Vtx hyrule_field_room_00Vtx_00A710[8];
static Vtx hyrule_field_room_00Vtx_00A790[4];
static Vtx hyrule_field_room_00Vtx_00A7D0[8];
static Vtx hyrule_field_room_00Vtx_00A970[12];
static Vtx hyrule_field_room_00Vtx_00AA30[8];
static Vtx hyrule_field_room_00Vtx_00AB78[24];
static Vtx hyrule_field_room_00Vtx_00ACF8[24];
static Vtx hyrule_field_room_00Vtx_00AE78[9];
static Vtx hyrule_field_room_00Vtx_00AF08[8];
static Vtx hyrule_field_room_00Vtx_00B110[18];
static Vtx hyrule_field_room_00Vtx_00B230[32];
static Vtx hyrule_field_room_00Vtx_00B430[6];
static Vtx hyrule_field_room_00Vtx_00B490[8];
static Vtx hyrule_field_room_00Vtx_00B6B8[8];
static Vtx hyrule_field_room_00Vtx_00B738[12];
static Vtx hyrule_field_room_00Vtx_00B7F8[8];
static Vtx hyrule_field_room_00Vtx_00B9A8[4];
static Vtx hyrule_field_room_00Vtx_00B9E8[32];
static Vtx hyrule_field_room_00Vtx_00BBE8[8];
static Vtx hyrule_field_room_00Vtx_00BC68[4];
static Vtx hyrule_field_room_00Vtx_00BCA8[28];
static Vtx hyrule_field_room_00Vtx_00BE68[8];
static Vtx hyrule_field_room_00Vtx_00BEE8[4];
static Vtx hyrule_field_room_00Vtx_00BF28[32];
static Vtx hyrule_field_room_00Vtx_00C128[8];
static Vtx hyrule_field_room_00Vtx_00C1A8[4];
static Vtx hyrule_field_room_00Vtx_00C1E8[32];
static Vtx hyrule_field_room_00Vtx_00C3E8[8];
static Vtx hyrule_field_room_00Vtx_00C468[4];
static Vtx hyrule_field_room_00Vtx_00C4A8[32];
static Vtx hyrule_field_room_00Vtx_00C6A8[8];
static Vtx hyrule_field_room_00Vtx_00C728[4];
static Vtx hyrule_field_room_00Vtx_00C768[32];
static Vtx hyrule_field_room_00Vtx_00C968[8];
static Vtx hyrule_field_room_00Vtx_00C9E8[4];
static Vtx hyrule_field_room_00Vtx_00CA28[32];
static Vtx hyrule_field_room_00Vtx_00CC28[8];
static Vtx hyrule_field_room_00Vtx_00CCA8[4];
static Vtx hyrule_field_room_00Vtx_00CCE8[16];
static Vtx hyrule_field_room_00Vtx_00CDE8[4];
static Vtx hyrule_field_room_00Vtx_00CE28[16];
static Vtx hyrule_field_room_00Vtx_00CF28[4];
static Vtx hyrule_field_room_00Vtx_00CF68[16];
static Vtx hyrule_field_room_00Vtx_00D068[4];
static Vtx hyrule_field_room_00Vtx_00D0A8[16];
static Vtx hyrule_field_room_00Vtx_00D1A8[4];
static Vtx hyrule_field_room_00Vtx_00D1E8[16];
static Vtx hyrule_field_room_00Vtx_00D2E8[4];
static Vtx hyrule_field_room_00Vtx_00D328[16];
static Vtx hyrule_field_room_00Vtx_00D428[8];
static Vtx hyrule_field_room_00Vtx_00D4A8[24];
static Vtx hyrule_field_room_00Vtx_00D628[8];
static Vtx hyrule_field_room_00Vtx_00D6A8[24];
static Vtx hyrule_field_room_00Vtx_00D828[8];
static Vtx hyrule_field_room_00Vtx_00D8A8[24];
static Vtx hyrule_field_room_00Vtx_00DA28[8];
static Vtx hyrule_field_room_00Vtx_01C030[10];
static Vtx hyrule_field_room_00Vtx_01C0D0[8];
static Vtx hyrule_field_room_00Vtx_01C220[4];
static Vtx hyrule_field_room_00Vtx_01C260[10];
static Vtx hyrule_field_room_00Vtx_01C300[8];
static Vtx hyrule_field_room_00Vtx_01C4B0[51];
static Vtx hyrule_field_room_00Vtx_01C7E0[8];
static Vtx hyrule_field_room_00Vtx_01C9C0[4];
static Vtx hyrule_field_room_00Vtx_01CA00[12];
static Vtx hyrule_field_room_00Vtx_01CAC0[32];
static Vtx hyrule_field_room_00Vtx_01CCC0[12];
static Vtx hyrule_field_room_00Vtx_01CD80[8];
static Vtx hyrule_field_room_00Vtx_01CFE0[4];
static Vtx hyrule_field_room_00Vtx_01D020[4];
static Vtx hyrule_field_room_00Vtx_01D060[12];
static Vtx hyrule_field_room_00Vtx_01D120[16];
static Vtx hyrule_field_room_00Vtx_01D220[8];
static Vtx hyrule_field_room_00Vtx_01D478[16];
static Vtx hyrule_field_room_00Vtx_01D578[32];
static Vtx hyrule_field_room_00Vtx_01D778[8];

static SCmdAltHeaders hyrule_field_room_00Set0000Cmd00 = {  0x18, 0, (u32)&hyrule_field_room_00AlternateHeaders0x000050 }; // 0x0000

static SCmdEchoSettings hyrule_field_room_00Set0000Cmd01 = {  0x16, 0, { 0 }, 0x05 }; // 0x0008

static SCmdRoomBehavior hyrule_field_room_00Set0000Cmd02 = {  0x08, 0x00, 0x00000000 }; // 0x0010

static SCmdSkyboxDisables hyrule_field_room_00Set0000Cmd03 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0018

static SCmdTimeSettings hyrule_field_room_00Set0000Cmd04 = {  0x10, 0x00, 0x00, 0x00, 0x07, 0x00, 0x05 }; // 0x0020

static SCmdWindSettings hyrule_field_room_00Set0000Cmd05 = {  0x05, 0x00, 0x00, 0x00, 0x50, 0x50, 0x50, 0x00 }; // 0x0028

static SCmdMesh hyrule_field_room_00Set0000Cmd06 = {  0x0A, 0, (u32)&hyrule_field_room_00MeshHeader0x000250 }; // 0x0030

static SCmdObjectList hyrule_field_room_00Set0000Cmd07 = {  0x0B, 0x06, (u32)hyrule_field_room_00ObjectList0x000054 }; // 0x0038

static SCmdActorList hyrule_field_room_00Set0000Cmd08 = {  0x01, 0x11, (u32)hyrule_field_room_00ActorList0x000060 }; // 0x0040 }; 

static SCmdEndMarker hyrule_field_room_00Set0000Cmd09 = {  0x14, 0x00, 0x00 }; // 0x0048

u32 hyrule_field_room_00AlternateHeaders0x000050[] = {
	(u32)&hyrule_field_room_00Set0170Cmd00,

}; 

s16 hyrule_field_room_00ObjectList0x000054[6] = {
	OBJECT_SPOT00_OBJECTS,
	OBJECT_HORSE,
	OBJECT_HORSE_NORMAL,
	OBJECT_DY_OBJ,
	OBJECT_HORSE_GANON,
	OBJECT_HORSE_ZELDA,
}; 

ActorEntry hyrule_field_room_00ActorList0x000060[0x11] = {
	{ ACTOR_BG_SPOT00_HANEBASI, 0, -10, 670, 0, 0, 0, 0xFFFF }, //0x000060
	{ ACTOR_EN_LIGHT, -260, 128, 690, 0, 0, 0, 0x0000 }, //0x000070
	{ ACTOR_EN_LIGHT, 260, 128, 690, 0, 0, 0, 0x0000 }, //0x000080
	{ ACTOR_FIELD_KEEP, 330, -106, 8715, 0, 0, 0, 0x0005 }, //0x000090
    { ACTOR_EN_NIW, 1749, -500, 12639, 0, 0, 0, 0xFFFF }, //0x0000A0
	{ ACTOR_EN_NIW, 1724, -474, 12387, 0, 0, 0, 0xFFFF }, //0x0000B0
	{ ACTOR_EN_NIW, 1469, -484, 12614, 0, 0, 0, 0xFFFF }, //0x0000C0
	{ ACTOR_EN_HORSE_NORMAL, -5777, 511, 5523, 0, 29126, 0, 0xFFFF }, //0x0000D0
	{ ACTOR_FIELD_KEEP, 3649, -20, 8763, 0, 0, 0, 0x0017 }, //0x0000E0
    { ACTOR_FIELD_KEEP, 2113, -173, 9590, 0, 0, 0, 0x0017 }, //0x0000F0
    { ACTOR_FIELD_KEEP, 2527, -152, 9117, 0, 0, 0, 0x0017 }, //0x000100
    { ACTOR_FIELD_KEEP, 1936, -313, 10890, 0, 0, 0, 0x0017 }, //0x000110
    { ACTOR_FIELD_KEEP, -1763, 80, 7220, 0, 0, 0, 0x0017 }, //0x000120
    { ACTOR_FIELD_KEEP, -4064, 68, 6221, 0, 0, 0, 0x0017 }, //0x000130
    { ACTOR_FIELD_KEEP, -3413, 17, 7894, 0, 0, 0, 0x0017 }, //0x000140
    { ACTOR_EN_HORSE_GANON, -209, 0, 1684, 0, 0, 0, 0xFFFF }, //0x000150
	{ ACTOR_EN_HORSE_ZELDA, 349, 0, 1730, 0, 0, 0, 0xFFFF }, //0x000160
}; 

static SCmdEchoSettings hyrule_field_room_00Set0170Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0170

static SCmdRoomBehavior hyrule_field_room_00Set0170Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0178

static SCmdSkyboxDisables hyrule_field_room_00Set0170Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x01 }; // 0x0180

static SCmdTimeSettings hyrule_field_room_00Set0170Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01 }; // 0x0188

static SCmdWindSettings hyrule_field_room_00Set0170Cmd04 = {  0x05, 0x00, 0x00, 0x00, 0x50, 0x50, 0x50, 0x01 }; // 0x0190

static SCmdMesh hyrule_field_room_00Set0170Cmd05 = {  0x0A, 0, (u32)&hyrule_field_room_00MeshHeader0x000250 }; // 0x0198

static SCmdObjectList hyrule_field_room_00Set0170Cmd06 = {  0x0B, 0x09, (u32)hyrule_field_room_00ObjectList0x0001B8 }; // 0x01A0

static SCmdActorList hyrule_field_room_00Set0170Cmd07 = {  0x01, 0x08, (u32)hyrule_field_room_00ActorList0x0001CC }; // 0x01A8 }; 

static SCmdEndMarker hyrule_field_room_00Set0170Cmd08 = {  0x14, 0x00, 0x00 }; // 0x01B0

// Some objects have been swapped in order to get the map to load
s16 hyrule_field_room_00ObjectList0x0001B8[9] = {
    OBJECT_GND_MAGIC, // OBJECT_HORSE,
    OBJECT_SPOT00_OBJECTS,
    OBJECT_ZL4, // OBJECT_ZL1,
    OBJECT_IM,  // OBJECT_OA2,
    OBJECT_HORSE_GANON,
    OBJECT_HORSE_ZELDA,
    OBJECT_GNDD, // OBJECT_GND,
    OBJECT_FIRE,
    OBJECT_OPENING_DEMO1,
};

ActorEntry hyrule_field_room_00ActorList0x0001CC[8] = {
	{ ACTOR_BG_SPOT00_HANEBASI, 0, -10, 670, 0, 0, 0, 0xFFFF }, //0x0001CC
	{ ACTOR_EN_LIGHT, -260, 128, 690, 0, 0, 0, 0x0000 }, //0x0001DC
	{ ACTOR_EN_LIGHT, 260, 128, 690, 0, 0, 0, 0x0000 }, //0x0001EC
	{ ACTOR_EN_VIEWER, -260, 128, 690, 0, 0, 0, 0x0000 }, //0x0001FC
	{ ACTOR_EN_VIEWER, -260, 128, 690, 0, 0, 0, 0x0101 }, //0x00020C
	{ ACTOR_EN_VIEWER, -260, 128, 690, 0, 0, 0, 0x0202 }, //0x00021C
	{ ACTOR_EN_VIEWER, -260, 128, 690, 0, 0, 0, 0x0303 }, //0x00022C
	{ ACTOR_EN_VIEWER, -260, 128, 690, 0, 0, 0, 0x0404 }, //0x00023C
}; 

static u32 pad24C = 0;

MeshHeader2 hyrule_field_room_00MeshHeader0x000250 = { { 2 }, 0x32, (u32)&hyrule_field_room_00MeshDListEntry0x00025C, (u32)&(hyrule_field_room_00MeshDListEntry0x00025C) + sizeof(hyrule_field_room_00MeshDListEntry0x00025C) }; 

MeshEntry2 hyrule_field_room_00MeshDListEntry0x00025C[50] = {
	{ -2224, -12, 8061, 6040, (u32)hyrule_field_room_00Dlist0x00DAA8, 0 },
	{ 94, -66, 2551, 1881, 0, (u32)hyrule_field_room_00Dlist0x01D2A0 },
	{ -3776, -188, 8279, 4527, 0, (u32)hyrule_field_room_00Dlist0x01D7F8 },
	{ 759, -50, 7784, 3702, 0, (u32)hyrule_field_room_00Dlist0x01CE00 },
	{ -38, -110, 333, 1615, (u32)hyrule_field_room_00Dlist0x00AAB0, 0 },
	{ 2575, -60, 3173, 5103, 0, (u32)hyrule_field_room_00Dlist0x01C860 },
	{ 0, 20, 1160, 234, (u32)hyrule_field_room_00Dlist0x008120, 0 },
	{ 1625, 743, -1439, 1073, (u32)hyrule_field_room_00Dlist0x00AF88, 0 },
	{ -4417, 500, -2570, 1762, (u32)hyrule_field_room_00Dlist0x0006A0, 0 },
	{ -1472, 440, -2550, 1756, (u32)hyrule_field_room_00Dlist0x0008D8, 0 },
	{ 1472, 600, -2550, 1802, (u32)hyrule_field_room_00Dlist0x000B10, 0 },
	{ 4416, 500, -2550, 1772, (u32)hyrule_field_room_00Dlist0x000D48, 0 },
	{ -5889, 250, 0, 1786, (u32)hyrule_field_room_00Dlist0x001030, 0 },
	{ -2945, 150, 0, 1759, (u32)hyrule_field_room_00Dlist0x001440, 0 },
	{ -90, 0, 1007, 1708, (u32)hyrule_field_room_00Dlist0x001788, 0 },
	{ 2878, -10, 0, 1758, (u32)hyrule_field_room_00Dlist0x001D10, 0 },
	{ 5889, 400, 0, 1746, (u32)hyrule_field_room_00Dlist0x0020D0, 0 },
	{ -4417, -100, 2550, 1712, (u32)hyrule_field_room_00Dlist0x0023C8, 0 },
	{ -1472, -50, 2550, 1718, (u32)hyrule_field_room_00Dlist0x002798, 0 },
	{ 1472, 190, 2550, 1712, (u32)hyrule_field_room_00Dlist0x002A40, 0 },
	{ 4416, 481, 2424, 1888, (u32)hyrule_field_room_00Dlist0x002E58, 0 },
	{ -5889, 0, 5100, 1772, (u32)hyrule_field_room_00Dlist0x003280, 0 },
	{ -2945, 0, 5100, 1726, (u32)hyrule_field_room_00Dlist0x003730, 0 },
	{ 0, 130, 5100, 1727, (u32)hyrule_field_room_00Dlist0x003C48, 0 },
	{ 2944, 50, 5100, 1735, (u32)hyrule_field_room_00Dlist0x003F90, 0 },
	{ 5974, 481, 5073, 1850, (u32)hyrule_field_room_00Dlist0x0047F0, 0 },
	{ -7361, 100, 7650, 1802, (u32)hyrule_field_room_00Dlist0x004E30, 0 },
	{ -4417, -100, 7650, 1747, (u32)hyrule_field_room_00Dlist0x0051C0, 0 },
	{ -1472, 0, 7650, 1726, (u32)hyrule_field_room_00Dlist0x005778, 0 },
	{ -1971, 345, 6871, 1190, (u32)hyrule_field_room_00Dlist0x005500, 0 },
	{ 1472, 50, 7650, 1735, (u32)hyrule_field_room_00Dlist0x005A88, 0 },
	{ 4416, -57, 7650, 2037, (u32)hyrule_field_room_00Dlist0x005FE8, 0 },
	{ 7361, 330, 7650, 1763, (u32)hyrule_field_room_00Dlist0x0063B0, 0 },
	{ -5889, 0, 10200, 1772, (u32)hyrule_field_room_00Dlist0x006628, 0 },
	{ -2945, -200, 10200, 1726, (u32)hyrule_field_room_00Dlist0x0068C0, 0 },
	{ 0, -143, 10200, 1737, (u32)hyrule_field_room_00Dlist0x006B38, 0 },
	{ 2944, -200, 10200, 1726, (u32)hyrule_field_room_00Dlist0x006DD0, 0 },
	{ 5889, 100, 10200, 1700, (u32)hyrule_field_room_00Dlist0x007008, 0 },
	{ 5142, 63, 8907, 2591, (u32)hyrule_field_room_00Dlist0x007260, (u32)hyrule_field_room_00Dlist0x01C150 },
	{ -4417, -100, 12750, 1747, (u32)hyrule_field_room_00Dlist0x007590, 0 },
	{ -1472, -300, 12750, 1711, (u32)hyrule_field_room_00Dlist0x007920, 0 },
	{ 1472, -200, 12750, 1726, (u32)hyrule_field_room_00Dlist0x007C90, 0 },
	{ 41, 110, -195, 3280, (u32)hyrule_field_room_00Dlist0x00A050, 0 },
	{ -468, 320, 60, 2633, (u32)hyrule_field_room_00Dlist0x008C60, 0 },
	{ 601, 308, 509, 925, 0, (u32)hyrule_field_room_00Dlist0x01C380 },
	{ 6376, 1223, -2458, 1354, (u32)hyrule_field_room_00Dlist0x0083B0, 0 },
	{ 0, 1053, -3343, 541, (u32)hyrule_field_room_00Dlist0x00A618, 0 },
	{ 1964, -10, 817, 146, (u32)hyrule_field_room_00Dlist0x00B878, 0 },
	{ 5522, -72, 8964, 390, (u32)hyrule_field_room_00Dlist0x00B510, 0 },
	{ 20, 247, 240, 510, (u32)hyrule_field_room_00Dlist0x00A850, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx hyrule_field_room_00Vtx_000580[7] = {
    VTX(-4417, 1000, -2550, 3271, -4352, 8, 117, 21, 255),
    VTX(-4417, 800, -4250, 3271, -18859, 8, 118, 242, 255),
    VTX(-5889, 1000, -3400, -9293, -11605, 0, 120, 0, 255),
    VTX(-5889, 800, -1700, -9293, 2901, 11, 110, 45, 255),
    VTX(-4417, 0, -890, 3271, 10155, 10, 102, 61, 255),
    VTX(-2944, 600, -1700, 15834, 2901, 8, 110, 46, 255),
    VTX(-2944, 800, -3400, 15834, -11605, 12, 119, 7, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0005F0[3] = {
    VTX(-5889, 1000, -3400, -9293, -11605, 0, 120, 0, 255),
    VTX(-5889, 800, -1700, -9293, 2901, 11, 110, 45, 255),
    VTX(-4417, 1000, -2550, 3271, -4352, 8, 117, 21, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000620[8] = {
    VTX(-5889, 0, -890, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 0, -890, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 599, -4285, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 599, -4285, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 686, -769, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 686, -769, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 1285, -4165, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 1285, -4165, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0006A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_000620[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_000580[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0005F0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0007B8[7] = {
    VTX(-1472, 600, -2550, 3821, -4352, 10, 115, 30, 255),
    VTX(-1472, 800, -4250, 3821, -18859, 253, 119, 14, 255),
    VTX(-2944, 800, -3400, -8742, -11605, 12, 119, 7, 255),
    VTX(-2944, 600, -1700, -8742, 2901, 8, 110, 46, 255),
    VTX(-1472, 0, -850, 3821, 10155, 15, 108, 50, 255),
    VTX(0, 0, -1700, 16384, 2901, 251, 108, 50, 255),
    VTX(0, 880, -3400, 16384, -11605, 246, 113, 38, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000828[3] = {
    VTX(-2944, 800, -3400, -8742, -11605, 12, 119, 7, 255),
    VTX(-2944, 600, -1700, -8742, 2901, 8, 110, 46, 255),
    VTX(-1472, 600, -2550, 3821, -4352, 10, 115, 30, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000858[8] = {
    VTX(-2944, -145, -876, 0, 0, 0, 0, 0, 0),
    VTX(0, -145, -876, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 460, -4310, 0, 0, 0, 0, 0, 0),
    VTX(0, 460, -4310, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 437, -773, 0, 0, 0, 0, 0, 0),
    VTX(0, 437, -773, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 1042, -4207, 0, 0, 0, 0, 0, 0),
    VTX(0, 1042, -4207, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0008D8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_000858[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0007B8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_000828[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0009F0[7] = {
    VTX(1472, 800, -2550, 4371, -4352, 6, 112, 42, 255),
    VTX(1472, 1200, -4250, 4371, -18859, 11, 116, 27, 255),
    VTX(0, 880, -3400, -8192, -11605, 246, 113, 38, 255),
    VTX(0, 0, -1700, -8192, 2901, 251, 108, 50, 255),
    VTX(1472, 0, -850, 4371, 10155, 0, 114, 34, 255),
    VTX(2944, 0, -1700, 16934, 2901, 0, 116, 30, 255),
    VTX(2944, 600, -3400, 16934, -11605, 4, 116, 27, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000A60[3] = {
    VTX(0, 880, -3400, -8192, -11605, 246, 113, 38, 255),
    VTX(0, 0, -1700, -8192, 2901, 251, 108, 50, 255),
    VTX(1472, 800, -2550, 4371, -4352, 6, 112, 42, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000A90[8] = {
    VTX(0, -290, -955, 0, 0, 0, 0, 0, 0),
    VTX(2944, -290, -955, 0, 0, 0, 0, 0, 0),
    VTX(0, 943, -4343, 0, 0, 0, 0, 0, 0),
    VTX(2944, 943, -4343, 0, 0, 0, 0, 0, 0),
    VTX(0, 160, -792, 0, 0, 0, 0, 0, 0),
    VTX(2944, 160, -792, 0, 0, 0, 0, 0, 0),
    VTX(0, 1393, -4180, 0, 0, 0, 0, 0, 0),
    VTX(2944, 1393, -4180, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x000B10[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_000A90[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0009F0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_000A60[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_000C28[7] = {
    VTX(4417, 800, -2550, 4921, -4352, 233, 114, 26, 255),
    VTX(4417, 800, -4250, 4921, -18859, 240, 118, 0, 255),
    VTX(2944, 600, -3400, -7642, -11605, 4, 116, 27, 255),
    VTX(2944, 0, -1700, -7642, 2901, 0, 116, 30, 255),
    VTX(4417, 0, -850, 4921, 10155, 226, 114, 17, 255),
    VTX(5889, 800, -1700, 17485, 2901, 232, 116, 16, 255),
    VTX(5889, 1000, -3400, 17485, -11605, 244, 119, 7, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000C98[3] = {
    VTX(2944, 600, -3400, -7642, -11605, 4, 116, 27, 255),
    VTX(2944, 0, -1700, -7642, 2901, 0, 116, 30, 255),
    VTX(4417, 800, -2550, 4921, -4352, 233, 114, 26, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000CC8[8] = {
    VTX(2161, -193, -2743, 0, 0, 0, 0, 0, 0),
    VTX(4215, -193, -295, 0, 0, 0, 0, 0, 0),
    VTX(4672, 1000, -4850, 0, 0, 0, 0, 0, 0),
    VTX(6726, 1000, -2402, 0, 0, 0, 0, 0, 0),
    VTX(2058, 179, -2656, 0, 0, 0, 0, 0, 0),
    VTX(4111, 179, -208, 0, 0, 0, 0, 0, 0),
    VTX(4569, 1372, -4763, 0, 0, 0, 0, 0, 0),
    VTX(6622, 1372, -2315, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x000D48[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_000CC8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_000C28[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_000C98[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_000E60[10] = {
    VTX(-5922, 9, -19, -1101, 1024, 5, 114, 36, 255),
    VTX(-5889, 800, -1700, -1101, -13483, 11, 110, 45, 255),
    VTX(-7361, 400, -850, -13664, -6229, 4, 110, 45, 255),
    VTX(-7361, -200, 850, -13664, 8277, 251, 118, 21, 255),
    VTX(-5889, 0, 1700, -1101, 15531, 239, 118, 1, 255),
    VTX(-5889, -300, 0, -1101, 1024, 68, 90, 39, 255),
    VTX(-5889, -300, 1700, -1101, 15531, 66, 99, 0, 255),
    VTX(-4417, -300, 850, 11463, 8277, 0, 120, 0, 255),
    VTX(-4417, -300, -850, 11463, -6229, 15, 101, 63, 255),
    VTX(-4417, 0, -890, 11463, -6229, 10, 102, 61, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000F00[3] = {
    VTX(-7361, 400, -850, -13664, -6229, 4, 110, 45, 255),
    VTX(-7361, -200, 850, -13664, 8277, 251, 118, 21, 255),
    VTX(-5922, 9, -19, -1101, 1024, 5, 114, 36, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000F30[8] = {
    VTX(-4417, -300, -850, 4096, 2048, 15, 101, 63, 255),
    VTX(-4417, 100, -850, 4096, 0, 27, 0, 116, 255),
    VTX(-5889, 100, 0, 0, 0, 103, 0, 60, 255),
    VTX(-5889, -300, 0, 0, 2048, 68, 90, 39, 255),
    VTX(-5889, -300, 0, 4096, 2048, 68, 90, 39, 255),
    VTX(-5889, 100, 0, 4096, 0, 103, 0, 60, 255),
    VTX(-5889, 100, 1700, 0, 0, 120, 0, 0, 255),
    VTX(-5889, -300, 1700, 0, 2048, 66, 99, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_000FB0[8] = {
    VTX(-7361, -736, 1623, 0, 0, 0, 0, 0, 0),
    VTX(-4417, -736, 1623, 0, 0, 0, 0, 0, 0),
    VTX(-7361, -121, -1862, 0, 0, 0, 0, 0, 0),
    VTX(-4417, -121, -1862, 0, 0, 0, 0, 0, 0),
    VTX(-7361, 185, 1786, 0, 0, 0, 0, 0, 0),
    VTX(-4417, 185, 1786, 0, 0, 0, 0, 0, 0),
    VTX(-7361, 800, -1700, 0, 0, 0, 0, 0, 0),
    VTX(-4417, 800, -1700, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x001030[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_000FB0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_000E60[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 5, 0),
    gsSP1Triangle(1, 0, 9, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_000F00[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_000F30[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0011B0[18] = {
    VTX(-4417, -300, 850, -13113, 8277, 0, 120, 0, 255),
    VTX(-2944, -300, 1700, -550, 15531, 231, 114, 25, 255),
    VTX(-2944, -300, 0, -550, 1024, 0, 120, 0, 255),
    VTX(-1822, -300, 371, 9031, 4189, 0, 120, 0, 255),
    VTX(-1472, -300, -850, 12013, -6229, 0, 120, 0, 255),
    VTX(-2161, -300, 710, 6135, 7085, 214, 107, 223, 255),
    VTX(-1652, 0, 314, 10479, 3706, 0, 120, 0, 255),
    VTX(-1991, 0, 654, 7583, 6602, 0, 120, 0, 255),
    VTX(-1935, 0, 710, 8066, 7085, 0, 120, 0, 255),
    VTX(-1472, 0, 850, 12013, 8277, 0, 120, 0, 255),
    VTX(-2048, 0, 823, 7100, 8051, 52, 107, 12, 255),
    VTX(-2145, 0, 1238, 6273, 11591, 77, 89, 237, 255),
    VTX(-2944, -300, -850, -550, -6229, 0, 120, 0, 255),
    VTX(-2944, 600, -1700, -550, -13483, 8, 110, 46, 255),
    VTX(-2944, 0, -850, -550, -6229, 255, 98, 69, 255),
    VTX(-1472, 0, -850, 12013, -6229, 15, 108, 50, 255),
    VTX(-4417, -300, -850, -13113, -6229, 15, 101, 63, 255),
    VTX(-4417, 0, -890, -13113, -6229, 10, 102, 61, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0012D0[3] = {
    VTX(-4417, -300, -850, -13113, -6229, 15, 101, 63, 255),
    VTX(-4417, -300, 850, -13113, 8277, 0, 120, 0, 255),
    VTX(-2944, -300, 0, -550, 1024, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_001300[8] = {
    VTX(-2161, -300, 710, 0, 1024, 214, 107, 223, 255),
    VTX(-2944, -300, 1700, 4096, 1024, 231, 114, 25, 255),
    VTX(-2944, 120, 1700, 4096, 0, 138, 0, 20, 255),
    VTX(-2161, 140, 710, 0, -49, 162, 0, 182, 255),
    VTX(-2048, 0, 823, 1536, 1024, 52, 107, 12, 255),
    VTX(-2048, 120, 823, 1536, 0, 116, 0, 27, 255),
    VTX(-2145, 160, 1238, 0, 0, 116, 0, 228, 255),
    VTX(-2145, 0, 1238, 0, 1024, 77, 89, 237, 255),
}; 

static Vtx hyrule_field_room_00Vtx_001380[4] = {
    VTX(-2953, -300, -760, 4096, 2048, 249, 0, 119, 255),
    VTX(-2953, 100, -760, 4096, 0, 249, 0, 119, 255),
    VTX(-4417, 100, -850, 0, 0, 27, 0, 116, 255),
    VTX(-4417, -300, -850, 0, 2048, 15, 101, 63, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0013C0[8] = {
    VTX(-4417, -736, 1623, 0, 0, 0, 0, 0, 0),
    VTX(-1472, -736, 1623, 0, 0, 0, 0, 0, 0),
    VTX(-4417, -128, -1828, 0, 0, 0, 0, 0, 0),
    VTX(-1472, -128, -1828, 0, 0, 0, 0, 0, 0),
    VTX(-4417, 107, 1772, 0, 0, 0, 0, 0, 0),
    VTX(-1472, 107, 1772, 0, 0, 0, 0, 0, 0),
    VTX(-4417, 716, -1680, 0, 0, 0, 0, 0, 0),
    VTX(-1472, 716, -1680, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x001440[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_0013C0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0011B0[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 3, 2, 0, 1, 5, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 10, 11, 9, 0),
    gsSP2Triangles(12, 2, 4, 0, 13, 14, 15, 0),
    gsSP2Triangles(2, 12, 16, 0, 14, 13, 17, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0012D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_001300[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_001380[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_001628[11] = {
    VTX(1472, 0, 850, 12563, 85, 3, 119, 254, 255),
    VTX(793, 0, 1080, 6763, 2048, 0, 120, 0, 255),
    VTX(0, 0, 1700, 0, 7339, 0, 120, 0, 255),
    VTX(180, 0, 1320, 1536, 4096, 0, 120, 0, 255),
    VTX(-180, 0, 1320, -1536, 4096, 0, 120, 0, 255),
    VTX(-886, 0, 1080, -7563, 2048, 0, 120, 0, 255),
    VTX(-1472, 0, 850, -12563, 85, 0, 120, 0, 255),
    VTX(180, 0, 1080, 1536, 2048, 0, 120, 0, 255),
    VTX(1379, 0, 494, 11766, -2955, 221, 106, 42, 255),
    VTX(-1652, 0, 314, -14097, -4486, 0, 120, 0, 255),
    VTX(-180, 0, 1080, -1536, 2048, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0016D8[3] = {
    VTX(-886, 0, 1080, -7563, 2048, 0, 120, 0, 255),
    VTX(-180, 0, 1320, -1536, 4096, 0, 120, 0, 255),
    VTX(-180, 0, 1080, -1536, 2048, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_001708[8] = {
    VTX(-1652, 0, 314, 0, 0, 0, 0, 0, 0),
    VTX(1472, 0, 314, 0, 0, 0, 0, 0, 0),
    VTX(-1652, 0, 314, 0, 0, 0, 0, 0, 0),
    VTX(1472, 0, 314, 0, 0, 0, 0, 0, 0),
    VTX(-1652, 0, 1700, 0, 0, 0, 0, 0, 0),
    VTX(1472, 0, 1700, 0, 0, 0, 0, 0, 0),
    VTX(-1652, 0, 1700, 0, 0, 0, 0, 0, 0),
    VTX(1472, 0, 1700, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x001788[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_001708[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_001628[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 3, 0, 2, 4, 5, 0),
    gsSP2Triangles(5, 6, 2, 0, 1, 7, 3, 0),
    gsSP2Triangles(1, 0, 8, 0, 9, 6, 5, 0),
    gsSP2Triangles(3, 7, 10, 0, 3, 10, 4, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0016D8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0018B0[21] = {
    VTX(2944, 0, 0, 550, 1024, 0, 119, 2, 255),
    VTX(2944, 0, -1700, 550, -13483, 0, 116, 30, 255),
    VTX(1472, 0, -850, -12013, -6229, 0, 114, 34, 255),
    VTX(4417, 0, 850, 13113, 8277, 231, 117, 249, 255),
    VTX(4417, 0, -850, 13113, -6229, 226, 114, 17, 255),
    VTX(2131, 20, -565, -6393, -3793, 0, 119, 3, 255),
    VTX(2018, 20, -678, -7359, -4759, 254, 119, 2, 255),
    VTX(1339, 0, 1, -13151, 1034, 254, 119, 2, 255),
    VTX(1565, 0, 227, -11221, 2965, 0, 119, 2, 255),
    VTX(1804, 0, 143, -9184, 2243, 1, 119, 4, 255),
    VTX(1605, 0, 267, -10879, 3306, 244, 118, 14, 255),
    VTX(1472, 0, 850, -12013, 8277, 3, 119, 254, 255),
    VTX(1734, -20, 792, -9780, 7784, 21, 117, 242, 255),
    VTX(1379, 0, 494, -12810, 5237, 221, 106, 42, 255),
    VTX(1861, -20, 589, -8692, 6050, 214, 101, 49, 255),
    VTX(3143, -20, 1585, 2245, 14552, 222, 107, 42, 255),
    VTX(2944, -20, 1700, 550, 15531, 4, 119, 248, 255),
    VTX(1577, -20, 296, -11121, 3548, 183, 63, 71, 255),
    VTX(1734, -20, 792, -1588, 7784, 21, 117, 242, 255),
    VTX(1407, -20, 465, -4377, 4996, 72, 63, 184, 255),
    VTX(1379, 0, 494, -4618, 5237, 221, 106, 42, 255),
}; 

static Vtx hyrule_field_room_00Vtx_001A00[3] = {
    VTX(2944, 0, 0, 550, 1024, 0, 119, 2, 255),
    VTX(2131, 20, -565, -6393, -3793, 0, 119, 3, 255),
    VTX(1804, 0, 143, -9184, 2243, 1, 119, 4, 255),
}; 

static Vtx hyrule_field_room_00Vtx_001A30[16] = {
    VTX(1734, -20, 792, 4096, 2048, 21, 117, 242, 255),
    VTX(1734, 100, 792, 4096, 0, 182, 0, 94, 255),
    VTX(1379, 120, 494, -3584, 0, 175, 0, 88, 255),
    VTX(1379, 0, 494, -3584, 2048, 221, 106, 42, 255),
    VTX(1379, 0, 494, 1024, 2048, 221, 106, 42, 255),
    VTX(1379, 120, 494, 1024, 0, 175, 0, 88, 255),
    VTX(1339, 120, 454, 0, 0, 172, 0, 85, 255),
    VTX(1339, 0, 454, 0, 2048, 172, 0, 85, 255),
    VTX(1828, -20, 863, 2048, 2048, 184, 0, 96, 255),
    VTX(1828, 100, 863, 2048, 0, 184, 0, 96, 255),
    VTX(1734, 100, 792, 0, 0, 182, 0, 94, 255),
    VTX(1734, -20, 792, 0, 2048, 21, 117, 242, 255),
    VTX(2944, -20, 1700, 13824, 2048, 4, 119, 248, 255),
    VTX(2944, 100, 1700, 13824, 0, 180, 0, 92, 255),
    VTX(1828, 100, 863, -10240, 0, 184, 0, 96, 255),
    VTX(1828, -20, 863, -10240, 2048, 184, 0, 96, 255),
}; 

static Vtx hyrule_field_room_00Vtx_001B30[6] = {
    VTX(1861, -140, 589, -2110, -2444, 200, 85, 63, 255),
    VTX(1734, -140, 792, -2247, -2227, 55, 85, 192, 255),
    VTX(2944, -140, 1700, -955, -1259, 54, 85, 191, 255),
    VTX(3143, -140, 1585, -743, -1381, 202, 85, 65, 255),
    VTX(1407, -140, 465, -2595, -2576, 60, 84, 196, 255),
    VTX(1577, -140, 296, -2414, -2757, 195, 84, 59, 255),
}; 

static Vtx hyrule_field_room_00Vtx_001B90[16] = {
    VTX(1861, -20, 589, -4096, 0, 214, 101, 49, 255),
    VTX(1861, -140, 589, -4096, 1024, 200, 85, 63, 255),
    VTX(3143, -140, 1585, 8334, 1024, 202, 85, 65, 255),
    VTX(3143, -20, 1585, 8334, 0, 222, 107, 42, 255),
    VTX(1577, -20, 296, -1177, 0, 183, 63, 71, 255),
    VTX(1577, -140, 296, -1177, 1024, 195, 84, 59, 255),
    VTX(1861, -140, 589, 2389, 1024, 200, 85, 63, 255),
    VTX(1861, -20, 589, 2389, 0, 214, 101, 49, 255),
    VTX(2944, -140, 1700, -3101, 1024, 54, 85, 191, 255),
    VTX(1734, -140, 792, 8192, 1024, 55, 85, 192, 255),
    VTX(1734, -20, 792, 8192, 0, 21, 117, 242, 255),
    VTX(2944, -20, 1700, -3101, 0, 4, 119, 248, 255),
    VTX(1734, -140, 792, -1213, 1024, 55, 85, 192, 255),
    VTX(1407, -140, 465, 2731, 1024, 60, 84, 196, 255),
    VTX(1407, -20, 465, 2731, 0, 72, 63, 184, 255),
    VTX(1734, -20, 792, -1213, 0, 21, 117, 242, 255),
}; 

static Vtx hyrule_field_room_00Vtx_001C90[8] = {
    VTX(2208, -140, -2125, 0, 0, 0, 0, 0, 0),
    VTX(5153, -140, -425, 0, 0, 0, 0, 0, 0),
    VTX(2208, 120, -2125, 0, 0, 0, 0, 0, 0),
    VTX(5153, 120, -425, 0, 0, 0, 0, 0, 0),
    VTX(736, -140, 425, 0, 0, 0, 0, 0, 0),
    VTX(3681, -140, 2125, 0, 0, 0, 0, 0, 0),
    VTX(736, 120, 425, 0, 0, 0, 0, 0, 0),
    VTX(3681, 120, 2125, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x001D10[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_001C90[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0018B0[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(0, 4, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 5, 7, 0, 9, 8, 10, 0),
    gsSP2Triangles(8, 9, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(9, 10, 14, 0, 0, 9, 14, 0),
    gsSP2Triangles(0, 14, 15, 0, 16, 12, 11, 0),
    gsSP2Triangles(15, 3, 0, 0, 10, 17, 14, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_001A00[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00F428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_001A30[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 120, 120, 90, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_001B30[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 4, 0, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_019828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_001B90[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_001FB0[7] = {
    VTX(5889, 800, 0, 1101, 1024, 227, 116, 0, 255),
    VTX(5889, 800, -1700, 1101, -13483, 232, 116, 16, 255),
    VTX(4417, 0, -850, -11463, -6229, 226, 114, 17, 255),
    VTX(4417, 0, 850, -11463, 8277, 231, 117, 249, 255),
    VTX(5889, 800, 1700, 1101, 15531, 231, 116, 240, 255),
    VTX(7361, 800, 850, 13664, 8277, 0, 120, 0, 255),
    VTX(7361, 800, -850, 13664, -6229, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002020[3] = {
    VTX(4417, 0, -850, -11463, -6229, 226, 114, 17, 255),
    VTX(4417, 0, 850, -11463, 8277, 231, 117, 249, 255),
    VTX(5889, 800, 0, 1101, 1024, 227, 116, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002050[8] = {
    VTX(4034, -50, -1373, 0, 0, 0, 0, 0, 0),
    VTX(4615, -50, 1925, 0, 0, 0, 0, 0, 0),
    VTX(7220, 520, -1935, 0, 0, 0, 0, 0, 0),
    VTX(7802, 520, 1363, 0, 0, 0, 0, 0, 0),
    VTX(3929, 553, -1354, 0, 0, 0, 0, 0, 0),
    VTX(4510, 553, 1943, 0, 0, 0, 0, 0, 0),
    VTX(7115, 1124, -1916, 0, 0, 0, 0, 0, 0),
    VTX(7697, 1124, 1381, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0020D0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_002050[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_001FB0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_002020[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0021E8[7] = {
    VTX(-4417, -300, 2550, 3271, -1792, 19, 113, 33, 255),
    VTX(-4417, -300, 850, 3271, -16299, 0, 120, 0, 255),
    VTX(-5889, -300, 1700, -9293, -9045, 66, 99, 0, 255),
    VTX(-5889, -300, 3400, -9293, 5461, 63, 99, 22, 255),
    VTX(-4417, -300, 4250, 3271, 12715, 0, 118, 238, 255),
    VTX(-2944, -300, 3400, 15834, 5461, 246, 119, 249, 255),
    VTX(-2944, -300, 1700, 15834, -9045, 231, 114, 25, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002258[3] = {
    VTX(-5889, -300, 1700, -9293, -9045, 66, 99, 0, 255),
    VTX(-5889, -300, 3400, -9293, 5461, 63, 99, 22, 255),
    VTX(-4417, -300, 2550, 3271, -1792, 19, 113, 33, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002288[8] = {
    VTX(-2944, -300, 1700, 13312, 2048, 231, 114, 25, 255),
    VTX(-2944, -180, 1700, 13312, 0, 60, 0, 103, 255),
    VTX(-4417, -180, 2550, -15360, 0, 60, 0, 103, 255),
    VTX(-4417, -300, 2550, -15360, 2048, 19, 113, 33, 255),
    VTX(-4417, -300, 2550, 13312, 2048, 19, 113, 33, 255),
    VTX(-4417, -180, 2550, 13312, 0, 60, 0, 103, 255),
    VTX(-5889, -180, 3400, -15360, 0, 60, 0, 103, 255),
    VTX(-5889, -300, 3400, -15360, 2048, 63, 99, 22, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002308[4] = {
    VTX(-5889, -300, 1700, 4096, 2048, 66, 99, 0, 255),
    VTX(-5889, 100, 1700, 4096, 0, 120, 0, 0, 255),
    VTX(-5889, 100, 3400, 0, 0, 116, 0, 29, 255),
    VTX(-5889, -300, 3400, 0, 2048, 63, 99, 22, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002348[8] = {
    VTX(-5889, -300, 850, 0, 0, 0, 0, 0, 0),
    VTX(-2944, -300, 850, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 100, 850, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 100, 850, 0, 0, 0, 0, 0, 0),
    VTX(-5889, -300, 4250, 0, 0, 0, 0, 0, 0),
    VTX(-2944, -300, 4250, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 100, 4250, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 100, 4250, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0023C8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_002348[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0021E8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_002258[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00F428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_002288[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_002308[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0025A8[8] = {
    VTX(-2944, -300, 3400, -8742, 5461, 246, 119, 249, 255),
    VTX(-1472, -180, 4250, 3821, 12715, 251, 119, 248, 255),
    VTX(-1791, 0, 2430, 1101, -2814, 253, 103, 60, 255),
    VTX(-1472, 0, 850, 3821, -16299, 0, 120, 0, 255),
    VTX(-1456, 0, 2042, 3959, -6125, 35, 114, 4, 255),
    VTX(0, 0, 1700, 16384, -9045, 0, 120, 0, 255),
    VTX(-2145, 0, 1238, -1919, -12985, 77, 89, 237, 255),
    VTX(0, 0, 3400, 16384, 5461, 241, 118, 245, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002628[3] = {
    VTX(-2944, -300, 3400, -8742, 5461, 246, 119, 249, 255),
    VTX(-1791, 0, 2430, 1101, -2814, 253, 103, 60, 255),
    VTX(-2944, -300, 1700, -8742, -9045, 231, 114, 25, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002658[12] = {
    VTX(-2944, -300, 1700, 0, 1024, 231, 114, 25, 255),
    VTX(-1791, 0, 2430, 5120, 1024, 253, 103, 60, 255),
    VTX(-1791, 200, 2430, 5120, 0, 18, 0, 118, 255),
    VTX(-2944, 120, 1700, 0, 0, 138, 0, 20, 255),
    VTX(-1791, 200, 2430, 0, 0, 18, 0, 118, 255),
    VTX(-1791, 0, 2430, 0, 1024, 253, 103, 60, 255),
    VTX(-1456, 0, 2042, 2048, 1024, 35, 114, 4, 255),
    VTX(-1456, 200, 2042, 2048, 0, 119, 0, 0, 255),
    VTX(-1456, 200, 2042, 0, 0, 119, 0, 0, 255),
    VTX(-1456, 0, 2042, 0, 1024, 35, 114, 4, 255),
    VTX(-2145, 0, 1238, 4096, 1024, 77, 89, 237, 255),
    VTX(-2145, 160, 1238, 4096, 0, 116, 0, 228, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002718[8] = {
    VTX(-2944, -300, 850, 0, 0, 0, 0, 0, 0),
    VTX(0, -300, 850, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 200, 850, 0, 0, 0, 0, 0, 0),
    VTX(0, 200, 850, 0, 0, 0, 0, 0, 0),
    VTX(-2944, -300, 4250, 0, 0, 0, 0, 0, 0),
    VTX(0, -300, 4250, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 200, 4250, 0, 0, 0, 0, 0, 0),
    VTX(0, 200, 4250, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x002798[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_002718[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0025A8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(7, 4, 1, 0, 4, 2, 1, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_002628[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_002658[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_002920[7] = {
    VTX(1472, 0, 2550, 4371, -1792, 252, 119, 244, 255),
    VTX(1472, 0, 850, 4371, -16299, 3, 119, 254, 255),
    VTX(0, 0, 1700, -8192, -9045, 0, 120, 0, 255),
    VTX(0, 0, 3400, -8192, 5461, 241, 118, 245, 255),
    VTX(1472, 400, 4250, 4371, 12715, 13, 118, 243, 255),
    VTX(2944, 200, 3400, 16934, 5461, 9, 117, 235, 255),
    VTX(2944, -20, 1700, 16934, -9045, 4, 119, 248, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002990[3] = {
    VTX(0, 0, 1700, -8192, -9045, 0, 120, 0, 255),
    VTX(0, 0, 3400, -8192, 5461, 241, 118, 245, 255),
    VTX(1472, 0, 2550, 4371, -1792, 252, 119, 244, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0029C0[8] = {
    VTX(736, -20, 425, 0, 0, 0, 0, 0, 0),
    VTX(3681, -20, 2125, 0, 0, 0, 0, 0, 0),
    VTX(736, 400, 425, 0, 0, 0, 0, 0, 0),
    VTX(3681, 400, 2125, 0, 0, 0, 0, 0, 0),
    VTX(-736, -20, 2975, 0, 0, 0, 0, 0, 0),
    VTX(2208, -20, 4675, 0, 0, 0, 0, 0, 0),
    VTX(-736, 400, 2975, 0, 0, 0, 0, 0, 0),
    VTX(2208, 400, 4675, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x002A40[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_0029C0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_002920[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(0, 6, 1, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_002990[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_002B58[12] = {
    VTX(2944, -20, 1700, -7642, -9045, 4, 119, 248, 255),
    VTX(4855, -20, 3997, 8665, 10553, 24, 117, 245, 255),
    VTX(5253, -20, 3767, 12055, 8596, 0, 120, 0, 255),
    VTX(5889, 800, 1700, 17485, -9045, 231, 116, 240, 255),
    VTX(4853, 792, 2327, 8645, -3696, 236, 114, 225, 255),
    VTX(5889, 1000, 3400, 17485, 5461, 247, 118, 242, 255),
    VTX(4417, 0, 850, 4921, -16299, 231, 117, 249, 255),
    VTX(2944, 200, 3400, -7642, 5461, 9, 117, 235, 255),
    VTX(4417, 160, 4250, 4921, 12715, 33, 115, 252, 255),
    VTX(3143, -20, 1585, -5947, -10024, 222, 107, 42, 255),
    VTX(4287, -38, 1844, 3813, -7815, 198, 103, 18, 255),
    VTX(5500, -20, 3624, 14167, 7377, 185, 46, 85, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002C18[3] = {
    VTX(2944, 200, 3400, -7642, 5461, 9, 117, 235, 255),
    VTX(4855, -20, 3997, 8665, 10553, 24, 117, 245, 255),
    VTX(2944, -20, 1700, -7642, -9045, 4, 119, 248, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002C48[8] = {
    VTX(5253, -20, 3767, 28160, 2048, 0, 120, 0, 255),
    VTX(5253, 100, 3767, 28160, 0, 137, 0, 244, 255),
    VTX(2944, 100, 1700, -24576, 0, 180, 0, 92, 255),
    VTX(2944, -20, 1700, -24576, 2048, 4, 119, 248, 255),
    VTX(4855, -20, 3997, 4096, 2048, 24, 117, 245, 255),
    VTX(4855, 100, 3997, 4096, 0, 159, 0, 186, 255),
    VTX(5253, 100, 3767, -3584, 0, 137, 0, 244, 255),
    VTX(5253, -20, 3767, -3584, 2048, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002CC8[5] = {
    VTX(4287, -38, 1844, -1241, 2048, 198, 103, 18, 255),
    VTX(4939, 919, 2400, 195, 0, 158, 50, 46, 255),
    VTX(4417, 0, 598, -1241, 0, 160, 70, 248, 255),
    VTX(5500, -20, 3624, 1632, 2048, 185, 46, 85, 255),
    VTX(5852, 1102, 3346, 1632, 0, 188, 43, 88, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002D18[4] = {
    VTX(3143, -140, 1585, -743, -1381, 202, 85, 65, 255),
    VTX(2944, -140, 1700, -955, -1259, 54, 85, 191, 255),
    VTX(5253, -140, 3767, 1507, 946, 43, 111, 4, 255),
    VTX(5500, -140, 3624, 1771, 794, 219, 100, 55, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002D58[8] = {
    VTX(5253, -20, 3767, -4491, 0, 0, 120, 0, 255),
    VTX(5253, -140, 3767, -4491, 1024, 43, 111, 4, 255),
    VTX(2944, -140, 1700, 12629, 1024, 54, 85, 191, 255),
    VTX(2944, -20, 1700, 12629, 0, 4, 119, 248, 255),
    VTX(3143, -20, 1585, -10923, 0, 222, 107, 42, 255),
    VTX(3143, -140, 1585, -10923, 1024, 202, 85, 65, 255),
    VTX(5500, -140, 3624, 17556, 1024, 219, 100, 55, 255),
    VTX(5500, -20, 3624, 17556, 0, 185, 46, 85, 255),
}; 

static Vtx hyrule_field_room_00Vtx_002DD8[8] = {
    VTX(2426, -837, 1747, 0, 0, 0, 0, 0, 0),
    VTX(4007, -837, 4486, 0, 0, 0, 0, 0, 0),
    VTX(5193, 326, 150, 0, 0, 0, 0, 0, 0),
    VTX(6774, 326, 2889, 0, 0, 0, 0, 0, 0),
    VTX(2099, 200, 1936, 0, 0, 0, 0, 0, 0),
    VTX(3681, 200, 4675, 0, 0, 0, 0, 0, 0),
    VTX(4866, 1363, 338, 0, 0, 0, 0, 0, 0),
    VTX(6448, 1363, 3077, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x002E58[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_002DD8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_002B58[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 7, 8, 1, 0),
    gsSP2Triangles(6, 9, 10, 0, 10, 9, 11, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_002C18[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00F428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_002C48[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_002CC8[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0, 120, 120, 90, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_002D18[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_019828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_002D58[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_003100[7] = {
    VTX(-5889, 100, 5100, 7091, -4608, 4, 119, 253, 255),
    VTX(-5889, -300, 3400, 7091, -19115, 63, 99, 22, 255),
    VTX(-7361, -100, 4250, -5472, -11861, 252, 118, 235, 255),
    VTX(-7361, 100, 5950, -5472, 2645, 65, 86, 52, 255),
    VTX(-5889, -500, 6800, 7091, 9899, 248, 117, 22, 255),
    VTX(-4417, 100, 5950, 19655, 2645, 218, 112, 242, 255),
    VTX(-4417, -300, 4250, 19655, -11861, 0, 118, 238, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003170[3] = {
    VTX(-7361, -100, 4250, -5472, -11861, 252, 118, 235, 255),
    VTX(-7361, 100, 5950, -5472, 2645, 65, 86, 52, 255),
    VTX(-5889, 100, 5100, 7091, -4608, 4, 119, 253, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0031A0[6] = {
    VTX(-5889, -300, 3400, 4096, 2048, 63, 99, 22, 255),
    VTX(-5889, 100, 3400, 4096, 0, 116, 0, 29, 255),
    VTX(-6573, 407, 4705, 2048, 0, 103, 0, 60, 255),
    VTX(-6573, 7, 4705, 2048, 2048, 103, 0, 60, 255),
    VTX(-7361, 500, 5950, 0, 0, 83, 0, 86, 255),
    VTX(-7361, 100, 5950, 0, 2048, 65, 86, 52, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003200[8] = {
    VTX(-4696, -818, 3190, 0, 0, 0, 0, 0, 0),
    VTX(-4115, -818, 6487, 0, 0, 0, 0, 0, 0),
    VTX(-4548, 37, 3164, 0, 0, 0, 0, 0, 0),
    VTX(-3966, 37, 6461, 0, 0, 0, 0, 0, 0),
    VTX(-7883, -247, 3752, 0, 0, 0, 0, 0, 0),
    VTX(-7301, -247, 7049, 0, 0, 0, 0, 0, 0),
    VTX(-7734, 608, 3725, 0, 0, 0, 0, 0, 0),
    VTX(-7153, 608, 7023, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x003280[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_003200[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_003100[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_003170[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_0031A0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_003400[12] = {
    VTX(-4417, 100, 5950, -13113, 2645, 218, 112, 242, 255),
    VTX(-2944, 0, 6800, -550, 9899, 252, 119, 2, 255),
    VTX(-2944, 100, 5100, -550, -4608, 255, 112, 213, 255),
    VTX(-1472, 100, 5950, 12013, 2645, 21, 116, 237, 255),
    VTX(-1472, 0, 5100, 12013, -4608, 246, 117, 232, 255),
    VTX(-1472, -180, 4250, 12013, -11861, 251, 119, 248, 255),
    VTX(-4417, -300, 4250, -13113, -11861, 0, 118, 238, 255),
    VTX(-2944, -300, 3400, -550, -19115, 246, 119, 249, 255),
    VTX(-2019, 100, 5635, 7350, -47, 12, 44, 145, 255),
    VTX(-2201, 100, 5529, 5796, -944, 90, 44, 191, 255),
    VTX(-2401, 200, 5876, 4089, 2012, 95, 62, 219, 255),
    VTX(-2219, 200, 5981, 5643, 2909, 240, 62, 155, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0034C0[3] = {
    VTX(-4417, -300, 4250, -13113, -11861, 0, 118, 238, 255),
    VTX(-4417, 100, 5950, -13113, 2645, 218, 112, 242, 255),
    VTX(-2944, 100, 5100, -550, -4608, 255, 112, 213, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0034F0[4] = {
    VTX(-2201, 100, 5529, 2048, 2048, 90, 44, 191, 255),
    VTX(-2201, 220, 5529, 2048, 0, 60, 0, 153, 255),
    VTX(-2019, 220, 5635, -1536, 0, 60, 0, 153, 255),
    VTX(-2019, 100, 5635, -1536, 2048, 12, 44, 145, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003530[24] = {
    VTX(-2401, 200, 5876, 1536, 512, 95, 62, 219, 255),
    VTX(-2401, 300, 5876, 1536, 0, 115, 0, 225, 255),
    VTX(-2219, 300, 5981, 512, 0, 225, 0, 141, 255),
    VTX(-2219, 200, 5981, 512, 512, 240, 62, 155, 255),
    VTX(-2201, 100, 5529, 1024, 1024, 90, 44, 191, 255),
    VTX(-2201, 300, 5529, 1024, 0, 115, 0, 225, 255),
    VTX(-2401, 300, 5876, 512, 0, 115, 0, 225, 255),
    VTX(-2401, 200, 5876, 512, 512, 95, 62, 219, 255),
    VTX(-2219, 200, 5981, 512, 512, 240, 62, 155, 255),
    VTX(-2219, 300, 5981, 512, 0, 225, 0, 141, 255),
    VTX(-2019, 300, 5635, 0, 0, 225, 0, 141, 255),
    VTX(-2019, 100, 5635, 0, 1024, 12, 44, 145, 255),
    VTX(-2201, 100, 5529, 0, 1024, 90, 44, 191, 255),
    VTX(-2944, 100, 5100, 2048, 1024, 255, 112, 213, 255),
    VTX(-2944, 300, 5100, 2048, 0, 0, 0, 136, 255),
    VTX(-2201, 300, 5529, 0, 0, 115, 0, 225, 255),
    VTX(-1472, 300, 5950, 0, 0, 103, 0, 196, 255),
    VTX(-1472, 100, 5950, 0, 1024, 21, 116, 237, 255),
    VTX(-2019, 100, 5635, 2048, 1024, 12, 44, 145, 255),
    VTX(-2019, 300, 5635, 2048, 0, 225, 0, 141, 255),
    VTX(-4417, 100, 5950, 5120, 1024, 218, 112, 242, 255),
    VTX(-4417, 300, 5950, 5120, 0, 153, 0, 196, 255),
    VTX(-2944, 300, 5100, 0, 0, 0, 0, 136, 255),
    VTX(-2944, 100, 5100, 0, 1024, 255, 112, 213, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0036B0[8] = {
    VTX(-4417, -590, 3451, 0, 0, 0, 0, 0, 0),
    VTX(-1472, -590, 3451, 0, 0, 0, 0, 0, 0),
    VTX(-4417, -9, 3349, 0, 0, 0, 0, 0, 0),
    VTX(-1472, -9, 3349, 0, 0, 0, 0, 0, 0),
    VTX(-4417, 0, 6800, 0, 0, 0, 0, 0, 0),
    VTX(-1472, 0, 6800, 0, 0, 0, 0, 0, 0),
    VTX(-4417, 582, 6697, 0, 0, 0, 0, 0, 0),
    VTX(-1472, 582, 6697, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x003730[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_0036B0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_003400[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 2, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 2, 7, 0, 2, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0034C0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00F428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_0034F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_003530[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_003938[10] = {
    VTX(0, 320, 5100, 0, 3584, 236, 117, 244, 255),
    VTX(0, 0, 3400, 0, -10923, 241, 118, 245, 255),
    VTX(-736, 0, 4675, -6282, -43, 232, 114, 231, 255),
    VTX(0, 0, 3400, 0, -10923, 241, 118, 245, 255),
    VTX(-1472, -180, 4250, -12563, -3669, 251, 119, 248, 255),
    VTX(-1472, 0, 5100, -12563, 3584, 246, 117, 232, 255),
    VTX(-1472, 100, 5950, -12563, 10837, 21, 116, 237, 255),
    VTX(0, 200, 6800, 0, 18091, 5, 106, 54, 255),
    VTX(1472, 400, 5950, 12563, 10837, 87, 61, 55, 255),
    VTX(1472, 400, 4250, 12563, -3669, 13, 118, 243, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0039D8[3] = {
    VTX(-1472, 0, 5100, -12563, 3584, 246, 117, 232, 255),
    VTX(-1472, 100, 5950, -12563, 10837, 21, 116, 237, 255),
    VTX(0, 320, 5100, 0, 3584, 236, 117, 244, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003A08[8] = {
    VTX(1472, 440, 4307, 11264, 512, 66, 70, 185, 255),
    VTX(1432, 440, 4307, 11264, 0, 184, 67, 189, 255),
    VTX(1432, 437, 5927, -9944, 0, 183, 87, 221, 255),
    VTX(1472, 440, 5950, -10240, 512, 62, 93, 43, 255),
    VTX(0, 240, 6800, 12288, 512, 225, 66, 95, 255),
    VTX(1472, 440, 5950, -9216, 512, 62, 93, 43, 255),
    VTX(1432, 437, 5927, -8920, 0, 183, 87, 221, 255),
    VTX(-20, 240, 6765, 12288, 0, 158, 66, 236, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003A88[20] = {
    VTX(1472, 400, 4307, 11264, 512, 84, 0, 172, 255),
    VTX(1472, 440, 4307, 11264, 0, 66, 70, 185, 255),
    VTX(1472, 440, 5950, -10240, 0, 62, 93, 43, 255),
    VTX(1472, 400, 5950, -10240, 512, 87, 61, 55, 255),
    VTX(1472, 400, 5950, 11264, 512, 87, 61, 55, 255),
    VTX(1472, 440, 5950, 11264, 0, 62, 93, 43, 255),
    VTX(0, 240, 6800, -10240, 0, 225, 66, 95, 255),
    VTX(0, 200, 6800, -10240, 512, 5, 106, 54, 255),
    VTX(1432, 400, 4307, -9728, 512, 172, 0, 172, 255),
    VTX(1432, 397, 5927, 12288, 512, 153, 0, 196, 255),
    VTX(1432, 437, 5927, 12288, 0, 183, 87, 221, 255),
    VTX(1432, 440, 4307, -9728, 0, 184, 67, 189, 255),
    VTX(1472, 440, 4307, -10240, 0, 66, 70, 185, 255),
    VTX(1472, 400, 4307, -10240, 512, 84, 0, 172, 255),
    VTX(0, 200, 6800, 12288, 512, 5, 106, 54, 255),
    VTX(0, 240, 6800, 12288, 0, 225, 66, 95, 255),
    VTX(-20, 240, 6765, 11776, 0, 158, 66, 236, 255),
    VTX(-20, 200, 6765, 11776, 512, 141, 0, 225, 255),
    VTX(1432, 437, 5927, -10240, 0, 183, 87, 221, 255),
    VTX(1432, 397, 5927, -10240, 512, 153, 0, 196, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003BC8[8] = {
    VTX(-1791, -321, 3716, 0, 0, 0, 0, 0, 0),
    VTX(-1209, -321, 7013, 0, 0, 0, 0, 0, 0),
    VTX(1311, 235, 3169, 0, 0, 0, 0, 0, 0),
    VTX(1893, 235, 6466, 0, 0, 0, 0, 0, 0),
    VTX(-1864, 100, 3729, 0, 0, 0, 0, 0, 0),
    VTX(-1282, 100, 7026, 0, 0, 0, 0, 0, 0),
    VTX(1238, 655, 3182, 0, 0, 0, 0, 0, 0),
    VTX(1820, 655, 6479, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x003C48[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_003BC8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_003938[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(4, 5, 2, 0, 5, 0, 2, 0),
    gsSP2Triangles(6, 7, 0, 0, 0, 7, 8, 0),
    gsSP2Triangles(8, 9, 0, 0, 1, 0, 9, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0039D8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPVertex(&hyrule_field_room_00Vtx_003A08[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_003A88[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 8, 0, 12, 8, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_003E40[7] = {
    VTX(2944, 400, 5100, 550, 3584, 9, 118, 15, 255),
    VTX(2944, 200, 3400, 550, -10923, 9, 117, 235, 255),
    VTX(1472, 400, 4250, -12013, -3669, 13, 118, 243, 255),
    VTX(1472, 200, 5950, -12013, 10837, 48, 98, 49, 255),
    VTX(2944, -300, 6800, 550, 18091, 0, 118, 19, 255),
    VTX(4417, 0, 5950, 13113, 10837, 10, 118, 13, 255),
    VTX(4417, 160, 4250, 13113, -3669, 33, 115, 252, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003EB0[3] = {
    VTX(1472, 400, 4250, -12013, -3669, 13, 118, 243, 255),
    VTX(1472, 200, 5950, -12013, 10837, 48, 98, 49, 255),
    VTX(2944, 400, 5100, 550, 3584, 9, 118, 15, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003EE0[3] = {
    VTX(1472, 400, 5950, -3584, 0, 87, 61, 55, 255),
    VTX(1472, 200, 5950, -3584, 2048, 48, 98, 49, 255),
    VTX(1472, 400, 4250, 5120, 0, 13, 118, 243, 255),
}; 

static Vtx hyrule_field_room_00Vtx_003F10[8] = {
    VTX(1472, -397, 6783, 0, 0, 0, 0, 0, 0),
    VTX(4417, -397, 6783, 0, 0, 0, 0, 0, 0),
    VTX(1472, 200, 3400, 0, 0, 0, 0, 0, 0),
    VTX(4417, 200, 3400, 0, 0, 0, 0, 0, 0),
    VTX(1472, 234, 6894, 0, 0, 0, 0, 0, 0),
    VTX(4417, 234, 6894, 0, 0, 0, 0, 0, 0),
    VTX(1472, 830, 3511, 0, 0, 0, 0, 0, 0),
    VTX(4417, 830, 3511, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x003F90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_003F10[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_003E40[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_003EB0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01A028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPVertex(&hyrule_field_room_00Vtx_003EE0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_004100[20] = {
    VTX(5480, -20, 3853, -2389, -7058, 250, 54, 150, 255),
    VTX(5033, -20, 4143, -6200, -4585, 167, 52, 196, 255),
    VTX(5521, 435, 4412, -2040, -2290, 229, 109, 214, 255),
    VTX(5971, 20, 4113, 1801, -4838, 58, 52, 165, 255),
    VTX(7361, 800, 5950, 13664, 10837, 248, 118, 237, 255),
    VTX(4668, -20, 4880, -9317, 1710, 36, 114, 7, 255),
    VTX(4417, 0, 5950, -11463, 10837, 10, 118, 13, 255),
    VTX(5082, -20, 6146, -5783, 12507, 205, 56, 164, 255),
    VTX(4668, -20, 4880, -9317, 1710, 36, 114, 7, 255),
    VTX(4417, 160, 4250, -11463, -3669, 33, 115, 252, 255),
    VTX(5635, 460, 5561, -1063, 7516, 210, 109, 16, 255),
    VTX(5889, 160, 6800, 1101, 18091, 248, 118, 19, 255),
    VTX(4903, -20, 4823, -7309, 1222, 155, 64, 2, 255),
    VTX(4668, -20, 4880, -9317, 1710, 36, 114, 7, 255),
    VTX(4855, -20, 3997, -7719, -5831, 24, 117, 245, 255),
    VTX(5289, 180, 6108, -4019, 12182, 187, 87, 212, 255),
    VTX(4903, -20, 4823, -7309, 1222, 155, 64, 2, 255),
    VTX(5082, 190, 6146, -5353, 12888, 217, 88, 185, 255),
    VTX(4976, 187, 6273, -6688, 13594, 171, 68, 207, 255),
    VTX(4976, -13, 6273, -6688, 13594, 166, 67, 217, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004240[3] = {
    VTX(4903, -20, 4823, -7309, 1222, 155, 64, 2, 255),
    VTX(5635, 460, 5561, -1063, 7516, 210, 109, 16, 255),
    VTX(5521, 435, 4412, -2040, -2290, 229, 109, 214, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004270[8] = {
    VTX(4668, -20, 4880, 7680, 2048, 36, 114, 7, 255),
    VTX(4668, 100, 4880, 7680, 0, 137, 0, 6, 255),
    VTX(4855, 100, 3997, -7680, 0, 159, 0, 186, 255),
    VTX(4855, -20, 3997, -7680, 2048, 24, 117, 245, 255),
    VTX(5082, -20, 6146, 10240, 2048, 205, 56, 164, 255),
    VTX(5082, 100, 6146, 10240, 0, 142, 0, 37, 255),
    VTX(4668, 100, 4880, -12288, 0, 137, 0, 6, 255),
    VTX(4668, -20, 4880, -12288, 2048, 36, 114, 7, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0042F0[9] = {
    VTX(6803, -20, 4440, 1632, 2048, 170, 68, 46, 255),
    VTX(7405, -20, 5204, 2448, 2048, 201, 105, 241, 255),
    VTX(7532, 370, 5120, 2448, 0, 150, 52, 14, 255),
    VTX(7210, 741, 4155, 1632, 0, 185, 62, 73, 255),
    VTX(7361, 800, 5950, 3264, 0, 248, 118, 237, 255),
    VTX(5852, 1102, 3346, 0, 0, 188, 43, 88, 255),
    VTX(5500, -20, 3624, 0, 2048, 185, 46, 85, 255),
    VTX(6141, -20, 3947, 816, 2048, 195, 25, 99, 255),
    VTX(6577, 830, 3681, 816, 0, 199, 50, 93, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004380[14] = {
    VTX(5253, -140, 3767, 1507, 946, 43, 111, 4, 255),
    VTX(5480, -140, 3853, 1749, 1038, 254, 110, 209, 255),
    VTX(5500, -140, 3624, 1771, 794, 219, 100, 55, 255),
    VTX(4855, -140, 3997, 1083, 1191, 50, 102, 37, 255),
    VTX(5033, -140, 4143, 1273, 1347, 189, 88, 211, 255),
    VTX(5480, -140, 3853, 1749, 1038, 254, 110, 209, 255),
    VTX(6019, -140, 4155, 2324, 1360, 46, 84, 185, 255),
    VTX(6141, -140, 3947, 2455, 1138, 212, 85, 72, 255),
    VTX(6616, -140, 4597, 2961, 1832, 253, 63, 154, 255),
    VTX(6803, -140, 4440, 3161, 1663, 163, 75, 3, 255),
    VTX(5082, -140, 6146, 1325, 3483, 51, 66, 170, 255),
    VTX(5289, -140, 6108, 1546, 3443, 174, 72, 206, 255),
    VTX(4903, -140, 4823, 1134, 2073, 173, 86, 4, 255),
    VTX(4668, -140, 4880, 883, 2134, 83, 86, 252, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004460[28] = {
    VTX(5500, -20, 3624, -2048, 0, 185, 46, 85, 255),
    VTX(5500, -140, 3624, -2048, 1024, 219, 100, 55, 255),
    VTX(6141, -140, 3947, 4076, 1024, 212, 85, 72, 255),
    VTX(6141, -20, 3947, 4076, 0, 195, 25, 99, 255),
    VTX(4903, -20, 4823, -2731, 0, 155, 64, 2, 255),
    VTX(4903, -140, 4823, -2731, 1024, 173, 86, 4, 255),
    VTX(5289, -140, 6108, 4389, 1024, 174, 72, 206, 255),
    VTX(5289, 180, 6108, 4389, 0, 187, 87, 212, 255),
    VTX(4855, -20, 3997, -933, 0, 24, 117, 245, 255),
    VTX(4855, -140, 3997, -933, 1024, 50, 102, 37, 255),
    VTX(5253, -140, 3767, 2048, 1024, 43, 111, 4, 255),
    VTX(5253, -20, 3767, 2048, 0, 0, 120, 0, 255),
    VTX(5033, -20, 4143, -1177, 0, 167, 52, 196, 255),
    VTX(5033, -140, 4143, -1177, 1024, 189, 88, 211, 255),
    VTX(4903, -140, 4823, 2389, 1024, 173, 86, 4, 255),
    VTX(4903, -20, 4823, 2389, 0, 155, 64, 2, 255),
    VTX(5082, -20, 6146, -433, 0, 205, 56, 164, 255),
    VTX(5082, -140, 6146, -433, 1024, 51, 66, 170, 255),
    VTX(4668, -140, 4880, 1707, 1024, 83, 86, 252, 255),
    VTX(4668, -20, 4880, 1707, 0, 36, 114, 7, 255),
    VTX(4668, -20, 4880, -1213, 0, 36, 114, 7, 255),
    VTX(4668, -140, 4880, -1213, 1024, 83, 86, 252, 255),
    VTX(4855, -140, 3997, 2731, 1024, 50, 102, 37, 255),
    VTX(4855, -20, 3997, 2731, 0, 24, 117, 245, 255),
    VTX(6141, -20, 3947, -3072, 0, 195, 25, 99, 255),
    VTX(6141, -140, 3947, -3072, 1024, 212, 85, 72, 255),
    VTX(6803, -140, 4440, 3970, 1024, 163, 75, 3, 255),
    VTX(6803, -20, 4440, 3970, 0, 170, 68, 46, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004620[11] = {
    VTX(5480, -20, 3853, 750, 1542, 250, 54, 150, 255),
    VTX(5480, -140, 3853, 750, 2048, 254, 110, 209, 255),
    VTX(5033, -140, 4143, 4000, 2048, 189, 88, 211, 255),
    VTX(5033, -20, 4143, 4000, 1542, 167, 52, 196, 255),
    VTX(5289, 180, 6108, 0, 0, 187, 87, 212, 255),
    VTX(5289, -140, 6108, 0, 2048, 174, 72, 206, 255),
    VTX(5082, -140, 6146, 799, 2048, 51, 66, 170, 255),
    VTX(5082, -20, 6146, 799, 1280, 205, 56, 164, 255),
    VTX(4976, -13, 6273, 1829, 1233, 166, 67, 217, 255),
    VTX(4976, 187, 6273, 1829, -47, 171, 68, 207, 255),
    VTX(5082, 190, 6146, 915, -24, 217, 88, 185, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0046D0[10] = {
    VTX(6616, -60, 4597, 0, 0, 28, 70, 164, 255),
    VTX(7405, -20, 5204, 0, 0, 201, 105, 241, 255),
    VTX(6803, -20, 4440, 0, 0, 170, 68, 46, 255),
    VTX(6803, -140, 4440, 0, 0, 163, 75, 3, 255),
    VTX(6616, -140, 4597, 0, 0, 253, 63, 154, 255),
    VTX(5971, 20, 4113, 0, 0, 58, 52, 165, 255),
    VTX(6019, -140, 4155, 0, 0, 46, 84, 185, 255),
    VTX(5480, -140, 3853, 0, 0, 254, 110, 209, 255),
    VTX(5480, -20, 3853, 0, 0, 250, 54, 150, 255),
    VTX(7361, 800, 5950, 0, 0, 248, 118, 237, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004770[8] = {
    VTX(3731, -580, 5438, 0, 0, 0, 0, 0, 0),
    VTX(6675, -580, 7138, 0, 0, 0, 0, 0, 0),
    VTX(5279, -34, 2756, 0, 0, 0, 0, 0, 0),
    VTX(8224, -34, 4456, 0, 0, 0, 0, 0, 0),
    VTX(3630, 560, 5612, 0, 0, 0, 0, 0, 0),
    VTX(6575, 560, 7312, 0, 0, 0, 0, 0, 0),
    VTX(5179, 1106, 2930, 0, 0, 0, 0, 0, 0),
    VTX(8123, 1106, 4630, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0047F0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_004770[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_004100[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 6, 0, 4, 10, 11, 0),
    gsSP2Triangles(10, 4, 2, 0, 12, 2, 1, 0),
    gsSP2Triangles(9, 13, 14, 0, 15, 11, 10, 0),
    gsSP2Triangles(10, 16, 15, 0, 11, 17, 18, 0),
    gsSP2Triangles(11, 15, 17, 0, 6, 19, 7, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_004240[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00F428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_004270[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_0042F0[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 7, 0, 3, 0),
    gsSP1Triangle(7, 3, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0, 120, 120, 90, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_004380[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 2, 0, 7, 6, 8, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 3, 13, 12, 0),
    gsSP1Triangle(3, 12, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_019828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_004460[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01A028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_004620[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 10, 0),
    gsSP1Triangle(4, 7, 10, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 83, 82, 57, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0046D0[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 0, 4, 6, 0),
    gsSP2Triangles(0, 6, 5, 0, 0, 5, 9, 0),
    gsSP1Triangle(1, 0, 9, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_004BD0[7] = {
    VTX(-7361, -500, 7650, 2720, 768, 54, 106, 14, 255),
    VTX(-7361, 100, 5950, 2720, -13739, 65, 86, 52, 255),
    VTX(-8833, 100, 6800, -9843, -6485, 79, 73, 51, 255),
    VTX(-8833, -100, 8500, -9843, 8021, 85, 78, 225, 255),
    VTX(-7361, -500, 9350, 2720, 15275, 64, 94, 221, 255),
    VTX(-5889, -500, 8500, 15283, 8021, 240, 118, 0, 255),
    VTX(-5889, -500, 6800, 15283, -6485, 248, 117, 22, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004C40[3] = {
    VTX(-8833, 100, 6800, -9843, -6485, 79, 73, 51, 255),
    VTX(-8833, -100, 8500, -9843, 8021, 85, 78, 225, 255),
    VTX(-7361, -500, 7650, 2720, 768, 54, 106, 14, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004C70[8] = {
    VTX(-7361, -500, 7650, 13312, 2048, 54, 106, 14, 255),
    VTX(-7361, -380, 7650, 13312, 0, 120, 0, 0, 255),
    VTX(-7361, -380, 9350, -15360, 0, 120, 0, 0, 255),
    VTX(-7361, -500, 9350, -15360, 2048, 64, 94, 221, 255),
    VTX(-7361, 100, 5950, 13312, 2048, 65, 86, 52, 255),
    VTX(-7361, 220, 5950, 13312, 0, 120, 0, 0, 255),
    VTX(-7361, -380, 7650, -15360, 0, 120, 0, 0, 255),
    VTX(-7361, -500, 7650, -15360, 2048, 54, 106, 14, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004CF0[12] = {
    VTX(-8833, -100, 8500, 4096, 2048, 85, 78, 225, 255),
    VTX(-8833, 500, 8500, 4096, 0, 103, 0, 196, 255),
    VTX(-7361, 500, 9350, 0, 0, 84, 0, 172, 255),
    VTX(-7361, -500, 9350, 0, 2048, 64, 94, 221, 255),
    VTX(-7361, 100, 5950, 4096, 2048, 65, 86, 52, 255),
    VTX(-7361, 500, 5950, 4096, 0, 83, 0, 86, 255),
    VTX(-8833, 700, 6800, 0, 0, 103, 0, 60, 255),
    VTX(-8833, 100, 6800, 0, 2048, 79, 73, 51, 255),
    VTX(-8833, 100, 6800, 4096, 2048, 79, 73, 51, 255),
    VTX(-8833, 700, 6800, 4096, 0, 103, 0, 60, 255),
    VTX(-8833, 500, 8500, 0, 0, 103, 0, 196, 255),
    VTX(-8833, -100, 8500, 0, 2048, 85, 78, 225, 255),
}; 

static Vtx hyrule_field_room_00Vtx_004DB0[8] = {
    VTX(-8833, -500, 5950, 0, 0, 0, 0, 0, 0),
    VTX(-5889, -500, 5950, 0, 0, 0, 0, 0, 0),
    VTX(-8833, 700, 5950, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 700, 5950, 0, 0, 0, 0, 0, 0),
    VTX(-8833, -500, 9350, 0, 0, 0, 0, 0, 0),
    VTX(-5889, -500, 9350, 0, 0, 0, 0, 0, 0),
    VTX(-8833, 700, 9350, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 700, 9350, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x004E30[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_004DB0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_004BD0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_004C40[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00F428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_004C70[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_004CF0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_005020[7] = {
    VTX(-4417, -100, 7650, 3271, 768, 208, 108, 19, 255),
    VTX(-4417, 100, 5950, 3271, -13739, 218, 112, 242, 255),
    VTX(-5889, -500, 6800, -9293, -6485, 248, 117, 22, 255),
    VTX(-5889, -500, 8500, -9293, 8021, 240, 118, 0, 255),
    VTX(-4417, -100, 9350, 3271, 15275, 240, 118, 9, 255),
    VTX(-2944, 100, 8500, 15834, 8021, 0, 111, 43, 255),
    VTX(-2944, 0, 6800, 15834, -6485, 252, 119, 2, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005090[3] = {
    VTX(-5889, -500, 6800, -9293, -6485, 248, 117, 22, 255),
    VTX(-5889, -500, 8500, -9293, 8021, 240, 118, 0, 255),
    VTX(-4417, -100, 7650, 3271, 768, 208, 108, 19, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0050C0[8] = {
    VTX(-2944, 100, 8500, 5120, 1024, 0, 111, 43, 255),
    VTX(-2944, 300, 8500, 5120, 0, 0, 0, 120, 255),
    VTX(-4417, 100, 7650, 0, 0, 153, 0, 60, 255),
    VTX(-4417, -100, 7650, 0, 1024, 208, 108, 19, 255),
    VTX(-4417, -100, 7650, 5120, 1024, 208, 108, 19, 255),
    VTX(-4417, 100, 7650, 5120, 0, 153, 0, 60, 255),
    VTX(-4417, 300, 5950, 0, 0, 153, 0, 196, 255),
    VTX(-4417, 100, 5950, 0, 1024, 218, 112, 242, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005140[8] = {
    VTX(-6603, -645, 7212, 0, 0, 0, 0, 0, 0),
    VTX(-5131, -645, 9762, 0, 0, 0, 0, 0, 0),
    VTX(-3673, -49, 5521, 0, 0, 0, 0, 0, 0),
    VTX(-2201, -49, 8071, 0, 0, 0, 0, 0, 0),
    VTX(-6677, -160, 7255, 0, 0, 0, 0, 0, 0),
    VTX(-5205, -160, 9805, 0, 0, 0, 0, 0, 0),
    VTX(-3747, 436, 5563, 0, 0, 0, 0, 0, 0),
    VTX(-2275, 436, 8113, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0051C0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_005140[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_005020[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_005090[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_0050C0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_005340[20] = {
    VTX(-1654, 260, 7545, 5120, 1024, 93, 247, 74, 255),
    VTX(-2000, 387, 7770, 3840, 0, 69, 244, 97, 255),
    VTX(-2339, 264, 8000, 2560, 0, 65, 232, 98, 255),
    VTX(-1703, 432, 7517, 0, 0, 104, 0, 58, 255),
    VTX(-1654, 260, 7545, 0, 1024, 93, 247, 74, 255),
    VTX(-1603, 264, 7008, 1707, 0, 119, 0, 11, 255),
    VTX(-1703, 432, 7517, 5120, 0, 104, 0, 58, 255),
    VTX(-1654, 260, 6055, 5120, 1024, 111, 247, 212, 255),
    VTX(-1703, 432, 6083, 5120, 0, 102, 0, 195, 255),
    VTX(-1632, 387, 6467, 3840, 0, 118, 244, 245, 255),
    VTX(-1703, 432, 6083, 0, 0, 102, 0, 195, 255),
    VTX(-1654, 260, 6055, 0, 1024, 111, 247, 212, 255),
    VTX(-2094, 264, 5742, 1707, 0, 69, 0, 159, 255),
    VTX(-1603, 264, 6875, 2560, 0, 117, 232, 249, 255),
    VTX(-1752, 204, 6989, 1991, 1024, 110, 44, 12, 255),
    VTX(-1865, 486, 6989, 1991, 0, 110, 44, 12, 255),
    VTX(-1832, 204, 7367, 853, 0, 109, 44, 23, 255),
    VTX(-1752, 204, 6611, 3129, 1024, 110, 44, 244, 255),
    VTX(-1847, 440, 6611, 3129, 0, 110, 44, 244, 255),
    VTX(-1832, 204, 6233, 4267, 0, 109, 44, 233, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005480[8] = {
    VTX(-2339, 204, 5742, 0, 0, 0, 0, 0, 0),
    VTX(-1603, 204, 5742, 0, 0, 0, 0, 0, 0),
    VTX(-2339, 486, 5742, 0, 0, 0, 0, 0, 0),
    VTX(-1603, 486, 5742, 0, 0, 0, 0, 0, 0),
    VTX(-2339, 204, 8000, 0, 0, 0, 0, 0, 0),
    VTX(-1603, 204, 8000, 0, 0, 0, 0, 0, 0),
    VTX(-2339, 486, 8000, 0, 0, 0, 0, 0, 0),
    VTX(-1603, 486, 8000, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x005500[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_005480[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_005340[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 1, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 7, 9, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 18, 0),
    gsSP2Triangles(14, 18, 15, 0, 17, 19, 18, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0055D8[7] = {
    VTX(-1472, 100, 7650, 3821, 768, 29, 113, 27, 255),
    VTX(-1472, 100, 5950, 3821, -13739, 21, 116, 237, 255),
    VTX(-2944, 0, 6800, -8742, -6485, 252, 119, 2, 255),
    VTX(-2944, 100, 8500, -8742, 8021, 0, 111, 43, 255),
    VTX(-1472, -300, 9350, 3821, 15275, 8, 117, 23, 255),
    VTX(0, -100, 8500, 16384, 8021, 4, 118, 18, 255),
    VTX(0, 200, 6800, 16384, -6485, 5, 106, 54, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005648[3] = {
    VTX(-2944, 0, 6800, -8742, -6485, 252, 119, 2, 255),
    VTX(-2944, 100, 8500, -8742, 8021, 0, 111, 43, 255),
    VTX(-1472, 100, 7650, 3821, 768, 29, 113, 27, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005678[8] = {
    VTX(-1472, 300, 7650, 0, 0, 103, 0, 60, 255),
    VTX(-1472, 100, 7650, 0, 1024, 29, 113, 27, 255),
    VTX(-1472, 100, 5950, 5120, 1024, 21, 116, 237, 255),
    VTX(-1472, 300, 5950, 5120, 0, 103, 0, 196, 255),
    VTX(-1472, 100, 7650, 5120, 1024, 29, 113, 27, 255),
    VTX(-1472, 300, 7650, 5120, 0, 103, 0, 60, 255),
    VTX(-2944, 300, 8500, 0, 0, 0, 0, 120, 255),
    VTX(-2944, 100, 8500, 0, 1024, 0, 111, 43, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0056F8[8] = {
    VTX(-736, -300, 5525, 0, 0, 0, 0, 0, 0),
    VTX(736, -300, 8075, 0, 0, 0, 0, 0, 0),
    VTX(-736, 300, 5525, 0, 0, 0, 0, 0, 0),
    VTX(736, 300, 8075, 0, 0, 0, 0, 0, 0),
    VTX(-3681, -300, 7225, 0, 0, 0, 0, 0, 0),
    VTX(-2208, -300, 9775, 0, 0, 0, 0, 0, 0),
    VTX(-3681, 300, 7225, 0, 0, 0, 0, 0, 0),
    VTX(-2208, 300, 9775, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x005778[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_0056F8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0055D8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_005648[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_005678[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0058F8[7] = {
    VTX(1472, -300, 7650, 4371, 768, 13, 118, 10, 255),
    VTX(1472, 200, 5950, 4371, -13739, 48, 98, 49, 255),
    VTX(0, 200, 6800, -8192, -6485, 5, 106, 54, 255),
    VTX(0, -100, 8500, -8192, 8021, 4, 118, 18, 255),
    VTX(1472, -100, 9350, 4371, 15275, 225, 115, 246, 255),
    VTX(2944, -282, 8500, 16934, 8021, 226, 97, 193, 255),
    VTX(2944, -300, 6800, 16934, -6485, 0, 118, 19, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005968[3] = {
    VTX(0, 200, 6800, -8192, -6485, 5, 106, 54, 255),
    VTX(0, -100, 8500, -8192, 8021, 4, 118, 18, 255),
    VTX(1472, -300, 7650, 4371, 768, 13, 118, 10, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005998[4] = {
    VTX(2944, 89, 8500, 0, 0, 203, 0, 149, 255),
    VTX(2944, -282, 8500, 0, 2048, 226, 97, 193, 255),
    VTX(1472, -100, 9350, 5120, 2048, 225, 115, 246, 255),
    VTX(1472, 215, 9350, 5120, 0, 153, 0, 196, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0059D8[3] = {
    VTX(0, 200, 6800, -3584, 0, 5, 106, 54, 255),
    VTX(1472, 200, 5950, 5120, 2048, 48, 98, 49, 255),
    VTX(1472, 400, 5950, 5120, 0, 87, 61, 55, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005A08[8] = {
    VTX(2208, -300, 5525, 0, 0, 0, 0, 0, 0),
    VTX(3681, -300, 8075, 0, 0, 0, 0, 0, 0),
    VTX(2208, 400, 5525, 0, 0, 0, 0, 0, 0),
    VTX(3681, 400, 8075, 0, 0, 0, 0, 0, 0),
    VTX(-736, -300, 7225, 0, 0, 0, 0, 0, 0),
    VTX(736, -300, 9775, 0, 0, 0, 0, 0, 0),
    VTX(-736, 400, 7225, 0, 0, 0, 0, 0, 0),
    VTX(736, 400, 9775, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x005A88[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_005A08[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0058F8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_005968[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_005998[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01A028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&hyrule_field_room_00Vtx_0059D8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_005C58[22] = {
    VTX(4214, 8, 8014, -5054, 3523, 251, 119, 249, 255),
    VTX(2944, -116, 8500, -15834, 8021, 246, 119, 7, 255),
    VTX(4417, 100, 9350, -3271, 15275, 235, 116, 239, 255),
    VTX(2944, -300, 6800, -15834, -6485, 0, 118, 19, 255),
    VTX(4208, -160, 7973, -5054, 3523, 237, 92, 182, 255),
    VTX(4566, -160, 7591, -2001, 263, 190, 99, 252, 255),
    VTX(4417, 0, 5950, -3271, -13739, 10, 118, 13, 255),
    VTX(4976, -13, 6273, 1504, -10982, 166, 67, 217, 255),
    VTX(5246, -160, 8871, 3805, 11190, 7, 93, 181, 255),
    VTX(5646, -160, 9271, 7215, 14599, 0, 120, 0, 255),
    VTX(5886, -160, 9031, 9263, 12551, 0, 120, 0, 255),
    VTX(5550, -160, 8696, 6402, 9690, 193, 101, 246, 255),
    VTX(4208, -160, 7973, -5054, 3523, 237, 92, 182, 255),
    VTX(4566, -160, 7591, -2001, 263, 190, 99, 252, 255),
    VTX(4566, 40, 7591, -2001, 263, 173, 86, 9, 255),
    VTX(5550, 40, 8696, 6402, 9690, 188, 78, 60, 255),
    VTX(5889, 100, 8500, 9293, 8021, 248, 118, 239, 255),
    VTX(5246, 40, 8871, 3805, 11190, 56, 81, 188, 255),
    VTX(4566, 40, 7591, -2001, 263, 173, 86, 9, 255),
    VTX(5889, 160, 6800, 9293, -6485, 248, 118, 19, 255),
    VTX(4976, 187, 6273, 1504, -10982, 171, 68, 207, 255),
    VTX(4566, 40, 7591, -2001, 263, 173, 86, 9, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005DB8[3] = {
    VTX(2944, -282, 8500, -15834, 8021, 226, 97, 193, 255),
    VTX(4208, -160, 7973, -5054, 3523, 237, 92, 182, 255),
    VTX(2944, -300, 6800, -15834, -6485, 0, 118, 19, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005DE8[4] = {
    VTX(4208, -160, 7973, 4608, 2048, 237, 92, 182, 255),
    VTX(4208, -40, 7973, 4608, 0, 169, 0, 174, 255),
    VTX(4566, -40, 7591, -4096, 0, 169, 0, 174, 255),
    VTX(4566, -160, 7591, -4096, 2048, 190, 99, 252, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005E28[4] = {
    VTX(4208, 40, 7973, 0, 0, 19, 0, 138, 255),
    VTX(4208, -160, 7973, 0, 2048, 237, 92, 182, 255),
    VTX(2944, -282, 8500, 5120, 2048, 226, 97, 193, 255),
    VTX(2944, 89, 8500, 5120, 0, 203, 0, 149, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005E68[12] = {
    VTX(5246, 40, 8871, -6919, 0, 56, 81, 188, 255),
    VTX(5246, -160, 8871, -6919, 1024, 7, 93, 181, 255),
    VTX(4208, -160, 7973, 614, 1024, 237, 92, 182, 255),
    VTX(4208, 40, 7973, 614, 0, 19, 0, 138, 255),
    VTX(4566, 40, 7591, 434, 0, 173, 86, 9, 255),
    VTX(4566, -160, 7591, 434, 1024, 190, 99, 252, 255),
    VTX(5550, -160, 8696, 8433, 1024, 193, 101, 246, 255),
    VTX(5550, 40, 8696, 8433, 0, 188, 78, 60, 255),
    VTX(5889, 100, 8500, -1912, 1, 248, 118, 239, 255),
    VTX(5550, -160, 8696, -372, 1024, 193, 101, 246, 255),
    VTX(5246, -160, 8871, 1011, 1024, 7, 93, 181, 255),
    VTX(4417, 100, 9350, 4780, 1, 235, 116, 239, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005F28[4] = {
    VTX(4976, -13, 6273, -7810, 1263, 166, 67, 217, 255),
    VTX(4566, 40, 7591, 1024, 0, 173, 86, 9, 255),
    VTX(4976, 187, 6273, -7810, -17, 171, 68, 207, 255),
    VTX(4566, -160, 7591, 1024, 1280, 190, 99, 252, 255),
}; 

static Vtx hyrule_field_room_00Vtx_005F68[8] = {
    VTX(2944, -300, 5950, 0, 0, 0, 0, 0, 0),
    VTX(5889, -300, 5950, 0, 0, 0, 0, 0, 0),
    VTX(2944, 187, 5950, 0, 0, 0, 0, 0, 0),
    VTX(5889, 187, 5950, 0, 0, 0, 0, 0, 0),
    VTX(2944, -300, 9350, 0, 0, 0, 0, 0, 0),
    VTX(5889, -300, 9350, 0, 0, 0, 0, 0, 0),
    VTX(2944, 187, 9350, 0, 0, 0, 0, 0, 0),
    VTX(5889, 187, 9350, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x005FE8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_005F68[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_005C58[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 8, 11, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 0, 2, 17, 0),
    gsSP2Triangles(18, 16, 19, 0, 20, 21, 19, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_005DB8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00F428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_005DE8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_005E28[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_019028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&hyrule_field_room_00Vtx_005E68[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01A028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_005F28[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_006290[7] = {
    VTX(7361, -140, 7650, -2720, 768, 245, 117, 22, 255),
    VTX(7361, 800, 5950, -2720, -13739, 248, 118, 237, 255),
    VTX(5889, 160, 6800, -15283, -6485, 248, 118, 19, 255),
    VTX(5889, 100, 8500, -15283, 8021, 248, 118, 239, 255),
    VTX(7361, 100, 9350, -2720, 15275, 0, 119, 248, 255),
    VTX(8833, 100, 8500, 9843, 8021, 229, 116, 14, 255),
    VTX(8833, 800, 6800, 9843, -6485, 219, 102, 49, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006300[3] = {
    VTX(5889, 160, 6800, -15283, -6485, 248, 118, 19, 255),
    VTX(5889, 100, 8500, -15283, 8021, 248, 118, 239, 255),
    VTX(7361, -140, 7650, -2720, 768, 245, 117, 22, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006330[8] = {
    VTX(5196, -385, 8001, 0, 0, 0, 0, 0, 0),
    VTX(8140, -385, 9701, 0, 0, 0, 0, 0, 0),
    VTX(6683, 140, 5424, 0, 0, 0, 0, 0, 0),
    VTX(9628, 140, 7124, 0, 0, 0, 0, 0, 0),
    VTX(5137, 275, 8102, 0, 0, 0, 0, 0, 0),
    VTX(8082, 275, 9802, 0, 0, 0, 0, 0, 0),
    VTX(6625, 800, 5525, 0, 0, 0, 0, 0, 0),
    VTX(9570, 800, 7225, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0063B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_006330[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_006290[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_006300[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0064C8[7] = {
    VTX(-5889, -500, 10200, -1101, -2048, 248, 119, 0, 255),
    VTX(-5889, -500, 8500, -1101, -16555, 240, 118, 0, 255),
    VTX(-7361, -500, 9350, -13664, -9301, 64, 94, 221, 255),
    VTX(-7361, -300, 11050, -13664, 5205, 12, 119, 249, 255),
    VTX(-5889, -500, 11900, -1101, 12459, 58, 100, 225, 255),
    VTX(-4417, -300, 11050, 11463, 5205, 252, 119, 12, 255),
    VTX(-4417, -100, 9350, 11463, -9301, 240, 118, 9, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006538[3] = {
    VTX(-7361, -500, 9350, -13664, -9301, 64, 94, 221, 255),
    VTX(-7361, -300, 11050, -13664, 5205, 12, 119, 249, 255),
    VTX(-5889, -500, 10200, -1101, -2048, 248, 119, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006568[4] = {
    VTX(-7361, -500, 9350, 4096, 2048, 64, 94, 221, 255),
    VTX(-7361, 500, 9350, 4096, 0, 84, 0, 172, 255),
    VTX(-5889, -37, 11900, 0, 0, 115, 0, 225, 255),
    VTX(-5889, -500, 11900, 0, 2048, 58, 100, 225, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0065A8[8] = {
    VTX(-5279, -924, 8148, 0, 0, 0, 0, 0, 0),
    VTX(-3806, -924, 10698, 0, 0, 0, 0, 0, 0),
    VTX(-5131, 46, 8062, 0, 0, 0, 0, 0, 0),
    VTX(-3658, 46, 10612, 0, 0, 0, 0, 0, 0),
    VTX(-8105, -349, 9779, 0, 0, 0, 0, 0, 0),
    VTX(-6633, -349, 12329, 0, 0, 0, 0, 0, 0),
    VTX(-7957, 621, 9694, 0, 0, 0, 0, 0, 0),
    VTX(-6484, 621, 12244, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x006628[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_0065A8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0064C8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_006538[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_006568[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0067A0[7] = {
    VTX(-2944, -300, 10200, -550, -2048, 8, 118, 18, 255),
    VTX(-2944, 100, 8500, -550, -16555, 0, 111, 43, 255),
    VTX(-4417, -100, 9350, -13113, -9301, 240, 118, 9, 255),
    VTX(-4417, -300, 11050, -13113, 5205, 252, 119, 12, 255),
    VTX(-2944, -500, 11900, -550, 12459, 4, 119, 7, 255),
    VTX(-1472, -500, 11050, 12013, 5205, 4, 119, 7, 255),
    VTX(-1472, -300, 9350, 12013, -9301, 8, 117, 23, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006810[3] = {
    VTX(-4417, -100, 9350, -13113, -9301, 240, 118, 9, 255),
    VTX(-4417, -300, 11050, -13113, 5205, 252, 119, 12, 255),
    VTX(-2944, -300, 10200, -550, -2048, 8, 118, 18, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006840[8] = {
    VTX(-4417, -742, 11857, 0, 0, 0, 0, 0, 0),
    VTX(-1472, -742, 11857, 0, 0, 0, 0, 0, 0),
    VTX(-4417, -143, 8457, 0, 0, 0, 0, 0, 0),
    VTX(-1472, -143, 8457, 0, 0, 0, 0, 0, 0),
    VTX(-4417, -451, 11909, 0, 0, 0, 0, 0, 0),
    VTX(-1472, -451, 11909, 0, 0, 0, 0, 0, 0),
    VTX(-4417, 148, 8508, 0, 0, 0, 0, 0, 0),
    VTX(-1472, 148, 8508, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0068C0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_006840[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0067A0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_006810[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_0069D8[7] = {
    VTX(0, -500, 10200, 0, -2048, 248, 118, 14, 255),
    VTX(0, -100, 8500, 0, -16555, 4, 118, 18, 255),
    VTX(-1472, -300, 9350, -12563, -9301, 8, 117, 23, 255),
    VTX(-1472, -500, 11050, -12563, 5205, 4, 119, 7, 255),
    VTX(0, -500, 11900, 0, 12459, 252, 119, 2, 255),
    VTX(1472, -300, 11050, 12563, 5205, 224, 112, 27, 255),
    VTX(1472, -100, 9350, 12563, -9301, 225, 115, 246, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006A48[3] = {
    VTX(-1472, -300, 9350, -12563, -9301, 8, 117, 23, 255),
    VTX(-1472, -500, 11050, -12563, 5205, 4, 119, 7, 255),
    VTX(0, -500, 10200, 0, -2048, 248, 118, 14, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006A78[4] = {
    VTX(1472, -300, 11050, 4096, 2048, 224, 112, 27, 255),
    VTX(1472, 100, 11050, 4096, 0, 153, 0, 60, 255),
    VTX(1472, 215, 9350, 0, 0, 153, 0, 196, 255),
    VTX(1472, -100, 9350, 0, 2048, 225, 115, 246, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006AB8[8] = {
    VTX(-2072, -786, 9254, 0, 0, 0, 0, 0, 0),
    VTX(-979, -786, 12256, 0, 0, 0, 0, 0, 0),
    VTX(1094, -192, 8102, 0, 0, 0, 0, 0, 0),
    VTX(2187, -192, 11104, 0, 0, 0, 0, 0, 0),
    VTX(-2140, -379, 9279, 0, 0, 0, 0, 0, 0),
    VTX(-1047, -379, 12281, 0, 0, 0, 0, 0, 0),
    VTX(1027, 215, 8126, 0, 0, 0, 0, 0, 0),
    VTX(2120, 215, 11129, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x006B38[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_006AB8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_0069D8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_006A48[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_006A78[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_006CB0[7] = {
    VTX(2944, -300, 10200, 550, -2048, 244, 118, 11, 255),
    VTX(2944, -116, 8500, 550, -16555, 246, 119, 7, 255),
    VTX(1472, -100, 9350, -12013, -9301, 225, 115, 246, 255),
    VTX(1472, -300, 11050, -12013, 5205, 224, 112, 27, 255),
    VTX(2944, -500, 11900, 550, 12459, 215, 111, 16, 255),
    VTX(4417, 100, 11050, 13113, 5205, 238, 118, 3, 255),
    VTX(4417, 100, 9350, 13113, -9301, 235, 116, 239, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006D20[3] = {
    VTX(1472, -100, 9350, -12013, -9301, 225, 115, 246, 255),
    VTX(1472, -300, 11050, -12013, 5205, 224, 112, 27, 255),
    VTX(2944, -300, 10200, 550, -2048, 244, 118, 11, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006D50[8] = {
    VTX(675, -595, 10019, 0, 0, 0, 0, 0, 0),
    VTX(2729, -595, 12466, 0, 0, 0, 0, 0, 0),
    VTX(3215, -10, 7888, 0, 0, 0, 0, 0, 0),
    VTX(5269, -10, 10335, 0, 0, 0, 0, 0, 0),
    VTX(634, -293, 10053, 0, 0, 0, 0, 0, 0),
    VTX(2688, -293, 12501, 0, 0, 0, 0, 0, 0),
    VTX(3174, 292, 7922, 0, 0, 0, 0, 0, 0),
    VTX(5228, 292, 10369, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x006DD0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_006D50[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_006CB0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_006D20[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_006EE8[7] = {
    VTX(5889, 100, 10200, 1101, -2048, 0, 120, 0, 255),
    VTX(5889, 100, 8500, 1101, -16555, 248, 118, 239, 255),
    VTX(4417, 100, 9350, -11463, -9301, 235, 116, 239, 255),
    VTX(4417, 100, 11050, -11463, 5205, 238, 118, 3, 255),
    VTX(5889, 100, 11900, 1101, 12459, 0, 120, 0, 255),
    VTX(7361, 100, 11050, 13664, 5205, 0, 120, 0, 255),
    VTX(7361, 100, 9350, 13664, -9301, 0, 119, 248, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006F58[3] = {
    VTX(4417, 100, 9350, -11463, -9301, 235, 116, 239, 255),
    VTX(4417, 100, 11050, -11463, 5205, 238, 118, 3, 255),
    VTX(5889, 100, 10200, 1101, -2048, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_006F88[8] = {
    VTX(4417, 100, 8500, 0, 0, 0, 0, 0, 0),
    VTX(7361, 100, 8500, 0, 0, 0, 0, 0, 0),
    VTX(4417, 100, 8500, 0, 0, 0, 0, 0, 0),
    VTX(7361, 100, 8500, 0, 0, 0, 0, 0, 0),
    VTX(4417, 100, 11900, 0, 0, 0, 0, 0, 0),
    VTX(7361, 100, 11900, 0, 0, 0, 0, 0, 0),
    VTX(4417, 100, 11900, 0, 0, 0, 0, 0, 0),
    VTX(7361, 100, 11900, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x007008[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_006F88[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_006EE8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_006F58[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_007120[12] = {
    VTX(4417, 100, 9350, 8192, 2048, 196, 0, 153, 255),
    VTX(4417, 340, 9350, 8192, 0, 196, 0, 153, 255),
    VTX(5889, 340, 8500, -6144, 0, 196, 0, 153, 255),
    VTX(5889, 100, 8500, -6144, 2048, 196, 0, 153, 255),
    VTX(7361, 12, 7650, -12288, 0, 196, 0, 153, 255),
    VTX(7361, -228, 7650, -12288, 2048, 196, 0, 153, 255),
    VTX(5889, 100, 8500, 2048, 2048, 196, 0, 153, 255),
    VTX(5889, 340, 8500, 2048, 0, 196, 0, 153, 255),
    VTX(2944, -398, 10200, 8192, 2048, 196, 0, 153, 255),
    VTX(2944, -158, 10200, 8192, 0, 196, 0, 153, 255),
    VTX(4417, 340, 9350, -6144, 0, 196, 0, 153, 255),
    VTX(4417, 100, 9350, -6144, 2048, 196, 0, 153, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0071E0[8] = {
    VTX(7361, -398, 7650, 0, 0, 0, 0, 0, 0),
    VTX(7361, -398, 7650, 0, 0, 0, 0, 0, 0),
    VTX(7361, 340, 7650, 0, 0, 0, 0, 0, 0),
    VTX(7361, 340, 7650, 0, 0, 0, 0, 0, 0),
    VTX(2944, -398, 10200, 0, 0, 0, 0, 0, 0),
    VTX(2944, -398, 10200, 0, 0, 0, 0, 0, 0),
    VTX(2944, 340, 10200, 0, 0, 0, 0, 0, 0),
    VTX(2944, 340, 10200, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x007260[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_0071E0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_00EC28, G_IM_FMT_I, 64, 64, 0, 0, 3, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 193, 175, 90, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_007120[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_007330[7] = {
    VTX(-4417, -500, 12750, 3271, -4864, 19, 114, 227, 255),
    VTX(-4417, -300, 11050, 3271, -19371, 252, 119, 12, 255),
    VTX(-5889, -500, 11900, -9293, -12117, 58, 100, 225, 255),
    VTX(-5889, -500, 13600, -9293, 2389, 68, 90, 217, 255),
    VTX(-4417, -500, 14450, 3271, 9643, 0, 90, 178, 255),
    VTX(-2944, -500, 13600, 15834, 2389, 12, 100, 191, 255),
    VTX(-2944, -500, 11900, 15834, -12117, 4, 119, 7, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0073A0[3] = {
    VTX(-5889, -500, 11900, -9293, -12117, 58, 100, 225, 255),
    VTX(-5889, -500, 13600, -9293, 2389, 68, 90, 217, 255),
    VTX(-4417, -500, 12750, 3271, -4864, 19, 114, 227, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0073D0[8] = {
    VTX(-4417, -500, 12750, 13824, 2048, 19, 114, 227, 255),
    VTX(-4417, -380, 12750, 13824, 0, 60, 0, 153, 255),
    VTX(-2944, -380, 13600, -14848, 0, 60, 0, 153, 255),
    VTX(-2944, -500, 13600, -14848, 2048, 12, 100, 191, 255),
    VTX(-5889, -500, 11900, 13824, 2048, 58, 100, 225, 255),
    VTX(-5889, -380, 11900, 13824, 0, 60, 0, 153, 255),
    VTX(-4417, -380, 12750, -14848, 0, 60, 0, 153, 255),
    VTX(-4417, -500, 12750, -14848, 2048, 19, 114, 227, 255),
}; 

static Vtx hyrule_field_room_00Vtx_007450[12] = {
    VTX(-4417, -500, 14450, 4096, 2048, 0, 90, 178, 255),
    VTX(-4417, 137, 14450, 4096, 0, 0, 0, 136, 255),
    VTX(-2944, -100, 13600, 0, 0, 0, 0, 136, 255),
    VTX(-2944, -500, 13600, 0, 2048, 12, 100, 191, 255),
    VTX(-5889, -500, 11900, 4096, 2048, 58, 100, 225, 255),
    VTX(-5889, -37, 11900, 4096, 0, 115, 0, 225, 255),
    VTX(-5889, 300, 13600, 0, 0, 103, 0, 196, 255),
    VTX(-5889, -500, 13600, 0, 2048, 68, 90, 217, 255),
    VTX(-5889, -500, 13600, 4096, 2048, 68, 90, 217, 255),
    VTX(-5889, 300, 13600, 4096, 0, 103, 0, 196, 255),
    VTX(-4417, 137, 14450, 0, 0, 0, 0, 136, 255),
    VTX(-4417, -500, 14450, 0, 2048, 0, 90, 178, 255),
}; 

static Vtx hyrule_field_room_00Vtx_007510[8] = {
    VTX(-5889, -500, 11050, 0, 0, 0, 0, 0, 0),
    VTX(-2944, -500, 11050, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 300, 11050, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 300, 11050, 0, 0, 0, 0, 0, 0),
    VTX(-5889, -500, 14450, 0, 0, 0, 0, 0, 0),
    VTX(-2944, -500, 14450, 0, 0, 0, 0, 0, 0),
    VTX(-5889, 300, 14450, 0, 0, 0, 0, 0, 0),
    VTX(-2944, 300, 14450, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x007590[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_007510[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_007330[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0073A0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00F428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_0073D0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_007450[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_007780[7] = {
    VTX(-1472, -500, 12750, 3821, 3328, 0, 120, 0, 255),
    VTX(-1472, -500, 11050, 3821, -11179, 4, 119, 7, 255),
    VTX(-2944, -500, 11900, -8742, -3925, 4, 119, 7, 255),
    VTX(-2944, -500, 13600, -8742, 10581, 12, 100, 191, 255),
    VTX(-1472, -500, 14450, 3821, 17835, 0, 90, 178, 255),
    VTX(0, -500, 13600, 16384, 10581, 245, 111, 214, 255),
    VTX(0, -500, 11900, 16384, -3925, 252, 119, 2, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0077F0[3] = {
    VTX(-2944, -500, 11900, -8742, -3925, 4, 119, 7, 255),
    VTX(-2944, -500, 13600, -8742, 10581, 12, 100, 191, 255),
    VTX(-1472, -500, 12750, 3821, 3328, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_007820[8] = {
    VTX(-2944, -500, 13600, 4096, 2048, 12, 100, 191, 255),
    VTX(-2944, -100, 13600, 4096, 0, 0, 0, 136, 255),
    VTX(-1472, -100, 14450, 0, 0, 0, 0, 136, 255),
    VTX(-1472, -500, 14450, 0, 2048, 0, 90, 178, 255),
    VTX(-1472, -500, 14450, 4096, 2048, 0, 90, 178, 255),
    VTX(-1472, -100, 14450, 4096, 0, 0, 0, 136, 255),
    VTX(0, -100, 13600, 0, 0, 225, 0, 141, 255),
    VTX(0, -500, 13600, 0, 2048, 245, 111, 214, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0078A0[8] = {
    VTX(-2944, -500, 11050, 0, 0, 0, 0, 0, 0),
    VTX(0, -500, 11050, 0, 0, 0, 0, 0, 0),
    VTX(-2944, -100, 11050, 0, 0, 0, 0, 0, 0),
    VTX(0, -100, 11050, 0, 0, 0, 0, 0, 0),
    VTX(-2944, -500, 14450, 0, 0, 0, 0, 0, 0),
    VTX(0, -500, 14450, 0, 0, 0, 0, 0, 0),
    VTX(-2944, -100, 14450, 0, 0, 0, 0, 0, 0),
    VTX(0, -100, 14450, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x007920[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_0078A0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_007780[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(0, 4, 5, 0, 5, 6, 0, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0077F0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_007820[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_007AA0[8] = {
    VTX(1472, -500, 12750, 4371, -4864, 0, 119, 5, 255),
    VTX(1472, -300, 11050, 4371, -19371, 224, 112, 27, 255),
    VTX(0, -500, 11900, -8192, -12117, 252, 119, 2, 255),
    VTX(0, -500, 13600, -8192, 2389, 245, 111, 214, 255),
    VTX(1472, -500, 13600, 4371, 2389, 235, 109, 211, 255),
    VTX(1472, -500, 14450, 4371, 9643, 0, 120, 0, 255),
    VTX(2944, -500, 13600, 16934, 2389, 0, 120, 0, 255),
    VTX(2944, -500, 11900, 16934, -12117, 215, 111, 16, 255),
}; 

static Vtx hyrule_field_room_00Vtx_007B20[3] = {
    VTX(0, -500, 11900, -8192, -12117, 252, 119, 2, 255),
    VTX(0, -500, 13600, -8192, 2389, 245, 111, 214, 255),
    VTX(1472, -500, 12750, 4371, -4864, 0, 119, 5, 255),
}; 

static Vtx hyrule_field_room_00Vtx_007B50[12] = {
    VTX(0, -500, 13600, 4096, 2048, 245, 111, 214, 255),
    VTX(0, -100, 13600, 4096, 0, 225, 0, 141, 255),
    VTX(1472, -100, 13600, 0, 0, 206, 0, 147, 255),
    VTX(1472, -500, 13600, 0, 2048, 235, 109, 211, 255),
    VTX(1472, -500, 13600, 4096, 2048, 235, 109, 211, 255),
    VTX(1472, -100, 13600, 4096, 0, 206, 0, 147, 255),
    VTX(2944, -100, 11900, 0, 0, 138, 0, 20, 255),
    VTX(2944, -500, 11900, 0, 2048, 215, 111, 16, 255),
    VTX(2944, -500, 11900, 5120, 2048, 215, 111, 16, 255),
    VTX(2944, -100, 11900, 5120, 0, 138, 0, 20, 255),
    VTX(1472, 100, 11050, 0, 0, 153, 0, 60, 255),
    VTX(1472, -300, 11050, 0, 2048, 224, 112, 27, 255),
}; 

static Vtx hyrule_field_room_00Vtx_007C10[8] = {
    VTX(0, -500, 11050, 0, 0, 0, 0, 0, 0),
    VTX(2944, -500, 11050, 0, 0, 0, 0, 0, 0),
    VTX(0, 100, 11050, 0, 0, 0, 0, 0, 0),
    VTX(2944, 100, 11050, 0, 0, 0, 0, 0, 0),
    VTX(0, -500, 14450, 0, 0, 0, 0, 0, 0),
    VTX(2944, -500, 14450, 0, 0, 0, 0, 0, 0),
    VTX(0, 100, 14450, 0, 0, 0, 0, 0, 0),
    VTX(2944, 100, 14450, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x007C90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_007C10[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0080E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 3, 3),
    gsDPLoadMultiBlock(hyrule_field_sceneTex_0078E0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 15),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_007AA0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(3, 5, 4, 0, 0, 4, 6, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 0, 0),
    gsSP1Triangle(1, 0, 7, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_007B20[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&hyrule_field_room_00Vtx_007B50[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_007E20[8] = {
    VTX(220, 40, 1240, 2048, 0, 0, 120, 0, 255),
    VTX(220, 40, 1080, 0, 0, 0, 120, 0, 255),
    VTX(180, 40, 1080, 0, 512, 0, 120, 0, 255),
    VTX(180, 40, 1240, 2048, 512, 0, 120, 0, 255),
    VTX(-180, 40, 1240, 2048, 0, 0, 120, 0, 255),
    VTX(-180, 40, 1080, 0, 0, 0, 120, 0, 255),
    VTX(-220, 40, 1080, 0, 512, 0, 120, 0, 255),
    VTX(-220, 40, 1240, 2048, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_007EA0[32] = {
    VTX(180, 0, 1080, 1024, 512, 0, 0, 136, 255),
    VTX(180, 40, 1080, 1024, 0, 0, 0, 136, 255),
    VTX(220, 40, 1080, 512, 0, 0, 0, 136, 255),
    VTX(220, 0, 1080, 512, 512, 0, 0, 136, 255),
    VTX(180, 0, 1240, 2048, 512, 136, 0, 0, 255),
    VTX(180, 40, 1240, 2048, 0, 136, 0, 0, 255),
    VTX(180, 40, 1080, 0, 0, 136, 0, 0, 255),
    VTX(180, 0, 1080, 0, 512, 136, 0, 0, 255),
    VTX(220, 0, 1240, 512, 512, 0, 0, 120, 255),
    VTX(220, 40, 1240, 512, 0, 0, 0, 120, 255),
    VTX(180, 40, 1240, 0, 0, 0, 0, 120, 255),
    VTX(180, 0, 1240, 0, 512, 0, 0, 120, 255),
    VTX(-220, 0, 1080, 1024, 512, 0, 0, 136, 255),
    VTX(-220, 40, 1080, 1024, 0, 0, 0, 136, 255),
    VTX(-180, 40, 1080, 512, 0, 0, 0, 136, 255),
    VTX(-180, 0, 1080, 512, 512, 0, 0, 136, 255),
    VTX(-220, 0, 1240, 2048, 512, 136, 0, 0, 255),
    VTX(-220, 40, 1240, 2048, 0, 136, 0, 0, 255),
    VTX(-220, 40, 1080, 0, 0, 136, 0, 0, 255),
    VTX(-220, 0, 1080, 0, 512, 136, 0, 0, 255),
    VTX(220, 0, 1080, 2560, 512, 120, 0, 0, 255),
    VTX(220, 40, 1080, 2560, 0, 120, 0, 0, 255),
    VTX(220, 40, 1240, 512, 0, 120, 0, 0, 255),
    VTX(220, 0, 1240, 512, 512, 120, 0, 0, 255),
    VTX(-180, 0, 1080, 2560, 512, 120, 0, 0, 255),
    VTX(-180, 40, 1080, 2560, 0, 120, 0, 0, 255),
    VTX(-180, 40, 1240, 512, 0, 120, 0, 0, 255),
    VTX(-180, 0, 1240, 512, 512, 120, 0, 0, 255),
    VTX(-180, 0, 1240, 512, 512, 0, 0, 120, 255),
    VTX(-180, 40, 1240, 512, 0, 0, 0, 120, 255),
    VTX(-220, 40, 1240, 0, 0, 0, 0, 120, 255),
    VTX(-220, 0, 1240, 0, 512, 0, 0, 120, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0080A0[8] = {
    VTX(-220, 0, 1080, 0, 0, 0, 0, 0, 0),
    VTX(220, 0, 1080, 0, 0, 0, 0, 0, 0),
    VTX(-220, 40, 1080, 0, 0, 0, 0, 0, 0),
    VTX(220, 40, 1080, 0, 0, 0, 0, 0, 0),
    VTX(-220, 0, 1240, 0, 0, 0, 0, 0, 0),
    VTX(220, 0, 1240, 0, 0, 0, 0, 0, 0),
    VTX(-220, 40, 1240, 0, 0, 0, 0, 0, 0),
    VTX(220, 40, 1240, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x008120[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_0080A0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_007E20[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_007EA0[0], 32, 0),
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

static Vtx hyrule_field_room_00Vtx_008270[12] = {
    VTX(5965, 799, -2225, 816, 2048, 147, 41, 28, 255),
    VTX(6252, 799, -1715, 1632, 2048, 192, 65, 78, 255),
    VTX(6626, 1596, -2094, 1632, 0, 192, 65, 78, 255),
    VTX(6401, 1648, -2491, 816, 0, 147, 41, 28, 255),
    VTX(5726, 803, -3567, 0, 0, 142, 22, 28, 255),
    VTX(5955, 799, -2629, 1024, 2048, 139, 20, 16, 255),
    VTX(6039, 1376, -2735, 1024, 0, 139, 20, 16, 255),
    VTX(6039, 1376, -2735, 0, 0, 139, 20, 16, 255),
    VTX(5955, 799, -2629, 0, 2048, 139, 20, 16, 255),
    VTX(6556, 799, -1617, 2448, 2048, 212, 51, 99, 255),
    VTX(7026, 799, -1348, 3264, 0, 200, 39, 98, 255),
    VTX(6683, 1189, -1701, 2448, 0, 212, 51, 99, 255),
}; 

static Vtx hyrule_field_room_00Vtx_008330[8] = {
    VTX(5635, 588, -3514, 0, 0, 0, 0, 0, 0),
    VTX(6920, 588, -1287, 0, 0, 0, 0, 0, 0),
    VTX(6065, 1449, -3763, 0, 0, 0, 0, 0, 0),
    VTX(7351, 1449, -1536, 0, 0, 0, 0, 0, 0),
    VTX(5314, 802, -3329, 0, 0, 0, 0, 0, 0),
    VTX(6599, 802, -1102, 0, 0, 0, 0, 0, 0),
    VTX(5744, 1663, -3577, 0, 0, 0, 0, 0, 0),
    VTX(7030, 1663, -1351, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x0083B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_008330[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_sceneTex_0068E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_008270[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 0, 0),
    gsSP2Triangles(7, 0, 3, 0, 9, 10, 11, 0),
    gsSP2Triangles(1, 9, 11, 0, 1, 11, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_008480[8] = {
    VTX(340, 20, 680, 1024, 2048, 0, 0, 120, 255),
    VTX(340, 340, 680, 1024, 0, 0, 0, 120, 255),
    VTX(180, 20, 680, 0, 2048, 0, 0, 120, 255),
    VTX(180, 340, 680, 0, 0, 0, 0, 120, 255),
    VTX(-180, 20, 680, 1024, 2048, 0, 0, 120, 255),
    VTX(-340, 340, 680, 0, 0, 0, 0, 120, 255),
    VTX(-340, 20, 680, 0, 2048, 0, 0, 120, 255),
    VTX(-180, 340, 680, 1024, 0, 0, 0, 120, 255),
}; 

static Vtx hyrule_field_room_00Vtx_008500[32] = {
    VTX(340, 340, 520, 1024, 2048, 120, 0, 0, 255),
    VTX(340, 620, 520, 1024, 0, 120, 0, 0, 255),
    VTX(340, 620, 680, 0, 0, 120, 0, 0, 255),
    VTX(340, 340, 680, 0, 2048, 120, 0, 0, 255),
    VTX(340, 340, 680, 1024, 2048, 0, 0, 120, 255),
    VTX(180, 620, 680, 0, 0, 0, 0, 120, 255),
    VTX(180, 340, 680, 0, 2048, 0, 0, 120, 255),
    VTX(340, 620, 680, 1024, 0, 0, 0, 120, 255),
    VTX(-180, 340, 680, 1024, 2048, 0, 0, 120, 255),
    VTX(-180, 620, 680, 1024, 0, 0, 0, 120, 255),
    VTX(-340, 340, 680, 0, 2048, 0, 0, 120, 255),
    VTX(-340, 620, 680, 0, 0, 0, 0, 120, 255),
    VTX(-340, 620, 520, 0, 0, 136, 0, 0, 255),
    VTX(-340, 340, 520, 0, 2048, 136, 0, 0, 255),
    VTX(-340, 340, 680, 1024, 2048, 136, 0, 0, 255),
    VTX(-340, 620, 680, 1024, 0, 136, 0, 0, 255),
    VTX(180, 620, 520, 0, 0, 136, 0, 0, 255),
    VTX(180, 518, 520, 0, 748, 136, 0, 0, 255),
    VTX(180, 518, 600, 512, 748, 136, 0, 0, 255),
    VTX(180, 620, 680, 1024, 0, 136, 0, 0, 255),
    VTX(-180, 518, 600, 512, 748, 120, 0, 0, 255),
    VTX(-180, 518, 520, 1024, 748, 120, 0, 0, 255),
    VTX(-180, 620, 520, 1024, 0, 120, 0, 0, 255),
    VTX(-180, 620, 680, 0, 0, 120, 0, 0, 255),
    VTX(180, 340, 600, 512, 2048, 136, 0, 0, 255),
    VTX(180, 340, 680, 1024, 2048, 136, 0, 0, 255),
    VTX(-180, 340, 600, 512, 2048, 120, 0, 0, 255),
    VTX(-180, 340, 680, 0, 2048, 120, 0, 0, 255),
    VTX(180, 340, 600, 2048, 1991, 0, 136, 0, 255),
    VTX(-180, 340, 600, 0, 1991, 0, 136, 0, 255),
    VTX(-180, 340, 360, 0, 626, 0, 136, 0, 255),
    VTX(180, 340, 360, 2048, 626, 0, 136, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_008700[8] = {
    VTX(-180, 398, 600, 0, 1626, 0, 0, 120, 255),
    VTX(-180, 340, 600, 0, 2048, 0, 0, 120, 255),
    VTX(180, 340, 600, 2048, 2048, 0, 0, 120, 255),
    VTX(180, 398, 600, 2048, 1626, 0, 0, 120, 255),
    VTX(-2670, 500, -704, 0, 1024, 172, 0, 84, 255),
    VTX(-2670, 340, -704, 0, 2048, 172, 0, 84, 255),
    VTX(-2331, 340, -365, 3072, 2048, 172, 0, 84, 255),
    VTX(-2331, 500, -365, 3072, 1024, 172, 0, 84, 255),
}; 

static Vtx hyrule_field_room_00Vtx_008780[62] = {
    VTX(-340, 340, 680, 2048, 0, 0, 0, 120, 255),
    VTX(-660, 340, 680, 0, 0, 0, 0, 120, 255),
    VTX(-660, 20, 680, 0, 2048, 0, 0, 120, 255),
    VTX(-340, 20, 680, 2048, 2048, 0, 0, 120, 255),
    VTX(180, 340, 600, 1536, 0, 136, 0, 0, 255),
    VTX(180, 20, 680, 2048, 2048, 136, 0, 0, 255),
    VTX(180, 340, 680, 2048, 0, 136, 0, 0, 255),
    VTX(340, 20, 680, 0, 2048, 0, 0, 120, 255),
    VTX(660, 20, 680, 2048, 2048, 0, 0, 120, 255),
    VTX(660, 340, 680, 2048, 0, 0, 0, 120, 255),
    VTX(340, 340, 680, 0, 0, 0, 0, 120, 255),
    VTX(-180, 20, 680, 0, 2048, 120, 0, 0, 255),
    VTX(-180, 340, 600, 512, 0, 120, 0, 0, 255),
    VTX(-180, 340, 680, 0, 0, 120, 0, 0, 255),
    VTX(180, 340, 360, 0, 0, 136, 0, 0, 255),
    VTX(180, 20, 360, 0, 2048, 136, 0, 0, 255),
    VTX(-180, 20, 360, 2048, 2048, 120, 0, 0, 255),
    VTX(-180, 340, 360, 2048, 0, 120, 0, 0, 255),
    VTX(1056, 300, 171, 8157, 2048, 52, 0, 107, 255),
    VTX(1056, 500, 171, 8157, 0, 52, 0, 107, 255),
    VTX(340, 500, 520, 0, 0, 52, 0, 107, 255),
    VTX(340, 300, 520, 0, 2048, 52, 0, 107, 255),
    VTX(-660, 340, 680, 2048, 0, 84, 0, 84, 255),
    VTX(-860, 340, 880, 0, 0, 84, 0, 84, 255),
    VTX(-860, 20, 880, 0, 2048, 84, 0, 84, 255),
    VTX(-660, 20, 680, 2048, 2048, 84, 0, 84, 255),
    VTX(-860, 20, 880, 4096, 2048, 172, 0, 84, 255),
    VTX(-860, 340, 880, 4096, 0, 172, 0, 84, 255),
    VTX(-1539, 340, 201, -2048, 0, 172, 0, 84, 255),
    VTX(-1539, 20, 201, -2048, 2048, 172, 0, 84, 255),
    VTX(-340, 300, 520, 6144, 2048, 0, 0, 120, 255),
    VTX(-340, 500, 520, 6144, 0, 0, 0, 120, 255),
    VTX(-740, 500, 520, 2048, 0, 0, 0, 120, 255),
    VTX(-740, 300, 520, 2048, 2048, 0, 0, 120, 255),
    VTX(-740, 500, 520, 2048, 0, 84, 0, 84, 255),
    VTX(-881, 500, 661, 0, 0, 84, 0, 84, 255),
    VTX(-881, 300, 661, 0, 2048, 84, 0, 84, 255),
    VTX(-740, 300, 520, 2048, 2048, 84, 0, 84, 255),
    VTX(-881, 300, 661, 10240, 2048, 172, 0, 84, 255),
    VTX(-881, 500, 661, 10240, 0, 172, 0, 84, 255),
    VTX(-1907, 500, -365, -4096, 0, 172, 0, 84, 255),
    VTX(-1907, 300, -365, -4096, 2048, 172, 0, 84, 255),
    VTX(-1907, 500, -365, 4096, 0, 0, 0, 120, 255),
    VTX(-2331, 500, -365, 0, 0, 0, 0, 120, 255),
    VTX(-2331, 300, -365, 0, 2048, 0, 0, 120, 255),
    VTX(-1907, 300, -365, 4096, 2048, 0, 0, 120, 255),
    VTX(-1822, 20, 371, 6144, 2048, 172, 0, 84, 255),
    VTX(-1822, 340, 371, 6144, 0, 172, 0, 84, 255),
    VTX(-2953, 340, -760, -4096, 0, 172, 0, 84, 255),
    VTX(-2953, 20, -760, -4096, 2048, 172, 0, 84, 255),
    VTX(-1539, 20, 201, 4096, 2048, 84, 0, 84, 255),
    VTX(-1539, 340, 201, 4096, 0, 84, 0, 84, 255),
    VTX(-1991, 340, 654, 0, 0, 84, 0, 84, 255),
    VTX(-1991, 20, 654, 0, 2048, 84, 0, 84, 255),
    VTX(1282, 500, -55, -2048, 0, 84, 0, 84, 255),
    VTX(1282, 300, -55, -2048, 2048, 84, 0, 84, 255),
    VTX(1961, 300, -734, 6144, 2048, 84, 0, 84, 255),
    VTX(1961, 500, -734, 6144, 0, 84, 0, 84, 255),
    VTX(1339, 20, 1, -2048, 2048, 84, 0, 84, 255),
    VTX(2018, 20, -678, 4096, 2048, 84, 0, 84, 255),
    VTX(2018, 340, -678, 4096, 0, 84, 0, 84, 255),
    VTX(1339, 340, 1, -2048, 0, 84, 0, 84, 255),
}; 

static Vtx hyrule_field_room_00Vtx_008B60[8] = {
    VTX(1113, 20, 227, 4096, 2048, 84, 0, 84, 255),
    VTX(1113, 340, 227, 4096, 0, 84, 0, 84, 255),
    VTX(660, 340, 680, 0, 0, 84, 0, 84, 255),
    VTX(660, 20, 680, 0, 2048, 84, 0, 84, 255),
    VTX(-2048, 20, 597, 2048, 2048, 172, 0, 172, 255),
    VTX(-2048, 340, 597, 2048, 0, 172, 0, 172, 255),
    VTX(-1822, 340, 371, 0, 0, 172, 0, 172, 255),
    VTX(-1822, 20, 371, 0, 2048, 172, 0, 172, 255),
}; 

static Vtx hyrule_field_room_00Vtx_008BE0[8] = {
    VTX(-2953, 20, -760, 0, 0, 0, 0, 0, 0),
    VTX(2018, 20, -760, 0, 0, 0, 0, 0, 0),
    VTX(-2953, 620, -760, 0, 0, 0, 0, 0, 0),
    VTX(2018, 620, -760, 0, 0, 0, 0, 0, 0),
    VTX(-2953, 20, 880, 0, 0, 0, 0, 0, 0),
    VTX(2018, 20, 880, 0, 0, 0, 0, 0, 0),
    VTX(-2953, 620, 880, 0, 0, 0, 0, 0, 0),
    VTX(2018, 620, 880, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x008C60[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_008BE0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_013428, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 235, 235, 200, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_008480[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_013C28, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_008500[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 19, 0, 24, 19, 18, 0),
    gsSP2Triangles(26, 20, 23, 0, 26, 23, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_008700[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_016028, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, 0, 3, 6, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_008780[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(4, 14, 15, 0, 4, 15, 5, 0),
    gsSP2Triangles(16, 17, 12, 0, 16, 12, 11, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_008780[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_008B60[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_008EB0[28] = {
    VTX(-340, -140, 680, 2662, -1229, 0, 99, 66, 255),
    VTX(-660, -140, 680, -614, -1229, 31, 88, 75, 255),
    VTX(-886, -140, 1080, -2931, 2867, 16, 112, 218, 255),
    VTX(-180, -140, 1040, 4301, 2458, 228, 113, 228, 255),
    VTX(-180, -140, 1080, 2253, 819, 187, 69, 187, 255),
    VTX(-180, -140, 1040, 2253, 410, 228, 113, 228, 255),
    VTX(-886, -140, 1080, -4979, 819, 16, 112, 218, 255),
    VTX(180, -140, 1040, 1843, 2458, 28, 113, 228, 255),
    VTX(180, -140, 680, 1843, -1229, 0, 84, 84, 255),
    VTX(-180, -140, 680, -1843, -1229, 0, 84, 84, 255),
    VTX(-180, -140, 1040, -1843, 2458, 228, 113, 228, 255),
    VTX(340, -140, 680, 3482, -1229, 0, 99, 66, 255),
    VTX(180, -140, 1080, 1843, 2867, 69, 69, 187, 255),
    VTX(793, -140, 1080, 8116, 2867, 237, 108, 210, 255),
    VTX(660, -140, 680, 6758, -1229, 31, 88, 75, 255),
    VTX(660, -140, 680, -1434, 2867, 31, 88, 75, 255),
    VTX(793, -140, 1080, -76, 6963, 237, 108, 210, 255),
    VTX(1379, -140, 494, 5927, 960, 218, 107, 218, 255),
    VTX(1113, -140, 227, 3200, -1767, 28, 80, 84, 255),
    VTX(1605, -140, 267, 8244, -1357, 196, 84, 60, 255),
    VTX(1339, -140, 1, 5518, -4084, 0, 69, 98, 255),
    VTX(-860, -140, 880, -2662, 819, 0, 98, 69, 255),
    VTX(-1652, -140, 314, -2580, -877, 84, 80, 228, 255),
    VTX(-886, -140, 1080, 5261, 6963, 16, 112, 218, 255),
    VTX(-860, -140, 880, 5530, 4915, 0, 98, 69, 255),
    VTX(-1539, -140, 201, -1422, -2036, 228, 80, 84, 255),
    VTX(-2418, -140, -451, -10421, -8718, 60, 84, 196, 255),
    VTX(-2218, -140, -478, -8373, -8987, 196, 84, 60, 255),
}; 

static Vtx hyrule_field_room_00Vtx_009070[23] = {
    VTX(-180, 0, 660, -512, 5888, 88, 75, 31, 255),
    VTX(180, 0, 660, 4096, 5888, 168, 75, 31, 255),
    VTX(180, 0, 360, 4096, 2048, 218, 113, 0, 255),
    VTX(-180, 0, 360, -512, 2048, 38, 113, 0, 255),
    VTX(1282, -25, 397, 819, 650, 156, 28, 60, 255),
    VTX(1226, -25, 454, 0, 650, 158, 69, 0, 255),
    VTX(1322, -25, 550, 0, 2048, 196, 84, 60, 255),
    VTX(1379, -25, 494, 819, 2048, 196, 84, 60, 255),
    VTX(1339, 0, 454, 819, 1469, 205, 36, 102, 255),
    VTX(1379, 0, 494, 819, 2048, 196, 84, 60, 255),
    VTX(1605, 0, 267, 4096, 2048, 60, 84, 60, 255),
    VTX(1565, 0, 227, 4096, 1469, 103, 49, 222, 255),
    VTX(1226, -45, 454, 0, 650, 153, 49, 222, 255),
    VTX(1169, -45, 510, -819, 650, 158, 69, 0, 255),
    VTX(1266, -45, 607, -819, 2048, 196, 84, 60, 255),
    VTX(1322, -45, 550, 0, 2048, 196, 84, 60, 255),
    VTX(180, 0, 360, 4096, 2048, 218, 113, 0, 255),
    VTX(540, 0, 360, 8704, 2048, 0, 120, 0, 255),
    VTX(540, 0, -240, 8704, -5632, 0, 120, 0, 255),
    VTX(-540, 0, 360, -5120, 2048, 0, 120, 0, 255),
    VTX(-180, 0, 360, -512, 2048, 38, 113, 0, 255),
    VTX(-540, 0, -240, -5120, -5632, 0, 120, 0, 255),
    VTX(-180, 0, 360, -512, 2048, 38, 113, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0091E0[32] = {
    VTX(-180, 0, 360, 0, 256, 38, 113, 0, 255),
    VTX(-180, 20, 360, 0, 0, 120, 0, 0, 255),
    VTX(-180, 20, 680, -3072, 0, 107, 0, 53, 255),
    VTX(-180, 0, 660, -2880, 256, 88, 75, 31, 255),
    VTX(180, -20, 680, 0, 512, 225, 22, 113, 255),
    VTX(180, 0, 660, 0, 256, 168, 75, 31, 255),
    VTX(-180, 0, 660, -3072, 256, 88, 75, 31, 255),
    VTX(-180, -20, 680, -3072, 512, 31, 22, 113, 255),
    VTX(-180, -140, 1040, 3072, 2048, 228, 113, 228, 255),
    VTX(-180, -20, 1040, 3072, 512, 187, 69, 187, 255),
    VTX(180, -20, 1040, 0, 512, 69, 69, 187, 255),
    VTX(180, -140, 1040, 0, 2048, 28, 113, 228, 255),
    VTX(-180, -20, 1080, 11793, 512, 220, 36, 148, 255),
    VTX(-180, 0, 1080, 11793, 256, 0, 0, 136, 255),
    VTX(180, 0, 1080, 7841, 256, 0, 0, 136, 255),
    VTX(180, -20, 1080, 7841, 512, 36, 36, 148, 255),
    VTX(180, -140, 1080, 7841, 2048, 69, 69, 187, 255),
    VTX(180, -140, 1040, 8192, 2048, 28, 113, 228, 255),
    VTX(180, -20, 1040, 8192, 512, 69, 69, 187, 255),
    VTX(-180, -140, 1040, 1024, 2048, 228, 113, 228, 255),
    VTX(-180, -140, 1080, 1536, 2048, 187, 69, 187, 255),
    VTX(-180, -20, 1080, 1536, 512, 220, 36, 148, 255),
    VTX(-180, -20, 1040, 1024, 512, 187, 69, 187, 255),
    VTX(793, -20, 1080, 0, 512, 210, 0, 146, 255),
    VTX(793, -140, 1080, 0, 2048, 237, 108, 210, 255),
    VTX(793, 0, 1080, 0, 256, 210, 0, 146, 255),
    VTX(180, -140, 680, 0, 2048, 0, 84, 84, 255),
    VTX(-180, -140, 680, -3072, 2048, 0, 84, 84, 255),
    VTX(1113, -140, 227, -2048, 2048, 28, 80, 84, 255),
    VTX(1339, -140, 1, 2048, 2048, 0, 69, 98, 255),
    VTX(1339, 20, 1, 2048, 0, 120, 0, 0, 255),
    VTX(1113, 20, 227, -2048, 0, 233, 0, 117, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0093E0[32] = {
    VTX(-340, -140, 680, -5120, 2048, 0, 99, 66, 255),
    VTX(-180, -140, 680, -3072, 2048, 0, 84, 84, 255),
    VTX(-180, -20, 680, -3072, 512, 31, 22, 113, 255),
    VTX(-340, 20, 680, -5120, 0, 0, 0, 120, 255),
    VTX(1379, -20, 494, 0, 512, 172, 0, 172, 255),
    VTX(1379, -140, 494, 0, 2048, 218, 107, 218, 255),
    VTX(793, -140, 1080, 8192, 2048, 237, 108, 210, 255),
    VTX(793, -20, 1080, 8192, 512, 210, 0, 146, 255),
    VTX(793, -20, 1080, 8192, 512, 210, 0, 146, 255),
    VTX(793, 0, 1080, 8192, 256, 210, 0, 146, 255),
    VTX(1379, 0, 494, 0, 256, 196, 84, 60, 255),
    VTX(1379, -20, 494, 0, 512, 172, 0, 172, 255),
    VTX(180, -20, 1080, 0, 753, 36, 36, 148, 255),
    VTX(180, -20, 1040, 0, 512, 69, 69, 187, 255),
    VTX(-180, -20, 1040, 3072, 512, 187, 69, 187, 255),
    VTX(-180, -20, 1080, 3072, 753, 220, 36, 148, 255),
    VTX(180, -20, 680, 0, 512, 225, 22, 113, 255),
    VTX(180, -140, 680, 0, 2048, 0, 84, 84, 255),
    VTX(340, -140, 680, 2048, 2048, 0, 99, 66, 255),
    VTX(340, 20, 680, 2048, 0, 0, 0, 120, 255),
    VTX(180, 20, 680, 0, 0, 149, 0, 53, 255),
    VTX(1226, -25, 454, 2048, 576, 158, 69, 0, 255),
    VTX(1226, -45, 454, 2048, 832, 153, 49, 222, 255),
    VTX(1322, -45, 550, 3796, 832, 196, 84, 60, 255),
    VTX(1322, -25, 550, 3796, 576, 196, 84, 60, 255),
    VTX(1339, 0, 454, 4096, 256, 205, 36, 102, 255),
    VTX(1282, -25, 397, 3072, 576, 156, 28, 60, 255),
    VTX(1379, -25, 494, 4820, 576, 196, 84, 60, 255),
    VTX(1379, 0, 494, 4820, 256, 196, 84, 60, 255),
    VTX(1266, -140, 607, 2772, 2048, 172, 0, 84, 255),
    VTX(1266, -45, 607, 2772, 832, 196, 84, 60, 255),
    VTX(1169, -45, 510, 1024, 832, 158, 69, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_0095E0[84] = {
    VTX(1266, -140, 607, 2772, 2048, 172, 0, 84, 255),
    VTX(1169, -45, 510, 1024, 832, 158, 69, 0, 255),
    VTX(1169, -140, 510, 1024, 2048, 143, 0, 218, 255),
    VTX(1113, -80, 227, 0, 1280, 172, 0, 84, 255),
    VTX(1282, -80, 397, 3072, 1280, 143, 0, 218, 255),
    VTX(1282, -25, 397, 3072, 576, 156, 28, 60, 255),
    VTX(1282, -25, 397, 1024, 576, 156, 28, 60, 255),
    VTX(1282, -80, 397, 1024, 1280, 143, 0, 218, 255),
    VTX(1226, -45, 454, 2048, 832, 153, 49, 222, 255),
    VTX(1226, -25, 454, 2048, 576, 158, 69, 0, 255),
    VTX(1169, -140, 510, 3072, 2048, 143, 0, 218, 255),
    VTX(1169, -45, 510, 3072, 832, 158, 69, 0, 255),
    VTX(1282, -140, 397, 1024, 2048, 143, 0, 218, 255),
    VTX(1282, -140, 397, 1024, 2048, 143, 0, 218, 255),
    VTX(1282, -80, 397, 1024, 1280, 143, 0, 218, 255),
    VTX(1509, -80, 171, -3072, 1280, 172, 0, 172, 255),
    VTX(1509, -140, 171, -3072, 2048, 172, 0, 172, 255),
    VTX(1113, 20, 227, 0, 0, 233, 0, 117, 255),
    VTX(1339, 0, 454, 4096, 256, 205, 36, 102, 255),
    VTX(-660, 20, 680, 1024, 0, 46, 0, 110, 255),
    VTX(-860, 20, 880, -3072, 0, 0, 0, 120, 255),
    VTX(-860, -140, 880, -3072, 2048, 0, 98, 69, 255),
    VTX(-660, -140, 680, 1024, 2048, 31, 88, 75, 255),
    VTX(-860, -140, 880, 6144, 2048, 0, 98, 69, 255),
    VTX(-860, 20, 880, 6144, 0, 0, 0, 120, 255),
    VTX(-1539, 20, 201, -6144, 0, 38, 0, 113, 255),
    VTX(-1539, -140, 201, -6144, 2048, 228, 80, 84, 255),
    VTX(-340, 20, 680, -5120, 0, 0, 0, 120, 255),
    VTX(-180, -20, 680, -3072, 512, 31, 22, 113, 255),
    VTX(-180, 20, 680, -3072, 0, 107, 0, 53, 255),
    VTX(340, -140, 680, 2048, 2048, 0, 99, 66, 255),
    VTX(660, -140, 680, 6144, 2048, 31, 88, 75, 255),
    VTX(660, 20, 680, 6144, 0, 46, 0, 110, 255),
    VTX(340, 20, 680, 2048, 0, 0, 0, 120, 255),
    VTX(-886, 0, 1080, 9733, 256, 30, 0, 140, 255),
    VTX(-180, 0, 1080, 1536, 256, 0, 0, 136, 255),
    VTX(-180, -20, 1080, 1536, 512, 220, 36, 148, 255),
    VTX(-886, -140, 1080, 1536, 2048, 16, 112, 218, 255),
    VTX(-1652, -140, 314, 10236, 2048, 84, 80, 228, 255),
    VTX(-1652, 0, 314, 10236, 256, 107, 0, 53, 255),
    VTX(-886, 0, 1080, 1536, 256, 30, 0, 140, 255),
    VTX(-180, -20, 1080, 1536, 512, 220, 36, 148, 255),
    VTX(-180, -140, 1080, 1536, 2048, 187, 69, 187, 255),
    VTX(-886, -140, 1080, 9733, 2048, 16, 112, 218, 255),
    VTX(-1652, 0, 314, 0, 256, 107, 0, 53, 255),
    VTX(-1539, 20, 201, 2048, 0, 38, 0, 113, 255),
    VTX(-1991, 20, 654, -6144, 0, 110, 0, 209, 255),
    VTX(-1652, -80, 314, 0, 1280, 113, 0, 38, 255),
    VTX(-1539, -80, 201, 2048, 1280, 38, 0, 113, 255),
    VTX(-1991, 0, 654, -6144, 256, 113, 0, 218, 255),
    VTX(1113, -140, 227, 8192, 2048, 28, 80, 84, 255),
    VTX(1113, 20, 227, 8192, 0, 233, 0, 117, 255),
    VTX(660, 20, 680, 0, 0, 46, 0, 110, 255),
    VTX(660, -140, 680, 0, 2048, 31, 88, 75, 255),
    VTX(1379, 0, 494, 0, 256, 196, 84, 60, 255),
    VTX(1407, -20, 465, 512, 512, 84, 0, 84, 255),
    VTX(1577, -20, 296, 3584, 512, 84, 0, 84, 255),
    VTX(1605, 0, 267, 4096, 256, 60, 84, 60, 255),
    VTX(1407, -80, 465, 512, 1280, 84, 0, 84, 255),
    VTX(1577, -80, 296, 3584, 1280, 84, 0, 84, 255),
    VTX(-660, -140, 680, -1024, 2048, 31, 88, 75, 255),
    VTX(-340, -140, 680, 3072, 2048, 0, 99, 66, 255),
    VTX(-340, 20, 680, 3072, 0, 0, 0, 120, 255),
    VTX(-660, 20, 680, -1024, 0, 46, 0, 110, 255),
    VTX(-1539, -140, 201, 6144, 2048, 228, 80, 84, 255),
    VTX(-1539, -80, 201, 6144, 1280, 38, 0, 113, 255),
    VTX(-2218, -80, -478, -6144, 1280, 172, 0, 84, 255),
    VTX(-2218, -140, -478, -6144, 2048, 196, 84, 60, 255),
    VTX(-1652, -140, 314, 1536, 2048, 84, 80, 228, 255),
    VTX(-2418, -140, -451, 10236, 2048, 60, 84, 196, 255),
    VTX(-2418, -80, -451, 10236, 1280, 84, 0, 172, 255),
    VTX(-1652, -80, 314, 1536, 1280, 113, 0, 38, 255),
    VTX(180, -20, 680, 0, 256, 225, 22, 113, 255),
    VTX(180, 20, 680, 0, 0, 149, 0, 53, 255),
    VTX(180, 0, 660, -192, 256, 168, 75, 31, 255),
    VTX(180, 20, 360, -3072, 0, 136, 0, 0, 255),
    VTX(180, 0, 360, -3072, 256, 218, 113, 0, 255),
    VTX(-180, 20, 680, -3072, 0, 107, 0, 53, 255),
    VTX(-180, -20, 680, -3072, 256, 31, 22, 113, 255),
    VTX(-180, 0, 660, -2880, 256, 88, 75, 31, 255),
    VTX(1339, -20, 1, 0, 512, 172, 0, 84, 255),
    VTX(1339, -140, 1, 0, 2048, 0, 69, 98, 255),
    VTX(1605, -140, 267, 4820, 2048, 196, 84, 60, 255),
    VTX(1605, -20, 267, 4820, 512, 172, 0, 84, 255),
}; 

static Vtx hyrule_field_room_00Vtx_009B20[3] = {
    VTX(-180, -140, 1040, 4608, 5113, 228, 113, 228, 255),
    VTX(-180, -140, 680, 0, 5113, 0, 84, 84, 255),
    VTX(-340, -140, 680, 0, 5988, 0, 99, 66, 255),
}; 

static Vtx hyrule_field_room_00Vtx_009B50[32] = {
    VTX(1339, 20, 1, 0, 2048, 120, 0, 0, 255),
    VTX(1339, 0, 1, 0, 2304, 120, 0, 0, 255),
    VTX(2018, 20, -678, 12288, 2048, 0, 0, 120, 255),
    VTX(1565, 0, 227, -2048, 2304, 103, 49, 222, 255),
    VTX(1339, 0, 1, 2048, 2304, 120, 0, 0, 255),
    VTX(1339, 20, 1, 2048, 2048, 120, 0, 0, 255),
    VTX(3036, 20, -1470, 10240, 4096, 84, 0, 84, 255),
    VTX(3036, 520, -1470, 10240, -2304, 84, 0, 84, 255),
    VTX(2131, 520, -565, -6144, -2304, 218, 0, 113, 255),
    VTX(2131, 20, -565, -6144, 4096, 0, 0, 120, 255),
    VTX(2018, 340, -678, 0, 2048, 172, 0, 84, 255),
    VTX(2131, 520, -565, 2048, -256, 218, 0, 113, 255),
    VTX(1961, 520, -734, -1024, -256, 172, 0, 84, 255),
    VTX(1961, 340, -734, -1024, 2048, 172, 0, 84, 255),
    VTX(2018, 20, -678, 0, 6144, 0, 0, 120, 255),
    VTX(2131, 20, -565, 2048, 6144, 0, 0, 120, 255),
    VTX(1339, 340, 1, 4096, 2048, 84, 0, 172, 255),
    VTX(1565, 520, 227, 0, -256, 113, 0, 218, 255),
    VTX(1565, 0, 227, 0, 6400, 103, 49, 222, 255),
    VTX(1339, 20, 1, 4096, 6144, 120, 0, 0, 255),
    VTX(1282, 340, -55, 5120, 2048, 84, 0, 172, 255),
    VTX(1282, 520, -55, 5120, -256, 84, 0, 172, 255),
    VTX(1565, 0, 227, 4096, 6400, 103, 49, 222, 255),
    VTX(1565, 520, 227, 4096, -256, 113, 0, 218, 255),
    VTX(1339, 520, 454, 0, -256, 218, 0, 113, 255),
    VTX(1339, 0, 454, 0, 6400, 205, 36, 102, 255),
    VTX(1113, 340, 227, 0, -2048, 172, 0, 84, 255),
    VTX(1339, 520, 454, 4096, -4352, 218, 0, 113, 255),
    VTX(1056, 520, 171, -1024, -4352, 172, 0, 84, 255),
    VTX(1056, 340, 171, -1024, -2048, 172, 0, 84, 255),
    VTX(1113, 20, 227, 0, 2048, 233, 0, 117, 255),
    VTX(1339, 0, 454, 4096, 2304, 205, 36, 102, 255),
}; 

static Vtx hyrule_field_room_00Vtx_009D50[32] = {
    VTX(-1822, -300, 371, 9216, 4096, 136, 0, 0, 255),
    VTX(-1822, 20, 371, 9216, 0, 136, 0, 0, 255),
    VTX(-2953, 20, -760, -11264, 0, 172, 0, 84, 255),
    VTX(-2953, -300, -760, -11264, 4096, 172, 0, 84, 255),
    VTX(-1822, 20, 371, -3072, 0, 136, 0, 0, 255),
    VTX(-1822, -300, 371, -3072, 4096, 136, 0, 0, 255),
    VTX(-2048, -300, 597, 1024, 4096, 172, 0, 172, 255),
    VTX(-2048, 20, 597, 1024, 0, 172, 0, 172, 255),
    VTX(-2161, 0, 710, 3072, 4352, 149, 0, 203, 255),
    VTX(-2048, 480, 597, 1024, -1792, 0, 0, 136, 255),
    VTX(-2048, 20, 597, 1024, 4096, 172, 0, 172, 255),
    VTX(-2048, -300, 597, 1024, 2048, 172, 0, 172, 255),
    VTX(-2161, -300, 710, 3072, 2048, 172, 0, 172, 255),
    VTX(-2161, 0, 710, 3072, -1792, 149, 0, 203, 255),
    VTX(-2048, 20, 597, 1024, -2048, 172, 0, 172, 255),
    VTX(-2161, 0, 710, 1024, 4352, 149, 0, 203, 255),
    VTX(-2048, 0, 823, 3072, 4352, 0, 0, 120, 255),
    VTX(-2048, 480, 823, 3072, -1792, 0, 0, 120, 255),
    VTX(-2161, 480, 710, 1024, -1792, 136, 0, 0, 255),
    VTX(-2048, 0, 823, 1024, 4352, 0, 0, 120, 255),
    VTX(-1935, 0, 710, 3072, 4352, 113, 0, 218, 255),
    VTX(-1935, 480, 710, 3072, -1792, 107, 0, 203, 255),
    VTX(-2048, 480, 823, 1024, -1792, 0, 0, 120, 255),
    VTX(-2048, 0, 597, 3072, 2304, 84, 0, 172, 255),
    VTX(-1991, 20, 654, 2048, 2048, 110, 0, 209, 255),
    VTX(-1991, 0, 654, 2048, 2304, 113, 0, 218, 255),
    VTX(-1935, 0, 710, 1024, 2304, 113, 0, 218, 255),
    VTX(-1991, 0, 654, 2048, 2304, 113, 0, 218, 255),
    VTX(-1991, 20, 654, 2048, 2048, 110, 0, 209, 255),
    VTX(-2048, 0, 597, 3072, 2304, 84, 0, 172, 255),
    VTX(-2048, 480, 597, 3072, -3840, 0, 0, 136, 255),
    VTX(-1991, 340, 654, 2048, -2048, 84, 0, 172, 255),
}; 

static Vtx hyrule_field_room_00Vtx_009F50[8] = {
    VTX(-1991, 340, 654, 2048, -2048, 84, 0, 172, 255),
    VTX(-2048, 480, 597, 3072, -3840, 0, 0, 136, 255),
    VTX(-1935, 480, 710, 1024, -3840, 107, 0, 203, 255),
    VTX(-1991, 20, 654, 2048, 2048, 110, 0, 209, 255),
    VTX(-1935, 0, 710, 1024, 2304, 113, 0, 218, 255),
    VTX(-2048, 480, 597, 1024, -1792, 0, 0, 136, 255),
    VTX(-2161, 0, 710, 3072, 4352, 149, 0, 203, 255),
    VTX(-2161, 480, 710, 3072, -1792, 136, 0, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_009FD0[8] = {
    VTX(2977, -300, -1806, 0, 0, 0, 0, 0, 0),
    VTX(3404, -300, 619, 0, 0, 0, 0, 0, 0),
    VTX(2977, 520, -1806, 0, 0, 0, 0, 0, 0),
    VTX(3404, 520, 619, 0, 0, 0, 0, 0, 0),
    VTX(-2953, -300, -760, 0, 0, 0, 0, 0, 0),
    VTX(-2525, -300, 1665, 0, 0, 0, 0, 0, 0),
    VTX(-2953, 520, -760, 0, 0, 0, 0, 0, 0),
    VTX(-2525, 520, 1665, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x00A050[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_009FD0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_015828, G_IM_FMT_I, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 60, 60, 46, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_008EB0[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 8, 7, 11, 0),
    gsSP2Triangles(7, 12, 13, 0, 13, 11, 7, 0),
    gsSP2Triangles(13, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 18, 17, 19, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 2, 1, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 22, 25, 0, 26, 25, 27, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 180, 180, 140, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_009070[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 16, 18, 0, 22, 18, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_017028, G_IM_FMT_I, 64, 64, 0, 0, 3, 6, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0091E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 15, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 16, 0, 23, 16, 15, 0),
    gsSP2Triangles(25, 23, 15, 0, 25, 15, 14, 0),
    gsSP2Triangles(26, 4, 7, 0, 26, 7, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0093E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0095E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(7, 10, 11, 0, 7, 11, 8, 0),
    gsSP2Triangles(7, 12, 10, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 3, 5, 0),
    gsSP2Triangles(5, 18, 17, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0095E0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 4, 0, 14, 15, 16, 0),
    gsSP2Triangles(17, 18, 15, 0, 17, 15, 14, 0),
    gsSP2Triangles(14, 16, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 25, 28, 29, 0),
    gsSP1Triangle(25, 29, 26, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_0095E0[60], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 16, 0),
    gsSP2Triangles(13, 16, 14, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_017828, G_IM_FMT_I, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 60, 60, 46, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_009B20[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 180, 180, 140, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_009B50[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(10, 14, 15, 0, 10, 15, 11, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 20, 21, 0, 16, 21, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(26, 30, 31, 0, 26, 31, 27, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_009D50[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 24, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_009F50[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_00A458[20] = {
    VTX(400, 747, -3543, 2284, 2048, 120, 0, 0, 255),
    VTX(400, 1147, -3543, 2284, 0, 120, 0, 0, 255),
    VTX(400, 1147, -3143, 1890, 0, 84, 0, 84, 255),
    VTX(400, 747, -3143, 1890, 2048, 84, 0, 84, 255),
    VTX(-400, 747, -3143, 0, 2048, 172, 0, 84, 255),
    VTX(-400, 1147, -3143, 0, 0, 172, 0, 84, 255),
    VTX(-400, 1147, -3543, 395, 0, 136, 0, 0, 255),
    VTX(-400, 747, -3543, 395, 2048, 136, 0, 0, 255),
    VTX(-120, 1360, -3303, 0, 176, 187, 69, 69, 255),
    VTX(120, 1360, -3303, 1134, 176, 69, 69, 69, 255),
    VTX(120, 1360, -3543, 1607, 176, 84, 84, 0, 255),
    VTX(-120, 1360, -3543, 473, 176, 172, 84, 0, 255),
    VTX(120, 1067, -3303, 1134, 2048, 84, 0, 84, 255),
    VTX(-120, 1067, -3303, 0, 2048, 172, 0, 84, 255),
    VTX(120, 1067, -3543, 1607, 2048, 120, 0, 0, 255),
    VTX(-120, 1067, -3543, 473, 2048, 136, 0, 0, 255),
    VTX(-240, 1067, -3143, 378, 410, 0, 0, 120, 255),
    VTX(-240, 1147, -3143, 378, 0, 0, 0, 120, 255),
    VTX(240, 1067, -3143, 1512, 410, 0, 0, 120, 255),
    VTX(240, 1147, -3143, 1512, 0, 0, 0, 120, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00A598[8] = {
    VTX(-400, 747, -3543, 0, 0, 0, 0, 0, 0),
    VTX(400, 747, -3543, 0, 0, 0, 0, 0, 0),
    VTX(-400, 1360, -3543, 0, 0, 0, 0, 0, 0),
    VTX(400, 1360, -3543, 0, 0, 0, 0, 0, 0),
    VTX(-400, 747, -3143, 0, 0, 0, 0, 0, 0),
    VTX(400, 747, -3143, 0, 0, 0, 0, 0, 0),
    VTX(-400, 1360, -3143, 0, 0, 0, 0, 0, 0),
    VTX(400, 1360, -3143, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x00A618[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_00A598[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_013C28, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 235, 235, 200, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00A458[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 9, 8, 0, 12, 8, 13, 0),
    gsSP2Triangles(14, 10, 9, 0, 14, 9, 12, 0),
    gsSP2Triangles(13, 8, 11, 0, 13, 11, 15, 0),
    gsSP2Triangles(5, 4, 16, 0, 5, 16, 17, 0),
    gsSP2Triangles(4, 3, 18, 0, 4, 18, 16, 0),
    gsSP2Triangles(3, 2, 19, 0, 3, 19, 18, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_00A710[8] = {
    VTX(-380, -23, 160, 0, 1024, 93, 0, 75, 255),
    VTX(-220, -23, -120, 410, 1024, 52, 0, 108, 255),
    VTX(-220, 377, -120, 410, 0, 52, 0, 108, 255),
    VTX(-380, 377, 160, 0, 0, 93, 0, 75, 255),
    VTX(260, -23, -120, 1638, 1024, 204, 0, 108, 255),
    VTX(260, 377, -120, 1638, 0, 204, 0, 108, 255),
    VTX(420, -23, 160, 2048, 1024, 163, 0, 75, 255),
    VTX(420, 377, 160, 2048, 0, 163, 0, 75, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00A790[4] = {
    VTX(-180, 398, 600, 0, 1024, 0, 0, 119, 255),
    VTX(180, 398, 600, 4096, 1024, 0, 0, 119, 255),
    VTX(180, 518, 600, 4096, 0, 0, 0, 119, 255),
    VTX(-180, 518, 600, 0, 0, 0, 0, 119, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00A7D0[8] = {
    VTX(-380, -71, -112, 0, 0, 0, 0, 0, 0),
    VTX(420, -71, -112, 0, 0, 0, 0, 0, 0),
    VTX(-380, 378, -191, 0, 0, 0, 0, 0, 0),
    VTX(420, 378, -191, 0, 0, 0, 0, 0, 0),
    VTX(-380, 69, 679, 0, 0, 0, 0, 0, 0),
    VTX(420, 69, 679, 0, 0, 0, 0, 0, 0),
    VTX(-380, 518, 600, 0, 0, 0, 0, 0, 0),
    VTX(420, 518, 600, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x00A850[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_00A7D0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_012428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 3, 3, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00A710[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_014828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&hyrule_field_room_00Vtx_00A790[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_00A970[12] = {
    VTX(1282, -140, 397, 2048, 2048, 143, 0, 218, 255),
    VTX(1282, -80, 397, 2048, 0, 143, 0, 218, 255),
    VTX(1113, -80, 227, -2048, 0, 172, 0, 84, 255),
    VTX(1113, -140, 227, -2048, 2048, 28, 80, 84, 255),
    VTX(-1652, -80, 314, -1300, 0, 113, 0, 38, 255),
    VTX(-1652, -140, 314, -1300, 2048, 84, 80, 228, 255),
    VTX(-1539, -140, 201, 1553, 2048, 228, 80, 84, 255),
    VTX(-1539, -80, 201, 1553, 0, 38, 0, 113, 255),
    VTX(1577, -140, 296, 2560, 2048, 84, 0, 84, 255),
    VTX(1577, -80, 296, 2560, 0, 84, 0, 84, 255),
    VTX(1407, -80, 465, -2560, 0, 84, 0, 84, 255),
    VTX(1407, -140, 465, -2560, 2048, 84, 0, 84, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00AA30[8] = {
    VTX(-1652, -140, 201, 0, 0, 0, 0, 0, 0),
    VTX(1577, -140, 201, 0, 0, 0, 0, 0, 0),
    VTX(-1652, -80, 201, 0, 0, 0, 0, 0, 0),
    VTX(1577, -80, 201, 0, 0, 0, 0, 0, 0),
    VTX(-1652, -140, 465, 0, 0, 0, 0, 0, 0),
    VTX(1577, -140, 465, 0, 0, 0, 0, 0, 0),
    VTX(-1652, -80, 465, 0, 0, 0, 0, 0, 0),
    VTX(1577, -80, 465, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x00AAB0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_00AA30[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_014428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 64, 0, 0, 3, 3, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 180, 180, 140, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00A970[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_00AB78[24] = {
    VTX(2101, 0, -1646, 0, 2043, 210, 0, 146, 255),
    VTX(1979, 0, -1352, 1024, 2043, 146, 0, 46, 255),
    VTX(1979, 945, -1352, 1024, 150, 148, 24, 45, 255),
    VTX(2101, 945, -1646, 0, 150, 211, 24, 148, 255),
    VTX(2273, 0, -1231, 0, 2043, 46, 0, 110, 255),
    VTX(2395, 0, -1525, 1024, 2043, 110, 0, 210, 255),
    VTX(2395, 945, -1525, 1024, 150, 108, 24, 211, 255),
    VTX(2273, 945, -1231, 0, 150, 45, 24, 108, 255),
    VTX(1979, 0, -1352, 0, 2043, 146, 0, 46, 255),
    VTX(2273, 0, -1231, 1024, 2043, 46, 0, 110, 255),
    VTX(2273, 945, -1231, 1024, 150, 45, 24, 108, 255),
    VTX(1979, 945, -1352, 0, 150, 148, 24, 45, 255),
    VTX(856, 0, -1367, 0, 2179, 0, 0, 120, 255),
    VTX(975, 0, -1367, 1024, 2179, 0, 0, 120, 255),
    VTX(975, 675, -1367, 1024, 131, 0, 15, 118, 255),
    VTX(856, 675, -1367, 0, 131, 0, 15, 118, 255),
    VTX(856, 675, -1367, 1024, 131, 137, 13, 0, 255),
    VTX(856, 675, -1510, 0, 131, 137, 13, 0, 255),
    VTX(856, 0, -1510, 0, 2179, 136, 0, 0, 255),
    VTX(856, 0, -1367, 1024, 2179, 136, 0, 0, 255),
    VTX(975, 0, -1367, 0, 2179, 120, 0, 0, 255),
    VTX(975, 0, -1510, 1024, 2179, 120, 0, 0, 255),
    VTX(975, 675, -1510, 1024, 131, 119, 13, 0, 255),
    VTX(975, 675, -1367, 0, 131, 119, 13, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00ACF8[24] = {
    VTX(1979, 945, -1352, 1925, 2917, 148, 24, 45, 255),
    VTX(2273, 945, -1231, 3208, 2917, 45, 24, 108, 255),
    VTX(2248, 1104, -1291, 3208, 1560, 31, 89, 74, 255),
    VTX(2040, 1104, -1378, 1925, 1560, 182, 89, 31, 255),
    VTX(2101, 945, -1646, 9623, 2917, 211, 24, 148, 255),
    VTX(1979, 945, -1352, 10906, 2917, 148, 24, 45, 255),
    VTX(2040, 1104, -1378, 10906, 1560, 182, 89, 31, 255),
    VTX(2126, 1104, -1585, 9623, 1560, 225, 89, 182, 255),
    VTX(2273, 945, -1231, 4491, 2917, 45, 24, 108, 255),
    VTX(2395, 945, -1525, 5774, 2917, 108, 24, 211, 255),
    VTX(2334, 1104, -1499, 5774, 1560, 74, 89, 225, 255),
    VTX(2248, 1104, -1291, 4491, 1560, 31, 89, 74, 255),
    VTX(856, 675, -1510, 4636, 2304, 137, 13, 0, 255),
    VTX(856, 675, -1367, 6138, 2304, 137, 13, 0, 255),
    VTX(915, 945, -1438, 5387, 0, 139, 26, 0, 255),
    VTX(975, 675, -1367, 1942, 2304, 119, 13, 0, 255),
    VTX(975, 675, -1510, 3444, 2304, 119, 13, 0, 255),
    VTX(915, 945, -1438, 2693, 0, 117, 26, 0, 255),
    VTX(856, 675, -1367, 751, 2304, 0, 15, 118, 255),
    VTX(975, 675, -1367, 1942, 2304, 0, 15, 118, 255),
    VTX(915, 945, -1438, 1347, 0, 0, 31, 116, 255),
    VTX(2187, 1170, -1438, 2566, 997, 0, 120, 0, 255),
    VTX(2187, 1170, -1438, 10264, 997, 0, 120, 0, 255),
    VTX(2187, 1170, -1438, 5132, 997, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00AE78[9] = {
    VTX(2208, 1150, -1451, 5344, 1168, 103, 4, 60, 255),
    VTX(2187, 1487, -1438, 4277, -1707, 91, 6, 77, 255),
    VTX(2187, 1150, -1414, 3210, 1168, 103, 4, 60, 255),
    VTX(2187, 1150, -1414, 12187, 1168, 153, 4, 60, 255),
    VTX(2187, 1487, -1438, 11120, -1707, 196, 7, 103, 255),
    VTX(2165, 1150, -1451, 10052, 1168, 153, 4, 60, 255),
    VTX(2165, 1150, -1451, 8765, 1168, 0, 4, 137, 255),
    VTX(2187, 1487, -1438, 7698, -1707, 0, 13, 137, 255),
    VTX(2208, 1150, -1451, 6631, 1168, 0, 4, 137, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00AF08[8] = {
    VTX(856, 0, -1646, 0, 0, 0, 0, 0, 0),
    VTX(2395, 0, -1646, 0, 0, 0, 0, 0, 0),
    VTX(856, 1487, -1646, 0, 0, 0, 0, 0, 0),
    VTX(2395, 1487, -1646, 0, 0, 0, 0, 0, 0),
    VTX(856, 0, -1231, 0, 0, 0, 0, 0, 0),
    VTX(2395, 0, -1231, 0, 0, 0, 0, 0, 0),
    VTX(856, 1487, -1231, 0, 0, 0, 0, 0, 0),
    VTX(2395, 1487, -1231, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x00AF88[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_00AF08[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_013428, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 205, 196, 154, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00AB78[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_017828, G_IM_FMT_I, 64, 64, 0, 0, 0, 6, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 60, 60, 46, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00ACF8[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 3, 2, 21, 0),
    gsSP2Triangles(7, 6, 22, 0, 11, 10, 23, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00AE78[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_00B110[18] = {
    VTX(5342, -8, 8819, 3222, 646, 198, 87, 57, 255),
    VTX(5242, -58, 8740, 3593, 1608, 169, 29, 77, 255),
    VTX(5319, -104, 8832, 3904, 638, 171, 224, 77, 255),
    VTX(5242, -58, 8740, 9, 1608, 169, 29, 77, 255),
    VTX(5246, -114, 8734, 355, 1626, 172, 213, 73, 255),
    VTX(5319, -104, 8832, 320, 638, 171, 224, 77, 255),
    VTX(5268, -11, 8729, 3260, 1592, 192, 88, 49, 255),
    VTX(5431, 14, 8765, 2574, 724, 47, 106, 227, 255),
    VTX(5322, 16, 8714, 2894, 1543, 241, 118, 14, 255),
    VTX(5369, 6, 8684, 2581, 1552, 40, 105, 215, 255),
    VTX(5473, -99, 8740, 1829, 776, 98, 241, 190, 255),
    VTX(5393, -40, 8644, 2196, 1662, 89, 51, 194, 255),
    VTX(5369, 6, 8684, 2511, 1567, 40, 105, 215, 255),
    VTX(5400, -105, 8639, 1801, 1676, 95, 231, 188, 255),
    VTX(5379, -160, 8668, 1448, 1619, 84, 196, 196, 255),
    VTX(5444, -160, 8757, 1453, 746, 85, 199, 194, 255),
    VTX(5286, -160, 8733, 718, 1583, 183, 186, 64, 255),
    VTX(5352, -160, 8813, 699, 677, 179, 189, 63, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00B230[32] = {
    VTX(5322, 16, 8714, 2047, 897, 202, 15, 151, 255),
    VTX(5323, -3, 8713, 1850, 931, 202, 15, 151, 255),
    VTX(5277, -24, 8721, 1738, 1411, 198, 23, 154, 255),
    VTX(5268, -11, 8729, 1908, 1496, 198, 23, 154, 255),
    VTX(5246, -114, 8734, 906, 2027, 190, 235, 159, 255),
    VTX(5259, -107, 8724, 926, 1841, 190, 235, 159, 255),
    VTX(5306, -160, 8726, 475, 1644, 195, 242, 154, 255),
    VTX(5286, -160, 8733, 348, 1783, 195, 242, 154, 255),
    VTX(5379, -160, 8668, 79, 612, 175, 249, 168, 255),
    VTX(5363, -160, 8681, 257, 695, 175, 249, 168, 255),
    VTX(5385, -101, 8651, 612, 299, 175, 249, 169, 255),
    VTX(5400, -105, 8639, 517, 122, 175, 249, 169, 255),
    VTX(5380, -48, 8655, 1169, 224, 167, 7, 176, 255),
    VTX(5393, -40, 8644, 1205, 30, 167, 7, 176, 255),
    VTX(5803, -160, 9220, 1363, 283, 161, 28, 67, 255),
    VTX(5776, -47, 9232, 1784, 808, 212, 150, 32, 255),
    VTX(5380, -48, 8655, 1793, 485, 168, 206, 64, 255),
    VTX(5695, -56, 9282, 1442, 1229, 66, 170, 205, 255),
    VTX(5684, -160, 9290, 952, 1103, 87, 44, 187, 255),
    VTX(5255, -63, 8729, 1312, 1345, 92, 228, 185, 255),
    VTX(5323, -3, 8713, 1816, 1112, 18, 139, 243, 255),
    VTX(5306, -160, 8726, 927, 887, 54, 98, 213, 255),
    VTX(5259, -107, 8724, 1058, 1179, 88, 45, 189, 255),
    VTX(5277, -24, 8721, 1589, 1305, 64, 167, 208, 255),
    VTX(5363, -12, 8689, 1902, 828, 210, 151, 35, 255),
    VTX(5363, -12, 8689, 1898, 775, 210, 151, 35, 255),
    VTX(5385, -101, 8651, 1512, 288, 162, 25, 69, 255),
    VTX(5363, -160, 8681, 1207, 341, 196, 95, 41, 255),
    VTX(5363, -12, 8689, 1676, 500, 173, 8, 171, 255),
    VTX(5369, 6, 8684, 1834, 378, 173, 8, 171, 255),
    VTX(5363, -12, 8689, 1615, 442, 173, 8, 171, 255),
    VTX(5369, 6, 8684, 1736, 290, 173, 8, 171, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00B430[6] = {
    VTX(5246, -114, 8734, 906, 2027, 190, 235, 159, 255),
    VTX(5242, -58, 8740, 1513, 1913, 184, 11, 162, 255),
    VTX(5255, -63, 8729, 1419, 1749, 184, 11, 162, 255),
    VTX(5259, -107, 8724, 926, 1841, 190, 235, 159, 255),
    VTX(5268, -11, 8729, 1908, 1496, 198, 23, 154, 255),
    VTX(5277, -24, 8721, 1738, 1411, 198, 23, 154, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00B490[8] = {
    VTX(5383, -160, 8619, 0, 0, 0, 0, 0, 0),
    VTX(5852, -160, 9179, 0, 0, 0, 0, 0, 0),
    VTX(5383, 16, 8619, 0, 0, 0, 0, 0, 0),
    VTX(5852, 16, 9179, 0, 0, 0, 0, 0, 0),
    VTX(5230, -160, 8748, 0, 0, 0, 0, 0, 0),
    VTX(5699, -160, 9307, 0, 0, 0, 0, 0, 0),
    VTX(5230, 16, 8748, 0, 0, 0, 0, 0, 0),
    VTX(5699, 16, 9307, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x00B510[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_00B490[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01B028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00B110[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 1, 0, 7, 8, 0, 0),
    gsSP2Triangles(8, 6, 0, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 7, 0, 11, 12, 7, 0),
    gsSP2Triangles(10, 13, 11, 0, 14, 10, 15, 0),
    gsSP2Triangles(14, 13, 10, 0, 5, 16, 17, 0),
    gsSP1Triangle(5, 4, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01B828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00B230[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 15, 17, 0, 18, 21, 22, 0),
    gsSP2Triangles(18, 22, 19, 0, 19, 23, 17, 0),
    gsSP2Triangles(23, 20, 17, 0, 20, 24, 15, 0),
    gsSP2Triangles(25, 16, 15, 0, 16, 26, 14, 0),
    gsSP2Triangles(14, 26, 27, 0, 28, 1, 0, 0),
    gsSP2Triangles(28, 0, 29, 0, 13, 12, 30, 0),
    gsSP1Triangle(13, 30, 31, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00B430[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 1, 4, 0, 2, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_00B6B8[8] = {
    VTX(1956, -20, 959, 5632, 1024, 147, 0, 207, 255),
    VTX(1956, 20, 959, 5632, 0, 147, 0, 207, 255),
    VTX(2100, 20, 774, -512, 0, 147, 0, 207, 255),
    VTX(2100, -20, 774, -512, 1024, 147, 0, 207, 255),
    VTX(1974, -20, 676, 5632, 1024, 109, 0, 49, 255),
    VTX(1974, 20, 676, 5632, 0, 109, 0, 49, 255),
    VTX(1828, 20, 863, -512, 0, 109, 0, 49, 255),
    VTX(1828, -20, 863, -512, 1024, 109, 0, 49, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00B738[12] = {
    VTX(2100, -40, 774, 373, -2389, 109, 0, 49, 255),
    VTX(2100, -20, 774, 32, -2389, 77, 84, 35, 255),
    VTX(1956, -20, 959, 32, 1707, 77, 84, 35, 255),
    VTX(1956, -40, 959, 373, 1707, 109, 0, 49, 255),
    VTX(1828, -20, 863, -2048, -3072, 179, 84, 221, 255),
    VTX(1956, -20, 959, -2048, 1024, 77, 84, 35, 255),
    VTX(2100, -20, 774, 4096, 1024, 77, 84, 35, 255),
    VTX(1974, -20, 676, 4096, -3072, 179, 84, 221, 255),
    VTX(1828, -40, 863, 373, -1707, 147, 0, 207, 255),
    VTX(1828, -20, 863, 32, -1707, 179, 84, 221, 255),
    VTX(1974, -20, 676, 32, 2389, 179, 84, 221, 255),
    VTX(1974, -40, 676, 373, 2389, 147, 0, 207, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00B7F8[8] = {
    VTX(1977, -40, 672, 0, 0, 0, 0, 0, 0),
    VTX(2107, -40, 780, 0, 0, 0, 0, 0, 0),
    VTX(1977, 20, 672, 0, 0, 0, 0, 0, 0),
    VTX(2107, 20, 780, 0, 0, 0, 0, 0, 0),
    VTX(1822, -40, 857, 0, 0, 0, 0, 0, 0),
    VTX(1951, -40, 966, 0, 0, 0, 0, 0, 0),
    VTX(1822, 20, 857, 0, 0, 0, 0, 0, 0),
    VTX(1951, 20, 966, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x00B878[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_00B7F8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_018028, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00B6B8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_018828, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_00B738[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_00B9A8[4] = {
    VTX(-3289, -500, 12620, -3072, 2048, 120, 0, 0, 255),
    VTX(-3289, -500, 12360, 3584, 2048, 120, 0, 0, 255),
    VTX(-3289, -420, 12360, 3584, 0, 120, 0, 0, 255),
    VTX(-3289, -420, 12620, -3072, 0, 120, 0, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00B9E8[32] = {
    VTX(-3304, -500, 12650, 512, 2048, 136, 0, 0, 255),
    VTX(-3304, -380, 12650, 512, 0, 136, 0, 0, 255),
    VTX(-3304, -380, 12620, 0, 0, 136, 0, 0, 255),
    VTX(-3304, -500, 12620, 0, 2048, 136, 0, 0, 255),
    VTX(-3274, -500, 12650, 512, 2048, 0, 0, 120, 255),
    VTX(-3274, -380, 12650, 512, 0, 0, 0, 120, 255),
    VTX(-3304, -380, 12650, 0, 0, 0, 0, 120, 255),
    VTX(-3304, -500, 12650, 0, 2048, 0, 0, 120, 255),
    VTX(-3274, -500, 12620, 512, 2048, 120, 0, 0, 255),
    VTX(-3274, -380, 12620, 512, 0, 120, 0, 0, 255),
    VTX(-3274, -380, 12650, 0, 0, 120, 0, 0, 255),
    VTX(-3274, -500, 12650, 0, 2048, 120, 0, 0, 255),
    VTX(-3274, -500, 12330, 512, 2048, 120, 0, 0, 255),
    VTX(-3274, -380, 12330, 512, 0, 120, 0, 0, 255),
    VTX(-3274, -380, 12360, 0, 0, 120, 0, 0, 255),
    VTX(-3274, -500, 12360, 0, 2048, 120, 0, 0, 255),
    VTX(-3274, -500, 12360, 512, 2048, 0, 0, 120, 255),
    VTX(-3274, -380, 12360, 512, 0, 0, 0, 120, 255),
    VTX(-3304, -380, 12360, 0, 0, 0, 0, 120, 255),
    VTX(-3304, -500, 12360, 0, 2048, 0, 0, 120, 255),
    VTX(-3304, -500, 12360, 512, 2048, 136, 0, 0, 255),
    VTX(-3304, -380, 12360, 512, 0, 136, 0, 0, 255),
    VTX(-3304, -380, 12330, 0, 0, 136, 0, 0, 255),
    VTX(-3304, -500, 12330, 0, 2048, 136, 0, 0, 255),
    VTX(-3304, -500, 12330, 512, 2048, 0, 0, 136, 255),
    VTX(-3304, -380, 12330, 512, 0, 0, 0, 136, 255),
    VTX(-3274, -380, 12330, 0, 0, 0, 0, 136, 255),
    VTX(-3274, -500, 12330, 0, 2048, 0, 0, 136, 255),
    VTX(-3304, -500, 12620, 512, 2048, 0, 0, 136, 255),
    VTX(-3304, -380, 12620, 512, 0, 0, 0, 136, 255),
    VTX(-3274, -380, 12620, 0, 0, 0, 0, 136, 255),
    VTX(-3274, -500, 12620, 0, 2048, 0, 0, 136, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00BBE8[8] = {
    VTX(-3274, -380, 12330, 0, 0, 0, 120, 0, 255),
    VTX(-3304, -380, 12330, 0, 0, 0, 120, 0, 255),
    VTX(-3304, -380, 12360, 0, 0, 0, 120, 0, 255),
    VTX(-3274, -380, 12360, 0, 0, 0, 120, 0, 255),
    VTX(-3274, -380, 12620, 0, 0, 0, 120, 0, 255),
    VTX(-3304, -380, 12620, 0, 0, 0, 120, 0, 255),
    VTX(-3304, -380, 12650, 0, 0, 0, 120, 0, 255),
    VTX(-3274, -380, 12650, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00BC68[4] = {
    VTX(-26, 200, 6805, 19456, 2048, 253, 0, 119, 255),
    VTX(-26, 280, 6805, 19456, 0, 253, 0, 119, 255),
    VTX(-1442, 180, 6770, -16896, 0, 253, 0, 119, 255),
    VTX(-1442, 100, 6770, -16896, 2048, 253, 0, 119, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00BCA8[28] = {
    VTX(-1472, 100, 6755, 512, 2048, 0, 0, 136, 255),
    VTX(-1472, 220, 6755, 512, 0, 0, 0, 136, 255),
    VTX(-1442, 220, 6755, 0, 0, 0, 0, 136, 255),
    VTX(-1442, 100, 6755, 0, 2048, 0, 0, 136, 255),
    VTX(-1442, 100, 6785, 512, 2048, 0, 0, 120, 255),
    VTX(-1442, 220, 6785, 512, 0, 0, 0, 120, 255),
    VTX(-1472, 220, 6785, 0, 0, 0, 0, 120, 255),
    VTX(-1472, 100, 6785, 0, 2048, 0, 0, 120, 255),
    VTX(0, 200, 6800, 512, 2048, 60, 0, 103, 255),
    VTX(0, 320, 6800, 512, 0, 60, 0, 103, 255),
    VTX(-26, 320, 6815, 0, 0, 60, 0, 103, 255),
    VTX(-26, 200, 6815, 0, 2048, 60, 0, 103, 255),
    VTX(-26, 200, 6815, 512, 2048, 153, 0, 60, 255),
    VTX(-26, 320, 6815, 512, 0, 153, 0, 60, 255),
    VTX(-41, 320, 6789, 0, 0, 153, 0, 60, 255),
    VTX(-41, 200, 6789, 0, 2048, 153, 0, 60, 255),
    VTX(-41, 200, 6789, 512, 2048, 196, 0, 153, 255),
    VTX(-41, 320, 6789, 512, 0, 196, 0, 153, 255),
    VTX(-15, 320, 6774, 0, 0, 196, 0, 153, 255),
    VTX(-15, 200, 6774, 0, 2048, 196, 0, 153, 255),
    VTX(-15, 200, 6774, 512, 2048, 103, 0, 196, 255),
    VTX(-15, 320, 6774, 512, 0, 103, 0, 196, 255),
    VTX(0, 320, 6800, 0, 0, 103, 0, 196, 255),
    VTX(0, 200, 6800, 0, 2048, 103, 0, 196, 255),
    VTX(-1442, 100, 6755, 512, 2048, 120, 0, 0, 255),
    VTX(-1442, 220, 6755, 512, 0, 120, 0, 0, 255),
    VTX(-1442, 220, 6785, 0, 0, 120, 0, 0, 255),
    VTX(-1442, 100, 6785, 0, 2048, 120, 0, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00BE68[8] = {
    VTX(0, 320, 6800, 0, 0, 0, 120, 0, 255),
    VTX(-15, 320, 6774, 0, 0, 0, 120, 0, 255),
    VTX(-41, 320, 6789, 0, 0, 0, 120, 0, 255),
    VTX(-26, 320, 6815, 0, 0, 0, 120, 0, 255),
    VTX(-1442, 220, 6785, 0, 0, 0, 120, 0, 255),
    VTX(-1442, 220, 6755, 0, 0, 0, 120, 0, 255),
    VTX(-1472, 220, 6755, 0, 0, 0, 120, 0, 255),
    VTX(-1472, 220, 6785, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00BEE8[4] = {
    VTX(270, -226, 9173, -3072, 2048, 196, 0, 103, 255),
    VTX(495, -226, 9303, 3584, 2048, 196, 0, 103, 255),
    VTX(495, -146, 9303, 3584, 0, 196, 0, 103, 255),
    VTX(270, -146, 9173, -3072, 0, 196, 0, 103, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00BF28[32] = {
    VTX(251, -226, 9145, 512, 2048, 60, 0, 153, 255),
    VTX(251, -106, 9145, 512, 0, 60, 0, 153, 255),
    VTX(277, -106, 9160, 0, 0, 60, 0, 153, 255),
    VTX(277, -226, 9160, 0, 2048, 60, 0, 153, 255),
    VTX(236, -226, 9171, 512, 2048, 153, 0, 196, 255),
    VTX(236, -106, 9171, 512, 0, 153, 0, 196, 255),
    VTX(251, -106, 9145, 0, 0, 153, 0, 196, 255),
    VTX(251, -226, 9145, 0, 2048, 153, 0, 196, 255),
    VTX(262, -226, 9186, 512, 2048, 196, 0, 103, 255),
    VTX(262, -106, 9186, 512, 0, 196, 0, 103, 255),
    VTX(236, -106, 9171, 0, 0, 196, 0, 103, 255),
    VTX(236, -226, 9171, 0, 2048, 196, 0, 103, 255),
    VTX(513, -226, 9331, 512, 2048, 196, 0, 103, 255),
    VTX(513, -106, 9331, 512, 0, 196, 0, 103, 255),
    VTX(487, -106, 9316, 0, 0, 196, 0, 103, 255),
    VTX(487, -226, 9316, 0, 2048, 196, 0, 103, 255),
    VTX(487, -226, 9316, 512, 2048, 153, 0, 196, 255),
    VTX(487, -106, 9316, 512, 0, 153, 0, 196, 255),
    VTX(502, -106, 9290, 0, 0, 153, 0, 196, 255),
    VTX(502, -226, 9290, 0, 2048, 153, 0, 196, 255),
    VTX(502, -226, 9290, 512, 2048, 60, 0, 153, 255),
    VTX(502, -106, 9290, 512, 0, 60, 0, 153, 255),
    VTX(528, -106, 9305, 0, 0, 60, 0, 153, 255),
    VTX(528, -226, 9305, 0, 2048, 60, 0, 153, 255),
    VTX(528, -226, 9305, 512, 2048, 103, 0, 60, 255),
    VTX(528, -106, 9305, 512, 0, 103, 0, 60, 255),
    VTX(513, -106, 9331, 0, 0, 103, 0, 60, 255),
    VTX(513, -226, 9331, 0, 2048, 103, 0, 60, 255),
    VTX(277, -226, 9160, 512, 2048, 103, 0, 60, 255),
    VTX(277, -106, 9160, 512, 0, 103, 0, 60, 255),
    VTX(262, -106, 9186, 0, 0, 103, 0, 60, 255),
    VTX(262, -226, 9186, 0, 2048, 103, 0, 60, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C128[8] = {
    VTX(513, -106, 9331, 0, 0, 0, 120, 0, 255),
    VTX(528, -106, 9305, 0, 0, 0, 120, 0, 255),
    VTX(502, -106, 9290, 0, 0, 0, 120, 0, 255),
    VTX(487, -106, 9316, 0, 0, 0, 120, 0, 255),
    VTX(262, -106, 9186, 0, 0, 0, 120, 0, 255),
    VTX(277, -106, 9160, 0, 0, 0, 120, 0, 255),
    VTX(251, -106, 9145, 0, 0, 0, 120, 0, 255),
    VTX(236, -106, 9171, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C1A8[4] = {
    VTX(-2375, -500, 12335, -2475, 2048, 103, 0, 196, 255),
    VTX(-2505, -500, 12110, 3072, 2048, 103, 0, 196, 255),
    VTX(-2505, -400, 12110, 3072, 0, 103, 0, 196, 255),
    VTX(-2375, -400, 12335, -2475, 0, 103, 0, 196, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C1E8[32] = {
    VTX(-2373, -500, 12368, 512, 2048, 153, 0, 60, 255),
    VTX(-2373, -380, 12368, 512, 0, 153, 0, 60, 255),
    VTX(-2388, -380, 12342, 0, 0, 153, 0, 60, 255),
    VTX(-2388, -500, 12342, 0, 2048, 153, 0, 60, 255),
    VTX(-2347, -500, 12353, 512, 2048, 60, 0, 103, 255),
    VTX(-2347, -380, 12353, 512, 0, 60, 0, 103, 255),
    VTX(-2373, -380, 12368, 0, 0, 60, 0, 103, 255),
    VTX(-2373, -500, 12368, 0, 2048, 60, 0, 103, 255),
    VTX(-2362, -500, 12327, 512, 2048, 103, 0, 196, 255),
    VTX(-2362, -380, 12327, 512, 0, 103, 0, 196, 255),
    VTX(-2347, -380, 12353, 0, 0, 103, 0, 196, 255),
    VTX(-2347, -500, 12353, 0, 2048, 103, 0, 196, 255),
    VTX(-2507, -500, 12076, 512, 2048, 103, 0, 196, 255),
    VTX(-2507, -380, 12076, 512, 0, 103, 0, 196, 255),
    VTX(-2492, -380, 12102, 0, 0, 103, 0, 196, 255),
    VTX(-2492, -500, 12102, 0, 2048, 103, 0, 196, 255),
    VTX(-2492, -500, 12102, 512, 2048, 60, 0, 103, 255),
    VTX(-2492, -380, 12102, 512, 0, 60, 0, 103, 255),
    VTX(-2518, -380, 12117, 0, 0, 60, 0, 103, 255),
    VTX(-2518, -500, 12117, 0, 2048, 60, 0, 103, 255),
    VTX(-2518, -500, 12117, 512, 2048, 153, 0, 60, 255),
    VTX(-2518, -380, 12117, 512, 0, 153, 0, 60, 255),
    VTX(-2533, -380, 12091, 0, 0, 153, 0, 60, 255),
    VTX(-2533, -500, 12091, 0, 2048, 153, 0, 60, 255),
    VTX(-2533, -500, 12091, 512, 2048, 196, 0, 153, 255),
    VTX(-2533, -380, 12091, 512, 0, 196, 0, 153, 255),
    VTX(-2507, -380, 12076, 0, 0, 196, 0, 153, 255),
    VTX(-2507, -500, 12076, 0, 2048, 196, 0, 153, 255),
    VTX(-2388, -500, 12342, 512, 2048, 196, 0, 153, 255),
    VTX(-2388, -380, 12342, 512, 0, 196, 0, 153, 255),
    VTX(-2362, -380, 12327, 0, 0, 196, 0, 153, 255),
    VTX(-2362, -500, 12327, 0, 2048, 196, 0, 153, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C3E8[8] = {
    VTX(-2507, -380, 12076, 0, 0, 0, 120, 0, 255),
    VTX(-2533, -380, 12091, 0, 0, 0, 120, 0, 255),
    VTX(-2518, -380, 12117, 0, 0, 0, 120, 0, 255),
    VTX(-2492, -380, 12102, 0, 0, 0, 120, 0, 255),
    VTX(-2362, -380, 12327, 0, 0, 0, 120, 0, 255),
    VTX(-2388, -380, 12342, 0, 0, 0, 120, 0, 255),
    VTX(-2373, -380, 12368, 0, 0, 0, 120, 0, 255),
    VTX(-2347, -380, 12353, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C468[4] = {
    VTX(-1492, -183, 4225, -7424, 2048, 110, 0, 209, 255),
    VTX(-1797, -140, 3507, 9216, 2048, 110, 0, 209, 255),
    VTX(-1797, -40, 3507, 9216, 0, 110, 0, 209, 255),
    VTX(-1492, -83, 4225, -7424, 0, 110, 0, 209, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C4A8[32] = {
    VTX(-1494, -183, 4258, 512, 2048, 146, 0, 47, 255),
    VTX(-1494, -63, 4258, 512, 0, 146, 0, 47, 255),
    VTX(-1506, -63, 4231, 0, 0, 146, 0, 47, 255),
    VTX(-1506, -183, 4231, 0, 2048, 146, 0, 47, 255),
    VTX(-1466, -183, 4247, 512, 2048, 47, 0, 110, 255),
    VTX(-1466, -63, 4247, 512, 0, 47, 0, 110, 255),
    VTX(-1494, -63, 4258, 0, 0, 47, 0, 110, 255),
    VTX(-1494, -183, 4258, 0, 2048, 47, 0, 110, 255),
    VTX(-1478, -183, 4219, 512, 2048, 110, 0, 209, 255),
    VTX(-1478, -63, 4219, 512, 0, 110, 0, 209, 255),
    VTX(-1466, -63, 4247, 0, 0, 110, 0, 209, 255),
    VTX(-1466, -183, 4247, 0, 2048, 110, 0, 209, 255),
    VTX(-1794, -140, 3473, 512, 2048, 110, 0, 209, 255),
    VTX(-1794, -20, 3473, 512, 0, 110, 0, 209, 255),
    VTX(-1783, -20, 3501, 0, 0, 110, 0, 209, 255),
    VTX(-1783, -140, 3501, 0, 2048, 110, 0, 209, 255),
    VTX(-1783, -140, 3501, 512, 2048, 47, 0, 110, 255),
    VTX(-1783, -20, 3501, 512, 0, 47, 0, 110, 255),
    VTX(-1810, -20, 3513, 0, 0, 47, 0, 110, 255),
    VTX(-1810, -140, 3513, 0, 2048, 47, 0, 110, 255),
    VTX(-1810, -140, 3513, 512, 2048, 146, 0, 47, 255),
    VTX(-1810, -20, 3513, 512, 0, 146, 0, 47, 255),
    VTX(-1822, -20, 3485, 0, 0, 146, 0, 47, 255),
    VTX(-1822, -140, 3485, 0, 2048, 146, 0, 47, 255),
    VTX(-1822, -140, 3485, 512, 2048, 209, 0, 146, 255),
    VTX(-1822, -20, 3485, 512, 0, 209, 0, 146, 255),
    VTX(-1794, -20, 3473, 0, 0, 209, 0, 146, 255),
    VTX(-1794, -140, 3473, 0, 2048, 209, 0, 146, 255),
    VTX(-1506, -183, 4231, 512, 2048, 209, 0, 146, 255),
    VTX(-1506, -63, 4231, 512, 0, 209, 0, 146, 255),
    VTX(-1478, -63, 4219, 0, 0, 209, 0, 146, 255),
    VTX(-1478, -183, 4219, 0, 2048, 209, 0, 146, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C6A8[8] = {
    VTX(-1794, -20, 3473, 0, 0, 0, 120, 0, 255),
    VTX(-1822, -20, 3485, 0, 0, 0, 120, 0, 255),
    VTX(-1810, -20, 3513, 0, 0, 0, 120, 0, 255),
    VTX(-1783, -20, 3501, 0, 0, 0, 120, 0, 255),
    VTX(-1478, -63, 4219, 0, 0, 0, 120, 0, 255),
    VTX(-1506, -63, 4231, 0, 0, 0, 120, 0, 255),
    VTX(-1494, -63, 4258, 0, 0, 0, 120, 0, 255),
    VTX(-1466, -63, 4247, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C728[4] = {
    VTX(2667, 357, 4595, -2475, 2048, 60, 0, 153, 255),
    VTX(2442, 357, 4465, 3072, 2048, 60, 0, 153, 255),
    VTX(2442, 457, 4465, 3072, 0, 60, 0, 153, 255),
    VTX(2667, 457, 4595, -2475, 0, 60, 0, 153, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C768[32] = {
    VTX(2685, 357, 4622, 512, 2048, 196, 0, 103, 255),
    VTX(2685, 477, 4622, 512, 0, 196, 0, 103, 255),
    VTX(2659, 477, 4607, 0, 0, 196, 0, 103, 255),
    VTX(2659, 357, 4607, 0, 2048, 196, 0, 103, 255),
    VTX(2700, 357, 4597, 512, 2048, 103, 0, 60, 255),
    VTX(2700, 477, 4597, 512, 0, 103, 0, 60, 255),
    VTX(2685, 477, 4622, 0, 0, 103, 0, 60, 255),
    VTX(2685, 357, 4622, 0, 2048, 103, 0, 60, 255),
    VTX(2674, 357, 4582, 512, 2048, 60, 0, 153, 255),
    VTX(2674, 477, 4582, 512, 0, 60, 0, 153, 255),
    VTX(2700, 477, 4597, 0, 0, 60, 0, 153, 255),
    VTX(2700, 357, 4597, 0, 2048, 60, 0, 153, 255),
    VTX(2423, 357, 4437, 512, 2048, 60, 0, 153, 255),
    VTX(2423, 477, 4437, 512, 0, 60, 0, 153, 255),
    VTX(2449, 477, 4452, 0, 0, 60, 0, 153, 255),
    VTX(2449, 357, 4452, 0, 2048, 60, 0, 153, 255),
    VTX(2449, 357, 4452, 512, 2048, 103, 0, 60, 255),
    VTX(2449, 477, 4452, 512, 0, 103, 0, 60, 255),
    VTX(2434, 477, 4477, 0, 0, 103, 0, 60, 255),
    VTX(2434, 357, 4477, 0, 2048, 103, 0, 60, 255),
    VTX(2434, 357, 4477, 512, 2048, 196, 0, 103, 255),
    VTX(2434, 477, 4477, 512, 0, 196, 0, 103, 255),
    VTX(2408, 477, 4462, 0, 0, 196, 0, 103, 255),
    VTX(2408, 357, 4462, 0, 2048, 196, 0, 103, 255),
    VTX(2408, 357, 4462, 512, 2048, 153, 0, 196, 255),
    VTX(2408, 477, 4462, 512, 0, 153, 0, 196, 255),
    VTX(2423, 477, 4437, 0, 0, 153, 0, 196, 255),
    VTX(2423, 357, 4437, 0, 2048, 153, 0, 196, 255),
    VTX(2659, 357, 4607, 512, 2048, 153, 0, 196, 255),
    VTX(2659, 477, 4607, 512, 0, 153, 0, 196, 255),
    VTX(2674, 477, 4582, 0, 0, 153, 0, 196, 255),
    VTX(2674, 357, 4582, 0, 2048, 153, 0, 196, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C968[8] = {
    VTX(2423, 477, 4437, 0, 0, 0, 120, 0, 255),
    VTX(2408, 477, 4462, 0, 0, 0, 120, 0, 255),
    VTX(2434, 477, 4477, 0, 0, 0, 120, 0, 255),
    VTX(2449, 477, 4452, 0, 0, 0, 120, 0, 255),
    VTX(2674, 477, 4582, 0, 0, 0, 120, 0, 255),
    VTX(2659, 477, 4607, 0, 0, 0, 120, 0, 255),
    VTX(2685, 477, 4622, 0, 0, 0, 120, 0, 255),
    VTX(2700, 477, 4597, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00C9E8[4] = {
    VTX(-5907, -500, 7350, -4949, 2048, 60, 0, 153, 255),
    VTX(-6358, -500, 7090, 6144, 2048, 60, 0, 153, 255),
    VTX(-6358, -400, 7090, 6144, 0, 60, 0, 153, 255),
    VTX(-5907, -400, 7350, -4949, 0, 60, 0, 153, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00CA28[32] = {
    VTX(-5889, -500, 7378, 512, 2048, 196, 0, 103, 255),
    VTX(-5889, -380, 7378, 512, 0, 196, 0, 103, 255),
    VTX(-5915, -380, 7363, 0, 0, 196, 0, 103, 255),
    VTX(-5915, -500, 7363, 0, 2048, 196, 0, 103, 255),
    VTX(-5874, -500, 7352, 512, 2048, 103, 0, 60, 255),
    VTX(-5874, -380, 7352, 512, 0, 103, 0, 60, 255),
    VTX(-5889, -380, 7378, 0, 0, 103, 0, 60, 255),
    VTX(-5889, -500, 7378, 0, 2048, 103, 0, 60, 255),
    VTX(-5900, -500, 7337, 512, 2048, 60, 0, 153, 255),
    VTX(-5900, -380, 7337, 512, 0, 60, 0, 153, 255),
    VTX(-5874, -380, 7352, 0, 0, 60, 0, 153, 255),
    VTX(-5874, -500, 7352, 0, 2048, 60, 0, 153, 255),
    VTX(-6376, -500, 7062, 512, 2048, 60, 0, 153, 255),
    VTX(-6376, -380, 7062, 512, 0, 60, 0, 153, 255),
    VTX(-6350, -380, 7077, 0, 0, 60, 0, 153, 255),
    VTX(-6350, -500, 7077, 0, 2048, 60, 0, 153, 255),
    VTX(-6350, -500, 7077, 512, 2048, 103, 0, 60, 255),
    VTX(-6350, -380, 7077, 512, 0, 103, 0, 60, 255),
    VTX(-6365, -380, 7103, 0, 0, 103, 0, 60, 255),
    VTX(-6365, -500, 7103, 0, 2048, 103, 0, 60, 255),
    VTX(-6365, -500, 7103, 512, 2048, 196, 0, 103, 255),
    VTX(-6365, -380, 7103, 512, 0, 196, 0, 103, 255),
    VTX(-6391, -380, 7088, 0, 0, 196, 0, 103, 255),
    VTX(-6391, -500, 7088, 0, 2048, 196, 0, 103, 255),
    VTX(-6391, -500, 7088, 512, 2048, 153, 0, 196, 255),
    VTX(-6391, -380, 7088, 512, 0, 153, 0, 196, 255),
    VTX(-6376, -380, 7062, 0, 0, 153, 0, 196, 255),
    VTX(-6376, -500, 7062, 0, 2048, 153, 0, 196, 255),
    VTX(-5915, -500, 7363, 512, 2048, 153, 0, 196, 255),
    VTX(-5915, -380, 7363, 512, 0, 153, 0, 196, 255),
    VTX(-5900, -380, 7337, 0, 0, 153, 0, 196, 255),
    VTX(-5900, -500, 7337, 0, 2048, 153, 0, 196, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00CC28[8] = {
    VTX(-6376, -380, 7062, 0, 0, 0, 120, 0, 255),
    VTX(-6391, -380, 7088, 0, 0, 0, 120, 0, 255),
    VTX(-6365, -380, 7103, 0, 0, 0, 120, 0, 255),
    VTX(-6350, -380, 7077, 0, 0, 0, 120, 0, 255),
    VTX(-5900, -380, 7337, 0, 0, 0, 120, 0, 255),
    VTX(-5915, -380, 7363, 0, 0, 0, 120, 0, 255),
    VTX(-5889, -380, 7378, 0, 0, 0, 120, 0, 255),
    VTX(-5874, -380, 7352, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00CCA8[4] = {
    VTX(-1324, -468, 11365, 4096, 512, 0, 120, 0, 255),
    VTX(-1359, -468, 11385, 4096, 0, 0, 120, 0, 255),
    VTX(-1199, -468, 11662, 0, 0, 0, 120, 0, 255),
    VTX(-1164, -468, 11642, 0, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00CCE8[16] = {
    VTX(-1359, -500, 11385, 512, 512, 196, 0, 153, 255),
    VTX(-1359, -468, 11385, 512, 0, 196, 0, 153, 255),
    VTX(-1324, -468, 11365, 0, 0, 196, 0, 153, 255),
    VTX(-1324, -500, 11365, 0, 512, 196, 0, 153, 255),
    VTX(-1199, -500, 11662, 4608, 512, 153, 0, 60, 255),
    VTX(-1199, -468, 11662, 4608, 0, 153, 0, 60, 255),
    VTX(-1359, -468, 11385, 512, 0, 153, 0, 60, 255),
    VTX(-1359, -500, 11385, 512, 512, 153, 0, 60, 255),
    VTX(-1164, -500, 11642, 2048, 512, 60, 0, 103, 255),
    VTX(-1164, -468, 11642, 2048, 0, 60, 0, 103, 255),
    VTX(-1199, -468, 11662, 1536, 0, 60, 0, 103, 255),
    VTX(-1199, -500, 11662, 1536, 512, 60, 0, 103, 255),
    VTX(-1324, -500, 11365, 4096, 512, 103, 0, 196, 255),
    VTX(-1324, -468, 11365, 4096, 0, 103, 0, 196, 255),
    VTX(-1164, -468, 11642, 0, 0, 103, 0, 196, 255),
    VTX(-1164, -500, 11642, 0, 512, 103, 0, 196, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00CDE8[4] = {
    VTX(-1802, -468, 11738, 4096, 512, 0, 120, 0, 255),
    VTX(-1836, -468, 11758, 4096, 0, 0, 120, 0, 255),
    VTX(-1676, -468, 12035, 0, 0, 0, 120, 0, 255),
    VTX(-1642, -468, 12015, 0, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00CE28[16] = {
    VTX(-1836, -500, 11758, 512, 512, 196, 0, 153, 255),
    VTX(-1836, -468, 11758, 512, 0, 196, 0, 153, 255),
    VTX(-1802, -468, 11738, 0, 0, 196, 0, 153, 255),
    VTX(-1802, -500, 11738, 0, 512, 196, 0, 153, 255),
    VTX(-1676, -500, 12035, 4608, 512, 153, 0, 60, 255),
    VTX(-1676, -468, 12035, 4608, 0, 153, 0, 60, 255),
    VTX(-1836, -468, 11758, 512, 0, 153, 0, 60, 255),
    VTX(-1836, -500, 11758, 512, 512, 153, 0, 60, 255),
    VTX(-1642, -500, 12015, 2048, 512, 60, 0, 103, 255),
    VTX(-1642, -468, 12015, 2048, 0, 60, 0, 103, 255),
    VTX(-1676, -468, 12035, 1536, 0, 60, 0, 103, 255),
    VTX(-1676, -500, 12035, 1536, 512, 60, 0, 103, 255),
    VTX(-1802, -500, 11738, 4096, 512, 103, 0, 196, 255),
    VTX(-1802, -468, 11738, 4096, 0, 103, 0, 196, 255),
    VTX(-1642, -468, 12015, 0, 0, 103, 0, 196, 255),
    VTX(-1642, -500, 12015, 0, 512, 103, 0, 196, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00CF28[4] = {
    VTX(-6779, -468, 9146, 4096, 512, 0, 120, 0, 255),
    VTX(-6779, -468, 9186, 4096, 0, 0, 120, 0, 255),
    VTX(-6459, -468, 9186, 0, 0, 0, 120, 0, 255),
    VTX(-6459, -468, 9146, 0, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00CF68[16] = {
    VTX(-6779, -500, 9186, 512, 512, 136, 0, 0, 255),
    VTX(-6779, -468, 9186, 512, 0, 136, 0, 0, 255),
    VTX(-6779, -468, 9146, 0, 0, 136, 0, 0, 255),
    VTX(-6779, -500, 9146, 0, 512, 136, 0, 0, 255),
    VTX(-6459, -500, 9186, 4608, 512, 0, 0, 120, 255),
    VTX(-6459, -468, 9186, 4608, 0, 0, 0, 120, 255),
    VTX(-6779, -468, 9186, 512, 0, 0, 0, 120, 255),
    VTX(-6779, -500, 9186, 512, 512, 0, 0, 120, 255),
    VTX(-6459, -500, 9146, 2048, 512, 120, 0, 0, 255),
    VTX(-6459, -468, 9146, 2048, 0, 120, 0, 0, 255),
    VTX(-6459, -468, 9186, 1536, 0, 120, 0, 0, 255),
    VTX(-6459, -500, 9186, 1536, 512, 120, 0, 0, 255),
    VTX(-6779, -500, 9146, 4096, 512, 0, 0, 136, 255),
    VTX(-6779, -468, 9146, 4096, 0, 0, 0, 136, 255),
    VTX(-6459, -468, 9146, 0, 0, 0, 0, 136, 255),
    VTX(-6459, -500, 9146, 0, 512, 0, 0, 136, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D068[4] = {
    VTX(-6463, -468, 8397, 4096, 512, 0, 120, 0, 255),
    VTX(-6463, -468, 8437, 4096, 0, 0, 120, 0, 255),
    VTX(-6143, -468, 8437, 0, 0, 0, 120, 0, 255),
    VTX(-6143, -468, 8397, 0, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D0A8[16] = {
    VTX(-6463, -500, 8437, 512, 512, 136, 0, 0, 255),
    VTX(-6463, -468, 8437, 512, 0, 136, 0, 0, 255),
    VTX(-6463, -468, 8397, 0, 0, 136, 0, 0, 255),
    VTX(-6463, -500, 8397, 0, 512, 136, 0, 0, 255),
    VTX(-6143, -500, 8437, 4608, 512, 0, 0, 120, 255),
    VTX(-6143, -468, 8437, 4608, 0, 0, 0, 120, 255),
    VTX(-6463, -468, 8437, 512, 0, 0, 0, 120, 255),
    VTX(-6463, -500, 8437, 512, 512, 0, 0, 120, 255),
    VTX(-6143, -500, 8397, 2048, 512, 120, 0, 0, 255),
    VTX(-6143, -468, 8397, 2048, 0, 120, 0, 0, 255),
    VTX(-6143, -468, 8437, 1536, 0, 120, 0, 0, 255),
    VTX(-6143, -500, 8437, 1536, 512, 120, 0, 0, 255),
    VTX(-6463, -500, 8397, 4096, 512, 0, 0, 136, 255),
    VTX(-6463, -468, 8397, 4096, 0, 0, 0, 136, 255),
    VTX(-6143, -468, 8397, 0, 0, 0, 0, 136, 255),
    VTX(-6143, -500, 8397, 0, 512, 0, 0, 136, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D1A8[4] = {
    VTX(-7093, -468, 8638, 4096, 512, 0, 120, 0, 255),
    VTX(-7093, -468, 8678, 4096, 0, 0, 120, 0, 255),
    VTX(-6773, -468, 8678, 0, 0, 0, 120, 0, 255),
    VTX(-6773, -468, 8638, 0, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D1E8[16] = {
    VTX(-7093, -500, 8678, 512, 512, 136, 0, 0, 255),
    VTX(-7093, -468, 8678, 512, 0, 136, 0, 0, 255),
    VTX(-7093, -468, 8638, 0, 0, 136, 0, 0, 255),
    VTX(-7093, -500, 8638, 0, 512, 136, 0, 0, 255),
    VTX(-6773, -500, 8678, 4608, 512, 0, 0, 120, 255),
    VTX(-6773, -468, 8678, 4608, 0, 0, 0, 120, 255),
    VTX(-7093, -468, 8678, 512, 0, 0, 0, 120, 255),
    VTX(-7093, -500, 8678, 512, 512, 0, 0, 120, 255),
    VTX(-6773, -500, 8638, 2048, 512, 120, 0, 0, 255),
    VTX(-6773, -468, 8638, 2048, 0, 120, 0, 0, 255),
    VTX(-6773, -468, 8678, 1536, 0, 120, 0, 0, 255),
    VTX(-6773, -500, 8678, 1536, 512, 120, 0, 0, 255),
    VTX(-7093, -500, 8638, 4096, 512, 0, 0, 136, 255),
    VTX(-7093, -468, 8638, 4096, 0, 0, 0, 136, 255),
    VTX(-6773, -468, 8638, 0, 0, 0, 0, 136, 255),
    VTX(-6773, -500, 8638, 0, 512, 0, 0, 136, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D2E8[4] = {
    VTX(-6843, -468, 7384, 4096, 512, 0, 120, 0, 255),
    VTX(-6883, -468, 7384, 4096, 0, 0, 120, 0, 255),
    VTX(-6883, -468, 7704, 0, 0, 0, 120, 0, 255),
    VTX(-6843, -468, 7704, 0, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D328[16] = {
    VTX(-6883, -500, 7384, 512, 512, 0, 0, 136, 255),
    VTX(-6883, -468, 7384, 512, 0, 0, 0, 136, 255),
    VTX(-6843, -468, 7384, 0, 0, 0, 0, 136, 255),
    VTX(-6843, -500, 7384, 0, 512, 0, 0, 136, 255),
    VTX(-6883, -500, 7704, 4608, 512, 136, 0, 0, 255),
    VTX(-6883, -468, 7704, 4608, 0, 136, 0, 0, 255),
    VTX(-6883, -468, 7384, 512, 0, 136, 0, 0, 255),
    VTX(-6883, -500, 7384, 512, 512, 136, 0, 0, 255),
    VTX(-6843, -500, 7704, 2048, 512, 0, 0, 120, 255),
    VTX(-6843, -468, 7704, 2048, 0, 0, 0, 120, 255),
    VTX(-6883, -468, 7704, 1536, 0, 0, 0, 120, 255),
    VTX(-6883, -500, 7704, 1536, 512, 0, 0, 120, 255),
    VTX(-6843, -500, 7384, 4096, 512, 120, 0, 0, 255),
    VTX(-6843, -468, 7384, 4096, 0, 120, 0, 0, 255),
    VTX(-6843, -468, 7704, 0, 0, 120, 0, 0, 255),
    VTX(-6843, -500, 7704, 0, 512, 120, 0, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D428[8] = {
    VTX(-5937, -468, 7573, 4096, 512, 0, 120, 0, 255),
    VTX(-5977, -468, 7573, 4096, 0, 0, 120, 0, 255),
    VTX(-5977, -468, 7853, 512, 0, 0, 120, 0, 255),
    VTX(-5937, -468, 7893, 0, 512, 0, 120, 0, 255),
    VTX(-6257, -468, 7853, 4096, 512, 0, 120, 0, 255),
    VTX(-6257, -468, 7893, 4096, 0, 0, 120, 0, 255),
    VTX(-5937, -468, 7893, 0, 0, 0, 120, 0, 255),
    VTX(-5977, -468, 7853, 512, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D4A8[24] = {
    VTX(-5937, -500, 7573, 4096, 512, 120, 0, 0, 255),
    VTX(-5937, -468, 7573, 4096, 0, 120, 0, 0, 255),
    VTX(-5937, -468, 7893, 0, 0, 120, 0, 0, 255),
    VTX(-5937, -500, 7893, 0, 512, 120, 0, 0, 255),
    VTX(-6257, -500, 7853, 4096, 512, 0, 0, 136, 255),
    VTX(-6257, -468, 7853, 4096, 0, 0, 0, 136, 255),
    VTX(-5977, -468, 7853, 0, 0, 0, 0, 136, 255),
    VTX(-5977, -500, 7853, 0, 512, 0, 0, 136, 255),
    VTX(-5937, -500, 7893, 4608, 512, 0, 0, 120, 255),
    VTX(-5937, -468, 7893, 4608, 0, 0, 0, 120, 255),
    VTX(-6257, -468, 7893, 512, 0, 0, 0, 120, 255),
    VTX(-6257, -500, 7893, 512, 512, 0, 0, 120, 255),
    VTX(-6257, -500, 7893, 512, 512, 136, 0, 0, 255),
    VTX(-6257, -468, 7893, 512, 0, 136, 0, 0, 255),
    VTX(-6257, -468, 7853, 0, 0, 136, 0, 0, 255),
    VTX(-6257, -500, 7853, 0, 512, 136, 0, 0, 255),
    VTX(-5977, -500, 7573, 512, 512, 0, 0, 136, 255),
    VTX(-5977, -468, 7573, 512, 0, 0, 0, 136, 255),
    VTX(-5937, -468, 7573, 0, 0, 0, 0, 136, 255),
    VTX(-5937, -500, 7573, 0, 512, 0, 0, 136, 255),
    VTX(-5977, -500, 7853, 4608, 512, 136, 0, 0, 255),
    VTX(-5977, -468, 7853, 4608, 0, 136, 0, 0, 255),
    VTX(-5977, -468, 7573, 512, 0, 136, 0, 0, 255),
    VTX(-5977, -500, 7573, 512, 512, 136, 0, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D628[8] = {
    VTX(-6828, -468, 8189, 4096, 512, 0, 120, 0, 255),
    VTX(-6828, -468, 8149, 4096, 0, 0, 120, 0, 255),
    VTX(-7108, -468, 8149, 512, 0, 0, 120, 0, 255),
    VTX(-7148, -468, 8189, 0, 512, 0, 120, 0, 255),
    VTX(-7108, -468, 7869, 4096, 512, 0, 120, 0, 255),
    VTX(-7148, -468, 7869, 4096, 0, 0, 120, 0, 255),
    VTX(-7148, -468, 8189, 0, 0, 0, 120, 0, 255),
    VTX(-7108, -468, 8149, 512, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D6A8[24] = {
    VTX(-6828, -500, 8189, 4096, 512, 0, 0, 120, 255),
    VTX(-6828, -468, 8189, 4096, 0, 0, 0, 120, 255),
    VTX(-7148, -468, 8189, 0, 0, 0, 0, 120, 255),
    VTX(-7148, -500, 8189, 0, 512, 0, 0, 120, 255),
    VTX(-7108, -500, 7869, 4096, 512, 120, 0, 0, 255),
    VTX(-7108, -468, 7869, 4096, 0, 120, 0, 0, 255),
    VTX(-7108, -468, 8149, 0, 0, 120, 0, 0, 255),
    VTX(-7108, -500, 8149, 0, 512, 120, 0, 0, 255),
    VTX(-7148, -500, 8189, 4608, 512, 136, 0, 0, 255),
    VTX(-7148, -468, 8189, 4608, 0, 136, 0, 0, 255),
    VTX(-7148, -468, 7869, 512, 0, 136, 0, 0, 255),
    VTX(-7148, -500, 7869, 512, 512, 136, 0, 0, 255),
    VTX(-7148, -500, 7869, 512, 512, 0, 0, 136, 255),
    VTX(-7148, -468, 7869, 512, 0, 0, 0, 136, 255),
    VTX(-7108, -468, 7869, 0, 0, 0, 0, 136, 255),
    VTX(-7108, -500, 7869, 0, 512, 0, 0, 136, 255),
    VTX(-6828, -500, 8149, 512, 512, 120, 0, 0, 255),
    VTX(-6828, -468, 8149, 512, 0, 120, 0, 0, 255),
    VTX(-6828, -468, 8189, 0, 0, 120, 0, 0, 255),
    VTX(-6828, -500, 8189, 0, 512, 120, 0, 0, 255),
    VTX(-7108, -500, 8149, 4608, 512, 0, 0, 136, 255),
    VTX(-7108, -468, 8149, 4608, 0, 0, 0, 136, 255),
    VTX(-6828, -468, 8149, 512, 0, 0, 0, 136, 255),
    VTX(-6828, -500, 8149, 512, 512, 0, 0, 136, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D828[8] = {
    VTX(-6476, -468, 9840, 4096, 512, 0, 120, 0, 255),
    VTX(-6436, -468, 9840, 4096, 0, 0, 120, 0, 255),
    VTX(-6436, -468, 9560, 512, 0, 0, 120, 0, 255),
    VTX(-6476, -468, 9520, 0, 512, 0, 120, 0, 255),
    VTX(-6156, -468, 9560, 4096, 512, 0, 120, 0, 255),
    VTX(-6156, -468, 9520, 4096, 0, 0, 120, 0, 255),
    VTX(-6476, -468, 9520, 0, 0, 0, 120, 0, 255),
    VTX(-6436, -468, 9560, 512, 512, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00D8A8[24] = {
    VTX(-6476, -500, 9840, 4096, 512, 136, 0, 0, 255),
    VTX(-6476, -468, 9840, 4096, 0, 136, 0, 0, 255),
    VTX(-6476, -468, 9520, 0, 0, 136, 0, 0, 255),
    VTX(-6476, -500, 9520, 0, 512, 136, 0, 0, 255),
    VTX(-6156, -500, 9560, 4096, 512, 0, 0, 120, 255),
    VTX(-6156, -468, 9560, 4096, 0, 0, 0, 120, 255),
    VTX(-6436, -468, 9560, 0, 0, 0, 0, 120, 255),
    VTX(-6436, -500, 9560, 0, 512, 0, 0, 120, 255),
    VTX(-6476, -500, 9520, 4608, 512, 0, 0, 136, 255),
    VTX(-6476, -468, 9520, 4608, 0, 0, 0, 136, 255),
    VTX(-6156, -468, 9520, 512, 0, 0, 0, 136, 255),
    VTX(-6156, -500, 9520, 512, 512, 0, 0, 136, 255),
    VTX(-6156, -500, 9520, 512, 512, 120, 0, 0, 255),
    VTX(-6156, -468, 9520, 512, 0, 120, 0, 0, 255),
    VTX(-6156, -468, 9560, 0, 0, 120, 0, 0, 255),
    VTX(-6156, -500, 9560, 0, 512, 120, 0, 0, 255),
    VTX(-6436, -500, 9840, 512, 512, 0, 0, 120, 255),
    VTX(-6436, -468, 9840, 512, 0, 0, 0, 120, 255),
    VTX(-6476, -468, 9840, 0, 0, 0, 0, 120, 255),
    VTX(-6476, -500, 9840, 0, 512, 0, 0, 120, 255),
    VTX(-6436, -500, 9560, 4608, 512, 120, 0, 0, 255),
    VTX(-6436, -468, 9560, 4608, 0, 120, 0, 0, 255),
    VTX(-6436, -468, 9840, 512, 0, 120, 0, 0, 255),
    VTX(-6436, -500, 9840, 512, 512, 120, 0, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_00DA28[8] = {
    VTX(-1551, -500, 1030, 0, 0, 0, 0, 0, 0),
    VTX(3902, -500, 5605, 0, 0, 0, 0, 0, 0),
    VTX(-1551, 477, 1030, 0, 0, 0, 0, 0, 0),
    VTX(3902, 477, 5605, 0, 0, 0, 0, 0, 0),
    VTX(-7997, -500, 8712, 0, 0, 0, 0, 0, 0),
    VTX(-2545, -500, 13287, 0, 0, 0, 0, 0, 0),
    VTX(-7997, 477, 8712, 0, 0, 0, 0, 0, 0),
    VTX(-2545, 477, 13287, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x00DAA8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_00DA28[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00FC28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00B9A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_00B9E8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 223, 223, 214, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00BBE8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00FC28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00BC68[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_00BCA8[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 223, 223, 214, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00BE68[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00FC28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00BEE8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_00BF28[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 223, 223, 214, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00C128[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00FC28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00C1A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_00C1E8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 223, 223, 214, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00C3E8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00FC28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00C468[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_00C4A8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 223, 223, 214, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00C6A8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00FC28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00C728[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_00C768[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 223, 223, 214, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00C968[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_00FC28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00C9E8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, 0, 3, 4, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&hyrule_field_room_00Vtx_00CA28[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 223, 223, 214, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00CC28[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_00CCA8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00CCE8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00CDE8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00CE28[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00CF28[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00CF68[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D068[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D0A8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D1A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D1E8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D2E8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D328[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D428[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D4A8[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D628[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D6A8[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_010C28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 0, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D828[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_011428, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 0, 3, 6, 4, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_00D8A8[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00EAB8[368] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0xA0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x08, 0xD8, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0B, 0x10, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0D, 0x48, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x10, 0x30, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x14, 0x40, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x17, 0x88, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x1D, 0x10, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x20, 0xD0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x23, 0xC8, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x27, 0x98, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2A, 0x40, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2E, 0x58, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x32, 0x80, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x37, 0x30, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3C, 0x48, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3F, 0x90, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x47, 0xF0, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x4E, 0x30, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x51, 0xC0, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x55, 0x00, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x57, 0x78, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x5A, 0x88, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x5F, 0xE8, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x63, 0xB0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x66, 0x28, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x68, 0xC0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x6B, 0x38, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x6D, 0xD0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x70, 0x08, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x72, 0x60, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x75, 0x90, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x79, 0x20, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x7C, 0x90, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x81, 0x20, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x83, 0xB0, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x8C, 0x60, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xA0, 0x50, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xA6, 0x18, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xA8, 0x50, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xAA, 0xB0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xAF, 0x88, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xB5, 0x10, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xB8, 0x78, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0xDA, 0xA8, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 hyrule_field_room_00Tex_00EC28[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_00EC28.i8.inc.c"
};

u64 hyrule_field_room_00Tex_00F428[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_00F428.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_00FC28[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_00FC28.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_010428[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_010428.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_010C28[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_010C28.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_011428[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_011428.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_011C28[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_011C28.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_012428[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_012428.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_013428[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_013428.i8.inc.c"
};

u64 hyrule_field_room_00Tex_013C28[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_013C28.i8.inc.c"
};

u64 hyrule_field_room_00Tex_014428[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_014428.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_014828[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_014828.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_015828[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_015828.i8.inc.c"
};

u64 hyrule_field_room_00Tex_016028[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_016028.i8.inc.c"
};

u64 hyrule_field_room_00Tex_017028[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_017028.i8.inc.c"
};

u64 hyrule_field_room_00Tex_017828[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_017828.i8.inc.c"
};

u64 hyrule_field_room_00Tex_018028[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_018028.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_018828[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_018828.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_019028[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_019028.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_019828[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_019828.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_01A028[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_01A028.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_01B028[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_01B028.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_01B828[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_01B828.rgb5a1.inc.c"
};

static u8 unaccounted_01C028[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx hyrule_field_room_00Vtx_01C030[10] = {
    VTX(5869, 285, 8465, 2048, 1024, 196, 0, 153, 255),
    VTX(5869, 525, 8465, 2048, 0, 196, 0, 153, 255),
    VTX(7341, 197, 7615, -5120, 0, 196, 0, 153, 255),
    VTX(7341, -43, 7615, -5120, 1024, 196, 0, 153, 255),
    VTX(4397, 285, 9315, 9216, 1024, 196, 0, 153, 255),
    VTX(4397, 525, 9315, 9216, 0, 196, 0, 153, 255),
    VTX(2924, -213, 10165, 8192, 1024, 196, 0, 153, 255),
    VTX(2924, 27, 10165, 8192, 0, 196, 0, 153, 255),
    VTX(4397, 525, 9315, 1024, 0, 196, 0, 153, 255),
    VTX(4397, 285, 9315, 1024, 1024, 196, 0, 153, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01C0D0[8] = {
    VTX(7341, -213, 7615, 0, 0, 0, 0, 0, 0),
    VTX(7341, -213, 7615, 0, 0, 0, 0, 0, 0),
    VTX(7341, 525, 7615, 0, 0, 0, 0, 0, 0),
    VTX(7341, 525, 7615, 0, 0, 0, 0, 0, 0),
    VTX(2924, -213, 10165, 0, 0, 0, 0, 0, 0),
    VTX(2924, -213, 10165, 0, 0, 0, 0, 0, 0),
    VTX(2924, 525, 10165, 0, 0, 0, 0, 0, 0),
    VTX(2924, 525, 10165, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x01C150[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_01C0D0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01D9A0, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 32, 0, 0, 3, 7, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 190, 240, 120, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_01C030[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_01C220[4] = {
    VTX(1429, 420, 375, 0, 1024, 84, 0, 84, 255),
    VTX(1486, 420, 318, 1024, 1024, 84, 0, 84, 255),
    VTX(1486, 500, 318, 1024, 0, 84, 0, 84, 255),
    VTX(1429, 500, 375, 0, 0, 84, 0, 84, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01C260[10] = {
    VTX(-284, 140, 680, 42, 0, 255, 255, 255, 255),
    VTX(-276, 116, 680, 42, 1024, 255, 255, 255, 255),
    VTX(-260, 140, 700, 554, 0, 255, 255, 255, 255),
    VTX(-244, 116, 680, 554, 1024, 255, 255, 255, 255),
    VTX(-236, 140, 680, 1066, 0, 255, 255, 255, 255),
    VTX(276, 116, 680, 554, 1024, 255, 255, 255, 255),
    VTX(284, 140, 680, 1066, 0, 255, 255, 255, 255),
    VTX(260, 140, 700, 554, 0, 255, 255, 255, 255),
    VTX(236, 140, 680, 42, 0, 255, 255, 255, 255),
    VTX(244, 116, 680, 42, 1024, 255, 255, 255, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01C300[8] = {
    VTX(-272, 22, 628, 0, 0, 0, 0, 0, 0),
    VTX(-244, 22, 789, 0, 0, 0, 0, 0, 0),
    VTX(1513, 342, 313, 0, 0, 0, 0, 0, 0),
    VTX(1542, 342, 474, 0, 0, 0, 0, 0, 0),
    VTX(-301, 192, 633, 0, 0, 0, 0, 0, 0),
    VTX(-273, 192, 794, 0, 0, 0, 0, 0, 0),
    VTX(1484, 511, 318, 0, 0, 0, 0, 0, 0),
    VTX(1512, 511, 479, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x01C380[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_01C300[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0219A0, G_IM_FMT_IA, 32, 32, 0, 3, 3, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 180, 180, 140, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_01C220[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_021BA0, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 32, 0, 0, 3, 4, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_01C260[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 7, 0),
    gsSP2Triangles(7, 9, 5, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_01C4B0[51] = {
    VTX(793, -60, 1080, 1024, 0, 0, 120, 0, 255),
    VTX(660, -60, 680, 0, 0, 0, 120, 0, 255),
    VTX(-660, -60, 680, 0, 3482, 0, 120, 0, 255),
    VTX(-660, -60, 1080, 1024, 3482, 0, 120, 0, 255),
    VTX(-1652, -60, 314, 1024, 3465, 0, 120, 0, 255),
    VTX(-886, -60, 1080, 1024, 0, 0, 120, 0, 255),
    VTX(-860, -60, 880, 0, 0, 0, 120, 0, 255),
    VTX(-1539, -60, 201, 0, 3465, 0, 120, 0, 255),
    VTX(-660, -60, 1080, 1024, 0, 0, 120, 0, 255),
    VTX(-860, -60, 880, 0, 1024, 0, 120, 0, 255),
    VTX(-886, -60, 1080, 1024, 1024, 0, 120, 0, 255),
    VTX(-660, -60, 680, 0, 0, 0, 120, 0, 255),
    VTX(660, -60, 680, 0, 1024, 0, 120, 0, 255),
    VTX(793, -60, 1080, 1024, 1024, 0, 120, 0, 255),
    VTX(1379, -60, 494, 1024, -1048, 0, 120, 0, 255),
    VTX(1113, -60, 227, 0, -866, 0, 120, 0, 255),
    VTX(5500, -60, 3624, 0, 2048, 0, 120, 0, 255),
    VTX(5480, -60, 3853, 1024, 2048, 0, 120, 0, 255),
    VTX(6019, -60, 4155, 1024, -1024, 0, 120, 0, 255),
    VTX(6141, -60, 3947, 0, -1024, 0, 120, 0, 255),
    VTX(6141, -60, 3947, 0, 1024, 0, 120, 0, 255),
    VTX(6019, -60, 4155, 1024, 1024, 0, 120, 0, 255),
    VTX(6616, -60, 4597, 1024, -2048, 0, 120, 0, 255),
    VTX(6803, -60, 4440, 0, -2048, 0, 120, 0, 255),
    VTX(5253, -60, 3767, 512, -4096, 0, 120, 0, 255),
    VTX(5480, -60, 3853, 1024, -5120, 0, 120, 0, 255),
    VTX(5500, -60, 3624, 0, -5120, 0, 120, 0, 255),
    VTX(5480, -60, 3853, 1024, -5120, 0, 120, 0, 255),
    VTX(5253, -60, 3767, 512, -4096, 0, 120, 0, 255),
    VTX(4855, -60, 3997, 0, -2048, 0, 120, 0, 255),
    VTX(5033, -60, 4143, 1024, -2048, 0, 120, 0, 255),
    VTX(5500, -60, 3624, 0, -5120, 0, 120, 0, 255),
    VTX(3143, -60, 1585, 0, 7168, 0, 120, 0, 255),
    VTX(2944, -60, 1700, 1024, 7168, 0, 120, 0, 255),
    VTX(5253, -60, 3767, 512, -4096, 0, 120, 0, 255),
    VTX(4855, -60, 3997, 0, -1024, 0, 120, 0, 255),
    VTX(4668, -60, 4880, 0, 2048, 0, 120, 0, 255),
    VTX(4903, -60, 4823, 1024, 2048, 0, 120, 0, 255),
    VTX(5033, -60, 4143, 1024, -1024, 0, 120, 0, 255),
    VTX(4668, -60, 4880, 0, -2048, 0, 120, 0, 255),
    VTX(5082, -60, 6146, 0, 4096, 0, 120, 0, 255),
    VTX(5289, -60, 6108, 1024, 4096, 0, 120, 0, 255),
    VTX(4903, -60, 4823, 1024, -2048, 0, 120, 0, 255),
    VTX(3143, -60, 1585, 0, -4096, 0, 120, 0, 255),
    VTX(1861, -60, 589, 0, 3072, 0, 120, 0, 255),
    VTX(1734, -60, 792, 1024, 3072, 0, 120, 0, 255),
    VTX(2944, -60, 1700, 1024, -4096, 0, 120, 0, 255),
    VTX(1861, -60, 589, 0, 3072, 0, 120, 0, 255),
    VTX(1577, -60, 296, 0, 5120, 0, 120, 0, 255),
    VTX(1407, -60, 465, 1024, 5120, 0, 120, 0, 255),
    VTX(1734, -60, 792, 1024, 3072, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01C7E0[8] = {
    VTX(-190, -60, -1428, 0, 0, 0, 0, 0, 0),
    VTX(6803, -60, 4440, 0, 0, 0, 0, 0, 0),
    VTX(-190, -60, -1428, 0, 0, 0, 0, 0, 0),
    VTX(6803, -60, 4440, 0, 0, 0, 0, 0, 0),
    VTX(-1741, -60, 420, 0, 0, 0, 0, 0, 0),
    VTX(5252, -60, 6288, 0, 0, 0, 0, 0, 0),
    VTX(-1741, -60, 420, 0, 0, 0, 0, 0, 0),
    VTX(5252, -60, 6288, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x01C860[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_01C7E0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01E9A0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 14, 15),
    gsDPLoadMultiBlock(hyrule_field_room_00Tex_01E9A0, 256, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 15, 14),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 102),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&hyrule_field_room_00Vtx_01C4B0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_01C4B0[31], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_01C9C0[4] = {
    VTX(536, -108, 8738, 0, 2048, 8, 118, 242, 255),
    VTX(706, -100, 8907, 2048, 2048, 0, 119, 0, 255),
    VTX(874, -131, 8740, 2048, 0, 8, 118, 242, 255),
    VTX(704, -140, 8570, 0, 0, 8, 118, 242, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01CA00[12] = {
    VTX(-1049, -500, 10934, 0, 0, 0, 120, 0, 255),
    VTX(-847, -500, 11063, 2048, 0, 0, 120, 0, 255),
    VTX(-718, -500, 10860, 2048, 2048, 0, 120, 0, 255),
    VTX(-920, -500, 10731, 0, 2048, 3, 119, 5, 255),
    VTX(2300, 400, 4728, 0, 2048, 0, 120, 0, 255),
    VTX(2516, 400, 4852, 2048, 2048, 0, 120, 0, 255),
    VTX(2644, 365, 4630, 2048, 0, 8, 118, 242, 255),
    VTX(2428, 365, 4505, 0, 0, 8, 118, 242, 255),
    VTX(-1100, 81, 5100, 0, 2048, 231, 114, 228, 255),
    VTX(-844, 137, 5100, 2048, 2048, 231, 114, 228, 255),
    VTX(-875, 48, 4884, 2048, 0, 232, 110, 215, 255),
    VTX(-1126, 6, 4915, 0, 0, 232, 110, 215, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01CAC0[32] = {
    VTX(-920, -500, 10731, 0, 6144, 3, 119, 5, 255),
    VTX(-471, -500, 10472, 2048, 2215, 4, 119, 7, 255),
    VTX(-223, -470, 10071, 2048, -2048, 4, 118, 21, 255),
    VTX(-434, -441, 9949, 0, -2048, 4, 118, 21, 255),
    VTX(706, -100, 8907, 2048, -6144, 0, 119, 0, 255),
    VTX(536, -108, 8738, 0, -6144, 8, 118, 242, 255),
    VTX(496, -100, 8787, 0, -5703, 252, 119, 7, 255),
    VTX(0, -389, 9729, 2048, 2924, 248, 116, 27, 255),
    VTX(0, -305, 9371, 0, -294, 248, 116, 27, 255),
    VTX(1472, -300, 7650, 0, 14336, 8, 119, 1, 255),
    VTX(1683, -297, 7772, 2048, 14336, 3, 119, 248, 255),
    VTX(1805, -300, 7458, 2048, 11677, 9, 118, 16, 255),
    VTX(2102, -14, 6314, 2048, 1024, 15, 112, 39, 255),
    VTX(1885, 60, 6188, 0, 1024, 15, 112, 39, 255),
    VTX(2339, 318, 5450, 2048, -6881, 2, 116, 30, 255),
    VTX(2516, 400, 4852, 2048, -12288, 0, 120, 0, 255),
    VTX(2300, 400, 4728, 0, -12288, 0, 120, 0, 255),
    VTX(2050, 278, 5616, 0, -4178, 2, 116, 30, 255),
    VTX(-718, -500, 10860, 2048, 6144, 0, 120, 0, 255),
    VTX(-580, 161, 7135, 0, 10240, 254, 119, 10, 255),
    VTX(-381, 174, 7020, 2048, 10240, 254, 119, 10, 255),
    VTX(-585, 160, 6462, 2048, 4996, 246, 119, 4, 255),
    VTX(-869, 141, 6298, 0, 3098, 246, 119, 4, 255),
    VTX(-788, 202, 5555, 2048, -3796, 237, 118, 253, 255),
    VTX(-844, 137, 5100, 2048, -8192, 231, 114, 228, 255),
    VTX(-1100, 81, 5100, 0, -8192, 231, 114, 228, 255),
    VTX(-1014, 168, 5685, 0, -2698, 237, 118, 253, 255),
    VTX(-434, -441, 9949, 0, 6144, 4, 118, 21, 255),
    VTX(-223, -470, 10071, 2048, 6144, 4, 118, 21, 255),
    VTX(1472, -255, 8030, 2048, -1425, 7, 118, 242, 255),
    VTX(1683, -297, 7772, 2048, -4096, 3, 119, 248, 255),
    VTX(1472, -300, 7650, 0, -4096, 8, 119, 1, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01CCC0[12] = {
    VTX(704, -140, 8570, 0, 6144, 8, 118, 242, 255),
    VTX(874, -131, 8740, 2048, 6144, 8, 118, 242, 255),
    VTX(1472, -255, 8030, 2048, -1425, 7, 118, 242, 255),
    VTX(1472, -300, 7650, 0, -4096, 8, 119, 1, 255),
    VTX(0, 65, 7565, 2048, -2443, 16, 117, 21, 255),
    VTX(-381, 174, 7020, 2048, -8192, 254, 119, 10, 255),
    VTX(-580, 161, 7135, 0, -8192, 254, 119, 10, 255),
    VTX(0, -6, 7969, 0, 328, 16, 117, 21, 255),
    VTX(473, -164, 8227, 2048, 4602, 18, 118, 3, 255),
    VTX(261, -136, 8349, 0, 4200, 18, 118, 3, 255),
    VTX(704, -140, 8570, 2048, 8192, 8, 118, 242, 255),
    VTX(536, -108, 8738, 0, 8192, 8, 118, 242, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01CD80[8] = {
    VTX(-2153, -1037, 10736, 0, 0, 0, 0, 0, 0),
    VTX(1455, -1037, 11373, 0, 0, 0, 0, 0, 0),
    VTX(-944, 191, 3879, 0, 0, 0, 0, 0, 0),
    VTX(2664, 191, 4515, 0, 0, 0, 0, 0, 0),
    VTX(-2169, -500, 10830, 0, 0, 0, 0, 0, 0),
    VTX(1439, -500, 11466, 0, 0, 0, 0, 0, 0),
    VTX(-960, 728, 3972, 0, 0, 0, 0, 0, 0),
    VTX(2648, 728, 4609, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x01CE00[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_01CD80[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0201A0, G_IM_FMT_I, 64, 64, 0, 3, 0, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 200, 185, 140, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_01C9C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0209A0, G_IM_FMT_I, 64, 64, 0, 3, 3, 6, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_01CA00[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0211A0, G_IM_FMT_I, 64, 64, 0, 3, 0, 6, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_01CAC0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(7, 6, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 9, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(12, 14, 17, 0, 12, 17, 13, 0),
    gsSP2Triangles(0, 18, 1, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 21, 23, 26, 0),
    gsSP2Triangles(21, 26, 22, 0, 27, 28, 7, 0),
    gsSP2Triangles(27, 7, 8, 0, 29, 30, 31, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_01CCC0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_01CFE0[4] = {
    VTX(-180, 0, 1170, 0, 1024, 0, 120, 0, 255),
    VTX(180, 0, 1170, 4096, 1024, 0, 120, 0, 255),
    VTX(180, 0, 1080, 4096, 0, 0, 120, 0, 255),
    VTX(-180, 0, 1080, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01D020[4] = {
    VTX(-120, 0, 1980, 2048, 2048, 0, 120, 0, 255),
    VTX(-120, 0, 2220, 2048, 0, 0, 120, 0, 255),
    VTX(120, 0, 2220, 0, 0, 0, 120, 0, 255),
    VTX(120, 0, 1980, 0, 2048, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01D060[12] = {
    VTX(-120, 0, 1500, 2048, 0, 0, 120, 0, 255),
    VTX(-120, 0, 1740, 2048, 2048, 0, 120, 0, 255),
    VTX(120, 0, 1740, 0, 2048, 0, 120, 0, 255),
    VTX(120, 0, 1500, 0, 0, 0, 120, 0, 255),
    VTX(-1217, -126, 3822, 2048, 0, 247, 119, 10, 255),
    VTX(-1077, -132, 4022, 0, 0, 247, 119, 10, 255),
    VTX(-864, -106, 3899, 0, 2048, 247, 119, 10, 255),
    VTX(-1004, -100, 3699, 2048, 2048, 247, 119, 10, 255),
    VTX(1174, 0, 2118, 0, 2048, 0, 120, 0, 255),
    VTX(1129, 0, 2352, 2048, 2048, 0, 120, 0, 255),
    VTX(1360, 0, 2396, 2048, 0, 0, 120, 0, 255),
    VTX(1406, 0, 2162, 0, 0, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01D120[16] = {
    VTX(-120, 0, 1740, 2048, 0, 0, 120, 0, 255),
    VTX(-120, 0, 1980, 2048, 2048, 0, 120, 0, 255),
    VTX(120, 0, 1980, 0, 2048, 0, 120, 0, 255),
    VTX(120, 0, 1740, 0, 0, 0, 120, 0, 255),
    VTX(-195, 0, 3218, 0, 2048, 252, 119, 5, 255),
    VTX(-371, 0, 3055, 2048, 2048, 252, 119, 5, 255),
    VTX(-1004, -100, 3699, 2048, -6144, 247, 119, 10, 255),
    VTX(-864, -106, 3899, 0, -6144, 247, 119, 10, 255),
    VTX(-120, 0, 2220, 2048, 4096, 0, 120, 0, 255),
    VTX(-371, 0, 3055, 2048, -2048, 252, 119, 5, 255),
    VTX(-195, 0, 3218, 0, -2048, 252, 119, 5, 255),
    VTX(120, 0, 2220, 0, 4096, 0, 120, 0, 255),
    VTX(120, 0, 1980, 0, 2048, 0, 120, 0, 255),
    VTX(120, 0, 2220, 2048, 2048, 0, 120, 0, 255),
    VTX(1129, 0, 2352, 2048, -6144, 0, 120, 0, 255),
    VTX(1174, 0, 2118, 0, -6144, 0, 120, 0, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01D220[8] = {
    VTX(-172, -132, 952, 0, 0, 0, 0, 0, 0),
    VTX(1645, -132, 1613, 0, 0, 0, 0, 0, 0),
    VTX(-172, 0, 952, 0, 0, 0, 0, 0, 0),
    VTX(1645, 0, 1613, 0, 0, 0, 0, 0, 0),
    VTX(-1264, -132, 3953, 0, 0, 0, 0, 0, 0),
    VTX(553, -132, 4615, 0, 0, 0, 0, 0, 0),
    VTX(-1264, 0, 3953, 0, 0, 0, 0, 0, 0),
    VTX(553, 0, 4615, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x01D2A0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_01D220[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(hyrule_field_room_00Tex_01F1A0, G_IM_FMT_IA, G_IM_SIZ_8b, 128, 32, 0, 0, 3, 7, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 180, 180, 140, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_01CFE0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0201A0, G_IM_FMT_I, 64, 64, 0, 3, 0, 6, 6, 0, 0),
    gsDPSetPrimColor(0, 0, 200, 185, 140, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_01D020[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0209A0, G_IM_FMT_I, 64, 64, 0, 3, 3, 6, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_01D060[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0211A0, G_IM_FMT_I, 64, 64, 0, 3, 0, 6, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_01D120[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static Vtx hyrule_field_room_00Vtx_01D478[16] = {
    VTX(-2177, -150, 4216, 0, 2048, 6, 116, 229, 255),
    VTX(-2090, -103, 4435, 2048, 2048, 6, 116, 229, 255),
    VTX(-1867, -134, 4354, 2048, 0, 6, 116, 229, 255),
    VTX(-1953, -181, 4135, 0, 0, 6, 116, 229, 255),
    VTX(-5419, 10, 5626, 0, 0, 233, 111, 39, 255),
    VTX(-5198, 10, 5754, 2048, 0, 233, 111, 39, 255),
    VTX(-5087, 100, 5563, 2048, 2048, 252, 119, 6, 255),
    VTX(-5309, 100, 5435, 0, 2048, 252, 119, 6, 255),
    VTX(-5496, -393, 7027, 0, 2048, 220, 114, 9, 255),
    VTX(-5266, -315, 7024, 2048, 2048, 218, 112, 13, 255),
    VTX(-5271, -288, 6785, 2048, 0, 218, 112, 13, 255),
    VTX(-5497, -365, 6782, 0, 0, 218, 112, 13, 255),
    VTX(-4210, -476, 12423, 0, 0, 8, 118, 14, 255),
    VTX(-4098, -459, 12215, 2048, 0, 8, 118, 14, 255),
    VTX(-4305, -431, 12102, 2048, 2048, 8, 118, 14, 255),
    VTX(-4417, -448, 12309, 0, 2048, 3, 119, 14, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01D578[32] = {
    VTX(-5309, 100, 5435, 0, 16384, 252, 119, 6, 255),
    VTX(-5087, 100, 5563, 2048, 16384, 252, 119, 6, 255),
    VTX(-4417, -119, 5019, 2048, 8722, 0, 116, 229, 255),
    VTX(-4417, -190, 4718, 0, 6470, 0, 116, 229, 255),
    VTX(-2944, 4, 4691, 2048, -6511, 251, 116, 229, 255),
    VTX(-2090, -103, 4435, 2048, -14336, 6, 116, 229, 255),
    VTX(-2177, -150, 4216, 0, -14336, 6, 116, 229, 255),
    VTX(-2944, -55, 4440, 0, -7303, 251, 116, 229, 255),
    VTX(-3522, -57, 4767, 2048, -3073, 240, 115, 229, 255),
    VTX(-3889, -157, 4555, 0, -1429, 240, 115, 229, 255),
    VTX(-5496, -393, 7027, 0, -6144, 220, 114, 9, 255),
    VTX(-5262, -330, 7162, 2048, -4957, 221, 114, 7, 255),
    VTX(-5266, -315, 7024, 2048, -6144, 218, 112, 13, 255),
    VTX(-5490, -392, 8270, 0, 4629, 225, 115, 0, 255),
    VTX(-5259, -329, 8136, 2048, 3483, 225, 115, 0, 255),
    VTX(-5490, -392, 8270, 0, -7659, 225, 115, 0, 255),
    VTX(-5480, -389, 8736, 0, -3617, 225, 115, 0, 255),
    VTX(-5240, -324, 8875, 2048, -2430, 225, 115, 0, 255),
    VTX(-5259, -329, 8136, 2048, -8805, 225, 115, 0, 255),
    VTX(-5643, -433, 10058, 0, 6738, 228, 116, 7, 255),
    VTX(-5430, -375, 9935, 2048, 5591, 228, 116, 7, 255),
    VTX(-5643, -433, 10058, 0, -7598, 228, 116, 7, 255),
    VTX(-5685, -472, 10318, 0, -3138, 236, 118, 7, 255),
    VTX(-5436, -438, 10461, 2048, -1951, 236, 118, 7, 255),
    VTX(-5430, -375, 9935, 2048, -8745, 228, 116, 7, 255),
    VTX(-5260, -415, 11537, 0, 8192, 244, 119, 7, 255),
    VTX(-5049, -386, 11415, 2048, 8192, 244, 119, 7, 255),
    VTX(-4417, -448, 12309, 0, 4096, 3, 119, 14, 255),
    VTX(-4417, -411, 11997, 2048, 2857, 0, 119, 14, 255),
    VTX(-5049, -386, 11415, 2048, -4096, 244, 119, 7, 255),
    VTX(-5260, -415, 11537, 0, -4096, 244, 119, 7, 255),
    VTX(-4305, -431, 12102, 2048, 4096, 8, 118, 14, 255),
}; 

static Vtx hyrule_field_room_00Vtx_01D778[8] = {
    VTX(-5060, -476, 3587, 0, 0, 0, 0, 0, 0),
    VTX(-1832, -476, 4156, 0, 0, 0, 0, 0, 0),
    VTX(-5060, 100, 3587, 0, 0, 0, 0, 0, 0),
    VTX(-1832, 100, 4156, 0, 0, 0, 0, 0, 0),
    VTX(-6545, -476, 12011, 0, 0, 0, 0, 0, 0),
    VTX(-3317, -476, 12580, 0, 0, 0, 0, 0, 0),
    VTX(-6545, 100, 12011, 0, 0, 0, 0, 0, 0),
    VTX(-3317, 100, 12580, 0, 0, 0, 0, 0, 0),
}; 

Gfx hyrule_field_room_00Dlist0x01D7F8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&hyrule_field_room_00Vtx_01D778[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0209A0, G_IM_FMT_I, 64, 64, 0, 3, 3, 6, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 200, 185, 140, 255),
    gsSPVertex(&hyrule_field_room_00Vtx_01D478[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock_4b(hyrule_field_room_00Tex_0211A0, G_IM_FMT_I, 64, 64, 0, 3, 0, 6, 6, 0, 0),
    gsSPVertex(&hyrule_field_room_00Vtx_01D578[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 4, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 14, 0),
    gsSP2Triangles(10, 14, 11, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 16, 19, 20, 0),
    gsSP2Triangles(16, 20, 17, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 22, 25, 26, 0),
    gsSP2Triangles(22, 26, 23, 0, 2, 8, 9, 0),
    gsSP2Triangles(2, 9, 3, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 27, 31, 28, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_01D968[56] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0xC1, 0x50, 0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0xC3, 0x80, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0xC8, 0x60, 0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0xCE, 0x00, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0xD2, 0xA0, 0x06, 0x00, 0x00, 0x00, 0x03, 0x01, 0xD7, 0xF8, 
    0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 hyrule_field_room_00Tex_01D9A0[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_01D9A0.ia16.inc.c"
};

u64 hyrule_field_room_00Tex_01E9A0[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_01E9A0.rgb5a1.inc.c"
};

u64 hyrule_field_room_00Tex_01F1A0[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_01F1A0.ia16.inc.c"
};

u64 hyrule_field_room_00Tex_0201A0[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_0201A0.i8.inc.c"
};

u64 hyrule_field_room_00Tex_0209A0[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_0209A0.i8.inc.c"
};

u64 hyrule_field_room_00Tex_0211A0[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_0211A0.i8.inc.c"
};

u64 hyrule_field_room_00Tex_0219A0[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_0219A0.ia16.inc.c"
};

u64 hyrule_field_room_00Tex_021BA0[] = {
#include "assets/scenes/overworld/hyrule_field//hyrule_field_room_00Tex_021BA0.ia16.inc.c"
};


