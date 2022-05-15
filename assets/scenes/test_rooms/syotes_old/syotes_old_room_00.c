#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "syotes_old_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "syotes_old_scene.h"


static SCmdEchoSettings syotes_old_room_00Set0000Cmd00;
static SCmdRoomBehavior syotes_old_room_00Set0000Cmd01;
static SCmdSkyboxDisables syotes_old_room_00Set0000Cmd02;
static SCmdMesh syotes_old_room_00Set0000Cmd03;
static SCmdObjectList syotes_old_room_00Set0000Cmd04;
static SCmdActorList syotes_old_room_00Set0000Cmd05;
static SCmdEndMarker syotes_old_room_00Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx syotes_old_room_00Vtx_000090[16];
static Vtx syotes_old_room_00Vtx_000190[4];
static Vtx syotes_old_room_00Vtx_0001D0[3];
static Vtx syotes_old_room_00Vtx_000200[12];
static Vtx syotes_old_room_00Vtx_0002C0[5];
static Vtx syotes_old_room_00Vtx_000310[16];
static Vtx syotes_old_room_00Vtx_000410[4];
static Vtx syotes_old_room_00Vtx_000450[4];
static Vtx syotes_old_room_00Vtx_000490[4];
static Vtx syotes_old_room_00Vtx_0004D0[4];
static Vtx syotes_old_room_00Vtx_000510[3];
static Vtx syotes_old_room_00Vtx_000540[12];
static Vtx syotes_old_room_00Vtx_000600[12];
static Vtx syotes_old_room_00Vtx_0006C0[12];
static Vtx syotes_old_room_00Vtx_000780[12];
static Vtx syotes_old_room_00Vtx_000840[9];
static Vtx syotes_old_room_00Vtx_0008D0[16];
static Vtx syotes_old_room_00Vtx_0009D0[12];
static Vtx syotes_old_room_00Vtx_000A90[20];
static Vtx syotes_old_room_00Vtx_000BD0[14];
static Vtx syotes_old_room_00Vtx_000CB0[4];
static Vtx syotes_old_room_00Vtx_000CF0[8];
static Vtx syotes_old_room_00Vtx_000D70[14];
static Vtx syotes_old_room_00Vtx_000E50[4];
static Vtx syotes_old_room_00Vtx_000E90[4];
static Vtx syotes_old_room_00Vtx_000ED0[2];
static Vtx syotes_old_room_00Vtx_000EF0[12];
static Vtx syotes_old_room_00Vtx_000FB0[10];
static Vtx syotes_old_room_00Vtx_001050[6];
static Vtx syotes_old_room_00Vtx_0010B0[16];
static Vtx syotes_old_room_00Vtx_0011B0[4];
static Vtx syotes_old_room_00Vtx_0011F0[4];
static Vtx syotes_old_room_00Vtx_001230[4];
static Vtx syotes_old_room_00Vtx_001270[4];
static Vtx syotes_old_room_00Vtx_0012B0[4];
static Vtx syotes_old_room_00Vtx_0012F0[4];
static Vtx syotes_old_room_00Vtx_001330[12];
static Vtx syotes_old_room_00Vtx_0013F0[12];
static Vtx syotes_old_room_00Vtx_0014B0[12];
static Vtx syotes_old_room_00Vtx_001570[12];
static Vtx syotes_old_room_00Vtx_001630[12];
static Vtx syotes_old_room_00Vtx_0016F0[12];
static Vtx syotes_old_room_00Vtx_0017B0[4];
static Vtx syotes_old_room_00Vtx_0082D0[16];
static Vtx syotes_old_room_00Vtx_0083D0[4];
static Vtx syotes_old_room_00Vtx_008410[4];
static Vtx syotes_old_room_00Vtx_008450[12];
static Vtx syotes_old_room_00Vtx_008510[12];
static Vtx syotes_old_room_00Vtx_0085D0[20];
static Vtx syotes_old_room_00Vtx_008710[5];
static Vtx syotes_old_room_00Vtx_008760[5];
static Vtx syotes_old_room_00Vtx_0087B0[7];
static Vtx syotes_old_room_00Vtx_008820[11];
static Vtx syotes_old_room_00Vtx_0088D0[12];
static Vtx syotes_old_room_00Vtx_009C70[16];
static Vtx syotes_old_room_00Vtx_009D70[4];
static Vtx syotes_old_room_00Vtx_009DB0[4];
static Vtx syotes_old_room_00Vtx_009DF0[4];
static Vtx syotes_old_room_00Vtx_009E30[12];
static Vtx syotes_old_room_00Vtx_009EF0[12];
static Vtx syotes_old_room_00Vtx_009FB0[12];
static Vtx syotes_old_room_00Vtx_00A260[31];
static Vtx syotes_old_room_00Vtx_00A450[17];

static SCmdEchoSettings syotes_old_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior syotes_old_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables syotes_old_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x00 }; // 0x0010

static SCmdMesh syotes_old_room_00Set0000Cmd03 = {  0x0A, 0, (u32)&syotes_old_room_00MeshHeader0x000070 }; // 0x0018

static SCmdObjectList syotes_old_room_00Set0000Cmd04 = {  0x0B, 0x02, (u32)syotes_old_room_00ObjectList0x000038 }; // 0x0020

static SCmdActorList syotes_old_room_00Set0000Cmd05 = {  0x01, 0x03, (u32)syotes_old_room_00ActorList0x00003C }; // 0x0028 }; 

static SCmdEndMarker syotes_old_room_00Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 syotes_old_room_00ObjectList0x000038[2] = {
	OBJECT_SKELETON,
	OBJECT_TP,
}; 

ActorEntry syotes_old_room_00ActorList0x00003C[3] = {
	{ ACTOR_EN_ITEM00, -57, 0, -101, 0, 5643, 0, 0x0008 }, //0x00003C
	{ ACTOR_EN_ITEM00, -204, 0, 111, 0, 0, 0, 0x0009 }, //0x00004C
	{ ACTOR_EN_ITEM00, 39, 0, 116, 0, 17658, 0, 0x000A }, //0x00005C
}; 

static u32 pad6C = 0;

MeshHeader0 syotes_old_room_00MeshHeader0x000070 = { { 0 }, 0x01, (u32)&syotes_old_room_00MeshDListEntry0x00007C, (u32)&(syotes_old_room_00MeshDListEntry0x00007C) + sizeof(syotes_old_room_00MeshDListEntry0x00007C) }; 

MeshEntry0 syotes_old_room_00MeshDListEntry0x00007C[1] = {
	{ (u32)syotes_old_room_00Dlist0x00A238, (u32)syotes_old_room_00Dlist0x00B7E0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad88 = 0;
static u32 pad8C = 0;

static Vtx syotes_old_room_00Vtx_000090[16] = {
    VTX(-299, 0, -199, 13312, 0, 127, 0, 0, 255),
    VTX(-299, 20, -199, 13312, 1024, 127, 0, 0, 255),
    VTX(-299, 20, -99, 8192, 1024, 127, 0, 0, 255),
    VTX(-299, 0, -99, 8192, 0, 127, 0, 0, 255),
    VTX(-299, 0, -99, 8192, 0, 89, 0, 168, 255),
    VTX(-299, 20, -99, 8192, 1024, 89, 0, 168, 255),
    VTX(-259, 20, -59, 6144, 1024, 89, 0, 168, 255),
    VTX(-259, 0, -59, 6144, 0, 89, 0, 168, 255),
    VTX(-259, 0, -59, 6144, 0, 127, 0, 0, 255),
    VTX(-259, 20, -59, 6144, 1024, 127, 0, 0, 255),
    VTX(-259, 20, 60, 0, 1024, 127, 0, 0, 255),
    VTX(-259, 0, 60, 0, 0, 127, 0, 0, 255),
    VTX(-259, 0, 60, 0, 0, 89, 0, 89, 255),
    VTX(-259, 20, 60, 0, 1024, 89, 0, 89, 255),
    VTX(-299, 20, 100, -2047, 1024, 89, 0, 89, 255),
    VTX(-299, 0, 100, -2047, 0, 89, 0, 89, 255),
}; 

static Vtx syotes_old_room_00Vtx_000190[4] = {
    VTX(-299, 0, 100, -2047, 0, 127, 0, 0, 255),
    VTX(260, 40, -39, -511, 0, 0, 0, 127, 255),
    VTX(240, 100, -39, 0, 1024, 0, 130, 0, 255),
    VTX(240, 100, 40, 0, 1536, 0, 0, 130, 255),
}; 

static Vtx syotes_old_room_00Vtx_0001D0[3] = {
    VTX(240, 100, -39, 2048, -511, 130, 0, 0, 255),
    VTX(240, 100, 40, 4096, -511, 130, 0, 0, 255),
    VTX(240, 40, -39, 2048, -2047, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000200[12] = {
    VTX(-299, 20, 100, -2047, 1024, 127, 0, 0, 255),
    VTX(-299, 20, 200, -7167, 1024, 127, 0, 0, 255),
    VTX(-299, 0, 200, -7167, 0, 127, 0, 0, 255),
    VTX(260, 100, -39, -511, 1536, 0, 0, 127, 255),
    VTX(240, 100, -39, 0, 1536, 0, 0, 127, 255),
    VTX(240, 40, -39, 0, 0, 0, 0, 127, 255),
    VTX(260, 100, -39, 0, 512, 0, 130, 0, 255),
    VTX(260, 100, 40, 2048, 512, 0, 130, 0, 255),
    VTX(240, 100, 40, 2048, 1024, 0, 130, 0, 255),
    VTX(260, 100, 40, -511, 1536, 0, 0, 130, 255),
    VTX(260, 40, 40, -511, 0, 0, 0, 130, 255),
    VTX(240, 40, 40, 0, 0, 0, 0, 130, 255),
}; 

static Vtx syotes_old_room_00Vtx_0002C0[5] = {
    VTX(240, 160, 120, 6144, 1024, 130, 0, 0, 255),
    VTX(240, 160, -119, 0, 1024, 130, 0, 0, 255),
    VTX(240, 40, 40, 4096, -2047, 130, 0, 0, 255),
    VTX(240, 40, 120, 6144, -2047, 130, 0, 0, 255),
    VTX(240, 40, -119, 0, -2047, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000310[16] = {
    VTX(200, 0, -119, 1024, 0, 0, 0, 127, 255),
    VTX(240, 0, -119, 0, 0, 0, 0, 127, 255),
    VTX(240, 40, -119, 0, 1024, 0, 0, 127, 255),
    VTX(200, 40, -119, 1024, 1024, 0, 0, 127, 255),
    VTX(240, 0, -39, 0, 0, 0, 0, 127, 255),
    VTX(260, 0, -39, -511, 0, 0, 0, 127, 255),
    VTX(260, 40, -39, -511, 1024, 0, 0, 127, 255),
    VTX(240, 40, -39, 0, 1024, 0, 0, 127, 255),
    VTX(260, 40, 40, -511, 1024, 0, 0, 130, 255),
    VTX(260, 0, 40, -511, 0, 0, 0, 130, 255),
    VTX(240, 0, 40, 0, 0, 0, 0, 130, 255),
    VTX(240, 40, 40, 0, 1024, 0, 0, 130, 255),
    VTX(240, 40, 120, 0, 1024, 0, 0, 130, 255),
    VTX(240, 0, 120, 0, 0, 0, 0, 130, 255),
    VTX(200, 0, 120, 1024, 0, 0, 0, 130, 255),
    VTX(200, 40, 120, 1024, 1024, 0, 0, 130, 255),
}; 

static Vtx syotes_old_room_00Vtx_000410[4] = {
    VTX(240, 40, 40, 4096, 1024, 130, 0, 0, 255),
    VTX(240, 0, -119, 0, 0, 130, 0, 0, 255),
    VTX(-169, 0, -189, 256, 0, 130, 0, 0, 255),
    VTX(-169, 0, 200, 0, 0, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000450[4] = {
    VTX(10, 0, 190, 256, 0, 127, 0, 0, 255),
    VTX(-169, 0, 190, 4608, 0, 0, 0, 130, 255),
    VTX(-9, 0, 190, 512, 0, 0, 0, 130, 255),
    VTX(-149, 0, 190, 256, 0, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000490[4] = {
    VTX(10, 0, -189, 0, 0, 0, 0, 127, 255),
    VTX(-149, 0, -189, 4096, 0, 0, 0, 127, 255),
    VTX(-9, 0, -189, 256, 0, 130, 0, 0, 255),
    VTX(10, 0, -199, 0, 0, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0004D0[4] = {
    VTX(-149, 0, -199, 0, 0, 127, 0, 0, 255),
    VTX(-9, 0, 200, 0, 0, 130, 0, 0, 255),
    VTX(200, 40, 200, 0, 1024, 0, 0, 130, 255),
    VTX(200, 40, 120, 8192, 1024, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000510[3] = {
    VTX(200, 0, -199, 0, 0, 130, 0, 0, 255),
    VTX(-359, 0, -199, 0, 0, 0, 0, 127, 255),
    VTX(-359, 40, 200, 0, 1024, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000540[12] = {
    VTX(240, 0, 40, 4096, 0, 130, 0, 0, 255),
    VTX(240, 0, 120, 6144, 0, 130, 0, 0, 255),
    VTX(240, 40, 120, 6144, 1024, 130, 0, 0, 255),
    VTX(240, 0, -39, 2048, 0, 130, 0, 0, 255),
    VTX(240, 40, -39, 2048, 1024, 130, 0, 0, 255),
    VTX(240, 40, -119, 0, 1024, 130, 0, 0, 255),
    VTX(-169, 40, -189, 256, 1024, 130, 0, 0, 255),
    VTX(-169, 40, -199, 0, 1024, 130, 0, 0, 255),
    VTX(-169, 0, -199, 0, 0, 130, 0, 0, 255),
    VTX(-169, 40, 200, 0, 1024, 130, 0, 0, 255),
    VTX(-169, 40, 190, 256, 1024, 130, 0, 0, 255),
    VTX(-169, 0, 190, 256, 0, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000600[12] = {
    VTX(10, 40, 190, 256, 1024, 127, 0, 0, 255),
    VTX(10, 40, 200, 0, 1024, 127, 0, 0, 255),
    VTX(10, 0, 200, 0, 0, 127, 0, 0, 255),
    VTX(-169, 40, 190, 4608, 1024, 0, 0, 130, 255),
    VTX(-149, 40, 190, 4096, 1024, 0, 0, 130, 255),
    VTX(-149, 0, 190, 4096, 0, 0, 0, 130, 255),
    VTX(-9, 40, 190, 512, 1024, 0, 0, 130, 255),
    VTX(10, 40, 190, 0, 1024, 0, 0, 130, 255),
    VTX(10, 0, 190, 0, 0, 0, 0, 130, 255),
    VTX(-149, 40, 190, 256, 1024, 127, 0, 0, 255),
    VTX(-149, 40, 200, 0, 1024, 127, 0, 0, 255),
    VTX(-149, 0, 200, 0, 0, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0006C0[12] = {
    VTX(10, 40, -189, 0, 1024, 0, 0, 127, 255),
    VTX(-9, 40, -189, 512, 1024, 0, 0, 127, 255),
    VTX(-9, 0, -189, 512, 0, 0, 0, 127, 255),
    VTX(-149, 40, -189, 4096, 1024, 0, 0, 127, 255),
    VTX(-169, 40, -189, 4608, 1024, 0, 0, 127, 255),
    VTX(-169, 0, -189, 4608, 0, 0, 0, 127, 255),
    VTX(-9, 40, -189, 256, 1024, 130, 0, 0, 255),
    VTX(-9, 40, -199, 0, 1024, 130, 0, 0, 255),
    VTX(-9, 0, -199, 0, 0, 130, 0, 0, 255),
    VTX(10, 40, -199, 0, 1024, 127, 0, 0, 255),
    VTX(10, 40, -189, 256, 1024, 127, 0, 0, 255),
    VTX(10, 0, -189, 256, 0, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000780[12] = {
    VTX(-149, 40, -199, 0, 1024, 127, 0, 0, 255),
    VTX(-149, 40, -189, 256, 1024, 127, 0, 0, 255),
    VTX(-149, 0, -189, 256, 0, 127, 0, 0, 255),
    VTX(-9, 40, 200, 0, 1024, 130, 0, 0, 255),
    VTX(-9, 40, 190, 256, 1024, 130, 0, 0, 255),
    VTX(-9, 0, 190, 256, 0, 130, 0, 0, 255),
    VTX(200, 0, 200, 0, 0, 0, 0, 130, 255),
    VTX(-359, 0, 200, 14336, 0, 0, 0, 130, 255),
    VTX(-359, 40, 200, 14336, 1024, 0, 0, 130, 255),
    VTX(200, 0, 120, 8192, 0, 130, 0, 0, 255),
    VTX(200, 0, 200, 10240, 0, 130, 0, 0, 255),
    VTX(200, 40, 200, 10240, 1024, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000840[9] = {
    VTX(200, 0, -119, 2048, 0, 130, 0, 0, 255),
    VTX(200, 40, -119, 2048, 1024, 130, 0, 0, 255),
    VTX(200, 40, -199, 0, 1024, 130, 0, 0, 255),
    VTX(200, 0, -199, 14336, 0, 0, 0, 127, 255),
    VTX(200, 40, -199, 14336, 1024, 0, 0, 127, 255),
    VTX(-359, 40, -199, 0, 1024, 0, 0, 127, 255),
    VTX(-359, 20, 200, 0, 512, 127, 0, 0, 255),
    VTX(-359, 20, -199, 10240, 512, 127, 0, 0, 255),
    VTX(-359, 40, -199, 10240, 1024, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0008D0[16] = {
    VTX(200, 40, -199, 1024, 0, 0, 0, 127, 255),
    VTX(200, 160, -199, 1024, 2048, 0, 0, 127, 255),
    VTX(-359, 160, -199, -6143, 2048, 0, 0, 127, 255),
    VTX(-359, 40, -199, -6143, 0, 0, 0, 127, 255),
    VTX(-359, 40, 200, -6143, 0, 0, 0, 130, 255),
    VTX(-359, 160, 200, -6143, 2048, 0, 0, 130, 255),
    VTX(200, 160, 200, 1024, 2048, 0, 0, 130, 255),
    VTX(200, 40, 200, 1024, 0, 0, 0, 130, 255),
    VTX(200, 40, -119, 1365, 0, 130, 0, 0, 255),
    VTX(200, 160, -119, 1365, 2048, 130, 0, 0, 255),
    VTX(200, 160, -199, 0, 2048, 130, 0, 0, 255),
    VTX(200, 40, -199, 0, 0, 130, 0, 0, 255),
    VTX(-359, 160, 200, 0, 2048, 127, 0, 0, 255),
    VTX(-359, 40, 200, 0, 0, 127, 0, 0, 255),
    VTX(-359, 40, -199, 6827, 0, 127, 0, 0, 255),
    VTX(-359, 160, -199, 6827, 2048, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0009D0[12] = {
    VTX(240, 40, -119, 341, 0, 0, 0, 127, 255),
    VTX(200, 160, 120, 1024, 2048, 0, 0, 130, 255),
    VTX(200, 160, 120, 5461, 2048, 130, 0, 0, 255),
    VTX(240, 160, -119, 341, 2048, 0, 0, 127, 255),
    VTX(200, 160, -119, 1024, 2048, 0, 0, 127, 255),
    VTX(200, 40, -119, 1024, 0, 0, 0, 127, 255),
    VTX(240, 160, 120, 341, 2048, 0, 0, 130, 255),
    VTX(240, 40, 120, 341, 0, 0, 0, 130, 255),
    VTX(200, 40, 120, 1024, 0, 0, 0, 130, 255),
    VTX(200, 40, 120, 5461, 0, 130, 0, 0, 255),
    VTX(200, 40, 200, 6827, 0, 130, 0, 0, 255),
    VTX(200, 160, 200, 6827, 2048, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000A90[20] = {
    VTX(-179, 0, -119, 6144, 5120, 0, 127, 0, 255),
    VTX(-119, 0, -59, 4608, 3584, 0, 127, 0, 255),
    VTX(60, 0, -59, 4608, -1023, 0, 127, 0, 255),
    VTX(120, 0, -119, 6144, -2559, 0, 127, 0, 255),
    VTX(-179, 0, 120, 0, 5120, 0, 127, 0, 255),
    VTX(-119, 0, 60, 1536, 3584, 0, 127, 0, 255),
    VTX(60, 0, 60, 1536, -1023, 0, 127, 0, 255),
    VTX(120, 0, 120, 0, -2559, 0, 127, 0, 255),
    VTX(160, 0, 40, 1536, 6656, 0, 127, 0, 255),
    VTX(160, 0, 160, 4608, 6656, 0, 127, 0, 255),
    VTX(240, 0, 200, 5632, 8704, 0, 127, 0, 255),
    VTX(240, 0, 40, 1536, 8704, 0, 127, 0, 255),
    VTX(-219, 0, 160, 4608, -3071, 0, 127, 0, 255),
    VTX(-299, 0, 200, 5632, -5119, 0, 127, 0, 255),
    VTX(-299, 0, -199, -4607, -5119, 0, 127, 0, 255),
    VTX(240, 0, -199, -4607, 8704, 0, 127, 0, 255),
    VTX(-219, 0, -159, -3583, -3071, 0, 127, 0, 255),
    VTX(160, 0, -159, -3583, 6656, 0, 127, 0, 255),
    VTX(160, 0, -39, -511, 6656, 0, 127, 0, 255),
    VTX(240, 0, -39, -511, 8704, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000BD0[14] = {
    VTX(160, 0, -39, 1536, -1023, 0, 127, 0, 255),
    VTX(160, 0, 40, -511, -1023, 0, 127, 0, 255),
    VTX(240, 0, 40, -511, -3071, 0, 127, 0, 255),
    VTX(240, 0, -39, 1536, -3071, 0, 127, 0, 255),
    VTX(260, 0, 40, -511, -3583, 0, 127, 0, 255),
    VTX(260, 0, -39, 1536, -3583, 0, 127, 0, 255),
    VTX(-219, 0, -159, 4608, 8704, 0, 127, 0, 255),
    VTX(-179, 0, -119, 3584, 7680, 0, 127, 0, 255),
    VTX(120, 0, -119, 3584, 0, 0, 127, 0, 255),
    VTX(160, 0, -159, 4608, -1023, 0, 127, 0, 255),
    VTX(-219, 0, 160, -3583, 8704, 0, 127, 0, 255),
    VTX(-179, 0, 120, -2559, 7680, 0, 127, 0, 255),
    VTX(120, 0, 120, -2559, 0, 0, 127, 0, 255),
    VTX(160, 0, 160, -3583, -1023, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000CB0[4] = {
    VTX(-119, 0, 60, -1023, 6144, 0, 127, 0, 255),
    VTX(60, 0, 60, -1023, 1536, 0, 127, 0, 255),
    VTX(60, 0, -59, 2048, 1536, 0, 127, 0, 255),
    VTX(-119, 0, -59, 2048, 6144, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000CF0[8] = {
    VTX(-299, 20, 100, 410, 614, 0, 127, 0, 255),
    VTX(-259, 20, 60, 328, 532, 0, 127, 0, 255),
    VTX(-259, 20, -59, 328, 287, 0, 127, 0, 255),
    VTX(-299, 20, -99, 410, 205, 0, 127, 0, 255),
    VTX(-359, 20, 200, 532, 819, 0, 127, 0, 255),
    VTX(-299, 20, 200, 410, 819, 0, 127, 0, 255),
    VTX(-299, 20, -199, 410, 0, 0, 127, 0, 255),
    VTX(-359, 20, -199, 532, 0, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000D70[14] = {
    VTX(-359, 360, -39, 0, 2048, 0, 130, 0, 255),
    VTX(200, 360, -39, 7168, 2048, 0, 130, 0, 255),
    VTX(200, 360, 40, 7168, 2048, 0, 130, 0, 255),
    VTX(-359, 360, 40, 0, 2048, 0, 130, 0, 255),
    VTX(120, 160, -199, 6144, 0, 0, 178, 99, 255),
    VTX(200, 160, -199, 7168, 0, 0, 178, 99, 255),
    VTX(200, 240, -135, 7168, 819, 0, 178, 99, 255),
    VTX(100, 240, -135, 5888, 819, 0, 178, 99, 255),
    VTX(200, 360, -39, 7168, 2048, 0, 178, 99, 255),
    VTX(-359, 360, -39, 0, 2048, 0, 178, 99, 255),
    VTX(-359, 240, -135, 0, 819, 0, 178, 99, 255),
    VTX(-359, 160, -199, 0, 0, 0, 178, 99, 255),
    VTX(-279, 160, -199, 1024, 0, 0, 178, 99, 255),
    VTX(-259, 240, -135, 1280, 819, 0, 178, 99, 255),
}; 

static Vtx syotes_old_room_00Vtx_000E50[4] = {
    VTX(-199, 160, -199, 2048, 0, 0, 178, 99, 255),
    VTX(-39, 160, -199, 4096, 0, 0, 178, 99, 255),
    VTX(240, 160, -119, -1023, 0, 0, 130, 0, 255),
    VTX(-59, 240, 136, 3840, 819, 0, 178, 158, 255),
}; 

static Vtx syotes_old_room_00Vtx_000E90[4] = {
    VTX(200, 160, -199, -2047, 0, 130, 0, 0, 255),
    VTX(-359, 240, 136, 0, 819, 0, 178, 158, 255),
    VTX(-259, 240, 136, 1280, 819, 0, 178, 158, 255),
    VTX(100, 240, 136, 5888, 819, 0, 178, 158, 255),
}; 

static Vtx syotes_old_room_00Vtx_000ED0[2] = {
    VTX(-219, 240, 136, 1792, 819, 0, 178, 158, 255),
    VTX(-359, 160, -199, -2047, 0, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_000EF0[12] = {
    VTX(-119, 160, -199, 3072, 0, 0, 178, 99, 255),
    VTX(-99, 240, -135, 3328, 819, 0, 178, 99, 255),
    VTX(-219, 240, -135, 1792, 819, 0, 178, 99, 255),
    VTX(40, 160, -199, 5120, 0, 0, 178, 99, 255),
    VTX(60, 240, -135, 5376, 819, 0, 178, 99, 255),
    VTX(-59, 240, -135, 3840, 819, 0, 178, 99, 255),
    VTX(240, 160, 120, 2048, 0, 0, 130, 0, 255),
    VTX(200, 160, 120, 2048, 0, 0, 130, 0, 255),
    VTX(200, 160, -119, -1023, 0, 0, 130, 0, 255),
    VTX(60, 240, 136, 5376, 819, 0, 178, 158, 255),
    VTX(40, 160, 200, 5120, 0, 0, 178, 158, 255),
    VTX(-39, 160, 200, 4096, 0, 0, 178, 158, 255),
}; 

static Vtx syotes_old_room_00Vtx_000FB0[10] = {
    VTX(200, 160, 200, 3072, 0, 130, 0, 0, 255),
    VTX(200, 360, 40, 1024, 2048, 130, 0, 0, 255),
    VTX(200, 360, -39, 0, 2048, 130, 0, 0, 255),
    VTX(-359, 360, 40, 0, 2048, 0, 178, 158, 255),
    VTX(200, 360, 40, 7168, 2048, 0, 178, 158, 255),
    VTX(200, 240, 136, 7168, 819, 0, 178, 158, 255),
    VTX(-279, 160, 200, 1024, 0, 0, 178, 158, 255),
    VTX(-359, 160, 200, 0, 0, 0, 178, 158, 255),
    VTX(200, 160, 200, 7168, 0, 0, 178, 158, 255),
    VTX(120, 160, 200, 6144, 0, 0, 178, 158, 255),
}; 

static Vtx syotes_old_room_00Vtx_001050[6] = {
    VTX(-99, 240, 136, 3328, 819, 0, 178, 158, 255),
    VTX(-119, 160, 200, 3072, 0, 0, 178, 158, 255),
    VTX(-199, 160, 200, 2048, 0, 0, 178, 158, 255),
    VTX(-359, 360, -39, 0, 2048, 127, 0, 0, 255),
    VTX(-359, 360, 40, 1024, 2048, 127, 0, 0, 255),
    VTX(-359, 160, 200, 3072, 0, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0010B0[16] = {
    VTX(-169, 40, 190, 475, 1024, 0, 0, 130, 255),
    VTX(-169, 172, 190, 2048, 1024, 0, 0, 130, 255),
    VTX(-149, 172, 190, 2048, 0, 0, 0, 130, 255),
    VTX(-149, 40, 190, 475, 0, 0, 0, 130, 255),
    VTX(-149, 40, -189, 475, 0, 0, 0, 127, 255),
    VTX(-149, 172, -189, 2048, 0, 0, 0, 127, 255),
    VTX(-169, 172, -189, 2048, 1024, 0, 0, 127, 255),
    VTX(-169, 40, -189, 475, 1024, 0, 0, 127, 255),
    VTX(-9, 40, 200, 1573, 512, 130, 0, 0, 255),
    VTX(-9, 160, 200, 148, 512, 130, 0, 0, 255),
    VTX(-9, 172, 190, 0, 0, 130, 0, 0, 255),
    VTX(-9, 40, 190, 1573, 0, 130, 0, 0, 255),
    VTX(10, 40, -189, 475, 0, 0, 0, 127, 255),
    VTX(10, 172, -189, 2048, 0, 0, 0, 127, 255),
    VTX(-9, 172, -189, 2048, 1024, 0, 0, 127, 255),
    VTX(-9, 40, -189, 475, 1024, 0, 0, 127, 255),
}; 

static Vtx syotes_old_room_00Vtx_0011B0[4] = {
    VTX(-169, 40, -189, 1573, 0, 130, 0, 0, 255),
    VTX(-9, 40, -189, 1573, 0, 130, 0, 0, 255),
    VTX(10, 40, -199, 1573, 512, 127, 0, 0, 255),
    VTX(-149, 40, -199, 1573, 512, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0011F0[4] = {
    VTX(-149, 40, 190, 1573, 0, 127, 0, 0, 255),
    VTX(-169, 40, 200, 1573, 512, 130, 0, 0, 255),
    VTX(-359, 160, -128, 0, 0, 89, 0, 89, 255),
    VTX(158, 160, 200, 1638, 0, 89, 0, 89, 255),
}; 

static Vtx syotes_old_room_00Vtx_001230[4] = {
    VTX(-359, 180, 129, 0, 1024, 89, 0, 168, 255),
    VTX(-359, 180, 158, 410, 1024, 0, 127, 0, 255),
    VTX(-317, 160, 200, 1638, 1024, 0, 130, 0, 255),
    VTX(-317, 160, -199, 1638, 0, 168, 0, 168, 255),
}; 

static Vtx syotes_old_room_00Vtx_001270[4] = {
    VTX(-359, 180, -128, 0, 0, 0, 127, 0, 255),
    VTX(-288, 160, -199, 2048, 0, 0, 130, 0, 255),
    VTX(-317, 180, 200, 1638, 1024, 168, 0, 89, 255),
    VTX(158, 180, -199, 1638, 1024, 89, 0, 168, 255),
}; 

static Vtx syotes_old_room_00Vtx_0012B0[4] = {
    VTX(-9, 40, 190, 475, 1024, 0, 0, 130, 255),
    VTX(10, 40, 190, 1573, 0, 127, 0, 0, 255),
    VTX(200, 180, 129, 0, 0, 0, 127, 0, 255),
    VTX(200, 180, -157, 410, 1024, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0012F0[4] = {
    VTX(200, 160, 129, 0, 0, 168, 0, 168, 255),
    VTX(200, 180, -128, 0, 1024, 168, 0, 89, 255),
    VTX(158, 160, -199, 1638, 1024, 0, 130, 0, 255),
    VTX(129, 160, 200, 2048, 0, 0, 130, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_001330[12] = {
    VTX(-169, 172, -189, 0, 0, 130, 0, 0, 255),
    VTX(-169, 160, -199, 148, 512, 130, 0, 0, 255),
    VTX(-169, 40, -199, 1573, 512, 130, 0, 0, 255),
    VTX(-9, 172, -189, 0, 0, 130, 0, 0, 255),
    VTX(-9, 160, -199, 148, 512, 130, 0, 0, 255),
    VTX(-9, 40, -199, 1573, 512, 130, 0, 0, 255),
    VTX(10, 160, -199, 148, 512, 127, 0, 0, 255),
    VTX(10, 172, -189, 0, 0, 127, 0, 0, 255),
    VTX(10, 40, -189, 1573, 0, 127, 0, 0, 255),
    VTX(-149, 160, -199, 148, 512, 127, 0, 0, 255),
    VTX(-149, 172, -189, 0, 0, 127, 0, 0, 255),
    VTX(-149, 40, -189, 1573, 0, 127, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0013F0[12] = {
    VTX(-149, 172, 190, 0, 0, 127, 0, 0, 255),
    VTX(-149, 160, 200, 148, 512, 127, 0, 0, 255),
    VTX(-149, 40, 200, 1573, 512, 127, 0, 0, 255),
    VTX(-169, 160, 200, 148, 512, 130, 0, 0, 255),
    VTX(-169, 172, 190, 0, 0, 130, 0, 0, 255),
    VTX(-169, 40, 190, 1573, 0, 130, 0, 0, 255),
    VTX(-288, 160, -199, 2048, 0, 89, 0, 89, 255),
    VTX(-288, 180, -199, 2048, 1024, 89, 0, 89, 255),
    VTX(-359, 180, -128, 0, 1024, 89, 0, 89, 255),
    VTX(200, 160, 158, 410, 0, 89, 0, 89, 255),
    VTX(200, 180, 158, 410, 1024, 89, 0, 89, 255),
    VTX(158, 180, 200, 1638, 1024, 89, 0, 89, 255),
}; 

static Vtx syotes_old_room_00Vtx_0014B0[12] = {
    VTX(-288, 180, 200, 2048, 1024, 89, 0, 168, 255),
    VTX(-288, 160, 200, 2048, 0, 89, 0, 168, 255),
    VTX(-359, 160, 129, 0, 0, 89, 0, 168, 255),
    VTX(-317, 180, 200, 1638, 1024, 0, 127, 0, 255),
    VTX(-288, 180, 200, 2048, 0, 0, 127, 0, 255),
    VTX(-359, 180, 129, 0, 0, 0, 127, 0, 255),
    VTX(-359, 160, 158, 410, 1024, 0, 130, 0, 255),
    VTX(-359, 160, 129, 0, 0, 0, 130, 0, 255),
    VTX(-288, 160, 200, 2048, 0, 0, 130, 0, 255),
    VTX(-359, 160, -157, 410, 0, 168, 0, 168, 255),
    VTX(-359, 180, -157, 410, 1024, 168, 0, 168, 255),
    VTX(-317, 180, -199, 1638, 1024, 168, 0, 168, 255),
}; 

static Vtx syotes_old_room_00Vtx_001570[12] = {
    VTX(-288, 180, -199, 2048, 0, 0, 127, 0, 255),
    VTX(-317, 180, -199, 1638, 1024, 0, 127, 0, 255),
    VTX(-359, 180, -157, 410, 1024, 0, 127, 0, 255),
    VTX(-359, 160, -128, 0, 0, 0, 130, 0, 255),
    VTX(-359, 160, -157, 410, 1024, 0, 130, 0, 255),
    VTX(-317, 160, -199, 1638, 1024, 0, 130, 0, 255),
    VTX(-359, 180, 158, 410, 1024, 168, 0, 89, 255),
    VTX(-359, 160, 158, 410, 0, 168, 0, 89, 255),
    VTX(-317, 160, 200, 1638, 0, 168, 0, 89, 255),
    VTX(200, 180, -157, 410, 1024, 89, 0, 168, 255),
    VTX(200, 160, -157, 410, 0, 89, 0, 168, 255),
    VTX(158, 160, -199, 1638, 0, 89, 0, 168, 255),
}; 

static Vtx syotes_old_room_00Vtx_001630[12] = {
    VTX(-9, 172, 190, 2048, 1024, 0, 0, 130, 255),
    VTX(10, 172, 190, 2048, 0, 0, 0, 130, 255),
    VTX(10, 40, 190, 475, 0, 0, 0, 130, 255),
    VTX(10, 172, 190, 0, 0, 127, 0, 0, 255),
    VTX(10, 160, 200, 148, 512, 127, 0, 0, 255),
    VTX(10, 40, 200, 1573, 512, 127, 0, 0, 255),
    VTX(129, 180, 200, 2048, 0, 0, 127, 0, 255),
    VTX(158, 180, 200, 1638, 1024, 0, 127, 0, 255),
    VTX(200, 180, 158, 410, 1024, 0, 127, 0, 255),
    VTX(158, 180, -199, 1638, 1024, 0, 127, 0, 255),
    VTX(129, 180, -199, 2048, 0, 0, 127, 0, 255),
    VTX(200, 180, -128, 0, 0, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0016F0[12] = {
    VTX(129, 160, 200, 2048, 0, 168, 0, 168, 255),
    VTX(129, 180, 200, 2048, 1024, 168, 0, 168, 255),
    VTX(200, 180, 129, 0, 1024, 168, 0, 168, 255),
    VTX(129, 180, -199, 2048, 1024, 168, 0, 89, 255),
    VTX(129, 160, -199, 2048, 0, 168, 0, 89, 255),
    VTX(200, 160, -128, 0, 0, 168, 0, 89, 255),
    VTX(200, 160, -157, 410, 1024, 0, 130, 0, 255),
    VTX(200, 160, -128, 0, 0, 0, 130, 0, 255),
    VTX(129, 160, -199, 2048, 0, 0, 130, 0, 255),
    VTX(200, 160, 129, 0, 0, 0, 130, 0, 255),
    VTX(200, 160, 158, 410, 1024, 0, 130, 0, 255),
    VTX(158, 160, 200, 1638, 1024, 0, 130, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0017B0[4] = {
    VTX(260, 100, -39, 0, 2048, 130, 0, 0, 255),
    VTX(260, 0, -39, 0, 0, 130, 0, 0, 255),
    VTX(260, 0, 40, 2048, 0, 130, 0, 0, 255),
    VTX(260, 100, 40, 2048, 2048, 130, 0, 0, 255),
}; 

Gfx syotes_old_room_00Dlist0x0017F0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 136, 136, 136, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_room_00Tex_0042D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes_old_room_00Vtx_000090[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000190[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000200[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0001D0[0], 3, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0002C0[0], 5, 3),
    gsSP1Triangle(0, 1, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 3, 0),
    gsSP1Triangle(2, 0, 4, 0),
    gsSP1Triangle(2, 4, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_room_00Tex_0052D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000310[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000410[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000540[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000450[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000600[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000490[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0006C0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0004D0[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000780[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000510[0], 3, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000840[0], 9, 3),
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
    gsDPLoadTextureBlock(syotes_old_room_00Tex_0062D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0008D0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0009D0[0], 12, 0),
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
    gsDPLoadTextureBlock(syotes_old_room_00Tex_002AD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000A90[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(10, 9, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(6, 5, 4, 0),
    gsSP1Triangle(6, 4, 7, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000A90[12], 8, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(2, 5, 3, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_room_00Tex_0022D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000BD0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(2, 5, 3, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(10, 11, 7, 0),
    gsSP1Triangle(10, 7, 6, 0),
    gsSP1Triangle(9, 8, 12, 0),
    gsSP1Triangle(9, 12, 13, 0),
    gsSP1Triangle(12, 11, 10, 0),
    gsSP1Triangle(12, 10, 13, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000CB0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_sceneTex_001BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000CF0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_room_00Tex_0032D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000D70[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000E50[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000EF0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000E90[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000FB0[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 1, 0),
    gsSP1Triangle(3, 9, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&syotes_old_room_00Vtx_000ED0[0], 2, 0),
    gsSPVertex(&syotes_old_room_00Vtx_001050[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_sceneTex_0023D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0010B0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0011B0[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_001330[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0011F0[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0013F0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_001230[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0014B0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_001270[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_001570[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0012B0[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_001630[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0012F0[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0016F0[0], 12, 4),
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
    gsDPLoadTextureBlock(syotes_old_room_00Tex_0072D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0017B0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 syotes_old_room_00Tex_0022D0[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_0022D0.rgb5a1.inc.c"
};

u64 syotes_old_room_00Tex_002AD0[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_002AD0.rgb5a1.inc.c"
};

u64 syotes_old_room_00Tex_0032D0[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_0032D0.rgb5a1.inc.c"
};

u64 syotes_old_room_00Tex_0042D0[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_0042D0.rgb5a1.inc.c"
};

u64 syotes_old_room_00Tex_0052D0[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_0052D0.rgb5a1.inc.c"
};

u64 syotes_old_room_00Tex_0062D0[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_0062D0.rgb5a1.inc.c"
};

u64 syotes_old_room_00Tex_0072D0[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_0072D0.rgb5a1.inc.c"
};

static Vtx syotes_old_room_00Vtx_0082D0[16] = {
    VTX(-239, 160, -199, 1024, 0, 255, 255, 255, 255),
    VTX(-239, 240, -199, 1024, 2048, 255, 255, 255, 255),
    VTX(-259, 240, -199, 512, 2048, 255, 255, 255, 255),
    VTX(-279, 160, -199, 0, 0, 255, 255, 255, 255),
    VTX(-79, 240, 200, 1024, 2048, 255, 255, 255, 255),
    VTX(-59, 240, 200, 512, 2048, 255, 255, 255, 255),
    VTX(-39, 160, 200, 0, 0, 255, 255, 255, 255),
    VTX(-79, 160, 200, 1024, 0, 255, 255, 255, 255),
    VTX(-119, 160, 200, 0, 0, 255, 255, 255, 255),
    VTX(-99, 240, 200, 512, 2048, 255, 255, 255, 255),
    VTX(-79, 240, 200, 1024, 2048, 255, 255, 255, 255),
    VTX(-79, 160, 200, 1024, 0, 255, 255, 255, 255),
    VTX(-239, 240, 200, 1024, 2048, 255, 255, 255, 255),
    VTX(-219, 240, 200, 512, 2048, 255, 255, 255, 255),
    VTX(-199, 160, 200, 0, 0, 255, 255, 255, 255),
    VTX(-239, 160, 200, 1024, 0, 255, 255, 255, 255),
}; 

static Vtx syotes_old_room_00Vtx_0083D0[4] = {
    VTX(-279, 160, 200, 0, 0, 255, 255, 255, 255),
    VTX(40, 160, 200, 0, 0, 255, 255, 255, 255),
    VTX(80, 240, 200, 1024, 2048, 255, 255, 255, 255),
    VTX(-79, 160, -199, 1024, 0, 255, 255, 255, 255),
}; 

static Vtx syotes_old_room_00Vtx_008410[4] = {
    VTX(-79, 160, -199, 1024, 0, 255, 255, 255, 255),
    VTX(-239, 160, -199, 1024, 0, 255, 255, 255, 255),
    VTX(80, 160, -199, 1024, 0, 255, 255, 255, 255),
    VTX(80, 160, -199, 1024, 0, 255, 255, 255, 255),
}; 

static Vtx syotes_old_room_00Vtx_008450[12] = {
    VTX(-259, 240, 200, 512, 2048, 255, 255, 255, 255),
    VTX(-239, 240, 200, 1024, 2048, 255, 255, 255, 255),
    VTX(-239, 160, 200, 1024, 0, 255, 255, 255, 255),
    VTX(60, 240, 200, 512, 2048, 255, 255, 255, 255),
    VTX(80, 240, 200, 1024, 2048, 255, 255, 255, 255),
    VTX(80, 160, 200, 1024, 0, 255, 255, 255, 255),
    VTX(100, 240, 200, 512, 2048, 255, 255, 255, 255),
    VTX(120, 160, 200, 0, 0, 255, 255, 255, 255),
    VTX(80, 160, 200, 1024, 0, 255, 255, 255, 255),
    VTX(-79, 240, -199, 1024, 2048, 255, 255, 255, 255),
    VTX(-99, 240, -199, 512, 2048, 255, 255, 255, 255),
    VTX(-119, 160, -199, 0, 0, 255, 255, 255, 255),
}; 

static Vtx syotes_old_room_00Vtx_008510[12] = {
    VTX(-39, 160, -199, 0, 0, 255, 255, 255, 255),
    VTX(-59, 240, -199, 512, 2048, 255, 255, 255, 255),
    VTX(-79, 240, -199, 1024, 2048, 255, 255, 255, 255),
    VTX(-199, 160, -199, 0, 0, 255, 255, 255, 255),
    VTX(-219, 240, -199, 512, 2048, 255, 255, 255, 255),
    VTX(-239, 240, -199, 1024, 2048, 255, 255, 255, 255),
    VTX(120, 160, -199, 0, 0, 255, 255, 255, 255),
    VTX(100, 240, -199, 512, 2048, 255, 255, 255, 255),
    VTX(80, 240, -199, 1024, 2048, 255, 255, 255, 255),
    VTX(80, 240, -199, 1024, 2048, 255, 255, 255, 255),
    VTX(60, 240, -199, 512, 2048, 255, 255, 255, 255),
    VTX(40, 160, -199, 0, 0, 255, 255, 255, 255),
}; 

static Vtx syotes_old_room_00Vtx_0085D0[20] = {
    VTX(-219, 240, 200, 468, 377, 255, 255, 0, 255),
    VTX(-219, 240, 136, 133, 1024, 255, 255, 0, 255),
    VTX(-199, 160, 200, 1024, 1024, 255, 255, 0, 255),
    VTX(100, 240, 200, 468, 377, 255, 255, 0, 255),
    VTX(100, 240, 136, 133, 1024, 255, 255, 0, 255),
    VTX(120, 160, 200, 1024, 1024, 255, 255, 0, 255),
    VTX(-259, 240, 200, 683, 478, 255, 255, 0, 255),
    VTX(-259, 240, 136, 683, 1024, 255, 255, 0, 255),
    VTX(-219, 240, 136, 341, 1024, 255, 255, 0, 255),
    VTX(-219, 240, 200, 341, 478, 255, 255, 0, 255),
    VTX(-119, 160, 200, 133, 1024, 255, 255, 0, 255),
    VTX(-99, 240, 136, 1024, 1024, 255, 255, 0, 255),
    VTX(-99, 240, 200, 689, 593, 255, 255, 0, 255),
    VTX(-99, 240, 200, 683, 478, 255, 255, 0, 255),
    VTX(-99, 240, 136, 683, 1024, 255, 255, 0, 255),
    VTX(-59, 240, 136, 341, 1024, 255, 255, 0, 255),
    VTX(-59, 240, 200, 341, 478, 255, 255, 0, 255),
    VTX(-59, 240, 200, 468, 377, 255, 255, 0, 255),
    VTX(60, 240, 200, 683, 478, 255, 255, 0, 255),
    VTX(40, 160, 200, 133, 1024, 255, 255, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_008710[5] = {
    VTX(-279, 160, 200, 133, 1024, 255, 255, 0, 255),
    VTX(-99, 240, -199, 689, 593, 255, 255, 0, 255),
    VTX(-199, 160, -199, 1024, 1024, 255, 255, 0, 255),
    VTX(-219, 240, -199, 341, 478, 255, 255, 0, 255),
    VTX(-259, 240, -199, 689, 593, 255, 255, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_008760[5] = {
    VTX(60, 240, -199, 689, 593, 255, 255, 0, 255),
    VTX(-59, 240, -199, 341, 478, 255, 255, 0, 255),
    VTX(-39, 160, -199, 1024, 1024, 255, 255, 0, 255),
    VTX(120, 160, -199, 1024, 1024, 255, 255, 0, 255),
    VTX(100, 240, -199, 341, 478, 255, 255, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0087B0[7] = {
    VTX(-59, 240, 136, 133, 1024, 255, 255, 0, 255),
    VTX(-39, 160, 200, 1024, 1024, 255, 255, 0, 255),
    VTX(60, 240, 136, 683, 1024, 255, 255, 0, 255),
    VTX(100, 240, 136, 341, 1024, 255, 255, 0, 255),
    VTX(100, 240, 200, 341, 478, 255, 255, 0, 255),
    VTX(60, 240, 136, 1024, 1024, 255, 255, 0, 255),
    VTX(60, 240, 200, 689, 593, 255, 255, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_008820[11] = {
    VTX(-259, 240, 136, 1024, 1024, 255, 255, 0, 255),
    VTX(-259, 240, 200, 689, 593, 255, 255, 0, 255),
    VTX(-99, 240, -135, 1024, 1024, 255, 255, 0, 255),
    VTX(-119, 160, -199, 133, 1024, 255, 255, 0, 255),
    VTX(-219, 240, -135, 133, 1024, 255, 255, 0, 255),
    VTX(-219, 240, -199, 468, 377, 255, 255, 0, 255),
    VTX(-219, 240, -135, 341, 1024, 255, 255, 0, 255),
    VTX(-259, 240, -135, 683, 1024, 255, 255, 0, 255),
    VTX(-259, 240, -199, 683, 478, 255, 255, 0, 255),
    VTX(-259, 240, -135, 1024, 1024, 255, 255, 0, 255),
    VTX(-279, 160, -199, 133, 1024, 255, 255, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_0088D0[12] = {
    VTX(60, 240, -135, 1024, 1024, 255, 255, 0, 255),
    VTX(40, 160, -199, 133, 1024, 255, 255, 0, 255),
    VTX(-59, 240, -135, 341, 1024, 255, 255, 0, 255),
    VTX(-99, 240, -135, 683, 1024, 255, 255, 0, 255),
    VTX(-99, 240, -199, 683, 478, 255, 255, 0, 255),
    VTX(-59, 240, -135, 133, 1024, 255, 255, 0, 255),
    VTX(-59, 240, -199, 468, 377, 255, 255, 0, 255),
    VTX(100, 240, -135, 133, 1024, 255, 255, 0, 255),
    VTX(100, 240, -199, 468, 377, 255, 255, 0, 255),
    VTX(100, 240, -135, 341, 1024, 255, 255, 0, 255),
    VTX(60, 240, -135, 683, 1024, 255, 255, 0, 255),
    VTX(60, 240, -199, 683, 478, 255, 255, 0, 255),
}; 

Gfx syotes_old_room_00Dlist0x008990[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_room_00Tex_008C70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes_old_room_00Vtx_0082D0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0083D0[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_008450[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_008410[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_008510[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 0, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_sceneTex_001BD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0085D0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0085D0[13], 7, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0087B0[0], 7, 7),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(5, 9, 10, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSPVertex(&syotes_old_room_00Vtx_008710[0], 5, 0),
    gsSPVertex(&syotes_old_room_00Vtx_008820[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(4, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_008760[0], 5, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0088D0[0], 11, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&syotes_old_room_00Vtx_008760[4], 1, 0),
    gsSPVertex(&syotes_old_room_00Vtx_0088D0[9], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 syotes_old_room_00Tex_008C70[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_008C70.rgb5a1.inc.c"
};

static Vtx syotes_old_room_00Vtx_009C70[16] = {
    VTX(-149, 250, -127, 1934, 1024, 127, 0, 0, 255),
    VTX(-149, 250, 128, 114, 1024, 127, 0, 0, 255),
    VTX(-149, 230, 144, 0, 0, 127, 0, 0, 255),
    VTX(-149, 230, -143, 2048, 0, 127, 0, 0, 255),
    VTX(-149, 230, -143, 2048, 9216, 0, 130, 0, 255),
    VTX(-149, 230, 144, 0, 9216, 0, 130, 0, 255),
    VTX(-169, 230, 144, 0, 8192, 0, 130, 0, 255),
    VTX(-169, 230, -143, 2048, 8192, 0, 130, 0, 255),
    VTX(-169, 230, -143, 2048, 0, 130, 0, 0, 255),
    VTX(-169, 230, 144, 0, 0, 130, 0, 0, 255),
    VTX(-169, 250, 128, 114, 1024, 130, 0, 0, 255),
    VTX(-169, 250, -127, 1934, 1024, 130, 0, 0, 255),
    VTX(-169, 250, -127, 1934, 8192, 0, 127, 0, 255),
    VTX(-169, 250, 128, 114, 8192, 0, 127, 0, 255),
    VTX(-149, 250, 128, 114, 9216, 0, 127, 0, 255),
    VTX(-149, 250, -127, 1934, 9216, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_009D70[4] = {
    VTX(-309, 250, -127, 1934, 1024, 127, 0, 0, 255),
    VTX(-309, 230, -143, 2048, 1024, 0, 130, 0, 255),
    VTX(-329, 230, -143, 2048, 0, 130, 0, 0, 255),
    VTX(150, 250, -127, 1934, 24576, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_009DB0[4] = {
    VTX(-329, 250, -127, 1934, 0, 0, 127, 0, 255),
    VTX(10, 250, -127, 1934, 1024, 127, 0, 0, 255),
    VTX(10, 230, -143, 2048, 17408, 0, 130, 0, 255),
    VTX(-9, 230, -143, 2048, 0, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_009DF0[4] = {
    VTX(150, 230, -143, 2048, 0, 130, 0, 0, 255),
    VTX(170, 230, -143, 2048, 25600, 0, 130, 0, 255),
    VTX(170, 250, -127, 1934, 1024, 127, 0, 0, 255),
    VTX(-9, 250, -127, 1934, 16384, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_009E30[12] = {
    VTX(-309, 250, 128, 114, 1024, 127, 0, 0, 255),
    VTX(-309, 230, 144, 0, 0, 127, 0, 0, 255),
    VTX(-309, 230, -143, 2048, 0, 127, 0, 0, 255),
    VTX(-309, 230, 144, 0, 1024, 0, 130, 0, 255),
    VTX(-329, 230, 144, 0, 0, 0, 130, 0, 255),
    VTX(-329, 230, -143, 2048, 0, 0, 130, 0, 255),
    VTX(-329, 230, 144, 0, 0, 130, 0, 0, 255),
    VTX(-329, 250, 128, 114, 1024, 130, 0, 0, 255),
    VTX(-329, 250, -127, 1934, 1024, 130, 0, 0, 255),
    VTX(150, 250, 128, 114, 24576, 0, 127, 0, 255),
    VTX(170, 250, 128, 114, 25600, 0, 127, 0, 255),
    VTX(170, 250, -127, 1934, 25600, 0, 127, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_009EF0[12] = {
    VTX(-329, 250, 128, 114, 0, 0, 127, 0, 255),
    VTX(-309, 250, 128, 114, 1024, 0, 127, 0, 255),
    VTX(-309, 250, -127, 1934, 1024, 0, 127, 0, 255),
    VTX(10, 250, 128, 114, 1024, 127, 0, 0, 255),
    VTX(10, 230, 144, 0, 0, 127, 0, 0, 255),
    VTX(10, 230, -143, 2048, 0, 127, 0, 0, 255),
    VTX(10, 230, 144, 0, 17408, 0, 130, 0, 255),
    VTX(-9, 230, 144, 0, 16384, 0, 130, 0, 255),
    VTX(-9, 230, -143, 2048, 16384, 0, 130, 0, 255),
    VTX(-9, 230, 144, 0, 0, 130, 0, 0, 255),
    VTX(-9, 250, 128, 114, 1024, 130, 0, 0, 255),
    VTX(-9, 250, -127, 1934, 1024, 130, 0, 0, 255),
}; 

static Vtx syotes_old_room_00Vtx_009FB0[12] = {
    VTX(150, 230, 144, 0, 0, 130, 0, 0, 255),
    VTX(150, 250, 128, 114, 1024, 130, 0, 0, 255),
    VTX(150, 250, -127, 1934, 1024, 130, 0, 0, 255),
    VTX(170, 230, 144, 0, 25600, 0, 130, 0, 255),
    VTX(150, 230, 144, 0, 24576, 0, 130, 0, 255),
    VTX(150, 230, -143, 2048, 24576, 0, 130, 0, 255),
    VTX(170, 250, 128, 114, 1024, 127, 0, 0, 255),
    VTX(170, 230, 144, 0, 0, 127, 0, 0, 255),
    VTX(170, 230, -143, 2048, 0, 127, 0, 0, 255),
    VTX(-9, 250, 128, 114, 16384, 0, 127, 0, 255),
    VTX(10, 250, 128, 114, 17408, 0, 127, 0, 255),
    VTX(10, 250, -127, 1934, 17408, 0, 127, 0, 255),
}; 

Gfx syotes_old_room_00Dlist0x00A070[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_sceneTex_0023D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes_old_room_00Vtx_009C70[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_009D70[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_009E30[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_009DB0[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_009EF0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&syotes_old_room_00Vtx_009DF0[0], 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_009FB0[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

Gfx syotes_old_room_00Dlist0x00A238[] = {
    gsSPDisplayList(syotes_old_room_00Dlist0x0017F0),
    gsSPDisplayList(syotes_old_room_00Dlist0x008990),
    gsSPDisplayList(syotes_old_room_00Dlist0x00A070),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00A258[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx syotes_old_room_00Vtx_00A260[31] = {
    VTX(-199, 160, -199, 1024, 0, 255, 255, 0, 127),
    VTX(-199, 80, -79, 1024, 2048, 255, 255, 0, 127),
    VTX(-219, 165, -22, 768, 2048, 255, 255, 0, 127),
    VTX(-219, 240, -135, 768, 126, 255, 255, 0, 127),
    VTX(-279, 160, -199, 0, 0, 255, 255, 0, 127),
    VTX(-279, 80, -79, 0, 2048, 255, 255, 0, 127),
    VTX(-259, 165, -22, 256, 2048, 255, 255, 0, 127),
    VTX(-259, 240, -135, 256, 126, 255, 255, 0, 127),
    VTX(-219, 240, 136, 768, 126, 255, 255, 0, 127),
    VTX(-219, 165, 23, 768, 2048, 255, 255, 0, 127),
    VTX(-199, 80, 80, 1024, 2048, 255, 255, 0, 127),
    VTX(-199, 160, 200, 1024, 0, 255, 255, 0, 127),
    VTX(-259, 240, 136, 256, 126, 255, 255, 0, 127),
    VTX(-259, 165, 23, 256, 2048, 255, 255, 0, 127),
    VTX(-279, 80, 80, 0, 2048, 255, 255, 0, 127),
    VTX(-39, 160, 200, 3072, 0, 255, 255, 0, 127),
    VTX(-119, 160, 200, 2048, 0, 255, 255, 0, 127),
    VTX(-99, 240, 136, 2304, 126, 255, 255, 0, 127),
    VTX(-59, 240, -135, 2816, 126, 255, 255, 0, 127),
    VTX(-99, 240, -135, 2304, 126, 255, 255, 0, 127),
    VTX(-119, 160, -199, 2048, 0, 255, 255, 0, 127),
    VTX(-39, 160, -199, 3072, 0, 255, 255, 0, 127),
    VTX(-279, 160, 200, 0, 0, 255, 255, 0, 127),
    VTX(40, 160, 200, 4096, 0, 255, 255, 0, 127),
    VTX(60, 240, 136, 4352, 126, 255, 255, 0, 127),
    VTX(100, 240, 136, 4864, 126, 255, 255, 0, 127),
    VTX(40, 160, -199, 4096, 0, 255, 255, 0, 127),
    VTX(60, 240, -135, 4352, 126, 255, 255, 0, 127),
    VTX(120, 160, -199, 5120, 0, 255, 255, 0, 127),
    VTX(100, 240, -135, 4864, 126, 255, 255, 0, 127),
    VTX(120, 160, 200, 5120, 0, 255, 255, 0, 127),
}; 

static Vtx syotes_old_room_00Vtx_00A450[17] = {
    VTX(-59, 240, 136, 2816, 126, 255, 255, 0, 127),
    VTX(-39, 80, 80, 3072, 2048, 255, 255, 0, 127),
    VTX(-119, 80, 80, 2048, 2048, 255, 255, 0, 127),
    VTX(-99, 165, 23, 2304, 2048, 255, 255, 0, 127),
    VTX(-59, 165, 23, 2816, 2048, 255, 255, 0, 127),
    VTX(-59, 165, -22, 2816, 2048, 255, 255, 0, 127),
    VTX(-99, 165, -22, 2304, 2048, 255, 255, 0, 127),
    VTX(-119, 80, -79, 2048, 2048, 255, 255, 0, 127),
    VTX(-39, 80, -79, 3072, 2048, 255, 255, 0, 127),
    VTX(40, 80, 80, 4096, 2048, 255, 255, 0, 127),
    VTX(60, 165, 23, 4352, 2048, 255, 255, 0, 127),
    VTX(100, 165, 23, 4864, 2048, 255, 255, 0, 127),
    VTX(120, 80, 80, 5120, 2048, 255, 255, 0, 127),
    VTX(40, 80, -79, 4096, 2048, 255, 255, 0, 127),
    VTX(120, 80, -79, 5120, 2048, 255, 255, 0, 127),
    VTX(60, 165, -22, 4352, 2048, 255, 255, 0, 127),
    VTX(100, 165, -22, 4864, 2048, 255, 255, 0, 127),
}; 

Gfx syotes_old_room_00Dlist0x00A560[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 0, 127),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(syotes_old_room_00Tex_00A7E0, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 9, 0),
    gsSP1Triangle(12, 9, 8, 0),
    gsSP1Triangle(7, 6, 5, 0),
    gsSP1Triangle(7, 5, 4, 0),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[10], 2, 0),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[14], 6, 2),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[22], 1, 8),
    gsSPVertex(&syotes_old_room_00Vtx_00A450[0], 7, 9),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(1, 2, 8, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 4, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 5, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 9, 0),
    gsSP1Triangle(6, 14, 15, 0),
    gsSP1Triangle(6, 15, 7, 0),
    gsSP1Triangle(9, 13, 10, 0),
    gsSP1Triangle(9, 10, 3, 0),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[12], 3, 0),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[18], 7, 3),
    gsSPVertex(&syotes_old_room_00Vtx_00A450[5], 6, 10),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 5, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSP1Triangle(6, 13, 10, 0),
    gsSP1Triangle(6, 10, 3, 0),
    gsSP1Triangle(7, 2, 1, 0),
    gsSP1Triangle(7, 1, 0, 0),
    gsSP1Triangle(8, 14, 15, 0),
    gsSP1Triangle(8, 15, 9, 0),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[24], 7, 0),
    gsSPVertex(&syotes_old_room_00Vtx_00A450[10], 7, 7),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(0, 8, 1, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 6, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 4, 0),
    gsSP1Triangle(3, 12, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(4, 11, 13, 0),
    gsSP1Triangle(4, 13, 5, 0),
    gsSP1Triangle(5, 13, 12, 0),
    gsSP1Triangle(5, 12, 3, 0),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[23], 1, 0),
    gsSPVertex(&syotes_old_room_00Vtx_00A260[30], 1, 1),
    gsSPVertex(&syotes_old_room_00Vtx_00A450[9], 1, 2),
    gsSPVertex(&syotes_old_room_00Vtx_00A450[12], 1, 3),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(1, 2, 0, 0),
    gsSPEndDisplayList(),
}; 

u64 syotes_old_room_00Tex_00A7E0[] = {
#include "assets/scenes/test_rooms/syotes_old//syotes_old_room_00Tex_00A7E0.ia16.inc.c"
};

Gfx syotes_old_room_00Dlist0x00B7E0[] = {
    gsSPDisplayList(syotes_old_room_00Dlist0x00A560),
    gsSPEndDisplayList(),
}; 


