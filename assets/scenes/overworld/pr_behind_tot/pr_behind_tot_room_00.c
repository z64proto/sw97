#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "pr_behind_tot_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "pr_behind_tot_scene.h"


static SCmdRoomBehavior pr_behind_tot_room_00Set0000Cmd00;
static SCmdBase pr_behind_tot_room_00Set0000Cmd01;
static SCmdSkyboxDisables pr_behind_tot_room_00Set0000Cmd02;
static SCmdTimeSettings pr_behind_tot_room_00Set0000Cmd03;
static SCmdMesh pr_behind_tot_room_00Set0000Cmd04;
static SCmdEndMarker pr_behind_tot_room_00Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx pr_behind_tot_room_00Vtx_000050[25];
static Vtx pr_behind_tot_room_00Vtx_0001E0[17];
static Vtx pr_behind_tot_room_00Vtx_000460[19];
static Vtx pr_behind_tot_room_00Vtx_000590[16];
static Vtx pr_behind_tot_room_00Vtx_000690[5];
static Vtx pr_behind_tot_room_00Vtx_0006E0[25];
static Vtx pr_behind_tot_room_00Vtx_000B58[4];
static Vtx pr_behind_tot_room_00Vtx_000B98[16];
static Vtx pr_behind_tot_room_00Vtx_000C98[8];
static Vtx pr_behind_tot_room_00Vtx_000E08[16];
static Vtx pr_behind_tot_room_00Vtx_000F08[5];
static Vtx pr_behind_tot_room_00Vtx_000F58[10];
static Vtx pr_behind_tot_room_00Vtx_000FF8[3];
static Vtx pr_behind_tot_room_00Vtx_001178[20];
static Vtx pr_behind_tot_room_00Vtx_0012B8[2];
static Vtx pr_behind_tot_room_00Vtx_0012D8[12];
static Vtx pr_behind_tot_room_00Vtx_001398[2];

static SCmdRoomBehavior pr_behind_tot_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000000 }; // 0x0000

static SCmdBase pr_behind_tot_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables pr_behind_tot_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings pr_behind_tot_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x08, 0x00, 0x01 }; // 0x0018

static SCmdMesh pr_behind_tot_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&pr_behind_tot_room_00MeshHeader0x00003C }; // 0x0020

static SCmdEndMarker pr_behind_tot_room_00Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

static u8 unaccounted_000030[4] = {
    0x01, 0x00, 0x00, 0x00, 
}; 

MeshEntry0 pr_behind_tot_room_00MeshDListEntry0x000034[1] = {
	{ (u32)pr_behind_tot_room_00Dlist0x001538, 0 },

}; 

MeshHeader0 pr_behind_tot_room_00MeshHeader0x00003C = {
    { 0 },
    1,
    pr_behind_tot_room_00MeshDListEntry0x000034,
    (u32)pr_behind_tot_room_00MeshDListEntry0x000034 + (sizeof(MeshEntry0) * ARRAY_COUNT(pr_behind_tot_room_00MeshDListEntry0x000034)),
};

static Vtx pr_behind_tot_room_00Vtx_000050[25] = {
    VTX(980, 4, 640, 0, 0, 0, 0, 127, 255),
    VTX(980, 11, 640, 0, 0, 0, 0, 127, 255),
    VTX(788, 11, 640, 0, 0, 209, 0, 117, 255),
    VTX(788, 4, 640, 0, 0, 209, 0, 117, 255),
    VTX(754, 11, 606, 0, 0, 168, 0, 89, 255),
    VTX(754, 4, 606, 0, 0, 168, 0, 89, 255),
    VTX(980, 11, 640, 0, 0, 0, 127, 0, 255),
    VTX(980, 11, 636, 0, 0, 0, 127, 0, 255),
    VTX(790, 11, 636, 0, 0, 0, 127, 0, 255),
    VTX(788, 11, 640, 0, 0, 0, 127, 0, 255),
    VTX(757, 11, 603, 0, 0, 0, 127, 0, 255),
    VTX(754, 11, 606, 0, 0, 0, 127, 0, 255),
    VTX(980, 11, 636, 0, 0, 0, 0, 130, 255),
    VTX(980, 0, 636, 0, 0, 0, 0, 130, 255),
    VTX(790, 0, 636, 0, 0, 48, 0, 140, 255),
    VTX(790, 11, 636, 0, 0, 48, 0, 140, 255),
    VTX(757, 0, 603, 0, 0, 123, 0, 229, 255),
    VTX(980, 4, 680, 0, 0, 0, 127, 0, 255),
    VTX(772, 4, 680, 0, 0, 0, 127, 0, 255),
    VTX(980, 0, 685, 0, 0, 0, 0, 127, 255),
    VTX(770, 0, 685, 0, 0, 209, 0, 117, 255),
    VTX(980, 11, 685, 0, 0, 0, 127, 0, 255),
    VTX(770, 11, 685, 0, 0, 0, 127, 0, 255),
    VTX(980, 11, 680, 0, 0, 0, 0, 130, 255),
    VTX(772, 11, 680, 0, 0, 48, 0, 140, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_0001E0[17] = {
    VTX(757, 11, 603, 0, 0, 123, 0, 229, 255),
    VTX(980, 4, 640, 0, 0, 0, 127, 0, 255),
    VTX(788, 4, 640, 0, 0, 0, 127, 0, 255),
    VTX(754, 4, 606, 0, 0, 0, 127, 0, 255),
    VTX(726, 4, 634, 0, 0, 0, 127, 0, 255),
    VTX(980, 11, 685, 0, 0, 0, 0, 127, 255),
    VTX(770, 11, 685, 0, 0, 209, 0, 117, 255),
    VTX(723, 11, 637, 0, 0, 229, 0, 123, 255),
    VTX(723, 0, 637, 0, 0, 229, 0, 123, 255),
    VTX(980, 11, 680, 0, 0, 0, 127, 0, 255),
    VTX(772, 11, 680, 0, 0, 0, 127, 0, 255),
    VTX(726, 11, 634, 0, 0, 0, 127, 0, 255),
    VTX(723, 11, 637, 0, 0, 0, 127, 0, 255),
    VTX(980, 4, 680, 0, 0, 0, 0, 130, 255),
    VTX(772, 4, 680, 0, 0, 48, 0, 140, 255),
    VTX(726, 4, 634, 0, 0, 64, 0, 148, 255),
    VTX(726, 11, 634, 0, 0, 64, 0, 148, 255),
}; 

Gfx pr_behind_tot_room_00Dlist0x0002F0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000050[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000050[14], 7, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0001E0[0], 7, 7),
    gsSP1Triangle(1, 0, 2, 0),
    gsSP1Triangle(1, 2, 7, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(3, 9, 4, 0),
    gsSP1Triangle(4, 9, 10, 0),
    gsSP1Triangle(4, 10, 11, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000050[20], 5, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0001E0[6], 9, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 2, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 4, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000050[24], 1, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0001E0[14], 3, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_behind_tot_room_00Vtx_000460[19] = {
    VTX(625, 32, 597, 0, 0, 0, 127, 0, 255),
    VTX(611, 32, 603, 0, 0, 0, 127, 0, 255),
    VTX(657, 32, 649, 0, 0, 0, 127, 0, 255),
    VTX(663, 32, 635, 0, 0, 0, 127, 0, 255),
    VTX(723, 32, 649, 0, 0, 0, 127, 0, 255),
    VTX(717, 32, 635, 0, 0, 0, 127, 0, 255),
    VTX(769, 32, 603, 0, 0, 0, 127, 0, 255),
    VTX(755, 32, 597, 0, 0, 0, 127, 0, 255),
    VTX(625, 32, 543, 0, 0, 0, 127, 0, 255),
    VTX(611, 32, 537, 0, 0, 0, 127, 0, 255),
    VTX(663, 32, 505, 0, 0, 0, 127, 0, 255),
    VTX(657, 32, 491, 0, 0, 0, 127, 0, 255),
    VTX(717, 32, 505, 0, 0, 0, 127, 0, 255),
    VTX(723, 32, 491, 0, 0, 0, 127, 0, 255),
    VTX(755, 32, 543, 0, 0, 0, 127, 0, 255),
    VTX(769, 32, 537, 0, 0, 0, 127, 0, 255),
    VTX(723, 32, 649, 0, 0, 48, 0, 117, 255),
    VTX(657, 32, 649, 0, 0, 209, 0, 117, 255),
    VTX(769, 32, 603, 0, 0, 117, 0, 48, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_000590[16] = {
    VTX(611, 32, 603, 0, 0, 140, 0, 48, 255),
    VTX(611, 32, 537, 0, 0, 140, 0, 209, 255),
    VTX(657, 32, 491, 0, 0, 209, 0, 140, 255),
    VTX(723, 32, 491, 0, 0, 48, 0, 140, 255),
    VTX(769, 32, 537, 0, 0, 117, 0, 209, 255),
    VTX(686, 6, 568, 0, 0, 0, 127, 0, 255),
    VTX(686, 6, 572, 0, 0, 0, 127, 0, 255),
    VTX(688, 6, 574, 0, 0, 0, 127, 0, 255),
    VTX(688, 6, 566, 0, 0, 0, 127, 0, 255),
    VTX(692, 6, 566, 0, 0, 0, 127, 0, 255),
    VTX(694, 6, 568, 0, 0, 0, 127, 0, 255),
    VTX(694, 6, 572, 0, 0, 0, 127, 0, 255),
    VTX(692, 6, 574, 0, 0, 0, 127, 0, 255),
    VTX(663, 6, 635, 0, 0, 48, 0, 140, 255),
    VTX(625, 6, 597, 0, 0, 117, 0, 209, 255),
    VTX(717, 6, 635, 0, 0, 168, 0, 168, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_000690[5] = {
    VTX(625, 6, 543, 0, 0, 117, 0, 48, 255),
    VTX(663, 6, 505, 0, 0, 48, 0, 117, 255),
    VTX(717, 6, 505, 0, 0, 209, 0, 117, 255),
    VTX(755, 6, 597, 0, 0, 140, 0, 209, 255),
    VTX(755, 6, 543, 0, 0, 140, 0, 48, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_0006E0[25] = {
    VTX(723, 0, 649, 0, 0, 229, 0, 123, 255),
    VTX(769, 0, 603, 0, 0, 123, 0, 229, 255),
    VTX(657, 0, 649, 0, 0, 209, 0, 117, 255),
    VTX(769, 0, 537, 0, 0, 117, 0, 209, 255),
    VTX(723, 0, 491, 0, 0, 48, 0, 140, 255),
    VTX(611, 0, 603, 0, 0, 140, 0, 48, 255),
    VTX(611, 0, 537, 0, 0, 140, 0, 209, 255),
    VTX(657, 0, 491, 0, 0, 209, 0, 140, 255),
    VTX(625, 6, 543, 0, 0, 0, 127, 0, 255),
    VTX(625, 6, 597, 0, 0, 0, 127, 0, 255),
    VTX(663, 6, 635, 0, 0, 0, 127, 0, 255),
    VTX(717, 6, 635, 0, 0, 0, 127, 0, 255),
    VTX(663, 6, 505, 0, 0, 0, 127, 0, 255),
    VTX(717, 6, 505, 0, 0, 0, 127, 0, 255),
    VTX(755, 6, 543, 0, 0, 0, 127, 0, 255),
    VTX(755, 6, 597, 0, 0, 0, 127, 0, 255),
    VTX(663, 32, 635, 0, 0, 48, 0, 140, 255),
    VTX(717, 32, 635, 0, 0, 209, 0, 140, 255),
    VTX(717, 6, 635, 0, 0, 64, 0, 148, 255),
    VTX(625, 32, 597, 0, 0, 117, 0, 209, 255),
    VTX(755, 32, 597, 0, 0, 140, 0, 209, 255),
    VTX(755, 32, 543, 0, 0, 140, 0, 48, 255),
    VTX(625, 32, 543, 0, 0, 117, 0, 48, 255),
    VTX(663, 32, 505, 0, 0, 48, 0, 117, 255),
    VTX(717, 32, 505, 0, 0, 209, 0, 117, 255),
}; 

Gfx pr_behind_tot_room_00Dlist0x000870[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000460[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(8, 9, 1, 0),
    gsSP1Triangle(8, 1, 0, 0),
    gsSP1Triangle(10, 11, 9, 0),
    gsSP1Triangle(10, 9, 8, 0),
    gsSP1Triangle(12, 13, 11, 0),
    gsSP1Triangle(12, 11, 10, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000460[6], 2, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000460[12], 7, 2),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000590[4], 1, 9),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0006E0[0], 4, 10),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsSP1Triangle(1, 0, 5, 0),
    gsSP1Triangle(1, 5, 4, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(6, 11, 8, 0),
    gsSP1Triangle(7, 12, 10, 0),
    gsSP1Triangle(7, 10, 6, 0),
    gsSP1Triangle(8, 11, 13, 0),
    gsSP1Triangle(8, 13, 9, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000460[17], 1, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000590[0], 7, 1),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0006E0[2], 8, 8),
    gsSP1Triangle(1, 11, 8, 0),
    gsSP1Triangle(1, 8, 0, 0),
    gsSP1Triangle(2, 12, 11, 0),
    gsSP1Triangle(2, 11, 1, 0),
    gsSP1Triangle(3, 13, 12, 0),
    gsSP1Triangle(3, 12, 2, 0),
    gsSP1Triangle(4, 10, 13, 0),
    gsSP1Triangle(4, 13, 3, 0),
    gsSP1Triangle(5, 9, 10, 0),
    gsSP1Triangle(5, 10, 4, 0),
    gsSP1Triangle(6, 14, 15, 0),
    gsSP1Triangle(6, 15, 7, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000590[5], 6, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000590[12], 1, 6),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0006E0[8], 7, 7),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 2, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 6, 0),
    gsSP1Triangle(3, 11, 7, 0),
    gsSP1Triangle(3, 7, 0, 0),
    gsSP1Triangle(4, 12, 11, 0),
    gsSP1Triangle(4, 11, 3, 0),
    gsSP1Triangle(5, 13, 12, 0),
    gsSP1Triangle(5, 12, 4, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000590[10], 6, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000690[3], 1, 6),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0006E0[11], 1, 7),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0006E0[14], 7, 8),
    gsSP1Triangle(1, 9, 8, 0),
    gsSP1Triangle(1, 8, 0, 0),
    gsSP1Triangle(2, 7, 9, 0),
    gsSP1Triangle(2, 9, 1, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 10, 0),
    gsSP1Triangle(4, 10, 3, 0),
    gsSP1Triangle(5, 11, 14, 0),
    gsSP1Triangle(5, 14, 6, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000590[14], 1, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000690[0], 5, 1),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0006E0[19], 6, 6),
    gsSP1Triangle(1, 9, 6, 0),
    gsSP1Triangle(1, 6, 0, 0),
    gsSP1Triangle(2, 10, 9, 0),
    gsSP1Triangle(2, 9, 1, 0),
    gsSP1Triangle(3, 11, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 5, 0),
    gsSP1Triangle(5, 8, 11, 0),
    gsSP1Triangle(5, 11, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_behind_tot_room_00Vtx_000B58[4] = {
    VTX(1000, 0, 800, 0, 0, 0, 127, 0, 255),
    VTX(1000, 0, -799, 0, 0, 0, 127, 0, 255),
    VTX(-599, 0, -799, 0, 0, 0, 127, 0, 255),
    VTX(-599, 0, 800, 0, 0, 0, 127, 0, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_000B98[16] = {
    VTX(400, 0, -599, 0, 0, 126, 13, 0, 255),
    VTX(380, 200, -619, 0, 0, 126, 13, 0, 255),
    VTX(380, 200, -19, 0, 0, 126, 13, 0, 255),
    VTX(400, 0, -39, 0, 0, 126, 13, 0, 255),
    VTX(400, 0, -39, 0, 0, 0, 13, 131, 255),
    VTX(380, 200, -19, 0, 0, 0, 13, 131, 255),
    VTX(400, 200, -19, 0, 0, 0, 13, 131, 255),
    VTX(420, 0, -39, 0, 0, 0, 13, 131, 255),
    VTX(280, 0, 80, 0, 0, 0, 13, 126, 255),
    VTX(300, 200, 60, 0, 0, 0, 13, 126, 255),
    VTX(-299, 200, 60, 0, 0, 0, 13, 126, 255),
    VTX(-279, 0, 80, 0, 0, 0, 13, 126, 255),
    VTX(420, 0, 100, 0, 0, 0, 13, 126, 255),
    VTX(400, 200, 80, 0, 0, 0, 13, 126, 255),
    VTX(300, 200, 80, 0, 0, 0, 13, 126, 255),
    VTX(280, 0, 100, 0, 0, 0, 13, 126, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_000C98[8] = {
    VTX(280, 0, 100, 0, 0, 131, 13, 0, 255),
    VTX(420, 0, -39, 0, 0, 126, 13, 0, 255),
    VTX(300, 200, 80, 0, 0, 131, 13, 0, 255),
    VTX(300, 200, 60, 0, 0, 131, 13, 0, 255),
    VTX(280, 0, 80, 0, 0, 131, 13, 0, 255),
    VTX(400, 200, -19, 0, 0, 126, 13, 0, 255),
    VTX(400, 200, 80, 0, 0, 126, 13, 0, 255),
    VTX(420, 0, 100, 0, 0, 126, 13, 0, 255),
}; 

Gfx pr_behind_tot_room_00Dlist0x000D18[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 255, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000B58[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 127, 255, 255),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000B98[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000C98[0], 8, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_behind_tot_room_00Vtx_000E08[16] = {
    VTX(527, 147, 30, 0, 0, 131, 249, 0, 255),
    VTX(524, 169, 30, 0, 0, 131, 247, 0, 255),
    VTX(524, 169, 10, 0, 0, 131, 247, 0, 255),
    VTX(527, 147, 10, 0, 0, 131, 249, 0, 255),
    VTX(528, 136, 30, 0, 0, 131, 249, 0, 255),
    VTX(528, 136, 10, 0, 0, 131, 249, 0, 255),
    VTX(530, 90, 30, 0, 0, 131, 255, 0, 255),
    VTX(530, 90, 10, 0, 0, 131, 255, 0, 255),
    VTX(540, 90, 30, 0, 0, 0, 0, 127, 255),
    VTX(542, 136, 30, 0, 0, 0, 0, 127, 255),
    VTX(524, 169, 30, 0, 0, 0, 0, 127, 255),
    VTX(527, 147, 30, 0, 0, 0, 0, 127, 255),
    VTX(528, 136, 30, 0, 0, 0, 0, 127, 255),
    VTX(530, 90, 30, 0, 0, 0, 0, 127, 255),
    VTX(530, 0, 30, 0, 0, 0, 0, 127, 255),
    VTX(540, 0, 30, 0, 0, 0, 0, 127, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_000F08[5] = {
    VTX(530, 90, 10, 0, 0, 0, 0, 130, 255),
    VTX(542, 136, 30, 0, 0, 131, 249, 0, 255),
    VTX(542, 136, 30, 0, 0, 126, 253, 0, 255),
    VTX(540, 90, 30, 0, 0, 126, 255, 0, 255),
    VTX(530, 0, 30, 0, 0, 131, 0, 0, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_000F58[10] = {
    VTX(528, 136, 10, 0, 0, 0, 0, 130, 255),
    VTX(527, 147, 10, 0, 0, 0, 0, 130, 255),
    VTX(524, 169, 10, 0, 0, 0, 0, 130, 255),
    VTX(542, 136, 10, 0, 0, 0, 0, 130, 255),
    VTX(540, 90, 10, 0, 0, 0, 0, 130, 255),
    VTX(540, 0, 10, 0, 0, 0, 0, 130, 255),
    VTX(530, 0, 10, 0, 0, 0, 0, 130, 255),
    VTX(542, 136, 10, 0, 0, 131, 249, 0, 255),
    VTX(540, 90, 10, 0, 0, 126, 255, 0, 255),
    VTX(542, 136, 10, 0, 0, 126, 253, 0, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_000FF8[3] = {
    VTX(540, 0, 30, 0, 0, 126, 0, 0, 255),
    VTX(540, 0, 10, 0, 0, 126, 0, 0, 255),
    VTX(530, 0, 10, 0, 0, 131, 0, 0, 255),
}; 

Gfx pr_behind_tot_room_00Dlist0x001028[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 255, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000E08[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(6, 4, 5, 0),
    gsSP1Triangle(6, 5, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(8, 11, 12, 0),
    gsSP1Triangle(8, 12, 13, 0),
    gsSP1Triangle(8, 13, 14, 0),
    gsSP1Triangle(8, 14, 15, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000F08[0], 4, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000F58[0], 10, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(0, 8, 9, 0),
    gsSP1Triangle(0, 9, 10, 0),
    gsSP1Triangle(2, 3, 12, 0),
    gsSP1Triangle(2, 12, 13, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000E08[6], 2, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000F08[3], 2, 2),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000F58[8], 1, 4),
    gsSPVertex(&pr_behind_tot_room_00Vtx_000FF8[0], 3, 5),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(2, 6, 4, 0),
    gsSP1Triangle(3, 0, 1, 0),
    gsSP1Triangle(3, 1, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx pr_behind_tot_room_00Vtx_001178[20] = {
    VTX(737, 147, 10, 0, 0, 131, 247, 0, 255),
    VTX(738, 136, 10, 0, 0, 131, 247, 0, 255),
    VTX(738, 136, 30, 0, 0, 131, 247, 0, 255),
    VTX(737, 146, 30, 0, 0, 131, 247, 0, 255),
    VTX(734, 169, 10, 0, 0, 131, 247, 0, 255),
    VTX(734, 169, 30, 0, 0, 131, 247, 0, 255),
    VTX(740, 90, 30, 0, 0, 131, 255, 0, 255),
    VTX(740, 90, 10, 0, 0, 131, 255, 0, 255),
    VTX(750, 90, 30, 0, 0, 0, 0, 127, 255),
    VTX(752, 136, 30, 0, 0, 0, 0, 127, 255),
    VTX(756, 169, 30, 0, 0, 0, 0, 127, 255),
    VTX(734, 169, 30, 0, 0, 0, 0, 127, 255),
    VTX(737, 146, 30, 0, 0, 0, 0, 127, 255),
    VTX(738, 136, 30, 0, 0, 0, 0, 127, 255),
    VTX(740, 90, 30, 0, 0, 0, 0, 127, 255),
    VTX(740, 0, 30, 0, 0, 0, 0, 127, 255),
    VTX(750, 0, 30, 0, 0, 0, 0, 127, 255),
    VTX(740, 90, 10, 0, 0, 0, 0, 130, 255),
    VTX(750, 90, 10, 0, 0, 126, 255, 0, 255),
    VTX(750, 90, 30, 0, 0, 126, 255, 0, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_0012B8[2] = {
    VTX(756, 169, 30, 0, 0, 125, 241, 0, 255),
    VTX(740, 0, 30, 0, 0, 131, 0, 0, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_0012D8[12] = {
    VTX(738, 136, 10, 0, 0, 0, 0, 130, 255),
    VTX(737, 147, 10, 0, 0, 0, 0, 130, 255),
    VTX(734, 169, 10, 0, 0, 0, 0, 130, 255),
    VTX(756, 169, 10, 0, 0, 0, 0, 130, 255),
    VTX(752, 136, 10, 0, 0, 0, 0, 130, 255),
    VTX(750, 90, 10, 0, 0, 0, 0, 130, 255),
    VTX(750, 0, 10, 0, 0, 0, 0, 130, 255),
    VTX(740, 0, 10, 0, 0, 0, 0, 130, 255),
    VTX(752, 136, 10, 0, 0, 126, 247, 0, 255),
    VTX(752, 136, 30, 0, 0, 126, 247, 0, 255),
    VTX(750, 0, 30, 0, 0, 126, 0, 0, 255),
    VTX(750, 0, 10, 0, 0, 126, 0, 0, 255),
}; 

static Vtx pr_behind_tot_room_00Vtx_001398[2] = {
    VTX(756, 169, 10, 0, 0, 125, 241, 0, 255),
    VTX(740, 0, 10, 0, 0, 131, 0, 0, 255),
}; 

Gfx pr_behind_tot_room_00Dlist0x0013B8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 255, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPPipeSync(),
    gsDPSetCombineLERP(SHADE, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&pr_behind_tot_room_00Vtx_001178[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(6, 2, 1, 0),
    gsSP1Triangle(6, 1, 7, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_001178[8], 10, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0012D8[0], 6, 10),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 7, 8, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_001178[17], 3, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0012D8[0], 12, 3),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 7, 0),
    gsSP1Triangle(0, 7, 8, 0),
    gsSP1Triangle(0, 8, 9, 0),
    gsSP1Triangle(0, 9, 10, 0),
    gsSP1Triangle(1, 11, 12, 0),
    gsSP1Triangle(1, 12, 2, 0),
    gsSP1Triangle(2, 13, 14, 0),
    gsSP1Triangle(2, 14, 1, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_001178[6], 2, 0),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0012B8[0], 2, 2),
    gsSPVertex(&pr_behind_tot_room_00Vtx_0012D8[8], 2, 4),
    gsSPVertex(&pr_behind_tot_room_00Vtx_001398[0], 2, 6),
    gsSP1Triangle(2, 5, 4, 0),
    gsSP1Triangle(2, 4, 6, 0),
    gsSP1Triangle(3, 0, 1, 0),
    gsSP1Triangle(3, 1, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx pr_behind_tot_room_00Dlist0x001538[] = {
    gsSPDisplayList(pr_behind_tot_room_00Dlist0x0002F0),
    gsSPDisplayList(pr_behind_tot_room_00Dlist0x000870),
    gsSPDisplayList(pr_behind_tot_room_00Dlist0x000D18),
    gsSPDisplayList(pr_behind_tot_room_00Dlist0x001028),
    gsSPDisplayList(pr_behind_tot_room_00Dlist0x0013B8),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_001568[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


