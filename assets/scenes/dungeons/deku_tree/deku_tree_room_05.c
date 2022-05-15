#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "deku_tree_room_05.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "deku_tree_scene.h"


static SCmdEchoSettings deku_tree_room_05Set0000Cmd00;
static SCmdRoomBehavior deku_tree_room_05Set0000Cmd01;
static SCmdSkyboxDisables deku_tree_room_05Set0000Cmd02;
static SCmdMesh deku_tree_room_05Set0000Cmd03;
static SCmdObjectList deku_tree_room_05Set0000Cmd04;
static SCmdActorList deku_tree_room_05Set0000Cmd05;
static SCmdEndMarker deku_tree_room_05Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx deku_tree_room_05Vtx_0000B0[17];
static Vtx deku_tree_room_05Vtx_0001C0[72];
static Vtx deku_tree_room_05Vtx_000640[60];
static Vtx deku_tree_room_05Vtx_000A00[32];
static Vtx deku_tree_room_05Vtx_000C00[8];
static Vtx deku_tree_room_05Vtx_003FE0[13];
static Vtx deku_tree_room_05Vtx_0040B0[8];

static SCmdEchoSettings deku_tree_room_05Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior deku_tree_room_05Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables deku_tree_room_05Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh deku_tree_room_05Set0000Cmd03 = {  0x0A, 0, (u32)&deku_tree_room_05MeshHeader0x000080 }; // 0x0018

static SCmdObjectList deku_tree_room_05Set0000Cmd04 = {  0x0B, 0x09, (u32)deku_tree_room_05ObjectList0x000038 }; // 0x0020

static SCmdActorList deku_tree_room_05Set0000Cmd05 = {  0x01, 0x03, (u32)deku_tree_room_05ActorList0x00004C }; // 0x0028 }; 

static SCmdEndMarker deku_tree_room_05Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 deku_tree_room_05ObjectList0x000038[9] = {
	OBJECT_BOX,
	OBJECT_FIRE,
	OBJECT_TORCH2,
	OBJECT_YDAN_OBJECTS,
	OBJECT_GOL,
	OBJECT_ST,
	OBJECT_TP,
	OBJECT_DEKUBABA,
	OBJECT_DEKUNUTS,
}; 

ActorEntry deku_tree_room_05ActorList0x00004C[3] = {
	{ ACTOR_EN_DEKUBABA, 13, 1320, -158, 0, 0, 0, 0x0001 }, //0x00004C
	{ ACTOR_EN_DEKUBABA, -149, 1320, 10, 0, 0, 0, 0x0001 }, //0x00005C
	{ ACTOR_EN_DEKUBABA, 82, 1320, 59, 0, 0, 0, 0x0001 }, //0x00006C
}; 

static u32 pad7C = 0;

MeshHeader2 deku_tree_room_05MeshHeader0x000080 = { { 2 }, 0x02, (u32)&deku_tree_room_05MeshDListEntry0x00008C, (u32)&(deku_tree_room_05MeshDListEntry0x00008C) + sizeof(deku_tree_room_05MeshDListEntry0x00008C) }; 

MeshEntry2 deku_tree_room_05MeshDListEntry0x00008C[2] = {
	{ 0, 1520, 0, 447, 0, (u32)deku_tree_room_05Dlist0x004130 },
	{ 0, 1480, 0, 468, (u32)deku_tree_room_05Dlist0x000C80, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx deku_tree_room_05Vtx_0000B0[17] = {
    VTX(98, 1320, -244, 1024, 2048, 119, 119, 119, 255),
    VTX(98, 1480, -244, 1024, 0, 255, 255, 255, 255),
    VTX(164, 1320, -407, -1216, 2048, 0, 0, 0, 255),
    VTX(164, 1480, -407, -1216, 0, 119, 119, 119, 255),
    VTX(243, 1320, -99, 1024, 2048, 85, 85, 85, 255),
    VTX(243, 1480, -99, 1024, 0, 119, 119, 119, 255),
    VTX(98, 1480, -244, -1603, 0, 255, 255, 255, 255),
    VTX(98, 1320, -244, -1603, 2048, 119, 119, 119, 255),
    VTX(98, 1320, 242, 1024, 1024, 0, 0, 0, 255),
    VTX(98, 1400, 242, 1024, 0, 255, 255, 255, 255),
    VTX(243, 1320, 97, -1601, 1024, 0, 0, 0, 255),
    VTX(243, 1400, 97, -1601, 0, 119, 119, 119, 255),
    VTX(-101, 1320, 242, -1517, 512, 85, 85, 85, 255),
    VTX(-101, 1360, 242, -1517, 0, 255, 255, 255, 255),
    VTX(-101, 1360, 242, 1024, 0, 255, 255, 255, 255),
    VTX(-101, 1320, 242, 1024, 512, 85, 85, 85, 255),
    VTX(-243, 1320, 100, -1547, 0, 204, 204, 204, 255),
}; 

static Vtx deku_tree_room_05Vtx_0001C0[72] = {
    VTX(-168, 1360, 407, 1024, 2048, 0, 0, 0, 255),
    VTX(-101, 1360, 242, 816, 1225, 255, 255, 255, 255),
    VTX(-243, 1320, 100, 204, 1225, 255, 255, 255, 255),
    VTX(-407, 1320, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(-407, 1320, 168, 0, 2048, 0, 0, 0, 255),
    VTX(-243, 1320, 100, 208, 1226, 255, 255, 255, 255),
    VTX(-243, 1320, -102, 821, 1226, 255, 255, 255, 255),
    VTX(-168, 1320, -407, 0, 2048, 0, 0, 0, 255),
    VTX(-407, 1320, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(-243, 1320, -102, 817, 1226, 255, 255, 255, 255),
    VTX(-101, 1320, -244, 204, 1226, 255, 255, 255, 255),
    VTX(-168, 1320, -407, 0, 2048, 0, 0, 0, 255),
    VTX(-101, 1320, -244, 208, 1227, 255, 255, 255, 255),
    VTX(98, 1320, -244, 821, 1227, 119, 119, 119, 255),
    VTX(164, 1320, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(-101, 1320, 242, 815, 1224, 85, 85, 85, 255),
    VTX(98, 1320, 242, 203, 1224, 0, 0, 0, 255),
    VTX(0, 1320, -2, 505, 0, 255, 255, 255, 255),
    VTX(0, 1320, -2, 519, 0, 255, 255, 255, 255),
    VTX(243, 1320, 97, 810, 1226, 0, 0, 0, 255),
    VTX(243, 1320, -99, 198, 1226, 85, 85, 85, 255),
    VTX(0, 1320, -2, 492, 0, 255, 255, 255, 255),
    VTX(0, 1320, -2, 519, 0, 255, 255, 255, 255),
    VTX(0, 1320, -2, 507, 0, 255, 255, 255, 255),
    VTX(-101, 1320, 242, 816, 1225, 85, 85, 85, 255),
    VTX(0, 1320, -2, 507, 0, 255, 255, 255, 255),
    VTX(164, 1480, -407, 1024, 2048, 119, 119, 119, 255),
    VTX(98, 1480, -244, 824, 1227, 255, 255, 255, 255),
    VTX(243, 1480, -99, 211, 1226, 119, 119, 119, 255),
    VTX(407, 1480, -164, 0, 2048, 0, 0, 0, 255),
    VTX(98, 1320, -244, 824, 1227, 119, 119, 119, 255),
    VTX(0, 1320, -2, 526, 0, 255, 255, 255, 255),
    VTX(243, 1320, -99, 211, 1226, 85, 85, 85, 255),
    VTX(0, 1320, -2, 526, 0, 255, 255, 255, 255),
    VTX(98, 1320, 242, 211, 1224, 0, 0, 0, 255),
    VTX(243, 1320, 97, 824, 1226, 0, 0, 0, 255),
    VTX(98, 1400, 242, 211, 1224, 255, 255, 255, 255),
    VTX(407, 1400, 164, 1024, 2048, 0, 0, 0, 255),
    VTX(243, 1400, 97, 824, 1226, 119, 119, 119, 255),
    VTX(164, 1400, 407, 0, 2048, 0, 0, 0, 255),
    VTX(0, 1640, -2, 519, 0, 255, 255, 255, 255),
    VTX(-168, 1640, -407, 0, 2048, 0, 0, 0, 255),
    VTX(164, 1640, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 1640, -2, 507, 0, 255, 255, 255, 255),
    VTX(-407, 1640, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(-168, 1640, -407, 0, 2048, 0, 0, 0, 255),
    VTX(164, 1640, 407, 0, 2048, 0, 0, 0, 255),
    VTX(-168, 1640, 407, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 1640, -2, 505, 0, 255, 255, 255, 255),
    VTX(-168, 1640, 407, 1024, 2048, 0, 0, 0, 255),
    VTX(-407, 1640, 168, 0, 2048, 0, 0, 0, 255),
    VTX(0, 1640, -2, 507, 0, 255, 255, 255, 255),
    VTX(-407, 1640, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 1640, -2, 519, 0, 255, 255, 255, 255),
    VTX(-168, 1360, 407, 1024, 2048, 0, 0, 0, 255),
    VTX(164, 1400, 407, 0, 2048, 0, 0, 0, 255),
    VTX(-101, 1360, 242, 815, 1224, 255, 255, 255, 255),
    VTX(98, 1400, 242, 203, 1224, 255, 255, 255, 255),
    VTX(-407, 1320, 168, 0, 2048, 0, 0, 0, 255),
    VTX(-168, 1360, 407, 1024, 2048, 0, 0, 0, 255),
    VTX(-243, 1320, 100, 204, 1225, 255, 255, 255, 255),
    VTX(243, 1640, 97, 810, 1226, 0, 0, 0, 255),
    VTX(0, 1640, -2, 492, 0, 255, 255, 255, 255),
    VTX(243, 1640, -99, 198, 1226, 0, 0, 0, 255),
    VTX(243, 1640, -99, 211, 1226, 0, 0, 0, 255),
    VTX(0, 1640, -2, 526, 0, 255, 255, 255, 255),
    VTX(164, 1640, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(407, 1640, -164, 0, 2048, 0, 0, 0, 255),
    VTX(164, 1640, 407, 0, 2048, 0, 0, 0, 255),
    VTX(0, 1640, -2, 526, 0, 255, 255, 255, 255),
    VTX(243, 1640, 97, 824, 1226, 0, 0, 0, 255),
    VTX(407, 1640, 164, 1024, 2048, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_05Vtx_000640[60] = {
    VTX(164, 1640, -407, 6125, 4096, 0, 0, 0, 255),
    VTX(-168, 1640, -407, 4091, 4096, 0, 0, 0, 255),
    VTX(-168, 1480, -407, 4091, 2048, 255, 255, 255, 255),
    VTX(164, 1480, -407, 6125, 2048, 119, 119, 119, 255),
    VTX(-168, 1320, -407, 4091, 0, 0, 0, 0, 255),
    VTX(164, 1320, -407, 6125, 0, 0, 0, 0, 255),
    VTX(407, 1480, -164, 8228, 2048, 0, 0, 0, 255),
    VTX(307, 1580, -264, 7372, 3328, 255, 255, 255, 255),
    VTX(307, 1480, -264, 7372, 2048, 0, 0, 0, 255),
    VTX(407, 1640, -164, 8228, 4096, 0, 0, 0, 255),
    VTX(264, 1480, -307, 6984, 2048, 0, 0, 0, 255),
    VTX(264, 1580, -307, 6984, 3328, 255, 255, 255, 255),
    VTX(-168, 1360, 407, 14331, 512, 0, 0, 0, 255),
    VTX(-168, 1480, 407, 14331, 2048, 255, 255, 255, 255),
    VTX(164, 1480, 407, 12316, 2048, 255, 255, 255, 255),
    VTX(164, 1400, 407, 12316, 1024, 0, 0, 0, 255),
    VTX(-407, 1320, 168, 16372, 0, 0, 0, 0, 255),
    VTX(-407, 1480, 168, 16372, 2048, 255, 255, 255, 255),
    VTX(164, 1640, 407, 12316, 4096, 0, 0, 0, 255),
    VTX(264, 1500, 307, 11467, 2304, 255, 255, 255, 255),
    VTX(307, 1500, 264, 11081, 2304, 255, 255, 255, 255),
    VTX(407, 1640, 164, 10228, 4096, 0, 0, 0, 255),
    VTX(407, 1480, 164, 10228, 2048, 119, 119, 119, 255),
    VTX(-168, 1640, 407, 14331, 4096, 0, 0, 0, 255),
    VTX(243, 1480, -99, 1024, 0, 119, 119, 119, 255),
    VTX(407, 1640, -164, -1225, -2048, 0, 0, 0, 255),
    VTX(407, 1480, -164, -1225, 0, 0, 0, 0, 255),
    VTX(243, 1640, -99, 1024, -2048, 0, 0, 0, 255),
    VTX(-407, 1480, -168, 2036, 2048, 255, 255, 255, 255),
    VTX(-407, 1320, -168, 2036, 0, 0, 0, 0, 255),
    VTX(-407, 1640, -168, 2036, 4096, 0, 0, 0, 255),
    VTX(-407, 1320, -168, 18420, 0, 0, 0, 0, 255),
    VTX(-407, 1480, -168, 18420, 2048, 255, 255, 255, 255),
    VTX(-407, 1480, 168, 16372, 2048, 255, 255, 255, 255),
    VTX(-407, 1320, 168, 16372, 0, 0, 0, 0, 255),
    VTX(-407, 1640, -168, 18420, 4096, 0, 0, 0, 255),
    VTX(-407, 1640, 168, 16372, 4096, 0, 0, 0, 255),
    VTX(-168, 1640, 407, 14331, 4096, 0, 0, 0, 255),
    VTX(-168, 1480, 407, 14331, 2048, 255, 255, 255, 255),
    VTX(407, 1480, 164, 2258, 0, 119, 119, 119, 255),
    VTX(407, 1640, 164, 2258, -2048, 0, 0, 0, 255),
    VTX(243, 1480, 97, 0, 0, 255, 255, 255, 255),
    VTX(243, 1640, 97, 0, -2048, 0, 0, 0, 255),
    VTX(407, 1400, 164, 2258, 1024, 0, 0, 0, 255),
    VTX(243, 1400, 97, 0, 1024, 119, 119, 119, 255),
    VTX(243, 1480, 97, 2513, 0, 255, 255, 255, 255),
    VTX(243, 1640, 97, 2513, -2048, 0, 0, 0, 255),
    VTX(243, 1480, -99, 0, 0, 119, 119, 119, 255),
    VTX(243, 1640, -99, 0, -2048, 0, 0, 0, 255),
    VTX(243, 1320, 97, 2513, 2048, 0, 0, 0, 255),
    VTX(243, 1400, 97, 2513, 1024, 119, 119, 119, 255),
    VTX(243, 1320, -99, 0, 2048, 85, 85, 85, 255),
    VTX(164, 1400, 407, 12316, 1024, 0, 0, 0, 255),
    VTX(264, 1500, 307, 11467, 2304, 255, 255, 255, 255),
    VTX(264, 1400, 307, 11467, 1024, 0, 0, 0, 255),
    VTX(164, 1480, 407, 12316, 2048, 255, 255, 255, 255),
    VTX(307, 1400, 264, 11081, 1024, 0, 0, 0, 255),
    VTX(307, 1500, 264, 11081, 2304, 255, 255, 255, 255),
    VTX(407, 1400, 164, 10228, 1024, 0, 0, 0, 255),
    VTX(407, 1480, 164, 10228, 2048, 119, 119, 119, 255),
}; 

static Vtx deku_tree_room_05Vtx_000A00[32] = {
    VTX(321, 1580, -278, 205, 1638, 0, 0, 0, 255),
    VTX(307, 1580, -264, 205, 1229, 255, 255, 255, 255),
    VTX(264, 1580, -307, 819, 1229, 255, 255, 255, 255),
    VTX(278, 1580, -321, 819, 1638, 0, 0, 0, 255),
    VTX(278, 1580, -321, 1024, 1638, 0, 0, 0, 255),
    VTX(264, 1580, -307, 1024, 1229, 255, 255, 255, 255),
    VTX(278, 1480, -321, 0, 1638, 255, 255, 255, 255),
    VTX(264, 1480, -307, 0, 1229, 0, 0, 0, 255),
    VTX(278, 1500, 321, 205, 1638, 0, 0, 0, 255),
    VTX(264, 1500, 307, 205, 1229, 255, 255, 255, 255),
    VTX(307, 1500, 264, 819, 1229, 255, 255, 255, 255),
    VTX(321, 1500, 278, 819, 1638, 0, 0, 0, 255),
    VTX(321, 1400, 278, 819, 1638, 255, 255, 255, 255),
    VTX(307, 1400, 264, 819, 1229, 0, 0, 0, 255),
    VTX(264, 1400, 307, 205, 1229, 0, 0, 0, 255),
    VTX(278, 1400, 321, 205, 1638, 255, 255, 255, 255),
    VTX(278, 1400, 321, 0, 1638, 255, 255, 255, 255),
    VTX(264, 1500, 307, 1024, 1229, 255, 255, 255, 255),
    VTX(278, 1500, 321, 1024, 1638, 0, 0, 0, 255),
    VTX(264, 1400, 307, 0, 1229, 0, 0, 0, 255),
    VTX(321, 1500, 278, 1024, 1638, 0, 0, 0, 255),
    VTX(307, 1500, 264, 1024, 1229, 255, 255, 255, 255),
    VTX(321, 1400, 278, 0, 1638, 255, 255, 255, 255),
    VTX(307, 1400, 264, 0, 1229, 0, 0, 0, 255),
    VTX(278, 1480, -321, 819, 1638, 255, 255, 255, 255),
    VTX(264, 1480, -307, 819, 1229, 0, 0, 0, 255),
    VTX(307, 1480, -264, 205, 1229, 0, 0, 0, 255),
    VTX(321, 1480, -278, 205, 1638, 255, 255, 255, 255),
    VTX(321, 1480, -278, 0, 1638, 255, 255, 255, 255),
    VTX(307, 1580, -264, 1024, 1229, 255, 255, 255, 255),
    VTX(321, 1580, -278, 1024, 1638, 0, 0, 0, 255),
    VTX(307, 1480, -264, 0, 1229, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_05Vtx_000C00[8] = {
    VTX(-407, 1320, -407, 0, 0, 0, 0, 0, 0),
    VTX(407, 1320, -407, 0, 0, 0, 0, 0, 0),
    VTX(-407, 1640, -407, 0, 0, 0, 0, 0, 0),
    VTX(407, 1640, -407, 0, 0, 0, 0, 0, 0),
    VTX(-407, 1320, 407, 0, 0, 0, 0, 0, 0),
    VTX(407, 1320, 407, 0, 0, 0, 0, 0, 0),
    VTX(-407, 1640, 407, 0, 0, 0, 0, 0, 0),
    VTX(407, 1640, 407, 0, 0, 0, 0, 0, 0),
}; 

Gfx deku_tree_room_05Dlist0x000C80[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&deku_tree_room_05Vtx_000C00[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(deku_tree_room_05Tex_000FD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_tree_room_05Vtx_0000B0[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 9, 8, 0, 12, 13, 9, 0),
    gsSP1Triangle(14, 15, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_05Tex_001FD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_05Vtx_0001C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 13, 12, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 6, 5, 0, 23, 2, 24, 0),
    gsSP2Triangles(25, 10, 9, 0, 26, 27, 28, 0),
    gsSP1Triangle(26, 28, 29, 0),
    gsSPVertex(&deku_tree_room_05Vtx_0001C0[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 28, 29, 30, 0),
    gsSPVertex(&deku_tree_room_05Vtx_0001C0[61], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 8, 9, 0),
    gsSP1Triangle(10, 7, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_05Tex_002FD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_05Vtx_000640[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsSP2Triangles(10, 11, 3, 0, 11, 0, 3, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 13, 0, 16, 13, 12, 0),
    gsSP2Triangles(0, 11, 7, 0, 0, 7, 9, 0),
    gsSP2Triangles(14, 18, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(13, 23, 18, 0, 13, 18, 14, 0),
    gsSP2Triangles(20, 19, 18, 0, 20, 18, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(4, 2, 28, 0, 4, 28, 29, 0),
    gsSP2Triangles(2, 1, 30, 0, 2, 30, 28, 0),
    gsSPVertex(&deku_tree_room_05Vtx_000640[31], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(2, 5, 6, 0, 2, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 8, 10, 0, 12, 10, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 15, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 16, 20, 0),
    gsSP2Triangles(19, 14, 16, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 27, 0),
    gsSP1Triangle(26, 28, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_05Vtx_000A00[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 31, 29, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000FC8[16] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0C, 0x80, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 deku_tree_room_05Tex_000FD8[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_05Tex_000FD8.rgb5a1.inc.c"
};

u64 deku_tree_room_05Tex_001FD8[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_05Tex_001FD8.rgb5a1.inc.c"
};

u64 deku_tree_room_05Tex_002FD8[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_05Tex_002FD8.rgb5a1.inc.c"
};

static u8 unaccounted_003FD8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx deku_tree_room_05Vtx_003FE0[13] = {
    VTX(407, 1600, 164, 5175, -1562, 0, 0, 0, 255),
    VTX(-2, 1600, 0, 2560, -512, 255, 255, 255, 255),
    VTX(407, 1600, -164, 5175, 538, 0, 0, 0, 255),
    VTX(81, 1560, 203, 3092, -1813, 187, 187, 187, 255),
    VTX(164, 1500, 407, 3624, -3114, 53, 26, 0, 255),
    VTX(164, 1600, -407, 3624, 2090, 0, 0, 0, 255),
    VTX(-168, 1580, -407, 1496, 2090, 0, 0, 0, 255),
    VTX(-168, 1440, 407, 1496, -3114, 53, 26, 0, 255),
    VTX(-85, 1540, 203, 2028, -1813, 187, 187, 187, 255),
    VTX(-407, 1440, 168, -28, -1590, 53, 26, 0, 255),
    VTX(-204, 1540, 84, 1266, -1051, 187, 187, 187, 255),
    VTX(-407, 1520, -168, -28, 566, 53, 26, 0, 255),
    VTX(-204, 1560, -84, 1266, 27, 187, 187, 187, 255),
}; 

static Vtx deku_tree_room_05Vtx_0040B0[8] = {
    VTX(-591, 1435, 51, 0, 0, 0, 0, 0, 0),
    VTX(50, 1435, 589, 0, 0, 0, 0, 0, 0),
    VTX(-52, 1583, -591, 0, 0, 0, 0, 0, 0),
    VTX(589, 1583, -54, 0, 0, 0, 0, 0, 0),
    VTX(-601, 1524, 63, 0, 0, 0, 0, 0, 0),
    VTX(40, 1524, 601, 0, 0, 0, 0, 0, 0),
    VTX(-62, 1672, -579, 0, 0, 0, 0, 0, 0),
    VTX(579, 1672, -42, 0, 0, 0, 0, 0, 0),
}; 

Gfx deku_tree_room_05Dlist0x004130[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&deku_tree_room_05Vtx_0040B0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(deku_tree_room_05Tex_004228, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 191),
    gsSPVertex(&deku_tree_room_05Vtx_003FE0[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 1, 5, 2, 0),
    gsSP2Triangles(1, 6, 5, 0, 4, 7, 8, 0),
    gsSP2Triangles(4, 8, 3, 0, 8, 1, 3, 0),
    gsSP2Triangles(7, 9, 10, 0, 7, 10, 8, 0),
    gsSP2Triangles(10, 1, 8, 0, 9, 11, 12, 0),
    gsSP2Triangles(9, 12, 10, 0, 12, 1, 10, 0),
    gsSP2Triangles(11, 6, 12, 0, 6, 1, 12, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_004218[16] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x41, 0x30, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 deku_tree_room_05Tex_004228[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_05Tex_004228.ia16.inc.c"
};

static u8 unaccounted_005228[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


