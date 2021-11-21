#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "unfinished_deku_tree_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "unfinished_deku_tree_scene.h"


static SCmdRoomBehavior unfinished_deku_tree_room_00Set0000Cmd00;
static SCmdBase unfinished_deku_tree_room_00Set0000Cmd01;
static SCmdSkyboxDisables unfinished_deku_tree_room_00Set0000Cmd02;
static SCmdTimeSettings unfinished_deku_tree_room_00Set0000Cmd03;
static SCmdMesh unfinished_deku_tree_room_00Set0000Cmd04;
static SCmdEndMarker unfinished_deku_tree_room_00Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx unfinished_deku_tree_room_00Vtx_000CB0[14];
static Vtx unfinished_deku_tree_room_00Vtx_000D90[18];
static Vtx unfinished_deku_tree_room_00Vtx_000EB0[1];
static Vtx unfinished_deku_tree_room_00Vtx_000ED0[14];
static Vtx unfinished_deku_tree_room_00Vtx_000FB0[7];
static Vtx unfinished_deku_tree_room_00Vtx_001020[11];
static Vtx unfinished_deku_tree_room_00Vtx_0010D0[1];
static Vtx unfinished_deku_tree_room_00Vtx_001110[2];
static Vtx unfinished_deku_tree_room_00Vtx_001130[2];
static Vtx unfinished_deku_tree_room_00Vtx_001160[2];
static Vtx unfinished_deku_tree_room_00Vtx_001190[12];
static Vtx unfinished_deku_tree_room_00Vtx_001250[1];
static Vtx unfinished_deku_tree_room_00Vtx_001260[1];
static Vtx unfinished_deku_tree_room_00Vtx_001280[6];
static Vtx unfinished_deku_tree_room_00Vtx_0012E0[14];
static Vtx unfinished_deku_tree_room_00Vtx_0013C0[2];
static Vtx unfinished_deku_tree_room_00Vtx_001400[16];
static Vtx unfinished_deku_tree_room_00Vtx_001500[28];
static Vtx unfinished_deku_tree_room_00Vtx_0016C0[2];
static Vtx unfinished_deku_tree_room_00Vtx_0016E0[3];
static Vtx unfinished_deku_tree_room_00Vtx_001710[4];
static Vtx unfinished_deku_tree_room_00Vtx_001750[4];
static Vtx unfinished_deku_tree_room_00Vtx_001790[1];
static Vtx unfinished_deku_tree_room_00Vtx_0017A0[1];
static Vtx unfinished_deku_tree_room_00Vtx_0017B0[8];
static Vtx unfinished_deku_tree_room_00Vtx_001830[1];
static Vtx unfinished_deku_tree_room_00Vtx_001840[1];
static Vtx unfinished_deku_tree_room_00Vtx_001850[1];
static Vtx unfinished_deku_tree_room_00Vtx_001870[1];
static Vtx unfinished_deku_tree_room_00Vtx_001880[1];
static Vtx unfinished_deku_tree_room_00Vtx_001890[7];
static Vtx unfinished_deku_tree_room_00Vtx_001900[1];
static Vtx unfinished_deku_tree_room_00Vtx_001920[1];
static Vtx unfinished_deku_tree_room_00Vtx_001930[3];
static Vtx unfinished_deku_tree_room_00Vtx_001960[7];
static Vtx unfinished_deku_tree_room_00Vtx_0019D0[1];
static Vtx unfinished_deku_tree_room_00Vtx_0019F0[2];
static Vtx unfinished_deku_tree_room_00Vtx_001A10[2];
static Vtx unfinished_deku_tree_room_00Vtx_001A30[6];
static Vtx unfinished_deku_tree_room_00Vtx_002DC8[14];
static Vtx unfinished_deku_tree_room_00Vtx_002EA8[14];
static Vtx unfinished_deku_tree_room_00Vtx_002F88[7];
static Vtx unfinished_deku_tree_room_00Vtx_002FF8[16];
static Vtx unfinished_deku_tree_room_00Vtx_0030F8[2];
static Vtx unfinished_deku_tree_room_00Vtx_003470[14];
static Vtx unfinished_deku_tree_room_00Vtx_003550[12];
static Vtx unfinished_deku_tree_room_00Vtx_003610[3];
static Vtx unfinished_deku_tree_room_00Vtx_003640[6];
static Vtx unfinished_deku_tree_room_00Vtx_0036A0[1];
static Vtx unfinished_deku_tree_room_00Vtx_0036B0[6];
static Vtx unfinished_deku_tree_room_00Vtx_003710[18];
static Vtx unfinished_deku_tree_room_00Vtx_003B00[27];
static Vtx unfinished_deku_tree_room_00Vtx_003CB0[5];
static Vtx unfinished_deku_tree_room_00Vtx_003D00[16];
static Vtx unfinished_deku_tree_room_00Vtx_0042E8[2];
static Vtx unfinished_deku_tree_room_00Vtx_004308[1];
static Vtx unfinished_deku_tree_room_00Vtx_004328[3];
static Vtx unfinished_deku_tree_room_00Vtx_004358[1];
static Vtx unfinished_deku_tree_room_00Vtx_004388[4];
static Vtx unfinished_deku_tree_room_00Vtx_0043E8[2];
static Vtx unfinished_deku_tree_room_00Vtx_004408[3];
static Vtx unfinished_deku_tree_room_00Vtx_004438[1];
static Vtx unfinished_deku_tree_room_00Vtx_004468[1];
static Vtx unfinished_deku_tree_room_00Vtx_004498[1];
static Vtx unfinished_deku_tree_room_00Vtx_0044C8[13];
static Vtx unfinished_deku_tree_room_00Vtx_004598[4];
static Vtx unfinished_deku_tree_room_00Vtx_0045D8[3];
static Vtx unfinished_deku_tree_room_00Vtx_004608[1];
static Vtx unfinished_deku_tree_room_00Vtx_004628[14];

static SCmdRoomBehavior unfinished_deku_tree_room_00Set0000Cmd00 = {  0x08, 0x00, 0x00000000 }; // 0x0000

static SCmdBase unfinished_deku_tree_room_00Set0000Cmd01 = {  0x09, 0x00, 0x00 }; // 0x0008

static SCmdSkyboxDisables unfinished_deku_tree_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdTimeSettings unfinished_deku_tree_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x01 }; // 0x0018

static SCmdMesh unfinished_deku_tree_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&unfinished_deku_tree_room_00MeshHeader0x00003C }; // 0x0020

static SCmdEndMarker unfinished_deku_tree_room_00Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

static u8 unaccounted_000030[4] = {
    0x01, 0x00, 0x00, 0x00, 
}; 

MeshEntry0 unfinished_deku_tree_room_00MeshDListEntry0x000034[1] = {
	{ (u32)unfinished_deku_tree_room_00Dlist0x004708, 0 },

}; 

MeshHeader0 unfinished_deku_tree_room_00MeshHeader0x00003C = {
    { 0 },
    1,
    unfinished_deku_tree_room_00MeshDListEntry0x000034,
    (u32)unfinished_deku_tree_room_00MeshDListEntry0x000034 + (sizeof(MeshEntry0) * ARRAY_COUNT(unfinished_deku_tree_room_00MeshDListEntry0x000034)),
};

Gfx unfinished_deku_tree_room_00Dlist0x000050[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0038F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000CB0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 1, 3, 0),
    gsSP1Triangle(1, 4, 3, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSP1Triangle(7, 0, 2, 0),
    gsSP1Triangle(8, 0, 7, 0),
    gsSP1Triangle(9, 8, 7, 0),
    gsSP1Triangle(10, 11, 8, 0),
    gsSP1Triangle(10, 8, 9, 0),
    gsSP1Triangle(12, 11, 10, 0),
    gsSP1Triangle(12, 13, 11, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000CB0[5], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000D90[0], 9, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000FB0[0], 5, 11),
    gsSP1Triangle(2, 3, 6, 0),
    gsSP1Triangle(3, 4, 6, 0),
    gsSP1Triangle(4, 11, 6, 0),
    gsSP1Triangle(5, 6, 12, 0),
    gsSP1Triangle(6, 13, 12, 0),
    gsSP1Triangle(6, 11, 13, 0),
    gsSP1Triangle(5, 2, 6, 0),
    gsSP1Triangle(7, 9, 14, 0),
    gsSP1Triangle(8, 7, 15, 0),
    gsSP1Triangle(9, 7, 8, 0),
    gsSP1Triangle(0, 1, 10, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000CB0[6], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000D90[6], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000D90[8], 7, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000D90[16], 2, 9),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000FB0[4], 3, 11),
    gsSP1Triangle(0, 3, 2, 0),
    gsSP1Triangle(2, 9, 12, 0),
    gsSP1Triangle(2, 3, 9, 0),
    gsSP1Triangle(1, 11, 10, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(4, 13, 6, 0),
    gsSP1Triangle(6, 8, 7, 0),
    gsSP1Triangle(10, 11, 13, 0),
    gsSP1Triangle(10, 13, 4, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000CB0[12], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000D90[13], 4, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000EB0[0], 4, 6),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000ED0[12], 2, 10),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000FB0[5], 1, 12),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001020[0], 2, 13),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(3, 13, 4, 0),
    gsSP1Triangle(4, 13, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(5, 11, 10, 0),
    gsSP1Triangle(5, 10, 12, 0),
    gsSP1Triangle(6, 8, 7, 0),
    gsSP1Triangle(7, 9, 14, 0),
    gsSP1Triangle(8, 9, 7, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000EB0[0], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000ED0[0], 9, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001020[1], 5, 10),
    gsSP1Triangle(2, 11, 10, 0),
    gsSP1Triangle(3, 4, 0, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(5, 6, 3, 0),
    gsSP1Triangle(6, 4, 3, 0),
    gsSP1Triangle(7, 12, 13, 0),
    gsSP1Triangle(7, 13, 8, 0),
    gsSP1Triangle(7, 9, 14, 0),
    gsSP1Triangle(7, 14, 12, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000ED0[4], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000ED0[7], 7, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001020[4], 7, 8),
    gsSP1Triangle(1, 8, 10, 0),
    gsSP1Triangle(1, 10, 11, 0),
    gsSP1Triangle(2, 3, 12, 0),
    gsSP1Triangle(2, 12, 9, 0),
    gsSP1Triangle(3, 4, 13, 0),
    gsSP1Triangle(3, 13, 12, 0),
    gsSP1Triangle(4, 5, 14, 0),
    gsSP1Triangle(4, 14, 13, 0),
    gsSP1Triangle(5, 11, 10, 0),
    gsSP1Triangle(5, 10, 14, 0),
    gsSP1Triangle(6, 7, 0, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000ED0[5], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_000ED0[13], 1, 2),
    gsSP1Triangle(2, 1, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_room_00Tex_001A90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0010D0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(3, 7, 2, 0),
    gsSP1Triangle(8, 9, 6, 0),
    gsSP1Triangle(8, 6, 3, 0),
    gsSP1Triangle(2, 7, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsSP1Triangle(11, 10, 9, 0),
    gsSP1Triangle(11, 9, 8, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001130[0], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001190[0], 9, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001190[10], 1, 11),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001250[0], 1, 12),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0016E0[0], 3, 13),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(7, 6, 13, 0),
    gsSP1Triangle(7, 13, 9, 0),
    gsSP1Triangle(8, 14, 3, 0),
    gsSP1Triangle(8, 3, 2, 0),
    gsSP1Triangle(9, 13, 12, 0),
    gsSP1Triangle(9, 12, 15, 0),
    gsSP1Triangle(0, 10, 11, 0),
    gsSP1Triangle(0, 11, 1, 0),
    gsSP1Triangle(11, 10, 15, 0),
    gsSP1Triangle(12, 11, 15, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001130[1], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001160[0], 2, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001190[8], 4, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001260[0], 2, 8),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001710[0], 4, 10),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 3, 0),
    gsSP1Triangle(2, 5, 4, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSP1Triangle(3, 7, 5, 0),
    gsSP1Triangle(3, 5, 2, 0),
    gsSP1Triangle(8, 10, 9, 0),
    gsSP1Triangle(8, 9, 11, 0),
    gsSP1Triangle(9, 12, 11, 0),
    gsSP1Triangle(9, 13, 12, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001280[0], 6, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[2], 1, 6),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[13], 1, 7),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001710[1], 2, 8),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001750[0], 4, 10),
    gsSP1Triangle(0, 9, 10, 0),
    gsSP1Triangle(0, 10, 11, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 1, 9, 0),
    gsSP1Triangle(2, 9, 0, 0),
    gsSP1Triangle(3, 2, 0, 0),
    gsSP1Triangle(3, 0, 5, 0),
    gsSP1Triangle(2, 3, 12, 0),
    gsSP1Triangle(2, 12, 7, 0),
    gsSP1Triangle(4, 1, 2, 0),
    gsSP1Triangle(4, 2, 7, 0),
    gsSP1Triangle(1, 6, 8, 0),
    gsSP1Triangle(5, 0, 11, 0),
    gsSP1Triangle(5, 11, 13, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[0], 6, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[27], 1, 6),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0017B0[0], 8, 7),
    gsSP1Triangle(0, 7, 1, 0),
    gsSP1Triangle(0, 1, 8, 0),
    gsSP1Triangle(1, 3, 5, 0),
    gsSP1Triangle(1, 5, 8, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(2, 1, 9, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(1, 7, 11, 0),
    gsSP1Triangle(1, 11, 9, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 6, 0),
    gsSP1Triangle(4, 14, 12, 0),
    gsSP1Triangle(4, 12, 3, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[5], 5, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[11], 3, 6),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[26], 1, 9),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0017B0[1], 1, 10),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001830[0], 1, 11),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001850[0], 4, 12),
    gsSP1Triangle(1, 9, 11, 0),
    gsSP1Triangle(1, 11, 10, 0),
    gsSP1Triangle(2, 3, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 0, 0),
    gsSP1Triangle(3, 0, 10, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(4, 14, 8, 0),
    gsSP1Triangle(5, 15, 13, 0),
    gsSP1Triangle(5, 13, 4, 0),
    gsSP1Triangle(4, 8, 7, 0),
    gsSP1Triangle(4, 7, 6, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[8], 6, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[0], 1, 6),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[13], 2, 7),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001870[0], 1, 9),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001890[0], 5, 10),
    gsSP1Triangle(2, 3, 8, 0),
    gsSP1Triangle(2, 8, 7, 0),
    gsSP1Triangle(3, 10, 14, 0),
    gsSP1Triangle(3, 14, 8, 0),
    gsSP1Triangle(4, 11, 10, 0),
    gsSP1Triangle(4, 10, 3, 0),
    gsSP1Triangle(0, 3, 2, 0),
    gsSP1Triangle(2, 1, 0, 0),
    gsSP1Triangle(5, 6, 13, 0),
    gsSP1Triangle(5, 9, 12, 0),
    gsSP1Triangle(5, 12, 6, 0),
    gsSP1Triangle(5, 13, 4, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[12], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0013C0[0], 6, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[4], 1, 7),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0016C0[0], 2, 8),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001890[1], 1, 10),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001890[3], 1, 11),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001900[0], 4, 12),
    gsSP1Triangle(1, 2, 0, 0),
    gsSP1Triangle(1, 0, 11, 0),
    gsSP1Triangle(2, 12, 10, 0),
    gsSP1Triangle(2, 10, 0, 0),
    gsSP1Triangle(3, 13, 4, 0),
    gsSP1Triangle(3, 4, 14, 0),
    gsSP1Triangle(4, 13, 15, 0),
    gsSP1Triangle(4, 15, 8, 0),
    gsSP1Triangle(5, 4, 8, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(4, 5, 7, 0),
    gsSP1Triangle(4, 7, 6, 0),
    gsSP1Triangle(4, 6, 14, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0010D0[0], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001110[0], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001260[0], 1, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[0], 8, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001710[1], 1, 11),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001790[0], 1, 12),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001920[0], 1, 13),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001930[1], 2, 14),
    gsSP1Triangle(4, 9, 13, 0),
    gsSP1Triangle(5, 12, 2, 0),
    gsSP1Triangle(5, 2, 11, 0),
    gsSP1Triangle(0, 6, 10, 0),
    gsSP1Triangle(0, 10, 1, 0),
    gsSP1Triangle(3, 8, 7, 0),
    gsSP1Triangle(7, 14, 15, 0),
    gsSP1Triangle(7, 15, 4, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001110[0], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001190[6], 1, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[1], 1, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[6], 5, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[14], 1, 9),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[25], 1, 10),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0016E0[1], 1, 11),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001930[2], 1, 12),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001960[2], 3, 13),
    gsSP1Triangle(4, 3, 10, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 10, 0),
    gsSP1Triangle(5, 9, 6, 0),
    gsSP1Triangle(5, 6, 0, 0),
    gsSP1Triangle(6, 14, 1, 0),
    gsSP1Triangle(6, 1, 0, 0),
    gsSP1Triangle(7, 8, 11, 0),
    gsSP1Triangle(7, 11, 2, 0),
    gsSP1Triangle(8, 7, 15, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001280[4], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[8], 8, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001750[2], 1, 9),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0017A0[0], 1, 10),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001960[3], 4, 11),
    gsSP1Triangle(2, 13, 12, 0),
    gsSP1Triangle(4, 3, 12, 0),
    gsSP1Triangle(4, 12, 14, 0),
    gsSP1Triangle(5, 0, 6, 0),
    gsSP1Triangle(5, 6, 8, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSP1Triangle(6, 10, 8, 0),
    gsSP1Triangle(7, 5, 8, 0),
    gsSP1Triangle(7, 8, 1, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(8, 11, 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[9], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0013C0[0], 2, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[0], 7, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001880[0], 1, 10),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001890[2], 1, 11),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001900[0], 1, 12),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0019D0[0], 3, 13),
    gsSP1Triangle(3, 11, 10, 0),
    gsSP1Triangle(3, 10, 0, 0),
    gsSP1Triangle(4, 5, 2, 0),
    gsSP1Triangle(4, 2, 1, 0),
    gsSP1Triangle(5, 13, 12, 0),
    gsSP1Triangle(5, 12, 2, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(7, 14, 15, 0),
    gsSP1Triangle(7, 15, 8, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[6], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[1], 2, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[5], 8, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0019D0[0], 1, 12),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0019F0[0], 2, 13),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(4, 14, 6, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(6, 14, 12, 0),
    gsSP1Triangle(6, 12, 3, 0),
    gsSP1Triangle(7, 6, 3, 0),
    gsSP1Triangle(7, 3, 2, 0),
    gsSP1Triangle(8, 10, 1, 0),
    gsSP1Triangle(8, 1, 0, 0),
    gsSP1Triangle(9, 11, 10, 0),
    gsSP1Triangle(9, 10, 8, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[7], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[11], 8, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001850[0], 1, 9),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001890[4], 3, 10),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001960[0], 1, 13),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001A10[0], 2, 14),
    gsSP1Triangle(1, 14, 9, 0),
    gsSP1Triangle(1, 9, 0, 0),
    gsSP1Triangle(2, 13, 14, 0),
    gsSP1Triangle(2, 14, 1, 0),
    gsSP1Triangle(3, 4, 11, 0),
    gsSP1Triangle(3, 11, 15, 0),
    gsSP1Triangle(4, 10, 12, 0),
    gsSP1Triangle(4, 12, 11, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(5, 7, 8, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[16], 9, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001A30[0], 5, 9),
    gsSP1Triangle(0, 9, 10, 0),
    gsSP1Triangle(0, 10, 1, 0),
    gsSP1Triangle(1, 10, 11, 0),
    gsSP1Triangle(1, 11, 3, 0),
    gsSP1Triangle(2, 1, 3, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(3, 12, 5, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 7, 0),
    gsSP1Triangle(6, 5, 7, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0012E0[4], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[5], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[23], 5, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0017B0[6], 2, 7),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001840[0], 1, 9),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001960[1], 2, 10),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001A30[4], 2, 12),
    gsSP1Triangle(2, 12, 13, 0),
    gsSP1Triangle(3, 2, 13, 0),
    gsSP1Triangle(4, 11, 10, 0),
    gsSP1Triangle(4, 10, 1, 0),
    gsSP1Triangle(5, 9, 8, 0),
    gsSP1Triangle(5, 8, 0, 0),
    gsSP1Triangle(6, 7, 9, 0),
    gsSP1Triangle(6, 9, 5, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001400[4], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[10], 1, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001500[12], 1, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0016C0[0], 2, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001930[0], 2, 6),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_001960[0], 2, 8),
    gsSP1Triangle(1, 9, 7, 0),
    gsSP1Triangle(1, 7, 0, 0),
    gsSP1Triangle(4, 6, 8, 0),
    gsSP1Triangle(4, 8, 3, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(5, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_000CB0[14] = {
    VTX(-133, 560, 240, 2733, 5325, 17, 17, 17, 255),
    VTX(-239, 520, 134, 3277, 4781, 17, 17, 17, 255),
    VTX(-319, 520, 167, 3686, 4950, 255, 255, 255, 255),
    VTX(-319, 440, -166, 3686, 3242, 255, 255, 255, 255),
    VTX(-239, 440, -133, 3277, 3411, 17, 17, 17, 255),
    VTX(-166, 400, -319, 2902, 2458, 255, 255, 255, 255),
    VTX(-133, 400, -239, 2733, 2867, 17, 17, 17, 255),
    VTX(-166, 560, 320, 2902, 5734, 255, 255, 255, 255),
    VTX(134, 640, 240, 1363, 5325, 17, 17, 17, 255),
    VTX(167, 640, 320, 1194, 5734, 255, 255, 255, 255),
    VTX(320, 640, 167, 410, 4950, 255, 255, 255, 255),
    VTX(220, 640, 101, 922, 4611, 17, 17, 17, 255),
    VTX(240, 640, -133, 819, 3411, 255, 255, 255, 255),
    VTX(160, 640, -100, 1229, 3581, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_000D90[18] = {
    VTX(-119, 960, -83, 1235, -450, 0, 0, 0, 255),
    VTX(-119, 960, 84, 1235, 1270, 0, 0, 0, 255),
    VTX(-83, 960, 120, 866, 1638, 0, 0, 0, 255),
    VTX(-83, 960, -119, 866, -818, 0, 0, 0, 255),
    VTX(-7, 960, 0, 85, 410, 255, 255, 255, 255),
    VTX(101, 960, 160, 1533, 4915, 17, 17, 17, 255),
    VTX(134, 960, 240, 1363, 5325, 255, 255, 255, 255),
    VTX(220, 960, 101, 922, 4611, 255, 255, 255, 255),
    VTX(167, 320, -319, 1194, 2458, 255, 255, 255, 255),
    VTX(134, 320, -239, 1363, 2867, 17, 17, 17, 255),
    VTX(-239, 880, 134, 3277, 4781, 255, 255, 255, 255),
    VTX(-239, 800, -133, 3277, 3411, 255, 255, 255, 255),
    VTX(-159, 800, -100, 2867, 3581, 17, 17, 17, 255),
    VTX(-133, 760, -239, 2733, 2867, 255, 255, 255, 255),
    VTX(-100, 760, -159, 2563, 3277, 17, 17, 17, 255),
    VTX(134, 680, -239, 1363, 2867, 255, 255, 255, 255),
    VTX(240, 320, -133, 819, 3411, 17, 17, 17, 255),
    VTX(-133, 920, 240, 2733, 5325, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_000EB0[1] = {
    VTX(-399, 160, 200, 4096, 5120, 255, 255, 255, 255),
}; 

static u8 unaccounted_000EC0[16] = {
    0xFE, 0x71, 0x00, 0x50, 0xFF, 0x39, 0x00, 0x00, 0x10, 0x00, 0x0C, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_000ED0[14] = {
    VTX(-319, 160, 167, 3686, 4950, 17, 17, 17, 255),
    VTX(-319, 80, -166, 3686, 3242, 17, 17, 17, 255),
    VTX(-199, 240, 400, 3072, 6144, 255, 255, 255, 255),
    VTX(-166, 240, 320, 2902, 5734, 17, 17, 17, 255),
    VTX(200, 320, 400, 1024, 6144, 255, 255, 255, 255),
    VTX(167, 320, 320, 1194, 5734, 17, 17, 17, 255),
    VTX(-159, 1149, -100, 2668, 2668, 255, 255, 255, 255),
    VTX(-100, 1101, -159, 3277, 2060, 255, 255, 255, 255),
    VTX(-159, 1312, 101, 608, 2668, 255, 255, 255, 255),
    VTX(-100, 1360, 160, 0, 2060, 255, 255, 255, 255),
    VTX(101, 1360, 160, 0, 0, 255, 255, 255, 255),
    VTX(160, 1149, -100, 2668, -607, 255, 255, 255, 255),
    VTX(400, 320, 200, 0, 5120, 255, 255, 255, 255),
    VTX(320, 320, 167, 410, 4950, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_000FB0[7] = {
    VTX(69, 960, 120, -696, 1638, 0, 0, 0, 255),
    VTX(84, 960, -119, -853, -818, 0, 0, 0, 255),
    VTX(116, 960, -87, -1182, -490, 0, 0, 0, 255),
    VTX(160, 960, -100, 1229, 3581, 255, 255, 255, 255),
    VTX(-100, 920, 160, 2563, 4915, 17, 17, 17, 255),
    VTX(400, 320, -199, 0, 3072, 255, 255, 255, 255),
    VTX(-159, 880, 101, 2867, 4611, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001020[11] = {
    VTX(101, 680, -159, 1533, 3277, 17, 17, 17, 255),
    VTX(-199, 0, -399, 3072, 2048, 119, 119, 119, 255),
    VTX(-166, 0, -319, 2902, 2458, 17, 17, 17, 255),
    VTX(-119, 1162, -83, 2499, 2259, 255, 255, 255, 255),
    VTX(-83, 1133, -119, 2867, 1890, 255, 255, 255, 255),
    VTX(-119, 1298, 84, 778, 2259, 255, 255, 255, 255),
    VTX(84, 1133, -119, 2867, 170, 255, 255, 255, 255),
    VTX(101, 1101, -159, 3277, 0, 255, 255, 255, 255),
    VTX(-83, 1328, 120, 410, 1890, 255, 255, 255, 255),
    VTX(69, 1328, 120, 410, 327, 255, 255, 255, 255),
    VTX(116, 1159, -87, 2539, -158, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0010D0[1] = {
    VTX(101, 1160, 160, 2633, -9829, 255, 255, 255, 255),
}; 

static u8 unaccounted_0010E0[48] = {
    0x00, 0x65, 0x03, 0xC0, 0x00, 0xA0, 0x00, 0x00, 0x0A, 0x49, 0xE1, 0x9B, 0x11, 0x11, 0x11, 0xFF, 
    0x00, 0x78, 0x04, 0x24, 0x00, 0x4B, 0x00, 0x00, 0x05, 0xAF, 0xDD, 0x9B, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x00, 0x78, 0x03, 0xC0, 0x00, 0x4B, 0x00, 0x00, 0x05, 0xAF, 0xE1, 0x9B, 0x55, 0x55, 0x55, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001110[2] = {
    VTX(-100, 1140, 160, 5559, -9625, 255, 255, 255, 255),
    VTX(-100, 920, 160, 5559, -7372, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001130[2] = {
    VTX(100, 960, 70, 1595, -7781, 17, 17, 17, 255),
    VTX(100, 1060, 70, 1595, -8805, 255, 255, 255, 255),
}; 

static u8 unaccounted_001150[16] = {
    0x00, 0x85, 0x03, 0xC0, 0x00, 0x10, 0x00, 0x00, 0x01, 0x3F, 0xE1, 0x9B, 0x55, 0x55, 0x55, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001160[2] = {
    VTX(114, 960, 12, 273, -7781, 17, 17, 17, 255),
    VTX(114, 1060, 12, 273, -8805, 255, 255, 255, 255),
}; 

static u8 unaccounted_001180[16] = {
    0x00, 0x85, 0x04, 0x24, 0x00, 0x10, 0x00, 0x00, 0x01, 0x3F, 0xDD, 0x9B, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001190[12] = {
    VTX(-83, 960, -119, 10695, -7781, 0, 0, 0, 255),
    VTX(-83, 1133, -119, 10695, -9556, 187, 187, 187, 255),
    VTX(-119, 1162, -83, 9785, -9854, 187, 187, 187, 255),
    VTX(-119, 960, -83, 9785, -7781, 0, 0, 0, 255),
    VTX(-119, 1298, 84, 6599, -11247, 187, 187, 187, 255),
    VTX(-119, 960, 84, 6599, -7781, 0, 0, 0, 255),
    VTX(84, 960, -119, 13881, -7781, 0, 0, 0, 255),
    VTX(-83, 960, 120, 5689, -7781, 0, 0, 0, 255),
    VTX(81, 960, 66, 1783, -7781, 17, 17, 17, 255),
    VTX(94, 960, 8, 207, -7781, 17, 17, 17, 255),
    VTX(81, 1060, 66, 1783, -8805, 255, 255, 255, 255),
    VTX(94, 1060, 8, 207, -8805, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001250[1] = {
    VTX(69, 1328, 120, 2740, -11546, 187, 187, 187, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001260[1] = {
    VTX(101, 1160, 160, 19017, -9829, 255, 255, 255, 255),
}; 

static u8 unaccounted_001270[16] = {
    0x00, 0x85, 0x04, 0x24, 0x00, 0x10, 0x00, 0x00, 0x41, 0x3F, 0xDD, 0x9B, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001280[6] = {
    VTX(160, 800, -100, 14921, -6143, 255, 255, 255, 255),
    VTX(101, 1101, -159, 13751, -9224, 223, 127, 31, 255),
    VTX(101, 890, -159, 13751, -7069, 255, 255, 255, 255),
    VTX(101, 680, -159, 13751, -4914, 17, 17, 17, 255),
    VTX(-100, 1101, -159, 10825, -9224, 223, 127, 31, 255),
    VTX(160, 640, -100, 14921, -4505, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0012E0[14] = {
    VTX(134, 680, -239, 13614, -4914, 223, 127, 31, 255),
    VTX(240, 480, -133, 15058, -2866, 255, 255, 255, 255),
    VTX(240, 320, -133, 15058, -1228, 17, 17, 17, 255),
    VTX(212, 420, -161, 14681, -2252, 255, 255, 255, 255),
    VTX(212, 320, -161, 14681, -1228, 17, 17, 17, 255),
    VTX(169, 420, -203, 14091, -2252, 255, 255, 255, 255),
    VTX(-133, 400, -239, 10962, -2047, 17, 17, 17, 255),
    VTX(-133, 580, -239, 10962, -3890, 255, 255, 255, 255),
    VTX(33, 100, -319, 12557, 1024, 255, 255, 255, 255),
    VTX(33, 0, -319, 12557, 2048, 17, 17, 17, 255),
    VTX(167, 0, -319, 13541, 2048, 17, 17, 17, 255),
    VTX(167, 160, -319, 13541, 410, 255, 255, 255, 255),
    VTX(-166, 200, -319, 11035, 0, 255, 255, 255, 255),
    VTX(-26, 100, -319, 12070, 1024, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0013C0[2] = {
    VTX(-319, 80, -166, 9445, 1229, 17, 17, 17, 255),
    VTX(-319, 260, -166, 9445, -613, 255, 255, 255, 255),
}; 

static u8 unaccounted_0013E0[32] = {
    0x00, 0xDC, 0x03, 0xC0, 0x00, 0x65, 0x00, 0x00, 0x04, 0x5E, 0xE1, 0x9B, 0xDF, 0x7F, 0x1F, 0xFF, 
    0x00, 0x86, 0x03, 0x20, 0x00, 0xF0, 0x00, 0x00, 0x0A, 0xD2, 0xE8, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001400[16] = {
    VTX(134, 640, 240, 2770, -4505, 17, 17, 17, 255),
    VTX(199, 740, 135, 1551, -5529, 255, 255, 255, 255),
    VTX(160, 1149, -100, 14921, -9717, 223, 127, 31, 255),
    VTX(101, 1360, 160, 2633, -11877, 223, 127, 31, 255),
    VTX(167, 740, 186, 2183, -5529, 255, 255, 255, 255),
    VTX(167, 640, 186, 2183, -4505, 17, 17, 17, 255),
    VTX(220, 640, 101, 1118, -4505, 17, 17, 17, 255),
    VTX(-100, 1360, 160, 5559, -11877, 223, 127, 31, 255),
    VTX(-159, 1096, 101, 6729, -9173, 255, 255, 255, 255),
    VTX(116, 960, -87, 14694, -7781, 0, 0, 0, 255),
    VTX(116, 1159, -87, 14694, -9822, 187, 187, 187, 255),
    VTX(69, 1328, 120, 19124, -11546, 187, 187, 187, 255),
    VTX(-159, 1149, -100, 9655, -9717, 223, 127, 31, 255),
    VTX(-100, 930, -159, 10825, -7479, 255, 255, 255, 255),
    VTX(-159, 1312, 101, 6729, -11385, 223, 127, 31, 255),
    VTX(-159, 974, -100, 9655, -7930, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001500[28] = {
    VTX(-26, 0, -319, 12070, 2048, 17, 17, 17, 255),
    VTX(-319, 160, 167, 6939, 410, 17, 17, 17, 255),
    VTX(-319, 340, 167, 6939, -1433, 255, 255, 255, 255),
    VTX(320, 320, 167, 1253, -1228, 17, 17, 17, 255),
    VTX(320, 480, 167, 1253, -2866, 255, 255, 255, 255),
    VTX(167, 480, 320, 2843, -2866, 255, 255, 255, 255),
    VTX(167, 320, 320, 2843, -1228, 17, 17, 17, 255),
    VTX(-166, 400, 320, 5349, -2047, 255, 255, 255, 255),
    VTX(-166, 240, 320, 5349, -409, 17, 17, 17, 255),
    VTX(-239, 440, -133, 9518, -2457, 17, 17, 17, 255),
    VTX(-239, 520, 134, 6866, -3276, 17, 17, 17, 255),
    VTX(-239, 620, -133, 9518, -4300, 255, 255, 255, 255),
    VTX(-239, 700, 134, 6866, -5119, 255, 255, 255, 255),
    VTX(400, 0, -199, 15175, 2048, 17, 17, 17, 255),
    VTX(400, 160, -199, 15175, 410, 255, 255, 255, 255),
    VTX(400, 0, 200, 1209, 2048, 17, 17, 17, 255),
    VTX(400, 160, 200, 1209, 410, 255, 255, 255, 255),
    VTX(200, 160, 400, 2887, 410, 255, 255, 255, 255),
    VTX(200, 0, 400, 2887, 2048, 17, 17, 17, 255),
    VTX(-199, 120, 400, 5305, 819, 255, 255, 255, 255),
    VTX(-199, 0, 400, 5305, 2048, 17, 17, 17, 255),
    VTX(-399, 80, 200, 6983, 1229, 255, 255, 255, 255),
    VTX(-399, 0, 200, 6983, 2048, 17, 17, 17, 255),
    VTX(-399, 40, -199, 9401, 1638, 255, 255, 255, 255),
    VTX(-399, 0, -199, 9401, 2048, 17, 17, 17, 255),
    VTX(199, 640, 135, 1551, -4505, 17, 17, 17, 255),
    VTX(169, 320, -203, 14091, -1228, 17, 17, 17, 255),
    VTX(169, 420, -203, 14091, -2252, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0016C0[2] = {
    VTX(-133, 740, 240, 5422, -5529, 255, 255, 255, 255),
    VTX(-133, 560, 240, 5422, -3685, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0016E0[3] = {
    VTX(-83, 1328, 120, 5689, -11546, 187, 187, 187, 255),
    VTX(84, 1133, -119, 13881, -9556, 187, 187, 187, 255),
    VTX(69, 960, 120, 2740, -7781, 0, 0, 0, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001710[4] = {
    VTX(120, 1060, 75, 17839, -8805, 255, 255, 255, 255),
    VTX(160, 1054, -100, 14921, -8749, 255, 255, 255, 255),
    VTX(160, 960, -100, 14921, -7781, 223, 127, 31, 255),
    VTX(133, 960, 16, 16703, -7781, 85, 85, 85, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001750[4] = {
    VTX(220, 960, 101, 17502, -7781, 223, 127, 31, 255),
    VTX(220, 800, 101, 17502, -6143, 255, 255, 255, 255),
    VTX(-100, 760, -159, 10825, -5733, 17, 17, 17, 255),
    VTX(220, 640, 101, 17502, -4505, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001790[1] = {
    VTX(101, 1360, 160, 19017, -11877, 223, 127, 31, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0017A0[1] = {
    VTX(-159, 800, -100, 9655, -6143, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0017B0[8] = {
    VTX(240, 640, -133, 15058, -4505, 223, 127, 31, 255),
    VTX(134, 500, -239, 13614, -3071, 255, 255, 255, 255),
    VTX(320, 480, 167, 17637, -2866, 255, 255, 255, 255),
    VTX(320, 320, 167, 17637, -1228, 17, 17, 17, 255),
    VTX(320, 640, 167, 17637, -4505, 223, 127, 31, 255),
    VTX(198, 420, -147, 14709, -2252, 255, 255, 255, 255),
    VTX(155, 420, -189, 14072, -2252, 255, 255, 255, 255),
    VTX(198, 320, -147, 14709, -1228, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001830[1] = {
    VTX(134, 320, -239, 13614, -1228, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001840[1] = {
    VTX(155, 320, -189, 14072, -1228, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001850[1] = {
    VTX(-133, 760, -239, 10962, -5733, 223, 127, 31, 255),
}; 

static u8 unaccounted_001860[16] = {
    0x00, 0x21, 0x00, 0x64, 0xFE, 0xD5, 0x00, 0x00, 0x31, 0x1F, 0x04, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001870[1] = {
    VTX(-26, 100, -299, 12055, 1024, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001880[1] = {
    VTX(33, 0, -299, 12575, 2048, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001890[7] = {
    VTX(167, 320, -319, 13541, -1228, 223, 127, 31, 255),
    VTX(-166, 400, -319, 11035, -2047, 223, 127, 31, 255),
    VTX(-26, 0, -299, 12055, 2048, 17, 17, 17, 255),
    VTX(-166, 0, -319, 11035, 2048, 17, 17, 17, 255),
    VTX(400, 320, -199, 15175, -1228, 223, 127, 31, 255),
    VTX(400, 160, 200, 17593, 410, 255, 255, 255, 255),
    VTX(400, 320, 200, 17593, -1228, 223, 127, 31, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001900[1] = {
    VTX(-319, 440, -166, 9445, -2457, 223, 127, 31, 255),
}; 

static u8 unaccounted_001910[16] = {
    0x00, 0x86, 0x03, 0xC0, 0x00, 0xF0, 0x00, 0x00, 0x0A, 0xD2, 0xE1, 0x9B, 0xDF, 0x7F, 0x1F, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001920[1] = {
    VTX(220, 800, 101, 1118, -6143, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001930[3] = {
    VTX(-133, 920, 240, 5422, -7372, 223, 127, 31, 255),
    VTX(150, 740, 175, 2246, -5529, 255, 255, 255, 255),
    VTX(182, 740, 124, 1561, -5529, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001960[7] = {
    VTX(-239, 880, 134, 6866, -6962, 223, 127, 31, 255),
    VTX(150, 640, 175, 2246, -4505, 17, 17, 17, 255),
    VTX(182, 640, 124, 1561, -4505, 17, 17, 17, 255),
    VTX(-159, 880, 101, 6729, -6962, 17, 17, 17, 255),
    VTX(94, 1060, 8, 16591, -8805, 255, 255, 255, 255),
    VTX(94, 960, 8, 16591, -7781, 17, 17, 17, 255),
    VTX(81, 1060, 66, 18167, -8805, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0019D0[1] = {
    VTX(-319, 520, 167, 6939, -3276, 223, 127, 31, 255),
}; 

static u8 unaccounted_0019E0[16] = {
    0x01, 0x40, 0x02, 0x80, 0x00, 0xA7, 0x00, 0x00, 0x04, 0xE5, 0xEE, 0x67, 0xDF, 0x7F, 0x1F, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0019F0[2] = {
    VTX(167, 640, 320, 2843, -4505, 223, 127, 31, 255),
    VTX(-166, 560, 320, 5349, -3685, 223, 127, 31, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001A10[2] = {
    VTX(-239, 800, -133, 9518, -6143, 223, 127, 31, 255),
    VTX(400, 0, 200, 17593, 2048, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_001A30[6] = {
    VTX(400, 320, 200, 1209, -1228, 223, 127, 31, 255),
    VTX(200, 320, 400, 2887, -1228, 223, 127, 31, 255),
    VTX(-199, 240, 400, 5305, -409, 223, 127, 31, 255),
    VTX(-399, 160, 200, 6983, 410, 223, 127, 31, 255),
    VTX(-399, 80, -199, 9401, 1229, 223, 127, 31, 255),
    VTX(-199, 0, -399, 11079, 2048, 119, 119, 119, 255),
}; 

u64 unfinished_deku_tree_room_00Tex_001A90[] = {
#include "assets/scenes/dungeons/unfinished_deku_tree//unfinished_deku_tree_room_00Tex_001A90.rgb5a1.inc.c"
};

Gfx unfinished_deku_tree_room_00Dlist0x002A90[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0028F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002DC8[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 2, 0),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(3, 7, 8, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSP1Triangle(6, 10, 7, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 7, 0),
    gsSP1Triangle(12, 8, 7, 0),
    gsSP1Triangle(12, 13, 8, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002DC8[10], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002EA8[0], 7, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002F88[0], 7, 9),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 4, 0),
    gsSP1Triangle(3, 4, 11, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 10, 13, 0),
    gsSP1Triangle(4, 13, 11, 0),
    gsSP1Triangle(5, 2, 4, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(6, 7, 2, 0),
    gsSP1Triangle(6, 2, 5, 0),
    gsSP1Triangle(7, 14, 9, 0),
    gsSP1Triangle(7, 9, 2, 0),
    gsSP1Triangle(8, 15, 1, 0),
    gsSP1Triangle(0, 8, 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002DC8[9], 4, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002EA8[4], 8, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002EA8[13], 1, 12),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002F88[5], 2, 13),
    gsSP1Triangle(1, 0, 7, 0),
    gsSP1Triangle(1, 7, 9, 0),
    gsSP1Triangle(6, 1, 9, 0),
    gsSP1Triangle(6, 9, 8, 0),
    gsSP1Triangle(8, 9, 5, 0),
    gsSP1Triangle(8, 5, 4, 0),
    gsSP1Triangle(9, 7, 13, 0),
    gsSP1Triangle(9, 13, 5, 0),
    gsSP1Triangle(10, 2, 14, 0),
    gsSP1Triangle(10, 14, 12, 0),
    gsSP1Triangle(11, 3, 2, 0),
    gsSP1Triangle(11, 2, 10, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002DC8[12], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002EA8[11], 3, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002F88[6], 1, 5),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0038F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002FF8[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(7, 2, 6, 0),
    gsSP1Triangle(8, 0, 2, 0),
    gsSP1Triangle(2, 4, 5, 0),
    gsSP1Triangle(7, 8, 2, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(9, 12, 10, 0),
    gsSP1Triangle(12, 13, 10, 0),
    gsSP1Triangle(14, 15, 10, 0),
    gsSP1Triangle(15, 11, 10, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002FF8[10], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_002FF8[13], 2, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0030F8[0], 2, 3),
    gsSP1Triangle(3, 4, 0, 0),
    gsSP1Triangle(4, 2, 0, 0),
    gsSP1Triangle(1, 3, 0, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_002DC8[14] = {
    VTX(233, 0, 160, 26929, 2048, 17, 17, 17, 255),
    VTX(233, 140, 160, 26929, 1331, 255, 255, 255, 255),
    VTX(233, 140, -159, 22223, 1331, 255, 255, 255, 255),
    VTX(233, 0, -159, 22223, 2048, 17, 17, 17, 255),
    VTX(233, 280, 160, 26929, 614, 17, 17, 17, 255),
    VTX(233, 280, -159, 22223, 614, 17, 17, 17, 255),
    VTX(113, 280, -279, 19934, 614, 17, 17, 17, 255),
    VTX(113, 140, -279, 19934, 1331, 255, 255, 255, 255),
    VTX(113, 0, -279, 19934, 2048, 17, 17, 17, 255),
    VTX(-126, 280, -279, 16768, 614, 17, 17, 17, 255),
    VTX(-126, 140, -279, 16768, 1331, 255, 255, 255, 255),
    VTX(-26, 100, -279, 18058, 1536, 255, 255, 255, 255),
    VTX(33, 100, -279, 18893, 1536, 255, 255, 255, 255),
    VTX(33, 0, -279, 18893, 2048, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_002EA8[14] = {
    VTX(-126, 140, 280, 7808, 1331, 255, 255, 255, 255),
    VTX(113, 0, 280, 4642, 2048, 17, 17, 17, 255),
    VTX(113, 140, 280, 4642, 1331, 255, 255, 255, 255),
    VTX(-126, 0, 280, 7808, 2048, 17, 17, 17, 255),
    VTX(-246, 0, 160, 10039, 2048, 17, 17, 17, 255),
    VTX(-246, 140, 160, 10039, 1331, 255, 255, 255, 255),
    VTX(-126, 0, -279, 16768, 2048, 17, 17, 17, 255),
    VTX(-246, 280, -159, 14537, 614, 17, 17, 17, 255),
    VTX(-246, 0, -159, 14537, 2048, 17, 17, 17, 255),
    VTX(-246, 140, -159, 14537, 1331, 255, 255, 255, 255),
    VTX(-26, 100, -299, 18083, 1536, 255, 255, 255, 255),
    VTX(33, 100, -299, 18862, 1536, 255, 255, 255, 255),
    VTX(33, 0, -299, 18862, 2048, 17, 17, 17, 255),
    VTX(-26, 0, -299, 18083, 2048, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_002F88[7] = {
    VTX(-126, 280, 280, 7808, 614, 17, 17, 17, 255),
    VTX(113, 280, 280, 4642, 614, 17, 17, 17, 255),
    VTX(233, 140, 160, 2353, 1331, 255, 255, 255, 255),
    VTX(233, 0, 160, 2353, 2048, 17, 17, 17, 255),
    VTX(233, 280, 160, 2353, 614, 17, 17, 17, 255),
    VTX(-246, 280, 160, 10039, 614, 17, 17, 17, 255),
    VTX(-26, 0, -279, 18058, 2048, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_002FF8[16] = {
    VTX(-126, 0, 280, -409, 1674, 17, 17, 17, 255),
    VTX(113, 0, 280, -409, 445, 17, 17, 17, 255),
    VTX(-6, 0, 0, 1024, 1059, 255, 255, 255, 255),
    VTX(233, 0, 160, 205, -169, 17, 17, 17, 255),
    VTX(233, 0, -159, 1843, -169, 17, 17, 17, 255),
    VTX(113, 0, -279, 2458, 445, 17, 17, 17, 255),
    VTX(-126, 0, -279, 2458, 1674, 17, 17, 17, 255),
    VTX(-246, 0, -159, 1843, 2288, 17, 17, 17, 255),
    VTX(-246, 0, 160, 205, 2288, 17, 17, 17, 255),
    VTX(-126, 280, -279, 2458, 1674, 17, 17, 17, 255),
    VTX(-6, 280, 0, 1024, 1059, 255, 255, 255, 255),
    VTX(-246, 280, -159, 1843, 2288, 17, 17, 17, 255),
    VTX(113, 280, -279, 2458, 445, 17, 17, 17, 255),
    VTX(233, 280, -159, 1843, -169, 17, 17, 17, 255),
    VTX(-126, 280, 280, -409, 1674, 17, 17, 17, 255),
    VTX(-246, 280, 160, 205, 2288, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0030F8[2] = {
    VTX(233, 280, 160, 205, -169, 17, 17, 17, 255),
    VTX(113, 280, 280, -409, 445, 17, 17, 17, 255),
}; 

Gfx unfinished_deku_tree_room_00Dlist0x003118[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0028F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003470[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(6, 7, 1, 0),
    gsSP1Triangle(6, 1, 8, 0),
    gsSP1Triangle(9, 2, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(12, 6, 8, 0),
    gsSP1Triangle(12, 8, 4, 0),
    gsSP1Triangle(5, 9, 11, 0),
    gsSP1Triangle(5, 11, 13, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003470[7], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003470[12], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003550[0], 6, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003640[0], 6, 8),
    gsSP1Triangle(2, 8, 0, 0),
    gsSP1Triangle(2, 0, 9, 0),
    gsSP1Triangle(3, 2, 9, 0),
    gsSP1Triangle(3, 9, 1, 0),
    gsSP1Triangle(4, 10, 8, 0),
    gsSP1Triangle(4, 8, 11, 0),
    gsSP1Triangle(5, 4, 11, 0),
    gsSP1Triangle(5, 11, 3, 0),
    gsSP1Triangle(6, 12, 10, 0),
    gsSP1Triangle(6, 10, 13, 0),
    gsSP1Triangle(7, 6, 13, 0),
    gsSP1Triangle(7, 13, 5, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003550[5], 7, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003610[1], 1, 7),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003640[4], 1, 8),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0036B0[0], 6, 9),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(1, 3, 9, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(3, 11, 8, 0),
    gsSP1Triangle(3, 8, 9, 0),
    gsSP1Triangle(4, 12, 11, 0),
    gsSP1Triangle(4, 11, 13, 0),
    gsSP1Triangle(1, 9, 0, 0),
    gsSP1Triangle(5, 14, 2, 0),
    gsSP1Triangle(5, 2, 6, 0),
    gsSP1Triangle(6, 2, 1, 0),
    gsSP1Triangle(6, 1, 7, 0),
    gsSP1Triangle(2, 14, 10, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003550[6], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003550[9], 2, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003610[0], 3, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0036A0[0], 1, 7),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0036B0[1], 1, 8),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0036B0[4], 2, 9),
    gsSP1Triangle(4, 2, 9, 0),
    gsSP1Triangle(4, 9, 8, 0),
    gsSP1Triangle(0, 7, 1, 0),
    gsSP1Triangle(5, 1, 7, 0),
    gsSP1Triangle(5, 7, 6, 0),
    gsSP1Triangle(6, 7, 10, 0),
    gsSP1Triangle(6, 10, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0038F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003710[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(5, 6, 2, 0),
    gsSP1Triangle(7, 5, 2, 0),
    gsSP1Triangle(8, 3, 2, 0),
    gsSP1Triangle(7, 2, 4, 0),
    gsSP1Triangle(6, 8, 2, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(10, 12, 11, 0),
    gsSP1Triangle(12, 13, 11, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003710[9], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003710[11], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003710[13], 5, 2),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(4, 1, 6, 0),
    gsSP1Triangle(1, 3, 5, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(4, 0, 1, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_003470[14] = {
    VTX(-28, 460, 203, 6693, -306, 255, 255, 255, 255),
    VTX(-28, 600, 203, 6693, -1023, 17, 17, 17, 255),
    VTX(84, 600, 203, 4604, -1023, 17, 17, 17, 255),
    VTX(84, 460, 203, 4604, -306, 255, 255, 255, 255),
    VTX(-28, 320, 203, 6693, 410, 17, 17, 17, 255),
    VTX(84, 320, 203, 4604, 410, 17, 17, 17, 255),
    VTX(-155, 460, 76, 10515, -306, 255, 255, 255, 255),
    VTX(-155, 600, 76, 10515, -1023, 17, 17, 17, 255),
    VTX(-28, 460, 203, 6693, -306, 255, 255, 255, 255),
    VTX(84, 460, 203, 4604, -306, 255, 255, 255, 255),
    VTX(226, 600, 62, 1045, -1023, 17, 17, 17, 255),
    VTX(226, 460, 62, 1045, -306, 255, 255, 255, 255),
    VTX(-155, 320, 76, 10515, 410, 17, 17, 17, 255),
    VTX(226, 320, 62, 1045, 410, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_003550[12] = {
    VTX(-155, 460, -76, 14085, -306, 255, 255, 255, 255),
    VTX(-155, 320, -76, 14085, 410, 17, 17, 17, 255),
    VTX(-14, 460, -218, 18172, -306, 255, 255, 255, 255),
    VTX(-14, 320, -218, 18172, 410, 17, 17, 17, 255),
    VTX(99, 460, -218, 20089, -306, 255, 255, 255, 255),
    VTX(99, 320, -218, 20089, 410, 17, 17, 17, 255),
    VTX(141, 420, -175, 21072, -101, 255, 255, 255, 255),
    VTX(183, 420, -133, 22112, -101, 255, 255, 255, 255),
    VTX(226, 460, -90, 23073, -306, 255, 255, 255, 255),
    VTX(226, 460, 62, 25621, -306, 255, 255, 255, 255),
    VTX(198, 320, -147, 22063, 410, 17, 17, 17, 255),
    VTX(198, 420, -147, 22063, -101, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_003610[3] = {
    VTX(226, 320, 62, 25621, 410, 17, 17, 17, 255),
    VTX(155, 420, -189, 21107, -101, 255, 255, 255, 255),
    VTX(155, 320, -189, 21107, 410, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_003640[6] = {
    VTX(-155, 600, -76, 14085, -1023, 17, 17, 17, 255),
    VTX(-155, 460, 76, 10515, -306, 255, 255, 255, 255),
    VTX(-14, 600, -218, 18172, -1023, 17, 17, 17, 255),
    VTX(-155, 460, -76, 14085, -306, 255, 255, 255, 255),
    VTX(99, 600, -218, 20089, -1023, 17, 17, 17, 255),
    VTX(-14, 460, -218, 18172, -306, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0036A0[1] = {
    VTX(141, 320, -175, 21072, 410, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0036B0[6] = {
    VTX(99, 460, -218, 20089, -306, 255, 255, 255, 255),
    VTX(226, 320, -90, 23073, 410, 17, 17, 17, 255),
    VTX(226, 600, -90, 23073, -1023, 17, 17, 17, 255),
    VTX(226, 600, 62, 25621, -1023, 17, 17, 17, 255),
    VTX(226, 460, -90, 23073, -306, 255, 255, 255, 255),
    VTX(183, 320, -133, 22112, 410, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_003710[18] = {
    VTX(-28, 320, 203, -16, 1171, 17, 17, 17, 255),
    VTX(84, 320, 203, -16, 592, 17, 17, 17, 255),
    VTX(35, 320, -7, 1063, 845, 255, 255, 255, 255),
    VTX(-155, 320, 76, 635, 1823, 17, 17, 17, 255),
    VTX(226, 320, 62, 707, -131, 17, 17, 17, 255),
    VTX(99, 320, -218, 2143, 519, 17, 17, 17, 255),
    VTX(-14, 320, -218, 2143, 1099, 17, 17, 17, 255),
    VTX(226, 320, -90, 1491, -131, 17, 17, 17, 255),
    VTX(-155, 320, -76, 1419, 1823, 17, 17, 17, 255),
    VTX(84, 600, 203, -16, 592, 17, 17, 17, 255),
    VTX(-28, 600, 203, -16, 1171, 17, 17, 17, 255),
    VTX(35, 600, -7, 1063, 845, 255, 255, 255, 255),
    VTX(-155, 600, 76, 635, 1823, 17, 17, 17, 255),
    VTX(-155, 600, -76, 1419, 1823, 17, 17, 17, 255),
    VTX(-14, 600, -218, 2143, 1099, 17, 17, 17, 255),
    VTX(226, 600, 62, 707, -131, 17, 17, 17, 255),
    VTX(99, 600, -218, 2143, 519, 17, 17, 17, 255),
    VTX(226, 600, -90, 1491, -131, 17, 17, 17, 255),
}; 

Gfx unfinished_deku_tree_room_00Dlist0x003830[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0028F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003B00[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(5, 3, 7, 0),
    gsSP1Triangle(5, 7, 8, 0),
    gsSP1Triangle(7, 6, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsSP1Triangle(8, 7, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 0, 0),
    gsSP1Triangle(12, 0, 4, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003B00[1], 1, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003B00[10], 11, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003CB0[0], 3, 13),
    gsSP1Triangle(5, 6, 1, 0),
    gsSP1Triangle(5, 1, 0, 0),
    gsSP1Triangle(7, 8, 5, 0),
    gsSP1Triangle(7, 5, 4, 0),
    gsSP1Triangle(8, 13, 6, 0),
    gsSP1Triangle(8, 6, 5, 0),
    gsSP1Triangle(9, 10, 8, 0),
    gsSP1Triangle(9, 8, 7, 0),
    gsSP1Triangle(10, 14, 13, 0),
    gsSP1Triangle(10, 13, 8, 0),
    gsSP1Triangle(11, 12, 2, 0),
    gsSP1Triangle(11, 2, 15, 0),
    gsSP1Triangle(12, 3, 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003B00[9], 3, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003B00[19], 8, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003CB0[2], 3, 11),
    gsSP1Triangle(4, 12, 2, 0),
    gsSP1Triangle(1, 0, 5, 0),
    gsSP1Triangle(1, 5, 11, 0),
    gsSP1Triangle(3, 11, 8, 0),
    gsSP1Triangle(6, 4, 3, 0),
    gsSP1Triangle(6, 3, 9, 0),
    gsSP1Triangle(7, 12, 4, 0),
    gsSP1Triangle(7, 4, 6, 0),
    gsSP1Triangle(8, 13, 3, 0),
    gsSP1Triangle(9, 3, 13, 0),
    gsSP1Triangle(9, 13, 10, 0),
    gsSP1Triangle(10, 13, 12, 0),
    gsSP1Triangle(10, 12, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0038F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_003D00[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(2, 1, 4, 0),
    gsSP1Triangle(5, 2, 6, 0),
    gsSP1Triangle(5, 3, 2, 0),
    gsSP1Triangle(2, 7, 6, 0),
    gsSP1Triangle(2, 4, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(9, 12, 10, 0),
    gsSP1Triangle(12, 13, 10, 0),
    gsSP1Triangle(14, 15, 10, 0),
    gsSP1Triangle(15, 11, 10, 0),
    gsSP1Triangle(13, 14, 10, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_003B00[27] = {
    VTX(-120, 780, -24, 13097, -1945, 255, 255, 255, 255),
    VTX(-120, 920, -24, 13097, -2661, 17, 17, 17, 255),
    VTX(-120, 920, 95, 9693, -2661, 17, 17, 17, 255),
    VTX(-120, 780, 95, 9693, -1945, 255, 255, 255, 255),
    VTX(-120, 640, -24, 13097, -1228, 17, 17, 17, 255),
    VTX(-120, 640, 95, 9693, -1228, 17, 17, 17, 255),
    VTX(9, 920, 218, 5974, -2661, 17, 17, 17, 255),
    VTX(9, 780, 218, 5974, -1945, 255, 255, 255, 255),
    VTX(9, 640, 218, 5974, -1228, 17, 17, 17, 255),
    VTX(101, 920, 218, 4451, -2661, 17, 17, 17, 255),
    VTX(101, 780, 218, 4451, -1945, 255, 255, 255, 255),
    VTX(101, 640, 218, 4451, -1228, 17, 17, 17, 255),
    VTX(-40, 640, -124, 17195, -1228, 17, 17, 17, 255),
    VTX(-40, 780, -124, 17195, -1945, 255, 255, 255, 255),
    VTX(-40, 920, -124, 17195, -2661, 17, 17, 17, 255),
    VTX(79, 640, -124, 20630, -1228, 17, 17, 17, 255),
    VTX(79, 780, -124, 20630, -1945, 255, 255, 255, 255),
    VTX(188, 640, 76, 26068, -1228, 17, 17, 17, 255),
    VTX(188, 780, 76, 26068, -1945, 255, 255, 255, 255),
    VTX(165, 740, 114, 2358, -1740, 255, 255, 255, 255),
    VTX(133, 740, 165, 3480, -1740, 255, 255, 255, 255),
    VTX(188, 920, 76, 1492, -2661, 17, 17, 17, 255),
    VTX(150, 740, 175, 3369, -1740, 255, 255, 255, 255),
    VTX(150, 640, 175, 3369, -1228, 17, 17, 17, 255),
    VTX(188, 640, 76, 1492, -1228, 17, 17, 17, 255),
    VTX(182, 740, 124, 2341, -1740, 255, 255, 255, 255),
    VTX(182, 640, 124, 2341, -1228, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_003CB0[5] = {
    VTX(79, 920, -124, 20630, -2661, 17, 17, 17, 255),
    VTX(188, 920, 76, 26068, -2661, 17, 17, 17, 255),
    VTX(188, 780, 76, 1492, -1945, 255, 255, 255, 255),
    VTX(133, 640, 165, 3480, -1228, 17, 17, 17, 255),
    VTX(165, 640, 114, 2358, -1228, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_003D00[16] = {
    VTX(-40, 640, -124, 2690, 210, 17, 17, 17, 255),
    VTX(-120, 640, -24, 2178, 620, 17, 17, 17, 255),
    VTX(34, 640, 25, 1919, -171, 255, 255, 255, 255),
    VTX(79, 640, -124, 2690, -403, 17, 17, 17, 255),
    VTX(-120, 640, 95, 1564, 620, 17, 17, 17, 255),
    VTX(188, 640, 76, 1661, -964, 17, 17, 17, 255),
    VTX(101, 640, 218, 934, -514, 17, 17, 17, 255),
    VTX(9, 640, 218, 934, -48, 17, 17, 17, 255),
    VTX(101, 920, 218, 934, -514, 17, 17, 17, 255),
    VTX(9, 920, 218, 934, -48, 17, 17, 17, 255),
    VTX(34, 920, 25, 1919, -171, 255, 255, 255, 255),
    VTX(188, 920, 76, 1661, -964, 17, 17, 17, 255),
    VTX(-120, 920, 95, 1564, 620, 17, 17, 17, 255),
    VTX(-120, 920, -24, 2178, 620, 17, 17, 17, 255),
    VTX(-40, 920, -124, 2690, 210, 17, 17, 17, 255),
    VTX(79, 920, -124, 2690, -403, 17, 17, 17, 255),
}; 

Gfx unfinished_deku_tree_room_00Dlist0x003E00[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 0, 0, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0038F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0042E8[0], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004308[0], 5, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(4, 5, 3, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0028F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004358[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(5, 7, 1, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 2, 0),
    gsSP1Triangle(9, 7, 10, 0),
    gsSP1Triangle(7, 6, 10, 0),
    gsSP1Triangle(2, 8, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 2, 12, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004388[1], 3, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0043E8[1], 1, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004438[0], 9, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0044C8[10], 1, 13),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSP1Triangle(5, 6, 2, 0),
    gsSP1Triangle(5, 2, 1, 0),
    gsSP1Triangle(2, 6, 3, 0),
    gsSP1Triangle(7, 9, 5, 0),
    gsSP1Triangle(7, 5, 4, 0),
    gsSP1Triangle(8, 12, 11, 0),
    gsSP1Triangle(8, 11, 9, 0),
    gsSP1Triangle(9, 11, 6, 0),
    gsSP1Triangle(9, 6, 5, 0),
    gsSP1Triangle(10, 8, 9, 0),
    gsSP1Triangle(10, 9, 7, 0),
    gsSP1Triangle(11, 12, 3, 0),
    gsSP1Triangle(6, 11, 3, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004388[0], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004408[0], 3, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0044C8[0], 6, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004598[0], 4, 10),
    gsSP1Triangle(4, 3, 7, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(5, 7, 10, 0),
    gsSP1Triangle(5, 10, 11, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(7, 6, 12, 0),
    gsSP1Triangle(7, 12, 10, 0),
    gsSP1Triangle(6, 8, 13, 0),
    gsSP1Triangle(6, 13, 12, 0),
    gsSP1Triangle(2, 1, 8, 0),
    gsSP1Triangle(2, 8, 6, 0),
    gsSP1Triangle(9, 0, 3, 0),
    gsSP1Triangle(9, 3, 4, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004358[0], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004388[0], 2, 1),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0043E8[0], 2, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004438[0], 1, 5),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004468[0], 1, 6),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004498[0], 1, 7),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0044C8[5], 8, 8),
    gsSP1Triangle(9, 7, 6, 0),
    gsSP1Triangle(9, 6, 10, 0),
    gsSP1Triangle(10, 6, 5, 0),
    gsSP1Triangle(10, 5, 11, 0),
    gsSP1Triangle(11, 5, 2, 0),
    gsSP1Triangle(11, 2, 15, 0),
    gsSP1Triangle(12, 0, 1, 0),
    gsSP1Triangle(12, 1, 8, 0),
    gsSP1Triangle(4, 13, 14, 0),
    gsSP1Triangle(3, 4, 14, 0),
    gsSP1Triangle(15, 2, 0, 0),
    gsSP1Triangle(15, 0, 12, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(unfinished_deku_tree_sceneTex_0038F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0042E8[0], 2, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004308[0], 1, 2),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004328[0], 3, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0045D8[0], 10, 6),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(6, 7, 0, 0),
    gsSP1Triangle(6, 0, 3, 0),
    gsSP1Triangle(8, 6, 3, 0),
    gsSP1Triangle(8, 3, 5, 0),
    gsSP1Triangle(9, 4, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(10, 2, 12, 0),
    gsSP1Triangle(10, 12, 11, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004608[0], 1, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004628[0], 14, 1),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsSP1Triangle(4, 7, 8, 0),
    gsSP1Triangle(4, 8, 5, 0),
    gsSP1Triangle(7, 12, 9, 0),
    gsSP1Triangle(7, 9, 8, 0),
    gsSP1Triangle(9, 11, 13, 0),
    gsSP1Triangle(9, 13, 8, 0),
    gsSP1Triangle(8, 13, 10, 0),
    gsSP1Triangle(8, 10, 5, 0),
    gsSP1Triangle(5, 10, 14, 0),
    gsSP1Triangle(5, 14, 6, 0),
    gsSP1Triangle(1, 2, 11, 0),
    gsSP1Triangle(1, 11, 9, 0),
    gsSP1Triangle(12, 0, 1, 0),
    gsSP1Triangle(12, 1, 9, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_0045D8[0], 3, 0),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004628[2], 1, 3),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004628[5], 1, 4),
    gsSPVertex(&unfinished_deku_tree_room_00Vtx_004628[13], 1, 5),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSP1Triangle(4, 5, 1, 0),
    gsSP1Triangle(4, 1, 0, 0),
    gsSPEndDisplayList(),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0042E8[2] = {
    VTX(-199, 0, -399, 3072, 2048, 119, 119, 119, 255),
    VTX(-166, 0, -319, 2902, 2458, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004308[1] = {
    VTX(167, 0, -319, 1194, 2458, 17, 17, 17, 255),
}; 

static u8 unaccounted_004318[16] = {
    0x01, 0x13, 0x00, 0x00, 0xFD, 0xF9, 0x00, 0x00, 0x02, 0x7E, 0x05, 0x9A, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004328[3] = {
    VTX(-291, 0, -559, 3543, 1229, 255, 255, 255, 255),
    VTX(384, 0, -719, 82, 410, 17, 17, 17, 255),
    VTX(-383, 0, -719, 4014, 410, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004358[1] = {
    VTX(-719, 160, -383, 14204, 1229, 255, 255, 255, 255),
}; 

static u8 unaccounted_004368[32] = {
    0xFD, 0xA9, 0x03, 0xE8, 0xFE, 0xC1, 0x00, 0x00, 0x37, 0x7C, 0xF4, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 
    0xFD, 0xA9, 0x03, 0xE8, 0x01, 0x40, 0x00, 0x00, 0x28, 0x84, 0xF4, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004388[4] = {
    VTX(-719, 160, 384, 10372, 1229, 255, 255, 255, 255),
    VTX(-383, 160, -719, 16516, 1229, 255, 255, 255, 255),
    VTX(-319, 1000, -599, 16516, -3071, 255, 255, 255, 255),
    VTX(-209, 2000, -392, 16516, -8191, 17, 17, 17, 255),
}; 

static u8 unaccounted_0043C8[32] = {
    0xFE, 0x78, 0x07, 0xD0, 0xFF, 0x2F, 0x00, 0x00, 0x37, 0x7C, 0xE0, 0x01, 0x11, 0x11, 0x11, 0xFF, 
    0xFE, 0x78, 0x07, 0xD0, 0x00, 0xD2, 0x00, 0x00, 0x28, 0x84, 0xE0, 0x01, 0x11, 0x11, 0x11, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0043E8[2] = {
    VTX(-392, 2000, 210, 32767, -8191, 17, 17, 17, 255),
    VTX(0, 2000, 0, 20348, -8191, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004408[3] = {
    VTX(-209, 2000, 393, 8060, -8191, 17, 17, 17, 255),
    VTX(-319, 1000, 600, 8060, -3071, 255, 255, 255, 255),
    VTX(-383, 160, 720, 8060, 1229, 255, 255, 255, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004438[1] = {
    VTX(384, 160, -719, 20348, 1229, 255, 255, 255, 255),
}; 

static u8 unaccounted_004448[32] = {
    0x01, 0x40, 0x03, 0xE8, 0xFD, 0xA9, 0x00, 0x00, 0x4F, 0x7C, 0xF4, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x00, 0xD2, 0x07, 0xD0, 0xFE, 0x78, 0x00, 0x00, 0x4F, 0x7C, 0xE0, 0x01, 0x11, 0x11, 0x11, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004468[1] = {
    VTX(720, 160, -383, 22660, 1229, 255, 255, 255, 255),
}; 

static u8 unaccounted_004478[32] = {
    0x02, 0x58, 0x03, 0xE8, 0x01, 0x40, 0x00, 0x00, 0x67, 0x7C, 0xF4, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 
    0x02, 0x58, 0x03, 0xE8, 0xFE, 0xC1, 0x00, 0x00, 0x58, 0x84, 0xF4, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004498[1] = {
    VTX(720, 160, 384, 26492, 1229, 255, 255, 255, 255),
}; 

static u8 unaccounted_0044A8[32] = {
    0x01, 0x89, 0x07, 0xD0, 0xFF, 0x2F, 0x00, 0x00, 0x58, 0x84, 0xE0, 0x01, 0x11, 0x11, 0x11, 0xFF, 
    0x01, 0x89, 0x07, 0xD0, 0x00, 0xD2, 0x00, 0x00, 0x67, 0x7C, 0xE0, 0x01, 0x11, 0x11, 0x11, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0044C8[13] = {
    VTX(-383, 0, 720, 8060, 2048, 17, 17, 17, 255),
    VTX(384, 0, 720, 4228, 2048, 17, 17, 17, 255),
    VTX(320, 1000, 600, 4228, -3071, 255, 255, 255, 255),
    VTX(384, 160, 720, 4228, 1229, 255, 255, 255, 255),
    VTX(210, 2000, 393, 4228, -8191, 17, 17, 17, 255),
    VTX(-719, 0, 384, 10372, 2048, 17, 17, 17, 255),
    VTX(720, 0, 384, 26492, 2048, 17, 17, 17, 255),
    VTX(720, 0, -383, 22660, 2048, 17, 17, 17, 255),
    VTX(384, 0, -719, 20348, 2048, 17, 17, 17, 255),
    VTX(-719, 0, -383, 14204, 2048, 17, 17, 17, 255),
    VTX(210, 2000, 393, 28804, -8191, 17, 17, 17, 255),
    VTX(-209, 2000, 393, 32636, -8191, 17, 17, 17, 255),
    VTX(-383, 0, -719, 16516, 2048, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004598[4] = {
    VTX(720, 160, 384, 1916, 1229, 255, 255, 255, 255),
    VTX(720, 0, 384, 1916, 2048, 17, 17, 17, 255),
    VTX(600, 1000, 320, 1916, -3071, 255, 255, 255, 255),
    VTX(393, 2000, 210, 1916, -8191, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_0045D8[3] = {
    VTX(-559, 0, -291, 4915, 2601, 255, 255, 255, 255),
    VTX(-399, 0, -199, 4096, 3072, 17, 17, 17, 255),
    VTX(-719, 0, -383, 5734, 2130, 17, 17, 17, 255),
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004608[1] = {
    VTX(720, 0, -383, -1637, 2130, 17, 17, 17, 255),
}; 

static u8 unaccounted_004618[16] = {
    0x01, 0x13, 0x00, 0x00, 0xFD, 0xF9, 0x00, 0x00, 0x02, 0x7E, 0x05, 0x9A, 0xFF, 0xFF, 0xFF, 0xFF, 
}; 

static Vtx unfinished_deku_tree_room_00Vtx_004628[14] = {
    VTX(560, 0, -291, -818, 2601, 255, 255, 255, 255),
    VTX(400, 0, -199, 0, 3072, 17, 17, 17, 255),
    VTX(-719, 0, 384, 5734, 6062, 17, 17, 17, 255),
    VTX(-383, 0, 720, 4014, 7782, 17, 17, 17, 255),
    VTX(-291, 0, 560, 3543, 6963, 255, 255, 255, 255),
    VTX(-559, 0, 292, 4915, 5591, 255, 255, 255, 255),
    VTX(384, 0, 720, 82, 7782, 17, 17, 17, 255),
    VTX(292, 0, 560, 553, 6963, 255, 255, 255, 255),
    VTX(560, 0, 292, -818, 5591, 255, 255, 255, 255),
    VTX(-199, 0, 400, 3072, 6144, 17, 17, 17, 255),
    VTX(400, 0, 200, 0, 5120, 17, 17, 17, 255),
    VTX(720, 0, 384, -1637, 6062, 17, 17, 17, 255),
    VTX(200, 0, 400, 1024, 6144, 17, 17, 17, 255),
    VTX(-399, 0, 200, 4096, 5120, 17, 17, 17, 255),
}; 

Gfx unfinished_deku_tree_room_00Dlist0x004708[] = {
    gsSPDisplayList(unfinished_deku_tree_room_00Dlist0x000050),
    gsSPDisplayList(unfinished_deku_tree_room_00Dlist0x002A90),
    gsSPDisplayList(unfinished_deku_tree_room_00Dlist0x003118),
    gsSPDisplayList(unfinished_deku_tree_room_00Dlist0x003830),
    gsSPDisplayList(unfinished_deku_tree_room_00Dlist0x003E00),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_004738[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


