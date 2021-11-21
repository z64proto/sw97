#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "lod_test_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "lod_test_scene.h"


static SCmdRoomBehavior lod_test_room_00Set0000Cmd00;
static SCmdBase lod_test_room_00Set0000Cmd01;
static SCmdSkyboxDisables lod_test_room_00Set0000Cmd02;
static SCmdMesh lod_test_room_00Set0000Cmd03;
static SCmdEndMarker lod_test_room_00Set0000Cmd04;
static s32 terminatorMaybe;
static Vtx lod_test_room_00Vtx_000050[4];
static Vtx lod_test_room_00Vtx_000918[16];
static Vtx lod_test_room_00Vtx_001A98[3];
static Vtx lod_test_room_00Vtx_001AF0[1];
static Vtx lod_test_room_00Vtx_001B00[1];

static SCmdRoomBehavior lod_test_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000000 }; // 0x0000

static SCmdBase lod_test_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables lod_test_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdMesh lod_test_room_00Set0000Cmd03 = {  0x0A, 0, (u32)&lod_test_room_00MeshHeader0x00003C }; // 0x0018

static SCmdEndMarker lod_test_room_00Set0000Cmd04 = {  0x14, 0x00, 0x00 }; // 0x0020

static u8 unaccounted_000028[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
}; 

MeshEntry0 lod_test_room_00MeshDListEntry0x000034[1] = {
	{ (u32)lod_test_room_00DL_001B48, 0 },

}; 

MeshHeader0 lod_test_room_00MeshHeader0x00003C = {
    { 0 },
    1,
    lod_test_room_00MeshDListEntry0x000034,
    (u32)lod_test_room_00MeshDListEntry0x000034 + (sizeof(MeshEntry0) * ARRAY_COUNT(lod_test_room_00MeshDListEntry0x000034)),
};

static Vtx lod_test_room_00Vtx_000050[4] = {
    VTX(1200, 0, 1200, 14677, 13653, 0, 120, 0, 255),
    VTX(1200, 0, -1200, 14677, -13653, 0, 120, 0, 255),
    VTX(-1200, 0, -1200, -12629, -13653, 0, 120, 0, 255),
    VTX(-1200, 0, 1200, -12629, 13653, 0, 120, 0, 255),
}; 

Gfx lod_test_room_00DL_000090[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(lod_test_room_00Tex_000118, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&lod_test_room_00Vtx_000050[0], 4, 0),
    gsSP1Quadrangle(0, 1, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 lod_test_room_00Tex_000118[] = {
#include "assets/scenes/test_rooms/lod_test//lod_test_room_00Tex_000118.rgb5a1.inc.c"
};

static Vtx lod_test_room_00Vtx_000918[16] = {
    VTX(80, 0, -1040, 4096, 2048, 120, 0, 0, 255),
    VTX(80, 160, -1040, 4096, 683, 120, 0, 0, 255),
    VTX(80, 160, -880, 2048, 683, 120, 0, 0, 255),
    VTX(80, 0, -880, 2048, 2048, 120, 0, 0, 255),
    VTX(-80, 0, -1040, 2048, 2048, 0, 0, 136, 255),
    VTX(-80, 160, -1040, 2048, 683, 0, 0, 136, 255),
    VTX(80, 160, -1040, 4096, 683, 0, 0, 136, 255),
    VTX(80, 0, -1040, 4096, 2048, 0, 0, 136, 255),
    VTX(-80, 0, -880, 0, 2048, 136, 0, 0, 255),
    VTX(-80, 160, -880, 0, 683, 136, 0, 0, 255),
    VTX(-80, 160, -1040, 2048, 683, 136, 0, 0, 255),
    VTX(-80, 0, -1040, 2048, 2048, 136, 0, 0, 255),
    VTX(80, 0, -880, 2048, 2048, 0, 0, 120, 255),
    VTX(80, 160, -880, 2048, 683, 0, 0, 120, 255),
    VTX(-80, 160, -880, 0, 683, 0, 0, 120, 255),
    VTX(-80, 0, -880, 0, 2048, 0, 0, 120, 255),
}; 

Gfx lod_test_room_00DL_000A18[] = {
    gsDPPipeSync(),
    gsDPLoadTextureBlock(lod_test_room_00Tex_000A88, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&lod_test_room_00Vtx_000918[0], 16, 0),
    gsSP1Quadrangle(0, 1, 2, 3, 0),
    gsSP1Quadrangle(4, 5, 6, 7, 0),
    gsSP1Quadrangle(8, 9, 10, 11, 0),
    gsSP1Quadrangle(12, 13, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 lod_test_room_00Tex_000A88[] = {
#include "assets/scenes/test_rooms/lod_test//lod_test_room_00Tex_000A88.rgb5a1.inc.c"
};

Gfx lod_test_room_00DL_001A88[] = {
    gsSPDisplayList(lod_test_room_00DL_000A18),
    gsSPEndDisplayList(),
}; 

static Vtx lod_test_room_00Vtx_001A98[3] = {
    VTX(-120, 0, -880, -512, 2048, 0, 0, 120, 255),
    VTX(120, 0, -880, 2560, 2048, 0, 0, 120, 255),
    VTX(0, 240, -880, 1024, 0, 0, 0, 120, 255),
}; 

Gfx lod_test_room_00DL_001AC8[] = {
    gsSPVertex(&lod_test_room_00Vtx_001A98[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx lod_test_room_00DL_001AE0[] = {
    gsSPDisplayList(lod_test_room_00DL_001AC8),
    gsSPEndDisplayList(),
}; 

static Vtx lod_test_room_00Vtx_001AF0[1] = {
    VTX(0, 80, -960, 0, 0, 0, 0, 0, 0),
}; 

static Vtx lod_test_room_00Vtx_001B00[1] = {
    VTX(0, 80, -960, 0, 0, 0, 0, 0, 0),
}; 

Gfx lod_test_room_00DL_001B10[] = {
    gsSPVertex(&lod_test_room_00Vtx_001AF0[0], 1, 0),
    gsSPBranchLessZraw(lod_test_room_00DL_001A88, 0, 0x00000190),
    gsSPVertex(&lod_test_room_00Vtx_001B00[0], 1, 0),
    gsSPBranchLessZraw(lod_test_room_00DL_001AE0, 0, 0x00000640),
    gsSPEndDisplayList(),
}; 

Gfx lod_test_room_00DL_001B48[] = {
    gsSPDisplayList(lod_test_room_00DL_000090),
    gsSPDisplayList(lod_test_room_00DL_001B10),
    gsSPEndDisplayList(),
}; 


