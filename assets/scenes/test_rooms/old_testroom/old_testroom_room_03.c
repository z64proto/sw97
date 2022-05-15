#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_testroom_room_03.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_testroom_scene.h"


static SCmdEchoSettings old_testroom_room_03Set0000Cmd00;
static SCmdRoomBehavior old_testroom_room_03Set0000Cmd01;
static SCmdSkyboxDisables old_testroom_room_03Set0000Cmd02;
static SCmdTimeSettings old_testroom_room_03Set0000Cmd03;
static SCmdMesh old_testroom_room_03Set0000Cmd04;
static SCmdEndMarker old_testroom_room_03Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx old_testroom_room_03Vtx_000050[12];
static Vtx old_testroom_room_03Vtx_000110[22];
static Vtx old_testroom_room_03Vtx_000270[12];
static Vtx old_testroom_room_03Vtx_000330[4];
static Vtx old_testroom_room_03Vtx_000370[32];
static Vtx old_testroom_room_03Vtx_000570[23];
static Vtx old_testroom_room_03Vtx_0006E0[5];

static SCmdEchoSettings old_testroom_room_03Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_testroom_room_03Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables old_testroom_room_03Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdTimeSettings old_testroom_room_03Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01 }; // 0x0018

static SCmdMesh old_testroom_room_03Set0000Cmd04 = {  0x0A, 0, (u32)&old_testroom_room_03MeshHeader0x000030 }; // 0x0020

static SCmdEndMarker old_testroom_room_03Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

MeshHeader0 old_testroom_room_03MeshHeader0x000030 = { { 0 }, 0x01, (u32)&old_testroom_room_03MeshDListEntry0x00003C, (u32)&(old_testroom_room_03MeshDListEntry0x00003C) + sizeof(old_testroom_room_03MeshDListEntry0x00003C) }; 

MeshEntry0 old_testroom_room_03MeshDListEntry0x00003C[1] = {
	{ (u32)old_testroom_room_03Dlist0x000730, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad48 = 0;
static u32 pad4C = 0;

static Vtx old_testroom_room_03Vtx_000050[12] = {
    VTX(40, 0, 200, 2048, -1024, 255, 255, 255, 255),
    VTX(0, 0, 200, 0, -1024, 255, 255, 255, 255),
    VTX(0, 0, 240, 0, 1024, 255, 255, 255, 255),
    VTX(40, 0, 240, 2048, 1024, 255, 255, 255, 255),
    VTX(0, 0, 560, 2048, 1024, 255, 255, 255, 255),
    VTX(0, 0, 600, 2048, -1024, 255, 255, 255, 255),
    VTX(40, 0, 600, 0, -1024, 255, 255, 255, 255),
    VTX(40, 0, 560, 0, 1024, 255, 255, 255, 255),
    VTX(0, 0, 680, 2048, 1024, 255, 255, 255, 255),
    VTX(0, 0, 720, 2048, -1024, 255, 255, 255, 255),
    VTX(40, 0, 720, 0, -1024, 255, 255, 255, 255),
    VTX(40, 0, 680, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_03Vtx_000110[22] = {
    VTX(0, 0, 600, 2048, 0, 255, 255, 255, 255),
    VTX(0, 0, 680, 2560, 0, 255, 255, 255, 255),
    VTX(40, 0, 680, 2560, -200, 255, 255, 255, 255),
    VTX(40, 0, 600, 2048, -200, 255, 255, 255, 255),
    VTX(0, 0, 720, 439, 0, 255, 255, 255, 255),
    VTX(0, 0, 1000, 439, 2006, 255, 255, 255, 255),
    VTX(40, 0, 1000, 731, 2006, 255, 255, 255, 255),
    VTX(40, 0, 720, 731, 0, 255, 255, 255, 255),
    VTX(0, 0, 240, -256, 0, 255, 255, 255, 255),
    VTX(0, 0, 560, 1792, 0, 255, 255, 255, 255),
    VTX(40, 0, 560, 1792, -200, 255, 255, 255, 255),
    VTX(40, 0, 240, -256, -200, 255, 255, 255, 255),
    VTX(0, 0, 200, -512, 0, 255, 255, 255, 255),
    VTX(-400, 0, 200, -512, 2002, 255, 255, 255, 255),
    VTX(-400, 0, 1000, 4608, 2002, 255, 255, 255, 255),
    VTX(0, 0, 720, 2816, 0, 255, 255, 255, 255),
    VTX(-400, 0, 1000, -2487, 2006, 255, 255, 255, 255),
    VTX(400, 0, 1000, 3365, 2006, 255, 255, 255, 255),
    VTX(400, 0, 1000, 4608, -2002, 255, 255, 255, 255),
    VTX(400, 0, 200, -512, -2002, 255, 255, 255, 255),
    VTX(40, 0, 200, -512, -200, 255, 255, 255, 255),
    VTX(40, 0, 720, 2816, -200, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_03Vtx_000270[12] = {
    VTX(-400, 0, 1000, 2253, 2015, 242, 242, 242, 255),
    VTX(-400, 400, 1000, 2253, 60, 216, 216, 216, 255),
    VTX(400, 400, 1000, -1843, 60, 216, 216, 216, 255),
    VTX(400, 0, 1000, -1843, 2015, 242, 242, 242, 255),
    VTX(-400, 0, 200, 1792, 2019, 255, 255, 255, 255),
    VTX(-400, 400, 200, 1792, 39, 255, 255, 255, 255),
    VTX(-400, 400, 1000, -3328, 39, 255, 255, 255, 255),
    VTX(-400, 0, 1000, -3328, 2019, 255, 255, 255, 255),
    VTX(400, 400, 1000, 1638, 47, 255, 255, 255, 255),
    VTX(400, 400, 200, -2458, 47, 255, 255, 255, 255),
    VTX(400, 0, 200, -2458, 2020, 255, 255, 255, 255),
    VTX(400, 0, 1000, 1638, 2020, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_03Vtx_000330[4] = {
    VTX(-400, 400, 200, 2048, 0, 255, 255, 255, 255),
    VTX(400, 400, 200, 0, 0, 255, 255, 255, 255),
    VTX(400, 400, 1000, 0, 2048, 255, 255, 255, 255),
    VTX(-400, 400, 1000, 2048, 2048, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_03Vtx_000370[32] = {
    VTX(-400, 0, 680, -8251, 1960, 153, 153, 153, 255),
    VTX(0, 0, 680, 1989, 1960, 255, 255, 255, 255),
    VTX(0, 32, 680, 1989, 1140, 255, 255, 255, 255),
    VTX(-400, 160, 680, -8251, -2136, 114, 114, 114, 255),
    VTX(400, 160, 680, 12229, -2136, 114, 114, 114, 255),
    VTX(40, 32, 680, 3013, 1140, 255, 255, 255, 255),
    VTX(400, 0, 680, 12229, 1960, 153, 153, 153, 255),
    VTX(40, 0, 680, 3013, 1960, 255, 255, 255, 255),
    VTX(40, 0, 600, 0, 1962, 255, 255, 255, 255),
    VTX(40, 0, 680, 2048, 1962, 255, 255, 255, 255),
    VTX(40, 32, 680, 2048, 1143, 89, 89, 89, 255),
    VTX(40, 32, 600, 0, 1143, 89, 89, 89, 255),
    VTX(0, 0, 680, 6144, 1953, 255, 255, 255, 255),
    VTX(0, 0, 600, 4096, 1953, 255, 255, 255, 255),
    VTX(0, 32, 600, 4096, 2772, 89, 89, 89, 255),
    VTX(0, 32, 680, 6144, 2772, 89, 89, 89, 255),
    VTX(40, 32, 680, 0, 2048, 89, 89, 89, 255),
    VTX(0, 32, 680, 1024, 2048, 89, 89, 89, 255),
    VTX(0, 32, 600, 1024, 41, 89, 89, 89, 255),
    VTX(40, 32, 600, 0, 41, 89, 89, 89, 255),
    VTX(-400, 0, 200, 6656, -2133, 153, 153, 153, 255),
    VTX(0, 0, 200, 16896, -2133, 255, 255, 255, 255),
    VTX(0, 32, 200, 16896, -2952, 255, 255, 255, 255),
    VTX(-400, 400, 200, 6656, -12373, 114, 114, 114, 255),
    VTX(400, 400, 200, 27136, -12373, 114, 114, 114, 255),
    VTX(40, 32, 200, 17920, -2952, 255, 255, 255, 255),
    VTX(400, 0, 200, 27136, -2133, 153, 153, 153, 255),
    VTX(40, 0, 200, 17920, -2133, 255, 255, 255, 255),
    VTX(400, 0, 600, -7227, 1960, 153, 153, 153, 255),
    VTX(40, 0, 600, 1989, 1960, 255, 255, 255, 255),
    VTX(40, 32, 600, 1989, 1140, 255, 255, 255, 255),
    VTX(400, 160, 600, -7227, -2136, 114, 114, 114, 255),
}; 

static Vtx old_testroom_room_03Vtx_000570[23] = {
    VTX(40, 32, 600, 1989, 1140, 255, 255, 255, 255),
    VTX(0, 32, 600, 3013, 1140, 255, 255, 255, 255),
    VTX(-400, 160, 600, 13253, -2136, 114, 114, 114, 255),
    VTX(400, 160, 600, -7227, -2136, 114, 114, 114, 255),
    VTX(-400, 0, 600, 13253, 1960, 153, 153, 153, 255),
    VTX(0, 0, 600, 3013, 1960, 255, 255, 255, 255),
    VTX(40, 32, -120, 997, 14503, 0, 0, 0, 255),
    VTX(40, 32, 200, 997, 6311, 153, 153, 153, 255),
    VTX(20, 32, -120, 485, 14503, 0, 0, 0, 255),
    VTX(0, 32, 200, -27, 6311, 153, 153, 153, 255),
    VTX(0, 32, -120, -27, 14503, 0, 0, 0, 255),
    VTX(0, 32, -120, 22151, 1139, 0, 0, 0, 255),
    VTX(0, 32, 200, 13959, 1139, 204, 204, 204, 255),
    VTX(0, 0, 200, 13959, 1958, 255, 255, 255, 255),
    VTX(0, 0, -120, 22151, 1958, 0, 0, 0, 255),
    VTX(40, 0, 200, 7078, 1955, 255, 255, 255, 255),
    VTX(40, 32, 200, 7078, 2768, 204, 204, 204, 255),
    VTX(40, 32, -120, 15209, 2768, 0, 0, 0, 255),
    VTX(40, 0, -120, 15209, 1955, 0, 0, 0, 255),
    VTX(-400, 160, 600, -1024, -94, 255, 255, 255, 255),
    VTX(-400, 160, 680, -1024, 1954, 255, 255, 255, 255),
    VTX(400, 160, 680, 19456, 1954, 255, 255, 255, 255),
    VTX(400, 160, 600, 19456, -94, 255, 255, 255, 255),
}; 

static Vtx old_testroom_room_03Vtx_0006E0[5] = {
    VTX(0, 0, 200, 6144, 1024, 255, 255, 255, 255),
    VTX(40, 0, 200, 6144, 0, 255, 255, 255, 255),
    VTX(20, 0, -120, -2048, 512, 0, 0, 0, 255),
    VTX(40, 0, -120, -2048, 0, 0, 0, 0, 255),
    VTX(0, 0, -120, -2048, 1024, 0, 0, 0, 255),
}; 

Gfx old_testroom_room_03Dlist0x000730[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(old_testroom_sceneTex_001710, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&old_testroom_room_03Vtx_000050[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_03Tex_000A20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 1, 5, 6, 0, 0),
    gsSPVertex(&old_testroom_room_03Vtx_000110[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 5, 4, 0, 17, 7, 6, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_03Tex_001A20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&old_testroom_room_03Vtx_000270[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_03Tex_002A20, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_03Vtx_000330[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_sceneTex_002710, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&old_testroom_room_03Vtx_000370[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 5, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 23, 22, 0),
    gsSP2Triangles(24, 22, 25, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&old_testroom_room_03Vtx_000570[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 1, 0, 1, 5, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(9, 10, 8, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP1Triangle(19, 21, 22, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(old_testroom_room_03Tex_003220, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_testroom_room_03Vtx_0006E0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(4, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 old_testroom_room_03Tex_000A20[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_03Tex_000A20.rgb5a1.inc.c"
};

u64 old_testroom_room_03Tex_001A20[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_03Tex_001A20.rgb5a1.inc.c"
};

u64 old_testroom_room_03Tex_002A20[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_03Tex_002A20.rgb5a1.inc.c"
};

u64 old_testroom_room_03Tex_003220[] = {
#include "assets/scenes/test_rooms/old_testroom//old_testroom_room_03Tex_003220.rgb5a1.inc.c"
};


