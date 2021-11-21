#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_testroom_room_01.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_testroom_scene.h"


static SCmdEchoSettings old_testroom_room_01Set0000Cmd00;
static SCmdRoomBehavior old_testroom_room_01Set0000Cmd01;
static SCmdSkyboxDisables old_testroom_room_01Set0000Cmd02;
static SCmdTimeSettings old_testroom_room_01Set0000Cmd03;
static SCmdMesh old_testroom_room_01Set0000Cmd04;
static SCmdActorList old_testroom_room_01Set0000Cmd05;
static SCmdEndMarker old_testroom_room_01Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx old_testroom_room_01Vtx_0000D0[12];
static Vtx old_testroom_room_01Vtx_000190[32];
static Vtx old_testroom_room_01Vtx_000390[24];
static Vtx old_testroom_room_01Vtx_000510[5];
static Vtx old_testroom_room_01Vtx_000560[50];

static SCmdEchoSettings old_testroom_room_01Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_testroom_room_01Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables old_testroom_room_01Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdTimeSettings old_testroom_room_01Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }; // 0x0018

static SCmdMesh old_testroom_room_01Set0000Cmd04 = {  0x0A, 0, (u32)&old_testroom_room_01MeshHeader0x0000B0 }; // 0x0020

static SCmdActorList old_testroom_room_01Set0000Cmd05 = {  0x01, 0x07, (u32)old_testroom_room_01ActorList0x000038 }; // 0x0028 }; 

static SCmdEndMarker old_testroom_room_01Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

ActorEntry old_testroom_room_01ActorList0x000038[7] = {
	{ ACTOR_DUNGEON_KEEP, 1499, 179, -1199, 0, 0, 0, 0x001A }, //0x000038
	{ ACTOR_DUNGEON_KEEP, 1848, 179, -1199, 0, 0, 0, 0x001B }, //0x000048
	{ ACTOR_DUNGEON_KEEP, 1535, 0, -574, 0, 0, 0, 0x0020 }, //0x000058
	{ ACTOR_DUNGEON_KEEP, 1698, 0, -562, 0, 0, 0, 0x0021 }, //0x000068
	{ ACTOR_DUNGEON_KEEP, 1898, 0, -562, 0, 0, 0, 0x0022 }, //0x000078
	{ ACTOR_DUNGEON_KEEP, 1665, 37, -1071, 0, 0, 0, 0x5228 }, //0x000088
	{ ACTOR_DUNGEON_KEEP, 1877, 18, -946, 0, 0, 0, 0xEB27 }, //0x000098
}; 

static u32 padA8 = 0;
static u32 padAC = 0;

MeshHeader0 old_testroom_room_01MeshHeader0x0000B0 = { { 0 }, 0x01, (u32)&old_testroom_room_01MeshDListEntry0x0000BC, (u32)&(old_testroom_room_01MeshDListEntry0x0000BC) + sizeof(old_testroom_room_01MeshDListEntry0x0000BC) }; 

MeshEntry0 old_testroom_room_01MeshDListEntry0x0000BC[1] = {
	{ (u32)old_testroom_room_01Dlist0x000880, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 padC8 = 0;
static u32 padCC = 0;

static Vtx old_testroom_room_01Vtx_0000D0[12] = {
    VTX(440, 0, -840, 0, 512, 255, 255, 255, 255),
    VTX(420, 0, -840, 256, 512, 255, 255, 255, 255),
    VTX(420, 0, -780, 256, -256, 255, 255, 255, 255),
    VTX(440, 0, -780, 0, -256, 255, 255, 255, 255),
    VTX(1280, 0, -840, 512, 256, 255, 255, 255, 255),
    VTX(1240, 0, -840, 0, 256, 255, 255, 255, 255),
    VTX(1240, 0, -780, 0, 1024, 255, 255, 255, 255),
    VTX(1280, 0, -780, 512, 1024, 255, 255, 255, 255),
    VTX(1240, 0, -700, -3072, -4096, 255, 255, 255, 255),
    VTX(1240, 0, -900, -3072, 1024, 255, 255, 255, 255),
    VTX(440, 0, -900, 7168, 1024, 255, 255, 255, 255),
    VTX(440, 0, -700, 7168, -4096, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_01Vtx_000190[32] = {
    VTX(440, 100, -780, -512, -512, 89, 89, 89, 255),
    VTX(420, 100, -780, -512, 0, 89, 89, 89, 255),
    VTX(420, 100, -840, 1024, 0, 89, 89, 89, 255),
    VTX(440, 100, -840, 1024, -512, 89, 89, 89, 255),
    VTX(420, 100, -780, 768, -256, 89, 89, 89, 255),
    VTX(440, 100, -780, 512, -256, 89, 89, 89, 255),
    VTX(440, 0, -780, 512, 1024, 255, 255, 255, 255),
    VTX(420, 0, -780, 768, 1024, 255, 255, 255, 255),
    VTX(1240, 0, -780, 0, 1536, 255, 255, 255, 255),
    VTX(1240, 100, -780, 0, 4096, 89, 89, 89, 255),
    VTX(1280, 100, -780, 1024, 4096, 89, 89, 89, 255),
    VTX(1280, 0, -780, 1024, 1536, 255, 255, 255, 255),
    VTX(1280, 0, -840, 512, 512, 255, 255, 255, 255),
    VTX(1280, 100, -840, 512, -2048, 89, 89, 89, 255),
    VTX(1240, 100, -840, -512, -2048, 89, 89, 89, 255),
    VTX(1240, 0, -840, -512, 512, 255, 255, 255, 255),
    VTX(1280, 100, -780, 1024, 1024, 89, 89, 89, 255),
    VTX(1240, 100, -780, 1024, 0, 89, 89, 89, 255),
    VTX(1240, 100, -840, -512, 0, 89, 89, 89, 255),
    VTX(1280, 100, -840, -512, 1024, 89, 89, 89, 255),
    VTX(440, 200, -700, -1024, -2560, 25, 25, 25, 255),
    VTX(440, 200, -900, -1024, 2560, 25, 25, 25, 255),
    VTX(1240, 200, -900, 9216, 2560, 25, 25, 25, 255),
    VTX(1240, 200, -700, 9216, -2560, 25, 25, 25, 255),
    VTX(1240, 0, -900, 7168, 512, 255, 255, 255, 255),
    VTX(1240, 200, -900, 7168, -4608, 25, 25, 25, 255),
    VTX(440, 200, -900, -3072, -4608, 25, 25, 25, 255),
    VTX(440, 0, -900, -3072, 512, 255, 255, 255, 255),
    VTX(440, 0, -700, 7168, 1024, 255, 255, 255, 255),
    VTX(440, 200, -700, 7168, -4096, 25, 25, 25, 255),
    VTX(1240, 200, -700, -3072, -4096, 25, 25, 25, 255),
    VTX(1240, 0, -700, -3072, 1024, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_01Vtx_000390[24] = {
    VTX(440, 0, -840, 256, 1280, 255, 255, 255, 255),
    VTX(440, 100, -840, 256, 0, 89, 89, 89, 255),
    VTX(420, 100, -840, 0, 0, 89, 89, 89, 255),
    VTX(420, 0, -840, 0, 1280, 255, 255, 255, 255),
    VTX(1240, 100, -780, 0, -1536, 255, 255, 255, 255),
    VTX(1240, 0, -780, 0, 1024, 255, 255, 255, 255),
    VTX(1240, 0, -700, 2048, 1024, 255, 255, 255, 255),
    VTX(1240, 100, -700, 2048, -1536, 255, 255, 255, 255),
    VTX(440, 100, -700, -1536, 2560, 255, 255, 255, 255),
    VTX(440, 0, -700, -1536, 5120, 255, 255, 255, 255),
    VTX(440, 0, -780, 512, 5120, 255, 255, 255, 255),
    VTX(440, 100, -780, 512, 2560, 255, 255, 255, 255),
    VTX(1240, 200, -700, 2048, -4096, 25, 25, 25, 255),
    VTX(1240, 200, -900, -3072, -4096, 25, 25, 25, 255),
    VTX(1240, 100, -900, -3072, -1536, 255, 255, 255, 255),
    VTX(1240, 0, -900, -3072, 1024, 255, 255, 255, 255),
    VTX(1240, 0, -840, -1536, 1024, 255, 255, 255, 255),
    VTX(1240, 100, -840, -1536, -1536, 255, 255, 255, 255),
    VTX(440, 200, -900, 3584, 0, 25, 25, 25, 255),
    VTX(440, 200, -700, -1536, 0, 25, 25, 25, 255),
    VTX(440, 100, -900, 3584, 2560, 255, 255, 255, 255),
    VTX(440, 100, -840, 2048, 2560, 255, 255, 255, 255),
    VTX(440, 0, -840, 2048, 5120, 255, 255, 255, 255),
    VTX(440, 0, -900, 3584, 5120, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_01Vtx_000510[5] = {
    VTX(1280, 400, -400, 5120, 1024, 76, 76, 76, 255),
    VTX(1680, 400, -800, 2560, -1536, 255, 255, 255, 255),
    VTX(2080, 400, -400, 0, 1024, 76, 76, 76, 255),
    VTX(1280, 400, -1200, 5120, -4096, 76, 76, 76, 255),
    VTX(2080, 400, -1200, 0, -4096, 76, 76, 76, 255),
}; 

static Vtx old_testroom_room_01Vtx_000560[50] = {
    VTX(2080, 0, -400, -4096, -9216, 255, 235, 205, 255),
    VTX(2080, 0, -1200, -4096, 1024, 255, 235, 205, 255),
    VTX(1280, 0, -1200, 6144, 1024, 255, 235, 205, 255),
    VTX(1280, 0, -400, 6144, -9216, 255, 235, 205, 255),
    VTX(2100, 100, -840, 256, -256, 89, 89, 89, 255),
    VTX(2080, 100, -840, 0, -256, 89, 89, 89, 255),
    VTX(2080, 0, -840, 0, 1024, 255, 255, 255, 255),
    VTX(2100, 0, -840, 256, 1024, 255, 255, 255, 255),
    VTX(2100, 100, -780, 768, 1024, 89, 89, 89, 255),
    VTX(2080, 100, -780, 768, 768, 89, 89, 89, 255),
    VTX(2080, 100, -840, 0, 768, 89, 89, 89, 255),
    VTX(2100, 100, -840, 0, 1024, 89, 89, 89, 255),
    VTX(2100, 0, -840, 0, 512, 255, 235, 205, 255),
    VTX(2080, 0, -840, 0, 768, 255, 235, 205, 255),
    VTX(2080, 0, -780, 768, 768, 255, 235, 205, 255),
    VTX(2100, 0, -780, 768, 512, 255, 235, 205, 255),
    VTX(2080, 0, -780, 256, 1024, 255, 255, 255, 255),
    VTX(2080, 100, -780, 256, -256, 89, 89, 89, 255),
    VTX(2100, 100, -780, 0, -256, 89, 89, 89, 255),
    VTX(2100, 0, -780, 0, 1024, 255, 255, 255, 255),
    VTX(1280, 100, -400, -6656, -256, 229, 229, 229, 255),
    VTX(1280, 0, -400, -6656, 1024, 229, 229, 229, 255),
    VTX(1280, 0, -780, -1792, 1024, 229, 229, 229, 255),
    VTX(1280, 100, -780, -1792, -256, 229, 229, 229, 255),
    VTX(2080, 100, -780, 4352, -256, 229, 229, 229, 255),
    VTX(2080, 0, -780, 4352, 1024, 229, 229, 229, 255),
    VTX(2080, 0, -400, 9216, 1024, 229, 229, 229, 255),
    VTX(2080, 100, -400, 9216, -256, 229, 229, 229, 255),
    VTX(2080, 400, -400, 9216, -4096, 38, 38, 38, 255),
    VTX(2080, 400, -1200, -1024, -4096, 38, 38, 38, 255),
    VTX(2080, 100, -1200, -1024, -256, 229, 229, 229, 255),
    VTX(2080, 0, -1200, -1024, 1024, 229, 229, 229, 255),
    VTX(2080, 0, -840, 3584, 1024, 229, 229, 229, 255),
    VTX(2080, 100, -840, 3584, -256, 229, 229, 229, 255),
    VTX(2080, 100, -1200, -1024, -256, 229, 229, 229, 255),
    VTX(1280, 400, -1200, 3584, -4096, 38, 38, 38, 255),
    VTX(1280, 400, -400, -6656, -4096, 38, 38, 38, 255),
    VTX(1280, 100, -400, -6656, -256, 229, 229, 229, 255),
    VTX(1280, 100, -1200, 3584, -256, 229, 229, 229, 255),
    VTX(1280, 100, -840, -1024, -256, 229, 229, 229, 255),
    VTX(1280, 0, -840, -1024, 1024, 229, 229, 229, 255),
    VTX(1280, 0, -1200, 3584, 1024, 229, 229, 229, 255),
    VTX(1280, 0, -1200, -5632, 1024, 204, 204, 204, 255),
    VTX(2080, 0, -1200, 4608, 1024, 204, 204, 204, 255),
    VTX(2080, 400, -1200, 4608, -4096, 38, 38, 38, 255),
    VTX(1280, 400, -1200, -5632, -4096, 38, 38, 38, 255),
    VTX(2080, 0, -400, -4096, 1024, 204, 204, 204, 255),
    VTX(1280, 0, -400, 6144, 1024, 204, 204, 204, 255),
    VTX(1280, 400, -400, 6144, -4096, 38, 38, 38, 255),
    VTX(2080, 400, -400, -4096, -4096, 38, 38, 38, 255),
}; 

Gfx old_testroom_room_01Dlist0x000880[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_testroom_sceneTex_001F10, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&old_testroom_room_01Vtx_0000D0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_01Tex_000AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_01Vtx_000190[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&old_testroom_room_01Vtx_000390[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(7, 12, 13, 0, 7, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 14, 0),
    gsSP2Triangles(18, 19, 8, 0, 18, 8, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_01Tex_0012F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_01Vtx_000510[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_01Tex_001AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_01Vtx_000560[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&old_testroom_room_01Vtx_000560[31], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 7, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSPEndDisplayList(),
}; 

u64 old_testroom_room_01Tex_000AF0[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_01Tex_000AF0.rgb5a1.inc.c"
};

u64 old_testroom_room_01Tex_0012F0[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_01Tex_0012F0.rgb5a1.inc.c"
};

u64 old_testroom_room_01Tex_001AF0[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_01Tex_001AF0.rgb5a1.inc.c"
};


