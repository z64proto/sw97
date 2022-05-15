#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "fstdan_room_06.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "fstdan_scene.h"


static SCmdEchoSettings fstdan_room_06Set0000Cmd00;
static SCmdRoomBehavior fstdan_room_06Set0000Cmd01;
static SCmdSkyboxDisables fstdan_room_06Set0000Cmd02;
static SCmdMesh fstdan_room_06Set0000Cmd03;
static SCmdObjectList fstdan_room_06Set0000Cmd04;
static SCmdActorList fstdan_room_06Set0000Cmd05;
static SCmdEndMarker fstdan_room_06Set0000Cmd06;
static s32 terminatorMaybe;
static Vtx fstdan_room_06Vtx_000070[2];
static Vtx fstdan_room_06Vtx_000090[2];
static Vtx fstdan_room_06Vtx_0000B0[6];
static Vtx fstdan_room_06Vtx_000110[16];
static Vtx fstdan_room_06Vtx_000210[14];
static Vtx fstdan_room_06Vtx_0002F0[16];
static Vtx fstdan_room_06Vtx_0003F0[16];
static Vtx fstdan_room_06Vtx_0004F0[4];
static Vtx fstdan_room_06Vtx_000530[8];
static Vtx fstdan_room_06Vtx_0005B0[4];
static Vtx fstdan_room_06Vtx_0005F0[4];
static Vtx fstdan_room_06Vtx_000630[4];
static Vtx fstdan_room_06Vtx_000670[4];
static Vtx fstdan_room_06Vtx_0006B0[14];
static Vtx fstdan_room_06Vtx_000790[44];
static Vtx fstdan_room_06Vtx_005A40[4];
static Vtx fstdan_room_06Vtx_005A80[14];
static Vtx fstdan_room_06Vtx_005B60[6];
static Vtx fstdan_room_06Vtx_005BC0[14];
static Vtx fstdan_room_06Vtx_005CA0[4];
static Vtx fstdan_room_06Vtx_005CE0[10];
static Vtx fstdan_room_06Vtx_005D80[10];
static Vtx fstdan_room_06Vtx_005E20[18];
static Vtx fstdan_room_06Vtx_005F40[6];
static Vtx fstdan_room_06Vtx_005FA0[6];
static Vtx fstdan_room_06Vtx_006000[6];
static Vtx fstdan_room_06Vtx_006060[14];
static Vtx fstdan_room_06Vtx_006140[10];
static Vtx fstdan_room_06Vtx_0061E0[10];
static Vtx fstdan_room_06Vtx_006280[4];
static Vtx fstdan_room_06Vtx_0062C0[4];
static Vtx fstdan_room_06Vtx_006300[4];
static Vtx fstdan_room_06Vtx_006340[4];
static Vtx fstdan_room_06Vtx_006380[12];
static Vtx fstdan_room_06Vtx_006440[16];
static Vtx fstdan_room_06Vtx_006540[8];
static Vtx fstdan_room_06Vtx_006B40[4];

static SCmdEchoSettings fstdan_room_06Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior fstdan_room_06Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables fstdan_room_06Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x00 }; // 0x0010

static SCmdMesh fstdan_room_06Set0000Cmd03 = {  0x0A, 0, (u32)&fstdan_room_06MeshHeader0x000050 }; // 0x0018

static SCmdObjectList fstdan_room_06Set0000Cmd04 = {  0x0B, 0x03, (u32)fstdan_room_06ObjectList0x000038 }; // 0x0020

static SCmdActorList fstdan_room_06Set0000Cmd05 = {  0x01, 0x01, (u32)fstdan_room_06ActorList0x000040 }; // 0x0028 }; 

static SCmdEndMarker fstdan_room_06Set0000Cmd06 = {  0x14, 0x00, 0x00 }; // 0x0030

s16 fstdan_room_06ObjectList0x000038[3] = {
	OBJECT_IK, // manual edit, was originally beta OBJECT_IRONKNACK
	OBJECT_SKELETON,
	OBJECT_WALLMASTER,
}; 

ActorEntry fstdan_room_06ActorList0x000040[1] = {
	{ ACTOR_EN_WALLMAS, -236, 0, 493, 0, -21663, 0, 0xFFFF }, //0x000040
}; 

MeshHeader0 fstdan_room_06MeshHeader0x000050 = { { 0 }, 0x01, (u32)&fstdan_room_06MeshDListEntry0x00005C, (u32)&(fstdan_room_06MeshDListEntry0x00005C) + sizeof(fstdan_room_06MeshDListEntry0x00005C) }; 

MeshEntry0 fstdan_room_06MeshDListEntry0x00005C[1] = {
	{ (u32)fstdan_room_06Dlist0x006B20, (u32)fstdan_room_06Dlist0x007428 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad68 = 0;
static u32 pad6C = 0;

static Vtx fstdan_room_06Vtx_000070[2] = {
    VTX(30, 100, 400, 512, 1024, 17, 17, 17, 255),
    VTX(-29, 100, 400, 512, -1023, 17, 17, 17, 255),
}; 

static Vtx fstdan_room_06Vtx_000090[2] = {
    VTX(-29, 0, 400, 512, 1024, 51, 51, 51, 255),
    VTX(30, 0, 400, 512, -1023, 51, 51, 51, 255),
}; 

static Vtx fstdan_room_06Vtx_0000B0[6] = {
    VTX(30, 100, 420, 0, 1024, 17, 17, 17, 255),
    VTX(-29, 100, 420, 0, -1023, 17, 17, 17, 255),
    VTX(-486, 100, 315, 0, 1024, 17, 17, 17, 255),
    VTX(-496, 100, 298, 512, 1024, 17, 17, 17, 255),
    VTX(-444, 100, 268, 512, -1023, 17, 17, 17, 255),
    VTX(-434, 100, 285, 0, -1023, 17, 17, 17, 255),
}; 

static Vtx fstdan_room_06Vtx_000110[16] = {
    VTX(30, 0, 400, 512, 341, 34, 34, 34, 255),
    VTX(30, 0, 420, 0, 341, 34, 34, 34, 255),
    VTX(30, 100, 420, 0, 2048, 34, 34, 34, 255),
    VTX(30, 100, 400, 512, 2048, 34, 34, 34, 255),
    VTX(-29, 100, 400, 512, 2048, 34, 34, 34, 255),
    VTX(-29, 100, 420, 0, 2048, 34, 34, 34, 255),
    VTX(-29, 0, 420, 0, 341, 34, 34, 34, 255),
    VTX(-29, 0, 400, 512, 341, 34, 34, 34, 255),
    VTX(-486, 0, 315, 1024, 0, 34, 34, 34, 255),
    VTX(-496, 0, 298, 512, 0, 34, 34, 34, 255),
    VTX(-496, 100, 298, 512, 2560, 34, 34, 34, 255),
    VTX(-486, 100, 315, 1024, 2560, 34, 34, 34, 255),
    VTX(-434, 100, 285, 1024, 2560, 34, 34, 34, 255),
    VTX(-444, 100, 268, 512, 2560, 34, 34, 34, 255),
    VTX(-444, 0, 268, 512, 0, 34, 34, 34, 255),
    VTX(-434, 0, 285, 1024, 0, 34, 34, 34, 255),
}; 

static Vtx fstdan_room_06Vtx_000210[14] = {
    VTX(-29, 0, 420, 0, 1024, 51, 51, 51, 255),
    VTX(30, 0, 420, 0, -1023, 51, 51, 51, 255),
    VTX(-49, 0, 420, 1365, -1706, 51, 51, 51, 255),
    VTX(-29, 0, 420, 1024, -1706, 51, 51, 51, 255),
    VTX(-29, 100, 420, 1024, 0, 51, 51, 51, 255),
    VTX(-49, 150, 420, 1365, 853, 51, 51, 51, 255),
    VTX(30, 100, 420, 0, 0, 51, 51, 51, 255),
    VTX(50, 150, 420, -340, 853, 51, 51, 51, 255),
    VTX(30, 0, 420, 0, -1706, 51, 51, 51, 255),
    VTX(50, 0, 420, -340, -1706, 51, 51, 51, 255),
    VTX(-434, 0, 285, 0, 1024, 51, 51, 51, 255),
    VTX(-444, 0, 268, 512, 1024, 51, 51, 51, 255),
    VTX(-496, 0, 298, 512, -1023, 51, 51, 51, 255),
    VTX(-486, 0, 315, 0, -1023, 51, 51, 51, 255),
}; 

static Vtx fstdan_room_06Vtx_0002F0[16] = {
    VTX(-349, 220, 548, 1235, 5291, 102, 102, 102, 255),
    VTX(-426, 220, 494, 2156, 6607, 102, 102, 102, 255),
    VTX(-298, 220, 340, 4771, 4413, 102, 102, 102, 255),
    VTX(-249, 220, 374, 4191, 3584, 102, 102, 102, 255),
    VTX(-493, 220, 427, 3292, 7743, 102, 102, 102, 255),
    VTX(-339, 220, 299, 5486, 5128, 102, 102, 102, 255),
    VTX(-547, 220, 350, 4608, 8664, 102, 102, 102, 255),
    VTX(-373, 220, 250, 6315, 5708, 102, 102, 102, 255),
    VTX(-173, 220, 612, 140, 2283, 102, 102, 102, 255),
    VTX(-264, 220, 587, 556, 3835, 102, 102, 102, 255),
    VTX(-195, 220, 399, 3763, 2667, 102, 102, 102, 255),
    VTX(-138, 220, 415, 3501, 1690, 102, 102, 102, 255),
    VTX(-79, 220, 420, 3413, 683, 102, 102, 102, 255),
    VTX(-79, 220, 620, 0, 683, 102, 102, 102, 255),
    VTX(-39, 220, 420, 3413, 0, 102, 102, 102, 255),
    VTX(-39, 220, 620, 0, 0, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_06Vtx_0003F0[16] = {
    VTX(-138, 0, 415, -770, 1690, 170, 170, 170, 255),
    VTX(-195, 0, 399, -1032, 2667, 170, 170, 170, 255),
    VTX(-264, 0, 587, 2175, 3835, 170, 170, 170, 255),
    VTX(-173, 0, 612, 2591, 2283, 170, 170, 170, 255),
    VTX(-79, 0, 620, 2731, 683, 170, 170, 170, 255),
    VTX(-79, 0, 420, -682, 683, 170, 170, 170, 255),
    VTX(-39, 0, 620, 2731, 0, 170, 170, 170, 255),
    VTX(-39, 0, 420, -682, 0, 170, 170, 170, 255),
    VTX(-249, 0, 374, -1459, 3584, 170, 170, 170, 255),
    VTX(-349, 0, 548, 1496, 5291, 170, 170, 170, 255),
    VTX(-298, 0, 340, -2039, 4413, 170, 170, 170, 255),
    VTX(-426, 0, 494, 575, 6607, 170, 170, 170, 255),
    VTX(-339, 0, 299, -2754, 5128, 170, 170, 170, 255),
    VTX(-493, 0, 427, -560, 7743, 170, 170, 170, 255),
    VTX(-373, 0, 250, -3583, 5708, 170, 170, 170, 255),
    VTX(-547, 0, 350, -1876, 8664, 170, 170, 170, 255),
}; 

static Vtx fstdan_room_06Vtx_0004F0[4] = {
    VTX(60, 160, 430, 205, 1489, 187, 187, 187, 255),
    VTX(-19, 160, 430, 1024, 1489, 187, 187, 187, 255),
    VTX(-19, 150, 420, 1024, 1396, 187, 187, 187, 255),
    VTX(50, 150, 420, 307, 1396, 187, 187, 187, 255),
}; 

static Vtx fstdan_room_06Vtx_000530[8] = {
    VTX(-19, 160, 430, 0, 1489, 187, 187, 187, 255),
    VTX(-59, 160, 430, 365, 1489, 187, 187, 187, 255),
    VTX(-49, 150, 420, 320, 1396, 187, 187, 187, 255),
    VTX(-19, 150, 420, 46, 1396, 187, 187, 187, 255),
    VTX(-69, 0, 430, 457, 0, 187, 187, 187, 255),
    VTX(-69, 220, 430, 457, 2048, 187, 187, 187, 255),
    VTX(-79, 220, 420, 594, 2048, 187, 187, 187, 255),
    VTX(-79, 0, 420, 594, 0, 187, 187, 187, 255),
}; 

static Vtx fstdan_room_06Vtx_0005B0[4] = {
    VTX(60, 0, 430, 205, 0, 204, 204, 204, 255),
    VTX(60, 160, 430, 205, 1489, 204, 204, 204, 255),
    VTX(50, 150, 420, 307, 1396, 204, 204, 204, 255),
    VTX(50, 0, 420, 307, 0, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_06Vtx_0005F0[4] = {
    VTX(-39, 220, 420, 1755, 1024, 255, 255, 255, 255),
    VTX(80, 220, 420, 1755, 0, 255, 255, 255, 255),
    VTX(80, 220, 620, 293, 0, 255, 255, 255, 255),
    VTX(-39, 220, 620, 293, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_06Vtx_000630[4] = {
    VTX(-39, 0, 620, 1877, 1024, 255, 255, 255, 255),
    VTX(80, 0, 620, 1877, 0, 255, 255, 255, 255),
    VTX(80, 0, 420, 171, 0, 255, 255, 255, 255),
    VTX(-39, 0, 420, 171, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_06Vtx_000670[4] = {
    VTX(80, 220, 420, 2048, 2048, 255, 255, 255, 255),
    VTX(80, 0, 420, 2048, 0, 255, 255, 255, 255),
    VTX(80, 0, 620, 0, 0, 255, 255, 255, 255),
    VTX(80, 220, 620, 0, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_06Vtx_0006B0[14] = {
    VTX(-19, 220, 620, 1024, 2048, 255, 255, 255, 255),
    VTX(80, 220, 620, 0, 2048, 255, 255, 255, 255),
    VTX(80, 0, 620, 0, 0, 255, 255, 255, 255),
    VTX(-19, 0, 620, 1024, 0, 255, 255, 255, 255),
    VTX(-19, 160, 430, 1024, 1489, 255, 255, 255, 255),
    VTX(60, 160, 430, 205, 1489, 255, 255, 255, 255),
    VTX(80, 220, 430, 0, 2048, 255, 255, 255, 255),
    VTX(-19, 220, 430, 1024, 2048, 255, 255, 255, 255),
    VTX(60, 0, 430, 205, 0, 255, 255, 255, 255),
    VTX(80, 0, 430, 0, 0, 255, 255, 255, 255),
    VTX(-49, 0, 420, 410, 0, 255, 255, 255, 255),
    VTX(-49, 150, 420, 410, 1396, 255, 255, 255, 255),
    VTX(-59, 160, 430, 554, 1489, 255, 255, 255, 255),
    VTX(-59, 0, 430, 554, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_06Vtx_000790[44] = {
    VTX(-59, 160, 430, 365, 1489, 255, 255, 255, 255),
    VTX(-19, 160, 430, 0, 1489, 255, 255, 255, 255),
    VTX(-19, 220, 430, 0, 2048, 255, 255, 255, 255),
    VTX(-69, 220, 430, 457, 2048, 255, 255, 255, 255),
    VTX(-69, 0, 430, 457, 0, 255, 255, 255, 255),
    VTX(-59, 0, 430, 365, 0, 255, 255, 255, 255),
    VTX(-339, 220, 299, 3535, 2048, 255, 255, 255, 255),
    VTX(-339, 0, 299, 3535, 0, 255, 255, 255, 255),
    VTX(-298, 0, 340, 2958, 0, 255, 255, 255, 255),
    VTX(-298, 220, 340, 2958, 2048, 255, 255, 255, 255),
    VTX(-373, 220, 250, 4071, 2048, 255, 255, 255, 255),
    VTX(-373, 0, 250, 4071, 0, 255, 255, 255, 255),
    VTX(-249, 0, 374, 2358, 0, 255, 255, 255, 255),
    VTX(-249, 220, 374, 2358, 2048, 255, 255, 255, 255),
    VTX(-195, 220, 399, 1751, 2048, 255, 255, 255, 255),
    VTX(-138, 220, 415, 1157, 2048, 255, 255, 255, 255),
    VTX(-426, 220, 494, 4300, 2048, 255, 255, 255, 255),
    VTX(-493, 220, 427, 5218, 2048, 255, 255, 255, 255),
    VTX(-349, 220, 548, 3346, 2048, 255, 255, 255, 255),
    VTX(-264, 220, 587, 2382, 2048, 255, 255, 255, 255),
    VTX(-173, 220, 612, 1440, 2048, 255, 255, 255, 255),
    VTX(-79, 220, 620, 547, 2048, 255, 255, 255, 255),
    VTX(-19, 220, 620, 0, 2048, 255, 255, 255, 255),
    VTX(-486, 0, 315, 1331, 0, 255, 255, 255, 255),
    VTX(-486, 100, 315, 1331, 931, 255, 255, 255, 255),
    VTX(-434, 100, 285, 717, 931, 255, 255, 255, 255),
    VTX(-195, 0, 399, 1751, 0, 255, 255, 255, 255),
    VTX(-138, 0, 415, 1157, 0, 255, 255, 255, 255),
    VTX(-79, 0, 420, 594, 0, 255, 255, 255, 255),
    VTX(-79, 220, 420, 594, 2048, 255, 255, 255, 255),
    VTX(-426, 0, 494, 4300, 0, 255, 255, 255, 255),
    VTX(-493, 0, 427, 5218, 0, 255, 255, 255, 255),
    VTX(-547, 0, 350, 6069, 0, 255, 255, 255, 255),
    VTX(-547, 220, 350, 6069, 2048, 255, 255, 255, 255),
    VTX(-349, 0, 548, 3346, 0, 255, 255, 255, 255),
    VTX(-264, 0, 587, 2382, 0, 255, 255, 255, 255),
    VTX(-173, 0, 612, 1440, 0, 255, 255, 255, 255),
    VTX(-79, 0, 620, 547, 0, 255, 255, 255, 255),
    VTX(-19, 0, 620, 0, 0, 255, 255, 255, 255),
    VTX(-547, 0, 350, 2048, 0, 255, 255, 255, 255),
    VTX(-547, 220, 350, 2048, 2048, 255, 255, 255, 255),
    VTX(-373, 220, 250, 0, 2048, 255, 255, 255, 255),
    VTX(-434, 0, 285, 717, 0, 255, 255, 255, 255),
    VTX(-373, 0, 250, 0, 0, 255, 255, 255, 255),
}; 

Gfx fstdan_room_06Dlist0x000A50[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 17, 17, 17, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_sceneTex_00DC00, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 0, 0, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_06Vtx_000070[0], 2, 0),
    gsSPVertex(&fstdan_room_06Vtx_0000B0[0], 6, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 34, 34, 34, 255),
    gsSPVertex(&fstdan_room_06Vtx_000110[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 51, 51, 51, 255),
    gsSPVertex(&fstdan_room_06Vtx_000090[0], 2, 0),
    gsSPVertex(&fstdan_room_06Vtx_000210[0], 14, 2),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 7, 0),
    gsSP1Triangle(8, 7, 6, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(8, 11, 9, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 102, 102, 102, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_001240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_0002F0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 2, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 8, 0),
    gsSP1Triangle(12, 8, 11, 0),
    gsSP1Triangle(9, 0, 3, 0),
    gsSP1Triangle(9, 3, 10, 0),
    gsSPVertex(&fstdan_room_06Vtx_0002F0[12], 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 170, 170, 170, 255),
    gsSPVertex(&fstdan_room_06Vtx_0003F0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(1, 8, 9, 0),
    gsSP1Triangle(1, 9, 2, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(8, 11, 9, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(10, 13, 11, 0),
    gsSPVertex(&fstdan_room_06Vtx_0003F0[12], 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 187, 187, 187, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_0004F0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_004A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_000530[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 204, 204, 204, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_0005B0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_001A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_0005F0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_002240, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_000630[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_002A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_000670[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_003A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_0006B0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(5, 9, 6, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_004A40, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_06Vtx_000790[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(10, 11, 7, 0),
    gsSP1Triangle(10, 7, 6, 0),
    gsSP1Triangle(9, 8, 12, 0),
    gsSP1Triangle(9, 12, 13, 0),
    gsSPVertex(&fstdan_room_06Vtx_000790[14], 5, 0),
    gsSPVertex(&fstdan_room_06Vtx_000790[26], 9, 5),
    gsSP1Triangle(0, 5, 6, 0),
    gsSP1Triangle(0, 6, 1, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(3, 11, 12, 0),
    gsSP1Triangle(4, 13, 9, 0),
    gsSP1Triangle(4, 9, 2, 0),
    gsSPVertex(&fstdan_room_06Vtx_000790[18], 8, 0),
    gsSPVertex(&fstdan_room_06Vtx_000790[34], 8, 8),
    gsSP1Triangle(1, 9, 8, 0),
    gsSP1Triangle(1, 8, 0, 0),
    gsSP1Triangle(2, 10, 9, 0),
    gsSP1Triangle(2, 9, 1, 0),
    gsSP1Triangle(3, 11, 10, 0),
    gsSP1Triangle(3, 10, 2, 0),
    gsSP1Triangle(4, 12, 11, 0),
    gsSP1Triangle(4, 11, 3, 0),
    gsSP1Triangle(5, 6, 13, 0),
    gsSP1Triangle(6, 14, 13, 0),
    gsSP1Triangle(6, 7, 15, 0),
    gsSP1Triangle(6, 15, 14, 0),
    gsSPVertex(&fstdan_room_06Vtx_000790[12], 3, 0),
    gsSPVertex(&fstdan_room_06Vtx_000790[25], 2, 3),
    gsSPVertex(&fstdan_room_06Vtx_000790[41], 3, 5),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(3, 7, 5, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_06Tex_001240[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_06Tex_001240.rgb5a1.inc.c"
};

u64 fstdan_room_06Tex_001A40[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_06Tex_001A40.rgb5a1.inc.c"
};

u64 fstdan_room_06Tex_002240[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_06Tex_002240.rgb5a1.inc.c"
};

u64 fstdan_room_06Tex_002A40[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_06Tex_002A40.rgb5a1.inc.c"
};

u64 fstdan_room_06Tex_003A40[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_06Tex_003A40.rgb5a1.inc.c"
};

u64 fstdan_room_06Tex_004A40[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_06Tex_004A40.rgb5a1.inc.c"
};

static Vtx fstdan_room_06Vtx_005A40[4] = {
    VTX(46, 83, 510, 4273, 715, 68, 68, 68, 255),
    VTX(55, 71, 517, 4168, 649, 68, 68, 68, 255),
    VTX(55, 71, 523, 4024, 649, 68, 68, 68, 255),
    VTX(46, 83, 530, 3919, 715, 68, 68, 68, 255),
}; 

static Vtx fstdan_room_06Vtx_005A80[14] = {
    VTX(73, 21, 495, 4882, 199, 85, 85, 85, 255),
    VTX(68, 20, 501, 4687, 199, 85, 85, 85, 255),
    VTX(66, 20, 506, 4577, 199, 85, 85, 85, 255),
    VTX(66, 20, 534, 3615, 199, 85, 85, 85, 255),
    VTX(68, 20, 539, 3505, 199, 85, 85, 85, 255),
    VTX(73, 21, 545, 3310, 199, 85, 85, 85, 255),
    VTX(73, 41, 545, 3310, 375, 85, 85, 85, 255),
    VTX(68, 40, 539, 3505, 375, 85, 85, 85, 255),
    VTX(66, 40, 534, 3615, 375, 85, 85, 85, 255),
    VTX(66, 40, 506, 4577, 375, 85, 85, 85, 255),
    VTX(68, 40, 501, 4687, 375, 85, 85, 85, 255),
    VTX(73, 41, 495, 4882, 375, 85, 85, 85, 255),
    VTX(46, 38, 523, 4042, 358, 85, 85, 85, 255),
    VTX(46, 38, 517, 4150, 358, 85, 85, 85, 255),
}; 

static Vtx fstdan_room_06Vtx_005B60[6] = {
    VTX(66, 71, 515, 197, 649, 85, 85, 85, 255),
    VTX(46, 83, 530, 3919, 715, 85, 85, 85, 255),
    VTX(55, 71, 517, 72, 649, 85, 85, 85, 255),
    VTX(46, 83, 510, 177, 715, 85, 85, 85, 255),
    VTX(55, 71, 523, 4024, 649, 85, 85, 85, 255),
    VTX(66, 71, 525, 3899, 649, 85, 85, 85, 255),
}; 

static Vtx fstdan_room_06Vtx_005BC0[14] = {
    VTX(73, 21, 495, 4882, 199, 102, 102, 102, 255),
    VTX(73, 21, 545, 3310, 199, 102, 102, 102, 255),
    VTX(75, 25, 548, 3231, 234, 102, 102, 102, 255),
    VTX(75, 25, 492, 4961, 234, 102, 102, 102, 255),
    VTX(46, 38, 523, 4042, 358, 102, 102, 102, 255),
    VTX(44, 48, 523, 4045, 446, 102, 102, 102, 255),
    VTX(44, 48, 517, 4147, 446, 102, 102, 102, 255),
    VTX(46, 38, 517, 4150, 358, 102, 102, 102, 255),
    VTX(46, 83, 530, 3919, 715, 102, 102, 102, 255),
    VTX(66, 71, 525, 3899, 649, 102, 102, 102, 255),
    VTX(80, 79, 554, 3110, 715, 102, 102, 102, 255),
    VTX(80, 79, 486, 986, 715, 102, 102, 102, 255),
    VTX(66, 71, 515, 197, 649, 102, 102, 102, 255),
    VTX(46, 83, 510, 177, 715, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_06Vtx_005CA0[4] = {
    VTX(75, 37, 548, 3231, 340, 102, 102, 102, 255),
    VTX(73, 41, 545, 3310, 375, 102, 102, 102, 255),
    VTX(73, 41, 495, 4882, 375, 102, 102, 102, 255),
    VTX(75, 37, 492, 4961, 340, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_06Vtx_005CE0[10] = {
    VTX(66, 71, 525, 3899, 649, 119, 119, 119, 255),
    VTX(68, 55, 539, 3505, 503, 119, 119, 119, 255),
    VTX(80, 79, 554, 3110, 715, 119, 119, 119, 255),
    VTX(75, 25, 492, 4961, 234, 119, 119, 119, 255),
    VTX(75, 25, 548, 3231, 234, 119, 119, 119, 255),
    VTX(75, 37, 548, 3231, 340, 119, 119, 119, 255),
    VTX(75, 37, 492, 4961, 340, 119, 119, 119, 255),
    VTX(80, 79, 486, 986, 715, 119, 119, 119, 255),
    VTX(68, 55, 501, 591, 503, 119, 119, 119, 255),
    VTX(66, 71, 515, 197, 649, 119, 119, 119, 255),
}; 

static Vtx fstdan_room_06Vtx_005D80[10] = {
    VTX(55, 71, 517, 4168, 649, 136, 136, 136, 255),
    VTX(44, 48, 517, 4147, 446, 136, 136, 136, 255),
    VTX(44, 48, 523, 4045, 446, 136, 136, 136, 255),
    VTX(55, 71, 523, 4024, 649, 136, 136, 136, 255),
    VTX(66, 40, 534, 3615, 375, 136, 136, 136, 255),
    VTX(68, 55, 539, 3505, 503, 136, 136, 136, 255),
    VTX(66, 71, 525, 3899, 649, 136, 136, 136, 255),
    VTX(66, 71, 515, 197, 649, 136, 136, 136, 255),
    VTX(68, 55, 501, 591, 503, 136, 136, 136, 255),
    VTX(66, 40, 506, 481, 375, 136, 136, 136, 255),
}; 

static Vtx fstdan_room_06Vtx_005E20[18] = {
    VTX(68, 0, 539, 3505, 18, 153, 153, 153, 255),
    VTX(68, 20, 539, 3505, 199, 153, 153, 153, 255),
    VTX(66, 20, 534, 3615, 199, 153, 153, 153, 255),
    VTX(66, 0, 534, 3615, 18, 153, 153, 153, 255),
    VTX(55, 71, 517, 72, 649, 153, 153, 153, 255),
    VTX(66, 71, 515, 197, 649, 153, 153, 153, 255),
    VTX(66, 40, 506, 481, 375, 153, 153, 153, 255),
    VTX(68, 55, 501, 591, 503, 153, 153, 153, 255),
    VTX(68, 40, 501, 591, 375, 153, 153, 153, 255),
    VTX(68, 20, 501, 591, 199, 153, 153, 153, 255),
    VTX(68, 0, 501, 591, 18, 153, 153, 153, 255),
    VTX(66, 0, 506, 481, 18, 153, 153, 153, 255),
    VTX(66, 20, 506, 481, 199, 153, 153, 153, 255),
    VTX(68, 40, 539, 3505, 375, 153, 153, 153, 255),
    VTX(68, 55, 539, 3505, 503, 153, 153, 153, 255),
    VTX(66, 40, 534, 3615, 375, 153, 153, 153, 255),
    VTX(66, 71, 525, 3899, 649, 153, 153, 153, 255),
    VTX(55, 71, 523, 4024, 649, 153, 153, 153, 255),
}; 

static Vtx fstdan_room_06Vtx_005F40[6] = {
    VTX(46, 38, 523, 4042, 358, 170, 170, 170, 255),
    VTX(66, 40, 534, 3615, 375, 170, 170, 170, 255),
    VTX(44, 48, 523, 4045, 446, 170, 170, 170, 255),
    VTX(66, 40, 506, 481, 375, 170, 170, 170, 255),
    VTX(46, 38, 517, 54, 358, 170, 170, 170, 255),
    VTX(44, 48, 517, 51, 446, 170, 170, 170, 255),
}; 

static Vtx fstdan_room_06Vtx_005FA0[6] = {
    VTX(44, 48, 523, 4045, 446, 187, 187, 187, 255),
    VTX(66, 40, 534, 3615, 375, 187, 187, 187, 255),
    VTX(55, 71, 523, 4024, 649, 187, 187, 187, 255),
    VTX(55, 71, 517, 72, 649, 187, 187, 187, 255),
    VTX(66, 40, 506, 481, 375, 187, 187, 187, 255),
    VTX(44, 48, 517, 51, 446, 187, 187, 187, 255),
}; 

static Vtx fstdan_room_06Vtx_006000[6] = {
    VTX(80, 0, 491, 979, 18, 204, 204, 204, 255),
    VTX(68, 0, 501, 591, 18, 204, 204, 204, 255),
    VTX(80, 20, 486, 986, 199, 204, 204, 204, 255),
    VTX(68, 0, 539, 3505, 18, 204, 204, 204, 255),
    VTX(80, 0, 549, 3117, 18, 204, 204, 204, 255),
    VTX(80, 20, 554, 3110, 199, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_06Vtx_006060[14] = {
    VTX(46, 83, 530, 3919, 715, 221, 221, 221, 255),
    VTX(46, 114, 530, 3919, 1024, 221, 221, 221, 255),
    VTX(46, 114, 510, 4273, 1024, 221, 221, 221, 255),
    VTX(46, 83, 510, 4273, 715, 221, 221, 221, 255),
    VTX(80, 20, 486, 986, 199, 221, 221, 221, 255),
    VTX(75, 37, 492, 865, 340, 221, 221, 221, 255),
    VTX(80, 79, 486, 986, 715, 221, 221, 221, 255),
    VTX(75, 25, 492, 865, 234, 221, 221, 221, 255),
    VTX(68, 0, 501, 591, 18, 221, 221, 221, 255),
    VTX(73, 21, 495, 786, 199, 221, 221, 221, 255),
    VTX(68, 20, 501, 591, 199, 221, 221, 221, 255),
    VTX(73, 41, 495, 786, 375, 221, 221, 221, 255),
    VTX(68, 40, 501, 591, 375, 221, 221, 221, 255),
    VTX(68, 55, 501, 591, 503, 221, 221, 221, 255),
}; 

static Vtx fstdan_room_06Vtx_006140[10] = {
    VTX(80, 79, 554, 3110, 715, 221, 221, 221, 255),
    VTX(75, 37, 548, 3231, 340, 221, 221, 221, 255),
    VTX(75, 25, 548, 3231, 234, 221, 221, 221, 255),
    VTX(73, 21, 545, 3310, 199, 221, 221, 221, 255),
    VTX(68, 55, 539, 3505, 503, 221, 221, 221, 255),
    VTX(73, 41, 545, 3310, 375, 221, 221, 221, 255),
    VTX(80, 20, 554, 3110, 199, 221, 221, 221, 255),
    VTX(68, 0, 539, 3505, 18, 221, 221, 221, 255),
    VTX(68, 20, 539, 3505, 199, 221, 221, 221, 255),
    VTX(68, 40, 539, 3505, 375, 221, 221, 221, 255),
}; 

static Vtx fstdan_room_06Vtx_0061E0[10] = {
    VTX(80, 114, 486, 986, 1024, 255, 255, 255, 255),
    VTX(80, 79, 486, 986, 715, 255, 255, 255, 255),
    VTX(46, 83, 510, 177, 715, 255, 255, 255, 255),
    VTX(46, 114, 510, 177, 1024, 255, 255, 255, 255),
    VTX(46, 114, 510, 4273, 1024, 255, 255, 255, 255),
    VTX(46, 114, 530, 3919, 1024, 255, 255, 255, 255),
    VTX(80, 114, 554, 3110, 1024, 255, 255, 255, 255),
    VTX(80, 114, 486, 5082, 1024, 255, 255, 255, 255),
    VTX(46, 83, 530, 3919, 715, 255, 255, 255, 255),
    VTX(80, 79, 554, 3110, 715, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_06Vtx_006280[4] = {
    VTX(64, 32, 506, 4538, 300, 67, 0, 0, 255),
    VTX(64, 32, 534, 3654, 300, 67, 0, 0, 255),
    VTX(75, 26, 534, 3370, 247, 67, 0, 0, 255),
    VTX(75, 26, 506, 4822, 247, 67, 0, 0, 255),
}; 

static Vtx fstdan_room_06Vtx_0062C0[4] = {
    VTX(58, 26, 506, 4449, 247, 107, 0, 0, 255),
    VTX(58, 26, 534, 3743, 247, 107, 0, 0, 255),
    VTX(64, 32, 534, 3654, 300, 107, 0, 0, 255),
    VTX(64, 32, 506, 4538, 300, 107, 0, 0, 255),
}; 

static Vtx fstdan_room_06Vtx_006300[4] = {
    VTX(62, 6, 506, 4504, 71, 134, 0, 0, 255),
    VTX(62, 6, 534, 3688, 71, 134, 0, 0, 255),
    VTX(58, 26, 534, 3743, 247, 134, 0, 0, 255),
    VTX(58, 26, 506, 4449, 247, 134, 0, 0, 255),
}; 

static Vtx fstdan_room_06Vtx_006340[4] = {
    VTX(42, 0, 526, 3996, 18, 147, 0, 0, 255),
    VTX(42, 4, 526, 3996, 53, 147, 0, 0, 255),
    VTX(42, 4, 514, 4196, 53, 147, 0, 0, 255),
    VTX(42, 0, 514, 4196, 18, 147, 0, 0, 255),
}; 

static Vtx fstdan_room_06Vtx_006380[12] = {
    VTX(50, 0, 534, 3821, 18, 174, 0, 0, 255),
    VTX(50, 4, 534, 3821, 53, 174, 0, 0, 255),
    VTX(42, 4, 526, 3996, 53, 174, 0, 0, 255),
    VTX(42, 0, 526, 3996, 18, 174, 0, 0, 255),
    VTX(60, 4, 506, 4475, 53, 174, 0, 0, 255),
    VTX(60, 4, 534, 3717, 53, 174, 0, 0, 255),
    VTX(62, 6, 534, 3688, 71, 174, 0, 0, 255),
    VTX(62, 6, 506, 4504, 71, 174, 0, 0, 255),
    VTX(42, 0, 514, 100, 18, 174, 0, 0, 255),
    VTX(42, 4, 514, 100, 53, 174, 0, 0, 255),
    VTX(50, 4, 506, 275, 53, 174, 0, 0, 255),
    VTX(50, 0, 506, 275, 18, 174, 0, 0, 255),
}; 

static Vtx fstdan_room_06Vtx_006440[16] = {
    VTX(50, 4, 534, 3821, 53, 201, 0, 0, 255),
    VTX(50, 0, 534, 3821, 18, 201, 0, 0, 255),
    VTX(66, 0, 534, 3615, 18, 201, 0, 0, 255),
    VTX(62, 6, 534, 3688, 71, 201, 0, 0, 255),
    VTX(60, 4, 534, 3717, 53, 201, 0, 0, 255),
    VTX(58, 26, 534, 3743, 247, 201, 0, 0, 255),
    VTX(64, 32, 534, 3654, 300, 201, 0, 0, 255),
    VTX(78, 24, 534, 3232, 230, 201, 0, 0, 255),
    VTX(66, 0, 506, 481, 18, 201, 0, 0, 255),
    VTX(64, 32, 506, 442, 300, 201, 0, 0, 255),
    VTX(78, 24, 506, 864, 230, 201, 0, 0, 255),
    VTX(60, 4, 506, 379, 53, 201, 0, 0, 255),
    VTX(62, 6, 506, 408, 71, 201, 0, 0, 255),
    VTX(50, 0, 506, 275, 18, 201, 0, 0, 255),
    VTX(50, 4, 506, 275, 53, 201, 0, 0, 255),
    VTX(58, 26, 506, 353, 247, 201, 0, 0, 255),
}; 

static Vtx fstdan_room_06Vtx_006540[8] = {
    VTX(50, 4, 506, 4371, 53, 214, 0, 0, 255),
    VTX(42, 4, 514, 4196, 53, 214, 0, 0, 255),
    VTX(42, 4, 526, 3996, 53, 214, 0, 0, 255),
    VTX(50, 4, 534, 3821, 53, 214, 0, 0, 255),
    VTX(50, 4, 506, 4371, 53, 214, 0, 0, 255),
    VTX(50, 4, 534, 3821, 53, 214, 0, 0, 255),
    VTX(60, 4, 534, 3717, 53, 214, 0, 0, 255),
    VTX(60, 4, 506, 4475, 53, 214, 0, 0, 255),
}; 

Gfx fstdan_room_06Dlist0x0065C0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 68, 68, 68, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | GBL_c2(0, 0, 1, 0)),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_sceneTex_00D400, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_06Vtx_005A40[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 85, 85, 85, 255),
    gsSPVertex(&fstdan_room_06Vtx_005A80[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(8, 12, 13, 0),
    gsSP1Triangle(8, 13, 9, 0),
    gsSPVertex(&fstdan_room_06Vtx_005B60[0], 6, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 102, 102, 102, 255),
    gsSPVertex(&fstdan_room_06Vtx_005BC0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&fstdan_room_06Vtx_005CA0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 119, 119, 119, 255),
    gsSPVertex(&fstdan_room_06Vtx_005CE0[0], 10, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(3, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 136, 136, 136, 255),
    gsSPVertex(&fstdan_room_06Vtx_005D80[0], 10, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 153, 153, 153, 255),
    gsSPVertex(&fstdan_room_06Vtx_005E20[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsSP1Triangle(13, 14, 15, 0),
    gsSPVertex(&fstdan_room_06Vtx_005E20[15], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 170, 170, 170, 255),
    gsSPVertex(&fstdan_room_06Vtx_005F40[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 187, 187, 187, 255),
    gsSPVertex(&fstdan_room_06Vtx_005FA0[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 204, 204, 204, 255),
    gsSPVertex(&fstdan_room_06Vtx_006000[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 221, 221, 221, 255),
    gsSPVertex(&fstdan_room_06Vtx_006060[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(4, 8, 9, 0),
    gsSP1Triangle(4, 9, 7, 0),
    gsSP1Triangle(8, 10, 9, 0),
    gsSP1Triangle(5, 11, 6, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(11, 13, 6, 0),
    gsSPVertex(&fstdan_room_06Vtx_006140[0], 10, 0),
    gsSP1Triangle(0, 5, 1, 0),
    gsSP1Triangle(0, 1, 6, 0),
    gsSP1Triangle(1, 2, 6, 0),
    gsSP1Triangle(2, 3, 6, 0),
    gsSP1Triangle(3, 7, 6, 0),
    gsSP1Triangle(3, 8, 7, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(4, 9, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPVertex(&fstdan_room_06Vtx_0061E0[0], 10, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(5, 9, 6, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 67, 0, 0, 255),
    gsSPVertex(&fstdan_room_06Vtx_006280[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 107, 0, 0, 255),
    gsSPVertex(&fstdan_room_06Vtx_0062C0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 134, 0, 0, 255),
    gsSPVertex(&fstdan_room_06Vtx_006300[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 147, 0, 0, 255),
    gsSPVertex(&fstdan_room_06Vtx_006340[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 174, 0, 0, 255),
    gsSPVertex(&fstdan_room_06Vtx_006380[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 201, 0, 0, 255),
    gsSPVertex(&fstdan_room_06Vtx_006440[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(2, 3, 4, 0),
    gsSP1Triangle(2, 5, 3, 0),
    gsSP1Triangle(2, 6, 5, 0),
    gsSP1Triangle(2, 7, 6, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 11, 12, 0),
    gsSP1Triangle(8, 13, 14, 0),
    gsSP1Triangle(8, 12, 15, 0),
    gsSP1Triangle(8, 15, 9, 0),
    gsSP1Triangle(8, 14, 11, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 214, 0, 0, 255),
    gsSPVertex(&fstdan_room_06Vtx_006540[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx fstdan_room_06Dlist0x006B20[] = {
    gsSPDisplayList(fstdan_room_06Dlist0x000A50),
    gsSPDisplayList(fstdan_room_06Dlist0x0065C0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_006B38[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx fstdan_room_06Vtx_006B40[4] = {
    VTX(76, 20, 600, 0, 0, 255, 228, 114, 255),
    VTX(76, 220, 600, 0, 1024, 255, 228, 114, 255),
    VTX(76, 220, 440, 1024, 1024, 255, 228, 114, 255),
    VTX(76, 20, 440, 1024, 0, 255, 228, 114, 255),
}; 

Gfx fstdan_room_06Dlist0x006B80[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 228, 114, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_06Tex_006C28, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_06Vtx_006B40[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_06Tex_006C28[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_06Tex_006C28.ia16.inc.c"
};

Gfx fstdan_room_06Dlist0x007428[] = {
    gsSPDisplayList(fstdan_room_06Dlist0x006B80),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_007438[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


