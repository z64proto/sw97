#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_spot09_obj.h"

static Vtx object_spot09_objVtx_000000[4];
static Vtx object_spot09_objVtx_000040[4];
static Vtx object_spot09_objVtx_000080[4];
static Vtx object_spot09_objVtx_0000C0[4];
static Vtx object_spot09_objVtx_000280[8];
static Vtx object_spot09_objVtx_000300[3];
static Vtx object_spot09_objVtx_000330[8];
static Vtx object_spot09_objVtx_0003B0[3];
static Vtx object_spot09_objVtx_0003E0[16];
static Vtx object_spot09_objVtx_0004E0[8];
static Vtx object_spot09_objVtx_000560[6];
static Vtx object_spot09_objVtx_0005C0[6];
static Vtx object_spot09_objVtx_000620[6];
static Vtx object_spot09_objVtx_000680[12];
static Vtx object_spot09_objVtx_000740[6];
static Vtx object_spot09_objVtx_0007A0[8];
static Vtx object_spot09_objVtx_000820[3];
static Vtx object_spot09_objVtx_000850[8];
static Vtx object_spot09_objVtx_0008D0[3];
static Vtx object_spot09_objVtx_000900[16];
static Vtx object_spot09_objVtx_000A00[8];
static Vtx object_spot09_objVtx_000A80[6];
static Vtx object_spot09_objVtx_000AE0[6];
static Vtx object_spot09_objVtx_000B40[3];
static Vtx object_spot09_objVtx_000B70[12];
static Vtx object_spot09_objVtx_000C30[9];
static Vtx object_spot09_objVtx_000CC0[4];
static Vtx object_spot09_objVtx_000D00[4];
static Vtx object_spot09_objVtx_000D40[6];
static Vtx object_spot09_objVtx_000DA0[4];
static Vtx object_spot09_objVtx_000DE0[4];
static Vtx object_spot09_objVtx_000E20[4];
static Vtx object_spot09_objVtx_000E60[4];
static Vtx object_spot09_objVtx_000EA0[4];
static Vtx object_spot09_objVtx_000EE0[4];
static Vtx object_spot09_objVtx_000F20[4];
static Vtx object_spot09_objVtx_000F60[4];
static Vtx object_spot09_objVtx_000FA0[6];
static Vtx object_spot09_objVtx_001000[4];
static Vtx object_spot09_objVtx_001040[4];
static Vtx object_spot09_objVtx_001080[10];
static Vtx object_spot09_objVtx_002870[3];
static Vtx object_spot09_objVtx_0028A0[8];
static Vtx object_spot09_objVtx_002920[3];
static Vtx object_spot09_objVtx_002950[8];
static Vtx object_spot09_objVtx_0029D0[3];
static Vtx object_spot09_objVtx_002A00[16];
static Vtx object_spot09_objVtx_002B00[8];
static Vtx object_spot09_objVtx_002B80[6];
static Vtx object_spot09_objVtx_002BE0[6];
static Vtx object_spot09_objVtx_002C40[6];
static Vtx object_spot09_objVtx_002CA0[12];
static Vtx object_spot09_objVtx_002D60[3];
static Vtx object_spot09_objVtx_002D90[6];
static Vtx object_spot09_objVtx_002DF0[8];
static Vtx object_spot09_objVtx_002E70[3];
static Vtx object_spot09_objVtx_002EA0[8];
static Vtx object_spot09_objVtx_002F20[3];
static Vtx object_spot09_objVtx_002F50[16];
static Vtx object_spot09_objVtx_003050[8];
static Vtx object_spot09_objVtx_0030D0[6];
static Vtx object_spot09_objVtx_003130[6];
static Vtx object_spot09_objVtx_003190[3];
static Vtx object_spot09_objVtx_0031C0[12];
static Vtx object_spot09_objVtx_003280[3];
static Vtx object_spot09_objVtx_0032B0[4];
static Vtx object_spot09_objVtx_0032F0[4];
static Vtx object_spot09_objVtx_003330[6];
static Vtx object_spot09_objVtx_003390[4];
static Vtx object_spot09_objVtx_0033D0[4];
static Vtx object_spot09_objVtx_003410[4];
static Vtx object_spot09_objVtx_003450[4];
static Vtx object_spot09_objVtx_003490[4];
static Vtx object_spot09_objVtx_0034D0[4];
static Vtx object_spot09_objVtx_003510[4];
static Vtx object_spot09_objVtx_003550[4];
static Vtx object_spot09_objVtx_003590[6];
static Vtx object_spot09_objVtx_0035F0[4];
static Vtx object_spot09_objVtx_003630[4];
static Vtx object_spot09_objVtx_003670[12];
static Vtx object_spot09_objVtx_003730[3];
static Vtx object_spot09_objVtx_003760[4];
static Vtx object_spot09_objVtx_0037A0[4];
static Vtx object_spot09_objVtx_0037E0[4];
static Vtx object_spot09_objVtx_003820[9];
static Vtx object_spot09_objVtx_0038B0[8];
static Vtx object_spot09_objVtx_003930[4];
static Vtx object_spot09_objVtx_005550[6];
static Vtx object_spot09_objVtx_0055B0[8];
static Vtx object_spot09_objVtx_005630[3];
static Vtx object_spot09_objVtx_005660[8];
static Vtx object_spot09_objVtx_0056E0[3];
static Vtx object_spot09_objVtx_005710[16];
static Vtx object_spot09_objVtx_005810[8];
static Vtx object_spot09_objVtx_005890[6];
static Vtx object_spot09_objVtx_0058F0[6];
static Vtx object_spot09_objVtx_005950[8];
static Vtx object_spot09_objVtx_0059D0[3];
static Vtx object_spot09_objVtx_005A00[8];
static Vtx object_spot09_objVtx_005A80[3];
static Vtx object_spot09_objVtx_005AB0[16];
static Vtx object_spot09_objVtx_005BB0[8];
static Vtx object_spot09_objVtx_005C30[6];
static Vtx object_spot09_objVtx_005C90[4];
static Vtx object_spot09_objVtx_005CD0[4];
static Vtx object_spot09_objVtx_005D10[6];
static Vtx object_spot09_objVtx_005D70[4];
static Vtx object_spot09_objVtx_005DB0[4];
static Vtx object_spot09_objVtx_005DF0[4];
static Vtx object_spot09_objVtx_005E30[4];
static Vtx object_spot09_objVtx_005E70[4];
static Vtx object_spot09_objVtx_005EB0[4];
static Vtx object_spot09_objVtx_005EF0[4];
static Vtx object_spot09_objVtx_005F30[4];
static Vtx object_spot09_objVtx_005F70[6];
static Vtx object_spot09_objVtx_005FD0[4];
static Vtx object_spot09_objVtx_006010[4];
static Vtx object_spot09_objVtx_006050[12];
static Vtx object_spot09_objVtx_006110[4];
static Vtx object_spot09_objVtx_006150[12];
static Vtx object_spot09_objVtx_0075B0[19];
static Vtx object_spot09_objVtx_0076E0[32];
static Vtx object_spot09_objVtx_0078E0[3];
static Vtx object_spot09_objVtx_007910[24];
static Vtx object_spot09_objVtx_007A90[16];
static Vtx object_spot09_objVtx_007B90[11];
static Vtx object_spot09_objVtx_007C40[11];
static Vtx object_spot09_objVtx_007CF0[5];

static Vtx object_spot09_objVtx_000000[4] = {
    VTX(305, 36, -380, 1991, 0, 171, 83, 253, 255),
    VTX(305, -137, -207, 1327, 892, 146, 32, 36, 255),
    VTX(305, -137, -33, 664, 892, 146, 32, 220, 255),
    VTX(305, 36, 140, 0, 0, 171, 83, 4, 255),
}; 

static Vtx object_spot09_objVtx_000040[4] = {
    VTX(588, 36, 140, 0, 32, 0, 119, 4, 255),
    VTX(588, 36, -380, 1991, 32, 254, 119, 1, 255),
    VTX(305, 36, -380, 1991, 1024, 171, 83, 253, 255),
    VTX(305, 36, 140, 0, 1024, 171, 83, 4, 255),
}; 

static Vtx object_spot09_objVtx_000080[4] = {
    VTX(-305, 36, 140, 0, 0, 85, 83, 4, 255),
    VTX(-305, -139, -33, 664, 892, 111, 27, 220, 255),
    VTX(-305, -139, -207, 1327, 892, 112, 24, 34, 255),
    VTX(-305, 36, -380, 1991, 0, 85, 84, 253, 255),
}; 

static Vtx object_spot09_objVtx_0000C0[4] = {
    VTX(-305, 36, 140, 0, 1024, 85, 83, 4, 255),
    VTX(-305, 36, -380, 1991, 1024, 85, 84, 253, 255),
    VTX(-588, 36, -380, 1991, 32, 255, 119, 254, 255),
    VTX(-588, 36, 140, 0, 32, 1, 119, 3, 255),
}; 

Gfx gValleyBridgeSidesDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_013090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 223, 200, 255),
    gsSPVertex(&object_spot09_objVtx_000000[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_014090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_000040[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_013090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_000080[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_014090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_0000C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_spot09_objVtx_000280[8] = {
    VTX(-203, -46, -17, 3508, -825, 110, 0, 208, 255),
    VTX(-304, -219, -5, 4048, 4295, 85, 205, 66, 255),
    VTX(-312, -214, -24, 2968, 4295, 5, 251, 137, 255),
    VTX(-221, -36, -19, 2429, -825, 207, 92, 197, 255),
    VTX(-322, -208, -7, 1889, 4295, 163, 52, 53, 255),
    VTX(-213, -40, 0, 1349, -825, 22, 51, 106, 255),
    VTX(-304, -219, -5, 810, 4295, 85, 205, 66, 255),
    VTX(-203, -46, -17, 270, -825, 110, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_000300[3] = {
    VTX(-221, -36, -19, 421, -266, 207, 92, 197, 255),
    VTX(-213, -40, 0, 1301, 851, 22, 51, 106, 255),
    VTX(-203, -46, -17, -209, 981, 110, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_000330[8] = {
    VTX(-312, -214, -216, 2968, 4295, 5, 251, 119, 255),
    VTX(-304, -219, -235, 4048, 4295, 85, 205, 190, 255),
    VTX(-203, -46, -223, 3508, -825, 110, 0, 48, 255),
    VTX(-221, -36, -221, 2429, -825, 207, 92, 59, 255),
    VTX(-322, -208, -233, 1889, 4295, 163, 52, 203, 255),
    VTX(-213, -40, -240, 1349, -825, 22, 51, 150, 255),
    VTX(-304, -219, -235, 810, 4295, 85, 205, 190, 255),
    VTX(-203, -46, -223, 270, -825, 110, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_0003B0[3] = {
    VTX(-203, -46, -223, -209, 981, 110, 0, 48, 255),
    VTX(-213, -40, -240, 1301, 851, 22, 51, 150, 255),
    VTX(-221, -36, -221, 421, -266, 207, 92, 59, 255),
}; 

static Vtx object_spot09_objVtx_0003E0[16] = {
    VTX(-378, 216, -270, 2338, 0, 27, 57, 154, 255),
    VTX(-405, 36, -263, 1846, 3570, 172, 251, 172, 255),
    VTX(-413, 216, -235, 1354, 0, 154, 57, 27, 255),
    VTX(-358, 36, -250, 2830, 3570, 115, 251, 225, 255),
    VTX(-365, 216, -223, 3322, 0, 74, 57, 74, 255),
    VTX(-393, 36, -215, 861, 3570, 225, 251, 115, 255),
    VTX(-365, 216, -223, 369, 0, 74, 57, 74, 255),
    VTX(-393, 36, -215, 3815, 3570, 225, 251, 115, 255),
    VTX(-413, 216, -5, 1354, 0, 154, 57, 229, 255),
    VTX(-393, 36, -25, 861, 3570, 225, 251, 141, 255),
    VTX(-405, 36, 23, 1846, 3570, 172, 251, 84, 255),
    VTX(-365, 216, -17, 3322, 0, 74, 57, 182, 255),
    VTX(-358, 36, 10, 2830, 3570, 115, 251, 31, 255),
    VTX(-393, 36, -25, 3815, 3570, 225, 251, 141, 255),
    VTX(-365, 216, -17, 369, 0, 74, 57, 182, 255),
    VTX(-378, 216, 30, 2338, 0, 27, 57, 102, 255),
}; 

static Vtx object_spot09_objVtx_0004E0[8] = {
    VTX(-384, 187, -80, 0, 0, 119, 1, 1, 255),
    VTX(-383, 155, -80, 1024, 0, 119, 1, 1, 255),
    VTX(-383, 155, -160, 1024, 1024, 119, 1, 1, 255),
    VTX(-383, 187, -160, 0, 1024, 119, 1, 1, 255),
    VTX(-387, 187, -160, 1024, 0, 137, 255, 255, 255),
    VTX(-387, 155, -160, 1024, 1024, 137, 255, 255, 255),
    VTX(-387, 155, -80, 0, 1024, 137, 255, 255, 255),
    VTX(-388, 187, -80, 0, 0, 137, 255, 255, 255),
}; 

static Vtx object_spot09_objVtx_000560[6] = {
    VTX(-385, 192, -120, 307, 1, 143, 218, 255, 255),
    VTX(-385, 204, -227, -7746, 0, 143, 218, 251, 255),
    VTX(-385, 196, -226, -7696, 1024, 142, 37, 3, 255),
    VTX(-385, 184, -120, 350, 1023, 142, 37, 255, 255),
    VTX(-386, 196, -13, 8423, 1023, 142, 37, 251, 255),
    VTX(-386, 204, -13, 8473, -1, 143, 218, 3, 255),
}; 

static Vtx object_spot09_objVtx_0005C0[6] = {
    VTX(-389, 12, -195, 523, 3277, 0, 69, 98, 255),
    VTX(-389, -108, -195, 523, -819, 0, 0, 120, 255),
    VTX(-377, -108, -207, 1045, -819, 84, 0, 84, 255),
    VTX(-377, 12, -207, 1045, 3277, 60, 84, 60, 255),
    VTX(-401, 12, -207, 0, 3277, 196, 84, 60, 255),
    VTX(-401, -108, -207, 0, -819, 172, 0, 84, 255),
}; 

static Vtx object_spot09_objVtx_000620[6] = {
    VTX(-401, 12, -207, 144, 511, 196, 84, 60, 255),
    VTX(-389, 12, -195, -472, 1023, 0, 69, 98, 255),
    VTX(-377, 12, -207, -1089, 511, 60, 84, 60, 255),
    VTX(-377, 12, -33, 144, 511, 60, 84, 196, 255),
    VTX(-389, 12, -45, -472, 1023, 0, 69, 158, 255),
    VTX(-401, 12, -33, -1089, 511, 196, 84, 196, 255),
}; 

static Vtx object_spot09_objVtx_000680[12] = {
    VTX(-377, 12, -33, 0, 3277, 60, 84, 196, 255),
    VTX(-377, -108, -33, 0, -819, 84, 0, 172, 255),
    VTX(-389, -108, -45, 523, -819, 0, 0, 136, 255),
    VTX(-389, 12, -45, 523, 3277, 0, 69, 158, 255),
    VTX(-401, -108, -33, 1045, -819, 172, 0, 172, 255),
    VTX(-401, 12, -33, 1045, 3277, 196, 84, 196, 255),
    VTX(-220, -54, -221, 704, 3777, 59, 104, 0, 255),
    VTX(-220, -54, -19, 704, 319, 59, 104, 0, 255),
    VTX(-223, -76, -19, 0, 316, 119, 241, 0, 255),
    VTX(-223, -76, -221, 0, 3780, 119, 241, 0, 255),
    VTX(-237, -68, -220, 207, 3762, 182, 94, 0, 255),
    VTX(-237, -68, -20, 207, 334, 182, 94, 0, 255),
}; 

static Vtx object_spot09_objVtx_000740[6] = {
    VTX(-413, 216, -235, 529, -63, 154, 57, 27, 255),
    VTX(-365, 216, -223, 17, 824, 74, 57, 74, 255),
    VTX(-378, 216, -270, 1041, 824, 27, 57, 154, 255),
    VTX(-413, 216, -5, 529, -63, 154, 57, 229, 255),
    VTX(-378, 216, 30, 17, 824, 27, 57, 102, 255),
    VTX(-365, 216, -17, 1041, 824, 74, 57, 182, 255),
}; 

static Vtx object_spot09_objVtx_0007A0[8] = {
    VTX(312, -214, -24, 2968, 4336, 251, 251, 137, 255),
    VTX(304, -219, -5, 4048, 4336, 171, 205, 66, 255),
    VTX(203, -46, -17, 3508, -784, 146, 0, 208, 255),
    VTX(221, -36, -19, 2429, -784, 49, 92, 197, 255),
    VTX(322, -208, -7, 1889, 4336, 93, 52, 53, 255),
    VTX(213, -40, 0, 1349, -784, 234, 51, 106, 255),
    VTX(304, -219, -5, 810, 4336, 171, 205, 66, 255),
    VTX(203, -46, -17, 270, -784, 146, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_000820[3] = {
    VTX(203, -46, -17, -209, 981, 146, 0, 208, 255),
    VTX(213, -40, 0, 1301, 851, 234, 51, 106, 255),
    VTX(221, -36, -19, 421, -266, 49, 92, 197, 255),
}; 

static Vtx object_spot09_objVtx_000850[8] = {
    VTX(203, -46, -223, 3508, -784, 146, 0, 48, 255),
    VTX(304, -219, -235, 4048, 4336, 171, 205, 190, 255),
    VTX(312, -214, -216, 2968, 4336, 251, 251, 119, 255),
    VTX(221, -36, -221, 2429, -784, 49, 92, 59, 255),
    VTX(322, -208, -233, 1889, 4336, 93, 52, 203, 255),
    VTX(213, -40, -240, 1349, -784, 234, 51, 150, 255),
    VTX(304, -219, -235, 810, 4336, 171, 205, 190, 255),
    VTX(203, -46, -223, 270, -784, 146, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_0008D0[3] = {
    VTX(221, -36, -221, 421, -266, 49, 92, 59, 255),
    VTX(213, -40, -240, 1301, 851, 234, 51, 150, 255),
    VTX(203, -46, -223, -209, 981, 146, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_000900[16] = {
    VTX(413, 216, -235, 1354, 0, 102, 57, 27, 255),
    VTX(405, 36, -263, 1846, 3570, 84, 251, 172, 255),
    VTX(378, 216, -270, 2338, 0, 229, 57, 154, 255),
    VTX(358, 36, -250, 2830, 3570, 141, 251, 225, 255),
    VTX(365, 216, -223, 3322, 0, 182, 57, 74, 255),
    VTX(365, 216, -223, 369, 0, 182, 57, 74, 255),
    VTX(393, 36, -215, 861, 3570, 31, 251, 115, 255),
    VTX(393, 36, -215, 3815, 3570, 31, 251, 115, 255),
    VTX(405, 36, 23, 1846, 3570, 84, 251, 84, 255),
    VTX(393, 36, -25, 861, 3570, 31, 251, 141, 255),
    VTX(413, 216, -5, 1354, 0, 102, 57, 229, 255),
    VTX(393, 36, -25, 3815, 3570, 31, 251, 141, 255),
    VTX(358, 36, 10, 2830, 3570, 141, 251, 31, 255),
    VTX(365, 216, -17, 3322, 0, 182, 57, 182, 255),
    VTX(365, 216, -17, 369, 0, 182, 57, 182, 255),
    VTX(378, 216, 30, 2338, 0, 229, 57, 102, 255),
}; 

static Vtx object_spot09_objVtx_000A00[8] = {
    VTX(383, 187, -160, 0, 1024, 137, 1, 1, 255),
    VTX(383, 155, -160, 1024, 1024, 137, 1, 1, 255),
    VTX(383, 155, -80, 1024, 0, 137, 1, 1, 255),
    VTX(384, 187, -80, 0, 0, 137, 1, 1, 255),
    VTX(388, 187, -80, 0, 0, 119, 255, 255, 255),
    VTX(387, 155, -80, 0, 1024, 119, 255, 255, 255),
    VTX(387, 155, -160, 1024, 1024, 119, 255, 255, 255),
    VTX(387, 187, -160, 1024, 0, 119, 255, 255, 255),
}; 

static Vtx object_spot09_objVtx_000A80[6] = {
    VTX(385, 184, -120, 350, 1023, 114, 37, 255, 255),
    VTX(385, 196, -226, -7696, 1024, 114, 37, 3, 255),
    VTX(385, 204, -227, -7746, 0, 113, 218, 251, 255),
    VTX(385, 192, -120, 307, 1, 113, 218, 255, 255),
    VTX(386, 204, -13, 8473, -1, 113, 218, 3, 255),
    VTX(386, 196, -13, 8423, 1023, 114, 37, 251, 255),
}; 

static Vtx object_spot09_objVtx_000AE0[6] = {
    VTX(377, 12, -207, 1045, 3277, 196, 84, 60, 255),
    VTX(377, -108, -207, 1045, -819, 172, 0, 84, 255),
    VTX(389, -108, -195, 523, -819, 0, 0, 120, 255),
    VTX(389, 12, -195, 523, 3277, 0, 69, 98, 255),
    VTX(401, -108, -207, 0, -819, 84, 0, 84, 255),
    VTX(401, 12, -207, 0, 3277, 60, 84, 60, 255),
}; 

static Vtx object_spot09_objVtx_000B40[3] = {
    VTX(401, 12, -33, -1089, 511, 60, 84, 196, 255),
    VTX(389, 12, -45, -472, 1023, 0, 69, 158, 255),
    VTX(377, 12, -33, 144, 511, 196, 84, 196, 255),
}; 

static Vtx object_spot09_objVtx_000B70[12] = {
    VTX(389, 12, -45, 523, 3277, 0, 69, 158, 255),
    VTX(389, -108, -45, 523, -819, 0, 0, 136, 255),
    VTX(377, -108, -33, 0, -819, 172, 0, 172, 255),
    VTX(377, 12, -33, 0, 3277, 196, 84, 196, 255),
    VTX(401, 12, -33, 1045, 3277, 60, 84, 196, 255),
    VTX(401, -108, -33, 1045, -819, 84, 0, 172, 255),
    VTX(223, -76, -221, 0, 316, 137, 241, 0, 255),
    VTX(223, -76, -19, 0, 3780, 137, 241, 0, 255),
    VTX(220, -54, -19, 801, 3777, 197, 104, 0, 255),
    VTX(220, -54, -221, 801, 319, 197, 104, 0, 255),
    VTX(237, -68, -20, 235, 3762, 74, 94, 0, 255),
    VTX(237, -68, -220, 235, 334, 74, 94, 0, 255),
}; 

static Vtx object_spot09_objVtx_000C30[9] = {
    VTX(377, 12, -207, -1089, 511, 196, 84, 60, 255),
    VTX(389, 12, -195, -472, 1023, 0, 69, 98, 255),
    VTX(401, 12, -207, 144, 511, 60, 84, 60, 255),
    VTX(365, 216, -223, 529, -63, 182, 57, 74, 255),
    VTX(413, 216, -235, 17, 824, 102, 57, 27, 255),
    VTX(378, 216, -270, 1041, 824, 229, 57, 154, 255),
    VTX(378, 216, 30, 529, -63, 229, 57, 102, 255),
    VTX(413, 216, -5, 17, 824, 102, 57, 229, 255),
    VTX(365, 216, -17, 1041, 824, 182, 57, 182, 255),
}; 

static Vtx object_spot09_objVtx_000CC0[4] = {
    VTX(588, 36, -33, 2048, 9, 227, 102, 201, 255),
    VTX(415, -74, -33, 816, 1075, 212, 72, 171, 255),
    VTX(305, 36, -33, 0, 9, 207, 49, 158, 255),
    VTX(305, -137, -33, 40, 1752, 146, 32, 220, 255),
}; 

static Vtx object_spot09_objVtx_000D00[4] = {
    VTX(588, 36, 140, 1024, 2048, 0, 119, 4, 255),
    VTX(588, 36, -33, 7, 2048, 227, 102, 201, 255),
    VTX(305, 36, -33, 7, 0, 207, 49, 158, 255),
    VTX(305, 36, 140, 1024, 0, 171, 83, 4, 255),
}; 

static Vtx object_spot09_objVtx_000D40[6] = {
    VTX(305, 36, -33, 2048, 0, 207, 49, 158, 255),
    VTX(305, -137, -33, 2048, 1003, 146, 32, 220, 255),
    VTX(305, 36, 140, 0, 0, 171, 83, 4, 255),
    VTX(305, 36, -380, 0, 0, 171, 83, 253, 255),
    VTX(305, -137, -207, 2048, 1003, 146, 32, 36, 255),
    VTX(305, 36, -207, 2048, 0, 207, 49, 98, 255),
}; 

static Vtx object_spot09_objVtx_000DA0[4] = {
    VTX(305, 36, -380, 1024, 0, 171, 83, 253, 255),
    VTX(305, 36, -207, 7, 0, 207, 49, 98, 255),
    VTX(588, 36, -207, 7, 2048, 227, 102, 55, 255),
    VTX(588, 36, -380, 1024, 2048, 254, 119, 1, 255),
}; 

static Vtx object_spot09_objVtx_000DE0[4] = {
    VTX(305, 36, -207, 0, 9, 207, 49, 98, 255),
    VTX(305, -137, -207, 40, 1752, 146, 32, 36, 255),
    VTX(415, -74, -207, 816, 1075, 212, 72, 85, 255),
    VTX(588, 36, -207, 2048, 9, 227, 102, 55, 255),
}; 

static Vtx object_spot09_objVtx_000E20[4] = {
    VTX(415, -74, -33, 1024, 1024, 212, 72, 171, 255),
    VTX(588, 36, -33, 1024, -1028, 227, 102, 201, 255),
    VTX(588, 36, -207, 0, -1028, 227, 102, 55, 255),
    VTX(415, -74, -207, 0, 1024, 212, 72, 85, 255),
}; 

static Vtx object_spot09_objVtx_000E60[4] = {
    VTX(305, -137, -207, 0, 1024, 146, 32, 36, 255),
    VTX(305, -137, -33, 1024, 1024, 146, 32, 220, 255),
    VTX(415, -74, -33, 1024, 0, 212, 72, 171, 255),
    VTX(415, -74, -207, 0, 0, 212, 72, 85, 255),
}; 

static Vtx object_spot09_objVtx_000EA0[4] = {
    VTX(-415, -74, -207, 1024, 1024, 44, 72, 85, 255),
    VTX(-588, 36, -207, 1024, -1045, 29, 102, 55, 255),
    VTX(-588, 36, -33, 0, -1045, 29, 102, 201, 255),
    VTX(-415, -74, -33, 0, 1024, 44, 72, 171, 255),
}; 

static Vtx object_spot09_objVtx_000EE0[4] = {
    VTX(-415, -74, -207, 0, 0, 44, 72, 85, 255),
    VTX(-415, -74, -33, 1024, 0, 44, 72, 171, 255),
    VTX(-305, -139, -33, 1024, 1024, 111, 27, 220, 255),
    VTX(-305, -139, -207, 0, 1024, 112, 24, 34, 255),
}; 

static Vtx object_spot09_objVtx_000F20[4] = {
    VTX(-588, 36, -207, 2048, 9, 29, 102, 55, 255),
    VTX(-415, -74, -207, 816, 1075, 44, 72, 85, 255),
    VTX(-305, 36, -207, 0, 9, 49, 49, 98, 255),
    VTX(-305, -139, -207, 40, 1752, 112, 24, 34, 255),
}; 

static Vtx object_spot09_objVtx_000F60[4] = {
    VTX(-588, 36, -380, 1024, 2048, 255, 119, 254, 255),
    VTX(-588, 36, -207, 7, 2048, 29, 102, 55, 255),
    VTX(-305, 36, -207, 7, 0, 49, 49, 98, 255),
    VTX(-305, 36, -380, 1024, 0, 85, 84, 253, 255),
}; 

static Vtx object_spot09_objVtx_000FA0[6] = {
    VTX(-305, 36, -207, 2048, 0, 49, 49, 98, 255),
    VTX(-305, -139, -207, 2048, 1003, 112, 24, 34, 255),
    VTX(-305, 36, -380, 0, 0, 85, 84, 253, 255),
    VTX(-305, 36, 140, 0, 0, 85, 83, 4, 255),
    VTX(-305, -139, -33, 2048, 1003, 111, 27, 220, 255),
    VTX(-305, 36, -33, 2048, 0, 49, 49, 158, 255),
}; 

static Vtx object_spot09_objVtx_001000[4] = {
    VTX(-305, 36, 140, 1024, 0, 85, 83, 4, 255),
    VTX(-305, 36, -33, 7, 0, 49, 49, 158, 255),
    VTX(-588, 36, -33, 7, 2048, 29, 102, 201, 255),
    VTX(-588, 36, 140, 1024, 2048, 1, 119, 3, 255),
}; 

static Vtx object_spot09_objVtx_001040[4] = {
    VTX(-305, 36, -33, 0, 9, 49, 49, 158, 255),
    VTX(-305, -139, -33, 40, 1752, 111, 27, 220, 255),
    VTX(-415, -74, -33, 816, 1075, 44, 72, 171, 255),
    VTX(-588, 36, -33, 2048, 9, 29, 102, 201, 255),
}; 

static Vtx object_spot09_objVtx_001080[10] = {
    VTX(399, -74, -20, 2048, -15434, 16, 118, 0, 255),
    VTX(399, -74, -220, -2048, -15434, 16, 118, 0, 255),
    VTX(221, -51, -220, -2048, -11762, 0, 119, 0, 255),
    VTX(221, -51, -20, 2048, -11762, 0, 119, 0, 255),
    VTX(0, -80, -220, -2048, -7205, 0, 120, 0, 255),
    VTX(0, -80, -20, 2048, -7205, 0, 120, 0, 255),
    VTX(-221, -51, -220, -2048, -2648, 0, 119, 0, 255),
    VTX(-221, -51, -20, 2048, -2648, 0, 119, 0, 255),
    VTX(-399, -74, -220, -2048, 1024, 240, 118, 0, 255),
    VTX(-399, -74, -20, 2048, 1024, 240, 118, 0, 255),
}; 

Gfx gValleyBridgeChildDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_spot09_objVtx_000280[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000300[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_000330[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_0003B0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_0003E0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 3, 4, 0, 1, 5, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 9, 8, 0, 15, 12, 11, 0),
    gsSP2Triangles(10, 12, 15, 0, 8, 10, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00B490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_0004E0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00A490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_000560[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_0005C0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000620[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_000680[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000740[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_0007A0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000820[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_000850[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_0008D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_000900[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(4, 3, 7, 0, 0, 6, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 9, 14, 0, 13, 12, 15, 0),
    gsSP2Triangles(15, 12, 8, 0, 15, 8, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00B490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000A00[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00A490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_000A80[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_000AE0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000B40[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_000B70[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000C30[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_000CC0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_000D00[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00EC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_000D40[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_000DA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_000DE0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008C90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000E20[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00FC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPVertex(&object_spot09_objVtx_000E60[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008C90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_000EA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00FC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPVertex(&object_spot09_objVtx_000EE0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_000F20[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_000F60[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00EC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_000FA0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_001000[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_001040[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 209, 178, 255),
    gsSPVertex(&object_spot09_objVtx_001080[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSPEndDisplayList(),
}; 

CamData gValleyObjects2Col_camDataList_00001E80[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gValleyObjects2Col_polygonTypes_00001E88[] = {
   0x80000000, 0x000207CA,
   0x80200000, 0x000207CA,
   0x80200000, 0x000007C2,
   0x2C000000, 0x000007C2,
   0x00000000, 0x000007C2,
   0x2C000000, 0x000007C9,
}; 

CollisionPoly gValleyObjects2Col_polygons_00001EB8[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x613E, 0xC348, 0xC714, 0x007D }, // 0x00001EB8
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0C91, 0xFD27, 0x80A7, 0x0002 }, // 0x00001EC8
   { 0x0000, 0x0002, 0x0004, 0x0003, 0xA2D2, 0x31AB, 0xB7A8, 0xFF62 }, // 0x00001ED8
   { 0x0000, 0x0003, 0x0004, 0x0005, 0x9DC0, 0x3D7C, 0x3650, 0xFF70 }, // 0x00001EE8
   { 0x0000, 0x0005, 0x0004, 0x0001, 0xF38B, 0x02C6, 0x7F5C, 0xFFEC }, // 0x00001EF8
   { 0x0000, 0x0005, 0x0001, 0x0000, 0x5D4D, 0xCE8C, 0x4856, 0x008C }, // 0x00001F08
   { 0x0000, 0x0003, 0x0005, 0x0000, 0x3E61, 0x6FBC, 0xFD42, 0x008B }, // 0x00001F18
   { 0x0000, 0x0006, 0x0007, 0x0008, 0x613E, 0xC348, 0x38EC, 0x00E8 }, // 0x00001F28
   { 0x0000, 0x0009, 0x0006, 0x0008, 0x0C91, 0xFD27, 0x7F59, 0x00F1 }, // 0x00001F38
   { 0x0000, 0x0009, 0x000A, 0x0006, 0xA2D2, 0x31AB, 0x4858, 0xFFEA }, // 0x00001F48
   { 0x0000, 0x000B, 0x000A, 0x0009, 0x9DC0, 0x3D7C, 0xC9B0, 0xFF0A }, // 0x00001F58
   { 0x0000, 0x0007, 0x000A, 0x000B, 0xF38B, 0x02C6, 0x80A4, 0xFEFD }, // 0x00001F68
   { 0x0000, 0x0008, 0x0007, 0x000B, 0x5D4D, 0xCE8C, 0xB7AA, 0x0004 }, // 0x00001F78
   { 0x0000, 0x0008, 0x000B, 0x0009, 0x3E61, 0x6FBC, 0x02BE, 0x0090 }, // 0x00001F88
   { 0x0000, 0x000C, 0x000D, 0x000E, 0xA5C5, 0x0A07, 0xA5C5, 0xFE26 }, // 0x00001F98
   { 0x0000, 0x000C, 0x000F, 0x000D, 0x2205, 0xF61D, 0x8501, 0xFF72 }, // 0x00001FA8
   { 0x0000, 0x0010, 0x000F, 0x000C, 0x7AFF, 0x09E3, 0xDDFB, 0x0113 }, // 0x00001FB8
   { 0x0000, 0x000E, 0x0011, 0x0010, 0xE10F, 0x0A50, 0x7BC5, 0x006E }, // 0x00001FC8
   { 0x0000, 0x0011, 0x000F, 0x0010, 0x5A3B, 0xF5F9, 0x5A3B, 0x01AF }, // 0x00001FD8
   { 0x0000, 0x000D, 0x0011, 0x000E, 0x843B, 0xF5B0, 0x1EF1, 0xFEBB }, // 0x00001FE8
   { 0x0000, 0x0012, 0x0013, 0x0014, 0x843B, 0xF5B0, 0xE10F, 0xFE81 }, // 0x00001FF8
   { 0x0000, 0x0015, 0x0016, 0x0013, 0x5A3B, 0xF5F9, 0xA5C5, 0x0106 }, // 0x00002008
   { 0x0000, 0x0015, 0x0013, 0x0012, 0xE10F, 0x0A50, 0x843B, 0xFF86 }, // 0x00002018
   { 0x0000, 0x0017, 0x0016, 0x0015, 0x7AFF, 0x09E3, 0x2205, 0x0153 }, // 0x00002028
   { 0x0000, 0x0014, 0x0016, 0x0017, 0x2205, 0xF61D, 0x7AFF, 0x0058 }, // 0x00002038
   { 0x0000, 0x0012, 0x0014, 0x0017, 0xA5C5, 0x0A07, 0x5A3B, 0xFECF }, // 0x00002048
   { 0x0000, 0x0018, 0x0019, 0x001A, 0x7FEF, 0x03FF, 0x0000, 0x017A }, // 0x00002058
   { 0x0000, 0x0018, 0x001A, 0x001B, 0x7FFC, 0x0000, 0x019A, 0x0181 }, // 0x00002068
   { 0x0000, 0x001C, 0x001D, 0x001E, 0x8001, 0x0000, 0x0000, 0xFE7D }, // 0x00002078
   { 0x0000, 0x001C, 0x001E, 0x001F, 0x8014, 0xFC01, 0xFE67, 0xFE81 }, // 0x00002088
   { 0x0001, 0x0020, 0x0021, 0x0022, 0x5A82, 0x0000, 0x5A82, 0x019D }, // 0x00002098
   { 0x0001, 0x0020, 0x0022, 0x0023, 0x5A82, 0x0000, 0x5A82, 0x019D }, // 0x000020A8
   { 0x0001, 0x0024, 0x0025, 0x0021, 0xA57E, 0x0000, 0x5A82, 0xFF77 }, // 0x000020B8
   { 0x0001, 0x0024, 0x0021, 0x0020, 0xA57E, 0x0000, 0x5A82, 0xFF77 }, // 0x000020C8
   { 0x0000, 0x0024, 0x0020, 0x0023, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000020D8
   { 0x0000, 0x0026, 0x0027, 0x0028, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000020E8
   { 0x0001, 0x0026, 0x0029, 0x002A, 0x5A82, 0x0000, 0xA57E, 0x00F3 }, // 0x000020F8
   { 0x0001, 0x0026, 0x002A, 0x0027, 0x5A82, 0x0000, 0xA57E, 0x00F3 }, // 0x00002108
   { 0x0001, 0x0027, 0x002A, 0x002B, 0xA57E, 0x0000, 0xA57E, 0xFECD }, // 0x00002118
   { 0x0001, 0x0027, 0x002B, 0x0028, 0xA57E, 0x0000, 0xA57E, 0xFECD }, // 0x00002128
   { 0x0000, 0x002C, 0x002D, 0x002E, 0x9EC2, 0xC348, 0xC714, 0x007D }, // 0x00002138
   { 0x0000, 0x002F, 0x002C, 0x002E, 0xF36F, 0xFD27, 0x80A7, 0x0002 }, // 0x00002148
   { 0x0000, 0x002F, 0x0030, 0x002C, 0x5D2E, 0x31AB, 0xB7A8, 0xFF62 }, // 0x00002158
   { 0x0000, 0x0031, 0x0030, 0x002F, 0x6240, 0x3D7C, 0x3650, 0xFF70 }, // 0x00002168
   { 0x0000, 0x002D, 0x0030, 0x0031, 0x0C75, 0x02C6, 0x7F5C, 0xFFEC }, // 0x00002178
   { 0x0000, 0x002E, 0x002D, 0x0031, 0xA2B3, 0xCE8C, 0x4856, 0x008C }, // 0x00002188
   { 0x0000, 0x002E, 0x0031, 0x002F, 0xC19F, 0x6FBC, 0xFD42, 0x008B }, // 0x00002198
   { 0x0000, 0x0032, 0x0033, 0x0034, 0x9EC2, 0xC348, 0x38EC, 0x00E8 }, // 0x000021A8
   { 0x0000, 0x0032, 0x0034, 0x0035, 0xF36F, 0xFD27, 0x7F59, 0x00F1 }, // 0x000021B8
   { 0x0000, 0x0034, 0x0036, 0x0035, 0x5D2E, 0x31AB, 0x4858, 0xFFEA }, // 0x000021C8
   { 0x0000, 0x0035, 0x0036, 0x0037, 0x6240, 0x3D7C, 0xC9B0, 0xFF0A }, // 0x000021D8
   { 0x0000, 0x0037, 0x0036, 0x0033, 0x0C75, 0x02C6, 0x80A4, 0xFEFD }, // 0x000021E8
   { 0x0000, 0x0037, 0x0033, 0x0032, 0xA2B3, 0xCE8C, 0xB7AA, 0x0004 }, // 0x000021F8
   { 0x0000, 0x0035, 0x0037, 0x0032, 0xC19F, 0x6FBC, 0x02BE, 0x0090 }, // 0x00002208
   { 0x0000, 0x0038, 0x0039, 0x003A, 0x5A3B, 0x0A07, 0xA5C5, 0xFE26 }, // 0x00002218
   { 0x0000, 0x0039, 0x003B, 0x003A, 0xDDFB, 0xF61D, 0x8501, 0xFF72 }, // 0x00002228
   { 0x0000, 0x003A, 0x003B, 0x003C, 0x8501, 0x09E3, 0xDDFB, 0x0113 }, // 0x00002238
   { 0x0000, 0x003C, 0x003D, 0x0038, 0x1EF1, 0x0A50, 0x7BC5, 0x006E }, // 0x00002248
   { 0x0000, 0x003C, 0x003B, 0x003D, 0xA5C5, 0xF5F9, 0x5A3B, 0x01AF }, // 0x00002258
   { 0x0000, 0x0038, 0x003D, 0x0039, 0x7BC5, 0xF5B0, 0x1EF1, 0xFEBB }, // 0x00002268
   { 0x0000, 0x003E, 0x003F, 0x0040, 0x7BC5, 0xF5B0, 0xE10F, 0xFE81 }, // 0x00002278
   { 0x0000, 0x003F, 0x0041, 0x0042, 0xA5C5, 0xF5F9, 0xA5C5, 0x0106 }, // 0x00002288
   { 0x0000, 0x0040, 0x003F, 0x0042, 0x1EF1, 0x0A50, 0x843B, 0xFF86 }, // 0x00002298
   { 0x0000, 0x0042, 0x0041, 0x0043, 0x8501, 0x09E3, 0x2205, 0x0153 }, // 0x000022A8
   { 0x0000, 0x0043, 0x0041, 0x003E, 0xDDFB, 0xF61D, 0x7AFF, 0x0058 }, // 0x000022B8
   { 0x0000, 0x0043, 0x003E, 0x0040, 0x5A3B, 0x0A07, 0x5A3B, 0xFECF }, // 0x000022C8
   { 0x0000, 0x0044, 0x0045, 0x0046, 0x8001, 0x0000, 0x0000, 0x017F }, // 0x000022D8
   { 0x0000, 0x0044, 0x0046, 0x0047, 0x8014, 0x03FF, 0x0199, 0x017B }, // 0x000022E8
   { 0x0000, 0x0048, 0x0049, 0x004A, 0x7FEF, 0xFC01, 0x0000, 0xFE82 }, // 0x000022F8
   { 0x0000, 0x0048, 0x004A, 0x004B, 0x7FFC, 0x0000, 0xFE66, 0xFE7B }, // 0x00002308
   { 0x0001, 0x004C, 0x004D, 0x004E, 0xA57E, 0x0000, 0x5A82, 0x019D }, // 0x00002318
   { 0x0001, 0x004C, 0x004E, 0x004F, 0xA57E, 0x0000, 0x5A82, 0x019D }, // 0x00002328
   { 0x0001, 0x004F, 0x004E, 0x0050, 0x5A82, 0x0000, 0x5A82, 0xFF77 }, // 0x00002338
   { 0x0001, 0x004F, 0x0050, 0x0051, 0x5A82, 0x0000, 0x5A82, 0xFF77 }, // 0x00002348
   { 0x0000, 0x0052, 0x0053, 0x0054, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00002358
   { 0x0001, 0x0053, 0x0055, 0x0056, 0xA57E, 0x0000, 0xA57E, 0x00F3 }, // 0x00002368
   { 0x0001, 0x0053, 0x0056, 0x0054, 0xA57E, 0x0000, 0xA57E, 0x00F3 }, // 0x00002378
   { 0x0001, 0x0052, 0x0057, 0x0055, 0x5A82, 0x0000, 0xA57E, 0xFECD }, // 0x00002388
   { 0x0001, 0x0052, 0x0055, 0x0053, 0x5A82, 0x0000, 0xA57E, 0xFECD }, // 0x00002398
   { 0x0000, 0x004C, 0x004F, 0x0051, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x000023A8
   { 0x0002, 0x0058, 0x0059, 0x005A, 0x0000, 0x0000, 0x8001, 0xFFDF }, // 0x000023B8
   { 0x0003, 0x005B, 0x0058, 0x005A, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x000023C8
   { 0x0003, 0x005B, 0x005A, 0x005C, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x000023D8
   { 0x0002, 0x005A, 0x0059, 0x005C, 0x8001, 0x0000, 0x0000, 0x0131 }, // 0x000023E8
   { 0x0002, 0x005D, 0x005E, 0x005F, 0x8001, 0x0000, 0x0000, 0x0131 }, // 0x000023F8
   { 0x0003, 0x005D, 0x005F, 0x0060, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00002408
   { 0x0003, 0x005D, 0x0060, 0x0061, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00002418
   { 0x0002, 0x005F, 0x005E, 0x0060, 0x0000, 0x0000, 0x7FFF, 0x00CF }, // 0x00002428
   { 0x0004, 0x0059, 0x0058, 0x0060, 0xBD3E, 0x6D35, 0x0000, 0x0114 }, // 0x00002438
   { 0x0004, 0x0059, 0x0060, 0x005E, 0xBD3E, 0x6D35, 0x0000, 0x0114 }, // 0x00002448
   { 0x0004, 0x0062, 0x0063, 0x0064, 0x4352, 0x6CDD, 0x0000, 0x0117 }, // 0x00002458
   { 0x0004, 0x0062, 0x0064, 0x0065, 0x4352, 0x6CDD, 0x0000, 0x0117 }, // 0x00002468
   { 0x0002, 0x0063, 0x0062, 0x0066, 0x0000, 0x0000, 0x7FFF, 0x00CF }, // 0x00002478
   { 0x0003, 0x0067, 0x0063, 0x0066, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00002488
   { 0x0003, 0x0067, 0x0066, 0x0068, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00002498
   { 0x0002, 0x0066, 0x0062, 0x0068, 0x7FFF, 0x0000, 0x0000, 0x0131 }, // 0x000024A8
   { 0x0002, 0x0069, 0x0065, 0x006A, 0x7FFF, 0x0000, 0x0000, 0x0131 }, // 0x000024B8
   { 0x0003, 0x0069, 0x006A, 0x0064, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x000024C8
   { 0x0003, 0x0069, 0x0064, 0x006B, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x000024D8
   { 0x0002, 0x006A, 0x0065, 0x0064, 0x0000, 0x0000, 0x8001, 0xFFDF }, // 0x000024E8
   { 0x0005, 0x006C, 0x006D, 0x006E, 0x1067, 0x7EF1, 0x0000, 0x0016 }, // 0x000024F8
   { 0x0005, 0x006C, 0x006E, 0x006F, 0x1067, 0x7EF1, 0x0000, 0x0016 }, // 0x00002508
   { 0x0005, 0x006F, 0x006E, 0x0070, 0xEF59, 0x7EE8, 0x0000, 0x004F }, // 0x00002518
   { 0x0005, 0x006F, 0x0070, 0x0071, 0xEF59, 0x7EE8, 0x0000, 0x004F }, // 0x00002528
   { 0x0005, 0x0071, 0x0070, 0x0072, 0x10A7, 0x7EE8, 0x0000, 0x004F }, // 0x00002538
   { 0x0005, 0x0071, 0x0072, 0x0073, 0x10A7, 0x7EE8, 0x0000, 0x004F }, // 0x00002548
   { 0x0005, 0x0073, 0x0072, 0x0074, 0xEF99, 0x7EF1, 0x0000, 0x0016 }, // 0x00002558
   { 0x0005, 0x0073, 0x0074, 0x0075, 0xEF99, 0x7EF1, 0x0000, 0x0016 }, // 0x00002568

}; 

Vec3s gValleyObjects2Col_vtx_00002578[] = {
   { -203, -46, -17 }, // 0x00002578
   { -304, -219, -5 }, // 0x0000257E
   { -312, -214, -24 }, // 0x00002584
   { -221, -36, -19 }, // 0x0000258A
   { -322, -208, -7 }, // 0x00002590
   { -213, -40, 0 }, // 0x00002596
   { -312, -214, -216 }, // 0x0000259C
   { -304, -219, -235 }, // 0x000025A2
   { -203, -46, -223 }, // 0x000025A8
   { -221, -36, -221 }, // 0x000025AE
   { -322, -208, -233 }, // 0x000025B4
   { -213, -40, -240 }, // 0x000025BA
   { -378, 216, -270 }, // 0x000025C0
   { -405, 36, -263 }, // 0x000025C6
   { -413, 216, -235 }, // 0x000025CC
   { -358, 36, -250 }, // 0x000025D2
   { -365, 216, -223 }, // 0x000025D8
   { -393, 36, -215 }, // 0x000025DE
   { -413, 216, -5 }, // 0x000025E4
   { -393, 36, -25 }, // 0x000025EA
   { -405, 36, 23 }, // 0x000025F0
   { -365, 216, -17 }, // 0x000025F6
   { -358, 36, 10 }, // 0x000025FC
   { -378, 216, 30 }, // 0x00002602
   { -384, 187, -80 }, // 0x00002608
   { -383, 155, -80 }, // 0x0000260E
   { -383, 155, -160 }, // 0x00002614
   { -383, 187, -160 }, // 0x0000261A
   { -387, 187, -160 }, // 0x00002620
   { -387, 155, -160 }, // 0x00002626
   { -387, 155, -80 }, // 0x0000262C
   { -388, 187, -80 }, // 0x00002632
   { -389, 12, -195 }, // 0x00002638
   { -389, -108, -195 }, // 0x0000263E
   { -377, -108, -207 }, // 0x00002644
   { -377, 12, -207 }, // 0x0000264A
   { -401, 12, -207 }, // 0x00002650
   { -401, -108, -207 }, // 0x00002656
   { -377, 12, -33 }, // 0x0000265C
   { -389, 12, -45 }, // 0x00002662
   { -401, 12, -33 }, // 0x00002668
   { -377, -108, -33 }, // 0x0000266E
   { -389, -108, -45 }, // 0x00002674
   { -401, -108, -33 }, // 0x0000267A
   { 312, -214, -24 }, // 0x00002680
   { 304, -219, -5 }, // 0x00002686
   { 203, -46, -17 }, // 0x0000268C
   { 221, -36, -19 }, // 0x00002692
   { 322, -208, -7 }, // 0x00002698
   { 213, -40, 0 }, // 0x0000269E
   { 203, -46, -223 }, // 0x000026A4
   { 304, -219, -235 }, // 0x000026AA
   { 312, -214, -216 }, // 0x000026B0
   { 221, -36, -221 }, // 0x000026B6
   { 322, -208, -233 }, // 0x000026BC
   { 213, -40, -240 }, // 0x000026C2
   { 413, 216, -235 }, // 0x000026C8
   { 405, 36, -263 }, // 0x000026CE
   { 378, 216, -270 }, // 0x000026D4
   { 358, 36, -250 }, // 0x000026DA
   { 365, 216, -223 }, // 0x000026E0
   { 393, 36, -215 }, // 0x000026E6
   { 405, 36, 23 }, // 0x000026EC
   { 393, 36, -25 }, // 0x000026F2
   { 413, 216, -5 }, // 0x000026F8
   { 358, 36, 10 }, // 0x000026FE
   { 365, 216, -17 }, // 0x00002704
   { 378, 216, 30 }, // 0x0000270A
   { 383, 187, -160 }, // 0x00002710
   { 383, 155, -160 }, // 0x00002716
   { 383, 155, -80 }, // 0x0000271C
   { 384, 187, -80 }, // 0x00002722
   { 388, 187, -80 }, // 0x00002728
   { 387, 155, -80 }, // 0x0000272E
   { 387, 155, -160 }, // 0x00002734
   { 387, 187, -160 }, // 0x0000273A
   { 377, 12, -207 }, // 0x00002740
   { 377, -108, -207 }, // 0x00002746
   { 389, -108, -195 }, // 0x0000274C
   { 389, 12, -195 }, // 0x00002752
   { 401, -108, -207 }, // 0x00002758
   { 401, 12, -207 }, // 0x0000275E
   { 401, 12, -33 }, // 0x00002764
   { 389, 12, -45 }, // 0x0000276A
   { 377, 12, -33 }, // 0x00002770
   { 389, -108, -45 }, // 0x00002776
   { 377, -108, -33 }, // 0x0000277C
   { 401, -108, -33 }, // 0x00002782
   { 588, 36, -33 }, // 0x00002788
   { 305, -137, -33 }, // 0x0000278E
   { 305, 36, -33 }, // 0x00002794
   { 588, 36, 140 }, // 0x0000279A
   { 305, 36, 140 }, // 0x000027A0
   { 305, 36, -380 }, // 0x000027A6
   { 305, -137, -207 }, // 0x000027AC
   { 305, 36, -207 }, // 0x000027B2
   { 588, 36, -207 }, // 0x000027B8
   { 588, 36, -380 }, // 0x000027BE
   { -305, -139, -207 }, // 0x000027C4
   { -588, 36, -207 }, // 0x000027CA
   { -588, 36, -33 }, // 0x000027D0
   { -305, -139, -33 }, // 0x000027D6
   { -305, 36, -207 }, // 0x000027DC
   { -588, 36, -380 }, // 0x000027E2
   { -305, 36, -380 }, // 0x000027E8
   { -305, 36, 140 }, // 0x000027EE
   { -305, 36, -33 }, // 0x000027F4
   { -588, 36, 140 }, // 0x000027FA
   { 399, -74, -20 }, // 0x00002800
   { 399, -74, -220 }, // 0x00002806
   { 221, -51, -220 }, // 0x0000280C
   { 221, -51, -20 }, // 0x00002812
   { 0, -80, -220 }, // 0x00002818
   { 0, -80, -20 }, // 0x0000281E
   { -221, -51, -220 }, // 0x00002824
   { -221, -51, -20 }, // 0x0000282A
   { -399, -74, -220 }, // 0x00002830
   { -399, -74, -20 }, // 0x00002836
}; 

CollisionHeader gValleyObjects2Col = { -588, -219, -380, 588, 216, 140, 118, gValleyObjects2Col_vtx_00002578, 108, gValleyObjects2Col_polygons_00001EB8, gValleyObjects2Col_polygonTypes_00001E88, &gValleyObjects2Col_camDataList_00001E80, 0, 0 }; 

static u32 pad2868 = 0;
static u32 pad286C = 0;

static Vtx object_spot09_objVtx_002870[3] = {
    VTX(-413, 216, -235, 529, -63, 154, 57, 27, 255),
    VTX(-365, 216, -223, 17, 824, 74, 57, 74, 255),
    VTX(-378, 216, -270, 1041, 824, 27, 57, 154, 255),
}; 

static Vtx object_spot09_objVtx_0028A0[8] = {
    VTX(-203, -46, -17, 3508, -825, 110, 0, 208, 255),
    VTX(-304, -219, -5, 4048, 4295, 85, 205, 66, 255),
    VTX(-312, -214, -24, 2968, 4295, 5, 251, 137, 255),
    VTX(-221, -36, -19, 2429, -825, 207, 92, 197, 255),
    VTX(-322, -208, -7, 1889, 4295, 163, 52, 53, 255),
    VTX(-213, -40, 0, 1349, -825, 22, 51, 106, 255),
    VTX(-304, -219, -5, 810, 4295, 85, 205, 66, 255),
    VTX(-203, -46, -17, 270, -825, 110, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_002920[3] = {
    VTX(-221, -36, -19, 421, -266, 207, 92, 197, 255),
    VTX(-213, -40, 0, 1301, 851, 22, 51, 106, 255),
    VTX(-203, -46, -17, -209, 981, 110, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_002950[8] = {
    VTX(-312, -214, -216, 2968, 4295, 5, 251, 119, 255),
    VTX(-304, -219, -235, 4048, 4295, 85, 205, 190, 255),
    VTX(-203, -46, -223, 3508, -825, 110, 0, 48, 255),
    VTX(-221, -36, -221, 2429, -825, 207, 92, 59, 255),
    VTX(-322, -208, -233, 1889, 4295, 163, 52, 203, 255),
    VTX(-213, -40, -240, 1349, -825, 22, 51, 150, 255),
    VTX(-304, -219, -235, 810, 4295, 85, 205, 190, 255),
    VTX(-203, -46, -223, 270, -825, 110, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_0029D0[3] = {
    VTX(-203, -46, -223, -209, 981, 110, 0, 48, 255),
    VTX(-213, -40, -240, 1301, 851, 22, 51, 150, 255),
    VTX(-221, -36, -221, 421, -266, 207, 92, 59, 255),
}; 

static Vtx object_spot09_objVtx_002A00[16] = {
    VTX(-378, 216, -270, 2338, 0, 27, 57, 154, 255),
    VTX(-405, 36, -263, 1846, 3570, 172, 251, 172, 255),
    VTX(-413, 216, -235, 1354, 0, 154, 57, 27, 255),
    VTX(-358, 36, -250, 2830, 3570, 115, 251, 225, 255),
    VTX(-365, 216, -223, 3322, 0, 74, 57, 74, 255),
    VTX(-393, 36, -215, 861, 3570, 225, 251, 115, 255),
    VTX(-365, 216, -223, 369, 0, 74, 57, 74, 255),
    VTX(-393, 36, -215, 3815, 3570, 225, 251, 115, 255),
    VTX(-413, 216, -5, 1354, 0, 154, 57, 229, 255),
    VTX(-393, 36, -25, 861, 3570, 225, 251, 141, 255),
    VTX(-405, 36, 23, 1846, 3570, 172, 251, 84, 255),
    VTX(-365, 216, -17, 3322, 0, 74, 57, 182, 255),
    VTX(-358, 36, 10, 2830, 3570, 115, 251, 31, 255),
    VTX(-393, 36, -25, 3815, 3570, 225, 251, 141, 255),
    VTX(-365, 216, -17, 369, 0, 74, 57, 182, 255),
    VTX(-378, 216, 30, 2338, 0, 27, 57, 102, 255),
}; 

static Vtx object_spot09_objVtx_002B00[8] = {
    VTX(-384, 187, -80, 0, 0, 119, 1, 1, 255),
    VTX(-383, 155, -80, 1024, 0, 119, 1, 1, 255),
    VTX(-383, 155, -160, 1024, 1024, 119, 1, 1, 255),
    VTX(-383, 187, -160, 0, 1024, 119, 1, 1, 255),
    VTX(-387, 187, -160, 1024, 0, 137, 255, 255, 255),
    VTX(-387, 155, -160, 1024, 1024, 137, 255, 255, 255),
    VTX(-387, 155, -80, 0, 1024, 137, 255, 255, 255),
    VTX(-388, 187, -80, 0, 0, 137, 255, 255, 255),
}; 

static Vtx object_spot09_objVtx_002B80[6] = {
    VTX(-385, 192, -120, 307, 1, 143, 218, 255, 255),
    VTX(-385, 204, -227, -7746, 0, 143, 218, 251, 255),
    VTX(-385, 196, -226, -7696, 1024, 142, 37, 3, 255),
    VTX(-385, 184, -120, 350, 1023, 142, 37, 255, 255),
    VTX(-386, 196, -13, 8423, 1023, 142, 37, 251, 255),
    VTX(-386, 204, -13, 8473, -1, 143, 218, 3, 255),
}; 

static Vtx object_spot09_objVtx_002BE0[6] = {
    VTX(-389, 12, -195, 523, 3277, 0, 69, 98, 255),
    VTX(-389, -108, -195, 523, -819, 0, 0, 120, 255),
    VTX(-377, -108, -207, 1045, -819, 84, 0, 84, 255),
    VTX(-377, 12, -207, 1045, 3277, 60, 84, 60, 255),
    VTX(-401, 12, -207, 0, 3277, 196, 84, 60, 255),
    VTX(-401, -108, -207, 0, -819, 172, 0, 84, 255),
}; 

static Vtx object_spot09_objVtx_002C40[6] = {
    VTX(-401, 12, -207, 144, 511, 196, 84, 60, 255),
    VTX(-389, 12, -195, -472, 1023, 0, 69, 98, 255),
    VTX(-377, 12, -207, -1089, 511, 60, 84, 60, 255),
    VTX(-377, 12, -33, 144, 511, 60, 84, 196, 255),
    VTX(-389, 12, -45, -472, 1023, 0, 69, 158, 255),
    VTX(-401, 12, -33, -1089, 511, 196, 84, 196, 255),
}; 

static Vtx object_spot09_objVtx_002CA0[12] = {
    VTX(-377, 12, -33, 0, 3277, 60, 84, 196, 255),
    VTX(-377, -108, -33, 0, -819, 84, 0, 172, 255),
    VTX(-389, -108, -45, 523, -819, 0, 0, 136, 255),
    VTX(-389, 12, -45, 523, 3277, 0, 69, 158, 255),
    VTX(-401, -108, -33, 1045, -819, 172, 0, 172, 255),
    VTX(-401, 12, -33, 1045, 3277, 196, 84, 196, 255),
    VTX(-220, -54, -221, 704, 3777, 59, 104, 0, 255),
    VTX(-220, -54, -19, 704, 319, 59, 104, 0, 255),
    VTX(-223, -76, -19, 0, 316, 119, 241, 0, 255),
    VTX(-223, -76, -221, 0, 3780, 119, 241, 0, 255),
    VTX(-237, -68, -220, 207, 3762, 182, 94, 0, 255),
    VTX(-237, -68, -20, 207, 334, 182, 94, 0, 255),
}; 

static Vtx object_spot09_objVtx_002D60[3] = {
    VTX(-413, 216, -5, 529, -63, 154, 57, 229, 255),
    VTX(-378, 216, 30, 17, 824, 27, 57, 102, 255),
    VTX(-365, 216, -17, 1041, 824, 74, 57, 182, 255),
}; 

static Vtx object_spot09_objVtx_002D90[6] = {
    VTX(365, 216, -223, 529, -63, 182, 57, 74, 255),
    VTX(413, 216, -235, 17, 824, 102, 57, 27, 255),
    VTX(378, 216, -270, 1041, 824, 229, 57, 154, 255),
    VTX(378, 216, 30, 529, -63, 229, 57, 102, 255),
    VTX(413, 216, -5, 17, 824, 102, 57, 229, 255),
    VTX(365, 216, -17, 1041, 824, 182, 57, 182, 255),
}; 

static Vtx object_spot09_objVtx_002DF0[8] = {
    VTX(312, -214, -24, 2968, 4336, 251, 251, 137, 255),
    VTX(304, -219, -5, 4048, 4336, 171, 205, 66, 255),
    VTX(203, -46, -17, 3508, -784, 146, 0, 208, 255),
    VTX(221, -36, -19, 2429, -784, 49, 92, 197, 255),
    VTX(322, -208, -7, 1889, 4336, 93, 52, 53, 255),
    VTX(213, -40, 0, 1349, -784, 234, 51, 106, 255),
    VTX(304, -219, -5, 810, 4336, 171, 205, 66, 255),
    VTX(203, -46, -17, 270, -784, 146, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_002E70[3] = {
    VTX(203, -46, -17, -209, 981, 146, 0, 208, 255),
    VTX(213, -40, 0, 1301, 851, 234, 51, 106, 255),
    VTX(221, -36, -19, 421, -266, 49, 92, 197, 255),
}; 

static Vtx object_spot09_objVtx_002EA0[8] = {
    VTX(203, -46, -223, 3508, -784, 146, 0, 48, 255),
    VTX(304, -219, -235, 4048, 4336, 171, 205, 190, 255),
    VTX(312, -214, -216, 2968, 4336, 251, 251, 119, 255),
    VTX(221, -36, -221, 2429, -784, 49, 92, 59, 255),
    VTX(322, -208, -233, 1889, 4336, 93, 52, 203, 255),
    VTX(213, -40, -240, 1349, -784, 234, 51, 150, 255),
    VTX(304, -219, -235, 810, 4336, 171, 205, 190, 255),
    VTX(203, -46, -223, 270, -784, 146, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_002F20[3] = {
    VTX(221, -36, -221, 421, -266, 49, 92, 59, 255),
    VTX(213, -40, -240, 1301, 851, 234, 51, 150, 255),
    VTX(203, -46, -223, -209, 981, 146, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_002F50[16] = {
    VTX(413, 216, -235, 1354, 0, 102, 57, 27, 255),
    VTX(405, 36, -263, 1846, 3570, 84, 251, 172, 255),
    VTX(378, 216, -270, 2338, 0, 229, 57, 154, 255),
    VTX(358, 36, -250, 2830, 3570, 141, 251, 225, 255),
    VTX(365, 216, -223, 3322, 0, 182, 57, 74, 255),
    VTX(365, 216, -223, 369, 0, 182, 57, 74, 255),
    VTX(393, 36, -215, 861, 3570, 31, 251, 115, 255),
    VTX(393, 36, -215, 3815, 3570, 31, 251, 115, 255),
    VTX(405, 36, 23, 1846, 3570, 84, 251, 84, 255),
    VTX(393, 36, -25, 861, 3570, 31, 251, 141, 255),
    VTX(413, 216, -5, 1354, 0, 102, 57, 229, 255),
    VTX(393, 36, -25, 3815, 3570, 31, 251, 141, 255),
    VTX(358, 36, 10, 2830, 3570, 141, 251, 31, 255),
    VTX(365, 216, -17, 3322, 0, 182, 57, 182, 255),
    VTX(365, 216, -17, 369, 0, 182, 57, 182, 255),
    VTX(378, 216, 30, 2338, 0, 229, 57, 102, 255),
}; 

static Vtx object_spot09_objVtx_003050[8] = {
    VTX(383, 187, -160, 0, 1024, 137, 1, 1, 255),
    VTX(383, 155, -160, 1024, 1024, 137, 1, 1, 255),
    VTX(383, 155, -80, 1024, 0, 137, 1, 1, 255),
    VTX(384, 187, -80, 0, 0, 137, 1, 1, 255),
    VTX(388, 187, -80, 0, 0, 119, 255, 255, 255),
    VTX(387, 155, -80, 0, 1024, 119, 255, 255, 255),
    VTX(387, 155, -160, 1024, 1024, 119, 255, 255, 255),
    VTX(387, 187, -160, 1024, 0, 119, 255, 255, 255),
}; 

static Vtx object_spot09_objVtx_0030D0[6] = {
    VTX(385, 184, -120, 350, 1023, 114, 37, 255, 255),
    VTX(385, 196, -226, -7696, 1024, 114, 37, 3, 255),
    VTX(385, 204, -227, -7746, 0, 113, 218, 251, 255),
    VTX(385, 192, -120, 307, 1, 113, 218, 255, 255),
    VTX(386, 204, -13, 8473, -1, 113, 218, 3, 255),
    VTX(386, 196, -13, 8423, 1023, 114, 37, 251, 255),
}; 

static Vtx object_spot09_objVtx_003130[6] = {
    VTX(377, 12, -207, 1045, 3277, 196, 84, 60, 255),
    VTX(377, -108, -207, 1045, -819, 172, 0, 84, 255),
    VTX(389, -108, -195, 523, -819, 0, 0, 120, 255),
    VTX(389, 12, -195, 523, 3277, 0, 69, 98, 255),
    VTX(401, -108, -207, 0, -819, 84, 0, 84, 255),
    VTX(401, 12, -207, 0, 3277, 60, 84, 60, 255),
}; 

static Vtx object_spot09_objVtx_003190[3] = {
    VTX(401, 12, -33, -1089, 511, 60, 84, 196, 255),
    VTX(389, 12, -45, -472, 1023, 0, 69, 158, 255),
    VTX(377, 12, -33, 144, 511, 196, 84, 196, 255),
}; 

static Vtx object_spot09_objVtx_0031C0[12] = {
    VTX(389, 12, -45, 523, 3277, 0, 69, 158, 255),
    VTX(389, -108, -45, 523, -819, 0, 0, 136, 255),
    VTX(377, -108, -33, 0, -819, 172, 0, 172, 255),
    VTX(377, 12, -33, 0, 3277, 196, 84, 196, 255),
    VTX(401, 12, -33, 1045, 3277, 60, 84, 196, 255),
    VTX(401, -108, -33, 1045, -819, 84, 0, 172, 255),
    VTX(223, -76, -221, 0, 316, 137, 241, 0, 255),
    VTX(223, -76, -19, 0, 3780, 137, 241, 0, 255),
    VTX(220, -54, -19, 801, 3777, 197, 104, 0, 255),
    VTX(220, -54, -221, 801, 319, 197, 104, 0, 255),
    VTX(237, -68, -20, 235, 3762, 74, 94, 0, 255),
    VTX(237, -68, -220, 235, 334, 74, 94, 0, 255),
}; 

static Vtx object_spot09_objVtx_003280[3] = {
    VTX(377, 12, -207, -1089, 511, 196, 84, 60, 255),
    VTX(389, 12, -195, -472, 1023, 0, 69, 98, 255),
    VTX(401, 12, -207, 144, 511, 60, 84, 60, 255),
}; 

static Vtx object_spot09_objVtx_0032B0[4] = {
    VTX(588, 36, -33, 2048, 9, 227, 102, 201, 255),
    VTX(415, -74, -33, 816, 1075, 212, 72, 171, 255),
    VTX(305, 36, -33, 0, 9, 207, 49, 158, 255),
    VTX(305, -137, -33, 40, 1752, 146, 32, 220, 255),
}; 

static Vtx object_spot09_objVtx_0032F0[4] = {
    VTX(588, 36, 140, 1024, 2048, 0, 119, 4, 255),
    VTX(588, 36, -33, 7, 2048, 227, 102, 201, 255),
    VTX(305, 36, -33, 7, 0, 207, 49, 158, 255),
    VTX(305, 36, 140, 1024, 0, 171, 83, 4, 255),
}; 

static Vtx object_spot09_objVtx_003330[6] = {
    VTX(305, 36, -33, 2048, 0, 207, 49, 158, 255),
    VTX(305, -137, -33, 2048, 1003, 146, 32, 220, 255),
    VTX(305, 36, 140, 0, 0, 171, 83, 4, 255),
    VTX(305, 36, -380, 0, 0, 171, 83, 253, 255),
    VTX(305, -137, -207, 2048, 1003, 146, 32, 36, 255),
    VTX(305, 36, -207, 2048, 0, 207, 49, 98, 255),
}; 

static Vtx object_spot09_objVtx_003390[4] = {
    VTX(305, 36, -380, 1024, 0, 171, 83, 253, 255),
    VTX(305, 36, -207, 7, 0, 207, 49, 98, 255),
    VTX(588, 36, -207, 7, 2048, 227, 102, 55, 255),
    VTX(588, 36, -380, 1024, 2048, 254, 119, 1, 255),
}; 

static Vtx object_spot09_objVtx_0033D0[4] = {
    VTX(305, 36, -207, 0, 9, 207, 49, 98, 255),
    VTX(305, -137, -207, 40, 1752, 146, 32, 36, 255),
    VTX(415, -74, -207, 816, 1075, 212, 72, 85, 255),
    VTX(588, 36, -207, 2048, 9, 227, 102, 55, 255),
}; 

static Vtx object_spot09_objVtx_003410[4] = {
    VTX(415, -74, -33, 1024, 1024, 212, 72, 171, 255),
    VTX(588, 36, -33, 1024, -1045, 227, 102, 201, 255),
    VTX(588, 36, -207, 0, -1045, 227, 102, 55, 255),
    VTX(415, -74, -207, 0, 1024, 212, 72, 85, 255),
}; 

static Vtx object_spot09_objVtx_003450[4] = {
    VTX(305, -137, -207, 0, 1024, 146, 32, 36, 255),
    VTX(305, -137, -33, 1024, 1024, 146, 32, 220, 255),
    VTX(415, -74, -33, 1024, 0, 212, 72, 171, 255),
    VTX(415, -74, -207, 0, 0, 212, 72, 85, 255),
}; 

static Vtx object_spot09_objVtx_003490[4] = {
    VTX(-415, -74, -207, 1024, 1024, 44, 72, 85, 255),
    VTX(-588, 36, -207, 1024, -1055, 29, 102, 55, 255),
    VTX(-588, 36, -33, 0, -1055, 29, 102, 201, 255),
    VTX(-415, -74, -33, 0, 1024, 44, 72, 171, 255),
}; 

static Vtx object_spot09_objVtx_0034D0[4] = {
    VTX(-415, -74, -207, 0, 0, 44, 72, 85, 255),
    VTX(-415, -74, -33, 1024, 0, 44, 72, 171, 255),
    VTX(-305, -139, -33, 1024, 1024, 111, 27, 220, 255),
    VTX(-305, -139, -207, 0, 1024, 112, 24, 34, 255),
}; 

static Vtx object_spot09_objVtx_003510[4] = {
    VTX(-588, 36, -207, 2048, 9, 29, 102, 55, 255),
    VTX(-415, -74, -207, 816, 1075, 44, 72, 85, 255),
    VTX(-305, 36, -207, 0, 9, 49, 49, 98, 255),
    VTX(-305, -139, -207, 40, 1752, 112, 24, 34, 255),
}; 

static Vtx object_spot09_objVtx_003550[4] = {
    VTX(-588, 36, -380, 1024, 2048, 255, 119, 254, 255),
    VTX(-588, 36, -207, 7, 2048, 29, 102, 55, 255),
    VTX(-305, 36, -207, 7, 0, 49, 49, 98, 255),
    VTX(-305, 36, -380, 1024, 0, 85, 84, 253, 255),
}; 

static Vtx object_spot09_objVtx_003590[6] = {
    VTX(-305, 36, -207, 2048, 0, 49, 49, 98, 255),
    VTX(-305, -139, -207, 2048, 1003, 112, 24, 34, 255),
    VTX(-305, 36, -380, 0, 0, 85, 84, 253, 255),
    VTX(-305, 36, 140, 0, 0, 85, 83, 4, 255),
    VTX(-305, -139, -33, 2048, 1003, 111, 27, 220, 255),
    VTX(-305, 36, -33, 2048, 0, 49, 49, 158, 255),
}; 

static Vtx object_spot09_objVtx_0035F0[4] = {
    VTX(-305, 36, 140, 1024, 0, 85, 83, 4, 255),
    VTX(-305, 36, -33, 7, 0, 49, 49, 158, 255),
    VTX(-588, 36, -33, 7, 2048, 29, 102, 201, 255),
    VTX(-588, 36, 140, 1024, 2048, 1, 119, 3, 255),
}; 

static Vtx object_spot09_objVtx_003630[4] = {
    VTX(-305, 36, -33, 0, 9, 49, 49, 158, 255),
    VTX(-305, -139, -33, 40, 1752, 111, 27, 220, 255),
    VTX(-415, -74, -33, 816, 1075, 44, 72, 171, 255),
    VTX(-588, 36, -33, 2048, 9, 29, 102, 201, 255),
}; 

static Vtx object_spot09_objVtx_003670[12] = {
    VTX(399, -74, -20, 2048, -15434, 16, 118, 0, 255),
    VTX(399, -74, -220, -2048, -15434, 16, 118, 0, 255),
    VTX(240, -51, -220, -2048, -12309, 8, 119, 0, 255),
    VTX(240, -51, -20, 2048, -12309, 8, 119, 0, 255),
    VTX(214, -51, -220, -2048, -11762, 172, 84, 0, 255),
    VTX(214, -51, -20, 2048, -11762, 172, 84, 0, 255),
    VTX(-244, -51, -220, -2048, -1984, 248, 119, 0, 255),
    VTX(-399, -74, -220, -2048, 1108, 240, 118, 0, 255),
    VTX(-399, -74, -20, 2048, 1108, 240, 118, 0, 255),
    VTX(-244, -51, -20, 2048, -1984, 248, 119, 0, 255),
    VTX(-215, -51, -20, 2048, -2564, 84, 84, 0, 255),
    VTX(-215, -51, -220, -2048, -2564, 84, 84, 0, 255),
}; 

static Vtx object_spot09_objVtx_003730[3] = {
    VTX(-215, -447, -42, 512, 3328, 120, 0, 0, 255),
    VTX(-215, -291, -107, -819, 0, 120, 0, 0, 255),
    VTX(-215, -291, 23, 1843, 0, 120, 0, 0, 255),
}; 

static Vtx object_spot09_objVtx_003760[4] = {
    VTX(-215, -254, -119, 0, 0, 120, 0, 0, 255),
    VTX(-215, -240, -20, 2048, 0, 120, 0, 0, 255),
    VTX(-215, -288, -14, 2048, 1024, 120, 0, 0, 255),
    VTX(-215, -301, -113, 0, 1024, 120, 0, 0, 255),
}; 

static Vtx object_spot09_objVtx_0037A0[4] = {
    VTX(-215, -243, -20, 2048, 1024, 120, 0, 0, 255),
    VTX(-215, -243, -220, -2048, 1024, 120, 0, 0, 255),
    VTX(-215, -51, -220, -2048, -3072, 84, 84, 0, 255),
    VTX(-215, -51, -20, 2048, -3072, 84, 84, 0, 255),
}; 

static Vtx object_spot09_objVtx_0037E0[4] = {
    VTX(-215, -258, -122, 0, 0, 120, 0, 0, 255),
    VTX(-215, -305, -130, 0, 1024, 120, 0, 0, 255),
    VTX(-215, -287, -228, 2048, 1024, 120, 0, 0, 255),
    VTX(-215, -240, -220, 2048, 0, 120, 0, 0, 255),
}; 

static Vtx object_spot09_objVtx_003820[9] = {
    VTX(-215, -289, -263, 1843, 0, 120, 0, 0, 255),
    VTX(-215, -294, -133, -819, 0, 120, 0, 0, 255),
    VTX(-215, -448, -204, 512, 3328, 120, 0, 0, 255),
    VTX(214, -423, -204, 512, 3328, 136, 0, 0, 255),
    VTX(214, -270, -133, -819, 0, 136, 0, 0, 255),
    VTX(214, -265, -263, 1843, 0, 136, 0, 0, 255),
    VTX(214, -266, 23, 1843, 0, 136, 0, 0, 255),
    VTX(214, -266, -107, -819, 0, 136, 0, 0, 255),
    VTX(214, -422, -42, 512, 3328, 136, 0, 0, 255),
}; 

static Vtx object_spot09_objVtx_0038B0[8] = {
    VTX(214, -277, -113, 0, 1024, 136, 0, 0, 255),
    VTX(214, -263, -14, 2048, 1024, 136, 0, 0, 255),
    VTX(214, -215, -20, 2048, 0, 136, 0, 0, 255),
    VTX(214, -229, -119, 0, 0, 136, 0, 0, 255),
    VTX(214, -215, -220, 2048, 0, 136, 0, 0, 255),
    VTX(214, -262, -228, 2048, 1024, 136, 0, 0, 255),
    VTX(214, -280, -130, 0, 1024, 136, 0, 0, 255),
    VTX(214, -233, -121, 0, 0, 136, 0, 0, 255),
}; 

static Vtx object_spot09_objVtx_003930[4] = {
    VTX(214, -51, -20, 2048, -6144, 172, 84, 0, 255),
    VTX(214, -51, -220, -2048, -6144, 172, 84, 0, 255),
    VTX(214, -219, -220, -2048, -2579, 136, 0, 0, 255),
    VTX(214, -219, -20, 2048, -2579, 136, 0, 0, 255),
}; 

Gfx gValleyBrokenBridgeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_spot09_objVtx_002870[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_0028A0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_002920[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_002950[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_0029D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_002A00[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 3, 4, 0, 1, 5, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 9, 8, 0, 15, 12, 11, 0),
    gsSP2Triangles(10, 12, 15, 0, 8, 10, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00B490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_002B00[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00A490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_002B80[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_002BE0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_002C40[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_002CA0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 7, 0, 10, 7, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_002D60[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&object_spot09_objVtx_002D90[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_002DF0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_002E70[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_002EA0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_002F20[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_002F50[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(4, 3, 7, 0, 0, 6, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 9, 14, 0, 13, 12, 15, 0),
    gsSP2Triangles(15, 12, 8, 0, 15, 8, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00B490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_003050[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00A490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_0030D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_003130[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_003190[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_0031C0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_003280[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_0032B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_0032F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00EC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_003330[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_003390[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_0033D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008C90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_003410[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00FC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPVertex(&object_spot09_objVtx_003450[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008C90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_003490[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00FC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPVertex(&object_spot09_objVtx_0034D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_003510[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_003550[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00EC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_003590[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_0035F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_003630[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 209, 178, 255),
    gsSPVertex(&object_spot09_objVtx_003670[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 5, 0, 2, 5, 3, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 6, 0, 10, 6, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_011090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_003730[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_003760[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_0037A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_0037E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_011090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_003820[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_010090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_0038B0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_012090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_003930[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_004988[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gValleyObjects1Col_camDataList_00004990[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gValleyObjects1Col_polygonTypes_00004998[] = {
   0x80000000, 0x000207CA,
   0x80000000, 0x000007C2,
   0x2C000000, 0x000007C2,
   0x00000000, 0x000007C2,
   0x2C000000, 0x000007C9,
   0x00000000, 0x000007C9,
   0x00800000, 0x000207C9,
}; 

CollisionPoly gValleyObjects1Col_polygons_000049D0[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x613E, 0xC348, 0xC714, 0x007D }, // 0x000049D0
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0C91, 0xFD27, 0x80A7, 0x0002 }, // 0x000049E0
   { 0x0000, 0x0002, 0x0004, 0x0003, 0xA2D2, 0x31AB, 0xB7A8, 0xFF62 }, // 0x000049F0
   { 0x0000, 0x0003, 0x0004, 0x0005, 0x9DC0, 0x3D7C, 0x3650, 0xFF70 }, // 0x00004A00
   { 0x0000, 0x0005, 0x0004, 0x0001, 0xF38B, 0x02C6, 0x7F5C, 0xFFEC }, // 0x00004A10
   { 0x0000, 0x0005, 0x0001, 0x0000, 0x5D4D, 0xCE8C, 0x4856, 0x008C }, // 0x00004A20
   { 0x0000, 0x0003, 0x0005, 0x0000, 0x3E61, 0x6FBC, 0xFD42, 0x008B }, // 0x00004A30
   { 0x0000, 0x0006, 0x0007, 0x0008, 0x613E, 0xC348, 0x38EC, 0x00E8 }, // 0x00004A40
   { 0x0000, 0x0009, 0x0006, 0x0008, 0x0C91, 0xFD27, 0x7F59, 0x00F1 }, // 0x00004A50
   { 0x0000, 0x0009, 0x000A, 0x0006, 0xA2D2, 0x31AB, 0x4858, 0xFFEA }, // 0x00004A60
   { 0x0000, 0x000B, 0x000A, 0x0009, 0x9DC0, 0x3D7C, 0xC9B0, 0xFF0A }, // 0x00004A70
   { 0x0000, 0x0007, 0x000A, 0x000B, 0xF38B, 0x02C6, 0x80A4, 0xFEFD }, // 0x00004A80
   { 0x0000, 0x0008, 0x0007, 0x000B, 0x5D4D, 0xCE8C, 0xB7AA, 0x0004 }, // 0x00004A90
   { 0x0000, 0x0008, 0x000B, 0x0009, 0x3E61, 0x6FBC, 0x02BE, 0x0090 }, // 0x00004AA0
   { 0x0000, 0x000C, 0x000D, 0x000E, 0xA5C5, 0x0A07, 0xA5C5, 0xFE26 }, // 0x00004AB0
   { 0x0000, 0x000C, 0x000F, 0x000D, 0x2205, 0xF61D, 0x8501, 0xFF72 }, // 0x00004AC0
   { 0x0000, 0x0010, 0x000F, 0x000C, 0x7AFF, 0x09E3, 0xDDFB, 0x0113 }, // 0x00004AD0
   { 0x0000, 0x000E, 0x0011, 0x0010, 0xE10F, 0x0A50, 0x7BC5, 0x006E }, // 0x00004AE0
   { 0x0000, 0x0011, 0x000F, 0x0010, 0x5A3B, 0xF5F9, 0x5A3B, 0x01AF }, // 0x00004AF0
   { 0x0000, 0x000D, 0x0011, 0x000E, 0x843B, 0xF5B0, 0x1EF1, 0xFEBB }, // 0x00004B00
   { 0x0000, 0x0012, 0x0013, 0x0014, 0x843B, 0xF5B0, 0xE10F, 0xFE81 }, // 0x00004B10
   { 0x0000, 0x0015, 0x0016, 0x0013, 0x5A3B, 0xF5F9, 0xA5C5, 0x0106 }, // 0x00004B20
   { 0x0000, 0x0015, 0x0013, 0x0012, 0xE10F, 0x0A50, 0x843B, 0xFF86 }, // 0x00004B30
   { 0x0000, 0x0017, 0x0016, 0x0015, 0x7AFF, 0x09E3, 0x2205, 0x0153 }, // 0x00004B40
   { 0x0000, 0x0014, 0x0016, 0x0017, 0x2205, 0xF61D, 0x7AFF, 0x0058 }, // 0x00004B50
   { 0x0000, 0x0012, 0x0014, 0x0017, 0xA5C5, 0x0A07, 0x5A3B, 0xFECF }, // 0x00004B60
   { 0x0000, 0x0018, 0x0019, 0x001A, 0x7FEF, 0x03FF, 0x0000, 0x017A }, // 0x00004B70
   { 0x0000, 0x0018, 0x001A, 0x001B, 0x7FFC, 0x0000, 0x019A, 0x0181 }, // 0x00004B80
   { 0x0000, 0x001C, 0x001D, 0x001E, 0x8001, 0x0000, 0x0000, 0xFE7D }, // 0x00004B90
   { 0x0000, 0x001C, 0x001E, 0x001F, 0x8014, 0xFC01, 0xFE67, 0xFE81 }, // 0x00004BA0
   { 0x0000, 0x0020, 0x0021, 0x0022, 0x5A82, 0x0000, 0x5A82, 0x019D }, // 0x00004BB0
   { 0x0000, 0x0020, 0x0022, 0x0023, 0x5A82, 0x0000, 0x5A82, 0x019D }, // 0x00004BC0
   { 0x0000, 0x0024, 0x0025, 0x0021, 0xA57E, 0x0000, 0x5A82, 0xFF77 }, // 0x00004BD0
   { 0x0000, 0x0024, 0x0021, 0x0020, 0xA57E, 0x0000, 0x5A82, 0xFF77 }, // 0x00004BE0
   { 0x0000, 0x0024, 0x0020, 0x0023, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00004BF0
   { 0x0000, 0x0026, 0x0027, 0x0028, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00004C00
   { 0x0000, 0x0026, 0x0029, 0x002A, 0x5A82, 0x0000, 0xA57E, 0x00F3 }, // 0x00004C10
   { 0x0000, 0x0026, 0x002A, 0x0027, 0x5A82, 0x0000, 0xA57E, 0x00F3 }, // 0x00004C20
   { 0x0000, 0x0027, 0x002A, 0x002B, 0xA57E, 0x0000, 0xA57E, 0xFECD }, // 0x00004C30
   { 0x0000, 0x0027, 0x002B, 0x0028, 0xA57E, 0x0000, 0xA57E, 0xFECD }, // 0x00004C40
   { 0x0000, 0x002C, 0x002D, 0x002E, 0x9EC2, 0xC348, 0xC714, 0x007D }, // 0x00004C50
   { 0x0000, 0x002F, 0x002C, 0x002E, 0xF36F, 0xFD27, 0x80A7, 0x0002 }, // 0x00004C60
   { 0x0000, 0x002F, 0x0030, 0x002C, 0x5D2E, 0x31AB, 0xB7A8, 0xFF62 }, // 0x00004C70
   { 0x0000, 0x0031, 0x0030, 0x002F, 0x6240, 0x3D7C, 0x3650, 0xFF70 }, // 0x00004C80
   { 0x0000, 0x002D, 0x0030, 0x0031, 0x0C75, 0x02C6, 0x7F5C, 0xFFEC }, // 0x00004C90
   { 0x0000, 0x002E, 0x002D, 0x0031, 0xA2B3, 0xCE8C, 0x4856, 0x008C }, // 0x00004CA0
   { 0x0000, 0x002E, 0x0031, 0x002F, 0xC19F, 0x6FBC, 0xFD42, 0x008B }, // 0x00004CB0
   { 0x0000, 0x0032, 0x0033, 0x0034, 0x9EC2, 0xC348, 0x38EC, 0x00E8 }, // 0x00004CC0
   { 0x0000, 0x0032, 0x0034, 0x0035, 0xF36F, 0xFD27, 0x7F59, 0x00F1 }, // 0x00004CD0
   { 0x0000, 0x0034, 0x0036, 0x0035, 0x5D2E, 0x31AB, 0x4858, 0xFFEA }, // 0x00004CE0
   { 0x0000, 0x0035, 0x0036, 0x0037, 0x6240, 0x3D7C, 0xC9B0, 0xFF0A }, // 0x00004CF0
   { 0x0000, 0x0037, 0x0036, 0x0033, 0x0C75, 0x02C6, 0x80A4, 0xFEFD }, // 0x00004D00
   { 0x0000, 0x0037, 0x0033, 0x0032, 0xA2B3, 0xCE8C, 0xB7AA, 0x0004 }, // 0x00004D10
   { 0x0000, 0x0035, 0x0037, 0x0032, 0xC19F, 0x6FBC, 0x02BE, 0x0090 }, // 0x00004D20
   { 0x0000, 0x0038, 0x0039, 0x003A, 0x5A3B, 0x0A07, 0xA5C5, 0xFE26 }, // 0x00004D30
   { 0x0000, 0x0039, 0x003B, 0x003A, 0xDDFB, 0xF61D, 0x8501, 0xFF72 }, // 0x00004D40
   { 0x0000, 0x003A, 0x003B, 0x003C, 0x8501, 0x09E3, 0xDDFB, 0x0113 }, // 0x00004D50
   { 0x0000, 0x003C, 0x003D, 0x0038, 0x1EF1, 0x0A50, 0x7BC5, 0x006E }, // 0x00004D60
   { 0x0000, 0x003C, 0x003B, 0x003D, 0xA5C5, 0xF5F9, 0x5A3B, 0x01AF }, // 0x00004D70
   { 0x0000, 0x0038, 0x003D, 0x0039, 0x7BC5, 0xF5B0, 0x1EF1, 0xFEBB }, // 0x00004D80
   { 0x0000, 0x003E, 0x003F, 0x0040, 0x7BC5, 0xF5B0, 0xE10F, 0xFE81 }, // 0x00004D90
   { 0x0000, 0x003F, 0x0041, 0x0042, 0xA5C5, 0xF5F9, 0xA5C5, 0x0106 }, // 0x00004DA0
   { 0x0000, 0x0040, 0x003F, 0x0042, 0x1EF1, 0x0A50, 0x843B, 0xFF86 }, // 0x00004DB0
   { 0x0000, 0x0042, 0x0041, 0x0043, 0x8501, 0x09E3, 0x2205, 0x0153 }, // 0x00004DC0
   { 0x0000, 0x0043, 0x0041, 0x003E, 0xDDFB, 0xF61D, 0x7AFF, 0x0058 }, // 0x00004DD0
   { 0x0000, 0x0043, 0x003E, 0x0040, 0x5A3B, 0x0A07, 0x5A3B, 0xFECF }, // 0x00004DE0
   { 0x0000, 0x0044, 0x0045, 0x0046, 0x8001, 0x0000, 0x0000, 0x017F }, // 0x00004DF0
   { 0x0000, 0x0044, 0x0046, 0x0047, 0x8014, 0x03FF, 0x0199, 0x017B }, // 0x00004E00
   { 0x0000, 0x0048, 0x0049, 0x004A, 0x7FEF, 0xFC01, 0x0000, 0xFE82 }, // 0x00004E10
   { 0x0000, 0x0048, 0x004A, 0x004B, 0x7FFC, 0x0000, 0xFE66, 0xFE7B }, // 0x00004E20
   { 0x0000, 0x004C, 0x004D, 0x004E, 0xA57E, 0x0000, 0x5A82, 0x019D }, // 0x00004E30
   { 0x0000, 0x004C, 0x004E, 0x004F, 0xA57E, 0x0000, 0x5A82, 0x019D }, // 0x00004E40
   { 0x0000, 0x004F, 0x004E, 0x0050, 0x5A82, 0x0000, 0x5A82, 0xFF77 }, // 0x00004E50
   { 0x0000, 0x004F, 0x0050, 0x0051, 0x5A82, 0x0000, 0x5A82, 0xFF77 }, // 0x00004E60
   { 0x0000, 0x0052, 0x0053, 0x0054, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00004E70
   { 0x0000, 0x0053, 0x0055, 0x0056, 0xA57E, 0x0000, 0xA57E, 0x00F3 }, // 0x00004E80
   { 0x0000, 0x0053, 0x0056, 0x0054, 0xA57E, 0x0000, 0xA57E, 0x00F3 }, // 0x00004E90
   { 0x0000, 0x0052, 0x0057, 0x0055, 0x5A82, 0x0000, 0xA57E, 0xFECD }, // 0x00004EA0
   { 0x0000, 0x0052, 0x0055, 0x0053, 0x5A82, 0x0000, 0xA57E, 0xFECD }, // 0x00004EB0
   { 0x0000, 0x004C, 0x004F, 0x0051, 0x0000, 0x7FFF, 0x0000, 0xFFF4 }, // 0x00004EC0
   { 0x0001, 0x0058, 0x0059, 0x005A, 0x0000, 0x0000, 0x8001, 0xFFDF }, // 0x00004ED0
   { 0x0002, 0x005B, 0x0058, 0x005A, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00004EE0
   { 0x0002, 0x005B, 0x005A, 0x005C, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00004EF0
   { 0x0001, 0x005A, 0x0059, 0x005C, 0x8001, 0x0000, 0x0000, 0x0131 }, // 0x00004F00
   { 0x0001, 0x005D, 0x005E, 0x005F, 0x8001, 0x0000, 0x0000, 0x0131 }, // 0x00004F10
   { 0x0002, 0x005D, 0x005F, 0x0060, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00004F20
   { 0x0002, 0x005D, 0x0060, 0x0061, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00004F30
   { 0x0001, 0x005F, 0x005E, 0x0060, 0x0000, 0x0000, 0x7FFF, 0x00CF }, // 0x00004F40
   { 0x0003, 0x0059, 0x0058, 0x0060, 0xBD3E, 0x6D35, 0x0000, 0x0114 }, // 0x00004F50
   { 0x0003, 0x0059, 0x0060, 0x005E, 0xBD3E, 0x6D35, 0x0000, 0x0114 }, // 0x00004F60
   { 0x0003, 0x0062, 0x0063, 0x0064, 0x4352, 0x6CDD, 0x0000, 0x0117 }, // 0x00004F70
   { 0x0003, 0x0062, 0x0064, 0x0065, 0x4352, 0x6CDD, 0x0000, 0x0117 }, // 0x00004F80
   { 0x0001, 0x0063, 0x0062, 0x0066, 0x0000, 0x0000, 0x7FFF, 0x00CF }, // 0x00004F90
   { 0x0002, 0x0067, 0x0063, 0x0066, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00004FA0
   { 0x0002, 0x0067, 0x0066, 0x0068, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00004FB0
   { 0x0001, 0x0066, 0x0062, 0x0068, 0x7FFF, 0x0000, 0x0000, 0x0131 }, // 0x00004FC0
   { 0x0001, 0x0069, 0x0065, 0x006A, 0x7FFF, 0x0000, 0x0000, 0x0131 }, // 0x00004FD0
   { 0x0002, 0x0069, 0x006A, 0x0064, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00004FE0
   { 0x0002, 0x0069, 0x0064, 0x006B, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00004FF0
   { 0x0001, 0x006A, 0x0065, 0x0064, 0x0000, 0x0000, 0x8001, 0xFFDF }, // 0x00005000
   { 0x0004, 0x006C, 0x006D, 0x006E, 0x1253, 0x7EAD, 0x0000, 0x0010 }, // 0x00005010
   { 0x0004, 0x006C, 0x006E, 0x006F, 0x1253, 0x7EAD, 0x0000, 0x0010 }, // 0x00005020
   { 0x0004, 0x006E, 0x0070, 0x0071, 0x0000, 0x7FFF, 0x0000, 0x0033 }, // 0x00005030
   { 0x0004, 0x006E, 0x0071, 0x006F, 0x0000, 0x7FFF, 0x0000, 0x0033 }, // 0x00005040
   { 0x0004, 0x0072, 0x0073, 0x0074, 0xED36, 0x7E9C, 0x0000, 0x000F }, // 0x00005050
   { 0x0004, 0x0072, 0x0074, 0x0075, 0xED36, 0x7E9C, 0x0000, 0x000F }, // 0x00005060
   { 0x0004, 0x0076, 0x0077, 0x0072, 0x0000, 0x7FFF, 0x0000, 0x0033 }, // 0x00005070
   { 0x0004, 0x0076, 0x0072, 0x0075, 0x0000, 0x7FFF, 0x0000, 0x0033 }, // 0x00005080
   { 0x0005, 0x0078, 0x0079, 0x007A, 0x7FFF, 0x0000, 0x0000, 0x00D7 }, // 0x00005090
   { 0x0006, 0x007B, 0x007C, 0x007D, 0x7FFF, 0x0000, 0x0000, 0x00D7 }, // 0x000050A0
   { 0x0006, 0x007B, 0x007D, 0x007E, 0x7FFF, 0x0000, 0x0000, 0x00D7 }, // 0x000050B0
   { 0x0006, 0x007F, 0x0080, 0x0077, 0x7FFF, 0x0000, 0x0000, 0x00D7 }, // 0x000050C0
   { 0x0006, 0x007F, 0x0077, 0x0076, 0x7FFF, 0x0000, 0x0000, 0x00D7 }, // 0x000050D0
   { 0x0006, 0x0081, 0x0082, 0x0083, 0x7FFF, 0x0000, 0x0000, 0x00D7 }, // 0x000050E0
   { 0x0006, 0x0081, 0x0083, 0x0084, 0x7FFF, 0x0000, 0x0000, 0x00D7 }, // 0x000050F0
   { 0x0005, 0x0085, 0x0086, 0x0087, 0x7FFF, 0x0000, 0x0000, 0x00D7 }, // 0x00005100
   { 0x0005, 0x0088, 0x0089, 0x008A, 0x8001, 0x0000, 0x0000, 0x00D6 }, // 0x00005110
   { 0x0005, 0x008B, 0x008C, 0x008D, 0x8001, 0x0000, 0x0000, 0x00D6 }, // 0x00005120
   { 0x0006, 0x008E, 0x008F, 0x0090, 0x8001, 0x0000, 0x0000, 0x00D6 }, // 0x00005130
   { 0x0006, 0x008E, 0x0090, 0x0091, 0x8001, 0x0000, 0x0000, 0x00D6 }, // 0x00005140
   { 0x0006, 0x0092, 0x0093, 0x0094, 0x8001, 0x0000, 0x0000, 0x00D6 }, // 0x00005150
   { 0x0006, 0x0092, 0x0094, 0x0095, 0x8001, 0x0000, 0x0000, 0x00D6 }, // 0x00005160
   { 0x0006, 0x0071, 0x0070, 0x0096, 0x8001, 0x0000, 0x0000, 0x00D6 }, // 0x00005170
   { 0x0006, 0x0071, 0x0096, 0x0097, 0x8001, 0x0000, 0x0000, 0x00D6 }, // 0x00005180

}; 

Vec3s gValleyObjects1Col_vtx_00005190[] = {
   { -203, -46, -17 }, // 0x00005190
   { -304, -219, -5 }, // 0x00005196
   { -312, -214, -24 }, // 0x0000519C
   { -221, -36, -19 }, // 0x000051A2
   { -322, -208, -7 }, // 0x000051A8
   { -213, -40, 0 }, // 0x000051AE
   { -312, -214, -216 }, // 0x000051B4
   { -304, -219, -235 }, // 0x000051BA
   { -203, -46, -223 }, // 0x000051C0
   { -221, -36, -221 }, // 0x000051C6
   { -322, -208, -233 }, // 0x000051CC
   { -213, -40, -240 }, // 0x000051D2
   { -378, 216, -270 }, // 0x000051D8
   { -405, 36, -263 }, // 0x000051DE
   { -413, 216, -235 }, // 0x000051E4
   { -358, 36, -250 }, // 0x000051EA
   { -365, 216, -223 }, // 0x000051F0
   { -393, 36, -215 }, // 0x000051F6
   { -413, 216, -5 }, // 0x000051FC
   { -393, 36, -25 }, // 0x00005202
   { -405, 36, 23 }, // 0x00005208
   { -365, 216, -17 }, // 0x0000520E
   { -358, 36, 10 }, // 0x00005214
   { -378, 216, 30 }, // 0x0000521A
   { -384, 187, -80 }, // 0x00005220
   { -383, 155, -80 }, // 0x00005226
   { -383, 155, -160 }, // 0x0000522C
   { -383, 187, -160 }, // 0x00005232
   { -387, 187, -160 }, // 0x00005238
   { -387, 155, -160 }, // 0x0000523E
   { -387, 155, -80 }, // 0x00005244
   { -388, 187, -80 }, // 0x0000524A
   { -389, 12, -195 }, // 0x00005250
   { -389, -108, -195 }, // 0x00005256
   { -377, -108, -207 }, // 0x0000525C
   { -377, 12, -207 }, // 0x00005262
   { -401, 12, -207 }, // 0x00005268
   { -401, -108, -207 }, // 0x0000526E
   { -377, 12, -33 }, // 0x00005274
   { -389, 12, -45 }, // 0x0000527A
   { -401, 12, -33 }, // 0x00005280
   { -377, -108, -33 }, // 0x00005286
   { -389, -108, -45 }, // 0x0000528C
   { -401, -108, -33 }, // 0x00005292
   { 312, -214, -24 }, // 0x00005298
   { 304, -219, -5 }, // 0x0000529E
   { 203, -46, -17 }, // 0x000052A4
   { 221, -36, -19 }, // 0x000052AA
   { 322, -208, -7 }, // 0x000052B0
   { 213, -40, 0 }, // 0x000052B6
   { 203, -46, -223 }, // 0x000052BC
   { 304, -219, -235 }, // 0x000052C2
   { 312, -214, -216 }, // 0x000052C8
   { 221, -36, -221 }, // 0x000052CE
   { 322, -208, -233 }, // 0x000052D4
   { 213, -40, -240 }, // 0x000052DA
   { 413, 216, -235 }, // 0x000052E0
   { 405, 36, -263 }, // 0x000052E6
   { 378, 216, -270 }, // 0x000052EC
   { 358, 36, -250 }, // 0x000052F2
   { 365, 216, -223 }, // 0x000052F8
   { 393, 36, -215 }, // 0x000052FE
   { 405, 36, 23 }, // 0x00005304
   { 393, 36, -25 }, // 0x0000530A
   { 413, 216, -5 }, // 0x00005310
   { 358, 36, 10 }, // 0x00005316
   { 365, 216, -17 }, // 0x0000531C
   { 378, 216, 30 }, // 0x00005322
   { 383, 187, -160 }, // 0x00005328
   { 383, 155, -160 }, // 0x0000532E
   { 383, 155, -80 }, // 0x00005334
   { 384, 187, -80 }, // 0x0000533A
   { 388, 187, -80 }, // 0x00005340
   { 387, 155, -80 }, // 0x00005346
   { 387, 155, -160 }, // 0x0000534C
   { 387, 187, -160 }, // 0x00005352
   { 377, 12, -207 }, // 0x00005358
   { 377, -108, -207 }, // 0x0000535E
   { 389, -108, -195 }, // 0x00005364
   { 389, 12, -195 }, // 0x0000536A
   { 401, -108, -207 }, // 0x00005370
   { 401, 12, -207 }, // 0x00005376
   { 401, 12, -33 }, // 0x0000537C
   { 389, 12, -45 }, // 0x00005382
   { 377, 12, -33 }, // 0x00005388
   { 389, -108, -45 }, // 0x0000538E
   { 377, -108, -33 }, // 0x00005394
   { 401, -108, -33 }, // 0x0000539A
   { 588, 36, -33 }, // 0x000053A0
   { 305, -137, -33 }, // 0x000053A6
   { 305, 36, -33 }, // 0x000053AC
   { 588, 36, 140 }, // 0x000053B2
   { 305, 36, 140 }, // 0x000053B8
   { 305, 36, -380 }, // 0x000053BE
   { 305, -137, -207 }, // 0x000053C4
   { 305, 36, -207 }, // 0x000053CA
   { 588, 36, -207 }, // 0x000053D0
   { 588, 36, -380 }, // 0x000053D6
   { -305, -139, -207 }, // 0x000053DC
   { -588, 36, -207 }, // 0x000053E2
   { -588, 36, -33 }, // 0x000053E8
   { -305, -139, -33 }, // 0x000053EE
   { -305, 36, -207 }, // 0x000053F4
   { -588, 36, -380 }, // 0x000053FA
   { -305, 36, -380 }, // 0x00005400
   { -305, 36, 140 }, // 0x00005406
   { -305, 36, -33 }, // 0x0000540C
   { -588, 36, 140 }, // 0x00005412
   { 399, -74, -20 }, // 0x00005418
   { 399, -74, -220 }, // 0x0000541E
   { 240, -51, -220 }, // 0x00005424
   { 240, -51, -20 }, // 0x0000542A
   { 214, -51, -220 }, // 0x00005430
   { 214, -51, -20 }, // 0x00005436
   { -244, -51, -220 }, // 0x0000543C
   { -399, -74, -220 }, // 0x00005442
   { -399, -74, -20 }, // 0x00005448
   { -244, -51, -20 }, // 0x0000544E
   { -215, -51, -20 }, // 0x00005454
   { -215, -51, -220 }, // 0x0000545A
   { -215, -447, -42 }, // 0x00005460
   { -215, -291, -107 }, // 0x00005466
   { -215, -291, 23 }, // 0x0000546C
   { -215, -254, -119 }, // 0x00005472
   { -215, -240, -20 }, // 0x00005478
   { -215, -288, -14 }, // 0x0000547E
   { -215, -301, -113 }, // 0x00005484
   { -215, -243, -20 }, // 0x0000548A
   { -215, -243, -220 }, // 0x00005490
   { -215, -258, -122 }, // 0x00005496
   { -215, -305, -130 }, // 0x0000549C
   { -215, -287, -228 }, // 0x000054A2
   { -215, -240, -220 }, // 0x000054A8
   { -215, -289, -263 }, // 0x000054AE
   { -215, -294, -133 }, // 0x000054B4
   { -215, -448, -204 }, // 0x000054BA
   { 214, -423, -204 }, // 0x000054C0
   { 214, -270, -133 }, // 0x000054C6
   { 214, -265, -263 }, // 0x000054CC
   { 214, -266, 23 }, // 0x000054D2
   { 214, -266, -107 }, // 0x000054D8
   { 214, -422, -42 }, // 0x000054DE
   { 214, -277, -113 }, // 0x000054E4
   { 214, -263, -14 }, // 0x000054EA
   { 214, -215, -20 }, // 0x000054F0
   { 214, -229, -119 }, // 0x000054F6
   { 214, -215, -220 }, // 0x000054FC
   { 214, -262, -228 }, // 0x00005502
   { 214, -280, -130 }, // 0x00005508
   { 214, -233, -121 }, // 0x0000550E
   { 214, -219, -220 }, // 0x00005514
   { 214, -219, -20 }, // 0x0000551A
}; 

CollisionHeader gValleyObjects1Col = { -588, -448, -380, 588, 216, 140, 152, gValleyObjects1Col_vtx_00005190, 124, gValleyObjects1Col_polygons_000049D0, gValleyObjects1Col_polygonTypes_00004998, &gValleyObjects1Col_camDataList_00004990, 0, 0 }; 

static u32 pad554C = 0;

static Vtx object_spot09_objVtx_005550[6] = {
    VTX(-413, 216, -5, 529, -63, 154, 57, 229, 255),
    VTX(-378, 216, 30, 17, 824, 27, 57, 102, 255),
    VTX(-365, 216, -17, 1041, 824, 74, 57, 182, 255),
    VTX(-413, 216, -235, 529, -63, 154, 57, 27, 255),
    VTX(-365, 216, -223, 17, 824, 74, 57, 74, 255),
    VTX(-378, 216, -270, 1041, 824, 27, 57, 154, 255),
}; 

static Vtx object_spot09_objVtx_0055B0[8] = {
    VTX(-203, -46, -17, 3508, -825, 110, 0, 208, 255),
    VTX(-304, -219, -5, 4048, 4295, 85, 205, 66, 255),
    VTX(-312, -214, -24, 2968, 4295, 5, 251, 137, 255),
    VTX(-221, -36, -19, 2429, -825, 207, 92, 197, 255),
    VTX(-322, -208, -7, 1889, 4295, 163, 52, 53, 255),
    VTX(-213, -40, 0, 1349, -825, 22, 51, 106, 255),
    VTX(-304, -219, -5, 810, 4295, 85, 205, 66, 255),
    VTX(-203, -46, -17, 270, -825, 110, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_005630[3] = {
    VTX(-221, -36, -19, 421, -266, 207, 92, 197, 255),
    VTX(-213, -40, 0, 1301, 851, 22, 51, 106, 255),
    VTX(-203, -46, -17, -209, 981, 110, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_005660[8] = {
    VTX(-312, -214, -216, 2968, 4295, 5, 251, 119, 255),
    VTX(-304, -219, -235, 4048, 4295, 85, 205, 190, 255),
    VTX(-203, -46, -223, 3508, -825, 110, 0, 48, 255),
    VTX(-221, -36, -221, 2429, -825, 207, 92, 59, 255),
    VTX(-322, -208, -233, 1889, 4295, 163, 52, 203, 255),
    VTX(-213, -40, -240, 1349, -825, 22, 51, 150, 255),
    VTX(-304, -219, -235, 810, 4295, 85, 205, 190, 255),
    VTX(-203, -46, -223, 270, -825, 110, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_0056E0[3] = {
    VTX(-203, -46, -223, -209, 981, 110, 0, 48, 255),
    VTX(-213, -40, -240, 1301, 851, 22, 51, 150, 255),
    VTX(-221, -36, -221, 421, -266, 207, 92, 59, 255),
}; 

static Vtx object_spot09_objVtx_005710[16] = {
    VTX(-378, 216, -270, 2338, 0, 27, 57, 154, 255),
    VTX(-405, 36, -263, 1846, 3570, 172, 251, 172, 255),
    VTX(-413, 216, -235, 1354, 0, 154, 57, 27, 255),
    VTX(-358, 36, -250, 2830, 3570, 115, 251, 225, 255),
    VTX(-365, 216, -223, 3322, 0, 74, 57, 74, 255),
    VTX(-393, 36, -215, 861, 3570, 225, 251, 115, 255),
    VTX(-365, 216, -223, 369, 0, 74, 57, 74, 255),
    VTX(-393, 36, -215, 3815, 3570, 225, 251, 115, 255),
    VTX(-413, 216, -5, 1354, 0, 154, 57, 229, 255),
    VTX(-393, 36, -25, 861, 3570, 225, 251, 141, 255),
    VTX(-405, 36, 23, 1846, 3570, 172, 251, 84, 255),
    VTX(-365, 216, -17, 3322, 0, 74, 57, 182, 255),
    VTX(-358, 36, 10, 2830, 3570, 115, 251, 31, 255),
    VTX(-393, 36, -25, 3815, 3570, 225, 251, 141, 255),
    VTX(-365, 216, -17, 369, 0, 74, 57, 182, 255),
    VTX(-378, 216, 30, 2338, 0, 27, 57, 102, 255),
}; 

static Vtx object_spot09_objVtx_005810[8] = {
    VTX(-384, 187, -80, 0, 0, 119, 1, 1, 255),
    VTX(-383, 155, -80, 1024, 0, 119, 1, 1, 255),
    VTX(-383, 155, -160, 1024, 1024, 119, 1, 1, 255),
    VTX(-383, 187, -160, 0, 1024, 119, 1, 1, 255),
    VTX(-387, 187, -160, 1024, 0, 137, 255, 255, 255),
    VTX(-387, 155, -160, 1024, 1024, 137, 255, 255, 255),
    VTX(-387, 155, -80, 0, 1024, 137, 255, 255, 255),
    VTX(-388, 187, -80, 0, 0, 137, 255, 255, 255),
}; 

static Vtx object_spot09_objVtx_005890[6] = {
    VTX(-385, 192, -120, 307, 1, 143, 218, 255, 255),
    VTX(-385, 204, -227, -7746, 0, 143, 218, 251, 255),
    VTX(-385, 196, -226, -7696, 1024, 142, 37, 3, 255),
    VTX(-385, 184, -120, 350, 1023, 142, 37, 255, 255),
    VTX(-386, 196, -13, 8423, 1023, 142, 37, 251, 255),
    VTX(-386, 204, -13, 8473, -1, 143, 218, 3, 255),
}; 

static Vtx object_spot09_objVtx_0058F0[6] = {
    VTX(365, 216, -223, 529, -63, 182, 57, 74, 255),
    VTX(413, 216, -235, 17, 824, 102, 57, 27, 255),
    VTX(378, 216, -270, 1041, 824, 229, 57, 154, 255),
    VTX(378, 216, 30, 529, -63, 229, 57, 102, 255),
    VTX(413, 216, -5, 17, 824, 102, 57, 229, 255),
    VTX(365, 216, -17, 1041, 824, 182, 57, 182, 255),
}; 

static Vtx object_spot09_objVtx_005950[8] = {
    VTX(312, -214, -24, 2968, 4336, 251, 251, 137, 255),
    VTX(304, -219, -5, 4048, 4336, 171, 205, 66, 255),
    VTX(203, -46, -17, 3508, -784, 146, 0, 208, 255),
    VTX(221, -36, -19, 2429, -784, 49, 92, 197, 255),
    VTX(322, -208, -7, 1889, 4336, 93, 52, 53, 255),
    VTX(213, -40, 0, 1349, -784, 234, 51, 106, 255),
    VTX(304, -219, -5, 810, 4336, 171, 205, 66, 255),
    VTX(203, -46, -17, 270, -784, 146, 0, 208, 255),
}; 

static Vtx object_spot09_objVtx_0059D0[3] = {
    VTX(203, -46, -17, -209, 981, 146, 0, 208, 255),
    VTX(213, -40, 0, 1301, 851, 234, 51, 106, 255),
    VTX(221, -36, -19, 421, -266, 49, 92, 197, 255),
}; 

static Vtx object_spot09_objVtx_005A00[8] = {
    VTX(203, -46, -223, 3508, -784, 146, 0, 48, 255),
    VTX(304, -219, -235, 4048, 4336, 171, 205, 190, 255),
    VTX(312, -214, -216, 2968, 4336, 251, 251, 119, 255),
    VTX(221, -36, -221, 2429, -784, 49, 92, 59, 255),
    VTX(322, -208, -233, 1889, 4336, 93, 52, 203, 255),
    VTX(213, -40, -240, 1349, -784, 234, 51, 150, 255),
    VTX(304, -219, -235, 810, 4336, 171, 205, 190, 255),
    VTX(203, -46, -223, 270, -784, 146, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_005A80[3] = {
    VTX(221, -36, -221, 421, -266, 49, 92, 59, 255),
    VTX(213, -40, -240, 1301, 851, 234, 51, 150, 255),
    VTX(203, -46, -223, -209, 981, 146, 0, 48, 255),
}; 

static Vtx object_spot09_objVtx_005AB0[16] = {
    VTX(413, 216, -235, 1354, 0, 102, 57, 27, 255),
    VTX(405, 36, -263, 1846, 3570, 84, 251, 172, 255),
    VTX(378, 216, -270, 2338, 0, 229, 57, 154, 255),
    VTX(358, 36, -250, 2830, 3570, 141, 251, 225, 255),
    VTX(365, 216, -223, 3322, 0, 182, 57, 74, 255),
    VTX(365, 216, -223, 369, 0, 182, 57, 74, 255),
    VTX(393, 36, -215, 861, 3570, 31, 251, 115, 255),
    VTX(393, 36, -215, 3815, 3570, 31, 251, 115, 255),
    VTX(405, 36, 23, 1846, 3570, 84, 251, 84, 255),
    VTX(393, 36, -25, 861, 3570, 31, 251, 141, 255),
    VTX(413, 216, -5, 1354, 0, 102, 57, 229, 255),
    VTX(393, 36, -25, 3815, 3570, 31, 251, 141, 255),
    VTX(358, 36, 10, 2830, 3570, 141, 251, 31, 255),
    VTX(365, 216, -17, 3322, 0, 182, 57, 182, 255),
    VTX(365, 216, -17, 369, 0, 182, 57, 182, 255),
    VTX(378, 216, 30, 2338, 0, 229, 57, 102, 255),
}; 

static Vtx object_spot09_objVtx_005BB0[8] = {
    VTX(383, 187, -160, 0, 1024, 137, 1, 1, 255),
    VTX(383, 155, -160, 1024, 1024, 137, 1, 1, 255),
    VTX(383, 155, -80, 1024, 0, 137, 1, 1, 255),
    VTX(384, 187, -80, 0, 0, 137, 1, 1, 255),
    VTX(388, 187, -80, 0, 0, 119, 255, 255, 255),
    VTX(387, 155, -80, 0, 1024, 119, 255, 255, 255),
    VTX(387, 155, -160, 1024, 1024, 119, 255, 255, 255),
    VTX(387, 187, -160, 1024, 0, 119, 255, 255, 255),
}; 

static Vtx object_spot09_objVtx_005C30[6] = {
    VTX(385, 184, -120, 350, 1023, 114, 37, 255, 255),
    VTX(385, 196, -226, -7696, 1024, 114, 37, 3, 255),
    VTX(385, 204, -227, -7746, 0, 113, 218, 251, 255),
    VTX(385, 192, -120, 307, 1, 113, 218, 255, 255),
    VTX(386, 204, -13, 8473, -1, 113, 218, 3, 255),
    VTX(386, 196, -13, 8423, 1023, 114, 37, 251, 255),
}; 

static Vtx object_spot09_objVtx_005C90[4] = {
    VTX(588, 36, -33, 2048, 9, 227, 102, 201, 255),
    VTX(415, -74, -33, 816, 1075, 212, 72, 171, 255),
    VTX(305, 36, -33, 0, 9, 207, 49, 158, 255),
    VTX(305, -137, -33, 40, 1752, 146, 32, 220, 255),
}; 

static Vtx object_spot09_objVtx_005CD0[4] = {
    VTX(588, 36, 140, 1024, 2048, 0, 119, 4, 255),
    VTX(588, 36, -33, 7, 2048, 227, 102, 201, 255),
    VTX(305, 36, -33, 7, 0, 207, 49, 158, 255),
    VTX(305, 36, 140, 1024, 0, 171, 83, 4, 255),
}; 

static Vtx object_spot09_objVtx_005D10[6] = {
    VTX(305, 36, -33, 2048, 0, 207, 49, 158, 255),
    VTX(305, -137, -33, 2048, 1003, 146, 32, 220, 255),
    VTX(305, 36, 140, 0, 0, 171, 83, 4, 255),
    VTX(305, 36, -380, 0, 0, 171, 83, 253, 255),
    VTX(305, -137, -207, 2048, 1003, 146, 32, 36, 255),
    VTX(305, 36, -207, 2048, 0, 207, 49, 98, 255),
}; 

static Vtx object_spot09_objVtx_005D70[4] = {
    VTX(305, 36, -380, 1024, 0, 171, 83, 253, 255),
    VTX(305, 36, -207, 7, 0, 207, 49, 98, 255),
    VTX(588, 36, -207, 7, 2048, 227, 102, 55, 255),
    VTX(588, 36, -380, 1024, 2048, 254, 119, 1, 255),
}; 

static Vtx object_spot09_objVtx_005DB0[4] = {
    VTX(305, 36, -207, 0, 9, 207, 49, 98, 255),
    VTX(305, -137, -207, 40, 1752, 146, 32, 36, 255),
    VTX(415, -74, -207, 816, 1075, 212, 72, 85, 255),
    VTX(588, 36, -207, 2048, 9, 227, 102, 55, 255),
}; 

static Vtx object_spot09_objVtx_005DF0[4] = {
    VTX(415, -74, -33, 1024, 1024, 212, 72, 171, 255),
    VTX(588, 36, -33, 1024, -1047, 227, 102, 201, 255),
    VTX(588, 36, -207, 0, -1047, 227, 102, 55, 255),
    VTX(415, -74, -207, 0, 1024, 212, 72, 85, 255),
}; 

static Vtx object_spot09_objVtx_005E30[4] = {
    VTX(305, -137, -207, 0, 1024, 146, 32, 36, 255),
    VTX(305, -137, -33, 1024, 1024, 146, 32, 220, 255),
    VTX(415, -74, -33, 1024, 0, 212, 72, 171, 255),
    VTX(415, -74, -207, 0, 0, 212, 72, 85, 255),
}; 

static Vtx object_spot09_objVtx_005E70[4] = {
    VTX(-415, -74, -207, 1024, 1024, 44, 72, 85, 255),
    VTX(-588, 36, -207, 1024, -1047, 29, 102, 55, 255),
    VTX(-588, 36, -33, 0, -1047, 29, 102, 201, 255),
    VTX(-415, -74, -33, 0, 1024, 44, 72, 171, 255),
}; 

static Vtx object_spot09_objVtx_005EB0[4] = {
    VTX(-415, -74, -207, 0, 0, 44, 72, 85, 255),
    VTX(-415, -74, -33, 1024, 0, 44, 72, 171, 255),
    VTX(-305, -139, -33, 1024, 1024, 111, 27, 220, 255),
    VTX(-305, -139, -207, 0, 1024, 112, 24, 34, 255),
}; 

static Vtx object_spot09_objVtx_005EF0[4] = {
    VTX(-588, 36, -207, 2048, 9, 29, 102, 55, 255),
    VTX(-415, -74, -207, 816, 1075, 44, 72, 85, 255),
    VTX(-305, 36, -207, 0, 9, 49, 49, 98, 255),
    VTX(-305, -139, -207, 40, 1752, 112, 24, 34, 255),
}; 

static Vtx object_spot09_objVtx_005F30[4] = {
    VTX(-588, 36, -380, 1024, 2048, 255, 119, 254, 255),
    VTX(-588, 36, -207, 7, 2048, 29, 102, 55, 255),
    VTX(-305, 36, -207, 7, 0, 49, 49, 98, 255),
    VTX(-305, 36, -380, 1024, 0, 85, 84, 253, 255),
}; 

static Vtx object_spot09_objVtx_005F70[6] = {
    VTX(-305, 36, -207, 2048, 0, 49, 49, 98, 255),
    VTX(-305, -139, -207, 2048, 1003, 112, 24, 34, 255),
    VTX(-305, 36, -380, 0, 0, 85, 84, 253, 255),
    VTX(-305, 36, 140, 0, 0, 85, 83, 4, 255),
    VTX(-305, -139, -33, 2048, 1003, 111, 27, 220, 255),
    VTX(-305, 36, -33, 2048, 0, 49, 49, 158, 255),
}; 

static Vtx object_spot09_objVtx_005FD0[4] = {
    VTX(-305, 36, 140, 1024, 0, 85, 83, 4, 255),
    VTX(-305, 36, -33, 7, 0, 49, 49, 158, 255),
    VTX(-588, 36, -33, 7, 2048, 29, 102, 201, 255),
    VTX(-588, 36, 140, 1024, 2048, 1, 119, 3, 255),
}; 

static Vtx object_spot09_objVtx_006010[4] = {
    VTX(-305, 36, -33, 0, 9, 49, 49, 158, 255),
    VTX(-305, -139, -33, 40, 1752, 111, 27, 220, 255),
    VTX(-415, -74, -33, 816, 1075, 44, 72, 171, 255),
    VTX(-588, 36, -33, 2048, 9, 29, 102, 201, 255),
}; 

static Vtx object_spot09_objVtx_006050[12] = {
    VTX(-417, -74, -33, 6, 9557, 0, 63, 102, 255),
    VTX(-417, -106, -49, 1024, 9557, 0, 136, 0, 255),
    VTX(417, -106, -47, 1024, -8647, 0, 136, 0, 255),
    VTX(417, -74, -31, 6, -8647, 0, 63, 102, 255),
    VTX(417, -74, -63, 1024, -8647, 0, 63, 154, 255),
    VTX(417, -106, -47, 6, -8647, 0, 136, 0, 255),
    VTX(-417, -106, -49, 6, 9557, 0, 136, 0, 255),
    VTX(-416, -74, -65, 1024, 9557, 0, 63, 154, 255),
    VTX(-417, -74, -33, 853, 9500, 0, 63, 102, 255),
    VTX(417, -74, -31, 853, -8704, 0, 63, 102, 255),
    VTX(417, -74, -63, -57, -8704, 0, 63, 154, 255),
    VTX(-416, -74, -65, -57, 9500, 0, 63, 154, 255),
}; 

static Vtx object_spot09_objVtx_006110[4] = {
    VTX(414, -68, -220, 0, -15362, 0, 120, 0, 255),
    VTX(-420, -68, -222, 0, 6218, 0, 120, 0, 255),
    VTX(-420, -68, -22, 4094, 6105, 0, 120, 0, 255),
    VTX(414, -68, -20, 4092, -15354, 0, 120, 0, 255),
}; 

static Vtx object_spot09_objVtx_006150[12] = {
    VTX(-416, -74, -176, 853, 9500, 0, 63, 102, 255),
    VTX(417, -74, -174, 853, -8704, 0, 63, 102, 255),
    VTX(417, -74, -206, -57, -8704, 0, 63, 154, 255),
    VTX(-416, -74, -208, -57, 9500, 0, 63, 154, 255),
    VTX(417, -74, -206, 1024, -8647, 0, 63, 154, 255),
    VTX(417, -106, -190, 6, -8647, 0, 136, 0, 255),
    VTX(-416, -106, -192, 6, 9557, 0, 136, 0, 255),
    VTX(-416, -74, -208, 1024, 9557, 0, 63, 154, 255),
    VTX(-416, -74, -176, 6, 9557, 0, 63, 102, 255),
    VTX(-416, -106, -192, 1024, 9557, 0, 136, 0, 255),
    VTX(417, -106, -190, 1024, -8647, 0, 136, 0, 255),
    VTX(417, -74, -174, 6, -8647, 0, 63, 102, 255),
}; 

Gfx gValleyRepairedBridgeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_spot09_objVtx_005550[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_0055B0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_005630[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005660[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_0056E0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005710[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 2, 5, 6, 0),
    gsSP2Triangles(7, 3, 4, 0, 1, 5, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 9, 8, 0, 15, 12, 11, 0),
    gsSP2Triangles(10, 12, 15, 0, 8, 10, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00B490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_005810[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00A490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_005890[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_0058F0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005950[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 4, 5, 0, 7, 6, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_0059D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005A00[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00AC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_005A80[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00BC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005AB0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 5, 6, 0, 0),
    gsSP2Triangles(4, 3, 7, 0, 0, 6, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(10, 9, 14, 0, 13, 12, 15, 0),
    gsSP2Triangles(15, 12, 8, 0, 15, 8, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00B490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_005BB0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00A490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_005C30[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 0, 0, 4, 0, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_005C90[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005CD0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00EC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_005D10[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005D70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_005DB0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008C90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_005DF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00FC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPVertex(&object_spot09_objVtx_005E30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008C90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_spot09_objVtx_005E70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00FC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 1, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 5, 0, 1, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPVertex(&object_spot09_objVtx_005EB0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_005EF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005F30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00EC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 2, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 2, 5, 0, 2, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_005F70[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00DC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_spot09_objVtx_005FD0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_00CC90),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 0, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsSPVertex(&object_spot09_objVtx_006010[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetPrimColor(0, 0, 255, 209, 178, 255),
    gsSPVertex(&object_spot09_objVtx_006050[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_009490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 6, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 128),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 0, 0, 0, 0, 5, 0, 1, 6, 0),
    gsDPSetTileSize(0, 0, 0, 252, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 240, 240, 255),
    gsSPVertex(&object_spot09_objVtx_006110[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 209, 178, 255),
    gsSPVertex(&object_spot09_objVtx_006150[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_006E18[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gValleyObjects4Col_camDataList_00006E20[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gValleyObjects4Col_polygonTypes_00006E28[] = {
   0x80000000, 0x000207CA,
   0x80000000, 0x000007C2,
   0x2C000000, 0x000007C2,
   0x00000000, 0x000007C2,
   0x2C000000, 0x000007C9,
}; 

CollisionPoly gValleyObjects4Col_polygons_00006E50[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x613E, 0xC348, 0xC714, 0x007D }, // 0x00006E50
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0C91, 0xFD27, 0x80A7, 0x0002 }, // 0x00006E60
   { 0x0000, 0x0002, 0x0004, 0x0003, 0xA2D2, 0x31AB, 0xB7A8, 0xFF62 }, // 0x00006E70
   { 0x0000, 0x0003, 0x0004, 0x0005, 0x9DC0, 0x3D7C, 0x3650, 0xFF70 }, // 0x00006E80
   { 0x0000, 0x0005, 0x0004, 0x0001, 0xF38B, 0x02C6, 0x7F5C, 0xFFEC }, // 0x00006E90
   { 0x0000, 0x0005, 0x0001, 0x0000, 0x5D4D, 0xCE8C, 0x4856, 0x008C }, // 0x00006EA0
   { 0x0000, 0x0003, 0x0005, 0x0000, 0x3E61, 0x6FBC, 0xFD42, 0x008B }, // 0x00006EB0
   { 0x0000, 0x0006, 0x0007, 0x0008, 0x613E, 0xC348, 0x38EC, 0x00E8 }, // 0x00006EC0
   { 0x0000, 0x0009, 0x0006, 0x0008, 0x0C91, 0xFD27, 0x7F59, 0x00F1 }, // 0x00006ED0
   { 0x0000, 0x0009, 0x000A, 0x0006, 0xA2D2, 0x31AB, 0x4858, 0xFFEA }, // 0x00006EE0
   { 0x0000, 0x000B, 0x000A, 0x0009, 0x9DC0, 0x3D7C, 0xC9B0, 0xFF0A }, // 0x00006EF0
   { 0x0000, 0x0007, 0x000A, 0x000B, 0xF38B, 0x02C6, 0x80A4, 0xFEFD }, // 0x00006F00
   { 0x0000, 0x0008, 0x0007, 0x000B, 0x5D4D, 0xCE8C, 0xB7AA, 0x0004 }, // 0x00006F10
   { 0x0000, 0x0008, 0x000B, 0x0009, 0x3E61, 0x6FBC, 0x02BE, 0x0090 }, // 0x00006F20
   { 0x0000, 0x000C, 0x000D, 0x000E, 0xA5C5, 0x0A07, 0xA5C5, 0xFE26 }, // 0x00006F30
   { 0x0000, 0x000C, 0x000F, 0x000D, 0x2205, 0xF61D, 0x8501, 0xFF72 }, // 0x00006F40
   { 0x0000, 0x0010, 0x000F, 0x000C, 0x7AFF, 0x09E3, 0xDDFB, 0x0113 }, // 0x00006F50
   { 0x0000, 0x000E, 0x0011, 0x0010, 0xE10F, 0x0A50, 0x7BC5, 0x006E }, // 0x00006F60
   { 0x0000, 0x0011, 0x000F, 0x0010, 0x5A3B, 0xF5F9, 0x5A3B, 0x01AF }, // 0x00006F70
   { 0x0000, 0x000D, 0x0011, 0x000E, 0x843B, 0xF5B0, 0x1EF1, 0xFEBB }, // 0x00006F80
   { 0x0000, 0x0012, 0x0013, 0x0014, 0x843B, 0xF5B0, 0xE10F, 0xFE81 }, // 0x00006F90
   { 0x0000, 0x0015, 0x0016, 0x0013, 0x5A3B, 0xF5F9, 0xA5C5, 0x0106 }, // 0x00006FA0
   { 0x0000, 0x0015, 0x0013, 0x0012, 0xE10F, 0x0A50, 0x843B, 0xFF86 }, // 0x00006FB0
   { 0x0000, 0x0017, 0x0016, 0x0015, 0x7AFF, 0x09E3, 0x2205, 0x0153 }, // 0x00006FC0
   { 0x0000, 0x0014, 0x0016, 0x0017, 0x2205, 0xF61D, 0x7AFF, 0x0058 }, // 0x00006FD0
   { 0x0000, 0x0012, 0x0014, 0x0017, 0xA5C5, 0x0A07, 0x5A3B, 0xFECF }, // 0x00006FE0
   { 0x0000, 0x0018, 0x0019, 0x001A, 0x7FEF, 0x03FF, 0x0000, 0x017A }, // 0x00006FF0
   { 0x0000, 0x0018, 0x001A, 0x001B, 0x7FFC, 0x0000, 0x019A, 0x0181 }, // 0x00007000
   { 0x0000, 0x001C, 0x001D, 0x001E, 0x8001, 0x0000, 0x0000, 0xFE7D }, // 0x00007010
   { 0x0000, 0x001C, 0x001E, 0x001F, 0x8014, 0xFC01, 0xFE67, 0xFE81 }, // 0x00007020
   { 0x0000, 0x0020, 0x0021, 0x0022, 0x9EC2, 0xC348, 0xC714, 0x007D }, // 0x00007030
   { 0x0000, 0x0023, 0x0020, 0x0022, 0xF36F, 0xFD27, 0x80A7, 0x0002 }, // 0x00007040
   { 0x0000, 0x0023, 0x0024, 0x0020, 0x5D2E, 0x31AB, 0xB7A8, 0xFF62 }, // 0x00007050
   { 0x0000, 0x0025, 0x0024, 0x0023, 0x6240, 0x3D7C, 0x3650, 0xFF70 }, // 0x00007060
   { 0x0000, 0x0021, 0x0024, 0x0025, 0x0C75, 0x02C6, 0x7F5C, 0xFFEC }, // 0x00007070
   { 0x0000, 0x0022, 0x0021, 0x0025, 0xA2B3, 0xCE8C, 0x4856, 0x008C }, // 0x00007080
   { 0x0000, 0x0022, 0x0025, 0x0023, 0xC19F, 0x6FBC, 0xFD42, 0x008B }, // 0x00007090
   { 0x0000, 0x0026, 0x0027, 0x0028, 0x9EC2, 0xC348, 0x38EC, 0x00E8 }, // 0x000070A0
   { 0x0000, 0x0026, 0x0028, 0x0029, 0xF36F, 0xFD27, 0x7F59, 0x00F1 }, // 0x000070B0
   { 0x0000, 0x0028, 0x002A, 0x0029, 0x5D2E, 0x31AB, 0x4858, 0xFFEA }, // 0x000070C0
   { 0x0000, 0x0029, 0x002A, 0x002B, 0x6240, 0x3D7C, 0xC9B0, 0xFF0A }, // 0x000070D0
   { 0x0000, 0x002B, 0x002A, 0x0027, 0x0C75, 0x02C6, 0x80A4, 0xFEFD }, // 0x000070E0
   { 0x0000, 0x002B, 0x0027, 0x0026, 0xA2B3, 0xCE8C, 0xB7AA, 0x0004 }, // 0x000070F0
   { 0x0000, 0x0029, 0x002B, 0x0026, 0xC19F, 0x6FBC, 0x02BE, 0x0090 }, // 0x00007100
   { 0x0000, 0x002C, 0x002D, 0x002E, 0x5A3B, 0x0A07, 0xA5C5, 0xFE26 }, // 0x00007110
   { 0x0000, 0x002D, 0x002F, 0x002E, 0xDDFB, 0xF61D, 0x8501, 0xFF72 }, // 0x00007120
   { 0x0000, 0x002E, 0x002F, 0x0030, 0x8501, 0x09E3, 0xDDFB, 0x0113 }, // 0x00007130
   { 0x0000, 0x0030, 0x0031, 0x002C, 0x1EF1, 0x0A50, 0x7BC5, 0x006E }, // 0x00007140
   { 0x0000, 0x0030, 0x002F, 0x0031, 0xA5C5, 0xF5F9, 0x5A3B, 0x01AF }, // 0x00007150
   { 0x0000, 0x002C, 0x0031, 0x002D, 0x7BC5, 0xF5B0, 0x1EF1, 0xFEBB }, // 0x00007160
   { 0x0000, 0x0032, 0x0033, 0x0034, 0x7BC5, 0xF5B0, 0xE10F, 0xFE81 }, // 0x00007170
   { 0x0000, 0x0033, 0x0035, 0x0036, 0xA5C5, 0xF5F9, 0xA5C5, 0x0106 }, // 0x00007180
   { 0x0000, 0x0034, 0x0033, 0x0036, 0x1EF1, 0x0A50, 0x843B, 0xFF86 }, // 0x00007190
   { 0x0000, 0x0036, 0x0035, 0x0037, 0x8501, 0x09E3, 0x2205, 0x0153 }, // 0x000071A0
   { 0x0000, 0x0037, 0x0035, 0x0032, 0xDDFB, 0xF61D, 0x7AFF, 0x0058 }, // 0x000071B0
   { 0x0000, 0x0037, 0x0032, 0x0034, 0x5A3B, 0x0A07, 0x5A3B, 0xFECF }, // 0x000071C0
   { 0x0000, 0x0038, 0x0039, 0x003A, 0x8001, 0x0000, 0x0000, 0x017F }, // 0x000071D0
   { 0x0000, 0x0038, 0x003A, 0x003B, 0x8014, 0x03FF, 0x0199, 0x017B }, // 0x000071E0
   { 0x0000, 0x003C, 0x003D, 0x003E, 0x7FEF, 0xFC01, 0x0000, 0xFE82 }, // 0x000071F0
   { 0x0000, 0x003C, 0x003E, 0x003F, 0x7FFC, 0x0000, 0xFE66, 0xFE7B }, // 0x00007200
   { 0x0001, 0x0040, 0x0041, 0x0042, 0x0000, 0x0000, 0x8001, 0xFFDF }, // 0x00007210
   { 0x0002, 0x0043, 0x0040, 0x0042, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00007220
   { 0x0002, 0x0043, 0x0042, 0x0044, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00007230
   { 0x0001, 0x0042, 0x0041, 0x0044, 0x8001, 0x0000, 0x0000, 0x0131 }, // 0x00007240
   { 0x0001, 0x0045, 0x0046, 0x0047, 0x8001, 0x0000, 0x0000, 0x0131 }, // 0x00007250
   { 0x0002, 0x0045, 0x0047, 0x0048, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00007260
   { 0x0002, 0x0045, 0x0048, 0x0049, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00007270
   { 0x0001, 0x0047, 0x0046, 0x0048, 0x0000, 0x0000, 0x7FFF, 0x00CF }, // 0x00007280
   { 0x0003, 0x0041, 0x0040, 0x0048, 0xBD3E, 0x6D35, 0x0000, 0x0114 }, // 0x00007290
   { 0x0003, 0x0041, 0x0048, 0x0046, 0xBD3E, 0x6D35, 0x0000, 0x0114 }, // 0x000072A0
   { 0x0003, 0x004A, 0x004B, 0x004C, 0x4352, 0x6CDD, 0x0000, 0x0117 }, // 0x000072B0
   { 0x0003, 0x004A, 0x004C, 0x004D, 0x4352, 0x6CDD, 0x0000, 0x0117 }, // 0x000072C0
   { 0x0001, 0x004B, 0x004A, 0x004E, 0x0000, 0x0000, 0x7FFF, 0x00CF }, // 0x000072D0
   { 0x0002, 0x004F, 0x004B, 0x004E, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x000072E0
   { 0x0002, 0x004F, 0x004E, 0x0050, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x000072F0
   { 0x0001, 0x004E, 0x004A, 0x0050, 0x7FFF, 0x0000, 0x0000, 0x0131 }, // 0x00007300
   { 0x0001, 0x0051, 0x004D, 0x0052, 0x7FFF, 0x0000, 0x0000, 0x0131 }, // 0x00007310
   { 0x0002, 0x0051, 0x0052, 0x004C, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00007320
   { 0x0002, 0x0051, 0x004C, 0x0053, 0x0000, 0x7FFF, 0x0000, 0xFFDC }, // 0x00007330
   { 0x0001, 0x0052, 0x004D, 0x004C, 0x0000, 0x0000, 0x8001, 0xFFDF }, // 0x00007340
   { 0x0004, 0x0054, 0x0055, 0x0056, 0x0000, 0x7FFF, 0x0000, 0x0044 }, // 0x00007350
   { 0x0004, 0x0054, 0x0056, 0x0057, 0x0000, 0x7FFF, 0x0000, 0x0044 }, // 0x00007360

}; 

Vec3s gValleyObjects4Col_vtx_00007370[] = {
   { -203, -46, -17 }, // 0x00007370
   { -304, -219, -5 }, // 0x00007376
   { -312, -214, -24 }, // 0x0000737C
   { -221, -36, -19 }, // 0x00007382
   { -322, -208, -7 }, // 0x00007388
   { -213, -40, 0 }, // 0x0000738E
   { -312, -214, -216 }, // 0x00007394
   { -304, -219, -235 }, // 0x0000739A
   { -203, -46, -223 }, // 0x000073A0
   { -221, -36, -221 }, // 0x000073A6
   { -322, -208, -233 }, // 0x000073AC
   { -213, -40, -240 }, // 0x000073B2
   { -378, 216, -270 }, // 0x000073B8
   { -405, 36, -263 }, // 0x000073BE
   { -413, 216, -235 }, // 0x000073C4
   { -358, 36, -250 }, // 0x000073CA
   { -365, 216, -223 }, // 0x000073D0
   { -393, 36, -215 }, // 0x000073D6
   { -413, 216, -5 }, // 0x000073DC
   { -393, 36, -25 }, // 0x000073E2
   { -405, 36, 23 }, // 0x000073E8
   { -365, 216, -17 }, // 0x000073EE
   { -358, 36, 10 }, // 0x000073F4
   { -378, 216, 30 }, // 0x000073FA
   { -384, 187, -80 }, // 0x00007400
   { -383, 155, -80 }, // 0x00007406
   { -383, 155, -160 }, // 0x0000740C
   { -383, 187, -160 }, // 0x00007412
   { -387, 187, -160 }, // 0x00007418
   { -387, 155, -160 }, // 0x0000741E
   { -387, 155, -80 }, // 0x00007424
   { -388, 187, -80 }, // 0x0000742A
   { 312, -214, -24 }, // 0x00007430
   { 304, -219, -5 }, // 0x00007436
   { 203, -46, -17 }, // 0x0000743C
   { 221, -36, -19 }, // 0x00007442
   { 322, -208, -7 }, // 0x00007448
   { 213, -40, 0 }, // 0x0000744E
   { 203, -46, -223 }, // 0x00007454
   { 304, -219, -235 }, // 0x0000745A
   { 312, -214, -216 }, // 0x00007460
   { 221, -36, -221 }, // 0x00007466
   { 322, -208, -233 }, // 0x0000746C
   { 213, -40, -240 }, // 0x00007472
   { 413, 216, -235 }, // 0x00007478
   { 405, 36, -263 }, // 0x0000747E
   { 378, 216, -270 }, // 0x00007484
   { 358, 36, -250 }, // 0x0000748A
   { 365, 216, -223 }, // 0x00007490
   { 393, 36, -215 }, // 0x00007496
   { 405, 36, 23 }, // 0x0000749C
   { 393, 36, -25 }, // 0x000074A2
   { 413, 216, -5 }, // 0x000074A8
   { 358, 36, 10 }, // 0x000074AE
   { 365, 216, -17 }, // 0x000074B4
   { 378, 216, 30 }, // 0x000074BA
   { 383, 187, -160 }, // 0x000074C0
   { 383, 155, -160 }, // 0x000074C6
   { 383, 155, -80 }, // 0x000074CC
   { 384, 187, -80 }, // 0x000074D2
   { 388, 187, -80 }, // 0x000074D8
   { 387, 155, -80 }, // 0x000074DE
   { 387, 155, -160 }, // 0x000074E4
   { 387, 187, -160 }, // 0x000074EA
   { 588, 36, -33 }, // 0x000074F0
   { 305, -137, -33 }, // 0x000074F6
   { 305, 36, -33 }, // 0x000074FC
   { 588, 36, 140 }, // 0x00007502
   { 305, 36, 140 }, // 0x00007508
   { 305, 36, -380 }, // 0x0000750E
   { 305, -137, -207 }, // 0x00007514
   { 305, 36, -207 }, // 0x0000751A
   { 588, 36, -207 }, // 0x00007520
   { 588, 36, -380 }, // 0x00007526
   { -305, -139, -207 }, // 0x0000752C
   { -588, 36, -207 }, // 0x00007532
   { -588, 36, -33 }, // 0x00007538
   { -305, -139, -33 }, // 0x0000753E
   { -305, 36, -207 }, // 0x00007544
   { -588, 36, -380 }, // 0x0000754A
   { -305, 36, -380 }, // 0x00007550
   { -305, 36, 140 }, // 0x00007556
   { -305, 36, -33 }, // 0x0000755C
   { -588, 36, 140 }, // 0x00007562
   { 414, -68, -220 }, // 0x00007568
   { -420, -68, -222 }, // 0x0000756E
   { -420, -68, -22 }, // 0x00007574
   { 414, -68, -20 }, // 0x0000757A
}; 

CollisionHeader gValleyObjects4Col = { -588, -219, -380, 588, 216, 140, 88, gValleyObjects4Col_vtx_00007370, 82, gValleyObjects4Col_polygons_00006E50, gValleyObjects4Col_polygonTypes_00006E28, &gValleyObjects4Col_camDataList_00006E20, 0, 0 }; 

static u32 pad75AC = 0;

static Vtx object_spot09_objVtx_0075B0[19] = {
    VTX(1, 754, 2875, 2034, 1717, 0, 118, 18, 255),
    VTX(307, 822, 2875, 2391, 1698, 62, 102, 11, 255),
    VTX(307, 850, 2270, 2459, 579, 249, 46, 110, 255),
    VTX(-305, 850, 2270, 1598, 577, 9, 38, 113, 255),
    VTX(1, 754, 2875, 2034, 1717, 0, 118, 18, 255),
    VTX(-305, 822, 2875, 1678, 1698, 194, 102, 11, 255),
    VTX(1, 754, 2875, 2034, 1717, 0, 118, 18, 255),
    VTX(307, 822, 2875, 1959, 638, 62, 102, 11, 255),
    VTX(405, 425, 2875, 1959, 1270, 113, 38, 5, 255),
    VTX(579, 0, 2464, 2692, 2048, 59, 88, 54, 255),
    VTX(570, 0, 2875, 1962, 2048, 111, 43, 2, 255),
    VTX(579, 0, 2464, 2692, 2048, 59, 88, 54, 255),
    VTX(405, 425, 2875, 1959, 1270, 113, 38, 5, 255),
    VTX(-403, 425, 2875, 2109, 1269, 143, 38, 5, 255),
    VTX(-305, 822, 2875, 2109, 637, 194, 102, 11, 255),
    VTX(-577, 0, 2464, 1377, 2048, 197, 88, 55, 255),
    VTX(-577, 0, 2464, 1377, 2048, 197, 88, 55, 255),
    VTX(-569, 0, 2875, 2107, 2048, 145, 43, 2, 255),
    VTX(-403, 425, 2875, 2109, 1269, 143, 38, 5, 255),
}; 

static Vtx object_spot09_objVtx_0076E0[32] = {
    VTX(-1787, 0, 2234, 0, 2048, 193, 32, 96, 255),
    VTX(-577, 0, 2464, 1377, 2048, 197, 88, 55, 255),
    VTX(-305, 850, 2270, 1598, 577, 9, 38, 113, 255),
    VTX(-1600, 1200, 2000, 0, 0, 198, 80, 68, 255),
    VTX(307, 850, 2270, 2459, 579, 249, 46, 110, 255),
    VTX(1600, 1200, 2000, 4096, 0, 68, 78, 59, 255),
    VTX(1787, 0, 2234, 4096, 2048, 63, 32, 96, 255),
    VTX(579, 0, 2464, 2692, 2048, 59, 88, 54, 255),
    VTX(1600, 1200, 2000, 0, 1931, 68, 78, 59, 255),
    VTX(1600, 1200, -2000, 4096, 1931, 69, 73, 190, 255),
    VTX(0, 2200, 0, 2048, 109, 0, 120, 0, 255),
    VTX(-1600, 1200, -2000, 0, 1931, 187, 73, 190, 255),
    VTX(-1600, 1200, 2000, 4096, 1931, 198, 80, 68, 255),
    VTX(0, 2200, 0, 2048, 109, 0, 120, 0, 255),
    VTX(1600, 1200, -2000, 0, 1931, 69, 73, 190, 255),
    VTX(-1600, 1200, -2000, 4096, 1931, 187, 73, 190, 255),
    VTX(-1600, 1200, 2000, 0, 1931, 198, 80, 68, 255),
    VTX(1600, 1200, 2000, 4096, 1931, 68, 78, 59, 255),
    VTX(1787, 0, 2234, 0, 2048, 63, 32, 96, 255),
    VTX(1947, 0, 0, 4096, 2048, 117, 24, 0, 255),
    VTX(1600, 1200, 2000, 0, 0, 68, 78, 59, 255),
    VTX(1600, 1200, -2000, 8192, 0, 69, 73, 190, 255),
    VTX(1787, 0, -2234, 8192, 2048, 83, 29, 175, 255),
    VTX(-1947, 0, 0, 4096, 2048, 139, 24, 0, 255),
    VTX(-1787, 0, 2234, 8192, 2048, 193, 32, 96, 255),
    VTX(-1600, 1200, 2000, 8192, 0, 198, 80, 68, 255),
    VTX(-1600, 1200, -2000, 0, 0, 187, 73, 190, 255),
    VTX(-1787, 0, -2234, 0, 2048, 173, 29, 175, 255),
    VTX(1787, 0, -2234, 0, 2048, 83, 29, 175, 255),
    VTX(0, 0, -2394, 2047, 2045, 0, 29, 140, 255),
    VTX(1600, 1200, -2000, 2, 7, 69, 73, 190, 255),
    VTX(-1600, 1200, -2000, 4096, 0, 187, 73, 190, 255),
}; 

static Vtx object_spot09_objVtx_0078E0[3] = {
    VTX(0, 0, -2394, 2047, 2045, 0, 29, 140, 255),
    VTX(-1787, 0, -2234, 4094, 2041, 173, 29, 175, 255),
    VTX(-1600, 1200, -2000, 4096, 0, 187, 73, 190, 255),
}; 

static Vtx object_spot09_objVtx_007910[24] = {
    VTX(-1775, 228, -2211, -314, 104, 245, 65, 99, 255),
    VTX(-1869, 240, -2328, 1024, 0, 159, 69, 252, 255),
    VTX(-1869, 0, -2328, 1024, 2048, 163, 0, 75, 255),
    VTX(-1775, 0, -2211, -314, 2048, 163, 0, 75, 255),
    VTX(1772, 228, -2211, -314, 104, 157, 65, 12, 255),
    VTX(1865, 240, -2328, 1024, 0, 238, 69, 160, 255),
    VTX(1865, 0, -2328, 1024, 2048, 163, 0, 181, 255),
    VTX(1772, 0, -2211, -314, 2048, 163, 0, 181, 255),
    VTX(-1775, 228, 2211, -314, 104, 99, 65, 244, 255),
    VTX(-1869, 240, 2328, 1024, 0, 18, 69, 96, 255),
    VTX(-1869, 0, 2328, 1024, 2048, 93, 0, 75, 255),
    VTX(-1775, 0, 2211, -314, 2048, 93, 0, 75, 255),
    VTX(-540, 228, 2838, -314, 104, 99, 65, 244, 255),
    VTX(-633, 240, 2955, 1024, 0, 18, 69, 96, 255),
    VTX(-633, 0, 2955, 1024, 2048, 93, 0, 75, 255),
    VTX(-540, 0, 2838, -314, 2048, 93, 0, 75, 255),
    VTX(544, 228, 2843, -314, 104, 11, 65, 157, 255),
    VTX(638, 240, 2960, 1024, 0, 97, 69, 4, 255),
    VTX(638, 0, 2960, 1024, 2048, 93, 0, 181, 255),
    VTX(544, 0, 2843, -314, 2048, 93, 0, 181, 255),
    VTX(1772, 228, 2211, -314, 104, 11, 65, 157, 255),
    VTX(1865, 240, 2328, 1024, 0, 97, 69, 4, 255),
    VTX(1865, 0, 2328, 1024, 2048, 93, 0, 181, 255),
    VTX(1772, 0, 2211, -314, 2048, 93, 0, 181, 255),
}; 

static Vtx object_spot09_objVtx_007A90[16] = {
    VTX(275, 855, 2895, 1938, 1707, 196, 1, 103, 255),
    VTX(275, 855, 2831, 1384, 1707, 196, 1, 153, 255),
    VTX(262, 0, 2863, 1661, 0, 137, 254, 0, 255),
    VTX(317, 0, 2895, 554, 0, 60, 255, 103, 255),
    VTX(275, 855, 2895, 277, 1707, 196, 1, 103, 255),
    VTX(262, 0, 2863, 0, 0, 137, 254, 0, 255),
    VTX(330, 855, 2863, 830, 1707, 119, 2, 0, 255),
    VTX(317, 0, 2831, 1107, 0, 60, 255, 153, 255),
    VTX(-261, 0, 2863, 1661, 0, 119, 254, 0, 255),
    VTX(-274, 855, 2831, 1384, 1707, 60, 1, 153, 255),
    VTX(-274, 855, 2895, 1938, 1707, 60, 1, 103, 255),
    VTX(-261, 0, 2863, 0, 0, 119, 254, 0, 255),
    VTX(-274, 855, 2895, 277, 1707, 60, 1, 103, 255),
    VTX(-315, 0, 2895, 554, 0, 196, 255, 103, 255),
    VTX(-328, 855, 2863, 830, 1707, 137, 2, 0, 255),
    VTX(-315, 0, 2831, 1107, 0, 196, 255, 153, 255),
}; 

static Vtx object_spot09_objVtx_007B90[11] = {
    VTX(-577, 205, 1264, 267, 1308, 85, 75, 62, 255),
    VTX(623, 205, 1264, 1850, 1308, 85, 75, 62, 255),
    VTX(623, 760, 1264, 1850, 585, 71, 64, 54, 255),
    VTX(-577, 760, 1264, 267, 585, 71, 64, 54, 255),
    VTX(984, 28, 2348, 2321, 1670, 34, 34, 34, 255),
    VTX(579, 0, 2464, 1786, 1708, 69, 69, 69, 255),
    VTX(1, 0, 2464, 1024, 1708, 249, 215, 174, 255),
    VTX(-577, 0, 2464, 262, 1708, 69, 69, 69, 255),
    VTX(-941, 26, 2355, -217, 1672, 34, 34, 34, 255),
    VTX(-873, 1005, 2111, -126, 297, 34, 34, 34, 255),
    VTX(917, 1004, 2105, 2233, 299, 34, 34, 34, 255),
}; 

static Vtx object_spot09_objVtx_007C40[11] = {
    VTX(292, 807, 2280, 0, 0, 235, 185, 134, 255),
    VTX(550, 0, 2464, 0, 1024, 235, 185, 134, 255),
    VTX(517, 0, 3007, 1024, 1024, 249, 215, 174, 0),
    VTX(292, 781, 2855, 1024, 0, 249, 215, 174, 0),
    VTX(-290, 781, 2855, 1024, 0, 249, 215, 174, 0),
    VTX(-517, 0, 2991, 1024, 1024, 249, 215, 174, 0),
    VTX(-548, 0, 2464, 0, 1024, 235, 185, 134, 255),
    VTX(-290, 807, 2280, 0, 0, 235, 185, 134, 255),
    VTX(1, 716, 2855, 1024, 512, 249, 215, 174, 0),
    VTX(-290, 807, 2280, 0, 1024, 235, 185, 134, 255),
    VTX(-290, 781, 2855, 1024, 1024, 249, 215, 174, 0),
}; 

static Vtx object_spot09_objVtx_007CF0[5] = {
    VTX(-548, 0, 2464, 0, 1024, 87, 68, 54, 255),
    VTX(-502, 0, 3255, 1024, 1024, 249, 215, 174, 0),
    VTX(1, 0, 2464, -9, 509, 155, 110, 75, 255),
    VTX(501, 0, 3279, 1024, 0, 249, 215, 174, 0),
    VTX(550, 0, 2464, -17, -5, 87, 68, 54, 255),
}; 

Gfx gCarpentersTentDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_spot09_objTex_017890),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 0, 7, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 8, 0, 0, 0, 2, 6, 0, 0, 7, 0),
    gsDPSetTileSize(0, 0, 0, 508, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 249, 215, 174, 255),
    gsSPVertex(&object_spot09_objVtx_0075B0[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(3, 5, 6, 0, 2, 7, 8, 0),
    gsSP2Triangles(9, 2, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 3, 0, 15, 13, 3, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_0076E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 3, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 13, 0, 16, 17, 10, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(19, 22, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(23, 25, 26, 0, 27, 23, 26, 0),
    gsSP2Triangles(28, 29, 30, 0, 29, 31, 30, 0),
    gsSPVertex(&object_spot09_objVtx_0078E0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_015090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_spot09_objVtx_007910[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_008490),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_spot09_objVtx_007A90[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 4, 3, 0, 7, 6, 3, 0),
    gsSP2Triangles(1, 6, 7, 0, 2, 1, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(13, 12, 14, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 14, 9, 0, 15, 9, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_spot09_objTex_016090),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 249, 215, 174, 255),
    gsSPVertex(&object_spot09_objVtx_007B90[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 1, 5, 0, 1, 6, 5, 0),
    gsSP2Triangles(1, 0, 6, 0, 0, 7, 6, 0),
    gsSP2Triangles(0, 8, 7, 0, 9, 3, 2, 0),
    gsSP2Triangles(9, 2, 10, 0, 8, 0, 3, 0),
    gsSP2Triangles(8, 3, 9, 0, 10, 2, 1, 0),
    gsSP1Triangle(10, 1, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx gCarpentersTentEntranceDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_spot09_objTex_017490),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, SHADE,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 249, 215, 174, 255),
    gsSPVertex(&object_spot09_objVtx_007C40[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(0, 8, 9, 0, 8, 10, 9, 0),
    gsSP1Triangle(0, 3, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, object_spot09_objTex_017090),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetRenderMode(G_RM_OPA_SURF, G_RM_AA_ZB_XLU_DECAL2),
    gsSPVertex(&object_spot09_objVtx_007CF0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(3, 4, 2, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_008118[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gValleyObjects3Col_camDataList_00008120[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gValleyObjects3Col_polygonTypes_00008128[] = {
   0x00200000, 0x000007C0,
   0x00000000, 0x000007C0,
   0x80000000, 0x000007C0,
}; 

CollisionPoly gValleyObjects3Col_polygons_00008140[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xF461 }, // 0x00008140
   { 0x0000, 0x0003, 0x0004, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xF461 }, // 0x00008150
   { 0x0000, 0x0002, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xF461 }, // 0x00008160
   { 0x0000, 0x0002, 0x0004, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF461 }, // 0x00008170
   { 0x0000, 0x0006, 0x0007, 0x0008, 0x0000, 0x023D, 0x7FFA, 0xF660 }, // 0x00008180
   { 0x0000, 0x0006, 0x0008, 0x0009, 0x0000, 0x023D, 0x7FFA, 0xF660 }, // 0x00008190
   { 0x0000, 0x0004, 0x0008, 0x0007, 0x8001, 0x0000, 0x0000, 0x00F1 }, // 0x000081A0
   { 0x0000, 0x0004, 0x0007, 0x0005, 0x8001, 0x0000, 0x0000, 0x00F1 }, // 0x000081B0
   { 0x0001, 0x0001, 0x0009, 0x0008, 0x0000, 0x8001, 0x0000, 0x0320 }, // 0x000081C0
   { 0x0001, 0x0001, 0x0008, 0x0004, 0x0000, 0x8001, 0x0000, 0x0320 }, // 0x000081D0
   { 0x0000, 0x0000, 0x0006, 0x0009, 0x7FFF, 0x0000, 0x0000, 0x00EF }, // 0x000081E0
   { 0x0000, 0x0000, 0x0009, 0x0001, 0x7FFF, 0x0000, 0x0000, 0x00EF }, // 0x000081F0
   { 0x0000, 0x000A, 0x0000, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xF461 }, // 0x00008200
   { 0x0000, 0x0005, 0x000B, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF461 }, // 0x00008210
   { 0x0002, 0x0002, 0x0003, 0x000C, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00008220
   { 0x0002, 0x000D, 0x0002, 0x000C, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00008230
   { 0x0000, 0x000C, 0x0003, 0x000B, 0x7BC9, 0x208E, 0x0000, 0xFDD9 }, // 0x00008240
   { 0x0000, 0x000E, 0x000C, 0x000B, 0x7B62, 0x21FB, 0x022C, 0xFDA8 }, // 0x00008250
   { 0x0000, 0x000A, 0x0002, 0x000D, 0x843E, 0x20AC, 0x0000, 0xFDDA }, // 0x00008260
   { 0x0000, 0x000F, 0x000A, 0x000D, 0x849A, 0x21F0, 0x01EF, 0xFDAF }, // 0x00008270
   { 0x0000, 0x0010, 0x000F, 0x000D, 0xE8C4, 0x1E09, 0x7A3C, 0xF666 }, // 0x00008280
   { 0x0000, 0x0011, 0x0010, 0x000D, 0xEA8B, 0x1B5D, 0x7B2F, 0xF66E }, // 0x00008290
   { 0x0002, 0x000D, 0x000C, 0x0011, 0x0000, 0x66DA, 0x4C30, 0xF795 }, // 0x000082A0
   { 0x0002, 0x0011, 0x000C, 0x0012, 0x0000, 0x66DA, 0x4C30, 0xF795 }, // 0x000082B0
   { 0x0000, 0x0013, 0x0012, 0x000C, 0x157D, 0x1B5E, 0x7B2D, 0xF66E }, // 0x000082C0
   { 0x0000, 0x0013, 0x000C, 0x000E, 0x1745, 0x1E0B, 0x7A3A, 0xF666 }, // 0x000082D0
   { 0x0002, 0x0012, 0x0014, 0x0015, 0x43D6, 0x6C8A, 0x0000, 0xF8B6 }, // 0x000082E0
   { 0x0002, 0x0016, 0x0011, 0x0015, 0xBC2A, 0x6C8A, 0x0000, 0xF8B6 }, // 0x000082F0
   { 0x0002, 0x0014, 0x0016, 0x0015, 0x0000, 0x727C, 0xC6C2, 0xF850 }, // 0x00008300
   { 0x0002, 0x0011, 0x0012, 0x0015, 0x0000, 0x727C, 0x393E, 0xF850 }, // 0x00008310
   { 0x0000, 0x0013, 0x0017, 0x0012, 0x7DE0, 0x1560, 0x0904, 0xF885 }, // 0x00008320
   { 0x0000, 0x0017, 0x0014, 0x0012, 0x7AF5, 0x238E, 0x0000, 0xF8B2 }, // 0x00008330
   { 0x0000, 0x0017, 0x0018, 0x0014, 0x7DE0, 0x1560, 0xF6FC, 0xF885 }, // 0x00008340
   { 0x0000, 0x0019, 0x0010, 0x0011, 0x8220, 0x1560, 0x0904, 0xF885 }, // 0x00008350
   { 0x0000, 0x0019, 0x0011, 0x0016, 0x850B, 0x238E, 0x0000, 0xF8B2 }, // 0x00008360
   { 0x0000, 0x001A, 0x0019, 0x0016, 0x8220, 0x1560, 0xF6FC, 0xF885 }, // 0x00008370
   { 0x0000, 0x0018, 0x001B, 0x0014, 0x0B2D, 0x1A14, 0x8330, 0xF6E2 }, // 0x00008380
   { 0x0000, 0x001B, 0x0016, 0x0014, 0x0000, 0x27EE, 0x8664, 0xF71D }, // 0x00008390
   { 0x0000, 0x001B, 0x001A, 0x0016, 0xF4D3, 0x1A14, 0x8330, 0xF6E2 }, // 0x000083A0

}; 

Vec3s gValleyObjects3Col_vtx_000083B0[] = {
   { -239, 0, 2975 }, // 0x000083B0
   { -239, 800, 2975 }, // 0x000083B6
   { -305, 1000, 2975 }, // 0x000083BC
   { 307, 1000, 2975 }, // 0x000083C2
   { 241, 800, 2975 }, // 0x000083C8
   { 241, 0, 2975 }, // 0x000083CE
   { -239, 0, 2464 }, // 0x000083D4
   { 241, 0, 2464 }, // 0x000083DA
   { 241, 800, 2450 }, // 0x000083E0
   { -239, 800, 2450 }, // 0x000083E6
   { -569, 0, 2975 }, // 0x000083EC
   { 570, 0, 2975 }, // 0x000083F2
   { 307, 1000, 2270 }, // 0x000083F8
   { -305, 1000, 2270 }, // 0x000083FE
   { 579, 0, 2464 }, // 0x00008404
   { -577, 0, 2464 }, // 0x0000840A
   { -1787, 0, 2234 }, // 0x00008410
   { -1600, 1200, 2000 }, // 0x00008416
   { 1600, 1200, 2000 }, // 0x0000841C
   { 1787, 0, 2234 }, // 0x00008422
   { 1600, 1200, -2000 }, // 0x00008428
   { 0, 2200, 0 }, // 0x0000842E
   { -1600, 1200, -2000 }, // 0x00008434
   { 1947, 0, 0 }, // 0x0000843A
   { 1787, 0, -2234 }, // 0x00008440
   { -1947, 0, 0 }, // 0x00008446
   { -1787, 0, -2234 }, // 0x0000844C
   { 0, 0, -2394 }, // 0x00008452
}; 

CollisionHeader gValleyObjects3Col = { -1947, 0, -2394, 1947, 2200, 3279, 28, gValleyObjects3Col_vtx_000083B0, 39, gValleyObjects3Col_polygons_00008140, gValleyObjects3Col_polygonTypes_00008128, &gValleyObjects3Col_camDataList_00008120, 0, 0 }; 

static u32 pad8484 = 0;
static u32 pad8488 = 0;
static u32 pad848C = 0;

u64 object_spot09_objTex_008490[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_008490.rgb5a1.inc.c"
};

u64 object_spot09_objTex_008C90[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_008C90.rgb5a1.inc.c"
};

u64 object_spot09_objTex_009490[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_009490.rgb5a1.inc.c"
};

u64 object_spot09_objTex_00A490[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_00A490.rgb5a1.inc.c"
};

u64 object_spot09_objTex_00AC90[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_00AC90.rgb5a1.inc.c"
};

u64 object_spot09_objTex_00B490[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_00B490.rgb5a1.inc.c"
};

u64 object_spot09_objTex_00BC90[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_00BC90.rgb5a1.inc.c"
};

u64 object_spot09_objTex_00CC90[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_00CC90.rgb5a1.inc.c"
};

u64 object_spot09_objTex_00DC90[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_00DC90.rgb5a1.inc.c"
};

u64 object_spot09_objTex_00EC90[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_00EC90.rgb5a1.inc.c"
};

u64 object_spot09_objTex_00FC90[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_00FC90.rgb5a1.inc.c"
};

u64 object_spot09_objTex_010090[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_010090.rgb5a1.inc.c"
};

u64 object_spot09_objTex_011090[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_011090.rgb5a1.inc.c"
};

u64 object_spot09_objTex_012090[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_012090.rgb5a1.inc.c"
};

u64 object_spot09_objTex_013090[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_013090.rgb5a1.inc.c"
};

u64 object_spot09_objTex_014090[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_014090.rgb5a1.inc.c"
};

u64 object_spot09_objTex_015090[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_015090.rgb5a1.inc.c"
};

u64 object_spot09_objTex_016090[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_016090.rgb5a1.inc.c"
};

u64 object_spot09_objTex_017090[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_017090.i8.inc.c"
};

u64 object_spot09_objTex_017490[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_017490.i8.inc.c"
};

u64 object_spot09_objTex_017890[] = {
#include "assets/objects/object_spot09_obj/object_spot09_objTex_017890.i8.inc.c"
};


