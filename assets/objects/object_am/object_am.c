#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_am.h"

static s16 sArmosHopAnimFrameData[74];
static JointIndex sArmosHopAnimJointIndices[14];
static s16 sArmosRicochetAnimFrameData[76];
static JointIndex sArmosRicochetAnimJointIndices[14];
static Vtx sArmosSkelVtx_000350[20];
static Vtx sArmosSkelVtx_000490[20];
static Vtx sArmosSkelVtx_000838[3];
static Vtx sArmosSkelVtx_000868[3];
static Vtx sArmosSkelVtx_000898[33];
static Vtx sArmosSkelVtx_000AA8[3];
static Vtx sArmosSkelVtx_000AD8[3];
static Vtx sArmosSkelVtx_000B08[3];
static Vtx sArmosSkelVtx_000B38[27];
static Vtx sArmosSkelVtx_000CE8[3];
static Vtx sArmosSkelVtx_000D18[32];
static Vtx sArmosSkelVtx_000F18[3];
static Vtx sArmosSkelVtx_000F48[3];
static Vtx sArmosSkelVtx_000F78[3];
static Vtx sArmosSkelVtx_000FA8[3];
static Vtx sArmosSkelVtx_000FD8[3];
static Vtx sArmosSkelVtx_001008[51];
static Vtx sArmosSkelVtx_001338[8];
static Vtx sArmosSkelVtx_0013B8[3];
static Vtx sArmosSkelVtx_0013E8[10];
static Vtx sArmosSkelVtx_001488[4];
static Vtx sArmosSkelVtx_0014C8[4];
static Vtx sArmosSkelVtx_001508[4];
static Vtx sArmosSkelVtx_001548[24];
static Vtx sArmosSkelVtx_001EA8[33];
static Vtx sArmosSkelVtx_0020B8[3];
static Vtx sArmosSkelVtx_0020E8[22];
static Vtx sArmosSkelVtx_002248[3];
static Vtx sArmosSkelVtx_002440[14];
static Vtx sArmosSkelVtx_002520[3];
static void* sArmosSkelLimbs[13];
static s16 sArmosDamagedAnimFrameData[204];
static JointIndex sArmosDamagedAnimJointIndices[14];

CamData gArmosCol_camDataList_00000000[1] = {
    { 0x0000, 0, 0x00000000 },
};

u32 gArmosCol_polygonTypes_00000008[] = {
    0x00E00000,
    0x000007C0,
};

static u8 unaccounted_000010[16] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC2,
};

CollisionPoly gArmosCol_polygons_00000020[] = {
    { 0x0000, 0x2001, 0x0004, 0x0005, 0x7FFF, 0x0000, 0x0000, 0xF830 }, // 0x00000020
    { 0x0000, 0x2001, 0x0005, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF830 }, // 0x00000030
    { 0x0000, 0x2002, 0x0005, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xF95C }, // 0x00000040
    { 0x0000, 0x2002, 0x0006, 0x0003, 0x0000, 0x0000, 0x7FFF, 0xF95C }, // 0x00000050
    { 0x0000, 0x2003, 0x0006, 0x0007, 0x8001, 0x0000, 0x0000, 0xF830 }, // 0x00000060
    { 0x0000, 0x2003, 0x0007, 0x0000, 0x8001, 0x0000, 0x0000, 0xF830 }, // 0x00000070
    { 0x0000, 0x2000, 0x0007, 0x0004, 0x0000, 0x0000, 0x8001, 0xF95C }, // 0x00000080
    { 0x0000, 0x2000, 0x0004, 0x0001, 0x0000, 0x0000, 0x8001, 0xF95C }, // 0x00000090
    { 0x0000, 0x2006, 0x0005, 0x0008, 0x0000, 0x0000, 0xE000, 0xFA24 }, // 0x000000A0
    { 0x0000, 0x2006, 0x0008, 0x0007, 0x2000, 0x0000, 0x0000, 0xFA24 }, // 0x000000B0
    { 0x0000, 0x2004, 0x0007, 0x0008, 0x0000, 0x0000, 0x2000, 0xF63C }, // 0x000000C0
    { 0x0000, 0x2004, 0x0008, 0x0005, 0xE000, 0x0000, 0x0000, 0xF63C }, // 0x000000D0

};

Vec3s gArmosCol_vtx_000000E0[] = {
    { -1700, -2000, -2000 }, // 0x000000E0
    { 1700, -2000, -2000 },  // 0x000000E6
    { 1700, -2000, 2500 },   // 0x000000EC
    { -1700, -2000, 2500 },  // 0x000000F2
    { 1700, 4500, -2000 },   // 0x000000F8
    { 1700, 4500, 2500 },    // 0x000000FE
    { -1700, 4500, 2500 },   // 0x00000104
    { -1700, 4500, -2000 },  // 0x0000010A
    { 0, 6500, -500 },       // 0x00000110
};

CollisionHeader gArmosCol = { -1700,
                              0,
                              -2000,
                              1700,
                              6500,
                              2500,
                              9,
                              gArmosCol_vtx_000000E0,
                              12,
                              gArmosCol_polygons_00000020,
                              gArmosCol_polygonTypes_00000008,
                              &gArmosCol_camDataList_00000000,
                              0,
                              0 };

static u32 pad144 = 0;
static u32 pad148 = 0;
static u32 pad14C = 0;

static s16 sArmosHopAnimFrameData[74] = {
    0x0000, 0x0640, 0x4000, 0xC000, 0x4000, 0x40F8, 0x4362, 0x4680, 0x4993, 0x4BDD, 0x4CA1, 0x4A7A, 0x45DF,
    0x40E1, 0x3D8E, 0x3D22, 0x3E75, 0x4000, 0x41EA, 0x4342, 0x4314, 0x429D, 0x41FA, 0x4148, 0x40A5, 0x402E,
    0x4000, 0x8000, 0x7EB8, 0x7BA3, 0x77E2, 0x7496, 0x72E3, 0x73E9, 0x7E64, 0x8F3F, 0x98E4, 0x9793, 0x9223,
    0x8ADD, 0x840E, 0x8000, 0x7E89, 0x7DD9, 0x7DC2, 0x7E16, 0x7EA7, 0x7F48, 0x7FCA, 0x8000, 0x8000, 0x7EB8,
    0x7BA3, 0x77E2, 0x7496, 0x72E3, 0x73E9, 0x7E64, 0x8F3F, 0x98E4, 0x9793, 0x9223, 0x8ADD, 0x840E, 0x8000,
    0x7E89, 0x7DD9, 0x7DC2, 0x7E16, 0x7EA7, 0x7F48, 0x7FCA, 0x8000, 0x0000,
};

static JointIndex sArmosHopAnimJointIndices[14] = {
    { 0x0000, 0x0001, 0x0000 }, { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0002, 0x0000 }, { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0000, 0x0003 }, { 0x0000, 0x0000, 0x001B }, { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 }, { 0x0000, 0x0000, 0x0032 }, { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0003 }, { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gArmosHopAnim = { { 23 }, sArmosHopAnimFrameData, sArmosHopAnimJointIndices, 4 };

static u8 unaccounted_000248[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static s16 sArmosRicochetAnimFrameData[76] = {
    0x0000, 0x0640, 0x4000, 0xC000, 0x4000, 0x3B76, 0x3BB6, 0x3C5C, 0x3D3F, 0x3E37, 0x3F1A, 0x3FC0, 0x4000,
    0xEE39, 0xEDCE, 0xED1C, 0xECF9, 0xEE39, 0xF240, 0xF839, 0xFDA4, 0x0000, 0xE38E, 0xE2E4, 0xE1C7, 0xE18E,
    0xE38E, 0xEA00, 0xF38E, 0xFC39, 0x0000, 0x78E4, 0x78B9, 0x7872, 0x7864, 0x78E4, 0x7A80, 0x7CE4, 0x7F0E,
    0x8000, 0x11C7, 0x1232, 0x12E4, 0x1307, 0x11C7, 0x0DC0, 0x07C7, 0x025C, 0x0000, 0x1C72, 0x1D1C, 0x1E39,
    0x1E72, 0x1C72, 0x1600, 0x0C72, 0x03C7, 0x0000, 0x78E4, 0x78B9, 0x7872, 0x7864, 0x78E4, 0x7A80, 0x7CE4,
    0x7F0E, 0x8000, 0xB8E4, 0xB680, 0xB155, 0xAC64, 0xAAAB, 0xAE80, 0xB5C7, 0xBCD5, 0xC000,
};

static JointIndex sArmosRicochetAnimJointIndices[14] = {
    { 0x0000, 0x0001, 0x0000 }, { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0002, 0x0000 }, { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0000, 0x0003 }, { 0x000D, 0x0016, 0x001F }, { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 }, { 0x0028, 0x0031, 0x003A }, { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0043 }, { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gArmosRicochetAnim = { { 9 }, sArmosRicochetAnimFrameData, sArmosRicochetAnimJointIndices, 4 };

static u8 unaccounted_00034C[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

static Vtx sArmosSkelVtx_000350[20] = {
    VTX(680, -512, 1560, 0, 1024, 195, 204, 88, 255),    VTX(680, 1327, 957, 826, 1024, 227, 36, 110, 255),
    VTX(162, 835, 599, 674, 414, 166, 51, 60, 255),      VTX(-19, -256, 776, 208, 201, 166, 215, 67, 255),
    VTX(680, -1643, -7, 0, 1024, 178, 167, 239, 255),    VTX(680, -512, 1560, 823, 1024, 195, 204, 88, 255),
    VTX(-19, -256, 776, 616, 200, 166, 215, 67, 255),    VTX(-19, -822, -7, 204, 199, 165, 179, 0, 255),
    VTX(680, 1327, 957, 0, 1024, 197, 104, 0, 255),      VTX(680, 1327, -971, 826, 1024, 227, 116, 0, 255),
    VTX(162, 835, -614, 670, 412, 165, 63, 211, 255),    VTX(162, 835, 599, 152, 414, 166, 51, 60, 255),
    VTX(-19, -822, -7, 620, 202, 165, 179, 0, 255),      VTX(-19, -256, -782, 210, 201, 166, 215, 189, 255),
    VTX(680, -1643, -7, 827, 1024, 178, 167, 239, 255),  VTX(680, -512, -1574, 0, 1024, 227, 162, 188, 255),
    VTX(162, 835, -614, 154, 410, 165, 63, 211, 255),    VTX(680, 1327, -971, 0, 1024, 227, 36, 146, 255),
    VTX(680, -512, -1574, 823, 1024, 197, 32, 157, 255), VTX(-19, -256, -782, 619, 195, 166, 215, 189, 255),
};

static Vtx sArmosSkelVtx_000490[20] = {
    VTX(1595, 1327, 957, 0, 1024, 0, 120, 0, 255),      VTX(1595, 1327, -971, 991, 1024, 0, 120, 0, 255),
    VTX(680, 1327, -971, 991, 556, 227, 116, 0, 255),   VTX(680, 1327, 957, 0, 556, 197, 104, 0, 255),
    VTX(1595, -512, 1560, 0, 1024, 0, 37, 114, 255),    VTX(1595, 1327, 957, 991, 1024, 0, 37, 114, 255),
    VTX(680, 1327, 957, 991, 556, 227, 36, 110, 255),   VTX(680, -512, 1560, 0, 556, 0, 37, 114, 255),
    VTX(1595, -1643, -7, 0, 1024, 0, 159, 70, 255),     VTX(1595, -512, 1560, 1317, 1024, 0, 159, 70, 255),
    VTX(680, -512, 1560, 1317, 556, 195, 204, 88, 255), VTX(680, -1643, -7, 0, 556, 0, 159, 70, 255),
    VTX(680, -512, -1574, 0, 556, 197, 32, 157, 255),   VTX(680, 1327, -971, 991, 556, 227, 36, 146, 255),
    VTX(1595, -512, -1574, 0, 1024, 0, 37, 142, 255),   VTX(1595, 1327, -971, 991, 1024, 0, 37, 142, 255),
    VTX(680, -1643, -7, 0, 556, 178, 167, 239, 255),    VTX(680, -512, -1574, 1317, 556, 227, 162, 188, 255),
    VTX(1595, -1643, -7, 0, 1024, 0, 159, 186, 255),    VTX(1595, -512, -1574, 1317, 1024, 0, 159, 186, 255),
};

Gfx sArmosSkelLimbDL_0005D0[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002838),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, 0, 5, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA,
                       COMBINED, 0, PRIMITIVE, 0),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sArmosSkelVtx_000350[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&sArmosSkelVtx_000490[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 15, 14, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSPEndDisplayList(),
};

static u8 unaccounted_0006E8[336] = {
    0x01, 0xF4, 0x02, 0xBC, 0xFE, 0x0C, 0x00, 0x00, 0x03, 0xFD, 0xFF, 0xF7, 0xF1, 0x70, 0x26, 0xFF, 0xFE, 0x0C, 0x01,
    0x90, 0x00, 0x00, 0x00, 0x00, 0x04, 0x03, 0x03, 0xFB, 0xF1, 0x70, 0x26, 0xFF, 0x00, 0x32, 0x00, 0xFA, 0x02, 0x9A,
    0x00, 0x00, 0x00, 0x04, 0x04, 0x02, 0xF1, 0x70, 0x26, 0xFF, 0xFE, 0x0C, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0xFF,
    0x88, 0x00, 0x55, 0xA6, 0xD3, 0x40, 0xFF, 0x00, 0x00, 0xFD, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x02, 0x57, 0x03, 0xF0,
    0xA6, 0xD3, 0x40, 0xFF, 0x00, 0x32, 0x00, 0xFA, 0x02, 0x9A, 0x00, 0x00, 0x04, 0x33, 0x00, 0x2F, 0xA6, 0xD3, 0x40,
    0xFF, 0x00, 0x00, 0xFD, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x04, 0x1E, 0x00, 0x2A, 0x6F, 0xE1, 0x1F, 0xFF, 0x01, 0xF4,
    0x02, 0xBC, 0xFE, 0x0C, 0x00, 0x00, 0x00, 0x0D, 0x03, 0xB7, 0x6F, 0xE1, 0x1F, 0xFF, 0x00, 0x32, 0x00, 0xFA, 0x02,
    0x9A, 0x00, 0x00, 0x04, 0xA7, 0x03, 0xCA, 0x6F, 0xE1, 0x1F, 0xFF, 0x00, 0x00, 0xFD, 0xA8, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x3B, 0x03, 0x2B, 0xD1, 0xE9, 0x95, 0xFF, 0xFE, 0x0C, 0x01, 0x90, 0x00, 0x00, 0x00, 0x00, 0x02, 0x2B, 0xFF,
    0xF7, 0xD1, 0xE9, 0x95, 0xFF, 0x01, 0xF4, 0x02, 0xBC, 0xFE, 0x0C, 0x00, 0x00, 0xFF, 0xFE, 0x03, 0xF2, 0xD1, 0xE9,
    0x95, 0xFF, 0xE7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xD7, 0x00, 0x00, 0x02, 0xFF, 0xFF, 0xFF, 0xFF, 0xFD,
    0x10, 0x00, 0x00, 0x06, 0x00, 0x32, 0x38, 0xF5, 0x10, 0x00, 0x00, 0x07, 0x01, 0x40, 0x50, 0xE6, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xF3, 0x00, 0x00, 0x00, 0x07, 0x3F, 0xF1, 0x00, 0xE7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0xF5, 0x10, 0x10, 0x00, 0x00, 0x01, 0x40, 0x50, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x07, 0xC0, 0x7C, 0xFC, 0x12,
    0x7E, 0x03, 0xFF, 0x0F, 0xF3, 0xFF, 0xE2, 0x00, 0x00, 0x1C, 0xC8, 0x11, 0x20, 0x78, 0xD9, 0xF3, 0xFF, 0xFF, 0x00,
    0x00, 0x00, 0x00, 0xD9, 0xFF, 0xFF, 0xFF, 0x00, 0x02, 0x04, 0x00, 0xFA, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x01, 0x00, 0xC0, 0x18, 0x06, 0x00, 0x06, 0xE8, 0x06, 0x00, 0x02, 0x04, 0x00, 0x06, 0x08, 0x0A, 0x06, 0x0C, 0x0E,
    0x10, 0x00, 0x12, 0x14, 0x16, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static Vtx sArmosSkelVtx_000838[3] = {
    VTX(1944, 1977, -796, 0, 1024, 251, 110, 210, 255),
    VTX(2424, 1621, -1186, -415, 186, 239, 46, 147, 255),
    VTX(680, 1804, -1215, 1965, 1024, 244, 63, 155, 255),
};

static Vtx sArmosSkelVtx_000868[3] = {
    VTX(680, 1804, 1215, 1965, 1024, 244, 63, 101, 255),
    VTX(2424, 1621, 1186, -415, 186, 239, 46, 109, 255),
    VTX(1944, 1977, 796, 0, 1024, 236, 108, 46, 255),
};

static Vtx sArmosSkelVtx_000898[33] = {
    VTX(32, 813, 1186, 161, 491, 197, 11, 103, 255),       VTX(-381, 995, 466, 0, 1024, 141, 25, 22, 255),
    VTX(-167, -835, 607, 1024, 1024, 173, 189, 54, 255),   VTX(32, 813, 1186, 1024, 1024, 197, 11, 103, 255),
    VTX(680, 1804, 1215, 289, 696, 244, 63, 101, 255),     VTX(418, 2216, 796, 0, 1024, 212, 100, 48, 255),
    VTX(2424, 1621, 1186, 19, 109, 239, 46, 109, 255),     VTX(680, 1804, 1215, 142, 972, 244, 63, 101, 255),
    VTX(32, 813, 1186, 1051, 1008, 197, 11, 103, 255),     VTX(32, 813, 1186, 389, 1011, 197, 11, 103, 255),
    VTX(-167, -835, 607, 1416, 663, 173, 189, 54, 255),    VTX(1891, -845, 1485, 550, 4, 243, 199, 104, 255),
    VTX(2424, 1621, 1186, -587, 47, 239, 46, 109, 255),    VTX(32, 813, 1186, 595, 1041, 197, 11, 103, 255),
    VTX(1891, -845, 1485, 1417, 45, 243, 199, 104, 255),   VTX(32, 813, -1186, 1027, 538, 197, 11, 153, 255),
    VTX(-381, 995, -466, 1024, 1024, 144, 24, 223, 255),   VTX(418, 2216, -796, 0, 1024, 189, 87, 209, 255),
    VTX(-167, -835, -607, 1024, 1024, 162, 197, 211, 255), VTX(-381, 995, -466, 0, 1024, 144, 24, 223, 255),
    VTX(32, 813, -1186, 161, 491, 197, 11, 153, 255),      VTX(418, 2216, -796, 0, 1024, 189, 87, 209, 255),
    VTX(680, 1804, -1215, 289, 696, 244, 63, 155, 255),    VTX(32, 813, -1186, 1024, 1024, 197, 11, 153, 255),
    VTX(32, 813, -1186, 1051, 1008, 197, 11, 153, 255),    VTX(680, 1804, -1215, 142, 972, 244, 63, 155, 255),
    VTX(2424, 1621, -1186, 19, 109, 239, 46, 147, 255),    VTX(1891, -845, -1485, 1417, 45, 243, 199, 152, 255),
    VTX(32, 813, -1186, 595, 1041, 197, 11, 153, 255),     VTX(2424, 1621, -1186, -587, 47, 239, 46, 147, 255),
    VTX(1891, -845, -1485, 550, 4, 243, 199, 152, 255),    VTX(-167, -835, -607, 1416, 663, 162, 197, 211, 255),
    VTX(32, 813, -1186, 389, 1011, 197, 11, 153, 255),
};

static Vtx sArmosSkelVtx_000AA8[3] = {
    VTX(418, 2216, 796, 0, 1024, 212, 100, 48, 255),
    VTX(-381, 995, 466, 1024, 1024, 141, 25, 22, 255),
    VTX(32, 813, 1186, 1027, 538, 197, 11, 103, 255),
};

static Vtx sArmosSkelVtx_000AD8[3] = {
    VTX(3059, 2420, -813, -789, 1033, 25, 105, 204, 255),
    VTX(3059, 2420, 0, 512, 1033, 97, 70, 0, 255),
    VTX(3451, 1881, 0, 512, 111, 97, 70, 0, 255),
};

static Vtx sArmosSkelVtx_000B08[3] = {
    VTX(3059, 2420, 0, 256, 1033, 97, 70, 0, 255),
    VTX(3059, 2420, 813, 906, 1033, 35, 97, 61, 255),
    VTX(3451, 1881, 0, 256, 111, 97, 70, 0, 255),
};

static Vtx sArmosSkelVtx_000B38[27] = {
    VTX(1944, 1977, 796, 1533, 507, 236, 108, 46, 255),   VTX(2372, 2244, -701, 0, 1024, 209, 102, 215, 255),
    VTX(1944, 1977, -796, -98, 507, 251, 110, 210, 255),  VTX(2372, 2244, 701, 1435, 1024, 216, 105, 41, 255),
    VTX(2424, 1621, 1186, -114, 509, 239, 46, 109, 255),  VTX(2372, 2244, 701, 512, 1024, 216, 105, 41, 255),
    VTX(1944, 1977, 796, 616, 509, 236, 108, 46, 255),    VTX(3137, 1545, 1376, 53, -39, 21, 56, 103, 255),
    VTX(3059, 2420, 813, 0, 1024, 35, 97, 61, 255),       VTX(2424, 1621, 1186, 764, 214, 239, 46, 109, 255),
    VTX(3451, 1881, 963, 199, 354, 70, 89, 39, 255),      VTX(3059, 2420, 813, 0, 1024, 35, 97, 61, 255),
    VTX(3137, 1545, 1376, 832, 354, 21, 56, 103, 255),    VTX(2372, 2244, 701, 735, 1024, 216, 105, 41, 255),
    VTX(3451, 1881, 0, -320, 342, 97, 70, 0, 255),        VTX(3451, 1881, -963, 665, 342, 71, 83, 207, 255),
    VTX(3059, 2420, -813, 512, 1024, 25, 105, 204, 255),  VTX(3137, 1545, -1376, 832, 354, 21, 56, 153, 255),
    VTX(3059, 2420, -813, 0, 1024, 25, 105, 204, 255),    VTX(3451, 1881, -963, 199, 354, 71, 83, 207, 255),
    VTX(3059, 2420, -813, 0, 1024, 25, 105, 204, 255),    VTX(2424, 1621, -1186, 764, 214, 239, 46, 147, 255),
    VTX(2372, 2244, -701, 735, 1024, 209, 102, 215, 255), VTX(3137, 1545, -1376, 53, -39, 21, 56, 153, 255),
    VTX(1944, 1977, -796, 616, 509, 251, 110, 210, 255),  VTX(2372, 2244, -701, 512, 1024, 209, 102, 215, 255),
    VTX(2424, 1621, -1186, -114, 509, 239, 46, 147, 255),
};

static Vtx sArmosSkelVtx_000CE8[3] = {
    VTX(3059, 2420, 813, 256, 1024, 35, 97, 61, 255),
    VTX(3451, 1881, 963, 333, 342, 70, 89, 39, 255),
    VTX(3451, 1881, 0, -160, 342, 97, 70, 0, 255),
};

static Vtx sArmosSkelVtx_000D18[32] = {
    VTX(3605, -1595, 0, 956, 417, 51, 148, 0, 255),       VTX(3749, 344, 1763, 306, 123, 36, 247, 114, 255),
    VTX(1891, -845, 1485, 383, 722, 243, 199, 104, 255),  VTX(3749, 344, 1763, 332, 90, 36, 247, 114, 255),
    VTX(2424, 1621, 1186, 140, 498, 239, 46, 109, 255),   VTX(1891, -845, 1485, 607, 487, 243, 199, 104, 255),
    VTX(4909, -84, -443, 88, 89, 113, 240, 219, 255),     VTX(4437, 1300, -841, 108, 470, 81, 72, 206, 255),
    VTX(4437, 1300, 841, 510, 337, 91, 59, 50, 255),      VTX(4909, -84, 443, 299, 19, 106, 225, 46, 255),
    VTX(4909, -84, 443, 347, 459, 106, 225, 46, 255),     VTX(3605, -1595, 0, 12, 0, 51, 148, 0, 255),
    VTX(4909, -84, -443, 130, 463, 113, 240, 219, 255),   VTX(4437, 1300, 841, 31, 174, 91, 59, 50, 255),
    VTX(3137, 1545, 1376, 304, 482, 21, 56, 103, 255),    VTX(3749, 344, 1763, 456, 107, 36, 247, 114, 255),
    VTX(4909, -84, 443, 402, 39, 106, 225, 46, 255),      VTX(4437, 1300, 841, -5, 205, 91, 59, 50, 255),
    VTX(3749, 344, 1763, 118, 478, 36, 247, 114, 255),    VTX(3605, -1595, 0, 689, 304, 51, 148, 0, 255),
    VTX(3137, 1545, 1376, 107, 328, 21, 56, 103, 255),    VTX(3451, 1881, -963, 126, 492, 71, 83, 207, 255),
    VTX(4437, 1300, -841, 31, 174, 81, 72, 206, 255),     VTX(3137, 1545, -1376, 304, 482, 21, 56, 153, 255),
    VTX(3749, 344, -1763, 456, 107, 36, 247, 142, 255),   VTX(2424, 1621, -1186, 140, 498, 239, 46, 147, 255),
    VTX(3137, 1545, -1376, 107, 328, 21, 56, 153, 255),   VTX(3749, 344, -1763, 332, 90, 36, 247, 142, 255),
    VTX(1891, -845, -1485, 607, 487, 243, 199, 152, 255), VTX(3749, 344, -1763, 118, 478, 36, 247, 142, 255),
    VTX(4437, 1300, -841, -5, 205, 81, 72, 206, 255),     VTX(4909, -84, -443, 402, 39, 113, 240, 219, 255),
};

static Vtx sArmosSkelVtx_000F18[3] = {
    VTX(1891, -845, -1485, 383, 722, 243, 199, 152, 255),
    VTX(3749, 344, -1763, 306, 123, 36, 247, 142, 255),
    VTX(3605, -1595, 0, 956, 417, 51, 148, 0, 255),
};

static Vtx sArmosSkelVtx_000F48[3] = {
    VTX(3137, 1545, 1376, 608, 963, 21, 56, 103, 255),
    VTX(4437, 1300, 841, 61, 348, 91, 59, 50, 255),
    VTX(3451, 1881, 963, 252, 983, 70, 89, 39, 255),
};

static Vtx sArmosSkelVtx_000F78[3] = {
    VTX(3451, 1881, 963, 2064, 1044, 70, 89, 39, 255),
    VTX(4437, 1300, -841, 120, -127, 81, 72, 206, 255),
    VTX(3451, 1881, -963, -11, 1044, 71, 83, 207, 255),
};

static Vtx sArmosSkelVtx_000FA8[3] = {
    VTX(3451, 1881, 963, 2064, 1044, 70, 89, 39, 255),
    VTX(4437, 1300, 841, 1934, -127, 91, 59, 50, 255),
    VTX(4437, 1300, -841, 120, -127, 81, 72, 206, 255),
};

static Vtx sArmosSkelVtx_000FD8[3] = {
    VTX(4012, 760, 581, 217, 1532, 86, 81, 20, 255),
    VTX(3146, 42, 1172, 819, 1307, 168, 229, 77, 255),
    VTX(4638, -506, 2250, 609, 159, 23, 65, 97, 255),
};

static Vtx sArmosSkelVtx_001008[51] = {
    VTX(4320, -808, 0, -274, 982, 103, 195, 0, 255),      VTX(4012, 760, 581, 101, 1278, 86, 81, 20, 255),
    VTX(4673, -506, 1381, -106, 517, 102, 36, 206, 255),  VTX(4673, -506, 1381, 372, 544, 102, 36, 206, 255),
    VTX(4596, -1142, 1825, 217, 472, 17, 138, 13, 255),   VTX(4320, -808, 0, 275, 992, 103, 195, 0, 255),
    VTX(4638, -506, 2250, 321, 265, 23, 65, 97, 255),     VTX(4673, -506, 1381, 229, 543, 102, 36, 206, 255),
    VTX(4012, 760, 581, 211, 1382, 86, 81, 20, 255),      VTX(4596, -1142, 1825, 136, 245, 17, 138, 13, 255),
    VTX(4638, -506, 2250, -226, 244, 23, 65, 97, 255),    VTX(3146, 42, 1172, -164, 1230, 168, 229, 77, 255),
    VTX(3146, 42, 1172, -156, 1173, 168, 229, 77, 255),   VTX(4320, -808, 0, 434, 1004, 103, 195, 0, 255),
    VTX(4596, -1142, 1825, 117, 269, 17, 138, 13, 255),   VTX(4673, -506, 1381, 257, 676, 102, 36, 206, 255),
    VTX(4638, -506, 2250, 462, 681, 23, 65, 97, 255),     VTX(5875, -275, 1310, 318, 132, 111, 239, 216, 255),
    VTX(4596, -1142, 1825, 198, 696, 17, 138, 13, 255),   VTX(4673, -506, 1381, 389, 715, 102, 36, 206, 255),
    VTX(5875, -275, 1310, 329, 96, 111, 239, 216, 255),   VTX(4638, -506, 2250, 105, 667, 23, 65, 97, 255),
    VTX(4596, -1142, 1825, 386, 699, 17, 138, 13, 255),   VTX(5875, -275, 1310, 223, 88, 111, 239, 216, 255),
    VTX(5875, -275, -1310, 223, 88, 111, 239, 40, 255),   VTX(4596, -1142, -1825, 386, 699, 17, 138, 243, 255),
    VTX(4638, -506, -2250, 105, 667, 23, 65, 159, 255),   VTX(5875, -275, -1310, 329, 96, 111, 239, 40, 255),
    VTX(4673, -506, -1381, 389, 715, 102, 36, 50, 255),   VTX(4596, -1142, -1825, 198, 696, 17, 138, 243, 255),
    VTX(5875, -275, -1310, 318, 132, 111, 239, 40, 255),  VTX(4638, -506, -2250, 462, 681, 23, 65, 159, 255),
    VTX(4673, -506, -1381, 257, 676, 102, 36, 50, 255),   VTX(4638, -506, -2250, 304, 159, 23, 65, 159, 255),
    VTX(3146, 42, -1172, 409, 1307, 168, 229, 179, 255),  VTX(4012, 760, -581, 108, 1532, 86, 81, 236, 255),
    VTX(3146, 42, -1172, -164, 1230, 168, 229, 179, 255), VTX(4638, -506, -2250, -226, 244, 23, 65, 159, 255),
    VTX(4596, -1142, -1825, 136, 245, 17, 138, 243, 255), VTX(4012, 760, -581, 211, 1382, 86, 81, 236, 255),
    VTX(4673, -506, -1381, 229, 543, 102, 36, 50, 255),   VTX(4638, -506, -2250, 321, 265, 23, 65, 159, 255),
    VTX(4320, -808, 0, 275, 992, 103, 195, 0, 255),       VTX(4596, -1142, -1825, 217, 472, 17, 138, 243, 255),
    VTX(4673, -506, -1381, 372, 544, 102, 36, 50, 255),   VTX(4673, -506, -1381, -106, 517, 102, 36, 50, 255),
    VTX(4012, 760, -581, 101, 1278, 86, 81, 236, 255),    VTX(4320, -808, 0, -274, 982, 103, 195, 0, 255),
    VTX(4596, -1142, -1825, 117, 269, 17, 138, 243, 255), VTX(4320, -808, 0, 434, 1004, 103, 195, 0, 255),
    VTX(3146, 42, -1172, -156, 1173, 168, 229, 179, 255),
};

static Vtx sArmosSkelVtx_001338[8] = {
    VTX(1905, -1595, 0, 1061, 106, 237, 138, 0, 255),      VTX(1891, -845, 1485, -632, 219, 243, 199, 104, 255),
    VTX(-167, -835, 607, 341, 1024, 173, 189, 54, 255),    VTX(-167, -835, -607, 1722, 1024, 162, 197, 211, 255),
    VTX(1891, -845, -1485, 2747, 219, 243, 199, 152, 255), VTX(3605, -1595, 0, 1603, 798, 51, 148, 0, 255),
    VTX(1905, -1595, 0, 853, 128, 237, 138, 0, 255),       VTX(1891, -845, -1485, 97, 877, 243, 199, 152, 255),
};

static Vtx sArmosSkelVtx_0013B8[3] = {
    VTX(1891, -845, 1485, -516, 929, 243, 199, 104, 255),
    VTX(1905, -1595, 0, 670, 232, 237, 138, 0, 255),
    VTX(3605, -1595, 0, 1171, 773, 51, 148, 0, 255),
};

static Vtx sArmosSkelVtx_0013E8[10] = {
    VTX(1944, 1977, -796, 0, -185, 251, 110, 210, 255), VTX(418, 2216, -796, 0, 1024, 189, 87, 209, 255),
    VTX(418, 2216, 796, 510, 1024, 212, 100, 48, 255),  VTX(1944, 1977, 796, 510, -185, 236, 108, 46, 255),
    VTX(1944, 1977, 796, 477, -201, 236, 108, 46, 255), VTX(418, 2216, 796, 183, 1021, 212, 100, 48, 255),
    VTX(680, 1804, 1215, 465, 977, 244, 63, 101, 255),  VTX(680, 1804, -1215, 465, 977, 244, 63, 155, 255),
    VTX(418, 2216, -796, 183, 1021, 189, 87, 209, 255), VTX(1944, 1977, -796, 477, -201, 251, 110, 210, 255),
};

static Vtx sArmosSkelVtx_001488[4] = {
    VTX(-381, 995, 466, 931, -372, 141, 25, 22, 255),
    VTX(-381, 995, -466, 63, -372, 144, 24, 223, 255),
    VTX(-167, -835, -607, -68, 1343, 162, 197, 211, 255),
    VTX(-167, -835, 607, 1062, 1343, 173, 189, 54, 255),
};

static Vtx sArmosSkelVtx_0014C8[4] = {
    VTX(418, 2216, -796, 0, 975, 189, 87, 209, 255),
    VTX(-381, 995, -466, 467, 770, 144, 24, 223, 255),
    VTX(-381, 995, 466, 467, 315, 141, 25, 22, 255),
    VTX(418, 2216, 796, 0, 199, 212, 100, 48, 255),
};

static Vtx sArmosSkelVtx_001508[4] = {
    VTX(2372, 2244, 701, 2050, 1024, 216, 105, 41, 255),
    VTX(3059, 2420, 813, 2214, 116, 35, 97, 61, 255),
    VTX(3059, 2420, -813, -164, 116, 25, 105, 204, 255),
    VTX(2372, 2244, -701, 0, 1024, 209, 102, 215, 255),
};

static Vtx sArmosSkelVtx_001548[24] = {
    VTX(3431, 1576, -1204, 183, 564, 30, 107, 212, 255), VTX(4023, 1464, -961, 558, 676, 30, 107, 212, 255),
    VTX(3849, 1362, -1454, 252, 279, 30, 107, 212, 255), VTX(3455, 1010, -1524, 436, 737, 232, 41, 146, 255),
    VTX(3431, 1576, -1204, 217, 701, 232, 41, 146, 255), VTX(3849, 1362, -1454, 335, 432, 232, 41, 146, 255),
    VTX(4048, 899, -1281, 487, 762, 56, 224, 155, 255),  VTX(3455, 1010, -1524, 211, 771, 56, 224, 155, 255),
    VTX(3849, 1362, -1454, 282, 476, 56, 224, 155, 255), VTX(4023, 1464, -961, 131, 769, 109, 35, 221, 255),
    VTX(4048, 899, -1281, 381, 709, 109, 35, 221, 255),  VTX(3849, 1362, -1454, 278, 501, 109, 35, 221, 255),
    VTX(3849, 1362, 1454, 278, 501, 109, 35, 35, 255),   VTX(4048, 899, 1281, 381, 709, 109, 35, 35, 255),
    VTX(4023, 1464, 961, 131, 769, 109, 35, 35, 255),    VTX(3849, 1362, 1454, 282, 476, 56, 224, 101, 255),
    VTX(3455, 1010, 1524, 211, 771, 56, 224, 101, 255),  VTX(4048, 899, 1281, 487, 762, 56, 224, 101, 255),
    VTX(3849, 1362, 1454, 335, 432, 232, 41, 110, 255),  VTX(3431, 1576, 1204, 217, 701, 232, 41, 110, 255),
    VTX(3455, 1010, 1524, 436, 737, 232, 41, 110, 255),  VTX(3849, 1362, 1454, 252, 279, 30, 107, 44, 255),
    VTX(4023, 1464, 961, 558, 676, 30, 107, 44, 255),    VTX(3431, 1576, 1204, 183, 564, 30, 107, 44, 255),
};

Gfx sArmosSkelLimbDL_0016C8[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 0, 0, 5, 1),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_003C38),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, K5, SHADE,
                       COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sArmosSkelVtx_000838[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&sArmosSkelVtx_000868[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_003238),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPVertex(&sArmosSkelVtx_000898[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&sArmosSkelVtx_000898[30], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&sArmosSkelVtx_000AA8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002838),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, 0, 5, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_004C38),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPVertex(&sArmosSkelVtx_000AD8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&sArmosSkelVtx_000B08[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002838),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, 0, 5, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_003C38),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPVertex(&sArmosSkelVtx_000B38[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 9, 8, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 20, 23, 0),
    gsSP1Triangle(24, 25, 26, 0),
    gsSPVertex(&sArmosSkelVtx_000CE8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 15, 0, 5, 14),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 15, 0, 5, 14),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_003A38),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 256, 1, 0, 0, 4, 0, 0, 4, 0),
    gsDPSetTileSize(1, 0, 0, 60, 60),
    gsSPVertex(&sArmosSkelVtx_000D18[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSP2Triangles(3, 20, 4, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 23, 22, 0, 25, 26, 27, 0),
    gsSP2Triangles(28, 25, 27, 0, 29, 30, 31, 0),
    gsSP1Triangle(31, 19, 29, 0),
    gsSPVertex(&sArmosSkelVtx_000F18[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&sArmosSkelVtx_000F48[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_003038),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_004438),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, 0, 5, 0, 1, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPVertex(&sArmosSkelVtx_000F78[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&sArmosSkelVtx_000FA8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_002938),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 256, 1, 0, 0, 5, 0, 0, 4, 0),
    gsDPSetTileSize(1, 0, 0, 60, 124),
    gsSPVertex(&sArmosSkelVtx_000FD8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&sArmosSkelVtx_001008[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&sArmosSkelVtx_001008[30], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_003C38),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 256, 1, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(1, 0, 0, 124, 124),
    gsSPVertex(&sArmosSkelVtx_001338[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 7, 0),
    gsSPVertex(&sArmosSkelVtx_0013B8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002838),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, 0, 5, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0, COMBINED, K5, PRIMITIVE, COMBINED_ALPHA,
                       COMBINED, 0, PRIMITIVE, 0),
    gsSPVertex(&sArmosSkelVtx_0013E8[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&sArmosSkelVtx_001488[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002D38),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 3, 5, 0, 3, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, 3, 5, 0, 3, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsSPVertex(&sArmosSkelVtx_0014C8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002E38),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 3, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 3, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsSPVertex(&sArmosSkelVtx_001508[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002D38),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 3, 5, 0, 3, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, 3, 5, 0, 3, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsDPSetPrimColor(0, 0, 119, 119, 119, 255),
    gsSPVertex(&sArmosSkelVtx_001548[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSPEndDisplayList(),
};

static Vtx sArmosSkelVtx_001EA8[33] = {
    VTX(876, -1039, 7, 333, 16, 100, 7, 191, 255),       VTX(681, -113, -196, 414, 316, 100, 7, 191, 255),
    VTX(812, -113, 7, 568, 238, 100, 7, 191, 255),       VTX(681, -1753, 7, 462, 219, 105, 227, 206, 255),
    VTX(681, -1139, -349, 117, 170, 105, 227, 206, 255), VTX(876, -1039, 7, 229, 66, 105, 227, 206, 255),
    VTX(876, -1039, 7, 512, 256, 105, 227, 50, 255),     VTX(681, -1139, 363, 97, 255, 105, 227, 50, 255),
    VTX(681, -1753, 7, 403, 35, 105, 227, 50, 255),      VTX(812, -113, 7, 10, 86, 100, 7, 65, 255),
    VTX(681, -113, 210, 180, 10, 100, 7, 65, 255),       VTX(876, -1039, 7, 723, 226, 100, 7, 65, 255),
    VTX(681, -1139, 363, 1010, 99, 103, 9, 59, 255),     VTX(876, -1039, 7, 723, 226, 103, 9, 59, 255),
    VTX(681, -113, 210, 180, 10, 103, 9, 59, 255),       VTX(681, -113, 210, 180, 10, 153, 9, 59, 255),
    VTX(485, -1039, 7, 723, 226, 153, 9, 59, 255),       VTX(681, -1139, 363, 1010, 99, 153, 9, 59, 255),
    VTX(485, -1039, 7, 723, 226, 156, 7, 65, 255),       VTX(681, -113, 210, 180, 10, 156, 7, 65, 255),
    VTX(549, -113, 7, 10, 86, 156, 7, 65, 255),          VTX(485, -1039, 7, 229, 66, 151, 227, 206, 255),
    VTX(681, -1139, -349, 117, 170, 151, 227, 206, 255), VTX(681, -1753, 7, 462, 219, 151, 227, 206, 255),
    VTX(549, -113, 7, 568, 238, 156, 7, 191, 255),       VTX(681, -113, -196, 414, 316, 156, 7, 191, 255),
    VTX(485, -1039, 7, 333, 16, 156, 7, 191, 255),       VTX(681, -1139, -349, 73, 146, 153, 9, 197, 255),
    VTX(485, -1039, 7, 333, 16, 153, 9, 197, 255),       VTX(681, -113, -196, 414, 316, 153, 9, 197, 255),
    VTX(681, -113, -196, 414, 316, 103, 9, 197, 255),    VTX(876, -1039, 7, 333, 16, 103, 9, 197, 255),
    VTX(681, -1139, -349, 73, 146, 103, 9, 197, 255),
};

static Vtx sArmosSkelVtx_0020B8[3] = {
    VTX(681, -1753, 7, 806, 142, 151, 227, 50, 255),
    VTX(681, -1139, 363, 194, 1021, 151, 227, 50, 255),
    VTX(485, -1039, 7, 1024, 1024, 151, 227, 50, 255),
};

static Vtx sArmosSkelVtx_0020E8[22] = {
    VTX(755, 372, 469, 430, -15, 248, 47, 109, 255),    VTX(129, 372, 113, 430, 512, 169, 81, 245, 255),
    VTX(129, -216, 113, 0, 512, 165, 206, 59, 255),     VTX(755, -216, 469, 0, -15, 45, 178, 78, 255),
    VTX(522, 372, -454, 430, 468, 8, 47, 147, 255),     VTX(522, -216, -454, 0, 468, 211, 178, 178, 255),
    VTX(129, 372, 113, 589, 512, 169, 81, 245, 255),    VTX(755, 372, 469, 535, -100, 248, 47, 109, 255),
    VTX(1147, 372, -99, -54, -100, 87, 81, 11, 255),    VTX(522, 372, -454, 0, 512, 8, 47, 147, 255),
    VTX(522, -216, -454, 563, -75, 211, 178, 178, 255), VTX(1147, -216, -99, -52, -75, 91, 206, 197, 255),
    VTX(755, -216, 469, 0, 512, 45, 178, 78, 255),      VTX(129, -216, 113, 614, 512, 165, 206, 59, 255),
    VTX(522, 372, -454, 430, 512, 8, 47, 147, 255),     VTX(1147, 372, -99, 430, -15, 87, 81, 11, 255),
    VTX(1147, -216, -99, 0, -15, 91, 206, 197, 255),    VTX(522, -216, -454, 0, 512, 211, 178, 178, 255),
    VTX(1147, 372, -99, 0, 7, 87, 81, 11, 255),         VTX(755, 372, 469, 0, 512, 248, 47, 109, 255),
    VTX(755, -216, 469, 430, 512, 45, 178, 78, 255),    VTX(1147, -216, -99, 430, 7, 91, 206, 197, 255),
};

static Vtx sArmosSkelVtx_002248[3] = {
    VTX(129, 372, 113, 861, 1024, 169, 81, 245, 255),
    VTX(522, -216, -454, 0, 14, 211, 178, 178, 255),
    VTX(129, -216, 113, 0, 1024, 165, 206, 59, 255),
};

Gfx sArmosSkelLimbDL_002278[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 1, 0, 5, 5),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 1, 0, 5, 5),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_005438),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 256, 7, 0, 2, 3, 0, 2, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 31, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 256, 1, 0, 2, 3, 0, 2, 4, 0),
    gsDPSetTileSize(1, 0, 0, 60, 28),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, K5, SHADE,
                       COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sArmosSkelVtx_001EA8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&sArmosSkelVtx_001EA8[30], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&sArmosSkelVtx_0020B8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002638),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 0, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 2, 0, 0, 0, 0, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_003A38),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 0, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 256, 1, 0, 0, 4, 0, 0, 4, 0),
    gsDPSetTileSize(1, 0, 0, 60, 60),
    gsSPVertex(&sArmosSkelVtx_0020E8[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 8, 9, 0, 10, 11, 12, 0),
    gsSP2Triangles(10, 12, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(14, 16, 17, 0, 18, 19, 20, 0),
    gsSP1Triangle(18, 20, 21, 0),
    gsSPVertex(&sArmosSkelVtx_002248[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

static Vtx sArmosSkelVtx_002440[14] = {
    VTX(819, -416, 191, 513, 659, 101, 24, 59, 255),   VTX(1056, -117, -945, 0, 1138, 115, 18, 27, 255),
    VTX(546, 783, 31, 0, 24, 100, 30, 59, 255),        VTX(1056, -117, -945, -8, 1059, 115, 18, 27, 255),
    VTX(819, -416, 191, 496, 938, 101, 24, 59, 255),   VTX(971, -1664, 281, 500, 321, 103, 255, 61, 255),
    VTX(792, -2443, 175, 0, 24, 99, 225, 59, 255),     VTX(1168, -1664, -878, 0, 1138, 117, 246, 20, 255),
    VTX(971, -1664, 281, 513, 659, 103, 255, 61, 255), VTX(-59, -116, 950, 0, 1138, 81, 29, 82, 255),
    VTX(53, -1664, 1015, 0, 1138, 72, 227, 91, 255),   VTX(-60, -117, 949, -8, 1059, 77, 13, 90, 255),
    VTX(52, -1664, 1014, -16, 296, 74, 9, 93, 255),    VTX(971, -1664, 281, 500, 321, 103, 255, 61, 255),
};

static Vtx sArmosSkelVtx_002520[3] = {
    VTX(971, -1664, 281, 500, 321, 103, 255, 61, 255),
    VTX(1168, -1664, -878, -16, 296, 117, 246, 20, 255),
    VTX(1056, -117, -945, -8, 1059, 115, 18, 27, 255),
};

Gfx sArmosSkelLimbDL_002550[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_I, G_IM_SIZ_16b, 1, sArmosSkelTex_002D38),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 2, 2, 4, 1),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_4b, 1, 0, 0, 0, 2, 5, 2, 2, 4, 1),
    gsDPSetTileSize(0, 0, 0, 60, 124),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sArmosSkelTex_005478),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 256, 7, 0, 2, 5, 0, 2, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 511, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 256, 1, 0, 2, 5, 0, 2, 4, 0),
    gsDPSetTileSize(1, 0, 0, 60, 124),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, COMBINED, K5, SHADE,
                       COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsSPSetOtherMode(0xE2, 3, 29, 0xC8112078),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sArmosSkelVtx_002440[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 2, 9, 0, 0),
    gsSP2Triangles(8, 10, 6, 0, 11, 12, 13, 0),
    gsSP1Triangle(13, 4, 11, 0),
    gsSPVertex(&sArmosSkelVtx_002520[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
};

u64 sArmosSkelTex_002638[] = {
#include "assets/objects/object_am//sArmosSkelTex_002638.i8.inc.c"
};

u64 sArmosSkelTex_002838[] = {
#include "assets/objects/object_am//sArmosSkelTex_002838.i8.inc.c"
};

u64 sArmosSkelTex_002938[] = {
#include "assets/objects/object_am//sArmosSkelTex_002938.rgb5a1.inc.c"
};

u64 sArmosSkelTex_002D38[] = {
#include "assets/objects/object_am//sArmosSkelTex_002D38.i8.inc.c"
};

u64 sArmosSkelTex_002E38[] = {
#include "assets/objects/object_am//sArmosSkelTex_002E38.i8.inc.c"
};

u64 sArmosSkelTex_003038[] = {
#include "assets/objects/object_am//sArmosSkelTex_003038.i8.inc.c"
};

u64 sArmosSkelTex_003238[] = {
#include "assets/objects/object_am//sArmosSkelTex_003238.rgb5a1.inc.c"
};

u64 sArmosSkelTex_003A38[] = {
#include "assets/objects/object_am//sArmosSkelTex_003A38.rgb5a1.inc.c"
};

u64 sArmosSkelTex_003C38[] = {
#include "assets/objects/object_am//sArmosSkelTex_003C38.rgb5a1.inc.c"
};

u64 sArmosSkelTex_004438[] = {
#include "assets/objects/object_am//sArmosSkelTex_004438.rgb5a1.inc.c"
};

u64 sArmosSkelTex_004C38[] = {
#include "assets/objects/object_am//sArmosSkelTex_004C38.rgb5a1.inc.c"
};

u64 sArmosSkelTex_005438[] = {
#include "assets/objects/object_am//sArmosSkelTex_005438.i8.inc.c"
};

u64 sArmosSkelTex_005478[] = {
#include "assets/objects/object_am//sArmosSkelTex_005478.rgb5a1.inc.c"
};

StandardLimb sArmosSkelLimb_005878 = { { 0, 1600, 0 }, 1, 255, NULL };

StandardLimb sArmosSkelLimb_005884 = { { 0, 0, 0 }, 2, 10, NULL };

StandardLimb sArmosSkelLimb_005890 = { { 0, 0, 0 }, 3, 255, NULL };

StandardLimb sArmosSkelLimb_00589C = { { 0, 0, 0 }, 255, 4, sArmosSkelLimbDL_0016C8 };

StandardLimb sArmosSkelLimb_0058A8 = { { 500, 1600, 900 }, 5, 7, NULL };

StandardLimb sArmosSkelLimb_0058B4 = { { 0, 0, 0 }, 6, 255, NULL };

StandardLimb sArmosSkelLimb_0058C0 = { { 0, 0, 0 }, 255, 255, sArmosSkelLimbDL_002550 };

StandardLimb sArmosSkelLimb_0058CC = { { 500, 1600, -900 }, 8, 255, NULL };

StandardLimb sArmosSkelLimb_0058D8 = { { 0, 0, 0 }, 9, 255, NULL };

StandardLimb sArmosSkelLimb_0058E4 = { { 0, 0, 0 }, 255, 255, sArmosSkelLimbDL_002278 };

StandardLimb sArmosSkelLimb_0058F0 = { { 0, 0, 0 }, 11, 255, NULL };

StandardLimb sArmosSkelLimb_0058FC = { { 0, 0, 0 }, 12, 255, NULL };

StandardLimb sArmosSkelLimb_005908 = { { 0, 0, 0 }, 255, 255, sArmosSkelLimbDL_0005D0 };

static void* sArmosSkelLimbs[13] = {
    &sArmosSkelLimb_005878, &sArmosSkelLimb_005884, &sArmosSkelLimb_005890, &sArmosSkelLimb_00589C,
    &sArmosSkelLimb_0058A8, &sArmosSkelLimb_0058B4, &sArmosSkelLimb_0058C0, &sArmosSkelLimb_0058CC,
    &sArmosSkelLimb_0058D8, &sArmosSkelLimb_0058E4, &sArmosSkelLimb_0058F0, &sArmosSkelLimb_0058FC,
    &sArmosSkelLimb_005908,
};

SkeletonHeader gArmosSkel = { sArmosSkelLimbs, 13 };

static s16 sArmosDamagedAnimFrameData[204] = {
    0x0000, 0x4000, 0xC000, 0x0640, 0x0706, 0x07CC, 0x07C8, 0x07BD, 0x07AC, 0x0795, 0x077A, 0x075B, 0x073A, 0x0718,
    0x06F5, 0x06D2, 0x06B1, 0x0693, 0x0677, 0x0661, 0x064F, 0x0644, 0x0640, 0x0000, 0x03E1, 0x07C1, 0x07AD, 0x0775,
    0x071E, 0x06AB, 0x0623, 0x058A, 0x04E5, 0x0438, 0x0389, 0x02DD, 0x0237, 0x019E, 0x0116, 0x00A4, 0x004C, 0x0014,
    0x0000, 0x4000, 0x3555, 0x2AAB, 0x2AE1, 0x2B7C, 0x2C6D, 0x2DA7, 0x2F1E, 0x30C3, 0x328A, 0x3465, 0x3646, 0x3821,
    0x39E7, 0x3B8D, 0x3D03, 0x3E3E, 0x3F2F, 0x3FCA, 0x4000, 0x0000, 0xFB86, 0xF24E, 0xEAAB, 0xE65A, 0xE39E, 0xE38E,
    0xE57C, 0xE7EA, 0xEABC, 0xEDD5, 0xF118, 0xF46A, 0xF7AC, 0xFAC4, 0xFD94, 0x0000, 0x00F9, 0x007C, 0x0000, 0x0000,
    0xF9BB, 0xED4D, 0xE444, 0xE2B0, 0xE481, 0xE71C, 0xE95D, 0xEBD1, 0xEE6B, 0xF11B, 0xF3D4, 0xF688, 0xF927, 0xFBA5,
    0xFDF2, 0x0000, 0x00DA, 0x006D, 0x0000, 0x8000, 0x87E0, 0x97F8, 0xA4FA, 0xAB6E, 0xAECD, 0xAE39, 0xAAF2, 0xA6E9,
    0xA24C, 0x9D45, 0x9800, 0x92A9, 0x8D6B, 0x8873, 0x83EB, 0x8000, 0x7E6B, 0x7F36, 0x8000, 0x0000, 0x047A, 0x0DB2,
    0x1555, 0x19A6, 0x1C62, 0x1C72, 0x1A84, 0x1816, 0x1544, 0x122B, 0x0EE8, 0x0B96, 0x0854, 0x053C, 0x026C, 0x0000,
    0xFF07, 0xFF84, 0x0000, 0x0000, 0x0645, 0x12B3, 0x1BBC, 0x1D50, 0x1B7F, 0x18E4, 0x16A3, 0x142F, 0x1195, 0x0EE5,
    0x0C2C, 0x0978, 0x06D9, 0x045B, 0x020E, 0x0000, 0xFF26, 0xFF93, 0x0000, 0x8000, 0x87E5, 0x9802, 0xA4FA, 0xAB41,
    0xAE65, 0xADB2, 0xAA6E, 0xA66E, 0xA1DC, 0x9CE4, 0x97B0, 0x926B, 0x8D3F, 0x8857, 0x83DF, 0x8000, 0x7E70, 0x7F38,
    0x8000, 0xC000, 0xC99A, 0xD333, 0xD302, 0xD277, 0xD19E, 0xD083, 0xCF32, 0xCDB7, 0xCC1D, 0xCA72, 0xC8C1, 0xC716,
    0xC57D, 0xC401, 0xC2B0, 0xC195, 0xC0BC, 0xC031, 0xC000, 0x0000,
};

static JointIndex sArmosDamagedAnimJointIndices[14] = {
    { 0x0000, 0x0003, 0x0017 }, { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0001, 0x0000 }, { 0x0000, 0x0000, 0x002B },
    { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0000, 0x0002 }, { 0x003F, 0x0053, 0x0067 }, { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 }, { 0x007B, 0x008F, 0x00A3 }, { 0x0000, 0x0000, 0x0000 }, { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x00B7 }, { 0x0000, 0x0000, 0x0000 },
};

AnimationHeader gArmosDamagedAnim = { { 20 }, sArmosDamagedAnimFrameData, sArmosDamagedAnimJointIndices, 3 };

static u8 unaccounted_005B4C[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
