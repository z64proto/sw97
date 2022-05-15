#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_06.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_06Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_06Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_06Set0000Cmd02;
static SCmdMesh water_temple_room_06Set0000Cmd03;
static SCmdObjectList water_temple_room_06Set0000Cmd04;
static SCmdActorList water_temple_room_06Set0000Cmd05;
static SCmdEndMarker water_temple_room_06Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx water_temple_room_06Vtx_000070[28];
static Vtx water_temple_room_06Vtx_000230[5];
static Vtx water_temple_room_06Vtx_000280[12];
static Vtx water_temple_room_06Vtx_000340[14];
static Vtx water_temple_room_06Vtx_000420[24];
static Vtx water_temple_room_06Vtx_0005A0[50];
static Vtx water_temple_room_06Vtx_0008C0[12];
static Vtx water_temple_room_06Vtx_000980[8];
static Vtx water_temple_room_06Vtx_003DB8[14];
static Vtx water_temple_room_06Vtx_003E98[8];
static Vtx water_temple_room_06Vtx_003F18[8];
static Vtx water_temple_room_06Vtx_003F98[4];
static Vtx water_temple_room_06Vtx_003FD8[38];
static Vtx water_temple_room_06Vtx_004238[20];
static Vtx water_temple_room_06Vtx_004378[4];
static Vtx water_temple_room_06Vtx_0043B8[32];
static Vtx water_temple_room_06Vtx_0045B8[8];
static Vtx water_temple_room_06Vtx_004638[4];
static Vtx water_temple_room_06Vtx_004678[8];
static Vtx water_temple_room_06Vtx_009318[14];
static Vtx water_temple_room_06Vtx_0093F8[8];
static Vtx water_temple_room_06Vtx_009478[8];
static Vtx water_temple_room_06Vtx_0094F8[9];
static Vtx water_temple_room_06Vtx_009588[24];
static Vtx water_temple_room_06Vtx_009708[20];
static Vtx water_temple_room_06Vtx_009848[4];
static Vtx water_temple_room_06Vtx_009888[12];
static Vtx water_temple_room_06Vtx_009948[4];
static Vtx water_temple_room_06Vtx_009988[8];
static Vtx water_temple_room_06Vtx_00E5C8[32];
static Vtx water_temple_room_06Vtx_00E7C8[32];
static Vtx water_temple_room_06Vtx_00E9C8[12];
static Vtx water_temple_room_06Vtx_00EA88[4];
static Vtx water_temple_room_06Vtx_00EAC8[8];
static Vtx water_temple_room_06Vtx_00EB48[8];
static Vtx water_temple_room_06Vtx_010DE0[32];
static Vtx water_temple_room_06Vtx_010FE0[32];
static Vtx water_temple_room_06Vtx_0111E0[8];

static SCmdEchoSettings water_temple_room_06Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_06Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_06Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh water_temple_room_06Set0000Cmd03 = {  0x0A, 0, (u32)&water_temple_room_06MeshHeader0x000050 }; // 0x0018

static SCmdObjectList water_temple_room_06Set0000Cmd04 = {  0x0B, 0x01, (u32)water_temple_room_06ObjectList0x000038 }; // 0x0020

static SCmdActorList water_temple_room_06Set0000Cmd05 = {  0x01, 0x01, (u32)water_temple_room_06ActorList0x00003C }; // 0x0028 }; 

static SCmdEndMarker water_temple_room_06Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 water_temple_room_06ObjectList0x000038[1] = {
	OBJECT_BOX,
}; 

ActorEntry water_temple_room_06ActorList0x00003C[1] = {
	{ ACTOR_DUNGEON_KEEP, -2170, 0, -180, 0, 32767, 0, 0x0023 }, //0x00003C
}; 

static u32 pad4C = 0;

MeshHeader0 water_temple_room_06MeshHeader0x000050 = { { 0 }, 0x01, (u32)&water_temple_room_06MeshDListEntry0x00005C, (u32)&(water_temple_room_06MeshDListEntry0x00005C) + sizeof(water_temple_room_06MeshDListEntry0x00005C) }; 

MeshEntry0 water_temple_room_06MeshDListEntry0x00005C[1] = {
	{ (u32)water_temple_room_06Dlist0x011390, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad68 = 0;
static u32 pad6C = 0;

static Vtx water_temple_room_06Vtx_000070[28] = {
    VTX(-1900, 100, -500, 1536, 1024, 0, 0, 0, 255),
    VTX(-1900, 100, -480, 1536, 512, 85, 118, 118, 255),
    VTX(-1960, 100, -480, 0, 512, 85, 118, 118, 255),
    VTX(-1960, 100, -500, 0, 1024, 0, 0, 0, 255),
    VTX(-1960, 100, -500, 2560, 1024, 0, 0, 0, 255),
    VTX(-1960, 100, -480, 2560, 512, 85, 118, 118, 255),
    VTX(-1960, 0, -480, 0, 512, 237, 255, 189, 255),
    VTX(-1960, 0, -500, 0, 1024, 0, 0, 0, 255),
    VTX(-1900, 0, -480, 1536, 512, 237, 255, 189, 255),
    VTX(-1900, 0, -500, 1536, 1024, 0, 0, 0, 255),
    VTX(-1900, 0, -500, 0, 1024, 0, 0, 0, 255),
    VTX(-1900, 0, -480, 0, 512, 237, 255, 189, 255),
    VTX(-1900, 100, -480, 2560, 512, 85, 118, 118, 255),
    VTX(-1900, 100, -500, 2560, 1024, 0, 0, 0, 255),
    VTX(-1610, 100, -150, 1536, 1024, 0, 0, 0, 255),
    VTX(-1630, 100, -150, 1536, 512, 85, 118, 118, 255),
    VTX(-1630, 100, -210, 0, 512, 85, 118, 118, 255),
    VTX(-1610, 100, -210, 0, 1024, 0, 0, 0, 255),
    VTX(-1610, 0, -150, 0, 1024, 0, 0, 0, 255),
    VTX(-1630, 0, -150, 0, 512, 237, 255, 189, 255),
    VTX(-1630, 100, -150, 2560, 512, 85, 118, 118, 255),
    VTX(-1610, 100, -150, 2560, 1024, 0, 0, 0, 255),
    VTX(-1610, 0, -210, 0, 1024, 0, 0, 0, 255),
    VTX(-1630, 0, -210, 0, 512, 237, 255, 189, 255),
    VTX(-1630, 0, -150, 1536, 512, 237, 255, 189, 255),
    VTX(-1610, 0, -150, 1536, 1024, 0, 0, 0, 255),
    VTX(-1610, 100, -210, 2560, 1024, 0, 0, 0, 255),
    VTX(-1630, 100, -210, 2560, 512, 85, 118, 118, 255),
}; 

static Vtx water_temple_room_06Vtx_000230[5] = {
    VTX(-1870, 120, -120, 1024, 2048, 67, 67, 68, 255),
    VTX(-1930, 120, -180, 0, 1024, 237, 255, 189, 255),
    VTX(-1990, 120, -120, -1024, 2048, 67, 67, 68, 255),
    VTX(-1870, 120, -240, 1024, 0, 67, 67, 68, 255),
    VTX(-1990, 120, -240, -1024, 0, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_000280[12] = {
    VTX(-1870, 0, -120, 1024, 1024, 237, 255, 189, 255),
    VTX(-1870, 120, -120, 1024, -1024, 67, 67, 68, 255),
    VTX(-1990, 120, -120, -1024, -1024, 67, 67, 68, 255),
    VTX(-1990, 0, -120, -1024, 1024, 237, 255, 189, 255),
    VTX(-1870, 0, -240, -1024, 1024, 237, 255, 189, 255),
    VTX(-1870, 120, -240, -1024, -1024, 67, 67, 68, 255),
    VTX(-1990, 0, -240, -1024, 1024, 237, 255, 189, 255),
    VTX(-1990, 120, -240, -1024, -1024, 67, 67, 68, 255),
    VTX(-1870, 120, -240, 1024, -1024, 67, 67, 68, 255),
    VTX(-1870, 0, -240, 1024, 1024, 237, 255, 189, 255),
    VTX(-1990, 0, -120, 1024, 1024, 237, 255, 189, 255),
    VTX(-1990, 120, -120, 1024, -1024, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_000340[14] = {
    VTX(-1630, 530, 120, 0, -9216, 67, 67, 68, 255),
    VTX(-1630, 530, -480, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 120, 120, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 120, -480, 14336, 1024, 124, 129, 112, 255),
    VTX(-2230, 120, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-2230, 120, -480, 14336, 1024, 237, 255, 189, 255),
    VTX(-2230, 530, 120, 0, -9216, 67, 67, 68, 255),
    VTX(-2230, 530, -480, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 120, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-2230, 120, 120, 14336, 1024, 237, 255, 189, 255),
    VTX(-2230, 530, 120, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 530, -480, 0, -9216, 67, 67, 68, 255),
    VTX(-1630, 120, -480, 0, 1024, 237, 255, 189, 255),
    VTX(-2230, 120, -480, 14336, 1024, 124, 129, 112, 255),
}; 

static Vtx water_temple_room_06Vtx_000420[24] = {
    VTX(-1880, 120, -480, 2, -1024, 67, 67, 68, 255),
    VTX(-1880, 0, -480, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 0, -480, 4096, 1015, 237, 255, 189, 255),
    VTX(-1630, 120, -480, 4098, -1033, 67, 67, 68, 255),
    VTX(-2230, 0, -480, 10240, 1003, 237, 255, 189, 255),
    VTX(-2230, 120, -480, 10242, -1045, 67, 67, 68, 255),
    VTX(-2230, 120, 120, 2, -1024, 124, 129, 112, 255),
    VTX(-2230, 0, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-2230, 0, 120, 10240, 1003, 237, 255, 189, 255),
    VTX(-2230, 120, 120, 10242, -1045, 67, 67, 68, 255),
    VTX(-1630, 120, 120, 2, -1024, 124, 129, 112, 255),
    VTX(-1630, 0, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-1630, 120, -480, 2, -1024, 124, 129, 112, 255),
    VTX(-1630, 0, -480, 0, 1024, 124, 129, 112, 255),
    VTX(-1630, 0, -230, 4096, 1015, 237, 255, 189, 255),
    VTX(-1630, 120, -230, 4098, -1033, 67, 67, 68, 255),
    VTX(-1630, 120, -130, 2, -1024, 67, 67, 68, 255),
    VTX(-1630, 0, -130, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 0, 120, 4096, 1015, 237, 255, 189, 255),
    VTX(-1630, 120, 120, 4098, -1033, 67, 67, 68, 255),
    VTX(-2230, 120, -480, 2, -1024, 124, 129, 112, 255),
    VTX(-2230, 0, -480, 0, 1024, 124, 129, 112, 255),
    VTX(-1980, 0, -480, 4096, 1015, 237, 255, 189, 255),
    VTX(-1980, 120, -480, 4098, -1033, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_0005A0[50] = {
    VTX(-1630, 570, -480, 0, 1024, 67, 67, 68, 255),
    VTX(-1630, 530, -480, 0, 2048, 124, 129, 112, 255),
    VTX(-1630, 530, 120, 15360, 2048, 237, 255, 189, 255),
    VTX(-1630, 570, 120, 15360, 1024, 67, 67, 68, 255),
    VTX(-2230, 530, 120, 15360, 2048, 237, 255, 189, 255),
    VTX(-1630, 570, 120, 0, 1024, 67, 67, 68, 255),
    VTX(-1630, 530, 120, 0, 2048, 124, 129, 112, 255),
    VTX(-2230, 570, 120, 15360, 1024, 67, 67, 68, 255),
    VTX(-2230, 530, -480, 0, 2048, 237, 255, 189, 255),
    VTX(-2230, 570, -480, 0, 1024, 67, 67, 68, 255),
    VTX(-2230, 530, 120, 15360, 2048, 124, 129, 112, 255),
    VTX(-1630, 530, -480, 0, 2048, 237, 255, 189, 255),
    VTX(-2230, 570, -480, 15360, 1024, 67, 67, 68, 255),
    VTX(-2230, 530, -480, 15360, 2048, 124, 129, 112, 255),
    VTX(-1980, 0, -480, 0, 982, 237, 255, 189, 255),
    VTX(-1960, 0, -480, 0, 2006, 237, 255, 189, 255),
    VTX(-1960, 100, -480, 5120, 2006, 85, 118, 118, 255),
    VTX(-1980, 120, -480, 6144, 982, 67, 67, 68, 255),
    VTX(-1880, 120, -480, 6144, 1024, 67, 67, 68, 255),
    VTX(-1900, 100, -480, 5120, 0, 85, 118, 118, 255),
    VTX(-1900, 0, -480, 0, 0, 237, 255, 189, 255),
    VTX(-1880, 0, -480, 0, 1024, 237, 255, 189, 255),
    VTX(-2110, 0, -120, -2048, -4096, 124, 129, 112, 255),
    VTX(-2130, 0, -140, -1024, -3072, 237, 255, 189, 255),
    VTX(-2230, 0, -140, 4096, -3072, 237, 255, 189, 255),
    VTX(-2230, 0, -120, 4096, -4096, 67, 67, 68, 255),
    VTX(-1630, 0, -230, 0, 982, 237, 255, 189, 255),
    VTX(-1630, 0, -210, 0, 2006, 237, 255, 189, 255),
    VTX(-1630, 100, -210, 5120, 2006, 85, 118, 118, 255),
    VTX(-1630, 120, -230, 6144, 982, 67, 67, 68, 255),
    VTX(-1630, 120, -130, 6144, 1024, 67, 67, 68, 255),
    VTX(-1630, 100, -150, 5120, 0, 85, 118, 118, 255),
    VTX(-1630, 0, -150, 0, 0, 237, 255, 189, 255),
    VTX(-1630, 0, -130, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 120, -230, 0, 1024, 67, 67, 68, 255),
    VTX(-1630, 100, -210, 1024, 2048, 85, 118, 118, 255),
    VTX(-1630, 100, -150, 4096, 2048, 85, 118, 118, 255),
    VTX(-1630, 120, -130, 5120, 1024, 67, 67, 68, 255),
    VTX(-2110, 0, -240, 5120, 2048, 124, 129, 112, 255),
    VTX(-2130, 0, -220, 4096, 1024, 237, 255, 189, 255),
    VTX(-2130, 0, -140, 0, 1024, 237, 255, 189, 255),
    VTX(-2110, 0, -120, -1024, 2048, 124, 129, 112, 255),
    VTX(-2110, 0, -240, -2048, 2048, 124, 129, 112, 255),
    VTX(-2230, 0, -240, 4096, 2048, 67, 67, 68, 255),
    VTX(-2230, 0, -220, 4096, 1024, 237, 255, 189, 255),
    VTX(-2130, 0, -220, -1024, 1024, 237, 255, 189, 255),
    VTX(-1980, 120, -480, 0, 1024, 67, 67, 68, 255),
    VTX(-1960, 100, -480, 1024, 2048, 85, 118, 118, 255),
    VTX(-1900, 100, -480, 4096, 2048, 85, 118, 118, 255),
    VTX(-1880, 120, -480, 5120, 1024, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_0008C0[12] = {
    VTX(-2230, 0, 120, -5120, 6144, 67, 67, 68, 255),
    VTX(-1990, 0, -120, -1024, 2048, 237, 255, 189, 255),
    VTX(-2110, 0, -120, -3072, 2048, 124, 129, 112, 255),
    VTX(-2230, 0, -480, -5120, -4096, 67, 67, 68, 255),
    VTX(-2110, 0, -240, -3072, 0, 124, 129, 112, 255),
    VTX(-1990, 0, -240, -1024, 0, 237, 255, 189, 255),
    VTX(-2230, 0, -240, -5120, 0, 67, 67, 68, 255),
    VTX(-1630, 0, 120, 5120, 6144, 67, 67, 68, 255),
    VTX(-1870, 0, -120, 1024, 2048, 237, 255, 189, 255),
    VTX(-1630, 0, -480, 5120, -4096, 67, 67, 68, 255),
    VTX(-1870, 0, -240, 1024, 0, 237, 255, 189, 255),
    VTX(-2230, 0, -120, -5120, 2048, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_000980[8] = {
    VTX(-2230, 0, -500, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 0, -500, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 570, -500, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 570, -500, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 0, 120, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 0, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 570, 120, 0, 0, 0, 0, 0, 0),
    VTX(-1610, 570, 120, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_06Dlist0x000A00[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_06Vtx_000980[0], 8, 0),
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
    gsSPVertex(&water_temple_room_06Vtx_000070[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 23, 0, 26, 23, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_000DB8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_000230[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 3, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_0015B8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_000280[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_001DB8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_000340[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 0, 0, 9, 10, 0, 0),
    gsSP2Triangles(11, 7, 12, 0, 7, 13, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_0025B8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_000420[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_002DB8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_0005A0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 7, 0, 8, 7, 10, 0),
    gsSP2Triangles(11, 0, 12, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&water_temple_room_06Vtx_0005A0[30], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_0035B8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_0008C0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 1, 0),
    gsSP2Triangles(7, 1, 0, 0, 4, 1, 5, 0),
    gsSP2Triangles(9, 3, 5, 0, 9, 5, 10, 0),
    gsSP2Triangles(9, 10, 8, 0, 9, 8, 7, 0),
    gsSP2Triangles(1, 4, 2, 0, 11, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_06Tex_000DB8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_000DB8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_0015B8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_0015B8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_001DB8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_001DB8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_0025B8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_0025B8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_002DB8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_002DB8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_0035B8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_0035B8.rgb5a1.inc.c"
};

static Vtx water_temple_room_06Vtx_003DB8[14] = {
    VTX(-1370, 1070, -210, 2560, 1024, 0, 0, 0, 255),
    VTX(-1390, 1070, -210, 2560, 512, 85, 118, 118, 255),
    VTX(-1390, 970, -210, 0, 512, 237, 255, 189, 255),
    VTX(-1370, 970, -210, 0, 1024, 0, 0, 0, 255),
    VTX(-1370, 1070, -150, 1536, 1024, 0, 0, 0, 255),
    VTX(-1390, 1070, -150, 1536, 512, 85, 118, 118, 255),
    VTX(-1390, 1070, -210, 0, 512, 85, 118, 118, 255),
    VTX(-1370, 1070, -210, 0, 1024, 0, 0, 0, 255),
    VTX(-1390, 970, -150, 1536, 512, 237, 255, 189, 255),
    VTX(-1370, 970, -150, 1536, 1024, 0, 0, 0, 255),
    VTX(-1370, 970, -150, 0, 1024, 0, 0, 0, 255),
    VTX(-1390, 970, -150, 0, 512, 237, 255, 189, 255),
    VTX(-1390, 1070, -150, 2560, 512, 85, 118, 118, 255),
    VTX(-1370, 1070, -150, 2560, 1024, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_06Vtx_003E98[8] = {
    VTX(-1390, 1170, -300, 0, -2048, 67, 67, 68, 255),
    VTX(-1630, 1170, -300, 6144, -2048, 237, 255, 189, 255),
    VTX(-1630, 970, -300, 6144, 2048, 237, 255, 189, 255),
    VTX(-1390, 970, -300, 0, 2048, 67, 67, 68, 255),
    VTX(-1390, 970, -60, 0, 2048, 67, 67, 68, 255),
    VTX(-1630, 970, -60, 6144, 2048, 237, 255, 189, 255),
    VTX(-1630, 1170, -60, 6144, -2048, 237, 255, 189, 255),
    VTX(-1390, 1170, -60, 0, -2048, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_003F18[8] = {
    VTX(-1390, 1170, -210, 1024, -1024, 67, 67, 68, 255),
    VTX(-1390, 1170, -300, -1024, -1024, 67, 67, 68, 255),
    VTX(-1390, 970, -300, -1024, 1024, 67, 67, 68, 255),
    VTX(-1390, 970, -210, 1024, 1024, 67, 67, 68, 255),
    VTX(-1390, 1170, -60, 1024, -1024, 67, 67, 68, 255),
    VTX(-1390, 1170, -150, -1024, -1024, 67, 67, 68, 255),
    VTX(-1390, 970, -150, -1024, 1024, 67, 67, 68, 255),
    VTX(-1390, 970, -60, 1024, 1024, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_003F98[4] = {
    VTX(-1390, 1170, -60, 6144, -5120, 67, 67, 68, 255),
    VTX(-1630, 1170, -60, 0, -5120, 237, 255, 189, 255),
    VTX(-1630, 1170, -300, 0, 1024, 237, 255, 189, 255),
    VTX(-1390, 1170, -300, 6144, 1024, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_003FD8[38] = {
    VTX(-1630, 570, -480, 14336, -1024, 124, 129, 112, 255),
    VTX(-1630, 570, 120, 0, -1024, 237, 255, 189, 255),
    VTX(-1630, 930, -480, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 930, 120, 0, -9216, 67, 67, 68, 255),
    VTX(-2230, 570, 120, 0, -1024, 124, 129, 112, 255),
    VTX(-2230, 570, -480, 14336, -1024, 237, 255, 189, 255),
    VTX(-2230, 930, 120, 0, -9216, 67, 67, 68, 255),
    VTX(-2230, 930, -480, 14336, -9216, 67, 67, 68, 255),
    VTX(-2230, 570, 120, 0, -1024, 237, 255, 189, 255),
    VTX(-1630, 930, 120, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 570, 120, 14336, -1024, 124, 129, 112, 255),
    VTX(-1630, 570, -480, 14336, -1024, 237, 255, 189, 255),
    VTX(-2230, 930, -480, 0, -9216, 67, 67, 68, 255),
    VTX(-2230, 570, -480, 0, -1024, 124, 129, 112, 255),
    VTX(-2230, 1090, 120, 0, -1024, 237, 255, 189, 255),
    VTX(-2230, 1470, 120, 0, -9216, 67, 67, 68, 255),
    VTX(-1630, 1470, 120, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 1090, 120, 14336, -1024, 124, 129, 112, 255),
    VTX(-2230, 1090, -480, 0, -1024, 237, 255, 189, 255),
    VTX(-2230, 1470, -480, 0, -9216, 67, 67, 68, 255),
    VTX(-2230, 1470, 120, 14336, -9216, 67, 67, 68, 255),
    VTX(-2230, 1090, 120, 14336, -1024, 124, 129, 112, 255),
    VTX(-2230, 1090, -480, 14336, -1024, 124, 129, 112, 255),
    VTX(-1630, 1090, -480, 0, -1024, 237, 255, 189, 255),
    VTX(-2230, 1470, -480, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 1470, -480, 0, -9216, 67, 67, 68, 255),
    VTX(-1630, 1090, -480, 14336, -1024, 124, 129, 112, 255),
    VTX(-1630, 1090, -340, 10214, -1024, 237, 255, 189, 255),
    VTX(-1630, 1470, -340, 10214, -9216, 67, 67, 68, 255),
    VTX(-1630, 1470, -480, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 1090, -20, 14336, -1024, 237, 255, 189, 255),
    VTX(-1630, 1090, 120, 10214, -1024, 237, 255, 189, 255),
    VTX(-1630, 1470, 120, 10214, -9216, 67, 67, 68, 255),
    VTX(-1630, 1470, -20, 14336, -9216, 67, 67, 68, 255),
    VTX(-1630, 1470, -20, 8192, 1024, 67, 67, 68, 255),
    VTX(-1630, 1470, -340, 0, 1024, 67, 67, 68, 255),
    VTX(-1630, 1210, -340, 0, -7168, 237, 255, 189, 255),
    VTX(-1630, 1210, -20, 8192, -7168, 237, 255, 189, 255),
}; 

static Vtx water_temple_room_06Vtx_004238[20] = {
    VTX(-1630, 1090, -340, 2048, -1024, 67, 67, 68, 255),
    VTX(-1630, 1090, -480, 0, -1024, 67, 67, 68, 255),
    VTX(-1630, 970, -480, 0, 1024, 124, 129, 112, 255),
    VTX(-1630, 970, -340, 2048, 1024, 237, 255, 189, 255),
    VTX(-1630, 1090, 120, 2048, -1024, 67, 67, 68, 255),
    VTX(-1630, 1090, -20, 0, -1024, 67, 67, 68, 255),
    VTX(-1630, 970, -20, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 970, 120, 2048, 1024, 237, 255, 189, 255),
    VTX(-2230, 970, -480, 10240, 1024, 237, 255, 189, 255),
    VTX(-2230, 1090, -480, 10240, -1024, 67, 67, 68, 255),
    VTX(-2230, 1090, 120, 0, -1024, 67, 67, 68, 255),
    VTX(-2230, 970, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-2230, 970, 120, 10240, 1024, 237, 255, 189, 255),
    VTX(-2230, 1090, 120, 10240, -1024, 67, 67, 68, 255),
    VTX(-1630, 1090, 120, 0, -1024, 67, 67, 68, 255),
    VTX(-1630, 970, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-1630, 970, -480, 10240, 1024, 237, 255, 189, 255),
    VTX(-1630, 1090, -480, 10240, -1024, 67, 67, 68, 255),
    VTX(-2230, 1090, -480, 0, -1024, 67, 67, 68, 255),
    VTX(-2230, 970, -480, 0, 1024, 124, 129, 112, 255),
}; 

static Vtx water_temple_room_06Vtx_004378[4] = {
    VTX(-1390, 1170, -150, 1024, 0, 67, 67, 68, 255),
    VTX(-1390, 1170, -210, 0, 0, 67, 67, 68, 255),
    VTX(-1390, 1070, -210, 0, 2048, 67, 67, 68, 255),
    VTX(-1390, 1070, -150, 1024, 2048, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_0043B8[32] = {
    VTX(-1630, 1170, -60, 10240, 1024, 237, 255, 189, 255),
    VTX(-1630, 970, -60, 15360, 1024, 237, 255, 189, 255),
    VTX(-1630, 970, -20, 15360, 0, 237, 255, 189, 255),
    VTX(-1630, 1210, -20, 9216, 0, 67, 67, 68, 255),
    VTX(-1630, 970, 120, 0, 0, 67, 67, 68, 255),
    VTX(-1630, 970, -480, 15360, 0, 67, 67, 68, 255),
    VTX(-1630, 930, -480, 15360, 1024, 124, 129, 112, 255),
    VTX(-1630, 930, 120, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 930, -480, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 970, -480, 0, 0, 67, 67, 68, 255),
    VTX(-2230, 970, -480, 15360, 0, 67, 67, 68, 255),
    VTX(-2230, 930, -480, 15360, 1024, 124, 129, 112, 255),
    VTX(-2230, 930, -480, 15360, 1024, 237, 255, 189, 255),
    VTX(-2230, 970, 120, 0, 0, 67, 67, 68, 255),
    VTX(-2230, 930, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-1630, 1510, 120, 0, 0, 67, 67, 68, 255),
    VTX(-1630, 1470, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-2230, 1470, 120, 15360, 1024, 237, 255, 189, 255),
    VTX(-2230, 1510, 120, 15360, 0, 67, 67, 68, 255),
    VTX(-2230, 1470, -480, 15360, 1024, 237, 255, 189, 255),
    VTX(-2230, 1510, -480, 15360, 0, 67, 67, 68, 255),
    VTX(-2230, 1510, 120, 0, 0, 67, 67, 68, 255),
    VTX(-2230, 1470, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-1630, 1470, -480, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 1510, -480, 0, 0, 67, 67, 68, 255),
    VTX(-2230, 1470, -480, 15360, 1024, 124, 129, 112, 255),
    VTX(-1630, 1510, -480, 15360, 0, 67, 67, 68, 255),
    VTX(-1630, 1470, -480, 15360, 1024, 124, 129, 112, 255),
    VTX(-1630, 1470, 120, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 930, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-2230, 930, 120, 15360, 1024, 237, 255, 189, 255),
    VTX(-2230, 970, 120, 15360, 0, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_0045B8[8] = {
    VTX(-1630, 1210, -340, 9216, 0, 67, 67, 68, 255),
    VTX(-1630, 970, -340, 15360, 0, 237, 255, 189, 255),
    VTX(-1630, 970, -300, 15360, 1024, 237, 255, 189, 255),
    VTX(-1630, 1170, -300, 10240, 1024, 237, 255, 189, 255),
    VTX(-1630, 1210, -20, 2048, 1024, 67, 67, 68, 255),
    VTX(-1630, 1210, -340, 10240, 1024, 85, 118, 118, 255),
    VTX(-1630, 1170, -300, 9216, 0, 237, 255, 189, 255),
    VTX(-1630, 1170, -60, 3072, 0, 237, 255, 189, 255),
}; 

static Vtx water_temple_room_06Vtx_004638[4] = {
    VTX(-1390, 970, -300, -1024, 0, 67, 67, 68, 255),
    VTX(-1630, 970, -300, -1024, 6144, 237, 255, 189, 255),
    VTX(-1630, 970, -60, 5120, 6144, 237, 255, 189, 255),
    VTX(-1390, 970, -60, 5120, 0, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_004678[8] = {
    VTX(-2230, 570, -480, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 570, -480, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 1510, -480, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1510, -480, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 570, 120, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 570, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 1510, 120, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1510, 120, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_06Dlist0x0046F8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_06Vtx_004678[0], 8, 0),
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
    gsSPVertex(&water_temple_room_06Vtx_003DB8[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(3, 2, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_004B18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_003E98[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_005B18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_003F18[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_006318, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_003F98[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_006B18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_003FD8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 6, 9, 0, 10, 8, 9, 0),
    gsSP2Triangles(11, 2, 12, 0, 13, 11, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&water_temple_room_06Vtx_003FD8[30], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_007318, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_004238[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_007B18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_004378[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_008318, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_0043B8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 10, 13, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 20, 0, 23, 20, 25, 0),
    gsSP2Triangles(15, 26, 27, 0, 15, 27, 28, 0),
    gsSP2Triangles(4, 29, 30, 0, 4, 30, 31, 0),
    gsSPVertex(&water_temple_room_06Vtx_0045B8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_008B18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_004638[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_06Tex_004B18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_004B18.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_005B18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_005B18.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_006318[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_006318.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_006B18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_006B18.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_007318[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_007318.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_007B18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_007B18.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_008318[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_008318.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_008B18[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_008B18.rgb5a1.inc.c"
};

static Vtx water_temple_room_06Vtx_009318[14] = {
    VTX(-1370, 1610, -150, 1536, 1024, 0, 0, 0, 255),
    VTX(-1390, 1610, -150, 1536, 512, 85, 118, 118, 255),
    VTX(-1390, 1610, -210, 0, 512, 85, 118, 118, 255),
    VTX(-1370, 1610, -210, 0, 1024, 0, 0, 0, 255),
    VTX(-1370, 1510, -150, 0, 1024, 0, 0, 0, 255),
    VTX(-1390, 1510, -150, 0, 512, 237, 255, 189, 255),
    VTX(-1390, 1610, -150, 2560, 512, 85, 118, 118, 255),
    VTX(-1370, 1610, -150, 2560, 1024, 0, 0, 0, 255),
    VTX(-1370, 1610, -210, 2560, 1024, 0, 0, 0, 255),
    VTX(-1390, 1610, -210, 2560, 512, 85, 118, 118, 255),
    VTX(-1390, 1510, -210, 0, 512, 237, 255, 189, 255),
    VTX(-1370, 1510, -210, 0, 1024, 0, 0, 0, 255),
    VTX(-1390, 1510, -150, 1536, 512, 237, 255, 189, 255),
    VTX(-1370, 1510, -150, 1536, 1024, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_06Vtx_0093F8[8] = {
    VTX(-1390, 1510, -60, 0, 2048, 67, 67, 68, 255),
    VTX(-1630, 1510, -60, 6144, 2048, 237, 255, 189, 255),
    VTX(-1630, 1710, -60, 6144, -2048, 237, 255, 189, 255),
    VTX(-1390, 1710, -60, 0, -2048, 67, 67, 68, 255),
    VTX(-1390, 1710, -300, 0, -2048, 67, 67, 68, 255),
    VTX(-1630, 1710, -300, 6144, -2048, 237, 255, 189, 255),
    VTX(-1630, 1510, -300, 6144, 2048, 237, 255, 189, 255),
    VTX(-1390, 1510, -300, 0, 2048, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_009478[8] = {
    VTX(-1390, 1710, -210, 1024, -1024, 67, 67, 68, 255),
    VTX(-1390, 1710, -300, -1024, -1024, 67, 67, 68, 255),
    VTX(-1390, 1510, -300, -1024, 1024, 67, 67, 68, 255),
    VTX(-1390, 1510, -210, 1024, 1024, 67, 67, 68, 255),
    VTX(-1390, 1710, -60, 1024, -1024, 67, 67, 68, 255),
    VTX(-1390, 1710, -150, -1024, -1024, 67, 67, 68, 255),
    VTX(-1390, 1510, -150, -1024, 1024, 67, 67, 68, 255),
    VTX(-1390, 1510, -60, 1024, 1024, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_0094F8[9] = {
    VTX(-1630, 2010, -480, 20480, -19456, 44, 44, 44, 255),
    VTX(-1630, 2010, 120, 0, -19456, 44, 44, 44, 255),
    VTX(-1930, 2010, -180, 10240, -9216, 85, 118, 118, 255),
    VTX(-2230, 2010, -480, 20480, 1024, 44, 44, 44, 255),
    VTX(-2230, 2010, 120, 0, 1024, 44, 44, 44, 255),
    VTX(-1390, 1710, -60, 6144, -5120, 67, 67, 68, 255),
    VTX(-1630, 1710, -60, 0, -5120, 237, 255, 189, 255),
    VTX(-1630, 1710, -300, 0, 1024, 237, 255, 189, 255),
    VTX(-1390, 1710, -300, 6144, 1024, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_009588[24] = {
    VTX(-1630, 2010, -340, 4096, -5120, 67, 67, 68, 255),
    VTX(-1630, 2010, -480, 0, -5120, 67, 67, 68, 255),
    VTX(-1630, 1630, -480, 0, 5120, 124, 129, 112, 255),
    VTX(-1630, 1630, -340, 4096, 5120, 237, 255, 189, 255),
    VTX(-1630, 2010, 120, 4096, -5120, 67, 67, 68, 255),
    VTX(-1630, 2010, -20, 0, -5120, 67, 67, 68, 255),
    VTX(-1630, 1630, -20, 0, 5120, 237, 255, 189, 255),
    VTX(-1630, 1630, 120, 4096, 5120, 237, 255, 189, 255),
    VTX(-1630, 2010, -480, 0, -9216, 67, 67, 68, 255),
    VTX(-2230, 2010, -480, 20480, -9216, 67, 67, 68, 255),
    VTX(-2230, 1630, -480, 20480, 1024, 124, 129, 112, 255),
    VTX(-1630, 1630, -480, 0, 1024, 237, 255, 189, 255),
    VTX(-2230, 2010, -480, 0, -9216, 67, 67, 68, 255),
    VTX(-2230, 2010, 120, 20480, -9216, 67, 67, 68, 255),
    VTX(-2230, 1630, 120, 20480, 1024, 124, 129, 112, 255),
    VTX(-2230, 1630, -480, 0, 1024, 237, 255, 189, 255),
    VTX(-2230, 2010, 120, 0, -9216, 67, 67, 68, 255),
    VTX(-1630, 2010, 120, 20480, -9216, 67, 67, 68, 255),
    VTX(-1630, 1630, 120, 20480, 1024, 124, 129, 112, 255),
    VTX(-2230, 1630, 120, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 2010, -20, 8192, 1024, 67, 67, 68, 255),
    VTX(-1630, 2010, -340, 0, 1024, 67, 67, 68, 255),
    VTX(-1630, 1750, -340, 0, -7168, 237, 255, 189, 255),
    VTX(-1630, 1750, -20, 8192, -7168, 237, 255, 189, 255),
}; 

static Vtx water_temple_room_06Vtx_009708[20] = {
    VTX(-1630, 1630, 120, 2048, -1024, 67, 67, 68, 255),
    VTX(-1630, 1630, -20, 0, -1024, 67, 67, 68, 255),
    VTX(-1630, 1510, -20, 0, 1024, 237, 255, 189, 255),
    VTX(-1630, 1510, 120, 2048, 1024, 237, 255, 189, 255),
    VTX(-1630, 1630, -340, 2048, -1024, 67, 67, 68, 255),
    VTX(-1630, 1630, -480, 0, -1024, 67, 67, 68, 255),
    VTX(-1630, 1510, -480, 0, 1024, 124, 129, 112, 255),
    VTX(-1630, 1510, -340, 2048, 1024, 237, 255, 189, 255),
    VTX(-2230, 1510, 120, 10240, 1024, 237, 255, 189, 255),
    VTX(-2230, 1630, 120, 10240, -1024, 67, 67, 68, 255),
    VTX(-1630, 1630, 120, 0, -1024, 67, 67, 68, 255),
    VTX(-1630, 1510, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-2230, 1510, -480, 10240, 1024, 237, 255, 189, 255),
    VTX(-2230, 1630, -480, 10240, -1024, 67, 67, 68, 255),
    VTX(-2230, 1630, 120, 0, -1024, 67, 67, 68, 255),
    VTX(-2230, 1510, 120, 0, 1024, 124, 129, 112, 255),
    VTX(-1630, 1510, -480, 10240, 1024, 237, 255, 189, 255),
    VTX(-1630, 1630, -480, 10240, -1024, 67, 67, 68, 255),
    VTX(-2230, 1630, -480, 0, -1024, 67, 67, 68, 255),
    VTX(-2230, 1510, -480, 0, 1024, 124, 129, 112, 255),
}; 

static Vtx water_temple_room_06Vtx_009848[4] = {
    VTX(-1390, 1710, -150, 1024, 0, 67, 67, 68, 255),
    VTX(-1390, 1710, -210, 0, 0, 67, 67, 68, 255),
    VTX(-1390, 1610, -210, 0, 2048, 67, 67, 68, 255),
    VTX(-1390, 1610, -150, 1024, 2048, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_009888[12] = {
    VTX(-1630, 1710, -60, 10240, 1024, 237, 255, 189, 255),
    VTX(-1630, 1510, -60, 15360, 1024, 237, 255, 189, 255),
    VTX(-1630, 1510, -20, 15360, 0, 237, 255, 189, 255),
    VTX(-1630, 1750, -20, 9216, 0, 67, 67, 68, 255),
    VTX(-1630, 1750, -20, 2048, 1024, 67, 67, 68, 255),
    VTX(-1630, 1750, -340, 10240, 1024, 85, 118, 118, 255),
    VTX(-1630, 1710, -300, 9216, 0, 237, 255, 189, 255),
    VTX(-1630, 1710, -60, 3072, 0, 237, 255, 189, 255),
    VTX(-1630, 1750, -340, 9216, 0, 67, 67, 68, 255),
    VTX(-1630, 1510, -340, 15360, 0, 237, 255, 189, 255),
    VTX(-1630, 1510, -300, 15360, 1024, 237, 255, 189, 255),
    VTX(-1630, 1710, -300, 10240, 1024, 237, 255, 189, 255),
}; 

static Vtx water_temple_room_06Vtx_009948[4] = {
    VTX(-1390, 1510, -300, -1024, 0, 67, 67, 68, 255),
    VTX(-1630, 1510, -300, -1024, 6144, 237, 255, 189, 255),
    VTX(-1630, 1510, -60, 5120, 6144, 237, 255, 189, 255),
    VTX(-1390, 1510, -60, 5120, 0, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_009988[8] = {
    VTX(-2230, 1510, -480, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1510, -480, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 2010, -480, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 2010, -480, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 1510, 120, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 1510, 120, 0, 0, 0, 0, 0, 0),
    VTX(-2230, 2010, 120, 0, 0, 0, 0, 0, 0),
    VTX(-1370, 2010, 120, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_06Dlist0x009A08[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_06Vtx_009988[0], 8, 0),
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
    gsSPVertex(&water_temple_room_06Vtx_009318[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(11, 10, 12, 0, 11, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_009DC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_0093F8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00ADC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_009478[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00B5C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_0094F8[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 1, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00BDC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_009588[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00C5C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_009708[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00CDC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_009848[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00D5C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_009888[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00DDC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_009948[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_06Tex_009DC8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_009DC8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00ADC8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00ADC8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00B5C8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00B5C8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00BDC8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00BDC8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00C5C8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00C5C8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00CDC8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00CDC8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00D5C8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00D5C8.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00DDC8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00DDC8.rgb5a1.inc.c"
};

static Vtx water_temple_room_06Vtx_00E5C8[32] = {
    VTX(-2060, -200, 180, -1280, -3072, 67, 67, 68, 255),
    VTX(-2060, -360, 180, -1280, 1024, 67, 67, 68, 255),
    VTX(-2150, -360, 180, 1024, 1024, 102, 121, 153, 255),
    VTX(-2150, -200, 180, 1024, -3072, 67, 67, 68, 255),
    VTX(-2230, -200, -140, -256, 2560, 67, 67, 68, 255),
    VTX(-2300, -200, -140, -2048, 2560, 67, 67, 68, 255),
    VTX(-2300, -200, -220, -2048, 4608, 67, 67, 68, 255),
    VTX(-2230, -200, -220, -256, 4608, 102, 121, 153, 255),
    VTX(-2060, -200, -140, 4096, 2560, 67, 67, 68, 255),
    VTX(-2130, -200, -140, 2304, 2560, 67, 67, 68, 255),
    VTX(-2130, -200, -220, 2304, 4608, 102, 121, 153, 255),
    VTX(-2060, -200, -220, 4096, 4608, 67, 67, 68, 255),
    VTX(-2130, 0, -140, 7168, -8192, 85, 118, 118, 255),
    VTX(-2130, -200, -140, 7168, -3072, 102, 121, 153, 255),
    VTX(-2230, -200, -140, 4608, -3072, 67, 67, 68, 255),
    VTX(-2230, 0, -140, 4608, -8192, 67, 67, 68, 255),
    VTX(-2230, 0, -220, 4608, -8192, 85, 118, 118, 255),
    VTX(-2230, -200, -220, 4608, -3072, 102, 121, 153, 255),
    VTX(-2130, -200, -220, 7168, -3072, 67, 67, 68, 255),
    VTX(-2130, 0, -220, 7168, -8192, 67, 67, 68, 255),
    VTX(-2210, -200, 180, 2560, -3072, 67, 67, 68, 255),
    VTX(-2210, -360, 180, 2560, 1024, 102, 121, 153, 255),
    VTX(-2300, -360, 180, 4864, 1024, 67, 67, 68, 255),
    VTX(-2300, -200, 180, 4864, -3072, 67, 67, 68, 255),
    VTX(-2150, -260, 200, 512, -1536, 0, 0, 0, 255),
    VTX(-2150, -260, 180, 0, -1536, 102, 121, 153, 255),
    VTX(-2150, -360, 180, 0, 1024, 102, 121, 153, 255),
    VTX(-2150, -360, 200, 512, 1024, 0, 0, 0, 255),
    VTX(-2210, -360, 200, 512, 1024, 0, 0, 0, 255),
    VTX(-2210, -360, 180, 0, 1024, 102, 121, 153, 255),
    VTX(-2210, -260, 180, 0, -1536, 102, 121, 153, 255),
    VTX(-2210, -260, 200, 512, -1536, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_06Vtx_00E7C8[32] = {
    VTX(-2210, -260, 200, 512, 2048, 0, 0, 0, 255),
    VTX(-2210, -260, 180, 0, 2048, 102, 121, 153, 255),
    VTX(-2150, -260, 180, 0, 512, 102, 121, 153, 255),
    VTX(-2150, -260, 200, 512, 512, 0, 0, 0, 255),
    VTX(-2150, -360, 200, 512, 512, 0, 0, 0, 255),
    VTX(-2150, -360, 180, 0, 512, 102, 121, 153, 255),
    VTX(-2210, -360, 180, 0, 2048, 102, 121, 153, 255),
    VTX(-2210, -360, 200, 512, 2048, 0, 0, 0, 255),
    VTX(-2060, -200, -140, 4096, 2560, 67, 67, 68, 255),
    VTX(-2180, -200, 20, 1024, -1536, 102, 121, 153, 255),
    VTX(-2300, -200, -140, -2048, 2560, 67, 67, 68, 255),
    VTX(-2300, -200, 180, -2048, -5632, 67, 67, 68, 255),
    VTX(-2060, -200, 180, 4096, -5632, 67, 67, 68, 255),
    VTX(-2230, 0, -140, 0, -4096, 85, 118, 118, 255),
    VTX(-2230, -200, -140, 0, 1024, 102, 121, 153, 255),
    VTX(-2230, -200, -220, 2048, 1024, 67, 67, 68, 255),
    VTX(-2230, 0, -220, 2048, -4096, 67, 67, 68, 255),
    VTX(-2300, -360, -220, 3072, 1024, 67, 67, 68, 255),
    VTX(-2180, -360, -170, 0, -256, 237, 255, 189, 255),
    VTX(-2060, -360, -220, -3072, 1024, 67, 67, 68, 255),
    VTX(-2060, -360, -120, -3072, -1536, 85, 118, 118, 255),
    VTX(-2300, -360, -120, 3072, -1536, 102, 121, 153, 255),
    VTX(-2300, -360, 180, 3072, -9216, 67, 67, 68, 255),
    VTX(-2060, -360, 180, -3072, -9216, 67, 67, 68, 255),
    VTX(-2300, -360, -220, 7168, 1024, 67, 67, 68, 255),
    VTX(-2300, -200, -220, 7168, -3072, 102, 121, 153, 255),
    VTX(-2300, -360, 180, -3072, 1024, 102, 121, 153, 255),
    VTX(-2300, -200, 180, -3072, -3072, 67, 67, 68, 255),
    VTX(-2060, -360, -220, 4096, 5120, 67, 67, 68, 255),
    VTX(-2180, -280, -220, 1024, 3072, 102, 121, 153, 255),
    VTX(-2300, -360, -220, -2048, 5120, 67, 67, 68, 255),
    VTX(-2300, -200, -220, -2048, 1024, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_00E9C8[12] = {
    VTX(-2060, -360, -220, 4096, 5120, 67, 67, 68, 255),
    VTX(-2060, -200, -220, 4096, 1024, 67, 67, 68, 255),
    VTX(-2180, -280, -220, 1024, 3072, 102, 121, 153, 255),
    VTX(-2300, -200, -220, -2048, 1024, 67, 67, 68, 255),
    VTX(-2130, -200, -140, 2048, 1024, 67, 67, 68, 255),
    VTX(-2130, 0, -140, 2048, -4096, 67, 67, 68, 255),
    VTX(-2130, 0, -220, 0, -4096, 85, 118, 118, 255),
    VTX(-2130, -200, -220, 0, 1024, 102, 121, 153, 255),
    VTX(-2060, -360, -220, 7168, 1024, 67, 67, 68, 255),
    VTX(-2060, -360, 180, -3072, 1024, 102, 121, 153, 255),
    VTX(-2060, -200, -220, 7168, -3072, 102, 121, 153, 255),
    VTX(-2060, -200, 180, -3072, -3072, 67, 67, 68, 255),
}; 

static Vtx water_temple_room_06Vtx_00EA88[4] = {
    VTX(-2210, -260, 180, 2048, 2048, 102, 121, 153, 255),
    VTX(-2210, -200, 180, 2048, 0, 67, 67, 68, 255),
    VTX(-2150, -200, 180, 0, 0, 67, 67, 68, 255),
    VTX(-2150, -260, 180, 0, 2048, 102, 121, 153, 255),
}; 

static Vtx water_temple_room_06Vtx_00EAC8[8] = {
    VTX(-2194, -360, -217, 2048, 1024, 0, 0, 0, 255),
    VTX(-2162, -360, -217, 0, 1024, 0, 0, 0, 255),
    VTX(-2162, 11, -217, 0, -24276, 0, 0, 0, 255),
    VTX(-2194, 11, -217, 2048, -24276, 0, 0, 0, 255),
    VTX(-2194, -360, -215, 2048, 1024, 82, 82, 82, 255),
    VTX(-2162, -360, -215, 0, 1024, 132, 146, 129, 255),
    VTX(-2162, 11, -215, 0, -24276, 132, 146, 129, 255),
    VTX(-2194, 11, -215, 2048, -24276, 82, 82, 82, 255),
}; 

static Vtx water_temple_room_06Vtx_00EB48[8] = {
    VTX(-2300, -360, -220, 0, 0, 0, 0, 0, 0),
    VTX(-2060, -360, -220, 0, 0, 0, 0, 0, 0),
    VTX(-2300, 11, -220, 0, 0, 0, 0, 0, 0),
    VTX(-2060, 11, -220, 0, 0, 0, 0, 0, 0),
    VTX(-2300, -360, 200, 0, 0, 0, 0, 0, 0),
    VTX(-2060, -360, 200, 0, 0, 0, 0, 0, 0),
    VTX(-2300, 11, 200, 0, 0, 0, 0, 0, 0),
    VTX(-2060, 11, 200, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_06Dlist0x00EBC8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_06Vtx_00EB48[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00EDE0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_06Vtx_00E5C8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_06Vtx_00E7C8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(8, 12, 9, 0, 12, 11, 9, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 18, 20, 19, 0),
    gsSP2Triangles(17, 21, 18, 0, 21, 20, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&water_temple_room_06Vtx_00E9C8[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00F5E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_06Vtx_00EA88[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_06Tex_00FDE0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_06Vtx_00EAC8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_06Tex_00EDE0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00EDE0.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00F5E0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00F5E0.rgb5a1.inc.c"
};

u64 water_temple_room_06Tex_00FDE0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_06Tex_00FDE0.rgb5a1.inc.c"
};

static Vtx water_temple_room_06Vtx_010DE0[32] = {
    VTX(-1392, 1130, -62, 0, 512, 237, 255, 189, 255),
    VTX(-1632, 1130, -62, 3072, 512, 237, 255, 189, 255),
    VTX(-1632, 1170, -62, 3072, 0, 85, 118, 118, 255),
    VTX(-1392, 1170, -62, 0, 0, 85, 118, 118, 255),
    VTX(-1632, 1130, -298, 3072, 512, 237, 255, 189, 255),
    VTX(-1392, 1130, -298, 0, 512, 237, 255, 189, 255),
    VTX(-1392, 1170, -298, 0, 0, 85, 118, 118, 255),
    VTX(-1632, 1170, -298, 3072, 0, 85, 118, 118, 255),
    VTX(-1632, 1130, -62, 256, 512, 237, 255, 189, 255),
    VTX(-1632, 1130, 118, 2560, 512, 237, 255, 189, 255),
    VTX(-1632, 1170, 118, 2560, 0, 85, 118, 118, 255),
    VTX(-1632, 1170, -62, 256, 0, 85, 118, 118, 255),
    VTX(-1632, 1130, -478, -5069, 512, 237, 255, 189, 255),
    VTX(-1632, 1130, -298, -2765, 512, 237, 255, 189, 255),
    VTX(-1632, 1170, -298, -2765, 0, 85, 118, 118, 255),
    VTX(-1632, 1170, -478, -5069, 0, 85, 118, 118, 255),
    VTX(-2228, 1130, 118, 2560, 512, 237, 255, 189, 255),
    VTX(-2228, 1130, -478, -5069, 512, 237, 255, 189, 255),
    VTX(-2228, 1170, -478, -5069, 0, 85, 118, 118, 255),
    VTX(-2228, 1170, 118, 2560, 0, 85, 118, 118, 255),
    VTX(-2228, 1130, -478, 10701, 512, 237, 255, 189, 255),
    VTX(-1632, 1130, -478, 3072, 512, 237, 255, 189, 255),
    VTX(-1632, 1170, -478, 3072, 0, 85, 118, 118, 255),
    VTX(-2228, 1170, -478, 10701, 0, 85, 118, 118, 255),
    VTX(-1632, 1130, 118, 3072, 512, 237, 255, 189, 255),
    VTX(-2228, 1130, 118, 10701, 512, 237, 255, 189, 255),
    VTX(-2228, 1170, 118, 10701, 0, 85, 118, 118, 255),
    VTX(-1632, 1170, 118, 3072, 0, 85, 118, 118, 255),
    VTX(-1392, 1130, -298, -2765, 512, 237, 255, 189, 255),
    VTX(-1392, 1130, -62, 256, 512, 237, 255, 189, 255),
    VTX(-1392, 1170, -62, 256, 0, 85, 118, 118, 255),
    VTX(-1392, 1170, -298, -2765, 0, 85, 118, 118, 255),
}; 

static Vtx water_temple_room_06Vtx_010FE0[32] = {
    VTX(-2228, 1730, -478, 0, 512, 237, 255, 189, 255),
    VTX(-1632, 1730, -478, 7629, 512, 237, 255, 189, 255),
    VTX(-1632, 1770, -478, 7629, 0, 85, 118, 118, 255),
    VTX(-2228, 1770, -478, 0, 0, 85, 118, 118, 255),
    VTX(-2228, 1730, 118, 7629, 512, 237, 255, 189, 255),
    VTX(-2228, 1730, -478, 0, 512, 237, 255, 189, 255),
    VTX(-2228, 1770, -478, 0, 0, 85, 118, 118, 255),
    VTX(-2228, 1770, 118, 7629, 0, 85, 118, 118, 255),
    VTX(-1632, 1730, 118, 7629, 512, 237, 255, 189, 255),
    VTX(-2228, 1730, 118, 0, 512, 237, 255, 189, 255),
    VTX(-2228, 1770, 118, 0, 0, 85, 118, 118, 255),
    VTX(-1632, 1770, 118, 7629, 0, 85, 118, 118, 255),
    VTX(-1632, 1770, -478, 0, 0, 85, 118, 118, 255),
    VTX(-1632, 1730, -478, 0, 512, 237, 255, 189, 255),
    VTX(-1632, 1730, 118, 7629, 512, 237, 255, 189, 255),
    VTX(-1632, 1770, 118, 7629, 0, 85, 118, 118, 255),
    VTX(-1632, 530, -478, 0, 512, 237, 255, 189, 255),
    VTX(-1632, 570, -478, 0, 0, 85, 118, 118, 255),
    VTX(-2228, 570, -478, 7629, 0, 85, 118, 118, 255),
    VTX(-2228, 530, -478, 7629, 512, 237, 255, 189, 255),
    VTX(-2228, 530, -478, 0, 512, 237, 255, 189, 255),
    VTX(-2228, 570, -478, 0, 0, 85, 118, 118, 255),
    VTX(-2228, 570, 118, 7629, 0, 85, 118, 118, 255),
    VTX(-2228, 530, 118, 7629, 512, 237, 255, 189, 255),
    VTX(-2228, 530, 118, 7629, 512, 237, 255, 189, 255),
    VTX(-2228, 570, 118, 7629, 0, 85, 118, 118, 255),
    VTX(-1632, 570, 118, 0, 0, 85, 118, 118, 255),
    VTX(-1632, 530, 118, 0, 512, 237, 255, 189, 255),
    VTX(-1632, 570, -478, 0, 0, 85, 118, 118, 255),
    VTX(-1632, 530, -478, 0, 512, 237, 255, 189, 255),
    VTX(-1632, 530, 118, 7629, 512, 237, 255, 189, 255),
    VTX(-1632, 570, 118, 7629, 0, 85, 118, 118, 255),
}; 

static Vtx water_temple_room_06Vtx_0111E0[8] = {
    VTX(-2228, 530, -478, 0, 0, 0, 0, 0, 0),
    VTX(-1392, 530, -478, 0, 0, 0, 0, 0, 0),
    VTX(-2228, 1770, -478, 0, 0, 0, 0, 0, 0),
    VTX(-1392, 1770, -478, 0, 0, 0, 0, 0, 0),
    VTX(-2228, 530, 118, 0, 0, 0, 0, 0, 0),
    VTX(-1392, 530, 118, 0, 0, 0, 0, 0, 0),
    VTX(-2228, 1770, 118, 0, 0, 0, 0, 0, 0),
    VTX(-1392, 1770, 118, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_06Dlist0x011260[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_06Vtx_0111E0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_06Vtx_010DE0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_06Vtx_010FE0[0], 32, 0),
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

Gfx water_temple_room_06Dlist0x011390[] = {
    gsSPDisplayList(water_temple_room_06Dlist0x000A00),
    gsSPDisplayList(water_temple_room_06Dlist0x0046F8),
    gsSPDisplayList(water_temple_room_06Dlist0x009A08),
    gsSPDisplayList(water_temple_room_06Dlist0x00EBC8),
    gsSPDisplayList(water_temple_room_06Dlist0x011260),
    gsSPEndDisplayList(),
}; 


