#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_14.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_14Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_14Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_14Set0000Cmd02;
static SCmdMesh water_temple_room_14Set0000Cmd03;
static SCmdObjectList water_temple_room_14Set0000Cmd04;
static SCmdEndMarker water_temple_room_14Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx water_temple_room_14Vtx_000060[16];
static Vtx water_temple_room_14Vtx_000160[24];
static Vtx water_temple_room_14Vtx_0002E0[5];
static Vtx water_temple_room_14Vtx_000330[19];
static Vtx water_temple_room_14Vtx_000460[4];
static Vtx water_temple_room_14Vtx_0004A0[24];
static Vtx water_temple_room_14Vtx_000620[4];
static Vtx water_temple_room_14Vtx_000660[50];
static Vtx water_temple_room_14Vtx_000980[5];
static Vtx water_temple_room_14Vtx_0009D0[4];
static Vtx water_temple_room_14Vtx_000A10[4];
static Vtx water_temple_room_14Vtx_000A50[8];
static Vtx water_temple_room_14Vtx_000AD0[16];
static Vtx water_temple_room_14Vtx_000BD0[16];
static Vtx water_temple_room_14Vtx_000CD0[20];
static Vtx water_temple_room_14Vtx_000E10[8];

static SCmdEchoSettings water_temple_room_14Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_14Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_14Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_14Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_14MeshHeader0x000040 }; // 0x0018

static SCmdObjectList water_temple_room_14Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_14ObjectList0x000030 }; // 0x0020

static SCmdEndMarker water_temple_room_14Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 water_temple_room_14ObjectList0x000030[1] = {
	OBJECT_BOX,
}; 

static u8 unaccounted_000034[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 water_temple_room_14MeshHeader0x000040 = { { 0 }, 0x01, (u32)&water_temple_room_14MeshDListEntry0x00004C, (u32)&(water_temple_room_14MeshDListEntry0x00004C) + sizeof(water_temple_room_14MeshDListEntry0x00004C) }; 

MeshEntry0 water_temple_room_14MeshDListEntry0x00004C[1] = {
	{ (u32)water_temple_room_14Dlist0x008508, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx water_temple_room_14Vtx_000060[16] = {
    VTX(-1110, 1160, -60, 12288, 1024, 69, 112, 144, 255),
    VTX(-1110, 1210, -60, 12288, 0, 32, 32, 32, 255),
    VTX(-630, 1210, -60, 0, 0, 32, 32, 32, 255),
    VTX(-630, 1160, -60, 0, 1024, 129, 129, 129, 255),
    VTX(-1350, 1210, -300, 0, 0, 32, 32, 32, 255),
    VTX(-1350, 1160, -300, 0, 1024, 32, 32, 32, 255),
    VTX(-630, 1160, -300, 12288, 1024, 156, 199, 203, 255),
    VTX(-630, 1210, -300, 12288, 0, 32, 32, 32, 255),
    VTX(-630, 1210, -300, 0, 0, 32, 32, 32, 255),
    VTX(-630, 1160, -300, 0, 1024, 129, 129, 129, 255),
    VTX(-630, 1160, -60, 6144, 1024, 69, 112, 144, 255),
    VTX(-630, 1210, -60, 6144, 0, 32, 32, 32, 255),
    VTX(-1350, 1210, -60, 6144, 0, 32, 32, 32, 255),
    VTX(-1350, 1160, -60, 6144, 1024, 129, 129, 129, 255),
    VTX(-1350, 1160, -300, 0, 1024, 129, 129, 129, 255),
    VTX(-1350, 1210, -300, 0, 0, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_14Vtx_000160[24] = {
    VTX(-630, 1160, -300, -1024, -2048, 32, 32, 32, 255),
    VTX(-630, 970, -300, -1024, 2048, 69, 112, 144, 255),
    VTX(-630, 1160, -240, 1024, -2048, 32, 32, 32, 255),
    VTX(-630, 970, -240, 1024, 2048, 156, 199, 203, 255),
    VTX(-630, 1160, -120, -1024, -2048, 32, 32, 32, 255),
    VTX(-630, 970, -120, -1024, 2048, 69, 112, 144, 255),
    VTX(-630, 1160, -60, 1024, -2048, 32, 32, 32, 255),
    VTX(-630, 970, -60, 1024, 2048, 156, 199, 203, 255),
    VTX(-1350, 1160, -240, 1024, -2048, 32, 32, 32, 255),
    VTX(-1350, 970, -240, 1024, 2048, 156, 199, 203, 255),
    VTX(-1350, 970, -300, -1024, 2048, 69, 112, 144, 255),
    VTX(-1350, 1160, -300, -1024, -2048, 32, 32, 32, 255),
    VTX(-1350, 1160, -60, 1024, -2048, 32, 32, 32, 255),
    VTX(-1350, 970, -120, -1024, 2048, 69, 112, 144, 255),
    VTX(-1350, 1160, -120, -1024, -2048, 32, 32, 32, 255),
    VTX(-1350, 970, -60, 1024, 2048, 156, 199, 203, 255),
    VTX(-1140, 970, 500, -1024, 2048, 32, 32, 32, 255),
    VTX(-1200, 970, 500, 1024, 2048, 156, 199, 203, 255),
    VTX(-1140, 1160, 500, -1024, -2048, 32, 32, 32, 255),
    VTX(-1200, 1160, 500, 1024, -2048, 32, 32, 32, 255),
    VTX(-1320, 1160, 500, -1024, -2048, 32, 32, 32, 255),
    VTX(-1260, 970, 500, 1024, 2048, 156, 199, 203, 255),
    VTX(-1320, 970, 500, -1024, 2048, 32, 32, 32, 255),
    VTX(-1260, 1160, 500, 1024, -2048, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_14Vtx_0002E0[5] = {
    VTX(-630, 1210, -300, 6144, 1024, 32, 32, 32, 255),
    VTX(-630, 1210, -60, 0, 1024, 32, 32, 32, 255),
    VTX(-990, 1210, -180, 3072, -8192, 129, 129, 129, 255),
    VTX(-1350, 1210, -60, 0, -17408, 32, 32, 32, 255),
    VTX(-1350, 1210, -300, 6144, -17408, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_14Vtx_000330[19] = {
    VTX(-1320, 1160, 500, -6656, -2219, 32, 32, 32, 255),
    VTX(-1320, 970, 500, -6656, 1024, 32, 32, 32, 255),
    VTX(-1320, 970, -20, 2219, 1024, 129, 129, 129, 255),
    VTX(-1140, 1160, -20, 2219, -2219, 32, 32, 32, 255),
    VTX(-1140, 970, -20, 2219, 1024, 69, 112, 144, 255),
    VTX(-1140, 970, 500, -6656, 1024, 129, 129, 129, 255),
    VTX(-1140, 1160, 500, -6656, -2219, 32, 32, 32, 255),
    VTX(-1140, 1160, -20, -1024, 341, 32, 32, 32, 255),
    VTX(-1140, 1160, 500, -1024, -8533, 129, 129, 129, 255),
    VTX(-1320, 1160, 500, 2048, -8533, 129, 129, 129, 255),
    VTX(-1320, 1160, -20, 2048, 341, 32, 32, 32, 255),
    VTX(-1320, 1160, -20, 2219, -2219, 32, 32, 32, 255),
    VTX(-1140, 970, 500, -1024, -8533, 32, 32, 32, 255),
    VTX(-1140, 970, -20, -1024, 341, 129, 129, 129, 255),
    VTX(-1320, 970, -20, 2048, 341, 129, 129, 129, 255),
    VTX(-1320, 970, 500, 2048, -8533, 32, 32, 32, 255),
    VTX(-1140, 970, -20, -1024, 341, 32, 32, 32, 255),
    VTX(-1140, 970, -60, -1024, 1024, 32, 32, 32, 255),
    VTX(-1320, 970, -60, 2048, 1024, 129, 129, 129, 255),
}; 

static Vtx water_temple_room_14Vtx_000460[4] = {
    VTX(-1350, 1160, -300, 0, -2048, 32, 32, 32, 255),
    VTX(-1350, 970, -300, 0, 2048, 69, 112, 144, 255),
    VTX(-630, 1160, -300, 16384, -2048, 156, 199, 203, 255),
    VTX(-630, 970, -300, 16384, 2048, 156, 199, 203, 255),
}; 

static Vtx water_temple_room_14Vtx_0004A0[24] = {
    VTX(-1350, 970, -120, 0, 1024, 156, 199, 203, 255),
    VTX(-1350, 970, -150, 0, 2048, 156, 199, 203, 255),
    VTX(-1350, 1070, -150, 3413, 2048, 156, 199, 203, 255),
    VTX(-1350, 1100, -120, 4437, 1024, 32, 32, 32, 255),
    VTX(-630, 1100, -120, 4437, 1024, 32, 32, 32, 255),
    VTX(-630, 1070, -150, 3413, 2048, 156, 199, 203, 255),
    VTX(-630, 970, -150, 0, 2048, 156, 199, 203, 255),
    VTX(-630, 970, -120, 0, 1024, 156, 199, 203, 255),
    VTX(-1350, 1070, -210, 3413, 4096, 156, 199, 203, 255),
    VTX(-1350, 970, -210, 0, 4096, 156, 199, 203, 255),
    VTX(-1350, 970, -240, 0, 5120, 156, 199, 203, 255),
    VTX(-1350, 1100, -240, 4437, 5120, 32, 32, 32, 255),
    VTX(-630, 1100, -240, 4437, 5120, 32, 32, 32, 255),
    VTX(-630, 970, -240, 0, 5120, 156, 199, 203, 255),
    VTX(-630, 970, -210, 0, 4096, 156, 199, 203, 255),
    VTX(-630, 1070, -210, 3413, 4096, 156, 199, 203, 255),
    VTX(-630, 1100, -120, 0, 1024, 32, 32, 32, 255),
    VTX(-630, 1100, -240, 4096, 1024, 32, 32, 32, 255),
    VTX(-630, 1070, -210, 3072, 2048, 156, 199, 203, 255),
    VTX(-630, 1070, -150, 1024, 2048, 156, 199, 203, 255),
    VTX(-1350, 1070, -150, 1024, 2048, 156, 199, 203, 255),
    VTX(-1350, 1070, -210, 3072, 2048, 156, 199, 203, 255),
    VTX(-1350, 1100, -240, 4096, 1024, 32, 32, 32, 255),
    VTX(-1350, 1100, -120, 0, 1024, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_14Vtx_000620[4] = {
    VTX(-1200, 1160, 500, 0, -1024, 32, 32, 32, 255),
    VTX(-1200, 1070, 500, 0, 1024, 129, 129, 129, 255),
    VTX(-1260, 1070, 500, 2048, 1024, 156, 199, 203, 255),
    VTX(-1260, 1160, 500, 2048, -1024, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_14Vtx_000660[50] = {
    VTX(-1370, 970, -210, 0, 512, 0, 0, 0, 255),
    VTX(-1350, 1070, -210, 2560, 1024, 156, 199, 203, 255),
    VTX(-1370, 1070, -210, 2560, 512, 0, 0, 0, 255),
    VTX(-1370, 1070, -150, 2560, 512, 0, 0, 0, 255),
    VTX(-1350, 1070, -150, 2560, 1024, 156, 199, 203, 255),
    VTX(-1370, 970, -150, 0, 512, 0, 0, 0, 255),
    VTX(-1350, 970, -150, 0, 1024, 156, 199, 203, 255),
    VTX(-1200, 970, 520, 1536, 2048, 0, 0, 0, 255),
    VTX(-1200, 970, 500, 1536, 1536, 156, 199, 203, 255),
    VTX(-1260, 970, 500, 0, 1536, 156, 199, 203, 255),
    VTX(-1260, 970, 520, 0, 2048, 0, 0, 0, 255),
    VTX(-1260, 1070, 520, 0, 2048, 0, 0, 0, 255),
    VTX(-1260, 1070, 500, 0, 1536, 156, 199, 203, 255),
    VTX(-1200, 1070, 500, 1536, 1536, 156, 199, 203, 255),
    VTX(-1200, 1070, 520, 1536, 2048, 0, 0, 0, 255),
    VTX(-1260, 970, 520, 0, 512, 0, 0, 0, 255),
    VTX(-1260, 970, 500, 0, 1024, 156, 199, 203, 255),
    VTX(-1260, 1070, 500, 2560, 1024, 156, 199, 203, 255),
    VTX(-1260, 1070, 520, 2560, 512, 0, 0, 0, 255),
    VTX(-1200, 1070, 520, 2560, 512, 0, 0, 0, 255),
    VTX(-1200, 1070, 500, 2560, 1024, 156, 199, 203, 255),
    VTX(-1200, 970, 520, 0, 512, 0, 0, 0, 255),
    VTX(-1200, 970, 500, 0, 1024, 156, 199, 203, 255),
    VTX(-630, 1070, -210, 2560, 1024, 156, 199, 203, 255),
    VTX(-630, 970, -210, 0, 1024, 156, 199, 203, 255),
    VTX(-610, 970, -210, 0, 512, 0, 0, 0, 255),
    VTX(-610, 1070, -210, 2560, 512, 0, 0, 0, 255),
    VTX(-610, 970, -150, 0, 512, 0, 0, 0, 255),
    VTX(-630, 1070, -150, 2560, 1024, 156, 199, 203, 255),
    VTX(-610, 1070, -150, 2560, 512, 0, 0, 0, 255),
    VTX(-630, 970, -150, 0, 1024, 156, 199, 203, 255),
    VTX(-610, 1070, -150, 0, 2048, 0, 0, 0, 255),
    VTX(-630, 1070, -150, 0, 1536, 156, 199, 203, 255),
    VTX(-630, 1070, -210, 1536, 1536, 156, 199, 203, 255),
    VTX(-610, 1070, -210, 1536, 2048, 0, 0, 0, 255),
    VTX(-610, 970, -210, 1536, 2048, 0, 0, 0, 255),
    VTX(-630, 970, -210, 1536, 1536, 156, 199, 203, 255),
    VTX(-630, 970, -150, 0, 1536, 156, 199, 203, 255),
    VTX(-610, 970, -150, 0, 2048, 0, 0, 0, 255),
    VTX(-1370, 970, -150, 1536, 2048, 0, 0, 0, 255),
    VTX(-1350, 970, -150, 1536, 1536, 156, 199, 203, 255),
    VTX(-1350, 970, -210, 0, 1536, 156, 199, 203, 255),
    VTX(-1370, 970, -210, 0, 2048, 0, 0, 0, 255),
    VTX(-1370, 1070, -210, 0, 2048, 0, 0, 0, 255),
    VTX(-1350, 1070, -210, 0, 1536, 156, 199, 203, 255),
    VTX(-1350, 1070, -150, 1536, 1536, 156, 199, 203, 255),
    VTX(-1370, 1070, -150, 1536, 2048, 0, 0, 0, 255),
    VTX(-1370, 970, -210, 0, 512, 0, 0, 0, 255),
    VTX(-1350, 970, -210, 0, 1024, 156, 199, 203, 255),
    VTX(-1350, 1070, -210, 2560, 1024, 156, 199, 203, 255),
}; 

static Vtx water_temple_room_14Vtx_000980[5] = {
    VTX(-990, 970, -180, 2048, -7168, 156, 199, 203, 255),
    VTX(-630, 970, -300, 5120, 2048, 32, 32, 32, 255),
    VTX(-1350, 970, -300, 5120, -16384, 156, 199, 203, 255),
    VTX(-1350, 970, -60, -1024, -16384, 32, 32, 32, 255),
    VTX(-630, 970, -60, -1024, 2048, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_14Vtx_0009D0[4] = {
    VTX(-1110, 970, -60, 10240, 2048, 69, 112, 144, 255),
    VTX(-1110, 1160, -60, 10240, -2048, 32, 32, 32, 255),
    VTX(-630, 1160, -60, 0, -2048, 32, 32, 32, 255),
    VTX(-630, 970, -60, 0, 2048, 156, 199, 203, 255),
}; 

static Vtx water_temple_room_14Vtx_000A10[4] = {
    VTX(-1140, 1210, -60, 0, -1024, 32, 32, 32, 255),
    VTX(-1140, 1160, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1320, 1160, -60, 4096, 1024, 42, 42, 42, 255),
    VTX(-1320, 1210, -60, 4096, -1024, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_14Vtx_000A50[8] = {
    VTX(-630, 1160, -240, 0, -1024, 32, 32, 32, 255),
    VTX(-630, 1100, -240, 0, 1024, 69, 112, 144, 255),
    VTX(-630, 1100, -120, 2048, 1024, 156, 199, 203, 255),
    VTX(-630, 1160, -120, 2048, -1024, 32, 32, 32, 255),
    VTX(-1350, 1160, -120, 2048, -1024, 32, 32, 32, 255),
    VTX(-1350, 1100, -120, 2048, 1024, 156, 199, 203, 255),
    VTX(-1350, 1100, -240, 0, 1024, 69, 112, 144, 255),
    VTX(-1350, 1160, -240, 0, -1024, 32, 32, 32, 255),
}; 

static Vtx water_temple_room_14Vtx_000AD0[16] = {
    VTX(-1320, 1030, -20, 0, 0, 42, 42, 42, 255),
    VTX(-1320, 970, -20, 0, 1024, 157, 249, 194, 255),
    VTX(-1320, 970, -60, 1024, 1024, 40, 58, 65, 255),
    VTX(-1320, 1030, -60, 1024, 0, 40, 58, 65, 255),
    VTX(-1140, 970, -60, 1024, 1024, 40, 58, 65, 255),
    VTX(-1140, 970, -20, 0, 1024, 157, 249, 194, 255),
    VTX(-1140, 1030, -20, 0, 0, 40, 58, 65, 255),
    VTX(-1140, 1030, -60, 1024, 0, 42, 42, 42, 255),
    VTX(-1110, 970, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1140, 970, -60, 1024, 1024, 157, 249, 194, 255),
    VTX(-1140, 1030, -60, 1024, 0, 157, 249, 194, 255),
    VTX(-1110, 1030, -60, 0, 0, 42, 42, 42, 255),
    VTX(-1320, 970, -60, 0, 1024, 157, 249, 194, 255),
    VTX(-1350, 970, -60, 1024, 1024, 42, 42, 42, 255),
    VTX(-1350, 1030, -60, 1024, 0, 42, 42, 42, 255),
    VTX(-1320, 1030, -60, 0, 0, 157, 249, 194, 255),
}; 

static Vtx water_temple_room_14Vtx_000BD0[16] = {
    VTX(-632, 1130, -62, -614, 512, 129, 129, 129, 255),
    VTX(-632, 1170, -62, -614, 0, 129, 129, 129, 255),
    VTX(-632, 1170, -298, 3413, 0, 129, 129, 129, 255),
    VTX(-632, 1130, -298, 3413, 512, 129, 129, 129, 255),
    VTX(-1348, 1130, -298, 3413, 512, 129, 129, 129, 255),
    VTX(-1348, 1170, -298, 3413, 0, 129, 129, 129, 255),
    VTX(-1348, 1170, -62, -614, 0, 129, 129, 129, 255),
    VTX(-1348, 1130, -62, -614, 512, 129, 129, 129, 255),
    VTX(-1348, 1130, -298, 12254, 512, 129, 129, 129, 255),
    VTX(-632, 1130, -298, 34, 512, 129, 129, 129, 255),
    VTX(-632, 1170, -298, 34, 0, 129, 129, 129, 255),
    VTX(-1348, 1170, -298, 12254, 0, 129, 129, 129, 255),
    VTX(-632, 1130, -62, 34, 512, 129, 129, 129, 255),
    VTX(-1110, 1130, -62, 8192, 512, 129, 129, 129, 255),
    VTX(-1110, 1170, -62, 8192, 0, 129, 129, 129, 255),
    VTX(-632, 1170, -62, 34, 0, 129, 129, 129, 255),
}; 

static Vtx water_temple_room_14Vtx_000CD0[20] = {
    VTX(-1320, 1160, -60, 0, -2048, 42, 42, 42, 255),
    VTX(-1320, 1160, -20, 1024, -2048, 75, 114, 83, 255),
    VTX(-1320, 1030, -20, 1024, 1024, 157, 249, 194, 255),
    VTX(-1320, 1030, -60, 0, 1024, 40, 58, 65, 255),
    VTX(-1140, 1030, -60, 1024, 1024, 157, 249, 194, 255),
    VTX(-1140, 1210, -60, 1024, -3072, 32, 32, 32, 255),
    VTX(-1110, 1210, -60, 0, -3072, 32, 32, 32, 255),
    VTX(-1350, 1210, -60, 8192, -3072, 32, 32, 32, 255),
    VTX(-1320, 1210, -60, 7168, -3072, 42, 42, 42, 255),
    VTX(-1320, 1030, -60, 7168, 1024, 157, 249, 194, 255),
    VTX(-1320, 1160, -20, 1024, -5120, 6, 31, 47, 255),
    VTX(-1320, 1160, -60, 0, -5120, 42, 42, 42, 255),
    VTX(-1140, 1160, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1140, 1160, -20, 1024, 1024, 6, 31, 47, 255),
    VTX(-1140, 1030, -20, 1024, 1024, 157, 249, 194, 255),
    VTX(-1140, 1160, -20, 1024, -2048, 75, 114, 83, 255),
    VTX(-1140, 1160, -60, 0, -2048, 42, 42, 42, 255),
    VTX(-1140, 1030, -60, 0, 1024, 42, 42, 42, 255),
    VTX(-1350, 1030, -60, 8192, 1024, 42, 42, 42, 255),
    VTX(-1110, 1030, -60, 0, 1024, 42, 42, 42, 255),
}; 

static Vtx water_temple_room_14Vtx_000E10[8] = {
    VTX(-1370, 970, -300, 0, 0, 0, 0, 0, 0),
    VTX(-610, 970, -300, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1210, -300, 0, 0, 0, 0, 0, 0),
    VTX(-610, 1210, -300, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 970, 520, 0, 0, 0, 0, 0, 0),
    VTX(-610, 970, 520, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1210, 520, 0, 0, 0, 0, 0, 0),
    VTX(-610, 1210, 520, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_14Dlist0x000E90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_14Vtx_000E10[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_14Tex_001508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_14Vtx_000060[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_001D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000160[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_002D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_0002E0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 2, 3, 0, 4, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_003508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000330[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 0, 2, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_003D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000460[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_004D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_0004A0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_005508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000620[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_018B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000660[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 23, 25, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&water_temple_room_14Vtx_000660[31], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_005D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000980[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 1, 0, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_006508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_0009D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_007508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000A10[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_14Tex_007D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000A50[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_14Vtx_000AD0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_14Vtx_000BD0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_14Vtx_000CD0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 7, 9, 0, 4, 6, 19, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_14Tex_001508[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_001508.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_001D08[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_001D08.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_002D08[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_002D08.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_003508[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_003508.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_003D08[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_003D08.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_004D08[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_004D08.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_005508[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_005508.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_005D08[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_005D08.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_006508[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_006508.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_007508[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_007508.rgb5a1.inc.c"
};

u64 water_temple_room_14Tex_007D08[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_14Tex_007D08.rgb5a1.inc.c"
};

Gfx water_temple_room_14Dlist0x008508[] = {
    gsSPDisplayList(water_temple_room_14Dlist0x000E90),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_008518[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


