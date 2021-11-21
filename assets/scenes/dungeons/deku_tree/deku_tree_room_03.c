#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "deku_tree_room_03.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "deku_tree_scene.h"


static SCmdEchoSettings deku_tree_room_03Set0000Cmd00;
static SCmdRoomBehavior deku_tree_room_03Set0000Cmd01;
static SCmdSkyboxDisables deku_tree_room_03Set0000Cmd02;
static SCmdMesh deku_tree_room_03Set0000Cmd03;
static SCmdObjectList deku_tree_room_03Set0000Cmd04;
static SCmdActorList deku_tree_room_03Set0000Cmd05;
static SCmdEndMarker deku_tree_room_03Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx deku_tree_room_03Vtx_000110[32];
static Vtx deku_tree_room_03Vtx_000310[9];
static Vtx deku_tree_room_03Vtx_0003A0[27];
static Vtx deku_tree_room_03Vtx_000550[32];
static Vtx deku_tree_room_03Vtx_000750[9];
static Vtx deku_tree_room_03Vtx_0007E0[32];
static Vtx deku_tree_room_03Vtx_0009E0[8];

static SCmdEchoSettings deku_tree_room_03Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior deku_tree_room_03Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables deku_tree_room_03Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh deku_tree_room_03Set0000Cmd03 = {  0x0A, 0, (u32)&deku_tree_room_03MeshHeader0x0000F0 }; // 0x0018

static SCmdObjectList deku_tree_room_03Set0000Cmd04 = {  0x0B, 0x09, (u32)deku_tree_room_03ObjectList0x000038 }; // 0x0020

static SCmdActorList deku_tree_room_03Set0000Cmd05 = {  0x01, 0x0A, (u32)deku_tree_room_03ActorList0x00004C }; // 0x0028 }; 

static SCmdEndMarker deku_tree_room_03Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 deku_tree_room_03ObjectList0x000038[9] = {
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

ActorEntry deku_tree_room_03ActorList0x00004C[10] = {
	{ ACTOR_DUNGEON_KEEP, 284, 906, -280, 0, -8192, 0, 0x011A }, //0x00004C
	{ ACTOR_EN_BOX, -190, 720, -211, 0, -24575, 0, 0x0842 }, //0x00005C
	{ ACTOR_EN_GOMA, -5, 720, -99, 0, 0, 0, 0x0006 }, //0x00006C
	{ ACTOR_EN_GOMA, -5, 720, 56, 0, 0, 0, 0x0006 }, //0x00007C
	{ ACTOR_EN_GOMA, 71, 720, -20, 0, 0, 0, 0x0006 }, //0x00008C
	{ ACTOR_EN_GOMA, -84, 720, -18, 0, 0, 0, 0x0006 }, //0x00009C
	{ ACTOR_EN_GOMA, -137, 720, 107, 0, 0, 0, 0x0007 }, //0x0000AC
	{ ACTOR_EN_GOMA, -129, 720, -138, 0, 0, 0, 0x0007 }, //0x0000BC
	{ ACTOR_EN_GOMA, 135, 720, -130, 0, 0, 0, 0x0007 }, //0x0000CC
	{ ACTOR_EN_GOMA, 135, 720, 101, 0, 0, 0, 0x0007 }, //0x0000DC
}; 

static u32 padEC = 0;

MeshHeader2 deku_tree_room_03MeshHeader0x0000F0 = { { 2 }, 0x01, (u32)&deku_tree_room_03MeshDListEntry0x0000FC, (u32)&(deku_tree_room_03MeshDListEntry0x0000FC) + sizeof(deku_tree_room_03MeshDListEntry0x0000FC) }; 

MeshEntry2 deku_tree_room_03MeshDListEntry0x0000FC[1] = {
	{ 0, 840, 8, 463, (u32)deku_tree_room_03Dlist0x000A60, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx deku_tree_room_03Vtx_000110[32] = {
    VTX(164, 960, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 960, 0, 519, 0, 255, 255, 255, 255),
    VTX(-168, 960, -407, 0, 2048, 0, 0, 0, 255),
    VTX(0, 960, 0, 512, 0, 255, 255, 255, 255),
    VTX(-407, 960, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(407, 960, -164, 0, 2048, 0, 0, 0, 255),
    VTX(0, 960, 0, 512, 0, 255, 255, 255, 255),
    VTX(407, 960, -164, 0, 2048, 0, 0, 0, 255),
    VTX(407, 960, 168, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 960, 0, 505, 0, 255, 255, 255, 255),
    VTX(171, 960, 403, 0, 2048, 0, 0, 0, 255),
    VTX(0, 960, 0, 505, 0, 255, 255, 255, 255),
    VTX(171, 960, 403, 0, 2048, 0, 0, 0, 255),
    VTX(-171, 960, 403, 1024, 2048, 0, 0, 0, 255),
    VTX(0, 960, 0, 521, 0, 255, 255, 255, 255),
    VTX(-171, 960, 403, 1024, 2048, 0, 0, 0, 255),
    VTX(-407, 960, 168, 0, 2048, 0, 0, 0, 255),
    VTX(0, 960, 0, 496, 0, 255, 255, 255, 255),
    VTX(-407, 960, 168, 0, 2048, 0, 0, 0, 255),
    VTX(-203, 720, -84, 768, 1024, 255, 255, 255, 255),
    VTX(0, 720, 0, 512, 0, 255, 255, 255, 255),
    VTX(-84, 720, -203, 256, 1024, 255, 255, 255, 255),
    VTX(0, 720, 0, 519, 0, 255, 255, 255, 255),
    VTX(82, 720, -203, 771, 1024, 255, 255, 255, 255),
    VTX(-84, 720, -203, 259, 1024, 255, 255, 255, 255),
    VTX(0, 720, 0, 512, 0, 255, 255, 255, 255),
    VTX(203, 720, -82, 256, 1024, 255, 255, 255, 255),
    VTX(82, 720, -203, 768, 1024, 255, 255, 255, 255),
    VTX(0, 720, 0, 505, 0, 255, 255, 255, 255),
    VTX(203, 720, 84, 765, 1024, 255, 255, 255, 255),
    VTX(203, 720, -82, 253, 1024, 255, 255, 255, 255),
    VTX(-203, 720, 84, 256, 1024, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_03Vtx_000310[9] = {
    VTX(-86, 720, 202, 760, 1024, 255, 255, 255, 255),
    VTX(0, 720, 0, 496, 0, 255, 255, 255, 255),
    VTX(-203, 720, 84, 248, 1024, 255, 255, 255, 255),
    VTX(86, 720, 202, 261, 1024, 255, 255, 255, 255),
    VTX(0, 720, 0, 521, 0, 255, 255, 255, 255),
    VTX(-86, 720, 202, 773, 1024, 255, 255, 255, 255),
    VTX(203, 720, 84, 765, 1024, 255, 255, 255, 255),
    VTX(0, 720, 0, 505, 0, 255, 255, 255, 255),
    VTX(86, 720, 202, 253, 1024, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_03Vtx_0003A0[27] = {
    VTX(-407, 720, -168, 1024, 2048, 0, 0, 0, 255),
    VTX(-407, 720, 168, 0, 2048, 0, 0, 0, 255),
    VTX(-203, 720, 84, 256, 1024, 255, 255, 255, 255),
    VTX(-203, 720, -84, 768, 1024, 255, 255, 255, 255),
    VTX(-84, 720, -203, 256, 1024, 255, 255, 255, 255),
    VTX(-168, 720, -407, 0, 2048, 0, 0, 0, 255),
    VTX(-407, 720, 168, 0, 2048, 0, 0, 0, 255),
    VTX(-171, 720, 403, 1024, 2048, 0, 0, 0, 255),
    VTX(-86, 720, 202, 760, 1024, 255, 255, 255, 255),
    VTX(-203, 720, 84, 248, 1024, 255, 255, 255, 255),
    VTX(203, 720, -82, 256, 1024, 255, 255, 255, 255),
    VTX(407, 720, -164, 0, 2048, 0, 0, 0, 255),
    VTX(164, 720, -407, 1024, 2048, 0, 0, 0, 255),
    VTX(82, 720, -203, 768, 1024, 255, 255, 255, 255),
    VTX(-171, 720, 403, 1024, 2048, 0, 0, 0, 255),
    VTX(171, 720, 403, 0, 2048, 0, 0, 0, 255),
    VTX(86, 720, 202, 261, 1024, 255, 255, 255, 255),
    VTX(-86, 720, 202, 773, 1024, 255, 255, 255, 255),
    VTX(82, 720, -203, 771, 1024, 255, 255, 255, 255),
    VTX(-84, 720, -203, 259, 1024, 255, 255, 255, 255),
    VTX(171, 720, 403, 0, 2048, 0, 0, 0, 255),
    VTX(407, 720, 168, 1024, 2048, 0, 0, 0, 255),
    VTX(203, 720, 84, 765, 1024, 255, 255, 255, 255),
    VTX(86, 720, 202, 253, 1024, 255, 255, 255, 255),
    VTX(203, 720, 84, 765, 1024, 255, 255, 255, 255),
    VTX(407, 720, -164, 0, 2048, 0, 0, 0, 255),
    VTX(203, 720, -82, 253, 1024, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_03Vtx_000550[32] = {
    VTX(-30, 820, 403, 13506, 1707, 255, 255, 255, 255),
    VTX(-171, 840, 403, 14360, 2048, 255, 255, 255, 255),
    VTX(-171, 960, 403, 14360, 4096, 0, 0, 0, 255),
    VTX(-171, 720, 403, 14360, 0, 0, 0, 0, 255),
    VTX(-30, 720, 403, 13506, 0, 0, 0, 0, 255),
    VTX(164, 720, -407, 6120, 0, 0, 0, 0, 255),
    VTX(264, 820, -307, 6974, 1707, 255, 255, 255, 255),
    VTX(164, 840, -407, 6120, 2048, 255, 255, 255, 255),
    VTX(264, 720, -307, 6974, 0, 0, 0, 0, 255),
    VTX(164, 960, -407, 6120, 4096, 0, 0, 0, 255),
    VTX(307, 820, -264, 7362, 1707, 255, 255, 255, 255),
    VTX(407, 960, -164, 8216, 4096, 0, 0, 0, 255),
    VTX(407, 840, -164, 8216, 2048, 255, 255, 255, 255),
    VTX(407, 720, -164, 8216, 0, 0, 0, 0, 255),
    VTX(307, 720, -264, 7362, 0, 0, 0, 0, 255),
    VTX(-407, 720, 168, 16384, 0, 0, 0, 0, 255),
    VTX(-407, 840, 168, 16384, 2048, 255, 255, 255, 255),
    VTX(-407, 960, 168, 16384, 4096, 0, 0, 0, 255),
    VTX(-407, 720, -168, 2048, 0, 0, 0, 0, 255),
    VTX(-407, 840, -168, 2048, 2048, 255, 255, 255, 255),
    VTX(-407, 840, 168, 0, 2048, 255, 255, 255, 255),
    VTX(-407, 720, 168, 0, 0, 0, 0, 0, 255),
    VTX(-407, 960, -168, 2048, 4096, 0, 0, 0, 255),
    VTX(-407, 960, 168, 0, 4096, 0, 0, 0, 255),
    VTX(-168, 720, -407, 4096, 0, 0, 0, 0, 255),
    VTX(-168, 840, -407, 4096, 2048, 255, 255, 255, 255),
    VTX(-168, 960, -407, 4096, 4096, 0, 0, 0, 255),
    VTX(407, 720, 168, 10240, 0, 0, 0, 0, 255),
    VTX(407, 840, 168, 10240, 2048, 255, 255, 255, 255),
    VTX(407, 960, 168, 10240, 4096, 0, 0, 0, 255),
    VTX(171, 960, 403, 12264, 4096, 0, 0, 0, 255),
    VTX(171, 840, 403, 12264, 2048, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_03Vtx_000750[9] = {
    VTX(407, 840, 168, 10240, 2048, 255, 255, 255, 255),
    VTX(407, 720, 168, 10240, 0, 0, 0, 0, 255),
    VTX(171, 720, 403, 12264, 0, 0, 0, 0, 255),
    VTX(171, 840, 403, 12264, 2048, 255, 255, 255, 255),
    VTX(30, 820, 403, 13118, 1707, 255, 255, 255, 255),
    VTX(30, 720, 403, 13118, 0, 0, 0, 0, 255),
    VTX(171, 960, 403, 12264, 4096, 0, 0, 0, 255),
    VTX(-30, 820, 403, 13506, 1707, 255, 255, 255, 255),
    VTX(-171, 960, 403, 14360, 4096, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_03Vtx_0007E0[32] = {
    VTX(321, 820, -278, 205, 1638, 0, 0, 0, 255),
    VTX(307, 820, -264, 205, 1229, 255, 255, 255, 255),
    VTX(264, 820, -307, 819, 1229, 255, 255, 255, 255),
    VTX(278, 820, -321, 819, 1638, 0, 0, 0, 255),
    VTX(321, 720, -278, 1024, 1638, 255, 255, 255, 255),
    VTX(307, 820, -264, 2048, 1229, 255, 255, 255, 255),
    VTX(321, 820, -278, 2048, 1638, 0, 0, 0, 255),
    VTX(307, 720, -264, 1024, 1229, 0, 0, 0, 255),
    VTX(278, 720, -321, 819, 1638, 255, 255, 255, 255),
    VTX(264, 720, -307, 819, 1229, 0, 0, 0, 255),
    VTX(307, 720, -264, 205, 1229, 0, 0, 0, 255),
    VTX(321, 720, -278, 205, 1638, 255, 255, 255, 255),
    VTX(30, 720, 423, 819, 1638, 255, 255, 255, 255),
    VTX(30, 720, 403, 819, 1229, 0, 0, 0, 255),
    VTX(-30, 720, 403, 205, 1229, 0, 0, 0, 255),
    VTX(-30, 720, 423, 205, 1638, 255, 255, 255, 255),
    VTX(-30, 720, 423, 1024, 1638, 255, 255, 255, 255),
    VTX(-30, 820, 403, 0, 1229, 255, 255, 255, 255),
    VTX(-30, 820, 423, 0, 1638, 0, 0, 0, 255),
    VTX(-30, 720, 403, 1024, 1229, 0, 0, 0, 255),
    VTX(-30, 820, 423, 205, 1638, 0, 0, 0, 255),
    VTX(-30, 820, 403, 205, 1229, 255, 255, 255, 255),
    VTX(30, 820, 403, 819, 1229, 255, 255, 255, 255),
    VTX(30, 820, 423, 819, 1638, 0, 0, 0, 255),
    VTX(30, 820, 423, 0, 1638, 0, 0, 0, 255),
    VTX(30, 820, 403, 0, 1229, 255, 255, 255, 255),
    VTX(30, 720, 423, 1024, 1638, 255, 255, 255, 255),
    VTX(30, 720, 403, 1024, 1229, 0, 0, 0, 255),
    VTX(278, 820, -321, 2048, 1638, 0, 0, 0, 255),
    VTX(264, 820, -307, 2048, 1229, 255, 255, 255, 255),
    VTX(278, 720, -321, 1024, 1638, 255, 255, 255, 255),
    VTX(264, 720, -307, 1024, 1229, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_03Vtx_0009E0[8] = {
    VTX(-407, 720, -407, 0, 0, 0, 0, 0, 0),
    VTX(407, 720, -407, 0, 0, 0, 0, 0, 0),
    VTX(-407, 960, -407, 0, 0, 0, 0, 0, 0),
    VTX(407, 960, -407, 0, 0, 0, 0, 0, 0),
    VTX(-407, 720, 423, 0, 0, 0, 0, 0, 0),
    VTX(407, 720, 423, 0, 0, 0, 0, 0, 0),
    VTX(-407, 960, 423, 0, 0, 0, 0, 0, 0),
    VTX(407, 960, 423, 0, 0, 0, 0, 0, 0),
}; 

Gfx deku_tree_room_03Dlist0x000A60[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&deku_tree_room_03Vtx_0009E0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(deku_tree_room_03Tex_000D48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 238, 238, 238, 255),
    gsSPVertex(&deku_tree_room_03Vtx_000110[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(0, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 4, 3, 0),
    gsSP2Triangles(19, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(31, 20, 19, 0),
    gsSPVertex(&deku_tree_room_03Vtx_000310[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&deku_tree_room_03Vtx_0003A0[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 12, 5, 0, 18, 5, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 21, 25, 0, 24, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_03Tex_001D48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_03Vtx_000550[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 6, 9, 7, 0),
    gsSP2Triangles(6, 10, 11, 0, 6, 11, 9, 0),
    gsSP2Triangles(10, 12, 11, 0, 10, 13, 12, 0),
    gsSP2Triangles(10, 14, 13, 0, 15, 16, 1, 0),
    gsSP2Triangles(15, 1, 3, 0, 16, 17, 2, 0),
    gsSP2Triangles(16, 2, 1, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 19, 22, 23, 0),
    gsSP2Triangles(19, 23, 20, 0, 24, 25, 19, 0),
    gsSP2Triangles(24, 19, 18, 0, 25, 26, 22, 0),
    gsSP2Triangles(25, 22, 19, 0, 9, 26, 25, 0),
    gsSP2Triangles(9, 25, 7, 0, 25, 24, 5, 0),
    gsSP2Triangles(25, 5, 7, 0, 27, 28, 12, 0),
    gsSP2Triangles(27, 12, 13, 0, 28, 29, 11, 0),
    gsSP2Triangles(28, 11, 12, 0, 30, 29, 28, 0),
    gsSP1Triangle(30, 28, 31, 0),
    gsSPVertex(&deku_tree_room_03Vtx_000750[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 2, 5, 4, 0),
    gsSP2Triangles(4, 6, 3, 0, 4, 7, 8, 0),
    gsSP1Triangle(4, 8, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_03Vtx_0007E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000D38[16] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x0A, 0x60, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 deku_tree_room_03Tex_000D48[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_03Tex_000D48.rgb5a1.inc.c"
};

u64 deku_tree_room_03Tex_001D48[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_03Tex_001D48.rgb5a1.inc.c"
};

static u8 unaccounted_002D48[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


