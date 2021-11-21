#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_ydan_objects.h"

static Vtx object_ydan_objectsVtx_003800[5];
static Vtx object_ydan_objectsVtx_004AF8[32];
static Vtx object_ydan_objectsVtx_004CF8[26];
static Vtx object_ydan_objectsVtx_004E98[24];
static Vtx object_ydan_objectsVtx_005D50[9];
static Vtx object_ydan_objectsVtx_005EE0[6];
static Vtx object_ydan_objectsVtx_006080[19];
static Vtx object_ydan_objectsVtx_006490[14];
static Vtx object_ydan_objectsVtx_0066E0[4];
static Vtx object_ydan_objectsVtx_006720[4];
static Vtx object_ydan_objectsVtx_006760[4];
static Vtx object_ydan_objectsVtx_006850[4];
static Vtx object_ydan_objectsVtx_006890[4];
static Vtx object_ydan_objectsVtx_0068D0[4];
static Vtx object_ydan_objectsVtx_0073C8[4];
static Vtx object_ydan_objectsVtx_007408[12];
static Vtx object_ydan_objectsVtx_0074C8[4];
static Vtx object_ydan_objectsVtx_0081D8[32];
static Vtx object_ydan_objectsVtx_0083D8[63];
static Vtx object_ydan_objectsVtx_0087C8[32];
static Vtx object_ydan_objectsVtx_0089C8[32];
static Vtx object_ydan_objectsVtx_008BC8[28];

u64 object_ydan_objectsTex_000000[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_000000.rgb5a1.inc.c"
};

u64 object_ydan_objectsTex_000800[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_000800.rgb5a1.inc.c"
};

u64 object_ydan_objectsTex_001000[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_001000.ia16.inc.c"
};

u64 object_ydan_objectsTex_002000[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_002000.rgb5a1.inc.c"
};

u64 object_ydan_objectsTex_002800[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_002800.rgb5a1.inc.c"
};

static Vtx object_ydan_objectsVtx_003800[5] = {
    VTX(0, -400, 0, 512, 2219, 119, 119, 119, 255),
    VTX(200, 0, 0, 1024, 683, 119, 119, 119, 255),
    VTX(0, -50, 0, 512, 1024, 255, 255, 255, 229),
    VTX(100, 200, 0, 768, 85, 119, 119, 119, 255),
    VTX(-200, -100, 0, 0, 1365, 119, 119, 119, 255),
}; 

Gfx gDTUnknownWebDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_001000),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 229),
    gsSPVertex(&object_ydan_objectsVtx_003800[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 0, 2, 4, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0038E8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 object_ydan_objectsTex_0038F0[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_0038F0.rgb5a1.inc.c"
};

static u8 unaccounted_003AF0[8] = {
    0x00, 0x00, 0x02, 0x58, 0x00, 0x8D, 0x00, 0x7F, 
}; 

u64 object_ydan_objectsTex_003AF8[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_003AF8.ci8.inc.c"
};

u64 object_ydan_objectsTex_0042F8[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_0042F8.ci8.inc.c"
};

static Vtx object_ydan_objectsVtx_004AF8[32] = {
    VTX(900, 0, -1900, 5061, 768, 51, 51, 51, 255),
    VTX(900, 800, -1900, 5061, 0, 255, 255, 255, 255),
    VTX(1700, 800, -1900, 4155, 0, 255, 255, 255, 255),
    VTX(1700, 0, -1900, 4155, 768, 51, 51, 51, 255),
    VTX(500, 0, -1500, 5691, 768, 51, 51, 51, 255),
    VTX(500, 800, -1500, 5691, 0, 255, 255, 255, 255),
    VTX(500, 0, -700, 6597, 768, 51, 51, 51, 255),
    VTX(500, 800, -700, 6597, 0, 255, 255, 255, 255),
    VTX(900, 0, -300, 1083, 768, 51, 51, 51, 255),
    VTX(900, 800, -300, 1083, 0, 255, 255, 255, 255),
    VTX(500, 800, -700, 453, 0, 255, 255, 255, 255),
    VTX(500, 0, -700, 453, 768, 51, 51, 51, 255),
    VTX(1700, 0, -300, 1989, 768, 51, 51, 51, 255),
    VTX(1700, 800, -300, 1989, 0, 255, 255, 255, 255),
    VTX(2100, 0, -700, 2619, 768, 51, 51, 51, 255),
    VTX(2100, 800, -700, 2619, 0, 255, 255, 255, 255),
    VTX(2100, 0, -1500, 3525, 768, 51, 51, 51, 255),
    VTX(2100, 800, -1500, 3525, 0, 255, 255, 255, 255),
    VTX(-1500, 0, -1900, 5061, 1792, 51, 51, 51, 255),
    VTX(-1500, 1200, -1900, 5061, 0, 255, 255, 255, 255),
    VTX(-700, 1200, -1900, 4155, 0, 255, 255, 255, 255),
    VTX(-700, 0, -1900, 4155, 1792, 51, 51, 51, 255),
    VTX(-1900, 0, -1500, 5691, 1792, 51, 51, 51, 255),
    VTX(-1900, 1200, -1500, 5691, 0, 255, 255, 255, 255),
    VTX(-1900, 0, -700, 6597, 1792, 51, 51, 51, 255),
    VTX(-1900, 1200, -700, 6597, 0, 255, 255, 255, 255),
    VTX(-1500, 0, -300, 1083, 1792, 51, 51, 51, 255),
    VTX(-1500, 1200, -300, 1083, 0, 255, 255, 255, 255),
    VTX(-1900, 1200, -700, 453, 0, 255, 255, 255, 255),
    VTX(-1900, 0, -700, 453, 1792, 51, 51, 51, 255),
    VTX(-700, 0, -300, 1989, 1792, 51, 51, 51, 255),
    VTX(-700, 1200, -300, 1989, 0, 255, 255, 255, 255),
}; 

static Vtx object_ydan_objectsVtx_004CF8[26] = {
    VTX(-300, 0, -700, 2619, 1792, 51, 51, 51, 255),
    VTX(-300, 1200, -700, 2619, 0, 255, 255, 255, 255),
    VTX(-700, 1200, -300, 1989, 0, 255, 255, 255, 255),
    VTX(-700, 0, -300, 1989, 1792, 51, 51, 51, 255),
    VTX(-300, 0, -1500, 3525, 1792, 51, 51, 51, 255),
    VTX(-300, 1200, -1500, 3525, 0, 255, 255, 255, 255),
    VTX(-700, 0, -1900, 4155, 1792, 51, 51, 51, 255),
    VTX(-700, 1200, -1900, 4155, 0, 255, 255, 255, 255),
    VTX(0, 0, 400, 5061, 1280, 51, 51, 51, 255),
    VTX(0, 1000, 400, 5061, 0, 255, 255, 255, 255),
    VTX(800, 1000, 400, 4155, 0, 255, 255, 255, 255),
    VTX(800, 0, 400, 4155, 1280, 51, 51, 51, 255),
    VTX(-400, 0, 800, 5691, 1280, 51, 51, 51, 255),
    VTX(-400, 1000, 800, 5691, 0, 255, 255, 255, 255),
    VTX(-400, 0, 1600, 6597, 1280, 51, 51, 51, 255),
    VTX(-400, 1000, 1600, 6597, 0, 255, 255, 255, 255),
    VTX(0, 0, 2000, 1083, 1280, 51, 51, 51, 255),
    VTX(0, 1000, 2000, 1083, 0, 255, 255, 255, 255),
    VTX(-400, 1000, 1600, 453, 0, 255, 255, 255, 255),
    VTX(-400, 0, 1600, 453, 1280, 51, 51, 51, 255),
    VTX(800, 0, 2000, 1989, 1280, 51, 51, 51, 255),
    VTX(800, 1000, 2000, 1989, 0, 255, 255, 255, 255),
    VTX(1200, 0, 1600, 2619, 1280, 51, 51, 51, 255),
    VTX(1200, 1000, 1600, 2619, 0, 255, 255, 255, 255),
    VTX(1200, 0, 800, 3525, 1280, 51, 51, 51, 255),
    VTX(1200, 1000, 800, 3525, 0, 255, 255, 255, 255),
}; 

static Vtx object_ydan_objectsVtx_004E98[24] = {
    VTX(-300, 1200, -1500, 1536, 1024, 255, 255, 255, 255),
    VTX(-700, 1200, -1900, 2048, 1024, 255, 255, 255, 255),
    VTX(-1500, 1200, -1900, 2560, 512, 255, 255, 255, 255),
    VTX(-1900, 1200, -1500, 2560, 0, 255, 255, 255, 255),
    VTX(-1900, 1200, -700, 2048, -512, 255, 255, 255, 255),
    VTX(-1500, 1200, -300, 1536, -512, 255, 255, 255, 255),
    VTX(-700, 1200, -300, 1024, 0, 255, 255, 255, 255),
    VTX(-300, 1200, -700, 1024, 512, 255, 255, 255, 255),
    VTX(2100, 800, -700, -512, 2048, 255, 255, 255, 255),
    VTX(2100, 800, -1500, 0, 2560, 255, 255, 255, 255),
    VTX(1700, 800, -1900, 512, 2560, 255, 255, 255, 255),
    VTX(900, 800, -1900, 1024, 2048, 255, 255, 255, 255),
    VTX(500, 800, -1500, 1024, 1536, 255, 255, 255, 255),
    VTX(500, 800, -700, 512, 1024, 255, 255, 255, 255),
    VTX(900, 800, -300, 0, 1024, 255, 255, 255, 255),
    VTX(1700, 800, -300, -512, 1536, 255, 255, 255, 255),
    VTX(1200, 1000, 1600, -1280, -256, 255, 255, 255, 255),
    VTX(1200, 1000, 800, -768, 256, 255, 255, 255, 255),
    VTX(800, 1000, 400, -256, 256, 255, 255, 255, 255),
    VTX(0, 1000, 400, 256, -256, 255, 255, 255, 255),
    VTX(-400, 1000, 800, 256, -768, 255, 255, 255, 255),
    VTX(-400, 1000, 1600, -256, -1280, 255, 255, 255, 255),
    VTX(0, 1000, 2000, -768, -1280, 255, 255, 255, 255),
    VTX(800, 1000, 2000, -1280, -768, 255, 255, 255, 255),
}; 

Gfx gDTRisingPlatformsDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ydan_objectsTex_0042F8),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_0038F0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ydan_objectsVtx_004AF8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 15, 0, 16, 15, 14, 0),
    gsSP2Triangles(3, 2, 17, 0, 3, 17, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 18, 20, 21, 0),
    gsSP2Triangles(22, 23, 19, 0, 22, 19, 18, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 29, 0),
    gsSP2Triangles(30, 31, 27, 0, 30, 27, 26, 0),
    gsSPVertex(&object_ydan_objectsVtx_004CF8[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 9, 0, 12, 9, 8, 0),
    gsSP2Triangles(14, 15, 13, 0, 14, 13, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 17, 0, 20, 17, 16, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(24, 25, 23, 0, 24, 23, 22, 0),
    gsSP2Triangles(11, 10, 25, 0, 11, 25, 24, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ydan_objectsTex_003AF8),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsSPVertex(&object_ydan_objectsVtx_004E98[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsSP2Triangles(0, 5, 6, 0, 0, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 12, 13, 0),
    gsSP2Triangles(8, 13, 14, 0, 8, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 20, 0, 16, 20, 21, 0),
    gsSP2Triangles(16, 21, 22, 0, 16, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_005228[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gDTRisingPlatformsCol_camDataList_00005230[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gDTRisingPlatformsCol_polygonTypes_00005238[] = {
   0x00000000, 0x000007C0,
}; 

CollisionPoly gDTRisingPlatformsCol_polygons_00005240[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFB50 }, // 0x00005240
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFB50 }, // 0x00005250
   { 0x0000, 0x0000, 0x0003, 0x0004, 0x0000, 0x7FFF, 0x0000, 0xFB50 }, // 0x00005260
   { 0x0000, 0x0000, 0x0004, 0x0005, 0x0000, 0x7FFF, 0x0000, 0xFB50 }, // 0x00005270
   { 0x0000, 0x0000, 0x0005, 0x0006, 0x0000, 0x7FFF, 0x0000, 0xFB50 }, // 0x00005280
   { 0x0000, 0x0000, 0x0006, 0x0007, 0x0000, 0x7FFF, 0x0000, 0xFB50 }, // 0x00005290
   { 0x0000, 0x0008, 0x0009, 0x000A, 0x0000, 0x7FFF, 0x0000, 0xFCE0 }, // 0x000052A0
   { 0x0000, 0x0008, 0x000A, 0x000B, 0x0000, 0x7FFF, 0x0000, 0xFCE0 }, // 0x000052B0
   { 0x0000, 0x0008, 0x000B, 0x000C, 0x0000, 0x7FFF, 0x0000, 0xFCE0 }, // 0x000052C0
   { 0x0000, 0x0008, 0x000C, 0x000D, 0x0000, 0x7FFF, 0x0000, 0xFCE0 }, // 0x000052D0
   { 0x0000, 0x0008, 0x000D, 0x000E, 0x0000, 0x7FFF, 0x0000, 0xFCE0 }, // 0x000052E0
   { 0x0000, 0x0008, 0x000E, 0x000F, 0x0000, 0x7FFF, 0x0000, 0xFCE0 }, // 0x000052F0
   { 0x0000, 0x0010, 0x0011, 0x0012, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00005300
   { 0x0000, 0x0010, 0x0012, 0x0013, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00005310
   { 0x0000, 0x0010, 0x0013, 0x0014, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00005320
   { 0x0000, 0x0010, 0x0014, 0x0015, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00005330
   { 0x0000, 0x0010, 0x0015, 0x0016, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00005340
   { 0x0000, 0x0010, 0x0016, 0x0017, 0x0000, 0x7FFF, 0x0000, 0xFC18 }, // 0x00005350
   { 0x0000, 0x0018, 0x000E, 0x000D, 0xA57E, 0x0000, 0x5A82, 0x0351 }, // 0x00005360
   { 0x0000, 0x0018, 0x000D, 0x0019, 0xA57E, 0x0000, 0x5A82, 0x0351 }, // 0x00005370
   { 0x0000, 0x001A, 0x000F, 0x000E, 0x0000, 0x0000, 0x7FFF, 0x012C }, // 0x00005380
   { 0x0000, 0x001A, 0x000E, 0x0018, 0x0000, 0x0000, 0x7FFF, 0x012C }, // 0x00005390
   { 0x0000, 0x001B, 0x0008, 0x000F, 0x5A82, 0x0000, 0x5A82, 0xFC22 }, // 0x000053A0
   { 0x0000, 0x001B, 0x000F, 0x001A, 0x5A82, 0x0000, 0x5A82, 0xFC22 }, // 0x000053B0
   { 0x0000, 0x001C, 0x0009, 0x0008, 0x7FFF, 0x0000, 0x0000, 0xF7CC }, // 0x000053C0
   { 0x0000, 0x001C, 0x0008, 0x001B, 0x7FFF, 0x0000, 0x0000, 0xF7CC }, // 0x000053D0
   { 0x0000, 0x001D, 0x000A, 0x0009, 0x5A82, 0x0000, 0xA57E, 0xF60E }, // 0x000053E0
   { 0x0000, 0x001D, 0x0009, 0x001C, 0x5A82, 0x0000, 0xA57E, 0xF60E }, // 0x000053F0
   { 0x0000, 0x001E, 0x0002, 0x0001, 0x0000, 0x0000, 0x8001, 0xF894 }, // 0x00005400
   { 0x0000, 0x001E, 0x0001, 0x001F, 0x0000, 0x0000, 0x8001, 0xF894 }, // 0x00005410
   { 0x0000, 0x0020, 0x0003, 0x0002, 0xA57E, 0x0000, 0xA57E, 0xF69C }, // 0x00005420
   { 0x0000, 0x0020, 0x0002, 0x001E, 0xA57E, 0x0000, 0xA57E, 0xF69C }, // 0x00005430
   { 0x0000, 0x0021, 0x0004, 0x0003, 0x8001, 0x0000, 0x0000, 0xF894 }, // 0x00005440
   { 0x0000, 0x0021, 0x0003, 0x0020, 0x8001, 0x0000, 0x0000, 0xF894 }, // 0x00005450
   { 0x0000, 0x0022, 0x0005, 0x0004, 0xA57E, 0x0000, 0x5A82, 0xFCAF }, // 0x00005460
   { 0x0000, 0x0022, 0x0004, 0x0021, 0xA57E, 0x0000, 0x5A82, 0xFCAF }, // 0x00005470
   { 0x0000, 0x0023, 0x0006, 0x0005, 0x0000, 0x0000, 0x7FFF, 0x012C }, // 0x00005480
   { 0x0000, 0x0023, 0x0005, 0x0022, 0x0000, 0x0000, 0x7FFF, 0x012C }, // 0x00005490
   { 0x0000, 0x0024, 0x0007, 0x0006, 0x5A82, 0x0000, 0x5A82, 0x02C3 }, // 0x000054A0
   { 0x0000, 0x0024, 0x0006, 0x0023, 0x5A82, 0x0000, 0x5A82, 0x02C3 }, // 0x000054B0
   { 0x0000, 0x0025, 0x0000, 0x0007, 0x7FFF, 0x0000, 0x0000, 0x012C }, // 0x000054C0
   { 0x0000, 0x0025, 0x0007, 0x0024, 0x7FFF, 0x0000, 0x0000, 0x012C }, // 0x000054D0
   { 0x0000, 0x001F, 0x0001, 0x0000, 0x5A82, 0x0000, 0xA57E, 0xFCAF }, // 0x000054E0
   { 0x0000, 0x001F, 0x0000, 0x0025, 0x5A82, 0x0000, 0xA57E, 0xFCAF }, // 0x000054F0
   { 0x0000, 0x0026, 0x0013, 0x0012, 0x0000, 0x0000, 0x8001, 0x0190 }, // 0x00005500
   { 0x0000, 0x0026, 0x0012, 0x0027, 0x0000, 0x0000, 0x8001, 0x0190 }, // 0x00005510
   { 0x0000, 0x0028, 0x0014, 0x0013, 0xA57E, 0x0000, 0xA57E, 0x011B }, // 0x00005520
   { 0x0000, 0x0028, 0x0013, 0x0026, 0xA57E, 0x0000, 0xA57E, 0x011B }, // 0x00005530
   { 0x0000, 0x0029, 0x0015, 0x0014, 0x8001, 0x0000, 0x0000, 0xFE70 }, // 0x00005540
   { 0x0000, 0x0029, 0x0014, 0x0028, 0x8001, 0x0000, 0x0000, 0xFE70 }, // 0x00005550
   { 0x0000, 0x002A, 0x0016, 0x0015, 0xA57E, 0x0000, 0x5A82, 0xFA7A }, // 0x00005560
   { 0x0000, 0x002A, 0x0015, 0x0029, 0xA57E, 0x0000, 0x5A82, 0xFA7A }, // 0x00005570
   { 0x0000, 0x002B, 0x0017, 0x0016, 0x0000, 0x0000, 0x7FFF, 0xF830 }, // 0x00005580
   { 0x0000, 0x002B, 0x0016, 0x002A, 0x0000, 0x0000, 0x7FFF, 0xF830 }, // 0x00005590
   { 0x0000, 0x002C, 0x0010, 0x0017, 0x5A82, 0x0000, 0x5A82, 0xF844 }, // 0x000055A0
   { 0x0000, 0x002C, 0x0017, 0x002B, 0x5A82, 0x0000, 0x5A82, 0xF844 }, // 0x000055B0
   { 0x0000, 0x002D, 0x0011, 0x0010, 0x7FFF, 0x0000, 0x0000, 0xFB50 }, // 0x000055C0
   { 0x0000, 0x002D, 0x0010, 0x002C, 0x7FFF, 0x0000, 0x0000, 0xFB50 }, // 0x000055D0
   { 0x0000, 0x0027, 0x0012, 0x0011, 0x5A82, 0x0000, 0xA57E, 0xFEE5 }, // 0x000055E0
   { 0x0000, 0x0027, 0x0011, 0x002D, 0x5A82, 0x0000, 0xA57E, 0xFEE5 }, // 0x000055F0
   { 0x0000, 0x002E, 0x000B, 0x000A, 0x0000, 0x0000, 0x8001, 0xF894 }, // 0x00005600
   { 0x0000, 0x002E, 0x000A, 0x001D, 0x0000, 0x0000, 0x8001, 0xF894 }, // 0x00005610
   { 0x0000, 0x002F, 0x000C, 0x000B, 0xA57E, 0x0000, 0xA57E, 0xFD3D }, // 0x00005620
   { 0x0000, 0x002F, 0x000B, 0x002E, 0xA57E, 0x0000, 0xA57E, 0xFD3D }, // 0x00005630
   { 0x0000, 0x0019, 0x000D, 0x000C, 0x8001, 0x0000, 0x0000, 0x01F4 }, // 0x00005640
   { 0x0000, 0x0019, 0x000C, 0x002F, 0x8001, 0x0000, 0x0000, 0x01F4 }, // 0x00005650

}; 

Vec3s gDTRisingPlatformsCol_vtx_00005660[] = {
   { -300, 1200, -1500 }, // 0x00005660
   { -700, 1200, -1900 }, // 0x00005666
   { -1500, 1200, -1900 }, // 0x0000566C
   { -1900, 1200, -1500 }, // 0x00005672
   { -1900, 1200, -700 }, // 0x00005678
   { -1500, 1200, -300 }, // 0x0000567E
   { -700, 1200, -300 }, // 0x00005684
   { -300, 1200, -700 }, // 0x0000568A
   { 2100, 800, -700 }, // 0x00005690
   { 2100, 800, -1500 }, // 0x00005696
   { 1700, 800, -1900 }, // 0x0000569C
   { 900, 800, -1900 }, // 0x000056A2
   { 500, 800, -1500 }, // 0x000056A8
   { 500, 800, -700 }, // 0x000056AE
   { 900, 800, -300 }, // 0x000056B4
   { 1700, 800, -300 }, // 0x000056BA
   { 1200, 1000, 1600 }, // 0x000056C0
   { 1200, 1000, 800 }, // 0x000056C6
   { 800, 1000, 400 }, // 0x000056CC
   { 0, 1000, 400 }, // 0x000056D2
   { -400, 1000, 800 }, // 0x000056D8
   { -400, 1000, 1600 }, // 0x000056DE
   { 0, 1000, 2000 }, // 0x000056E4
   { 800, 1000, 2000 }, // 0x000056EA
   { 900, 0, -300 }, // 0x000056F0
   { 500, 0, -700 }, // 0x000056F6
   { 1700, 0, -300 }, // 0x000056FC
   { 2100, 0, -700 }, // 0x00005702
   { 2100, 0, -1500 }, // 0x00005708
   { 1700, 0, -1900 }, // 0x0000570E
   { -1500, 0, -1900 }, // 0x00005714
   { -700, 0, -1900 }, // 0x0000571A
   { -1900, 0, -1500 }, // 0x00005720
   { -1900, 0, -700 }, // 0x00005726
   { -1500, 0, -300 }, // 0x0000572C
   { -700, 0, -300 }, // 0x00005732
   { -300, 0, -700 }, // 0x00005738
   { -300, 0, -1500 }, // 0x0000573E
   { 0, 0, 400 }, // 0x00005744
   { 800, 0, 400 }, // 0x0000574A
   { -400, 0, 800 }, // 0x00005750
   { -400, 0, 1600 }, // 0x00005756
   { 0, 0, 2000 }, // 0x0000575C
   { 800, 0, 2000 }, // 0x00005762
   { 1200, 0, 1600 }, // 0x00005768
   { 1200, 0, 800 }, // 0x0000576E
   { 900, 0, -1900 }, // 0x00005774
   { 500, 0, -1500 }, // 0x0000577A
}; 

CollisionHeader gDTRisingPlatformsCol = { -1900, 0, -1900, 2100, 1200, 2000, 48, gDTRisingPlatformsCol_vtx_00005660, 66, gDTRisingPlatformsCol_polygons_00005240, gDTRisingPlatformsCol_polygonTypes_00005238, &gDTRisingPlatformsCol_camDataList_00005230, 0, 0 }; 

static u32 pad57AC = 0;

u64 object_ydan_objectsTex_0057B0[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_0057B0.rgb5a1.inc.c"
};

u64 object_ydan_objectsTex_005950[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_005950.ci8.inc.c"
};

static Vtx object_ydan_objectsVtx_005D50[9] = {
    VTX(-2800, 0, -4000, 2304, 3328, 0, 0, 0, 255),
    VTX(4800, 0, -4000, -768, 256, 0, 0, 0, 255),
    VTX(4800, 0, -2800, 0, -512, 119, 119, 119, 255),
    VTX(-2800, 0, -2800, 3072, 2560, 119, 119, 119, 255),
    VTX(0, 0, 0, 3328, -768, 255, 255, 255, 255),
    VTX(4800, 0, 2800, 3584, -4096, 119, 119, 119, 255),
    VTX(-2800, 0, 2800, 6656, -1024, 119, 119, 119, 255),
    VTX(4800, 0, 4000, 4352, -4864, 0, 0, 0, 255),
    VTX(-2800, 0, 4000, 7424, -1792, 0, 0, 0, 255),
}; 

Gfx gDTWaterPlaneDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ydan_objectsTex_005950),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 15, 0, 5, 14),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 5, 15, 0, 5, 14),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 1, 0, 0, 5, 14, 0, 5, 15),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_0057B0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1,
                       COMBINED, K5, SHADE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 127),
    gsDPSetEnvColor(0, 0, 0, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&object_ydan_objectsVtx_005D50[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 5, 6, 4, 0),
    gsSP2Triangles(7, 8, 6, 0, 7, 6, 5, 0),
    gsSP2Triangles(4, 2, 5, 0, 3, 4, 6, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_ydan_objectsVtx_005EE0[6] = {
    VTX(0, 1444, 0, 1154, 504, 255, 255, 255, 255),
    VTX(1400, 0, 0, 2162, 3640, 53, 53, 0, 255),
    VTX(1400, 2888, 0, 3218, -585, 53, 53, 0, 255),
    VTX(-1400, 2888, 0, 146, -2633, 53, 53, 0, 255),
    VTX(-1400, 0, 0, -910, 1592, 53, 53, 0, 255),
    VTX(0, 1444, 0, 1154, 504, 255, 255, 255, 255),
}; 

Gfx gDTWebWallDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_001000),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 229),
    gsSPVertex(&object_ydan_objectsVtx_005EE0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 1, 5, 0, 3, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_005FD8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gDTWebWallCol_camDataList_00005FE0[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gDTWebWallCol_polygonTypes_00005FE8[] = {
   0x0000C000, 0x000007C0,
}; 

CollisionPoly gDTWebWallCol_polygons_00005FF0[] = {
   { 0x0000, 0x8000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0000 }, // 0x00005FF0
   { 0x0000, 0x8003, 0x0004, 0x0000, 0x0000, 0x0000, 0x7FFF, 0x0000 }, // 0x00006000
   { 0x0000, 0x8004, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0x0000 }, // 0x00006010
   { 0x0000, 0x8003, 0x0000, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0000 }, // 0x00006020

}; 

Vec3s gDTWebWallCol_vtx_00006030[] = {
   { 0, 1444, 0 }, // 0x00006030
   { 1400, 0, 0 }, // 0x00006036
   { 1400, 2888, 0 }, // 0x0000603C
   { -1400, 2888, 0 }, // 0x00006042
   { -1400, 0, 0 }, // 0x00006048
}; 

CollisionHeader gDTWebWallCol = { -1400, 0, 0, 1400, 2888, 0, 5, gDTWebWallCol_vtx_00006030, 4, gDTWebWallCol_polygons_00005FF0, gDTWebWallCol_polygonTypes_00005FE8, &gDTWebWallCol_camDataList_00005FE0, 0, 0 }; 

static u32 pad607C = 0;

static Vtx object_ydan_objectsVtx_006080[19] = {
    VTX(0, 0, -1200, 1144, -3012, 53, 53, 0, 255),
    VTX(-849, 0, -849, 16, -2676, 53, 53, 0, 255),
    VTX(-424, -100, -424, 400, -1398, 255, 255, 255, 204),
    VTX(0, -100, -600, 964, -1566, 255, 255, 255, 204),
    VTX(600, -100, 0, 1506, 241, 255, 255, 255, 204),
    VTX(1200, 0, 0, 2229, 602, 53, 53, 0, 255),
    VTX(849, 0, -849, 2061, -1654, 53, 53, 0, 255),
    VTX(424, -100, -424, 1422, -887, 255, 255, 255, 204),
    VTX(424, -100, 424, 1166, 1157, 255, 255, 255, 204),
    VTX(849, 0, 849, 1550, 2435, 53, 53, 0, 255),
    VTX(-1200, 0, 0, -663, -843, 53, 53, 0, 255),
    VTX(-600, -100, 0, 60, -482, 255, 255, 255, 204),
    VTX(-424, -100, -424, 400, -1398, 255, 255, 255, 204),
    VTX(-849, 0, 849, -495, 1413, 53, 53, 0, 255),
    VTX(-424, -100, 424, 144, 646, 255, 255, 255, 204),
    VTX(0, 0, 1200, 422, 2771, 53, 53, 0, 255),
    VTX(0, -100, 600, 602, 1325, 255, 255, 255, 204),
    VTX(424, -100, 424, 1166, 1157, 255, 255, 255, 204),
    VTX(0, -100, 600, 602, 1325, 255, 255, 255, 204),
}; 

Gfx gDTWebFloorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_001000),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL1, 0, 1, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 204),
    gsSPVertex(&object_ydan_objectsVtx_006080[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 5, 0, 8, 5, 4, 0),
    gsSP2Triangles(1, 10, 11, 0, 1, 11, 12, 0),
    gsSP2Triangles(10, 13, 14, 0, 10, 14, 11, 0),
    gsSP2Triangles(13, 15, 16, 0, 13, 16, 14, 0),
    gsSP2Triangles(15, 9, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(3, 12, 7, 0, 12, 11, 14, 0),
    gsSP2Triangles(14, 18, 8, 0, 8, 4, 7, 0),
    gsSP2Triangles(12, 14, 8, 0, 12, 8, 7, 0),
    gsSP2Triangles(0, 3, 7, 0, 0, 7, 6, 0),
    gsSPEndDisplayList(),
}; 

CamData gDTWebFloorCol_camDataList_00006290[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gDTWebFloorCol_polygonTypes_00006298[] = {
   0x0000C000, 0x000007C8,
}; 

CollisionPoly gDTWebFloorCol_polygons_000062A0[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x08AB, 0x7DF8, 0x14F8, 0x00C5 }, // 0x000062A0
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x08B7, 0x7DF6, 0x14FE, 0x00C5 }, // 0x000062B0
   { 0x0000, 0x0004, 0x0005, 0x0006, 0xEB02, 0x7DF7, 0x08AE, 0x00C5 }, // 0x000062C0
   { 0x0000, 0x0004, 0x0006, 0x0007, 0xEB0E, 0x7DF9, 0x08B2, 0x00C5 }, // 0x000062D0
   { 0x0000, 0x0008, 0x0009, 0x0005, 0xEB08, 0x7DF8, 0xF755, 0x00C5 }, // 0x000062E0
   { 0x0000, 0x0008, 0x0005, 0x0004, 0xEB02, 0x7DF6, 0xF749, 0x00C5 }, // 0x000062F0
   { 0x0000, 0x0001, 0x000A, 0x000B, 0x14FE, 0x7DF7, 0x08AE, 0x00C5 }, // 0x00006300
   { 0x0000, 0x0001, 0x000B, 0x0002, 0x14F2, 0x7DF9, 0x08B2, 0x00C5 }, // 0x00006310
   { 0x0000, 0x000A, 0x000C, 0x000D, 0x14F8, 0x7DF8, 0xF755, 0x00C5 }, // 0x00006320
   { 0x0000, 0x000A, 0x000D, 0x000B, 0x14FE, 0x7DF6, 0xF749, 0x00C5 }, // 0x00006330
   { 0x0000, 0x000C, 0x000E, 0x000F, 0x08AE, 0x7DF7, 0xEB02, 0x00C5 }, // 0x00006340
   { 0x0000, 0x000C, 0x000F, 0x000D, 0x08B2, 0x7DF9, 0xEB0E, 0x00C5 }, // 0x00006350
   { 0x0000, 0x000E, 0x0009, 0x0008, 0xF755, 0x7DF8, 0xEB08, 0x00C5 }, // 0x00006360
   { 0x0000, 0x000E, 0x0008, 0x000F, 0xF749, 0x7DF6, 0xEB02, 0x00C5 }, // 0x00006370
   { 0x0000, 0x0003, 0x0002, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0064 }, // 0x00006380
   { 0x0000, 0x0002, 0x000B, 0x000D, 0x0000, 0x7FFF, 0x0000, 0x0064 }, // 0x00006390
   { 0x0000, 0x000D, 0x000F, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0064 }, // 0x000063A0
   { 0x0000, 0x0008, 0x0004, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0064 }, // 0x000063B0
   { 0x0000, 0x0002, 0x000D, 0x0008, 0x0000, 0x7FFF, 0x0000, 0x0064 }, // 0x000063C0
   { 0x0000, 0x0002, 0x0008, 0x0007, 0x0000, 0x7FFF, 0x0000, 0x0064 }, // 0x000063D0
   { 0x0000, 0x0000, 0x0003, 0x0007, 0xF749, 0x7DF6, 0x14FE, 0x00C5 }, // 0x000063E0
   { 0x0000, 0x0000, 0x0007, 0x0006, 0xF755, 0x7DF8, 0x14F8, 0x00C5 }, // 0x000063F0

}; 

Vec3s gDTWebFloorCol_vtx_00006400[] = {
   { 0, 0, -1200 }, // 0x00006400
   { -849, 0, -849 }, // 0x00006406
   { -424, -100, -424 }, // 0x0000640C
   { 0, -100, -600 }, // 0x00006412
   { 600, -100, 0 }, // 0x00006418
   { 1200, 0, 0 }, // 0x0000641E
   { 849, 0, -849 }, // 0x00006424
   { 424, -100, -424 }, // 0x0000642A
   { 424, -100, 424 }, // 0x00006430
   { 849, 0, 849 }, // 0x00006436
   { -1200, 0, 0 }, // 0x0000643C
   { -600, -100, 0 }, // 0x00006442
   { -849, 0, 849 }, // 0x00006448
   { -424, -100, 424 }, // 0x0000644E
   { 0, 0, 1200 }, // 0x00006454
   { 0, -100, 600 }, // 0x0000645A
}; 

CollisionHeader gDTWebFloorCol = { -1200, -100, -1200, 1200, 0, 1200, 16, gDTWebFloorCol_vtx_00006400, 22, gDTWebFloorCol_polygons_000062A0, gDTWebFloorCol_polygonTypes_00006298, &gDTWebFloorCol_camDataList_00006290, 0, 0 }; 

static u32 pad648C = 0;

static Vtx object_ydan_objectsVtx_006490[14] = {
    VTX(-160, 1200, 0, 0, -7168, 255, 255, 255, 255),
    VTX(-160, 0, 0, 0, 1024, 119, 119, 119, 255),
    VTX(160, 0, 0, 2048, 1024, 119, 119, 119, 255),
    VTX(160, 1200, 0, 2048, -7168, 119, 119, 119, 255),
    VTX(-160, 1200, -20, 0, -7168, 51, 51, 51, 255),
    VTX(-160, 0, -20, 0, 1024, 119, 119, 119, 255),
    VTX(160, 0, -20, 2048, 1024, 119, 119, 119, 255),
    VTX(160, 1200, -20, 2048, -7168, 51, 51, 51, 255),
    VTX(-160, 1350, 0, 0, -7851, 255, 255, 255, 255),
    VTX(160, 1350, 0, 2048, -7851, 119, 119, 119, 255),
    VTX(160, 1350, -20, 2048, -7851, 255, 255, 255, 255),
    VTX(160, 1200, -20, 2048, -7168, 255, 255, 255, 255),
    VTX(-160, 1200, -20, 0, -7168, 255, 255, 255, 255),
    VTX(-160, 1350, -20, 0, -7851, 255, 255, 255, 255),
}; 

Gfx gDTFallingLadderDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_002000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 0, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ydan_objectsVtx_006490[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 0, 3, 0, 8, 3, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_006618[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gDTFallingLadderCol_camDataList_00006620[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gDTFallingLadderCol_polygonTypes_00006628[] = {
   0x00400000, 0x000007CA,
   0x00600000, 0x000007CA,
}; 

CollisionPoly gDTFallingLadderCol_polygons_00006638[] = {
   { 0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x0000, 0x7FFF, 0x0000 }, // 0x00006638
   { 0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x0000, 0x7FFF, 0x0000 }, // 0x00006648
   { 0x0001, 0x2004, 0x0005, 0x0006, 0x0000, 0x0000, 0x8001, 0xFFEC }, // 0x00006658
   { 0x0001, 0x2004, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0xFFEC }, // 0x00006668

}; 

Vec3s gDTFallingLadderCol_vtx_00006678[] = {
   { 100, 0, 0 }, // 0x00006678
   { 100, 1350, 0 }, // 0x0000667E
   { -100, 1350, 0 }, // 0x00006684
   { -100, 0, 0 }, // 0x0000668A
   { 100, 1400, -20 }, // 0x00006690
   { 100, 1200, -20 }, // 0x00006696
   { -100, 1200, -20 }, // 0x0000669C
   { -100, 1400, -20 }, // 0x000066A2
}; 

CollisionHeader gDTFallingLadderCol = { -160, 0, -20, 160, 1400, 0, 8, gDTFallingLadderCol_vtx_00006678, 4, gDTFallingLadderCol_polygons_00006638, gDTFallingLadderCol_polygonTypes_00006628, &gDTFallingLadderCol_camDataList_00006620, 0, 0 }; 

static u32 pad66D4 = 0;
static u32 pad66D8 = 0;
static u32 pad66DC = 0;

static Vtx object_ydan_objectsVtx_0066E0[4] = {
    VTX(40, 110, 10, 1195, -205, 255, 255, 255, 255),
    VTX(-40, 110, 10, -171, -205, 255, 255, 255, 255),
    VTX(-40, 0, 10, -171, 2048, 255, 255, 255, 255),
    VTX(40, 0, 10, 1195, 2048, 255, 255, 255, 255),
}; 

static Vtx object_ydan_objectsVtx_006720[4] = {
    VTX(-40, 0, -10, 1195, 2048, 255, 255, 255, 255),
    VTX(-40, 110, -10, 1195, -205, 255, 255, 255, 255),
    VTX(40, 110, -10, -171, -205, 255, 255, 255, 255),
    VTX(40, 0, -10, -171, 2048, 255, 255, 255, 255),
}; 

static Vtx object_ydan_objectsVtx_006760[4] = {
    VTX(40, 0, -10, 1024, 2048, 85, 85, 85, 255),
    VTX(40, 0, 10, 1024, 1755, 85, 85, 85, 255),
    VTX(-40, 0, 10, 0, 1755, 85, 85, 85, 255),
    VTX(-40, 0, -10, 0, 2048, 85, 85, 85, 255),
}; 

Gfx gDTDungeonDoor1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0x0404B160),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ydan_objectsVtx_0066E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSPVertex(&object_ydan_objectsVtx_006720[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_ydan_objectsVtx_006760[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_ydan_objectsVtx_006850[4] = {
    VTX(40, 110, 10, 1195, -205, 255, 255, 255, 255),
    VTX(-40, 110, 10, -171, -205, 255, 255, 255, 255),
    VTX(-40, 0, 10, -171, 2048, 255, 255, 255, 255),
    VTX(40, 0, 10, 1195, 2048, 255, 255, 255, 255),
}; 

static Vtx object_ydan_objectsVtx_006890[4] = {
    VTX(-40, 0, -10, 1195, 2048, 255, 255, 255, 255),
    VTX(-40, 110, -10, 1195, -205, 255, 255, 255, 255),
    VTX(40, 110, -10, -171, -205, 255, 255, 255, 255),
    VTX(40, 0, -10, -171, 2048, 255, 255, 255, 255),
}; 

static Vtx object_ydan_objectsVtx_0068D0[4] = {
    VTX(40, 0, -10, 1024, 2048, 85, 85, 85, 255),
    VTX(40, 0, 10, 1024, 1755, 85, 85, 85, 255),
    VTX(-40, 0, 10, 0, 1755, 85, 85, 85, 255),
    VTX(-40, 0, -10, 0, 2048, 85, 85, 85, 255),
}; 

Gfx gDTDungeonDoor2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_002800),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 6, 0, 2, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 6, 0, 2, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ydan_objectsVtx_006850[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSPVertex(&object_ydan_objectsVtx_006890[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&object_ydan_objectsVtx_0068D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 object_ydan_objectsTex_0069C0[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_0069C0.rgb5a1.inc.c"
};

static u8 unaccounted_006BC0[8] = {
    0x00, 0x00, 0x00, 0xD8, 0x00, 0x00, 0x19, 0xC8, 
}; 

u64 object_ydan_objectsTex_006BC8[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_006BC8.ci8.inc.c"
};

static Vtx object_ydan_objectsVtx_0073C8[4] = {
    VTX(500, -400, -500, 1365, -2560, 119, 119, 119, 255),
    VTX(500, -400, 500, -341, -2560, 119, 119, 119, 255),
    VTX(-500, -400, 500, -341, 2560, 119, 119, 119, 255),
    VTX(-500, -400, -500, 1365, 2560, 119, 119, 119, 255),
}; 

static Vtx object_ydan_objectsVtx_007408[12] = {
    VTX(-500, 0, -500, 2048, 0, 255, 255, 255, 255),
    VTX(-500, -400, -500, 2048, 1024, 119, 119, 119, 255),
    VTX(-500, -400, 500, 0, 1024, 119, 119, 119, 255),
    VTX(-500, 0, 500, 0, 0, 255, 255, 255, 255),
    VTX(500, -400, 500, 2048, 1024, 119, 119, 119, 255),
    VTX(500, 0, 500, 2048, 0, 255, 255, 255, 255),
    VTX(500, 0, 500, 0, 0, 255, 255, 255, 255),
    VTX(500, -400, 500, 0, 1024, 119, 119, 119, 255),
    VTX(500, -400, -500, 2048, 1024, 119, 119, 119, 255),
    VTX(500, 0, -500, 2048, 0, 255, 255, 255, 255),
    VTX(500, 0, -500, 0, 0, 255, 255, 255, 255),
    VTX(500, -400, -500, 0, 1024, 119, 119, 119, 255),
}; 

static Vtx object_ydan_objectsVtx_0074C8[4] = {
    VTX(-500, 0, -500, 1280, 1792, 255, 255, 255, 255),
    VTX(-500, 0, 500, 828, 1039, 255, 255, 255, 255),
    VTX(500, 0, 500, 75, 1491, 255, 255, 255, 255),
    VTX(500, 0, -500, 527, 2244, 255, 255, 255, 255),
}; 

Gfx gDTSlidingPlatformDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_000800),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ydan_objectsVtx_0073C8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_000000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&object_ydan_objectsVtx_007408[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 1, 0, 10, 1, 0, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ydan_objectsTex_006BC8),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_0069C0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsSPVertex(&object_ydan_objectsVtx_0074C8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_007688[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gDTSlidingPlatformCol_camDataList_00007690[1] = {
	{ 0x0000, 0, 0x00000000 },
}; 

u32 gDTSlidingPlatformCol_polygonTypes_00007698[] = {
   0x00000000, 0x000007C2,
   0x00200000, 0x000007C2,
}; 

CollisionPoly gDTSlidingPlatformCol_polygons_000076A8[] = {
   { 0x0000, 0x2000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000076A8
   { 0x0000, 0x2000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0x0000 }, // 0x000076B8
   { 0x0001, 0x2001, 0x0004, 0x0005, 0x0000, 0x0000, 0x7FFF, 0xFE0C }, // 0x000076C8
   { 0x0001, 0x2001, 0x0005, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xFE0C }, // 0x000076D8
   { 0x0001, 0x2002, 0x0005, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFE0C }, // 0x000076E8
   { 0x0001, 0x2002, 0x0006, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xFE0C }, // 0x000076F8
   { 0x0001, 0x2003, 0x0006, 0x0007, 0x0000, 0x0000, 0x8001, 0xFE0C }, // 0x00007708
   { 0x0001, 0x2003, 0x0007, 0x0000, 0x0000, 0x0000, 0x8001, 0xFE0C }, // 0x00007718
   { 0x0001, 0x2000, 0x0007, 0x0004, 0x8001, 0x0000, 0x0000, 0xFE0C }, // 0x00007728
   { 0x0001, 0x2000, 0x0004, 0x0001, 0x8001, 0x0000, 0x0000, 0xFE0C }, // 0x00007738
   { 0x0000, 0x2006, 0x0005, 0x0004, 0x0000, 0x8001, 0x0000, 0xFE70 }, // 0x00007748
   { 0x0000, 0x2006, 0x0004, 0x0007, 0x0000, 0x8001, 0x0000, 0xFE70 }, // 0x00007758

}; 

Vec3s gDTSlidingPlatformCol_vtx_00007768[] = {
   { -500, 0, -500 }, // 0x00007768
   { -500, 0, 500 }, // 0x0000776E
   { 500, 0, 500 }, // 0x00007774
   { 500, 0, -500 }, // 0x0000777A
   { -500, -400, 500 }, // 0x00007780
   { 500, -400, 500 }, // 0x00007786
   { 500, -400, -500 }, // 0x0000778C
   { -500, -400, -500 }, // 0x00007792
}; 

CollisionHeader gDTSlidingPlatformCol = { -500, -400, -500, 500, 0, 500, 8, gDTSlidingPlatformCol_vtx_00007768, 12, gDTSlidingPlatformCol_polygons_000076A8, gDTSlidingPlatformCol_polygonTypes_00007698, &gDTSlidingPlatformCol_camDataList_00007690, 0, 0 }; 

static u32 pad77C4 = 0;
static u32 pad77C8 = 0;
static u32 pad77CC = 0;

u64 object_ydan_objectsTex_0077D0[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_0077D0.rgb5a1.inc.c"
};

static u8 unaccounted_0079D0[8] = {
    0x00, 0x00, 0x00, 0xB8, 0x00, 0x87, 0x00, 0xD4, 
}; 

u64 object_ydan_objectsTex_0079D8[] = {
#include "assets/objects/object_ydan_objects//object_ydan_objectsTex_0079D8.ci8.inc.c"
};

static Vtx object_ydan_objectsVtx_0081D8[32] = {
    VTX(300, 27, -73, 397, 8028, 0, 0, 0, 255),
    VTX(369, -77, -13, 968, 7744, 0, 0, 0, 255),
    VTX(300, -131, -167, 729, 8028, 255, 255, 255, 255),
    VTX(231, -77, -13, 968, 8312, 0, 0, 0, 255),
    VTX(0, -79, -197, 636, 9257, 255, 255, 255, 255),
    VTX(69, 27, -73, 397, 8973, 0, 0, 0, 255),
    VTX(0, -77, -13, 968, 9257, 0, 0, 0, 255),
    VTX(-69, 27, -73, 397, 9541, 0, 0, 0, 255),
    VTX(669, 27, -73, 397, 6516, 0, 0, 0, 255),
    VTX(600, -77, -13, 968, 6799, 0, 0, 0, 255),
    VTX(600, -79, -197, 636, 6799, 255, 255, 255, 255),
    VTX(531, 27, -73, 397, 7083, 0, 0, 0, 255),
    VTX(1200, -77, -13, 968, 4342, 0, 0, 0, 255),
    VTX(1131, 27, -73, 397, 4626, 0, 0, 0, 255),
    VTX(1200, -79, -197, 636, 4342, 255, 255, 255, 255),
    VTX(1269, 27, -73, 397, 4058, 0, 0, 0, 255),
    VTX(831, -77, -13, 968, 5854, 0, 0, 0, 255),
    VTX(900, 27, -73, 397, 5571, 0, 0, 0, 255),
    VTX(900, -131, -167, 729, 5571, 255, 255, 255, 255),
    VTX(969, -77, -13, 968, 5287, 0, 0, 0, 255),
    VTX(1500, 27, -73, 397, 3113, 0, 0, 0, 255),
    VTX(1569, -77, -13, 968, 2829, 0, 0, 0, 255),
    VTX(1500, -131, -167, 729, 3113, 255, 255, 255, 255),
    VTX(1431, -77, -13, 968, 3397, 0, 0, 0, 255),
    VTX(1869, 27, -73, 397, 1600, 0, 0, 0, 255),
    VTX(1800, -77, -13, 968, 1884, 0, 0, 0, 255),
    VTX(1800, -79, -197, 636, 1884, 255, 255, 255, 255),
    VTX(1731, 27, -73, 397, 2168, 0, 0, 0, 255),
    VTX(-1800, -79, -197, 636, 16630, 255, 255, 255, 255),
    VTX(-1731, 27, -73, 397, 16346, 0, 0, 0, 255),
    VTX(-1800, -77, -13, 968, 16630, 0, 0, 0, 255),
    VTX(-1869, 27, -73, 397, 16914, 0, 0, 0, 255),
}; 

static Vtx object_ydan_objectsVtx_0083D8[63] = {
    VTX(-1500, -131, -167, 729, 15401, 255, 255, 255, 255),
    VTX(-1500, 27, -73, 397, 15401, 0, 0, 0, 255),
    VTX(-1431, -77, -13, 968, 15117, 0, 0, 0, 255),
    VTX(-1569, -77, -13, 968, 15685, 0, 0, 0, 255),
    VTX(-900, -131, -167, 729, 12943, 255, 255, 255, 255),
    VTX(-969, -77, -13, 968, 13227, 0, 0, 0, 255),
    VTX(-900, 27, -73, 397, 12943, 0, 0, 0, 255),
    VTX(-831, -77, -13, 968, 12660, 0, 0, 0, 255),
    VTX(-1200, -79, -197, 636, 14172, 255, 255, 255, 255),
    VTX(-1200, -77, -13, 968, 14172, 0, 0, 0, 255),
    VTX(-1269, 27, -73, 397, 14456, 0, 0, 0, 255),
    VTX(-1131, 27, -73, 397, 13888, 0, 0, 0, 255),
    VTX(-600, -79, -197, 636, 11715, 255, 255, 255, 255),
    VTX(-531, 27, -73, 397, 11431, 0, 0, 0, 255),
    VTX(-600, -77, -13, 968, 11715, 0, 0, 0, 255),
    VTX(-669, 27, -73, 397, 11998, 0, 0, 0, 255),
    VTX(-300, -131, -167, 729, 10486, 255, 255, 255, 255),
    VTX(-300, 27, -73, 397, 10486, 0, 0, 0, 255),
    VTX(-231, -77, -13, 968, 10202, 0, 0, 0, 255),
    VTX(-369, -77, -13, 968, 10770, 0, 0, 0, 255),
    VTX(-500, 210, -30, 2094, 11305, 255, 255, 255, 255),
    VTX(-569, 50, -60, 2334, 11589, 0, 0, 0, 255),
    VTX(-500, 50, 60, 1762, 11305, 0, 0, 0, 255),
    VTX(-500, 210, -30, 46, 11305, 255, 255, 255, 255),
    VTX(-431, 50, -60, 286, 11021, 0, 0, 0, 255),
    VTX(-569, 50, -60, 286, 11589, 0, 0, 0, 255),
    VTX(-431, 50, -60, 2334, 11021, 0, 0, 0, 255),
    VTX(-800, 210, 30, 2002, 12534, 255, 255, 255, 255),
    VTX(-800, 50, -60, 2334, 12534, 0, 0, 0, 255),
    VTX(-869, 50, 60, 1762, 12818, 0, 0, 0, 255),
    VTX(-731, 50, 60, 1762, 12250, 0, 0, 0, 255),
    VTX(-1400, 210, 30, 2002, 14991, 255, 255, 255, 255),
    VTX(-1331, 50, 60, 1762, 14708, 0, 0, 0, 255),
    VTX(-1400, 50, -60, 2334, 14991, 0, 0, 0, 255),
    VTX(-1469, 50, 60, 1762, 15275, 0, 0, 0, 255),
    VTX(-1100, 210, -30, 2094, 13763, 255, 255, 255, 255),
    VTX(-1100, 50, 60, 1762, 13763, 0, 0, 0, 255),
    VTX(-1031, 50, -60, 2334, 13479, 0, 0, 0, 255),
    VTX(-1100, 210, -30, 46, 13763, 255, 255, 255, 255),
    VTX(-1031, 50, -60, 286, 13479, 0, 0, 0, 255),
    VTX(-1169, 50, -60, 286, 14046, 0, 0, 0, 255),
    VTX(-1169, 50, -60, 2334, 14046, 0, 0, 0, 255),
    VTX(-1700, 210, -30, 2094, 16220, 255, 255, 255, 255),
    VTX(-1769, 50, -60, 2334, 16504, 0, 0, 0, 255),
    VTX(-1700, 50, 60, 1762, 16220, 0, 0, 0, 255),
    VTX(-1700, 210, -30, 46, 16220, 255, 255, 255, 255),
    VTX(-1631, 50, -60, 286, 15936, 0, 0, 0, 255),
    VTX(-1769, 50, -60, 286, 16504, 0, 0, 0, 255),
    VTX(-1631, 50, -60, 2334, 15936, 0, 0, 0, 255),
    VTX(1600, 50, -60, 2334, 2703, 0, 0, 0, 255),
    VTX(1531, 50, 60, 1762, 2987, 0, 0, 0, 255),
    VTX(1600, 210, 30, 2002, 2703, 255, 255, 255, 255),
    VTX(1669, 50, 60, 1762, 2420, 0, 0, 0, 255),
    VTX(1231, 50, -60, 2334, 4216, 0, 0, 0, 255),
    VTX(1300, 50, 60, 1762, 3932, 0, 0, 0, 255),
    VTX(1300, 210, -30, 2094, 3932, 255, 255, 255, 255),
    VTX(1369, 50, -60, 286, 3648, 0, 0, 0, 255),
    VTX(1231, 50, -60, 286, 4216, 0, 0, 0, 255),
    VTX(1300, 210, -30, 46, 3932, 255, 255, 255, 255),
    VTX(1369, 50, -60, 2334, 3648, 0, 0, 0, 255),
    VTX(700, 50, 60, 1762, 6390, 0, 0, 0, 255),
    VTX(769, 50, -60, 2334, 6106, 0, 0, 0, 255),
    VTX(700, 210, -30, 2094, 6390, 255, 255, 255, 255),
}; 

static Vtx object_ydan_objectsVtx_0087C8[32] = {
    VTX(769, 50, -60, 286, 6106, 0, 0, 0, 255),
    VTX(631, 50, -60, 286, 6674, 0, 0, 0, 255),
    VTX(700, 210, -30, 46, 6390, 255, 255, 255, 255),
    VTX(631, 50, -60, 2334, 6674, 0, 0, 0, 255),
    VTX(700, 50, 60, 1762, 6390, 0, 0, 0, 255),
    VTX(700, 210, -30, 2094, 6390, 255, 255, 255, 255),
    VTX(1069, 50, 60, 1762, 4877, 0, 0, 0, 255),
    VTX(1000, 50, -60, 2334, 5161, 0, 0, 0, 255),
    VTX(1000, 210, 30, 2002, 5161, 255, 255, 255, 255),
    VTX(931, 50, 60, 1762, 5445, 0, 0, 0, 255),
    VTX(400, 50, -60, 2334, 7619, 0, 0, 0, 255),
    VTX(331, 50, 60, 1762, 7902, 0, 0, 0, 255),
    VTX(400, 210, 30, 2002, 7619, 255, 255, 255, 255),
    VTX(469, 50, 60, 1762, 7335, 0, 0, 0, 255),
    VTX(-200, 210, 30, 2002, 10076, 255, 255, 255, 255),
    VTX(-200, 50, -60, 2334, 10076, 0, 0, 0, 255),
    VTX(-269, 50, 60, 1762, 10360, 0, 0, 0, 255),
    VTX(-131, 50, 60, 1762, 9792, 0, 0, 0, 255),
    VTX(31, 50, -60, 2334, 9131, 0, 0, 0, 255),
    VTX(100, 50, 60, 1762, 8847, 0, 0, 0, 255),
    VTX(100, 210, -30, 2094, 8847, 255, 255, 255, 255),
    VTX(169, 50, -60, 286, 8564, 0, 0, 0, 255),
    VTX(31, 50, -60, 286, 9131, 0, 0, 0, 255),
    VTX(100, 210, -30, 46, 8847, 255, 255, 255, 255),
    VTX(169, 50, -60, 2334, 8564, 0, 0, 0, 255),
    VTX(200, -77, 13, 1080, 8438, 0, 0, 0, 255),
    VTX(269, 27, 73, 1651, 8154, 0, 0, 0, 255),
    VTX(200, -79, 197, 1412, 8438, 255, 255, 255, 255),
    VTX(131, 27, 73, 1651, 8722, 0, 0, 0, 255),
    VTX(-100, -131, 167, 1319, 9667, 255, 255, 255, 255),
    VTX(-31, -77, 13, 1080, 9383, 0, 0, 0, 255),
    VTX(-100, 27, 73, 1651, 9667, 0, 0, 0, 255),
}; 

static Vtx object_ydan_objectsVtx_0089C8[32] = {
    VTX(-100, -131, 167, 1319, 9667, 255, 255, 255, 255),
    VTX(-169, -77, 13, 1080, 9950, 0, 0, 0, 255),
    VTX(-31, -77, 13, 1080, 9383, 0, 0, 0, 255),
    VTX(-100, 27, 73, 1651, 9667, 0, 0, 0, 255),
    VTX(569, -77, 13, 1080, 6925, 0, 0, 0, 255),
    VTX(500, 27, 73, 1651, 7209, 0, 0, 0, 255),
    VTX(500, -131, 167, 1319, 7209, 255, 255, 255, 255),
    VTX(431, -77, 13, 1080, 7493, 0, 0, 0, 255),
    VTX(1100, 27, 73, 1651, 4751, 0, 0, 0, 255),
    VTX(1031, -77, 13, 1080, 5035, 0, 0, 0, 255),
    VTX(1100, -131, 167, 1319, 4751, 255, 255, 255, 255),
    VTX(1169, -77, 13, 1080, 4468, 0, 0, 0, 255),
    VTX(731, 27, 73, 1651, 6264, 0, 0, 0, 255),
    VTX(800, -77, 13, 1080, 5980, 0, 0, 0, 255),
    VTX(800, -79, 197, 1412, 5980, 255, 255, 255, 255),
    VTX(869, 27, 73, 1651, 5696, 0, 0, 0, 255),
    VTX(1400, -77, 13, 1080, 3523, 0, 0, 0, 255),
    VTX(1469, 27, 73, 1651, 3239, 0, 0, 0, 255),
    VTX(1400, -79, 197, 1412, 3523, 255, 255, 255, 255),
    VTX(1331, 27, 73, 1651, 3806, 0, 0, 0, 255),
    VTX(1769, -77, 13, 1080, 2010, 0, 0, 0, 255),
    VTX(1700, 27, 73, 1651, 2294, 0, 0, 0, 255),
    VTX(1700, -131, 167, 1319, 2294, 255, 255, 255, 255),
    VTX(1631, -77, 13, 1080, 2578, 0, 0, 0, 255),
    VTX(-1600, -79, 197, 1412, 15811, 255, 255, 255, 255),
    VTX(-1600, -77, 13, 1080, 15811, 0, 0, 0, 255),
    VTX(-1531, 27, 73, 1651, 15527, 0, 0, 0, 255),
    VTX(-1669, 27, 73, 1651, 16094, 0, 0, 0, 255),
    VTX(-1000, -79, 197, 1412, 13353, 255, 255, 255, 255),
    VTX(-1069, 27, 73, 1651, 13637, 0, 0, 0, 255),
    VTX(-1000, -77, 13, 1080, 13353, 0, 0, 0, 255),
    VTX(-931, 27, 73, 1651, 13069, 0, 0, 0, 255),
}; 

static Vtx object_ydan_objectsVtx_008BC8[28] = {
    VTX(-1300, -131, 167, 1319, 14582, 255, 255, 255, 255),
    VTX(-1300, 27, 73, 1651, 14582, 0, 0, 0, 255),
    VTX(-1369, -77, 13, 1080, 14866, 0, 0, 0, 255),
    VTX(-1231, -77, 13, 1080, 14298, 0, 0, 0, 255),
    VTX(-700, -131, 167, 1319, 12124, 255, 255, 255, 255),
    VTX(-631, -77, 13, 1080, 11840, 0, 0, 0, 255),
    VTX(-700, 27, 73, 1651, 12124, 0, 0, 0, 255),
    VTX(-769, -77, 13, 1080, 12408, 0, 0, 0, 255),
    VTX(-400, -79, 197, 1412, 10895, 255, 255, 255, 255),
    VTX(-400, -77, 13, 1080, 10895, 0, 0, 0, 255),
    VTX(-331, 27, 73, 1651, 10612, 0, 0, 0, 255),
    VTX(-469, 27, 73, 1651, 11179, 0, 0, 0, 255),
    VTX(2060, 50, -87, 341, 1229, 51, 51, 51, 255),
    VTX(2400, 50, -87, 341, 0, 0, 0, 0, 255),
    VTX(2400, -100, 0, 1024, 0, 0, 0, 0, 255),
    VTX(2060, -100, 0, 1024, 1229, 51, 51, 51, 255),
    VTX(2400, 50, 87, 1707, 0, 0, 0, 0, 255),
    VTX(2060, 50, 87, 1707, 1229, 51, 51, 51, 255),
    VTX(2400, 50, -87, 2389, 0, 0, 0, 0, 255),
    VTX(2060, 50, -87, 2389, 1229, 51, 51, 51, 255),
    VTX(-2060, 50, 87, 1707, 18104, 51, 51, 51, 255),
    VTX(-2060, 50, -87, 2389, 18104, 51, 51, 51, 255),
    VTX(-2400, 50, -87, 2389, 19333, 0, 0, 0, 255),
    VTX(-2400, 50, 87, 1707, 19333, 0, 0, 0, 255),
    VTX(-2060, -100, 0, 1024, 18104, 51, 51, 51, 255),
    VTX(-2400, -100, 0, 1024, 19333, 0, 0, 0, 255),
    VTX(-2060, 50, -87, 341, 18104, 51, 51, 51, 255),
    VTX(-2400, 50, -87, 341, 19333, 0, 0, 0, 255),
}; 

Gfx gDTRollingSpikeTrapDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_ydan_objectsTex_0079D8),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 6, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 4, 0, 0, 0, 0, 6, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_ydan_objectsTex_0077D0),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_ydan_objectsVtx_0081D8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 0, 2, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 7, 5, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 12, 13, 14, 0),
    gsSP2Triangles(13, 15, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 24, 26, 0),
    gsSP2Triangles(25, 27, 26, 0, 28, 29, 30, 0),
    gsSP2Triangles(28, 31, 29, 0, 28, 30, 31, 0),
    gsSPVertex(&object_ydan_objectsVtx_0083D8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 1, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 7, 5, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 9, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 15, 13, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(16, 19, 17, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 20, 22, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsSPVertex(&object_ydan_objectsVtx_0083D8[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 2, 3, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 4, 10, 5, 0),
    gsSP2Triangles(11, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(11, 13, 17, 0, 18, 19, 20, 0),
    gsSP2Triangles(19, 21, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(23, 28, 24, 0, 29, 30, 31, 0),
    gsSPVertex(&object_ydan_objectsVtx_0087C8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(7, 9, 8, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(14, 17, 15, 0, 18, 19, 20, 0),
    gsSP2Triangles(21, 22, 23, 0, 19, 24, 20, 0),
    gsSP2Triangles(25, 26, 27, 0, 26, 28, 27, 0),
    gsSP2Triangles(28, 25, 27, 0, 29, 30, 31, 0),
    gsSPVertex(&object_ydan_objectsVtx_0089C8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 4, 6, 0),
    gsSP2Triangles(5, 7, 6, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 10, 0, 11, 8, 10, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 12, 14, 0),
    gsSP2Triangles(13, 15, 14, 0, 16, 17, 18, 0),
    gsSP2Triangles(17, 19, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 20, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 24, 27, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 31, 29, 0),
    gsSP1Triangle(28, 30, 31, 0),
    gsSPVertex(&object_ydan_objectsVtx_008BC8[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 1, 0, 4, 5, 6, 0),
    gsSP2Triangles(4, 7, 5, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 9, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 15, 0, 15, 14, 16, 0),
    gsSP2Triangles(15, 16, 17, 0, 17, 16, 18, 0),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsSP2Triangles(20, 19, 21, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 15, 17, 0),
    gsSP2Triangles(24, 17, 20, 0, 24, 20, 23, 0),
    gsSP2Triangles(24, 23, 25, 0, 26, 12, 15, 0),
    gsSP2Triangles(26, 15, 24, 0, 26, 24, 25, 0),
    gsSP1Triangle(26, 25, 27, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_009078[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

#include "gBridgePiece.c"
#include "gBridgePieceCollision.c"