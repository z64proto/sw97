#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "deku_tree_room_07.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "deku_tree_scene.h"


static SCmdEchoSettings deku_tree_room_07Set0000Cmd00;
static SCmdRoomBehavior deku_tree_room_07Set0000Cmd01;
static SCmdSkyboxDisables deku_tree_room_07Set0000Cmd02;
static SCmdMesh deku_tree_room_07Set0000Cmd03;
static SCmdObjectList deku_tree_room_07Set0000Cmd04;
static SCmdActorList deku_tree_room_07Set0000Cmd05;
static SCmdEndMarker deku_tree_room_07Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx deku_tree_room_07Vtx_000080[15];
static Vtx deku_tree_room_07Vtx_000170[10];
static Vtx deku_tree_room_07Vtx_000210[8];
static Vtx deku_tree_room_07Vtx_000290[16];
static Vtx deku_tree_room_07Vtx_000390[8];

static SCmdEchoSettings deku_tree_room_07Set0000Cmd00 = {  0x16, 0, { 0 }, 0x05 }; // 0x0000

static SCmdRoomBehavior deku_tree_room_07Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables deku_tree_room_07Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdMesh deku_tree_room_07Set0000Cmd03 = {  0x0A, 0, (u32)&deku_tree_room_07MeshHeader0x000060 }; // 0x0018

static SCmdObjectList deku_tree_room_07Set0000Cmd04 = {  0x0B, 0x08, (u32)deku_tree_room_07ObjectList0x000038 }; // 0x0020

static SCmdActorList deku_tree_room_07Set0000Cmd05 = {  0x01, 0x01, (u32)deku_tree_room_07ActorList0x000048 }; // 0x0028 }; 

static SCmdEndMarker deku_tree_room_07Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 deku_tree_room_07ObjectList0x000038[8] = {
	OBJECT_BOX,
	OBJECT_FIRE,
	OBJECT_TORCH2,
	OBJECT_YDAN_OBJECTS,
	OBJECT_GOL,
	OBJECT_ST,
	OBJECT_TP,
	OBJECT_DEKUBABA,
}; 

ActorEntry deku_tree_room_07ActorList0x000048[1] = {
	{ ACTOR_EN_BOX, -953, 520, 950, 0, -8192, 0, 0x0065 }, //0x000048
}; 

static u32 pad58 = 0;
static u32 pad5C = 0;

MeshHeader2 deku_tree_room_07MeshHeader0x000060 = { { 2 }, 0x01, (u32)&deku_tree_room_07MeshDListEntry0x00006C, (u32)&(deku_tree_room_07MeshDListEntry0x00006C) + sizeof(deku_tree_room_07MeshDListEntry0x00006C) }; 

MeshEntry2 deku_tree_room_07MeshDListEntry0x00006C[1] = {
	{ -919, 680, 917, 318, (u32)deku_tree_room_07Dlist0x000410, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx deku_tree_room_07Vtx_000080[15] = {
    VTX(-975, 520, 649, 0, 1024, 0, 0, 0, 255),
    VTX(-1081, 680, 755, 1920, -1024, 238, 238, 238, 255),
    VTX(-1188, 520, 861, 3840, 1024, 0, 0, 0, 255),
    VTX(-1188, 840, 861, 3840, -3072, 0, 0, 0, 255),
    VTX(-975, 840, 649, 0, -3072, 0, 0, 0, 255),
    VTX(-1188, 520, 861, 5888, 1024, 0, 0, 0, 255),
    VTX(-1025, 680, 1024, 2944, -1024, 238, 238, 238, 255),
    VTX(-862, 520, 1186, 0, 1024, 0, 0, 0, 255),
    VTX(-862, 840, 1186, 0, -3072, 0, 0, 0, 255),
    VTX(-1188, 840, 861, 5888, -3072, 0, 0, 0, 255),
    VTX(-862, 520, 1186, 3840, 1024, 0, 0, 0, 255),
    VTX(-756, 680, 1080, 1920, -1024, 238, 238, 238, 255),
    VTX(-650, 520, 974, 0, 1024, 0, 0, 0, 255),
    VTX(-862, 840, 1186, 3840, -3072, 0, 0, 0, 255),
    VTX(-650, 840, 974, 0, -3072, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_07Vtx_000170[10] = {
    VTX(-862, 840, 1186, 0, 2048, 0, 0, 0, 255),
    VTX(-919, 840, 918, 1178, 1280, 255, 255, 255, 255),
    VTX(-650, 840, 974, 0, 512, 0, 0, 0, 255),
    VTX(-975, 840, 649, 2355, 512, 0, 0, 0, 255),
    VTX(-1188, 840, 861, 2355, 2048, 0, 0, 0, 255),
    VTX(-650, 520, 974, 0, 512, 0, 0, 0, 255),
    VTX(-919, 520, 918, 1178, 1280, 255, 255, 255, 255),
    VTX(-862, 520, 1186, 0, 2048, 0, 0, 0, 255),
    VTX(-975, 520, 649, 2355, 512, 0, 0, 0, 255),
    VTX(-1188, 520, 861, 2355, 2048, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_07Vtx_000210[8] = {
    VTX(-975, 520, 649, 0, 2048, 0, 0, 0, 255),
    VTX(-834, 620, 790, 2048, 1024, 255, 255, 255, 255),
    VTX(-975, 840, 649, 0, -1229, 0, 0, 0, 255),
    VTX(-834, 520, 790, 2048, 2048, 0, 0, 0, 255),
    VTX(-792, 620, 833, 2662, 1024, 255, 255, 255, 255),
    VTX(-650, 840, 974, 4710, -1229, 0, 0, 0, 255),
    VTX(-650, 520, 974, 4710, 2048, 0, 0, 0, 255),
    VTX(-792, 520, 833, 2662, 2048, 0, 0, 0, 255),
}; 

static Vtx deku_tree_room_07Vtx_000290[16] = {
    VTX(-820, 620, 776, 1280, 1792, 255, 255, 255, 255),
    VTX(-834, 620, 790, 1280, 1536, 255, 255, 255, 255),
    VTX(-834, 520, 790, 0, 1536, 0, 0, 0, 255),
    VTX(-820, 520, 776, 0, 1792, 0, 0, 0, 255),
    VTX(-777, 520, 819, 0, 1792, 0, 0, 0, 255),
    VTX(-792, 520, 833, 0, 1536, 0, 0, 0, 255),
    VTX(-792, 620, 833, 1280, 1536, 255, 255, 255, 255),
    VTX(-777, 620, 819, 1280, 1792, 255, 255, 255, 255),
    VTX(-820, 520, 776, 1024, 1792, 0, 0, 0, 255),
    VTX(-834, 520, 790, 1024, 1536, 0, 0, 0, 255),
    VTX(-792, 520, 833, 256, 1536, 0, 0, 0, 255),
    VTX(-777, 520, 819, 256, 1792, 0, 0, 0, 255),
    VTX(-777, 620, 819, 256, 1792, 255, 255, 255, 255),
    VTX(-792, 620, 833, 256, 1536, 255, 255, 255, 255),
    VTX(-834, 620, 790, 1024, 1536, 255, 255, 255, 255),
    VTX(-820, 620, 776, 1024, 1792, 255, 255, 255, 255),
}; 

static Vtx deku_tree_room_07Vtx_000390[8] = {
    VTX(-943, 520, 622, 0, 0, 0, 0, 0, 0),
    VTX(-631, 520, 993, 0, 0, 0, 0, 0, 0),
    VTX(-943, 840, 622, 0, 0, 0, 0, 0, 0),
    VTX(-631, 840, 993, 0, 0, 0, 0, 0, 0),
    VTX(-1204, 520, 841, 0, 0, 0, 0, 0, 0),
    VTX(-893, 520, 1212, 0, 0, 0, 0, 0, 0),
    VTX(-1204, 840, 841, 0, 0, 0, 0, 0, 0),
    VTX(-893, 840, 1212, 0, 0, 0, 0, 0, 0),
}; 

Gfx deku_tree_room_07Dlist0x000410[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&deku_tree_room_07Vtx_000390[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPSetOtherMode(0xE3, 15, 3, 0x00000000),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(deku_tree_room_07Tex_000630, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 238, 238, 238, 255),
    gsSPVertex(&deku_tree_room_07Vtx_000080[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 7, 0),
    gsSP2Triangles(5, 9, 6, 0, 9, 8, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 13, 11, 0),
    gsSP2Triangles(13, 14, 11, 0, 14, 12, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_07Tex_001630, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_07Vtx_000170[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 4, 3, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_room_07Tex_002630, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 0, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_07Vtx_000210[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(deku_tree_sceneTex_00EAD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&deku_tree_room_07Vtx_000290[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_000620[16] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x04, 0x10, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 deku_tree_room_07Tex_000630[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_07Tex_000630.rgb5a1.inc.c"
};

u64 deku_tree_room_07Tex_001630[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_07Tex_001630.rgb5a1.inc.c"
};

u64 deku_tree_room_07Tex_002630[] = {
#include "assets/scenes/dungeons/deku_tree//deku_tree_room_07Tex_002630.rgb5a1.inc.c"
};


