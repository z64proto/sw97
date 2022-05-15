#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_kakariko_village_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_kakariko_village_scene.h"


static SCmdEchoSettings old_kakariko_village_room_00Set0000Cmd00;
static SCmdRoomBehavior old_kakariko_village_room_00Set0000Cmd01;
static SCmdSkyboxDisables old_kakariko_village_room_00Set0000Cmd02;
static SCmdTimeSettings old_kakariko_village_room_00Set0000Cmd03;
static SCmdWindSettings old_kakariko_village_room_00Set0000Cmd04;
static SCmdMesh old_kakariko_village_room_00Set0000Cmd05;
static SCmdObjectList old_kakariko_village_room_00Set0000Cmd06;
static SCmdActorList old_kakariko_village_room_00Set0000Cmd07;
static SCmdEndMarker old_kakariko_village_room_00Set0000Cmd08;
static s32 terminatorMaybe;
static Vtx old_kakariko_village_room_00Vtx_000310[16];
static Vtx old_kakariko_village_room_00Vtx_000410[4];
static Vtx old_kakariko_village_room_00Vtx_000450[8];
static Vtx old_kakariko_village_room_00Vtx_0004D0[16];
static Vtx old_kakariko_village_room_00Vtx_0005D0[4];
static Vtx old_kakariko_village_room_00Vtx_000610[4];
static Vtx old_kakariko_village_room_00Vtx_000650[4];
static Vtx old_kakariko_village_room_00Vtx_000690[12];
static Vtx old_kakariko_village_room_00Vtx_000750[12];
static Vtx old_kakariko_village_room_00Vtx_000810[12];
static Vtx old_kakariko_village_room_00Vtx_0008D0[12];
static Vtx old_kakariko_village_room_00Vtx_000990[4];
static Vtx old_kakariko_village_room_00Vtx_0009D0[14];
static Vtx old_kakariko_village_room_00Vtx_000AB0[4];
static Vtx old_kakariko_village_room_00Vtx_000AF0[7];
static Vtx old_kakariko_village_room_00Vtx_000B60[1];
static Vtx old_kakariko_village_room_00Vtx_000B70[21];
static Vtx old_kakariko_village_room_00Vtx_000CC0[3];
static Vtx old_kakariko_village_room_00Vtx_000CF0[16];
static Vtx old_kakariko_village_room_00Vtx_000DF0[4];
static Vtx old_kakariko_village_room_00Vtx_000E30[2];
static Vtx old_kakariko_village_room_00Vtx_000E50[10];
static Vtx old_kakariko_village_room_00Vtx_000EF0[6];
static Vtx old_kakariko_village_room_00Vtx_001DE8[16];
static Vtx old_kakariko_village_room_00Vtx_001EE8[4];
static Vtx old_kakariko_village_room_00Vtx_001F28[8];
static Vtx old_kakariko_village_room_00Vtx_001FA8[16];
static Vtx old_kakariko_village_room_00Vtx_0020A8[4];
static Vtx old_kakariko_village_room_00Vtx_0020E8[4];
static Vtx old_kakariko_village_room_00Vtx_002128[4];
static Vtx old_kakariko_village_room_00Vtx_002168[12];
static Vtx old_kakariko_village_room_00Vtx_002228[12];
static Vtx old_kakariko_village_room_00Vtx_0022E8[12];
static Vtx old_kakariko_village_room_00Vtx_0023A8[12];
static Vtx old_kakariko_village_room_00Vtx_002468[4];
static Vtx old_kakariko_village_room_00Vtx_0024A8[14];
static Vtx old_kakariko_village_room_00Vtx_002588[4];
static Vtx old_kakariko_village_room_00Vtx_0025C8[7];
static Vtx old_kakariko_village_room_00Vtx_002638[1];
static Vtx old_kakariko_village_room_00Vtx_002648[21];
static Vtx old_kakariko_village_room_00Vtx_002798[3];
static Vtx old_kakariko_village_room_00Vtx_0027C8[16];
static Vtx old_kakariko_village_room_00Vtx_0028C8[4];
static Vtx old_kakariko_village_room_00Vtx_002908[2];
static Vtx old_kakariko_village_room_00Vtx_002928[10];
static Vtx old_kakariko_village_room_00Vtx_0029C8[6];
static Vtx old_kakariko_village_room_00Vtx_0038C0[16];
static Vtx old_kakariko_village_room_00Vtx_0039C0[4];
static Vtx old_kakariko_village_room_00Vtx_003A00[8];
static Vtx old_kakariko_village_room_00Vtx_003A80[16];
static Vtx old_kakariko_village_room_00Vtx_003B80[4];
static Vtx old_kakariko_village_room_00Vtx_003BC0[4];
static Vtx old_kakariko_village_room_00Vtx_003C00[4];
static Vtx old_kakariko_village_room_00Vtx_003C40[12];
static Vtx old_kakariko_village_room_00Vtx_003D00[12];
static Vtx old_kakariko_village_room_00Vtx_003DC0[12];
static Vtx old_kakariko_village_room_00Vtx_003E80[12];
static Vtx old_kakariko_village_room_00Vtx_003F40[4];
static Vtx old_kakariko_village_room_00Vtx_003F80[14];
static Vtx old_kakariko_village_room_00Vtx_004060[4];
static Vtx old_kakariko_village_room_00Vtx_0040A0[7];
static Vtx old_kakariko_village_room_00Vtx_004110[1];
static Vtx old_kakariko_village_room_00Vtx_004120[21];
static Vtx old_kakariko_village_room_00Vtx_004270[3];
static Vtx old_kakariko_village_room_00Vtx_0042A0[16];
static Vtx old_kakariko_village_room_00Vtx_0043A0[4];
static Vtx old_kakariko_village_room_00Vtx_0043E0[2];
static Vtx old_kakariko_village_room_00Vtx_004400[10];
static Vtx old_kakariko_village_room_00Vtx_0044A0[6];
static Vtx old_kakariko_village_room_00Vtx_005398[16];
static Vtx old_kakariko_village_room_00Vtx_005498[4];
static Vtx old_kakariko_village_room_00Vtx_0054D8[8];
static Vtx old_kakariko_village_room_00Vtx_005558[6];
static Vtx old_kakariko_village_room_00Vtx_0055B8[16];
static Vtx old_kakariko_village_room_00Vtx_0056B8[4];
static Vtx old_kakariko_village_room_00Vtx_0056F8[4];
static Vtx old_kakariko_village_room_00Vtx_005738[4];
static Vtx old_kakariko_village_room_00Vtx_005778[12];
static Vtx old_kakariko_village_room_00Vtx_005838[12];
static Vtx old_kakariko_village_room_00Vtx_0058F8[12];
static Vtx old_kakariko_village_room_00Vtx_0059B8[12];
static Vtx old_kakariko_village_room_00Vtx_005A78[4];
static Vtx old_kakariko_village_room_00Vtx_005AB8[14];
static Vtx old_kakariko_village_room_00Vtx_005B98[5];
static Vtx old_kakariko_village_room_00Vtx_005BE8[4];
static Vtx old_kakariko_village_room_00Vtx_005C28[3];
static Vtx old_kakariko_village_room_00Vtx_005C58[8];
static Vtx old_kakariko_village_room_00Vtx_005CD8[11];
static Vtx old_kakariko_village_room_00Vtx_005D88[5];
static Vtx old_kakariko_village_room_00Vtx_005DD8[16];
static Vtx old_kakariko_village_room_00Vtx_005ED8[4];
static Vtx old_kakariko_village_room_00Vtx_005F18[2];
static Vtx old_kakariko_village_room_00Vtx_005F38[10];
static Vtx old_kakariko_village_room_00Vtx_005FD8[6];
static Vtx old_kakariko_village_room_00Vtx_007720[16];
static Vtx old_kakariko_village_room_00Vtx_007820[4];
static Vtx old_kakariko_village_room_00Vtx_007860[8];
static Vtx old_kakariko_village_room_00Vtx_0078E0[16];
static Vtx old_kakariko_village_room_00Vtx_0079E0[4];
static Vtx old_kakariko_village_room_00Vtx_007A20[4];
static Vtx old_kakariko_village_room_00Vtx_007A60[4];
static Vtx old_kakariko_village_room_00Vtx_007AA0[12];
static Vtx old_kakariko_village_room_00Vtx_007B60[12];
static Vtx old_kakariko_village_room_00Vtx_007C20[12];
static Vtx old_kakariko_village_room_00Vtx_007CE0[12];
static Vtx old_kakariko_village_room_00Vtx_007DA0[4];
static Vtx old_kakariko_village_room_00Vtx_007DE0[14];
static Vtx old_kakariko_village_room_00Vtx_007EC0[4];
static Vtx old_kakariko_village_room_00Vtx_007F00[7];
static Vtx old_kakariko_village_room_00Vtx_007F70[1];
static Vtx old_kakariko_village_room_00Vtx_007F80[21];
static Vtx old_kakariko_village_room_00Vtx_0080D0[3];
static Vtx old_kakariko_village_room_00Vtx_008100[16];
static Vtx old_kakariko_village_room_00Vtx_008200[4];
static Vtx old_kakariko_village_room_00Vtx_008240[2];
static Vtx old_kakariko_village_room_00Vtx_008260[10];
static Vtx old_kakariko_village_room_00Vtx_008300[6];
static Vtx old_kakariko_village_room_00Vtx_0091F8[16];
static Vtx old_kakariko_village_room_00Vtx_0092F8[4];
static Vtx old_kakariko_village_room_00Vtx_009338[8];
static Vtx old_kakariko_village_room_00Vtx_0093B8[16];
static Vtx old_kakariko_village_room_00Vtx_0094B8[4];
static Vtx old_kakariko_village_room_00Vtx_0094F8[4];
static Vtx old_kakariko_village_room_00Vtx_009538[4];
static Vtx old_kakariko_village_room_00Vtx_009578[12];
static Vtx old_kakariko_village_room_00Vtx_009638[12];
static Vtx old_kakariko_village_room_00Vtx_0096F8[12];
static Vtx old_kakariko_village_room_00Vtx_0097B8[12];
static Vtx old_kakariko_village_room_00Vtx_009878[4];
static Vtx old_kakariko_village_room_00Vtx_0098B8[14];
static Vtx old_kakariko_village_room_00Vtx_009998[4];
static Vtx old_kakariko_village_room_00Vtx_0099D8[7];
static Vtx old_kakariko_village_room_00Vtx_009A48[1];
static Vtx old_kakariko_village_room_00Vtx_009A58[21];
static Vtx old_kakariko_village_room_00Vtx_009BA8[3];
static Vtx old_kakariko_village_room_00Vtx_009BD8[16];
static Vtx old_kakariko_village_room_00Vtx_009CD8[4];
static Vtx old_kakariko_village_room_00Vtx_009D18[2];
static Vtx old_kakariko_village_room_00Vtx_009D38[10];
static Vtx old_kakariko_village_room_00Vtx_009DD8[6];
static Vtx old_kakariko_village_room_00Vtx_00ACD0[16];
static Vtx old_kakariko_village_room_00Vtx_00ADD0[4];
static Vtx old_kakariko_village_room_00Vtx_00AE10[8];
static Vtx old_kakariko_village_room_00Vtx_00AE90[16];
static Vtx old_kakariko_village_room_00Vtx_00AF90[4];
static Vtx old_kakariko_village_room_00Vtx_00AFD0[4];
static Vtx old_kakariko_village_room_00Vtx_00B010[4];
static Vtx old_kakariko_village_room_00Vtx_00B050[12];
static Vtx old_kakariko_village_room_00Vtx_00B110[12];
static Vtx old_kakariko_village_room_00Vtx_00B1D0[12];
static Vtx old_kakariko_village_room_00Vtx_00B290[12];
static Vtx old_kakariko_village_room_00Vtx_00B350[4];
static Vtx old_kakariko_village_room_00Vtx_00B390[4];
static Vtx old_kakariko_village_room_00Vtx_00B3D0[21];
static Vtx old_kakariko_village_room_00Vtx_00B520[4];
static Vtx old_kakariko_village_room_00Vtx_00B560[3];
static Vtx old_kakariko_village_room_00Vtx_00B590[5];
static Vtx old_kakariko_village_room_00Vtx_00B5E0[11];
static Vtx old_kakariko_village_room_00Vtx_00B690[6];
static Vtx old_kakariko_village_room_00Vtx_00B6F0[16];
static Vtx old_kakariko_village_room_00Vtx_00B7F0[4];
static Vtx old_kakariko_village_room_00Vtx_00B830[2];
static Vtx old_kakariko_village_room_00Vtx_00B850[10];
static Vtx old_kakariko_village_room_00Vtx_00B8F0[6];
static Vtx old_kakariko_village_room_00Vtx_00D038[16];
static Vtx old_kakariko_village_room_00Vtx_00D138[4];
static Vtx old_kakariko_village_room_00Vtx_00D178[8];
static Vtx old_kakariko_village_room_00Vtx_00D1F8[16];
static Vtx old_kakariko_village_room_00Vtx_00D2F8[4];
static Vtx old_kakariko_village_room_00Vtx_00D338[4];
static Vtx old_kakariko_village_room_00Vtx_00D378[4];
static Vtx old_kakariko_village_room_00Vtx_00D3B8[12];
static Vtx old_kakariko_village_room_00Vtx_00D478[12];
static Vtx old_kakariko_village_room_00Vtx_00D538[12];
static Vtx old_kakariko_village_room_00Vtx_00D5F8[12];
static Vtx old_kakariko_village_room_00Vtx_00D6B8[4];
static Vtx old_kakariko_village_room_00Vtx_00D6F8[14];
static Vtx old_kakariko_village_room_00Vtx_00D7D8[4];
static Vtx old_kakariko_village_room_00Vtx_00D818[7];
static Vtx old_kakariko_village_room_00Vtx_00D888[1];
static Vtx old_kakariko_village_room_00Vtx_00D898[21];
static Vtx old_kakariko_village_room_00Vtx_00D9E8[3];
static Vtx old_kakariko_village_room_00Vtx_00DA18[16];
static Vtx old_kakariko_village_room_00Vtx_00DB18[4];
static Vtx old_kakariko_village_room_00Vtx_00DB58[2];
static Vtx old_kakariko_village_room_00Vtx_00DB78[10];
static Vtx old_kakariko_village_room_00Vtx_00DC18[6];
static Vtx old_kakariko_village_room_00Vtx_00EB10[21];
static Vtx old_kakariko_village_room_00Vtx_00EC60[31];
static Vtx old_kakariko_village_room_00Vtx_00EE50[6];
static Vtx old_kakariko_village_room_00Vtx_00EEB0[1];
static Vtx old_kakariko_village_room_00Vtx_00EEC0[7];
static Vtx old_kakariko_village_room_00Vtx_00EF30[16];
static Vtx old_kakariko_village_room_00Vtx_00F030[8];
static Vtx old_kakariko_village_room_00Vtx_00F0B0[8];
static Vtx old_kakariko_village_room_00Vtx_00F130[8];
static Vtx old_kakariko_village_room_00Vtx_00F1B0[6];
static Vtx old_kakariko_village_room_00Vtx_00FD78[16];
static Vtx old_kakariko_village_room_00Vtx_00FE78[18];
static Vtx old_kakariko_village_room_00Vtx_00FF98[4];
static Vtx old_kakariko_village_room_00Vtx_00FFD8[5];
static Vtx old_kakariko_village_room_00Vtx_010028[2];
static Vtx old_kakariko_village_room_00Vtx_010048[9];
static Vtx old_kakariko_village_room_00Vtx_0100D8[10];
static Vtx old_kakariko_village_room_00Vtx_010178[11];
static Vtx old_kakariko_village_room_00Vtx_010228[7];
static Vtx old_kakariko_village_room_00Vtx_010298[19];
static Vtx old_kakariko_village_room_00Vtx_0103C8[20];
static Vtx old_kakariko_village_room_00Vtx_010508[1];
static Vtx old_kakariko_village_room_00Vtx_010528[10];
static Vtx old_kakariko_village_room_00Vtx_0105C8[4];
static Vtx old_kakariko_village_room_00Vtx_010608[17];
static Vtx old_kakariko_village_room_00Vtx_010718[7];
static Vtx old_kakariko_village_room_00Vtx_010788[12];
static Vtx old_kakariko_village_room_00Vtx_010848[1];
static Vtx old_kakariko_village_room_00Vtx_0108A8[6];
static Vtx old_kakariko_village_room_00Vtx_010908[1];
static Vtx old_kakariko_village_room_00Vtx_010948[6];
static Vtx old_kakariko_village_room_00Vtx_0109A8[1];
static Vtx old_kakariko_village_room_00Vtx_0109B8[5];
static Vtx old_kakariko_village_room_00Vtx_010A08[23];
static Vtx old_kakariko_village_room_00Vtx_010B78[1];
static Vtx old_kakariko_village_room_00Vtx_010B88[8];
static Vtx old_kakariko_village_room_00Vtx_010C08[8];
static Vtx old_kakariko_village_room_00Vtx_010C88[12];
static Vtx old_kakariko_village_room_00Vtx_010D48[1];
static Vtx old_kakariko_village_room_00Vtx_010D58[1];
static Vtx old_kakariko_village_room_00Vtx_010D68[6];
static Vtx old_kakariko_village_room_00Vtx_010DC8[2];
static Vtx old_kakariko_village_room_00Vtx_010DE8[1];
static Vtx old_kakariko_village_room_00Vtx_010DF8[2];
static Vtx old_kakariko_village_room_00Vtx_010E18[1];
static Vtx old_kakariko_village_room_00Vtx_010E28[22];
static Vtx old_kakariko_village_room_00Vtx_010F88[8];
static Vtx old_kakariko_village_room_00Vtx_011008[16];
static Vtx old_kakariko_village_room_00Vtx_011108[1];
static Vtx old_kakariko_village_room_00Vtx_011128[1];
static Vtx old_kakariko_village_room_00Vtx_011138[5];
static Vtx old_kakariko_village_room_00Vtx_011188[1];
static Vtx old_kakariko_village_room_00Vtx_0111A8[2];
static Vtx old_kakariko_village_room_00Vtx_0111C8[6];
static Vtx old_kakariko_village_room_00Vtx_011228[1];
static Vtx old_kakariko_village_room_00Vtx_011238[1];
static Vtx old_kakariko_village_room_00Vtx_011248[13];
static Vtx old_kakariko_village_room_00Vtx_011318[2];
static Vtx old_kakariko_village_room_00Vtx_011338[2];
static Vtx old_kakariko_village_room_00Vtx_011358[2];
static Vtx old_kakariko_village_room_00Vtx_011378[16];
static Vtx old_kakariko_village_room_00Vtx_011478[4];
static Vtx old_kakariko_village_room_00Vtx_0114B8[4];
static Vtx old_kakariko_village_room_00Vtx_0114F8[4];
static Vtx old_kakariko_village_room_00Vtx_011538[7];
static Vtx old_kakariko_village_room_00Vtx_0115A8[4];
static Vtx old_kakariko_village_room_00Vtx_0115E8[4];
static Vtx old_kakariko_village_room_00Vtx_011628[12];
static Vtx old_kakariko_village_room_00Vtx_0116E8[12];
static Vtx old_kakariko_village_room_00Vtx_0117A8[12];
static Vtx old_kakariko_village_room_00Vtx_011868[22];
static Vtx old_kakariko_village_room_00Vtx_0119C8[12];
static Vtx old_kakariko_village_room_00Vtx_011A88[12];
static Vtx old_kakariko_village_room_00Vtx_011B48[15];
static Vtx old_kakariko_village_room_00Vtx_011C38[5];
static Vtx old_kakariko_village_room_00Vtx_011C88[5];
static Vtx old_kakariko_village_room_00Vtx_011CD8[5];
static Vtx old_kakariko_village_room_00Vtx_011D28[5];
static Vtx old_kakariko_village_room_00Vtx_011D78[5];
static Vtx old_kakariko_village_room_00Vtx_011DC8[2];
static Vtx old_kakariko_village_room_00Vtx_011DE8[10];
static Vtx old_kakariko_village_room_00Vtx_011E88[10];
static Vtx old_kakariko_village_room_00Vtx_011F28[10];
static Vtx old_kakariko_village_room_00Vtx_011FC8[10];
static Vtx old_kakariko_village_room_00Vtx_012068[10];
static Vtx old_kakariko_village_room_00Vtx_012108[4];
static Vtx old_kakariko_village_room_00Vtx_012148[42];
static Vtx old_kakariko_village_room_00Vtx_0123E8[14];
static Vtx old_kakariko_village_room_00Vtx_0124C8[5];
static Vtx old_kakariko_village_room_00Vtx_012518[19];
static Vtx old_kakariko_village_room_00Vtx_016BB8[12];
static Vtx old_kakariko_village_room_00Vtx_016C78[16];

static SCmdEchoSettings old_kakariko_village_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_kakariko_village_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables old_kakariko_village_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings old_kakariko_village_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x01 }; // 0x0018

static SCmdWindSettings old_kakariko_village_room_00Set0000Cmd04 = {  0x05, 0x00, 0x00, 0x00, 0x50, 0x00, 0x50, 0xFF }; // 0x0020

static SCmdMesh old_kakariko_village_room_00Set0000Cmd05 = {  0x0A, 0, (u32)&old_kakariko_village_room_00MeshHeader0x0002F0 }; // 0x0028

static SCmdObjectList old_kakariko_village_room_00Set0000Cmd06 = {  0x0B, 0x0D, (u32)old_kakariko_village_room_00ObjectList0x000048 }; // 0x0030

static SCmdActorList old_kakariko_village_room_00Set0000Cmd07 = {  0x01, 0x28, (u32)old_kakariko_village_room_00ActorList0x000064 }; // 0x0038 }; 

static SCmdEndMarker old_kakariko_village_room_00Set0000Cmd08 = {  0x14, 0x00, 0x00 }; // 0x0040

s16 old_kakariko_village_room_00ObjectList0x000048[13] = {
	OBJECT_O_ANIME,
	OBJECT_OE_ANIME,
	OBJECT_NIW,
	OBJECT_HORSE,
	OBJECT_OA4,
	OBJECT_OA5,
	OBJECT_OA6,
	OBJECT_OA7,
	OBJECT_OA8,
	OBJECT_OA9,
	OBJECT_OB2,
	OBJECT_OB3,
	OBJECT_OB4,
}; 

ActorEntry old_kakariko_village_room_00ActorList0x000064[0x28] = {
	{ ACTOR_EN_NPC, -1627, 0, -47, 0, -16384, 0, 0x0001 }, //0x000064
	{ ACTOR_EN_NPC, 339, 0, -63, 0, -8192, 0, 0x0002 }, //0x000074
	{ ACTOR_EN_NPC, 635, 0, 1512, 0, -16384, 0, 0x0003 }, //0x000084
	{ ACTOR_EN_NPC, 1524, 199, -1482, 0, 16384, 0, 0x000B }, //0x000094
	{ ACTOR_FIELD_KEEP, -35, 0, 577, 0, 0, 0, 0x0017 }, //0x0000A4
    { ACTOR_EN_A_OBJ, -1938, 0, -156, 0, 0, 0, 0xFF09 }, //0x0000B4
	{ ACTOR_EN_A_OBJ, -909, 0, -156, 0, 0, 0, 0xFF09 }, //0x0000C4
	{ ACTOR_EN_A_OBJ, 74, 0, -141, 0, 0, 0, 0xFF09 }, //0x0000D4
	{ ACTOR_EN_A_OBJ, -1827, 0, 1449, 0, 0, 0, 0xFF09 }, //0x0000E4
	{ ACTOR_EN_A_OBJ, -828, 0, 1441, 0, 0, 0, 0xFF0A }, //0x0000F4
	{ ACTOR_EN_A_OBJ, 698, 0, 889, 0, -16384, 0, 0xFF0A }, //0x000104
	{ ACTOR_EN_A_OBJ, 713, 0, 1853, 0, -16201, 0, 0xFF0A }, //0x000114
	{ ACTOR_FIELD_KEEP, -2942, 0, 137, 0, 0, 0, 0x0017 }, //0x000124
    { ACTOR_FIELD_KEEP, -2690, 0, 511, 0, 0, 0, 0x0020 }, //0x000134
    { ACTOR_EN_INSECT, -3005, 0, 278, 0, 0, 0, 0xFFFF }, //0x000144
	{ ACTOR_EN_INSECT, -3052, 0, 309, 0, 0, 0, 0xFFFF }, //0x000154
	{ ACTOR_EN_INSECT, -3005, 0, 356, 0, 0, 0, 0xFFFF }, //0x000164
	{ ACTOR_EN_INSECT, -2978, 0, 314, 0, 0, 0, 0xFFFF }, //0x000174
	{ ACTOR_EN_INSECT, -3058, 0, 269, 0, 0, 0, 0xFFFF }, //0x000184
	{ ACTOR_EN_INSECT, -3007, 0, 235, 0, 0, 0, 0xFFFF }, //0x000194
	{ ACTOR_EN_INSECT, -2956, 0, 263, 0, 0, 0, 0xFFFF }, //0x0001A4
	{ ACTOR_EN_INSECT, -3114, 0, 275, 0, 0, 0, 0xFFFF }, //0x0001B4
	{ ACTOR_EN_INSECT, -3075, 0, 201, 0, 0, 0, 0xFFFF }, //0x0001C4
	{ ACTOR_EN_INSECT, -2922, 0, 218, 0, 0, 0, 0xFFFF }, //0x0001D4
	{ ACTOR_EN_INSECT, -2899, 0, 292, 0, 0, 0, 0xFFFF }, //0x0001E4
	{ ACTOR_EN_INSECT, -2933, 0, 337, 0, 0, 0, 0xFFFF }, //0x0001F4
	{ ACTOR_FIELD_KEEP, -884, 0, 473, 0, 0, 0, 0x0017 }, //0x000204	
    { ACTOR_FIELD_KEEP, -1207, 0, 116, 0, 0, 0, 0x0017 }, //0x000214
    { ACTOR_EN_BUTTE, -1120, 3, 1248, 0, 0, 0, 0xFFFF }, //0x000224
	{ ACTOR_EN_BUTTE, -1154, 3, 1203, 0, 0, 0, 0xFFFF }, //0x000234
	{ ACTOR_EN_BUTTE, -1160, 3, 1237, 0, 0, 0, 0xFFFF }, //0x000244
	{ ACTOR_EN_BUTTE, -1103, 3, 1209, 0, 0, 0, 0xFFFF }, //0x000254
	{ ACTOR_EN_BUTTE, -1120, 3, 1163, 0, 0, 0, 0xFFFF }, //0x000264
	{ ACTOR_EN_BUTTE, -1182, 3, 1203, 0, 0, 0, 0xFFFF }, //0x000274
	{ ACTOR_EN_BUTTE, -1137, 3, 1277, 0, 0, 0, 0xFFFF }, //0x000284
	{ ACTOR_EN_BUTTE, -1075, 3, 1248, 0, 0, 0, 0xFFFF }, //0x000294
	{ ACTOR_EN_BUTTE, -1058, 3, 1197, 0, 0, 0, 0xFFFF }, //0x0002A4
	{ ACTOR_EN_NIW, -1120, 0, 1226, 0, 0, 0, 0xFFFF }, //0x0002B4
	{ ACTOR_EN_NPC, -681, 0, 905, 0, 32767, 0, 0x000B }, //0x0002C4
	{ ACTOR_FIELD_KEEP, -27, 0, 1590, 0, 0, 0, 0x0017 }, //0x0002D4
}; 

static u32 pad2E4 = 0;
static u32 pad2E8 = 0;
static u32 pad2EC = 0;

MeshHeader0 old_kakariko_village_room_00MeshHeader0x0002F0 = { { 0 }, 0x01, (u32)&old_kakariko_village_room_00MeshDListEntry0x0002FC, (u32)&(old_kakariko_village_room_00MeshDListEntry0x0002FC) + sizeof(old_kakariko_village_room_00MeshDListEntry0x0002FC) }; 

MeshEntry0 old_kakariko_village_room_00MeshDListEntry0x0002FC[1] = {
	{ (u32)old_kakariko_village_room_00Dlist0x0186D8, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad308 = 0;
static u32 pad30C = 0;

static Vtx old_kakariko_village_room_00Vtx_000310[16] = {
    VTX(321, 65, -208, 0, 0, 0, 130, 0, 255),
    VTX(321, 65, -204, 0, 0, 0, 130, 0, 255),
    VTX(315, 65, -204, 0, 0, 0, 130, 0, 255),
    VTX(315, 65, -208, 0, 0, 0, 130, 0, 255),
    VTX(315, 65, -208, 0, 0, 130, 0, 0, 255),
    VTX(315, 65, -204, 0, 0, 130, 0, 0, 255),
    VTX(315, 71, -204, 0, 0, 130, 0, 0, 255),
    VTX(315, 71, -208, 0, 0, 130, 0, 0, 255),
    VTX(321, 71, -204, 0, 0, 0, 0, 127, 255),
    VTX(315, 71, -204, 0, 0, 0, 0, 127, 255),
    VTX(315, 65, -204, 0, 0, 0, 0, 127, 255),
    VTX(321, 65, -204, 0, 0, 0, 0, 127, 255),
    VTX(321, 71, -208, 0, 0, 127, 0, 0, 255),
    VTX(321, 71, -204, 0, 0, 127, 0, 0, 255),
    VTX(321, 65, -204, 0, 0, 127, 0, 0, 255),
    VTX(321, 65, -208, 0, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000410[4] = {
    VTX(315, 71, -208, 0, 0, 0, 127, 0, 255),
    VTX(315, 71, -204, 0, 0, 0, 127, 0, 255),
    VTX(321, 71, -204, 0, 0, 0, 127, 0, 255),
    VTX(321, 71, -208, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000450[8] = {
    VTX(312, 307, -199, -4095, 3072, 49, 117, 0, 255),
    VTX(600, 187, -199, -4095, -3583, 49, 117, 0, 255),
    VTX(600, 187, -583, 4096, -3583, 49, 117, 0, 255),
    VTX(312, 307, -583, 4096, 3072, 49, 117, 0, 255),
    VTX(120, 187, -583, -3071, -1757, 190, 107, 0, 255),
    VTX(120, 187, -199, 5120, -1757, 190, 107, 0, 255),
    VTX(312, 307, -199, 5120, 3072, 190, 107, 0, 255),
    VTX(312, 307, -583, -3071, 3072, 190, 107, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0004D0[16] = {
    VTX(600, 175, -564, 0, 1317, 127, 0, 0, 255),
    VTX(600, 16, -564, 0, -292, 127, 0, 0, 255),
    VTX(600, 16, -583, 512, -292, 127, 0, 0, 255),
    VTX(600, 175, -583, 512, 1463, 127, 0, 0, 255),
    VTX(600, 175, -583, 0, 1755, 0, 0, 130, 255),
    VTX(600, 16, -583, 0, 0, 0, 0, 130, 255),
    VTX(581, 16, -583, 512, 0, 0, 0, 130, 255),
    VTX(581, 175, -583, 512, 1609, 0, 0, 130, 255),
    VTX(600, 187, -199, 0, -2047, 127, 0, 0, 255),
    VTX(600, 175, -199, 512, -1901, 127, 0, 0, 255),
    VTX(600, 175, -583, 512, 2487, 127, 0, 0, 255),
    VTX(600, 187, -583, 0, 2633, 127, 0, 0, 255),
    VTX(600, 175, -199, 0, 2048, 127, 0, 0, 255),
    VTX(600, 16, -199, 0, 0, 127, 0, 0, 255),
    VTX(600, 16, -218, 512, 0, 127, 0, 0, 255),
    VTX(600, 175, -218, 512, 1877, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0005D0[4] = {
    VTX(120, 187, -199, 0, -1433, 0, 0, 127, 255),
    VTX(120, 175, -199, 0, 1536, 0, 0, 127, 255),
    VTX(581, 175, -199, 0, 1536, 0, 0, 127, 255),
    VTX(139, 175, -583, 0, 1365, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000610[4] = {
    VTX(600, 187, -583, 512, -640, 0, 0, 130, 255),
    VTX(312, 307, -583, 4, 1152, 0, 0, 130, 255),
    VTX(312, 307, -199, 512, 2033, 0, 0, 127, 255),
    VTX(120, 187, -199, 0, -417, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000650[4] = {
    VTX(600, 187, -583, 0, -1919, 0, 0, 130, 255),
    VTX(120, 175, -583, 0, 2048, 130, 0, 0, 255),
    VTX(120, 187, -583, 0, -1535, 130, 0, 0, 255),
    VTX(120, 175, -218, 0, 1877, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000690[12] = {
    VTX(120, 175, -199, 512, -1330, 0, 0, 127, 255),
    VTX(600, 175, -199, 512, 2560, 0, 0, 127, 255),
    VTX(600, 187, -199, 0, 2662, 0, 0, 127, 255),
    VTX(120, 16, -199, 0, 0, 0, 0, 127, 255),
    VTX(139, 16, -199, 512, 0, 0, 0, 127, 255),
    VTX(139, 175, -199, 512, 1408, 0, 0, 127, 255),
    VTX(581, 16, -199, 0, -340, 0, 0, 127, 255),
    VTX(600, 16, -199, 512, -340, 0, 0, 127, 255),
    VTX(600, 175, -199, 512, 1707, 0, 0, 127, 255),
    VTX(139, 16, -583, 0, -511, 0, 0, 130, 255),
    VTX(120, 16, -583, 512, -511, 0, 0, 130, 255),
    VTX(120, 175, -583, 512, 1536, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000750[12] = {
    VTX(563, 187, -583, -5, -353, 0, 0, 130, 255),
    VTX(312, 293, -583, 35, 1982, 0, 0, 130, 255),
    VTX(312, 307, -583, 512, 2033, 0, 0, 130, 255),
    VTX(312, 293, -583, 516, 1102, 0, 0, 130, 255),
    VTX(143, 187, -583, 511, -282, 0, 0, 130, 255),
    VTX(120, 187, -583, 0, -417, 0, 0, 130, 255),
    VTX(312, 293, -199, 35, 1982, 0, 0, 127, 255),
    VTX(563, 187, -199, -5, -353, 0, 0, 127, 255),
    VTX(600, 187, -199, 512, -640, 0, 0, 127, 255),
    VTX(143, 187, -199, 511, -282, 0, 0, 127, 255),
    VTX(312, 293, -199, 516, 1102, 0, 0, 127, 255),
    VTX(312, 307, -199, 4, 1152, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000810[12] = {
    VTX(600, 175, -583, 512, -1791, 0, 0, 130, 255),
    VTX(120, 175, -583, 512, 3072, 0, 0, 130, 255),
    VTX(120, 187, -583, 0, 3200, 0, 0, 130, 255),
    VTX(120, 16, -583, 0, -409, 130, 0, 0, 255),
    VTX(120, 16, -564, 512, -409, 130, 0, 0, 255),
    VTX(120, 175, -564, 512, 1843, 130, 0, 0, 255),
    VTX(120, 175, -583, 512, -1407, 130, 0, 0, 255),
    VTX(120, 175, -199, 512, 2432, 130, 0, 0, 255),
    VTX(120, 187, -199, 0, 2560, 130, 0, 0, 255),
    VTX(120, 16, -218, 0, 0, 130, 0, 0, 255),
    VTX(120, 16, -199, 512, 0, 130, 0, 0, 255),
    VTX(120, 175, -199, 512, 2048, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0008D0[12] = {
    VTX(461, 57, -199, 1024, 0, 0, 0, 127, 255),
    VTX(461, 115, -199, 1024, 1024, 0, 0, 127, 255),
    VTX(403, 115, -199, 0, 1024, 0, 0, 127, 255),
    VTX(403, 57, -199, 0, 0, 0, 0, 127, 255),
    VTX(461, 115, -199, 0, 1024, 0, 0, 127, 255),
    VTX(461, 57, -199, 0, 0, 0, 0, 127, 255),
    VTX(518, 57, -199, 1024, 0, 0, 0, 127, 255),
    VTX(518, 115, -199, 1024, 1024, 0, 0, 127, 255),
    VTX(120, 57, -247, 1024, 0, 130, 0, 0, 255),
    VTX(120, 129, -247, 1024, 1024, 130, 0, 0, 255),
    VTX(120, 129, -319, 0, 1024, 130, 0, 0, 255),
    VTX(120, 57, -319, 0, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000990[4] = {
    VTX(264, 116, -209, 1024, 1024, 0, 0, 127, 255),
    VTX(264, 16, -209, 1024, 0, 0, 0, 127, 255),
    VTX(324, 16, -209, 0, 0, 0, 0, 127, 255),
    VTX(324, 116, -209, 0, 1024, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0009D0[14] = {
    VTX(139, 175, -199, -1023, 1024, 0, 0, 127, 255),
    VTX(324, 116, -199, 268, 788, 0, 0, 127, 255),
    VTX(581, 175, -199, 1875, 1024, 0, 0, 127, 255),
    VTX(264, 116, -199, -204, 788, 0, 0, 127, 255),
    VTX(139, 16, -199, -1023, 0, 0, 0, 127, 255),
    VTX(264, 16, -199, -204, 0, 0, 0, 127, 255),
    VTX(324, 16, -199, 268, 0, 0, 0, 127, 255),
    VTX(403, 57, -199, 583, 248, 0, 0, 127, 255),
    VTX(403, 115, -199, 583, 721, 0, 0, 127, 255),
    VTX(461, 115, -199, 1213, 721, 0, 0, 127, 255),
    VTX(518, 115, -199, 1686, 721, 0, 0, 127, 255),
    VTX(518, 57, -199, 1686, 248, 0, 0, 127, 255),
    VTX(581, 16, -199, 1875, 0, 0, 0, 127, 255),
    VTX(461, 115, -199, 1056, 721, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000AB0[4] = {
    VTX(461, 57, -199, 1056, 248, 0, 0, 127, 255),
    VTX(139, 16, -583, 1875, 0, 0, 0, 130, 255),
    VTX(120, 129, -247, 1859, 721, 130, 0, 0, 255),
    VTX(120, 16, -218, 2048, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000AF0[7] = {
    VTX(120, 175, -564, -220, 1024, 130, 0, 0, 255),
    VTX(461, 57, -199, 1213, 248, 0, 0, 127, 255),
    VTX(264, 116, -199, -204, 788, 0, 130, 0, 255),
    VTX(600, 16, -564, 1245, 0, 127, 0, 0, 255),
    VTX(143, 187, -583, -1023, 1024, 0, 0, 130, 255),
    VTX(563, 187, -199, -711, 1024, 0, 0, 127, 255),
    VTX(264, 116, -209, -204, 788, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000B60[1] = {
    VTX(324, 116, -199, 268, 788, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000B70[21] = {
    VTX(139, 175, -583, 1875, 1024, 0, 0, 130, 255),
    VTX(581, 175, -583, -1023, 1024, 0, 0, 130, 255),
    VTX(581, 16, -583, -1023, 0, 0, 0, 130, 255),
    VTX(120, 57, -247, 1859, 248, 130, 0, 0, 255),
    VTX(120, 175, -218, 2048, 1024, 130, 0, 0, 255),
    VTX(120, 57, -319, 1386, 248, 130, 0, 0, 255),
    VTX(120, 16, -564, -220, 0, 130, 0, 0, 255),
    VTX(120, 129, -319, 1386, 721, 130, 0, 0, 255),
    VTX(264, 116, -209, -204, 788, 0, 130, 0, 255),
    VTX(324, 116, -209, 268, 788, 0, 130, 0, 255),
    VTX(324, 116, -199, 268, 788, 0, 130, 0, 255),
    VTX(600, 175, -564, 1245, 1024, 127, 0, 0, 255),
    VTX(600, 175, -218, -1023, 1024, 127, 0, 0, 255),
    VTX(600, 16, -218, -1023, 0, 127, 0, 0, 255),
    VTX(312, 293, -583, 88, 329, 0, 0, 130, 255),
    VTX(563, 187, -583, 1736, 1024, 0, 0, 130, 255),
    VTX(312, 293, -199, 936, 329, 0, 0, 127, 255),
    VTX(143, 187, -199, 2048, 1024, 0, 0, 127, 255),
    VTX(264, 116, -199, -204, 788, 127, 0, 0, 255),
    VTX(264, 16, -199, -204, 0, 127, 0, 0, 255),
    VTX(264, 16, -209, -204, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000CC0[3] = {
    VTX(324, 116, -209, 268, 788, 130, 0, 0, 255),
    VTX(324, 16, -209, 268, 0, 130, 0, 0, 255),
    VTX(324, 16, -199, 268, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000CF0[16] = {
    VTX(324, 0, -199, 320, 0, 0, 0, 127, 255),
    VTX(600, 0, -199, 7680, 0, 0, 0, 127, 255),
    VTX(600, 16, -199, 7680, 512, 0, 0, 127, 255),
    VTX(324, 16, -199, 320, 512, 0, 0, 127, 255),
    VTX(120, 16, -199, -5119, 512, 0, 0, 127, 255),
    VTX(120, 0, -199, -5119, 0, 0, 0, 127, 255),
    VTX(264, 0, -199, -1279, 0, 0, 0, 127, 255),
    VTX(264, 16, -199, -1279, 512, 0, 0, 127, 255),
    VTX(324, 16, -199, 640, 512, 127, 0, 0, 255),
    VTX(324, 16, -179, 0, 512, 127, 0, 0, 255),
    VTX(324, 0, -179, 0, 0, 127, 0, 0, 255),
    VTX(324, 0, -199, 640, 0, 127, 0, 0, 255),
    VTX(600, 16, -583, 5632, 512, 127, 0, 0, 255),
    VTX(600, 16, -199, -4607, 512, 127, 0, 0, 255),
    VTX(600, 0, -199, -4607, 0, 127, 0, 0, 255),
    VTX(600, 0, -583, 5632, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000DF0[4] = {
    VTX(120, 16, -199, 5120, 512, 130, 0, 0, 255),
    VTX(600, 16, -583, -5631, 512, 0, 0, 130, 255),
    VTX(264, 16, -209, -894, -408, 0, 127, 0, 255),
    VTX(264, 16, -199, -895, -116, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000E30[2] = {
    VTX(264, 16, -179, -383, 512, 0, 0, 127, 255),
    VTX(264, 16, -179, 640, 512, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000E50[10] = {
    VTX(120, 16, -583, -5119, 512, 130, 0, 0, 255),
    VTX(120, 0, -583, -5119, 0, 130, 0, 0, 255),
    VTX(120, 0, -199, 5120, 0, 130, 0, 0, 255),
    VTX(600, 0, -583, -5631, 0, 0, 0, 130, 255),
    VTX(120, 0, -583, 7168, 0, 0, 0, 130, 255),
    VTX(120, 16, -583, 7168, 512, 0, 0, 130, 255),
    VTX(324, 16, -199, 1024, -116, 0, 127, 0, 255),
    VTX(324, 16, -209, 1025, -408, 0, 127, 0, 255),
    VTX(264, 16, -179, -896, 468, 0, 127, 0, 255),
    VTX(324, 16, -179, 1023, 468, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_000EF0[6] = {
    VTX(264, 0, -179, -383, 0, 0, 0, 127, 255),
    VTX(324, 0, -179, 1536, 0, 0, 0, 127, 255),
    VTX(324, 16, -179, 1536, 512, 0, 0, 127, 255),
    VTX(264, 16, -199, 0, 512, 130, 0, 0, 255),
    VTX(264, 0, -199, 0, 0, 130, 0, 0, 255),
    VTX(264, 0, -179, 640, 0, 130, 0, 0, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x000F50[] = {
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_000310[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000410[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_006C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000450[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0004D0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0005D0[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000690[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000610[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000750[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000650[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000810[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0008D0[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_0015E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000990[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0009D0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(9, 10, 2, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(8, 13, 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0009D0[6], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0009D0[12], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000AB0[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000B70[0], 7, 7),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 10, 6, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0009D0[11], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000AB0[2], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000AF0[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000B70[4], 9, 7),
    gsSP1Triangle(3, 9, 8, 0),
    gsSP1Triangle(3, 8, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000AF0[3], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000B70[11], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000B60[0], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000CC0[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000CF0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000DF0[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000E50[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000E30[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_000EF0[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_0015E8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_0015E8.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_001DE8[16] = {
    VTX(-678, 65, -208, 0, 0, 0, 130, 0, 255),
    VTX(-678, 65, -204, 0, 0, 0, 130, 0, 255),
    VTX(-684, 65, -204, 0, 0, 0, 130, 0, 255),
    VTX(-684, 65, -208, 0, 0, 0, 130, 0, 255),
    VTX(-684, 65, -208, 0, 0, 130, 0, 0, 255),
    VTX(-684, 65, -204, 0, 0, 130, 0, 0, 255),
    VTX(-684, 71, -204, 0, 0, 130, 0, 0, 255),
    VTX(-684, 71, -208, 0, 0, 130, 0, 0, 255),
    VTX(-678, 71, -204, 0, 0, 0, 0, 127, 255),
    VTX(-684, 71, -204, 0, 0, 0, 0, 127, 255),
    VTX(-684, 65, -204, 0, 0, 0, 0, 127, 255),
    VTX(-678, 65, -204, 0, 0, 0, 0, 127, 255),
    VTX(-678, 71, -208, 0, 0, 127, 0, 0, 255),
    VTX(-678, 71, -204, 0, 0, 127, 0, 0, 255),
    VTX(-678, 65, -204, 0, 0, 127, 0, 0, 255),
    VTX(-678, 65, -208, 0, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_001EE8[4] = {
    VTX(-684, 71, -208, 0, 0, 0, 127, 0, 255),
    VTX(-684, 71, -204, 0, 0, 0, 127, 0, 255),
    VTX(-678, 71, -204, 0, 0, 0, 127, 0, 255),
    VTX(-678, 71, -208, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_001F28[8] = {
    VTX(-687, 307, -199, -4095, 3072, 49, 117, 0, 255),
    VTX(-399, 187, -199, -4095, -3583, 49, 117, 0, 255),
    VTX(-399, 187, -583, 4096, -3583, 49, 117, 0, 255),
    VTX(-687, 307, -583, 4096, 3072, 49, 117, 0, 255),
    VTX(-879, 187, -583, -3071, -1757, 190, 107, 0, 255),
    VTX(-879, 187, -199, 5120, -1757, 190, 107, 0, 255),
    VTX(-687, 307, -199, 5120, 3072, 190, 107, 0, 255),
    VTX(-687, 307, -583, -3071, 3072, 190, 107, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_001FA8[16] = {
    VTX(-399, 175, -564, 0, 1317, 127, 0, 0, 255),
    VTX(-399, 16, -564, 0, -292, 127, 0, 0, 255),
    VTX(-399, 16, -583, 512, -292, 127, 0, 0, 255),
    VTX(-399, 175, -583, 512, 1463, 127, 0, 0, 255),
    VTX(-399, 175, -583, 0, 1755, 0, 0, 130, 255),
    VTX(-399, 16, -583, 0, 0, 0, 0, 130, 255),
    VTX(-418, 16, -583, 512, 0, 0, 0, 130, 255),
    VTX(-418, 175, -583, 512, 1609, 0, 0, 130, 255),
    VTX(-399, 187, -199, 0, -2047, 127, 0, 0, 255),
    VTX(-399, 175, -199, 512, -1901, 127, 0, 0, 255),
    VTX(-399, 175, -583, 512, 2487, 127, 0, 0, 255),
    VTX(-399, 187, -583, 0, 2633, 127, 0, 0, 255),
    VTX(-399, 175, -199, 0, 2048, 127, 0, 0, 255),
    VTX(-399, 16, -199, 0, 0, 127, 0, 0, 255),
    VTX(-399, 16, -218, 512, 0, 127, 0, 0, 255),
    VTX(-399, 175, -218, 512, 1877, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0020A8[4] = {
    VTX(-879, 187, -199, 0, -1433, 0, 0, 127, 255),
    VTX(-879, 175, -199, 0, 1536, 0, 0, 127, 255),
    VTX(-418, 175, -199, 0, 1536, 0, 0, 127, 255),
    VTX(-860, 175, -583, 0, 1365, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0020E8[4] = {
    VTX(-399, 187, -583, 512, -640, 0, 0, 130, 255),
    VTX(-687, 307, -583, 4, 1152, 0, 0, 130, 255),
    VTX(-687, 307, -199, 512, 2033, 0, 0, 127, 255),
    VTX(-879, 187, -199, 0, -417, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002128[4] = {
    VTX(-399, 187, -583, 0, -1919, 0, 0, 130, 255),
    VTX(-879, 175, -583, 0, 2048, 130, 0, 0, 255),
    VTX(-879, 187, -583, 0, -1535, 130, 0, 0, 255),
    VTX(-879, 175, -218, 0, 1877, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002168[12] = {
    VTX(-879, 175, -199, 512, -1330, 0, 0, 127, 255),
    VTX(-399, 175, -199, 512, 2560, 0, 0, 127, 255),
    VTX(-399, 187, -199, 0, 2662, 0, 0, 127, 255),
    VTX(-879, 16, -199, 0, 0, 0, 0, 127, 255),
    VTX(-860, 16, -199, 512, 0, 0, 0, 127, 255),
    VTX(-860, 175, -199, 512, 1408, 0, 0, 127, 255),
    VTX(-418, 16, -199, 0, -340, 0, 0, 127, 255),
    VTX(-399, 16, -199, 512, -340, 0, 0, 127, 255),
    VTX(-399, 175, -199, 512, 1707, 0, 0, 127, 255),
    VTX(-860, 16, -583, 0, -511, 0, 0, 130, 255),
    VTX(-879, 16, -583, 512, -511, 0, 0, 130, 255),
    VTX(-879, 175, -583, 512, 1536, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002228[12] = {
    VTX(-436, 187, -583, -5, -353, 0, 0, 130, 255),
    VTX(-687, 293, -583, 35, 1982, 0, 0, 130, 255),
    VTX(-687, 307, -583, 512, 2033, 0, 0, 130, 255),
    VTX(-687, 293, -583, 516, 1102, 0, 0, 130, 255),
    VTX(-856, 187, -583, 511, -282, 0, 0, 130, 255),
    VTX(-879, 187, -583, 0, -417, 0, 0, 130, 255),
    VTX(-687, 293, -199, 35, 1982, 0, 0, 127, 255),
    VTX(-436, 187, -199, -5, -353, 0, 0, 127, 255),
    VTX(-399, 187, -199, 512, -640, 0, 0, 127, 255),
    VTX(-856, 187, -199, 511, -282, 0, 0, 127, 255),
    VTX(-687, 293, -199, 516, 1102, 0, 0, 127, 255),
    VTX(-687, 307, -199, 4, 1152, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0022E8[12] = {
    VTX(-399, 175, -583, 512, -1791, 0, 0, 130, 255),
    VTX(-879, 175, -583, 512, 3072, 0, 0, 130, 255),
    VTX(-879, 187, -583, 0, 3200, 0, 0, 130, 255),
    VTX(-879, 16, -583, 0, -409, 130, 0, 0, 255),
    VTX(-879, 16, -564, 512, -409, 130, 0, 0, 255),
    VTX(-879, 175, -564, 512, 1843, 130, 0, 0, 255),
    VTX(-879, 175, -583, 512, -1407, 130, 0, 0, 255),
    VTX(-879, 175, -199, 512, 2432, 130, 0, 0, 255),
    VTX(-879, 187, -199, 0, 2560, 130, 0, 0, 255),
    VTX(-879, 16, -218, 0, 0, 130, 0, 0, 255),
    VTX(-879, 16, -199, 512, 0, 130, 0, 0, 255),
    VTX(-879, 175, -199, 512, 2048, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0023A8[12] = {
    VTX(-538, 57, -199, 1024, 0, 0, 0, 127, 255),
    VTX(-538, 115, -199, 1024, 1024, 0, 0, 127, 255),
    VTX(-596, 115, -199, 0, 1024, 0, 0, 127, 255),
    VTX(-596, 57, -199, 0, 0, 0, 0, 127, 255),
    VTX(-538, 115, -199, 0, 1024, 0, 0, 127, 255),
    VTX(-538, 57, -199, 0, 0, 0, 0, 127, 255),
    VTX(-481, 57, -199, 1024, 0, 0, 0, 127, 255),
    VTX(-481, 115, -199, 1024, 1024, 0, 0, 127, 255),
    VTX(-879, 57, -247, 1024, 0, 130, 0, 0, 255),
    VTX(-879, 129, -247, 1024, 1024, 130, 0, 0, 255),
    VTX(-879, 129, -319, 0, 1024, 130, 0, 0, 255),
    VTX(-879, 57, -319, 0, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002468[4] = {
    VTX(-735, 116, -209, 1024, 1024, 0, 0, 127, 255),
    VTX(-735, 16, -209, 1024, 0, 0, 0, 127, 255),
    VTX(-675, 16, -209, 0, 0, 0, 0, 127, 255),
    VTX(-675, 116, -209, 0, 1024, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0024A8[14] = {
    VTX(-860, 175, -199, -1023, 1024, 0, 0, 127, 255),
    VTX(-675, 116, -199, 268, 788, 0, 0, 127, 255),
    VTX(-418, 175, -199, 1875, 1024, 0, 0, 127, 255),
    VTX(-735, 116, -199, -204, 788, 0, 0, 127, 255),
    VTX(-860, 16, -199, -1023, 0, 0, 0, 127, 255),
    VTX(-735, 16, -199, -204, 0, 0, 0, 127, 255),
    VTX(-675, 16, -199, 268, 0, 0, 0, 127, 255),
    VTX(-596, 57, -199, 583, 248, 0, 0, 127, 255),
    VTX(-596, 115, -199, 583, 721, 0, 0, 127, 255),
    VTX(-538, 115, -199, 1213, 721, 0, 0, 127, 255),
    VTX(-481, 115, -199, 1686, 721, 0, 0, 127, 255),
    VTX(-481, 57, -199, 1686, 248, 0, 0, 127, 255),
    VTX(-418, 16, -199, 1875, 0, 0, 0, 127, 255),
    VTX(-538, 115, -199, 1056, 721, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002588[4] = {
    VTX(-538, 57, -199, 1056, 248, 0, 0, 127, 255),
    VTX(-860, 16, -583, 1875, 0, 0, 0, 130, 255),
    VTX(-879, 129, -247, 1859, 721, 130, 0, 0, 255),
    VTX(-879, 16, -218, 2048, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0025C8[7] = {
    VTX(-879, 175, -564, -220, 1024, 130, 0, 0, 255),
    VTX(-538, 57, -199, 1213, 248, 0, 0, 127, 255),
    VTX(-735, 116, -199, -204, 788, 0, 130, 0, 255),
    VTX(-399, 16, -564, 1245, 0, 127, 0, 0, 255),
    VTX(-856, 187, -583, -1023, 1024, 0, 0, 130, 255),
    VTX(-436, 187, -199, -711, 1024, 0, 0, 127, 255),
    VTX(-735, 116, -209, -204, 788, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002638[1] = {
    VTX(-675, 116, -199, 268, 788, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002648[21] = {
    VTX(-860, 175, -583, 1875, 1024, 0, 0, 130, 255),
    VTX(-418, 175, -583, -1023, 1024, 0, 0, 130, 255),
    VTX(-418, 16, -583, -1023, 0, 0, 0, 130, 255),
    VTX(-879, 57, -247, 1859, 248, 130, 0, 0, 255),
    VTX(-879, 175, -218, 2048, 1024, 130, 0, 0, 255),
    VTX(-879, 57, -319, 1386, 248, 130, 0, 0, 255),
    VTX(-879, 16, -564, -220, 0, 130, 0, 0, 255),
    VTX(-879, 129, -319, 1386, 721, 130, 0, 0, 255),
    VTX(-735, 116, -209, -204, 788, 0, 130, 0, 255),
    VTX(-675, 116, -209, 268, 788, 0, 130, 0, 255),
    VTX(-675, 116, -199, 268, 788, 0, 130, 0, 255),
    VTX(-399, 175, -564, 1245, 1024, 127, 0, 0, 255),
    VTX(-399, 175, -218, -1023, 1024, 127, 0, 0, 255),
    VTX(-399, 16, -218, -1023, 0, 127, 0, 0, 255),
    VTX(-687, 293, -583, 88, 329, 0, 0, 130, 255),
    VTX(-436, 187, -583, 1736, 1024, 0, 0, 130, 255),
    VTX(-687, 293, -199, 936, 329, 0, 0, 127, 255),
    VTX(-856, 187, -199, 2048, 1024, 0, 0, 127, 255),
    VTX(-735, 116, -199, -204, 788, 127, 0, 0, 255),
    VTX(-735, 16, -199, -204, 0, 127, 0, 0, 255),
    VTX(-735, 16, -209, -204, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002798[3] = {
    VTX(-675, 116, -209, 268, 788, 130, 0, 0, 255),
    VTX(-675, 16, -209, 268, 0, 130, 0, 0, 255),
    VTX(-675, 16, -199, 268, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0027C8[16] = {
    VTX(-675, 0, -199, 320, 0, 0, 0, 127, 255),
    VTX(-399, 0, -199, 7680, 0, 0, 0, 127, 255),
    VTX(-399, 16, -199, 7680, 512, 0, 0, 127, 255),
    VTX(-675, 16, -199, 320, 512, 0, 0, 127, 255),
    VTX(-879, 16, -199, -5119, 512, 0, 0, 127, 255),
    VTX(-879, 0, -199, -5119, 0, 0, 0, 127, 255),
    VTX(-735, 0, -199, -1279, 0, 0, 0, 127, 255),
    VTX(-735, 16, -199, -1279, 512, 0, 0, 127, 255),
    VTX(-675, 16, -199, 640, 512, 127, 0, 0, 255),
    VTX(-675, 16, -179, 0, 512, 127, 0, 0, 255),
    VTX(-675, 0, -179, 0, 0, 127, 0, 0, 255),
    VTX(-675, 0, -199, 640, 0, 127, 0, 0, 255),
    VTX(-399, 16, -583, 5632, 512, 127, 0, 0, 255),
    VTX(-399, 16, -199, -4607, 512, 127, 0, 0, 255),
    VTX(-399, 0, -199, -4607, 0, 127, 0, 0, 255),
    VTX(-399, 0, -583, 5632, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0028C8[4] = {
    VTX(-879, 16, -199, 5120, 512, 130, 0, 0, 255),
    VTX(-399, 16, -583, -5631, 512, 0, 0, 130, 255),
    VTX(-735, 16, -209, -894, -408, 0, 127, 0, 255),
    VTX(-735, 16, -199, -895, -116, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002908[2] = {
    VTX(-735, 16, -179, -383, 512, 0, 0, 127, 255),
    VTX(-735, 16, -179, 640, 512, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_002928[10] = {
    VTX(-879, 16, -583, -5119, 512, 130, 0, 0, 255),
    VTX(-879, 0, -583, -5119, 0, 130, 0, 0, 255),
    VTX(-879, 0, -199, 5120, 0, 130, 0, 0, 255),
    VTX(-399, 0, -583, -5631, 0, 0, 0, 130, 255),
    VTX(-879, 0, -583, 7168, 0, 0, 0, 130, 255),
    VTX(-879, 16, -583, 7168, 512, 0, 0, 130, 255),
    VTX(-675, 16, -199, 1024, -116, 0, 127, 0, 255),
    VTX(-675, 16, -209, 1025, -408, 0, 127, 0, 255),
    VTX(-735, 16, -179, -896, 468, 0, 127, 0, 255),
    VTX(-675, 16, -179, 1023, 468, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0029C8[6] = {
    VTX(-735, 0, -179, -383, 0, 0, 0, 127, 255),
    VTX(-675, 0, -179, 1536, 0, 0, 0, 127, 255),
    VTX(-675, 16, -179, 1536, 512, 0, 0, 127, 255),
    VTX(-735, 16, -199, 0, 512, 130, 0, 0, 255),
    VTX(-735, 0, -199, 0, 0, 130, 0, 0, 255),
    VTX(-735, 0, -179, 640, 0, 130, 0, 0, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x002A28[] = {
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_001DE8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_001EE8[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_006C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_001F28[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_001FA8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0020A8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002168[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0020E8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002228[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002128[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0022E8[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0023A8[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_0030C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002468[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0024A8[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(9, 10, 2, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(8, 13, 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0024A8[6], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0024A8[12], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002588[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002648[0], 7, 7),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 10, 6, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0024A8[11], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002588[2], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0025C8[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002648[4], 9, 7),
    gsSP1Triangle(3, 9, 8, 0),
    gsSP1Triangle(3, 8, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0025C8[3], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002648[11], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002638[0], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002798[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0027C8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0028C8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002928[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_002908[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0029C8[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_0030C0[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_0030C0.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_0038C0[16] = {
    VTX(-1678, 65, -208, 0, 0, 0, 130, 0, 255),
    VTX(-1678, 65, -204, 0, 0, 0, 130, 0, 255),
    VTX(-1684, 65, -204, 0, 0, 0, 130, 0, 255),
    VTX(-1684, 65, -208, 0, 0, 0, 130, 0, 255),
    VTX(-1684, 65, -208, 0, 0, 130, 0, 0, 255),
    VTX(-1684, 65, -204, 0, 0, 130, 0, 0, 255),
    VTX(-1684, 71, -204, 0, 0, 130, 0, 0, 255),
    VTX(-1684, 71, -208, 0, 0, 130, 0, 0, 255),
    VTX(-1678, 71, -204, 0, 0, 0, 0, 127, 255),
    VTX(-1684, 71, -204, 0, 0, 0, 0, 127, 255),
    VTX(-1684, 65, -204, 0, 0, 0, 0, 127, 255),
    VTX(-1678, 65, -204, 0, 0, 0, 0, 127, 255),
    VTX(-1678, 71, -208, 0, 0, 127, 0, 0, 255),
    VTX(-1678, 71, -204, 0, 0, 127, 0, 0, 255),
    VTX(-1678, 65, -204, 0, 0, 127, 0, 0, 255),
    VTX(-1678, 65, -208, 0, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0039C0[4] = {
    VTX(-1684, 71, -208, 0, 0, 0, 127, 0, 255),
    VTX(-1684, 71, -204, 0, 0, 0, 127, 0, 255),
    VTX(-1678, 71, -204, 0, 0, 0, 127, 0, 255),
    VTX(-1678, 71, -208, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003A00[8] = {
    VTX(-1687, 307, -199, -4095, 3072, 49, 117, 0, 255),
    VTX(-1399, 187, -199, -4095, -3583, 49, 117, 0, 255),
    VTX(-1399, 187, -583, 4096, -3583, 49, 117, 0, 255),
    VTX(-1687, 307, -583, 4096, 3072, 49, 117, 0, 255),
    VTX(-1879, 187, -583, -3071, -1757, 190, 107, 0, 255),
    VTX(-1879, 187, -199, 5120, -1757, 190, 107, 0, 255),
    VTX(-1687, 307, -199, 5120, 3072, 190, 107, 0, 255),
    VTX(-1687, 307, -583, -3071, 3072, 190, 107, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003A80[16] = {
    VTX(-1399, 175, -564, 0, 1317, 127, 0, 0, 255),
    VTX(-1399, 16, -564, 0, -292, 127, 0, 0, 255),
    VTX(-1399, 16, -583, 512, -292, 127, 0, 0, 255),
    VTX(-1399, 175, -583, 512, 1463, 127, 0, 0, 255),
    VTX(-1399, 175, -583, 0, 1755, 0, 0, 130, 255),
    VTX(-1399, 16, -583, 0, 0, 0, 0, 130, 255),
    VTX(-1418, 16, -583, 512, 0, 0, 0, 130, 255),
    VTX(-1418, 175, -583, 512, 1609, 0, 0, 130, 255),
    VTX(-1399, 187, -199, 0, -2047, 127, 0, 0, 255),
    VTX(-1399, 175, -199, 512, -1901, 127, 0, 0, 255),
    VTX(-1399, 175, -583, 512, 2487, 127, 0, 0, 255),
    VTX(-1399, 187, -583, 0, 2633, 127, 0, 0, 255),
    VTX(-1399, 175, -199, 0, 2048, 127, 0, 0, 255),
    VTX(-1399, 16, -199, 0, 0, 127, 0, 0, 255),
    VTX(-1399, 16, -218, 512, 0, 127, 0, 0, 255),
    VTX(-1399, 175, -218, 512, 1877, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003B80[4] = {
    VTX(-1879, 187, -199, 0, -1433, 0, 0, 127, 255),
    VTX(-1879, 175, -199, 0, 1536, 0, 0, 127, 255),
    VTX(-1418, 175, -199, 0, 1536, 0, 0, 127, 255),
    VTX(-1860, 175, -583, 0, 1365, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003BC0[4] = {
    VTX(-1399, 187, -583, 512, -640, 0, 0, 130, 255),
    VTX(-1687, 307, -583, 4, 1152, 0, 0, 130, 255),
    VTX(-1687, 307, -199, 512, 2033, 0, 0, 127, 255),
    VTX(-1879, 187, -199, 0, -417, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003C00[4] = {
    VTX(-1399, 187, -583, 0, -1919, 0, 0, 130, 255),
    VTX(-1879, 175, -583, 0, 2048, 130, 0, 0, 255),
    VTX(-1879, 187, -583, 0, -1535, 130, 0, 0, 255),
    VTX(-1879, 175, -218, 0, 1877, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003C40[12] = {
    VTX(-1879, 175, -199, 512, -1330, 0, 0, 127, 255),
    VTX(-1399, 175, -199, 512, 2560, 0, 0, 127, 255),
    VTX(-1399, 187, -199, 0, 2662, 0, 0, 127, 255),
    VTX(-1879, 16, -199, 0, 0, 0, 0, 127, 255),
    VTX(-1860, 16, -199, 512, 0, 0, 0, 127, 255),
    VTX(-1860, 175, -199, 512, 1408, 0, 0, 127, 255),
    VTX(-1418, 16, -199, 0, -340, 0, 0, 127, 255),
    VTX(-1399, 16, -199, 512, -340, 0, 0, 127, 255),
    VTX(-1399, 175, -199, 512, 1707, 0, 0, 127, 255),
    VTX(-1860, 16, -583, 0, -511, 0, 0, 130, 255),
    VTX(-1879, 16, -583, 512, -511, 0, 0, 130, 255),
    VTX(-1879, 175, -583, 512, 1536, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003D00[12] = {
    VTX(-1436, 187, -583, -5, -353, 0, 0, 130, 255),
    VTX(-1687, 293, -583, 35, 1982, 0, 0, 130, 255),
    VTX(-1687, 307, -583, 512, 2033, 0, 0, 130, 255),
    VTX(-1687, 293, -583, 516, 1102, 0, 0, 130, 255),
    VTX(-1856, 187, -583, 511, -282, 0, 0, 130, 255),
    VTX(-1879, 187, -583, 0, -417, 0, 0, 130, 255),
    VTX(-1687, 293, -199, 35, 1982, 0, 0, 127, 255),
    VTX(-1436, 187, -199, -5, -353, 0, 0, 127, 255),
    VTX(-1399, 187, -199, 512, -640, 0, 0, 127, 255),
    VTX(-1856, 187, -199, 511, -282, 0, 0, 127, 255),
    VTX(-1687, 293, -199, 516, 1102, 0, 0, 127, 255),
    VTX(-1687, 307, -199, 4, 1152, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003DC0[12] = {
    VTX(-1399, 175, -583, 512, -1791, 0, 0, 130, 255),
    VTX(-1879, 175, -583, 512, 3072, 0, 0, 130, 255),
    VTX(-1879, 187, -583, 0, 3200, 0, 0, 130, 255),
    VTX(-1879, 16, -583, 0, -409, 130, 0, 0, 255),
    VTX(-1879, 16, -564, 512, -409, 130, 0, 0, 255),
    VTX(-1879, 175, -564, 512, 1843, 130, 0, 0, 255),
    VTX(-1879, 175, -583, 512, -1407, 130, 0, 0, 255),
    VTX(-1879, 175, -199, 512, 2432, 130, 0, 0, 255),
    VTX(-1879, 187, -199, 0, 2560, 130, 0, 0, 255),
    VTX(-1879, 16, -218, 0, 0, 130, 0, 0, 255),
    VTX(-1879, 16, -199, 512, 0, 130, 0, 0, 255),
    VTX(-1879, 175, -199, 512, 2048, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003E80[12] = {
    VTX(-1538, 57, -199, 1024, 0, 0, 0, 127, 255),
    VTX(-1538, 115, -199, 1024, 1024, 0, 0, 127, 255),
    VTX(-1596, 115, -199, 0, 1024, 0, 0, 127, 255),
    VTX(-1596, 57, -199, 0, 0, 0, 0, 127, 255),
    VTX(-1538, 115, -199, 0, 1024, 0, 0, 127, 255),
    VTX(-1538, 57, -199, 0, 0, 0, 0, 127, 255),
    VTX(-1481, 57, -199, 1024, 0, 0, 0, 127, 255),
    VTX(-1481, 115, -199, 1024, 1024, 0, 0, 127, 255),
    VTX(-1879, 57, -247, 1024, 0, 130, 0, 0, 255),
    VTX(-1879, 129, -247, 1024, 1024, 130, 0, 0, 255),
    VTX(-1879, 129, -319, 0, 1024, 130, 0, 0, 255),
    VTX(-1879, 57, -319, 0, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003F40[4] = {
    VTX(-1735, 116, -209, 1024, 1024, 0, 0, 127, 255),
    VTX(-1735, 16, -209, 1024, 0, 0, 0, 127, 255),
    VTX(-1675, 16, -209, 0, 0, 0, 0, 127, 255),
    VTX(-1675, 116, -209, 0, 1024, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_003F80[14] = {
    VTX(-1860, 175, -199, -1023, 1024, 0, 0, 127, 255),
    VTX(-1675, 116, -199, 268, 788, 0, 0, 127, 255),
    VTX(-1418, 175, -199, 1875, 1024, 0, 0, 127, 255),
    VTX(-1735, 116, -199, -204, 788, 0, 0, 127, 255),
    VTX(-1860, 16, -199, -1023, 0, 0, 0, 127, 255),
    VTX(-1735, 16, -199, -204, 0, 0, 0, 127, 255),
    VTX(-1675, 16, -199, 268, 0, 0, 0, 127, 255),
    VTX(-1596, 57, -199, 583, 248, 0, 0, 127, 255),
    VTX(-1596, 115, -199, 583, 721, 0, 0, 127, 255),
    VTX(-1538, 115, -199, 1213, 721, 0, 0, 127, 255),
    VTX(-1481, 115, -199, 1686, 721, 0, 0, 127, 255),
    VTX(-1481, 57, -199, 1686, 248, 0, 0, 127, 255),
    VTX(-1418, 16, -199, 1875, 0, 0, 0, 127, 255),
    VTX(-1538, 115, -199, 1056, 721, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_004060[4] = {
    VTX(-1538, 57, -199, 1056, 248, 0, 0, 127, 255),
    VTX(-1860, 16, -583, 1875, 0, 0, 0, 130, 255),
    VTX(-1879, 129, -247, 1859, 721, 130, 0, 0, 255),
    VTX(-1879, 16, -218, 2048, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0040A0[7] = {
    VTX(-1879, 175, -564, -220, 1024, 130, 0, 0, 255),
    VTX(-1538, 57, -199, 1213, 248, 0, 0, 127, 255),
    VTX(-1735, 116, -199, -204, 788, 0, 130, 0, 255),
    VTX(-1399, 16, -564, 1245, 0, 127, 0, 0, 255),
    VTX(-1856, 187, -583, -1023, 1024, 0, 0, 130, 255),
    VTX(-1436, 187, -199, -711, 1024, 0, 0, 127, 255),
    VTX(-1735, 116, -209, -204, 788, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_004110[1] = {
    VTX(-1675, 116, -199, 268, 788, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_004120[21] = {
    VTX(-1860, 175, -583, 1875, 1024, 0, 0, 130, 255),
    VTX(-1418, 175, -583, -1023, 1024, 0, 0, 130, 255),
    VTX(-1418, 16, -583, -1023, 0, 0, 0, 130, 255),
    VTX(-1879, 57, -247, 1859, 248, 130, 0, 0, 255),
    VTX(-1879, 175, -218, 2048, 1024, 130, 0, 0, 255),
    VTX(-1879, 57, -319, 1386, 248, 130, 0, 0, 255),
    VTX(-1879, 16, -564, -220, 0, 130, 0, 0, 255),
    VTX(-1879, 129, -319, 1386, 721, 130, 0, 0, 255),
    VTX(-1735, 116, -209, -204, 788, 0, 130, 0, 255),
    VTX(-1675, 116, -209, 268, 788, 0, 130, 0, 255),
    VTX(-1675, 116, -199, 268, 788, 0, 130, 0, 255),
    VTX(-1399, 175, -564, 1245, 1024, 127, 0, 0, 255),
    VTX(-1399, 175, -218, -1023, 1024, 127, 0, 0, 255),
    VTX(-1399, 16, -218, -1023, 0, 127, 0, 0, 255),
    VTX(-1687, 293, -583, 88, 329, 0, 0, 130, 255),
    VTX(-1436, 187, -583, 1736, 1024, 0, 0, 130, 255),
    VTX(-1687, 293, -199, 936, 329, 0, 0, 127, 255),
    VTX(-1856, 187, -199, 2048, 1024, 0, 0, 127, 255),
    VTX(-1735, 116, -199, -204, 788, 127, 0, 0, 255),
    VTX(-1735, 16, -199, -204, 0, 127, 0, 0, 255),
    VTX(-1735, 16, -209, -204, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_004270[3] = {
    VTX(-1675, 116, -209, 268, 788, 130, 0, 0, 255),
    VTX(-1675, 16, -209, 268, 0, 130, 0, 0, 255),
    VTX(-1675, 16, -199, 268, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0042A0[16] = {
    VTX(-1675, 0, -199, 320, 0, 0, 0, 127, 255),
    VTX(-1399, 0, -199, 7680, 0, 0, 0, 127, 255),
    VTX(-1399, 16, -199, 7680, 512, 0, 0, 127, 255),
    VTX(-1675, 16, -199, 320, 512, 0, 0, 127, 255),
    VTX(-1879, 16, -199, -5119, 512, 0, 0, 127, 255),
    VTX(-1879, 0, -199, -5119, 0, 0, 0, 127, 255),
    VTX(-1735, 0, -199, -1279, 0, 0, 0, 127, 255),
    VTX(-1735, 16, -199, -1279, 512, 0, 0, 127, 255),
    VTX(-1675, 16, -199, 640, 512, 127, 0, 0, 255),
    VTX(-1675, 16, -179, 0, 512, 127, 0, 0, 255),
    VTX(-1675, 0, -179, 0, 0, 127, 0, 0, 255),
    VTX(-1675, 0, -199, 640, 0, 127, 0, 0, 255),
    VTX(-1399, 16, -583, 5632, 512, 127, 0, 0, 255),
    VTX(-1399, 16, -199, -4607, 512, 127, 0, 0, 255),
    VTX(-1399, 0, -199, -4607, 0, 127, 0, 0, 255),
    VTX(-1399, 0, -583, 5632, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0043A0[4] = {
    VTX(-1879, 16, -199, 5120, 512, 130, 0, 0, 255),
    VTX(-1399, 16, -583, -5631, 512, 0, 0, 130, 255),
    VTX(-1735, 16, -209, -894, -408, 0, 127, 0, 255),
    VTX(-1735, 16, -199, -895, -116, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0043E0[2] = {
    VTX(-1735, 16, -179, -383, 512, 0, 0, 127, 255),
    VTX(-1735, 16, -179, 640, 512, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_004400[10] = {
    VTX(-1879, 16, -583, -5119, 512, 130, 0, 0, 255),
    VTX(-1879, 0, -583, -5119, 0, 130, 0, 0, 255),
    VTX(-1879, 0, -199, 5120, 0, 130, 0, 0, 255),
    VTX(-1399, 0, -583, -5631, 0, 0, 0, 130, 255),
    VTX(-1879, 0, -583, 7168, 0, 0, 0, 130, 255),
    VTX(-1879, 16, -583, 7168, 512, 0, 0, 130, 255),
    VTX(-1675, 16, -199, 1024, -116, 0, 127, 0, 255),
    VTX(-1675, 16, -209, 1025, -408, 0, 127, 0, 255),
    VTX(-1735, 16, -179, -896, 468, 0, 127, 0, 255),
    VTX(-1675, 16, -179, 1023, 468, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0044A0[6] = {
    VTX(-1735, 0, -179, -383, 0, 0, 0, 127, 255),
    VTX(-1675, 0, -179, 1536, 0, 0, 0, 127, 255),
    VTX(-1675, 16, -179, 1536, 512, 0, 0, 127, 255),
    VTX(-1735, 16, -199, 0, 512, 130, 0, 0, 255),
    VTX(-1735, 0, -199, 0, 0, 130, 0, 0, 255),
    VTX(-1735, 0, -179, 640, 0, 130, 0, 0, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x004500[] = {
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_0038C0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0039C0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_006C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003A00[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003A80[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003B80[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003C40[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003BC0[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003D00[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003C00[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003DC0[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003E80[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_004B98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003F40[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003F80[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(9, 10, 2, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(8, 13, 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003F80[6], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003F80[12], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_004060[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_004120[0], 7, 7),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 10, 6, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_003F80[11], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_004060[2], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0040A0[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_004120[4], 9, 7),
    gsSP1Triangle(3, 9, 8, 0),
    gsSP1Triangle(3, 8, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0040A0[3], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_004120[11], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_004110[0], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_004270[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0042A0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0043A0[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_004400[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0043E0[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0044A0[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_004B98[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_004B98.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_005398[16] = {
    VTX(745, 65, 1546, 0, 0, 0, 0, 130, 255),
    VTX(741, 65, 1546, 0, 0, 0, 0, 130, 255),
    VTX(741, 71, 1546, 0, 0, 0, 0, 130, 255),
    VTX(745, 71, 1546, 0, 0, 0, 0, 130, 255),
    VTX(745, 65, 1552, 0, 0, 0, 130, 0, 255),
    VTX(741, 65, 1552, 0, 0, 0, 130, 0, 255),
    VTX(741, 65, 1546, 0, 0, 0, 130, 0, 255),
    VTX(745, 65, 1546, 0, 0, 0, 130, 0, 255),
    VTX(745, 71, 1552, 0, 0, 0, 0, 127, 255),
    VTX(741, 71, 1552, 0, 0, 0, 0, 127, 255),
    VTX(741, 65, 1552, 0, 0, 0, 0, 127, 255),
    VTX(745, 65, 1552, 0, 0, 0, 0, 127, 255),
    VTX(741, 71, 1552, 0, 0, 130, 0, 0, 255),
    VTX(741, 71, 1546, 0, 0, 130, 0, 0, 255),
    VTX(741, 65, 1546, 0, 0, 130, 0, 0, 255),
    VTX(741, 65, 1552, 0, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005498[4] = {
    VTX(745, 71, 1546, 0, 0, 0, 127, 0, 255),
    VTX(741, 71, 1546, 0, 0, 0, 127, 0, 255),
    VTX(741, 71, 1552, 0, 0, 0, 127, 0, 255),
    VTX(745, 71, 1552, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0054D8[8] = {
    VTX(736, 307, 1543, -4095, 3072, 0, 117, 49, 255),
    VTX(736, 187, 1831, -4095, -3583, 0, 117, 49, 255),
    VTX(1120, 187, 1831, 4096, -3583, 0, 117, 49, 255),
    VTX(1120, 307, 1543, 4096, 3072, 0, 117, 49, 255),
    VTX(1120, 187, 1351, -3071, -1757, 0, 107, 190, 255),
    VTX(736, 187, 1351, 5120, -1757, 0, 107, 190, 255),
    VTX(736, 307, 1543, 5120, 3072, 0, 107, 190, 255),
    VTX(1120, 307, 1543, -3071, 3072, 0, 107, 190, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005558[6] = {
    VTX(736, 16, 1555, 341, 171, 0, 0, 127, 255),
    VTX(736, 16, 1555, 341, 0, 0, 0, 127, 255),
    VTX(736, 57, 1692, 2048, 683, 0, 0, 127, 255),
    VTX(736, 16, 1370, -2559, 0, 0, 0, 127, 255),
    VTX(736, 16, 1495, -682, 0, 0, 0, 127, 255),
    VTX(736, 16, 1495, -682, 171, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0055B8[16] = {
    VTX(736, 175, 1831, 0, 2048, 0, 0, 127, 255),
    VTX(736, 16, 1831, 0, 0, 0, 0, 127, 255),
    VTX(755, 16, 1831, 512, 0, 0, 0, 127, 255),
    VTX(755, 175, 1831, 512, 1877, 0, 0, 127, 255),
    VTX(1100, 175, 1831, 0, 1317, 0, 0, 127, 255),
    VTX(1100, 16, 1831, 0, -292, 0, 0, 127, 255),
    VTX(1120, 16, 1831, 512, -292, 0, 0, 127, 255),
    VTX(1120, 175, 1831, 512, 1463, 0, 0, 127, 255),
    VTX(736, 187, 1831, 0, -2047, 0, 0, 127, 255),
    VTX(736, 175, 1831, 512, -1901, 0, 0, 127, 255),
    VTX(1120, 175, 1831, 512, 2487, 0, 0, 127, 255),
    VTX(1120, 187, 1831, 0, 2633, 0, 0, 127, 255),
    VTX(736, 187, 1351, 0, -1433, 130, 0, 0, 255),
    VTX(736, 175, 1351, 512, -1330, 130, 0, 0, 255),
    VTX(736, 175, 1831, 512, 2560, 130, 0, 0, 255),
    VTX(736, 187, 1831, 0, 2662, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0056B8[4] = {
    VTX(736, 175, 1812, 0, 1536, 130, 0, 0, 255),
    VTX(736, 175, 1351, 0, 1536, 130, 0, 0, 255),
    VTX(1120, 187, 1831, 512, -640, 127, 0, 0, 255),
    VTX(755, 175, 1351, 0, 1877, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0056F8[4] = {
    VTX(736, 307, 1543, 512, 2033, 130, 0, 0, 255),
    VTX(736, 187, 1351, 0, -417, 130, 0, 0, 255),
    VTX(1120, 307, 1543, 4, 1152, 127, 0, 0, 255),
    VTX(1120, 187, 1351, 0, -1535, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005738[4] = {
    VTX(1120, 175, 1831, 0, 1755, 127, 0, 0, 255),
    VTX(1120, 187, 1831, 0, -1919, 127, 0, 0, 255),
    VTX(1120, 175, 1370, 0, 1365, 127, 0, 0, 255),
    VTX(1120, 175, 1351, 0, 2048, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005778[12] = {
    VTX(736, 16, 1812, 0, -340, 130, 0, 0, 255),
    VTX(736, 16, 1831, 512, -340, 130, 0, 0, 255),
    VTX(736, 175, 1831, 512, 1707, 130, 0, 0, 255),
    VTX(736, 16, 1351, 0, 0, 130, 0, 0, 255),
    VTX(736, 16, 1370, 512, 0, 130, 0, 0, 255),
    VTX(736, 175, 1370, 512, 1408, 130, 0, 0, 255),
    VTX(1120, 187, 1794, -5, -353, 127, 0, 0, 255),
    VTX(1120, 293, 1543, 35, 1982, 127, 0, 0, 255),
    VTX(1120, 307, 1543, 512, 2033, 127, 0, 0, 255),
    VTX(755, 16, 1351, 0, 0, 0, 0, 130, 255),
    VTX(736, 16, 1351, 512, 0, 0, 0, 130, 255),
    VTX(736, 175, 1351, 512, 2048, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005838[12] = {
    VTX(736, 293, 1543, 35, 1982, 130, 0, 0, 255),
    VTX(736, 187, 1794, -5, -353, 130, 0, 0, 255),
    VTX(736, 187, 1831, 512, -640, 130, 0, 0, 255),
    VTX(736, 187, 1374, 511, -282, 130, 0, 0, 255),
    VTX(736, 293, 1543, 516, 1102, 130, 0, 0, 255),
    VTX(736, 307, 1543, 4, 1152, 130, 0, 0, 255),
    VTX(1120, 293, 1543, 516, 1102, 127, 0, 0, 255),
    VTX(1120, 187, 1374, 511, -282, 127, 0, 0, 255),
    VTX(1120, 187, 1351, 0, -417, 127, 0, 0, 255),
    VTX(1120, 175, 1351, 512, -1407, 0, 0, 130, 255),
    VTX(736, 175, 1351, 512, 2432, 0, 0, 130, 255),
    VTX(736, 187, 1351, 0, 2560, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0058F8[12] = {
    VTX(1120, 16, 1831, 0, 0, 127, 0, 0, 255),
    VTX(1120, 16, 1812, 512, 0, 127, 0, 0, 255),
    VTX(1120, 175, 1812, 512, 1609, 127, 0, 0, 255),
    VTX(1120, 175, 1831, 512, -1791, 127, 0, 0, 255),
    VTX(1120, 175, 1351, 512, 3072, 127, 0, 0, 255),
    VTX(1120, 187, 1351, 0, 3200, 127, 0, 0, 255),
    VTX(1120, 16, 1370, 0, -511, 127, 0, 0, 255),
    VTX(1120, 16, 1351, 512, -511, 127, 0, 0, 255),
    VTX(1120, 175, 1351, 512, 1536, 127, 0, 0, 255),
    VTX(1120, 16, 1351, 0, -409, 0, 0, 130, 255),
    VTX(1100, 16, 1351, 512, -409, 0, 0, 130, 255),
    VTX(1100, 175, 1351, 512, 1843, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0059B8[12] = {
    VTX(736, 115, 1692, 0, 1024, 130, 0, 0, 255),
    VTX(736, 57, 1692, 0, 0, 130, 0, 0, 255),
    VTX(736, 57, 1749, 1024, 0, 130, 0, 0, 255),
    VTX(736, 115, 1749, 1024, 1024, 130, 0, 0, 255),
    VTX(736, 57, 1692, 1024, 0, 130, 0, 0, 255),
    VTX(736, 115, 1692, 1024, 1024, 130, 0, 0, 255),
    VTX(736, 115, 1634, 0, 1024, 130, 0, 0, 255),
    VTX(736, 57, 1634, 0, 0, 130, 0, 0, 255),
    VTX(784, 57, 1351, 1024, 0, 0, 0, 130, 255),
    VTX(784, 129, 1351, 1024, 1024, 0, 0, 130, 255),
    VTX(856, 129, 1351, 0, 1024, 0, 0, 130, 255),
    VTX(856, 57, 1351, 0, 0, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005A78[4] = {
    VTX(746, 116, 1495, 1024, 1024, 130, 0, 0, 255),
    VTX(746, 16, 1495, 1024, 0, 130, 0, 0, 255),
    VTX(746, 16, 1555, 0, 0, 130, 0, 0, 255),
    VTX(746, 116, 1555, 0, 1024, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005AB8[14] = {
    VTX(736, 16, 1370, -1023, 0, 130, 0, 0, 255),
    VTX(736, 16, 1495, -204, 0, 130, 0, 0, 255),
    VTX(736, 116, 1495, -204, 788, 130, 0, 0, 255),
    VTX(736, 175, 1370, -1023, 1024, 130, 0, 0, 255),
    VTX(736, 116, 1555, 268, 788, 130, 0, 0, 255),
    VTX(736, 175, 1812, 1875, 1024, 130, 0, 0, 255),
    VTX(736, 115, 1634, 583, 721, 130, 0, 0, 255),
    VTX(736, 16, 1555, 268, 0, 130, 0, 0, 255),
    VTX(736, 57, 1634, 583, 248, 130, 0, 0, 255),
    VTX(736, 115, 1692, 1213, 721, 130, 0, 0, 255),
    VTX(736, 115, 1749, 1686, 721, 130, 0, 0, 255),
    VTX(736, 57, 1749, 1686, 248, 130, 0, 0, 255),
    VTX(736, 16, 1812, 1875, 0, 130, 0, 0, 255),
    VTX(736, 115, 1692, 1056, 721, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005B98[5] = {
    VTX(736, 57, 1692, 1056, 248, 130, 0, 0, 255),
    VTX(1100, 175, 1351, -220, 1024, 0, 0, 130, 255),
    VTX(755, 16, 1351, 2048, 0, 0, 0, 130, 255),
    VTX(1120, 16, 1370, 1875, 0, 127, 0, 0, 255),
    VTX(784, 129, 1351, 1859, 721, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005BE8[4] = {
    VTX(1120, 187, 1374, -1023, 1024, 127, 0, 0, 255),
    VTX(736, 116, 1555, 268, 788, 0, 0, 130, 255),
    VTX(746, 116, 1495, -204, 788, 0, 0, 127, 255),
    VTX(1100, 16, 1831, 1245, 0, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005C28[3] = {
    VTX(736, 187, 1794, -711, 1024, 130, 0, 0, 255),
    VTX(736, 116, 1495, -204, 788, 0, 130, 0, 255),
    VTX(736, 57, 1692, 1213, 248, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005C58[8] = {
    VTX(1100, 16, 1351, -220, 0, 0, 0, 130, 255),
    VTX(856, 57, 1351, 1386, 248, 0, 0, 130, 255),
    VTX(856, 129, 1351, 1386, 721, 0, 0, 130, 255),
    VTX(755, 175, 1351, 2048, 1024, 0, 0, 130, 255),
    VTX(784, 57, 1351, 1859, 248, 0, 0, 130, 255),
    VTX(1120, 175, 1370, 1875, 1024, 127, 0, 0, 255),
    VTX(1120, 175, 1812, -1023, 1024, 127, 0, 0, 255),
    VTX(1120, 16, 1812, -1023, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005CD8[11] = {
    VTX(1120, 293, 1543, 88, 329, 127, 0, 0, 255),
    VTX(1120, 187, 1794, 1736, 1024, 127, 0, 0, 255),
    VTX(746, 116, 1555, 268, 788, 0, 0, 130, 255),
    VTX(746, 16, 1555, 268, 0, 0, 0, 130, 255),
    VTX(736, 16, 1555, 268, 0, 0, 0, 130, 255),
    VTX(736, 116, 1495, -204, 788, 0, 0, 127, 255),
    VTX(736, 16, 1495, -204, 0, 0, 0, 127, 255),
    VTX(746, 16, 1495, -204, 0, 0, 0, 127, 255),
    VTX(1100, 175, 1831, 1245, 1024, 0, 0, 127, 255),
    VTX(755, 175, 1831, -1023, 1024, 0, 0, 127, 255),
    VTX(755, 16, 1831, -1023, 0, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005D88[5] = {
    VTX(736, 293, 1543, 936, 329, 130, 0, 0, 255),
    VTX(736, 187, 1374, 2048, 1024, 130, 0, 0, 255),
    VTX(746, 116, 1495, -204, 788, 0, 130, 0, 255),
    VTX(746, 116, 1555, 268, 788, 0, 130, 0, 255),
    VTX(736, 116, 1555, 268, 788, 0, 130, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005DD8[16] = {
    VTX(736, 0, 1555, 320, 0, 130, 0, 0, 255),
    VTX(736, 0, 1831, 7680, 0, 130, 0, 0, 255),
    VTX(736, 16, 1831, 7680, 512, 130, 0, 0, 255),
    VTX(736, 16, 1555, 320, 512, 130, 0, 0, 255),
    VTX(736, 16, 1351, -5119, 512, 130, 0, 0, 255),
    VTX(736, 0, 1351, -5119, 0, 130, 0, 0, 255),
    VTX(736, 0, 1495, -1279, 0, 130, 0, 0, 255),
    VTX(736, 16, 1495, -1279, 512, 130, 0, 0, 255),
    VTX(716, 16, 1495, 640, 512, 0, 0, 130, 255),
    VTX(736, 16, 1495, 0, 512, 0, 0, 130, 255),
    VTX(736, 0, 1495, 0, 0, 0, 0, 130, 255),
    VTX(716, 0, 1495, 640, 0, 0, 0, 130, 255),
    VTX(1120, 16, 1831, 5632, 512, 0, 0, 127, 255),
    VTX(736, 16, 1831, -4607, 512, 0, 0, 127, 255),
    VTX(736, 0, 1831, -4607, 0, 0, 0, 127, 255),
    VTX(1120, 0, 1831, 5632, 0, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005ED8[4] = {
    VTX(736, 16, 1351, 5120, 512, 0, 0, 130, 255),
    VTX(1120, 16, 1831, -5631, 512, 127, 0, 0, 255),
    VTX(746, 16, 1495, -894, -408, 0, 127, 0, 255),
    VTX(736, 16, 1495, -895, -116, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005F18[2] = {
    VTX(716, 16, 1495, -383, 512, 130, 0, 0, 255),
    VTX(736, 16, 1555, 640, 512, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005F38[10] = {
    VTX(1120, 16, 1351, -5119, 512, 0, 0, 130, 255),
    VTX(1120, 0, 1351, -5119, 0, 0, 0, 130, 255),
    VTX(736, 0, 1351, 5120, 0, 0, 0, 130, 255),
    VTX(1120, 0, 1831, -5631, 0, 127, 0, 0, 255),
    VTX(1120, 0, 1351, 7168, 0, 127, 0, 0, 255),
    VTX(1120, 16, 1351, 7168, 512, 127, 0, 0, 255),
    VTX(736, 16, 1555, 1024, -116, 0, 127, 0, 255),
    VTX(746, 16, 1555, 1025, -408, 0, 127, 0, 255),
    VTX(716, 16, 1495, -896, 468, 0, 127, 0, 255),
    VTX(716, 16, 1555, 1023, 468, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_005FD8[6] = {
    VTX(716, 0, 1495, -383, 0, 130, 0, 0, 255),
    VTX(716, 0, 1555, 1536, 0, 130, 0, 0, 255),
    VTX(716, 16, 1555, 1536, 512, 130, 0, 0, 255),
    VTX(716, 16, 1555, 0, 512, 0, 0, 127, 255),
    VTX(716, 0, 1555, 0, 0, 0, 0, 127, 255),
    VTX(736, 0, 1555, 640, 0, 0, 0, 127, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x006038[] = {
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_005398[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005498[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_006C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0054D8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_006720, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005558[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0055B8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0056B8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005778[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0056F8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005838[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005738[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0058F8[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0059B8[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_006F20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005A78[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005AB8[0], 14, 0),
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_005AB8[7], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005AB8[12], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005B98[0], 5, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005C58[0], 8, 8),
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_005BE8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005CD8[0], 11, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005AB8[11], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005C28[0], 3, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005D88[0], 5, 5),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(3, 7, 8, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005DD8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005ED8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005F38[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005F18[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_005FD8[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_006720[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_006720.rgb5a1.inc.c"
};

u64 old_kakariko_village_room_00Tex_006F20[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_006F20.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_007720[16] = {
    VTX(745, 65, 552, 0, 0, 0, 130, 0, 255),
    VTX(741, 65, 552, 0, 0, 0, 130, 0, 255),
    VTX(741, 65, 546, 0, 0, 0, 130, 0, 255),
    VTX(745, 65, 546, 0, 0, 0, 130, 0, 255),
    VTX(745, 65, 546, 0, 0, 0, 0, 130, 255),
    VTX(741, 65, 546, 0, 0, 0, 0, 130, 255),
    VTX(741, 71, 546, 0, 0, 0, 0, 130, 255),
    VTX(745, 71, 546, 0, 0, 0, 0, 130, 255),
    VTX(741, 71, 552, 0, 0, 130, 0, 0, 255),
    VTX(741, 71, 546, 0, 0, 130, 0, 0, 255),
    VTX(741, 65, 546, 0, 0, 130, 0, 0, 255),
    VTX(741, 65, 552, 0, 0, 130, 0, 0, 255),
    VTX(745, 71, 552, 0, 0, 0, 0, 127, 255),
    VTX(741, 71, 552, 0, 0, 0, 0, 127, 255),
    VTX(741, 65, 552, 0, 0, 0, 0, 127, 255),
    VTX(745, 65, 552, 0, 0, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007820[4] = {
    VTX(745, 71, 546, 0, 0, 0, 127, 0, 255),
    VTX(741, 71, 546, 0, 0, 0, 127, 0, 255),
    VTX(741, 71, 552, 0, 0, 0, 127, 0, 255),
    VTX(745, 71, 552, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007860[8] = {
    VTX(736, 307, 543, -4095, 3072, 0, 117, 49, 255),
    VTX(736, 187, 831, -4095, -3583, 0, 117, 49, 255),
    VTX(1120, 187, 831, 4096, -3583, 0, 117, 49, 255),
    VTX(1120, 307, 543, 4096, 3072, 0, 117, 49, 255),
    VTX(1120, 187, 351, -3071, -1757, 0, 107, 190, 255),
    VTX(736, 187, 351, 5120, -1757, 0, 107, 190, 255),
    VTX(736, 307, 543, 5120, 3072, 0, 107, 190, 255),
    VTX(1120, 307, 543, -3071, 3072, 0, 107, 190, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0078E0[16] = {
    VTX(1100, 175, 831, 0, 1317, 0, 0, 127, 255),
    VTX(1100, 16, 831, 0, -292, 0, 0, 127, 255),
    VTX(1120, 16, 831, 512, -292, 0, 0, 127, 255),
    VTX(1120, 175, 831, 512, 1463, 0, 0, 127, 255),
    VTX(1120, 175, 831, 0, 1755, 127, 0, 0, 255),
    VTX(1120, 16, 831, 0, 0, 127, 0, 0, 255),
    VTX(1120, 16, 812, 512, 0, 127, 0, 0, 255),
    VTX(1120, 175, 812, 512, 1609, 127, 0, 0, 255),
    VTX(736, 187, 831, 0, -2047, 0, 0, 127, 255),
    VTX(736, 175, 831, 512, -1901, 0, 0, 127, 255),
    VTX(1120, 175, 831, 512, 2487, 0, 0, 127, 255),
    VTX(1120, 187, 831, 0, 2633, 0, 0, 127, 255),
    VTX(736, 175, 831, 0, 2048, 0, 0, 127, 255),
    VTX(736, 16, 831, 0, 0, 0, 0, 127, 255),
    VTX(755, 16, 831, 512, 0, 0, 0, 127, 255),
    VTX(755, 175, 831, 512, 1877, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0079E0[4] = {
    VTX(736, 187, 351, 0, -1433, 130, 0, 0, 255),
    VTX(736, 175, 351, 0, 1536, 130, 0, 0, 255),
    VTX(736, 175, 812, 0, 1536, 130, 0, 0, 255),
    VTX(1120, 175, 370, 0, 1365, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007A20[4] = {
    VTX(1120, 187, 831, 512, -640, 127, 0, 0, 255),
    VTX(1120, 307, 543, 4, 1152, 127, 0, 0, 255),
    VTX(736, 307, 543, 512, 2033, 130, 0, 0, 255),
    VTX(736, 187, 351, 0, -417, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007A60[4] = {
    VTX(1120, 187, 831, 0, -1919, 127, 0, 0, 255),
    VTX(1120, 175, 351, 0, 2048, 0, 0, 130, 255),
    VTX(1120, 187, 351, 0, -1535, 0, 0, 130, 255),
    VTX(755, 175, 351, 0, 1877, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007AA0[12] = {
    VTX(736, 175, 351, 512, -1330, 130, 0, 0, 255),
    VTX(736, 175, 831, 512, 2560, 130, 0, 0, 255),
    VTX(736, 187, 831, 0, 2662, 130, 0, 0, 255),
    VTX(736, 16, 351, 0, 0, 130, 0, 0, 255),
    VTX(736, 16, 370, 512, 0, 130, 0, 0, 255),
    VTX(736, 175, 370, 512, 1408, 130, 0, 0, 255),
    VTX(736, 16, 812, 0, -340, 130, 0, 0, 255),
    VTX(736, 16, 831, 512, -340, 130, 0, 0, 255),
    VTX(736, 175, 831, 512, 1707, 130, 0, 0, 255),
    VTX(1120, 16, 370, 0, -511, 127, 0, 0, 255),
    VTX(1120, 16, 351, 512, -511, 127, 0, 0, 255),
    VTX(1120, 175, 351, 512, 1536, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007B60[12] = {
    VTX(1120, 187, 794, -5, -353, 127, 0, 0, 255),
    VTX(1120, 293, 543, 35, 1982, 127, 0, 0, 255),
    VTX(1120, 307, 543, 512, 2033, 127, 0, 0, 255),
    VTX(1120, 293, 543, 516, 1102, 127, 0, 0, 255),
    VTX(1120, 187, 374, 511, -282, 127, 0, 0, 255),
    VTX(1120, 187, 351, 0, -417, 127, 0, 0, 255),
    VTX(736, 293, 543, 35, 1982, 130, 0, 0, 255),
    VTX(736, 187, 794, -5, -353, 130, 0, 0, 255),
    VTX(736, 187, 831, 512, -640, 130, 0, 0, 255),
    VTX(736, 187, 374, 511, -282, 130, 0, 0, 255),
    VTX(736, 293, 543, 516, 1102, 130, 0, 0, 255),
    VTX(736, 307, 543, 4, 1152, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007C20[12] = {
    VTX(1120, 175, 831, 512, -1791, 127, 0, 0, 255),
    VTX(1120, 175, 351, 512, 3072, 127, 0, 0, 255),
    VTX(1120, 187, 351, 0, 3200, 127, 0, 0, 255),
    VTX(1120, 16, 351, 0, -409, 0, 0, 130, 255),
    VTX(1100, 16, 351, 512, -409, 0, 0, 130, 255),
    VTX(1100, 175, 351, 512, 1843, 0, 0, 130, 255),
    VTX(1120, 175, 351, 512, -1407, 0, 0, 130, 255),
    VTX(736, 175, 351, 512, 2432, 0, 0, 130, 255),
    VTX(736, 187, 351, 0, 2560, 0, 0, 130, 255),
    VTX(755, 16, 351, 0, 0, 0, 0, 130, 255),
    VTX(736, 16, 351, 512, 0, 0, 0, 130, 255),
    VTX(736, 175, 351, 512, 2048, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007CE0[12] = {
    VTX(736, 57, 692, 1024, 0, 130, 0, 0, 255),
    VTX(736, 115, 692, 1024, 1024, 130, 0, 0, 255),
    VTX(736, 115, 634, 0, 1024, 130, 0, 0, 255),
    VTX(736, 57, 634, 0, 0, 130, 0, 0, 255),
    VTX(736, 115, 692, 0, 1024, 130, 0, 0, 255),
    VTX(736, 57, 692, 0, 0, 130, 0, 0, 255),
    VTX(736, 57, 749, 1024, 0, 130, 0, 0, 255),
    VTX(736, 115, 749, 1024, 1024, 130, 0, 0, 255),
    VTX(784, 57, 351, 1024, 0, 0, 0, 130, 255),
    VTX(784, 129, 351, 1024, 1024, 0, 0, 130, 255),
    VTX(856, 129, 351, 0, 1024, 0, 0, 130, 255),
    VTX(856, 57, 351, 0, 0, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007DA0[4] = {
    VTX(746, 116, 495, 1024, 1024, 130, 0, 0, 255),
    VTX(746, 16, 495, 1024, 0, 130, 0, 0, 255),
    VTX(746, 16, 555, 0, 0, 130, 0, 0, 255),
    VTX(746, 116, 555, 0, 1024, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007DE0[14] = {
    VTX(736, 175, 370, -1023, 1024, 130, 0, 0, 255),
    VTX(736, 116, 555, 268, 788, 130, 0, 0, 255),
    VTX(736, 175, 812, 1875, 1024, 130, 0, 0, 255),
    VTX(736, 116, 495, -204, 788, 130, 0, 0, 255),
    VTX(736, 16, 370, -1023, 0, 130, 0, 0, 255),
    VTX(736, 16, 495, -204, 0, 130, 0, 0, 255),
    VTX(736, 16, 555, 268, 0, 130, 0, 0, 255),
    VTX(736, 57, 634, 583, 248, 130, 0, 0, 255),
    VTX(736, 115, 634, 583, 721, 130, 0, 0, 255),
    VTX(736, 115, 692, 1213, 721, 130, 0, 0, 255),
    VTX(736, 115, 749, 1686, 721, 130, 0, 0, 255),
    VTX(736, 57, 749, 1686, 248, 130, 0, 0, 255),
    VTX(736, 16, 812, 1875, 0, 130, 0, 0, 255),
    VTX(736, 115, 692, 1056, 721, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007EC0[4] = {
    VTX(736, 57, 692, 1056, 248, 130, 0, 0, 255),
    VTX(1120, 16, 370, 1875, 0, 127, 0, 0, 255),
    VTX(784, 129, 351, 1859, 721, 0, 0, 130, 255),
    VTX(755, 16, 351, 2048, 0, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007F00[7] = {
    VTX(1100, 175, 351, -220, 1024, 0, 0, 130, 255),
    VTX(736, 57, 692, 1213, 248, 130, 0, 0, 255),
    VTX(736, 116, 495, -204, 788, 0, 130, 0, 255),
    VTX(1100, 16, 831, 1245, 0, 0, 0, 127, 255),
    VTX(1120, 187, 374, -1023, 1024, 127, 0, 0, 255),
    VTX(736, 187, 794, -711, 1024, 130, 0, 0, 255),
    VTX(746, 116, 495, -204, 788, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007F70[1] = {
    VTX(736, 116, 555, 268, 788, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_007F80[21] = {
    VTX(1120, 175, 370, 1875, 1024, 127, 0, 0, 255),
    VTX(1120, 175, 812, -1023, 1024, 127, 0, 0, 255),
    VTX(1120, 16, 812, -1023, 0, 127, 0, 0, 255),
    VTX(784, 57, 351, 1859, 248, 0, 0, 130, 255),
    VTX(755, 175, 351, 2048, 1024, 0, 0, 130, 255),
    VTX(856, 57, 351, 1386, 248, 0, 0, 130, 255),
    VTX(1100, 16, 351, -220, 0, 0, 0, 130, 255),
    VTX(856, 129, 351, 1386, 721, 0, 0, 130, 255),
    VTX(746, 116, 495, -204, 788, 0, 130, 0, 255),
    VTX(746, 116, 555, 268, 788, 0, 130, 0, 255),
    VTX(736, 116, 555, 268, 788, 0, 130, 0, 255),
    VTX(1100, 175, 831, 1245, 1024, 0, 0, 127, 255),
    VTX(755, 175, 831, -1023, 1024, 0, 0, 127, 255),
    VTX(755, 16, 831, -1023, 0, 0, 0, 127, 255),
    VTX(1120, 293, 543, 88, 329, 127, 0, 0, 255),
    VTX(1120, 187, 794, 1736, 1024, 127, 0, 0, 255),
    VTX(736, 293, 543, 936, 329, 130, 0, 0, 255),
    VTX(736, 187, 374, 2048, 1024, 130, 0, 0, 255),
    VTX(736, 116, 495, -204, 788, 0, 0, 127, 255),
    VTX(736, 16, 495, -204, 0, 0, 0, 127, 255),
    VTX(746, 16, 495, -204, 0, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0080D0[3] = {
    VTX(746, 116, 555, 268, 788, 0, 0, 130, 255),
    VTX(746, 16, 555, 268, 0, 0, 0, 130, 255),
    VTX(736, 16, 555, 268, 0, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_008100[16] = {
    VTX(736, 0, 555, 320, 0, 130, 0, 0, 255),
    VTX(736, 0, 831, 7680, 0, 130, 0, 0, 255),
    VTX(736, 16, 831, 7680, 512, 130, 0, 0, 255),
    VTX(736, 16, 555, 320, 512, 130, 0, 0, 255),
    VTX(736, 16, 351, -5119, 512, 130, 0, 0, 255),
    VTX(736, 0, 351, -5119, 0, 130, 0, 0, 255),
    VTX(736, 0, 495, -1279, 0, 130, 0, 0, 255),
    VTX(736, 16, 495, -1279, 512, 130, 0, 0, 255),
    VTX(736, 16, 555, 640, 512, 0, 0, 127, 255),
    VTX(716, 16, 555, 0, 512, 0, 0, 127, 255),
    VTX(716, 0, 555, 0, 0, 0, 0, 127, 255),
    VTX(736, 0, 555, 640, 0, 0, 0, 127, 255),
    VTX(1120, 16, 831, 5632, 512, 0, 0, 127, 255),
    VTX(736, 16, 831, -4607, 512, 0, 0, 127, 255),
    VTX(736, 0, 831, -4607, 0, 0, 0, 127, 255),
    VTX(1120, 0, 831, 5632, 0, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_008200[4] = {
    VTX(736, 16, 351, 5120, 512, 0, 0, 130, 255),
    VTX(1120, 16, 831, -5631, 512, 127, 0, 0, 255),
    VTX(746, 16, 495, -894, -408, 0, 127, 0, 255),
    VTX(736, 16, 495, -895, -116, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_008240[2] = {
    VTX(716, 16, 495, -383, 512, 130, 0, 0, 255),
    VTX(716, 16, 495, 640, 512, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_008260[10] = {
    VTX(1120, 16, 351, -5119, 512, 0, 0, 130, 255),
    VTX(1120, 0, 351, -5119, 0, 0, 0, 130, 255),
    VTX(736, 0, 351, 5120, 0, 0, 0, 130, 255),
    VTX(1120, 0, 831, -5631, 0, 127, 0, 0, 255),
    VTX(1120, 0, 351, 7168, 0, 127, 0, 0, 255),
    VTX(1120, 16, 351, 7168, 512, 127, 0, 0, 255),
    VTX(736, 16, 555, 1024, -116, 0, 127, 0, 255),
    VTX(746, 16, 555, 1025, -408, 0, 127, 0, 255),
    VTX(716, 16, 495, -896, 468, 0, 127, 0, 255),
    VTX(716, 16, 555, 1023, 468, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_008300[6] = {
    VTX(716, 0, 495, -383, 0, 130, 0, 0, 255),
    VTX(716, 0, 555, 1536, 0, 130, 0, 0, 255),
    VTX(716, 16, 555, 1536, 512, 130, 0, 0, 255),
    VTX(736, 16, 495, 0, 512, 0, 0, 130, 255),
    VTX(736, 0, 495, 0, 0, 0, 0, 130, 255),
    VTX(716, 0, 495, 640, 0, 0, 0, 130, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x008360[] = {
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_007720[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007820[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_006C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007860[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0078E0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0079E0[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007AA0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007A20[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007B60[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007A60[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007C20[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007CE0[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_0089F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007DA0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007DE0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(9, 10, 2, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(8, 13, 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007DE0[6], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007DE0[12], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007EC0[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007F80[0], 7, 7),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 10, 6, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007DE0[11], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007EC0[2], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007F00[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007F80[4], 9, 7),
    gsSP1Triangle(3, 9, 8, 0),
    gsSP1Triangle(3, 8, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007F00[3], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007F80[11], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_007F70[0], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0080D0[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_008100[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_008200[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_008260[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_008240[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_008300[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_0089F8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_0089F8.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_0091F8[16] = {
    VTX(-678, 65, 1391, 0, 0, 0, 130, 0, 255),
    VTX(-678, 65, 1395, 0, 0, 0, 130, 0, 255),
    VTX(-684, 65, 1395, 0, 0, 0, 130, 0, 255),
    VTX(-684, 65, 1391, 0, 0, 0, 130, 0, 255),
    VTX(-684, 65, 1391, 0, 0, 130, 0, 0, 255),
    VTX(-684, 65, 1395, 0, 0, 130, 0, 0, 255),
    VTX(-684, 71, 1395, 0, 0, 130, 0, 0, 255),
    VTX(-684, 71, 1391, 0, 0, 130, 0, 0, 255),
    VTX(-678, 71, 1395, 0, 0, 0, 0, 127, 255),
    VTX(-684, 71, 1395, 0, 0, 0, 0, 127, 255),
    VTX(-684, 65, 1395, 0, 0, 0, 0, 127, 255),
    VTX(-678, 65, 1395, 0, 0, 0, 0, 127, 255),
    VTX(-678, 71, 1391, 0, 0, 127, 0, 0, 255),
    VTX(-678, 71, 1395, 0, 0, 127, 0, 0, 255),
    VTX(-678, 65, 1395, 0, 0, 127, 0, 0, 255),
    VTX(-678, 65, 1391, 0, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0092F8[4] = {
    VTX(-684, 71, 1391, 0, 0, 0, 127, 0, 255),
    VTX(-684, 71, 1395, 0, 0, 0, 127, 0, 255),
    VTX(-678, 71, 1395, 0, 0, 0, 127, 0, 255),
    VTX(-678, 71, 1391, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009338[8] = {
    VTX(-687, 307, 1400, -4095, 3072, 49, 117, 0, 255),
    VTX(-399, 187, 1400, -4095, -3583, 49, 117, 0, 255),
    VTX(-399, 187, 1016, 4096, -3583, 49, 117, 0, 255),
    VTX(-687, 307, 1016, 4096, 3072, 49, 117, 0, 255),
    VTX(-879, 187, 1016, -3071, -1757, 190, 107, 0, 255),
    VTX(-879, 187, 1400, 5120, -1757, 190, 107, 0, 255),
    VTX(-687, 307, 1400, 5120, 3072, 190, 107, 0, 255),
    VTX(-687, 307, 1016, -3071, 3072, 190, 107, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0093B8[16] = {
    VTX(-399, 175, 1035, 0, 1317, 127, 0, 0, 255),
    VTX(-399, 16, 1035, 0, -292, 127, 0, 0, 255),
    VTX(-399, 16, 1016, 512, -292, 127, 0, 0, 255),
    VTX(-399, 175, 1016, 512, 1463, 127, 0, 0, 255),
    VTX(-399, 175, 1016, 0, 1755, 0, 0, 130, 255),
    VTX(-399, 16, 1016, 0, 0, 0, 0, 130, 255),
    VTX(-418, 16, 1016, 512, 0, 0, 0, 130, 255),
    VTX(-418, 175, 1016, 512, 1609, 0, 0, 130, 255),
    VTX(-399, 187, 1400, 0, -2047, 127, 0, 0, 255),
    VTX(-399, 175, 1400, 512, -1901, 127, 0, 0, 255),
    VTX(-399, 175, 1016, 512, 2487, 127, 0, 0, 255),
    VTX(-399, 187, 1016, 0, 2633, 127, 0, 0, 255),
    VTX(-399, 175, 1400, 0, 2048, 127, 0, 0, 255),
    VTX(-399, 16, 1400, 0, 0, 127, 0, 0, 255),
    VTX(-399, 16, 1381, 512, 0, 127, 0, 0, 255),
    VTX(-399, 175, 1381, 512, 1877, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0094B8[4] = {
    VTX(-879, 187, 1400, 0, -1433, 0, 0, 127, 255),
    VTX(-879, 175, 1400, 0, 1536, 0, 0, 127, 255),
    VTX(-418, 175, 1400, 0, 1536, 0, 0, 127, 255),
    VTX(-860, 175, 1016, 0, 1365, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0094F8[4] = {
    VTX(-399, 187, 1016, 512, -640, 0, 0, 130, 255),
    VTX(-687, 307, 1016, 4, 1152, 0, 0, 130, 255),
    VTX(-687, 307, 1400, 512, 2033, 0, 0, 127, 255),
    VTX(-879, 187, 1400, 0, -417, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009538[4] = {
    VTX(-399, 187, 1016, 0, -1919, 0, 0, 130, 255),
    VTX(-879, 175, 1016, 0, 2048, 130, 0, 0, 255),
    VTX(-879, 187, 1016, 0, -1535, 130, 0, 0, 255),
    VTX(-879, 175, 1381, 0, 1877, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009578[12] = {
    VTX(-879, 175, 1400, 512, -1330, 0, 0, 127, 255),
    VTX(-399, 175, 1400, 512, 2560, 0, 0, 127, 255),
    VTX(-399, 187, 1400, 0, 2662, 0, 0, 127, 255),
    VTX(-879, 16, 1400, 0, 0, 0, 0, 127, 255),
    VTX(-860, 16, 1400, 512, 0, 0, 0, 127, 255),
    VTX(-860, 175, 1400, 512, 1408, 0, 0, 127, 255),
    VTX(-418, 16, 1400, 0, -340, 0, 0, 127, 255),
    VTX(-399, 16, 1400, 512, -340, 0, 0, 127, 255),
    VTX(-399, 175, 1400, 512, 1707, 0, 0, 127, 255),
    VTX(-860, 16, 1016, 0, -511, 0, 0, 130, 255),
    VTX(-879, 16, 1016, 512, -511, 0, 0, 130, 255),
    VTX(-879, 175, 1016, 512, 1536, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009638[12] = {
    VTX(-436, 187, 1016, -5, -353, 0, 0, 130, 255),
    VTX(-687, 293, 1016, 35, 1982, 0, 0, 130, 255),
    VTX(-687, 307, 1016, 512, 2033, 0, 0, 130, 255),
    VTX(-687, 293, 1016, 516, 1102, 0, 0, 130, 255),
    VTX(-856, 187, 1016, 511, -282, 0, 0, 130, 255),
    VTX(-879, 187, 1016, 0, -417, 0, 0, 130, 255),
    VTX(-687, 293, 1400, 35, 1982, 0, 0, 127, 255),
    VTX(-436, 187, 1400, -5, -353, 0, 0, 127, 255),
    VTX(-399, 187, 1400, 512, -640, 0, 0, 127, 255),
    VTX(-856, 187, 1400, 511, -282, 0, 0, 127, 255),
    VTX(-687, 293, 1400, 516, 1102, 0, 0, 127, 255),
    VTX(-687, 307, 1400, 4, 1152, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0096F8[12] = {
    VTX(-399, 175, 1016, 512, -1791, 0, 0, 130, 255),
    VTX(-879, 175, 1016, 512, 3072, 0, 0, 130, 255),
    VTX(-879, 187, 1016, 0, 3200, 0, 0, 130, 255),
    VTX(-879, 16, 1016, 0, -409, 130, 0, 0, 255),
    VTX(-879, 16, 1035, 512, -409, 130, 0, 0, 255),
    VTX(-879, 175, 1035, 512, 1843, 130, 0, 0, 255),
    VTX(-879, 175, 1016, 512, -1407, 130, 0, 0, 255),
    VTX(-879, 175, 1400, 512, 2432, 130, 0, 0, 255),
    VTX(-879, 187, 1400, 0, 2560, 130, 0, 0, 255),
    VTX(-879, 16, 1381, 0, 0, 130, 0, 0, 255),
    VTX(-879, 16, 1400, 512, 0, 130, 0, 0, 255),
    VTX(-879, 175, 1400, 512, 2048, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0097B8[12] = {
    VTX(-538, 57, 1400, 1024, 0, 0, 0, 127, 255),
    VTX(-538, 115, 1400, 1024, 1024, 0, 0, 127, 255),
    VTX(-596, 115, 1400, 0, 1024, 0, 0, 127, 255),
    VTX(-596, 57, 1400, 0, 0, 0, 0, 127, 255),
    VTX(-538, 115, 1400, 0, 1024, 0, 0, 127, 255),
    VTX(-538, 57, 1400, 0, 0, 0, 0, 127, 255),
    VTX(-481, 57, 1400, 1024, 0, 0, 0, 127, 255),
    VTX(-481, 115, 1400, 1024, 1024, 0, 0, 127, 255),
    VTX(-879, 57, 1352, 1024, 0, 130, 0, 0, 255),
    VTX(-879, 129, 1352, 1024, 1024, 130, 0, 0, 255),
    VTX(-879, 129, 1280, 0, 1024, 130, 0, 0, 255),
    VTX(-879, 57, 1280, 0, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009878[4] = {
    VTX(-735, 116, 1390, 1024, 1024, 0, 0, 127, 255),
    VTX(-735, 16, 1390, 1024, 0, 0, 0, 127, 255),
    VTX(-675, 16, 1390, 0, 0, 0, 0, 127, 255),
    VTX(-675, 116, 1390, 0, 1024, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0098B8[14] = {
    VTX(-860, 175, 1400, -1023, 1024, 0, 0, 127, 255),
    VTX(-675, 116, 1400, 268, 788, 0, 0, 127, 255),
    VTX(-418, 175, 1400, 1875, 1024, 0, 0, 127, 255),
    VTX(-735, 116, 1400, -204, 788, 0, 0, 127, 255),
    VTX(-860, 16, 1400, -1023, 0, 0, 0, 127, 255),
    VTX(-735, 16, 1400, -204, 0, 0, 0, 127, 255),
    VTX(-675, 16, 1400, 268, 0, 0, 0, 127, 255),
    VTX(-596, 57, 1400, 583, 248, 0, 0, 127, 255),
    VTX(-596, 115, 1400, 583, 721, 0, 0, 127, 255),
    VTX(-538, 115, 1400, 1213, 721, 0, 0, 127, 255),
    VTX(-481, 115, 1400, 1686, 721, 0, 0, 127, 255),
    VTX(-481, 57, 1400, 1686, 248, 0, 0, 127, 255),
    VTX(-418, 16, 1400, 1875, 0, 0, 0, 127, 255),
    VTX(-538, 115, 1400, 1056, 721, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009998[4] = {
    VTX(-538, 57, 1400, 1056, 248, 0, 0, 127, 255),
    VTX(-860, 16, 1016, 1875, 0, 0, 0, 130, 255),
    VTX(-879, 129, 1352, 1859, 721, 130, 0, 0, 255),
    VTX(-879, 16, 1381, 2048, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0099D8[7] = {
    VTX(-879, 175, 1035, -220, 1024, 130, 0, 0, 255),
    VTX(-538, 57, 1400, 1213, 248, 0, 0, 127, 255),
    VTX(-735, 116, 1400, -204, 788, 0, 130, 0, 255),
    VTX(-399, 16, 1035, 1245, 0, 127, 0, 0, 255),
    VTX(-856, 187, 1016, -1023, 1024, 0, 0, 130, 255),
    VTX(-436, 187, 1400, -711, 1024, 0, 0, 127, 255),
    VTX(-735, 116, 1390, -204, 788, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009A48[1] = {
    VTX(-675, 116, 1400, 268, 788, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009A58[21] = {
    VTX(-860, 175, 1016, 1875, 1024, 0, 0, 130, 255),
    VTX(-418, 175, 1016, -1023, 1024, 0, 0, 130, 255),
    VTX(-418, 16, 1016, -1023, 0, 0, 0, 130, 255),
    VTX(-879, 57, 1352, 1859, 248, 130, 0, 0, 255),
    VTX(-879, 175, 1381, 2048, 1024, 130, 0, 0, 255),
    VTX(-879, 57, 1280, 1386, 248, 130, 0, 0, 255),
    VTX(-879, 16, 1035, -220, 0, 130, 0, 0, 255),
    VTX(-879, 129, 1280, 1386, 721, 130, 0, 0, 255),
    VTX(-735, 116, 1390, -204, 788, 0, 130, 0, 255),
    VTX(-675, 116, 1390, 268, 788, 0, 130, 0, 255),
    VTX(-675, 116, 1400, 268, 788, 0, 130, 0, 255),
    VTX(-399, 175, 1035, 1245, 1024, 127, 0, 0, 255),
    VTX(-399, 175, 1381, -1023, 1024, 127, 0, 0, 255),
    VTX(-399, 16, 1381, -1023, 0, 127, 0, 0, 255),
    VTX(-687, 293, 1016, 88, 329, 0, 0, 130, 255),
    VTX(-436, 187, 1016, 1736, 1024, 0, 0, 130, 255),
    VTX(-687, 293, 1400, 936, 329, 0, 0, 127, 255),
    VTX(-856, 187, 1400, 2048, 1024, 0, 0, 127, 255),
    VTX(-735, 116, 1400, -204, 788, 127, 0, 0, 255),
    VTX(-735, 16, 1400, -204, 0, 127, 0, 0, 255),
    VTX(-735, 16, 1390, -204, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009BA8[3] = {
    VTX(-675, 116, 1390, 268, 788, 130, 0, 0, 255),
    VTX(-675, 16, 1390, 268, 0, 130, 0, 0, 255),
    VTX(-675, 16, 1400, 268, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009BD8[16] = {
    VTX(-675, 0, 1400, 320, 0, 0, 0, 127, 255),
    VTX(-399, 0, 1400, 7680, 0, 0, 0, 127, 255),
    VTX(-399, 16, 1400, 7680, 512, 0, 0, 127, 255),
    VTX(-675, 16, 1400, 320, 512, 0, 0, 127, 255),
    VTX(-879, 16, 1400, -5119, 512, 0, 0, 127, 255),
    VTX(-879, 0, 1400, -5119, 0, 0, 0, 127, 255),
    VTX(-735, 0, 1400, -1279, 0, 0, 0, 127, 255),
    VTX(-735, 16, 1400, -1279, 512, 0, 0, 127, 255),
    VTX(-675, 16, 1400, 640, 512, 127, 0, 0, 255),
    VTX(-675, 16, 1420, 0, 512, 127, 0, 0, 255),
    VTX(-675, 0, 1420, 0, 0, 127, 0, 0, 255),
    VTX(-675, 0, 1400, 640, 0, 127, 0, 0, 255),
    VTX(-399, 16, 1016, 5632, 512, 127, 0, 0, 255),
    VTX(-399, 16, 1400, -4607, 512, 127, 0, 0, 255),
    VTX(-399, 0, 1400, -4607, 0, 127, 0, 0, 255),
    VTX(-399, 0, 1016, 5632, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009CD8[4] = {
    VTX(-879, 16, 1400, 5120, 512, 130, 0, 0, 255),
    VTX(-399, 16, 1016, -5631, 512, 0, 0, 130, 255),
    VTX(-735, 16, 1390, -894, -408, 0, 127, 0, 255),
    VTX(-735, 16, 1400, -895, -116, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009D18[2] = {
    VTX(-735, 16, 1420, -383, 512, 0, 0, 127, 255),
    VTX(-735, 16, 1420, 640, 512, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009D38[10] = {
    VTX(-879, 16, 1016, -5119, 512, 130, 0, 0, 255),
    VTX(-879, 0, 1016, -5119, 0, 130, 0, 0, 255),
    VTX(-879, 0, 1400, 5120, 0, 130, 0, 0, 255),
    VTX(-399, 0, 1016, -5631, 0, 0, 0, 130, 255),
    VTX(-879, 0, 1016, 7168, 0, 0, 0, 130, 255),
    VTX(-879, 16, 1016, 7168, 512, 0, 0, 130, 255),
    VTX(-675, 16, 1400, 1024, -116, 0, 127, 0, 255),
    VTX(-675, 16, 1390, 1025, -408, 0, 127, 0, 255),
    VTX(-735, 16, 1420, -896, 468, 0, 127, 0, 255),
    VTX(-675, 16, 1420, 1023, 468, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_009DD8[6] = {
    VTX(-735, 0, 1420, -383, 0, 0, 0, 127, 255),
    VTX(-675, 0, 1420, 1536, 0, 0, 0, 127, 255),
    VTX(-675, 16, 1420, 1536, 512, 0, 0, 127, 255),
    VTX(-735, 16, 1400, 0, 512, 130, 0, 0, 255),
    VTX(-735, 0, 1400, 0, 0, 130, 0, 0, 255),
    VTX(-735, 0, 1420, 640, 0, 130, 0, 0, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x009E38[] = {
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_0091F8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0092F8[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_006C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009338[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0093B8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0094B8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009578[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0094F8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009638[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009538[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0096F8[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0097B8[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_00A4D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009878[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0098B8[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(9, 10, 2, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(8, 13, 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0098B8[6], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0098B8[12], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009998[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009A58[0], 7, 7),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 10, 6, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0098B8[11], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009998[2], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0099D8[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009A58[4], 9, 7),
    gsSP1Triangle(3, 9, 8, 0),
    gsSP1Triangle(3, 8, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0099D8[3], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009A58[11], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009A48[0], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009BA8[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009BD8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009CD8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009D38[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009D18[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_009DD8[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_00A4D0[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_00A4D0.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_00ACD0[16] = {
    VTX(-1684, 71, 1391, 0, 0, 0, 127, 0, 255),
    VTX(-1684, 71, 1395, 0, 0, 0, 127, 0, 255),
    VTX(-1678, 71, 1395, 0, 0, 0, 127, 0, 255),
    VTX(-1678, 71, 1391, 0, 0, 0, 127, 0, 255),
    VTX(-1684, 65, 1391, 0, 0, 130, 0, 0, 255),
    VTX(-1684, 65, 1395, 0, 0, 130, 0, 0, 255),
    VTX(-1684, 71, 1395, 0, 0, 130, 0, 0, 255),
    VTX(-1684, 71, 1391, 0, 0, 130, 0, 0, 255),
    VTX(-1678, 71, 1391, 0, 0, 127, 0, 0, 255),
    VTX(-1678, 71, 1395, 0, 0, 127, 0, 0, 255),
    VTX(-1678, 65, 1395, 0, 0, 127, 0, 0, 255),
    VTX(-1678, 65, 1391, 0, 0, 127, 0, 0, 255),
    VTX(-1678, 71, 1395, 0, 0, 0, 0, 127, 255),
    VTX(-1684, 71, 1395, 0, 0, 0, 0, 127, 255),
    VTX(-1684, 65, 1395, 0, 0, 0, 0, 127, 255),
    VTX(-1678, 65, 1395, 0, 0, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00ADD0[4] = {
    VTX(-1678, 65, 1391, 0, 0, 0, 130, 0, 255),
    VTX(-1678, 65, 1395, 0, 0, 0, 130, 0, 255),
    VTX(-1684, 65, 1395, 0, 0, 0, 130, 0, 255),
    VTX(-1684, 65, 1391, 0, 0, 0, 130, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00AE10[8] = {
    VTX(-1687, 307, 1400, -4095, 3072, 49, 117, 0, 255),
    VTX(-1399, 187, 1400, -4095, -3583, 49, 117, 0, 255),
    VTX(-1399, 187, 1016, 4096, -3583, 49, 117, 0, 255),
    VTX(-1687, 307, 1016, 4096, 3072, 49, 117, 0, 255),
    VTX(-1879, 187, 1016, -3071, -1757, 190, 107, 0, 255),
    VTX(-1879, 187, 1400, 5120, -1757, 190, 107, 0, 255),
    VTX(-1687, 307, 1400, 5120, 3072, 190, 107, 0, 255),
    VTX(-1687, 307, 1016, -3071, 3072, 190, 107, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00AE90[16] = {
    VTX(-1399, 175, 1035, 0, 1317, 127, 0, 0, 255),
    VTX(-1399, 16, 1035, 0, -292, 127, 0, 0, 255),
    VTX(-1399, 16, 1016, 512, -292, 127, 0, 0, 255),
    VTX(-1399, 175, 1016, 512, 1463, 127, 0, 0, 255),
    VTX(-1399, 175, 1016, 0, 1755, 0, 0, 130, 255),
    VTX(-1399, 16, 1016, 0, 0, 0, 0, 130, 255),
    VTX(-1418, 16, 1016, 512, 0, 0, 0, 130, 255),
    VTX(-1418, 175, 1016, 512, 1609, 0, 0, 130, 255),
    VTX(-1399, 187, 1400, 0, -2047, 127, 0, 0, 255),
    VTX(-1399, 175, 1400, 512, -1901, 127, 0, 0, 255),
    VTX(-1399, 175, 1016, 512, 2487, 127, 0, 0, 255),
    VTX(-1399, 187, 1016, 0, 2633, 127, 0, 0, 255),
    VTX(-1399, 175, 1400, 0, 2048, 127, 0, 0, 255),
    VTX(-1399, 16, 1400, 0, 0, 127, 0, 0, 255),
    VTX(-1399, 16, 1381, 512, 0, 127, 0, 0, 255),
    VTX(-1399, 175, 1381, 512, 1877, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00AF90[4] = {
    VTX(-1879, 187, 1400, 0, -1433, 0, 0, 127, 255),
    VTX(-1879, 175, 1400, 0, 1536, 0, 0, 127, 255),
    VTX(-1418, 175, 1400, 0, 1536, 0, 0, 127, 255),
    VTX(-1399, 187, 1016, 0, -1919, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00AFD0[4] = {
    VTX(-1399, 187, 1016, 512, -640, 0, 0, 130, 255),
    VTX(-1687, 307, 1400, 512, 2033, 0, 0, 127, 255),
    VTX(-1879, 187, 1400, 0, -417, 0, 0, 127, 255),
    VTX(-1687, 307, 1016, 4, 1152, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B010[4] = {
    VTX(-1860, 175, 1016, 0, 1365, 0, 0, 130, 255),
    VTX(-1879, 175, 1016, 0, 2048, 130, 0, 0, 255),
    VTX(-1879, 187, 1016, 0, -1535, 130, 0, 0, 255),
    VTX(-1879, 175, 1381, 0, 1877, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B050[12] = {
    VTX(-1879, 175, 1400, 512, -1330, 0, 0, 127, 255),
    VTX(-1399, 175, 1400, 512, 2560, 0, 0, 127, 255),
    VTX(-1399, 187, 1400, 0, 2662, 0, 0, 127, 255),
    VTX(-1879, 16, 1400, 0, 0, 0, 0, 127, 255),
    VTX(-1860, 16, 1400, 512, 0, 0, 0, 127, 255),
    VTX(-1860, 175, 1400, 512, 1408, 0, 0, 127, 255),
    VTX(-1418, 16, 1400, 0, -340, 0, 0, 127, 255),
    VTX(-1399, 16, 1400, 512, -340, 0, 0, 127, 255),
    VTX(-1399, 175, 1400, 512, 1707, 0, 0, 127, 255),
    VTX(-1399, 175, 1016, 512, -1791, 0, 0, 130, 255),
    VTX(-1879, 175, 1016, 512, 3072, 0, 0, 130, 255),
    VTX(-1879, 187, 1016, 0, 3200, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B110[12] = {
    VTX(-1436, 187, 1016, -5, -353, 0, 0, 130, 255),
    VTX(-1687, 293, 1016, 35, 1982, 0, 0, 130, 255),
    VTX(-1687, 307, 1016, 512, 2033, 0, 0, 130, 255),
    VTX(-1687, 293, 1400, 35, 1982, 0, 0, 127, 255),
    VTX(-1436, 187, 1400, -5, -353, 0, 0, 127, 255),
    VTX(-1399, 187, 1400, 512, -640, 0, 0, 127, 255),
    VTX(-1856, 187, 1400, 511, -282, 0, 0, 127, 255),
    VTX(-1687, 293, 1400, 516, 1102, 0, 0, 127, 255),
    VTX(-1687, 307, 1400, 4, 1152, 0, 0, 127, 255),
    VTX(-1687, 293, 1016, 516, 1102, 0, 0, 130, 255),
    VTX(-1856, 187, 1016, 511, -282, 0, 0, 130, 255),
    VTX(-1879, 187, 1016, 0, -417, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B1D0[12] = {
    VTX(-1860, 16, 1016, 0, -511, 0, 0, 130, 255),
    VTX(-1879, 16, 1016, 512, -511, 0, 0, 130, 255),
    VTX(-1879, 175, 1016, 512, 1536, 0, 0, 130, 255),
    VTX(-1879, 16, 1016, 0, -409, 130, 0, 0, 255),
    VTX(-1879, 16, 1035, 512, -409, 130, 0, 0, 255),
    VTX(-1879, 175, 1035, 512, 1843, 130, 0, 0, 255),
    VTX(-1879, 175, 1016, 512, -1407, 130, 0, 0, 255),
    VTX(-1879, 175, 1400, 512, 2432, 130, 0, 0, 255),
    VTX(-1879, 187, 1400, 0, 2560, 130, 0, 0, 255),
    VTX(-1879, 16, 1381, 0, 0, 130, 0, 0, 255),
    VTX(-1879, 16, 1400, 512, 0, 130, 0, 0, 255),
    VTX(-1879, 175, 1400, 512, 2048, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B290[12] = {
    VTX(-1538, 115, 1400, 0, 1024, 0, 0, 127, 255),
    VTX(-1538, 57, 1400, 0, 0, 0, 0, 127, 255),
    VTX(-1481, 57, 1400, 1024, 0, 0, 0, 127, 255),
    VTX(-1481, 115, 1400, 1024, 1024, 0, 0, 127, 255),
    VTX(-1879, 57, 1352, 1024, 0, 130, 0, 0, 255),
    VTX(-1879, 129, 1352, 1024, 1024, 130, 0, 0, 255),
    VTX(-1879, 129, 1280, 0, 1024, 130, 0, 0, 255),
    VTX(-1879, 57, 1280, 0, 0, 130, 0, 0, 255),
    VTX(-1538, 57, 1400, 1024, 0, 0, 0, 127, 255),
    VTX(-1538, 115, 1400, 1024, 1024, 0, 0, 127, 255),
    VTX(-1596, 115, 1400, 0, 1024, 0, 0, 127, 255),
    VTX(-1596, 57, 1400, 0, 0, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B350[4] = {
    VTX(-1735, 116, 1390, 1024, 1024, 0, 0, 127, 255),
    VTX(-1735, 16, 1390, 1024, 0, 0, 0, 127, 255),
    VTX(-1675, 16, 1390, 0, 0, 0, 0, 127, 255),
    VTX(-1675, 116, 1390, 0, 1024, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B390[4] = {
    VTX(-1879, 0, 1400, 1024, 2048, 0, 127, 0, 255),
    VTX(-1879, 0, 1600, 0, 2048, 0, 127, 0, 255),
    VTX(-1399, 0, 1600, 0, 0, 0, 127, 0, 255),
    VTX(-1399, 0, 1400, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B3D0[21] = {
    VTX(-1860, 16, 1400, -1023, 0, 0, 0, 127, 255),
    VTX(-1735, 16, 1400, -204, 0, 0, 0, 127, 255),
    VTX(-1735, 116, 1400, -204, 788, 0, 0, 127, 255),
    VTX(-1860, 175, 1400, -1023, 1024, 0, 0, 127, 255),
    VTX(-1675, 116, 1400, 268, 788, 0, 0, 127, 255),
    VTX(-1418, 175, 1400, 1875, 1024, 0, 0, 127, 255),
    VTX(-1856, 187, 1016, -1023, 1024, 0, 0, 130, 255),
    VTX(-1687, 293, 1016, 88, 329, 0, 0, 130, 255),
    VTX(-1436, 187, 1016, 1736, 1024, 0, 0, 130, 255),
    VTX(-1596, 115, 1400, 583, 721, 0, 0, 127, 255),
    VTX(-1675, 16, 1400, 268, 0, 0, 0, 127, 255),
    VTX(-1596, 57, 1400, 583, 248, 0, 0, 127, 255),
    VTX(-1538, 115, 1400, 1213, 721, 0, 0, 127, 255),
    VTX(-1481, 115, 1400, 1686, 721, 0, 0, 127, 255),
    VTX(-1481, 57, 1400, 1686, 248, 0, 0, 127, 255),
    VTX(-1418, 16, 1400, 1875, 0, 0, 0, 127, 255),
    VTX(-1538, 115, 1400, 1056, 721, 0, 0, 127, 255),
    VTX(-1538, 57, 1400, 1056, 248, 0, 0, 127, 255),
    VTX(-1879, 175, 1035, -220, 1024, 130, 0, 0, 255),
    VTX(-1879, 129, 1352, 1859, 721, 130, 0, 0, 255),
    VTX(-1879, 16, 1381, 2048, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B520[4] = {
    VTX(-1436, 187, 1400, -711, 1024, 0, 0, 127, 255),
    VTX(-1399, 16, 1035, 1245, 0, 127, 0, 0, 255),
    VTX(-1860, 16, 1016, 1875, 0, 0, 0, 130, 255),
    VTX(-1675, 116, 1400, 268, 788, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B560[3] = {
    VTX(-1735, 116, 1390, -204, 788, 127, 0, 0, 255),
    VTX(-1735, 116, 1400, -204, 788, 0, 130, 0, 255),
    VTX(-1538, 57, 1400, 1213, 248, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B590[5] = {
    VTX(-1879, 129, 1280, 1386, 721, 130, 0, 0, 255),
    VTX(-1879, 175, 1381, 2048, 1024, 130, 0, 0, 255),
    VTX(-1879, 57, 1352, 1859, 248, 130, 0, 0, 255),
    VTX(-1879, 57, 1280, 1386, 248, 130, 0, 0, 255),
    VTX(-1879, 16, 1035, -220, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B5E0[11] = {
    VTX(-1687, 293, 1400, 936, 329, 0, 0, 127, 255),
    VTX(-1856, 187, 1400, 2048, 1024, 0, 0, 127, 255),
    VTX(-1399, 175, 1035, 1245, 1024, 127, 0, 0, 255),
    VTX(-1399, 175, 1381, -1023, 1024, 127, 0, 0, 255),
    VTX(-1399, 16, 1381, -1023, 0, 127, 0, 0, 255),
    VTX(-1860, 175, 1016, 1875, 1024, 0, 0, 130, 255),
    VTX(-1418, 175, 1016, -1023, 1024, 0, 0, 130, 255),
    VTX(-1418, 16, 1016, -1023, 0, 0, 0, 130, 255),
    VTX(-1675, 116, 1390, 268, 788, 130, 0, 0, 255),
    VTX(-1675, 16, 1390, 268, 0, 130, 0, 0, 255),
    VTX(-1675, 16, 1400, 268, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B690[6] = {
    VTX(-1735, 116, 1400, -204, 788, 127, 0, 0, 255),
    VTX(-1735, 16, 1400, -204, 0, 127, 0, 0, 255),
    VTX(-1735, 16, 1390, -204, 0, 127, 0, 0, 255),
    VTX(-1735, 116, 1390, -204, 788, 0, 130, 0, 255),
    VTX(-1675, 116, 1390, 268, 788, 0, 130, 0, 255),
    VTX(-1675, 116, 1400, 268, 788, 0, 130, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B6F0[16] = {
    VTX(-1399, 16, 1016, 5632, 512, 127, 0, 0, 255),
    VTX(-1399, 16, 1400, -4607, 512, 127, 0, 0, 255),
    VTX(-1399, 0, 1400, -4607, 0, 127, 0, 0, 255),
    VTX(-1399, 0, 1016, 5632, 0, 127, 0, 0, 255),
    VTX(-1879, 16, 1400, -5119, 512, 0, 0, 127, 255),
    VTX(-1879, 0, 1400, -5119, 0, 0, 0, 127, 255),
    VTX(-1735, 0, 1400, -1279, 0, 0, 0, 127, 255),
    VTX(-1735, 16, 1400, -1279, 512, 0, 0, 127, 255),
    VTX(-1735, 16, 1420, 640, 512, 130, 0, 0, 255),
    VTX(-1735, 16, 1400, 0, 512, 130, 0, 0, 255),
    VTX(-1735, 0, 1400, 0, 0, 130, 0, 0, 255),
    VTX(-1735, 0, 1420, 640, 0, 130, 0, 0, 255),
    VTX(-1675, 0, 1400, 320, 0, 0, 0, 127, 255),
    VTX(-1399, 0, 1400, 7680, 0, 0, 0, 127, 255),
    VTX(-1399, 16, 1400, 7680, 512, 0, 0, 127, 255),
    VTX(-1675, 16, 1400, 320, 512, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B7F0[4] = {
    VTX(-1735, 16, 1420, -383, 512, 0, 0, 127, 255),
    VTX(-1675, 16, 1400, 640, 512, 127, 0, 0, 255),
    VTX(-1735, 16, 1400, -895, -116, 0, 127, 0, 255),
    VTX(-1735, 16, 1390, -894, -408, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B830[2] = {
    VTX(-1399, 16, 1016, -5631, 512, 0, 0, 130, 255),
    VTX(-1879, 16, 1400, 5120, 512, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B850[10] = {
    VTX(-1735, 0, 1420, -383, 0, 0, 0, 127, 255),
    VTX(-1675, 0, 1420, 1536, 0, 0, 0, 127, 255),
    VTX(-1675, 16, 1420, 1536, 512, 0, 0, 127, 255),
    VTX(-1675, 16, 1420, 0, 512, 127, 0, 0, 255),
    VTX(-1675, 0, 1420, 0, 0, 127, 0, 0, 255),
    VTX(-1675, 0, 1400, 640, 0, 127, 0, 0, 255),
    VTX(-1735, 16, 1420, -896, 468, 0, 127, 0, 255),
    VTX(-1675, 16, 1420, 1023, 468, 0, 127, 0, 255),
    VTX(-1675, 16, 1400, 1024, -116, 0, 127, 0, 255),
    VTX(-1675, 16, 1390, 1025, -408, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00B8F0[6] = {
    VTX(-1399, 0, 1016, -5631, 0, 0, 0, 130, 255),
    VTX(-1879, 0, 1016, 7168, 0, 0, 0, 130, 255),
    VTX(-1879, 16, 1016, 7168, 512, 0, 0, 130, 255),
    VTX(-1879, 16, 1016, -5119, 512, 130, 0, 0, 255),
    VTX(-1879, 0, 1016, -5119, 0, 130, 0, 0, 255),
    VTX(-1879, 0, 1400, 5120, 0, 130, 0, 0, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x00B950[] = {
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_00ACD0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00ADD0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_006C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00AE10[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00AE90[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00AF90[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B050[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00AFD0[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B110[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B010[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B1D0[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B290[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_00C038, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B350[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_00C838, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B390[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B3D0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(4, 9, 5, 0),
    gsSP1Triangle(4, 10, 11, 0),
    gsSP1Triangle(4, 11, 9, 0),
    gsSP1Triangle(12, 13, 5, 0),
    gsSP1Triangle(5, 13, 14, 0),
    gsSP1Triangle(5, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B3D0[5], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B3D0[9], 3, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B3D0[15], 6, 4),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B590[0], 5, 10),
    gsSP1Triangle(1, 5, 0, 0),
    gsSP1Triangle(6, 2, 4, 0),
    gsSP1Triangle(6, 3, 2, 0),
    gsSP1Triangle(7, 10, 8, 0),
    gsSP1Triangle(7, 8, 11, 0),
    gsSP1Triangle(8, 12, 9, 0),
    gsSP1Triangle(8, 9, 11, 0),
    gsSP1Triangle(9, 12, 13, 0),
    gsSP1Triangle(9, 13, 14, 0),
    gsSP1Triangle(7, 14, 13, 0),
    gsSP1Triangle(7, 13, 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B520[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B5E0[0], 11, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B3D0[14], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B560[0], 3, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B690[0], 6, 5),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B6F0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B7F0[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B850[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 2, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B830[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00B8F0[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_00C038[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_00C038.rgb5a1.inc.c"
};

u64 old_kakariko_village_room_00Tex_00C838[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_00C838.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_00D038[16] = {
    VTX(1521, 265, -1608, 0, 0, 0, 130, 0, 255),
    VTX(1521, 265, -1604, 0, 0, 0, 130, 0, 255),
    VTX(1515, 265, -1604, 0, 0, 0, 130, 0, 255),
    VTX(1515, 265, -1608, 0, 0, 0, 130, 0, 255),
    VTX(1515, 265, -1608, 0, 0, 130, 0, 0, 255),
    VTX(1515, 265, -1604, 0, 0, 130, 0, 0, 255),
    VTX(1515, 271, -1604, 0, 0, 130, 0, 0, 255),
    VTX(1515, 271, -1608, 0, 0, 130, 0, 0, 255),
    VTX(1521, 271, -1604, 0, 0, 0, 0, 127, 255),
    VTX(1515, 271, -1604, 0, 0, 0, 0, 127, 255),
    VTX(1515, 265, -1604, 0, 0, 0, 0, 127, 255),
    VTX(1521, 265, -1604, 0, 0, 0, 0, 127, 255),
    VTX(1521, 271, -1608, 0, 0, 127, 0, 0, 255),
    VTX(1521, 271, -1604, 0, 0, 127, 0, 0, 255),
    VTX(1521, 265, -1604, 0, 0, 127, 0, 0, 255),
    VTX(1521, 265, -1608, 0, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D138[4] = {
    VTX(1515, 271, -1608, 0, 0, 0, 127, 0, 255),
    VTX(1515, 271, -1604, 0, 0, 0, 127, 0, 255),
    VTX(1521, 271, -1604, 0, 0, 0, 127, 0, 255),
    VTX(1521, 271, -1608, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D178[8] = {
    VTX(1512, 507, -1599, -4095, 3072, 49, 117, 0, 255),
    VTX(1800, 387, -1599, -4095, -3583, 49, 117, 0, 255),
    VTX(1800, 387, -1983, 4096, -3583, 49, 117, 0, 255),
    VTX(1512, 507, -1983, 4096, 3072, 49, 117, 0, 255),
    VTX(1320, 387, -1983, -3071, -1757, 190, 107, 0, 255),
    VTX(1320, 387, -1599, 5120, -1757, 190, 107, 0, 255),
    VTX(1512, 507, -1599, 5120, 3072, 190, 107, 0, 255),
    VTX(1512, 507, -1983, -3071, 3072, 190, 107, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D1F8[16] = {
    VTX(1800, 375, -1964, 0, 1317, 127, 0, 0, 255),
    VTX(1800, 216, -1964, 0, -292, 127, 0, 0, 255),
    VTX(1800, 216, -1983, 512, -292, 127, 0, 0, 255),
    VTX(1800, 375, -1983, 512, 1463, 127, 0, 0, 255),
    VTX(1800, 375, -1983, 0, 1755, 0, 0, 130, 255),
    VTX(1800, 216, -1983, 0, 0, 0, 0, 130, 255),
    VTX(1781, 216, -1983, 512, 0, 0, 0, 130, 255),
    VTX(1781, 375, -1983, 512, 1609, 0, 0, 130, 255),
    VTX(1800, 387, -1599, 0, -2047, 127, 0, 0, 255),
    VTX(1800, 375, -1599, 512, -1901, 127, 0, 0, 255),
    VTX(1800, 375, -1983, 512, 2487, 127, 0, 0, 255),
    VTX(1800, 387, -1983, 0, 2633, 127, 0, 0, 255),
    VTX(1800, 375, -1599, 0, 2048, 127, 0, 0, 255),
    VTX(1800, 216, -1599, 0, 0, 127, 0, 0, 255),
    VTX(1800, 216, -1618, 512, 0, 127, 0, 0, 255),
    VTX(1800, 375, -1618, 512, 1877, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D2F8[4] = {
    VTX(1320, 387, -1599, 0, -1433, 0, 0, 127, 255),
    VTX(1320, 375, -1599, 0, 1536, 0, 0, 127, 255),
    VTX(1781, 375, -1599, 0, 1536, 0, 0, 127, 255),
    VTX(1339, 375, -1983, 0, 1365, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D338[4] = {
    VTX(1800, 387, -1983, 512, -640, 0, 0, 130, 255),
    VTX(1512, 507, -1983, 4, 1152, 0, 0, 130, 255),
    VTX(1512, 507, -1599, 512, 2033, 0, 0, 127, 255),
    VTX(1320, 387, -1599, 0, -417, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D378[4] = {
    VTX(1800, 387, -1983, 0, -1919, 0, 0, 130, 255),
    VTX(1320, 375, -1983, 0, 2048, 130, 0, 0, 255),
    VTX(1320, 387, -1983, 0, -1535, 130, 0, 0, 255),
    VTX(1320, 375, -1618, 0, 1877, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D3B8[12] = {
    VTX(1320, 375, -1599, 512, -1330, 0, 0, 127, 255),
    VTX(1800, 375, -1599, 512, 2560, 0, 0, 127, 255),
    VTX(1800, 387, -1599, 0, 2662, 0, 0, 127, 255),
    VTX(1320, 216, -1599, 0, 0, 0, 0, 127, 255),
    VTX(1339, 216, -1599, 512, 0, 0, 0, 127, 255),
    VTX(1339, 375, -1599, 512, 1408, 0, 0, 127, 255),
    VTX(1781, 216, -1599, 0, -340, 0, 0, 127, 255),
    VTX(1800, 216, -1599, 512, -340, 0, 0, 127, 255),
    VTX(1800, 375, -1599, 512, 1707, 0, 0, 127, 255),
    VTX(1339, 216, -1983, 0, -511, 0, 0, 130, 255),
    VTX(1320, 216, -1983, 512, -511, 0, 0, 130, 255),
    VTX(1320, 375, -1983, 512, 1536, 0, 0, 130, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D478[12] = {
    VTX(1763, 387, -1983, -5, -353, 0, 0, 130, 255),
    VTX(1512, 493, -1983, 35, 1982, 0, 0, 130, 255),
    VTX(1512, 507, -1983, 512, 2033, 0, 0, 130, 255),
    VTX(1512, 493, -1983, 516, 1102, 0, 0, 130, 255),
    VTX(1343, 387, -1983, 511, -282, 0, 0, 130, 255),
    VTX(1320, 387, -1983, 0, -417, 0, 0, 130, 255),
    VTX(1512, 493, -1599, 35, 1982, 0, 0, 127, 255),
    VTX(1763, 387, -1599, -5, -353, 0, 0, 127, 255),
    VTX(1800, 387, -1599, 512, -640, 0, 0, 127, 255),
    VTX(1343, 387, -1599, 511, -282, 0, 0, 127, 255),
    VTX(1512, 493, -1599, 516, 1102, 0, 0, 127, 255),
    VTX(1512, 507, -1599, 4, 1152, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D538[12] = {
    VTX(1800, 375, -1983, 512, -1791, 0, 0, 130, 255),
    VTX(1320, 375, -1983, 512, 3072, 0, 0, 130, 255),
    VTX(1320, 387, -1983, 0, 3200, 0, 0, 130, 255),
    VTX(1320, 216, -1983, 0, -409, 130, 0, 0, 255),
    VTX(1320, 216, -1964, 512, -409, 130, 0, 0, 255),
    VTX(1320, 375, -1964, 512, 1843, 130, 0, 0, 255),
    VTX(1320, 375, -1983, 512, -1407, 130, 0, 0, 255),
    VTX(1320, 375, -1599, 512, 2432, 130, 0, 0, 255),
    VTX(1320, 387, -1599, 0, 2560, 130, 0, 0, 255),
    VTX(1320, 216, -1618, 0, 0, 130, 0, 0, 255),
    VTX(1320, 216, -1599, 512, 0, 130, 0, 0, 255),
    VTX(1320, 375, -1599, 512, 2048, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D5F8[12] = {
    VTX(1661, 257, -1599, 1024, 0, 0, 0, 127, 255),
    VTX(1661, 315, -1599, 1024, 1024, 0, 0, 127, 255),
    VTX(1603, 315, -1599, 0, 1024, 0, 0, 127, 255),
    VTX(1603, 257, -1599, 0, 0, 0, 0, 127, 255),
    VTX(1661, 315, -1599, 0, 1024, 0, 0, 127, 255),
    VTX(1661, 257, -1599, 0, 0, 0, 0, 127, 255),
    VTX(1718, 257, -1599, 1024, 0, 0, 0, 127, 255),
    VTX(1718, 315, -1599, 1024, 1024, 0, 0, 127, 255),
    VTX(1320, 257, -1647, 1024, 0, 130, 0, 0, 255),
    VTX(1320, 329, -1647, 1024, 1024, 130, 0, 0, 255),
    VTX(1320, 329, -1719, 0, 1024, 130, 0, 0, 255),
    VTX(1320, 257, -1719, 0, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D6B8[4] = {
    VTX(1464, 316, -1609, 1024, 1024, 0, 0, 127, 255),
    VTX(1464, 216, -1609, 1024, 0, 0, 0, 127, 255),
    VTX(1524, 216, -1609, 0, 0, 0, 0, 127, 255),
    VTX(1524, 316, -1609, 0, 1024, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D6F8[14] = {
    VTX(1339, 375, -1599, -1023, 1024, 0, 0, 127, 255),
    VTX(1524, 316, -1599, 268, 788, 0, 0, 127, 255),
    VTX(1781, 375, -1599, 1875, 1024, 0, 0, 127, 255),
    VTX(1464, 316, -1599, -204, 788, 0, 0, 127, 255),
    VTX(1339, 216, -1599, -1023, 0, 0, 0, 127, 255),
    VTX(1464, 216, -1599, -204, 0, 0, 0, 127, 255),
    VTX(1524, 216, -1599, 268, 0, 0, 0, 127, 255),
    VTX(1603, 257, -1599, 583, 248, 0, 0, 127, 255),
    VTX(1603, 315, -1599, 583, 721, 0, 0, 127, 255),
    VTX(1661, 315, -1599, 1213, 721, 0, 0, 127, 255),
    VTX(1718, 315, -1599, 1686, 721, 0, 0, 127, 255),
    VTX(1718, 257, -1599, 1686, 248, 0, 0, 127, 255),
    VTX(1781, 216, -1599, 1875, 0, 0, 0, 127, 255),
    VTX(1661, 315, -1599, 1056, 721, 0, 0, 127, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D7D8[4] = {
    VTX(1661, 257, -1599, 1056, 248, 0, 0, 127, 255),
    VTX(1339, 216, -1983, 1875, 0, 0, 0, 130, 255),
    VTX(1320, 329, -1647, 1859, 721, 130, 0, 0, 255),
    VTX(1320, 216, -1618, 2048, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D818[7] = {
    VTX(1320, 375, -1964, -220, 1024, 130, 0, 0, 255),
    VTX(1661, 257, -1599, 1213, 248, 0, 0, 127, 255),
    VTX(1464, 316, -1599, -204, 788, 0, 130, 0, 255),
    VTX(1800, 216, -1964, 1245, 0, 127, 0, 0, 255),
    VTX(1343, 387, -1983, -1023, 1024, 0, 0, 130, 255),
    VTX(1763, 387, -1599, -711, 1024, 0, 0, 127, 255),
    VTX(1464, 316, -1609, -204, 788, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D888[1] = {
    VTX(1524, 316, -1599, 268, 788, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D898[21] = {
    VTX(1339, 375, -1983, 1875, 1024, 0, 0, 130, 255),
    VTX(1781, 375, -1983, -1023, 1024, 0, 0, 130, 255),
    VTX(1781, 216, -1983, -1023, 0, 0, 0, 130, 255),
    VTX(1320, 257, -1647, 1859, 248, 130, 0, 0, 255),
    VTX(1320, 375, -1618, 2048, 1024, 130, 0, 0, 255),
    VTX(1320, 257, -1719, 1386, 248, 130, 0, 0, 255),
    VTX(1320, 216, -1964, -220, 0, 130, 0, 0, 255),
    VTX(1320, 329, -1719, 1386, 721, 130, 0, 0, 255),
    VTX(1464, 316, -1609, -204, 788, 0, 130, 0, 255),
    VTX(1524, 316, -1609, 268, 788, 0, 130, 0, 255),
    VTX(1524, 316, -1599, 268, 788, 0, 130, 0, 255),
    VTX(1800, 375, -1964, 1245, 1024, 127, 0, 0, 255),
    VTX(1800, 375, -1618, -1023, 1024, 127, 0, 0, 255),
    VTX(1800, 216, -1618, -1023, 0, 127, 0, 0, 255),
    VTX(1512, 493, -1983, 88, 329, 0, 0, 130, 255),
    VTX(1763, 387, -1983, 1736, 1024, 0, 0, 130, 255),
    VTX(1512, 493, -1599, 936, 329, 0, 0, 127, 255),
    VTX(1343, 387, -1599, 2048, 1024, 0, 0, 127, 255),
    VTX(1464, 316, -1599, -204, 788, 127, 0, 0, 255),
    VTX(1464, 216, -1599, -204, 0, 127, 0, 0, 255),
    VTX(1464, 216, -1609, -204, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00D9E8[3] = {
    VTX(1524, 316, -1609, 268, 788, 130, 0, 0, 255),
    VTX(1524, 216, -1609, 268, 0, 130, 0, 0, 255),
    VTX(1524, 216, -1599, 268, 0, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00DA18[16] = {
    VTX(1524, 200, -1599, 320, 0, 0, 0, 127, 255),
    VTX(1800, 200, -1599, 7680, 0, 0, 0, 127, 255),
    VTX(1800, 216, -1599, 7680, 512, 0, 0, 127, 255),
    VTX(1524, 216, -1599, 320, 512, 0, 0, 127, 255),
    VTX(1320, 216, -1599, -5119, 512, 0, 0, 127, 255),
    VTX(1320, 200, -1599, -5119, 0, 0, 0, 127, 255),
    VTX(1464, 200, -1599, -1279, 0, 0, 0, 127, 255),
    VTX(1464, 216, -1599, -1279, 512, 0, 0, 127, 255),
    VTX(1524, 216, -1599, 640, 512, 127, 0, 0, 255),
    VTX(1524, 216, -1579, 0, 512, 127, 0, 0, 255),
    VTX(1524, 200, -1579, 0, 0, 127, 0, 0, 255),
    VTX(1524, 200, -1599, 640, 0, 127, 0, 0, 255),
    VTX(1800, 216, -1983, 5632, 512, 127, 0, 0, 255),
    VTX(1800, 216, -1599, -4607, 512, 127, 0, 0, 255),
    VTX(1800, 200, -1599, -4607, 0, 127, 0, 0, 255),
    VTX(1800, 200, -1983, 5632, 0, 127, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00DB18[4] = {
    VTX(1320, 216, -1599, 5120, 512, 130, 0, 0, 255),
    VTX(1800, 216, -1983, -5631, 512, 0, 0, 130, 255),
    VTX(1464, 216, -1609, -894, -408, 0, 127, 0, 255),
    VTX(1464, 216, -1599, -895, -116, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00DB58[2] = {
    VTX(1464, 216, -1579, -383, 512, 0, 0, 127, 255),
    VTX(1464, 216, -1579, 640, 512, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00DB78[10] = {
    VTX(1320, 216, -1983, -5119, 512, 130, 0, 0, 255),
    VTX(1320, 200, -1983, -5119, 0, 130, 0, 0, 255),
    VTX(1320, 200, -1599, 5120, 0, 130, 0, 0, 255),
    VTX(1800, 200, -1983, -5631, 0, 0, 0, 130, 255),
    VTX(1320, 200, -1983, 7168, 0, 0, 0, 130, 255),
    VTX(1320, 216, -1983, 7168, 512, 0, 0, 130, 255),
    VTX(1524, 216, -1599, 1024, -116, 0, 127, 0, 255),
    VTX(1524, 216, -1609, 1025, -408, 0, 127, 0, 255),
    VTX(1464, 216, -1579, -896, 468, 0, 127, 0, 255),
    VTX(1524, 216, -1579, 1023, 468, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00DC18[6] = {
    VTX(1464, 200, -1579, -383, 0, 0, 0, 127, 255),
    VTX(1524, 200, -1579, 1536, 0, 0, 0, 127, 255),
    VTX(1524, 216, -1579, 1536, 512, 0, 0, 127, 255),
    VTX(1464, 216, -1599, 0, 512, 130, 0, 0, 255),
    VTX(1464, 200, -1599, 0, 0, 130, 0, 0, 255),
    VTX(1464, 200, -1579, 640, 0, 130, 0, 0, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x00DC78[] = {
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
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D038[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D138[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_006C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D178[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007C80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, 2, 0, 4, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D1F8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D2F8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D3B8[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D338[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D478[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D378[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D538[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_007480, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D5F8[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_00E310, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D6B8[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008080, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D6F8[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(9, 10, 2, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(8, 13, 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D6F8[6], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D6F8[12], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D7D8[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D898[0], 7, 7),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(5, 10, 6, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D6F8[11], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D7D8[2], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D818[0], 4, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D898[4], 9, 7),
    gsSP1Triangle(3, 9, 8, 0),
    gsSP1Triangle(3, 8, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D818[3], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D898[11], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D888[0], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00D9E8[0], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_sceneTex_008880, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, 0, 0, 4, 4, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00DA18[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00DB18[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00DB78[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00DB58[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00DC18[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_00E310[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_00E310.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_00EB10[21] = {
    VTX(1637, 116, -1141, 2978, 188, 105, 0, 70, 255),
    VTX(1637, 106, -1141, 3024, 97, 105, 0, 70, 255),
    VTX(1649, 116, -1157, 2795, 555, 105, 0, 70, 255),
    VTX(1626, 106, -1124, 3207, -269, 105, 0, 70, 255),
    VTX(1626, 96, -1124, 3253, -360, 105, 0, 70, 255),
    VTX(1649, 126, -1157, 2749, 646, 105, 0, 70, 255),
    VTX(1660, 126, -1174, 2566, 1013, 105, 0, 70, 255),
    VTX(1615, 96, -1107, 3436, -727, 105, 0, 70, 255),
    VTX(1615, 86, -1107, 3482, -818, 105, 0, 70, 255),
    VTX(1465, 86, -1207, -204, -2661, 152, 0, 187, 255),
    VTX(1465, 96, -1207, -250, -2570, 152, 0, 187, 255),
    VTX(1477, 96, -1224, -433, -2203, 152, 0, 187, 255),
    VTX(1477, 106, -1224, -479, -2112, 152, 0, 187, 255),
    VTX(1488, 106, -1240, -662, -1746, 152, 0, 187, 255),
    VTX(1660, 136, -1174, 2520, 1104, 105, 0, 70, 255),
    VTX(1704, 176, -1240, 1604, 2936, 105, 0, 70, 255),
    VTX(1693, 166, -1224, 1833, 2478, 105, 0, 70, 255),
    VTX(1715, 186, -1257, 1375, 3394, 105, 0, 70, 255),
    VTX(1682, 156, -1207, 2062, 2020, 105, 0, 70, 255),
    VTX(1671, 146, -1191, 2291, 1562, 105, 0, 70, 255),
    VTX(1488, 116, -1240, -708, -1654, 152, 0, 187, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00EC60[31] = {
    VTX(1554, 166, -1340, -2036, 1001, 152, 0, 187, 255),
    VTX(1543, 156, -1324, -1807, 543, 152, 0, 187, 255),
    VTX(1565, 176, -1357, -2265, 1459, 152, 0, 187, 255),
    VTX(1576, 186, -1374, -2494, 1917, 152, 0, 187, 255),
    VTX(1726, 196, -1274, 1146, 3852, 105, 0, 70, 255),
    VTX(1532, 146, -1307, -1578, 85, 152, 0, 187, 255),
    VTX(1499, 116, -1257, -891, -1288, 152, 0, 187, 255),
    VTX(1510, 126, -1274, -1120, -830, 152, 0, 187, 255),
    VTX(1521, 136, -1290, -1349, -372, 152, 0, 187, 255),
    VTX(1543, 156, -1324, -1807, 543, 0, 127, 0, 255),
    VTX(1532, 156, -1307, -1623, 177, 207, 89, 74, 255),
    VTX(1554, 166, -1340, -2036, 1001, 0, 127, 0, 255),
    VTX(1543, 166, -1324, -1852, 635, 207, 89, 74, 255),
    VTX(1565, 176, -1357, -2265, 1459, 0, 127, 0, 255),
    VTX(1554, 176, -1340, -2081, 1093, 207, 89, 74, 255),
    VTX(1576, 186, -1374, -2494, 1917, 0, 127, 0, 255),
    VTX(1565, 186, -1357, -2310, 1551, 207, 89, 74, 255),
    VTX(1532, 146, -1307, -1578, 85, 0, 127, 0, 255),
    VTX(1521, 146, -1290, -1394, -280, 207, 89, 74, 255),
    VTX(1477, 96, -1224, -433, -2203, 0, 127, 0, 255),
    VTX(1465, 96, -1207, -250, -2570, 207, 89, 74, 255),
    VTX(1488, 106, -1240, -662, -1746, 0, 127, 0, 255),
    VTX(1477, 106, -1224, -479, -2112, 207, 89, 74, 255),
    VTX(1499, 116, -1257, -891, -1288, 0, 127, 0, 255),
    VTX(1488, 116, -1240, -708, -1654, 207, 89, 74, 255),
    VTX(1510, 126, -1274, -1120, -830, 0, 127, 0, 255),
    VTX(1499, 126, -1257, -937, -1196, 207, 89, 74, 255),
    VTX(1521, 136, -1290, -1349, -372, 0, 127, 0, 255),
    VTX(1510, 136, -1274, -1165, -738, 207, 89, 74, 255),
    VTX(1588, 196, -1390, -2723, 2375, 0, 127, 0, 255),
    VTX(1576, 196, -1374, -2539, 2009, 207, 89, 74, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00EE50[6] = {
    VTX(1671, 136, -1191, 2337, 1471, 105, 0, 70, 255),
    VTX(1704, 166, -1240, 1650, 2844, 105, 0, 70, 255),
    VTX(1715, 176, -1257, 1421, 3302, 105, 0, 70, 255),
    VTX(1693, 156, -1224, 1879, 2386, 105, 0, 70, 255),
    VTX(1726, 186, -1274, 1192, 3760, 105, 0, 70, 255),
    VTX(1682, 146, -1207, 2108, 1928, 105, 0, 70, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00EEB0[1] = {
    VTX(1499, 126, -1257, -937, -1196, 152, 0, 187, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00EEC0[7] = {
    VTX(1554, 176, -1340, -2081, 1093, 152, 0, 187, 255),
    VTX(1543, 166, -1324, -1852, 635, 152, 0, 187, 255),
    VTX(1565, 186, -1357, -2310, 1551, 152, 0, 187, 255),
    VTX(1576, 196, -1374, -2539, 2009, 152, 0, 187, 255),
    VTX(1588, 196, -1390, -2723, 2375, 152, 0, 187, 255),
    VTX(1737, 196, -1290, 963, 4218, 105, 0, 70, 255),
    VTX(1532, 156, -1307, -1623, 177, 152, 0, 187, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00EF30[16] = {
    VTX(1510, 136, -1274, -1165, -738, 152, 0, 187, 255),
    VTX(1521, 146, -1290, -1394, -280, 152, 0, 187, 255),
    VTX(1682, 156, -1207, 2062, 2020, 207, 89, 74, 255),
    VTX(1693, 156, -1224, 1879, 2386, 0, 127, 0, 255),
    VTX(1532, 146, -1307, -1578, 85, 187, 0, 105, 255),
    VTX(1682, 146, -1207, 2108, 1928, 187, 0, 105, 255),
    VTX(1693, 166, -1224, 1833, 2478, 207, 89, 74, 255),
    VTX(1704, 166, -1240, 1650, 2844, 0, 127, 0, 255),
    VTX(1543, 156, -1324, -1807, 543, 187, 0, 105, 255),
    VTX(1693, 156, -1224, 1879, 2386, 187, 0, 105, 255),
    VTX(1704, 176, -1240, 1604, 2936, 207, 89, 74, 255),
    VTX(1715, 176, -1257, 1421, 3302, 0, 127, 0, 255),
    VTX(1554, 166, -1340, -2036, 1001, 187, 0, 105, 255),
    VTX(1704, 166, -1240, 1650, 2844, 187, 0, 105, 255),
    VTX(1715, 186, -1257, 1375, 3394, 207, 89, 74, 255),
    VTX(1726, 186, -1274, 1192, 3760, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00F030[8] = {
    VTX(1565, 176, -1357, -2265, 1459, 187, 0, 105, 255),
    VTX(1715, 176, -1257, 1421, 3302, 187, 0, 105, 255),
    VTX(1671, 146, -1191, 2291, 1562, 207, 89, 74, 255),
    VTX(1682, 146, -1207, 2108, 1928, 0, 127, 0, 255),
    VTX(1521, 136, -1290, -1349, -372, 187, 0, 105, 255),
    VTX(1671, 136, -1191, 2337, 1471, 187, 0, 105, 255),
    VTX(1615, 96, -1107, 3436, -727, 207, 89, 74, 255),
    VTX(1626, 96, -1124, 3253, -360, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00F0B0[8] = {
    VTX(1465, 86, -1207, -204, -2661, 187, 0, 105, 255),
    VTX(1615, 86, -1107, 3482, -818, 187, 0, 105, 255),
    VTX(1626, 106, -1124, 3207, -269, 207, 89, 74, 255),
    VTX(1637, 106, -1141, 3024, 97, 0, 127, 0, 255),
    VTX(1477, 96, -1224, -433, -2203, 187, 0, 105, 255),
    VTX(1626, 96, -1124, 3253, -360, 187, 0, 105, 255),
    VTX(1637, 116, -1141, 2978, 188, 207, 89, 74, 255),
    VTX(1649, 116, -1157, 2795, 555, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00F130[8] = {
    VTX(1488, 106, -1240, -662, -1746, 187, 0, 105, 255),
    VTX(1637, 106, -1141, 3024, 97, 187, 0, 105, 255),
    VTX(1649, 126, -1157, 2749, 646, 207, 89, 74, 255),
    VTX(1660, 126, -1174, 2566, 1013, 0, 127, 0, 255),
    VTX(1499, 116, -1257, -891, -1288, 187, 0, 105, 255),
    VTX(1649, 116, -1157, 2795, 555, 187, 0, 105, 255),
    VTX(1660, 136, -1174, 2520, 1104, 207, 89, 74, 255),
    VTX(1671, 136, -1191, 2337, 1471, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00F1B0[6] = {
    VTX(1510, 126, -1274, -1120, -830, 187, 0, 105, 255),
    VTX(1660, 126, -1174, 2566, 1013, 187, 0, 105, 255),
    VTX(1726, 196, -1274, 1146, 3852, 207, 89, 74, 255),
    VTX(1737, 196, -1290, 963, 4218, 0, 127, 0, 255),
    VTX(1576, 186, -1374, -2494, 1917, 187, 0, 105, 255),
    VTX(1726, 186, -1274, 1192, 3760, 187, 0, 105, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x00F210[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_00F578, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EB10[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 1, 0),
    gsSP1Triangle(5, 2, 6, 0),
    gsSP1Triangle(7, 8, 4, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EB10[6], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EB10[13], 8, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EC60[6], 1, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EE50[0], 6, 10),
    gsSP1Triangle(2, 0, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 11, 0),
    gsSP1Triangle(5, 12, 14, 0),
    gsSP1Triangle(6, 15, 13, 0),
    gsSP1Triangle(7, 10, 15, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EC60[0], 6, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EE50[4], 1, 6),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EEC0[0], 7, 7),
    gsSP1Triangle(0, 7, 2, 0),
    gsSP1Triangle(1, 8, 0, 0),
    gsSP1Triangle(2, 9, 3, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(4, 6, 12, 0),
    gsSP1Triangle(5, 13, 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EC60[5], 8, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EEB0[0], 1, 8),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EF30[0], 7, 9),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(2, 9, 3, 0),
    gsSP1Triangle(3, 10, 0, 0),
    gsSP1Triangle(4, 5, 11, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(5, 13, 14, 0),
    gsSP1Triangle(5, 14, 11, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EC60[11], 6, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EF30[6], 10, 6),
    gsSP1Triangle(0, 1, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 6, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSP1Triangle(4, 5, 14, 0),
    gsSP1Triangle(4, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EC60[16], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EF30[14], 1, 5),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00F030[0], 8, 6),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 7, 5, 0),
    gsSP1Triangle(1, 2, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 8, 0),
    gsSP1Triangle(3, 4, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EC60[20], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00F030[6], 1, 5),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00F0B0[0], 8, 6),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 7, 5, 0),
    gsSP1Triangle(1, 2, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 8, 0),
    gsSP1Triangle(3, 4, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EC60[24], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00F0B0[6], 1, 5),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00F130[0], 8, 6),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 7, 5, 0),
    gsSP1Triangle(1, 2, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 8, 0),
    gsSP1Triangle(3, 4, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00EC60[28], 3, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00F130[6], 1, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00F1B0[0], 6, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 3, 0),
    gsSP1Triangle(1, 2, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(2, 9, 6, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_00F578[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_00F578.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_00FD78[16] = {
    VTX(-3999, 0, 180, -12935, 0, 127, 0, 0, 255),
    VTX(-3999, 0, -799, 12152, 0, 95, 0, 83, 255),
    VTX(-3999, 40, 180, -12935, 1024, 127, 0, 0, 255),
    VTX(-3999, 40, -799, 12152, 1024, 127, 0, 0, 255),
    VTX(-3999, 0, 360, 5814, 0, 127, 0, 0, 255),
    VTX(-3999, 40, 360, 5814, 1024, 127, 0, 0, 255),
    VTX(-3999, 40, 800, -5449, 1024, 127, 0, 0, 255),
    VTX(-3999, 0, 800, -5449, 0, 127, 0, 0, 255),
    VTX(-3999, 40, -799, 12152, 1024, 130, 0, 0, 255),
    VTX(-3999, 0, -799, 12152, 0, 130, 0, 0, 255),
    VTX(-3999, 0, 180, -12935, 0, 130, 0, 0, 255),
    VTX(-3999, 40, 180, -12935, 1024, 130, 0, 0, 255),
    VTX(-3999, 0, 800, -5449, 0, 130, 0, 0, 255),
    VTX(-3999, 40, 360, 5814, 1024, 130, 0, 0, 255),
    VTX(-3999, 0, 360, 5814, 0, 130, 0, 0, 255),
    VTX(-3999, 40, 800, -5449, 1024, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00FE78[18] = {
    VTX(3200, 196, 0, 0, 0, 245, 126, 11, 255),
    VTX(3200, 196, 200, 1024, 0, 247, 126, 2, 255),
    VTX(4800, 200, 200, 1024, 4096, 197, 111, 0, 255),
    VTX(4800, 200, 0, 0, 4096, 197, 111, 0, 255),
    VTX(180, 0, 360, 1024, 6400, 0, 127, 0, 255),
    VTX(180, 0, 180, 0, 6400, 0, 127, 0, 255),
    VTX(-1169, 0, 180, 0, 2560, 0, 127, 0, 255),
    VTX(-1079, 0, 360, 1024, 2816, 0, 127, 0, 255),
    VTX(-2519, 0, 180, 0, -1279, 0, 127, 0, 255),
    VTX(-2339, 0, 360, 1024, -767, 0, 127, 0, 255),
    VTX(-2339, 0, 1800, 0, -3071, 0, 127, 0, 255),
    VTX(-2519, 0, 1980, 1024, -3583, 0, 127, 0, 255),
    VTX(-1079, 0, 1980, 1024, 512, 0, 127, 0, 255),
    VTX(-1079, 0, 1800, 0, 512, 0, 127, 0, 255),
    VTX(360, 0, 1980, 1024, 4608, 0, 127, 0, 255),
    VTX(-2339, 0, 1800, 1024, -1023, 0, 127, 0, 255),
    VTX(360, 0, 1980, 1024, -1535, 0, 127, 0, 255),
    VTX(-2519, 0, 360, 1024, -1279, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00FF98[4] = {
    VTX(1389, 35, -767, 1024, -146, 247, 126, 5, 255),
    VTX(901, -3, -16, 1041, -823, 253, 126, 2, 255),
    VTX(901, -3, -16, 1024, 1024, 253, 126, 2, 255),
    VTX(736, 0, 151, 1024, 0, 0, 126, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_00FFD8[5] = {
    VTX(360, 0, 360, 1024, 0, 0, 127, 0, 255),
    VTX(360, 0, 360, 1024, 0, 0, 127, 0, 255),
    VTX(-2519, 0, 360, 922, 0, 0, 127, 0, 255),
    VTX(180, 0, 180, 0, 0, 0, 127, 0, 255),
    VTX(-3199, 0, 180, 0, 2048, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010028[2] = {
    VTX(901, -3, -16, 0, 0, 253, 126, 2, 255),
    VTX(2051, 96, -7, 0, 0, 246, 126, 4, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010048[9] = {
    VTX(180, 0, 1800, 0, 4096, 0, 127, 0, 255),
    VTX(-2339, 0, 360, 1024, 3072, 0, 127, 0, 255),
    VTX(-2519, 0, 360, 0, 3072, 0, 127, 0, 255),
    VTX(-2519, 0, 1980, 0, -1535, 0, 127, 0, 255),
    VTX(360, 0, 360, 1024, 3072, 0, 127, 0, 255),
    VTX(180, 0, 360, 0, 3072, 0, 127, 0, 255),
    VTX(180, 0, 1800, 0, -1023, 0, 127, 0, 255),
    VTX(-3199, 0, 180, 0, -3213, 0, 127, 0, 255),
    VTX(-3199, 0, 360, 1024, -3213, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0100D8[10] = {
    VTX(1615, 86, -1107, 1024, 1024, 234, 121, 27, 255),
    VTX(1465, 86, -1207, 0, 1024, 9, 119, 41, 255),
    VTX(1260, 40, -899, 0, -37, 255, 125, 17, 255),
    VTX(1389, 35, -767, 989, 1365, 247, 126, 5, 255),
    VTX(1260, 40, -899, 0, 1536, 255, 125, 17, 255),
    VTX(800, 0, -199, 0, -753, 254, 126, 1, 255),
    VTX(800, 0, -199, 0, 996, 254, 126, 1, 255),
    VTX(600, 0, 0, 0, 0, 1, 126, 0, 255),
    VTX(901, -3, -16, 1024, 1024, 253, 126, 2, 255),
    VTX(600, 0, 0, 0, 0, 1, 126, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010178[11] = {
    VTX(736, 0, 151, 1024, 1024, 0, 126, 0, 255),
    VTX(600, 0, 0, 0, 858, 1, 126, 0, 255),
    VTX(600, 0, 0, 0, 1300, 1, 126, 0, 255),
    VTX(180, 0, 180, 0, 0, 0, 127, 0, 255),
    VTX(-2339, 0, 360, 922, 461, 0, 127, 0, 255),
    VTX(-2519, 0, 180, 0, 0, 0, 127, 0, 255),
    VTX(180, 0, 360, 717, -139, 0, 127, 0, 255),
    VTX(360, 0, 360, 1024, 232, 0, 127, 0, 255),
    VTX(-3999, 0, 180, 0, 0, 0, 127, 0, 255),
    VTX(-3999, 0, 360, 1024, 0, 0, 127, 0, 255),
    VTX(-3199, 0, 360, 1024, 2048, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010228[7] = {
    VTX(1120, 0, 151, 1024, 512, 252, 126, 4, 255),
    VTX(2160, 98, 176, 1024, 2048, 245, 126, 11, 255),
    VTX(2051, 96, -7, 0, 2048, 246, 126, 4, 255),
    VTX(736, 0, 151, 1024, 0, 0, 126, 0, 255),
    VTX(2160, 98, 176, 1024, 0, 245, 126, 11, 255),
    VTX(3200, 196, 200, 1024, 2048, 247, 126, 2, 255),
    VTX(3200, 196, 0, 0, 2048, 245, 126, 11, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010298[19] = {
    VTX(-6599, 1400, -999, -145, 18578, 48, 94, 69, 255),
    VTX(-7199, 1800, -1599, -4534, 22967, 31, 113, 49, 255),
    VTX(-7999, 1800, 0, -10385, 11264, 73, 101, 25, 255),
    VTX(-7399, 1400, 400, -5997, 8338, 92, 79, 37, 255),
    VTX(-6799, 200, 800, -1608, 5413, 111, 27, 54, 255),
    VTX(-5999, 200, -399, 4242, 14190, 72, 36, 97, 255),
    VTX(-4799, 1800, -1599, 13019, 22967, 7, 89, 90, 255),
    VTX(-4799, 2200, -2399, 13019, 28818, 14, 113, 55, 255),
    VTX(-4799, 200, -799, 13019, 17115, 16, 31, 121, 255),
    VTX(-9199, 1800, 4800, -19162, -23844, 88, 88, 22, 255),
    VTX(-8799, 1400, 4800, -16237, -23844, 104, 65, 30, 255),
    VTX(-8399, 200, 4800, -13311, -23844, 118, 19, 42, 255),
    VTX(-4799, 2200, -2399, -3364, 15506, 14, 113, 55, 255),
    VTX(-4799, 1800, -1599, -3364, 9655, 7, 89, 90, 255),
    VTX(-4399, 1800, -1599, -438, 9655, 26, 93, 81, 255),
    VTX(-4799, 200, -799, -3364, 3803, 16, 31, 121, 255),
    VTX(-6799, 0, 4800, -1608, -23844, 0, 127, 0, 255),
    VTX(-4799, 0, 800, 13019, 5413, 0, 127, 0, 255),
    VTX(-3199, 0, 180, 5266, -13604, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0103C8[20] = {
    VTX(-3999, 0, 800, -3656, 5413, 0, 127, 0, 255),
    VTX(-3999, 0, 360, -3656, 8631, 0, 127, 0, 255),
    VTX(-6799, 200, 4800, -1608, -23844, 145, 18, 201, 255),
    VTX(-6399, 1400, 4800, 1317, -23844, 158, 62, 209, 255),
    VTX(-4799, 200, 800, -3364, -7898, 191, 23, 151, 255),
    VTX(-4709, 1400, 1200, -2706, -10824, 201, 63, 162, 255),
    VTX(-1999, 200, -2399, 3803, -5997, 75, 39, 94, 255),
    VTX(-399, 1098, -3999, 15506, 5705, 15, 105, 69, 255),
    VTX(-2599, 1400, -3199, -584, -145, 62, 97, 52, 255),
    VTX(-3199, 200, -999, -4973, -16237, 74, 34, 97, 255),
    VTX(-3999, 200, -799, -584, -6436, 24, 31, 120, 255),
    VTX(-3599, 1800, -2099, 2341, 3072, 68, 92, 55, 255),
    VTX(1737, 196, -1290, 419, -2841, 237, 122, 26, 255),
    VTX(1763, 150, -1161, 607, -3786, 224, 113, 47, 255),
    VTX(1715, 176, -1257, 257, -3085, 226, 113, 47, 255),
    VTX(1726, 186, -1274, 338, -2963, 226, 113, 47, 255),
    VTX(1649, 116, -1157, -229, -3815, 226, 113, 47, 255),
    VTX(1704, 166, -1240, 175, -3206, 226, 113, 47, 255),
    VTX(1693, 156, -1224, 94, -3328, 226, 113, 47, 255),
    VTX(1637, 106, -1141, -310, -3937, 226, 113, 47, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010508[1] = {
    VTX(1671, 136, -1191, -67, -3572, 226, 113, 47, 255),
}; 

static u8 unaccounted_010518[16] = {
    0x06, 0x92, 0x00, 0x92, 0xFB, 0x49, 0x00, 0x00, 0x00, 0x0D, 0xF2, 0x86, 0xE2, 0x71, 0x2F, 0xFF, 
}; 

static Vtx old_kakariko_village_room_00Vtx_010528[10] = {
    VTX(1465, 86, -1207, -1568, -3450, 9, 119, 41, 255),
    VTX(1477, 96, -1224, -1487, -3328, 0, 109, 65, 255),
    VTX(1260, 40, -899, -3071, -5704, 255, 125, 17, 255),
    VTX(1576, 186, -1374, -757, -2233, 0, 109, 65, 255),
    VTX(1320, 200, -1399, -2632, -2047, 0, 115, 52, 255),
    VTX(1060, 35, -991, -4534, -5031, 241, 124, 20, 255),
    VTX(1488, 106, -1240, -1406, -3206, 0, 109, 65, 255),
    VTX(1499, 116, -1257, -1325, -3085, 0, 109, 65, 255),
    VTX(1532, 146, -1307, -1081, -2720, 0, 109, 65, 255),
    VTX(1737, 196, -1290, 419, -2841, 237, 122, 26, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0105C8[4] = {
    VTX(3200, 196, 1600, 11118, -3510, 247, 126, 0, 255),
    VTX(2000, 0, 2400, 2341, -9361, 250, 126, 0, 255),
    VTX(3200, 196, 200, 11118, 6729, 247, 126, 2, 255),
    VTX(2260, 98, 276, 4240, 6177, 244, 126, 6, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010608[17] = {
    VTX(1320, 0, 1831, -2636, -5200, 0, 127, 0, 255),
    VTX(5600, 1400, 1200, 11264, 5559, 183, 97, 223, 255),
    VTX(4800, 1800, 2400, 5413, -3217, 238, 113, 204, 255),
    VTX(4000, 1400, 2000, -438, -292, 219, 95, 182, 255),
    VTX(3200, 2200, 4000, -6289, -14920, 245, 116, 209, 255),
    VTX(3200, 196, 0, -10385, -6143, 245, 126, 11, 255),
    VTX(5600, 1400, 1200, 7168, -14920, 183, 97, 223, 255),
    VTX(5600, 1400, -1999, 7168, 8485, 179, 97, 24, 255),
    VTX(4800, 200, -1599, 1317, 5559, 191, 100, 41, 255),
    VTX(3200, 196, 200, -10385, -7606, 247, 126, 2, 255),
    VTX(4800, 200, 800, 1317, -11994, 192, 85, 190, 255),
    VTX(1370, 196, -3199, 806, -1169, 0, 126, 0, 255),
    VTX(1370, 196, -3439, 806, 585, 0, 127, 0, 255),
    VTX(1210, 196, -3439, -363, 585, 0, 127, 0, 255),
    VTX(-4799, 0, 800, -3364, -7898, 0, 127, 0, 255),
    VTX(-3999, 0, 180, 2487, -3364, 0, 127, 0, 255),
    VTX(-3999, 0, 360, 2487, -4680, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010718[7] = {
    VTX(4800, 200, -1599, -730, -9800, 191, 100, 41, 255),
    VTX(5600, 1400, -1999, 5120, -6874, 179, 97, 24, 255),
    VTX(-799, 1400, -4799, -21210, 5413, 16, 119, 40, 255),
    VTX(-399, 1098, -3999, -18285, -438, 15, 105, 69, 255),
    VTX(1600, 396, -3199, -3656, -6289, 0, 45, 118, 255),
    VTX(3200, 396, -3199, 8046, -6289, 210, 54, 104, 255),
    VTX(4000, 1498, -3599, 13897, -3364, 209, 96, 67, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010788[12] = {
    VTX(-2799, 200, 2600, -2047, 3511, 85, 15, 165, 255),
    VTX(-3399, 1400, 2500, -6436, 4242, 99, 36, 187, 255),
    VTX(-3999, 200, 800, -3656, 5413, 62, 20, 148, 255),
    VTX(-4106, 1400, 1200, -4436, 2487, 67, 47, 161, 255),
    VTX(-1599, 2200, 4800, -13750, -8484, 44, 78, 168, 255),
    VTX(800, 2200, 4800, 3803, -8484, 250, 108, 191, 255),
    VTX(400, 1800, 3900, 878, -1901, 241, 91, 171, 255),
    VTX(2600, 1800, 3200, 16969, 3218, 225, 97, 182, 255),
    VTX(2000, 200, -1983, 2341, 2224, 0, 126, 0, 255),
    VTX(1800, 200, -2183, 878, 3686, 0, 126, 0, 255),
    VTX(3200, 196, -3199, 11118, 11118, 0, 126, 0, 255),
    VTX(1320, 200, -2183, -2632, 3686, 0, 126, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010848[1] = {
    VTX(-2339, 0, 360, -1023, 14336, 0, 127, 0, 255),
}; 

static u8 unaccounted_010858[80] = {
    0xFC, 0x91, 0x00, 0x00, 0x03, 0x30, 0x00, 0x00, 0xF1, 0xDF, 0x17, 0x8E, 0x00, 0x7F, 0x00, 0xFF, 
    0xFB, 0xC9, 0x00, 0x00, 0x01, 0x68, 0x00, 0x00, 0xFC, 0x01, 0x1C, 0x00, 0x00, 0x7F, 0x00, 0xFF, 
    0xFA, 0x89, 0x00, 0x00, 0x03, 0x30, 0x00, 0x00, 0xF1, 0xDF, 0x23, 0x1C, 0x00, 0x7F, 0x00, 0xFF, 
    0xFE, 0x71, 0x00, 0x00, 0x03, 0x30, 0x00, 0x00, 0xF1, 0xDF, 0x0C, 0xE4, 0x00, 0x7F, 0x00, 0xFF, 
    0xFF, 0x39, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x00, 0xED, 0x6D, 0x08, 0x72, 0x00, 0x7F, 0x00, 0xFF, 
}; 

static Vtx old_kakariko_village_room_00Vtx_0108A8[6] = {
    VTX(-2339, 0, 1800, -9215, 14336, 0, 127, 0, 255),
    VTX(-2079, 0, 1016, -4755, 12857, 0, 127, 0, 255),
    VTX(-199, 0, 1400, -6939, 2162, 0, 127, 0, 255),
    VTX(-399, 0, 1600, -8077, 3300, 0, 127, 0, 255),
    VTX(-1079, 0, 1800, -9215, 7168, 0, 127, 0, 255),
    VTX(-879, 0, 1600, -8077, 6030, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010908[1] = {
    VTX(736, 0, 1031, -6907, 651, 0, 127, 0, 255),
}; 

static u8 unaccounted_010918[48] = {
    0x04, 0x60, 0x00, 0x00, 0x04, 0x7F, 0x00, 0x00, 0xEF, 0xFD, 0xFF, 0x1E, 0x00, 0x7F, 0x00, 0xFF, 
    0x02, 0x58, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x31, 0x25, 0xE0, 0x01, 0x01, 0x7E, 0x00, 0xFF, 
    0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x6E, 0xE0, 0x01, 0x00, 0x7F, 0x00, 0xFF, 
}; 

static Vtx old_kakariko_village_room_00Vtx_010948[6] = {
    VTX(180, 0, 180, 9509, -9508, 0, 127, 0, 255),
    VTX(736, 0, 151, -6907, 7087, 0, 126, 0, 255),
    VTX(536, 0, 831, -8370, 2114, 0, 127, 0, 255),
    VTX(360, 0, 1980, -9654, -6289, 0, 127, 0, 255),
    VTX(536, 0, 1351, -8370, -1689, 0, 127, 0, 255),
    VTX(736, 0, 2031, -6907, -6662, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0109A8[1] = {
    VTX(-1879, 0, 1600, -8077, 11719, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0109B8[5] = {
    VTX(360, 0, 1980, 585, 12142, 0, 127, 0, 255),
    VTX(0, 0, 3000, -2047, 4681, 0, 127, 0, 255),
    VTX(-1399, 0, 3000, -12287, 4681, 0, 127, 0, 255),
    VTX(1320, 0, 351, -2636, 5625, 250, 126, 5, 255),
    VTX(-1199, 0, 1016, -4755, 7851, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010A08[23] = {
    VTX(-2519, 0, 1980, 0, 8046, 0, 127, 0, 255),
    VTX(-2799, 0, 2600, 0, -8776, 0, 127, 0, 255),
    VTX(-79, 0, -199, 7607, -6728, 0, 127, 0, 255),
    VTX(-399, 0, -783, 5266, -2457, 0, 126, 4, 255),
    VTX(0, 196, -3199, -12287, 11118, 253, 126, 7, 255),
    VTX(1120, 200, -1983, -4095, 2224, 250, 126, 9, 255),
    VTX(860, 35, -1191, -5997, -3568, 241, 124, 20, 255),
    VTX(600, 0, -783, -7898, -6553, 4, 126, 12, 255),
    VTX(0, 196, -3199, 8192, 15214, 253, 126, 7, 255),
    VTX(-1999, 0, -2399, -6436, 9362, 255, 126, 1, 255),
    VTX(-1879, 0, -783, -5558, -2457, 0, 127, 0, 255),
    VTX(-1399, 0, -783, -2047, -2457, 0, 127, 0, 255),
    VTX(-879, 0, -783, 1755, -2457, 255, 126, 3, 255),
    VTX(2000, 200, -1599, 2341, -584, 0, 126, 0, 255),
    VTX(1800, 200, -1399, 878, -2047, 0, 126, 2, 255),
    VTX(1615, 86, -1107, -473, -4180, 234, 121, 27, 255),
    VTX(1389, 35, -767, -2130, -6667, 247, 126, 5, 255),
    VTX(-1079, 0, -199, 293, -6728, 0, 127, 0, 255),
    VTX(-1169, 0, 180, -365, -9508, 0, 127, 0, 255),
    VTX(-399, 0, 0, 5266, -8191, 0, 127, 0, 255),
    VTX(-879, 0, 0, 1755, -8191, 0, 127, 0, 255),
    VTX(-1879, 0, 0, -5558, -8191, 0, 127, 0, 255),
    VTX(-3199, 0, -999, -15213, -877, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010B78[1] = {
    VTX(1120, 0, 151, -4099, 7087, 252, 126, 4, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010B88[8] = {
    VTX(-3999, 200, -799, 2487, 3803, 24, 31, 120, 255),
    VTX(-6799, 0, 800, -1608, 5413, 0, 127, 0, 255),
    VTX(-8399, 0, 4800, -13311, -23844, 0, 127, 0, 255),
    VTX(-5999, 0, -399, 4242, 14190, 0, 127, 0, 255),
    VTX(-4799, 0, -799, 13019, 17115, 0, 127, 0, 255),
    VTX(-3199, 0, -999, 5266, -4973, 0, 127, 0, 255),
    VTX(-3999, 0, -799, -584, -6436, 0, 127, 0, 255),
    VTX(-3999, 0, 180, -584, -13604, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010C08[8] = {
    VTX(-2799, 0, 2600, 5120, -7752, 0, 127, 0, 255),
    VTX(-3199, 0, 360, 2194, 8631, 0, 127, 0, 255),
    VTX(-4709, 1400, 1200, 13677, 2487, 201, 63, 162, 255),
    VTX(-4799, 200, 800, 13019, 5413, 191, 23, 151, 255),
    VTX(-5999, 1800, 4800, 4242, -23844, 172, 85, 217, 255),
    VTX(-4619, 2200, 1600, 14334, -438, 209, 80, 171, 255),
    VTX(-4106, 1400, 1200, 1707, -10824, 67, 47, 161, 255),
    VTX(-3999, 200, 800, 2487, -7898, 62, 20, 148, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010C88[12] = {
    VTX(-4619, 2200, 1600, -2049, -13750, 209, 80, 171, 255),
    VTX(-4212, 2200, 1600, 927, -13750, 72, 54, 168, 255),
    VTX(0, 396, -3199, 18432, -145, 20, 38, 119, 255),
    VTX(-799, 1400, -4799, 12581, 11557, 16, 119, 40, 255),
    VTX(-3199, 1800, -3999, -4973, 5705, 50, 113, 25, 255),
    VTX(-3999, 2200, -3199, -10824, -145, 53, 112, 26, 255),
    VTX(-3599, 1800, -2099, -7898, -8191, 68, 92, 55, 255),
    VTX(-3199, 200, -999, 5266, -4973, 74, 34, 97, 255),
    VTX(-4399, 1800, -1599, -3510, -584, 26, 93, 81, 255),
    VTX(-3999, 2200, -3199, -584, 11118, 53, 112, 26, 255),
    VTX(-4799, 2200, -2399, -6436, 5266, 14, 113, 55, 255),
    VTX(3200, 196, 0, 11118, -12287, 245, 126, 11, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010D48[1] = {
    VTX(1626, 96, -1124, -392, -4058, 226, 113, 47, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010D58[1] = {
    VTX(1660, 126, -1174, -148, -3693, 226, 113, 47, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010D68[6] = {
    VTX(1615, 86, -1107, -473, -4180, 234, 121, 27, 255),
    VTX(1588, 196, -1390, -676, -2111, 0, 125, 18, 255),
    VTX(1565, 176, -1357, -838, -2354, 0, 109, 65, 255),
    VTX(1554, 166, -1340, -919, -2476, 0, 109, 65, 255),
    VTX(1543, 156, -1324, -1000, -2598, 0, 109, 65, 255),
    VTX(1120, 200, -1599, -4095, -584, 232, 124, 8, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010DC8[2] = {
    VTX(1510, 126, -1274, -1244, -2963, 0, 109, 65, 255),
    VTX(1521, 136, -1290, -1162, -2841, 0, 109, 65, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010DE8[1] = {
    VTX(800, 0, -583, -6436, -8015, 252, 126, 3, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010DF8[2] = {
    VTX(1320, 0, 831, -2636, 2114, 250, 126, 0, 255),
    VTX(1320, 0, 1351, -2636, -1689, 254, 126, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010E18[1] = {
    VTX(2160, 98, 176, 3509, 6908, 245, 126, 11, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010E28[22] = {
    VTX(1120, 0, 2031, -4099, -6662, 0, 127, 0, 255),
    VTX(4800, 200, 800, 5413, 8485, 192, 85, 190, 255),
    VTX(3200, 396, 1600, -6289, 2633, 196, 36, 152, 255),
    VTX(6400, 1800, 1600, 17115, 2633, 214, 115, 229, 255),
    VTX(2000, 200, 2400, -15066, -3217, 203, 35, 148, 255),
    VTX(2600, 1800, 3200, -10678, -9069, 225, 97, 182, 255),
    VTX(4800, 200, 0, 1317, -6143, 197, 111, 0, 255),
    VTX(3200, 196, -1599, -10385, 5559, 0, 126, 0, 255),
    VTX(3200, 196, -3199, -10385, 17262, 0, 126, 0, 255),
    VTX(4800, 200, 200, 1317, -7606, 197, 111, 0, 255),
    VTX(3200, 196, 1600, -10385, -17846, 247, 126, 0, 255),
    VTX(6400, 1800, 1600, 13019, -17846, 214, 115, 229, 255),
    VTX(6400, 1800, -2399, 13019, 11410, 214, 118, 18, 255),
    VTX(1250, 196, -3439, -70, 585, 0, 127, 0, 255),
    VTX(1250, 196, -3199, -70, -1169, 0, 126, 0, 255),
    VTX(1410, 196, -3639, 1099, 2048, 0, 127, 0, 255),
    VTX(1410, 196, -3439, 1099, 585, 0, 127, 0, 255),
    VTX(1210, 196, -3639, -363, 2048, 0, 127, 0, 255),
    VTX(-4394, 0, 271, -401, -4030, 0, 127, 0, 255),
    VTX(-4799, 0, -799, -3364, 3803, 0, 127, 0, 255),
    VTX(-3999, 0, 800, 2487, -7898, 0, 127, 0, 255),
    VTX(-3999, 0, -799, 2487, 3803, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_010F88[8] = {
    VTX(4000, 1498, -3599, -6582, 4827, 209, 96, 67, 255),
    VTX(3200, 396, -3199, -12433, 1902, 210, 54, 104, 255),
    VTX(6400, 1800, -2399, 10971, -3949, 214, 118, 18, 255),
    VTX(4800, 1800, -3999, -730, 7753, 225, 113, 47, 255),
    VTX(2800, 1098, -3999, 5120, -438, 238, 101, 74, 255),
    VTX(2400, 1400, -4799, 2194, 5413, 238, 114, 52, 255),
    VTX(0, 396, -3199, -15359, -6289, 20, 38, 119, 255),
    VTX(4800, 1800, -3999, 19749, -438, 225, 113, 47, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011008[16] = {
    VTX(-1499, 1400, 3900, 7461, -5997, 38, 68, 157, 255),
    VTX(-1399, 200, 3000, 8192, 585, 25, 28, 136, 255),
    VTX(-3999, 2200, 2400, -10824, 4974, 104, 43, 198, 255),
    VTX(-1599, 2200, 4800, 6729, -12580, 44, 78, 168, 255),
    VTX(-3399, 1400, 2500, 731, -7021, 99, 36, 187, 255),
    VTX(-2799, 200, 2600, 5120, -7752, 85, 15, 165, 255),
    VTX(-4212, 2200, 1600, -5216, -438, 72, 54, 168, 255),
    VTX(-3999, 2200, 2400, -3656, -6289, 104, 43, 198, 255),
    VTX(-1499, 1400, 3900, -13018, -1901, 38, 68, 157, 255),
    VTX(3200, 2200, 4000, 21358, -2632, 245, 116, 209, 255),
    VTX(0, 200, 3000, -2047, 4681, 235, 37, 138, 255),
    VTX(-1399, 200, 3000, -12287, 4681, 25, 28, 136, 255),
    VTX(2000, 200, 2400, 12581, 9070, 203, 35, 148, 255),
    VTX(3200, 196, -1599, 11118, -584, 0, 126, 0, 255),
    VTX(1370, 196, -3199, -2265, 11118, 0, 126, 0, 255),
    VTX(1250, 196, -3199, -3142, 11118, 0, 126, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011108[1] = {
    VTX(-1879, 0, 816, -3617, 11719, 0, 127, 0, 255),
}; 

static u8 unaccounted_011118[16] = {
    0x00, 0xB4, 0x00, 0x00, 0x01, 0x68, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00, 0x00, 0x7F, 0x00, 0xFF, 
}; 

static Vtx old_kakariko_village_room_00Vtx_011128[1] = {
    VTX(-1079, 0, 1016, -4755, 7168, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011138[5] = {
    VTX(180, 0, 1800, -9215, 0, 0, 127, 0, 255),
    VTX(-1199, 0, 1400, -6939, 7851, 0, 127, 0, 255),
    VTX(-2079, 0, 1400, -6939, 12857, 0, 127, 0, 255),
    VTX(-1399, 0, 1600, -8077, 8988, 0, 127, 0, 255),
    VTX(-1079, 0, 1400, -6939, 7168, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011188[1] = {
    VTX(736, 0, 1151, -6907, -226, 0, 127, 0, 255),
}; 

static u8 unaccounted_011198[16] = {
    0x04, 0x60, 0x00, 0x00, 0x04, 0x07, 0x00, 0x00, 0xEF, 0xFD, 0x02, 0x8B, 0x00, 0x7F, 0x00, 0xFF, 
}; 

static Vtx old_kakariko_village_room_00Vtx_0111A8[2] = {
    VTX(-199, 0, -199, 6729, -6728, 0, 127, 0, 255),
    VTX(-79, 0, -583, 7607, -3919, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0111C8[6] = {
    VTX(360, 0, 360, -9654, 5559, 0, 127, 0, 255),
    VTX(536, 0, 351, -8370, 5625, 0, 127, 0, 255),
    VTX(536, 0, 1831, -8370, -5200, 0, 127, 0, 255),
    VTX(-1079, 0, 1980, -9946, 12142, 0, 127, 0, 255),
    VTX(736, 0, 2031, 3332, 11769, 0, 127, 0, 255),
    VTX(2000, 0, 2400, 12581, 9070, 250, 126, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011228[1] = {
    VTX(-1399, 0, 0, -2047, -8191, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011238[1] = {
    VTX(1120, 0, 2031, 6140, 11769, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011248[13] = {
    VTX(-1399, 0, 3000, 8192, 585, 0, 127, 0, 255),
    VTX(-1079, 0, 1980, 10533, 8046, 0, 127, 0, 255),
    VTX(-2799, 0, 2600, -2047, 3511, 0, 127, 0, 255),
    VTX(-2519, 0, 1980, 2048, -4241, 0, 127, 0, 255),
    VTX(-2519, 0, 360, 2048, 7607, 0, 127, 0, 255),
    VTX(-3199, 0, 360, -2925, 7607, 0, 127, 0, 255),
    VTX(-199, 0, -583, 6729, -3919, 0, 127, 0, 255),
    VTX(120, 0, -783, 9070, -2457, 0, 126, 4, 255),
    VTX(600, 0, -783, 12581, -2457, 4, 126, 12, 255),
    VTX(-2079, 0, -583, -7021, -3919, 0, 127, 0, 255),
    VTX(-2519, 0, 180, -10239, -9508, 0, 127, 0, 255),
    VTX(-3199, 0, 180, -15213, -9508, 0, 127, 0, 255),
    VTX(-2079, 0, -199, -7021, -6728, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011318[2] = {
    VTX(-1199, 0, -583, -584, -3919, 0, 127, 0, 255),
    VTX(-1079, 0, -583, 293, -3919, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011338[2] = {
    VTX(2051, 96, -7, 2710, -12226, 246, 126, 4, 255),
    VTX(901, -3, -16, -5696, -12166, 253, 126, 2, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011358[2] = {
    VTX(800, 0, -199, -6436, -10824, 254, 126, 1, 255),
    VTX(-1199, 0, -199, -584, -6728, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011378[16] = {
    VTX(-399, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(-199, 0, -199, 0, 0, 0, 127, 0, 255),
    VTX(-199, 0, -583, 0, 2048, 0, 127, 0, 255),
    VTX(-399, 0, -583, 1024, 2048, 0, 127, 0, 255),
    VTX(-879, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(-879, 0, -583, 1024, 2048, 0, 127, 0, 255),
    VTX(-1079, 0, -583, 0, 2048, 0, 127, 0, 255),
    VTX(-1079, 0, -199, 0, 0, 0, 127, 0, 255),
    VTX(-879, 0, -199, 1024, 2048, 0, 127, 0, 255),
    VTX(-879, 0, 0, 0, 2048, 0, 127, 0, 255),
    VTX(-399, 0, 0, 0, 0, 0, 127, 0, 255),
    VTX(-399, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(600, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(800, 0, -199, 0, 0, 254, 126, 1, 255),
    VTX(800, 0, -583, 0, 2048, 252, 126, 3, 255),
    VTX(600, 0, -583, 1024, 2048, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011478[4] = {
    VTX(-1399, 0, 1400, 1024, 0, 0, 127, 0, 255),
    VTX(-399, 0, 1016, 1024, 2048, 0, 127, 0, 255),
    VTX(-399, 0, 1400, 1024, 0, 0, 127, 0, 255),
    VTX(-879, 0, 1400, 1024, 2048, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0114B8[4] = {
    VTX(-879, 0, 1400, 1024, 0, 0, 127, 0, 255),
    VTX(-1879, 0, 1400, 1024, 0, 0, 127, 0, 255),
    VTX(600, 0, -583, 1024, 2048, 0, 127, 0, 255),
    VTX(-1399, 0, 1016, 1024, 2048, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0114F8[4] = {
    VTX(120, 0, -199, 1024, 2048, 0, 127, 0, 255),
    VTX(120, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(-399, 0, -583, 1024, 2048, 0, 127, 0, 255),
    VTX(1120, 0, 1831, 1024, 2048, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011538[7] = {
    VTX(736, 0, 1351, 1024, 2048, 0, 127, 0, 255),
    VTX(736, 0, 1351, 1024, 0, 0, 127, 0, 255),
    VTX(1320, 200, -1599, 1024, 2048, 0, 126, 1, 255),
    VTX(1800, 200, -1599, 1024, 0, 0, 126, 1, 255),
    VTX(1800, 200, -1983, 1024, 2048, 0, 127, 0, 255),
    VTX(1320, 200, -1599, 1024, 0, 0, 126, 1, 255),
    VTX(736, 0, 1831, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0115A8[4] = {
    VTX(-1399, 0, -583, 1024, 2048, 0, 127, 0, 255),
    VTX(-1399, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(-1879, 0, -199, 1024, 2048, 0, 127, 0, 255),
    VTX(-1879, 0, -199, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0115E8[4] = {
    VTX(1120, 0, 831, 1024, 2048, 0, 127, 0, 255),
    VTX(736, 0, 351, 1024, 0, 0, 127, 0, 255),
    VTX(736, 0, 831, 1024, 0, 0, 127, 0, 255),
    VTX(736, 0, 351, 1024, 2048, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011628[12] = {
    VTX(-1199, 0, 1400, 0, 0, 0, 127, 0, 255),
    VTX(-1199, 0, 1016, 0, 2048, 0, 127, 0, 255),
    VTX(-1399, 0, 1016, 1024, 2048, 0, 127, 0, 255),
    VTX(-399, 0, 816, 0, 2048, 0, 127, 0, 255),
    VTX(-879, 0, 816, 0, 0, 0, 127, 0, 255),
    VTX(-879, 0, 1016, 1024, 0, 0, 127, 0, 255),
    VTX(-199, 0, 1400, 0, 0, 0, 127, 0, 255),
    VTX(-199, 0, 1016, 0, 2048, 0, 127, 0, 255),
    VTX(-399, 0, 1016, 1024, 2048, 0, 127, 0, 255),
    VTX(-879, 0, 1600, 0, 2048, 0, 127, 0, 255),
    VTX(-399, 0, 1600, 0, 0, 0, 127, 0, 255),
    VTX(-399, 0, 1400, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0116E8[12] = {
    VTX(-879, 0, 1016, 1024, 2048, 0, 127, 0, 255),
    VTX(-1079, 0, 1016, 0, 2048, 0, 127, 0, 255),
    VTX(-1079, 0, 1400, 0, 0, 0, 127, 0, 255),
    VTX(-1879, 0, 1016, 1024, 2048, 0, 127, 0, 255),
    VTX(-2079, 0, 1016, 0, 2048, 0, 127, 0, 255),
    VTX(-2079, 0, 1400, 0, 0, 0, 127, 0, 255),
    VTX(600, 0, -783, 0, 2048, 4, 126, 12, 255),
    VTX(120, 0, -783, 0, 0, 0, 126, 4, 255),
    VTX(120, 0, -583, 1024, 0, 0, 127, 0, 255),
    VTX(-1399, 0, 816, 0, 2048, 0, 127, 0, 255),
    VTX(-1879, 0, 816, 0, 0, 0, 127, 0, 255),
    VTX(-1879, 0, 1016, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0117A8[12] = {
    VTX(120, 0, 0, 0, 2048, 0, 127, 0, 255),
    VTX(600, 0, 0, 0, 0, 1, 126, 0, 255),
    VTX(600, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(120, 0, -583, 1024, 2048, 0, 127, 0, 255),
    VTX(-79, 0, -583, 0, 2048, 0, 127, 0, 255),
    VTX(-79, 0, -199, 0, 0, 0, 127, 0, 255),
    VTX(-399, 0, -783, 0, 2048, 0, 126, 4, 255),
    VTX(-879, 0, -783, 0, 0, 255, 126, 3, 255),
    VTX(-879, 0, -583, 1024, 0, 0, 127, 0, 255),
    VTX(1320, 0, 1831, 0, 2048, 0, 127, 0, 255),
    VTX(1320, 0, 1351, 0, 0, 254, 126, 0, 255),
    VTX(1120, 0, 1351, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011868[22] = {
    VTX(536, 0, 1351, 0, 2048, 0, 127, 0, 255),
    VTX(536, 0, 1831, 0, 0, 0, 127, 0, 255),
    VTX(736, 0, 1831, 1024, 0, 0, 127, 0, 255),
    VTX(1120, 0, 1351, 1024, 2048, 0, 127, 0, 255),
    VTX(1120, 0, 1151, 0, 2048, 0, 127, 0, 255),
    VTX(736, 0, 1151, 0, 0, 0, 127, 0, 255),
    VTX(1320, 200, -1399, 0, 2048, 0, 115, 52, 255),
    VTX(1588, 196, -1390, 0, 912, 0, 125, 18, 255),
    VTX(1800, 200, -1399, 0, 0, 0, 126, 2, 255),
    VTX(1800, 200, -1599, 1024, 0, 0, 126, 1, 255),
    VTX(2000, 200, -1599, 0, 0, 0, 126, 0, 255),
    VTX(2000, 200, -1983, 0, 2048, 0, 126, 0, 255),
    VTX(1800, 200, -1983, 1024, 2048, 0, 127, 0, 255),
    VTX(1800, 200, -2183, 0, 2048, 0, 126, 0, 255),
    VTX(1320, 200, -2183, 0, 0, 0, 126, 0, 255),
    VTX(1320, 200, -1983, 1024, 0, 0, 127, 0, 255),
    VTX(1320, 200, -1983, 1024, 2048, 0, 127, 0, 255),
    VTX(1120, 200, -1983, 0, 2048, 250, 126, 9, 255),
    VTX(1120, 200, -1599, 0, 0, 232, 124, 8, 255),
    VTX(736, 0, 2031, 0, 0, 0, 127, 0, 255),
    VTX(1120, 0, 2031, 0, 2048, 0, 127, 0, 255),
    VTX(1120, 0, 1831, 1024, 2048, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0119C8[12] = {
    VTX(-1399, 0, -783, 0, 2048, 0, 127, 0, 255),
    VTX(-1879, 0, -783, 0, 0, 0, 127, 0, 255),
    VTX(-1879, 0, -583, 1024, 0, 0, 127, 0, 255),
    VTX(-1199, 0, -199, 0, 0, 0, 127, 0, 255),
    VTX(-1199, 0, -583, 0, 2048, 0, 127, 0, 255),
    VTX(-1399, 0, -583, 1024, 2048, 0, 127, 0, 255),
    VTX(-1879, 0, 0, 0, 2048, 0, 127, 0, 255),
    VTX(-1399, 0, 0, 0, 0, 0, 127, 0, 255),
    VTX(-1399, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(-1879, 0, -583, 1024, 2048, 0, 127, 0, 255),
    VTX(-2079, 0, -583, 0, 2048, 0, 127, 0, 255),
    VTX(-2079, 0, -199, 0, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011A88[12] = {
    VTX(1320, 0, 831, 0, 2048, 250, 126, 0, 255),
    VTX(1320, 0, 351, 0, 0, 250, 126, 5, 255),
    VTX(1120, 0, 351, 1024, 0, 0, 127, 0, 255),
    VTX(1120, 0, 351, 1024, 2048, 0, 127, 0, 255),
    VTX(1120, 0, 151, 0, 2048, 252, 126, 4, 255),
    VTX(736, 0, 151, 0, 0, 0, 126, 0, 255),
    VTX(736, 0, 1031, 0, 0, 0, 127, 0, 255),
    VTX(1120, 0, 1031, 0, 2048, 0, 127, 0, 255),
    VTX(1120, 0, 831, 1024, 2048, 0, 127, 0, 255),
    VTX(536, 0, 351, 0, 2048, 0, 127, 0, 255),
    VTX(536, 0, 831, 0, 0, 0, 127, 0, 255),
    VTX(736, 0, 831, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011B48[15] = {
    VTX(-1079, 0, 1400, 0, 1024, 0, 127, 0, 255),
    VTX(-879, 0, 1600, 1024, 0, 0, 127, 0, 255),
    VTX(-879, 0, 1400, 1024, 1024, 0, 127, 0, 255),
    VTX(-1879, 0, 1016, 1024, 982, 0, 127, 0, 255),
    VTX(-1879, 0, 816, 0, 982, 0, 127, 0, 255),
    VTX(-2079, 0, 1016, 1024, 0, 0, 127, 0, 255),
    VTX(-1399, 0, 1400, 1024, 1024, 0, 127, 0, 255),
    VTX(-1399, 0, 1600, 0, 1024, 0, 127, 0, 255),
    VTX(-1199, 0, 1400, 1024, 0, 0, 127, 0, 255),
    VTX(-2079, 0, 1400, 0, 1024, 0, 127, 0, 255),
    VTX(-1879, 0, 1600, 1024, 0, 0, 127, 0, 255),
    VTX(-1879, 0, 1400, 1024, 1024, 0, 127, 0, 255),
    VTX(-1199, 0, 1016, 0, 1024, 0, 127, 0, 255),
    VTX(-1399, 0, 816, 1024, 0, 0, 127, 0, 255),
    VTX(-1399, 0, 1016, 1024, 1024, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011C38[5] = {
    VTX(1800, 200, -1599, 1024, 1024, 0, 126, 1, 255),
    VTX(-2079, 0, -199, 0, 1024, 0, 127, 0, 255),
    VTX(-1399, 0, -199, 1024, 1024, 0, 127, 0, 255),
    VTX(-1199, 0, -583, 0, 1024, 0, 127, 0, 255),
    VTX(-1879, 0, -583, 1024, 982, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011C88[5] = {
    VTX(-879, 0, -583, 1024, 982, 0, 127, 0, 255),
    VTX(800, 0, -583, 0, 1024, 252, 126, 3, 255),
    VTX(120, 0, -583, 1024, 982, 0, 127, 0, 255),
    VTX(-1079, 0, -199, 0, 1024, 0, 127, 0, 255),
    VTX(-399, 0, -199, 1024, 1024, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011CD8[5] = {
    VTX(1120, 0, 1031, 0, 1024, 0, 127, 0, 255),
    VTX(1120, 0, 1351, 1024, 982, 0, 127, 0, 255),
    VTX(1120, 200, -1599, 0, 1024, 232, 124, 8, 255),
    VTX(1320, 200, -1983, 1024, 982, 0, 127, 0, 255),
    VTX(2000, 200, -1983, 0, 1024, 0, 126, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011D28[5] = {
    VTX(736, 0, 1151, 0, 1024, 0, 127, 0, 255),
    VTX(736, 0, 831, 1024, 1024, 0, 127, 0, 255),
    VTX(736, 0, 151, 0, 1024, 0, 126, 0, 255),
    VTX(1120, 0, 351, 1024, 982, 0, 127, 0, 255),
    VTX(1120, 0, 2031, 0, 1024, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011D78[5] = {
    VTX(736, 0, 1831, 1024, 1024, 0, 127, 0, 255),
    VTX(-199, 0, -583, 0, 1024, 0, 127, 0, 255),
    VTX(-879, 0, 1016, 1024, 982, 0, 127, 0, 255),
    VTX(-199, 0, 1016, 0, 1024, 0, 127, 0, 255),
    VTX(600, 0, -199, 1024, 1024, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011DC8[2] = {
    VTX(-79, 0, -199, 0, 1024, 0, 127, 0, 255),
    VTX(-399, 0, 1400, 1024, 1024, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011DE8[10] = {
    VTX(1800, 200, -1399, 0, 1024, 0, 126, 2, 255),
    VTX(2000, 200, -1599, 1024, 0, 0, 126, 0, 255),
    VTX(-1879, 0, 0, 1024, 0, 0, 127, 0, 255),
    VTX(-1879, 0, -199, 1024, 1024, 0, 127, 0, 255),
    VTX(-1399, 0, 0, 0, 1024, 0, 127, 0, 255),
    VTX(-1199, 0, -199, 1024, 0, 0, 127, 0, 255),
    VTX(-1399, 0, -783, 1024, 0, 0, 127, 0, 255),
    VTX(-1399, 0, -583, 1024, 1024, 0, 127, 0, 255),
    VTX(-1879, 0, -783, 0, 982, 0, 127, 0, 255),
    VTX(-2079, 0, -583, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011E88[10] = {
    VTX(-879, 0, -783, 0, 982, 255, 126, 3, 255),
    VTX(-1079, 0, -583, 1024, 0, 0, 127, 0, 255),
    VTX(600, 0, -783, 1024, 0, 4, 126, 12, 255),
    VTX(600, 0, -583, 1024, 1024, 0, 127, 0, 255),
    VTX(120, 0, -783, 0, 982, 0, 126, 4, 255),
    VTX(-79, 0, -583, 1024, 0, 0, 127, 0, 255),
    VTX(-879, 0, 0, 1024, 0, 0, 127, 0, 255),
    VTX(-879, 0, -199, 1024, 1024, 0, 127, 0, 255),
    VTX(-399, 0, 0, 0, 1024, 0, 127, 0, 255),
    VTX(-199, 0, -199, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011F28[10] = {
    VTX(1320, 0, 831, 1024, 0, 250, 126, 0, 255),
    VTX(1120, 0, 831, 1024, 1024, 0, 127, 0, 255),
    VTX(1320, 0, 1351, 0, 982, 254, 126, 0, 255),
    VTX(1120, 0, 1151, 1024, 0, 0, 127, 0, 255),
    VTX(1320, 200, -1399, 1024, 0, 0, 115, 52, 255),
    VTX(1320, 200, -1599, 1024, 1024, 0, 126, 1, 255),
    VTX(1320, 200, -2183, 0, 982, 0, 126, 0, 255),
    VTX(1120, 200, -1983, 1024, 0, 250, 126, 9, 255),
    VTX(1800, 200, -2183, 1024, 0, 0, 126, 0, 255),
    VTX(1800, 200, -1983, 1024, 1024, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_011FC8[10] = {
    VTX(536, 0, 1351, 1024, 0, 0, 127, 0, 255),
    VTX(736, 0, 1351, 1024, 1024, 0, 127, 0, 255),
    VTX(536, 0, 831, 0, 1024, 0, 127, 0, 255),
    VTX(736, 0, 1031, 1024, 0, 0, 127, 0, 255),
    VTX(536, 0, 351, 1024, 0, 0, 127, 0, 255),
    VTX(736, 0, 351, 1024, 1024, 0, 127, 0, 255),
    VTX(1320, 0, 351, 0, 982, 250, 126, 5, 255),
    VTX(1120, 0, 151, 1024, 0, 252, 126, 4, 255),
    VTX(1320, 0, 1831, 1024, 0, 0, 127, 0, 255),
    VTX(1120, 0, 1831, 1024, 1024, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_012068[10] = {
    VTX(536, 0, 1831, 0, 1024, 0, 127, 0, 255),
    VTX(736, 0, 2031, 1024, 0, 0, 127, 0, 255),
    VTX(-399, 0, -783, 1024, 0, 0, 126, 4, 255),
    VTX(-399, 0, -583, 1024, 1024, 0, 127, 0, 255),
    VTX(-879, 0, 816, 0, 982, 0, 127, 0, 255),
    VTX(-1079, 0, 1016, 1024, 0, 0, 127, 0, 255),
    VTX(-399, 0, 816, 1024, 0, 0, 127, 0, 255),
    VTX(-399, 0, 1016, 1024, 1024, 0, 127, 0, 255),
    VTX(600, 0, 0, 0, 1024, 1, 126, 0, 255),
    VTX(800, 0, -199, 1024, 0, 254, 126, 1, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_012108[4] = {
    VTX(120, 0, 0, 1024, 0, 0, 127, 0, 255),
    VTX(120, 0, -199, 1024, 1024, 0, 127, 0, 255),
    VTX(-399, 0, 1600, 0, 1024, 0, 127, 0, 255),
    VTX(-199, 0, 1400, 1024, 0, 0, 127, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_012148[42] = {
    VTX(1410, 196, -3439, 7249, -450, 168, 0, 168, 255),
    VTX(1410, 396, -3439, 7249, 573, 227, 227, 138, 255),
    VTX(1410, 396, -3639, 7249, 573, 184, 184, 73, 255),
    VTX(1410, 196, -3639, 7249, -450, 168, 0, 89, 255),
    VTX(1210, 196, -3639, 6221, -386, 89, 0, 89, 255),
    VTX(1210, 396, -3639, 6221, 637, 73, 184, 73, 255),
    VTX(1210, 396, -3439, 6221, 637, 38, 219, 143, 255),
    VTX(1250, 316, -3439, 6426, 214, 38, 219, 143, 255),
    VTX(1370, 316, -3439, 7043, 176, 205, 205, 154, 255),
    VTX(1370, 196, -3439, 7043, -437, 200, 0, 144, 255),
    VTX(1250, 196, -3439, 6426, -399, 57, 0, 144, 255),
    VTX(1210, 196, -3439, 6221, -386, 89, 0, 168, 255),
    VTX(1370, 196, -3199, 7043, -437, 130, 0, 0, 255),
    VTX(1370, 316, -3199, 7043, 176, 168, 168, 0, 255),
    VTX(1250, 316, -3199, 6426, 214, 89, 168, 0, 255),
    VTX(3200, 396, -3199, -4095, 1024, 210, 54, 104, 255),
    VTX(0, 396, -3199, 0, 1024, 20, 38, 119, 255),
    VTX(1250, 316, -3199, 6426, 214, 0, 0, 127, 255),
    VTX(1370, 316, -3199, 7043, 176, 0, 0, 127, 255),
    VTX(3200, 196, -3199, 16448, -1023, 209, 0, 117, 255),
    VTX(2000, 200, 2400, -7167, -1023, 203, 35, 148, 255),
    VTX(0, 200, 3000, 3072, -1023, 235, 37, 138, 255),
    VTX(3200, 396, 1600, 1024, 1004, 196, 36, 152, 255),
    VTX(3200, 196, 1600, 1024, -19, 194, 0, 148, 255),
    VTX(400, 1056, -5999, -24, -1037, 0, 104, 72, 255),
    VTX(-1316, 1056, -5999, -1086, -948, 227, 100, 71, 255),
    VTX(2800, 1056, -5999, 1460, -1162, 36, 106, 59, 255),
    VTX(2200, 3331, -8999, 1265, 964, 17, 93, 84, 255),
    VTX(3400, 1056, -7199, 1883, -571, 61, 95, 56, 255),
    VTX(400, 2194, -7799, 76, 165, 252, 102, 75, 255),
    VTX(-1399, 3331, -8999, -961, 1151, 218, 94, 76, 255),
    VTX(-1999, 200, -2399, 2048, 1024, 75, 39, 94, 255),
    VTX(-3199, 200, -999, -4095, 1024, 74, 34, 97, 255),
    VTX(-3999, 200, 800, 1024, 1024, 62, 20, 148, 255),
    VTX(-2799, 200, 2600, -5119, 1024, 85, 15, 165, 255),
    VTX(-4799, 200, 800, 5120, 1024, 191, 23, 151, 255),
    VTX(-1399, 200, 3000, -12287, 1024, 25, 28, 136, 255),
    VTX(-3999, 200, -799, -8191, 1024, 24, 31, 120, 255),
    VTX(-4799, 200, -799, -12287, 1024, 16, 31, 121, 255),
    VTX(-5999, 200, -399, 9594, 1024, 72, 36, 97, 255),
    VTX(-6799, 200, 800, 2340, 1024, 111, 27, 54, 255),
    VTX(-8399, 200, 4800, -18012, 1024, 118, 19, 42, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0123E8[14] = {
    VTX(1250, 196, -3199, 6426, -399, 127, 0, 0, 255),
    VTX(3200, 196, -3199, -4095, 0, 209, 0, 117, 255),
    VTX(4800, 200, -1599, 4096, 20, 191, 100, 41, 255),
    VTX(0, 196, -3199, 0, 0, 24, 0, 124, 255),
    VTX(1250, 196, -3199, 6426, -399, 0, 0, 127, 255),
    VTX(1600, 396, -3199, 8224, 512, 0, 45, 118, 255),
    VTX(1370, 196, -3199, 7043, -437, 0, 0, 127, 255),
    VTX(3200, 396, -3199, 16448, 0, 210, 54, 104, 255),
    VTX(2000, 0, 2400, -7167, -2047, 203, 0, 143, 255),
    VTX(0, 0, 3000, 3072, -2047, 239, 0, 132, 255),
    VTX(-1399, 0, 3000, 10240, -2047, 18, 0, 132, 255),
    VTX(-1399, 200, 3000, 10240, -1023, 25, 28, 136, 255),
    VTX(2000, 0, 2400, 7168, -1023, 203, 0, 143, 255),
    VTX(2000, 200, 2400, 7168, 0, 203, 35, 148, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_0124C8[5] = {
    VTX(4800, 200, 800, -7167, 0, 192, 85, 190, 255),
    VTX(1900, 2194, -7499, 991, -67, 19, 102, 72, 255),
    VTX(-1099, 2194, -7499, -864, 88, 237, 101, 74, 255),
    VTX(400, 3562, -9242, 166, 1238, 247, 96, 82, 255),
    VTX(5600, 1056, -8399, 3296, -64, 51, 87, 76, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_012518[19] = {
    VTX(-2599, 1056, -7199, -1828, -259, 201, 89, 70, 255),
    VTX(-3999, 1056, -8399, -2642, 434, 197, 87, 70, 255),
    VTX(-1999, 0, -2399, 2048, 0, 74, 0, 103, 255),
    VTX(0, 196, -3199, 12288, 1024, 24, 0, 124, 255),
    VTX(0, 396, -3199, 12288, 2048, 20, 38, 119, 255),
    VTX(-3199, 0, -999, -4095, 0, 67, 0, 108, 255),
    VTX(-3999, 0, 800, 1024, 0, 60, 0, 145, 255),
    VTX(-4799, 0, 800, 5120, 0, 190, 0, 149, 255),
    VTX(-2799, 0, 2600, -5119, 0, 75, 0, 155, 255),
    VTX(-6799, 0, 4800, 15360, 0, 144, 0, 200, 255),
    VTX(-6799, 200, 4800, 15360, 1024, 145, 18, 201, 255),
    VTX(-1399, 0, 3000, -12287, 0, 18, 0, 132, 255),
    VTX(-3999, 0, -799, -8191, 0, 95, 0, 83, 255),
    VTX(-4799, 0, -799, -12287, 0, 20, 0, 125, 255),
    VTX(-5999, 0, -399, 9594, 0, 77, 0, 101, 255),
    VTX(-4799, 0, -799, 15360, 0, 20, 0, 125, 255),
    VTX(-4799, 200, -799, 15360, 1024, 16, 31, 121, 255),
    VTX(-6799, 0, 800, 2340, 0, 112, 0, 59, 255),
    VTX(-8399, 0, 4800, -18012, 0, 117, 0, 47, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x012648[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_013BB8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00FD78[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(7, 4, 6, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 15, 13, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_014BB8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00FE78[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(6, 9, 7, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00FE78[8], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00FE78[12], 6, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010048[0], 9, 7),
    gsSP1Triangle(1, 3, 7, 0),
    gsSP1Triangle(1, 7, 2, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(4, 9, 10, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(6, 0, 14, 0),
    gsSP1Triangle(6, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00FF98[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0100D8[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_00FFD8[0], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010178[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(4, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010028[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010228[0], 7, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 5, 2, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_0163B8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010298[0], 15, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 0, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsSP1Triangle(1, 0, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(0, 5, 8, 0),
    gsSP1Triangle(0, 8, 6, 0),
    gsSP1Triangle(3, 2, 9, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(4, 3, 10, 0),
    gsSP1Triangle(4, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010298[13], 6, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010B88[0], 8, 6),
    gsSP1Triangle(0, 2, 6, 0),
    gsSP1Triangle(0, 6, 1, 0),
    gsSP1Triangle(3, 4, 7, 0),
    gsSP1Triangle(3, 7, 8, 0),
    gsSP1Triangle(4, 9, 7, 0),
    gsSP1Triangle(4, 10, 9, 0),
    gsSP1Triangle(5, 11, 12, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[0], 6, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010C08[0], 8, 6),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(1, 0, 7, 0),
    gsSP1Triangle(2, 3, 8, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 8, 0),
    gsSP1Triangle(4, 5, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[5], 7, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010C08[6], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010C88[0], 8, 8),
    gsSP1Triangle(0, 8, 9, 0),
    gsSP1Triangle(0, 9, 7, 0),
    gsSP1Triangle(1, 10, 2, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(2, 12, 3, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(4, 1, 3, 0),
    gsSP1Triangle(4, 3, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[10], 10, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[15], 1, 10),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010C88[7], 5, 11),
    gsSP1Triangle(0, 11, 1, 0),
    gsSP1Triangle(0, 1, 12, 0),
    gsSP1Triangle(1, 13, 14, 0),
    gsSP1Triangle(1, 14, 12, 0),
    gsSP1Triangle(2, 3, 15, 0),
    gsSP1Triangle(3, 10, 15, 0),
    gsSP1Triangle(4, 7, 3, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(6, 9, 3, 0),
    gsSP1Triangle(7, 8, 3, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[13], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[19], 1, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010528[0], 7, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010D48[0], 1, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010D68[0], 6, 10),
    gsSP1Triangle(1, 9, 0, 0),
    gsSP1Triangle(0, 9, 10, 0),
    gsSP1Triangle(2, 6, 4, 0),
    gsSP1Triangle(2, 3, 6, 0),
    gsSP1Triangle(3, 8, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(5, 11, 6, 0),
    gsSP1Triangle(6, 12, 5, 0),
    gsSP1Triangle(6, 13, 12, 0),
    gsSP1Triangle(6, 14, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[15], 1, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[18], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010508[0], 2, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010528[4], 1, 5),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010528[6], 4, 6),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[14], 1, 10),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010D68[1], 1, 11),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010DC8[0], 2, 12),
    gsSP1Triangle(0, 9, 1, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(6, 7, 5, 0),
    gsSP1Triangle(7, 12, 5, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSP1Triangle(4, 3, 0, 0),
    gsSP1Triangle(5, 13, 8, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[16], 1, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010508[0], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010528[4], 1, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010528[8], 1, 4),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0105C8[0], 4, 5),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010D58[0], 1, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010D68[4], 1, 10),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010DF8[0], 3, 11),
    gsSP1Triangle(0, 9, 1, 0),
    gsSP1Triangle(2, 9, 0, 0),
    gsSP1Triangle(4, 10, 3, 0),
    gsSP1Triangle(5, 7, 6, 0),
    gsSP1Triangle(6, 7, 11, 0),
    gsSP1Triangle(6, 11, 12, 0),
    gsSP1Triangle(7, 8, 11, 0),
    gsSP1Triangle(8, 7, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0105C8[1], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010608[0], 6, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010608[8], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010DF8[1], 1, 8),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010E28[0], 7, 9),
    gsSP1Triangle(0, 8, 1, 0),
    gsSP1Triangle(1, 9, 0, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 4, 0),
    gsSP1Triangle(3, 12, 2, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(4, 11, 13, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(5, 3, 4, 0),
    gsSP1Triangle(5, 4, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010608[5], 8, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010E28[6], 8, 8),
    gsSP1Triangle(0, 8, 3, 0),
    gsSP1Triangle(0, 3, 9, 0),
    gsSP1Triangle(1, 2, 8, 0),
    gsSP1Triangle(1, 8, 11, 0),
    gsSP1Triangle(2, 3, 8, 0),
    gsSP1Triangle(3, 10, 9, 0),
    gsSP1Triangle(4, 12, 5, 0),
    gsSP1Triangle(4, 5, 11, 0),
    gsSP1Triangle(5, 1, 11, 0),
    gsSP1Triangle(1, 13, 14, 0),
    gsSP1Triangle(1, 14, 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010608[11], 6, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010E28[13], 9, 6),
    gsSP1Triangle(0, 1, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(1, 8, 10, 0),
    gsSP1Triangle(1, 10, 6, 0),
    gsSP1Triangle(1, 9, 8, 0),
    gsSP1Triangle(2, 6, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 13, 5, 0),
    gsSP1Triangle(3, 5, 11, 0),
    gsSP1Triangle(4, 14, 12, 0),
    gsSP1Triangle(4, 12, 11, 0),
    gsSP1Triangle(5, 4, 11, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010718[0], 7, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010F88[0], 8, 7),
    gsSP1Triangle(0, 1, 7, 0),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(1, 10, 7, 0),
    gsSP1Triangle(2, 3, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 4, 11, 0),
    gsSP1Triangle(3, 13, 4, 0),
    gsSP1Triangle(4, 5, 11, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(6, 14, 12, 0),
    gsSP1Triangle(6, 12, 11, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010788[0], 7, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011008[0], 9, 7),
    gsSP1Triangle(0, 1, 7, 0),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(1, 10, 7, 0),
    gsSP1Triangle(2, 3, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 11, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010788[5], 7, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011008[8], 8, 7),
    gsSP1Triangle(0, 8, 2, 0),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(1, 10, 7, 0),
    gsSP1Triangle(2, 11, 9, 0),
    gsSP1Triangle(2, 9, 1, 0),
    gsSP1Triangle(3, 12, 5, 0),
    gsSP1Triangle(4, 5, 13, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(6, 4, 13, 0),
    gsSP1Triangle(6, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010788[8], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010848[0], 6, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0108A8[2], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0109B8[4], 1, 8),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[13], 1, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011008[13], 1, 10),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011108[0], 4, 11),
    gsSP1Triangle(0, 9, 10, 0),
    gsSP1Triangle(1, 11, 4, 0),
    gsSP1Triangle(1, 4, 3, 0),
    gsSP1Triangle(2, 5, 12, 0),
    gsSP1Triangle(2, 12, 3, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(4, 8, 13, 0),
    gsSP1Triangle(4, 13, 2, 0),
    gsSP1Triangle(5, 6, 12, 0),
    gsSP1Triangle(6, 7, 14, 0),
    gsSP1Triangle(6, 14, 12, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010848[0], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0108A8[0], 6, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0109A8[0], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011108[0], 1, 8),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011138[0], 5, 9),
    gsSP1Triangle(1, 11, 2, 0),
    gsSP1Triangle(1, 2, 0, 0),
    gsSP1Triangle(2, 8, 0, 0),
    gsSP1Triangle(3, 4, 9, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSP1Triangle(4, 5, 9, 0),
    gsSP1Triangle(5, 6, 12, 0),
    gsSP1Triangle(6, 13, 10, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(5, 12, 7, 0),
    gsSP1Triangle(5, 7, 1, 0),
    gsSP1Triangle(7, 11, 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0105C8[3], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010908[0], 5, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0109B8[3], 1, 6),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[2], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[19], 1, 8),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010DF8[0], 2, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011188[0], 3, 11),
    gsSP1Triangle(1, 11, 2, 0),
    gsSP1Triangle(1, 2, 12, 0),
    gsSP1Triangle(2, 10, 9, 0),
    gsSP1Triangle(2, 9, 12, 0),
    gsSP1Triangle(0, 6, 9, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(4, 7, 13, 0),
    gsSP1Triangle(4, 13, 8, 0),
    gsSP1Triangle(5, 4, 8, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010908[0], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010948[0], 6, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0109B8[0], 2, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[18], 2, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011188[0], 1, 11),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0111C8[0], 4, 12),
    gsSP1Triangle(1, 10, 9, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP1Triangle(3, 13, 12, 0),
    gsSP1Triangle(4, 3, 12, 0),
    gsSP1Triangle(3, 5, 11, 0),
    gsSP1Triangle(3, 11, 0, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(5, 4, 14, 0),
    gsSP1Triangle(6, 14, 4, 0),
    gsSP1Triangle(7, 15, 8, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0105C8[3], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0109B8[0], 5, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010E18[0], 1, 6),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011128[0], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011138[1], 1, 8),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011138[4], 1, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0111C8[3], 3, 10),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011238[0], 1, 13),
    gsSP1Triangle(3, 2, 10, 0),
    gsSP1Triangle(2, 11, 1, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP1Triangle(2, 13, 11, 0),
    gsSP1Triangle(4, 0, 6, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(5, 9, 7, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0111A8[0], 2, 4),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011248[0], 8, 6),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 8, 6, 0),
    gsSP1Triangle(1, 9, 10, 0),
    gsSP1Triangle(1, 10, 11, 0),
    gsSP1Triangle(2, 5, 12, 0),
    gsSP1Triangle(2, 12, 4, 0),
    gsSP1Triangle(3, 12, 5, 0),
    gsSP1Triangle(3, 5, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010788[11], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[3], 8, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[12], 1, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[22], 1, 10),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010D68[5], 1, 11),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011008[15], 1, 12),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011248[7], 3, 13),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(3, 2, 5, 0),
    gsSP1Triangle(2, 0, 12, 0),
    gsSP1Triangle(4, 11, 3, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(1, 13, 6, 0),
    gsSP1Triangle(6, 13, 14, 0),
    gsSP1Triangle(6, 7, 9, 0),
    gsSP1Triangle(6, 9, 1, 0),
    gsSP1Triangle(7, 15, 8, 0),
    gsSP1Triangle(7, 10, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0103C8[12], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010528[5], 1, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[6], 2, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[9], 1, 4),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[11], 6, 5),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010C88[11], 1, 11),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010DE8[0], 1, 12),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011008[13], 1, 13),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011318[0], 2, 14),
    gsSP1Triangle(6, 5, 14, 0),
    gsSP1Triangle(6, 14, 15, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsSP1Triangle(3, 12, 1, 0),
    gsSP1Triangle(3, 1, 2, 0),
    gsSP1Triangle(7, 11, 13, 0),
    gsSP1Triangle(7, 8, 11, 0),
    gsSP1Triangle(8, 0, 11, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010528[2], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010528[4], 2, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[6], 1, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[9], 3, 4),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[17], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010D68[5], 1, 8),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010DE8[0], 1, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011318[0], 2, 10),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011358[0], 2, 12),
    gsSP1Triangle(2, 1, 8, 0),
    gsSP1Triangle(2, 8, 3, 0),
    gsSP1Triangle(0, 2, 9, 0),
    gsSP1Triangle(0, 9, 12, 0),
    gsSP1Triangle(5, 6, 4, 0),
    gsSP1Triangle(7, 11, 10, 0),
    gsSP1Triangle(7, 10, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010A08[16], 7, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010C88[11], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011228[0], 1, 8),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011248[9], 4, 9),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011338[0], 2, 13),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011358[1], 1, 15),
    gsSP1Triangle(2, 4, 8, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(2, 8, 5, 0),
    gsSP1Triangle(2, 5, 10, 0),
    gsSP1Triangle(4, 1, 15, 0),
    gsSP1Triangle(4, 15, 8, 0),
    gsSP1Triangle(5, 12, 10, 0),
    gsSP1Triangle(6, 10, 12, 0),
    gsSP1Triangle(6, 11, 10, 0),
    gsSP1Triangle(6, 12, 9, 0),
    gsSP1Triangle(0, 13, 7, 0),
    gsSP1Triangle(0, 14, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0109B8[3], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010B78[0], 1, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_010E18[0], 1, 2),
    gsSP1Triangle(1, 0, 2, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_015BB8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011378[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011478[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011628[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0114B8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0116E8[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0114F8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0117A8[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011538[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011868[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011538[3], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011868[10], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0115A8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0119C8[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0115E8[0], 4, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011A88[0], 12, 4),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_0153B8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011B48[0], 15, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011C38[0], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011DE8[0], 10, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011C88[0], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011E88[0], 10, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011CD8[0], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011F28[0], 10, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011D28[0], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011FC8[0], 10, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011D78[0], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012068[0], 10, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_011DC8[0], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012108[0], 4, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_0143B8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsSP1Triangle(4, 2, 5, 0),
    gsSP1Triangle(2, 1, 6, 0),
    gsSP1Triangle(2, 6, 5, 0),
    gsSP1Triangle(7, 1, 8, 0),
    gsSP1Triangle(0, 9, 1, 0),
    gsSP1Triangle(9, 8, 1, 0),
    gsSP1Triangle(7, 6, 1, 0),
    gsSP1Triangle(10, 11, 6, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 11, 0),
    gsSP1Triangle(7, 10, 6, 0),
    gsSP1Triangle(12, 13, 8, 0),
    gsSP1Triangle(12, 8, 9, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[7], 2, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[10], 1, 2),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[13], 5, 3),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0123E8[0], 6, 8),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(1, 4, 0, 0),
    gsSP1Triangle(2, 0, 4, 0),
    gsSP1Triangle(2, 4, 8, 0),
    gsSP1Triangle(5, 9, 10, 0),
    gsSP1Triangle(6, 11, 12, 0),
    gsSP1Triangle(6, 12, 7, 0),
    gsSP1Triangle(6, 7, 13, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[17], 7, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0123E8[5], 9, 7),
    gsSP1Triangle(0, 1, 7, 0),
    gsSP1Triangle(1, 8, 7, 0),
    gsSP1Triangle(2, 9, 7, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSP1Triangle(5, 6, 14, 0),
    gsSP1Triangle(5, 14, 15, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[22], 9, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0124C8[0], 5, 9),
    gsSP1Triangle(1, 0, 9, 0),
    gsSP1Triangle(2, 10, 7, 0),
    gsSP1Triangle(3, 2, 11, 0),
    gsSP1Triangle(2, 7, 11, 0),
    gsSP1Triangle(2, 4, 10, 0),
    gsSP1Triangle(4, 6, 10, 0),
    gsSP1Triangle(5, 12, 7, 0),
    gsSP1Triangle(5, 7, 10, 0),
    gsSP1Triangle(6, 13, 5, 0),
    gsSP1Triangle(6, 5, 10, 0),
    gsSP1Triangle(7, 12, 8, 0),
    gsSP1Triangle(7, 8, 11, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[25], 1, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[30], 6, 1),
    gsSPVertex(&old_kakariko_village_room_00Vtx_0124C8[2], 1, 7),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012518[0], 8, 8),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(1, 8, 7, 0),
    gsSP1Triangle(1, 9, 8, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(4, 14, 15, 0),
    gsSP1Triangle(4, 15, 6, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[32], 6, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012518[5], 8, 6),
    gsSP1Triangle(2, 9, 7, 0),
    gsSP1Triangle(2, 7, 1, 0),
    gsSP1Triangle(3, 8, 10, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(4, 12, 9, 0),
    gsSP1Triangle(4, 9, 2, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSP1Triangle(5, 6, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012148[37], 5, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_012518[12], 7, 5),
    gsSP1Triangle(1, 6, 5, 0),
    gsSP1Triangle(1, 5, 0, 0),
    gsSP1Triangle(2, 7, 8, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(3, 10, 7, 0),
    gsSP1Triangle(3, 7, 2, 0),
    gsSP1Triangle(4, 11, 10, 0),
    gsSP1Triangle(4, 10, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_013BB8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_013BB8.rgb5a1.inc.c"
};

u64 old_kakariko_village_room_00Tex_0143B8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_0143B8.rgb5a1.inc.c"
};

u64 old_kakariko_village_room_00Tex_014BB8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_014BB8.rgb5a1.inc.c"
};

u64 old_kakariko_village_room_00Tex_0153B8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_0153B8.rgb5a1.inc.c"
};

u64 old_kakariko_village_room_00Tex_015BB8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_015BB8.rgb5a1.inc.c"
};

u64 old_kakariko_village_room_00Tex_0163B8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_0163B8.rgb5a1.inc.c"
};

static Vtx old_kakariko_village_room_00Vtx_016BB8[12] = {
    VTX(3200, 396, -1619, 22016, 3072, 130, 0, 0, 255),
    VTX(3200, 396, -3199, -18431, 3072, 130, 0, 0, 255),
    VTX(3200, 196, -3199, -18431, -2047, 130, 0, 0, 255),
    VTX(3200, 196, -1619, 22016, -2047, 130, 0, 0, 255),
    VTX(3200, 196, 1600, 18432, -2047, 130, 0, 0, 255),
    VTX(3200, 396, 1600, 18432, 3072, 130, 0, 0, 255),
    VTX(3200, 396, 240, -16383, 3072, 130, 0, 0, 255),
    VTX(3200, 196, 240, -16383, -2047, 130, 0, 0, 255),
    VTX(3200, 196, -39, 20480, -2047, 130, 0, 0, 255),
    VTX(3200, 396, -39, 20480, 3072, 130, 0, 0, 255),
    VTX(3200, 396, -1619, -19967, 3072, 130, 0, 0, 255),
    VTX(3200, 196, -1619, -19967, -2047, 130, 0, 0, 255),
}; 

static Vtx old_kakariko_village_room_00Vtx_016C78[16] = {
    VTX(3240, 196, 200, 0, 0, 0, 0, 130, 255),
    VTX(3200, 196, 200, 1024, 0, 0, 0, 130, 255),
    VTX(3200, 396, 200, 1024, 2048, 0, 0, 130, 255),
    VTX(3240, 396, 200, 0, 2048, 0, 0, 130, 255),
    VTX(3200, 196, 0, 0, 0, 0, 0, 127, 255),
    VTX(3240, 196, 0, 1024, 0, 0, 0, 127, 255),
    VTX(3240, 396, 0, 1024, 2048, 0, 0, 127, 255),
    VTX(3200, 396, 0, 0, 2048, 0, 0, 127, 255),
    VTX(3200, 196, 0, 1024, 0, 130, 0, 0, 255),
    VTX(3200, 396, 0, 1024, 2048, 130, 0, 0, 255),
    VTX(3200, 396, -39, 0, 2048, 130, 0, 0, 255),
    VTX(3200, 196, -39, 0, 0, 130, 0, 0, 255),
    VTX(3200, 196, 240, 1024, 0, 130, 0, 0, 255),
    VTX(3200, 396, 240, 1024, 2048, 130, 0, 0, 255),
    VTX(3200, 396, 200, 0, 2048, 130, 0, 0, 255),
    VTX(3200, 196, 200, 0, 0, 130, 0, 0, 255),
}; 

Gfx old_kakariko_village_room_00Dlist0x016D78[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_016ED8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_kakariko_village_room_00Vtx_016BB8[0], 12, 0),
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
    gsDPLoadTextureBlock(old_kakariko_village_room_00Tex_0176D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&old_kakariko_village_room_00Vtx_016C78[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 old_kakariko_village_room_00Tex_016ED8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_016ED8.rgb5a1.inc.c"
};

u64 old_kakariko_village_room_00Tex_0176D8[] = {
#include "assets/scenes/overworld/old_kakariko_village//old_kakariko_village_room_00Tex_0176D8.rgb5a1.inc.c"
};

Gfx old_kakariko_village_room_00Dlist0x0186D8[] = {
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x000F50),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x002A28),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x004500),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x006038),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x008360),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x009E38),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x00B950),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x00DC78),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x00F210),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x012648),
    gsSPDisplayList(old_kakariko_village_room_00Dlist0x016D78),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_018738[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


