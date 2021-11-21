#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "water_temple_room_00.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "water_temple_scene.h"


static SCmdEchoSettings water_temple_room_00Set0000Cmd00;
static SCmdRoomBehavior water_temple_room_00Set0000Cmd01;
static SCmdSkyboxDisables water_temple_room_00Set0000Cmd02;
static SCmdTimeSettings water_temple_room_00Set0000Cmd03;
static SCmdWindSettings water_temple_room_00Set0000Cmd04;
static SCmdMesh water_temple_room_00Set0000Cmd05;
static SCmdObjectList water_temple_room_00Set0000Cmd06;
static SCmdActorList water_temple_room_00Set0000Cmd07;
static SCmdEndMarker water_temple_room_00Set0000Cmd08;
static s32 terminatorMaybe;
static Vtx water_temple_room_00Vtx_000080[14];
static Vtx water_temple_room_00Vtx_000160[4];
static Vtx water_temple_room_00Vtx_0001A0[8];
static Vtx water_temple_room_00Vtx_001340[10];
static Vtx water_temple_room_00Vtx_0013E0[8];
static Vtx water_temple_room_00Vtx_001460[8];
static Vtx water_temple_room_00Vtx_0014E0[8];
static Vtx water_temple_room_00Vtx_0036D0[4];
static Vtx water_temple_room_00Vtx_003710[8];
static Vtx water_temple_room_00Vtx_003790[4];
static Vtx water_temple_room_00Vtx_0037D0[12];
static Vtx water_temple_room_00Vtx_003890[32];
static Vtx water_temple_room_00Vtx_003A90[14];
static Vtx water_temple_room_00Vtx_003B70[32];
static Vtx water_temple_room_00Vtx_003D70[88];
static Vtx water_temple_room_00Vtx_0042F0[8];
static Vtx water_temple_room_00Vtx_004370[4];
static Vtx water_temple_room_00Vtx_0043B0[4];
static Vtx water_temple_room_00Vtx_0043F0[20];
static Vtx water_temple_room_00Vtx_004530[8];
static Vtx water_temple_room_00Vtx_00AAF0[8];
static Vtx water_temple_room_00Vtx_00AB70[8];
static Vtx water_temple_room_00Vtx_00ABF0[8];
static Vtx water_temple_room_00Vtx_00C580[4];
static Vtx water_temple_room_00Vtx_00C5C0[8];
static Vtx water_temple_room_00Vtx_00C640[12];
static Vtx water_temple_room_00Vtx_00C700[28];
static Vtx water_temple_room_00Vtx_00C8C0[32];
static Vtx water_temple_room_00Vtx_00CAC0[12];
static Vtx water_temple_room_00Vtx_00CB80[12];
static Vtx water_temple_room_00Vtx_00CC40[8];
static Vtx water_temple_room_00Vtx_00CCC0[16];
static Vtx water_temple_room_00Vtx_00CDC0[8];
static Vtx water_temple_room_00Vtx_0111C0[8];
static Vtx water_temple_room_00Vtx_011240[4];
static Vtx water_temple_room_00Vtx_011280[12];
static Vtx water_temple_room_00Vtx_011340[28];
static Vtx water_temple_room_00Vtx_011500[46];
static Vtx water_temple_room_00Vtx_0117E0[8];
static Vtx water_temple_room_00Vtx_011860[8];
static Vtx water_temple_room_00Vtx_0118E0[16];
static Vtx water_temple_room_00Vtx_0119E0[8];
static Vtx water_temple_room_00Vtx_015DE8[8];
static Vtx water_temple_room_00Vtx_015E68[32];
static Vtx water_temple_room_00Vtx_016068[16];
static Vtx water_temple_room_00Vtx_016168[8];
static Vtx water_temple_room_00Vtx_0161E8[58];
static Vtx water_temple_room_00Vtx_016588[12];
static Vtx water_temple_room_00Vtx_016648[4];
static Vtx water_temple_room_00Vtx_016688[46];
static Vtx water_temple_room_00Vtx_016968[32];
static Vtx water_temple_room_00Vtx_016B68[8];
static Vtx water_temple_room_00Vtx_016BE8[32];
static Vtx water_temple_room_00Vtx_016DE8[70];
static Vtx water_temple_room_00Vtx_017248[12];
static Vtx water_temple_room_00Vtx_017308[28];
static Vtx water_temple_room_00Vtx_0174C8[24];
static Vtx water_temple_room_00Vtx_017648[8];
static Vtx water_temple_room_00Vtx_0176C8[23];
static Vtx water_temple_room_00Vtx_017838[8];
static Vtx water_temple_room_00Vtx_0208F8[4];
static Vtx water_temple_room_00Vtx_020938[8];
static Vtx water_temple_room_00Vtx_0209B8[12];
static Vtx water_temple_room_00Vtx_020A78[28];
static Vtx water_temple_room_00Vtx_020C38[32];
static Vtx water_temple_room_00Vtx_020E38[12];
static Vtx water_temple_room_00Vtx_020EF8[8];
static Vtx water_temple_room_00Vtx_020F78[4];
static Vtx water_temple_room_00Vtx_020FB8[16];
static Vtx water_temple_room_00Vtx_0210B8[8];
static Vtx water_temple_room_00Vtx_0254A8[4];
static Vtx water_temple_room_00Vtx_0254E8[32];
static Vtx water_temple_room_00Vtx_0256E8[4];
static Vtx water_temple_room_00Vtx_025728[22];
static Vtx water_temple_room_00Vtx_025888[32];
static Vtx water_temple_room_00Vtx_025A88[8];
static Vtx water_temple_room_00Vtx_025B08[16];
static Vtx water_temple_room_00Vtx_025C08[4];
static Vtx water_temple_room_00Vtx_025C48[32];
static Vtx water_temple_room_00Vtx_025E48[8];
static Vtx water_temple_room_00Vtx_02BAC0[19];
static Vtx water_temple_room_00Vtx_02BBF0[12];
static Vtx water_temple_room_00Vtx_02BCB0[4];
static Vtx water_temple_room_00Vtx_02BCF0[8];
static Vtx water_temple_room_00Vtx_02BD70[10];
static Vtx water_temple_room_00Vtx_02BE10[16];
static Vtx water_temple_room_00Vtx_02BF10[8];
static Vtx water_temple_room_00Vtx_030A58[4];
static Vtx water_temple_room_00Vtx_030A98[4];
static Vtx water_temple_room_00Vtx_030AD8[17];
static Vtx water_temple_room_00Vtx_030BE8[22];
static Vtx water_temple_room_00Vtx_030D48[16];
static Vtx water_temple_room_00Vtx_030E48[8];
static Vtx water_temple_room_00Vtx_030EC8[16];
static Vtx water_temple_room_00Vtx_030FC8[9];
static Vtx water_temple_room_00Vtx_031058[32];
static Vtx water_temple_room_00Vtx_031258[8];
static Vtx water_temple_room_00Vtx_0376F8[32];
static Vtx water_temple_room_00Vtx_0378F8[38];
static Vtx water_temple_room_00Vtx_037B58[17];
static Vtx water_temple_room_00Vtx_037C68[8];
static Vtx water_temple_room_00Vtx_038EC8[4];
static Vtx water_temple_room_00Vtx_038F08[4];
static Vtx water_temple_room_00Vtx_038F48[16];
static Vtx water_temple_room_00Vtx_039048[16];
static Vtx water_temple_room_00Vtx_039148[8];
static Vtx water_temple_room_00Vtx_03BB98[32];
static Vtx water_temple_room_00Vtx_03BD98[16];
static Vtx water_temple_room_00Vtx_03BE98[32];
static Vtx water_temple_room_00Vtx_03C098[4];
static Vtx water_temple_room_00Vtx_03C0D8[32];
static Vtx water_temple_room_00Vtx_03C2D8[11];
static Vtx water_temple_room_00Vtx_03C388[32];
static Vtx water_temple_room_00Vtx_03C588[32];
static Vtx water_temple_room_00Vtx_03C788[32];
static Vtx water_temple_room_00Vtx_03C988[20];
static Vtx water_temple_room_00Vtx_03CAC8[8];
static Vtx water_temple_room_00Vtx_03E6E0[24];
static Vtx water_temple_room_00Vtx_03E860[8];
static Vtx water_temple_room_00Vtx_03E8E0[48];
static Vtx water_temple_room_00Vtx_03EBE0[48];
static Vtx water_temple_room_00Vtx_03EEE0[16];
static Vtx water_temple_room_00Vtx_03EFE0[12];
static Vtx water_temple_room_00Vtx_03F0A0[8];

static SCmdEchoSettings water_temple_room_00Set0000Cmd00 = {  0x16, 0, { 0 }, 0x01 }; // 0x0000

static SCmdRoomBehavior water_temple_room_00Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables water_temple_room_00Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x01 }; // 0x0010

static SCmdTimeSettings water_temple_room_00Set0000Cmd03 = {  0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // 0x0018

static SCmdWindSettings water_temple_room_00Set0000Cmd04 = {  0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 }; // 0x0020

static SCmdMesh water_temple_room_00Set0000Cmd05 = {  0x0A, 0, (u32)&water_temple_room_00MeshHeader0x000060 }; // 0x0028

static SCmdObjectList water_temple_room_00Set0000Cmd06 = {  0x0B, 0x01, (u32)water_temple_room_00ObjectList0x000048 }; // 0x0030

static SCmdActorList water_temple_room_00Set0000Cmd07 = {  0x01, 0x01, (u32)water_temple_room_00ActorList0x00004C }; // 0x0038 }; 

static SCmdEndMarker water_temple_room_00Set0000Cmd08 = {  0x14, 0x00, 0x00 }; // 0x0040

s16 water_temple_room_00ObjectList0x000048[1] = {
	OBJECT_BOX,
}; 

ActorEntry water_temple_room_00ActorList0x00004C[1] = {
	{ ACTOR_DUNGEON_KEEP, 1300, 970, -720, 0, 0, 0, 0x0019 }, //0x00004C
}; 

static u32 pad5C = 0;

MeshHeader0 water_temple_room_00MeshHeader0x000060 = { { 0 }, 0x01, (u32)&water_temple_room_00MeshDListEntry0x00006C, (u32)&(water_temple_room_00MeshDListEntry0x00006C) + sizeof(water_temple_room_00MeshDListEntry0x00006C) }; 

MeshEntry0 water_temple_room_00MeshDListEntry0x00006C[1] = {
	{ (u32)water_temple_room_00Dlist0x041508, 0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad78 = 0;
static u32 pad7C = 0;

static Vtx water_temple_room_00Vtx_000080[14] = {
    VTX(-590, 0, 1500, 2330, 6374, 53, 53, 53, 255),
    VTX(610, 0, 1500, 5402, 3302, 53, 53, 53, 255),
    VTX(280, 0, 300, 1485, 1075, 255, 248, 195, 255),
    VTX(280, 0, 180, 1178, 768, 255, 248, 195, 255),
    VTX(-590, 0, 180, -1050, 2995, 135, 135, 135, 255),
    VTX(1240, 0, 300, 3942, -1382, 255, 248, 195, 255),
    VTX(1840, 0, 1500, 8550, 154, 53, 53, 53, 255),
    VTX(1840, 0, 180, 5171, -3226, 53, 53, 53, 255),
    VTX(1240, 0, 180, 3635, -1690, 255, 248, 195, 255),
    VTX(910, 0, 1500, 6170, 2534, 53, 53, 53, 255),
    VTX(840, 0, 1500, 5990, 2714, 53, 53, 53, 255),
    VTX(840, 0, 300, 2918, -358, 255, 248, 195, 255),
    VTX(680, 0, 1500, 5581, 3123, 53, 53, 53, 255),
    VTX(680, 0, 300, 2509, 51, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_000160[4] = {
    VTX(680, 0, 1500, -1024, 16896, 53, 53, 53, 255),
    VTX(840, 0, 1500, 1024, 16896, 53, 53, 53, 255),
    VTX(840, 0, 300, 1024, 1536, 255, 248, 195, 255),
    VTX(680, 0, 300, -1024, 1536, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_0001A0[8] = {
    VTX(-590, 0, 180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, 180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 0, 180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, 180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 0, 1500, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, 1500, 0, 0, 0, 0, 0, 0),
    VTX(-590, 0, 1500, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, 1500, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x000220[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_0001A0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_000340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_000080[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 5, 9, 6, 0),
    gsSP2Triangles(10, 9, 5, 0, 10, 5, 11, 0),
    gsSP2Triangles(1, 12, 13, 0, 1, 13, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_000B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_000160[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_000340[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_000340.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_000B40[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_000B40.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_001340[10] = {
    VTX(1840, 0, -1180, 1690, -6707, 53, 53, 53, 255),
    VTX(1240, 0, -1180, 154, -5171, 53, 53, 53, 255),
    VTX(1240, 0, -540, 1792, -3533, 255, 248, 195, 255),
    VTX(1840, 0, -540, 3328, -5069, 53, 53, 53, 255),
    VTX(280, 0, -1180, -2304, -2714, 53, 53, 53, 255),
    VTX(280, 0, -660, -973, -1382, 255, 248, 195, 255),
    VTX(1240, 0, -660, 1485, -3840, 255, 248, 195, 255),
    VTX(-590, 0, -1180, -4531, -486, 76, 76, 76, 255),
    VTX(-590, 0, -540, -2893, 1151, 255, 248, 195, 255),
    VTX(280, 0, -540, -666, -1075, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_0013E0[8] = {
    VTX(1240, 340, -540, 0, -1024, 76, 76, 76, 255),
    VTX(1840, 340, -540, 8192, -1024, 76, 76, 76, 255),
    VTX(1840, 100, -540, 8192, 1024, 255, 248, 195, 255),
    VTX(1240, 100, -540, 0, 1024, 255, 248, 195, 255),
    VTX(280, 100, -540, 8192, 1024, 255, 248, 195, 255),
    VTX(-590, 340, -540, 0, -1024, 76, 76, 76, 255),
    VTX(280, 340, -540, 8192, -1024, 76, 76, 76, 255),
    VTX(-590, 100, -540, 0, 1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_001460[8] = {
    VTX(280, 100, -540, 0, 0, 255, 255, 255, 255),
    VTX(280, 0, -540, 0, 1024, 255, 248, 195, 255),
    VTX(-590, 0, -540, 5889, 1024, 255, 248, 195, 255),
    VTX(-590, 100, -540, 5889, 0, 255, 255, 255, 255),
    VTX(1840, 100, -540, 7987, 0, 255, 255, 255, 255),
    VTX(1840, 0, -540, 7987, 1024, 44, 44, 44, 255),
    VTX(1240, 0, -540, 0, 1024, 255, 248, 195, 255),
    VTX(1240, 100, -540, 0, 0, 255, 255, 255, 255),
}; 

static Vtx water_temple_room_00Vtx_0014E0[8] = {
    VTX(-590, 0, -1180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, -1180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 340, -1180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 340, -1180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 0, -540, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, -540, 0, 0, 0, 0, 0, 0),
    VTX(-590, 340, -540, 0, 0, 0, 0, 0, 0),
    VTX(1840, 340, -540, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x001560[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_0014E0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0016D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_001340[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 1, 0),
    gsSP2Triangles(7, 8, 9, 0, 7, 9, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_001ED0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0013E0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0026D0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_001460[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_0016D0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0016D0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_001ED0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_001ED0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0026D0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0026D0.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_0036D0[4] = {
    VTX(730, 1610, 150, 0, -1024, 44, 44, 44, 255),
    VTX(730, 1610, 130, 0, 1024, 44, 44, 44, 255),
    VTX(790, 1610, 130, 2048, 1024, 44, 44, 44, 255),
    VTX(790, 1610, 150, 2048, -1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_003710[8] = {
    VTX(1092, 1720, 152, -546, 512, 179, 179, 254, 255),
    VTX(1092, 1780, 152, -546, 0, 179, 179, 254, 255),
    VTX(428, 1780, 152, 5120, 0, 179, 179, 254, 255),
    VTX(428, 1720, 152, 5120, 512, 179, 179, 254, 255),
    VTX(1152, 1120, 212, -802, 512, 179, 179, 254, 255),
    VTX(1152, 1180, 212, -802, 0, 179, 179, 254, 255),
    VTX(368, 1180, 212, 5888, 0, 179, 179, 254, 255),
    VTX(368, 1120, 212, 5888, 512, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_003790[4] = {
    VTX(278, 580, 302, -546, 0, 179, 179, 254, 255),
    VTX(278, 520, 302, -546, 512, 179, 179, 254, 255),
    VTX(1242, 520, 302, 7680, 512, 179, 179, 254, 255),
    VTX(1242, 580, 302, 7680, 0, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_0037D0[12] = {
    VTX(700, 2410, 90, 2048, -3072, 44, 44, 44, 255),
    VTX(550, 2410, 90, 0, -3072, 44, 44, 44, 255),
    VTX(550, 2230, 90, 0, -1024, 179, 179, 254, 255),
    VTX(700, 2230, 90, 2048, -1024, 179, 179, 254, 255),
    VTX(970, 2410, 90, 2048, -3072, 44, 44, 44, 255),
    VTX(820, 2410, 90, 0, -3072, 44, 44, 44, 255),
    VTX(820, 2230, 90, 0, -1024, 179, 179, 254, 255),
    VTX(970, 2230, 90, 2048, -1024, 179, 179, 254, 255),
    VTX(400, 580, 300, 0, 1024, 179, 179, 254, 255),
    VTX(1120, 580, 300, 6144, 1024, 179, 179, 254, 255),
    VTX(1120, 850, 300, 6144, -1024, 44, 44, 44, 255),
    VTX(400, 850, 300, 0, -1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_003890[32] = {
    VTX(790, 2410, 90, 2048, -2050, 44, 44, 44, 255),
    VTX(730, 2410, 90, 0, -2050, 44, 44, 44, 255),
    VTX(730, 2150, 90, 0, 2048, 255, 248, 195, 255),
    VTX(790, 2150, 90, 2048, 2048, 255, 248, 195, 255),
    VTX(730, 2410, 90, 341, -6144, 44, 44, 44, 255),
    VTX(700, 2410, 90, 0, -6144, 44, 44, 44, 255),
    VTX(700, 2050, 90, 0, 2048, 255, 248, 195, 255),
    VTX(730, 2050, 90, 341, 2048, 255, 248, 195, 255),
    VTX(790, 1610, 150, 2009, 2048, 255, 248, 195, 255),
    VTX(790, 1870, 150, 2009, -2055, 44, 44, 44, 255),
    VTX(730, 1870, 150, 0, -2055, 44, 44, 44, 255),
    VTX(730, 1610, 150, 0, 2048, 255, 248, 195, 255),
    VTX(810, 249, 300, 1451, 773, 255, 248, 195, 255),
    VTX(810, 100, 300, 1451, 2048, 255, 248, 195, 255),
    VTX(880, 100, 300, 2048, 2048, 255, 248, 195, 255),
    VTX(880, 580, 300, 2048, -2048, 25, 25, 25, 255),
    VTX(790, 1510, 150, 341, 2048, 255, 248, 195, 255),
    VTX(820, 1510, 150, 0, 2048, 255, 248, 195, 255),
    VTX(820, 1870, 150, 0, -6144, 44, 44, 44, 255),
    VTX(790, 1870, 150, 341, -6144, 44, 44, 44, 255),
    VTX(700, 1510, 150, 0, 2048, 255, 248, 195, 255),
    VTX(730, 1510, 150, 341, 2048, 255, 248, 195, 255),
    VTX(730, 1870, 150, 341, -6144, 44, 44, 44, 255),
    VTX(700, 1870, 150, 0, -6144, 44, 44, 44, 255),
    VTX(700, 970, 210, 0, 2048, 255, 248, 195, 255),
    VTX(730, 970, 210, 341, 2048, 255, 248, 195, 255),
    VTX(730, 1330, 210, 341, -6144, 44, 44, 44, 255),
    VTX(700, 1330, 210, 0, -6144, 44, 44, 44, 255),
    VTX(790, 970, 210, 341, 2048, 255, 248, 195, 255),
    VTX(820, 970, 210, 0, 2048, 255, 248, 195, 255),
    VTX(820, 1330, 210, 0, -6144, 44, 44, 44, 255),
    VTX(790, 1330, 210, 341, -6144, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_003A90[14] = {
    VTX(790, 1070, 210, 2009, 2048, 255, 248, 195, 255),
    VTX(790, 1330, 210, 2009, -2055, 44, 44, 44, 255),
    VTX(730, 1330, 210, 0, -2055, 44, 44, 44, 255),
    VTX(730, 1070, 210, 0, 2048, 255, 248, 195, 255),
    VTX(710, 249, 300, 597, 773, 255, 248, 195, 255),
    VTX(810, 249, 300, 1451, 773, 255, 248, 195, 255),
    VTX(880, 580, 300, 2048, -2048, 25, 25, 25, 255),
    VTX(640, 580, 300, 0, -2048, 25, 25, 25, 255),
    VTX(640, 100, 300, 0, 2048, 255, 248, 195, 255),
    VTX(710, 100, 300, 597, 2048, 255, 248, 195, 255),
    VTX(820, 2410, 90, 0, -6144, 44, 44, 44, 255),
    VTX(790, 2410, 90, 341, -6144, 44, 44, 44, 255),
    VTX(790, 2050, 90, 341, 2048, 255, 248, 195, 255),
    VTX(820, 2050, 90, 0, 2048, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_003B70[32] = {
    VTX(820, 970, 210, 0, 2048, 255, 248, 195, 255),
    VTX(1060, 970, 210, 2048, 2048, 255, 248, 195, 255),
    VTX(1060, 1330, 210, 2048, -2048, 44, 44, 44, 255),
    VTX(820, 1330, 210, 0, -2048, 44, 44, 44, 255),
    VTX(640, 580, 300, 2048, -2048, 25, 25, 25, 255),
    VTX(400, 580, 300, 0, -2048, 25, 25, 25, 255),
    VTX(400, 100, 300, 0, 2048, 255, 248, 195, 255),
    VTX(640, 100, 300, 2048, 2048, 255, 248, 195, 255),
    VTX(550, 2230, 90, 0, -2048, 53, 53, 53, 255),
    VTX(550, 2050, 90, 0, 2048, 255, 248, 195, 255),
    VTX(700, 2050, 90, 2048, 2048, 255, 248, 195, 255),
    VTX(700, 2230, 90, 2048, -2048, 53, 53, 53, 255),
    VTX(700, 1330, 210, 2048, -2048, 44, 44, 44, 255),
    VTX(460, 1330, 210, 0, -2048, 44, 44, 44, 255),
    VTX(460, 970, 210, 0, 2048, 255, 248, 195, 255),
    VTX(700, 970, 210, 2048, 2048, 255, 248, 195, 255),
    VTX(1120, 580, 300, 0, -2048, 25, 25, 25, 255),
    VTX(880, 580, 300, 2048, -2048, 25, 25, 25, 255),
    VTX(880, 100, 300, 2048, 2048, 255, 248, 195, 255),
    VTX(1120, 100, 300, 0, 2048, 255, 248, 195, 255),
    VTX(820, 2230, 90, 0, -2048, 53, 53, 53, 255),
    VTX(820, 2050, 90, 0, 2048, 255, 248, 195, 255),
    VTX(970, 2050, 90, 2048, 2048, 255, 248, 195, 255),
    VTX(970, 2230, 90, 2048, -2048, 53, 53, 53, 255),
    VTX(1030, 1870, 150, 2048, -2048, 44, 44, 44, 255),
    VTX(820, 1870, 150, 0, -2048, 44, 44, 44, 255),
    VTX(820, 1510, 150, 0, 2048, 255, 248, 195, 255),
    VTX(1030, 1510, 150, 2048, 2048, 255, 248, 195, 255),
    VTX(700, 1870, 150, 2048, -2048, 44, 44, 44, 255),
    VTX(490, 1870, 150, 0, -2048, 44, 44, 44, 255),
    VTX(490, 1510, 150, 0, 2048, 255, 248, 195, 255),
    VTX(700, 1510, 150, 2048, 2048, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_003D70[88] = {
    VTX(730, 1510, 150, 0, 1024, 255, 248, 195, 255),
    VTX(730, 1510, 130, 1024, 1024, 44, 44, 44, 255),
    VTX(730, 1610, 130, 1024, -4096, 44, 44, 44, 255),
    VTX(400, 850, 300, 1024, -9135, 44, 44, 44, 255),
    VTX(280, 850, 300, 0, -9135, 44, 44, 44, 255),
    VTX(280, 100, 300, 0, 1024, 255, 248, 195, 255),
    VTX(400, 100, 300, 1024, 1024, 255, 248, 195, 255),
    VTX(710, 100, 300, 1024, 1024, 255, 248, 195, 255),
    VTX(730, 100, 260, 0, 1024, 44, 44, 44, 255),
    VTX(730, 200, 260, 0, -1522, 44, 44, 44, 255),
    VTX(1240, 850, 300, 0, -9135, 44, 44, 44, 255),
    VTX(1120, 850, 300, 1024, -9135, 44, 44, 44, 255),
    VTX(1120, 100, 300, 1024, 1024, 255, 248, 195, 255),
    VTX(1240, 100, 300, 0, 1024, 255, 248, 195, 255),
    VTX(1030, 2050, 90, 0, 1024, 255, 248, 195, 255),
    VTX(1030, 2410, 90, 0, -5120, 44, 44, 44, 255),
    VTX(970, 2410, 90, 1024, -5120, 44, 44, 44, 255),
    VTX(970, 2050, 90, 1024, 1024, 255, 248, 195, 255),
    VTX(490, 1870, 150, -9216, -5120, 44, 44, 44, 255),
    VTX(430, 1870, 150, -10240, -5120, 44, 44, 44, 255),
    VTX(490, 1510, 150, -9216, 1024, 255, 248, 195, 255),
    VTX(430, 1510, 150, -10240, 1024, 135, 135, 135, 255),
    VTX(370, 1330, 210, 0, -5011, 44, 44, 44, 255),
    VTX(460, 970, 210, 1024, 1024, 255, 248, 195, 255),
    VTX(460, 1330, 210, 1024, -5011, 44, 44, 44, 255),
    VTX(370, 970, 210, 0, 1024, 135, 135, 135, 255),
    VTX(810, 100, 300, 2048, 1024, 255, 248, 195, 255),
    VTX(790, 100, 260, 1638, -1024, 44, 44, 44, 255),
    VTX(730, 100, 260, 410, -1024, 44, 44, 44, 255),
    VTX(710, 100, 300, 0, 1024, 255, 248, 195, 255),
    VTX(810, 249, 300, 1024, -2802, 255, 248, 195, 255),
    VTX(790, 200, 260, 0, -1522, 44, 44, 44, 255),
    VTX(810, 100, 300, 1024, 1024, 255, 248, 195, 255),
    VTX(790, 100, 260, 0, 1024, 44, 44, 44, 255),
    VTX(710, 100, 300, 1024, 1024, 255, 248, 195, 255),
    VTX(730, 200, 260, 0, -1522, 44, 44, 44, 255),
    VTX(710, 249, 300, 1024, -2802, 255, 248, 195, 255),
    VTX(550, 2410, 90, 1024, -5120, 44, 44, 44, 255),
    VTX(490, 2410, 90, 0, -5120, 44, 44, 44, 255),
    VTX(490, 2050, 90, 0, 1024, 255, 248, 195, 255),
    VTX(550, 2050, 90, 1024, 1024, 255, 248, 195, 255),
    VTX(1060, 970, 210, 0, 1024, 255, 248, 195, 255),
    VTX(1150, 970, 210, 1024, 1024, 255, 248, 195, 255),
    VTX(1150, 1330, 210, 1024, -5000, 44, 44, 44, 255),
    VTX(1060, 1330, 210, 0, -5000, 44, 44, 44, 255),
    VTX(1090, 1870, 150, 0, -5120, 44, 44, 44, 255),
    VTX(1030, 1870, 150, 1024, -5120, 44, 44, 44, 255),
    VTX(1030, 1510, 150, 1024, 1024, 255, 248, 195, 255),
    VTX(1090, 1510, 150, 0, 1024, 255, 248, 195, 255),
    VTX(790, 970, 190, 2560, 512, 0, 0, 0, 255),
    VTX(790, 1070, 210, -2560, 1024, 255, 248, 195, 255),
    VTX(790, 1070, 190, -2560, 512, 0, 0, 0, 255),
    VTX(790, 970, 210, 2560, 1024, 255, 248, 195, 255),
    VTX(730, 1070, 210, -2560, 1024, 255, 248, 195, 255),
    VTX(730, 970, 210, 2560, 1024, 255, 248, 195, 255),
    VTX(730, 970, 190, 2560, 512, 0, 0, 0, 255),
    VTX(730, 970, 190, -1024, 1024, 0, 0, 0, 255),
    VTX(730, 970, 210, -1024, 512, 255, 248, 195, 255),
    VTX(790, 970, 210, 2048, 512, 255, 248, 195, 255),
    VTX(790, 970, 190, 2048, 1024, 0, 0, 0, 255),
    VTX(730, 1070, 190, -2560, 512, 0, 0, 0, 255),
    VTX(790, 1070, 190, 2048, 1024, 0, 0, 0, 255),
    VTX(790, 1070, 210, 2048, 512, 255, 248, 195, 255),
    VTX(730, 1070, 210, -1024, 512, 255, 248, 195, 255),
    VTX(730, 1070, 190, -1024, 1024, 0, 0, 0, 255),
    VTX(790, 2150, 70, 2048, 1024, 0, 0, 0, 255),
    VTX(790, 2150, 90, 2048, 512, 255, 248, 195, 255),
    VTX(730, 2150, 90, -1024, 512, 255, 248, 195, 255),
    VTX(730, 2150, 70, -1024, 1024, 0, 0, 0, 255),
    VTX(730, 2050, 70, -1024, 1024, 0, 0, 0, 255),
    VTX(730, 2050, 90, -1024, 512, 255, 248, 195, 255),
    VTX(790, 2050, 90, 2048, 512, 255, 248, 195, 255),
    VTX(790, 2050, 70, 2048, 1024, 0, 0, 0, 255),
    VTX(790, 2050, 70, 2560, 512, 0, 0, 0, 255),
    VTX(790, 2050, 90, 2560, 1024, 255, 248, 195, 255),
    VTX(790, 2150, 90, -2560, 1024, 255, 248, 195, 255),
    VTX(790, 2150, 70, -2560, 512, 0, 0, 0, 255),
    VTX(730, 2150, 70, -2560, 512, 0, 0, 0, 255),
    VTX(730, 2150, 90, -2560, 1024, 255, 248, 195, 255),
    VTX(730, 2050, 70, 2560, 512, 0, 0, 0, 255),
    VTX(730, 2050, 90, 2560, 1024, 255, 248, 195, 255),
    VTX(730, 1510, 150, 0, 1024, 255, 248, 195, 255),
    VTX(730, 1610, 130, 1024, -4096, 44, 44, 44, 255),
    VTX(730, 1610, 150, 0, -4096, 44, 44, 44, 255),
    VTX(790, 1610, 150, 0, -4096, 44, 44, 44, 255),
    VTX(790, 1610, 130, 1024, -4096, 44, 44, 44, 255),
    VTX(790, 1510, 150, 0, 1024, 255, 248, 195, 255),
    VTX(790, 1510, 130, 1024, 1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_0042F0[8] = {
    VTX(310, 2050, 270, 0, -1024, 44, 44, 44, 255),
    VTX(310, 1930, 270, 0, 1024, 163, 163, 163, 255),
    VTX(1210, 1930, 270, 10240, 1024, 255, 248, 195, 255),
    VTX(1210, 2050, 270, 10240, -1024, 44, 44, 44, 255),
    VTX(250, 1510, 330, 0, -1024, 44, 44, 44, 255),
    VTX(250, 1390, 330, 0, 1024, 163, 163, 163, 255),
    VTX(1270, 1390, 330, 16451, 1024, 255, 248, 195, 255),
    VTX(1270, 1510, 330, 16451, -1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_004370[4] = {
    VTX(790, 1510, 150, -1024, 1024, 255, 248, 195, 255),
    VTX(790, 1510, 130, -1024, 512, 44, 44, 44, 255),
    VTX(730, 1510, 130, 1024, 512, 44, 44, 44, 255),
    VTX(730, 1510, 150, 1024, 1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_0043B0[4] = {
    VTX(1240, 100, 300, 6554, 0, 135, 135, 135, 255),
    VTX(280, 100, 300, 0, 0, 135, 135, 135, 255),
    VTX(280, 0, 300, 0, 1024, 255, 248, 195, 255),
    VTX(1240, 0, 300, 6554, 1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_0043F0[20] = {
    VTX(250, 1390, 330, -1365, 11, 0, 0, 0, 255),
    VTX(370, 1330, 210, 0, 2048, 76, 76, 76, 255),
    VTX(1150, 1330, 210, 8875, 2048, 135, 135, 135, 255),
    VTX(1270, 1390, 330, 10240, 11, 0, 0, 0, 255),
    VTX(310, 1930, 270, -1024, 0, 44, 44, 44, 255),
    VTX(430, 1870, 150, 0, 2048, 76, 76, 76, 255),
    VTX(1090, 1870, 150, 5632, 2048, 135, 135, 135, 255),
    VTX(1210, 1930, 270, 6656, 0, 44, 44, 44, 255),
    VTX(710, 249, 300, -341, 0, 255, 248, 195, 255),
    VTX(730, 200, 260, 0, 2048, 44, 44, 44, 255),
    VTX(790, 200, 260, 1024, 2048, 44, 44, 44, 255),
    VTX(810, 249, 300, 1365, 0, 255, 248, 195, 255),
    VTX(280, 850, 300, 0, 2048, 76, 76, 76, 255),
    VTX(1420, 970, 480, 9728, 0, 44, 44, 44, 255),
    VTX(100, 970, 480, -1536, 0, 44, 44, 44, 255),
    VTX(310, 2530, 270, -2048, 2, 44, 44, 44, 255),
    VTX(490, 2410, 90, 0, 2048, 76, 76, 76, 255),
    VTX(1210, 2530, 270, 8192, 2, 44, 44, 44, 255),
    VTX(1030, 2410, 90, 6144, 2048, 135, 135, 135, 255),
    VTX(1240, 850, 300, 8192, 2048, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_00Vtx_004530[8] = {
    VTX(100, 0, 70, 0, 0, 0, 0, 0, 0),
    VTX(1420, 0, 70, 0, 0, 0, 0, 0, 0),
    VTX(100, 2530, 70, 0, 0, 0, 0, 0, 0),
    VTX(1420, 2530, 70, 0, 0, 0, 0, 0, 0),
    VTX(100, 0, 480, 0, 0, 0, 0, 0, 0),
    VTX(1420, 0, 480, 0, 0, 0, 0, 0, 0),
    VTX(100, 2530, 480, 0, 0, 0, 0, 0, 0),
    VTX(1420, 2530, 480, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x0045B0[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_004530[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_004AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_0036D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_00Vtx_003710[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&water_temple_room_00Vtx_003790[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0052F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_00Vtx_0037D0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_005AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_003890[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_003A90[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_006AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_003B70[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_007AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_003D70[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 25, 23, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&water_temple_room_00Vtx_003D70[30], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 22, 20, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP1Triangle(30, 23, 25, 0),
    gsSPVertex(&water_temple_room_00Vtx_003D70[61], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP1Triangle(24, 26, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0082F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0042F0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_008AF0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_004370[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0092F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0043B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_00A2F0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0043F0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 12, 19, 13, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_004AF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_004AF0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0052F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0052F0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_005AF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_005AF0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_006AF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_006AF0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_007AF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_007AF0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0082F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0082F0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_008AF0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_008AF0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0092F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0092F0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_00A2F0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_00A2F0.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_00AAF0[8] = {
    VTX(1840, 340, 180, 8192, -1024, 53, 53, 53, 255),
    VTX(1240, 340, 180, 0, -1024, 76, 76, 76, 255),
    VTX(1240, 100, 180, 0, 1024, 255, 248, 195, 255),
    VTX(1840, 100, 180, 8192, 1024, 53, 53, 53, 255),
    VTX(-590, 100, 180, 0, 1024, 255, 248, 195, 255),
    VTX(280, 100, 180, 8192, 1024, 255, 248, 195, 255),
    VTX(280, 340, 180, 8192, -1024, 135, 135, 135, 255),
    VTX(-590, 340, 180, 0, -1024, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_00AB70[8] = {
    VTX(1240, 100, 180, 7987, 0, 135, 135, 135, 255),
    VTX(1840, 0, 180, 0, 1024, 53, 53, 53, 255),
    VTX(1840, 100, 180, 0, 0, 53, 53, 53, 255),
    VTX(1240, 0, 180, 7987, 1024, 255, 248, 195, 255),
    VTX(-590, 0, 180, 2098, 1024, 255, 248, 195, 255),
    VTX(280, 0, 180, 7987, 1024, 255, 248, 195, 255),
    VTX(280, 100, 180, 7987, 0, 135, 135, 135, 255),
    VTX(-590, 100, 180, 2098, 0, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_00Vtx_00ABF0[8] = {
    VTX(-590, 0, 180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, 180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 340, 180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 340, 180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 0, 180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, 180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 340, 180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 340, 180, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x00AC70[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_00ABF0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_00AD80, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_00AAF0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_00B580, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_00AB70[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_00AD80[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_00AD80.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_00B580[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_00B580.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_00C580[4] = {
    VTX(278, 520, 302, 0, 512, 179, 179, 254, 255),
    VTX(278, 580, 302, 0, 0, 179, 179, 254, 255),
    VTX(278, 580, -662, 9226, 0, 179, 179, 254, 255),
    VTX(278, 520, -662, 9226, 512, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_00C5C0[8] = {
    VTX(368, 1180, -572, 5851, 0, 179, 179, 254, 255),
    VTX(368, 1120, -572, 5851, 512, 179, 179, 254, 255),
    VTX(368, 1120, 212, -1794, 512, 179, 179, 254, 255),
    VTX(368, 1180, 212, -1794, 0, 179, 179, 254, 255),
    VTX(428, 1780, -512, 3840, 0, 179, 179, 254, 255),
    VTX(428, 1720, -512, 3840, 512, 179, 179, 254, 255),
    VTX(428, 1720, 152, -1826, 512, 179, 179, 254, 255),
    VTX(428, 1780, 152, -1826, 0, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_00C640[12] = {
    VTX(280, 580, -540, 0, 1024, 179, 179, 254, 255),
    VTX(280, 580, 180, 6144, 1024, 179, 179, 254, 255),
    VTX(280, 850, 180, 6144, -1024, 44, 44, 44, 255),
    VTX(280, 850, -540, 0, -1024, 44, 44, 44, 255),
    VTX(490, 2410, 30, 2048, -3072, 44, 44, 44, 255),
    VTX(490, 2410, -160, 0, -3072, 44, 44, 44, 255),
    VTX(490, 2230, -160, 0, -1024, 179, 179, 254, 255),
    VTX(490, 2230, 30, 2048, -1024, 179, 179, 254, 255),
    VTX(490, 2410, -200, 2048, -3072, 44, 44, 44, 255),
    VTX(490, 2410, -390, 0, -3072, 44, 44, 44, 255),
    VTX(490, 2230, -390, 0, -1024, 179, 179, 254, 255),
    VTX(490, 2230, -200, 2048, -1024, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_00C700[28] = {
    VTX(430, 1870, -200, 2048, -2048, 44, 44, 44, 255),
    VTX(430, 1870, -450, 0, -2048, 44, 44, 44, 255),
    VTX(430, 1510, -450, 0, 2048, 255, 248, 195, 255),
    VTX(430, 1510, -200, 2048, 2048, 255, 248, 195, 255),
    VTX(370, 1330, 120, 2048, -2048, 44, 44, 44, 255),
    VTX(370, 1330, -160, 0, -2048, 44, 44, 44, 255),
    VTX(370, 970, -160, 0, 2048, 255, 248, 195, 255),
    VTX(370, 970, 120, 2048, 2048, 255, 248, 195, 255),
    VTX(370, 1330, -200, 2048, -2048, 44, 44, 44, 255),
    VTX(370, 1330, -480, 0, -2048, 44, 44, 44, 255),
    VTX(370, 970, -480, 0, 2048, 255, 248, 195, 255),
    VTX(370, 970, -200, 2048, 2048, 255, 248, 195, 255),
    VTX(280, 340, -540, 6144, 0, 255, 248, 195, 255),
    VTX(280, 340, 180, 0, 0, 255, 248, 195, 255),
    VTX(280, 580, 180, 0, -2048, 53, 53, 53, 255),
    VTX(280, 580, -540, 6144, -2048, 53, 53, 53, 255),
    VTX(490, 2230, -160, 0, -2048, 25, 25, 25, 255),
    VTX(490, 2050, -160, 0, 2048, 255, 248, 195, 255),
    VTX(490, 2050, 30, 2048, 2048, 255, 248, 195, 255),
    VTX(490, 2230, 30, 2048, -2048, 25, 25, 25, 255),
    VTX(490, 2230, -390, 0, -2048, 25, 25, 25, 255),
    VTX(490, 2050, -390, 0, 2048, 255, 248, 195, 255),
    VTX(490, 2050, -200, 2048, 2048, 255, 248, 195, 255),
    VTX(490, 2230, -200, 2048, -2048, 25, 25, 25, 255),
    VTX(430, 1870, 90, 2048, -2048, 44, 44, 44, 255),
    VTX(430, 1870, -160, 0, -2048, 44, 44, 44, 255),
    VTX(430, 1510, -160, 0, 2048, 255, 248, 195, 255),
    VTX(430, 1510, 90, 2048, 2048, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_00C8C0[32] = {
    VTX(430, 1870, -450, -9216, -5120, 44, 44, 44, 255),
    VTX(430, 1870, -510, -10240, -5120, 44, 44, 44, 255),
    VTX(430, 1510, -450, -9216, 1024, 255, 248, 195, 255),
    VTX(430, 1510, -510, -10240, 1024, 135, 135, 135, 255),
    VTX(490, 2410, -450, 0, -5120, 44, 44, 44, 255),
    VTX(490, 2050, -450, 0, 1024, 255, 248, 195, 255),
    VTX(490, 2050, -390, 1024, 1024, 255, 248, 195, 255),
    VTX(490, 2410, -390, 1024, -5120, 44, 44, 44, 255),
    VTX(490, 2050, 90, 0, 1024, 255, 248, 195, 255),
    VTX(490, 2410, 90, 0, -5120, 44, 44, 44, 255),
    VTX(490, 2410, 30, 1024, -5120, 44, 44, 44, 255),
    VTX(490, 2050, 30, 1024, 1024, 255, 248, 195, 255),
    VTX(280, 850, 300, 0, -9135, 44, 44, 44, 255),
    VTX(280, 850, 180, 1024, -9135, 44, 44, 44, 255),
    VTX(280, 100, 180, 1024, 1024, 255, 248, 195, 255),
    VTX(280, 100, 300, 0, 1024, 135, 135, 135, 255),
    VTX(370, 1330, -480, 1024, -5011, 44, 44, 44, 255),
    VTX(370, 1330, -570, 0, -5011, 44, 44, 44, 255),
    VTX(370, 970, -480, 1024, 1024, 255, 248, 195, 255),
    VTX(370, 970, -570, 0, 1024, 135, 135, 135, 255),
    VTX(370, 1330, 210, 1024, -5000, 44, 44, 44, 255),
    VTX(370, 1330, 120, 0, -5000, 44, 44, 44, 255),
    VTX(370, 970, 120, 0, 1024, 255, 248, 195, 255),
    VTX(370, 970, 210, 1024, 1024, 255, 248, 195, 255),
    VTX(430, 1870, 150, 0, -5120, 44, 44, 44, 255),
    VTX(430, 1870, 90, 1024, -5120, 44, 44, 44, 255),
    VTX(430, 1510, 90, 1024, 1024, 255, 248, 195, 255),
    VTX(430, 1510, 150, 0, 1024, 255, 248, 195, 255),
    VTX(280, 100, -660, 0, 1024, 135, 135, 135, 255),
    VTX(280, 100, -540, 1024, 1024, 255, 248, 195, 255),
    VTX(280, 850, -540, 1024, -9135, 44, 44, 44, 255),
    VTX(280, 850, -660, 0, -9135, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_00CAC0[12] = {
    VTX(490, 2410, -160, 0, -5120, 44, 44, 44, 255),
    VTX(490, 2410, -200, 1024, -5120, 44, 44, 44, 255),
    VTX(490, 2050, -200, 1024, 1024, 255, 248, 195, 255),
    VTX(490, 2050, -160, 0, 1024, 255, 248, 195, 255),
    VTX(430, 1870, -160, 0, -5120, 44, 44, 44, 255),
    VTX(430, 1870, -200, 1024, -5120, 44, 44, 44, 255),
    VTX(430, 1510, -200, 1024, 1024, 255, 248, 195, 255),
    VTX(430, 1510, -160, 0, 1024, 255, 248, 195, 255),
    VTX(370, 1330, -160, 0, -5120, 44, 44, 44, 255),
    VTX(370, 1330, -200, 1024, -5120, 44, 44, 44, 255),
    VTX(370, 970, -200, 1024, 1024, 255, 248, 195, 255),
    VTX(370, 970, -160, 0, 1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_00CB80[12] = {
    VTX(250, 1510, -690, 0, -1024, 44, 44, 44, 255),
    VTX(250, 1390, -690, 0, 1024, 163, 163, 163, 255),
    VTX(250, 1390, 330, 16451, 1024, 255, 248, 195, 255),
    VTX(250, 1510, 330, 16451, -1024, 44, 44, 44, 255),
    VTX(310, 1930, -80, 6258, 1024, 255, 248, 195, 255),
    VTX(310, 1930, 270, 10240, 1024, 255, 248, 195, 255),
    VTX(310, 2050, 270, 10240, -1024, 44, 44, 44, 255),
    VTX(310, 2050, -80, 6258, -1024, 44, 44, 44, 255),
    VTX(310, 2050, -630, 0, -1024, 44, 44, 44, 255),
    VTX(310, 1930, -630, 0, 1024, 163, 163, 163, 255),
    VTX(310, 1930, -280, 3982, 1024, 255, 248, 195, 255),
    VTX(310, 2050, -280, 3982, -1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_00CC40[8] = {
    VTX(280, 0, -660, 6554, 1024, 255, 248, 195, 255),
    VTX(280, 0, -540, 4915, 1024, 255, 248, 195, 255),
    VTX(280, 100, -540, 4915, 0, 44, 44, 44, 255),
    VTX(280, 100, -660, 6554, 0, 135, 135, 135, 255),
    VTX(280, 0, 180, 1638, 1024, 255, 248, 195, 255),
    VTX(280, 0, 300, 0, 1024, 255, 248, 195, 255),
    VTX(280, 100, 300, 0, 0, 53, 53, 53, 255),
    VTX(280, 100, 180, 1638, 0, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_00CCC0[16] = {
    VTX(310, 2530, -630, -2048, 2, 44, 44, 44, 255),
    VTX(490, 2410, -450, 0, 2048, 76, 76, 76, 255),
    VTX(490, 2410, 90, 6144, 2048, 135, 135, 135, 255),
    VTX(310, 2530, 270, 8192, 2, 44, 44, 44, 255),
    VTX(430, 1870, -510, 0, 2048, 76, 76, 76, 255),
    VTX(430, 1870, 150, 5632, 2048, 135, 135, 135, 255),
    VTX(310, 1930, 270, 6656, 0, 44, 44, 44, 255),
    VTX(310, 1930, -630, -1024, 0, 44, 44, 44, 255),
    VTX(280, 850, -660, 0, 2048, 76, 76, 76, 255),
    VTX(280, 850, 300, 8192, 2048, 135, 135, 135, 255),
    VTX(100, 970, 480, 9728, 0, 44, 44, 44, 255),
    VTX(100, 970, -840, -1536, 0, 44, 44, 44, 255),
    VTX(250, 1390, -690, -1365, 11, 0, 0, 0, 255),
    VTX(370, 1330, -570, 0, 2048, 76, 76, 76, 255),
    VTX(370, 1330, 210, 8875, 2048, 135, 135, 135, 255),
    VTX(250, 1390, 330, 10240, 11, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_00CDC0[8] = {
    VTX(100, 0, -840, 0, 0, 0, 0, 0, 0),
    VTX(490, 0, -840, 0, 0, 0, 0, 0, 0),
    VTX(100, 2530, -840, 0, 0, 0, 0, 0, 0),
    VTX(490, 2530, -840, 0, 0, 0, 0, 0, 0),
    VTX(100, 0, 480, 0, 0, 0, 0, 0, 0),
    VTX(490, 0, 480, 0, 0, 0, 0, 0, 0),
    VTX(100, 2530, 480, 0, 0, 0, 0, 0, 0),
    VTX(490, 2530, 480, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x00CE40[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_00CDC0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_00C580[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsSPVertex(&water_temple_room_00Vtx_00C5C0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_00D1C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_00Vtx_00C640[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_00D9C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_00C700[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_00E9C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_00C8C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_00CAC0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_00F1C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_00CB80[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_00F9C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_00CC40[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0109C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_00CCC0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_00D1C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_00D1C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_00D9C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_00D9C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_00E9C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_00E9C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_00F1C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_00F1C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_00F9C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_00F9C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0109C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0109C0.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_0111C0[8] = {
    VTX(1092, 1720, -512, 3840, 512, 163, 163, 163, 255),
    VTX(1092, 1780, -512, 3840, 0, 163, 163, 163, 255),
    VTX(1092, 1780, 152, -1826, 0, 179, 179, 254, 255),
    VTX(1092, 1720, 152, -1826, 512, 179, 179, 254, 255),
    VTX(1152, 1180, 212, -1794, 0, 179, 179, 254, 255),
    VTX(1152, 1120, 212, -1794, 512, 179, 179, 254, 255),
    VTX(1152, 1120, -572, 5851, 512, 163, 163, 163, 255),
    VTX(1152, 1180, -572, 5851, 0, 163, 163, 163, 255),
}; 

static Vtx water_temple_room_00Vtx_011240[4] = {
    VTX(1242, 520, -662, 9226, 512, 163, 163, 163, 255),
    VTX(1242, 580, -662, 9226, 0, 163, 163, 163, 255),
    VTX(1242, 580, 302, 0, 0, 179, 179, 254, 255),
    VTX(1242, 520, 302, 0, 512, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_011280[12] = {
    VTX(1240, 580, 180, 0, 1024, 179, 179, 254, 255),
    VTX(1240, 580, -540, 6144, 1024, 179, 179, 254, 255),
    VTX(1240, 850, -540, 6144, -1024, 44, 44, 44, 255),
    VTX(1240, 850, 180, 0, -1024, 44, 44, 44, 255),
    VTX(1030, 2410, -160, 2048, -3072, 44, 44, 44, 255),
    VTX(1030, 2410, 30, 0, -3072, 44, 44, 44, 255),
    VTX(1030, 2230, 30, 0, -1024, 179, 179, 254, 255),
    VTX(1030, 2230, -160, 2048, -1024, 179, 179, 254, 255),
    VTX(1030, 2410, -390, 2048, -3072, 44, 44, 44, 255),
    VTX(1030, 2410, -200, 0, -3072, 44, 44, 44, 255),
    VTX(1030, 2230, -200, 0, -1024, 179, 179, 254, 255),
    VTX(1030, 2230, -390, 2048, -1024, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_011340[28] = {
    VTX(1240, 580, 180, 0, -2048, 53, 53, 53, 255),
    VTX(1240, 340, 180, 0, 0, 53, 53, 53, 255),
    VTX(1240, 340, -540, 6144, 0, 255, 248, 195, 255),
    VTX(1150, 1330, -160, 2048, -2048, 44, 44, 44, 255),
    VTX(1150, 1330, 120, 0, -2048, 44, 44, 44, 255),
    VTX(1150, 970, 120, 0, 2048, 255, 248, 195, 255),
    VTX(1150, 970, -160, 2048, 2048, 255, 248, 195, 255),
    VTX(1150, 1330, -480, 2048, -2048, 44, 44, 44, 255),
    VTX(1150, 1330, -200, 0, -2048, 44, 44, 44, 255),
    VTX(1150, 970, -200, 0, 2048, 255, 248, 195, 255),
    VTX(1150, 970, -480, 2048, 2048, 255, 248, 195, 255),
    VTX(1090, 1870, -160, 2048, -2048, 44, 44, 44, 255),
    VTX(1090, 1870, 90, 0, -2048, 44, 44, 44, 255),
    VTX(1090, 1510, 90, 0, 2048, 255, 248, 195, 255),
    VTX(1090, 1510, -160, 2048, 2048, 255, 248, 195, 255),
    VTX(1090, 1870, -450, 2048, -2048, 44, 44, 44, 255),
    VTX(1090, 1870, -200, 0, -2048, 44, 44, 44, 255),
    VTX(1090, 1510, -200, 0, 2048, 255, 248, 195, 255),
    VTX(1090, 1510, -450, 2048, 2048, 255, 248, 195, 255),
    VTX(1030, 2230, -200, 0, -2048, 25, 25, 25, 255),
    VTX(1030, 2050, -200, 0, 2048, 255, 248, 195, 255),
    VTX(1030, 2050, -390, 2048, 2048, 255, 248, 195, 255),
    VTX(1030, 2230, -390, 2048, -2048, 25, 25, 25, 255),
    VTX(1030, 2230, 30, 0, -2048, 25, 25, 25, 255),
    VTX(1030, 2050, 30, 0, 2048, 255, 248, 195, 255),
    VTX(1030, 2050, -160, 2048, 2048, 255, 248, 195, 255),
    VTX(1030, 2230, -160, 2048, -2048, 25, 25, 25, 255),
    VTX(1240, 580, -540, 6144, -2048, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_011500[46] = {
    VTX(1150, 1330, -200, 1024, -5120, 44, 44, 44, 255),
    VTX(1150, 1330, -160, 0, -5120, 44, 44, 44, 255),
    VTX(1150, 970, -160, 0, 1024, 255, 248, 195, 255),
    VTX(1150, 970, -200, 1024, 1024, 255, 248, 195, 255),
    VTX(1150, 1330, 120, 1024, -5011, 44, 44, 44, 255),
    VTX(1150, 1330, 210, 0, -5011, 44, 44, 44, 255),
    VTX(1150, 970, 120, 1024, 1024, 255, 248, 195, 255),
    VTX(1150, 970, 210, 0, 1024, 135, 135, 135, 255),
    VTX(1030, 2410, -200, 0, -5120, 44, 44, 44, 255),
    VTX(1030, 2410, -160, 1024, -5120, 44, 44, 44, 255),
    VTX(1030, 2050, -160, 1024, 1024, 255, 248, 195, 255),
    VTX(1030, 2050, -200, 0, 1024, 255, 248, 195, 255),
    VTX(1240, 850, 180, 1024, -9135, 44, 44, 44, 255),
    VTX(1240, 850, 300, 0, -9135, 44, 44, 44, 255),
    VTX(1240, 100, 300, 0, 1024, 135, 135, 135, 255),
    VTX(1240, 100, 180, 1024, 1024, 255, 248, 195, 255),
    VTX(1030, 2410, 90, 0, -5120, 44, 44, 44, 255),
    VTX(1030, 2050, 90, 0, 1024, 255, 248, 195, 255),
    VTX(1030, 2050, 30, 1024, 1024, 255, 248, 195, 255),
    VTX(1030, 2050, -450, 0, 1024, 255, 248, 195, 255),
    VTX(1030, 2410, -450, 0, -5120, 44, 44, 44, 255),
    VTX(1030, 2410, -390, 1024, -5120, 44, 44, 44, 255),
    VTX(1030, 2050, -390, 1024, 1024, 255, 248, 195, 255),
    VTX(1090, 1870, 90, -9216, -5120, 44, 44, 44, 255),
    VTX(1090, 1870, 150, -10240, -5120, 44, 44, 44, 255),
    VTX(1090, 1510, 90, -9216, 1024, 255, 248, 195, 255),
    VTX(1090, 1510, 150, -10240, 1024, 135, 135, 135, 255),
    VTX(1150, 1330, -570, 1024, -5000, 44, 44, 44, 255),
    VTX(1150, 1330, -480, 0, -5000, 44, 44, 44, 255),
    VTX(1150, 970, -480, 0, 1024, 255, 248, 195, 255),
    VTX(1150, 970, -570, 1024, 1024, 255, 248, 195, 255),
    VTX(1090, 1870, -510, 0, -5120, 44, 44, 44, 255),
    VTX(1090, 1870, -450, 1024, -5120, 44, 44, 44, 255),
    VTX(1090, 1510, -450, 1024, 1024, 255, 248, 195, 255),
    VTX(1090, 1510, -510, 0, 1024, 255, 248, 195, 255),
    VTX(1030, 2410, 30, 1024, -5120, 44, 44, 44, 255),
    VTX(1030, 2410, 90, 0, -5120, 44, 44, 44, 255),
    VTX(1030, 2050, 30, 1024, 1024, 255, 248, 195, 255),
    VTX(1240, 850, -660, 0, -9135, 44, 44, 44, 255),
    VTX(1240, 850, -540, 1024, -9135, 44, 44, 44, 255),
    VTX(1240, 100, -540, 1024, 1024, 255, 248, 195, 255),
    VTX(1240, 100, -660, 0, 1024, 135, 135, 135, 255),
    VTX(1090, 1870, -200, 0, -5120, 44, 44, 44, 255),
    VTX(1090, 1870, -160, 1024, -5120, 44, 44, 44, 255),
    VTX(1090, 1510, -160, 1024, 1024, 255, 248, 195, 255),
    VTX(1090, 1510, -200, 0, 1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_0117E0[8] = {
    VTX(1210, 2050, 270, 0, -1024, 44, 44, 44, 255),
    VTX(1210, 1930, 270, 0, 1024, 163, 163, 163, 255),
    VTX(1210, 1930, -630, 10240, 1024, 255, 248, 195, 255),
    VTX(1210, 2050, -630, 10240, -1024, 44, 44, 44, 255),
    VTX(1270, 1510, 330, 0, -1024, 44, 44, 44, 255),
    VTX(1270, 1390, 330, 0, 1024, 163, 163, 163, 255),
    VTX(1270, 1390, -690, 16451, 1024, 255, 248, 195, 255),
    VTX(1270, 1510, -690, 16451, -1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_011860[8] = {
    VTX(1240, 100, 180, 1638, 0, 135, 135, 135, 255),
    VTX(1240, 100, 300, 0, 0, 135, 135, 135, 255),
    VTX(1240, 0, 300, 0, 1024, 255, 248, 195, 255),
    VTX(1240, 0, 180, 1638, 1024, 255, 248, 195, 255),
    VTX(1240, 100, -660, 6554, 0, 135, 135, 135, 255),
    VTX(1240, 100, -540, 4915, 0, 44, 44, 44, 255),
    VTX(1240, 0, -540, 4915, 1024, 255, 248, 195, 255),
    VTX(1240, 0, -660, 6554, 1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_0118E0[16] = {
    VTX(1210, 2530, 270, -2048, 2, 44, 44, 44, 255),
    VTX(1030, 2410, 90, 0, 2048, 76, 76, 76, 255),
    VTX(1210, 2530, -630, 8192, 2, 44, 44, 44, 255),
    VTX(1210, 1930, 270, -1024, 0, 44, 44, 44, 255),
    VTX(1090, 1870, 150, 0, 2048, 76, 76, 76, 255),
    VTX(1210, 1930, -630, 6656, 0, 44, 44, 44, 255),
    VTX(1090, 1870, -510, 5632, 2048, 135, 135, 135, 255),
    VTX(1030, 2410, -450, 6144, 2048, 135, 135, 135, 255),
    VTX(1270, 1390, 330, -1365, 11, 0, 0, 0, 255),
    VTX(1150, 1330, 210, 0, 2048, 76, 76, 76, 255),
    VTX(1150, 1330, -570, 8875, 2048, 135, 135, 135, 255),
    VTX(1270, 1390, -690, 10240, 11, 0, 0, 0, 255),
    VTX(1240, 850, 300, 0, 2048, 76, 76, 76, 255),
    VTX(1240, 850, -660, 8192, 2048, 135, 135, 135, 255),
    VTX(1420, 970, -840, 9728, 0, 44, 44, 44, 255),
    VTX(1420, 970, 480, -1536, 0, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_0119E0[8] = {
    VTX(1030, 0, -840, 0, 0, 0, 0, 0, 0),
    VTX(1420, 0, -840, 0, 0, 0, 0, 0, 0),
    VTX(1030, 2530, -840, 0, 0, 0, 0, 0, 0),
    VTX(1420, 2530, -840, 0, 0, 0, 0, 0, 0),
    VTX(1030, 0, 480, 0, 0, 0, 0, 0, 0),
    VTX(1420, 0, 480, 0, 0, 0, 0, 0, 0),
    VTX(1030, 2530, 480, 0, 0, 0, 0, 0, 0),
    VTX(1420, 2530, 480, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x011A60[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_0119E0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_0111C0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&water_temple_room_00Vtx_011240[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_011DE8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_00Vtx_011280[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0125E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_011340[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0135E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_011500[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 26, 25, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&water_temple_room_00Vtx_011500[31], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_013DE8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0117E0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0145E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_011860[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0155E8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0118E0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_011DE8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_011DE8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0125E8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0125E8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0135E8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0135E8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_013DE8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_013DE8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0145E8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0145E8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0155E8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0155E8.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_015DE8[8] = {
    VTX(-590, 2050, 150, 0, -1024, 53, 53, 53, 255),
    VTX(-590, 1930, 150, 0, 1024, 135, 135, 135, 255),
    VTX(-590, 1930, -80, 4096, 1024, 44, 44, 44, 255),
    VTX(-590, 2050, -80, 4096, -1024, 44, 44, 44, 255),
    VTX(-590, 2050, -280, 0, -1024, 44, 44, 44, 255),
    VTX(-590, 1930, -280, 0, 1024, 44, 44, 44, 255),
    VTX(-590, 1930, -510, 4096, 1024, 53, 53, 53, 255),
    VTX(-590, 2050, -510, 4096, -1024, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_015E68[32] = {
    VTX(-790, 610, -180, 2048, 1024, 216, 216, 216, 255),
    VTX(-990, 610, 180, -2560, 3584, 53, 53, 53, 255),
    VTX(-590, 610, 180, -2560, -1536, 76, 76, 76, 255),
    VTX(-590, 610, -540, 6656, -1536, 76, 76, 76, 255),
    VTX(-990, 610, -540, 6656, 3584, 53, 53, 53, 255),
    VTX(-590, 850, -540, -2560, -768, 53, 53, 53, 255),
    VTX(-990, 850, -540, 2560, -768, 25, 25, 25, 255),
    VTX(-990, 610, -540, 2560, 2304, 25, 25, 25, 255),
    VTX(-590, 610, -540, -2560, 2304, 76, 76, 76, 255),
    VTX(-590, 850, 180, -2560, -1536, 44, 44, 44, 255),
    VTX(-790, 850, -180, 2048, 1024, 135, 135, 135, 255),
    VTX(-590, 850, -540, 6656, -1536, 44, 44, 44, 255),
    VTX(-990, 850, -540, 6656, 3584, 44, 44, 44, 255),
    VTX(-990, 850, 180, -2560, 3584, 44, 44, 44, 255),
    VTX(-990, 850, 180, 2560, -768, 44, 44, 44, 255),
    VTX(-820, 850, 180, 384, -768, 44, 44, 44, 255),
    VTX(-820, 710, 180, 384, 1024, 76, 76, 76, 255),
    VTX(-760, 850, 180, -384, -768, 44, 44, 44, 255),
    VTX(-760, 710, 180, -384, 1024, 135, 135, 135, 255),
    VTX(-590, 850, 180, -2560, -768, 25, 25, 25, 255),
    VTX(-990, 610, 180, 2560, 2304, 53, 53, 53, 255),
    VTX(-820, 610, 180, 384, 2304, 76, 76, 76, 255),
    VTX(-590, 610, 180, -2560, 2304, 25, 25, 25, 255),
    VTX(-760, 610, 180, -384, 2304, 204, 204, 204, 255),
    VTX(-990, 850, 180, -3072, -1536, 25, 25, 25, 255),
    VTX(-990, 610, 180, -3072, 1536, 25, 25, 25, 255),
    VTX(-990, 610, -540, 6144, 1536, 53, 53, 53, 255),
    VTX(-990, 850, -540, 6144, -1536, 44, 44, 44, 255),
    VTX(-1201, 2050, -80, 512, -3170, 44, 44, 44, 255),
    VTX(-1201, 2050, 180, -1707, -3170, 44, 44, 44, 255),
    VTX(-896, 2050, -80, 512, -561, 135, 135, 135, 255),
    VTX(-590, 2050, 300, -2731, 2048, 25, 25, 25, 255),
}; 

static Vtx water_temple_room_00Vtx_016068[16] = {
    VTX(-590, 2050, 300, -2731, 2048, 25, 25, 25, 255),
    VTX(-590, 2050, -80, 512, 2048, 76, 76, 76, 255),
    VTX(-896, 2050, -80, 512, -561, 135, 135, 135, 255),
    VTX(-896, 2050, -280, 512, -561, 135, 135, 135, 255),
    VTX(-590, 2050, -280, 512, 2048, 76, 76, 76, 255),
    VTX(-590, 2050, -660, -2731, 2048, 25, 25, 25, 255),
    VTX(-1201, 2050, -540, -1707, -3170, 44, 44, 44, 255),
    VTX(-1201, 2050, -280, 512, -3170, 44, 44, 44, 255),
    VTX(-1123, 2774, 195, 4073, -5156, 25, 25, 25, 255),
    VTX(-590, 2910, 300, -562, -6311, 25, 25, 25, 255),
    VTX(-1123, 2050, 195, 4073, 1024, 163, 163, 163, 255),
    VTX(-590, 2050, 300, -562, 1024, 25, 25, 25, 255),
    VTX(-1123, 2050, -555, 4096, 1024, 163, 163, 163, 255),
    VTX(-590, 2910, -660, -539, -6311, 25, 25, 25, 255),
    VTX(-1123, 2774, -555, 4096, -5156, 25, 25, 25, 255),
    VTX(-590, 2050, -660, -539, 1024, 25, 25, 25, 255),
}; 

static Vtx water_temple_room_00Vtx_016168[8] = {
    VTX(-1201, 2050, 180, 1024, 1024, 163, 163, 163, 255),
    VTX(-1201, 2130, 180, 1024, 0, 163, 163, 163, 255),
    VTX(-1123, 2130, 195, 0, 0, 44, 44, 44, 255),
    VTX(-1123, 2050, 195, 0, 1024, 25, 25, 25, 255),
    VTX(-1123, 2050, -555, 0, 1024, 25, 25, 25, 255),
    VTX(-1123, 2130, -555, 0, 0, 44, 44, 44, 255),
    VTX(-1201, 2130, -540, 1024, 0, 163, 163, 163, 255),
    VTX(-1201, 2050, -540, 1024, 1024, 163, 163, 163, 255),
}; 

static Vtx water_temple_room_00Vtx_0161E8[58] = {
    VTX(-590, 1750, 1500, 0, 2048, 53, 53, 53, 255),
    VTX(-590, 1750, 300, 1834, 2048, 53, 53, 53, 255),
    VTX(-590, 2910, 300, 1834, -1278, 53, 53, 53, 255),
    VTX(-590, 4000, 1500, 0, -4406, 0, 0, 0, 255),
    VTX(-590, 2910, -660, 3301, -1278, 53, 53, 53, 255),
    VTX(-590, 1750, -660, 3301, 2048, 53, 53, 53, 255),
    VTX(-590, 1750, -1180, 4096, 2048, 53, 53, 53, 255),
    VTX(-590, 4000, -1180, 4096, -4406, 0, 0, 0, 255),
    VTX(-590, 970, 210, 1972, 614, 76, 76, 76, 255),
    VTX(-590, 1150, 210, 1972, 0, 76, 76, 76, 255),
    VTX(-590, 1150, 300, 1834, 0, 135, 135, 135, 255),
    VTX(-590, 970, 300, 1834, 614, 76, 76, 76, 255),
    VTX(-590, 970, -660, 3301, 614, 135, 135, 135, 255),
    VTX(-590, 1150, -660, 3301, 0, 135, 135, 135, 255),
    VTX(-590, 1150, -570, 3164, 0, 135, 135, 135, 255),
    VTX(-590, 970, -570, 3164, 614, 76, 76, 76, 255),
    VTX(-590, 1150, 210, 1972, 2048, 76, 76, 76, 255),
    VTX(-590, 1330, 210, 1972, 1434, 44, 44, 44, 255),
    VTX(-590, 1390, 300, 1834, 1229, 135, 135, 135, 255),
    VTX(-590, 1150, 300, 1834, 2048, 135, 135, 135, 255),
    VTX(-590, 1150, -660, 3301, 2048, 135, 135, 135, 255),
    VTX(-590, 1390, -660, 3301, 1229, 135, 135, 135, 255),
    VTX(-590, 1330, -570, 3164, 1434, 44, 44, 44, 255),
    VTX(-590, 1150, -570, 3164, 2048, 135, 135, 135, 255),
    VTX(-590, 2050, -660, 3301, 1188, 76, 76, 76, 255),
    VTX(-590, 2050, -510, 3072, 1474, 53, 53, 53, 255),
    VTX(-590, 1750, -510, 3072, 2048, 53, 53, 53, 255),
    VTX(-590, 1510, -660, 3301, 819, 135, 135, 135, 255),
    VTX(-590, 1750, -660, 3301, 0, 53, 53, 53, 255),
    VTX(-590, 1750, -510, 3072, 0, 53, 53, 53, 255),
    VTX(-590, 1510, -510, 3072, 819, 135, 135, 135, 255),
    VTX(-590, 1510, 150, 2063, 819, 135, 135, 135, 255),
    VTX(-590, 1750, 150, 2063, 0, 76, 76, 76, 255),
    VTX(-590, 1750, 300, 1834, 0, 53, 53, 53, 255),
    VTX(-590, 1510, 300, 1834, 819, 135, 135, 135, 255),
    VTX(-590, 2050, 300, 1834, 1188, 76, 76, 76, 255),
    VTX(-590, 1750, 300, 1834, 2048, 53, 53, 53, 255),
    VTX(-590, 1750, 150, 2063, 2048, 76, 76, 76, 255),
    VTX(-590, 2050, 150, 2063, 1188, 76, 76, 76, 255),
    VTX(-590, 1150, 300, 1834, 0, 135, 135, 135, 255),
    VTX(-590, 1150, 1500, 0, 0, 53, 53, 53, 255),
    VTX(-590, 550, 1500, 0, 2048, 53, 53, 53, 255),
    VTX(-590, 550, 300, 1834, 2048, 135, 135, 135, 255),
    VTX(-590, 1150, 1500, 0, 2048, 53, 53, 53, 255),
    VTX(-590, 1150, 300, 1834, 2048, 135, 135, 135, 255),
    VTX(-590, 1750, 1500, 0, 0, 53, 53, 53, 255),
    VTX(-590, 1150, -1180, 4096, 0, 53, 53, 53, 255),
    VTX(-590, 1150, -660, 3301, 0, 135, 135, 135, 255),
    VTX(-590, 550, -660, 3301, 2048, 44, 44, 44, 255),
    VTX(-590, 550, -1180, 4096, 2048, 53, 53, 53, 255),
    VTX(-590, 1750, -660, 3301, 0, 53, 53, 53, 255),
    VTX(-590, 1150, -660, 3301, 2048, 135, 135, 135, 255),
    VTX(-590, 1150, -1180, 4096, 2048, 53, 53, 53, 255),
    VTX(-590, 1750, -1180, 4096, 0, 53, 53, 53, 255),
    VTX(-590, 2910, -660, 3301, -1278, 53, 53, 53, 255),
    VTX(-590, 4000, -1180, 4096, -4406, 0, 0, 0, 255),
    VTX(-590, 4000, 1500, 0, -4406, 0, 0, 0, 255),
    VTX(-590, 2910, 300, 1834, -1278, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_016588[12] = {
    VTX(-588, 1710, 1498, 16009, 512, 179, 179, 254, 255),
    VTX(-588, 1710, -1178, -6827, 512, 179, 179, 254, 255),
    VTX(-588, 1790, -1178, -6827, 0, 179, 179, 254, 255),
    VTX(-588, 1790, 1498, 16009, 0, 179, 179, 254, 255),
    VTX(-588, 1110, 1498, -6886, 512, 179, 179, 254, 255),
    VTX(-588, 1110, -1178, 10240, 512, 179, 179, 254, 255),
    VTX(-588, 1190, -1178, 10240, 0, 179, 179, 254, 255),
    VTX(-588, 1190, 1498, -6886, 0, 179, 179, 254, 255),
    VTX(-588, 510, 1498, -5606, 512, 179, 179, 254, 255),
    VTX(-588, 510, -1178, 11520, 512, 179, 179, 254, 255),
    VTX(-588, 590, -1178, 11520, 0, 179, 179, 254, 255),
    VTX(-588, 590, 1498, -5606, 0, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_016648[4] = {
    VTX(-1201, 2514, 180, 0, 1024, 254, 254, 124, 255),
    VTX(-1201, 2514, -540, 6144, 1024, 254, 254, 124, 255),
    VTX(-1201, 2754, -540, 6144, -1024, 44, 44, 44, 255),
    VTX(-1201, 2754, 180, 0, -1024, 25, 25, 25, 255),
}; 

static Vtx water_temple_room_00Vtx_016688[46] = {
    VTX(-1201, 2514, -300, 2048, -2048, 44, 44, 44, 255),
    VTX(-1201, 2514, -225, 1408, -2048, 44, 44, 44, 255),
    VTX(-1201, 2050, -225, 1408, 2048, 254, 254, 124, 255),
    VTX(-1201, 2050, -300, 2048, 2048, 254, 254, 124, 255),
    VTX(-1201, 2050, -60, 0, 2048, 254, 254, 124, 255),
    VTX(-1201, 2050, -135, 640, 2048, 254, 254, 124, 255),
    VTX(-1201, 2514, -135, 640, -2048, 44, 44, 44, 255),
    VTX(-1201, 2514, -60, 0, -2048, 44, 44, 44, 255),
    VTX(-1201, 2190, -135, 640, 813, 254, 254, 124, 255),
    VTX(-1201, 2190, -225, 1408, 813, 254, 254, 124, 255),
    VTX(-590, 970, -210, 341, 2048, 255, 248, 195, 255),
    VTX(-590, 970, -240, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 1330, -240, 0, -6144, 44, 44, 44, 255),
    VTX(-590, 1330, -210, 341, -6144, 44, 44, 44, 255),
    VTX(-590, 970, -120, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 970, -150, 341, 2048, 255, 248, 195, 255),
    VTX(-590, 1330, -150, 341, -6144, 44, 44, 44, 255),
    VTX(-590, 1330, -120, 0, -6144, 44, 44, 44, 255),
    VTX(-590, 1070, -210, 2009, 2048, 255, 248, 195, 255),
    VTX(-590, 1330, -210, 2009, -2055, 44, 44, 44, 255),
    VTX(-590, 1330, -150, 0, -2055, 44, 44, 44, 255),
    VTX(-590, 1070, -150, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 340, -210, 341, 2048, 255, 248, 195, 255),
    VTX(-590, 340, -240, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 610, -240, 0, -6144, 76, 76, 76, 255),
    VTX(-590, 610, -210, 341, -6144, 76, 76, 76, 255),
    VTX(-590, 440, -210, 2009, 2048, 255, 248, 195, 255),
    VTX(-590, 610, -210, 2009, -2055, 76, 76, 76, 255),
    VTX(-590, 610, -150, 0, -2055, 76, 76, 76, 255),
    VTX(-590, 440, -150, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 340, -120, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 340, -150, 341, 2048, 255, 248, 195, 255),
    VTX(-590, 610, -150, 341, -6144, 76, 76, 76, 255),
    VTX(-590, 610, -120, 0, -6144, 76, 76, 76, 255),
    VTX(-590, 1510, -210, 341, 2048, 255, 248, 195, 255),
    VTX(-590, 1510, -240, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 1930, -240, 0, -6144, 44, 44, 44, 255),
    VTX(-590, 1930, -210, 341, -6144, 44, 44, 44, 255),
    VTX(-590, 1610, -210, 2009, 2048, 255, 248, 195, 255),
    VTX(-590, 1930, -210, 2009, -2055, 44, 44, 44, 255),
    VTX(-590, 1930, -150, 0, -2055, 44, 44, 44, 255),
    VTX(-590, 1610, -150, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 1510, -120, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 1510, -150, 341, 2048, 255, 248, 195, 255),
    VTX(-590, 1930, -150, 341, -6144, 44, 44, 44, 255),
    VTX(-590, 1930, -120, 0, -6144, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_016968[32] = {
    VTX(-590, 610, -120, 2048, -2048, 76, 76, 76, 255),
    VTX(-590, 610, 180, 0, -2048, 76, 76, 76, 255),
    VTX(-590, 340, 180, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 340, -120, 2048, 2048, 135, 135, 135, 255),
    VTX(-590, 1510, -240, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 1510, -450, 2048, 2048, 255, 248, 195, 255),
    VTX(-590, 1930, -450, 2048, -2048, 44, 44, 44, 255),
    VTX(-590, 1930, -240, 0, -2048, 44, 44, 44, 255),
    VTX(-1201, 2050, -300, 0, 2048, 255, 248, 195, 255),
    VTX(-1201, 2050, -540, 2048, 2048, 255, 248, 195, 255),
    VTX(-1201, 2514, -300, 0, -2048, 44, 44, 44, 255),
    VTX(-1201, 2050, 180, 2048, 2048, 255, 248, 195, 255),
    VTX(-1201, 2050, -60, 0, 2048, 255, 248, 195, 255),
    VTX(-1201, 2514, -60, 0, -2048, 44, 44, 44, 255),
    VTX(-590, 1330, -120, 2048, -2048, 44, 44, 44, 255),
    VTX(-590, 1330, 120, 0, -2048, 44, 44, 44, 255),
    VTX(-590, 970, 120, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 970, -120, 2048, 2048, 255, 248, 195, 255),
    VTX(-590, 1930, -120, 2048, -2048, 44, 44, 44, 255),
    VTX(-590, 1930, 90, 0, -2048, 44, 44, 44, 255),
    VTX(-590, 1510, 90, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 1510, -120, 2048, 2048, 255, 248, 195, 255),
    VTX(-590, 340, -240, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 340, -540, 2048, 2048, 135, 135, 135, 255),
    VTX(-590, 610, -540, 2048, -2048, 76, 76, 76, 255),
    VTX(-590, 610, -240, 0, -2048, 76, 76, 76, 255),
    VTX(-1201, 2514, 180, 2048, -2048, 25, 25, 25, 255),
    VTX(-590, 970, -240, 0, 2048, 255, 248, 195, 255),
    VTX(-590, 970, -480, 2048, 2048, 255, 248, 195, 255),
    VTX(-590, 1330, -480, 2048, -2048, 44, 44, 44, 255),
    VTX(-590, 1330, -240, 0, -2048, 44, 44, 44, 255),
    VTX(-1201, 2514, -540, 2048, -2048, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_016B68[8] = {
    VTX(-590, 550, -1180, 4096, 0, 53, 53, 53, 255),
    VTX(-590, 550, -660, 3301, 0, 44, 44, 44, 255),
    VTX(-590, 0, -660, 3301, 2048, 163, 163, 163, 255),
    VTX(-590, 0, -1180, 4096, 2048, 76, 76, 76, 255),
    VTX(-590, 550, 300, 1834, 0, 135, 135, 135, 255),
    VTX(-590, 550, 1500, 0, 0, 53, 53, 53, 255),
    VTX(-590, 0, 1500, 0, 2048, 76, 76, 76, 255),
    VTX(-590, 0, 300, 1834, 2048, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_00Vtx_016BE8[32] = {
    VTX(-610, 440, -150, -2560, 512, 0, 0, 0, 255),
    VTX(-590, 440, -150, -2560, 1024, 255, 248, 195, 255),
    VTX(-610, 340, -150, 2560, 512, 0, 0, 0, 255),
    VTX(-590, 340, -150, 2560, 1024, 255, 248, 195, 255),
    VTX(-590, 970, -570, 1024, 1024, 76, 76, 76, 255),
    VTX(-590, 1330, -570, 1024, -5000, 44, 44, 44, 255),
    VTX(-590, 970, -480, 0, 1024, 255, 248, 195, 255),
    VTX(-590, 1330, -480, 0, -5000, 44, 44, 44, 255),
    VTX(-610, 1070, -210, 2048, 1024, 0, 0, 0, 255),
    VTX(-590, 1070, -210, 2048, 512, 255, 248, 195, 255),
    VTX(-590, 1070, -150, -1024, 512, 255, 248, 195, 255),
    VTX(-610, 1070, -150, -1024, 1024, 0, 0, 0, 255),
    VTX(-610, 970, -210, 2560, 512, 0, 0, 0, 255),
    VTX(-590, 1070, -210, -2560, 1024, 255, 248, 195, 255),
    VTX(-610, 1070, -210, -2560, 512, 0, 0, 0, 255),
    VTX(-590, 970, -210, 2560, 1024, 255, 248, 195, 255),
    VTX(-610, 1070, -150, -2560, 512, 0, 0, 0, 255),
    VTX(-590, 1070, -150, -2560, 1024, 255, 248, 195, 255),
    VTX(-610, 970, -150, 2560, 512, 0, 0, 0, 255),
    VTX(-590, 970, -150, 2560, 1024, 255, 248, 195, 255),
    VTX(-610, 970, -150, -1024, 1024, 0, 0, 0, 255),
    VTX(-590, 970, -150, -1024, 512, 255, 248, 195, 255),
    VTX(-590, 970, -210, 2048, 512, 255, 248, 195, 255),
    VTX(-610, 970, -210, 2048, 1024, 0, 0, 0, 255),
    VTX(-820, 610, 200, 2560, 512, 0, 0, 0, 255),
    VTX(-820, 710, 180, -2560, 1024, 163, 163, 163, 255),
    VTX(-820, 710, 200, -2560, 512, 0, 0, 0, 255),
    VTX(-820, 610, 180, 2560, 1024, 163, 163, 163, 255),
    VTX(-820, 710, 200, 2048, 1024, 0, 0, 0, 255),
    VTX(-820, 710, 180, 2048, 512, 163, 163, 163, 255),
    VTX(-760, 710, 180, -1024, 512, 163, 163, 163, 255),
    VTX(-760, 710, 200, -1024, 1024, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_016DE8[70] = {
    VTX(-760, 710, 200, -2560, 512, 0, 0, 0, 255),
    VTX(-760, 710, 180, -2560, 1024, 163, 163, 163, 255),
    VTX(-760, 610, 200, 2560, 512, 0, 0, 0, 255),
    VTX(-760, 610, 200, -1024, 1024, 0, 0, 0, 255),
    VTX(-760, 610, 180, -1024, 512, 163, 163, 163, 255),
    VTX(-820, 610, 180, 2048, 512, 163, 163, 163, 255),
    VTX(-820, 610, 200, 2048, 1024, 0, 0, 0, 255),
    VTX(-760, 610, 180, 2560, 1024, 163, 163, 163, 255),
    VTX(-610, 1510, -150, -1024, 1024, 0, 0, 0, 255),
    VTX(-590, 1510, -150, -1024, 512, 255, 248, 195, 255),
    VTX(-590, 1510, -210, 2048, 512, 255, 248, 195, 255),
    VTX(-610, 1510, -210, 2048, 1024, 0, 0, 0, 255),
    VTX(-590, 1610, -150, -2560, 1024, 255, 248, 195, 255),
    VTX(-590, 1510, -150, 2560, 1024, 255, 248, 195, 255),
    VTX(-610, 1510, -150, 2560, 512, 0, 0, 0, 255),
    VTX(-610, 1610, -150, -2560, 512, 0, 0, 0, 255),
    VTX(-610, 1610, -210, 2048, 1024, 0, 0, 0, 255),
    VTX(-590, 1610, -210, 2048, 512, 255, 248, 195, 255),
    VTX(-590, 1610, -150, -1024, 512, 255, 248, 195, 255),
    VTX(-610, 1610, -150, -1024, 1024, 0, 0, 0, 255),
    VTX(-610, 1510, -210, 2560, 512, 0, 0, 0, 255),
    VTX(-590, 1610, -210, -2560, 1024, 255, 248, 195, 255),
    VTX(-610, 1610, -210, -2560, 512, 0, 0, 0, 255),
    VTX(-590, 1510, -210, 2560, 1024, 255, 248, 195, 255),
    VTX(-590, 1330, 210, 0, -5011, 44, 44, 44, 255),
    VTX(-590, 970, 120, 1024, 1024, 255, 248, 195, 255),
    VTX(-590, 1330, 120, 1024, -5011, 44, 44, 44, 255),
    VTX(-590, 970, 210, 0, 1024, 76, 76, 76, 255),
    VTX(-590, 100, 180, 1024, 1024, 255, 248, 195, 255),
    VTX(-590, 850, 180, 1024, -9135, 76, 76, 76, 255),
    VTX(-590, 850, 300, 0, -9135, 44, 44, 44, 255),
    VTX(-590, 850, -660, 0, -9135, 44, 44, 44, 255),
    VTX(-590, 850, -540, 1024, -9135, 44, 44, 44, 255),
    VTX(-590, 100, -540, 1024, 1024, 255, 248, 195, 255),
    VTX(-590, 100, -660, 0, 1024, 163, 163, 163, 255),
    VTX(-590, 100, 300, 0, 1024, 135, 135, 135, 255),
    VTX(-590, 100, 180, 1024, 1024, 255, 248, 195, 255),
    VTX(-590, 850, 300, 0, -9135, 44, 44, 44, 255),
    VTX(-1231, 2150, -210, 1024, -1536, 44, 44, 44, 255),
    VTX(-1231, 2050, -210, 1024, 1024, 44, 44, 44, 255),
    VTX(-1201, 2050, -225, 256, 1024, 255, 248, 195, 255),
    VTX(-1201, 2190, -225, 256, -2560, 255, 248, 195, 255),
    VTX(-1201, 2050, -225, 2048, 1024, 255, 248, 195, 255),
    VTX(-1231, 2050, -210, 1638, -1024, 44, 44, 44, 255),
    VTX(-1231, 2050, -150, 410, -1024, 44, 44, 44, 255),
    VTX(-1201, 2050, -135, 0, 1024, 255, 248, 195, 255),
    VTX(-1201, 2050, -135, 256, 1024, 255, 248, 195, 255),
    VTX(-1231, 2050, -150, 1024, 1024, 44, 44, 44, 255),
    VTX(-1231, 2150, -150, 1024, -1536, 44, 44, 44, 255),
    VTX(-1201, 2190, -135, 256, -2560, 255, 248, 195, 255),
    VTX(-590, 1510, 150, 0, 1024, 135, 135, 135, 255),
    VTX(-590, 1510, 90, 1024, 1024, 255, 248, 195, 255),
    VTX(-590, 1930, 90, 1024, -5120, 44, 44, 44, 255),
    VTX(-590, 1930, 150, 0, -5120, 44, 44, 44, 255),
    VTX(-590, 1930, -510, 0, -5120, 44, 44, 44, 255),
    VTX(-590, 1930, -450, 1024, -5120, 44, 44, 44, 255),
    VTX(-590, 1510, -510, 0, 1024, 135, 135, 135, 255),
    VTX(-590, 1510, -450, 1024, 1024, 255, 248, 195, 255),
    VTX(-610, 440, -210, 2048, 1024, 0, 0, 0, 255),
    VTX(-590, 440, -210, 2048, 512, 255, 248, 195, 255),
    VTX(-590, 440, -150, -1024, 512, 255, 248, 195, 255),
    VTX(-610, 440, -150, -1024, 1024, 0, 0, 0, 255),
    VTX(-610, 340, -150, -1024, 1024, 0, 0, 0, 255),
    VTX(-590, 340, -150, -1024, 512, 255, 248, 195, 255),
    VTX(-590, 340, -210, 2048, 512, 255, 248, 195, 255),
    VTX(-610, 340, -210, 2048, 1024, 0, 0, 0, 255),
    VTX(-610, 340, -210, 2560, 512, 0, 0, 0, 255),
    VTX(-590, 340, -210, 2560, 1024, 255, 248, 195, 255),
    VTX(-590, 440, -210, -2560, 1024, 255, 248, 195, 255),
    VTX(-610, 440, -210, -2560, 512, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_017248[12] = {
    VTX(-1201, 2130, 180, 1024, 1024, 163, 163, 163, 255),
    VTX(-1201, 2754, 180, 1024, -6967, 44, 44, 44, 255),
    VTX(-1123, 2774, 195, 0, -7222, 25, 25, 25, 255),
    VTX(-1123, 2130, 195, 0, 1024, 44, 44, 44, 255),
    VTX(-1123, 2130, -555, 0, 1024, 44, 44, 44, 255),
    VTX(-1123, 2774, -555, 0, -7222, 25, 25, 25, 255),
    VTX(-1201, 2754, -540, 1024, -6967, 44, 44, 44, 255),
    VTX(-1201, 2130, -540, 1024, 1024, 163, 163, 163, 255),
    VTX(-1123, 2774, 195, 1024, 512, 25, 25, 25, 255),
    VTX(-1201, 2754, 180, -13, 709, 135, 135, 135, 255),
    VTX(-1201, 2754, -540, -13, 9925, 135, 135, 135, 255),
    VTX(-1123, 2774, -555, 1024, 10122, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_00Vtx_017308[28] = {
    VTX(-590, 1390, 300, 2048, 1024, 255, 248, 195, 255),
    VTX(-410, 1390, 300, 0, 1024, 255, 248, 195, 255),
    VTX(-410, 1510, 300, 0, -1024, 44, 44, 44, 255),
    VTX(-590, 1510, 300, 2048, -1024, 44, 44, 44, 255),
    VTX(-410, 850, 300, 2048, 1024, 255, 248, 195, 255),
    VTX(-410, 970, 300, 2048, -1024, 44, 44, 44, 255),
    VTX(-590, 970, 300, 4096, -1024, 53, 53, 53, 255),
    VTX(-410, 1510, 300, 16451, -1024, 44, 44, 44, 255),
    VTX(-410, 1390, 300, 16451, 1024, 255, 248, 195, 255),
    VTX(-410, 1390, 300, 15967, 1024, 255, 248, 195, 255),
    VTX(-410, 1510, 300, 15967, -1024, 44, 44, 44, 255),
    VTX(-410, 850, 300, 12288, 1024, 255, 248, 195, 255),
    VTX(-410, 850, -660, 2048, 1024, 255, 248, 195, 255),
    VTX(-410, 970, -660, 2048, -1024, 44, 44, 44, 255),
    VTX(-410, 970, 300, 12288, -1024, 44, 44, 44, 255),
    VTX(-590, 850, 300, 4096, 1024, 44, 44, 44, 255),
    VTX(-590, 970, -660, 4096, -1024, 53, 53, 53, 255),
    VTX(-410, 970, -660, 2048, -1024, 44, 44, 44, 255),
    VTX(-410, 850, -660, 2048, 1024, 255, 248, 195, 255),
    VTX(-410, 1390, 300, 12288, 1024, 255, 248, 195, 255),
    VTX(-410, 1390, -660, 2048, 1024, 255, 248, 195, 255),
    VTX(-410, 1510, -660, 2048, -1024, 44, 44, 44, 255),
    VTX(-410, 1510, 300, 12288, -1024, 44, 44, 44, 255),
    VTX(-590, 850, -660, 4096, 1024, 44, 44, 44, 255),
    VTX(-590, 1510, -660, 2048, -1024, 44, 44, 44, 255),
    VTX(-410, 1510, -660, 0, -1024, 44, 44, 44, 255),
    VTX(-410, 1390, -660, 0, 1024, 255, 248, 195, 255),
    VTX(-590, 1390, -660, 2048, 1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_0174C8[24] = {
    VTX(-410, 1510, -660, 1024, -11264, 44, 44, 44, 255),
    VTX(-590, 1510, -510, -1024, -9344, 255, 248, 195, 255),
    VTX(-590, 1510, 150, -1024, -896, 255, 248, 195, 255),
    VTX(-410, 1510, 300, 1024, 1024, 44, 44, 44, 255),
    VTX(-410, 1510, 300, 1024, -1024, 44, 44, 44, 255),
    VTX(-590, 1510, 150, -1024, 1024, 255, 248, 195, 255),
    VTX(-590, 1510, 300, 1024, 1024, 44, 44, 44, 255),
    VTX(-1201, 2050, -280, 1024, -12405, 44, 44, 44, 255),
    VTX(-1201, 2050, -80, -1024, -12405, 44, 44, 44, 255),
    VTX(-590, 2050, -80, -1024, -6144, 135, 135, 135, 255),
    VTX(-590, 2050, -280, 1024, -6144, 135, 135, 135, 255),
    VTX(-590, 1510, -660, 1024, 1024, 44, 44, 44, 255),
    VTX(-590, 1510, -510, -1024, 1024, 255, 248, 195, 255),
    VTX(-410, 1510, -660, 1024, -1024, 44, 44, 44, 255),
    VTX(-590, 970, -660, 1024, 1024, 44, 44, 44, 255),
    VTX(-590, 970, -510, -1024, 1024, 255, 248, 195, 255),
    VTX(-410, 970, -660, 1024, -1024, 44, 44, 44, 255),
    VTX(-410, 970, -660, 1024, -11264, 44, 44, 44, 255),
    VTX(-590, 970, -510, -1024, -9344, 255, 248, 195, 255),
    VTX(-590, 970, 150, -1024, -896, 255, 248, 195, 255),
    VTX(-410, 970, 300, 1024, 1024, 44, 44, 44, 255),
    VTX(-410, 970, 300, 1024, -1024, 44, 44, 44, 255),
    VTX(-590, 970, 150, -1024, 1024, 255, 248, 195, 255),
    VTX(-590, 970, 300, 1024, 1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_017648[8] = {
    VTX(-590, 100, 180, 1638, 0, 76, 76, 76, 255),
    VTX(-590, 100, 300, 0, 0, 135, 135, 135, 255),
    VTX(-590, 0, 300, 0, 1024, 135, 135, 135, 255),
    VTX(-590, 0, 180, 1638, 1024, 76, 76, 76, 255),
    VTX(-590, 100, -660, 6554, 0, 163, 163, 163, 255),
    VTX(-590, 100, -540, 4915, 0, 44, 44, 44, 255),
    VTX(-590, 0, -540, 4915, 1024, 76, 76, 76, 255),
    VTX(-590, 0, -660, 6554, 1024, 163, 163, 163, 255),
}; 

static Vtx water_temple_room_00Vtx_0176C8[23] = {
    VTX(-1201, 2190, -135, -341, 0, 255, 248, 195, 255),
    VTX(-1231, 2150, -150, 0, 2048, 44, 44, 44, 255),
    VTX(-1231, 2150, -210, 1024, 2048, 44, 44, 44, 255),
    VTX(-1201, 2190, -225, 1365, 0, 255, 248, 195, 255),
    VTX(-410, 850, 300, -7168, 0, 53, 53, 53, 255),
    VTX(-590, 850, 300, -7168, 2048, 44, 44, 44, 255),
    VTX(-590, 850, -180, -3072, 2048, 163, 163, 163, 255),
    VTX(-410, 850, -660, 1024, 0, 53, 53, 53, 255),
    VTX(-590, 850, -660, 1024, 2048, 44, 44, 44, 255),
    VTX(-590, 2910, 300, -171, -1, 25, 25, 25, 255),
    VTX(-1123, 2774, 195, 424, 4281, 25, 25, 25, 255),
    VTX(-1123, 2774, -555, 4696, 4281, 135, 135, 135, 255),
    VTX(-590, 2910, -660, 5291, -1, 25, 25, 25, 255),
    VTX(-590, 1330, 210, 144, 2048, 76, 76, 76, 255),
    VTX(-410, 1390, 300, 1134, 3, 0, 0, 0, 255),
    VTX(-590, 1390, 300, 144, 3, 0, 0, 0, 255),
    VTX(-410, 1390, 300, -8113, 3, 0, 0, 0, 255),
    VTX(-590, 1330, 210, -7168, 2048, 135, 135, 135, 255),
    VTX(-590, 1330, -570, 1024, 2048, 163, 163, 163, 255),
    VTX(-410, 1390, -660, 1969, 3, 0, 0, 0, 255),
    VTX(-590, 1390, -660, 144, 3, 0, 0, 0, 255),
    VTX(-410, 1390, -660, 1134, 3, 0, 0, 0, 255),
    VTX(-590, 1330, -570, 144, 2048, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_017838[8] = {
    VTX(-1231, 0, -1180, 0, 0, 0, 0, 0, 0),
    VTX(-410, 0, -1180, 0, 0, 0, 0, 0, 0),
    VTX(-1231, 4000, -1180, 0, 0, 0, 0, 0, 0),
    VTX(-410, 4000, -1180, 0, 0, 0, 0, 0, 0),
    VTX(-1231, 0, 1500, 0, 0, 0, 0, 0, 0),
    VTX(-410, 0, 1500, 0, 0, 0, 0, 0, 0),
    VTX(-1231, 4000, 1500, 0, 0, 0, 0, 0, 0),
    VTX(-410, 4000, 1500, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x0178B8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_017838[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0180F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_015DE8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0188F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_015E68[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 1, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 9, 13, 10, 0),
    gsSP2Triangles(13, 12, 10, 0, 14, 15, 16, 0),
    gsSP2Triangles(15, 17, 18, 0, 15, 18, 16, 0),
    gsSP2Triangles(17, 19, 18, 0, 14, 16, 20, 0),
    gsSP2Triangles(16, 21, 20, 0, 18, 19, 22, 0),
    gsSP2Triangles(18, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 3, 0, 2, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&water_temple_room_00Vtx_016068[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 3, 5, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_016168[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0190F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0161E8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(5, 24, 25, 0, 5, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&water_temple_room_00Vtx_0161E8[31], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 2, 0, 12, 2, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 23, 25, 26, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_00Vtx_016588[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_01A0F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_00Vtx_016648[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_01A8F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_016688[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 1, 0, 8, 1, 6, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSPVertex(&water_temple_room_00Vtx_016688[30], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_01B8F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_016968[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 22, 24, 25, 0),
    gsSP2Triangles(26, 11, 13, 0, 27, 28, 29, 0),
    gsSP2Triangles(27, 29, 30, 0, 9, 31, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_01C8F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_016B68[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_01D8F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_016BE8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_016DE8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 23, 21, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 27, 25, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&water_temple_room_00Vtx_016DE8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(24, 26, 25, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&water_temple_room_00Vtx_016DE8[62], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_017248[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_01E0F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_017308[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 4, 6, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 16, 18, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_01E8F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0174C8[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_01F0F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_017648[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0200F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0176C8[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 6, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 11, 12, 0),
    gsSP2Triangles(7, 4, 6, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_0180F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0180F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0188F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0188F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0190F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0190F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_01A0F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_01A0F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_01A8F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_01A8F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_01B8F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_01B8F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_01C8F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_01C8F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_01D8F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_01D8F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_01E0F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_01E0F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_01E8F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_01E8F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_01F0F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_01F0F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0200F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0200F8.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_0208F8[4] = {
    VTX(1242, 580, -662, 7680, 0, 163, 163, 163, 255),
    VTX(1242, 520, -662, 7680, 512, 163, 163, 163, 255),
    VTX(278, 520, -662, -546, 512, 179, 179, 254, 255),
    VTX(278, 580, -662, -546, 0, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_020938[8] = {
    VTX(428, 1720, -512, 5120, 512, 179, 179, 254, 255),
    VTX(428, 1780, -512, 5120, 0, 179, 179, 254, 255),
    VTX(1092, 1780, -512, -546, 0, 163, 163, 163, 255),
    VTX(1092, 1720, -512, -546, 512, 163, 163, 163, 255),
    VTX(368, 1120, -572, 5888, 512, 179, 179, 254, 255),
    VTX(368, 1180, -572, 5888, 0, 179, 179, 254, 255),
    VTX(1152, 1180, -572, -802, 0, 163, 163, 163, 255),
    VTX(1152, 1120, -572, -802, 512, 163, 163, 163, 255),
}; 

static Vtx water_temple_room_00Vtx_0209B8[12] = {
    VTX(1120, 580, -660, 0, 1024, 179, 179, 254, 255),
    VTX(400, 580, -660, 6144, 1024, 179, 179, 254, 255),
    VTX(400, 850, -660, 6144, -1024, 44, 44, 44, 255),
    VTX(1120, 850, -660, 0, -1024, 44, 44, 44, 255),
    VTX(550, 2410, -450, 2048, -3072, 44, 44, 44, 255),
    VTX(740, 2410, -450, 0, -3072, 44, 44, 44, 255),
    VTX(740, 2230, -450, 0, -1024, 179, 179, 254, 255),
    VTX(550, 2230, -450, 2048, -1024, 179, 179, 254, 255),
    VTX(780, 2410, -450, 2048, -3072, 44, 44, 44, 255),
    VTX(970, 2410, -450, 0, -3072, 44, 44, 44, 255),
    VTX(970, 2230, -450, 0, -1024, 179, 179, 254, 255),
    VTX(780, 2230, -450, 2048, -1024, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_020A78[28] = {
    VTX(490, 1870, -510, 2048, -2048, 44, 44, 44, 255),
    VTX(740, 1870, -510, 0, -2048, 44, 44, 44, 255),
    VTX(740, 1510, -510, 0, 2048, 255, 248, 195, 255),
    VTX(490, 1510, -510, 2048, 2048, 255, 248, 195, 255),
    VTX(780, 1870, -510, 2048, -2048, 44, 44, 44, 255),
    VTX(1030, 1870, -510, 0, -2048, 44, 44, 44, 255),
    VTX(1030, 1510, -510, 0, 2048, 255, 248, 195, 255),
    VTX(780, 1510, -510, 2048, 2048, 255, 248, 195, 255),
    VTX(460, 1330, -570, 2048, -2048, 44, 44, 44, 255),
    VTX(740, 1330, -570, 0, -2048, 44, 44, 44, 255),
    VTX(740, 970, -570, 0, 2048, 255, 248, 195, 255),
    VTX(460, 970, -570, 2048, 2048, 255, 248, 195, 255),
    VTX(780, 1330, -570, 2048, -2048, 44, 44, 44, 255),
    VTX(1060, 1330, -570, 0, -2048, 44, 44, 44, 255),
    VTX(1060, 970, -570, 0, 2048, 255, 248, 195, 255),
    VTX(780, 970, -570, 2048, 2048, 255, 248, 195, 255),
    VTX(970, 2230, -450, 0, -2048, 53, 53, 53, 255),
    VTX(970, 2050, -450, 0, 2048, 255, 248, 195, 255),
    VTX(780, 2050, -450, 2048, 2048, 255, 248, 195, 255),
    VTX(780, 2230, -450, 2048, -2048, 53, 53, 53, 255),
    VTX(740, 2230, -450, 0, -2048, 53, 53, 53, 255),
    VTX(740, 2050, -450, 0, 2048, 255, 248, 195, 255),
    VTX(550, 2050, -450, 2048, 2048, 255, 248, 195, 255),
    VTX(550, 2230, -450, 2048, -2048, 53, 53, 53, 255),
    VTX(400, 580, -660, 6144, -2048, 25, 25, 25, 255),
    VTX(1120, 580, -660, 0, -2048, 25, 25, 25, 255),
    VTX(1120, 100, -660, 0, 2048, 255, 248, 195, 255),
    VTX(400, 100, -660, 6144, 2048, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_020C38[32] = {
    VTX(740, 1330, -570, 0, -5120, 44, 44, 44, 255),
    VTX(780, 1330, -570, 1024, -5120, 44, 44, 44, 255),
    VTX(780, 970, -570, 1024, 1024, 255, 248, 195, 255),
    VTX(740, 970, -570, 0, 1024, 255, 248, 195, 255),
    VTX(430, 1870, -510, 0, -5120, 44, 44, 44, 255),
    VTX(490, 1870, -510, 1024, -5120, 44, 44, 44, 255),
    VTX(490, 1510, -510, 1024, 1024, 255, 248, 195, 255),
    VTX(430, 1510, -510, 0, 1024, 255, 248, 195, 255),
    VTX(1030, 1870, -510, -9216, -5120, 44, 44, 44, 255),
    VTX(1090, 1870, -510, -10240, -5120, 44, 44, 44, 255),
    VTX(1030, 1510, -510, -9216, 1024, 255, 248, 195, 255),
    VTX(1090, 1510, -510, -10240, 1024, 135, 135, 135, 255),
    VTX(1030, 2410, -450, 0, -5120, 44, 44, 44, 255),
    VTX(1030, 2050, -450, 0, 1024, 255, 248, 195, 255),
    VTX(970, 2050, -450, 1024, 1024, 255, 248, 195, 255),
    VTX(970, 2410, -450, 1024, -5120, 44, 44, 44, 255),
    VTX(370, 1330, -570, 1024, -5000, 44, 44, 44, 255),
    VTX(460, 1330, -570, 0, -5000, 44, 44, 44, 255),
    VTX(460, 970, -570, 0, 1024, 255, 248, 195, 255),
    VTX(370, 970, -570, 1024, 1024, 255, 248, 195, 255),
    VTX(1120, 850, -660, 1024, -9135, 44, 44, 44, 255),
    VTX(1240, 850, -660, 0, -9135, 44, 44, 44, 255),
    VTX(1240, 100, -660, 0, 1024, 255, 248, 195, 255),
    VTX(1120, 100, -660, 1024, 1024, 255, 248, 195, 255),
    VTX(280, 850, -660, 0, -9135, 44, 44, 44, 255),
    VTX(400, 850, -660, 1024, -9135, 44, 44, 44, 255),
    VTX(400, 100, -660, 1024, 1024, 255, 248, 195, 255),
    VTX(280, 100, -660, 0, 1024, 255, 248, 195, 255),
    VTX(1060, 1330, -570, 1024, -5011, 44, 44, 44, 255),
    VTX(1150, 1330, -570, 0, -5011, 44, 44, 44, 255),
    VTX(1060, 970, -570, 1024, 1024, 255, 248, 195, 255),
    VTX(1150, 970, -570, 0, 1024, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_00Vtx_020E38[12] = {
    VTX(490, 2050, -450, 0, 1024, 255, 248, 195, 255),
    VTX(490, 2410, -450, 0, -5120, 44, 44, 44, 255),
    VTX(550, 2410, -450, 1024, -5120, 44, 44, 44, 255),
    VTX(550, 2050, -450, 1024, 1024, 255, 248, 195, 255),
    VTX(740, 2410, -450, 0, -4906, 44, 44, 44, 255),
    VTX(780, 2410, -450, 1024, -4906, 44, 44, 44, 255),
    VTX(780, 2050, -450, 1024, 1024, 255, 248, 195, 255),
    VTX(740, 2050, -450, 0, 1024, 255, 248, 195, 255),
    VTX(740, 1870, -510, 0, -5120, 44, 44, 44, 255),
    VTX(780, 1870, -510, 1024, -5120, 44, 44, 44, 255),
    VTX(780, 1510, -510, 1024, 1024, 255, 248, 195, 255),
    VTX(740, 1510, -510, 0, 1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_020EF8[8] = {
    VTX(1210, 2050, -630, 0, -1024, 44, 44, 44, 255),
    VTX(1210, 1930, -630, 0, 1024, 163, 163, 163, 255),
    VTX(310, 1930, -630, 10240, 1024, 255, 248, 195, 255),
    VTX(310, 2050, -630, 10240, -1024, 44, 44, 44, 255),
    VTX(1270, 1510, -690, 0, -1024, 44, 44, 44, 255),
    VTX(1270, 1390, -690, 0, 1024, 163, 163, 163, 255),
    VTX(250, 1390, -690, 16451, 1024, 255, 248, 195, 255),
    VTX(250, 1510, -690, 16451, -1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_020F78[4] = {
    VTX(1240, 0, -660, 6554, 1024, 255, 248, 195, 255),
    VTX(280, 0, -660, 0, 1024, 255, 248, 195, 255),
    VTX(280, 100, -660, 0, 0, 135, 135, 135, 255),
    VTX(1240, 100, -660, 6554, 0, 135, 135, 135, 255),
}; 

static Vtx water_temple_room_00Vtx_020FB8[16] = {
    VTX(1210, 2530, -630, -2048, 2, 44, 44, 44, 255),
    VTX(1030, 2410, -450, 0, 2048, 76, 76, 76, 255),
    VTX(310, 2530, -630, 8192, 2, 44, 44, 44, 255),
    VTX(1240, 850, -660, 0, 2048, 76, 76, 76, 255),
    VTX(280, 850, -660, 8192, 2048, 135, 135, 135, 255),
    VTX(100, 970, -840, 9728, 0, 44, 44, 44, 255),
    VTX(1420, 970, -840, -1536, 0, 44, 44, 44, 255),
    VTX(490, 2410, -450, 6144, 2048, 135, 135, 135, 255),
    VTX(1270, 1390, -690, -1365, 11, 0, 0, 0, 255),
    VTX(1150, 1330, -570, 0, 2048, 76, 76, 76, 255),
    VTX(370, 1330, -570, 8875, 2048, 135, 135, 135, 255),
    VTX(250, 1390, -690, 10240, 11, 0, 0, 0, 255),
    VTX(1210, 1930, -630, -1024, 0, 44, 44, 44, 255),
    VTX(1090, 1870, -510, 0, 2048, 76, 76, 76, 255),
    VTX(430, 1870, -510, 5632, 2048, 135, 135, 135, 255),
    VTX(310, 1930, -630, 6656, 0, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_0210B8[8] = {
    VTX(100, 0, -840, 0, 0, 0, 0, 0, 0),
    VTX(1420, 0, -840, 0, 0, 0, 0, 0, 0),
    VTX(100, 2530, -840, 0, 0, 0, 0, 0, 0),
    VTX(1420, 2530, -840, 0, 0, 0, 0, 0, 0),
    VTX(100, 0, -450, 0, 0, 0, 0, 0, 0),
    VTX(1420, 0, -450, 0, 0, 0, 0, 0, 0),
    VTX(100, 2530, -450, 0, 0, 0, 0, 0, 0),
    VTX(1420, 2530, -450, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x021138[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_0210B8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_0208F8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsSPVertex(&water_temple_room_00Vtx_020938[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0214A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_00Vtx_0209B8[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_021CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_020A78[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_022CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_020C38[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&water_temple_room_00Vtx_020E38[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0234A8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_020EF8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_023CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 1, 1, 6, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_020F78[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_024CA8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_020FB8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 1, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_0214A8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0214A8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_021CA8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_021CA8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_022CA8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_022CA8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0234A8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0234A8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_023CA8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_023CA8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_024CA8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_024CA8.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_0254A8[4] = {
    VTX(1080, 810, -1180, 8192, 1024, 204, 204, 204, 255),
    VTX(1080, 970, -1180, 8192, -1024, 53, 53, 53, 255),
    VTX(720, 970, -1180, 0, -1024, 53, 53, 53, 255),
    VTX(720, 810, -1180, 0, 1024, 204, 204, 204, 255),
}; 

static Vtx water_temple_room_00Vtx_0254E8[32] = {
    VTX(720, 1250, -1180, 1260, -3755, 25, 25, 25, 255),
    VTX(720, 970, -1180, 1260, 1024, 25, 25, 25, 255),
    VTX(770, 970, -1380, 4779, 1024, 135, 135, 135, 255),
    VTX(770, 970, -1380, -1707, -1707, 44, 44, 44, 255),
    VTX(720, 970, -1180, -2560, 1707, 25, 25, 25, 255),
    VTX(900, 970, -1380, 512, -1707, 163, 163, 163, 255),
    VTX(1080, 970, -1180, 3584, 1707, 25, 25, 25, 255),
    VTX(1030, 970, -1380, 2731, -1707, 44, 44, 44, 255),
    VTX(1030, 970, -1380, -786, 683, 135, 135, 135, 255),
    VTX(1080, 1250, -1180, 2731, -4096, 25, 25, 25, 255),
    VTX(1030, 1170, -1380, -786, -2731, 44, 44, 44, 255),
    VTX(770, 1170, -1380, 4779, -2389, 44, 44, 44, 255),
    VTX(1030, 1170, -1380, 3072, 1024, 135, 135, 135, 255),
    VTX(1080, 1250, -1180, 3925, -2652, 25, 25, 25, 255),
    VTX(720, 1250, -1180, -2219, -2652, 25, 25, 25, 255),
    VTX(770, 1170, -1380, -1365, 1024, 53, 53, 53, 255),
    VTX(720, 1750, -1180, -957, -2560, 25, 25, 25, 255),
    VTX(770, 1510, -1380, 2560, 1536, 135, 135, 135, 255),
    VTX(770, 1700, -1380, 2560, -1707, 44, 44, 44, 255),
    VTX(1029, 1510, -1380, -1536, 2048, 135, 135, 135, 255),
    VTX(1080, 1510, -1180, 1987, 2048, 25, 25, 25, 255),
    VTX(1080, 1750, -1180, 1987, -2048, 25, 25, 25, 255),
    VTX(1029, 1700, -1380, -1536, -1195, 44, 44, 44, 255),
    VTX(1029, 1700, -1380, 3222, 1982, 135, 135, 135, 255),
    VTX(1080, 1750, -1180, 4096, -1536, 25, 25, 25, 255),
    VTX(720, 1750, -1180, -2048, -1536, 25, 25, 25, 255),
    VTX(770, 1700, -1380, -1199, 1982, 53, 53, 53, 255),
    VTX(1080, 970, -1180, 2731, 683, 25, 25, 25, 255),
    VTX(720, 1510, -1180, -957, 1536, 25, 25, 25, 255),
    VTX(1080, 1510, -1180, 3434, 1877, 25, 25, 25, 255),
    VTX(1029, 1510, -1380, 2560, -1536, 44, 44, 44, 255),
    VTX(900, 1510, -1380, 362, -1536, 163, 163, 163, 255),
}; 

static Vtx water_temple_room_00Vtx_0256E8[4] = {
    VTX(770, 1510, -1380, -1862, -1536, 44, 44, 44, 255),
    VTX(720, 1510, -1180, -2710, 1877, 25, 25, 25, 255),
    VTX(900, 1510, -1380, 362, -1536, 163, 163, 163, 255),
    VTX(1080, 1510, -1180, 3434, 1877, 25, 25, 25, 255),
}; 

static Vtx water_temple_room_00Vtx_025728[22] = {
    VTX(-590, 4000, -1180, 5120, -7680, 0, 0, 0, 255),
    VTX(-590, 1750, -1180, 5120, 0, 53, 53, 53, 255),
    VTX(1840, 1750, -1180, 0, 0, 53, 53, 53, 255),
    VTX(1840, 4000, -1180, 0, -7680, 0, 0, 0, 255),
    VTX(-590, 550, -1180, 5120, 2048, 53, 53, 53, 255),
    VTX(720, 810, -1180, 2360, 1161, 204, 204, 204, 255),
    VTX(-590, 1150, -1180, 5120, 0, 53, 53, 53, 255),
    VTX(720, 1150, -1180, 2360, 0, 53, 53, 53, 255),
    VTX(1840, 550, -1180, 0, 2048, 53, 53, 53, 255),
    VTX(1080, 810, -1180, 1601, 1161, 204, 204, 204, 255),
    VTX(1840, 1150, -1180, 0, 0, 53, 53, 53, 255),
    VTX(1080, 1150, -1180, 1601, 0, 53, 53, 53, 255),
    VTX(1080, 1250, -1180, 1601, 1707, 76, 76, 76, 255),
    VTX(1080, 1510, -1180, 1601, 819, 53, 53, 53, 255),
    VTX(720, 1510, -1180, 2360, 819, 53, 53, 53, 255),
    VTX(720, 1250, -1180, 2360, 1707, 76, 76, 76, 255),
    VTX(-590, 1150, -1180, 5120, 2048, 53, 53, 53, 255),
    VTX(720, 1150, -1180, 2360, 2048, 53, 53, 53, 255),
    VTX(720, 1750, -1180, 2360, 0, 76, 76, 76, 255),
    VTX(1080, 1150, -1180, 1601, 2048, 53, 53, 53, 255),
    VTX(1840, 1150, -1180, 0, 2048, 53, 53, 53, 255),
    VTX(1080, 1750, -1180, 1601, 0, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_025888[32] = {
    VTX(1078, 1710, -1178, 11018, 512, 163, 163, 163, 255),
    VTX(1838, 1710, -1178, 18801, 512, 179, 179, 254, 255),
    VTX(1838, 1790, -1178, 18801, 0, 179, 179, 254, 255),
    VTX(1078, 1790, -1178, 11018, 0, 163, 163, 163, 255),
    VTX(-588, 510, -1178, -5286, 512, 179, 179, 254, 255),
    VTX(1838, 510, -1178, 10240, 512, 179, 179, 254, 255),
    VTX(1838, 590, -1178, 10240, 0, 179, 179, 254, 255),
    VTX(-588, 590, -1178, -5286, 0, 179, 179, 254, 255),
    VTX(1078, 1110, -1178, 8166, 512, 163, 163, 163, 255),
    VTX(1838, 1110, -1178, 13030, 512, 179, 179, 254, 255),
    VTX(1838, 1190, -1178, 13030, 0, 179, 179, 254, 255),
    VTX(1078, 1190, -1178, 8166, 0, 163, 163, 163, 255),
    VTX(-588, 1110, -1178, -2496, 512, 179, 179, 254, 255),
    VTX(722, 1110, -1178, 5888, 512, 163, 163, 163, 255),
    VTX(722, 1190, -1178, 5888, 0, 163, 163, 163, 255),
    VTX(-588, 1190, -1178, -2496, 0, 179, 179, 254, 255),
    VTX(-588, 1710, -1178, -6042, 512, 179, 179, 254, 255),
    VTX(722, 1710, -1178, 7373, 512, 163, 163, 163, 255),
    VTX(722, 1790, -1178, 7373, 0, 163, 163, 163, 255),
    VTX(-588, 1790, -1178, -6042, 0, 179, 179, 254, 255),
    VTX(1028, 1130, -1378, 2560, 512, 179, 179, 254, 255),
    VTX(1078, 1130, -1178, 0, 512, 163, 163, 163, 255),
    VTX(1078, 1170, -1178, 0, 0, 163, 163, 163, 255),
    VTX(1028, 1170, -1378, 2560, 0, 179, 179, 254, 255),
    VTX(772, 1170, -1378, 2560, 0, 163, 163, 163, 255),
    VTX(722, 1170, -1178, 0, 0, 163, 163, 163, 255),
    VTX(722, 1130, -1178, 0, 512, 163, 163, 163, 255),
    VTX(772, 1130, -1378, 2560, 512, 163, 163, 163, 255),
    VTX(1028, 1170, -1378, 3789, 0, 179, 179, 254, 255),
    VTX(772, 1170, -1378, -768, 0, 163, 163, 163, 255),
    VTX(772, 1130, -1378, -768, 512, 163, 163, 163, 255),
    VTX(1028, 1130, -1378, 3789, 512, 179, 179, 254, 255),
}; 

static Vtx water_temple_room_00Vtx_025A88[8] = {
    VTX(870, 1170, -1380, 311, -763, 44, 44, 44, 255),
    VTX(870, 1070, -1380, 311, 763, 255, 248, 195, 255),
    VTX(930, 1070, -1380, 1737, 763, 255, 248, 195, 255),
    VTX(930, 1170, -1380, 1737, -763, 44, 44, 44, 255),
    VTX(870, 1700, -1380, 311, -763, 44, 44, 44, 255),
    VTX(870, 1610, -1380, 311, 763, 255, 248, 195, 255),
    VTX(930, 1610, -1380, 1737, 763, 255, 248, 195, 255),
    VTX(930, 1700, -1380, 1737, -763, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_025B08[16] = {
    VTX(930, 1170, -1380, 0, -2048, 44, 44, 44, 255),
    VTX(930, 970, -1380, 0, 2048, 255, 248, 195, 255),
    VTX(1030, 1170, -1380, 2048, -2048, 44, 44, 44, 255),
    VTX(930, 1510, -1380, 0, 2048, 255, 248, 195, 255),
    VTX(1029, 1510, -1380, 2048, 2048, 44, 44, 44, 255),
    VTX(1029, 1700, -1380, 2048, -2048, 44, 44, 44, 255),
    VTX(930, 1700, -1380, 0, -2048, 44, 44, 44, 255),
    VTX(770, 1700, -1380, 0, -2048, 44, 44, 44, 255),
    VTX(770, 1510, -1380, 0, 2048, 44, 44, 44, 255),
    VTX(870, 1510, -1380, 2048, 2048, 255, 248, 195, 255),
    VTX(870, 1700, -1380, 2048, -2048, 44, 44, 44, 255),
    VTX(770, 1170, -1380, 0, -2048, 44, 44, 44, 255),
    VTX(770, 970, -1380, 0, 2048, 44, 44, 44, 255),
    VTX(870, 970, -1380, 2048, 2048, 255, 248, 195, 255),
    VTX(870, 1170, -1380, 2048, -2048, 44, 44, 44, 255),
    VTX(1030, 970, -1380, 2048, 2048, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_025C08[4] = {
    VTX(-590, 550, -1180, 5120, 0, 53, 53, 53, 255),
    VTX(-590, 0, -1180, 5120, 2048, 76, 76, 76, 255),
    VTX(1840, 0, -1180, 0, 2048, 76, 76, 76, 255),
    VTX(1840, 550, -1180, 0, 0, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_025C48[32] = {
    VTX(870, 1510, -1400, -1024, 1024, 0, 0, 0, 255),
    VTX(870, 1510, -1380, -1024, 512, 255, 248, 195, 255),
    VTX(930, 1510, -1380, 2048, 512, 255, 248, 195, 255),
    VTX(930, 1510, -1400, 2048, 1024, 0, 0, 0, 255),
    VTX(930, 970, -1400, 2560, 512, 0, 0, 0, 255),
    VTX(930, 1070, -1380, -2560, 1024, 255, 248, 195, 255),
    VTX(930, 1070, -1400, -2560, 512, 0, 0, 0, 255),
    VTX(930, 970, -1380, 2560, 1024, 255, 248, 195, 255),
    VTX(930, 1070, -1400, 2048, 1024, 0, 0, 0, 255),
    VTX(930, 1070, -1380, 2048, 512, 255, 248, 195, 255),
    VTX(870, 1070, -1380, -1024, 512, 255, 248, 195, 255),
    VTX(870, 1070, -1400, -1024, 1024, 0, 0, 0, 255),
    VTX(870, 1070, -1380, -2560, 1024, 255, 248, 195, 255),
    VTX(870, 970, -1380, 2560, 1024, 255, 248, 195, 255),
    VTX(870, 970, -1400, 2560, 512, 0, 0, 0, 255),
    VTX(870, 1070, -1400, -2560, 512, 0, 0, 0, 255),
    VTX(870, 970, -1400, -1024, 1024, 0, 0, 0, 255),
    VTX(870, 970, -1380, -1024, 512, 255, 248, 195, 255),
    VTX(930, 970, -1380, 2048, 512, 255, 248, 195, 255),
    VTX(930, 970, -1400, 2048, 1024, 0, 0, 0, 255),
    VTX(930, 1510, -1400, 2560, 512, 0, 0, 0, 255),
    VTX(930, 1510, -1380, 2560, 1024, 255, 248, 195, 255),
    VTX(930, 1610, -1380, -2560, 1024, 255, 248, 195, 255),
    VTX(930, 1610, -1400, -2560, 512, 0, 0, 0, 255),
    VTX(930, 1610, -1400, 2048, 1024, 0, 0, 0, 255),
    VTX(930, 1610, -1380, 2048, 512, 255, 248, 195, 255),
    VTX(870, 1610, -1380, -1024, 512, 255, 248, 195, 255),
    VTX(870, 1610, -1400, -1024, 1024, 0, 0, 0, 255),
    VTX(870, 1610, -1380, -2560, 1024, 255, 248, 195, 255),
    VTX(870, 1510, -1380, 2560, 1024, 255, 248, 195, 255),
    VTX(870, 1510, -1400, 2560, 512, 0, 0, 0, 255),
    VTX(870, 1610, -1400, -2560, 512, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_025E48[8] = {
    VTX(-590, 0, -1400, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, -1400, 0, 0, 0, 0, 0, 0),
    VTX(-590, 4000, -1400, 0, 0, 0, 0, 0, 0),
    VTX(1840, 4000, -1400, 0, 0, 0, 0, 0, 0),
    VTX(-590, 0, -1178, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, -1178, 0, 0, 0, 0, 0, 0),
    VTX(-590, 4000, -1178, 0, 0, 0, 0, 0, 0),
    VTX(1840, 4000, -1178, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x025EC8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_025E48[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0262C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_0254A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_026AC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_0254E8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 6, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 0, 2, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(19, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 8, 27, 9, 0),
    gsSP2Triangles(16, 28, 17, 0, 29, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_0256E8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0272C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_025728[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(10, 9, 8, 0, 10, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(1, 16, 17, 0, 1, 17, 18, 0),
    gsSP2Triangles(19, 20, 2, 0, 19, 2, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_00Vtx_025888[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0282C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_00Vtx_025A88[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0292C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_025B08[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 3, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 11, 13, 0, 1, 15, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_02A2C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_025C08[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_02B2C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_025C48[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 28, 30, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_0262C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0262C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_026AC0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_026AC0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0272C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0272C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0282C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0282C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0292C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0292C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_02A2C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_02A2C0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_02B2C0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_02B2C0.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_02BAC0[19] = {
    VTX(1840, 850, 1500, 4096, 1024, 53, 53, 53, 255),
    VTX(1840, 1050, 1500, 4096, 341, 53, 53, 53, 255),
    VTX(1840, 1050, 1280, 3760, 341, 76, 76, 76, 255),
    VTX(1840, 850, 1280, 3760, 1024, 163, 163, 163, 255),
    VTX(1840, 4000, -1180, 0, -3438, 0, 0, 0, 255),
    VTX(1840, 1750, -1180, 0, 2048, 53, 53, 53, 255),
    VTX(1840, 1750, 1500, 4096, 2048, 53, 53, 53, 255),
    VTX(1840, 4000, 1500, 4096, -3438, 0, 0, 0, 255),
    VTX(1840, 1750, -1180, 0, 0, 53, 53, 53, 255),
    VTX(1840, 1150, -1180, 0, 2048, 53, 53, 53, 255),
    VTX(1840, 1150, 1500, 4096, 2048, 53, 53, 53, 255),
    VTX(1840, 1750, 1500, 4096, 0, 53, 53, 53, 255),
    VTX(1840, 850, -1180, 0, 1024, 53, 53, 53, 255),
    VTX(1840, 850, 1040, 3393, 1024, 163, 163, 163, 255),
    VTX(1840, 1050, 1040, 3393, 341, 76, 76, 76, 255),
    VTX(1840, 1150, -1180, 0, 0, 53, 53, 53, 255),
    VTX(1840, 550, -1180, 0, 2048, 53, 53, 53, 255),
    VTX(1840, 550, 1500, 4096, 2048, 53, 53, 53, 255),
    VTX(1840, 1150, 1500, 4096, 0, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_02BBF0[12] = {
    VTX(1838, 1790, 1498, 16009, 0, 179, 179, 254, 255),
    VTX(1838, 1790, -1178, -6827, 0, 179, 179, 254, 255),
    VTX(1838, 1710, -1178, -6827, 512, 179, 179, 254, 255),
    VTX(1838, 1710, 1498, 16009, 512, 179, 179, 254, 255),
    VTX(1838, 1190, 1498, -6886, 0, 163, 163, 163, 255),
    VTX(1838, 1190, -1178, 10240, 0, 179, 179, 254, 255),
    VTX(1838, 1110, -1178, 10240, 512, 179, 179, 254, 255),
    VTX(1838, 1110, 1498, -6886, 512, 163, 163, 163, 255),
    VTX(1838, 590, 1498, -5606, 0, 163, 163, 163, 255),
    VTX(1838, 590, -1178, 11520, 0, 179, 179, 254, 255),
    VTX(1838, 510, -1178, 11520, 512, 179, 179, 254, 255),
    VTX(1838, 510, 1498, -5606, 512, 163, 163, 163, 255),
}; 

static Vtx water_temple_room_00Vtx_02BCB0[4] = {
    VTX(1840, 950, 1130, 340, 751, 255, 239, 178, 255),
    VTX(1840, 950, 1190, 1708, 751, 255, 239, 178, 255),
    VTX(1840, 1050, 1190, 1708, -751, 53, 53, 53, 255),
    VTX(1840, 1050, 1130, 340, -751, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_02BCF0[8] = {
    VTX(1840, 1050, 1130, 2048, -2048, 53, 53, 53, 255),
    VTX(1840, 1050, 1040, 0, -2048, 53, 53, 53, 255),
    VTX(1840, 850, 1130, 2048, 2048, 135, 135, 135, 255),
    VTX(1840, 850, 1040, 0, 2048, 135, 135, 135, 255),
    VTX(1840, 850, 1280, 4096, 2048, 163, 163, 163, 255),
    VTX(1840, 1050, 1280, 4096, -2048, 53, 53, 53, 255),
    VTX(1840, 850, 1190, 2048, 2048, 135, 135, 135, 255),
    VTX(1840, 1050, 1190, 2048, -2048, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_02BD70[10] = {
    VTX(1840, 550, -540, 978, 0, 53, 53, 53, 255),
    VTX(1840, 550, -1180, 0, 0, 53, 53, 53, 255),
    VTX(1840, 0, -1180, 0, 2048, 76, 76, 76, 255),
    VTX(1840, 0, -540, 978, 2048, 76, 76, 76, 255),
    VTX(1840, 550, 180, 2079, 0, 53, 53, 53, 255),
    VTX(1840, 340, -540, 978, 782, 135, 135, 135, 255),
    VTX(1840, 340, 180, 2079, 782, 53, 53, 53, 255),
    VTX(1840, 0, 1500, 4096, 2048, 76, 76, 76, 255),
    VTX(1840, 550, 1500, 4096, 0, 53, 53, 53, 255),
    VTX(1840, 0, 180, 2079, 2048, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_02BE10[16] = {
    VTX(1840, 950, 1130, -2560, 1024, 255, 248, 195, 255),
    VTX(1840, 850, 1130, 2560, 1024, 135, 135, 135, 255),
    VTX(1860, 850, 1130, 2560, 512, 0, 0, 0, 255),
    VTX(1860, 950, 1190, 2048, 1024, 0, 0, 0, 255),
    VTX(1840, 950, 1190, 2048, 512, 255, 248, 195, 255),
    VTX(1840, 950, 1130, -1024, 512, 255, 248, 195, 255),
    VTX(1860, 950, 1130, -1024, 1024, 0, 0, 0, 255),
    VTX(1860, 850, 1130, -1024, 1024, 0, 0, 0, 255),
    VTX(1840, 850, 1130, -1024, 512, 135, 135, 135, 255),
    VTX(1840, 850, 1190, 2048, 512, 135, 135, 135, 255),
    VTX(1860, 850, 1190, 2048, 1024, 0, 0, 0, 255),
    VTX(1860, 850, 1190, 2560, 512, 0, 0, 0, 255),
    VTX(1840, 850, 1190, 2560, 1024, 135, 135, 135, 255),
    VTX(1840, 950, 1190, -2560, 1024, 255, 248, 195, 255),
    VTX(1860, 950, 1190, -2560, 512, 0, 0, 0, 255),
    VTX(1860, 950, 1130, -2560, 512, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_02BF10[8] = {
    VTX(1838, 0, -1180, 0, 0, 0, 0, 0, 0),
    VTX(1860, 0, -1180, 0, 0, 0, 0, 0, 0),
    VTX(1838, 4000, -1180, 0, 0, 0, 0, 0, 0),
    VTX(1860, 4000, -1180, 0, 0, 0, 0, 0, 0),
    VTX(1838, 0, 1500, 0, 0, 0, 0, 0, 0),
    VTX(1860, 0, 1500, 0, 0, 0, 0, 0, 0),
    VTX(1838, 4000, 1500, 0, 0, 0, 0, 0, 0),
    VTX(1860, 4000, 1500, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x02BF90[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_02BF10[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_02C258, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_02BAC0[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(13, 12, 16, 0, 17, 0, 3, 0),
    gsSP2Triangles(17, 3, 13, 0, 17, 13, 16, 0),
    gsSP2Triangles(1, 18, 2, 0, 15, 14, 2, 0),
    gsSP1Triangle(15, 2, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_00Vtx_02BBF0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_02D258, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_00Vtx_02BCB0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_02E258, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_02BCF0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_02F258, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_02BD70[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 0, 5, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 4, 0, 7, 4, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_030258, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_02BE10[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 13, 14, 0, 15, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_02C258[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_02C258.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_02D258[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_02D258.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_02E258[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_02E258.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_02F258[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_02F258.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_030258[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_030258.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_030A58[4] = {
    VTX(136, 850, 1497, 0, 1024, 103, 103, 158, 255),
    VTX(104, 850, 1497, 2048, 1024, 103, 103, 158, 255),
    VTX(104, 1220, 1497, 2048, -24248, 103, 103, 158, 255),
    VTX(136, 1220, 1497, 0, -24248, 103, 103, 158, 255),
}; 

static Vtx water_temple_room_00Vtx_030A98[4] = {
    VTX(136, 850, 1499, 0, 1024, 25, 25, 25, 255),
    VTX(104, 850, 1499, 2048, 1024, 25, 25, 25, 255),
    VTX(104, 1220, 1499, 2048, -24248, 25, 25, 25, 255),
    VTX(136, 1220, 1499, 0, -24248, 25, 25, 25, 255),
}; 

static Vtx water_temple_room_00Vtx_030AD8[17] = {
    VTX(0, 1410, 1500, -1024, -2048, 25, 25, 25, 255),
    VTX(0, 1410, 1700, 2389, -2048, 44, 44, 44, 255),
    VTX(0, 1210, 1700, 2389, 1365, 163, 163, 163, 255),
    VTX(240, 1210, 1500, -1536, 2048, 53, 53, 53, 255),
    VTX(120, 1210, 1700, 512, -1365, 163, 163, 163, 255),
    VTX(240, 1210, 1700, -1536, -1365, 53, 53, 53, 255),
    VTX(0, 1210, 1500, 2560, 2048, 53, 53, 53, 255),
    VTX(0, 1210, 1700, 2560, -1365, 53, 53, 53, 255),
    VTX(240, 1410, 1700, -1536, 1877, 163, 163, 163, 255),
    VTX(0, 1410, 1700, 2560, 1877, 163, 163, 163, 255),
    VTX(0, 1410, 1500, 2560, -1536, 25, 25, 25, 255),
    VTX(240, 1410, 1500, -1536, -1536, 25, 25, 25, 255),
    VTX(240, 1410, 1500, -1024, -2048, 25, 25, 25, 255),
    VTX(240, 1210, 1500, -1024, 1365, 53, 53, 53, 255),
    VTX(240, 1210, 1700, 2389, 1365, 163, 163, 163, 255),
    VTX(240, 1410, 1700, 2389, -2048, 44, 44, 44, 255),
    VTX(0, 1210, 1500, -1024, 1365, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_030BE8[22] = {
    VTX(1840, 1150, 1500, 0, 0, 53, 53, 53, 255),
    VTX(240, 1210, 1500, 3996, -205, 53, 53, 53, 255),
    VTX(240, 1410, 1500, 3996, -887, 76, 76, 76, 255),
    VTX(1840, 1750, 1500, 0, -2048, 53, 53, 53, 255),
    VTX(0, 1410, 1500, 4596, -887, 76, 76, 76, 255),
    VTX(0, 1210, 1500, 4596, -205, 53, 53, 53, 255),
    VTX(-590, 1150, 1500, 6069, 0, 53, 53, 53, 255),
    VTX(-590, 1750, 1500, 6069, -2048, 53, 53, 53, 255),
    VTX(200, 1210, 1500, 4096, -205, 53, 53, 53, 255),
    VTX(200, 1150, 1500, 4096, 0, 53, 53, 53, 255),
    VTX(40, 850, 1500, 4496, 1024, 53, 53, 53, 255),
    VTX(40, 1150, 1500, 4496, 0, 53, 53, 53, 255),
    VTX(200, 850, 1500, 4096, 1024, 53, 53, 53, 255),
    VTX(200, 550, 1500, 4096, 2048, 53, 53, 53, 255),
    VTX(40, 550, 1500, 4496, 2048, 53, 53, 53, 255),
    VTX(40, 770, 1500, 4496, 1297, 25, 25, 25, 255),
    VTX(200, 770, 1500, 4096, 1297, 25, 25, 25, 255),
    VTX(40, 1210, 1500, 4496, -205, 53, 53, 53, 255),
    VTX(1840, 550, 1500, 0, 2048, 53, 53, 53, 255),
    VTX(-590, 550, 1500, 6069, 2048, 53, 53, 53, 255),
    VTX(-590, 4000, 1500, 6069, -9728, 0, 0, 0, 255),
    VTX(1840, 4000, 1500, 0, -9728, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_030D48[16] = {
    VTX(-588, 1790, 1498, -6042, 0, 179, 179, 254, 255),
    VTX(1838, 1790, 1498, 18801, 0, 179, 179, 254, 255),
    VTX(1838, 1710, 1498, 18801, 512, 179, 179, 254, 255),
    VTX(-588, 1710, 1498, -6042, 512, 179, 179, 254, 255),
    VTX(-588, 590, 1498, -5286, 0, 179, 179, 254, 255),
    VTX(1838, 590, 1498, 10240, 0, 163, 163, 163, 255),
    VTX(1838, 510, 1498, 10240, 512, 163, 163, 163, 255),
    VTX(-588, 510, 1498, -5286, 512, 179, 179, 254, 255),
    VTX(-588, 1190, 1498, -2496, 0, 179, 179, 254, 255),
    VTX(104, 1190, 1498, 1933, 0, 179, 179, 254, 255),
    VTX(104, 1110, 1498, 1933, 512, 163, 163, 163, 255),
    VTX(-588, 1110, 1498, -2496, 512, 179, 179, 254, 255),
    VTX(136, 1190, 1498, 2138, 0, 179, 179, 254, 255),
    VTX(1838, 1190, 1498, 13030, 0, 163, 163, 163, 255),
    VTX(1838, 1110, 1498, 13030, 512, 163, 163, 163, 255),
    VTX(136, 1110, 1498, 2138, 512, 163, 163, 163, 255),
}; 

static Vtx water_temple_room_00Vtx_030E48[8] = {
    VTX(790, 100, 1500, 340, 751, 255, 239, 178, 255),
    VTX(730, 100, 1500, 1708, 751, 255, 239, 178, 255),
    VTX(730, 200, 1500, 1708, -751, 44, 44, 44, 255),
    VTX(790, 200, 1500, 340, -751, 44, 44, 44, 255),
    VTX(150, 1310, 1700, 340, 751, 255, 239, 178, 255),
    VTX(90, 1310, 1700, 1708, 751, 255, 239, 178, 255),
    VTX(90, 1410, 1700, 1708, -751, 44, 44, 44, 255),
    VTX(150, 1410, 1700, 340, -751, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_030EC8[16] = {
    VTX(150, 1410, 1700, 2048, -2048, 44, 44, 44, 255),
    VTX(240, 1410, 1700, 0, -2048, 44, 44, 44, 255),
    VTX(150, 1210, 1700, 2048, 2048, 255, 248, 195, 255),
    VTX(0, 1410, 1700, 2048, -2048, 44, 44, 44, 255),
    VTX(90, 1410, 1700, 0, -2048, 44, 44, 44, 255),
    VTX(90, 1210, 1700, 0, 2048, 255, 248, 195, 255),
    VTX(640, 0, 1500, 6554, 2048, 76, 76, 76, 255),
    VTX(640, 200, 1500, 6554, -2048, 53, 53, 53, 255),
    VTX(730, 0, 1500, 4506, 2048, 255, 248, 195, 255),
    VTX(730, 200, 1500, 4506, -2048, 44, 44, 44, 255),
    VTX(0, 1210, 1700, 2048, 2048, 53, 53, 53, 255),
    VTX(790, 200, 1500, 2048, -2048, 44, 44, 44, 255),
    VTX(880, 200, 1500, 0, -2048, 53, 53, 53, 255),
    VTX(790, 0, 1500, 2048, 2048, 255, 248, 195, 255),
    VTX(880, 0, 1500, 0, 2048, 76, 76, 76, 255),
    VTX(240, 1210, 1700, 0, 2048, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_030FC8[9] = {
    VTX(1840, 0, 1500, 0, 2048, 76, 76, 76, 255),
    VTX(880, 0, 1500, 2023, 2048, 76, 76, 76, 255),
    VTX(880, 200, 1500, 2023, 1303, 53, 53, 53, 255),
    VTX(1840, 550, 1500, 0, 0, 53, 53, 53, 255),
    VTX(640, 200, 1500, 2528, 1303, 53, 53, 53, 255),
    VTX(640, 0, 1500, 2528, 2048, 76, 76, 76, 255),
    VTX(-590, 0, 1500, 5120, 2048, 76, 76, 76, 255),
    VTX(-590, 409, 1500, 5120, 525, 44, 44, 44, 255),
    VTX(-590, 550, 1500, 5120, 0, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_031058[32] = {
    VTX(790, 100, 1520, -2560, 512, 0, 0, 0, 255),
    VTX(790, 100, 1500, -2560, 1024, 255, 248, 195, 255),
    VTX(790, 0, 1520, 2560, 512, 0, 0, 0, 255),
    VTX(790, 0, 1500, 2560, 1024, 255, 248, 195, 255),
    VTX(730, 100, 1520, 2048, 1024, 0, 0, 0, 255),
    VTX(730, 100, 1500, 2048, 512, 255, 248, 195, 255),
    VTX(790, 100, 1500, -1024, 512, 255, 248, 195, 255),
    VTX(790, 100, 1520, -1024, 1024, 0, 0, 0, 255),
    VTX(790, 0, 1520, -1024, 1024, 0, 0, 0, 255),
    VTX(790, 0, 1500, -1024, 512, 255, 248, 195, 255),
    VTX(730, 0, 1500, 2048, 512, 255, 248, 195, 255),
    VTX(730, 0, 1520, 2048, 1024, 0, 0, 0, 255),
    VTX(730, 0, 1520, 2560, 512, 0, 0, 0, 255),
    VTX(730, 0, 1500, 2560, 1024, 255, 248, 195, 255),
    VTX(730, 100, 1500, -2560, 1024, 255, 248, 195, 255),
    VTX(730, 100, 1520, -2560, 512, 0, 0, 0, 255),
    VTX(90, 1210, 1720, 2560, 512, 0, 0, 0, 255),
    VTX(90, 1210, 1700, 2560, 1024, 255, 248, 195, 255),
    VTX(90, 1310, 1700, -2560, 1024, 255, 248, 195, 255),
    VTX(90, 1310, 1720, -2560, 512, 0, 0, 0, 255),
    VTX(90, 1310, 1720, 2048, 1024, 0, 0, 0, 255),
    VTX(90, 1310, 1700, 2048, 512, 255, 248, 195, 255),
    VTX(150, 1310, 1700, -1024, 512, 255, 248, 195, 255),
    VTX(150, 1310, 1720, -1024, 1024, 0, 0, 0, 255),
    VTX(150, 1310, 1720, -2560, 512, 0, 0, 0, 255),
    VTX(150, 1310, 1700, -2560, 1024, 255, 248, 195, 255),
    VTX(150, 1210, 1720, 2560, 512, 0, 0, 0, 255),
    VTX(150, 1210, 1700, 2560, 1024, 255, 248, 195, 255),
    VTX(150, 1210, 1720, -1024, 1024, 0, 0, 0, 255),
    VTX(150, 1210, 1700, -1024, 512, 255, 248, 195, 255),
    VTX(90, 1210, 1700, 2048, 512, 255, 248, 195, 255),
    VTX(90, 1210, 1720, 2048, 1024, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_031258[8] = {
    VTX(-590, 0, 1497, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, 1497, 0, 0, 0, 0, 0, 0),
    VTX(-590, 4000, 1497, 0, 0, 0, 0, 0, 0),
    VTX(1840, 4000, 1497, 0, 0, 0, 0, 0, 0),
    VTX(-590, 0, 1720, 0, 0, 0, 0, 0, 0),
    VTX(1840, 0, 1720, 0, 0, 0, 0, 0, 0),
    VTX(-590, 4000, 1720, 0, 0, 0, 0, 0, 0),
    VTX(1840, 4000, 1720, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x0312D8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_031258[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0316F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, 0, 0, 6, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_030A58[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_00Vtx_030A98[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0326F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_00Vtx_030AD8[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP1Triangle(16, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_032EF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_030BE8[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 1, 0, 0, 8, 0, 9, 0),
    gsSP2Triangles(10, 11, 9, 0, 10, 9, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 8, 9, 0, 17, 9, 11, 0),
    gsSP2Triangles(6, 5, 17, 0, 6, 17, 11, 0),
    gsSP2Triangles(0, 12, 9, 0, 18, 13, 12, 0),
    gsSP2Triangles(6, 11, 10, 0, 14, 19, 10, 0),
    gsSP2Triangles(18, 12, 0, 0, 10, 19, 6, 0),
    gsSP2Triangles(7, 20, 21, 0, 7, 21, 3, 0),
    gsSP2Triangles(4, 7, 3, 0, 4, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019B40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 16, 0, 1, 1, 6, 4, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPVertex(&water_temple_room_00Vtx_030D48[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_033EF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPVertex(&water_temple_room_00Vtx_030E48[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_034EF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_030EC8[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 3, 5, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 14, 13, 0, 1, 15, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_035EF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_030FC8[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(4, 7, 8, 0, 4, 8, 3, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_036EF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_031058[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 25, 27, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_0316F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0316F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0326F8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0326F8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_032EF8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_032EF8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_033EF8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_033EF8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_034EF8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_034EF8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_035EF8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_035EF8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_036EF8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_036EF8.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_0376F8[32] = {
    VTX(1030, 2050, 90, -1024, -5120, 255, 248, 195, 255),
    VTX(490, 2050, 90, -1024, 1024, 255, 248, 195, 255),
    VTX(310, 2050, 270, 1024, 3072, 44, 44, 44, 255),
    VTX(1210, 2050, 270, 1024, -7168, 44, 44, 44, 255),
    VTX(1270, 1510, 330, 1024, -8192, 44, 44, 44, 255),
    VTX(1090, 1510, 150, -1024, -6144, 255, 248, 195, 255),
    VTX(430, 1510, 150, -1024, 1365, 255, 248, 195, 255),
    VTX(250, 1510, 330, 1024, 3413, 44, 44, 44, 255),
    VTX(1420, 970, 480, 1024, -6940, 44, 44, 44, 255),
    VTX(1150, 970, 210, -1024, -4892, 255, 248, 195, 255),
    VTX(370, 970, 210, -1024, 1024, 255, 248, 195, 255),
    VTX(100, 970, 480, 1024, 3072, 44, 44, 44, 255),
    VTX(1030, 2050, -450, -1024, -5120, 255, 248, 195, 255),
    VTX(1030, 2050, 90, -1024, 1024, 255, 248, 195, 255),
    VTX(1210, 2050, 270, 1024, 3072, 44, 44, 44, 255),
    VTX(1210, 2050, -630, 1024, -7168, 44, 44, 44, 255),
    VTX(1270, 1510, -690, 1024, -8192, 44, 44, 44, 255),
    VTX(1090, 1510, -510, -1024, -6144, 255, 248, 195, 255),
    VTX(1090, 1510, 150, -1024, 1365, 255, 248, 195, 255),
    VTX(1270, 1510, 330, 1024, 3413, 44, 44, 44, 255),
    VTX(1420, 970, -840, 1024, -6940, 44, 44, 44, 255),
    VTX(1150, 970, -570, -1024, -4892, 255, 248, 195, 255),
    VTX(1150, 970, 210, -1024, 1024, 255, 248, 195, 255),
    VTX(1420, 970, 480, 1024, 3072, 44, 44, 44, 255),
    VTX(490, 2050, -450, -1024, -5120, 255, 248, 195, 255),
    VTX(1030, 2050, -450, -1024, 1024, 255, 248, 195, 255),
    VTX(1210, 2050, -630, 1024, 3072, 44, 44, 44, 255),
    VTX(310, 2050, -630, 1024, -7168, 44, 44, 44, 255),
    VTX(250, 1510, -690, 1024, -8192, 44, 44, 44, 255),
    VTX(430, 1510, -510, -1024, -6144, 255, 248, 195, 255),
    VTX(1090, 1510, -510, -1024, 1365, 255, 248, 195, 255),
    VTX(1270, 1510, -690, 1024, 3413, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_0378F8[38] = {
    VTX(100, 970, -840, 1024, -6940, 44, 44, 44, 255),
    VTX(370, 970, -570, -1024, -4892, 255, 248, 195, 255),
    VTX(1150, 970, -570, -1024, 1024, 255, 248, 195, 255),
    VTX(1420, 970, -840, 1024, 3072, 44, 44, 44, 255),
    VTX(100, 970, 480, 1024, -6940, 44, 44, 44, 255),
    VTX(370, 970, 210, -1024, -4892, 255, 248, 195, 255),
    VTX(370, 970, -570, -1024, 1024, 255, 248, 195, 255),
    VTX(100, 970, -840, 1024, 3072, 44, 44, 44, 255),
    VTX(250, 1510, 330, 1024, -8192, 44, 44, 44, 255),
    VTX(430, 1510, 150, -1024, -6144, 255, 248, 195, 255),
    VTX(430, 1510, -510, -1024, 1365, 255, 248, 195, 255),
    VTX(250, 1510, -690, 1024, 3413, 44, 44, 44, 255),
    VTX(-370, 340, -120, 744, 1024, 163, 163, 163, 255),
    VTX(-350, 340, -120, 1024, 1024, 76, 76, 76, 255),
    VTX(-350, 340, -240, 1024, -1024, 76, 76, 76, 255),
    VTX(-370, 340, -240, 744, -1024, 163, 163, 163, 255),
    VTX(-590, 340, -240, 1024, 1024, 163, 163, 163, 255),
    VTX(-480, 340, -180, 0, -853, 216, 216, 216, 255),
    VTX(-370, 340, -240, 1024, -2731, 76, 76, 76, 255),
    VTX(-370, 340, -120, -1024, -2731, 76, 76, 76, 255),
    VTX(-590, 340, -120, -1024, 1024, 163, 163, 163, 255),
    VTX(490, 2050, -80, -1024, -3186, 255, 248, 195, 255),
    VTX(490, 2050, -280, -1024, -910, 255, 248, 195, 255),
    VTX(332, 2050, -280, 769, -910, 135, 135, 135, 255),
    VTX(332, 2050, -80, 769, -3186, 135, 135, 135, 255),
    VTX(490, 2050, -280, -1024, -910, 255, 248, 195, 255),
    VTX(490, 2050, -450, -1024, 1024, 255, 248, 195, 255),
    VTX(332, 2050, -280, 769, -910, 135, 135, 135, 255),
    VTX(310, 2050, -630, 1024, 3072, 44, 44, 44, 255),
    VTX(310, 2050, -280, 1024, -910, 44, 44, 44, 255),
    VTX(490, 2050, 90, -1024, -5120, 255, 248, 195, 255),
    VTX(332, 2050, -80, 769, -3186, 135, 135, 135, 255),
    VTX(310, 2050, -80, 1024, -3186, 44, 44, 44, 255),
    VTX(310, 2050, 270, 1024, -7168, 44, 44, 44, 255),
    VTX(490, 2050, 90, -1024, -5120, 255, 248, 195, 255),
    VTX(332, 2050, -280, 769, -910, 135, 135, 135, 255),
    VTX(490, 2050, -450, -1024, 1024, 255, 248, 195, 255),
    VTX(310, 2050, -630, 1024, 3072, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_037B58[17] = {
    VTX(1240, 340, 180, 0, 1024, 135, 135, 135, 255),
    VTX(1540, 340, -180, 5120, -5120, 216, 216, 216, 255),
    VTX(1240, 340, -540, 0, -11264, 135, 135, 135, 255),
    VTX(1840, 340, 180, 10240, 1024, 53, 53, 53, 255),
    VTX(1840, 340, -540, 10240, -11264, 44, 44, 44, 255),
    VTX(280, 340, 180, 14848, 1024, 76, 76, 76, 255),
    VTX(-470, 340, 30, 2048, -1536, 216, 216, 216, 255),
    VTX(-590, 340, 180, 0, 1024, 76, 76, 76, 255),
    VTX(-350, 340, -120, 4096, -4096, 135, 135, 135, 255),
    VTX(-590, 340, -120, 0, -4096, 76, 76, 76, 255),
    VTX(280, 340, -540, 14848, -11264, 76, 76, 76, 255),
    VTX(-35, 340, -30, 9472, -2560, 135, 135, 135, 255),
    VTX(-350, 340, -240, 4096, -6144, 76, 76, 76, 255),
    VTX(-590, 340, -540, 0, -11264, 76, 76, 76, 255),
    VTX(-155, 340, -390, 7424, -8704, 135, 135, 135, 255),
    VTX(-470, 340, -390, 2048, -8704, 255, 255, 255, 255),
    VTX(-590, 340, -240, 0, -6144, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_037C68[8] = {
    VTX(-590, 340, -840, 0, 0, 0, 0, 0, 0),
    VTX(1840, 340, -840, 0, 0, 0, 0, 0, 0),
    VTX(-590, 2050, -840, 0, 0, 0, 0, 0, 0),
    VTX(1840, 2050, -840, 0, 0, 0, 0, 0, 0),
    VTX(-590, 340, 480, 0, 0, 0, 0, 0, 0),
    VTX(1840, 340, 480, 0, 0, 0, 0, 0, 0),
    VTX(-590, 2050, 480, 0, 0, 0, 0, 0, 0),
    VTX(1840, 2050, 480, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x037CE8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_037C68[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_037EC8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_0376F8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_0378F8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(16, 20, 17, 0, 20, 19, 17, 0),
    gsSP2Triangles(21, 22, 23, 0, 21, 23, 24, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 27, 0),
    gsSP1Triangle(30, 21, 24, 0),
    gsSPVertex(&water_temple_room_00Vtx_0378F8[31], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_0386C8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_037B58[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(3, 4, 1, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 6, 0),
    gsSP2Triangles(8, 9, 6, 0, 9, 7, 6, 0),
    gsSP2Triangles(10, 11, 5, 0, 12, 8, 11, 0),
    gsSP2Triangles(8, 5, 11, 0, 10, 13, 14, 0),
    gsSP2Triangles(12, 11, 14, 0, 11, 10, 14, 0),
    gsSP2Triangles(14, 15, 12, 0, 14, 13, 15, 0),
    gsSP2Triangles(13, 16, 15, 0, 16, 12, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_037EC8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_037EC8.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_0386C8[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_0386C8.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_038EC8[4] = {
    VTX(-590, 4000, 1500, -3282, 2757, 0, 0, 0, 255),
    VTX(-590, 4000, -1180, 236, 8034, 0, 0, 0, 255),
    VTX(1840, 4000, -1180, 5022, 4844, 0, 0, 0, 255),
    VTX(1840, 4000, 1500, 1503, -433, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_038F08[4] = {
    VTX(850, 3130, -270, 2048, -1024, 44, 44, 44, 255),
    VTX(670, 3130, -270, 0, -1024, 44, 44, 44, 255),
    VTX(670, 3130, -90, 0, 1024, 44, 44, 44, 255),
    VTX(850, 3130, -90, 2048, 1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_038F48[16] = {
    VTX(940, 2530, -360, -1024, -2048, 255, 248, 195, 255),
    VTX(940, 2530, 0, -1024, 683, 255, 248, 195, 255),
    VTX(1210, 2530, 270, 1024, 2731, 44, 44, 44, 255),
    VTX(1210, 2530, -630, 1024, -4096, 44, 44, 44, 255),
    VTX(580, 2530, -360, -1024, -2048, 255, 248, 195, 255),
    VTX(940, 2530, -360, -1024, 683, 255, 248, 195, 255),
    VTX(1210, 2530, -630, 1024, 2731, 44, 44, 44, 255),
    VTX(310, 2530, -630, 1024, -4096, 44, 44, 44, 255),
    VTX(580, 2530, 0, -1024, -2048, 255, 248, 195, 255),
    VTX(580, 2530, -360, -1024, 683, 255, 248, 195, 255),
    VTX(310, 2530, -630, 1024, 2731, 44, 44, 44, 255),
    VTX(310, 2530, 270, 1024, -4096, 44, 44, 44, 255),
    VTX(940, 2530, 0, -1024, -2048, 255, 248, 195, 255),
    VTX(580, 2530, 0, -1024, 683, 255, 248, 195, 255),
    VTX(310, 2530, 270, 1024, 2731, 44, 44, 44, 255),
    VTX(1210, 2530, 270, 1024, -4096, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_039048[16] = {
    VTX(940, 2530, -360, 0, 2076, 255, 248, 195, 255),
    VTX(850, 3130, -270, 5177, 1038, 44, 44, 44, 255),
    VTX(850, 3130, -90, 5177, -1038, 44, 44, 44, 255),
    VTX(940, 2530, 0, 0, -2076, 53, 53, 53, 255),
    VTX(580, 2530, -360, 0, 2076, 255, 248, 195, 255),
    VTX(670, 3130, -270, 5177, 1038, 44, 44, 44, 255),
    VTX(850, 3130, -270, 5177, -1038, 44, 44, 44, 255),
    VTX(940, 2530, -360, 0, -2076, 53, 53, 53, 255),
    VTX(580, 2530, 0, 0, 2076, 255, 248, 195, 255),
    VTX(670, 3130, -90, 5177, 1038, 44, 44, 44, 255),
    VTX(670, 3130, -270, 5177, -1038, 44, 44, 44, 255),
    VTX(580, 2530, -360, 0, -2076, 53, 53, 53, 255),
    VTX(940, 2530, 0, 0, 2076, 255, 248, 195, 255),
    VTX(850, 3130, -90, 5177, 1038, 44, 44, 44, 255),
    VTX(670, 3130, -90, 5177, -1038, 44, 44, 44, 255),
    VTX(580, 2530, 0, 0, -2076, 53, 53, 53, 255),
}; 

static Vtx water_temple_room_00Vtx_039148[8] = {
    VTX(-590, 2530, -1180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 2530, -1180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 4000, -1180, 0, 0, 0, 0, 0, 0),
    VTX(1840, 4000, -1180, 0, 0, 0, 0, 0, 0),
    VTX(-590, 2530, 1500, 0, 0, 0, 0, 0, 0),
    VTX(1840, 2530, 1500, 0, 0, 0, 0, 0, 0),
    VTX(-590, 4000, 1500, 0, 0, 0, 0, 0, 0),
    VTX(1840, 4000, 1500, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x0391C8[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_039148[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_039398, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_038EC8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_03A398, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_038F08[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_03AB98, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_038F48[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_03B398, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 1, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_039048[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_039398[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_039398.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_03A398[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_03A398.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_03AB98[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_03AB98.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_03B398[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_03B398.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_03BB98[32] = {
    VTX(1160, 770, 1240, 2048, -1024, 76, 76, 76, 255),
    VTX(1000, 770, 1240, 0, -1024, 76, 76, 76, 255),
    VTX(1000, 770, 1080, 0, 1024, 255, 248, 195, 255),
    VTX(1160, 770, 1080, 2048, 1024, 255, 248, 195, 255),
    VTX(840, 770, 1240, 2048, -1024, 76, 76, 76, 255),
    VTX(680, 770, 1240, 0, -1024, 76, 76, 76, 255),
    VTX(680, 770, 1080, 0, 1024, 255, 248, 195, 255),
    VTX(840, 770, 1080, 2048, 1024, 255, 248, 195, 255),
    VTX(520, 770, 1240, 2048, -1024, 76, 76, 76, 255),
    VTX(360, 770, 1240, 0, -1024, 76, 76, 76, 255),
    VTX(360, 770, 1080, 0, 1024, 255, 248, 195, 255),
    VTX(520, 770, 1080, 2048, 1024, 255, 248, 195, 255),
    VTX(1480, 770, 1240, 2048, -1024, 76, 76, 76, 255),
    VTX(1320, 770, 1240, 0, -1024, 76, 76, 76, 255),
    VTX(1320, 770, 1080, 0, 1024, 255, 248, 195, 255),
    VTX(1480, 770, 1080, 2048, 1024, 255, 248, 195, 255),
    VTX(1840, 770, 1040, 2048, 1024, 44, 44, 44, 255),
    VTX(1840, 770, 1280, 2048, -1024, 44, 44, 44, 255),
    VTX(1600, 770, 1280, 0, -1024, 255, 248, 195, 255),
    VTX(1600, 770, 1040, 0, 1024, 255, 248, 195, 255),
    VTX(200, 770, 1500, 2048, -4352, 25, 25, 25, 255),
    VTX(40, 770, 1500, 0, -4352, 25, 25, 25, 255),
    VTX(40, 770, 1080, 0, 1024, 255, 248, 195, 255),
    VTX(200, 770, 1080, 2048, 1024, 76, 76, 76, 255),
    VTX(1600, 850, 1040, 0, -1024, 44, 44, 44, 255),
    VTX(1600, 850, 1280, 0, 1024, 44, 44, 44, 255),
    VTX(1840, 850, 1280, 2048, 1024, 76, 76, 76, 255),
    VTX(1840, 850, 1040, 2048, -1024, 76, 76, 76, 255),
    VTX(1480, 850, 1080, 0, 1024, 76, 76, 76, 255),
    VTX(1320, 850, 1080, 2048, 1024, 44, 44, 44, 255),
    VTX(1320, 850, 1240, 2048, -1024, 44, 44, 44, 255),
    VTX(1480, 850, 1240, 0, -1024, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_03BD98[16] = {
    VTX(520, 850, 1080, 0, 1024, 76, 76, 76, 255),
    VTX(360, 850, 1080, 2048, 1024, 44, 44, 44, 255),
    VTX(360, 850, 1240, 2048, -1024, 44, 44, 44, 255),
    VTX(520, 850, 1240, 0, -1024, 76, 76, 76, 255),
    VTX(840, 850, 1080, 0, 1024, 76, 76, 76, 255),
    VTX(680, 850, 1080, 2048, 1024, 44, 44, 44, 255),
    VTX(680, 850, 1240, 2048, -1024, 44, 44, 44, 255),
    VTX(840, 850, 1240, 0, -1024, 76, 76, 76, 255),
    VTX(1160, 850, 1080, 0, 1024, 76, 76, 76, 255),
    VTX(1000, 850, 1080, 2048, 1024, 44, 44, 44, 255),
    VTX(1000, 850, 1240, 2048, -1024, 44, 44, 44, 255),
    VTX(1160, 850, 1240, 0, -1024, 76, 76, 76, 255),
    VTX(200, 850, 1080, 0, 1024, 76, 76, 76, 255),
    VTX(40, 850, 1080, 2048, 1024, 44, 44, 44, 255),
    VTX(40, 850, 1440, 2048, -3584, 44, 44, 44, 255),
    VTX(200, 850, 1440, 0, -3584, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_03BE98[32] = {
    VTX(200, 820, 1177, 20480, 0, 44, 44, 44, 255),
    VTX(1600, 820, 1177, 0, 0, 44, 44, 44, 255),
    VTX(1600, 820, 1143, 0, 1024, 76, 76, 76, 255),
    VTX(200, 820, 1143, 20480, 1024, 44, 44, 44, 255),
    VTX(200, 820, 1143, 20480, 0, 44, 44, 44, 255),
    VTX(1600, 820, 1143, 0, 0, 76, 76, 76, 255),
    VTX(1600, 790, 1160, 0, 1024, 255, 248, 195, 255),
    VTX(200, 790, 1160, 20480, 1024, 255, 248, 195, 255),
    VTX(429, 80, 1201, 1024, 0, 44, 44, 44, 255),
    VTX(429, 0, 1201, 1024, 1024, 255, 248, 195, 255),
    VTX(481, 0, 1149, 0, 1024, 255, 248, 195, 255),
    VTX(481, 80, 1149, 0, 0, 255, 248, 195, 255),
    VTX(481, 80, 1149, 1024, 0, 44, 44, 44, 255),
    VTX(481, 0, 1149, 1024, 1024, 255, 248, 195, 255),
    VTX(410, 0, 1130, 0, 1024, 255, 248, 195, 255),
    VTX(410, 80, 1130, 0, 0, 255, 248, 195, 255),
    VTX(410, 80, 1130, 1024, 0, 44, 44, 44, 255),
    VTX(410, 0, 1130, 1024, 1024, 255, 248, 195, 255),
    VTX(429, 0, 1201, 0, 1024, 255, 248, 195, 255),
    VTX(429, 80, 1201, 0, 0, 255, 248, 195, 255),
    VTX(1050, 80, 1130, 1024, 0, 44, 44, 44, 255),
    VTX(1050, 0, 1130, 1024, 1024, 255, 248, 195, 255),
    VTX(1069, 0, 1201, 0, 1024, 255, 248, 195, 255),
    VTX(1069, 80, 1201, 0, 0, 255, 248, 195, 255),
    VTX(1121, 80, 1149, 1024, 0, 44, 44, 44, 255),
    VTX(1121, 0, 1149, 1024, 1024, 255, 248, 195, 255),
    VTX(1050, 0, 1130, 0, 1024, 255, 248, 195, 255),
    VTX(1050, 80, 1130, 0, 0, 255, 248, 195, 255),
    VTX(1069, 80, 1201, 1024, 0, 44, 44, 44, 255),
    VTX(1069, 0, 1201, 1024, 1024, 255, 248, 195, 255),
    VTX(1121, 0, 1149, 0, 1024, 255, 248, 195, 255),
    VTX(1121, 80, 1149, 0, 0, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_03C098[4] = {
    VTX(200, 790, 1160, 20480, 1024, 255, 248, 195, 255),
    VTX(1600, 790, 1160, 0, 1024, 255, 248, 195, 255),
    VTX(1600, 820, 1177, 0, 512, 44, 44, 44, 255),
    VTX(200, 820, 1177, 20480, 512, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_03C0D8[32] = {
    VTX(1201, 0, 505, 0, 2048, 255, 248, 195, 255),
    VTX(1026, 0, 541, 1024, 2048, 255, 248, 195, 255),
    VTX(1055, 80, 549, 870, 1489, 76, 76, 76, 255),
    VTX(1160, 0, 660, 0, 2048, 255, 248, 195, 255),
    VTX(1201, 0, 505, 1024, 2048, 255, 248, 195, 255),
    VTX(1156, 280, 638, 128, 1371, 76, 76, 76, 255),
    VTX(1138, 360, 550, 640, 618, 103, 103, 158, 255),
    VTX(1026, 0, 541, 1024, 2048, 255, 248, 195, 255),
    VTX(1160, 0, 660, 0, 2048, 255, 248, 195, 255),
    VTX(1156, 280, 638, 102, 1417, 76, 76, 76, 255),
    VTX(1055, 80, 549, 870, 1417, 76, 76, 76, 255),
    VTX(1138, 360, 550, 512, 595, 103, 103, 158, 255),
    VTX(180, 160, 590, 512, 595, 103, 103, 158, 255),
    VTX(200, 80, 670, 870, 1417, 76, 76, 76, 255),
    VTX(260, 80, 550, 102, 1417, 76, 76, 76, 255),
    VTX(200, 0, 700, 1024, 2048, 255, 248, 195, 255),
    VTX(280, 0, 540, 0, 2048, 255, 248, 195, 255),
    VTX(120, 0, 540, 1024, 2048, 255, 248, 195, 255),
    VTX(180, 160, 590, 640, 618, 103, 103, 158, 255),
    VTX(260, 80, 550, 128, 1371, 76, 76, 76, 255),
    VTX(280, 0, 540, 0, 2048, 255, 248, 195, 255),
    VTX(120, 0, 540, 0, 2048, 255, 248, 195, 255),
    VTX(200, 0, 700, 1024, 2048, 255, 248, 195, 255),
    VTX(200, 80, 670, 870, 1489, 76, 76, 76, 255),
    VTX(180, 160, 590, 410, 924, 103, 103, 158, 255),
    VTX(-320, 0, 740, 0, 2048, 255, 248, 195, 255),
    VTX(-240, 80, 870, 870, 1489, 76, 76, 76, 255),
    VTX(-220, 200, 790, 410, 924, 103, 103, 158, 255),
    VTX(-240, 0, 900, 1024, 2048, 255, 248, 195, 255),
    VTX(-160, 0, 740, 0, 2048, 255, 248, 195, 255),
    VTX(-320, 0, 740, 1024, 2048, 255, 248, 195, 255),
    VTX(-180, 80, 750, 128, 1371, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_03C2D8[11] = {
    VTX(-320, 0, 740, 1024, 2048, 255, 248, 195, 255),
    VTX(-220, 200, 790, 640, 618, 103, 103, 158, 255),
    VTX(-180, 80, 750, 128, 1371, 76, 76, 76, 255),
    VTX(-240, 0, 900, 1024, 2048, 255, 248, 195, 255),
    VTX(-160, 0, 740, 0, 2048, 255, 248, 195, 255),
    VTX(-180, 80, 750, 102, 1417, 76, 76, 76, 255),
    VTX(-240, 80, 870, 870, 1417, 76, 76, 76, 255),
    VTX(-220, 200, 790, 512, 595, 103, 103, 158, 255),
    VTX(1201, 0, 505, 0, 2048, 255, 248, 195, 255),
    VTX(1055, 80, 549, 870, 1489, 76, 76, 76, 255),
    VTX(1138, 360, 550, 410, 924, 103, 103, 158, 255),
}; 

static Vtx water_temple_room_00Vtx_03C388[32] = {
    VTX(1320, 850, 1240, 1024, 11264, 44, 44, 44, 255),
    VTX(1320, 770, 1240, 0, 11264, 255, 248, 195, 255),
    VTX(1480, 770, 1240, 0, 13312, 255, 248, 195, 255),
    VTX(1480, 850, 1240, 1024, 13312, 76, 76, 76, 255),
    VTX(1480, 850, 1240, 1024, 3584, 76, 76, 76, 255),
    VTX(1480, 770, 1240, 0, 3584, 255, 248, 195, 255),
    VTX(1480, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(1480, 850, 1080, 1024, 1536, 76, 76, 76, 255),
    VTX(40, 850, 1080, 1024, 1536, 44, 44, 44, 255),
    VTX(40, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(40, 770, 1500, 0, 6912, 25, 25, 25, 255),
    VTX(40, 850, 1500, 1024, 6912, 44, 44, 44, 255),
    VTX(520, 850, 1080, 1024, -3072, 76, 76, 76, 255),
    VTX(520, 770, 1080, 0, -3072, 255, 248, 195, 255),
    VTX(360, 770, 1080, 0, -1024, 255, 248, 195, 255),
    VTX(360, 850, 1080, 1024, -1024, 44, 44, 44, 255),
    VTX(360, 850, 1080, 1024, 1536, 44, 44, 44, 255),
    VTX(360, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(360, 770, 1240, 0, 3584, 255, 248, 195, 255),
    VTX(360, 850, 1240, 1024, 3584, 44, 44, 44, 255),
    VTX(360, 850, 1240, 1024, -1024, 44, 44, 44, 255),
    VTX(360, 770, 1240, 0, -1024, 255, 248, 195, 255),
    VTX(520, 770, 1240, 0, 1024, 255, 248, 195, 255),
    VTX(520, 850, 1240, 1024, 1024, 76, 76, 76, 255),
    VTX(520, 850, 1240, 1024, 3584, 76, 76, 76, 255),
    VTX(520, 770, 1240, 0, 3584, 255, 248, 195, 255),
    VTX(520, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(520, 850, 1080, 1024, 1536, 76, 76, 76, 255),
    VTX(200, 850, 1500, 1024, 6912, 76, 76, 76, 255),
    VTX(200, 770, 1500, 0, 6912, 25, 25, 25, 255),
    VTX(200, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(200, 850, 1080, 1024, 1536, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_03C588[32] = {
    VTX(840, 850, 1080, 1024, -7168, 76, 76, 76, 255),
    VTX(840, 770, 1080, 0, -7168, 255, 248, 195, 255),
    VTX(680, 770, 1080, 0, -5120, 255, 248, 195, 255),
    VTX(680, 850, 1080, 1024, -5120, 44, 44, 44, 255),
    VTX(680, 850, 1080, 1024, 1536, 44, 44, 44, 255),
    VTX(680, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(680, 770, 1240, 0, 3584, 255, 248, 195, 255),
    VTX(680, 850, 1240, 1024, 3584, 44, 44, 44, 255),
    VTX(680, 850, 1240, 1024, 3072, 44, 44, 44, 255),
    VTX(680, 770, 1240, 0, 3072, 255, 248, 195, 255),
    VTX(840, 770, 1240, 0, 5120, 255, 248, 195, 255),
    VTX(840, 850, 1240, 1024, 5120, 76, 76, 76, 255),
    VTX(840, 850, 1240, 1024, 3584, 76, 76, 76, 255),
    VTX(840, 770, 1240, 0, 3584, 255, 248, 195, 255),
    VTX(840, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(840, 850, 1080, 1024, 1536, 76, 76, 76, 255),
    VTX(1600, 850, 1040, 1024, 1024, 44, 44, 44, 255),
    VTX(1600, 770, 1040, 0, 1024, 255, 248, 195, 255),
    VTX(1600, 770, 1280, 0, 4096, 255, 248, 195, 255),
    VTX(1600, 850, 1280, 1024, 4096, 44, 44, 44, 255),
    VTX(1160, 850, 1080, 1024, -11264, 76, 76, 76, 255),
    VTX(1160, 770, 1080, 0, -11264, 255, 248, 195, 255),
    VTX(1000, 770, 1080, 0, -9216, 255, 248, 195, 255),
    VTX(1000, 850, 1080, 1024, -9216, 44, 44, 44, 255),
    VTX(1000, 850, 1080, 1024, 1536, 44, 44, 44, 255),
    VTX(1000, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(1000, 770, 1240, 0, 3584, 255, 248, 195, 255),
    VTX(1000, 850, 1240, 1024, 3584, 44, 44, 44, 255),
    VTX(1000, 850, 1240, 1024, 7168, 44, 44, 44, 255),
    VTX(1000, 770, 1240, 0, 7168, 255, 248, 195, 255),
    VTX(1160, 770, 1240, 0, 9216, 255, 248, 195, 255),
    VTX(1160, 850, 1240, 1024, 9216, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_03C788[32] = {
    VTX(429, 770, 1201, 0, -6827, 44, 44, 44, 255),
    VTX(429, 80, 1201, 0, 1024, 44, 44, 44, 255),
    VTX(481, 80, 1149, 1024, 1024, 255, 248, 195, 255),
    VTX(481, 770, 1149, 1024, -6827, 44, 44, 44, 255),
    VTX(1160, 850, 1240, 1024, 3584, 76, 76, 76, 255),
    VTX(1160, 770, 1240, 0, 3584, 255, 248, 195, 255),
    VTX(1160, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(1160, 850, 1080, 1024, 1536, 76, 76, 76, 255),
    VTX(481, 770, 1149, 0, -6827, 44, 44, 44, 255),
    VTX(481, 80, 1149, 0, 1024, 44, 44, 44, 255),
    VTX(410, 80, 1130, 1024, 1024, 255, 248, 195, 255),
    VTX(410, 770, 1130, 1024, -6827, 44, 44, 44, 255),
    VTX(1600, 850, 1280, 1024, 14848, 44, 44, 44, 255),
    VTX(1600, 770, 1280, 0, 14848, 255, 248, 195, 255),
    VTX(1840, 850, 1280, 1024, 17920, 76, 76, 76, 255),
    VTX(1840, 770, 1280, 0, 17920, 44, 44, 44, 255),
    VTX(410, 770, 1130, 0, -6827, 44, 44, 44, 255),
    VTX(410, 80, 1130, 0, 1024, 44, 44, 44, 255),
    VTX(429, 80, 1201, 1024, 1024, 255, 248, 195, 255),
    VTX(429, 770, 1201, 1024, -6827, 44, 44, 44, 255),
    VTX(1050, 770, 1130, 0, -6827, 44, 44, 44, 255),
    VTX(1050, 80, 1130, 0, 1024, 44, 44, 44, 255),
    VTX(1069, 80, 1201, 1024, 1024, 255, 248, 195, 255),
    VTX(1069, 770, 1201, 1024, -6827, 44, 44, 44, 255),
    VTX(1840, 850, 1040, 1024, -19968, 76, 76, 76, 255),
    VTX(1840, 770, 1040, 0, -19968, 44, 44, 44, 255),
    VTX(1600, 770, 1040, 0, -16896, 255, 248, 195, 255),
    VTX(1600, 850, 1040, 1024, -16896, 44, 44, 44, 255),
    VTX(200, 850, 1080, 1024, 1024, 76, 76, 76, 255),
    VTX(200, 770, 1080, 0, 1024, 255, 248, 195, 255),
    VTX(40, 770, 1080, 0, 3072, 255, 248, 195, 255),
    VTX(40, 850, 1080, 1024, 3072, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_03C988[20] = {
    VTX(1121, 770, 1149, 0, -6827, 44, 44, 44, 255),
    VTX(1121, 80, 1149, 0, 1024, 44, 44, 44, 255),
    VTX(1050, 80, 1130, 1024, 1024, 255, 248, 195, 255),
    VTX(1050, 770, 1130, 1024, -6827, 44, 44, 44, 255),
    VTX(1480, 850, 1080, 1024, -15360, 76, 76, 76, 255),
    VTX(1480, 770, 1080, 0, -15360, 255, 248, 195, 255),
    VTX(1320, 770, 1080, 0, -13312, 255, 248, 195, 255),
    VTX(1320, 850, 1080, 1024, -13312, 44, 44, 44, 255),
    VTX(1069, 770, 1201, 0, -6827, 44, 44, 44, 255),
    VTX(1069, 80, 1201, 0, 1024, 44, 44, 44, 255),
    VTX(1121, 80, 1149, 1024, 1024, 255, 248, 195, 255),
    VTX(1121, 770, 1149, 1024, -6827, 44, 44, 44, 255),
    VTX(40, 850, 1440, 1024, -1707, 135, 135, 135, 255),
    VTX(40, 850, 1500, 0, -1707, 44, 44, 44, 255),
    VTX(200, 850, 1500, 0, 1024, 76, 76, 76, 255),
    VTX(200, 850, 1440, 1024, 1024, 76, 76, 76, 255),
    VTX(1320, 850, 1080, 1024, 1536, 44, 44, 44, 255),
    VTX(1320, 770, 1080, 0, 1536, 255, 248, 195, 255),
    VTX(1320, 770, 1240, 0, 3584, 255, 248, 195, 255),
    VTX(1320, 850, 1240, 1024, 3584, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_03CAC8[8] = {
    VTX(1703, 0, 261, 0, 0, 0, 0, 0, 0),
    VTX(1881, 0, 1273, 0, 0, 0, 0, 0, 0),
    VTX(1703, 850, 261, 0, 0, 0, 0, 0, 0),
    VTX(1881, 850, 1273, 0, 0, 0, 0, 0, 0),
    VTX(-341, 0, 621, 0, 0, 0, 0, 0, 0),
    VTX(-163, 0, 1633, 0, 0, 0, 0, 0, 0),
    VTX(-341, 850, 621, 0, 0, 0, 0, 0, 0),
    VTX(-163, 850, 1633, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x03CB48[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_03CAC8[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_03CEE0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_03BB98[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_03BD98[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_03BE98[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_03C098[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_03D6E0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 3, 5, 6, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_03C0D8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 10, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 14, 0),
    gsSP2Triangles(15, 14, 13, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 17, 19, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 28, 26, 0, 29, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_03C2D8[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 6, 5, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_03C388[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_03C588[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_03C788[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 31, 0),
    gsSPVertex(&water_temple_room_00Vtx_03C988[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_03CEE0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_03CEE0.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_03D6E0[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_03D6E0.rgb5a1.inc.c"
};

static Vtx water_temple_room_00Vtx_03E6E0[24] = {
    VTX(-590, 2110, -268, 0, -1024, 76, 76, 76, 255),
    VTX(-290, 2210, -268, 8192, -1024, 76, 76, 76, 255),
    VTX(-290, 2150, -268, 8192, 1024, 255, 248, 195, 255),
    VTX(-590, 2050, -268, 0, 1024, 255, 248, 195, 255),
    VTX(310, 2050, -268, 0, 1024, 255, 248, 195, 255),
    VTX(10, 2150, -268, 8192, 1024, 255, 248, 195, 255),
    VTX(10, 2210, -268, 8192, -1024, 76, 76, 76, 255),
    VTX(310, 2110, -268, 0, -1024, 76, 76, 76, 255),
    VTX(10, 2150, -268, -4096, 1024, 255, 248, 195, 255),
    VTX(-290, 2150, -268, 4096, 1024, 255, 248, 195, 255),
    VTX(-290, 2210, -268, 4096, -1024, 76, 76, 76, 255),
    VTX(10, 2210, -268, -4096, -1024, 76, 76, 76, 255),
    VTX(-590, 2110, -92, 0, -1024, 76, 76, 76, 255),
    VTX(-290, 2210, -92, 8192, -1024, 76, 76, 76, 255),
    VTX(-290, 2150, -92, 8192, 1024, 255, 248, 195, 255),
    VTX(-590, 2050, -92, 0, 1024, 255, 248, 195, 255),
    VTX(10, 2150, -92, -4096, 1024, 255, 248, 195, 255),
    VTX(-290, 2150, -92, 4096, 1024, 255, 248, 195, 255),
    VTX(-290, 2210, -92, 4096, -1024, 76, 76, 76, 255),
    VTX(10, 2210, -92, -4096, -1024, 76, 76, 76, 255),
    VTX(310, 2050, -92, 0, 1024, 255, 248, 195, 255),
    VTX(10, 2150, -92, 8192, 1024, 255, 248, 195, 255),
    VTX(10, 2210, -92, 8192, -1024, 76, 76, 76, 255),
    VTX(310, 2110, -92, 0, -1024, 76, 76, 76, 255),
}; 

static Vtx water_temple_room_00Vtx_03E860[8] = {
    VTX(-590, 1930, -280, 0, 1024, 44, 44, 44, 255),
    VTX(-290, 2030, -280, 3072, 1024, 255, 248, 195, 255),
    VTX(-290, 2030, -80, 3072, -1024, 255, 248, 195, 255),
    VTX(-590, 1930, -80, 0, -1024, 44, 44, 44, 255),
    VTX(10, 2030, -280, 6144, 1024, 255, 248, 195, 255),
    VTX(310, 1930, -280, 9216, 1024, 44, 44, 44, 255),
    VTX(310, 1930, -80, 9216, -1024, 44, 44, 44, 255),
    VTX(10, 2030, -80, 6144, -1024, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_03E8E0[48] = {
    VTX(-592, 2110, -92, 512, 1024, 255, 248, 195, 255),
    VTX(-587, 2110, -87, 0, 1024, 76, 76, 76, 255),
    VTX(-587, 2130, -87, 0, 0, 0, 0, 0, 255),
    VTX(-592, 2130, -92, 512, 0, 163, 163, 163, 255),
    VTX(-587, 2130, -97, 1024, 0, 0, 0, 0, 255),
    VTX(-587, 2110, -97, 1024, 1024, 255, 248, 195, 255),
    VTX(-592, 2110, -268, 512, 1024, 255, 248, 195, 255),
    VTX(-587, 2110, -263, 0, 1024, 76, 76, 76, 255),
    VTX(-587, 2130, -263, 0, 0, 0, 0, 0, 255),
    VTX(-592, 2130, -268, 512, 0, 163, 163, 163, 255),
    VTX(-587, 2130, -273, 1024, 0, 0, 0, 0, 255),
    VTX(-587, 2110, -273, 1024, 1024, 255, 248, 195, 255),
    VTX(-290, 2210, -268, 512, 1024, 255, 248, 195, 255),
    VTX(-290, 2230, -268, 512, 0, 163, 163, 163, 255),
    VTX(-285, 2230, -273, 1024, 0, 0, 0, 0, 255),
    VTX(-285, 2210, -273, 1024, 1024, 255, 248, 195, 255),
    VTX(-285, 2210, -263, 0, 1024, 76, 76, 76, 255),
    VTX(-285, 2230, -263, 0, 0, 0, 0, 0, 255),
    VTX(-290, 2210, -92, 512, 1024, 255, 248, 195, 255),
    VTX(-285, 2210, -87, 0, 1024, 76, 76, 76, 255),
    VTX(-285, 2230, -87, 0, 0, 0, 0, 0, 255),
    VTX(-290, 2230, -92, 512, 0, 163, 163, 163, 255),
    VTX(-285, 2230, -97, 1024, 0, 0, 0, 0, 255),
    VTX(-285, 2210, -97, 1024, 1024, 255, 248, 195, 255),
    VTX(5, 2210, -97, 1024, 1024, 255, 248, 195, 255),
    VTX(5, 2230, -97, 1024, 0, 0, 0, 0, 255),
    VTX(10, 2230, -92, 512, 0, 163, 163, 163, 255),
    VTX(10, 2210, -92, 512, 1024, 255, 248, 195, 255),
    VTX(5, 2230, -87, 0, 0, 0, 0, 0, 255),
    VTX(5, 2210, -87, 0, 1024, 76, 76, 76, 255),
    VTX(10, 2230, -268, 512, 0, 163, 163, 163, 255),
    VTX(5, 2230, -263, 0, 0, 0, 0, 0, 255),
    VTX(5, 2210, -263, 0, 1024, 76, 76, 76, 255),
    VTX(10, 2210, -268, 512, 1024, 255, 248, 195, 255),
    VTX(5, 2210, -273, 1024, 1024, 255, 248, 195, 255),
    VTX(5, 2230, -273, 1024, 0, 0, 0, 0, 255),
    VTX(307, 2110, -273, 1024, 1024, 255, 248, 195, 255),
    VTX(307, 2130, -273, 1024, 0, 0, 0, 0, 255),
    VTX(312, 2130, -268, 512, 0, 163, 163, 163, 255),
    VTX(312, 2110, -268, 512, 1024, 255, 248, 195, 255),
    VTX(307, 2130, -263, 0, 0, 0, 0, 0, 255),
    VTX(307, 2110, -263, 0, 1024, 76, 76, 76, 255),
    VTX(312, 2130, -92, 512, 0, 163, 163, 163, 255),
    VTX(307, 2130, -87, 0, 0, 0, 0, 0, 255),
    VTX(307, 2110, -87, 0, 1024, 76, 76, 76, 255),
    VTX(312, 2110, -92, 512, 1024, 255, 248, 195, 255),
    VTX(307, 2110, -97, 1024, 1024, 255, 248, 195, 255),
    VTX(307, 2130, -97, 1024, 0, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_03EBE0[48] = {
    VTX(-592, 2050, -268, 512, 1024, 255, 248, 195, 255),
    VTX(-592, 2110, -268, 512, -1229, 163, 163, 163, 255),
    VTX(-587, 2110, -273, 1024, -1229, 0, 0, 0, 255),
    VTX(-587, 2050, -273, 1024, 1024, 255, 248, 195, 255),
    VTX(-587, 2050, -263, 0, 1024, 76, 76, 76, 255),
    VTX(-587, 2110, -263, 0, -1229, 0, 0, 0, 255),
    VTX(10, 2210, -92, 512, -1229, 163, 163, 163, 255),
    VTX(5, 2210, -87, 0, -1229, 0, 0, 0, 255),
    VTX(5, 2150, -87, 0, 1024, 76, 76, 76, 255),
    VTX(10, 2150, -92, 512, 1024, 255, 248, 195, 255),
    VTX(5, 2150, -97, 1024, 1024, 255, 248, 195, 255),
    VTX(5, 2210, -97, 1024, -1229, 0, 0, 0, 255),
    VTX(5, 2150, -273, 1024, 1024, 255, 248, 195, 255),
    VTX(5, 2210, -273, 1024, -1229, 0, 0, 0, 255),
    VTX(10, 2210, -268, 512, -1229, 163, 163, 163, 255),
    VTX(10, 2150, -268, 512, 1024, 255, 248, 195, 255),
    VTX(5, 2210, -263, 0, -1229, 0, 0, 0, 255),
    VTX(5, 2150, -263, 0, 1024, 76, 76, 76, 255),
    VTX(-290, 2150, -268, 512, 1024, 255, 248, 195, 255),
    VTX(-285, 2150, -263, 0, 1024, 76, 76, 76, 255),
    VTX(-285, 2210, -263, 0, -1229, 0, 0, 0, 255),
    VTX(-290, 2210, -268, 512, -1229, 163, 163, 163, 255),
    VTX(-285, 2210, -273, 1024, -1229, 0, 0, 0, 255),
    VTX(-285, 2150, -273, 1024, 1024, 255, 248, 195, 255),
    VTX(-290, 2150, -92, 512, 1024, 255, 248, 195, 255),
    VTX(-290, 2210, -92, 512, -1229, 163, 163, 163, 255),
    VTX(-285, 2210, -97, 1024, -1229, 0, 0, 0, 255),
    VTX(-285, 2150, -97, 1024, 1024, 255, 248, 195, 255),
    VTX(-285, 2150, -87, 0, 1024, 76, 76, 76, 255),
    VTX(-285, 2210, -87, 0, -1229, 0, 0, 0, 255),
    VTX(312, 2110, -268, 512, -1229, 163, 163, 163, 255),
    VTX(307, 2110, -263, 0, -1229, 0, 0, 0, 255),
    VTX(307, 2050, -263, 0, 1024, 76, 76, 76, 255),
    VTX(312, 2050, -268, 512, 1024, 255, 248, 195, 255),
    VTX(307, 2050, -273, 1024, 1024, 255, 248, 195, 255),
    VTX(307, 2110, -273, 1024, -1229, 0, 0, 0, 255),
    VTX(307, 2050, -97, 1024, 1024, 255, 248, 195, 255),
    VTX(307, 2110, -97, 1024, -1229, 0, 0, 0, 255),
    VTX(312, 2110, -92, 512, -1229, 163, 163, 163, 255),
    VTX(312, 2050, -92, 512, 1024, 255, 248, 195, 255),
    VTX(307, 2110, -87, 0, -1229, 0, 0, 0, 255),
    VTX(307, 2050, -87, 0, 1024, 76, 76, 76, 255),
    VTX(-592, 2050, -92, 512, 1024, 255, 248, 195, 255),
    VTX(-592, 2110, -92, 512, -1229, 163, 163, 163, 255),
    VTX(-587, 2110, -97, 1024, -1229, 0, 0, 0, 255),
    VTX(-587, 2050, -97, 1024, 1024, 255, 248, 195, 255),
    VTX(-587, 2050, -87, 0, 1024, 76, 76, 76, 255),
    VTX(-587, 2110, -87, 0, -1229, 0, 0, 0, 255),
}; 

static Vtx water_temple_room_00Vtx_03EEE0[16] = {
    VTX(-590, 1930, -280, 10240, 1024, 44, 44, 44, 255),
    VTX(-590, 2050, -280, 10240, -1024, 76, 76, 76, 255),
    VTX(-290, 2030, -280, 6827, 1024, 255, 248, 195, 255),
    VTX(-290, 2150, -280, 6827, -1024, 44, 44, 44, 255),
    VTX(-290, 2150, -80, 6827, -1024, 76, 76, 76, 255),
    VTX(-590, 2050, -80, 10240, -1024, 76, 76, 76, 255),
    VTX(-290, 2030, -80, 6827, 1024, 255, 248, 195, 255),
    VTX(-590, 1930, -80, 10240, 1024, 44, 44, 44, 255),
    VTX(310, 1930, -80, 0, 1024, 44, 44, 44, 255),
    VTX(310, 2050, -80, 0, -1024, 44, 44, 44, 255),
    VTX(10, 2030, -80, 3413, 1024, 255, 248, 195, 255),
    VTX(10, 2150, -80, 3413, -1024, 44, 44, 44, 255),
    VTX(10, 2150, -280, 3413, -1024, 76, 76, 76, 255),
    VTX(310, 2050, -280, 0, -1024, 44, 44, 44, 255),
    VTX(10, 2030, -280, 3413, 1024, 255, 248, 195, 255),
    VTX(310, 1930, -280, 0, 1024, 44, 44, 44, 255),
}; 

static Vtx water_temple_room_00Vtx_03EFE0[12] = {
    VTX(10, 2150, -80, -1024, 0, 44, 44, 44, 255),
    VTX(10, 2150, -280, 1024, 0, 76, 76, 76, 255),
    VTX(-140, 2150, -180, 0, -1536, 255, 248, 195, 255),
    VTX(-290, 2150, -280, 1024, -3072, 44, 44, 44, 255),
    VTX(310, 2050, -80, -1024, 3072, 135, 135, 135, 255),
    VTX(332, 2050, -80, -1024, 3302, 135, 135, 135, 255),
    VTX(332, 2050, -280, 1024, 3302, 135, 135, 135, 255),
    VTX(310, 2050, -280, 1024, 3072, 135, 135, 135, 255),
    VTX(-590, 2050, -80, -1024, -6144, 135, 135, 135, 255),
    VTX(-290, 2150, -80, -1024, -3072, 76, 76, 76, 255),
    VTX(-590, 2050, -280, 1024, -6144, 135, 135, 135, 255),
    VTX(-140, 2150, -180, 0, -1536, 255, 248, 195, 255),
}; 

static Vtx water_temple_room_00Vtx_03F0A0[8] = {
    VTX(-592, 1930, -280, 0, 0, 0, 0, 0, 0),
    VTX(332, 1930, -280, 0, 0, 0, 0, 0, 0),
    VTX(-592, 2230, -280, 0, 0, 0, 0, 0, 0),
    VTX(332, 2230, -280, 0, 0, 0, 0, 0, 0),
    VTX(-592, 1930, -80, 0, 0, 0, 0, 0, 0),
    VTX(332, 1930, -80, 0, 0, 0, 0, 0, 0),
    VTX(-592, 2230, -80, 0, 0, 0, 0, 0, 0),
    VTX(332, 2230, -80, 0, 0, 0, 0, 0, 0),
}; 

Gfx water_temple_room_00Dlist0x03F120[] = {
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPVertex(&water_temple_room_00Vtx_03F0A0[0], 8, 0),
    gsSPCullDisplayList(0, 7),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPLoadTextureBlock(water_temple_room_00Tex_03F508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&water_temple_room_00Vtx_03E6E0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_03FD08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_00Vtx_03E860[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 4, 7, 0, 1, 7, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_019340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_00Vtx_03E8E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(6, 9, 10, 0, 6, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 16, 17, 0, 12, 17, 13, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(26, 28, 29, 0, 26, 29, 27, 0),
    gsSPVertex(&water_temple_room_00Vtx_03E8E0[30], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 12, 0, 16, 12, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_sceneTex_01A340, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_03EBE0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 4, 5, 0, 0, 5, 1, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(18, 21, 22, 0, 18, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 26, 27, 0),
    gsSP2Triangles(24, 28, 29, 0, 24, 29, 25, 0),
    gsSPVertex(&water_temple_room_00Vtx_03EBE0[30], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(12, 16, 17, 0, 12, 17, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_040508, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&water_temple_room_00Vtx_03EEE0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 11, 10, 0),
    gsSP2Triangles(11, 4, 6, 0, 11, 6, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(3, 12, 14, 0, 3, 14, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(water_temple_room_00Tex_040D08, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 0, 5, 5, 0, 0),
    gsSPVertex(&water_temple_room_00Vtx_03EFE0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(0, 4, 7, 0, 0, 7, 1, 0),
    gsSP2Triangles(8, 9, 3, 0, 8, 3, 10, 0),
    gsSP2Triangles(9, 11, 3, 0, 9, 0, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 water_temple_room_00Tex_03F508[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_03F508.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_03FD08[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_03FD08.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_040508[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_040508.rgb5a1.inc.c"
};

u64 water_temple_room_00Tex_040D08[] = {
#include "assets/scenes/dungeons/water_temple//water_temple_room_00Tex_040D08.rgb5a1.inc.c"
};

Gfx water_temple_room_00Dlist0x041508[] = {
    gsSPDisplayList(water_temple_room_00Dlist0x000220),
    gsSPDisplayList(water_temple_room_00Dlist0x001560),
    gsSPDisplayList(water_temple_room_00Dlist0x0045B0),
    gsSPDisplayList(water_temple_room_00Dlist0x00AC70),
    gsSPDisplayList(water_temple_room_00Dlist0x00CE40),
    gsSPDisplayList(water_temple_room_00Dlist0x011A60),
    gsSPDisplayList(water_temple_room_00Dlist0x0178B8),
    gsSPDisplayList(water_temple_room_00Dlist0x021138),
    gsSPDisplayList(water_temple_room_00Dlist0x025EC8),
    gsSPDisplayList(water_temple_room_00Dlist0x02BF90),
    gsSPDisplayList(water_temple_room_00Dlist0x0312D8),
    gsSPDisplayList(water_temple_room_00Dlist0x037CE8),
    gsSPDisplayList(water_temple_room_00Dlist0x0391C8),
    gsSPDisplayList(water_temple_room_00Dlist0x03CB48),
    gsSPDisplayList(water_temple_room_00Dlist0x03F120),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_041588[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


