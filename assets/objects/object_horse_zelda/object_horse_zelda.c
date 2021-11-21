#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_horse_zelda.h"

static Vtx sHorseZeldaSkelVtx_000BA8[9];
static Vtx sHorseZeldaSkelVtx_000C38[11];
static Vtx sHorseZeldaSkelVtx_000CE8[5];
static Vtx sHorseZeldaSkelVtx_000D38[9];
static Vtx sHorseZeldaSkelVtx_000DC8[11];
static Vtx sHorseZeldaSkelVtx_000E78[5];
static Vtx sHorseZeldaSkelVtx_000EC8[9];
static Vtx sHorseZeldaSkelVtx_000F58[11];
static Vtx sHorseZeldaSkelVtx_001008[5];
static Vtx sHorseZeldaSkelVtx_001058[9];
static Vtx sHorseZeldaSkelVtx_0010E8[11];
static Vtx sHorseZeldaSkelVtx_001198[5];
static Vtx sHorseZeldaSkelVtx_0011E8[18];
static Vtx sHorseZeldaSkelVtx_001308[32];
static Vtx sHorseZeldaSkelVtx_001508[32];
static Vtx sHorseZeldaSkelVtx_001708[24];
static Vtx sHorseZeldaSkelVtx_001888[17];
static Vtx sHorseZeldaSkelVtx_001998[13];
static Vtx sHorseZeldaSkelVtx_001A68[11];
static void* sHorseZeldaSkelLimbs[46];
static s16 sHorseZeldaGallopingAnimFrameData[630];
static JointIndex sHorseZeldaGallopingAnimJointIndices[47];

static u8 unaccounted_000000[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gHorseZeldaEyeTex[] = {
#include "assets/objects/object_horse_zelda/horse_zelda_eye.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_000408[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_000408.rgb5a1.inc.c"
};

u64 gHorseZeldaNoseTex[] = {
#include "assets/objects/object_horse_zelda/horse_zelda_nose.rgb5a1.inc.c"
};

u64 gHorseZeldaHeadHairTex[] = {
#include "assets/objects/object_horse_zelda/horse_zelda_head_hair.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_000888[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_000888.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_000988[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_000988.rgb5a1.inc.c"
};

u64 gHorseZeldaLegTex[] = {
#include "assets/objects/object_horse_zelda/horse_zelda_leg.rgb5a1.inc.c"
};

static Vtx sHorseZeldaSkelVtx_000BA8[9] = {
    VTX(-47, -192, 138, 1356, 701, 232, 180, 89, 255),
    VTX(1429, 339, 305, 1130, -193, 61, 67, 78, 255),
    VTX(-86, 70, -7, 1003, 715, 215, 112, 254, 255),
    VTX(1429, 339, -271, 917, -193, 25, 71, 163, 255),
    VTX(-47, -192, -125, 704, 701, 233, 219, 145, 255),
    VTX(1484, -292, -271, 650, -201, 77, 176, 212, 255),
    VTX(1484, -292, 305, 376, -201, 62, 187, 75, 255),
    VTX(-47, -192, 138, 332, 701, 232, 180, 89, 255),
    VTX(1429, 339, 305, 106, -193, 61, 67, 78, 255),
}; 

static Vtx sHorseZeldaSkelVtx_000C38[11] = {
    VTX(-180, -44, -159, 1286, -128, 166, 204, 196, 255),
    VTX(-291, 236, -152, 990, -296, 198, 89, 201, 255),
    VTX(540, 200, -304, 964, 466, 32, 58, 156, 255),
    VTX(540, 200, 340, 573, 466, 59, 78, 69, 255),
    VTX(-291, 236, 188, 548, -296, 150, 14, 52, 255),
    VTX(-180, -44, 208, 256, -128, 176, 206, 73, 255),
    VTX(-180, -44, 208, 1792, -128, 176, 206, 73, 255),
    VTX(559, -754, 24, 2, 714, 212, 145, 0, 255),
    VTX(554, -485, 463, 222, 644, 75, 225, 87, 255),
    VTX(554, -485, -414, 1316, 644, 99, 234, 193, 255),
    VTX(559, -754, 24, 1538, 714, 212, 145, 0, 255),
}; 

static Vtx sHorseZeldaSkelVtx_000CE8[5] = {
    VTX(554, -485, 463, 537, 69, 75, 225, 87, 255),
    VTX(559, -754, 24, 256, -41, 212, 145, 0, 255),
    VTX(554, -485, -414, -25, 69, 99, 234, 193, 255),
    VTX(540, 200, -304, 45, 350, 32, 58, 156, 255),
    VTX(540, 200, 340, 458, 350, 59, 78, 69, 255),
}; 

static Vtx sHorseZeldaSkelVtx_000D38[9] = {
    VTX(1446, -321, 300, 361, -240, 29, 183, 91, 255),
    VTX(4, 103, 156, 211, 797, 229, 34, 112, 255),
    VTX(5, -185, 12, 496, 776, 225, 140, 0, 255),
    VTX(4, 103, -132, 828, 797, 231, 74, 166, 255),
    VTX(1491, 299, -228, 941, -229, 61, 70, 180, 255),
    VTX(1446, -321, -228, 634, -240, 67, 192, 180, 255),
    VTX(1491, 299, 300, 1134, -229, 74, 83, 45, 255),
    VTX(4, 103, 156, 1235, 797, 229, 34, 112, 255),
    VTX(1491, 299, 300, 110, -229, 74, 83, 45, 255),
}; 

static Vtx sHorseZeldaSkelVtx_000DC8[11] = {
    VTX(667, -913, -3, 0, 677, 207, 147, 0, 255),
    VTX(664, -644, 436, 179, 618, 73, 223, 88, 255),
    VTX(-14, -200, 185, 163, 9, 159, 223, 61, 255),
    VTX(655, 183, 307, 575, 438, 57, 78, 70, 255),
    VTX(655, 183, -312, 961, 438, 30, 59, 157, 255),
    VTX(-19, 191, -191, 999, -76, 172, 76, 218, 255),
    VTX(-14, -200, -191, 1373, 9, 170, 217, 183, 255),
    VTX(-14, -200, 185, 1699, 9, 159, 223, 61, 255),
    VTX(664, -644, -441, 1357, 618, 99, 233, 193, 255),
    VTX(667, -913, -3, 1536, 677, 207, 147, 0, 255),
    VTX(-19, 191, 185, 537, -76, 179, 65, 65, 255),
}; 

static Vtx sHorseZeldaSkelVtx_000E78[5] = {
    VTX(664, -644, 436, 537, 71, 73, 223, 88, 255),
    VTX(667, -913, -3, 256, -27, 207, 147, 0, 255),
    VTX(664, -644, -441, -25, 71, 99, 233, 193, 255),
    VTX(655, 183, -312, 58, 374, 30, 59, 157, 255),
    VTX(655, 183, 307, 454, 374, 57, 78, 70, 255),
}; 

static Vtx sHorseZeldaSkelVtx_000EC8[9] = {
    VTX(5, -185, -12, 496, 776, 225, 140, 0, 255),
    VTX(4, 103, -156, 211, 797, 229, 34, 144, 255),
    VTX(1446, -321, -300, 361, -240, 29, 183, 165, 255),
    VTX(1446, -321, 228, 634, -240, 67, 192, 76, 255),
    VTX(1491, 299, 228, 941, -229, 61, 70, 76, 255),
    VTX(4, 103, 132, 828, 797, 231, 74, 90, 255),
    VTX(1491, 299, -300, 1134, -229, 74, 83, 211, 255),
    VTX(4, 103, -156, 1235, 797, 229, 34, 144, 255),
    VTX(1491, 299, -300, 110, -229, 74, 83, 211, 255),
}; 

static Vtx sHorseZeldaSkelVtx_000F58[11] = {
    VTX(-14, -200, -185, 163, 9, 159, 223, 195, 255),
    VTX(664, -644, -436, 179, 618, 73, 223, 168, 255),
    VTX(667, -913, 3, 0, 677, 207, 147, 0, 255),
    VTX(-19, 191, 191, 999, -76, 172, 76, 38, 255),
    VTX(655, 183, 312, 961, 438, 30, 59, 99, 255),
    VTX(655, 183, -307, 575, 438, 57, 78, 186, 255),
    VTX(-14, -200, -185, 1699, 9, 159, 223, 195, 255),
    VTX(-14, -200, 191, 1373, 9, 170, 217, 73, 255),
    VTX(664, -644, 441, 1357, 618, 99, 233, 63, 255),
    VTX(667, -913, 3, 1536, 677, 207, 147, 0, 255),
    VTX(-19, 191, -185, 537, -76, 179, 65, 191, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001008[5] = {
    VTX(664, -644, 441, -25, 71, 99, 233, 63, 255),
    VTX(667, -913, 3, 256, -27, 207, 147, 0, 255),
    VTX(664, -644, -436, 537, 71, 73, 223, 168, 255),
    VTX(655, 183, -307, 454, 374, 57, 78, 186, 255),
    VTX(655, 183, 312, 58, 374, 30, 59, 99, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001058[9] = {
    VTX(-86, 70, 7, 1003, 715, 215, 112, 2, 255),
    VTX(1429, 339, -305, 1130, -193, 61, 67, 178, 255),
    VTX(-47, -192, -138, 1356, 701, 232, 180, 167, 255),
    VTX(-47, -192, 125, 704, 701, 233, 219, 111, 255),
    VTX(1429, 339, 271, 917, -193, 25, 71, 93, 255),
    VTX(1484, -292, 271, 650, -201, 77, 176, 44, 255),
    VTX(1484, -292, -305, 376, -201, 62, 187, 181, 255),
    VTX(1429, 339, -305, 106, -193, 61, 67, 178, 255),
    VTX(-47, -192, -138, 332, 701, 232, 180, 167, 255),
}; 

static Vtx sHorseZeldaSkelVtx_0010E8[11] = {
    VTX(540, 200, 304, 964, 466, 32, 58, 100, 255),
    VTX(-291, 236, 152, 990, -296, 198, 89, 55, 255),
    VTX(-180, -44, 159, 1286, -128, 166, 204, 60, 255),
    VTX(-180, -44, -208, 256, -128, 176, 206, 183, 255),
    VTX(-291, 236, -188, 548, -296, 150, 14, 204, 255),
    VTX(540, 200, -340, 573, 466, 59, 78, 187, 255),
    VTX(-180, -44, -208, 1792, -128, 176, 206, 183, 255),
    VTX(554, -485, -463, 222, 644, 75, 225, 169, 255),
    VTX(559, -754, -24, 2, 714, 212, 145, 0, 255),
    VTX(554, -485, 414, 1316, 644, 99, 234, 63, 255),
    VTX(559, -754, -24, 1538, 714, 212, 145, 0, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001198[5] = {
    VTX(554, -485, 414, -25, 69, 99, 234, 63, 255),
    VTX(559, -754, -24, 256, -41, 212, 145, 0, 255),
    VTX(554, -485, -463, 537, 69, 75, 225, 169, 255),
    VTX(540, 200, -340, 458, 350, 59, 78, 187, 255),
    VTX(540, 200, 304, 45, 350, 32, 58, 100, 255),
}; 

static Vtx sHorseZeldaSkelVtx_0011E8[18] = {
    VTX(242, -968, 616, -17, 75, 49, 239, 108, 255),
    VTX(-256, -715, 281, 85, 43, 155, 218, 52, 255),
    VTX(146, -1463, 271, 76, 110, 46, 154, 214, 255),
    VTX(277, -918, 253, 213, 63, 39, 153, 46, 255),
    VTX(242, -968, 616, 297, 71, 49, 239, 108, 255),
    VTX(146, -1463, 271, 221, -28, 46, 154, 214, 255),
    VTX(277, -918, 253, 91, 50, 39, 153, 46, 255),
    VTX(169, -561, 522, 272, 132, 247, 231, 116, 255),
    VTX(169, -561, 522, 18, 27, 247, 231, 116, 255),
    VTX(231, -967, -621, 9, 71, 51, 240, 149, 255),
    VTX(169, -555, -517, 30, 133, 250, 234, 139, 255),
    VTX(277, -913, -254, 94, 64, 38, 154, 207, 255),
    VTX(231, -967, -621, -17, 75, 51, 240, 149, 255),
    VTX(-256, -710, -322, 85, 43, 157, 221, 199, 255),
    VTX(169, -555, -517, 18, 27, 250, 234, 139, 255),
    VTX(141, -1462, -275, 76, 110, 38, 149, 37, 255),
    VTX(277, -913, -254, 91, 50, 38, 154, 207, 255),
    VTX(141, -1462, -275, 94, -28, 38, 149, 37, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001308[32] = {
    VTX(277, -918, 253, 358, 204, 39, 153, 46, 255),
    VTX(934, -828, 496, 405, 531, 43, 187, 87, 255),
    VTX(169, -561, 522, -34, 566, 247, 231, 116, 255),
    VTX(-547, -332, -1, 474, -75, 142, 221, 0, 255),
    VTX(-240, -452, -337, 360, 34, 168, 253, 175, 255),
    VTX(-108, -975, -7, 202, 25, 174, 169, 254, 255),
    VTX(856, 227, -521, 401, 560, 17, 62, 156, 255),
    VTX(970, -63, -530, 260, 570, 39, 250, 143, 255),
    VTX(205, 28, -574, 411, 266, 235, 23, 141, 255),
    VTX(701, 589, 8, 344, 847, 6, 119, 1, 255),
    VTX(33, 298, 436, 544, 491, 217, 66, 92, 255),
    VTX(871, 229, 505, 90, 767, 17, 62, 101, 255),
    VTX(205, 21, 581, 266, 407, 237, 23, 116, 255),
    VTX(34, 305, -427, 543, 497, 216, 67, 165, 255),
    VTX(856, 227, -521, 91, 764, 17, 62, 156, 255),
    VTX(205, 28, -574, 264, 413, 235, 23, 141, 255),
    VTX(205, 21, 581, 410, 261, 237, 23, 116, 255),
    VTX(-241, -441, 330, 366, 33, 167, 252, 80, 255),
    VTX(181, -215, 675, 320, 251, 232, 253, 117, 255),
    VTX(169, -561, 522, 230, 241, 247, 231, 116, 255),
    VTX(169, -555, -517, 230, 245, 250, 234, 139, 255),
    VTX(-256, -710, -322, 225, 89, 157, 221, 199, 255),
    VTX(-256, -715, 281, 224, 86, 155, 218, 52, 255),
    VTX(169, -555, -517, -34, 574, 250, 234, 139, 255),
    VTX(935, -821, -493, 404, 539, 44, 188, 168, 255),
    VTX(277, -913, -254, 356, 209, 38, 154, 207, 255),
    VTX(891, -274, 476, 194, 508, 27, 245, 116, 255),
    VTX(-506, 282, 3, 805, 291, 158, 69, 0, 255),
    VTX(-240, -452, -337, 320, 102, 168, 253, 175, 255),
    VTX(-547, -332, -1, 534, 36, 142, 221, 0, 255),
    VTX(982, -69, 523, 257, 570, 37, 251, 113, 255),
    VTX(871, 229, 505, 401, 563, 17, 62, 101, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001508[32] = {
    VTX(1228, -567, -295, 246, 440, 62, 215, 162, 255),
    VTX(1342, -592, 7, 534, 304, 74, 162, 255, 255),
    VTX(935, -821, -493, -106, 446, 44, 188, 168, 255),
    VTX(-256, -715, 281, 224, 86, 155, 218, 52, 255),
    VTX(169, -561, 522, 230, 241, 247, 231, 116, 255),
    VTX(-241, -441, 330, 366, 33, 167, 252, 80, 255),
    VTX(1150, -942, -1, 435, 118, 75, 163, 255, 255),
    VTX(33, 298, 436, 544, 491, 217, 66, 92, 255),
    VTX(-506, 282, 3, 805, 291, 158, 69, 0, 255),
    VTX(-241, -441, 330, 329, 104, 167, 252, 80, 255),
    VTX(205, 21, 581, 266, 407, 237, 23, 116, 255),
    VTX(-240, -452, -337, 320, 102, 168, 253, 175, 255),
    VTX(34, 305, -427, 543, 497, 216, 67, 165, 255),
    VTX(205, 28, -574, 264, 413, 235, 23, 141, 255),
    VTX(-240, -452, -337, 360, 34, 168, 253, 175, 255),
    VTX(178, -208, -669, 320, 256, 232, 253, 139, 255),
    VTX(169, -555, -517, 230, 245, 250, 234, 139, 255),
    VTX(205, 28, -574, 411, 266, 235, 23, 141, 255),
    VTX(-547, -332, -1, 534, 36, 142, 221, 0, 255),
    VTX(883, -272, -481, 194, 509, 27, 245, 140, 255),
    VTX(935, -821, -493, 96, 461, 44, 188, 168, 255),
    VTX(1150, -942, -1, 522, 103, 75, 163, 255, 255),
    VTX(671, -1098, -1, 314, -75, 4, 137, 255, 255),
    VTX(277, -913, -254, 32, 84, 38, 154, 207, 255),
    VTX(277, -913, -254, 89, 69, 38, 154, 207, 255),
    VTX(671, -1098, -1, -72, 25, 4, 137, 255, 255),
    VTX(-108, -975, -7, 350, 40, 174, 169, 254, 255),
    VTX(-256, -710, -322, 381, 117, 157, 221, 199, 255),
    VTX(277, -918, 253, 90, 66, 39, 153, 46, 255),
    VTX(-256, -715, 281, 382, 114, 155, 218, 52, 255),
    VTX(277, -918, 253, 32, 84, 39, 153, 46, 255),
    VTX(934, -828, 496, 96, 461, 43, 187, 87, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001708[24] = {
    VTX(934, -828, 496, -106, 446, 43, 187, 87, 255),
    VTX(1342, -592, 7, 534, 304, 74, 162, 255, 255),
    VTX(1228, -573, 306, 246, 440, 60, 214, 94, 255),
    VTX(1150, -942, -1, 435, 118, 75, 163, 255, 255),
    VTX(1342, -592, 7, 534, 304, 74, 162, 255, 255),
    VTX(1901, -413, 191, 655, 585, 23, 167, 76, 255),
    VTX(1901, -408, -176, 655, 585, 19, 166, 180, 255),
    VTX(1228, -567, -295, 246, 440, 62, 215, 162, 255),
    VTX(1901, -408, -176, 212, 681, 19, 166, 180, 255),
    VTX(1901, -413, 191, 480, 673, 23, 167, 76, 255),
    VTX(1342, -592, 7, 335, 326, 74, 162, 255, 255),
    VTX(-108, -975, -7, 202, 25, 174, 169, 254, 255),
    VTX(-241, -441, 330, 366, 33, 167, 252, 80, 255),
    VTX(-547, -332, -1, 474, -75, 142, 221, 0, 255),
    VTX(-506, 282, 3, 805, 291, 158, 69, 0, 255),
    VTX(33, 298, 436, 544, 491, 217, 66, 92, 255),
    VTX(701, 589, 8, 344, 847, 6, 119, 1, 255),
    VTX(-240, -452, -337, 360, 34, 168, 253, 175, 255),
    VTX(-256, -710, -322, 225, 89, 157, 221, 199, 255),
    VTX(34, 305, -427, 543, 497, 216, 67, 165, 255),
    VTX(-240, -452, -337, 320, 102, 168, 253, 175, 255),
    VTX(970, -63, -530, 260, 570, 39, 250, 143, 255),
    VTX(883, -272, -481, 194, 509, 27, 245, 140, 255),
    VTX(205, 28, -574, 411, 266, 235, 23, 141, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001888[17] = {
    VTX(2347, 266, 292, 40, 428, 65, 65, 76, 255),
    VTX(2210, -291, 253, 236, 77, 48, 205, 97, 255),
    VTX(2434, -130, 10, -28, 117, 115, 225, 3, 255),
    VTX(2293, -369, 10, 263, -3, 61, 153, 3, 255),
    VTX(1901, -413, 191, 555, 67, 23, 167, 76, 255),
    VTX(1901, -408, -176, 538, 44, 19, 166, 180, 255),
    VTX(1816, 193, 264, 543, 480, 237, 78, 89, 255),
    VTX(1922, 357, 10, 312, 526, 224, 115, 0, 255),
    VTX(2347, 270, -246, 20, 400, 66, 70, 185, 255),
    VTX(1817, 197, -243, 511, 511, 227, 63, 159, 255),
    VTX(1901, -408, -176, 557, 92, 19, 166, 180, 255),
    VTX(1187, 320, -299, 903, 720, 48, 75, 177, 255),
    VTX(2205, -291, -291, 236, 77, 48, 206, 159, 255),
    VTX(1817, 197, -243, 543, 480, 227, 63, 159, 255),
    VTX(1901, -408, -176, 555, 67, 19, 166, 180, 255),
    VTX(2347, 270, -246, 40, 428, 66, 70, 185, 255),
    VTX(1817, 197, -243, 520, 446, 227, 63, 159, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001998[13] = {
    VTX(970, -63, -530, 593, 748, 39, 250, 143, 255),
    VTX(1187, 320, -299, 381, 1074, 48, 75, 177, 255),
    VTX(1228, -567, -295, 16, 245, 62, 215, 162, 255),
    VTX(169, -561, 522, 1250, 158, 247, 231, 116, 255),
    VTX(934, -828, 496, 268, -31, 43, 187, 87, 255),
    VTX(891, -274, 476, 603, 508, 27, 245, 116, 255),
    VTX(982, -69, 523, 593, 748, 37, 251, 113, 255),
    VTX(1228, -573, 306, 16, 245, 60, 214, 94, 255),
    VTX(1186, 314, 315, 381, 1074, 48, 62, 91, 255),
    VTX(1901, -408, -176, -695, 549, 19, 166, 180, 255),
    VTX(935, -821, -493, 268, -31, 44, 188, 168, 255),
    VTX(883, -272, -481, 603, 508, 27, 245, 140, 255),
    VTX(169, -555, -517, 1250, 158, 250, 234, 139, 255),
}; 

static Vtx sHorseZeldaSkelVtx_001A68[11] = {
    VTX(1817, 197, -243, 0, 512, 227, 63, 159, 255),
    VTX(1187, 320, -299, 0, 512, 48, 75, 177, 255),
    VTX(1816, 193, 264, 0, 512, 237, 78, 89, 255),
    VTX(1901, -413, 191, 0, 512, 23, 167, 76, 255),
    VTX(1186, 314, 315, 0, 512, 48, 62, 91, 255),
    VTX(1228, -573, 306, 0, 512, 60, 214, 94, 255),
    VTX(871, 229, 505, 0, 512, 17, 62, 101, 255),
    VTX(982, -69, 523, 0, 512, 37, 251, 113, 255),
    VTX(701, 589, 8, 0, 512, 6, 119, 1, 255),
    VTX(970, -63, -530, 0, 512, 39, 250, 143, 255),
    VTX(856, 227, -521, 0, 512, 17, 62, 156, 255),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_001B18[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHorseZeldaLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_000BA8[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(1, 5, 3, 0, 1, 6, 5, 0),
    gsSP2Triangles(7, 6, 8, 0, 2, 1, 3, 0),
    gsSP2Triangles(5, 7, 4, 0, 5, 6, 7, 0),
    gsSP1Triangle(3, 5, 4, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_001BD0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000888, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_000C38[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 4, 0, 1, 4, 3, 0),
    gsSP2Triangles(7, 8, 5, 0, 3, 2, 1, 0),
    gsSP2Triangles(0, 4, 1, 0, 8, 3, 5, 0),
    gsSP2Triangles(2, 9, 0, 0, 0, 9, 10, 0),
    gsSP1Triangle(10, 6, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000408, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sHorseZeldaSkelVtx_000CE8[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP1Triangle(4, 0, 2, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_001CE8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHorseZeldaLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_000D38[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 6, 0, 5, 0),
    gsSP2Triangles(6, 3, 7, 0, 6, 4, 3, 0),
    gsSP2Triangles(0, 8, 1, 0, 5, 2, 3, 0),
    gsSP1Triangle(2, 5, 0, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_001DA0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000888, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_000DC8[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 5, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 8, 6, 0, 6, 8, 9, 0),
    gsSP2Triangles(9, 7, 6, 0, 6, 5, 4, 0),
    gsSP2Triangles(3, 10, 2, 0, 7, 10, 5, 0),
    gsSP1Triangle(5, 10, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000408, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sHorseZeldaSkelVtx_000E78[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP1Triangle(4, 0, 2, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_001EB8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHorseZeldaLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_000EC8[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 3, 2, 6, 0),
    gsSP2Triangles(7, 5, 6, 0, 5, 4, 6, 0),
    gsSP2Triangles(1, 8, 2, 0, 5, 0, 3, 0),
    gsSP1Triangle(2, 3, 0, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_001F70[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000888, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_000F58[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 0, 5, 1, 0),
    gsSP2Triangles(7, 8, 4, 0, 9, 8, 7, 0),
    gsSP2Triangles(7, 6, 9, 0, 4, 3, 7, 0),
    gsSP2Triangles(0, 10, 5, 0, 3, 10, 6, 0),
    gsSP1Triangle(5, 10, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000408, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sHorseZeldaSkelVtx_001008[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_002088[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHorseZeldaLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_001058[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(4, 5, 1, 0, 5, 6, 1, 0),
    gsSP2Triangles(7, 6, 8, 0, 4, 1, 0, 0),
    gsSP2Triangles(3, 8, 5, 0, 8, 6, 5, 0),
    gsSP1Triangle(3, 5, 4, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_002140[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000888, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_0010E8[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 2, 0, 5, 4, 1, 0),
    gsSP2Triangles(3, 7, 8, 0, 1, 0, 5, 0),
    gsSP2Triangles(1, 4, 2, 0, 3, 5, 7, 0),
    gsSP2Triangles(2, 9, 0, 0, 10, 9, 2, 0),
    gsSP1Triangle(2, 6, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000408, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sHorseZeldaSkelVtx_001198[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP1Triangle(0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Gfx sHorseZeldaSkelSkinLimbDL_002258[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_000988, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 2, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sHorseZeldaSkelVtx_0011E8[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 2, 0, 3, 7, 4, 0),
    gsSP2Triangles(8, 1, 0, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 9, 11, 0, 15, 13, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gHorseZeldaHeadHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sHorseZeldaSkelVtx_001308[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(10, 12, 11, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 17, 19, 18, 0),
    gsSP2Triangles(20, 21, 4, 0, 14, 13, 9, 0),
    gsSP2Triangles(22, 17, 5, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 18, 19, 0, 26, 16, 18, 0),
    gsSP2Triangles(27, 28, 29, 0, 9, 13, 27, 0),
    gsSP2Triangles(16, 26, 30, 0, 30, 31, 16, 0),
    gsSPVertex(&sHorseZeldaSkelVtx_001508[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 2, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 10, 7, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 17, 15, 0),
    gsSP2Triangles(18, 9, 8, 0, 16, 15, 19, 0),
    gsSP2Triangles(15, 17, 19, 0, 20, 21, 22, 0),
    gsSP2Triangles(20, 22, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(24, 26, 27, 0, 25, 28, 26, 0),
    gsSP2Triangles(28, 29, 26, 0, 30, 22, 31, 0),
    gsSP1Triangle(22, 21, 31, 0),
    gsSPVertex(&sHorseZeldaSkelVtx_001708[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(2, 4, 5, 0, 6, 4, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 11, 17, 18, 0),
    gsSP2Triangles(14, 19, 20, 0, 21, 22, 23, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gHorseZeldaNoseTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sHorseZeldaSkelVtx_001888[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 1, 4, 0, 2, 1, 3, 0),
    gsSP2Triangles(6, 1, 0, 0, 7, 6, 0, 0),
    gsSP2Triangles(4, 1, 6, 0, 8, 0, 2, 0),
    gsSP2Triangles(9, 10, 11, 0, 3, 12, 2, 0),
    gsSP2Triangles(13, 12, 14, 0, 14, 12, 3, 0),
    gsSP2Triangles(2, 12, 15, 0, 15, 12, 13, 0),
    gsSP2Triangles(16, 6, 7, 0, 7, 0, 8, 0),
    gsSP1Triangle(15, 13, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gHorseZeldaEyeTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sHorseZeldaSkelVtx_001998[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 7, 0, 7, 5, 4, 0),
    gsSP2Triangles(7, 8, 6, 0, 2, 1, 9, 0),
    gsSP2Triangles(10, 11, 2, 0, 11, 10, 12, 0),
    gsSP1Triangle(2, 11, 0, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(&sHorseZeldaSkelVtx_001A68[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(3, 4, 5, 0, 2, 1, 4, 0),
    gsSP2Triangles(4, 6, 7, 0, 8, 6, 4, 0),
    gsSP2Triangles(1, 9, 10, 0, 10, 8, 1, 0),
    gsSP1Triangle(1, 8, 4, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_002570[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 sHorseZeldaSkelTex_002578[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_002578.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_002678[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_002678.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_002778[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_002778.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_002978[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_002978.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_003178[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_003178.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_003278[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_003278.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_003378[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_003378.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_0033F8[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_0033F8.rgb5a1.inc.c"
};

u64 sHorseZeldaSkelTex_0034F8[] = {
#include "assets/objects/object_horse_zelda/sHorseZeldaSkelTex_0034F8.rgb5a1.inc.c"
};

Gfx sHorseZeldaSkelSkinLimbDL_0036F8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_0034F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(0x08000000, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(1, 4, 3, 0, 5, 3, 4, 0),
    gsSP2Triangles(2, 3, 5, 0, 6, 7, 4, 0),
    gsSP2Triangles(2, 7, 6, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 8, 2, 0, 4, 9, 6, 0),
    gsSP2Triangles(2, 8, 0, 0, 0, 9, 4, 0),
    gsSP2Triangles(5, 7, 2, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 10, 8, 0, 0, 10, 9, 0),
    gsSP2Triangles(8, 10, 0, 0, 9, 10, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_0033F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x080000B0, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(6, 8, 9, 0, 5, 8, 6, 0),
    gsSP2Triangles(10, 2, 11, 0, 0, 2, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gHorseZeldaLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x08000170, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 2, 14, 0),
    gsSP2Triangles(2, 15, 14, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 18, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 21, 20, 0, 24, 25, 26, 0),
    gsSP2Triangles(27, 28, 29, 0, 1, 3, 30, 0),
    gsSPVertex(0x08000360, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 11, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 8, 7, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 25, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(0x08000550, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 7, 11, 0, 7, 10, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 5, 4, 0),
    gsSP2Triangles(10, 11, 16, 0, 9, 8, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(30, 29, 28, 0),
    gsSPVertex(0x08000740, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 7, 3, 0),
    gsSP2Triangles(6, 8, 5, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 10, 9, 0, 1, 12, 9, 0),
    gsSP2Triangles(0, 12, 1, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 0, 14, 0, 16, 15, 14, 0),
    gsSP2Triangles(15, 17, 18, 0, 13, 12, 0, 0),
    gsSP2Triangles(16, 17, 15, 0, 19, 15, 18, 0),
    gsSP2Triangles(13, 10, 12, 0, 20, 21, 7, 0),
    gsSP2Triangles(22, 8, 23, 0, 19, 24, 15, 0),
    gsSP1Triangle(25, 7, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gHorseZeldaHeadHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x080008E0, 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(2, 1, 3, 0, 5, 6, 3, 0),
    gsSP2Triangles(3, 6, 2, 0, 5, 7, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 9, 6, 7, 0),
    gsSP2Triangles(8, 10, 0, 0, 2, 6, 9, 0),
    gsSP2Triangles(2, 9, 0, 0, 0, 9, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_003378, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x08000990, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(7, 10, 9, 0, 11, 12, 13, 0),
    gsSP2Triangles(11, 14, 12, 0, 10, 15, 9, 0),
    gsSP2Triangles(10, 16, 15, 0, 16, 17, 15, 0),
    gsSP2Triangles(17, 18, 15, 0, 14, 11, 0, 0),
    gsSP2Triangles(19, 20, 21, 0, 2, 22, 23, 0),
    gsSP2Triangles(23, 24, 2, 0, 25, 21, 20, 0),
    gsSP2Triangles(26, 12, 14, 0, 14, 27, 26, 0),
    gsSP2Triangles(5, 28, 29, 0, 5, 4, 30, 0),
    gsSPVertex(0x08000B80, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 4, 0, 8, 5, 4, 0),
    gsSP2Triangles(0, 9, 1, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(19, 16, 18, 0, 20, 21, 22, 0),
    gsSP2Triangles(23, 20, 22, 0, 23, 22, 24, 0),
    gsSP1Triangle(14, 13, 25, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_003278, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x08000D20, 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 0, 2, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_003178, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x08000DA0, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 2, 1, 0, 10, 13, 11, 0),
    gsSP2Triangles(14, 15, 16, 0, 10, 17, 13, 0),
    gsSP2Triangles(18, 19, 3, 0, 20, 21, 22, 0),
    gsSP2Triangles(19, 18, 23, 0, 24, 25, 26, 0),
    gsSP2Triangles(5, 27, 3, 0, 28, 6, 8, 0),
    gsSP1Triangle(28, 8, 29, 0),
    gsSPVertex(0x08000F80, 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 3, 6, 0, 0, 7, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(12, 11, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP1Triangle(24, 25, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_002978, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x08001120, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 12, 10, 0, 13, 12, 9, 0),
    gsSP2Triangles(14, 13, 9, 0, 5, 15, 3, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSP2Triangles(8, 20, 6, 0, 21, 17, 22, 0),
    gsSP2Triangles(23, 24, 25, 0, 25, 26, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 31, 0, 0),
    gsSPVertex(0x08001320, 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gHorseZeldaHeadHairTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x08001380, 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(1, 4, 2, 0, 5, 4, 1, 0),
    gsSP2Triangles(6, 5, 1, 0, 3, 6, 1, 0),
    gsSP2Triangles(7, 2, 4, 0, 6, 3, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_002778, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x08001410, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 5, 4, 0, 11, 6, 5, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(13, 12, 18, 0, 5, 19, 11, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 20, 27, 0, 22, 21, 28, 0),
    gsSP2Triangles(29, 30, 23, 0, 26, 31, 21, 0),
    gsSPVertex(0x08001610, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 0, 0, 20, 21, 22, 0),
    gsSP2Triangles(21, 23, 22, 0, 24, 16, 15, 0),
    gsSP2Triangles(25, 26, 27, 0, 28, 29, 30, 0),
    gsSP1Triangle(28, 31, 29, 0),
    gsSPVertex(0x08001810, 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP1Triangle(10, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_002678, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x080018E0, 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(0, 6, 7, 0, 5, 4, 8, 0),
    gsSP2Triangles(9, 10, 6, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 3, 13, 0, 5, 13, 3, 0),
    gsSP2Triangles(14, 12, 15, 0, 16, 17, 18, 0),
    gsSP2Triangles(14, 15, 17, 0, 19, 7, 6, 0),
    gsSP2Triangles(17, 16, 14, 0, 20, 21, 22, 0),
    gsSP2Triangles(12, 14, 3, 0, 19, 6, 10, 0),
    gsSP2Triangles(20, 23, 21, 0, 0, 2, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sHorseZeldaSkelTex_002578, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(0x08001A60, 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 17, 16, 0),
    gsSP2Triangles(2, 1, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 22, 21, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(0x08001C50, 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPVertex(0x08001D10, 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsDPPipeSync(),
    gsSPEndDisplayList(),
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F50[2] = {
    { 0x20, 2236, 380, -286, 0x14 },
    { 0x21, -357, 161, -286, 0x50 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F64[2] = {
    { 0x08, 990, -1164, 515, 0x50 },
    { 0x09, -129, -1619, 515, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F78[2] = {
    { 0x20, 2236, 377, 340, 0x14 },
    { 0x21, -354, 160, 340, 0x50 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F8C[2] = {
    { 0x20, 1878, -245, 268, 0x46 },
    { 0x21, -87, -506, 268, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FA0[3] = {
    { 0x08, 2062, 504, -1276, 0x14 },
    { 0x17, 633, -387, -520, 0x32 },
    { 0x18, -367, -124, -520, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FC0[1] = {
    { 0x21, 438, 33, 20, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FCC[3] = {
    { 0x07, -1540, 75, 1076, 0x3C },
    { 0x1F, -397, -93, 422, 0x14 },
    { 0x20, -191, 1512, 422, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FEC[3] = {
    { 0x07, -1875, -167, 584, 0x32 },
    { 0x1F, -811, -101, -70, 0x1E },
    { 0x20, -226, 1923, -70, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00400C[3] = {
    { 0x07, -1162, -402, 952, 0x0A },
    { 0x1F, -359, -700, 297, 0x50 },
    { 0x20, -795, 1434, 297, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00402C[3] = {
    { 0x07, -455, -959, -2, 0x46 },
    { 0x1F, -95, -1561, -657, 0x0F },
    { 0x27, -95, -1561, 652, 0x0F },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00404C[2] = {
    { 0x1F, 365, -790, 558, 0x46 },
    { 0x20, -838, 706, 558, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004060[3] = {
    { 0x07, -2066, -185, -4, 0x50 },
    { 0x1F, -978, -7, -659, 0x0A },
    { 0x20, -144, 2096, -659, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004080[2] = {
    { 0x20, 1878, -245, -246, 0x46 },
    { 0x21, -87, -506, -246, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004094[4] = {
    { 0x08, 2343, 1593, -2, 0x46 },
    { 0x09, -846, 1368, -2, 0x0A },
    { 0x10, 440, -907, -758, 0x0A },
    { 0x18, 440, -907, 754, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040BC[3] = {
    { 0x1F, 1708, 938, -235, 0x0A },
    { 0x20, 974, -523, -235, 0x50 },
    { 0x21, -428, -1389, -235, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040DC[3] = {
    { 0x1F, 1706, 936, 292, 0x14 },
    { 0x20, 972, -521, 292, 0x46 },
    { 0x21, -431, -1390, 292, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040FC[2] = {
    { 0x20, 1572, 325, 292, 0x46 },
    { 0x21, -724, -394, 292, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004110[3] = {
    { 0x07, 38, 381, 939, 0x14 },
    { 0x1F, 1074, -741, 284, 0x3C },
    { 0x20, -742, 2, 284, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004130[2] = {
    { 0x1F, 1242, -296, 412, 0x28 },
    { 0x20, -288, -138, 412, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004144[1] = {
    { 0x02, 9, 0, -1, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004150[2] = {
    { 0x02, 1257, -19, -294, 0x50 },
    { 0x03, 44, -1, -294, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004164[2] = {
    { 0x1F, 732, 561, 580, 0x19 },
    { 0x20, 534, 427, 580, 0x4B },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004178[2] = {
    { 0x20, 1573, 325, -246, 0x46 },
    { 0x21, -724, -394, -246, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00418C[2] = {
    { 0x1F, 147, 1047, 221, 0x28 },
    { 0x20, 982, 1042, 221, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041A0[2] = {
    { 0x1F, 151, 1047, -372, 0x28 },
    { 0x20, 982, 1038, -372, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041B4[3] = {
    { 0x07, -2100, 850, 390, 0x28 },
    { 0x1F, -416, 863, -265, 0x28 },
    { 0x20, 762, 1592, -265, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041D4[3] = {
    { 0x07, -1813, 943, 969, 0x0A },
    { 0x1F, -128, 776, 315, 0x1E },
    { 0x20, 693, 1299, 315, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041F4[2] = {
    { 0x28, 2236, 377, -346, 0x14 },
    { 0x29, -354, 160, -346, 0x50 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004208[4] = {
    { 0x07, 9, -1264, 502, 0x3C },
    { 0x08, -1011, -1836, 502, 0x1E },
    { 0x1F, 112, -2076, -153, 0x05 },
    { 0x27, 112, -2076, 1157, 0x05 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004230[2] = {
    { 0x28, 2236, 380, 280, 0x14 },
    { 0x29, -357, 161, 280, 0x50 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004244[1] = {
    { 0x29, 438, 32, 7, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004250[2] = {
    { 0x28, 1878, -245, -249, 0x46 },
    { 0x29, -87, -506, -249, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004264[3] = {
    { 0x07, 2040, 1411, 331, 0x1E },
    { 0x08, -248, 1434, 331, 0x37 },
    { 0x10, 1583, 1423, -425, 0x0F },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004284[2] = {
    { 0x08, 2839, 1009, -2, 0x46 },
    { 0x09, -92, 1234, -2, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004298[3] = {
    { 0x07, -1953, 773, -2, 0x50 },
    { 0x1F, -339, 716, -657, 0x0A },
    { 0x28, 620, 1506, 653, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042B8[2] = {
    { 0x27, 365, -790, -564, 0x46 },
    { 0x28, -838, 706, -564, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042CC[2] = {
    { 0x02, 1257, -19, 288, 0x50 },
    { 0x03, 44, -1, 288, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042E0[3] = {
    { 0x07, -1540, 75, -1083, 0x3C },
    { 0x27, -397, -93, -428, 0x14 },
    { 0x28, -191, 1512, -428, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004300[3] = {
    { 0x07, -1818, 944, -978, 0x14 },
    { 0x27, -131, 780, -324, 0x14 },
    { 0x28, 697, 1302, -324, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004320[2] = {
    { 0x02, 1336, 246, -3, 0x50 },
    { 0x03, 11, 273, -3, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004334[2] = {
    { 0x28, 1878, -245, 259, 0x46 },
    { 0x29, -87, -506, 259, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004348[3] = {
    { 0x27, 1708, 938, 228, 0x0A },
    { 0x28, 974, -523, 228, 0x50 },
    { 0x29, -428, -1389, 228, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004368[2] = {
    { 0x28, 1572, 325, -298, 0x46 },
    { 0x29, -724, -394, -298, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00437C[3] = {
    { 0x27, 1706, 936, -298, 0x14 },
    { 0x28, 972, -521, -298, 0x46 },
    { 0x29, -431, -1390, -298, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00439C[2] = {
    { 0x27, 1242, -296, -418, 0x28 },
    { 0x28, -288, -138, -418, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043B0[2] = {
    { 0x27, 732, 561, -586, 0x19 },
    { 0x28, 534, 427, -586, 0x4B },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043C4[2] = {
    { 0x28, 1573, 325, 228, 0x46 },
    { 0x29, -724, -394, 228, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043D8[2] = {
    { 0x27, 147, 1047, -228, 0x28 },
    { 0x28, 982, 1042, -228, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043EC[3] = {
    { 0x07, 38, 381, -972, 0x14 },
    { 0x27, 1074, -741, -317, 0x3C },
    { 0x28, -742, 2, -317, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00440C[2] = {
    { 0x07, -264, -568, 851, 0x50 },
    { 0x1F, 285, -1349, 196, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004420[3] = {
    { 0x07, -1162, -402, -958, 0x0A },
    { 0x27, -359, -700, -303, 0x50 },
    { 0x28, -795, 1434, -303, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004440[2] = {
    { 0x27, 145, 1046, 352, 0x28 },
    { 0x28, 980, 1044, 352, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004454[3] = {
    { 0x07, -2100, 850, -396, 0x28 },
    { 0x27, -416, 863, 259, 0x28 },
    { 0x28, 762, 1592, 259, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004474[3] = {
    { 0x07, -1875, -167, -590, 0x32 },
    { 0x27, -811, -101, 64, 0x1E },
    { 0x28, -226, 1923, 64, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004494[3] = {
    { 0x07, 76, 963, -443, 0x32 },
    { 0x27, 1436, -284, 212, 0x14 },
    { 0x28, -263, -331, 212, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044B4[3] = {
    { 0x07, -73, 1518, -341, 0x0A },
    { 0x27, 1631, 257, 313, 0x1E },
    { 0x28, 290, -489, 313, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044D4[2] = {
    { 0x18, 2442, 96, 191, 0x32 },
    { 0x19, 1, 99, 191, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044E8[3] = {
    { 0x07, -1471, -737, -415, 0x50 },
    { 0x27, -804, -800, 240, 0x0A },
    { 0x28, -923, 1871, 240, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004508[2] = {
    { 0x02, 1236, -253, -3, 0x50 },
    { 0x03, 118, -225, -3, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00451C[1] = {
    { 0x19, 453, -35, 5, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004528[2] = {
    { 0x18, 2339, -454, 303, 0x32 },
    { 0x19, 23, -461, 303, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00453C[2] = {
    { 0x18, 2338, -452, -295, 0x32 },
    { 0x19, 22, -459, -295, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004550[1] = {
    { 0x18, 2070, -299, -134, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00455C[2] = {
    { 0x18, 2441, 98, -171, 0x32 },
    { 0x19, 0, 101, -171, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004570[4] = {
    { 0x08, 2430, 257, -876, 0x16 },
    { 0x09, 74, 394, -876, 0x1E },
    { 0x17, 725, -821, -120, 0x18 },
    { 0x18, -765, -322, -120, 0x18 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004598[4] = {
    { 0x07, 9, -1264, -540, 0x3C },
    { 0x08, -1011, -1837, -540, 0x1E },
    { 0x1F, 112, -2076, -1194, 0x05 },
    { 0x27, 112, -2076, 115, 0x05 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0045C0[3] = {
    { 0x08, 1011, 1277, -1045, 0x1E },
    { 0x17, 418, 899, -289, 0x0A },
    { 0x18, 824, 406, -289, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0045E0[3] = {
    { 0x08, 1543, 878, -1363, 0x1E },
    { 0x17, 521, 242, -608, 0x1E },
    { 0x18, 214, 142, -608, 0x28 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004600[2] = {
    { 0x17, 1088, 619, -314, 0x04 },
    { 0x18, 720, -313, -314, 0x60 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004614[3] = {
    { 0x08, 725, 1695, -519, 0x32 },
    { 0x17, 503, 1398, 237, 0x0A },
    { 0x18, 1328, 448, 237, 0x28 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004634[3] = {
    { 0x08, 2207, 1207, -915, 0x14 },
    { 0x17, 1227, 16, -159, 0x20 },
    { 0x18, 171, -599, -159, 0x2F },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004654[3] = {
    { 0x07, -73, 1518, 335, 0x0A },
    { 0x1F, 1631, 257, -319, 0x1E },
    { 0x20, 290, -489, -319, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004674[3] = {
    { 0x07, 1207, 728, -912, 0x28 },
    { 0x08, -730, 471, -912, 0x28 },
    { 0x27, 2232, -1122, -257, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004694[5] = {
    { 0x07, 1035, 1160, -1, 0x46 },
    { 0x1F, 2337, -669, -656, 0x05 },
    { 0x20, -589, -1254, -656, 0x0A },
    { 0x27, 2337, -669, 654, 0x05 },
    { 0x28, -589, -1254, 654, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0046C8[3] = {
    { 0x07, 2081, 1406, -349, 0x1E },
    { 0x08, -209, 1447, -349, 0x37 },
    { 0x18, 1575, 1382, 407, 0x0F },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0046E8[3] = {
    { 0x07, -907, 1609, 0, 0x28 },
    { 0x20, 798, 179, -654, 0x1E },
    { 0x28, 798, 179, 655, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004708[2] = {
    { 0x07, 1125, 70, -1078, 0x46 },
    { 0x08, -536, -163, -1078, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00471C[2] = {
    { 0x17, -493, 143, -359, 0x5E },
    { 0x18, -136, 1099, -359, 0x07 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004730[1] = {
    { 0x18, 2069, -300, 153, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00473C[2] = {
    { 0x18, 1054, -402, 259, 0x60 },
    { 0x19, -1241, -697, 259, 0x04 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004750[1] = {
    { 0x11, 453, -34, -11, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00475C[2] = {
    { 0x10, 2339, -453, -309, 0x32 },
    { 0x11, 23, -460, -309, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004770[2] = {
    { 0x07, -264, -569, -948, 0x50 },
    { 0x27, 284, -1349, -293, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004784[2] = {
    { 0x10, 2338, -451, 241, 0x32 },
    { 0x11, 22, -458, 241, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004798[3] = {
    { 0x07, -1471, -737, 366, 0x50 },
    { 0x1F, -804, -800, -289, 0x0A },
    { 0x20, -923, 1872, -289, 0x0A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047B8[2] = {
    { 0x10, 2446, 113, -197, 0x32 },
    { 0x11, 1, 116, -197, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047CC[2] = {
    { 0x10, 2445, 115, 165, 0x32 },
    { 0x11, 0, 118, 165, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047E0[1] = {
    { 0x10, 2069, -299, -159, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047EC[1] = {
    { 0x10, 2070, -299, 127, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047F8[3] = {
    { 0x08, 1011, 1277, 1038, 0x1E },
    { 0x0F, 417, 900, 283, 0x0A },
    { 0x10, 824, 407, 283, 0x3C },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004818[2] = {
    { 0x0F, 1087, 619, 378, 0x04 },
    { 0x10, 720, -312, 378, 0x60 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00482C[2] = {
    { 0x10, 1055, -400, -267, 0x60 },
    { 0x11, -1240, -694, -267, 0x04 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004840[3] = {
    { 0x08, 725, 1695, 524, 0x32 },
    { 0x0F, 503, 1399, -232, 0x0A },
    { 0x10, 1329, 449, -232, 0x28 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004860[3] = {
    { 0x07, 1208, 729, 881, 0x28 },
    { 0x08, -729, 473, 881, 0x28 },
    { 0x1F, 2233, -1121, 227, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004880[3] = {
    { 0x07, 77, 963, 439, 0x32 },
    { 0x1F, 1437, -284, -216, 0x14 },
    { 0x20, -263, -332, -216, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048A0[1] = {
    { 0x09, 432, 871, 5, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048AC[3] = {
    { 0x08, 1728, -126, -1075, 0x1E },
    { 0x17, -45, -608, -319, 0x32 },
    { 0x18, -751, 478, -319, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048CC[3] = {
    { 0x08, 1542, 880, 1333, 0x1E },
    { 0x0F, 522, 244, 577, 0x1E },
    { 0x10, 216, 141, 577, 0x28 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048EC[3] = {
    { 0x08, 2207, 1207, 885, 0x14 },
    { 0x0F, 1227, 16, 129, 0x20 },
    { 0x10, 171, -598, 129, 0x2F },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00490C[3] = {
    { 0x07, 1121, 71, 1042, 0x46 },
    { 0x08, -540, -163, 1042, 0x18 },
    { 0x0F, -1699, 945, 286, 0x06 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00492C[2] = {
    { 0x0F, -492, 145, 322, 0x5D },
    { 0x10, -134, 1098, 322, 0x07 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004940[2] = {
    { 0x09, 1436, -116, 614, 0x1E },
    { 0x0A, 69, -98, 614, 0x46 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004954[2] = {
    { 0x09, 1424, -782, 469, 0x32 },
    { 0x0A, 291, -725, 469, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004968[1] = {
    { 0x0A, 1014, 38, 483, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004974[1] = {
    { 0x0A, 1758, -234, 168, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004980[1] = {
    { 0x0A, 1758, -233, -174, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00498C[1] = {
    { 0x0A, 1685, 445, 1, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004998[1] = {
    { 0x0A, 667, 557, 4, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049A4[1] = {
    { 0x08, 1671, 1894, -18, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049B0[3] = {
    { 0x08, 2061, 504, 1262, 0x14 },
    { 0x0F, 633, -386, 506, 0x32 },
    { 0x10, -367, -123, 506, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049D0[1] = {
    { 0x0A, 1686, -517, -3, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049DC[2] = {
    { 0x09, 1503, -1132, 1, 0x32 },
    { 0x0A, 489, -1025, 1, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049F0[2] = {
    { 0x09, 1422, -783, -477, 0x32 },
    { 0x0A, 290, -727, -477, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A04[2] = {
    { 0x08, 1548, -1010, -2, 0x50 },
    { 0x09, 203, -1144, -2, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A18[3] = {
    { 0x08, 1886, -1424, 1, 0x1E },
    { 0x09, 726, -1247, 1, 0x32 },
    { 0x0A, -198, -1406, 1, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A38[2] = {
    { 0x02, 3141, -830, -3, 0x0A },
    { 0x03, 2095, 2, -3, 0x5A },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A4C[2] = {
    { 0x09, 1436, -116, -607, 0x1E },
    { 0x0A, 69, -99, -607, 0x46 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A60[1] = {
    { 0x0A, 1007, 38, -481, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A6C[2] = {
    { 0x08, 1681, -705, -807, 0x50 },
    { 0x09, 110, -824, -807, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A80[2] = {
    { 0x08, 2461, -183, -741, 0x1E },
    { 0x09, 378, 75, -741, 0x46 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A94[2] = {
    { 0x09, 1383, 548, -19, 0x32 },
    { 0x0A, -214, 505, -19, 0x32 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AA8[2] = {
    { 0x08, 2462, -188, 736, 0x1E },
    { 0x09, 382, 73, 736, 0x46 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004ABC[2] = {
    { 0x08, 1679, -708, 727, 0x50 },
    { 0x09, 110, -828, 727, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AD0[4] = {
    { 0x08, 2430, 257, 829, 0x16 },
    { 0x09, 74, 394, 829, 0x1E },
    { 0x0F, 725, -821, 73, 0x18 },
    { 0x10, -765, -322, 73, 0x18 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AF8[3] = {
    { 0x08, 1728, -126, 1062, 0x1E },
    { 0x0F, -45, -608, 306, 0x32 },
    { 0x10, -751, 477, 306, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B18[2] = {
    { 0x08, 869, -684, 790, 0x55 },
    { 0x09, -528, -1326, 790, 0x0F },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B2C[2] = {
    { 0x07, 1023, -1173, 636, 0x46 },
    { 0x08, -123, -1339, 636, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B40[2] = {
    { 0x08, 990, -1164, -549, 0x50 },
    { 0x09, -129, -1618, -549, 0x14 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B54[2] = {
    { 0x08, 870, -682, -840, 0x55 },
    { 0x09, -529, -1324, -840, 0x0F },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B68[2] = {
    { 0x07, 1023, -1172, -678, 0x46 },
    { 0x08, -122, -1339, -678, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B7C[2] = {
    { 0x08, 1183, -1019, -2, 0x46 },
    { 0x09, -73, -1384, -2, 0x1E },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B90[1] = {
    { 0x03, 1453, -415, -3, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B9C[1] = {
    { 0x03, 1806, 429, -3, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BA8[1] = {
    { 0x03, 1612, -6, -385, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BB4[1] = {
    { 0x03, 1612, -6, 361, 0x64 },
}; 

Struct_800A598C_2 sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BC0[1] = {
    { 0x02, 12, -179, -1, 0x64 },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004BCC[3] = {
    { 0x40, 391, 680, -47, 88, -79, 0xFF },
    { 0x0C, -240, 635, -47, 88, -79, 0xFF },
    { 0x67, 391, 680, -47, 88, -79, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004BEC[4] = {
    { 0xD4, 31, 41, 64, -102, 39, 0xFF },
    { 0x113, -68, 22, 64, -102, 39, 0xFF },
    { 0x137, -68, 22, 64, -102, 39, 0xFF },
    { 0x116, -108, 24, 64, -102, 39, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C14[3] = {
    { 0x43, 389, 679, -14, 77, 100, 0xFF },
    { 0x0E, 294, 636, -14, 77, 100, 0xFF },
    { 0x6B, 389, 679, -14, 77, 100, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C34[5] = {
    { 0x2C, 426, 437, 21, -93, 83, 0xFF },
    { 0x42, 81, 418, 21, -93, 83, 0xFF },
    { 0x39, 38, 421, 21, -93, 83, 0xFF },
    { 0x46, 419, 432, 21, -93, 83, 0xFF },
    { 0x6A, 81, 418, 21, -93, 83, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C68[3] = {
    { 0x1AA, 181, -61, 22, -44, -117, 0xFF },
    { 0x145, 103, -246, 22, -44, -117, 0xFF },
    { 0x14A, 633, -14, 22, -44, -117, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C88[2] = {
    { 0x41, -61, 689, 123, 33, 0, 0xFF },
    { 0x45, 270, 727, 123, 33, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C9C[4] = {
    { 0x1D4, 0, 512, -53, -32, 111, 0xFF },
    { 0xDC, 501, -136, -53, -32, 111, 0xFF },
    { 0xEA, 240, -174, -53, -32, 111, 0xFF },
    { 0x10F, 240, -174, -53, -32, 111, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004CC4[6] = {
    { 0x1D5, 0, 512, -98, -51, 63, 0xFF },
    { 0x110, -62, -322, -98, -51, 63, 0xFF },
    { 0x22, -85, 0, -98, -51, 63, 0xFF },
    { 0x1E, 828, 0, -98, -51, 63, 0xFF },
    { 0xF0, 387, -316, -98, -51, 63, 0xFF },
    { 0xE9, 525, -425, -98, -51, 63, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D00[5] = {
    { 0x1D6, 0, 512, -75, -45, 93, 0xFF },
    { 0xDA, 94, -71, -75, -45, 93, 0xFF },
    { 0x20, 143, 0, -75, -45, 93, 0xFF },
    { 0x1BF, 0, 512, -75, -45, 93, 0xFF },
    { 0x183, 671, 440, -75, -45, 93, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D34[4] = {
    { 0x1CA, 127, -97, -57, -113, 2, 0xFF },
    { 0x123, -169, 248, -57, -113, 2, 0xFF },
    { 0x1D0, 474, -357, -57, -113, 2, 0xFF },
    { 0x1BE, 8, -335, -57, -113, 2, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D5C[4] = {
    { 0xDB, -29, 348, 0, -37, 121, 0xFF },
    { 0xE5, 100, -9, 0, -37, 121, 0xFF },
    { 0x182, 345, 538, 0, -37, 121, 0xFF },
    { 0x17C, 345, 538, 0, -37, 121, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D84[5] = {
    { 0x104, 200, -85, -120, -43, 0, 0xFF },
    { 0x23, 443, 0, -120, -43, 0, 0xFF },
    { 0x1C, 251, -6, -120, -43, 0, 0xFF },
    { 0x47, 443, 0, -120, -43, 0, 0xFF },
    { 0xF3, 200, -85, -120, -43, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004DB8[5] = {
    { 0x3C, 499, 435, 15, -76, -100, 0xFF },
    { 0x2E, 38, 437, 15, -76, -100, 0xFF },
    { 0x3F, 80, 418, 15, -76, -100, 0xFF },
    { 0x44, 31, 432, 15, -76, -100, 0xFF },
    { 0x68, 80, 418, 15, -76, -100, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004DEC[3] = {
    { 0x161, 259, -14, 77, 101, 0, 0xFF },
    { 0x11E, 1022, 1024, 77, 101, 0, 0xFF },
    { 0x158, 259, -14, 77, 101, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E0C[4] = {
    { 0x3D, 522, 34, 22, -90, -87, 0xFF },
    { 0x2B, -10, 34, 22, -90, -87, 0xFF },
    { 0xAC, -81, 627, 22, -90, -87, 0xFF },
    { 0xB4, 231, 289, 22, -90, -87, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E34[5] = {
    { 0xEB, 1316, 350, 7, -92, 87, 0xFF },
    { 0xB3, 392, 266, 7, -92, 87, 0xFF },
    { 0x32, 7, 34, 7, -92, 87, 0xFF },
    { 0x3B, 7, 34, 7, -92, 87, 0xFF },
    { 0x2D, 459, 33, 7, -92, 87, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E68[5] = {
    { 0x0B, 254, 422, 29, 70, 102, 0xFF },
    { 0x2F, 566, 422, 29, 70, 102, 0xFF },
    { 0x33, 445, 411, 29, 70, 102, 0xFF },
    { 0x3A, 445, 411, 29, 70, 102, 0xFF },
    { 0x6C, 444, 414, 29, 70, 102, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E9C[6] = {
    { 0xA6, 205, 30, 46, -13, 118, 0xFF },
    { 0xE3, 241, 361, 46, -13, 118, 0xFF },
    { 0x199, 429, -716, 46, -13, 118, 0xFF },
    { 0x1B4, 449, 512, 46, -13, 118, 0xFF },
    { 0x17B, 11, 511, 46, -13, 118, 0xFF },
    { 0x165, 271, 505, 46, -13, 118, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004ED8[2] = {
    { 0xE4, 539, 332, -29, -87, 88, 0xFF },
    { 0xA5, 293, 87, -29, -87, 88, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004EEC[1] = {
    { 0x03, 375, 596, -127, -9, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004EF8[1] = {
    { 0x04, 258, 375, -17, -20, -124, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F04[6] = {
    { 0xE7, 943, -94, 21, 5, 125, 0xFF },
    { 0x31, 366, 34, 21, 5, 125, 0xFF },
    { 0x9F, -48, 125, 21, 5, 125, 0xFF },
    { 0x34, 675, 44, 21, 5, 125, 0xFF },
    { 0xE6, 766, 452, 21, 5, 125, 0xFF },
    { 0x10D, -25, 462, 21, 5, 125, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F40[3] = {
    { 0x3E, 163, 318, 48, 69, -96, 0xFF },
    { 0x0D, -206, 423, 48, 69, -96, 0xFF },
    { 0x69, 444, 414, 48, 69, -96, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F60[3] = {
    { 0x15, 193, 27, 93, 69, 52, 0xFF },
    { 0x30, 777, 31, 93, 69, 52, 0xFF },
    { 0xA0, 118, 127, 93, 69, 52, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F80[4] = {
    { 0xA3, 118, 127, 105, 26, -66, 0xFF },
    { 0x4D, -286, 82, 105, 26, -66, 0xFF },
    { 0xAE, 147, 134, 105, 26, -66, 0xFF },
    { 0x16, -313, 28, 105, 26, -66, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FA8[4] = {
    { 0x111, -122, 299, -124, 26, 6, 0xFF },
    { 0xA2, 88, -45, -124, 26, 6, 0xFF },
    { 0xEF, 396, 297, -124, 26, 6, 0xFF },
    { 0xF4, -122, 299, -124, 26, 6, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FD0[4] = {
    { 0xA1, 51, -5, 51, 74, 90, 0xFF },
    { 0xEE, 45, 246, 51, 74, 90, 0xFF },
    { 0xE8, 642, 277, 51, 74, 90, 0xFF },
    { 0x10E, 642, 277, 51, 74, 90, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FF8[2] = {
    { 0x5F, 389, 679, -11, 77, -101, 0xFF },
    { 0x14, 294, 636, -11, 77, -101, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00500C[3] = {
    { 0x122, 153, 4, -49, -107, 49, 0xFF },
    { 0xD6, 43, 26, -49, -107, 49, 0xFF },
    { 0x126, 133, -20, -49, -107, 49, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00502C[2] = {
    { 0x13, -240, 635, -50, 87, 78, 0xFF },
    { 0x5D, 391, 680, -50, 87, 78, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005040[2] = {
    { 0x5C, -61, 689, 123, 32, 2, 0xFF },
    { 0x62, 270, 727, 123, 32, 2, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005054[4] = {
    { 0x60, 81, 418, 22, -95, -82, 0xFF },
    { 0x4F, 426, 437, 22, -95, -82, 0xFF },
    { 0x58, 38, 421, 22, -95, -82, 0xFF },
    { 0x61, 419, 432, 22, -95, -82, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00507C[2] = {
    { 0x191, 469, 92, -55, 106, 42, 0xFF },
    { 0x1A1, -228, 71, -55, 106, 42, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005090[3] = {
    { 0x11B, 1024, 93, 117, 48, 1, 0xFF },
    { 0x153, -169, 89, 117, 48, 1, 0xFF },
    { 0x167, -169, 89, 117, 48, 1, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050B0[3] = {
    { 0x105, 68, 395, -112, 59, -1, 0xFF },
    { 0xA8, 42, -67, -112, 59, -1, 0xFF },
    { 0xF2, 68, 395, -112, 59, -1, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050D0[3] = {
    { 0xF6, 100, -9, -1, -31, -123, 0xFF },
    { 0xFB, -29, 348, -1, -31, -123, 0xFF },
    { 0x176, 345, 538, -1, -31, -123, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050F0[1] = {
    { 0x02, 258, 375, -17, -20, 124, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050FC[3] = {
    { 0xF8, 240, -174, -53, -32, -111, 0xFF },
    { 0xFC, 501, -136, -53, -32, -111, 0xFF },
    { 0x1DE, 0, 512, -53, -32, -111, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00511C[3] = {
    { 0xF9, 642, 277, 51, 74, -90, 0xFF },
    { 0xCF, 52, -5, 51, 74, -90, 0xFF },
    { 0x102, 45, 246, 51, 74, -90, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00513C[1] = {
    { 0x01, 482, 361, 7, 127, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005148[4] = {
    { 0x51, 38, 437, 13, -74, 103, 0xFF },
    { 0x5B, 499, 435, 13, -74, 103, 0xFF },
    { 0x63, 31, 432, 13, -74, 103, 0xFF },
    { 0x5E, 80, 418, 13, -74, 103, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005170[4] = {
    { 0x5A, 522, 34, 22, -89, 87, 0xFF },
    { 0xC7, -81, 627, 22, -89, 87, 0xFF },
    { 0x50, -10, 34, 22, -89, 87, 0xFF },
    { 0xB1, 231, 289, 22, -89, 87, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005198[4] = {
    { 0x11, 254, 422, 30, 69, -102, 0xFF },
    { 0x65, 444, 414, 30, 69, -102, 0xFF },
    { 0x54, 566, 422, 30, 69, -102, 0xFF },
    { 0x56, 445, 411, 30, 69, -102, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0051C0[4] = {
    { 0x4E, 459, 33, 8, -93, -86, 0xFF },
    { 0x57, 7, 34, 8, -93, -86, 0xFF },
    { 0xB0, 392, 266, 8, -93, -86, 0xFF },
    { 0xE1, 1316, 350, 8, -93, -86, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0051E8[3] = {
    { 0xE2, 539, 332, -27, -87, -88, 0xFF },
    { 0xC8, 293, 87, -27, -87, -88, 0xFF },
    { 0xAF, 293, 87, -27, -87, -88, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005208[6] = {
    { 0xFA, -25, 462, 21, 5, -125, 0xFF },
    { 0xE0, 943, -94, 21, 5, -125, 0xFF },
    { 0xFD, 766, 452, 21, 5, -125, 0xFF },
    { 0x52, 366, 34, 21, 5, -125, 0xFF },
    { 0xD0, -48, 125, 21, 5, -125, 0xFF },
    { 0x55, 675, 44, 21, 5, -125, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005244[3] = {
    { 0x10, -206, 423, 46, 71, 95, 0xFF },
    { 0x59, 163, 318, 46, 71, 95, 0xFF },
    { 0x66, 444, 415, 46, 71, 95, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005264[3] = {
    { 0x0F, 193, 27, 93, 69, -52, 0xFF },
    { 0x53, 777, 31, 93, 69, -52, 0xFF },
    { 0xCE, 118, 127, 93, 69, -52, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005284[6] = {
    { 0xF7, 241, 361, 46, -7, -118, 0xFF },
    { 0x18F, 429, -716, 46, -7, -118, 0xFF },
    { 0xCB, 205, 30, 46, -7, -118, 0xFF },
    { 0x178, 11, 511, 46, -7, -118, 0xFF },
    { 0x1B1, 449, 512, 46, -7, -118, 0xFF },
    { 0x151, 271, 505, 46, -7, -118, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0052C0[7] = {
    { 0x1C1, -45, -188, -9, -72, 104, 0xFF },
    { 0x1CE, -45, -188, -9, -72, 104, 0xFF },
    { 0x181, 318, 53, -9, -72, 104, 0xFF },
    { 0x17A, 318, 53, -9, -72, 104, 0xFF },
    { 0x11A, -152, 717, -9, -72, 104, 0xFF },
    { 0x125, 303, 820, -9, -72, 104, 0xFF },
    { 0x166, 489, -19, -9, -72, 104, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005308[5] = {
    { 0x1DC, 0, 512, -74, -39, -95, 0xFF },
    { 0xFE, 94, -71, -74, -39, -95, 0xFF },
    { 0x175, 671, 440, -74, -39, -95, 0xFF },
    { 0x4A, 143, 0, -74, -39, -95, 0xFF },
    { 0x1BD, 514, 492, -74, -39, -95, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00533C[5] = {
    { 0x64, -286, 82, 106, 26, 66, 0xFF },
    { 0xC5, 147, 134, 106, 26, 66, 0xFF },
    { 0xCD, 118, 126, 106, 26, 66, 0xFF },
    { 0xAA, 118, 126, 106, 26, 66, 0xFF },
    { 0x12, -313, 28, 106, 26, 66, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005370[4] = {
    { 0x103, -122, 299, -124, 27, -6, 0xFF },
    { 0xCC, 88, -45, -124, 27, -6, 0xFF },
    { 0x101, 396, 297, -124, 27, -6, 0xFF },
    { 0xAB, 88, -45, -124, 27, -6, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005398[6] = {
    { 0x106, -62, -322, -98, -50, -63, 0xFF },
    { 0x1DD, 0, 512, -98, -50, -63, 0xFF },
    { 0x100, 387, -316, -98, -50, -63, 0xFF },
    { 0xFF, 525, -425, -98, -50, -63, 0xFF },
    { 0x4C, 828, 0, -98, -50, -63, 0xFF },
    { 0x48, -85, 0, -98, -50, -63, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0053D4[4] = {
    { 0x9A, 105, 120, 74, 91, -49, 0xFF },
    { 0xCA, 105, 120, 74, 91, -49, 0xFF },
    { 0x190, 405, -295, 74, 91, -49, 0xFF },
    { 0x1A4, 410, 165, 74, 91, -49, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0053FC[3] = {
    { 0xC6, -286, 263, 7, -123, 30, 0xFF },
    { 0x9B, 135, 205, 7, -123, 30, 0xFF },
    { 0xC9, 135, 205, 7, -123, 30, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00541C[4] = {
    { 0x35, 1406, 528, 32, 56, 109, 0xFF },
    { 0x7C, 382, 528, 32, 56, 109, 0xFF },
    { 0x29, 382, 528, 32, 56, 109, 0xFF },
    { 0x70, 1406, 528, 32, 56, 109, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005444[5] = {
    { 0x1C9, 371, 512, -54, -107, -42, 0xFF },
    { 0x1D, 671, 400, -54, -107, -42, 0xFF },
    { 0x1BC, 115, 523, -54, -107, -42, 0xFF },
    { 0x4B, 541, 401, -54, -107, -42, 0xFF },
    { 0x49, -67, 401, -54, -107, -42, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005478[1] = {
    { 0x07, 59, 379, -45, -119, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005484[2] = {
    { 0x71, 1024, 708, 120, 43, 0, 0xFF },
    { 0x1A, 1024, 708, 120, 43, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005498[3] = {
    { 0x18, 1135, 485, -16, -99, 78, 0xFF },
    { 0x8A, 111, 485, -16, -99, 78, 0xFF },
    { 0x88, 1135, 485, -16, -99, 78, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054B8[3] = {
    { 0x73, 912, 485, 5, -76, -102, 0xFF },
    { 0x8D, 912, 485, 5, -76, -102, 0xFF },
    { 0x17, 912, 485, 5, -76, -102, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054D8[2] = {
    { 0x7B, 931, 367, -32, -107, -60, 0xFF },
    { 0x19, 931, 367, -32, -107, -60, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054EC[2] = {
    { 0x79, 636, 528, 32, 73, -99, 0xFF },
    { 0x72, 636, 528, 32, 73, -99, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005500[3] = {
    { 0x146, 3, 187, 80, 44, -89, 0xFF },
    { 0x14D, 720, 189, 80, 44, -89, 0xFF },
    { 0x120, 73, 96, 80, 44, -89, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005520[4] = {
    { 0x124, -475, 3, -36, -116, -36, 0xFF },
    { 0x127, 153, 4, -36, -116, -36, 0xFF },
    { 0xD7, 453, 26, -36, -116, -36, 0xFF },
    { 0x12A, 133, -20, -36, -116, -36, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005548[4] = {
    { 0x1D2, 0, 512, 54, 26, -112, 0xFF },
    { 0x19F, -110, -57, 54, 26, -112, 0xFF },
    { 0x78, 601, -177, 54, 26, -112, 0xFF },
    { 0xC3, -8, 110, 54, 26, -112, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005570[5] = {
    { 0x1D1, 0, 512, 19, -15, -125, 0xFF },
    { 0x143, 765, 512, 19, -15, -125, 0xFF },
    { 0x1AC, 75, 512, 19, -15, -125, 0xFF },
    { 0xC4, 79, 34, 19, -15, -125, 0xFF },
    { 0x148, 531, 529, 19, -15, -125, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055A4[4] = {
    { 0x1D3, 0, 512, 27, -65, -106, 0xFF },
    { 0x77, 873, -220, 27, -65, -106, 0xFF },
    { 0x141, 384, 462, 27, -65, -106, 0xFF },
    { 0x24, 873, -220, 27, -65, -106, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055CC[4] = {
    { 0x7A, 444, 43, -98, 81, 4, 0xFF },
    { 0x2A, 444, 43, -98, 81, 4, 0xFF },
    { 0x1D7, 0, 512, -98, 81, 4, 0xFF },
    { 0x19D, 20, 164, -98, 81, 4, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055F4[5] = {
    { 0x15E, -220, -20, 8, -103, -74, 0xFF },
    { 0x142, 592, -24, 8, -103, -74, 0xFF },
    { 0x11F, 71, 1027, 8, -103, -74, 0xFF },
    { 0x14B, -202, -532, 8, -103, -74, 0xFF },
    { 0x149, 218, -127, 8, -103, -74, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005628[2] = {
    { 0xA7, 135, 205, 7, -123, -30, 0xFF },
    { 0xAD, -286, 263, 7, -123, -30, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00563C[4] = {
    { 0x19E, 694, -352, -12, 73, -103, 0xFF },
    { 0x18E, 34, -444, -12, 73, -103, 0xFF },
    { 0x1B2, -51, 512, -12, 73, -103, 0xFF },
    { 0x1B8, 573, 512, -12, 73, -103, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005664[2] = {
    { 0x194, 113, -129, -11, 126, 0, 0xFF },
    { 0x1A3, 101, -108, -11, 126, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005678[2] = {
    { 0x19C, 451, 96, -55, 107, -42, 0xFF },
    { 0x195, -243, 68, -55, 107, -42, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00568C[5] = {
    { 0x99, 64, 258, 1, 127, 0, 0xFF },
    { 0xA9, 12, 248, 1, 127, 0, 0xFF },
    { 0xD1, -34, 313, 1, 127, 0, 0xFF },
    { 0x1A2, 117, 670, 1, 127, 0, 0xFF },
    { 0xB2, -34, 313, 1, 127, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0056C0[5] = {
    { 0x12E, 1024, 1238, -5, -11, -126, 0xFF },
    { 0x12C, 1024, 1243, -5, -11, -126, 0xFF },
    { 0x1B0, 63, 21, -5, -11, -126, 0xFF },
    { 0x1B7, 482, 29, -5, -11, -126, 0xFF },
    { 0x152, -191, 16, -5, -11, -126, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0056F4[6] = {
    { 0x1A0, -49, -627, -24, -7, -125, 0xFF },
    { 0x1AD, 367, 512, -24, -7, -125, 0xFF },
    { 0x1B6, -37, 512, -24, -7, -125, 0xFF },
    { 0x1A9, 523, 512, -24, -7, -125, 0xFF },
    { 0xC2, 156, 137, -24, -7, -125, 0xFF },
    { 0x18B, 829, -480, -24, -7, -125, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005730[4] = {
    { 0x8B, 98, 367, -30, -86, 88, 0xFF },
    { 0x89, 1122, 367, -30, -86, 88, 0xFF },
    { 0x28, 98, 367, -30, -86, 88, 0xFF },
    { 0x26, 1122, 367, -30, -86, 88, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005758[6] = {
    { 0x173, 0, 512, 56, -111, 24, 0xFF },
    { 0x15F, 0, 512, 56, -111, 24, 0xFF },
    { 0x144, -47, 512, 56, -111, 24, 0xFF },
    { 0x25, 1132, -74, 56, -111, 24, 0xFF },
    { 0x27, 108, -74, 56, -111, 24, 0xFF },
    { 0x1D9, 0, 512, 56, -111, 24, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005794[4] = {
    { 0x36, 1024, 699, 121, 37, 2, 0xFF },
    { 0x6E, 1024, 699, 121, 37, 2, 0xFF },
    { 0x8C, 0, 699, 121, 37, 2, 0xFF },
    { 0x7F, 1024, 699, 121, 37, 2, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0057BC[2] = {
    { 0x7E, 931, 476, 7, -78, -100, 0xFF },
    { 0x37, 931, 476, 7, -78, -100, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0057D0[5] = {
    { 0x12B, -152, 717, -11, -70, -106, 0xFF },
    { 0x128, 303, 820, -11, -70, -106, 0xFF },
    { 0x177, 318, 53, -11, -70, -106, 0xFF },
    { 0x1BB, 592, -193, -11, -70, -106, 0xFF },
    { 0x150, 489, -19, -11, -70, -106, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005804[2] = {
    { 0x7D, 1105, 475, -14, -99, 78, 0xFF },
    { 0x87, 81, 475, -14, -99, 78, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005818[6] = {
    { 0x21, -67, 401, -53, -108, 41, 0xFF },
    { 0x1F, 541, 401, -53, -108, 41, 0xFF },
    { 0x1C8, -128, 512, -53, -108, 41, 0xFF },
    { 0x1B, -128, 400, -53, -108, 41, 0xFF },
    { 0x1C0, 400, 512, -53, -108, 41, 0xFF },
    { 0x1CF, 400, 512, -53, -108, 41, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005854[3] = {
    { 0x38, 688, 521, 32, 56, -109, 0xFF },
    { 0x81, 688, 521, 32, 56, -109, 0xFF },
    { 0x6F, 688, 521, 32, 56, -109, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005874[2] = {
    { 0x83, 342, 520, 35, 70, 100, 0xFF },
    { 0x6D, 342, 520, 35, 70, 100, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005888[1] = {
    { 0x80, 952, 358, -41, -99, -68, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005894[2] = {
    { 0x86, 68, 358, -17, -103, 72, 0xFF },
    { 0x75, 1092, 358, -17, -103, 72, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058A8[3] = {
    { 0x193, -110, -57, 51, 31, 112, 0xFF },
    { 0xB9, -8, 110, 51, 31, 112, 0xFF },
    { 0x84, 406, -186, 51, 31, 112, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058C8[4] = {
    { 0x85, 140, -229, 23, -63, 108, 0xFF },
    { 0x76, 1164, -229, 23, -63, 108, 0xFF },
    { 0x170, 384, 462, 23, -63, 108, 0xFF },
    { 0xC1, -9, 8, 23, -63, 108, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058F0[5] = {
    { 0x1DB, 0, 512, 56, -111, -25, 0xFF },
    { 0x74, 935, -83, 56, -111, -25, 0xFF },
    { 0x15A, 518, 512, 56, -111, -25, 0xFF },
    { 0x172, -47, 512, 56, -111, -25, 0xFF },
    { 0x162, 518, 512, 56, -111, -25, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005924[3] = {
    { 0x1DA, 0, 512, -99, 79, -3, 0xFF },
    { 0x82, 590, 34, -99, 79, -3, 0xFF },
    { 0x19B, 20, 164, -99, 79, -3, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005944[4] = {
    { 0x192, 693, -351, -12, 71, 104, 0xFF },
    { 0x1A6, 573, 512, -12, 71, 104, 0xFF },
    { 0x198, 34, -443, -12, 71, 104, 0xFF },
    { 0x1B3, -51, 512, -12, 71, 104, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00596C[3] = {
    { 0xA4, 105, 120, 75, 90, 50, 0xFF },
    { 0x1A5, 410, 164, 75, 90, 50, 0xFF },
    { 0x197, 405, -295, 75, 90, 50, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_00598C[5] = {
    { 0xF5, 152, 364, 80, 99, 2, 0xFF },
    { 0x14E, 19, 512, 80, 99, 2, 0xFF },
    { 0x169, 19, 512, 80, 99, 2, 0xFF },
    { 0x185, 19, 512, 80, 99, 2, 0xFF },
    { 0x108, 152, 364, 80, 99, 2, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0059C0[3] = {
    { 0x147, 481, 54, -18, -60, -111, 0xFF },
    { 0x18C, 481, 54, -18, -60, -111, 0xFF },
    { 0x1AB, 519, -200, -18, -60, -111, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_0059E0[4] = {
    { 0xB8, 79, 34, 14, -12, 126, 0xFF },
    { 0x179, 765, 512, 14, -12, 126, 0xFF },
    { 0x1CC, 75, 512, 14, -12, 126, 0xFF },
    { 0x16F, 531, 529, 14, -12, 126, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A08[5] = {
    { 0x11C, 71, 1027, 5, -103, 74, 0xFF },
    { 0x171, 592, -24, 5, -103, 74, 0xFF },
    { 0x16E, 218, -127, 5, -103, 74, 0xFF },
    { 0x163, 725, -23, 5, -103, 74, 0xFF },
    { 0x15D, -202, -532, 5, -103, 74, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A3C[5] = {
    { 0x1A7, 482, 29, -6, -13, 126, 0xFF },
    { 0x1B5, 63, 21, -6, -13, 126, 0xFF },
    { 0x121, 1024, 1238, -6, -13, 126, 0xFF },
    { 0x164, -191, 16, -6, -13, 126, 0xFF },
    { 0x119, 1024, 1243, -6, -13, 126, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A70[7] = {
    { 0x196, -49, -626, -26, -8, 124, 0xFF },
    { 0x1A8, -37, 512, -26, -8, 124, 0xFF },
    { 0xBA, 156, 137, -26, -8, 124, 0xFF },
    { 0x15C, 829, -480, -26, -8, 124, 0xFF },
    { 0x1C4, 523, 512, -26, -8, 124, 0xFF },
    { 0x1CD, 523, 512, -26, -8, 124, 0xFF },
    { 0x1C7, 367, 512, -26, -8, 124, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005AB8[5] = {
    { 0x98, 148, 628, 10, 42, 119, 0xFF },
    { 0xED, 472, -430, 10, 42, 119, 0xFF },
    { 0x140, -395, 554, 10, 42, 119, 0xFF },
    { 0xC0, 331, 228, 10, 42, 119, 0xFF },
    { 0xB6, 331, 228, 10, 42, 119, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005AEC[2] = {
    { 0x8E, 510, 180, 17, -73, 103, 0xFF },
    { 0x13B, 10, 197, 17, -73, 103, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B00[2] = {
    { 0x96, -196, 517, 28, 34, 119, 0xFF },
    { 0xBD, 259, 106, 28, 34, 119, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B14[1] = {
    { 0x97, -252, 220, 96, -22, 80, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B20[1] = {
    { 0x94, -253, 221, 96, -22, -80, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B2C[3] = {
    { 0x95, -660, 646, 90, 90, 0, 0xFF },
    { 0xBB, 65, -5, 90, 90, 0, 0xFF },
    { 0x9C, 65, -5, 90, 90, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B4C[2] = {
    { 0xBC, 87, 120, 2, 127, 0, 0xFF },
    { 0x9E, 87, 120, 2, 127, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B60[4] = {
    { 0x174, 251, 471, -6, 127, 0, 0xFF },
    { 0x1D8, 0, 512, -6, 127, 0, 0xFF },
    { 0x19A, -416, 207, -6, 127, 0, 0xFF },
    { 0x159, 251, 471, -6, 127, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B88[4] = {
    { 0x157, 103, -246, 23, -43, 117, 0xFF },
    { 0x1C3, 181, -61, 23, -43, 117, 0xFF },
    { 0x1CB, 181, -61, 23, -43, 117, 0xFF },
    { 0x16D, 633, -14, 23, -43, 117, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BB0[1] = {
    { 0x90, -85, 88, 80, -99, 0, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BBC[2] = {
    { 0x8F, 673, -65, 12, -126, 1, 0xFF },
    { 0x138, 97, 1, 12, -126, 1, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BD0[2] = {
    { 0x13A, 12, 197, 18, -72, -103, 0xFF },
    { 0x91, 512, 179, 18, -72, -103, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BE4[3] = {
    { 0x13D, 760, 300, -53, -115, 2, 0xFF },
    { 0x180, 160, 457, -53, -115, 2, 0xFF },
    { 0x188, 160, 457, -53, -115, 2, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C04[1] = {
    { 0x139, 602, 23, 5, -127, 2, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C10[1] = {
    { 0x0A, 256, -21, 127, -9, 3, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C1C[6] = {
    { 0x13F, -395, 554, 12, 44, -118, 0xFF },
    { 0xB7, 331, 228, 12, 44, -118, 0xFF },
    { 0x92, 148, 628, 12, 44, -118, 0xFF },
    { 0xBE, 331, 228, 12, 44, -118, 0xFF },
    { 0xDE, 472, -430, 12, 44, -118, 0xFF },
    { 0x10C, 472, -430, 12, 44, -118, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C58[2] = {
    { 0x93, -193, 518, 27, 35, -119, 0xFF },
    { 0x9D, 259, 107, 27, 35, -119, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C6C[6] = {
    { 0x187, 517, 440, -3, -74, -103, 0xFF },
    { 0x13C, 674, 454, -3, -74, -103, 0xFF },
    { 0x14C, 702, 484, -3, -74, -103, 0xFF },
    { 0x1AE, -186, 512, -3, -74, -103, 0xFF },
    { 0x10A, 1464, 119, -3, -74, -103, 0xFF },
    { 0x18D, 702, 484, -3, -74, -103, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CA8[4] = {
    { 0xDF, 738, 196, 48, 48, -107, 0xFF },
    { 0x154, 136, 507, 48, 48, -107, 0xFF },
    { 0x10B, 738, 196, 48, 48, -107, 0xFF },
    { 0x14F, 841, 512, 48, 48, -107, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CD0[4] = {
    { 0xDD, 77, -260, 39, 121, -1, 0xFF },
    { 0xBF, 153, 229, 39, 121, -1, 0xFF },
    { 0xB5, 153, 229, 39, 121, -1, 0xFF },
    { 0x107, 77, -260, 39, 121, -1, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CF8[4] = {
    { 0x160, 136, 507, 43, 46, 110, 0xFF },
    { 0xEC, 739, 194, 43, 46, 110, 0xFF },
    { 0x184, 841, 512, 43, 46, 110, 0xFF },
    { 0x109, 739, 194, 43, 46, 110, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D20[6] = {
    { 0x13E, 675, 452, -6, -74, 103, 0xFF },
    { 0x17E, 517, 440, -6, -74, 103, 0xFF },
    { 0x15B, 702, 484, -6, -74, 103, 0xFF },
    { 0xF1, 1467, 118, -6, -74, 103, 0xFF },
    { 0x16C, 702, 484, -6, -74, 103, 0xFF },
    { 0x1C6, -186, 512, -6, -74, 103, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D5C[5] = {
    { 0x156, 3, 187, 79, 44, 90, 0xFF },
    { 0x168, 720, 189, 79, 44, 90, 0xFF },
    { 0x16A, 3, 187, 79, 44, 90, 0xFF },
    { 0x186, 720, 189, 79, 44, 90, 0xFF },
    { 0x11D, 73, 96, 79, 44, 90, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D90[3] = {
    { 0x16B, 481, 54, -21, -63, 108, 0xFF },
    { 0x155, 481, 54, -21, -63, 108, 0xFF },
    { 0x1C2, 519, -200, -21, -63, 108, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005DB0[5] = {
    { 0x117, 36, 580, 31, -59, 108, 0xFF },
    { 0x1BA, -42, -54, 31, -59, 108, 0xFF },
    { 0x1C5, 179, -21, 31, -59, 108, 0xFF },
    { 0x136, 105, 636, 31, -59, 108, 0xFF },
    { 0x17F, 337, 63, 31, -59, 108, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005DE4[4] = {
    { 0x115, 1024, -25, -5, -99, 80, 0xFF },
    { 0xD5, -10, 512, -5, -99, 80, 0xFF },
    { 0x118, 1024, -36, -5, -99, 80, 0xFF },
    { 0xD9, -21, 512, -5, -99, 80, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E0C[4] = {
    { 0xD3, 484, 41, 75, -90, -48, 0xFF },
    { 0x114, -738, 23, 75, -90, -48, 0xFF },
    { 0x130, -68, 22, 75, -90, -48, 0xFF },
    { 0x133, -108, 24, 75, -90, -48, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E34[6] = {
    { 0x18A, 337, 63, 30, -59, -108, 0xFF },
    { 0x12F, 36, 580, 30, -59, -108, 0xFF },
    { 0x1AF, 179, -21, 30, -59, -108, 0xFF },
    { 0x131, 105, 636, 30, -59, -108, 0xFF },
    { 0x1B9, -42, -54, 30, -59, -108, 0xFF },
    { 0x132, 36, 580, 30, -59, -108, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E70[5] = {
    { 0x12D, 1024, -25, -12, -99, -78, 0xFF },
    { 0x129, 1024, -36, -12, -99, -78, 0xFF },
    { 0xD2, 539, 512, -12, -99, -78, 0xFF },
    { 0x134, 1024, -25, -12, -99, -78, 0xFF },
    { 0xD8, 508, 512, -12, -99, -78, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EA4[4] = {
    { 0x189, 64, 290, 62, -111, 2, 0xFF },
    { 0x17D, 64, 290, 62, -111, 2, 0xFF },
    { 0x112, -394, 124, 62, -111, 2, 0xFF },
    { 0x135, -394, 124, 62, -111, 2, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005ECC[1] = {
    { 0x06, -31, 72, 7, -127, 1, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005ED8[1] = {
    { 0x00, 499, 81, 22, 125, 1, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EE4[1] = {
    { 0x09, 260, 72, 29, -1, -124, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EF0[1] = {
    { 0x08, 260, 72, 29, -1, 124, 0xFF },
}; 

Struct_800A57C0 sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EFC[1] = {
    { 0x05, 223, 595, -19, -126, 0, 0xFF },
}; 

Struct_800A598C sHorseZeldaSkelSkinLimb_Struct_800A598C_005F08[136] = {
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004BCC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F50),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004BCC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F50
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004BEC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F64),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004BEC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F64
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C14), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F78),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C14, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F78
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C34), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F8C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C34, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003F8C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C68), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FA0),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C68, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FA0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C88), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FC0),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C88, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FC0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C9C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FCC),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004C9C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FCC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004CC4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FEC),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004CC4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_003FEC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D00), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00400C),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D00, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00400C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D34), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00402C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D34, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00402C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D5C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00404C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D5C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00404C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D84), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004060),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004D84, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004060
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004DB8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004080),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004DB8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004080
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004DEC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004094),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004DEC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004094
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E0C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040BC),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E0C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040BC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E34), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040DC),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E34, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040DC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E68), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040FC),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E68, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0040FC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E9C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004110),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004E9C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004110
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004ED8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004130),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004ED8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004130
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004EEC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004144),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004EEC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004144
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004EF8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004150),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004EF8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004150
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F04), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004164),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F04, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004164
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F40), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004178),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F40, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004178
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F60), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00418C),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F60, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00418C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F80), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041A0),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004F80, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041A0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FA8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041B4),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FA8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041B4
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FD0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041D4),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FD0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041D4
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FF8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041F4),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_004FF8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0041F4
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00500C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004208),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00500C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004208
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00502C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004230),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00502C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004230
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005040), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004244),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005040, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004244
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005054), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004250),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005054, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004250
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00507C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004264),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00507C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004264
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005090), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004284),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005090, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004284
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050B0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004298),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050B0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004298
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050D0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042B8),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050D0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042B8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050F0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042CC),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050F0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042CC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050FC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042E0),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0050FC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0042E0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00511C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004300),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00511C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004300
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00513C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004320),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00513C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004320
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005148), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004334),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005148, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004334
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005170), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004348),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005170, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004348
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005198), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004368),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005198, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004368
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0051C0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00437C),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0051C0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00437C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0051E8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00439C),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0051E8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00439C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005208), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043B0),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005208, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043B0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005244), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043C4),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005244, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043C4
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005264), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043D8),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005264, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043D8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005284), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043EC),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005284, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0043EC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0052C0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00440C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0052C0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00440C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005308), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004420),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005308, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004420
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00533C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004440),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00533C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004440
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005370), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004454),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005370, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004454
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005398), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004474),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005398, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004474
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0053D4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004494),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0053D4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004494
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0053FC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044B4),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0053FC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044B4
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00541C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044D4),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00541C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044D4
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005444), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044E8),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005444, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0044E8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005478), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004508),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005478, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004508
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005484), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00451C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005484, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00451C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005498), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004528),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005498, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004528
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054B8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00453C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054B8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00453C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054D8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004550),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054D8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004550
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054EC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00455C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0054EC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00455C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005500), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004570),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005500, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004570
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005520), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004598),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005520, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004598
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005548), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0045C0),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005548, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0045C0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005570), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0045E0),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005570, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0045E0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055A4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004600),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055A4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004600
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055CC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004614),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055CC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004614
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055F4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004634),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0055F4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004634
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005628), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004654),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005628, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004654
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00563C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004674),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00563C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004674
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005664), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004694),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005664, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004694
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005678), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0046C8),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005678, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0046C8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00568C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0046E8),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00568C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0046E8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0056C0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004708),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0056C0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004708
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0056F4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00471C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0056F4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00471C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005730), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004730),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005730, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004730
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005758), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00473C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005758, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00473C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005794), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004750),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005794, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004750
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0057BC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00475C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0057BC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00475C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0057D0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004770),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0057D0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004770
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005804), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004784),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005804, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004784
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005818), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004798),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005818, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004798
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005854), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047B8),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005854, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047B8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005874), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047CC),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005874, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047CC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005888), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047E0),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005888, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047E0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005894), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047EC),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005894, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047EC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058A8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047F8),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058A8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0047F8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058C8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004818),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058C8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004818
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058F0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00482C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0058F0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00482C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005924), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004840),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005924, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004840
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005944), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004860),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005944, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004860
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00596C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004880),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00596C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004880
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_00598C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048A0),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_00598C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048A0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0059C0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048AC),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0059C0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048AC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_0059E0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048CC),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_0059E0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048CC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A08), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048EC),
        2, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A08, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0048EC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A3C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00490C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A3C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00490C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A70), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00492C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005A70, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00492C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005AB8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004940),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005AB8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004940
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005AEC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004954),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005AEC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004954
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B00), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004968),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B00, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004968
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B14), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004974),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B14, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004974
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B20), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004980),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B20, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004980
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B2C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00498C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B2C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_00498C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B4C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004998),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B4C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004998
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B60), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049A4),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B60, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049A4
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B88), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049B0),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005B88, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049B0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BB0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049D0),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BB0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049D0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BBC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049DC),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BBC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049DC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BD0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049F0),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BD0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_0049F0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BE4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A04),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005BE4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A04
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C04), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A18),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C04, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A18
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C10), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A38),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C10, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A38
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C1C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A4C),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C1C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A4C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C58), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A60),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C58, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A60
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C6C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A6C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005C6C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A6C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CA8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A80),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CA8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A80
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CD0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A94),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CD0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004A94
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CF8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AA8),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005CF8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AA8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D20), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004ABC),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D20, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004ABC
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D5C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AD0),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D5C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AD0
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D90), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AF8),
        1, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005D90, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004AF8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005DB0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B18),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005DB0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B18
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005DE4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B2C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005DE4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B2C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E0C), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B40),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E0C, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B40
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E34), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B54),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E34, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B54
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E70), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B68),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005E70, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B68
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EA4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B7C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EA4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B7C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005ECC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B90),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005ECC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B90
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005ED8), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B9C),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005ED8, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004B9C
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EE4), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BA8),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EE4, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BA8
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EF0), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BB4),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EF0, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BB4
    },
    { 
        ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EFC), ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BC0),
        0, sHorseZeldaSkelSkinLimb_Struct_800A57C0_005EFC, sHorseZeldaSkelSkinLimb_Struct_800A598C_2_004BC0
    },
}; 

Struct_800A5E28 sHorseZeldaSkelSkinLimb_Struct_800A5E28_006788 = { 
    479, ARRAY_COUNTU(sHorseZeldaSkelSkinLimb_Struct_800A598C_005F08),
    sHorseZeldaSkelSkinLimb_Struct_800A598C_005F08, sHorseZeldaSkelSkinLimbDL_0036F8
}; 

SkinLimb sHorseZeldaSkelLimb_006794 = { 
    { 0, 4820, -1965 },
    0x01, 0xFF,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0067A4 = { 
    { 0, 505, -1238 },
    0x02, 0x05,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0067B4 = { 
    { 0, 0, 0 },
    0x03, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0067C4 = { 
    { 1217, 0, 0 },
    0x04, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0067D4 = { 
    { 2387, 0, 0 },
    0xFF, 0xFF,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0067E4 = { 
    { -3, 171, 1984 },
    0xFF, 0x06,
    0x04, &sHorseZeldaSkelSkinLimb_Struct_800A5E28_006788
}; 

SkinLimb sHorseZeldaSkelLimb_0067F4 = { 
    { 0, 68, 710 },
    0x07, 0x1E,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006804 = { 
    { 0, 0, 0 },
    0x08, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006814 = { 
    { 1681, 0, 0 },
    0x09, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006824 = { 
    { 2122, 0, 0 },
    0x0A, 0x0E,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006834 = { 
    { 1406, 0, 0 },
    0x0B, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006844 = { 
    { 1304, 0, 0 },
    0x0C, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006854 = { 
    { 1781, 0, 0 },
    0xFF, 0x0D,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006864 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_002258
}; 

SkinLimb sHorseZeldaSkelLimb_006874 = { 
    { 1338, 341, 756 },
    0x0F, 0x16,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006884 = { 
    { 0, 0, 0 },
    0x10, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006894 = { 
    { 605, 0, 0 },
    0x11, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0068A4 = { 
    { 2419, 0, 0 },
    0x12, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0068B4 = { 
    { 1459, 0, 0 },
    0x13, 0x15,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0068C4 = { 
    { 660, 0, 0 },
    0xFF, 0x14,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0068D4 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_001DA0
}; 

SkinLimb sHorseZeldaSkelLimb_0068E4 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_001CE8
}; 

SkinLimb sHorseZeldaSkelLimb_0068F4 = { 
    { 1338, 341, -756 },
    0x17, 0xFF,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006904 = { 
    { 0, 0, 0 },
    0x18, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006914 = { 
    { 605, 0, 0 },
    0x19, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006924 = { 
    { 2419, 0, 0 },
    0x1A, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006934 = { 
    { 1459, 0, 0 },
    0x1B, 0x1D,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006944 = { 
    { 660, 0, 0 },
    0xFF, 0x1C,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006954 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_001F70
}; 

SkinLimb sHorseZeldaSkelLimb_006964 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_001EB8
}; 

SkinLimb sHorseZeldaSkelLimb_006974 = { 
    { 655, -151, -593 },
    0x1F, 0x26,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006984 = { 
    { 0, 0, 0 },
    0x20, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006994 = { 
    { 1123, 0, 0 },
    0x21, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0069A4 = { 
    { 2330, 0, 0 },
    0x22, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0069B4 = { 
    { 1573, 0, 0 },
    0x23, 0x25,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0069C4 = { 
    { 598, 0, 0 },
    0xFF, 0x24,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_0069D4 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_001BD0
}; 

SkinLimb sHorseZeldaSkelLimb_0069E4 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_001B18
}; 

SkinLimb sHorseZeldaSkelLimb_0069F4 = { 
    { -655, -151, -593 },
    0x27, 0xFF,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006A04 = { 
    { 0, 0, 0 },
    0x28, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006A14 = { 
    { 1123, 0, 0 },
    0x29, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006A24 = { 
    { 2330, 0, 0 },
    0x2A, 0xFF,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006A34 = { 
    { 1573, 0, 0 },
    0x2B, 0x2D,
    0x05, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006A44 = { 
    { 598, 0, 0 },
    0xFF, 0x2C,
    0x00, NULL
}; 

SkinLimb sHorseZeldaSkelLimb_006A54 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_002140
}; 

SkinLimb sHorseZeldaSkelLimb_006A64 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    0x0B, sHorseZeldaSkelSkinLimbDL_002088
}; 

static void* sHorseZeldaSkelLimbs[46] = {
    &sHorseZeldaSkelLimb_006794,
    &sHorseZeldaSkelLimb_0067A4,
    &sHorseZeldaSkelLimb_0067B4,
    &sHorseZeldaSkelLimb_0067C4,
    &sHorseZeldaSkelLimb_0067D4,
    &sHorseZeldaSkelLimb_0067E4,
    &sHorseZeldaSkelLimb_0067F4,
    &sHorseZeldaSkelLimb_006804,
    &sHorseZeldaSkelLimb_006814,
    &sHorseZeldaSkelLimb_006824,
    &sHorseZeldaSkelLimb_006834,
    &sHorseZeldaSkelLimb_006844,
    &sHorseZeldaSkelLimb_006854,
    &sHorseZeldaSkelLimb_006864,
    &sHorseZeldaSkelLimb_006874,
    &sHorseZeldaSkelLimb_006884,
    &sHorseZeldaSkelLimb_006894,
    &sHorseZeldaSkelLimb_0068A4,
    &sHorseZeldaSkelLimb_0068B4,
    &sHorseZeldaSkelLimb_0068C4,
    &sHorseZeldaSkelLimb_0068D4,
    &sHorseZeldaSkelLimb_0068E4,
    &sHorseZeldaSkelLimb_0068F4,
    &sHorseZeldaSkelLimb_006904,
    &sHorseZeldaSkelLimb_006914,
    &sHorseZeldaSkelLimb_006924,
    &sHorseZeldaSkelLimb_006934,
    &sHorseZeldaSkelLimb_006944,
    &sHorseZeldaSkelLimb_006954,
    &sHorseZeldaSkelLimb_006964,
    &sHorseZeldaSkelLimb_006974,
    &sHorseZeldaSkelLimb_006984,
    &sHorseZeldaSkelLimb_006994,
    &sHorseZeldaSkelLimb_0069A4,
    &sHorseZeldaSkelLimb_0069B4,
    &sHorseZeldaSkelLimb_0069C4,
    &sHorseZeldaSkelLimb_0069D4,
    &sHorseZeldaSkelLimb_0069E4,
    &sHorseZeldaSkelLimb_0069F4,
    &sHorseZeldaSkelLimb_006A04,
    &sHorseZeldaSkelLimb_006A14,
    &sHorseZeldaSkelLimb_006A24,
    &sHorseZeldaSkelLimb_006A34,
    &sHorseZeldaSkelLimb_006A44,
    &sHorseZeldaSkelLimb_006A54,
    &sHorseZeldaSkelLimb_006A64,
}; 

SkeletonHeader gHorseZeldaSkel = { sHorseZeldaSkelLimbs, 46 }; 

static u8 unaccounted_006B34[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sHorseZeldaGallopingAnimFrameData[630] = {
    0x0000, 0xF853, 0x4000, 0x8507, 0xFF98, 0x8C17, 0x01A1, 0x01C6, 0x0225, 0x02A6, 0x0334, 0x03B6, 0x0416, 0x042A, 
    0x03EE, 0x038B, 0x0317, 0x029F, 0x022C, 0x01C9, 0x0177, 0x0132, 0x00FD, 0x00D9, 0x00CB, 0x00D8, 0x00FD, 0x012F, 
    0x0163, 0x018C, 0x1306, 0x1313, 0x133C, 0x1389, 0x1414, 0x14BF, 0x153A, 0x1551, 0x152E, 0x14EF, 0x14A0, 0x145E, 
    0x1434, 0x1419, 0x1403, 0x13F9, 0x13F4, 0x13DC, 0x1351, 0x1322, 0x1301, 0x1352, 0x139A, 0x1359, 0xEAE8, 0xEA95, 
    0xEA43, 0xEAE8, 0xED21, 0xF03B, 0xF337, 0xF518, 0xF59F, 0xF553, 0xF45B, 0xF2DE, 0xEEF6, 0xEAE8, 0xE9E6, 0xEAE8, 
    0xEE3B, 0xF276, 0xF518, 0xF5C3, 0xF5D1, 0xF550, 0xF44F, 0xF2DE, 0x0948, 0x06A1, 0x004B, 0xF8B8, 0xF258, 0xEF9D, 
    0xF19A, 0xF6B0, 0xFD3F, 0x03A8, 0x084B, 0x0AC2, 0x0B4E, 0x0948, 0x034F, 0xFABD, 0xF306, 0xEF9D, 0xF189, 0xF680, 
    0xFCF9, 0x036B, 0x084B, 0x09C5, 0xF153, 0xF101, 0xF02C, 0xEF08, 0xEDC9, 0xECA2, 0xEBC7, 0xEB53, 0xEB24, 0xEB0F, 
    0xEAED, 0xEAA2, 0xEA3C, 0xE9CB, 0xE95F, 0xE909, 0xE8D8, 0xE8DD, 0xE929, 0xEA0D, 0xEB97, 0xED6F, 0xEF3C, 0xF0A4, 
    0xEBF8, 0xECEE, 0xEF78, 0xF30F, 0xF72C, 0xFB49, 0xFEE0, 0x016A, 0x0260, 0x0221, 0x016F, 0x0059, 0xFEF1, 0xFD46, 
    0xFB68, 0xF969, 0xF758, 0xF546, 0xF343, 0xF15F, 0xEFAA, 0xEE36, 0xED11, 0xEC4D, 0xF983, 0xF948, 0xF8AF, 0xF7D6, 
    0xF6DD, 0xF5E4, 0xF50B, 0xF471, 0xF437, 0xF446, 0xF470, 0xF4B2, 0xF507, 0xF56C, 0xF5DC, 0xF655, 0xF6D2, 0xF750, 
    0xF7C9, 0xF83C, 0xF8A3, 0xF8FB, 0xF940, 0xF96F, 0x41A3, 0x409B, 0x3DDF, 0x39FF, 0x3586, 0x3104, 0x2D05, 0x2A18, 
    0x28C9, 0x28EE, 0x29E3, 0x2B80, 0x2D9E, 0x3012, 0x32B6, 0x3561, 0x37EC, 0x3A2D, 0x3BFC, 0x3D77, 0x3ECA, 0x3FEA, 
    0x40CB, 0x4162, 0xA052, 0x9BA3, 0x968B, 0x98A1, 0x9D10, 0xA10F, 0xA606, 0xAE2C, 0xB449, 0xB256, 0xACF4, 0xA729, 
    0xA0B8, 0x9A9E, 0x968B, 0x9910, 0x9BD7, 0x9B47, 0x9A36, 0x9AA7, 0x9B77, 0x9C04, 0x9C94, 0x9D78, 0xF592, 0xFF9E, 
    0x0D70, 0x114E, 0x13B8, 0x1A39, 0x1FF1, 0x2012, 0x1FF1, 0x2544, 0x2A21, 0x2AD2, 0x29FA, 0x2817, 0x212A, 0x0F96, 
    0xFF59, 0xF8A5, 0xF592, 0xF292, 0xF0C8, 0xEFA4, 0xEF05, 0xEF75, 0x0F33, 0x08F5, 0x00F0, 0x0046, 0x00F0, 0xFEE0, 
    0xFD45, 0xFEA5, 0x00F0, 0x00B4, 0x049B, 0x11DF, 0x22D0, 0x3376, 0x4150, 0x43BD, 0x43C2, 0x449E, 0x43C2, 0x3EBE, 
    0x3873, 0x3438, 0x301D, 0x28DE, 0x1B48, 0x1A94, 0x184B, 0x1462, 0x0EA7, 0x05AC, 0xFD22, 0xF65C, 0xF705, 0x0C25, 
    0x20FD, 0x2466, 0x2238, 0x20FD, 0x26B1, 0x2DF1, 0x3423, 0x36A4, 0x37CE, 0x398B, 0x3A7C, 0x3B74, 0x3BD4, 0x37CE, 
    0x9348, 0x91DB, 0x9006, 0x8F1B, 0x9006, 0x94E3, 0x9B6F, 0xA30C, 0xA8E1, 0xA7CA, 0xA606, 0xA7DB, 0xAAE7, 0xAF65, 
    0xBB36, 0xB328, 0xA8E1, 0xA40A, 0xA0BA, 0x9D7F, 0x9A9E, 0x97A1, 0x94BB, 0x9278, 0x03D4, 0x01AA, 0xFFC1, 0x02AF, 
    0x05DE, 0x053B, 0x03D4, 0x0295, 0x03D4, 0x0C97, 0x15C2, 0x1A26, 0x1CE9, 0x1E50, 0x1904, 0x2037, 0x2676, 0x22AB, 
    0x1C46, 0x188D, 0x14F1, 0x1085, 0x0BE2, 0x077F, 0x3517, 0x2E6B, 0x22C1, 0x1793, 0x0D29, 0x05E1, 0x00F0, 0xFEF3, 
    0xFE16, 0xFC61, 0xFAD3, 0xF99C, 0xF894, 0xF7F9, 0xF99A, 0x0B35, 0x1E46, 0x2C88, 0x3859, 0x42E4, 0x4976, 0x4B13, 
    0x4A28, 0x469C, 0x23D7, 0x266A, 0x2BB0, 0x2FFE, 0x2FA8, 0x27DB, 0x1B2B, 0x0E01, 0x04C5, 0x02C6, 0x0526, 0x0713, 
    0x0772, 0x0535, 0xF821, 0xF282, 0x072E, 0x245A, 0x3618, 0x3896, 0x367E, 0x3198, 0x2BAC, 0x2684, 0xA65D, 0xAA36, 
    0xB024, 0xB4BA, 0xB712, 0xB387, 0xAEEC, 0xAE21, 0xAD4A, 0xA994, 0xA4BC, 0x9FA6, 0x9A53, 0x9540, 0x9196, 0x8F93, 
    0x8DEB, 0x8B93, 0x8AA9, 0x8D4B, 0x9266, 0x99E3, 0xA25A, 0xA8FE, 0x40C1, 0x40F6, 0x412A, 0x40A1, 0x40C1, 0x43C3, 
    0x4676, 0x453D, 0x439C, 0x44ED, 0x460D, 0x451C, 0x4369, 0x412A, 0x3C46, 0x371F, 0x3216, 0x2C3B, 0x2920, 0x2E9C, 
    0x34F1, 0x356D, 0x3459, 0x3520, 0xD786, 0xDAA1, 0xE19B, 0xE8F1, 0xED1E, 0xE82D, 0xE014, 0xDCE5, 0xD98F, 0xD226, 
    0xCB4C, 0xC7E1, 0xC5D2, 0xC530, 0xCBB5, 0xD083, 0xD5E4, 0xDF57, 0xE699, 0xE3A8, 0xDF43, 0xE096, 0xE348, 0xE3BF, 
    0x03AB, 0x09EE, 0x1530, 0x2121, 0x2B99, 0x2F8B, 0x314D, 0x341A, 0x3630, 0x367F, 0x3630, 0x36C7, 0x375E, 0x3630, 
    0x2B99, 0x263B, 0x230A, 0x236C, 0x2372, 0x1EBA, 0x180A, 0x1074, 0x086E, 0x020A, 0x9BC5, 0x9DC2, 0xA17A, 0xA54B, 
    0xA9A0, 0xAF06, 0xB367, 0xB465, 0xB367, 0xB074, 0xAD4A, 0xAC20, 0xAB74, 0xA9A0, 0xA17A, 0x9C8D, 0x9953, 0x98F2, 
    0x9953, 0x984D, 0x974A, 0x96BA, 0x9666, 0x96E2, 0x31B5, 0x315A, 0x321D, 0x36D3, 0x3AAC, 0x36D3, 0x3427, 0x3CCF, 
    0x4614, 0x4672, 0x4473, 0x43F7, 0x438D, 0x42D2, 0x4060, 0x3E93, 0x3BE5, 0x369F, 0x3014, 0x2856, 0x2169, 0x1D77, 
    0x1C1D, 0x21FB, 0xD397, 0xD1A7, 0xD125, 0xD6E6, 0xDEFF, 0xE9D2, 0xEF4C, 0xE1CC, 0xD25E, 0xD24D, 0xD32F, 0xCBCD, 
    0xC1F4, 0xB8B3, 0xB367, 0xB4C7, 0xB77A, 0xB95C, 0xBC5E, 0xC285, 0xC967, 0xCFD6, 0xD603, 0xDA1C, 0xFC55, 0xFC48, 
    0xFC57, 0xFCD5, 0xFD37, 0xFCC0, 0xFC57, 0xFCF6, 0xFDB0, 0xFDC6, 0xFDB0, 0xFDB0, 0xFDB0, 0xFDB0, 0xFDB0, 0xFDBA, 
    0xFDB0, 0xFD5F, 0xFD0E, 0xFD04, 0xFD0E, 0xFD18, 0xFD22, 0xFD0E, 0x0000, 0x000A, 0xFFC8, 0xFE8C, 0xFD9D, 0xFE5E, 
    0xFFC8, 0x0173, 0x02D9, 0x030A, 0x02D9, 0x02D9, 0x02D9, 0x02D9, 0x02D9, 0x02E4, 0x02D9, 0x0285, 0x0230, 0x0226, 
    0x0230, 0x024E, 0x026C, 0x0230, 0x1C1D, 0x1CB3, 0x19AE, 0x0AAB, 0xFF44, 0x0869, 0x19AE, 0x2EA3, 0x404B, 0x42B5, 
    0x404B, 0x404B, 0x404B, 0x404B, 0x404B, 0x40EE, 0x404B, 0x3B34, 0x361C, 0x3579, 0x361C, 0x377F, 0x38E2, 0x361C, 
    
}; 

static JointIndex sHorseZeldaGallopingAnimJointIndices[47] = {
    { 0x0000, 0x001E, 0x0001 },
    { 0x0006, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0036 },
    { 0x0000, 0x0000, 0x004E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0066 },
    { 0x0000, 0x0000, 0x007E },
    { 0x0000, 0x0000, 0x0096 },
    { 0x0000, 0x0000, 0x00AE },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0004, 0x0000 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0000, 0x0000, 0x00C6 },
    { 0x0000, 0x0000, 0x00DE },
    { 0x0000, 0x0000, 0x00F6 },
    { 0x0000, 0x0000, 0x010E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0005 },
    { 0x0000, 0x0000, 0x0126 },
    { 0x0000, 0x0000, 0x013E },
    { 0x0000, 0x0000, 0x0156 },
    { 0x0000, 0x0000, 0x016E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0186 },
    { 0x0000, 0x0000, 0x019E },
    { 0x0000, 0x0000, 0x01B6 },
    { 0x0000, 0x0000, 0x01CE },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x01E6 },
    { 0x0000, 0x0000, 0x01FE },
    { 0x0000, 0x0000, 0x0216 },
    { 0x022E, 0x0246, 0x025E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gHorseZeldaGallopingAnim = { { 24 }, sHorseZeldaGallopingAnimFrameData, sHorseZeldaGallopingAnimJointIndices, 6 }; 

static u8 unaccounted_007158[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


