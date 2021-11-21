#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "ovl_En_Clear_Tag.h"

static Vtx ovl_En_Clear_TagVtx_0029C8[5];
static Vtx ovl_En_Clear_TagVtx_002A18[9];
static Vtx ovl_En_Clear_TagVtx_002AA8[31];
static Vtx ovl_En_Clear_TagVtx_002C98[30];
static Vtx ovl_En_Clear_TagVtx_002E78[19];
static Vtx ovl_En_Clear_TagVtx_002FA8[32];
static Vtx ovl_En_Clear_TagVtx_0031A8[10];
static Vtx ovl_En_Clear_TagVtx_003248[6];
static Vtx ovl_En_Clear_TagVtx_0032A8[6];
static Vtx ovl_En_Clear_TagVtx_0063F8[6];
static Vtx ovl_En_Clear_TagVtx_006658[3];
static Vtx ovl_En_Clear_TagVtx_006A08[3];
static Vtx ovl_En_Clear_TagVtx_0070D0[3];
static Vtx ovl_En_Clear_TagVtx_0081C8[4];
static Vtx ovl_En_Clear_TagVtx_008488[3];
static Vtx ovl_En_Clear_TagVtx_008940[3];

Gfx gArwingDL[] = {
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_003B88, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_En_Clear_TagVtx_0029C8[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_004B88, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_En_Clear_TagVtx_002A18[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Quadrangle(6, 7, 8, 4, 0),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_003388, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_En_Clear_TagVtx_002AA8[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(0, 2, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 5, 7, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(15, 16, 13, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 9, 20, 0, 20, 9, 12, 0),
    gsSP2Triangles(12, 21, 20, 0, 4, 22, 23, 0),
    gsSP2Triangles(4, 23, 24, 0, 23, 25, 3, 0),
    gsSP2Triangles(3, 24, 23, 0, 26, 27, 28, 0),
    gsSP2Triangles(28, 29, 30, 0, 28, 30, 26, 0),
    gsSPVertex(&ovl_En_Clear_TagVtx_002C98[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(2, 4, 3, 0, 5, 4, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 5, 0),
    gsSP2Triangles(5, 8, 9, 0, 4, 5, 9, 0),
    gsSP2Triangles(9, 10, 4, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 20, 21, 0, 19, 22, 23, 0),
    gsSP2Triangles(23, 20, 19, 0, 24, 25, 26, 0),
    gsSP1Triangle(27, 28, 29, 0),
    gsSPVertex(&ovl_En_Clear_TagVtx_002E78[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 14, 0),
    gsSP2Triangles(12, 14, 10, 0, 15, 14, 13, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_005388, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_En_Clear_TagVtx_002FA8[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 0, 7, 8, 0),
    gsSP2Triangles(8, 9, 0, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 10, 13, 0, 14, 15, 16, 0),
    gsSP2Triangles(5, 17, 18, 0, 17, 5, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 26, 25, 0),
    gsSP2Triangles(28, 29, 30, 0, 31, 30, 29, 0),
    gsSPVertex(&ovl_En_Clear_TagVtx_0031A8[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 8, 9, 0),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_005B88, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_En_Clear_TagVtx_003248[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_003308, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&ovl_En_Clear_TagVtx_0032A8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

static Vtx ovl_En_Clear_TagVtx_0029C8[5] = {
    VTX(-15, -1, -23, 2528, 607, 0, 141, 229, 255),
    VTX(0, 8, -63, 1024, -318, 0, 141, 229, 255),
    VTX(15, -1, -23, -479, 607, 117, 236, 241, 255),
    VTX(-15, -1, -23, 2528, 607, 141, 28, 252, 255),
    VTX(0, -12, -31, 1024, 1712, 0, 55, 150, 255),
}; 

static Vtx ovl_En_Clear_TagVtx_002A18[9] = {
    VTX(-4, 2, 6, 0, 1023, 206, 106, 18, 255),
    VTX(-4, 17, -26, 1024, 0, 182, 93, 3, 255),
    VTX(-7, 8, -25, 1024, 1023, 156, 63, 0, 255),
    VTX(7, 8, -25, 1024, 1024, 101, 63, 0, 255),
    VTX(4, 17, -26, 1024, 0, 75, 93, 3, 255),
    VTX(4, 2, 6, 0, 1023, 51, 106, 18, 255),
    VTX(-4, 17, -26, 0, 0, 182, 93, 3, 255),
    VTX(-4, 2, 6, 0, 1024, 206, 106, 18, 255),
    VTX(4, 2, 6, 1024, 1024, 51, 106, 18, 255),
}; 

static Vtx ovl_En_Clear_TagVtx_002AA8[31] = {
    VTX(60, -17, -37, 489, 979, 237, 141, 238, 255),
    VTX(106, -14, -59, -145, -2096, 250, 143, 221, 255),
    VTX(71, -18, -32, 993, 378, 0, 138, 252, 255),
    VTX(59, -13, -44, 0, 1024, 215, 162, 197, 255),
    VTX(62, -15, -29, 1024, 1024, 240, 145, 36, 255),
    VTX(71, -18, -32, 993, 378, 16, 115, 26, 255),
    VTX(106, -14, -59, -145, -2096, 11, 115, 30, 255),
    VTX(59, -13, -44, 0, 1024, 28, 116, 10, 255),
    VTX(62, -15, -29, 1024, 1024, 44, 111, 2, 255),
    VTX(-59, -13, -44, 0, 1024, 229, 116, 10, 255),
    VTX(-106, -14, -59, -145, 4144, 246, 115, 30, 255),
    VTX(-71, -18, -32, 993, 1669, 241, 115, 26, 255),
    VTX(-62, -15, -29, 1024, 1024, 213, 111, 2, 255),
    VTX(-60, -17, -37, 489, 1075, 27, 145, 226, 255),
    VTX(-59, -13, -44, 0, 1024, 35, 157, 202, 255),
    VTX(-30, -3, -30, 372, -1195, 63, 176, 196, 255),
    VTX(-25, -7, -22, 840, -1542, 28, 142, 15, 255),
    VTX(-26, -2, -4, 1963, -1876, 18, 143, 32, 255),
    VTX(-62, -15, -29, 1024, 1024, 17, 145, 36, 255),
    VTX(-30, -3, -30, 372, -1195, 227, 114, 234, 255),
    VTX(-26, 0, -22, 827, -1606, 214, 112, 0, 255),
    VTX(-26, -2, -4, 1963, -1876, 212, 110, 7, 255),
    VTX(26, -2, -4, 1963, 3924, 239, 143, 32, 255),
    VTX(25, -7, -22, 840, 3590, 223, 143, 2, 255),
    VTX(60, -17, -37, 489, 972, 237, 141, 238, 255),
    VTX(30, -3, -30, 372, 3243, 193, 14, 156, 255),
    VTX(0, -13, 0, 512, -436, 0, 138, 253, 255),
    VTX(0, -12, -31, 512, 1230, 0, 138, 249, 255),
    VTX(10, -11, -27, 1024, 1024, 41, 145, 250, 255),
    VTX(15, -1, -23, 1288, 847, 117, 236, 241, 255),
    VTX(10, -12, -11, 1024, 190, 87, 176, 11, 255),
}; 

static Vtx ovl_En_Clear_TagVtx_002C98[30] = {
    VTX(15, -1, -23, 1288, 847, 117, 236, 241, 255),
    VTX(0, -1, 72, 512, -4167, 107, 206, 15, 255),
    VTX(0, -13, 36, 512, -2318, 92, 182, 15, 255),
    VTX(10, -12, -11, 1024, 190, 87, 176, 11, 255),
    VTX(0, -13, 0, 512, -436, 0, 138, 253, 255),
    VTX(-10, -12, -11, 0, 190, 170, 176, 11, 255),
    VTX(0, -13, 36, 512, -2318, 147, 214, 18, 255),
    VTX(0, -1, 72, 512, -4167, 150, 206, 15, 255),
    VTX(-15, -1, -23, -263, 847, 141, 28, 252, 255),
    VTX(-10, -11, -27, 0, 1024, 216, 145, 250, 255),
    VTX(0, -12, -31, 512, 1230, 0, 138, 249, 255),
    VTX(26, 0, -22, 60, 926, 141, 26, 240, 255),
    VTX(30, -3, -30, 0, 1024, 193, 14, 156, 255),
    VTX(25, -7, -22, 83, 1022, 141, 26, 240, 255),
    VTX(15, -1, -23, 1288, 1603, 117, 236, 241, 255),
    VTX(10, -11, -27, 1024, 1023, 44, 20, 147, 255),
    VTX(0, -12, -31, 512, 966, 0, 55, 150, 255),
    VTX(-10, -11, -27, 0, 1023, 213, 20, 147, 255),
    VTX(-15, -1, -23, -263, 1603, 141, 28, 252, 255),
    VTX(26, 0, -22, 827, 3654, 43, 112, 0, 255),
    VTX(59, -13, -44, 0, 1024, 28, 116, 10, 255),
    VTX(30, -3, -30, 372, 3243, 193, 14, 156, 255),
    VTX(26, -2, -4, 1963, 3924, 45, 110, 7, 255),
    VTX(62, -15, -29, 1024, 1024, 44, 111, 2, 255),
    VTX(-25, -7, -22, 941, 1022, 116, 26, 240, 255),
    VTX(-30, -3, -30, 1024, 1024, 63, 176, 196, 255),
    VTX(-26, 0, -22, 964, 926, 116, 26, 240, 255),
    VTX(7, 8, -25, 0, 1024, 101, 63, 0, 255),
    VTX(15, -1, -23, -537, 1062, 117, 236, 241, 255),
    VTX(0, 8, -63, 512, 3666, 102, 60, 237, 255),
}; 

static Vtx ovl_En_Clear_TagVtx_002E78[19] = {
    VTX(-4, 17, -26, 775, 985, 182, 93, 3, 255),
    VTX(4, 17, -26, 249, 985, 75, 93, 3, 255),
    VTX(0, 8, -63, 512, 3666, 174, 82, 233, 255),
    VTX(-15, -1, -23, 1562, 1062, 141, 28, 252, 255),
    VTX(-7, 8, -25, 1024, 1023, 156, 63, 0, 255),
    VTX(-4, 2, 6, 325, 1999, 206, 106, 18, 255),
    VTX(-15, -1, -23, -13, 975, 141, 28, 252, 255),
    VTX(0, -1, 72, 344, 4344, 0, 119, 7, 255),
    VTX(15, -1, -23, 1024, 1024, 117, 236, 241, 255),
    VTX(4, 2, 6, 585, 2011, 51, 106, 18, 255),
    VTX(-25, -7, -22, 840, -1555, 28, 142, 15, 255),
    VTX(-62, -15, -29, 1024, 1024, 17, 145, 36, 255),
    VTX(-71, -18, -32, 993, 1669, 6, 139, 14, 255),
    VTX(-106, -14, -59, -145, 4144, 7, 143, 221, 255),
    VTX(-60, -17, -37, 489, 1068, 27, 145, 226, 255),
    VTX(-59, -13, -44, 0, 1024, 35, 157, 202, 255),
    VTX(0, -1, 72, 512, -2282, 0, 119, 7, 255),
    VTX(4, 2, 6, 384, 27, 51, 106, 18, 255),
    VTX(-4, 2, 6, 640, 27, 206, 106, 18, 255),
}; 

static Vtx ovl_En_Clear_TagVtx_002FA8[32] = {
    VTX(31, -1, -22, -864, 1024, 117, 23, 9, 255),
    VTX(21, -7, -41, -431, 544, 0, 114, 219, 255),
    VTX(12, -1, -22, 0, 1024, 0, 114, 219, 255),
    VTX(21, -16, -13, -431, 1615, 156, 194, 0, 255),
    VTX(21, -6, 38, -431, 3585, 139, 3, 19, 255),
    VTX(12, -1, -22, 0, 1023, 140, 234, 246, 255),
    VTX(21, -7, -41, -431, 317, 165, 185, 232, 255),
    VTX(21, -6, 38, -431, 3585, 118, 3, 19, 255),
    VTX(21, -16, -13, -431, 1615, 101, 194, 0, 255),
    VTX(21, -7, -41, -431, 317, 92, 185, 232, 255),
    VTX(31, -1, -22, -864, 1023, 117, 23, 9, 255),
    VTX(21, 13, -17, -431, 1027, 98, 64, 22, 255),
    VTX(21, -6, 38, -431, -1535, 118, 3, 19, 255),
    VTX(21, 27, -56, -431, 2865, 98, 64, 23, 255),
    VTX(12, -1, -22, 0, 1024, 140, 234, 246, 255),
    VTX(21, 27, -56, -431, -937, 0, 164, 180, 255),
    VTX(31, -1, -22, -864, 1024, 0, 164, 180, 255),
    VTX(21, 13, -17, -431, 1027, 159, 64, 22, 255),
    VTX(21, 27, -56, -431, 2865, 159, 64, 23, 255),
    VTX(21, -6, 38, -431, -1535, 139, 3, 19, 255),
    VTX(-21, -16, -13, 1456, 1615, 156, 194, 0, 255),
    VTX(-21, -6, 38, 1456, 3585, 139, 3, 19, 255),
    VTX(-31, -1, -22, 1889, 1023, 140, 234, 246, 255),
    VTX(-21, -7, -41, 1456, 317, 165, 185, 232, 255),
    VTX(-21, 27, -56, 1456, 2865, 98, 64, 23, 255),
    VTX(-21, 13, -17, 1456, 1027, 98, 64, 22, 255),
    VTX(-12, -1, -22, 1024, 1023, 87, 81, 12, 255),
    VTX(-21, -6, 38, 1456, -1535, 118, 3, 19, 255),
    VTX(-21, 27, -56, 1456, 2865, 159, 64, 23, 255),
    VTX(-31, -1, -22, 1889, 1024, 140, 234, 246, 255),
    VTX(-21, 13, -17, 1456, 1027, 159, 64, 22, 255),
    VTX(-21, -6, 38, 1456, -1535, 139, 3, 19, 255),
}; 

static Vtx ovl_En_Clear_TagVtx_0031A8[10] = {
    VTX(-31, -1, -22, 1889, 1023, 140, 234, 246, 255),
    VTX(-21, 27, -56, 1456, -937, 0, 164, 180, 255),
    VTX(-12, -1, -22, 1024, 1024, 74, 169, 223, 255),
    VTX(-12, -1, -22, 1024, 1023, 74, 169, 223, 255),
    VTX(-21, -6, 38, 1456, 3585, 118, 3, 19, 255),
    VTX(-21, -16, -13, 1456, 1615, 101, 194, 0, 255),
    VTX(-21, -7, -41, 1456, 317, 92, 185, 232, 255),
    VTX(-12, -1, -22, 1024, 1024, 87, 81, 12, 255),
    VTX(-21, -7, -41, 1456, 544, 0, 114, 219, 255),
    VTX(-31, -1, -22, 1889, 1023, 0, 114, 219, 255),
}; 

static Vtx ovl_En_Clear_TagVtx_003248[6] = {
    VTX(-7, 8, -25, -190, 1206, 156, 63, 0, 255),
    VTX(-4, 17, -26, -66, -305, 182, 93, 3, 255),
    VTX(0, 8, -63, 3046, 1176, 174, 82, 233, 255),
    VTX(0, 8, -63, 3046, 1176, 102, 60, 237, 255),
    VTX(4, 17, -26, -66, -305, 75, 93, 3, 255),
    VTX(7, 8, -25, -190, 1206, 101, 63, 0, 255),
}; 

static Vtx ovl_En_Clear_TagVtx_0032A8[6] = {
    VTX(-7, 8, -25, 506, 255, 156, 63, 0, 255),
    VTX(-15, -1, -23, 924, 30, 141, 28, 252, 255),
    VTX(-4, 2, 6, 312, -1428, 206, 106, 18, 255),
    VTX(4, 2, 6, -95, -1428, 51, 106, 18, 255),
    VTX(15, -1, -23, -707, 30, 117, 236, 241, 255),
    VTX(7, 8, -25, -289, 256, 101, 63, 0, 255),
}; 

u64 ovl_En_Clear_TagTex_003308[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_003308.rgb5a1.inc.c"
};

u64 ovl_En_Clear_TagTex_003388[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_003388.rgb5a1.inc.c"
};

u64 ovl_En_Clear_TagTex_003B88[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_003B88.rgb5a1.inc.c"
};

u64 ovl_En_Clear_TagTex_004B88[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_004B88.rgb5a1.inc.c"
};

u64 ovl_En_Clear_TagTex_005388[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_005388.rgb5a1.inc.c"
};

u64 ovl_En_Clear_TagTex_005B88[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_005B88.rgb5a1.inc.c"
};

Gfx gArwingLaserDL[] = {
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_006458, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP,
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsSPVertex(&ovl_En_Clear_TagVtx_0063F8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 4, 1, 3, 0),
    gsSP2Triangles(4, 5, 2, 0, 5, 4, 3, 0),
    gsSP2Triangles(5, 0, 2, 0, 0, 5, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx ovl_En_Clear_TagVtx_0063F8[6] = {
    VTX(5, 0, 34, 504, 385, 255, 255, 255, 255),
    VTX(0, -3, 34, 256, 385, 255, 255, 255, 255),
    VTX(0, 0, -27, 256, 16, 255, 255, 255, 255),
    VTX(0, 0, 55, 256, 513, 255, 255, 255, 255),
    VTX(-5, 0, 34, 8, 385, 255, 255, 255, 255),
    VTX(0, 3, 34, 256, 385, 255, 255, 255, 255),
}; 

u64 ovl_En_Clear_TagTex_006458[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_006458.rgb5a1.inc.c"
};

static Vtx ovl_En_Clear_TagVtx_006658[3] = {
    VTX(0, 60, 0, 256, -256, 255, 255, 255, 255),
    VTX(-50, -30, 0, -171, 512, 255, 255, 255, 255),
    VTX(50, -30, 0, 683, 512, 255, 255, 255, 255),
}; 

Gfx gArwingBackfireDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_006708, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 
                       0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&ovl_En_Clear_TagVtx_006658[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 ovl_En_Clear_TagTex_006708[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_006708.i8.inc.c"
};

u64 ovl_En_Clear_TagTex_006808[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_006808.rgb5a1.inc.c"
};

static Vtx ovl_En_Clear_TagVtx_006A08[3] = {
    VTX(35, 0, 20, 611, 512, 0, 120, 0, 255),
    VTX(0, 0, -40, 256, -102, 0, 120, 0, 255),
    VTX(-35, 0, 20, -99, 512, 0, 120, 0, 255),
}; 

Gfx gArwingDebrisEffectMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_006808, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPEndDisplayList(),
}; 

Gfx gArwingDebrisEffectDL[] = {
    gsSPVertex(&ovl_En_Clear_TagVtx_006A08[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 ovl_En_Clear_TagTex_006AD0[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_006AD0.i4.inc.c"
};

u64 ovl_En_Clear_TagTex_006ED0[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_006ED0.i4.inc.c"
};

static Vtx ovl_En_Clear_TagVtx_0070D0[3] = {
    VTX(-30, -18, 0, -512, 1126, 255, 255, 255, 255),
    VTX(30, -18, 0, 1536, 1092, 255, 255, 255, 255),
    VTX(0, 33, 0, 512, -614, 255, 255, 255, 255),
}; 

Gfx gArwingFireEffectMaterialDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(ovl_En_Clear_TagTex_006AD0, G_IM_FMT_I, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                            | G_TX_WRAP, 5, 6, G_TX_NOLOD, 15),
    gsDPLoadMultiBlock_4b(ovl_En_Clear_TagTex_006ED0, 0x0100, 1, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                          G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENV_ALPHA, TEXEL1, TEXEL0, 1, ENVIRONMENT, TEXEL1, PRIMITIVE, ENVIRONMENT, COMBINED, 
                       ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPEndDisplayList(),
}; 

Gfx gArwingFireEffectDL[] = {
    gsSPDisplayList(0x08000000),
    gsSPVertex(&ovl_En_Clear_TagVtx_0070D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 ovl_En_Clear_TagTex_0071C8[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_0071C8.i8.inc.c"
};

static Vtx ovl_En_Clear_TagVtx_0081C8[4] = {
    VTX(-17, -17, 0, 0, 2048, 255, 255, 255, 255),
    VTX(17, -17, 0, 2048, 2048, 255, 255, 255, 255),
    VTX(17, 17, 0, 2048, 0, 255, 255, 255, 255),
    VTX(-17, 17, 0, 0, 0, 255, 255, 255, 255),
}; 

Gfx gArwingFlashEffectDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_0071C8, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&ovl_En_Clear_TagVtx_0081C8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 ovl_En_Clear_TagTex_008288[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_008288.i4.inc.c"
};

static Vtx ovl_En_Clear_TagVtx_008488[3] = {
    VTX(-20, 0, 10, -512, 1024, 255, 255, 255, 255),
    VTX(20, 0, 10, 1536, 1024, 255, 255, 255, 255),
    VTX(0, 0, -28, 512, -922, 255, 255, 255, 255),
}; 

Gfx gArwingFlashEffectGroundDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(ovl_En_Clear_TagTex_008288, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                            | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&ovl_En_Clear_TagVtx_008488[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 ovl_En_Clear_TagTex_008540[] = {
#include "assets/overlays/ovl_En_Clear_Tag/ovl_En_Clear_TagTex_008540.i8.inc.c"
};

static Vtx ovl_En_Clear_TagVtx_008940[3] = {
    VTX(0, 0, 20, 512, -204, 0, 120, 0, 255),
    VTX(-50, 0, -88, -128, 1024, 0, 120, 0, 255),
    VTX(50, 0, -88, 1152, 1024, 0, 120, 0, 255),
}; 

Gfx gArwingShadowDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(ovl_En_Clear_TagTex_008540, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, 0, TEXEL0, 0, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_OVL_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&ovl_En_Clear_TagVtx_008940[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 


