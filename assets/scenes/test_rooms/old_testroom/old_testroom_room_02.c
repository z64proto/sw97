#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_testroom_room_02.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_testroom_scene.h"


static SCmdEchoSettings old_testroom_room_02Set0000Cmd00;
static SCmdRoomBehavior old_testroom_room_02Set0000Cmd01;
static SCmdSkyboxDisables old_testroom_room_02Set0000Cmd02;
static SCmdTimeSettings old_testroom_room_02Set0000Cmd03;
static SCmdMesh old_testroom_room_02Set0000Cmd04;
static SCmdActorList old_testroom_room_02Set0000Cmd05;
static SCmdEndMarker old_testroom_room_02Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx old_testroom_room_02Vtx_0000C0[16];
static Vtx old_testroom_room_02Vtx_0001C0[32];
static Vtx old_testroom_room_02Vtx_0003C0[32];
static Vtx old_testroom_room_02Vtx_0005C0[6];
static Vtx old_testroom_room_02Vtx_000620[23];
static Vtx old_testroom_room_02Vtx_000790[5];
static Vtx old_testroom_room_02Vtx_0007E0[7];

static SCmdEchoSettings old_testroom_room_02Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_testroom_room_02Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables old_testroom_room_02Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdTimeSettings old_testroom_room_02Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }; // 0x0018

static SCmdMesh old_testroom_room_02Set0000Cmd04 = {  0x0A, 0, (u32)&old_testroom_room_02MeshHeader0x0000A0 }; // 0x0020

static SCmdActorList old_testroom_room_02Set0000Cmd05 = {  0x01, 0x06, (u32)old_testroom_room_02ActorList0x000038 }; // 0x0028 }; 

static SCmdEndMarker old_testroom_room_02Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

ActorEntry old_testroom_room_02ActorList0x000038[6] = {
	{ ACTOR_DUNGEON_KEEP, 2998, 0, 188, 0, 0, 0, 0x001C }, //0x000038
	{ ACTOR_DUNGEON_KEEP, 2648, 0, 188, 0, 0, 0, 0x001D }, //0x000048
	{ ACTOR_DUNGEON_KEEP, 2823, 0, 338, 0, 0, 0, 0x0023 }, //0x000058
	{ ACTOR_DUNGEON_KEEP, 2836, 0, 576, 0, 0, 0, 0x0024 }, //0x000068
	{ ACTOR_DUNGEON_KEEP, 2401, 301, 343, 0, 16384, 0, 0x001E }, //0x000078
	{ ACTOR_DUNGEON_KEEP, 3202, 310, 343, 0, -16384, 0, 0x001F }, //0x000088
}; 

static u32 pad98 = 0;
static u32 pad9C = 0;

MeshHeader0 old_testroom_room_02MeshHeader0x0000A0 = { { 0 }, 0x01, (u32)&old_testroom_room_02MeshDListEntry0x0000AC, (u32)&(old_testroom_room_02MeshDListEntry0x0000AC) + sizeof(old_testroom_room_02MeshDListEntry0x0000AC) }; 

MeshEntry0 old_testroom_room_02MeshDListEntry0x0000AC[1] = {
	{ (u32)old_testroom_room_02Dlist0x000850, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 padB8 = 0;
static u32 padBC = 0;

static Vtx old_testroom_room_02Vtx_0000C0[16] = {
    VTX(2120, 0, -840, -15, 1774, 255, 255, 255, 255),
    VTX(2100, 0, -840, 237, 1774, 255, 255, 255, 255),
    VTX(2100, 0, -780, 238, 1018, 255, 255, 255, 255),
    VTX(2120, 0, -780, -14, 1018, 255, 255, 255, 255),
    VTX(2780, 0, -100, 0, 1024, 255, 255, 255, 255),
    VTX(2780, 0, -60, 512, 1024, 255, 255, 255, 255),
    VTX(2840, 0, -60, 512, 256, 255, 255, 255, 255),
    VTX(2840, 0, -100, 0, 256, 255, 255, 255, 255),
    VTX(2920, 0, -900, 7168, 1024, 255, 255, 255, 255),
    VTX(2720, 0, -700, 4608, -4093, 255, 255, 255, 255),
    VTX(2720, 0, -100, -3072, -4096, 255, 255, 255, 255),
    VTX(2920, 0, -100, -3072, 1024, 255, 255, 255, 255),
    VTX(2720, 0, -700, -4609, -4686, 255, 255, 255, 255),
    VTX(2920, 0, -900, -7168, 434, 255, 255, 255, 255),
    VTX(2120, 0, -900, 3072, 434, 255, 255, 255, 255),
    VTX(2120, 0, -700, 3072, -4686, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_02Vtx_0001C0[32] = {
    VTX(2840, 100, -100, 0, 0, 89, 89, 89, 255),
    VTX(2840, 100, -60, 0, 1024, 89, 89, 89, 255),
    VTX(2780, 100, -60, 1536, 1024, 89, 89, 89, 255),
    VTX(2780, 100, -100, 1536, 0, 89, 89, 89, 255),
    VTX(2780, 0, -100, 512, 1024, 255, 255, 255, 255),
    VTX(2780, 100, -100, 512, -1536, 89, 89, 89, 255),
    VTX(2780, 100, -60, -512, -1536, 89, 89, 89, 255),
    VTX(2780, 0, -60, -512, 1024, 255, 255, 255, 255),
    VTX(2840, 0, -60, 1024, 1024, 255, 255, 255, 255),
    VTX(2840, 100, -60, 1024, -1536, 89, 89, 89, 255),
    VTX(2840, 100, -100, 0, -1536, 89, 89, 89, 255),
    VTX(2840, 0, -100, 0, 1024, 255, 255, 255, 255),
    VTX(2100, 100, -780, 683, 2731, 89, 89, 89, 255),
    VTX(2120, 100, -780, 1024, 2731, 89, 89, 89, 255),
    VTX(2120, 0, -780, 1024, 1024, 255, 255, 255, 255),
    VTX(2100, 0, -780, 683, 1024, 255, 255, 255, 255),
    VTX(2920, 200, -100, 6119, 1792, 25, 25, 25, 255),
    VTX(2720, 200, -100, 6119, -768, 25, 25, 25, 255),
    VTX(2720, 200, -700, -1561, -766, 25, 25, 25, 255),
    VTX(2920, 200, -900, -4121, 1792, 25, 25, 25, 255),
    VTX(2720, 0, -700, 3607, 1818, 255, 255, 255, 255),
    VTX(2720, 200, -700, 3607, -742, 25, 25, 25, 255),
    VTX(2720, 200, -100, -4073, -742, 25, 25, 25, 255),
    VTX(2720, 0, -100, -4073, 1818, 255, 255, 255, 255),
    VTX(2920, 0, -100, 7168, 1024, 255, 255, 255, 255),
    VTX(2920, 200, -100, 7168, -1536, 25, 25, 25, 255),
    VTX(2920, 200, -900, -3072, -1536, 25, 25, 25, 255),
    VTX(2920, 0, -900, -3072, 1024, 255, 255, 255, 255),
    VTX(2120, 0, -840, 410, 1024, 255, 255, 255, 255),
    VTX(2120, 100, -840, 410, 0, 89, 89, 89, 255),
    VTX(2100, 100, -840, 205, 0, 89, 89, 89, 255),
    VTX(2100, 0, -840, 205, 1024, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_02Vtx_0003C0[32] = {
    VTX(2120, 200, -700, -13308, -4096, 25, 25, 25, 255),
    VTX(2120, 200, -900, -13308, 1024, 25, 25, 25, 255),
    VTX(2920, 200, -900, -3068, 1024, 25, 25, 25, 255),
    VTX(2720, 200, -700, -5627, -4096, 25, 25, 25, 255),
    VTX(2920, 0, -900, -3068, 1024, 255, 255, 255, 255),
    VTX(2920, 200, -900, -3068, -4096, 25, 25, 25, 255),
    VTX(2120, 200, -900, -13308, -4096, 25, 25, 25, 255),
    VTX(2120, 0, -900, -13308, 1024, 255, 255, 255, 255),
    VTX(2120, 0, -700, 6154, 8185, 255, 255, 255, 255),
    VTX(2120, 200, -700, 6154, 3065, 25, 25, 25, 255),
    VTX(2720, 200, -700, -1527, 3065, 25, 25, 25, 255),
    VTX(2720, 0, -700, -1527, 8185, 255, 255, 255, 255),
    VTX(2120, 100, -780, -45, 496, 89, 89, 89, 255),
    VTX(2100, 100, -780, -45, 1008, 89, 89, 89, 255),
    VTX(2100, 100, -840, 1491, 1008, 89, 89, 89, 255),
    VTX(2120, 100, -840, 1491, 496, 89, 89, 89, 255),
    VTX(2780, 100, -100, 512, 512, 255, 255, 255, 255),
    VTX(2780, 0, -100, 512, -2048, 255, 255, 255, 255),
    VTX(2720, 0, -100, -1024, -2048, 255, 255, 255, 255),
    VTX(2720, 100, -100, -1024, 512, 255, 255, 255, 255),
    VTX(2120, 100, -840, 2452, -1355, 255, 255, 255, 255),
    VTX(2120, 0, -840, 2452, 1024, 255, 255, 255, 255),
    VTX(2120, 0, -900, 3879, 1024, 255, 255, 255, 255),
    VTX(2120, 100, -900, 3879, -1355, 255, 255, 255, 255),
    VTX(2120, 200, -900, 3879, -3735, 25, 25, 25, 255),
    VTX(2120, 200, -700, -879, -3735, 25, 25, 25, 255),
    VTX(2120, 100, -700, -879, -1355, 255, 255, 255, 255),
    VTX(2120, 0, -700, -879, 1024, 255, 255, 255, 255),
    VTX(2120, 0, -780, 1024, 1024, 255, 255, 255, 255),
    VTX(2120, 100, -780, 1024, -1355, 255, 255, 255, 255),
    VTX(2720, 200, -100, -1024, 3072, 25, 25, 25, 255),
    VTX(2920, 200, -100, 4096, 3072, 25, 25, 25, 255),
}; 

static Vtx old_testroom_room_02Vtx_0005C0[6] = {
    VTX(2720, 100, -100, -1024, 512, 255, 255, 255, 255),
    VTX(2920, 200, -100, 4096, 3072, 25, 25, 25, 255),
    VTX(2920, 100, -100, 4096, 512, 255, 255, 255, 255),
    VTX(2920, 0, -100, 4096, -2048, 255, 255, 255, 255),
    VTX(2840, 0, -100, 2048, -2048, 255, 255, 255, 255),
    VTX(2840, 100, -100, 2048, 512, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_02Vtx_000620[23] = {
    VTX(2400, 0, -60, -14336, 2048, 25, 25, 25, 255),
    VTX(2780, 0, -60, -4608, 2048, 255, 255, 255, 255),
    VTX(2780, 100, -60, -4608, -512, 255, 255, 255, 255),
    VTX(2840, 100, -60, -3072, -512, 255, 255, 255, 255),
    VTX(2840, 0, -60, -3072, 2048, 255, 255, 255, 255),
    VTX(3200, 0, -60, 6144, 2048, 25, 25, 25, 255),
    VTX(3200, 400, 740, -9216, -8192, 25, 25, 25, 255),
    VTX(2800, 200, 740, 1024, -3072, 255, 255, 255, 255),
    VTX(2400, 400, 740, 11264, -8192, 25, 25, 25, 255),
    VTX(2400, 0, 740, 11264, 2048, 25, 25, 25, 255),
    VTX(3200, 0, 740, -9216, 2048, 25, 25, 25, 255),
    VTX(3200, 400, 740, 16384, -8192, 25, 25, 25, 255),
    VTX(3200, 200, 340, 6144, -3072, 255, 255, 255, 255),
    VTX(3200, 0, 740, 16384, 2048, 25, 25, 25, 255),
    VTX(3200, 0, -60, -4096, 2048, 25, 25, 25, 255),
    VTX(3200, 400, -60, -4096, -8192, 25, 25, 25, 255),
    VTX(2400, 400, -60, 16384, -8192, 25, 25, 25, 255),
    VTX(2400, 200, 340, 6144, -3072, 255, 255, 255, 255),
    VTX(2400, 0, -60, 16384, 2048, 25, 25, 25, 255),
    VTX(2400, 400, 740, -4096, -8192, 25, 25, 25, 255),
    VTX(2400, 0, 740, -4096, 2048, 25, 25, 25, 255),
    VTX(3200, 400, -60, 6144, -8192, 25, 25, 25, 255),
    VTX(2400, 400, -60, -14336, -8192, 25, 25, 25, 255),
}; 

static Vtx old_testroom_room_02Vtx_000790[5] = {
    VTX(2800, 400, 340, 2560, -4096, 255, 255, 255, 255),
    VTX(3200, 400, 740, 7680, -9216, 25, 25, 25, 255),
    VTX(2400, 400, 740, -2560, -9216, 25, 25, 25, 255),
    VTX(2400, 400, -60, -2560, 1024, 25, 25, 25, 255),
    VTX(3200, 400, -60, 7680, 1024, 25, 25, 25, 255),
}; 

static Vtx old_testroom_room_02Vtx_0007E0[7] = {
    VTX(2400, 0, 740, 0, 5120, 25, 25, 25, 255),
    VTX(2800, 0, 340, 5120, 0, 255, 255, 255, 255),
    VTX(2400, 0, -60, 0, -5120, 25, 25, 25, 255),
    VTX(3200, 0, 740, 10240, 5120, 25, 25, 25, 255),
    VTX(3200, 0, -60, 10240, -5120, 25, 25, 25, 255),
    VTX(2780, 0, -60, 4864, -5120, 255, 255, 255, 255),
    VTX(2840, 0, -60, 5632, -5120, 255, 255, 255, 255),
}; 

Gfx old_testroom_room_02Dlist0x000850[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_testroom_sceneTex_001F10, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&old_testroom_room_02Vtx_0000C0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_02Tex_000B28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_02Vtx_0001C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&old_testroom_room_02Vtx_0003C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 26, 0),
    gsSP1Triangle(19, 30, 31, 0),
    gsSPVertex(&old_testroom_room_02Vtx_0005C0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 5, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_sceneTex_002710, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&old_testroom_room_02Vtx_000620[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(6, 10, 7, 0, 10, 9, 7, 0),
    gsSP2Triangles(11, 12, 13, 0, 12, 14, 13, 0),
    gsSP2Triangles(11, 15, 12, 0, 15, 14, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 19, 17, 0),
    gsSP2Triangles(19, 20, 17, 0, 20, 18, 17, 0),
    gsSP2Triangles(21, 22, 2, 0, 21, 2, 3, 0),
    gsSP2Triangles(21, 3, 5, 0, 2, 22, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_02Tex_001328, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_02Vtx_000790[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 1, 0, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_02Tex_001B28, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_02Vtx_0007E0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 5, 2, 1, 0),
    gsSP2Triangles(4, 6, 1, 0, 6, 5, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 old_testroom_room_02Tex_000B28[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_02Tex_000B28.rgb5a1.inc.c"
};

u64 old_testroom_room_02Tex_001328[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_02Tex_001328.rgb5a1.inc.c"
};

u64 old_testroom_room_02Tex_001B28[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_02Tex_001B28.rgb5a1.inc.c"
};

static u8 unaccounted_002328[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


