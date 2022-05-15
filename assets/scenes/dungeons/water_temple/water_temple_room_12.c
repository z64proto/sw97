#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_12.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_12Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_12Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_12Set0000Cmd02;
static SCmdMesh water_temple_room_12Set0000Cmd03;
static SCmdObjectList water_temple_room_12Set0000Cmd04;
static SCmdEndMarker water_temple_room_12Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx water_temple_room_12Vtx_000060[12];
static Vtx water_temple_room_12Vtx_000120[32];
static Vtx water_temple_room_12Vtx_000320[18];
static Vtx water_temple_room_12Vtx_000440[32];
static Vtx water_temple_room_12Vtx_000640[4];
static Vtx water_temple_room_12Vtx_000680[5];
static Vtx water_temple_room_12Vtx_0006D0[24];
static Vtx water_temple_room_12Vtx_000850[24];
static Vtx water_temple_room_12Vtx_0009D0[32];
static Vtx water_temple_room_12Vtx_000BD0[7];
static Vtx water_temple_room_12Vtx_000C40[8];
static Vtx water_temple_room_12Vtx_000CC0[10];
static Vtx water_temple_room_12Vtx_000D60[4];
static Vtx water_temple_room_12Vtx_000DA0[16];
static Vtx water_temple_room_12Vtx_000EA0[5];
static Vtx water_temple_room_12Vtx_000EF0[16];
static Vtx water_temple_room_12Vtx_000FF0[20];
static Vtx water_temple_room_12Vtx_001130[8];

static SCmdEchoSettings water_temple_room_12Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_12Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_12Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_12Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_12MeshHeader0x000040 }; // 0x0018

static SCmdObjectList water_temple_room_12Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_12ObjectList0x000030 }; // 0x0020

static SCmdEndMarker water_temple_room_12Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 water_temple_room_12ObjectList0x000030[1] = {
	OBJECT_BOX,
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 water_temple_room_12MeshHeader0x000040 = { { 0 }, 0x01, (u32)&water_temple_room_12MeshDListEntry0x00004C, (u32)&(water_temple_room_12MeshDListEntry0x00004C) + sizeof(water_temple_room_12MeshDListEntry0x00004C) }; 

MeshEntry0 water_temple_room_12MeshDListEntry0x00004C[1] = {
	{ (u32)water_temple_room_12Dlist0x008078, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx water_temple_room_12Vtx_000060[12] = {
    VTX(-1200, 180, 700, 0, -1024, 42, 42, 42, 255),
    VTX(-1200, 100, 700, 0, 1024, 157, 249, 194, 255),
    VTX(-1260, 100, 700, 2048, 1024, 157, 249, 194, 255),
    VTX(-1260, 180, 700, 2048, -1024, 42, 42, 42, 255),
    VTX(540, 130, -230, 2048, -1024, 157, 249, 194, 255),
    VTX(540, 220, -230, 2048, 1024, 42, 42, 42, 255),
    VTX(540, 220, -350, 0, 1024, 42, 42, 42, 255),
    VTX(540, 130, -350, 0, -1024, 157, 249, 194, 255),
    VTX(-1590, 130, -240, 0, -1024, 157, 249, 194, 255),
    VTX(-1590, 220, -240, 0, 1024, 42, 42, 42, 255),
    VTX(-1590, 220, -120, 2048, 1024, 42, 42, 42, 255),
    VTX(-1590, 130, -120, 2048, -1024, 157, 249, 194, 255),
}; 

static Vtx water_temple_room_12Vtx_000120[32] = {
    VTX(540, 0, -320, 0, 512, 157, 249, 194, 255),
    VTX(560, 0, -320, 0, 1024, 0, 0, 0, 255),
    VTX(560, 100, -320, 2560, 1024, 0, 0, 0, 255),
    VTX(540, 100, -320, 2560, 512, 157, 249, 194, 255),
    VTX(560, 100, -260, 2560, 1024, 0, 0, 0, 255),
    VTX(560, 0, -260, 0, 1024, 0, 0, 0, 255),
    VTX(540, 0, -260, 0, 512, 157, 249, 194, 255),
    VTX(-1590, 100, -210, 2560, 512, 157, 249, 194, 255),
    VTX(-1610, 100, -210, 2560, 1024, 0, 0, 0, 255),
    VTX(-1590, 0, -210, 0, 512, 157, 249, 194, 255),
    VTX(-1610, 0, -210, 0, 1024, 0, 0, 0, 255),
    VTX(-1590, 100, -150, 1536, 512, 157, 249, 194, 255),
    VTX(-1610, 100, -150, 1536, 1024, 0, 0, 0, 255),
    VTX(-1610, 100, -210, 0, 1024, 0, 0, 0, 255),
    VTX(-1590, 100, -210, 0, 512, 157, 249, 194, 255),
    VTX(-1610, 0, -150, 1536, 1024, 0, 0, 0, 255),
    VTX(-1590, 0, -150, 1536, 512, 157, 249, 194, 255),
    VTX(-1590, 0, -150, 0, 512, 157, 249, 194, 255),
    VTX(-1610, 100, -150, 2560, 1024, 0, 0, 0, 255),
    VTX(-1590, 100, -150, 2560, 512, 157, 249, 194, 255),
    VTX(-1610, 0, -150, 0, 1024, 0, 0, 0, 255),
    VTX(-1260, 100, 700, 2560, 512, 157, 249, 194, 255),
    VTX(-1260, 100, 720, 2560, 1024, 0, 0, 0, 255),
    VTX(-1260, 0, 700, 0, 512, 157, 249, 194, 255),
    VTX(-1260, 0, 720, 0, 1024, 0, 0, 0, 255),
    VTX(-1200, 100, 700, 1536, 512, 157, 249, 194, 255),
    VTX(-1200, 100, 720, 1536, 1024, 0, 0, 0, 255),
    VTX(-1260, 100, 720, 0, 1024, 0, 0, 0, 255),
    VTX(-1260, 100, 700, 0, 512, 157, 249, 194, 255),
    VTX(-1200, 0, 700, 0, 512, 157, 249, 194, 255),
    VTX(-1200, 100, 720, 2560, 1024, 0, 0, 0, 255),
    VTX(-1200, 100, 700, 2560, 512, 157, 249, 194, 255),
}; 

static Vtx water_temple_room_12Vtx_000320[18] = {
    VTX(-1200, 0, 700, 0, 512, 157, 249, 194, 255),
    VTX(-1200, 0, 720, 0, 1024, 0, 0, 0, 255),
    VTX(-1200, 100, 720, 2560, 1024, 0, 0, 0, 255),
    VTX(-1260, 0, 700, 0, 512, 157, 249, 194, 255),
    VTX(-1260, 0, 720, 0, 1024, 0, 0, 0, 255),
    VTX(-1200, 0, 720, 1536, 1024, 0, 0, 0, 255),
    VTX(-1200, 0, 700, 1536, 512, 157, 249, 194, 255),
    VTX(540, 100, -320, 0, 512, 157, 249, 194, 255),
    VTX(560, 100, -320, 0, 1024, 0, 0, 0, 255),
    VTX(560, 100, -260, 1536, 1024, 0, 0, 0, 255),
    VTX(540, 100, -260, 1536, 512, 157, 249, 194, 255),
    VTX(540, 100, -260, 2560, 512, 157, 249, 194, 255),
    VTX(560, 100, -260, 2560, 1024, 0, 0, 0, 255),
    VTX(540, 0, -260, 0, 512, 157, 249, 194, 255),
    VTX(540, 0, -260, 1536, 512, 157, 249, 194, 255),
    VTX(560, 0, -260, 1536, 1024, 0, 0, 0, 255),
    VTX(560, 0, -320, 0, 1024, 0, 0, 0, 255),
    VTX(540, 0, -320, 0, 512, 157, 249, 194, 255),
}; 

static Vtx water_temple_room_12Vtx_000440[32] = {
    VTX(-115, 0, -410, -384, -9088, 157, 249, 194, 255),
    VTX(540, 0, -500, -1536, -17472, 42, 42, 42, 255),
    VTX(-115, 0, -500, -1536, -9088, 42, 42, 42, 255),
    VTX(540, 0, -410, -384, -17472, 42, 42, 42, 255),
    VTX(-465, 0, -500, -1536, -4608, 42, 42, 42, 255),
    VTX(-465, 0, -410, -384, -4608, 157, 249, 194, 255),
    VTX(540, 0, 140, 1920, -6656, 42, 42, 42, 255),
    VTX(-115, 0, -60, -640, 1728, 157, 249, 194, 255),
    VTX(-115, 0, 140, 1920, 1728, 42, 42, 42, 255),
    VTX(540, 0, -170, -2048, -6656, 42, 42, 42, 255),
    VTX(-115, 0, -170, -2048, 1728, 157, 249, 194, 255),
    VTX(-1590, 0, -300, 1024, 9792, 42, 42, 42, 255),
    VTX(-465, 0, -300, 1024, -4608, 157, 249, 194, 255),
    VTX(-1590, 0, -500, -1536, 9792, 42, 42, 42, 255),
    VTX(-465, 0, -60, -640, 6208, 157, 249, 194, 255),
    VTX(-465, 0, 140, 1920, 6208, 42, 42, 42, 255),
    VTX(-1590, 0, 140, 1920, 20608, 42, 42, 42, 255),
    VTX(-1590, 0, -60, -640, 20608, 42, 42, 42, 255),
    VTX(-1350, 0, 140, 12800, -5120, 40, 58, 65, 255),
    VTX(-1230, 0, 420, 10752, -9899, 75, 114, 83, 255),
    VTX(-1110, 0, 140, 8704, -5120, 40, 58, 65, 255),
    VTX(-1110, 0, 700, 8704, -14677, 40, 58, 65, 255),
    VTX(-1350, 0, 700, 12800, -14677, 42, 42, 42, 255),
    VTX(-1110, 0, 700, 8704, -14677, 42, 42, 42, 255),
    VTX(-1110, 0, 180, -683, 1536, 40, 58, 65, 255),
    VTX(-1110, 0, 700, -9557, 1536, 40, 58, 65, 255),
    VTX(-1110, 240, 180, -683, -2560, 75, 114, 83, 255),
    VTX(-1110, 240, 700, -9557, -2560, 42, 42, 42, 255),
    VTX(-1110, 240, 700, -341, -4437, 42, 42, 42, 255),
    VTX(-1350, 240, 700, -3072, -4437, 42, 42, 42, 255),
    VTX(-1350, 240, 180, -3072, 1479, 75, 114, 83, 255),
    VTX(-1110, 240, 180, -341, 1479, 75, 114, 83, 255),
}; 

static Vtx water_temple_room_12Vtx_000640[4] = {
    VTX(-1350, 240, 180, -683, -2560, 75, 114, 83, 255),
    VTX(-1350, 0, 700, -9557, 1536, 40, 58, 65, 255),
    VTX(-1350, 0, 180, -683, 1536, 157, 249, 194, 255),
    VTX(-1350, 240, 700, -9557, -2560, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_12Vtx_000680[5] = {
    VTX(-232, 0, -177, 1024, -2048, 75, 114, 83, 255),
    VTX(-290, 0, -235, 2048, -1024, 157, 249, 194, 255),
    VTX(-348, 0, -177, 3072, -2048, 75, 114, 83, 255),
    VTX(-232, 0, -293, 1024, 0, 75, 114, 83, 255),
    VTX(-348, 0, -293, 3072, 0, 75, 114, 83, 255),
}; 

static Vtx water_temple_room_12Vtx_0006D0[24] = {
    VTX(-1110, 0, 700, -1024, 2048, 157, 249, 194, 255),
    VTX(-1200, 180, 700, 1024, -2048, 42, 42, 42, 255),
    VTX(-1110, 180, 700, -1024, -2048, 42, 42, 42, 255),
    VTX(-1200, 0, 700, 1024, 2048, 42, 42, 42, 255),
    VTX(-1350, 180, 700, 1024, -2048, 42, 42, 42, 255),
    VTX(-1260, 180, 700, -1024, -2048, 42, 42, 42, 255),
    VTX(-1350, 0, 700, 1024, 2048, 157, 249, 194, 255),
    VTX(-1260, 0, 700, -1024, 2048, 42, 42, 42, 255),
    VTX(540, 0, -230, -1024, 2048, 157, 249, 194, 255),
    VTX(540, 0, -80, 1024, 2048, 157, 249, 194, 255),
    VTX(540, 300, -80, 1024, -2048, 42, 42, 42, 255),
    VTX(540, 300, -230, -1024, -2048, 42, 42, 42, 255),
    VTX(540, 0, -500, -1024, 2048, 157, 249, 194, 255),
    VTX(540, 0, -350, 1024, 2048, 157, 249, 194, 255),
    VTX(540, 300, -350, 1024, -2048, 42, 42, 42, 255),
    VTX(540, 300, -500, -1024, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, -120, -1024, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, 30, 1024, -2048, 42, 42, 42, 255),
    VTX(-1590, 0, 30, 1024, 2048, 157, 249, 194, 255),
    VTX(-1590, 0, -120, -1024, 2048, 157, 249, 194, 255),
    VTX(-1590, 300, -390, -1024, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, -240, 1024, -2048, 42, 42, 42, 255),
    VTX(-1590, 0, -240, 1024, 2048, 157, 249, 194, 255),
    VTX(-1590, 0, -390, -1024, 2048, 157, 249, 194, 255),
}; 

static Vtx water_temple_room_12Vtx_000850[24] = {
    VTX(540, 130, -230, 0, 1024, 42, 42, 42, 255),
    VTX(540, 130, -350, 4096, 1024, 42, 42, 42, 255),
    VTX(540, 100, -320, 3072, 2048, 157, 249, 194, 255),
    VTX(540, 100, -260, 1024, 2048, 157, 249, 194, 255),
    VTX(540, 130, -350, 4437, 5120, 42, 42, 42, 255),
    VTX(540, 0, -350, 0, 5120, 157, 249, 194, 255),
    VTX(540, 0, -320, 0, 4096, 157, 249, 194, 255),
    VTX(540, 100, -320, 3413, 4096, 157, 249, 194, 255),
    VTX(540, 130, -230, 4437, 1024, 42, 42, 42, 255),
    VTX(540, 100, -260, 3413, 2048, 157, 249, 194, 255),
    VTX(540, 0, -260, 0, 2048, 157, 249, 194, 255),
    VTX(540, 0, -230, 0, 1024, 42, 42, 42, 255),
    VTX(-1590, 0, -120, 0, 1024, 157, 249, 194, 255),
    VTX(-1590, 0, -150, 0, 2048, 157, 249, 194, 255),
    VTX(-1590, 100, -150, 3413, 2048, 157, 249, 194, 255),
    VTX(-1590, 130, -120, 4437, 1024, 42, 42, 42, 255),
    VTX(-1590, 100, -210, 3413, 4096, 157, 249, 194, 255),
    VTX(-1590, 0, -210, 0, 4096, 157, 249, 194, 255),
    VTX(-1590, 0, -240, 0, 5120, 157, 249, 194, 255),
    VTX(-1590, 130, -240, 4437, 5120, 42, 42, 42, 255),
    VTX(-1590, 100, -150, 1024, 2048, 157, 249, 194, 255),
    VTX(-1590, 100, -210, 3072, 2048, 157, 249, 194, 255),
    VTX(-1590, 130, -240, 4096, 1024, 42, 42, 42, 255),
    VTX(-1590, 130, -120, 0, 1024, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_12Vtx_0009D0[32] = {
    VTX(-1590, 300, -500, 0, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, -390, 2048, -2048, 42, 42, 42, 255),
    VTX(-1590, 0, -390, 2048, 2048, 157, 249, 194, 255),
    VTX(-1590, 0, -500, 0, 2048, 157, 249, 194, 255),
    VTX(540, 0, -80, 0, 2048, 157, 249, 194, 255),
    VTX(540, 0, 140, 4096, 2048, 157, 249, 194, 255),
    VTX(540, 300, 140, 4096, -2048, 42, 42, 42, 255),
    VTX(540, 300, -80, 0, -2048, 42, 42, 42, 255),
    VTX(540, 300, -500, 0, -2048, 42, 42, 42, 255),
    VTX(-525, 150, -500, 10240, 0, 157, 249, 194, 255),
    VTX(540, 0, -500, 0, 2048, 157, 249, 194, 255),
    VTX(-1070, 0, 140, 20480, 2048, 40, 58, 65, 255),
    VTX(-265, 150, 140, 10240, 0, 157, 249, 194, 255),
    VTX(540, 0, 140, 0, 2048, 157, 249, 194, 255),
    VTX(-1070, 300, 140, 20480, -2048, 42, 42, 42, 255),
    VTX(540, 300, 140, 0, -2048, 42, 42, 42, 255),
    VTX(-1390, 0, 140, 18557, 2048, 42, 42, 42, 255),
    VTX(-1590, 0, 140, 20480, 2048, 157, 249, 194, 255),
    VTX(-1390, 300, 140, 18557, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, 140, 20480, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, 30, 0, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, 140, 2048, -2048, 42, 42, 42, 255),
    VTX(-1590, 0, 140, 2048, 2048, 157, 249, 194, 255),
    VTX(-1590, 0, 30, 0, 2048, 157, 249, 194, 255),
    VTX(-1590, 300, -240, 0, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, -120, 6146, -2048, 42, 42, 42, 255),
    VTX(-1590, 220, -120, 6146, 2048, 157, 249, 194, 255),
    VTX(-1590, 220, -240, 0, 2048, 157, 249, 194, 255),
    VTX(-1590, 0, -500, 20480, 2048, 157, 249, 194, 255),
    VTX(540, 220, -350, 0, 2048, 157, 249, 194, 255),
    VTX(540, 220, -230, 6146, 2048, 157, 249, 194, 255),
    VTX(540, 300, -230, 6146, -2048, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_12Vtx_000BD0[7] = {
    VTX(540, 220, -350, 0, 2048, 157, 249, 194, 255),
    VTX(540, 300, -230, 6146, -2048, 42, 42, 42, 255),
    VTX(540, 300, -350, 0, -2048, 42, 42, 42, 255),
    VTX(540, 300, -500, 0, -2048, 42, 42, 42, 255),
    VTX(-1590, 300, -500, 20480, -2048, 42, 42, 42, 255),
    VTX(-525, 150, -500, 10240, 0, 157, 249, 194, 255),
    VTX(-1590, 0, -500, 20480, 2048, 157, 249, 194, 255),
}; 

static Vtx water_temple_room_12Vtx_000C40[8] = {
    VTX(-1590, 300, -500, 8192, -19456, 42, 42, 42, 255),
    VTX(-1110, 300, -500, 8192, -14841, 40, 58, 65, 255),
    VTX(-1350, 300, -180, 4096, -17148, 40, 58, 65, 255),
    VTX(-1110, 300, 140, 0, -14841, 42, 42, 42, 255),
    VTX(-285, 300, -180, 4096, -6908, 75, 114, 83, 255),
    VTX(540, 300, 140, 0, 1024, 42, 42, 42, 255),
    VTX(540, 300, -500, 8192, 1024, 42, 42, 42, 255),
    VTX(-1590, 300, 140, 0, -19456, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_12Vtx_000CC0[10] = {
    VTX(-1590, 0, -60, 1024, -32768, 42, 42, 42, 255),
    VTX(-465, 0, -60, 1024, 0, 157, 249, 194, 255),
    VTX(-1028, 0, -180, 4096, -16384, 75, 114, 83, 255),
    VTX(-465, 0, -300, 7168, 0, 157, 249, 194, 255),
    VTX(-115, 0, -170, 1024, -16384, 157, 249, 194, 255),
    VTX(213, 0, -290, 4096, -8192, 75, 114, 83, 255),
    VTX(-115, 0, -410, 7168, -16384, 157, 249, 194, 255),
    VTX(540, 0, -170, 1024, 0, 42, 42, 42, 255),
    VTX(540, 0, -410, 7168, 0, 42, 42, 42, 255),
    VTX(-1590, 0, -300, 7168, -32768, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_12Vtx_000D60[4] = {
    VTX(-1350, 240, 700, 4096, 0, 42, 42, 42, 255),
    VTX(-1110, 240, 700, 0, 0, 42, 42, 42, 255),
    VTX(-1110, 180, 700, 0, 1024, 40, 58, 65, 255),
    VTX(-1350, 180, 700, 4096, 1024, 40, 58, 65, 255),
}; 

static Vtx water_temple_room_12Vtx_000DA0[16] = {
    VTX(-465, 0, -60, -4492, 2278, 157, 249, 194, 255),
    VTX(-115, 0, -60, 3828, 2336, 157, 249, 194, 255),
    VTX(-232, 0, -177, 1024, 0, 75, 114, 83, 255),
    VTX(-348, 0, -177, -1750, -19, 75, 114, 83, 255),
    VTX(-115, 0, -60, -4492, 2278, 157, 249, 194, 255),
    VTX(-115, 0, -410, 3828, 2336, 157, 249, 194, 255),
    VTX(-232, 0, -293, 1024, 0, 75, 114, 83, 255),
    VTX(-232, 0, -177, -1750, -19, 75, 114, 83, 255),
    VTX(-115, 0, -410, -4492, 2278, 157, 249, 194, 255),
    VTX(-465, 0, -410, 3828, 2336, 157, 249, 194, 255),
    VTX(-348, 0, -293, 1024, 0, 75, 114, 83, 255),
    VTX(-232, 0, -293, -1750, -19, 75, 114, 83, 255),
    VTX(-465, 0, -410, -4492, 2278, 157, 249, 194, 255),
    VTX(-465, 0, -60, 3828, 2336, 157, 249, 194, 255),
    VTX(-348, 0, -177, 1024, 0, 75, 114, 83, 255),
    VTX(-348, 0, -293, -1750, -19, 75, 114, 83, 255),
}; 

static Vtx water_temple_room_12Vtx_000EA0[5] = {
    VTX(-1350, 300, 140, 4096, -1024, 42, 42, 42, 255),
    VTX(-1110, 300, 140, 0, -1024, 42, 42, 42, 255),
    VTX(-1230, 270, 140, 2048, 0, 75, 114, 83, 255),
    VTX(-1350, 240, 140, 4096, 1024, 42, 42, 42, 255),
    VTX(-1110, 240, 140, 0, 1024, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_12Vtx_000EF0[16] = {
    VTX(-1070, 0, 140, 0, 1024, 42, 42, 42, 255),
    VTX(-1110, 0, 140, 1024, 1024, 157, 249, 194, 255),
    VTX(-1110, 60, 140, 1024, 0, 157, 249, 194, 255),
    VTX(-1070, 60, 140, 0, 0, 42, 42, 42, 255),
    VTX(-1350, 60, 180, 0, 0, 42, 42, 42, 255),
    VTX(-1350, 0, 180, 0, 1024, 157, 249, 194, 255),
    VTX(-1350, 0, 140, 1024, 1024, 40, 58, 65, 255),
    VTX(-1350, 60, 140, 1024, 0, 40, 58, 65, 255),
    VTX(-1110, 0, 140, 1024, 1024, 40, 58, 65, 255),
    VTX(-1110, 0, 180, 0, 1024, 157, 249, 194, 255),
    VTX(-1110, 60, 180, 0, 0, 40, 58, 65, 255),
    VTX(-1110, 60, 140, 1024, 0, 42, 42, 42, 255),
    VTX(-1350, 0, 140, 0, 1024, 157, 249, 194, 255),
    VTX(-1390, 0, 140, 1024, 1024, 42, 42, 42, 255),
    VTX(-1390, 60, 140, 1024, 0, 42, 42, 42, 255),
    VTX(-1350, 60, 140, 0, 0, 157, 249, 194, 255),
}; 

static Vtx water_temple_room_12Vtx_000FF0[20] = {
    VTX(-1110, 60, 140, 1024, 1024, 157, 249, 194, 255),
    VTX(-1070, 300, 140, 0, -3072, 42, 42, 42, 255),
    VTX(-1070, 60, 140, 0, 1024, 42, 42, 42, 255),
    VTX(-1350, 240, 140, 0, -2048, 42, 42, 42, 255),
    VTX(-1350, 240, 180, 1024, -2048, 75, 114, 83, 255),
    VTX(-1350, 60, 180, 1024, 1024, 157, 249, 194, 255),
    VTX(-1350, 60, 140, 0, 1024, 40, 58, 65, 255),
    VTX(-1110, 300, 140, 1024, -3072, 42, 42, 42, 255),
    VTX(-1110, 60, 180, 1024, 1024, 157, 249, 194, 255),
    VTX(-1110, 240, 180, 1024, -2048, 75, 114, 83, 255),
    VTX(-1110, 240, 140, 0, -2048, 42, 42, 42, 255),
    VTX(-1110, 60, 140, 0, 1024, 42, 42, 42, 255),
    VTX(-1390, 300, 140, 8192, -3072, 42, 42, 42, 255),
    VTX(-1350, 300, 140, 7168, -3072, 42, 42, 42, 255),
    VTX(-1350, 60, 140, 7168, 1024, 157, 249, 194, 255),
    VTX(-1350, 240, 180, 1024, -5120, 75, 114, 83, 255),
    VTX(-1350, 240, 140, 0, -5120, 42, 42, 42, 255),
    VTX(-1110, 240, 140, 0, 1024, 42, 42, 42, 255),
    VTX(-1110, 240, 180, 1024, 1024, 75, 114, 83, 255),
    VTX(-1390, 60, 140, 8192, 1024, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_12Vtx_001130[8] = {
    VTX(-1610, 0, -500, 0, 0, 0, 0, 0, 0),
    VTX(560, 0, -500, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 300, -500, 0, 0, 0, 0, 0, 0),
    VTX(560, 300, -500, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 0, 720, 0, 0, 0, 0, 0, 0),
    VTX(560, 0, 720, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 300, 720, 0, 0, 0, 0, 0, 0),
    VTX(560, 300, 720, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_12Dlist0x0011B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_12Vtx_001130[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_12Tex_001878, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_12Vtx_000060[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_018B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000120[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 9, 10, 15, 0),
    gsSP2Triangles(9, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 20, 18, 0, 21, 22, 23, 0),
    gsSP2Triangles(22, 24, 23, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&water_temple_room_12Vtx_000320[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_002078, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000440[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsSP2Triangles(7, 6, 9, 0, 11, 12, 5, 0),
    gsSP2Triangles(13, 5, 4, 0, 11, 5, 13, 0),
    gsSP2Triangles(14, 15, 8, 0, 14, 8, 7, 0),
    gsSP2Triangles(16, 14, 17, 0, 16, 15, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(18, 22, 19, 0, 22, 23, 19, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_12Vtx_000640[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_002878, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000680[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 2, 1, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_003078, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_0006D0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_004078, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000850[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_004878, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_0009D0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 14, 15, 12, 0),
    gsSP2Triangles(15, 13, 12, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 9, 28, 10, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&water_temple_room_12Vtx_000BD0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_005878, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000C40[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(1, 4, 3, 0, 4, 5, 3, 0),
    gsSP2Triangles(1, 6, 4, 0, 6, 5, 4, 0),
    gsSP2Triangles(0, 2, 7, 0, 2, 3, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_006078, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000CC0[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 6, 5, 0),
    gsSP2Triangles(9, 2, 3, 0, 9, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_006878, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000D60[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_007078, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000DA0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_12Tex_007878, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000EA0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 1, 4, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000EF0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_12Vtx_000FF0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 12, 14, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_12Tex_001878[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_001878.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_002078[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_002078.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_002878[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_002878.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_003078[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_003078.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_004078[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_004078.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_004878[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_004878.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_005878[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_005878.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_006078[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_006078.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_006878[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_006878.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_007078[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_007078.rgb5a1.inc.c"
};

u64 water_temple_room_12Tex_007878[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_12Tex_007878.rgb5a1.inc.c"
};

Gfx water_temple_room_12Dlist0x008078[] = {
    gsSPDisplayList(water_temple_room_12Dlist0x0011B0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_008088[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


