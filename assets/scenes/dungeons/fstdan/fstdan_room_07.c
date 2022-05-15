#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "fstdan_room_07.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "fstdan_scene.h"


static SCmdEchoSettings fstdan_room_07Set0000Cmd00;
static SCmdRoomBehavior fstdan_room_07Set0000Cmd01;
static SCmdSkyboxDisables fstdan_room_07Set0000Cmd02;
static SCmdMesh fstdan_room_07Set0000Cmd03;
static SCmdObjectList fstdan_room_07Set0000Cmd04;
static SCmdEndMarker fstdan_room_07Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx fstdan_room_07Vtx_000060[2];
static Vtx fstdan_room_07Vtx_000080[2];
static Vtx fstdan_room_07Vtx_0000A0[8];
static Vtx fstdan_room_07Vtx_000120[12];
static Vtx fstdan_room_07Vtx_0001E0[16];
static Vtx fstdan_room_07Vtx_0002E0[16];
static Vtx fstdan_room_07Vtx_0003E0[16];
static Vtx fstdan_room_07Vtx_0004E0[4];
static Vtx fstdan_room_07Vtx_000520[8];
static Vtx fstdan_room_07Vtx_0005A0[4];
static Vtx fstdan_room_07Vtx_0005E0[4];
static Vtx fstdan_room_07Vtx_000620[4];
static Vtx fstdan_room_07Vtx_000660[4];
static Vtx fstdan_room_07Vtx_0006A0[14];
static Vtx fstdan_room_07Vtx_000780[14];
static Vtx fstdan_room_07Vtx_000860[5];
static Vtx fstdan_room_07Vtx_0008B0[5];
static Vtx fstdan_room_07Vtx_000900[3];
static Vtx fstdan_room_07Vtx_000930[9];
static Vtx fstdan_room_07Vtx_0009C0[8];
static Vtx fstdan_room_07Vtx_005A48[4];
static Vtx fstdan_room_07Vtx_005A88[14];
static Vtx fstdan_room_07Vtx_005B68[6];
static Vtx fstdan_room_07Vtx_005BC8[15];
static Vtx fstdan_room_07Vtx_005CB8[3];
static Vtx fstdan_room_07Vtx_005CE8[10];
static Vtx fstdan_room_07Vtx_005D88[10];
static Vtx fstdan_room_07Vtx_005E28[14];
static Vtx fstdan_room_07Vtx_005F08[4];
static Vtx fstdan_room_07Vtx_005F48[6];
static Vtx fstdan_room_07Vtx_005FA8[6];
static Vtx fstdan_room_07Vtx_006008[6];
static Vtx fstdan_room_07Vtx_006068[15];
static Vtx fstdan_room_07Vtx_006158[9];
static Vtx fstdan_room_07Vtx_0061E8[10];
static Vtx fstdan_room_07Vtx_006288[4];
static Vtx fstdan_room_07Vtx_0062C8[4];
static Vtx fstdan_room_07Vtx_006308[4];
static Vtx fstdan_room_07Vtx_006348[4];
static Vtx fstdan_room_07Vtx_006388[12];
static Vtx fstdan_room_07Vtx_006448[16];
static Vtx fstdan_room_07Vtx_006548[8];
static Vtx fstdan_room_07Vtx_006B50[4];

static SCmdEchoSettings fstdan_room_07Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior fstdan_room_07Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables fstdan_room_07Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x00 }; // 0x0010

static SCmdMesh fstdan_room_07Set0000Cmd03 = {  0x0A, 0, (u32)&fstdan_room_07MeshHeader0x000040 }; // 0x0018

static SCmdObjectList fstdan_room_07Set0000Cmd04 = {  0x0B, 0x03, (u32)fstdan_room_07ObjectList0x000030 }; // 0x0020

static SCmdEndMarker fstdan_room_07Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 fstdan_room_07ObjectList0x000030[3] = {
	OBJECT_IK, // manual edit, was originally beta OBJECT_IRONKNACK
	OBJECT_SKELETON,
	OBJECT_WALLMASTER,
}; 

static u8 unaccounted_000038[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 fstdan_room_07MeshHeader0x000040 = { { 0 }, 0x01, (u32)&fstdan_room_07MeshDListEntry0x00004C, (u32)&(fstdan_room_07MeshDListEntry0x00004C) + sizeof(fstdan_room_07MeshDListEntry0x00004C) }; 

MeshEntry0 fstdan_room_07MeshDListEntry0x00004C[1] = {
	{ (u32)fstdan_room_07Dlist0x006B30, (u32)fstdan_room_07Dlist0x007438 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx fstdan_room_07Vtx_000060[2] = {
    VTX(30, 100, -399, 512, 2048, 34, 34, 34, 255),
    VTX(30, 0, -399, 512, 341, 34, 34, 34, 255),
}; 

static Vtx fstdan_room_07Vtx_000080[2] = {
    VTX(-29, 0, -399, 512, 341, 34, 34, 34, 255),
    VTX(-29, 100, -399, 512, 2048, 34, 34, 34, 255),
}; 

static Vtx fstdan_room_07Vtx_0000A0[8] = {
    VTX(-434, 100, -284, 0, -1023, 17, 17, 17, 255),
    VTX(-444, 100, -267, 512, -1023, 17, 17, 17, 255),
    VTX(-496, 100, -297, 512, 1024, 17, 17, 17, 255),
    VTX(-486, 100, -314, 0, 1024, 17, 17, 17, 255),
    VTX(-29, 100, -399, 512, -1023, 17, 17, 17, 255),
    VTX(-29, 100, -419, 0, -1023, 17, 17, 17, 255),
    VTX(30, 100, -419, 0, 1024, 17, 17, 17, 255),
    VTX(30, 100, -399, 512, 1024, 17, 17, 17, 255),
}; 

static Vtx fstdan_room_07Vtx_000120[12] = {
    VTX(30, 100, -419, 0, 2048, 34, 34, 34, 255),
    VTX(30, 0, -419, 0, 341, 34, 34, 34, 255),
    VTX(-29, 0, -419, 0, 341, 34, 34, 34, 255),
    VTX(-29, 100, -419, 0, 2048, 34, 34, 34, 255),
    VTX(-486, 100, -314, 1024, 2560, 34, 34, 34, 255),
    VTX(-496, 100, -297, 512, 2560, 34, 34, 34, 255),
    VTX(-496, 0, -297, 512, 0, 34, 34, 34, 255),
    VTX(-486, 0, -314, 1024, 0, 34, 34, 34, 255),
    VTX(-434, 0, -284, 1024, 0, 34, 34, 34, 255),
    VTX(-444, 0, -267, 512, 0, 34, 34, 34, 255),
    VTX(-444, 100, -267, 512, 2560, 34, 34, 34, 255),
    VTX(-434, 100, -284, 1024, 2560, 34, 34, 34, 255),
}; 

static Vtx fstdan_room_07Vtx_0001E0[16] = {
    VTX(-486, 0, -314, 0, -1023, 51, 51, 51, 255),
    VTX(-496, 0, -297, 512, -1023, 51, 51, 51, 255),
    VTX(-444, 0, -267, 512, 1024, 51, 51, 51, 255),
    VTX(-434, 0, -284, 0, 1024, 51, 51, 51, 255),
    VTX(-29, 100, -419, 1024, 0, 51, 51, 51, 255),
    VTX(-49, 150, -419, 1365, 853, 51, 51, 51, 255),
    VTX(50, 150, -419, -340, 853, 51, 51, 51, 255),
    VTX(30, 100, -419, 0, 0, 51, 51, 51, 255),
    VTX(-29, 0, -419, 1024, -1706, 51, 51, 51, 255),
    VTX(-49, 0, -419, 1365, -1706, 51, 51, 51, 255),
    VTX(50, 0, -419, -340, -1706, 51, 51, 51, 255),
    VTX(30, 0, -419, 0, -1706, 51, 51, 51, 255),
    VTX(30, 0, -399, 512, -1023, 51, 51, 51, 255),
    VTX(30, 0, -419, 0, -1023, 51, 51, 51, 255),
    VTX(-29, 0, -419, 0, 1024, 51, 51, 51, 255),
    VTX(-29, 0, -399, 512, 1024, 51, 51, 51, 255),
}; 

static Vtx fstdan_room_07Vtx_0002E0[16] = {
    VTX(-138, 220, -414, 3501, 1690, 102, 102, 102, 255),
    VTX(-195, 220, -398, 3763, 2667, 102, 102, 102, 255),
    VTX(-264, 220, -586, 556, 3835, 102, 102, 102, 255),
    VTX(-173, 220, -611, 140, 2283, 102, 102, 102, 255),
    VTX(-79, 220, -619, 0, 683, 102, 102, 102, 255),
    VTX(-79, 220, -419, 3413, 683, 102, 102, 102, 255),
    VTX(-39, 220, -619, 0, 0, 102, 102, 102, 255),
    VTX(-39, 220, -419, 3413, 0, 102, 102, 102, 255),
    VTX(-249, 220, -373, 4191, 3584, 102, 102, 102, 255),
    VTX(-349, 220, -547, 1235, 5291, 102, 102, 102, 255),
    VTX(-298, 220, -339, 4771, 4413, 102, 102, 102, 255),
    VTX(-426, 220, -493, 2156, 6607, 102, 102, 102, 255),
    VTX(-339, 220, -298, 5486, 5128, 102, 102, 102, 255),
    VTX(-493, 220, -426, 3292, 7743, 102, 102, 102, 255),
    VTX(-373, 220, -249, 6315, 5708, 102, 102, 102, 255),
    VTX(-547, 220, -349, 4608, 8664, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_07Vtx_0003E0[16] = {
    VTX(-79, 0, -419, -682, 683, 170, 170, 170, 255),
    VTX(-79, 0, -619, 2731, 683, 170, 170, 170, 255),
    VTX(-173, 0, -611, 2591, 2283, 170, 170, 170, 255),
    VTX(-138, 0, -414, -770, 1690, 170, 170, 170, 255),
    VTX(-39, 0, -419, -682, 0, 170, 170, 170, 255),
    VTX(-39, 0, -619, 2731, 0, 170, 170, 170, 255),
    VTX(-264, 0, -586, 2175, 3835, 170, 170, 170, 255),
    VTX(-195, 0, -398, -1032, 2667, 170, 170, 170, 255),
    VTX(-349, 0, -547, 1496, 5291, 170, 170, 170, 255),
    VTX(-249, 0, -373, -1459, 3584, 170, 170, 170, 255),
    VTX(-426, 0, -493, 575, 6607, 170, 170, 170, 255),
    VTX(-298, 0, -339, -2039, 4413, 170, 170, 170, 255),
    VTX(-493, 0, -426, -560, 7743, 170, 170, 170, 255),
    VTX(-339, 0, -298, -2754, 5128, 170, 170, 170, 255),
    VTX(-547, 0, -349, -1876, 8664, 170, 170, 170, 255),
    VTX(-373, 0, -249, -3583, 5708, 170, 170, 170, 255),
}; 

static Vtx fstdan_room_07Vtx_0004E0[4] = {
    VTX(50, 150, -419, 307, 1396, 187, 187, 187, 255),
    VTX(-19, 150, -419, 1024, 1396, 187, 187, 187, 255),
    VTX(-19, 160, -429, 1024, 1489, 187, 187, 187, 255),
    VTX(60, 160, -429, 205, 1489, 187, 187, 187, 255),
}; 

static Vtx fstdan_room_07Vtx_000520[8] = {
    VTX(-79, 0, -419, 594, 0, 187, 187, 187, 255),
    VTX(-79, 220, -419, 594, 2048, 187, 187, 187, 255),
    VTX(-69, 220, -429, 457, 2048, 187, 187, 187, 255),
    VTX(-69, 0, -429, 457, 0, 187, 187, 187, 255),
    VTX(-19, 150, -419, 46, 1396, 187, 187, 187, 255),
    VTX(-49, 150, -419, 320, 1396, 187, 187, 187, 255),
    VTX(-59, 160, -429, 365, 1489, 187, 187, 187, 255),
    VTX(-19, 160, -429, 0, 1489, 187, 187, 187, 255),
}; 

static Vtx fstdan_room_07Vtx_0005A0[4] = {
    VTX(50, 0, -419, 307, 0, 204, 204, 204, 255),
    VTX(50, 150, -419, 307, 1396, 204, 204, 204, 255),
    VTX(60, 160, -429, 205, 1489, 204, 204, 204, 255),
    VTX(60, 0, -429, 205, 0, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_07Vtx_0005E0[4] = {
    VTX(-39, 220, -619, 293, 1024, 255, 255, 255, 255),
    VTX(80, 220, -619, 293, 0, 255, 255, 255, 255),
    VTX(80, 220, -419, 1755, 0, 255, 255, 255, 255),
    VTX(-39, 220, -419, 1755, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_000620[4] = {
    VTX(-39, 0, -419, 171, 1024, 255, 255, 255, 255),
    VTX(80, 0, -419, 171, 0, 255, 255, 255, 255),
    VTX(80, 0, -619, 1877, 0, 255, 255, 255, 255),
    VTX(-39, 0, -619, 1877, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_000660[4] = {
    VTX(80, 220, -619, 0, 2048, 255, 255, 255, 255),
    VTX(80, 0, -619, 0, 0, 255, 255, 255, 255),
    VTX(80, 0, -419, 2048, 0, 255, 255, 255, 255),
    VTX(80, 220, -419, 2048, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_0006A0[14] = {
    VTX(-19, 220, -429, 1024, 2048, 255, 255, 255, 255),
    VTX(80, 220, -429, 0, 2048, 255, 255, 255, 255),
    VTX(60, 160, -429, 205, 1489, 255, 255, 255, 255),
    VTX(-19, 160, -429, 1024, 1489, 255, 255, 255, 255),
    VTX(80, 0, -429, 0, 0, 255, 255, 255, 255),
    VTX(60, 0, -429, 205, 0, 255, 255, 255, 255),
    VTX(-19, 0, -619, 1024, 0, 255, 255, 255, 255),
    VTX(80, 0, -619, 0, 0, 255, 255, 255, 255),
    VTX(80, 220, -619, 0, 2048, 255, 255, 255, 255),
    VTX(-19, 220, -619, 1024, 2048, 255, 255, 255, 255),
    VTX(-59, 0, -429, 554, 0, 255, 255, 255, 255),
    VTX(-59, 160, -429, 554, 1489, 255, 255, 255, 255),
    VTX(-49, 150, -419, 410, 1396, 255, 255, 255, 255),
    VTX(-49, 0, -419, 410, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_000780[14] = {
    VTX(-547, 0, -349, 2048, 0, 255, 255, 255, 255),
    VTX(-486, 100, -314, 1331, 931, 255, 255, 255, 255),
    VTX(-486, 0, -314, 1331, 0, 255, 255, 255, 255),
    VTX(-547, 220, -349, 2048, 2048, 255, 255, 255, 255),
    VTX(-373, 220, -249, 0, 2048, 255, 255, 255, 255),
    VTX(-434, 100, -284, 717, 931, 255, 255, 255, 255),
    VTX(-373, 0, -249, 0, 0, 255, 255, 255, 255),
    VTX(-434, 0, -284, 717, 0, 255, 255, 255, 255),
    VTX(-173, 220, -611, 1440, 2048, 255, 255, 255, 255),
    VTX(-173, 0, -611, 1440, 0, 255, 255, 255, 255),
    VTX(-79, 0, -619, 547, 0, 255, 255, 255, 255),
    VTX(-79, 220, -619, 547, 2048, 255, 255, 255, 255),
    VTX(-19, 0, -619, 0, 0, 255, 255, 255, 255),
    VTX(-19, 220, -619, 0, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_000860[5] = {
    VTX(-59, 0, -429, 365, 0, 255, 255, 255, 255),
    VTX(-69, 220, -429, 457, 2048, 255, 255, 255, 255),
    VTX(-298, 220, -339, 2958, 2048, 255, 255, 255, 255),
    VTX(-249, 220, -373, 2358, 2048, 255, 255, 255, 255),
    VTX(-339, 220, -298, 3535, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_0008B0[5] = {
    VTX(-195, 220, -398, 1751, 2048, 255, 255, 255, 255),
    VTX(-138, 220, -414, 1157, 2048, 255, 255, 255, 255),
    VTX(-79, 220, -419, 594, 2048, 255, 255, 255, 255),
    VTX(-547, 220, -349, 6069, 2048, 255, 255, 255, 255),
    VTX(-493, 220, -426, 5218, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_000900[3] = {
    VTX(-264, 220, -586, 2382, 2048, 255, 255, 255, 255),
    VTX(-349, 220, -547, 3346, 2048, 255, 255, 255, 255),
    VTX(-426, 220, -493, 4300, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_000930[9] = {
    VTX(-69, 0, -429, 457, 0, 255, 255, 255, 255),
    VTX(-59, 160, -429, 365, 1489, 255, 255, 255, 255),
    VTX(-19, 220, -429, 0, 2048, 255, 255, 255, 255),
    VTX(-19, 160, -429, 0, 1489, 255, 255, 255, 255),
    VTX(-298, 0, -339, 2958, 0, 255, 255, 255, 255),
    VTX(-339, 0, -298, 3535, 0, 255, 255, 255, 255),
    VTX(-249, 0, -373, 2358, 0, 255, 255, 255, 255),
    VTX(-373, 0, -249, 4071, 0, 255, 255, 255, 255),
    VTX(-373, 220, -249, 4071, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_0009C0[8] = {
    VTX(-195, 0, -398, 1751, 0, 255, 255, 255, 255),
    VTX(-138, 0, -414, 1157, 0, 255, 255, 255, 255),
    VTX(-79, 0, -419, 594, 0, 255, 255, 255, 255),
    VTX(-547, 0, -349, 6069, 0, 255, 255, 255, 255),
    VTX(-493, 0, -426, 5218, 0, 255, 255, 255, 255),
    VTX(-426, 0, -493, 4300, 0, 255, 255, 255, 255),
    VTX(-349, 0, -547, 3346, 0, 255, 255, 255, 255),
    VTX(-264, 0, -586, 2382, 0, 255, 255, 255, 255),
}; 

Gfx fstdan_room_07Dlist0x000A40[] = {
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
    gsSPVertex(&fstdan_room_07Vtx_0000A0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 34, 34, 34, 255),
    gsSPVertex(&fstdan_room_07Vtx_000060[0], 2, 0),
    gsSPVertex(&fstdan_room_07Vtx_000080[0], 2, 2),
    gsSPVertex(&fstdan_room_07Vtx_000120[0], 12, 4),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 1, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 3, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 51, 51, 51, 255),
    gsSPVertex(&fstdan_room_07Vtx_0001E0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(5, 4, 8, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(6, 11, 7, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 102, 102, 102, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_001248, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_0002E0[0], 14, 0),
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
    gsSPVertex(&fstdan_room_07Vtx_0002E0[12], 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 170, 170, 170, 255),
    gsSPVertex(&fstdan_room_07Vtx_0003E0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 1, 0),
    gsSP1Triangle(2, 6, 7, 0),
    gsSP1Triangle(2, 7, 3, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(6, 9, 7, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(8, 11, 9, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSP1Triangle(10, 13, 11, 0),
    gsSPVertex(&fstdan_room_07Vtx_0003E0[12], 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 187, 187, 187, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_003A48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_0004E0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_004A48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_000520[0], 8, 0),
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
    gsDPLoadTextureBlock(fstdan_room_07Tex_003A48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_0005A0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_001A48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_0005E0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_002248, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_000620[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_002A48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_000660[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_003A48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 1, 1, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_0006A0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 2, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(10, 12, 13, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_004A48, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_07Vtx_000780[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 3, 1, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(3, 5, 1, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSP1Triangle(6, 7, 5, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&fstdan_room_07Vtx_000860[0], 5, 0),
    gsSPVertex(&fstdan_room_07Vtx_000930[0], 9, 5),
    gsSP1Triangle(0, 5, 1, 0),
    gsSP1Triangle(0, 1, 6, 0),
    gsSP1Triangle(1, 7, 8, 0),
    gsSP1Triangle(1, 8, 6, 0),
    gsSP1Triangle(2, 9, 10, 0),
    gsSP1Triangle(2, 10, 4, 0),
    gsSP1Triangle(3, 11, 9, 0),
    gsSP1Triangle(3, 9, 2, 0),
    gsSP1Triangle(4, 10, 12, 0),
    gsSP1Triangle(4, 12, 13, 0),
    gsSPVertex(&fstdan_room_07Vtx_000860[3], 1, 0),
    gsSPVertex(&fstdan_room_07Vtx_0008B0[0], 5, 1),
    gsSPVertex(&fstdan_room_07Vtx_000900[2], 1, 6),
    gsSPVertex(&fstdan_room_07Vtx_000930[6], 1, 7),
    gsSPVertex(&fstdan_room_07Vtx_0009C0[0], 6, 8),
    gsSP1Triangle(1, 8, 7, 0),
    gsSP1Triangle(1, 7, 0, 0),
    gsSP1Triangle(2, 9, 8, 0),
    gsSP1Triangle(2, 8, 1, 0),
    gsSP1Triangle(3, 10, 9, 0),
    gsSP1Triangle(3, 9, 2, 0),
    gsSP1Triangle(4, 11, 12, 0),
    gsSP1Triangle(4, 12, 5, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 6, 0),
    gsSPVertex(&fstdan_room_07Vtx_000780[8], 2, 0),
    gsSPVertex(&fstdan_room_07Vtx_000900[0], 3, 2),
    gsSPVertex(&fstdan_room_07Vtx_0009C0[5], 3, 5),
    gsSP1Triangle(2, 7, 1, 0),
    gsSP1Triangle(2, 1, 0, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsSP1Triangle(3, 7, 2, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_07Tex_001248[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_07Tex_001248.rgb5a1.inc.c"
};

u64 fstdan_room_07Tex_001A48[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_07Tex_001A48.rgb5a1.inc.c"
};

u64 fstdan_room_07Tex_002248[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_07Tex_002248.rgb5a1.inc.c"
};

u64 fstdan_room_07Tex_002A48[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_07Tex_002A48.rgb5a1.inc.c"
};

u64 fstdan_room_07Tex_003A48[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_07Tex_003A48.rgb5a1.inc.c"
};

u64 fstdan_room_07Tex_004A48[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_07Tex_004A48.rgb5a1.inc.c"
};

static Vtx fstdan_room_07Vtx_005A48[4] = {
    VTX(46, 83, -529, 3919, 715, 68, 68, 68, 255),
    VTX(55, 71, -522, 4024, 649, 68, 68, 68, 255),
    VTX(55, 71, -516, 4168, 649, 68, 68, 68, 255),
    VTX(46, 83, -509, 4273, 715, 68, 68, 68, 255),
}; 

static Vtx fstdan_room_07Vtx_005A88[14] = {
    VTX(73, 21, -544, 3310, 199, 85, 85, 85, 255),
    VTX(68, 20, -538, 3505, 199, 85, 85, 85, 255),
    VTX(66, 20, -533, 3615, 199, 85, 85, 85, 255),
    VTX(66, 20, -505, 4577, 199, 85, 85, 85, 255),
    VTX(68, 20, -500, 4687, 199, 85, 85, 85, 255),
    VTX(73, 21, -494, 4882, 199, 85, 85, 85, 255),
    VTX(73, 41, -494, 4882, 375, 85, 85, 85, 255),
    VTX(68, 40, -500, 4687, 375, 85, 85, 85, 255),
    VTX(66, 40, -505, 4577, 375, 85, 85, 85, 255),
    VTX(66, 40, -533, 3615, 375, 85, 85, 85, 255),
    VTX(68, 40, -538, 3505, 375, 85, 85, 85, 255),
    VTX(73, 41, -544, 3310, 375, 85, 85, 85, 255),
    VTX(46, 38, -516, 4150, 358, 85, 85, 85, 255),
    VTX(46, 38, -522, 4042, 358, 85, 85, 85, 255),
}; 

static Vtx fstdan_room_07Vtx_005B68[6] = {
    VTX(66, 71, -524, 3899, 649, 85, 85, 85, 255),
    VTX(46, 83, -509, 177, 715, 85, 85, 85, 255),
    VTX(55, 71, -522, 4024, 649, 85, 85, 85, 255),
    VTX(46, 83, -529, 3919, 715, 85, 85, 85, 255),
    VTX(55, 71, -516, 72, 649, 85, 85, 85, 255),
    VTX(66, 71, -514, 197, 649, 85, 85, 85, 255),
}; 

static Vtx fstdan_room_07Vtx_005BC8[15] = {
    VTX(75, 37, -491, 4961, 340, 102, 102, 102, 255),
    VTX(73, 41, -494, 4882, 375, 102, 102, 102, 255),
    VTX(73, 41, -544, 3310, 375, 102, 102, 102, 255),
    VTX(75, 37, -547, 3231, 340, 102, 102, 102, 255),
    VTX(46, 38, -516, 4150, 358, 102, 102, 102, 255),
    VTX(44, 48, -516, 4147, 446, 102, 102, 102, 255),
    VTX(44, 48, -522, 4045, 446, 102, 102, 102, 255),
    VTX(46, 38, -522, 4042, 358, 102, 102, 102, 255),
    VTX(80, 79, -553, 3110, 715, 102, 102, 102, 255),
    VTX(66, 71, -524, 3899, 649, 102, 102, 102, 255),
    VTX(46, 83, -529, 3919, 715, 102, 102, 102, 255),
    VTX(75, 25, -491, 4961, 234, 102, 102, 102, 255),
    VTX(75, 25, -547, 3231, 234, 102, 102, 102, 255),
    VTX(73, 21, -544, 3310, 199, 102, 102, 102, 255),
    VTX(73, 21, -494, 4882, 199, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_07Vtx_005CB8[3] = {
    VTX(46, 83, -509, 177, 715, 102, 102, 102, 255),
    VTX(66, 71, -514, 197, 649, 102, 102, 102, 255),
    VTX(80, 79, -485, 986, 715, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_07Vtx_005CE8[10] = {
    VTX(75, 37, -491, 4961, 340, 119, 119, 119, 255),
    VTX(75, 37, -547, 3231, 340, 119, 119, 119, 255),
    VTX(75, 25, -547, 3231, 234, 119, 119, 119, 255),
    VTX(75, 25, -491, 4961, 234, 119, 119, 119, 255),
    VTX(66, 71, -514, 197, 649, 119, 119, 119, 255),
    VTX(68, 55, -500, 591, 503, 119, 119, 119, 255),
    VTX(80, 79, -485, 986, 715, 119, 119, 119, 255),
    VTX(80, 79, -553, 3110, 715, 119, 119, 119, 255),
    VTX(68, 55, -538, 3505, 503, 119, 119, 119, 255),
    VTX(66, 71, -524, 3899, 649, 119, 119, 119, 255),
}; 

static Vtx fstdan_room_07Vtx_005D88[10] = {
    VTX(55, 71, -522, 4024, 649, 136, 136, 136, 255),
    VTX(44, 48, -522, 4045, 446, 136, 136, 136, 255),
    VTX(44, 48, -516, 4147, 446, 136, 136, 136, 255),
    VTX(55, 71, -516, 4168, 649, 136, 136, 136, 255),
    VTX(66, 40, -505, 481, 375, 136, 136, 136, 255),
    VTX(68, 55, -500, 591, 503, 136, 136, 136, 255),
    VTX(66, 71, -514, 197, 649, 136, 136, 136, 255),
    VTX(66, 71, -524, 3899, 649, 136, 136, 136, 255),
    VTX(68, 55, -538, 3505, 503, 136, 136, 136, 255),
    VTX(66, 40, -533, 3615, 375, 136, 136, 136, 255),
}; 

static Vtx fstdan_room_07Vtx_005E28[14] = {
    VTX(66, 0, -533, 3615, 18, 153, 153, 153, 255),
    VTX(66, 20, -533, 3615, 199, 153, 153, 153, 255),
    VTX(68, 20, -538, 3505, 199, 153, 153, 153, 255),
    VTX(68, 0, -538, 3505, 18, 153, 153, 153, 255),
    VTX(66, 40, -505, 481, 375, 153, 153, 153, 255),
    VTX(66, 71, -514, 197, 649, 153, 153, 153, 255),
    VTX(55, 71, -516, 72, 649, 153, 153, 153, 255),
    VTX(68, 40, -500, 591, 375, 153, 153, 153, 255),
    VTX(68, 55, -500, 591, 503, 153, 153, 153, 255),
    VTX(66, 40, -533, 3615, 375, 153, 153, 153, 255),
    VTX(68, 55, -538, 3505, 503, 153, 153, 153, 255),
    VTX(68, 40, -538, 3505, 375, 153, 153, 153, 255),
    VTX(55, 71, -522, 4024, 649, 153, 153, 153, 255),
    VTX(66, 71, -524, 3899, 649, 153, 153, 153, 255),
}; 

static Vtx fstdan_room_07Vtx_005F08[4] = {
    VTX(66, 20, -505, 481, 199, 153, 153, 153, 255),
    VTX(66, 0, -505, 481, 18, 153, 153, 153, 255),
    VTX(68, 0, -500, 591, 18, 153, 153, 153, 255),
    VTX(68, 20, -500, 591, 199, 153, 153, 153, 255),
}; 

static Vtx fstdan_room_07Vtx_005F48[6] = {
    VTX(44, 48, -522, 4045, 446, 170, 170, 170, 255),
    VTX(66, 40, -533, 3615, 375, 170, 170, 170, 255),
    VTX(46, 38, -522, 4042, 358, 170, 170, 170, 255),
    VTX(44, 48, -516, 51, 446, 170, 170, 170, 255),
    VTX(46, 38, -516, 54, 358, 170, 170, 170, 255),
    VTX(66, 40, -505, 481, 375, 170, 170, 170, 255),
}; 

static Vtx fstdan_room_07Vtx_005FA8[6] = {
    VTX(44, 48, -516, 51, 446, 187, 187, 187, 255),
    VTX(66, 40, -505, 481, 375, 187, 187, 187, 255),
    VTX(55, 71, -516, 72, 649, 187, 187, 187, 255),
    VTX(55, 71, -522, 4024, 649, 187, 187, 187, 255),
    VTX(66, 40, -533, 3615, 375, 187, 187, 187, 255),
    VTX(44, 48, -522, 4045, 446, 187, 187, 187, 255),
}; 

static Vtx fstdan_room_07Vtx_006008[6] = {
    VTX(80, 20, -485, 986, 199, 204, 204, 204, 255),
    VTX(68, 0, -500, 591, 18, 204, 204, 204, 255),
    VTX(80, 0, -490, 979, 18, 204, 204, 204, 255),
    VTX(80, 20, -553, 3110, 199, 204, 204, 204, 255),
    VTX(80, 0, -548, 3117, 18, 204, 204, 204, 255),
    VTX(68, 0, -538, 3505, 18, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_07Vtx_006068[15] = {
    VTX(80, 20, -553, 3110, 199, 221, 221, 221, 255),
    VTX(68, 0, -538, 3505, 18, 221, 221, 221, 255),
    VTX(73, 21, -544, 3310, 199, 221, 221, 221, 255),
    VTX(75, 25, -547, 3231, 234, 221, 221, 221, 255),
    VTX(75, 37, -547, 3231, 340, 221, 221, 221, 255),
    VTX(80, 79, -553, 3110, 715, 221, 221, 221, 255),
    VTX(68, 20, -538, 3505, 199, 221, 221, 221, 255),
    VTX(73, 41, -544, 3310, 375, 221, 221, 221, 255),
    VTX(68, 55, -538, 3505, 503, 221, 221, 221, 255),
    VTX(68, 40, -538, 3505, 375, 221, 221, 221, 255),
    VTX(73, 21, -494, 786, 199, 221, 221, 221, 255),
    VTX(68, 0, -500, 591, 18, 221, 221, 221, 255),
    VTX(80, 20, -485, 986, 199, 221, 221, 221, 255),
    VTX(75, 25, -491, 865, 234, 221, 221, 221, 255),
    VTX(68, 20, -500, 591, 199, 221, 221, 221, 255),
}; 

static Vtx fstdan_room_07Vtx_006158[9] = {
    VTX(80, 79, -485, 986, 715, 221, 221, 221, 255),
    VTX(75, 37, -491, 865, 340, 221, 221, 221, 255),
    VTX(68, 55, -500, 591, 503, 221, 221, 221, 255),
    VTX(46, 83, -509, 4273, 715, 221, 221, 221, 255),
    VTX(73, 41, -494, 786, 375, 221, 221, 221, 255),
    VTX(68, 40, -500, 591, 375, 221, 221, 221, 255),
    VTX(46, 114, -509, 4273, 1024, 221, 221, 221, 255),
    VTX(46, 114, -529, 3919, 1024, 221, 221, 221, 255),
    VTX(46, 83, -529, 3919, 715, 221, 221, 221, 255),
}; 

static Vtx fstdan_room_07Vtx_0061E8[10] = {
    VTX(80, 114, -485, 5082, 1024, 255, 255, 255, 255),
    VTX(80, 114, -553, 3110, 1024, 255, 255, 255, 255),
    VTX(46, 114, -529, 3919, 1024, 255, 255, 255, 255),
    VTX(46, 114, -509, 4273, 1024, 255, 255, 255, 255),
    VTX(80, 79, -553, 3110, 715, 255, 255, 255, 255),
    VTX(46, 83, -529, 3919, 715, 255, 255, 255, 255),
    VTX(46, 114, -509, 177, 1024, 255, 255, 255, 255),
    VTX(46, 83, -509, 177, 715, 255, 255, 255, 255),
    VTX(80, 79, -485, 986, 715, 255, 255, 255, 255),
    VTX(80, 114, -485, 986, 1024, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_07Vtx_006288[4] = {
    VTX(75, 26, -505, 4822, 247, 67, 0, 0, 255),
    VTX(75, 26, -533, 3370, 247, 67, 0, 0, 255),
    VTX(64, 32, -533, 3654, 300, 67, 0, 0, 255),
    VTX(64, 32, -505, 4538, 300, 67, 0, 0, 255),
}; 

static Vtx fstdan_room_07Vtx_0062C8[4] = {
    VTX(64, 32, -505, 4538, 300, 107, 0, 0, 255),
    VTX(64, 32, -533, 3654, 300, 107, 0, 0, 255),
    VTX(58, 26, -533, 3743, 247, 107, 0, 0, 255),
    VTX(58, 26, -505, 4449, 247, 107, 0, 0, 255),
}; 

static Vtx fstdan_room_07Vtx_006308[4] = {
    VTX(58, 26, -505, 4449, 247, 134, 0, 0, 255),
    VTX(58, 26, -533, 3743, 247, 134, 0, 0, 255),
    VTX(62, 6, -533, 3688, 71, 134, 0, 0, 255),
    VTX(62, 6, -505, 4504, 71, 134, 0, 0, 255),
}; 

static Vtx fstdan_room_07Vtx_006348[4] = {
    VTX(42, 0, -513, 4196, 18, 147, 0, 0, 255),
    VTX(42, 4, -513, 4196, 53, 147, 0, 0, 255),
    VTX(42, 4, -525, 3996, 53, 147, 0, 0, 255),
    VTX(42, 0, -525, 3996, 18, 147, 0, 0, 255),
}; 

static Vtx fstdan_room_07Vtx_006388[12] = {
    VTX(50, 0, -505, 275, 18, 174, 0, 0, 255),
    VTX(50, 4, -505, 275, 53, 174, 0, 0, 255),
    VTX(42, 4, -513, 100, 53, 174, 0, 0, 255),
    VTX(42, 0, -513, 100, 18, 174, 0, 0, 255),
    VTX(42, 0, -525, 3996, 18, 174, 0, 0, 255),
    VTX(42, 4, -525, 3996, 53, 174, 0, 0, 255),
    VTX(50, 4, -533, 3821, 53, 174, 0, 0, 255),
    VTX(50, 0, -533, 3821, 18, 174, 0, 0, 255),
    VTX(62, 6, -505, 4504, 71, 174, 0, 0, 255),
    VTX(62, 6, -533, 3688, 71, 174, 0, 0, 255),
    VTX(60, 4, -533, 3717, 53, 174, 0, 0, 255),
    VTX(60, 4, -505, 4475, 53, 174, 0, 0, 255),
}; 

static Vtx fstdan_room_07Vtx_006448[16] = {
    VTX(62, 6, -533, 3688, 71, 201, 0, 0, 255),
    VTX(58, 26, -533, 3743, 247, 201, 0, 0, 255),
    VTX(66, 0, -533, 3615, 18, 201, 0, 0, 255),
    VTX(60, 4, -533, 3717, 53, 201, 0, 0, 255),
    VTX(64, 32, -533, 3654, 300, 201, 0, 0, 255),
    VTX(50, 0, -533, 3821, 18, 201, 0, 0, 255),
    VTX(50, 4, -533, 3821, 53, 201, 0, 0, 255),
    VTX(78, 24, -533, 3232, 230, 201, 0, 0, 255),
    VTX(78, 24, -505, 864, 230, 201, 0, 0, 255),
    VTX(64, 32, -505, 442, 300, 201, 0, 0, 255),
    VTX(66, 0, -505, 481, 18, 201, 0, 0, 255),
    VTX(58, 26, -505, 353, 247, 201, 0, 0, 255),
    VTX(60, 4, -505, 379, 53, 201, 0, 0, 255),
    VTX(50, 4, -505, 275, 53, 201, 0, 0, 255),
    VTX(62, 6, -505, 408, 71, 201, 0, 0, 255),
    VTX(50, 0, -505, 275, 18, 201, 0, 0, 255),
}; 

static Vtx fstdan_room_07Vtx_006548[8] = {
    VTX(50, 4, -533, 3821, 53, 214, 0, 0, 255),
    VTX(42, 4, -525, 3996, 53, 214, 0, 0, 255),
    VTX(42, 4, -513, 4196, 53, 214, 0, 0, 255),
    VTX(50, 4, -505, 4371, 53, 214, 0, 0, 255),
    VTX(60, 4, -505, 4475, 53, 214, 0, 0, 255),
    VTX(60, 4, -533, 3717, 53, 214, 0, 0, 255),
    VTX(50, 4, -533, 3821, 53, 214, 0, 0, 255),
    VTX(50, 4, -505, 4371, 53, 214, 0, 0, 255),
}; 

Gfx fstdan_room_07Dlist0x0065C8[] = {
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
    gsSPVertex(&fstdan_room_07Vtx_005A48[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 85, 85, 85, 255),
    gsSPVertex(&fstdan_room_07Vtx_005A88[0], 14, 0),
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
    gsSPVertex(&fstdan_room_07Vtx_005B68[0], 6, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 102, 102, 102, 255),
    gsSPVertex(&fstdan_room_07Vtx_005BC8[0], 15, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(11, 13, 14, 0),
    gsSPVertex(&fstdan_room_07Vtx_005CB8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 119, 119, 119, 255),
    gsSPVertex(&fstdan_room_07Vtx_005CE8[0], 10, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 136, 136, 136, 255),
    gsSPVertex(&fstdan_room_07Vtx_005D88[0], 10, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 153, 153, 153, 255),
    gsSPVertex(&fstdan_room_07Vtx_005E28[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(7, 8, 4, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(12, 13, 9, 0),
    gsSPVertex(&fstdan_room_07Vtx_005F08[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 170, 170, 170, 255),
    gsSPVertex(&fstdan_room_07Vtx_005F48[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 187, 187, 187, 255),
    gsSPVertex(&fstdan_room_07Vtx_005FA8[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 204, 204, 204, 255),
    gsSPVertex(&fstdan_room_07Vtx_006008[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 221, 221, 221, 255),
    gsSPVertex(&fstdan_room_07Vtx_006068[0], 15, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(1, 6, 2, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(7, 8, 5, 0),
    gsSP1Triangle(7, 9, 8, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsSP1Triangle(13, 10, 12, 0),
    gsSP1Triangle(10, 14, 11, 0),
    gsSPVertex(&fstdan_room_07Vtx_006068[12], 2, 0),
    gsSPVertex(&fstdan_room_07Vtx_006158[0], 9, 2),
    gsSP1Triangle(2, 4, 6, 0),
    gsSP1Triangle(2, 6, 3, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsSP1Triangle(3, 1, 0, 0),
    gsSP1Triangle(4, 7, 6, 0),
    gsSP1Triangle(5, 8, 9, 0),
    gsSP1Triangle(5, 9, 10, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPVertex(&fstdan_room_07Vtx_0061E8[0], 10, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(1, 4, 5, 0),
    gsSP1Triangle(1, 5, 2, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 67, 0, 0, 255),
    gsSPVertex(&fstdan_room_07Vtx_006288[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 107, 0, 0, 255),
    gsSPVertex(&fstdan_room_07Vtx_0062C8[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 134, 0, 0, 255),
    gsSPVertex(&fstdan_room_07Vtx_006308[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 147, 0, 0, 255),
    gsSPVertex(&fstdan_room_07Vtx_006348[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 174, 0, 0, 255),
    gsSPVertex(&fstdan_room_07Vtx_006388[0], 12, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 201, 0, 0, 255),
    gsSPVertex(&fstdan_room_07Vtx_006448[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 0, 2, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(2, 5, 6, 0),
    gsSP1Triangle(4, 7, 2, 0),
    gsSP1Triangle(6, 3, 2, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(9, 11, 10, 0),
    gsSP1Triangle(12, 13, 10, 0),
    gsSP1Triangle(14, 12, 10, 0),
    gsSP1Triangle(11, 14, 10, 0),
    gsSP1Triangle(13, 15, 10, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 214, 0, 0, 255),
    gsSPVertex(&fstdan_room_07Vtx_006548[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx fstdan_room_07Dlist0x006B30[] = {
    gsSPDisplayList(fstdan_room_07Dlist0x000A40),
    gsSPDisplayList(fstdan_room_07Dlist0x0065C8),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_006B48[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx fstdan_room_07Vtx_006B50[4] = {
    VTX(76, 220, -599, 0, 1024, 255, 228, 114, 255),
    VTX(76, 20, -599, 0, 0, 255, 228, 114, 255),
    VTX(76, 20, -439, 1024, 0, 255, 228, 114, 255),
    VTX(76, 220, -439, 1024, 1024, 255, 228, 114, 255),
}; 

Gfx fstdan_room_07Dlist0x006B90[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 228, 114, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_07Tex_006C38, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 2, 2, 5, 5, 0, 0),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_07Vtx_006B50[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_07Tex_006C38[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_07Tex_006C38.ia16.inc.c"
};

Gfx fstdan_room_07Dlist0x007438[] = {
    gsSPDisplayList(fstdan_room_07Dlist0x006B90),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_007448[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


