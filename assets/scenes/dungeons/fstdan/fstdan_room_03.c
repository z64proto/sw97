#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "fstdan_room_03.h"

#include "segment_symbols.h"
#include "command_macros_base.h"
#include "z64cutscene_commands.h"
#include "variables.h"
#include "fstdan_scene.h"


static SCmdEchoSettings fstdan_room_03Set0000Cmd00;
static SCmdRoomBehavior fstdan_room_03Set0000Cmd01;
static SCmdSkyboxDisables fstdan_room_03Set0000Cmd02;
static SCmdMesh fstdan_room_03Set0000Cmd03;
static SCmdObjectList fstdan_room_03Set0000Cmd04;
static SCmdEndMarker fstdan_room_03Set0000Cmd05;
static s32 terminatorMaybe;
static Vtx fstdan_room_03Vtx_000060[4];
static Vtx fstdan_room_03Vtx_0000A0[4];
static Vtx fstdan_room_03Vtx_0000E0[16];
static Vtx fstdan_room_03Vtx_0001E0[8];
static Vtx fstdan_room_03Vtx_000260[6];
static Vtx fstdan_room_03Vtx_0002C0[13];
static Vtx fstdan_room_03Vtx_000390[4];
static Vtx fstdan_room_03Vtx_0003D0[14];
static Vtx fstdan_room_03Vtx_0004B0[12];
static Vtx fstdan_room_03Vtx_000570[14];
static Vtx fstdan_room_03Vtx_000650[2];
static Vtx fstdan_room_03Vtx_000670[16];
static Vtx fstdan_room_03Vtx_000770[14];
static Vtx fstdan_room_03Vtx_000850[5];
static Vtx fstdan_room_03Vtx_0008A0[1];
static Vtx fstdan_room_03Vtx_0008B0[10];
static Vtx fstdan_room_03Vtx_000950[2];
static Vtx fstdan_room_03Vtx_000970[14];
static Vtx fstdan_room_03Vtx_000A50[5];
static Vtx fstdan_room_03Vtx_000AA0[6];
static Vtx fstdan_room_03Vtx_000B00[3];
static Vtx fstdan_room_03Vtx_003A70[24];

static SCmdEchoSettings fstdan_room_03Set0000Cmd00 = {  0x16, 0, { 0 }, 0x00 }; // 0x0000

static SCmdRoomBehavior fstdan_room_03Set0000Cmd01 = {  0x08, 0x00, 0x00000001 }; // 0x0008

static SCmdSkyboxDisables fstdan_room_03Set0000Cmd02 = {  0x12, 0, 0, 0, 0x01, 0x00 }; // 0x0010

static SCmdMesh fstdan_room_03Set0000Cmd03 = {  0x0A, 0, (u32)&fstdan_room_03MeshHeader0x000040 }; // 0x0018

static SCmdObjectList fstdan_room_03Set0000Cmd04 = {  0x0B, 0x03, (u32)fstdan_room_03ObjectList0x000030 }; // 0x0020

static SCmdEndMarker fstdan_room_03Set0000Cmd05 = {  0x14, 0x00, 0x00 }; // 0x0028

s16 fstdan_room_03ObjectList0x000030[3] = {
	OBJECT_IK, // manual edit, was originally beta OBJECT_IRONKNACK
	OBJECT_SKELETON,
	OBJECT_WALLMASTER,
}; 

static u8 unaccounted_000038[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

MeshHeader0 fstdan_room_03MeshHeader0x000040 = { { 0 }, 0x01, (u32)&fstdan_room_03MeshDListEntry0x00004C, (u32)&(fstdan_room_03MeshDListEntry0x00004C) + sizeof(fstdan_room_03MeshDListEntry0x00004C) }; 

MeshEntry0 fstdan_room_03MeshDListEntry0x00004C[1] = {
	{ (u32)fstdan_room_03Dlist0x000B30, (u32)fstdan_room_03Dlist0x003BF0 },

}; 

static s32 terminatorMaybe = {  0x01000000  }; 

static u32 pad58 = 0;
static u32 pad5C = 0;

static Vtx fstdan_room_03Vtx_000060[4] = {
    VTX(26, 820, 400, 3072, 512, 0, 0, 0, 255),
    VTX(26, 820, 380, 3072, 0, 0, 0, 0, 255),
    VTX(146, 820, 380, 0, 0, 0, 0, 0, 255),
    VTX(146, 820, 400, 0, 512, 0, 0, 0, 255),
}; 

static Vtx fstdan_room_03Vtx_0000A0[4] = {
    VTX(-333, 820, -29, 0, 512, 17, 17, 17, 255),
    VTX(-313, 820, -29, 0, 1024, 17, 17, 17, 255),
    VTX(-313, 820, 30, 1024, 1024, 17, 17, 17, 255),
    VTX(-333, 820, 30, 1024, 512, 17, 17, 17, 255),
}; 

static Vtx fstdan_room_03Vtx_0000E0[16] = {
    VTX(-333, 720, -29, 512, -682, 68, 68, 68, 255),
    VTX(-313, 720, -29, 0, -682, 68, 68, 68, 255),
    VTX(-313, 820, -29, 0, 1024, 68, 68, 68, 255),
    VTX(-333, 820, -29, 512, 1024, 68, 68, 68, 255),
    VTX(146, 820, 400, 512, 2560, 68, 68, 68, 255),
    VTX(146, 820, 380, 1024, 2560, 68, 68, 68, 255),
    VTX(146, 720, 380, 1024, 0, 68, 68, 68, 255),
    VTX(146, 720, 400, 512, 0, 68, 68, 68, 255),
    VTX(26, 720, 400, 512, 0, 68, 68, 68, 255),
    VTX(26, 720, 380, 1024, 0, 68, 68, 68, 255),
    VTX(26, 820, 380, 1024, 2560, 68, 68, 68, 255),
    VTX(26, 820, 400, 512, 2560, 68, 68, 68, 255),
    VTX(-333, 820, 30, 512, 1024, 68, 68, 68, 255),
    VTX(-313, 820, 30, 0, 1024, 68, 68, 68, 255),
    VTX(-313, 720, 30, 0, -682, 68, 68, 68, 255),
    VTX(-333, 720, 30, 512, -682, 68, 68, 68, 255),
}; 

static Vtx fstdan_room_03Vtx_0001E0[8] = {
    VTX(146, 720, 400, 0, 512, 85, 85, 85, 255),
    VTX(146, 720, 380, 0, 0, 85, 85, 85, 255),
    VTX(26, 720, 380, 3072, 0, 85, 85, 85, 255),
    VTX(26, 720, 400, 3072, 512, 85, 85, 85, 255),
    VTX(-333, 720, 30, 1024, 512, 85, 85, 85, 255),
    VTX(-313, 720, 30, 1024, 1024, 85, 85, 85, 255),
    VTX(-313, 720, -29, 0, 1024, 85, 85, 85, 255),
    VTX(-333, 720, -29, 0, 512, 85, 85, 85, 255),
}; 

static Vtx fstdan_room_03Vtx_000260[6] = {
    VTX(-171, 920, 80, -1023, 2064, 102, 102, 102, 255),
    VTX(-313, 920, 80, -1023, 455, 102, 102, 102, 255),
    VTX(-193, 920, 0, 0, 1820, 102, 102, 102, 255),
    VTX(-313, 920, -79, 1024, 455, 102, 102, 102, 255),
    VTX(-193, 920, 0, 0, 1820, 102, 102, 102, 255),
    VTX(-171, 920, -79, 1024, 2064, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_03Vtx_0002C0[13] = {
    VTX(86, 940, -279, 2048, -767, 102, 102, 102, 255),
    VTX(226, 940, -241, 3840, -287, 102, 102, 102, 255),
    VTX(226, 940, 242, 3840, 5920, 102, 102, 102, 255),
    VTX(329, 940, -139, 5152, 1024, 102, 102, 102, 255),
    VTX(329, 940, 140, 5152, 4608, 102, 102, 102, 255),
    VTX(366, 940, 0, 5632, 2816, 102, 102, 102, 255),
    VTX(-53, 940, 242, 256, 5920, 102, 102, 102, 255),
    VTX(226, 940, 380, 3840, 7680, 102, 102, 102, 255),
    VTX(-53, 940, 380, 256, 7680, 102, 102, 102, 255),
    VTX(-155, 940, 140, -1055, 4608, 102, 102, 102, 255),
    VTX(-155, 940, -139, -1055, 1024, 102, 102, 102, 255),
    VTX(-53, 940, -241, 256, -287, 102, 102, 102, 255),
    VTX(-193, 940, 0, -1535, 2816, 102, 102, 102, 255),
}; 

static Vtx fstdan_room_03Vtx_000390[4] = {
    VTX(-171, 720, -79, 1536, 3822, 119, 119, 119, 255),
    VTX(-313, 720, -79, 1536, 5632, 119, 119, 119, 255),
    VTX(-313, 720, 80, -511, 5632, 119, 119, 119, 255),
    VTX(-171, 720, 80, -511, 3822, 119, 119, 119, 255),
}; 

static Vtx fstdan_room_03Vtx_0003D0[14] = {
    VTX(-5, 720, -160, 2569, 1700, 136, 136, 136, 255),
    VTX(86, 720, -185, 2888, 512, 136, 136, 136, 255),
    VTX(86, 720, -279, 4096, 512, 136, 136, 136, 255),
    VTX(-53, 720, -241, 3616, 2304, 136, 136, 136, 255),
    VTX(-73, 720, -92, 1700, 2569, 136, 136, 136, 255),
    VTX(-155, 720, -139, 2304, 3616, 136, 136, 136, 255),
    VTX(179, 720, -160, 2569, -675, 136, 136, 136, 255),
    VTX(226, 720, -241, 3616, -1279, 136, 136, 136, 255),
    VTX(247, 720, -92, 1700, -1544, 136, 136, 136, 255),
    VTX(272, 720, 0, 512, -1863, 136, 136, 136, 255),
    VTX(366, 720, 0, 512, -3071, 136, 136, 136, 255),
    VTX(329, 720, -139, 2304, -2591, 136, 136, 136, 255),
    VTX(247, 720, 93, -675, -1544, 136, 136, 136, 255),
    VTX(329, 720, 140, -1279, -2591, 136, 136, 136, 255),
}; 

static Vtx fstdan_room_03Vtx_0004B0[12] = {
    VTX(-98, 720, 0, 512, 2888, 136, 136, 136, 255),
    VTX(-73, 720, 93, -675, 2569, 136, 136, 136, 255),
    VTX(226, 720, 242, -2591, -1279, 136, 136, 136, 255),
    VTX(86, 720, 186, -1863, 512, 136, 136, 136, 255),
    VTX(-53, 720, 242, -2591, 2304, 136, 136, 136, 255),
    VTX(179, 720, 161, -1544, -675, 136, 136, 136, 255),
    VTX(-171, 720, -79, 1536, 3822, 136, 136, 136, 255),
    VTX(-171, 720, 80, -511, 3822, 136, 136, 136, 255),
    VTX(-155, 720, 140, -1279, 3616, 136, 136, 136, 255),
    VTX(-5, 720, 161, -1544, 1700, 136, 136, 136, 255),
    VTX(-53, 720, 380, -4351, 2304, 136, 136, 136, 255),
    VTX(226, 720, 380, -4351, -1279, 136, 136, 136, 255),
}; 

static Vtx fstdan_room_03Vtx_000570[14] = {
    VTX(226, 720, 380, 0, 0, 153, 153, 153, 255),
    VTX(146, 720, 380, 1170, 0, 153, 153, 153, 255),
    VTX(146, 820, 380, 1170, 931, 153, 153, 153, 255),
    VTX(226, 940, 380, 0, 2048, 153, 153, 153, 255),
    VTX(-53, 940, 380, 4096, 2048, 153, 153, 153, 255),
    VTX(26, 820, 380, 2926, 931, 153, 153, 153, 255),
    VTX(-313, 820, -29, -383, 931, 153, 153, 153, 255),
    VTX(-313, 920, -79, -1023, 1862, 153, 153, 153, 255),
    VTX(-313, 920, 80, 1024, 1862, 153, 153, 153, 255),
    VTX(-313, 820, 30, 384, 931, 153, 153, 153, 255),
    VTX(-313, 720, -79, -1023, 0, 153, 153, 153, 255),
    VTX(-313, 720, -29, -383, 0, 153, 153, 153, 255),
    VTX(26, 720, 380, 2926, 0, 153, 153, 153, 255),
    VTX(-53, 720, 380, 4096, 0, 153, 153, 153, 255),
}; 

static Vtx fstdan_room_03Vtx_000650[2] = {
    VTX(-313, 720, 80, 1024, 0, 153, 153, 153, 255),
    VTX(-313, 720, 30, 384, 0, 153, 153, 153, 255),
}; 

static Vtx fstdan_room_03Vtx_000670[16] = {
    VTX(226, 720, 380, -1023, 0, 170, 170, 170, 255),
    VTX(226, 940, 380, -1023, 2048, 170, 170, 170, 255),
    VTX(226, 940, 242, 1024, 2048, 170, 170, 170, 255),
    VTX(226, 720, 242, 1024, 0, 170, 170, 170, 255),
    VTX(-53, 720, 242, 0, 0, 170, 170, 170, 255),
    VTX(-53, 940, 242, 0, 2048, 170, 170, 170, 255),
    VTX(-53, 940, 380, 2048, 2048, 170, 170, 170, 255),
    VTX(-53, 720, 380, 2048, 0, 170, 170, 170, 255),
    VTX(-171, 920, 80, 768, 1862, 170, 170, 170, 255),
    VTX(-171, 720, 80, 768, 0, 170, 170, 170, 255),
    VTX(-313, 720, 80, -1041, 0, 170, 170, 170, 255),
    VTX(-313, 920, 80, -1041, 1862, 170, 170, 170, 255),
    VTX(-171, 720, -79, 256, 0, 170, 170, 170, 255),
    VTX(-171, 920, -79, 256, 1862, 170, 170, 170, 255),
    VTX(-313, 920, -79, 2066, 1862, 170, 170, 170, 255),
    VTX(-313, 720, -79, 2066, 0, 170, 170, 170, 255),
}; 

static Vtx fstdan_room_03Vtx_000770[14] = {
    VTX(86, 720, 0, 512, 2040, 204, 204, 204, 255),
    VTX(86, 720, 186, 0, 0, 204, 204, 204, 255),
    VTX(179, 720, 161, 1024, 0, 204, 204, 204, 255),
    VTX(179, 720, -160, 1024, 0, 204, 204, 204, 255),
    VTX(86, 720, -185, 0, 0, 204, 204, 204, 255),
    VTX(179, 720, 161, 1024, 0, 204, 204, 204, 255),
    VTX(247, 720, 93, 0, 0, 204, 204, 204, 255),
    VTX(86, 720, 0, 512, 2040, 204, 204, 204, 255),
    VTX(86, 720, 0, 512, 2040, 204, 204, 204, 255),
    VTX(-73, 720, 93, 0, 0, 204, 204, 204, 255),
    VTX(-5, 720, 161, 1024, 0, 204, 204, 204, 255),
    VTX(-5, 720, -160, 1024, 0, 204, 204, 204, 255),
    VTX(-73, 720, -92, 0, 0, 204, 204, 204, 255),
    VTX(86, 720, 0, 512, 2040, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_03Vtx_000850[5] = {
    VTX(272, 720, 0, 1024, 0, 204, 204, 204, 255),
    VTX(86, 720, 0, 512, 2040, 204, 204, 204, 255),
    VTX(86, 720, 0, 512, 2040, 204, 204, 204, 255),
    VTX(86, 720, 0, 512, 2040, 204, 204, 204, 255),
    VTX(-98, 720, 0, 1024, 0, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_03Vtx_0008A0[1] = {
    VTX(-5, 720, 161, 1024, 0, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_03Vtx_0008B0[10] = {
    VTX(247, 720, -92, 0, 0, 204, 204, 204, 255),
    VTX(-73, 720, -92, 0, 0, 204, 204, 204, 255),
    VTX(-98, 720, 0, 1024, 0, 204, 204, 204, 255),
    VTX(247, 720, -92, 0, 0, 204, 204, 204, 255),
    VTX(179, 720, -160, 1024, 0, 204, 204, 204, 255),
    VTX(247, 720, 93, 0, 0, 204, 204, 204, 255),
    VTX(272, 720, 0, 1024, 0, 204, 204, 204, 255),
    VTX(-73, 720, 93, 0, 0, 204, 204, 204, 255),
    VTX(86, 720, -185, 0, 0, 204, 204, 204, 255),
    VTX(-5, 720, -160, 1024, 0, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_03Vtx_000950[2] = {
    VTX(86, 720, 186, 18, -10, 204, 204, 204, 255),
    VTX(86, 720, 0, 521, 2034, 204, 204, 204, 255),
}; 

static Vtx fstdan_room_03Vtx_000970[14] = {
    VTX(-155, 940, -139, 22528, 2048, 255, 255, 255, 255),
    VTX(-171, 920, -79, 23402, 1862, 255, 255, 255, 255),
    VTX(-155, 720, -139, 22528, 0, 255, 255, 255, 255),
    VTX(-171, 720, -79, 23402, 0, 255, 255, 255, 255),
    VTX(-193, 940, 0, 24576, 2048, 255, 255, 255, 255),
    VTX(-193, 920, 0, 24576, 1862, 255, 255, 255, 255),
    VTX(-53, 720, -241, 20480, 0, 255, 255, 255, 255),
    VTX(-53, 940, -241, 20480, 2048, 255, 255, 255, 255),
    VTX(-155, 720, 140, 2048, 0, 255, 255, 255, 255),
    VTX(-171, 720, 80, 1174, 0, 255, 255, 255, 255),
    VTX(-171, 920, 80, 1174, 1862, 255, 255, 255, 255),
    VTX(-155, 940, 140, 2048, 2048, 255, 255, 255, 255),
    VTX(-53, 720, 242, 4096, 0, 255, 255, 255, 255),
    VTX(-53, 940, 242, 4096, 2048, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_03Vtx_000A50[5] = {
    VTX(-193, 920, 0, 0, 1862, 255, 255, 255, 255),
    VTX(329, 940, -139, 14336, 2048, 255, 255, 255, 255),
    VTX(329, 720, -139, 14336, 0, 255, 255, 255, 255),
    VTX(86, 940, -279, 18432, 2048, 255, 255, 255, 255),
    VTX(86, 720, -279, 18432, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_03Vtx_000AA0[6] = {
    VTX(226, 720, 242, 8192, 0, 255, 255, 255, 255),
    VTX(366, 940, 0, 12288, 2048, 255, 255, 255, 255),
    VTX(-193, 940, 0, 0, 2048, 255, 255, 255, 255),
    VTX(366, 720, 0, 12288, 0, 255, 255, 255, 255),
    VTX(226, 940, -241, 16384, 2048, 255, 255, 255, 255),
    VTX(226, 720, -241, 16384, 0, 255, 255, 255, 255),
}; 

static Vtx fstdan_room_03Vtx_000B00[3] = {
    VTX(329, 720, 140, 10240, 0, 255, 255, 255, 255),
    VTX(226, 940, 242, 8192, 2048, 255, 255, 255, 255),
    VTX(329, 940, 140, 10240, 2048, 255, 255, 255, 255),
}; 

Gfx fstdan_room_03Dlist0x000B30[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 0, 0, 0, 255),
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
    gsSPVertex(&fstdan_room_03Vtx_000060[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 17, 17, 17, 255),
    gsSPVertex(&fstdan_room_03Vtx_0000A0[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 68, 68, 68, 255),
    gsSPVertex(&fstdan_room_03Vtx_0000E0[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 85, 85, 85, 255),
    gsSPVertex(&fstdan_room_03Vtx_0001E0[0], 8, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 102, 102, 102, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_03Tex_002A70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_03Vtx_000260[0], 6, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_03Tex_001270, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, 1, 1, 5, 5, 0, 0),
    gsSPVertex(&fstdan_room_03Vtx_0002C0[0], 13, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 4, 0),
    gsSP1Triangle(1, 4, 2, 0),
    gsSP1Triangle(3, 5, 4, 0),
    gsSP1Triangle(6, 2, 7, 0),
    gsSP1Triangle(6, 0, 2, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 9, 10, 0),
    gsSP1Triangle(6, 10, 11, 0),
    gsSP1Triangle(6, 11, 0, 0),
    gsSP1Triangle(9, 12, 10, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 119, 119, 119, 255),
    gsSPVertex(&fstdan_room_03Vtx_000390[0], 4, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 136, 136, 136, 255),
    gsSPVertex(&fstdan_room_03Vtx_0003D0[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 0, 3, 0),
    gsSP1Triangle(4, 3, 5, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(1, 7, 2, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(6, 8, 11, 0),
    gsSP1Triangle(6, 11, 7, 0),
    gsSP1Triangle(9, 12, 13, 0),
    gsSP1Triangle(9, 13, 10, 0),
    gsSPVertex(&fstdan_room_03Vtx_0003D0[4], 2, 0),
    gsSPVertex(&fstdan_room_03Vtx_0004B0[0], 12, 2),
    gsSP1Triangle(2, 0, 1, 0),
    gsSP1Triangle(2, 1, 8, 0),
    gsSP1Triangle(3, 2, 9, 0),
    gsSP1Triangle(3, 9, 10, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 7, 5, 0),
    gsSP1Triangle(5, 11, 6, 0),
    gsSP1Triangle(6, 11, 3, 0),
    gsSP1Triangle(6, 3, 10, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(6, 13, 4, 0),
    gsSPVertex(&fstdan_room_03Vtx_0003D0[12], 2, 0),
    gsSPVertex(&fstdan_room_03Vtx_0004B0[2], 1, 2),
    gsSPVertex(&fstdan_room_03Vtx_0004B0[5], 1, 3),
    gsSP1Triangle(0, 3, 2, 0),
    gsSP1Triangle(0, 2, 1, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 153, 153, 153, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_03Tex_002A70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_03Vtx_000570[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 3, 2, 0),
    gsSP1Triangle(4, 2, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(6, 8, 9, 0),
    gsSP1Triangle(7, 6, 10, 0),
    gsSP1Triangle(6, 11, 10, 0),
    gsSP1Triangle(5, 12, 13, 0),
    gsSP1Triangle(5, 13, 4, 0),
    gsSPVertex(&fstdan_room_03Vtx_000570[8], 2, 0),
    gsSPVertex(&fstdan_room_03Vtx_000650[0], 2, 2),
    gsSP1Triangle(2, 3, 1, 0),
    gsSP1Triangle(2, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 170, 170, 170, 255),
    gsSPVertex(&fstdan_room_03Vtx_000670[0], 16, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(4, 5, 6, 0),
    gsSP1Triangle(4, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSP1Triangle(12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 204, 204, 204, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_03Tex_001A70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 0, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_03Vtx_000770[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 0, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&fstdan_room_03Vtx_000850[0], 5, 0),
    gsSPVertex(&fstdan_room_03Vtx_0008B0[0], 10, 5),
    gsSP1Triangle(0, 5, 1, 0),
    gsSP1Triangle(1, 6, 7, 0),
    gsSP1Triangle(2, 8, 9, 0),
    gsSP1Triangle(3, 10, 11, 0),
    gsSP1Triangle(4, 12, 3, 0),
    gsSP1Triangle(3, 13, 14, 0),
    gsSPVertex(&fstdan_room_03Vtx_0008A0[0], 1, 0),
    gsSPVertex(&fstdan_room_03Vtx_000950[0], 2, 1),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 255, 255, 255),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_03Tex_002A70, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, 0, 2, 5, 6, 0, 0),
    gsSPVertex(&fstdan_room_03Vtx_000970[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(1, 3, 2, 0),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 1, 0),
    gsSP1Triangle(6, 7, 0, 0),
    gsSP1Triangle(6, 0, 2, 0),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(8, 10, 11, 0),
    gsSP1Triangle(12, 8, 11, 0),
    gsSP1Triangle(12, 11, 13, 0),
    gsSPVertex(&fstdan_room_03Vtx_000970[6], 2, 0),
    gsSPVertex(&fstdan_room_03Vtx_000970[10], 2, 2),
    gsSPVertex(&fstdan_room_03Vtx_000A50[0], 5, 4),
    gsSPVertex(&fstdan_room_03Vtx_000AA0[1], 5, 9),
    gsSP1Triangle(2, 4, 10, 0),
    gsSP1Triangle(2, 10, 3, 0),
    gsSP1Triangle(5, 6, 11, 0),
    gsSP1Triangle(5, 11, 9, 0),
    gsSP1Triangle(6, 5, 12, 0),
    gsSP1Triangle(6, 12, 13, 0),
    gsSP1Triangle(7, 8, 13, 0),
    gsSP1Triangle(7, 13, 12, 0),
    gsSP1Triangle(1, 0, 8, 0),
    gsSP1Triangle(1, 8, 7, 0),
    gsSPVertex(&fstdan_room_03Vtx_000AA0[0], 2, 0),
    gsSPVertex(&fstdan_room_03Vtx_000AA0[3], 1, 2),
    gsSPVertex(&fstdan_room_03Vtx_000B00[0], 3, 3),
    gsSP1Triangle(0, 4, 5, 0),
    gsSP1Triangle(0, 5, 3, 0),
    gsSP1Triangle(1, 2, 3, 0),
    gsSP1Triangle(1, 3, 5, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_03Tex_001270[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_03Tex_001270.rgb5a1.inc.c"
};

u64 fstdan_room_03Tex_001A70[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_03Tex_001A70.rgb5a1.inc.c"
};

u64 fstdan_room_03Tex_002A70[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_03Tex_002A70.rgb5a1.inc.c"
};

static Vtx fstdan_room_03Vtx_003A70[24] = {
    VTX(86, 720, 167, 1107, 419, 255, 228, 114, 255),
    VTX(86, 850, 167, 1107, 1024, 255, 228, 114, 255),
    VTX(3, 850, 145, 0, 1024, 255, 228, 114, 255),
    VTX(3, 720, 145, 0, 419, 255, 228, 114, 255),
    VTX(-57, 850, 84, -957, 1024, 255, 228, 114, 255),
    VTX(-57, 720, 84, -957, 419, 255, 228, 114, 255),
    VTX(-80, 850, 0, -1511, 1024, 255, 228, 114, 255),
    VTX(-80, 720, 0, -1511, 419, 255, 228, 114, 255),
    VTX(-57, 850, -83, -1511, 1024, 255, 228, 114, 255),
    VTX(-57, 720, -83, -1511, 419, 255, 228, 114, 255),
    VTX(3, 850, -144, -957, 1024, 255, 228, 114, 255),
    VTX(3, 720, -144, -957, 419, 255, 228, 114, 255),
    VTX(86, 850, -166, 0, 1024, 255, 228, 114, 255),
    VTX(86, 720, -166, 0, 419, 255, 228, 114, 255),
    VTX(231, 720, -83, 2065, 419, 255, 228, 114, 255),
    VTX(170, 720, -144, 1107, 419, 255, 228, 114, 255),
    VTX(253, 720, 0, 2619, 419, 255, 228, 114, 255),
    VTX(170, 850, -144, 1107, 1024, 255, 228, 114, 255),
    VTX(170, 720, 145, 2065, 419, 255, 228, 114, 255),
    VTX(231, 720, 84, 2619, 419, 255, 228, 114, 255),
    VTX(231, 850, -83, 2065, 1024, 255, 228, 114, 255),
    VTX(253, 850, 0, 2619, 1024, 255, 228, 114, 255),
    VTX(231, 850, 84, 2619, 1024, 255, 228, 114, 255),
    VTX(170, 850, 145, 2065, 1024, 255, 228, 114, 255),
}; 

Gfx fstdan_room_03Dlist0x003BF0[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 1, 255, 228, 114, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, TEXEL1, 0, 1, COMBINED),
    gsDPLoadTextureBlock(fstdan_room_03Tex_003D58, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, 0, 2, 5, 5, 0, 0),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_SHADING_SMOOTH),
    gsSPVertex(&fstdan_room_03Vtx_003A70[0], 14, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsSP1Triangle(3, 2, 4, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(5, 4, 6, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Triangle(7, 6, 8, 0),
    gsSP1Triangle(7, 8, 9, 0),
    gsSP1Triangle(9, 8, 10, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSP1Triangle(11, 10, 12, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSPVertex(&fstdan_room_03Vtx_003A70[1], 1, 1),
    gsSPVertex(&fstdan_room_03Vtx_003A70[12], 12, 2),
    gsSP1Triangle(4, 10, 11, 0),
    gsSP1Triangle(4, 11, 6, 0),
    gsSP1Triangle(5, 7, 10, 0),
    gsSP1Triangle(5, 10, 4, 0),
    gsSP1Triangle(6, 11, 12, 0),
    gsSP1Triangle(6, 12, 9, 0),
    gsSP1Triangle(3, 2, 7, 0),
    gsSP1Triangle(3, 7, 5, 0),
    gsSP1Triangle(8, 13, 1, 0),
    gsSP1Triangle(8, 1, 0, 0),
    gsSP1Triangle(9, 12, 13, 0),
    gsSP1Triangle(9, 13, 8, 0),
    gsSPEndDisplayList(),
}; 

u64 fstdan_room_03Tex_003D58[] = {
#include "assets/scenes/dungeons/fstdan//fstdan_room_03Tex_003D58.ia16.inc.c"
};

static u8 unaccounted_004558[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


