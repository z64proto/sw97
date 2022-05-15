#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "old_sacred_forest_meadow_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "old_sacred_forest_meadow_scene.h"


static SCmdEchoSettings old_sacred_forest_meadow_room_00Set0000Cmd00;
static SCmdRoomBehavior old_sacred_forest_meadow_room_00Set0000Cmd01;
static SCmdSkyboxDisables old_sacred_forest_meadow_room_00Set0000Cmd02;
static SCmdTimeSettings old_sacred_forest_meadow_room_00Set0000Cmd03;
static SCmdMesh old_sacred_forest_meadow_room_00Set0000Cmd04;
static SCmdObjectList old_sacred_forest_meadow_room_00Set0000Cmd05;
static SCmdActorList old_sacred_forest_meadow_room_00Set0000Cmd06;
static SCmdEndMarker old_sacred_forest_meadow_room_00Set0000Cmd07;
static s32 terminatorMaybe;
static Vtx old_sacred_forest_meadow_room_00Vtx_000340[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_0003C0[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_000440[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_000688[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_000708[13];
static Vtx old_sacred_forest_meadow_room_00Vtx_0007D8[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_000858[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_001318[22];
static Vtx old_sacred_forest_meadow_room_00Vtx_001478[4];
static Vtx old_sacred_forest_meadow_room_00Vtx_0014B8[4];
static Vtx old_sacred_forest_meadow_room_00Vtx_0014F8[4];
static Vtx old_sacred_forest_meadow_room_00Vtx_001538[16];
static Vtx old_sacred_forest_meadow_room_00Vtx_001638[12];
static Vtx old_sacred_forest_meadow_room_00Vtx_0016F8[12];
static Vtx old_sacred_forest_meadow_room_00Vtx_0017B8[12];
static Vtx old_sacred_forest_meadow_room_00Vtx_0022E8[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_002368[13];
static Vtx old_sacred_forest_meadow_room_00Vtx_002438[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_0024B8[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_002F88[12];
static Vtx old_sacred_forest_meadow_room_00Vtx_003048[17];
static Vtx old_sacred_forest_meadow_room_00Vtx_003AE8[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_003B68[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_003BE8[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_003E30[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_003EB0[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_003F30[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_004178[9];
static Vtx old_sacred_forest_meadow_room_00Vtx_004208[8];
static Vtx old_sacred_forest_meadow_room_00Vtx_004288[8];

static SCmdEchoSettings old_sacred_forest_meadow_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior old_sacred_forest_meadow_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000000 }; // 0x0008

static SCmdSkyboxDisables old_sacred_forest_meadow_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x00, 0x00 }; // 0x0010

static SCmdTimeSettings old_sacred_forest_meadow_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x02 }; // 0x0018

static SCmdMesh old_sacred_forest_meadow_room_00Set0000Cmd04 = {  0x0A, 0, (u32)&old_sacred_forest_meadow_room_00MeshHeader0x0002C0 }; // 0x0020

static SCmdObjectList old_sacred_forest_meadow_room_00Set0000Cmd05 = {  0x0B, 0x09, (u32)old_sacred_forest_meadow_room_00ObjectList0x000040 }; // 0x0028

static SCmdActorList old_sacred_forest_meadow_room_00Set0000Cmd06 = {  0x01, 0x26, (u32)old_sacred_forest_meadow_room_00ActorList0x000054 }; // 0x0030 }; 

static SCmdEndMarker old_sacred_forest_meadow_room_00Set0000Cmd07 = {  0x14, 0x00, 0x00 }; // 0x0038

s16 old_sacred_forest_meadow_room_00ObjectList0x000040[9] = {
	OBJECT_O_ANIME,
	OBJECT_OE_ANIME,
	OBJECT_OE1,
	OBJECT_OE2,
	OBJECT_PEEHAT,
	OBJECT_DEKUBABA,
	OBJECT_ST,
	OBJECT_MB,
	OBJECT_BOMBF,
}; 

ActorEntry old_sacred_forest_meadow_room_00ActorList0x000054[] = {
	{ ACTOR_FIELD_KEEP, 22, 112, 981, 0, 0, 0, 0x000C }, //0x000054
    { ACTOR_FIELD_KEEP, 48, 33, 208, 0, 0, 0, 0x0016 }, //0x000064
    { ACTOR_FIELD_KEEP, -853, 172, 981, 0, 0, 0, 0x0016 }, //0x000074	
    { ACTOR_FIELD_KEEP, 48, 206, 1754, 0, 0, 0, 0x0016 }, //0x000084
    { ACTOR_FIELD_KEEP, 924, 92, 981, 0, 0, 0, 0x0016 }, //0x000094
    { ACTOR_FIELD_KEEP, -570, 74, 363, 0, 0, 0, 0x0017 }, //0x0000A4
    { ACTOR_FIELD_KEEP, -622, 200, 1548, 0, 0, 0, 0x0017 }, //0x0000B4
    { ACTOR_FIELD_KEEP, 821, 189, 1625, 0, 0, 0, 0x0017 }, //0x0000C4
    { ACTOR_FIELD_KEEP, 641, 54, 363, 0, 0, 0, 0x0017 }, //0x0000D4
    { ACTOR_FIELD_KEEP, -1420, 79, -1363, 0, 0, 0, 0x001E }, //0x0000E4
    { ACTOR_FIELD_KEEP, -1394, 0, -513, 0, 0, 0, 0x001F }, //0x0000F4
    { ACTOR_FIELD_KEEP, -1420, 192, -2162, 0, 0, 0, 0x001F }, //0x000104
    { ACTOR_FIELD_KEEP, -2245, 6, -1337, 0, 0, 0, 0x001F }, //0x000114
    { ACTOR_FIELD_KEEP, -493, 194, -1337, 0, 0, 0, 0x001F }, //0x000124
    { ACTOR_FIELD_KEEP, -2013, 105, -1904, 0, 0, 0, 0x0020 }, //0x000134
    { ACTOR_FIELD_KEEP, -699, 45, -719, 0, 0, 0, 0x0020 }, //0x000144
    { ACTOR_FIELD_KEEP, -2064, 0, -745, 0, 0, 0, 0x0020 }, //0x000154
    { ACTOR_FIELD_KEEP, -828, 233, -1878, 0, 0, 0, 0x0020 }, //0x000164
    { ACTOR_FIELD_KEEP, -2270, 75, 363, 0, 0, 0, 0x0018 }, //0x000174
    { ACTOR_FIELD_KEEP, -2141, 0, -384, 0, 0, 0, 0x0018 }, //0x000184
    { ACTOR_FIELD_KEEP, 796, 450, -2343, 0, 0, 0, 0x0018 }, //0x000194
    { ACTOR_FIELD_KEEP, 1130, 375, -1518, 0, 0, 0, 0x0018 }, //0x0001A4
    { ACTOR_FIELD_KEEP, -55, 309, -1673, 0, 0, 0, 0x0018 }, //0x0001B4
    { ACTOR_FIELD_KEEP, 254, 127, -462, 0, 0, 0, 0x0018 }, //0x0001C4
    { ACTOR_FIELD_KEEP, 22, 452, -2806, 0, 0, 0, 0x001A }, //0x0001D4
    { ACTOR_FIELD_KEEP, 2264, 383, -384, 0, 0, 0, 0x001A }, //0x0001E4
    { ACTOR_FIELD_KEEP, 1259, 288, -822, 0, 0, 0, 0x001A }, //0x0001F4
    { ACTOR_FIELD_KEEP, -2141, 200, 1342, 0, 0, 0, 0x001A }, //0x000204
    { ACTOR_FIELD_KEEP, 1723, 186, 389, 0, 0, 0, 0x001A }, //0x000214
    { ACTOR_EN_MB, -852, 51, 54, 0, -21481, 0, 0xFFFF }, //0x000224
	{ ACTOR_EN_MB, 537, 217, -976, 0, -10922, 0, 0xFFFF }, //0x000234
	{ ACTOR_EN_DEKUBABA, 666, 313, -1286, 0, 0, 0, 0x0001 }, //0x000244
	{ ACTOR_EN_DEKUBABA, -905, 0, -358, 0, 0, 0, 0x0001 }, //0x000254
	{ ACTOR_EN_DEKUBABA, -1394, 22, 79, 0, 0, 0, 0x0001 }, //0x000264
	{ ACTOR_EN_DEKUBABA, -55, 117, -874, 0, 0, 0, 0x0001 }, //0x000274
	{ ACTOR_EN_DEKUBABA, 615, 374, -1801, 0, 0, 0, 0x0001 }, //0x000284
	{ ACTOR_EN_DEKUBABA, -1832, 0, -152, 0, 0, 0, 0x0001 }, //0x000294
	{ ACTOR_EN_MB, 1001, 424, -2007, 0, -8192, 0, 0x0000 }, //0x0002A4
}; 

static u32 pad2B4 = 0;
static u32 pad2B8 = 0;
static u32 pad2BC = 0;

MeshHeader2 old_sacred_forest_meadow_room_00MeshHeader0x0002C0 = { { 2 }, 0x07, (u32)&old_sacred_forest_meadow_room_00MeshDListEntry0x0002CC, (u32)&(old_sacred_forest_meadow_room_00MeshDListEntry0x0002CC) + sizeof(old_sacred_forest_meadow_room_00MeshDListEntry0x0002CC) }; 

MeshEntry2 old_sacred_forest_meadow_room_00MeshDListEntry0x0002CC[7] = {
	{ -1472, 740, -2549, 1854, (u32)old_sacred_forest_meadow_room_00Dlist0x000678, 0 },
	{ 1472, 900, -2549, 1796, (u32)old_sacred_forest_meadow_room_00Dlist0x0022D0, 0 },
	{ -2944, 580, 0, 1796, (u32)old_sacred_forest_meadow_room_00Dlist0x002F78, 0 },
	{ 0, 160, 0, 1706, (u32)old_sacred_forest_meadow_room_00Dlist0x003AD8, 0 },
	{ 2944, 780, 0, 1838, (u32)old_sacred_forest_meadow_room_00Dlist0x003E20, 0 },
	{ -1472, 680, 2550, 1766, (u32)old_sacred_forest_meadow_room_00Dlist0x004168, 0 },
	{ 1472, 795, 2550, 1844, (u32)old_sacred_forest_meadow_room_00Dlist0x0044D0, 0 },

}; 

static s32 terminatorMaybe = { 0x01000000 }; 

static Vtx old_sacred_forest_meadow_room_00Vtx_000340[8] = {
    VTX(-1471, 240, -4249, 1520, 13678, 235, 125, 0, 255),
    VTX(-2943, 0, -3399, -9248, 7461, 237, 125, 0, 255),
    VTX(-1471, 240, -2549, 1520, 1243, 239, 125, 8, 255),
    VTX(-2943, 0, -1699, -9248, -4973, 251, 126, 4, 255),
    VTX(-1471, 0, -849, 1520, -11190, 250, 126, 12, 255),
    VTX(-1471, 0, -849, 1520, -11190, 250, 126, 12, 255),
    VTX(0, 320, -1699, 12288, -4973, 244, 124, 20, 255),
    VTX(0, 520, -3399, 12288, 7461, 247, 126, 6, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_0003C0[8] = {
    VTX(-1471, 720, -2549, 0, 1024, 63, 0, 110, 255),
    VTX(-1471, 240, -2549, 0, 0, 63, 0, 110, 255),
    VTX(0, 520, -3399, 4096, 0, 44, 0, 119, 255),
    VTX(0, 1000, -3399, 4096, 1024, 44, 0, 119, 255),
    VTX(-2943, 480, -1699, 0, 1024, 81, 0, 98, 255),
    VTX(-2943, 0, -1699, 0, 0, 81, 0, 98, 255),
    VTX(-1471, 240, -2549, 4096, 0, 63, 0, 110, 255),
    VTX(-1471, 720, -2549, 4096, 1024, 63, 0, 110, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_000440[8] = {
    VTX(-2943, 960, -1699, 0, 1024, 81, 0, 98, 255),
    VTX(-2943, 480, -1699, 0, 0, 81, 0, 98, 255),
    VTX(-1471, 720, -2549, 4096, 0, 63, 0, 110, 255),
    VTX(-1471, 1200, -2549, 4096, 1024, 63, 0, 110, 255),
    VTX(-1471, 1200, -2549, 0, 1024, 63, 0, 110, 255),
    VTX(-1471, 720, -2549, 0, 0, 63, 0, 110, 255),
    VTX(0, 1000, -3399, 4096, 0, 44, 0, 119, 255),
    VTX(0, 1480, -3399, 4096, 1024, 44, 0, 119, 255),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x0004C0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_002590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_000340[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_001590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_0003C0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_000D90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_000440[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x000678[] = {
    gsSPDisplayList(old_sacred_forest_meadow_room_00Dlist0x0004C0),
    gsSPEndDisplayList(),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_000688[8] = {
    VTX(2278, 520, -3784, 1024, 2048, 0, 127, 0, 255),
    VTX(2139, 520, -3864, 0, 2048, 0, 127, 0, 255),
    VTX(1403, 520, -2589, 0, 0, 252, 126, 9, 255),
    VTX(1542, 520, -2509, 1024, 0, 252, 126, 9, 255),
    VTX(1542, 520, -2509, 1024, 2048, 252, 126, 9, 255),
    VTX(1403, 520, -2589, 0, 2048, 252, 126, 9, 255),
    VTX(322, 320, -1513, 0, 0, 245, 124, 23, 255),
    VTX(491, 320, -1416, 1024, 0, 245, 124, 23, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_000708[13] = {
    VTX(1542, 520, -2509, 1035, -72, 252, 126, 9, 255),
    VTX(1472, 320, -849, 528, -12214, 243, 125, 15, 255),
    VTX(2944, 520, -1699, 11297, -5997, 0, 126, 5, 255),
    VTX(2944, 520, -3399, 11297, 6437, 0, 127, 0, 255),
    VTX(2278, 520, -3784, 6419, 9253, 0, 127, 0, 255),
    VTX(491, 320, -1416, -6650, -8069, 245, 124, 23, 255),
    VTX(1472, 320, -849, 528, -12214, 243, 125, 15, 255),
    VTX(1472, 520, -4249, 528, 12654, 0, 127, 0, 255),
    VTX(0, 520, -3399, -10239, 6437, 247, 126, 6, 255),
    VTX(2139, 520, -3864, 5406, 9838, 0, 127, 0, 255),
    VTX(0, 320, -1699, -10239, -5997, 244, 124, 20, 255),
    VTX(1403, 520, -2589, 22, 512, 252, 126, 9, 255),
    VTX(322, 320, -1513, -7883, -7357, 245, 124, 23, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_0007D8[8] = {
    VTX(0, 1000, -3399, 0, 1024, 44, 0, 119, 255),
    VTX(0, 520, -3399, 0, 0, 44, 0, 119, 255),
    VTX(2208, 520, -3824, 4096, 0, 194, 0, 110, 255),
    VTX(2208, 1000, -3824, 4096, 1024, 194, 0, 110, 255),
    VTX(2208, 1000, -3824, 0, 1024, 194, 0, 110, 255),
    VTX(2208, 520, -3824, 0, 0, 194, 0, 110, 255),
    VTX(2944, 520, -1699, 4096, 0, 132, 0, 21, 255),
    VTX(2944, 1000, -1699, 4096, 1024, 132, 0, 21, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_000858[8] = {
    VTX(2208, 1480, -3824, 0, 1024, 194, 0, 110, 255),
    VTX(2208, 1000, -3824, 0, 0, 194, 0, 110, 255),
    VTX(2944, 1000, -1699, 4096, 0, 132, 0, 21, 255),
    VTX(2944, 1480, -1699, 4096, 1024, 132, 0, 21, 255),
    VTX(0, 1480, -3399, 0, 1024, 44, 0, 119, 255),
    VTX(0, 1000, -3399, 0, 0, 44, 0, 119, 255),
    VTX(2208, 1000, -3824, 4096, 0, 194, 0, 110, 255),
    VTX(2208, 1480, -3824, 4096, 1024, 194, 0, 110, 255),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x0008D8[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_room_00Tex_000B18, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_000688[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_002590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_000708[0], 13, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(0, 2, 4, 0),
    gsSP1Triangle(5, 6, 0, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(8, 11, 9, 0),
    gsSP1Triangle(10, 12, 11, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_001590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_0007D8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_000D90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_000858[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_sacred_forest_meadow_room_00Tex_000B18[] = {
#include "assets/scenes/overworld/old_sacred_forest_meadow//old_sacred_forest_meadow_room_00Tex_000B18.rgb5a1.inc.c"
};

static Vtx old_sacred_forest_meadow_room_00Vtx_001318[22] = {
    VTX(1670, 1120, -3875, -5106, 6389, 20, 120, 222, 255),
    VTX(1499, 1280, -3420, -4082, 245, 20, 120, 222, 255),
    VTX(2192, 1280, -3020, 6157, 245, 20, 120, 222, 255),
    VTX(2501, 1120, -3395, 7181, 6389, 20, 120, 222, 255),
    VTX(2610, 1080, -3425, 8205, 7413, 28, 113, 208, 255),
    VTX(1641, 1080, -3985, -6130, 7413, 28, 113, 208, 255),
    VTX(1670, 1120, -3875, -5106, 6389, 28, 113, 208, 255),
    VTX(2501, 1120, -3395, 7181, 6389, 28, 113, 208, 255),
    VTX(2610, 600, -3425, 8205, 7413, 0, 127, 0, 255),
    VTX(2501, 600, -3395, 7181, 6389, 0, 127, 0, 255),
    VTX(2021, 600, -2564, 7181, -5898, 0, 127, 0, 255),
    VTX(2050, 600, -2455, 8205, -6922, 0, 127, 0, 255),
    VTX(1641, 600, -3985, -6130, 7413, 0, 127, 0, 255),
    VTX(1670, 600, -3875, -5106, 6389, 0, 127, 0, 255),
    VTX(1190, 600, -3044, -5106, -5898, 0, 127, 0, 255),
    VTX(1081, 600, -3015, -6130, -6922, 0, 127, 0, 255),
    VTX(1190, 1120, -3044, -5106, -5898, 229, 113, 49, 255),
    VTX(2192, 1280, -3020, 6157, 245, 98, 57, 57, 255),
    VTX(2021, 1120, -2564, 7181, -5898, 49, 113, 28, 255),
    VTX(1190, 1120, -3044, -5106, -5898, 159, 57, 200, 255),
    VTX(1081, 1080, -3015, -6130, -6922, 208, 113, 229, 255),
    VTX(1499, 1280, -3420, -4082, 245, 237, 120, 35, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_001478[4] = {
    VTX(1641, 520, -3985, 8179, -1023, 63, 0, 147, 255),
    VTX(2501, 960, -3395, 7181, 6389, 91, 187, 53, 255),
    VTX(2021, 960, -2564, 7181, -5898, 204, 187, 91, 255),
    VTX(1190, 960, -3044, -5106, -5898, 166, 187, 204, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_0014B8[4] = {
    VTX(1670, 960, -3875, -5106, 6389, 53, 187, 166, 255),
    VTX(1670, 600, -3875, 7155, 0, 63, 0, 147, 255),
    VTX(2501, 600, -3395, 6389, -2047, 110, 0, 63, 255),
    VTX(2610, 520, -3425, 7413, -3071, 110, 0, 63, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_0014F8[4] = {
    VTX(2021, 600, -2564, -5132, 0, 194, 0, 110, 255),
    VTX(2050, 520, -2455, -6156, -1023, 194, 0, 110, 255),
    VTX(1190, 600, -3044, -5898, -2047, 147, 0, 194, 255),
    VTX(1081, 520, -3015, -6922, -3071, 147, 0, 194, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_001538[16] = {
    VTX(1081, 1080, -3015, -6130, -6922, 229, 113, 49, 255),
    VTX(2050, 1080, -2455, 8205, -6922, 229, 113, 49, 255),
    VTX(2021, 1120, -2564, 7181, -5898, 229, 113, 49, 255),
    VTX(2021, 1120, -2564, 7181, -5898, 98, 57, 57, 255),
    VTX(2501, 1120, -3395, 7181, 6389, 98, 57, 57, 255),
    VTX(2050, 1080, -2455, 8205, -6922, 49, 113, 28, 255),
    VTX(2610, 1080, -3425, 8205, 7413, 49, 113, 28, 255),
    VTX(2501, 1120, -3395, 7181, 6389, 49, 113, 28, 255),
    VTX(1499, 1280, -3420, -4082, 245, 159, 57, 200, 255),
    VTX(1670, 1120, -3875, -5106, 6389, 159, 57, 200, 255),
    VTX(1190, 1120, -3044, -5106, -5898, 208, 113, 229, 255),
    VTX(1670, 1120, -3875, -5106, 6389, 208, 113, 229, 255),
    VTX(1641, 1080, -3985, -6130, 7413, 208, 113, 229, 255),
    VTX(1190, 1120, -3044, -5106, -5898, 237, 120, 35, 255),
    VTX(2021, 1120, -2564, 7181, -5898, 237, 120, 35, 255),
    VTX(2192, 1280, -3020, 6157, 245, 237, 120, 35, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_001638[12] = {
    VTX(1641, 600, -3985, 8179, 0, 63, 0, 147, 255),
    VTX(2610, 600, -3425, -6156, 0, 63, 0, 147, 255),
    VTX(2610, 520, -3425, -6156, -1023, 63, 0, 147, 255),
    VTX(2610, 1080, -3425, 8205, 7413, 91, 187, 53, 255),
    VTX(2050, 1080, -2455, 8205, -6922, 91, 187, 53, 255),
    VTX(2021, 960, -2564, 7181, -5898, 91, 187, 53, 255),
    VTX(2050, 1080, -2455, 8205, -6922, 204, 187, 91, 255),
    VTX(1081, 1080, -3015, -6130, -6922, 204, 187, 91, 255),
    VTX(1190, 960, -3044, -5106, -5898, 204, 187, 91, 255),
    VTX(1081, 1080, -3015, -6130, -6922, 166, 187, 204, 255),
    VTX(1641, 1080, -3985, -6130, 7413, 166, 187, 204, 255),
    VTX(1670, 960, -3875, -5106, 6389, 166, 187, 204, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_0016F8[12] = {
    VTX(1641, 1080, -3985, -6130, 7413, 53, 187, 166, 255),
    VTX(2610, 1080, -3425, 8205, 7413, 53, 187, 166, 255),
    VTX(2501, 960, -3395, 7181, 6389, 53, 187, 166, 255),
    VTX(1670, 960, -3875, 7155, 4608, 63, 0, 147, 255),
    VTX(2501, 960, -3395, -5132, 4608, 63, 0, 147, 255),
    VTX(2501, 600, -3395, -5132, 0, 63, 0, 147, 255),
    VTX(2501, 960, -3395, 6389, 2560, 110, 0, 63, 255),
    VTX(2021, 960, -2564, -5898, 2560, 110, 0, 63, 255),
    VTX(2021, 600, -2564, -5898, -2047, 110, 0, 63, 255),
    VTX(2610, 600, -3425, 7413, -2047, 110, 0, 63, 255),
    VTX(2050, 600, -2455, -6922, -2047, 110, 0, 63, 255),
    VTX(2050, 520, -2455, -6922, -3071, 110, 0, 63, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_0017B8[12] = {
    VTX(2021, 960, -2564, -5132, 4608, 194, 0, 110, 255),
    VTX(1190, 960, -3044, 7155, 4608, 194, 0, 110, 255),
    VTX(1190, 600, -3044, 7155, 0, 194, 0, 110, 255),
    VTX(2050, 600, -2455, -6156, 0, 194, 0, 110, 255),
    VTX(1081, 600, -3015, 8179, 0, 194, 0, 110, 255),
    VTX(1081, 520, -3015, 8179, -1023, 194, 0, 110, 255),
    VTX(1190, 960, -3044, -5898, 2560, 147, 0, 194, 255),
    VTX(1670, 960, -3875, 6389, 2560, 147, 0, 194, 255),
    VTX(1670, 600, -3875, 6389, -2047, 147, 0, 194, 255),
    VTX(1081, 600, -3015, -6922, -2047, 147, 0, 194, 255),
    VTX(1641, 600, -3985, 7413, -2047, 147, 0, 194, 255),
    VTX(1641, 520, -3985, 7413, -3071, 147, 0, 194, 255),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x001878[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_room_00Tex_001AD0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_001318[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 9, 0),
    gsSP1Triangle(12, 9, 8, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_001318[10], 9, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_001538[0], 7, 9),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(5, 4, 3, 0),
    gsSP1Triangle(5, 3, 2, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(7, 12, 13, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_001318[18], 4, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_001538[5], 11, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(3, 12, 13, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_001478[0], 4, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_001638[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_0014B8[0], 4, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_0016F8[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_0014F8[0], 4, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_0017B8[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(2, 10, 11, 0),
    gsSP1Triangle(2, 11, 12, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSP1Triangle(3, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 old_sacred_forest_meadow_room_00Tex_001AD0[] = {
#include "assets/scenes/overworld/old_sacred_forest_meadow//old_sacred_forest_meadow_room_00Tex_001AD0.rgb5a1.inc.c"
};

Gfx old_sacred_forest_meadow_room_00Dlist0x0022D0[] = {
    gsSPDisplayList(old_sacred_forest_meadow_room_00Dlist0x0008D8),
    gsSPDisplayList(old_sacred_forest_meadow_room_00Dlist0x001878),
    gsSPEndDisplayList(),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_0022E8[8] = {
    VTX(-2943, 0, 80, 1024, 2048, 255, 126, 245, 255),
    VTX(-2943, 0, -79, 0, 2048, 0, 127, 0, 255),
    VTX(-4416, 0, -79, 0, 0, 0, 127, 0, 255),
    VTX(-4416, 0, 80, 1024, 0, 251, 126, 252, 255),
    VTX(-1471, 0, 7, 1024, 2048, 255, 126, 242, 255),
    VTX(-1471, 0, -152, 0, 2048, 0, 127, 0, 255),
    VTX(-2943, 0, -79, 0, 0, 0, 127, 0, 255),
    VTX(-2943, 0, 80, 1024, 0, 255, 126, 245, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_002368[13] = {
    VTX(-2943, 200, 1700, 991, -11409, 252, 126, 251, 255),
    VTX(-2943, 0, 80, 991, 439, 255, 126, 245, 255),
    VTX(-4416, 0, 80, -9776, 439, 251, 126, 252, 255),
    VTX(-4416, 0, 850, -9776, -5192, 240, 125, 0, 255),
    VTX(-2943, 200, 1700, 991, -11409, 252, 126, 251, 255),
    VTX(-1471, 200, 850, 11760, -5192, 255, 126, 242, 255),
    VTX(-1471, 0, 7, 11760, 439, 255, 126, 242, 255),
    VTX(-1471, 0, -152, 11760, 1609, 0, 127, 0, 255),
    VTX(-1471, 0, -849, 11760, 7241, 250, 126, 12, 255),
    VTX(-2943, 0, -79, 991, 1609, 0, 127, 0, 255),
    VTX(-2943, 0, -1699, 991, 13458, 251, 126, 4, 255),
    VTX(-4416, 0, -79, -9776, 1609, 0, 127, 0, 255),
    VTX(-4416, 0, -849, -9776, 7241, 0, 127, 0, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_002438[8] = {
    VTX(-4416, 480, 0, 0, 1024, 127, 0, 0, 255),
    VTX(-4416, 0, 0, 0, 0, 127, 0, 0, 255),
    VTX(-2943, 0, -1699, 4096, 0, 81, 0, 98, 255),
    VTX(-2943, 480, -1699, 4096, 1024, 81, 0, 98, 255),
    VTX(-2943, 680, 1700, 0, 1024, 81, 0, 159, 255),
    VTX(-2943, 200, 1700, 0, 0, 81, 0, 159, 255),
    VTX(-4416, 0, 0, 4096, 0, 127, 0, 0, 255),
    VTX(-4416, 480, 0, 4096, 1024, 127, 0, 0, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_0024B8[8] = {
    VTX(-2943, 1160, 1700, 0, 1024, 81, 0, 159, 255),
    VTX(-2943, 680, 1700, 0, 0, 81, 0, 159, 255),
    VTX(-4416, 480, 0, 4096, 0, 127, 0, 0, 255),
    VTX(-4416, 960, 0, 4096, 1024, 127, 0, 0, 255),
    VTX(-4416, 960, 0, 0, 1024, 127, 0, 0, 255),
    VTX(-4416, 480, 0, 0, 0, 127, 0, 0, 255),
    VTX(-2943, 480, -1699, 4096, 0, 81, 0, 98, 255),
    VTX(-2943, 960, -1699, 4096, 1024, 81, 0, 98, 255),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x002538[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_room_00Tex_002778, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_0022E8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_002590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_002368[0], 13, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(10, 12, 11, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_001590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_002438[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_000D90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_0024B8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 old_sacred_forest_meadow_room_00Tex_002778[] = {
#include "assets/scenes/overworld/old_sacred_forest_meadow//old_sacred_forest_meadow_room_00Tex_002778.rgb5a1.inc.c"
};

Gfx old_sacred_forest_meadow_room_00Dlist0x002F78[] = {
    gsSPDisplayList(old_sacred_forest_meadow_room_00Dlist0x002538),
    gsSPEndDisplayList(),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_002F88[12] = {
    VTX(125, 120, -827, 1024, 0, 241, 124, 19, 255),
    VTX(491, 320, -1416, 1024, 2048, 245, 124, 23, 255),
    VTX(322, 320, -1513, 0, 2048, 245, 124, 23, 255),
    VTX(-39, 120, -889, 0, 0, 244, 124, 24, 255),
    VTX(-581, 0, -237, 1024, 0, 252, 126, 252, 255),
    VTX(125, 120, -827, 1024, 2048, 241, 124, 19, 255),
    VTX(-39, 120, -889, 0, 2048, 244, 124, 24, 255),
    VTX(-691, 0, -374, 0, 0, 251, 126, 7, 255),
    VTX(-581, 0, -237, 1024, 2048, 252, 126, 252, 255),
    VTX(-691, 0, -374, 0, 2048, 251, 126, 7, 255),
    VTX(-1471, 0, -152, 0, 0, 0, 127, 0, 255),
    VTX(-1471, 0, 7, 1024, 0, 255, 126, 242, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_003048[17] = {
    VTX(-1471, 0, 7, -9743, -52, 255, 126, 242, 255),
    VTX(-1471, 200, 850, -9743, -6216, 255, 126, 242, 255),
    VTX(-581, 0, -237, -3235, 1737, 252, 126, 252, 255),
    VTX(635, 120, 1333, 5669, -9751, 0, 125, 238, 255),
    VTX(1472, 80, 850, 11792, -6216, 243, 126, 254, 255),
    VTX(0, 200, 1700, 1024, -12433, 0, 126, 247, 255),
    VTX(0, 200, 1700, 1024, -12433, 0, 126, 247, 255),
    VTX(635, 120, 1333, 5669, -9751, 0, 125, 238, 255),
    VTX(1472, 320, -849, 11792, 6217, 243, 125, 15, 255),
    VTX(125, 120, -827, 1941, 6059, 241, 124, 19, 255),
    VTX(491, 320, -1416, 4613, 10362, 245, 124, 23, 255),
    VTX(322, 320, -1513, 3380, 11074, 245, 124, 23, 255),
    VTX(0, 320, -1699, 1024, 12434, 244, 124, 20, 255),
    VTX(-39, 120, -889, 731, 6510, 244, 124, 24, 255),
    VTX(-1471, 0, -849, -9743, 6217, 250, 126, 12, 255),
    VTX(-691, 0, -374, -4039, 2743, 251, 126, 7, 255),
    VTX(-1471, 0, -152, -9743, 1117, 0, 127, 0, 255),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x003158[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_room_00Tex_0032D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_002F88[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_002590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_003048[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(1, 5, 2, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(4, 8, 2, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(8, 10, 9, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_003048[12], 5, 0),
    gsSP1Triangle(0, 2, 1, 0),
    gsSP1Triangle(2, 3, 1, 0),
    gsSP1Triangle(2, 4, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 old_sacred_forest_meadow_room_00Tex_0032D8[] = {
#include "assets/scenes/overworld/old_sacred_forest_meadow//old_sacred_forest_meadow_room_00Tex_0032D8.rgb5a1.inc.c"
};

Gfx old_sacred_forest_meadow_room_00Dlist0x003AD8[] = {
    gsSPDisplayList(old_sacred_forest_meadow_room_00Dlist0x003158),
    gsSPEndDisplayList(),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_003AE8[8] = {
    VTX(2944, 520, -1699, 1057, 13458, 0, 126, 5, 255),
    VTX(1472, 320, -849, -9711, 7241, 243, 125, 15, 255),
    VTX(2944, 440, 0, 1057, 1024, 251, 126, 3, 255),
    VTX(1472, 80, 850, -9711, -5192, 243, 126, 254, 255),
    VTX(2944, 400, 1700, 1057, -11409, 236, 124, 245, 255),
    VTX(2944, 400, 1700, 1057, -11409, 236, 124, 245, 255),
    VTX(4417, 440, 850, 11825, -5192, 3, 126, 251, 255),
    VTX(4417, 240, -849, 11825, 7241, 14, 126, 253, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_003B68[8] = {
    VTX(2944, 920, 0, 0, 1024, 130, 0, 0, 255),
    VTX(2944, 440, 0, 0, 0, 130, 0, 0, 255),
    VTX(2944, 400, 1700, 4096, 0, 132, 0, 236, 255),
    VTX(2944, 880, 1700, 4096, 1024, 132, 0, 236, 255),
    VTX(2944, 1000, -1699, 0, 1024, 132, 0, 21, 255),
    VTX(2944, 520, -1699, 0, 0, 132, 0, 21, 255),
    VTX(2944, 440, 0, 4096, 0, 130, 0, 0, 255),
    VTX(2944, 920, 0, 4096, 1024, 130, 0, 0, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_003BE8[8] = {
    VTX(2944, 1480, -1699, 0, 1024, 132, 0, 21, 255),
    VTX(2944, 1000, -1699, 0, 0, 132, 0, 21, 255),
    VTX(2944, 920, 0, 4096, 0, 130, 0, 0, 255),
    VTX(2944, 1400, 0, 4096, 1024, 130, 0, 0, 255),
    VTX(2944, 1400, 0, 0, 1024, 130, 0, 0, 255),
    VTX(2944, 920, 0, 0, 0, 130, 0, 0, 255),
    VTX(2944, 880, 1700, 4096, 0, 132, 0, 236, 255),
    VTX(2944, 1360, 1700, 4096, 1024, 132, 0, 236, 255),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x003C68[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_002590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_003AE8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_001590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_003B68[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_000D90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_003BE8[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x003E20[] = {
    gsSPDisplayList(old_sacred_forest_meadow_room_00Dlist0x003C68),
    gsSPEndDisplayList(),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_003E30[8] = {
    VTX(-1471, 200, 850, 496, 13239, 255, 126, 242, 255),
    VTX(-2943, 200, 1700, -10272, 7022, 252, 126, 251, 255),
    VTX(-1471, 200, 2550, 496, 805, 0, 127, 0, 255),
    VTX(-2943, 200, 3400, -10272, -5412, 0, 127, 0, 255),
    VTX(-1471, 200, 4250, 496, -11629, 0, 127, 0, 255),
    VTX(-1471, 200, 4250, 496, -11629, 0, 127, 0, 255),
    VTX(0, 200, 3400, 11264, -5412, 244, 126, 8, 255),
    VTX(0, 200, 1700, 11264, 7022, 0, 126, 247, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_003EB0[8] = {
    VTX(0, 680, 3400, 0, 1024, 44, 0, 138, 255),
    VTX(0, 200, 3400, 0, 0, 44, 0, 138, 255),
    VTX(-1471, 200, 2550, 4096, 0, 63, 0, 147, 255),
    VTX(-1471, 680, 2550, 4096, 1024, 63, 0, 147, 255),
    VTX(-1471, 680, 2550, 0, 1024, 63, 0, 147, 255),
    VTX(-1471, 200, 2550, 0, 0, 63, 0, 147, 255),
    VTX(-2943, 200, 1700, 4096, 0, 81, 0, 159, 255),
    VTX(-2943, 680, 1700, 4096, 1024, 81, 0, 159, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_003F30[8] = {
    VTX(-1471, 1160, 2550, 0, 1024, 63, 0, 147, 255),
    VTX(-1471, 680, 2550, 0, 0, 63, 0, 147, 255),
    VTX(-2943, 680, 1700, 4096, 0, 81, 0, 159, 255),
    VTX(-2943, 1160, 1700, 4096, 1024, 81, 0, 159, 255),
    VTX(0, 1160, 3400, 0, 1024, 44, 0, 138, 255),
    VTX(0, 680, 3400, 0, 0, 44, 0, 138, 255),
    VTX(-1471, 680, 2550, 4096, 0, 63, 0, 147, 255),
    VTX(-1471, 1160, 2550, 4096, 1024, 63, 0, 147, 255),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x003FB0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_002590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_003E30[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 0, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_001590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_003EB0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_000D90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_003F30[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x004168[] = {
    gsSPDisplayList(old_sacred_forest_meadow_room_00Dlist0x003FB0),
    gsSPEndDisplayList(),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_004178[9] = {
    VTX(0, 200, 1700, -10239, 7022, 0, 126, 247, 255),
    VTX(0, 200, 3400, -10239, -5412, 244, 126, 8, 255),
    VTX(1542, 400, 2510, 1035, 1097, 246, 125, 241, 255),
    VTX(2944, 400, 1700, 11297, 7022, 236, 124, 245, 255),
    VTX(1472, 80, 850, 528, 13239, 243, 126, 254, 255),
    VTX(635, 120, 1333, -5594, 9704, 0, 125, 238, 255),
    VTX(2278, 600, 3785, 6419, -8228, 229, 123, 0, 255),
    VTX(1472, 200, 4250, 528, -11629, 229, 113, 49, 255),
    VTX(2944, 800, 3400, 11297, -5412, 208, 113, 230, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_004208[8] = {
    VTX(2208, 1030, 3825, 0, 1024, 194, 0, 147, 255),
    VTX(2208, 550, 3825, 0, 0, 194, 0, 147, 255),
    VTX(0, 200, 3400, 4096, 0, 44, 0, 138, 255),
    VTX(0, 680, 3400, 4096, 1024, 44, 0, 138, 255),
    VTX(2944, 880, 1700, 0, 1024, 132, 0, 236, 255),
    VTX(2944, 400, 1700, 0, 0, 132, 0, 236, 255),
    VTX(2208, 550, 3825, 4096, 0, 194, 0, 147, 255),
    VTX(2208, 1030, 3825, 4096, 1024, 194, 0, 147, 255),
}; 

static Vtx old_sacred_forest_meadow_room_00Vtx_004288[8] = {
    VTX(2208, 1510, 3825, 0, 1024, 194, 0, 147, 255),
    VTX(2208, 1030, 3825, 0, 0, 194, 0, 147, 255),
    VTX(0, 680, 3400, 4096, 0, 44, 0, 138, 255),
    VTX(0, 1160, 3400, 4096, 1024, 44, 0, 138, 255),
    VTX(2944, 1360, 1700, 0, 1024, 132, 0, 236, 255),
    VTX(2944, 880, 1700, 0, 0, 132, 0, 236, 255),
    VTX(2208, 1030, 3825, 4096, 0, 194, 0, 147, 255),
    VTX(2208, 1510, 3825, 4096, 1024, 194, 0, 147, 255),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x004308[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_002590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_004178[0], 9, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(4, 5, 2, 0),
    gsSP1Triangle(5, 0, 2, 0),
    gsSP1Triangle(2, 1, 6, 0),
    gsSP1Triangle(3, 2, 6, 0),
    gsSP1Triangle(1, 7, 6, 0),
    gsSP1Triangle(8, 3, 6, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_001590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 2, 6, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_004208[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(old_sacred_forest_meadow_sceneTex_000D90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPVertex(&old_sacred_forest_meadow_room_00Vtx_004288[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx old_sacred_forest_meadow_room_00Dlist0x0044D0[] = {
    gsSPDisplayList(old_sacred_forest_meadow_room_00Dlist0x004308),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0044E0[64] = {
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x06, 0x78, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x22, 0xD0, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x2F, 0x78, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3A, 0xD8, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x3E, 0x20, 0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x41, 0x68, 
    0x06, 0x00, 0x00, 0x00, 0x03, 0x00, 0x44, 0xD0, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    
}; 


