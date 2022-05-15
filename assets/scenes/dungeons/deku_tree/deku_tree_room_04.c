#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "deku_tree_room_04.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "deku_tree_scene.h"


static SCmdEchoSettings deku_tree_room_04Set0000Cmd00;
static SCmdRoomBehavior deku_tree_room_04Set0000Cmd01;
static SCmdSkyboxDisables deku_tree_room_04Set0000Cmd02;
static SCmdMesh deku_tree_room_04Set0000Cmd03;
static SCmdObjectList deku_tree_room_04Set0000Cmd04;
static SCmdActorList deku_tree_room_04Set0000Cmd05;
static SCmdEndMarker deku_tree_room_04Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx deku_tree_room_04Vtx_0000E0[15];
static Vtx deku_tree_room_04Vtx_0001D0[68];
static Vtx deku_tree_room_04Vtx_000610[32];
static Vtx deku_tree_room_04Vtx_000810[12];
static Vtx deku_tree_room_04Vtx_0008D0[32];
static Vtx deku_tree_room_04Vtx_000AD0[8];

static SCmdEchoSettings deku_tree_room_04Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior deku_tree_room_04Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables deku_tree_room_04Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh deku_tree_room_04Set0000Cmd03 = {  0x0A, 0, (u32)&deku_tree_room_04MeshHeader0x0000C0 }; // 0x0018

static SCmdObjectList deku_tree_room_04Set0000Cmd04 = {  0x0B, 0x08, (u32)deku_tree_room_04ObjectList0x000038 }; // 0x0020

static SCmdActorList deku_tree_room_04Set0000Cmd05 = {  0x01, 0x07, (u32)deku_tree_room_04ActorList0x000048 }; // 0x0028 }; 

static SCmdEndMarker deku_tree_room_04Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 deku_tree_room_04ObjectList0x000038[8] = {
	OBJECT_BOX,
	OBJECT_FIRE,
	OBJECT_TORCH2,
	OBJECT_YDAN_OBJECTS,
	OBJECT_GOL,
	OBJECT_ST,
	OBJECT_TP,
	OBJECT_DEKUBABA,
}; 

ActorEntry deku_tree_room_04ActorList0x000048[7] = {
	{ ACTOR_OBJ_SYOKUDAI, -1, 1000, -6, 0, 0, 0, 0x0BFF }, //0x000048
	{ ACTOR_OBJ_SYOKUDAI, -1, 1000, -152, 0, 0, 0, 0x04C6 }, //0x000058
	{ ACTOR_OBJ_SYOKUDAI, 121, 1000, 104, 0, 0, 0, 0x04C6 }, //0x000068
	{ ACTOR_OBJ_SYOKUDAI, -123, 1000, 104, 0, 0, 0, 0x04C6 }, //0x000078
	{ ACTOR_EN_DEKUBABA, -266, 1000, -72, 0, 0, 0, 0x0001 }, //0x000088
	{ ACTOR_EN_DEKUBABA, -7, 1000, 301, 0, 0, 0, 0x0001 }, //0x000098
	{ ACTOR_EN_DEKUBABA, 22, 1000, -340, 0, 0, 0, 0x0000 }, //0x0000A8
}; 

static u32 padB8 = 0;
static u32 padBC = 0;

MeshHeader2 deku_tree_room_04MeshHeader0x0000C0 = { { 2 }, 0x01, (u32)&deku_tree_room_04MeshDListEntry0x0000CC, (u32)&(deku_tree_room_04MeshDListEntry0x0000CC) + sizeof(deku_tree_room_04MeshDListEntry0x0000CC) }; 

MeshEntry2 deku_tree_room_04MeshDListEntry0x0000CC[1] = {
	{ 0, 1140, 0, 462, (u32)deku_tree_room_04Dlist0x000B50, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx deku_tree_room_04Vtx_0000E0[15] = {
    VTX(243, 1000, -102, -1554, 512, 0, 0, 0, 255),
    VTX(243, 1040, -102, -1554, 0, 255, 255, 255, 255),
    VTX(101, 1000, -244, 1024, 0, 187, 187, 187, 255),
    VTX(243, 1040, -102, 1024, 0, 255, 255, 255, 255),
    VTX(243, 1000, 97, -1528, 1024, 0, 0, 0, 255),
    VTX(243, 1080, 97, -1528, 0, 255, 255, 255, 255),
    VTX(243, 1000, -102, 1024, 512, 0, 0, 0, 255),
    VTX(98, 1080, 242, 2626, 0, 255, 255, 255, 255),
    VTX(243, 1000, 97, 0, 1024, 0, 0, 0, 255),
    VTX(98, 1000, 242, 2626, 1024, 119, 119, 119, 255),
    VTX(243, 1080, 97, 0, 0, 255, 255, 255, 255),
    VTX(98, 1000, 242, -216, 1024, 119, 119, 119, 255),
    VTX(164, 1000, 407, 2048, 1024, 0, 0, 0, 255),
    VTX(98, 1080, 242, -216, 0, 255, 255, 255, 255),
    VTX(164, 1080, 407, 2048, 0, 51, 51, 51, 255),
}; 

static Vtx deku_tree_room_04Vtx_0001D0[68] = {
    VTX(-164, 1280, 407, 1024, 2048, 0, 0, 0, 255),
    VTX(-407, 1280, 164, 0, 2048, 0, 0, 0, 255),
    VTX(0, 1280, -2, 507, 0, 255, 255, 255, 255),
    VTX(407, 1080, 164, 1024, 2048, 0, 0, 0, 255),
    VTX(243, 1040, -102, 206, 1226, 255, 255, 255, 255),
    VTX(243, 1080, 97, 818, 1226, 255, 255, 255, 255),
    VTX(407, 1040, -168, 0, 2048, 0, 0, 0, 255),
    VTX(407, 1040, -168, 0, 2048, 0, 0, 0, 255),
    VTX(101, 1000, -244, 817, 1226, 255, 255, 255, 255),
    VTX(243, 1040, -102, 204, 1226, 255, 255, 255, 255),
    VTX(168, 1000, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(-168, 1000, -407, 0, 2048, 0, 0, 0, 255),
    VTX(-101, 1000, -244, 205, 1227, 255, 255, 255, 255),
    VTX(101, 1000, -244, 819, 1227, 255, 255, 255, 255),
    VTX(-168, 1000, -407, 0, 2048, 0, 0, 0, 255),
    VTX(-407, 1000, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(-243, 1000, -102, 817, 1226, 255, 255, 255, 255),
    VTX(-101, 1000, -244, 204, 1226, 255, 255, 255, 255),
    VTX(-407, 1000, -168, 1019, 2056, 0, 0, 0, 255),
    VTX(-407, 1000, 164, 0, 2048, 0, 0, 0, 255),
    VTX(-243, 1000, 97, 207, 1224, 255, 255, 255, 255),
    VTX(-243, 1000, -102, 816, 1229, 255, 255, 255, 255),
    VTX(0, 1000, -2, 515, -4, 255, 255, 255, 255),
    VTX(0, 1000, -2, 512, 0, 255, 255, 255, 255),
    VTX(243, 1000, 97, 818, 1226, 0, 0, 0, 255),
    VTX(243, 1000, -102, 206, 1226, 0, 0, 0, 255),
    VTX(0, 1000, -2, 512, 0, 255, 255, 255, 255),
    VTX(0, 1000, -2, 499, 0, 255, 255, 255, 255),
    VTX(-98, 1000, 242, 813, 1224, 255, 255, 255, 255),
    VTX(98, 1000, 242, 200, 1224, 119, 119, 119, 255),
    VTX(0, 1000, -2, 507, 0, 255, 255, 255, 255),
    VTX(0, 1000, -2, 526, 0, 255, 255, 255, 255),
    VTX(98, 1000, 242, 211, 1226, 119, 119, 119, 255),
    VTX(243, 1000, 97, 824, 1226, 0, 0, 0, 255),
    VTX(243, 1000, -102, 204, 1226, 0, 0, 0, 255),
    VTX(101, 1000, -244, 817, 1226, 255, 255, 255, 255),
    VTX(0, 1000, -2, 507, 0, 255, 255, 255, 255),
    VTX(0, 1000, -2, 507, 0, 255, 255, 255, 255),
    VTX(-243, 1000, 97, 204, 1226, 255, 255, 255, 255),
    VTX(-98, 1000, 242, 817, 1226, 255, 255, 255, 255),
    VTX(98, 1080, 242, 211, 1225, 255, 255, 255, 255),
    VTX(164, 1080, 407, 0, 2048, 0, 0, 0, 255),
    VTX(407, 1080, 164, 1024, 2048, 0, 0, 0, 255),
    VTX(243, 1080, 97, 824, 1226, 255, 255, 255, 255),
    VTX(-164, 1000, 407, 1024, 2048, 0, 0, 0, 255),
    VTX(164, 1000, 407, 0, 2048, 0, 0, 0, 255),
    VTX(98, 1000, 242, 200, 1224, 119, 119, 119, 255),
    VTX(-407, 1000, 164, 0, 2048, 0, 0, 0, 255),
    VTX(-407, 1280, -168, 1019, 2056, 0, 0, 0, 255),
    VTX(0, 1280, -2, 515, -4, 255, 255, 255, 255),
    VTX(-407, 1280, 164, 0, 2048, 0, 0, 0, 255),
    VTX(-407, 1280, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(-168, 1280, -407, 0, 2048, 0, 0, 0, 255),
    VTX(0, 1280, -2, 507, 0, 255, 255, 255, 255),
    VTX(-168, 1280, -407, 0, 2048, 0, 0, 0, 255),
    VTX(168, 1280, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 1280, -2, 512, 0, 255, 255, 255, 255),
    VTX(407, 1280, -168, 0, 2048, 0, 0, 0, 255),
    VTX(0, 1280, -2, 507, 0, 255, 255, 255, 255),
    VTX(407, 1280, -168, 0, 2048, 0, 0, 0, 255),
    VTX(407, 1280, 164, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 1280, -2, 512, 0, 255, 255, 255, 255),
    VTX(407, 1280, 164, 1024, 2048, 0, 0, 0, 255),
    VTX(164, 1280, 407, 0, 2048, 0, 0, 0, 255),
    VTX(0, 1280, -2, 526, 0, 255, 255, 255, 255),
    VTX(164, 1280, 407, 0, 2048, 0, 0, 0, 255),
    VTX(-164, 1280, 407, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 1280, -2, 499, 0, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_04Vtx_000610[32] = {
    VTX(-407, 1140, -168, 2048, 2048, 255, 255, 255, 255),
    VTX(-407, 1280, -168, 2048, 4096, 0, 0, 0, 255),
    VTX(-407, 1280, 164, 24, 4096, 0, 0, 0, 255),
    VTX(-407, 1140, 164, 24, 2048, 255, 255, 255, 255),
    VTX(164, 1000, 407, 12312, 0, 0, 0, 0, 255),
    VTX(-164, 1000, 407, 14312, 0, 0, 0, 0, 255),
    VTX(-164, 1140, 407, 14312, 2048, 255, 255, 255, 255),
    VTX(164, 1140, 407, 12312, 2048, 255, 255, 255, 255),
    VTX(407, 1280, -168, 8192, 4096, 0, 0, 0, 255),
    VTX(407, 1140, -168, 8192, 2048, 255, 255, 255, 255),
    VTX(407, 1140, 164, 10216, 2048, 255, 255, 255, 255),
    VTX(407, 1280, 164, 10216, 4096, 0, 0, 0, 255),
    VTX(307, 1180, 264, 11070, 2633, 255, 255, 255, 255),
    VTX(264, 1180, 307, 11458, 2633, 255, 255, 255, 255),
    VTX(164, 1280, 407, 12312, 4096, 0, 0, 0, 255),
    VTX(-264, 1000, 307, 15166, 0, 0, 0, 0, 255),
    VTX(-264, 1100, 307, 15166, 1463, 255, 255, 255, 255),
    VTX(-164, 1280, 407, 14312, 4096, 0, 0, 0, 255),
    VTX(-307, 1100, 264, 15554, 1463, 255, 255, 255, 255),
    VTX(-407, 1280, 164, 16408, 4096, 0, 0, 0, 255),
    VTX(-407, 1140, 164, 16408, 2048, 255, 255, 255, 255),
    VTX(-307, 1000, 264, 15554, 0, 0, 0, 0, 255),
    VTX(-407, 1000, 164, 16408, 0, 0, 0, 0, 255),
    VTX(164, 1080, 407, 12312, 1170, 0, 0, 0, 255),
    VTX(264, 1080, 307, 11458, 1170, 0, 0, 0, 255),
    VTX(307, 1080, 264, 11070, 1170, 0, 0, 0, 255),
    VTX(407, 1080, 164, 10216, 1170, 0, 0, 0, 255),
    VTX(407, 1040, -168, 8192, 585, 0, 0, 0, 255),
    VTX(168, 1140, -407, 6144, 2048, 255, 255, 255, 255),
    VTX(168, 1000, -407, 6144, 0, 0, 0, 0, 255),
    VTX(-168, 1140, -407, 4096, 2048, 255, 255, 255, 255),
    VTX(-168, 1280, -407, 4096, 4096, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_04Vtx_000810[12] = {
    VTX(-407, 1140, -168, 2048, 2048, 255, 255, 255, 255),
    VTX(-407, 1000, -168, 2048, 0, 0, 0, 0, 255),
    VTX(-168, 1000, -407, 4096, 0, 0, 0, 0, 255),
    VTX(-168, 1140, -407, 4096, 2048, 255, 255, 255, 255),
    VTX(-168, 1280, -407, 4096, 4096, 0, 0, 0, 255),
    VTX(168, 1140, -407, 6144, 2048, 255, 255, 255, 255),
    VTX(168, 1280, -407, 6144, 4096, 0, 0, 0, 255),
    VTX(168, 1000, -407, 6144, 0, 0, 0, 0, 255),
    VTX(407, 1140, -168, 8192, 2048, 255, 255, 255, 255),
    VTX(407, 1280, -168, 8192, 4096, 0, 0, 0, 255),
    VTX(-407, 1000, 164, 24, 0, 0, 0, 0, 255),
    VTX(-407, 1140, 164, 24, 2048, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_04Vtx_0008D0[32] = {
    VTX(321, 1080, 278, 819, 1638, 255, 255, 255, 255),
    VTX(307, 1080, 264, 819, 1229, 0, 0, 0, 255),
    VTX(264, 1080, 307, 205, 1229, 0, 0, 0, 255),
    VTX(278, 1080, 321, 205, 1638, 255, 255, 255, 255),
    VTX(-278, 1000, 321, 819, 1638, 255, 255, 255, 255),
    VTX(-264, 1000, 307, 819, 1229, 0, 0, 0, 255),
    VTX(-307, 1000, 264, 205, 1229, 0, 0, 0, 255),
    VTX(-321, 1000, 278, 205, 1638, 255, 255, 255, 255),
    VTX(-278, 1100, 321, 0, 1638, 0, 0, 0, 255),
    VTX(-264, 1100, 307, 0, 1229, 255, 255, 255, 255),
    VTX(-278, 1000, 321, 1024, 1638, 255, 255, 255, 255),
    VTX(-264, 1000, 307, 1024, 1229, 0, 0, 0, 255),
    VTX(-321, 1000, 278, 1024, 1638, 255, 255, 255, 255),
    VTX(-307, 1100, 264, 0, 1229, 255, 255, 255, 255),
    VTX(-321, 1100, 278, 0, 1638, 0, 0, 0, 255),
    VTX(-307, 1000, 264, 1024, 1229, 0, 0, 0, 255),
    VTX(278, 1180, 321, 205, 1638, 0, 0, 0, 255),
    VTX(264, 1180, 307, 205, 1229, 255, 255, 255, 255),
    VTX(307, 1180, 264, 819, 1229, 255, 255, 255, 255),
    VTX(321, 1180, 278, 819, 1638, 0, 0, 0, 255),
    VTX(278, 1080, 321, -3277, 1638, 255, 255, 255, 255),
    VTX(264, 1180, 307, -2253, 1229, 255, 255, 255, 255),
    VTX(278, 1180, 321, -2253, 1638, 0, 0, 0, 255),
    VTX(264, 1080, 307, -3277, 1229, 0, 0, 0, 255),
    VTX(-307, 1100, 264, 205, 1229, 255, 255, 255, 255),
    VTX(-264, 1100, 307, 819, 1229, 255, 255, 255, 255),
    VTX(-278, 1100, 321, 819, 1638, 0, 0, 0, 255),
    VTX(-321, 1100, 278, 205, 1638, 0, 0, 0, 255),
    VTX(321, 1180, 278, -2253, 1638, 0, 0, 0, 255),
    VTX(307, 1180, 264, -2253, 1229, 255, 255, 255, 255),
    VTX(321, 1080, 278, -3277, 1638, 255, 255, 255, 255),
    VTX(307, 1080, 264, -3277, 1229, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_04Vtx_000AD0[8] = {
    VTX(-407, 1000, -407, 0, 0, 0, 0, 0, 0),
    VTX(407, 1000, -407, 0, 0, 0, 0, 0, 0),
    VTX(-407, 1280, -407, 0, 0, 0, 0, 0, 0),
    VTX(407, 1280, -407, 0, 0, 0, 0, 0, 0),
    VTX(-407, 1000, 407, 0, 0, 0, 0, 0, 0),
    VTX(407, 1000, 407, 0, 0, 0, 0, 0, 0),
    VTX(-407, 1280, 407, 0, 0, 0, 0, 0, 0),
    VTX(407, 1280, 407, 0, 0, 0, 0, 0, 0),
}; 

Gfx deku_tree_room_04Dlist0x000B50[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&deku_tree_room_04Vtx_000AD0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(deku_tree_room_04Tex_000E80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_tree_room_04Vtx_0000E0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
    gsSP1Triangle(12, 14, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_04Tex_001E80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_04Vtx_0001D0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 21, 20, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 13, 12, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 17, 16, 30, 0),
    gsSPVertex(&deku_tree_room_04Vtx_0001D0[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 8, 13, 14, 0),
    gsSP2Triangles(8, 14, 15, 0, 8, 7, 16, 0),
    gsSP2Triangles(8, 16, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 26, 27, 0, 28, 29, 30, 0),
    gsSPVertex(&deku_tree_room_04Vtx_0001D0[62], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_04Tex_002E80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_04Vtx_000610[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 11, 0),
    gsSP2Triangles(5, 15, 16, 0, 5, 16, 6, 0),
    gsSP2Triangles(16, 17, 6, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 17, 0, 18, 20, 19, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 20, 0),
    gsSP2Triangles(23, 7, 24, 0, 7, 13, 24, 0),
    gsSP2Triangles(25, 10, 26, 0, 25, 12, 10, 0),
    gsSP2Triangles(7, 14, 13, 0, 12, 11, 10, 0),
    gsSP2Triangles(9, 27, 26, 0, 9, 26, 10, 0),
    gsSP2Triangles(28, 29, 27, 0, 28, 27, 9, 0),
    gsSP2Triangles(6, 17, 14, 0, 6, 14, 7, 0),
    gsSP2Triangles(1, 0, 30, 0, 1, 30, 31, 0),
    gsSPVertex(&deku_tree_room_04Vtx_000810[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(3, 2, 7, 0, 3, 7, 5, 0),
    gsSP2Triangles(6, 5, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 1, 0, 0, 10, 0, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_04Vtx_0008D0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000E70[16] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0B, 0x50, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 deku_tree_room_04Tex_000E80[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_04Tex_000E80.rgb5a1.inc.c"
};

u64 deku_tree_room_04Tex_001E80[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_04Tex_001E80.rgb5a1.inc.c"
};

u64 deku_tree_room_04Tex_002E80[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_04Tex_002E80.rgb5a1.inc.c"
};


