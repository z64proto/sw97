#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_testroom_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_testroom_scene.h"


static SCmdEchoSettings old_testroom_room_00Set0000Cmd00;
static SCmdRoomBehavior old_testroom_room_00Set0000Cmd01;
static SCmdSkyboxDisables old_testroom_room_00Set0000Cmd02;
static SCmdTimeSettings old_testroom_room_00Set0000Cmd03;
static SCmdMesh old_testroom_room_00Set0000Cmd04;
static SCmdActorList old_testroom_room_00Set0000Cmd05;
static SCmdEndMarker old_testroom_room_00Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx old_testroom_room_00Vtx_0000B0[4];
static Vtx old_testroom_room_00Vtx_0000F0[8];
static Vtx old_testroom_room_00Vtx_000170[6];
static Vtx old_testroom_room_00Vtx_0001D0[32];
static Vtx old_testroom_room_00Vtx_0003D0[7];
static Vtx old_testroom_room_00Vtx_000440[19];
static Vtx old_testroom_room_00Vtx_000570[32];
static Vtx old_testroom_room_00Vtx_000770[27];

static SCmdEchoSettings old_testroom_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_testroom_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables old_testroom_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdTimeSettings old_testroom_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }; // 0x0018

static SCmdMesh old_testroom_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&old_testroom_room_00MeshHeader0x000090 }; // 0x0020

static SCmdActorList old_testroom_room_00Set0000Cmd05 = {  0x01, 0x05, (u32)old_testroom_room_00ActorList0x000038 }; // 0x0028 }; 

static SCmdEndMarker old_testroom_room_00Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

ActorEntry old_testroom_room_00ActorList0x000038[5] = {
	{ ACTOR_DUNGEON_KEEP, 209, 0, -809, 0, 0, 0, 0x0015 }, //0x000038
	{ ACTOR_DUNGEON_KEEP, -135, 0, -981, 0, 0, 0, 0x0018 }, //0x000048
	{ ACTOR_DUNGEON_KEEP, -124, 0, -638, 0, 0, 0, 0x0019 }, //0x000058
	{ ACTOR_DUNGEON_KEEP, 210, 0, -574, 0, 0, 0, 0x0026 }, //0x000068
	{ ACTOR_DUNGEON_KEEP, 185, 0, -975, 0, 0, 0, 0x0025 }, //0x000078
}; 

static u32 pad88 = 0;
static u32 pad8C = 0;

MeshHeader0 old_testroom_room_00MeshHeader0x000090 = { { 0 }, 0x01, (u32)&old_testroom_room_00MeshDListEntry0x00009C, (u32)&(old_testroom_room_00MeshDListEntry0x00009C) + sizeof(old_testroom_room_00MeshDListEntry0x00009C) }; 

MeshEntry0 old_testroom_room_00MeshDListEntry0x00009C[1] = {
	{ (u32)old_testroom_room_00Dlist0x000920, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 padA8 = 0;
static u32 padAC = 0;

static Vtx old_testroom_room_00Vtx_0000B0[4] = {
    VTX(40, 0, -440, -7, 1027, 255, 255, 255, 255),
    VTX(0, 0, -440, 2094, 1033, 255, 255, 255, 255),
    VTX(0, 0, -400, 2100, -1068, 255, 255, 255, 255),
    VTX(40, 0, -400, -1, -1074, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_00Vtx_0000F0[8] = {
    VTX(-440, 0, -700, -2048, -3072, 255, 255, 255, 255),
    VTX(-440, 0, -900, -2048, 2048, 255, 255, 255, 255),
    VTX(-680, 0, -900, 4096, 2048, 255, 255, 255, 255),
    VTX(-680, 0, -700, 4096, -3072, 255, 255, 255, 255),
    VTX(-400, 0, -840, 1024, -512, 255, 255, 255, 255),
    VTX(-440, 0, -840, 0, -512, 255, 255, 255, 255),
    VTX(-440, 0, -780, 0, 1024, 255, 255, 255, 255),
    VTX(-400, 0, -780, 1024, 1024, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_00Vtx_000170[6] = {
    VTX(-400, 400, -400, -2389, -6144, 89, 89, 89, 255),
    VTX(-400, 400, -1200, -2389, 2048, 89, 89, 89, 255),
    VTX(0, 400, -800, 1024, -2048, 255, 255, 255, 255),
    VTX(400, 400, -1200, 4437, 2048, 89, 89, 89, 255),
    VTX(0, 400, -800, 1024, -2048, 255, 255, 255, 255),
    VTX(400, 400, -400, 4437, -6144, 89, 89, 89, 255),
}; 

static Vtx old_testroom_room_00Vtx_0001D0[32] = {
    VTX(-680, 200, -700, -2048, -3072, 25, 25, 25, 255),
    VTX(-680, 200, -900, -2048, 2048, 25, 25, 25, 255),
    VTX(-440, 200, -900, 4096, 2048, 25, 25, 25, 255),
    VTX(-440, 200, -700, 4096, -3072, 25, 25, 25, 255),
    VTX(-400, 0, -840, 1536, 1024, 255, 255, 255, 255),
    VTX(-400, 100, -840, 1536, -1536, 255, 255, 255, 255),
    VTX(-440, 100, -840, 512, -1536, 255, 255, 255, 255),
    VTX(-440, 0, -840, 512, 1024, 255, 255, 255, 255),
    VTX(-440, 100, -700, 3072, 1536, 255, 255, 255, 255),
    VTX(-440, 200, -700, 3072, -1024, 25, 25, 25, 255),
    VTX(-440, 200, -900, -2048, -1024, 25, 25, 25, 255),
    VTX(-440, 100, -900, -2048, 1536, 255, 255, 255, 255),
    VTX(-440, 0, -900, -2048, 4096, 255, 255, 255, 255),
    VTX(-440, 0, -840, -512, 4096, 255, 255, 255, 255),
    VTX(-440, 100, -840, -512, 1536, 255, 255, 255, 255),
    VTX(-440, 100, -780, 1024, 1536, 255, 255, 255, 255),
    VTX(-440, 0, -780, 1024, 4096, 255, 255, 255, 255),
    VTX(-440, 0, -700, 3072, 4096, 255, 255, 255, 255),
    VTX(-440, 0, -780, 0, 1024, 255, 255, 255, 255),
    VTX(-440, 100, -780, 0, 3584, 255, 255, 255, 255),
    VTX(-400, 100, -780, 1024, 3584, 255, 255, 255, 255),
    VTX(-400, 0, -780, 1024, 1024, 255, 255, 255, 255),
    VTX(-680, 0, -700, -2048, 2048, 255, 255, 255, 255),
    VTX(-680, 0, -900, 3072, 2048, 255, 255, 255, 255),
    VTX(-680, 200, -900, 3072, -3072, 25, 25, 25, 255),
    VTX(-400, 100, -780, 0, 0, 255, 255, 255, 255),
    VTX(-440, 100, -780, 0, 1024, 255, 255, 255, 255),
    VTX(-440, 100, -840, 1536, 1024, 255, 255, 255, 255),
    VTX(-400, 100, -840, 1536, 0, 255, 255, 255, 255),
    VTX(-680, 0, -700, 7168, 286, 255, 255, 255, 255),
    VTX(-680, 200, -700, 7168, -4834, 25, 25, 25, 255),
    VTX(-440, 200, -700, 1024, -4834, 25, 25, 25, 255),
}; 

static Vtx old_testroom_room_00Vtx_0003D0[7] = {
    VTX(-680, 0, -700, 7168, 286, 255, 255, 255, 255),
    VTX(-440, 200, -700, 1024, -4834, 25, 25, 25, 255),
    VTX(-440, 0, -700, 1024, 286, 255, 255, 255, 255),
    VTX(-440, 0, -900, 4096, 1536, 255, 255, 255, 255),
    VTX(-440, 200, -900, 4096, -1024, 25, 25, 25, 255),
    VTX(-680, 200, -900, -2048, -1024, 25, 25, 25, 255),
    VTX(-680, 0, -900, -2048, 1536, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_00Vtx_000440[19] = {
    VTX(0, 0, -400, -2048, 1024, 255, 255, 255, 255),
    VTX(0, 0, -120, 5120, 1024, 0, 0, 0, 255),
    VTX(20, 0, -120, 5120, 512, 0, 0, 0, 255),
    VTX(40, 0, -120, 5120, 0, 0, 0, 0, 255),
    VTX(40, 0, -400, -2048, 0, 255, 255, 255, 255),
    VTX(400, 0, -440, 5120, -18432, 255, 255, 255, 255),
    VTX(400, 0, -1200, -14336, -18432, 255, 255, 255, 255),
    VTX(-400, 0, -1200, -14336, 2048, 255, 255, 255, 255),
    VTX(-400, 0, -440, 5120, 2048, 255, 255, 255, 255),
    VTX(400, 0, -400, 6144, -18432, 255, 255, 255, 255),
    VTX(40, 0, -440, 5120, -9216, 255, 255, 255, 255),
    VTX(40, 0, -400, 6144, -9216, 255, 255, 255, 255),
    VTX(420, 0, -840, 0, 1546, 255, 255, 255, 255),
    VTX(400, 0, -840, 0, 2048, 255, 255, 255, 255),
    VTX(400, 0, -780, 1507, 2048, 255, 255, 255, 255),
    VTX(420, 0, -780, 1507, 1546, 255, 255, 255, 255),
    VTX(0, 0, -440, 5120, -8192, 255, 255, 255, 255),
    VTX(-400, 0, -400, 6144, 2048, 255, 255, 255, 255),
    VTX(0, 0, -400, 6144, -8192, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_00Vtx_000570[32] = {
    VTX(0, 0, -400, 1024, 1536, 255, 255, 255, 255),
    VTX(0, 32, -400, 1024, 1946, 204, 204, 204, 255),
    VTX(0, 32, -120, 4608, 1946, 0, 0, 0, 255),
    VTX(0, 0, -120, 4608, 1536, 0, 0, 0, 255),
    VTX(400, 0, -780, -747, 1050, 255, 255, 255, 255),
    VTX(400, 100, -780, -747, -230, 89, 89, 89, 255),
    VTX(420, 100, -780, -1003, -230, 89, 89, 89, 255),
    VTX(420, 0, -780, -1003, 1050, 255, 255, 255, 255),
    VTX(420, 100, -840, 768, -256, 89, 89, 89, 255),
    VTX(400, 100, -840, 512, -256, 89, 89, 89, 255),
    VTX(400, 0, -840, 512, 1024, 255, 255, 255, 255),
    VTX(420, 0, -840, 768, 1024, 255, 255, 255, 255),
    VTX(420, 100, -780, 827, 1113, 89, 89, 89, 255),
    VTX(400, 100, -780, 824, 851, 89, 89, 89, 255),
    VTX(400, 100, -840, 38, 859, 89, 89, 89, 255),
    VTX(420, 100, -840, 41, 1121, 89, 89, 89, 255),
    VTX(400, 100, -780, 4352, -256, 255, 255, 255, 255),
    VTX(400, 0, -780, 4352, 1024, 255, 255, 255, 255),
    VTX(400, 0, -400, 9216, 1024, 255, 255, 255, 255),
    VTX(400, 100, -400, 9216, -256, 255, 255, 255, 255),
    VTX(-400, 100, -400, -1024, -256, 255, 255, 255, 255),
    VTX(-400, 0, -400, -1024, 1024, 255, 255, 255, 255),
    VTX(-400, 0, -780, 3840, 1024, 255, 255, 255, 255),
    VTX(-400, 100, -780, 3840, -256, 255, 255, 255, 255),
    VTX(-400, 400, -1200, 9216, -4096, 25, 25, 25, 255),
    VTX(-400, 400, -400, -1024, -4096, 25, 25, 25, 255),
    VTX(-400, 100, -1200, 9216, -256, 255, 255, 255, 255),
    VTX(-400, 100, -840, 4608, -256, 255, 255, 255, 255),
    VTX(-400, 0, -840, 4608, 1024, 255, 255, 255, 255),
    VTX(-400, 0, -1200, 9216, 1024, 255, 255, 255, 255),
    VTX(400, 400, -400, 9216, -4096, 25, 25, 25, 255),
    VTX(400, 400, -1200, -1024, -4096, 25, 25, 25, 255),
}; 

static Vtx old_testroom_room_00Vtx_000770[27] = {
    VTX(400, 100, -400, 9216, -256, 255, 255, 255, 255),
    VTX(400, 400, -1200, -1024, -4096, 25, 25, 25, 255),
    VTX(400, 100, -1200, -1024, -256, 255, 255, 255, 255),
    VTX(400, 0, -1200, -1024, 1024, 255, 255, 255, 255),
    VTX(400, 0, -840, 3584, 1024, 255, 255, 255, 255),
    VTX(400, 100, -840, 3584, -256, 255, 255, 255, 255),
    VTX(400, 400, -1200, 9216, -4096, 25, 25, 25, 255),
    VTX(-400, 400, -1200, -1024, -4096, 25, 25, 25, 255),
    VTX(-400, 0, -1200, -1024, 1024, 229, 229, 229, 255),
    VTX(400, 0, -1200, 9216, 1024, 229, 229, 229, 255),
    VTX(40, 32, -400, 5760, 512, 255, 255, 255, 255),
    VTX(400, 0, -400, 0, 1024, 255, 255, 255, 255),
    VTX(40, 0, -400, 5760, 1024, 255, 255, 255, 255),
    VTX(0, 0, -400, 6400, 1024, 255, 255, 255, 255),
    VTX(-400, 0, -400, 12800, 1024, 255, 255, 255, 255),
    VTX(0, 32, -400, 6400, 512, 255, 255, 255, 255),
    VTX(400, 400, -400, 0, -5376, 25, 25, 25, 255),
    VTX(-400, 400, -400, 12800, -5376, 25, 25, 25, 255),
    VTX(40, 32, -120, 4096, 512, 0, 0, 0, 255),
    VTX(40, 32, -400, 512, 512, 204, 204, 204, 255),
    VTX(40, 0, -400, 512, 922, 255, 255, 255, 255),
    VTX(40, 0, -120, 4096, 922, 0, 0, 0, 255),
    VTX(40, 32, -400, 512, -1024, 153, 153, 153, 255),
    VTX(20, 32, -120, 768, 2560, 0, 0, 0, 255),
    VTX(0, 32, -400, 1024, -1024, 153, 153, 153, 255),
    VTX(0, 32, -120, 1024, 2560, 0, 0, 0, 255),
    VTX(40, 32, -120, 512, 2560, 0, 0, 0, 255),
}; 

Gfx old_testroom_room_00Dlist0x000920[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_testroom_sceneTex_001710, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&old_testroom_room_00Vtx_0000B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_sceneTex_001F10, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_00Vtx_0000F0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_00Tex_000C50, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&old_testroom_room_00Vtx_000170[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(3, 5, 4, 0, 0, 2, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_00Tex_001C50, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_00Vtx_0001D0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 11, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 8, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 0, 0),
    gsSP2Triangles(25, 26, 27, 0, 25, 27, 28, 0),
    gsSP1Triangle(29, 30, 31, 0),
    gsSPVertex(&old_testroom_room_00Vtx_0003D0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_00Tex_002450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&old_testroom_room_00Vtx_000440[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 5, 10, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 16, 8, 17, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_00Tex_003450, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_00Vtx_000570[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 20, 0, 24, 20, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 26, 0),
    gsSP1Triangle(19, 30, 31, 0),
    gsSPVertex(&old_testroom_room_00Vtx_000770[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 2, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 10, 15, 0),
    gsSP2Triangles(16, 15, 17, 0, 11, 10, 16, 0),
    gsSP2Triangles(17, 15, 14, 0, 18, 19, 20, 0),
    gsSP2Triangles(18, 20, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(23, 25, 24, 0, 22, 26, 23, 0),
    gsSPEndDisplayList(),
}; 

u64 old_testroom_room_00Tex_000C50[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_00Tex_000C50.rgb5a1.inc.c"
};

u64 old_testroom_room_00Tex_001C50[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_00Tex_001C50.rgb5a1.inc.c"
};

u64 old_testroom_room_00Tex_002450[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_00Tex_002450.rgb5a1.inc.c"
};

u64 old_testroom_room_00Tex_003450[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_00Tex_003450.rgb5a1.inc.c"
};


