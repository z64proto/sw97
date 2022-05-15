#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_zl2.h"

static Vtx sZelda2SkelVtx_006748[6];
static Vtx sZelda2SkelVtx_0067A8[7];
static Vtx sZelda2SkelVtx_006818[10];
static Vtx sZelda2SkelVtx_0068B8[3];
static Vtx sZelda2SkelVtx_0068E8[9];
static Vtx sZelda2SkelVtx_006978[3];
static Vtx sZelda2SkelVtx_0069A8[3];
static Vtx sZelda2SkelVtx_0069D8[3];
static Vtx sZelda2SkelVtx_006A08[6];
static Vtx sZelda2SkelVtx_006A68[3];
static Vtx sZelda2SkelVtx_006A98[3];
static Vtx sZelda2SkelVtx_006AC8[3];
static Vtx sZelda2SkelVtx_006AF8[4];
static Vtx sZelda2SkelVtx_006B38[3];
static Vtx sZelda2SkelVtx_006B68[4];
static Vtx sZelda2SkelVtx_006BA8[3];
static Vtx sZelda2SkelVtx_006BD8[4];
static Vtx sZelda2SkelVtx_006C18[4];
static Vtx sZelda2SkelVtx_006C58[11];
static Vtx sZelda2SkelVtx_006D08[4];
static Vtx sZelda2SkelVtx_006D48[23];
static Vtx sZelda2SkelVtx_006EB8[15];
static Vtx sZelda2SkelVtx_006FA8[3];
static Vtx sZelda2SkelVtx_006FD8[3];
static Vtx sZelda2SkelVtx_007008[5];
static Vtx sZelda2SkelVtx_007058[10];
static Vtx sZelda2SkelVtx_0070F8[3];
static Vtx sZelda2SkelVtx_007128[3];
static Vtx sZelda2SkelVtx_007158[21];
static Vtx sZelda2SkelVtx_0072A8[14];
static Vtx sZelda2SkelVtx_007388[3];
static Vtx sZelda2SkelVtx_0073B8[11];
static Vtx sZelda2SkelVtx_007468[3];
static Vtx sZelda2SkelVtx_007498[5];
static Vtx sZelda2SkelVtx_0074E8[6];
static Vtx sZelda2SkelVtx_007548[3];
static Vtx sZelda2SkelVtx_007578[3];
static Vtx sZelda2SkelVtx_0075A8[4];
static Vtx sZelda2SkelVtx_0075E8[14];
static Vtx sZelda2SkelVtx_0076C8[4];
static Vtx sZelda2SkelVtx_007708[8];
static Vtx sZelda2SkelVtx_007788[6];
static Vtx sZelda2SkelVtx_0077E8[8];
static Vtx sZelda2SkelVtx_007868[8];
static Vtx sZelda2SkelVtx_0078E8[9];
static Vtx sZelda2SkelVtx_007978[10];
static Vtx sZelda2SkelVtx_007A18[10];
static Vtx sZelda2SkelVtx_007AB8[10];
static Vtx sZelda2SkelVtx_007B58[11];
static Vtx sZelda2SkelVtx_007C08[3];
static Vtx sZelda2SkelVtx_007C38[6];
static Vtx sZelda2SkelVtx_007C98[5];
static Vtx sZelda2SkelVtx_007CE8[3];
static Vtx sZelda2SkelVtx_007D18[6];
static Vtx sZelda2SkelVtx_007D78[5];
static Vtx sZelda2SkelVtx_00A4F8[8];
static Vtx sZelda2SkelVtx_00A578[14];
static Vtx sZelda2SkelVtx_00A658[14];
static Vtx sZelda2SkelVtx_00A738[28];
static Vtx sZelda2SkelVtx_00A8F8[10];
static Vtx sZelda2SkelVtx_00A998[21];
static Vtx sZelda2SkelVtx_00AAE8[18];
static Vtx sZelda2SkelVtx_00AC08[43];
static Vtx sZelda2SkelVtx_00AEB8[27];
static Vtx object_zl2Vtx_00B998[21];
static Vtx sZelda2SkelVtx_00BC10[6];
static Vtx sZelda2SkelVtx_00BC70[12];
static Vtx sZelda2SkelVtx_00BD30[30];
static Vtx sZelda2SkelVtx_00BF10[42];
static Vtx sZelda2SkelVtx_00C1B0[4];
static Vtx sZelda2SkelVtx_00C1F0[14];
static Vtx sZelda2SkelVtx_00C2D0[10];
static Vtx sZelda2SkelVtx_00C370[31];
static Vtx sZelda2SkelVtx_00C560[27];
static Vtx sZelda2SkelVtx_00C710[6];
static Vtx sZelda2SkelVtx_00C770[6];
static Vtx sZelda2SkelVtx_00C7D0[12];
static Vtx sZelda2SkelVtx_00C890[30];
static Vtx sZelda2SkelVtx_00CA70[42];
static Vtx sZelda2SkelVtx_00CD10[4];
static Vtx sZelda2SkelVtx_00CD50[14];
static Vtx sZelda2SkelVtx_00CE30[10];
static Vtx sZelda2SkelVtx_00CED0[31];
static Vtx sZelda2SkelVtx_00D0C0[27];
static Vtx sZelda2SkelVtx_00D270[6];
static Vtx sZelda2SkelVtx_00D2D0[14];
static Vtx sZelda2SkelVtx_00D3B0[15];
static Vtx sZelda2SkelVtx_00D4A0[9];
static Vtx sZelda2SkelVtx_00D530[14];
static Vtx sZelda2SkelVtx_00D610[15];
static Vtx sZelda2SkelVtx_00D700[9];
static Vtx sZelda2SkelVtx_00D790[14];
static Vtx sZelda2SkelVtx_00D870[15];
static Vtx sZelda2SkelVtx_00D960[9];
static Vtx sZelda2SkelVtx_00D9F0[13];
static Vtx sZelda2SkelVtx_00DAC0[17];
static Vtx sZelda2SkelVtx_00DBD0[16];
static Vtx sZelda2SkelVtx_00DCD0[19];
static Vtx sZelda2SkelVtx_00DE00[31];
static Vtx sZelda2SkelVtx_00DFF0[31];
static Vtx sZelda2SkelVtx_00E1E0[31];
static Vtx sZelda2SkelVtx_00E3D0[28];
static void* sZelda2SkelLimbs[14];

u64 gZelda2_0TLUT[] = {
#include "assets/objects/object_zl2/zelda_2_0_tlut.rgb5a1.inc.c"
};

u64 gZelda2_1TLUT[] = {
#include "assets/objects/object_zl2/zelda_2_1_tlut.rgb5a1.inc.c"
};

u64 gZelda2_2TLUT[] = {
#include "assets/objects/object_zl2/zelda_2_2_tlut.rgb5a1.inc.c"
};

u64 gZelda2EyeUnusedTex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_unused.rgb5a1.inc.c"
};

u64 sZelda2SkelTex_000E00[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_000E00.ci8.inc.c"
};

u64 sZelda2SkelTex_000F00[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_000F00.ci8.inc.c"
};

u64 sZelda2SkelTex_000F40[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_000F40.ci8.inc.c"
};

u64 sZelda2SkelTex_001140[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_001140.ci8.inc.c"
};

u64 sZelda2SkelTex_001180[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_001180.ci8.inc.c"
};

u64 sZelda2SkelTex_001280[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_001280.ci8.inc.c"
};

u64 sZelda2SkelTex_0012C0[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_0012C0.ci8.inc.c"
};

u64 sZelda2SkelTex_0016C0[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_0016C0.ci8.inc.c"
};

u64 sZelda2SkelTex_001AC0[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_001AC0.ci8.inc.c"
};

u64 sZelda2SkelTex_001CC0[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_001CC0.ci8.inc.c"
};

u64 sZelda2SkelTex_0024C0[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_0024C0.ci8.inc.c"
};

u64 sZelda2SkelTex_002500[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_002500.ci8.inc.c"
};

u64 sZelda2SkelTex_002600[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_002600.ci8.inc.c"
};

u64 sZelda2SkelTex_002700[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_002700.ci8.inc.c"
};

u64 sZelda2SkelTex_002740[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_002740.ci8.inc.c"
};

u64 sZelda2SkelTex_002780[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_002780.ci8.inc.c"
};

u64 sZelda2SkelTex_002880[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_002880.ci8.inc.c"
};

u64 gZelda2TriforceTex[] = {
#include "assets/objects/object_zl2/zelda_2_triforce.rgb5a1.inc.c"
};

u64 gZelda2EyesTLUT[] = {
#include "assets/objects/object_zl2/zelda_2_eyes_tlut.rgb5a1.inc.c"
};

u64 gZelda2_3TLUT[] = {
#include "assets/objects/object_zl2/zelda_2_3_tlut.rgb5a1.inc.c"
};

u64 gZelda2MouthTLUT[] = {
#include "assets/objects/object_zl2/zelda_2_mouth_tlut.rgb5a1.inc.c"
};

u64 gZelda2_4TLUT[] = {
#include "assets/objects/object_zl2/zelda_2_4_tlut.rgb5a1.inc.c"
};

u64 gZelda2EyeOpenTex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_open.ci8.inc.c"
};

u64 sZelda2SkelTex_0034C8[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_0034C8.ci8.inc.c"
};

u64 gZelda2MouthSeriousTex[] = {
#include "assets/objects/object_zl2/zelda_2_mouth_serious.ci8.inc.c"
};

u64 sZelda2SkelTex_003908[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_003908.ci8.inc.c"
};

u64 sZelda2SkelTex_003A08[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_003A08.ci8.inc.c"
};

u64 sZelda2SkelTex_003A48[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_003A48.ci8.inc.c"
};

u64 sZelda2SkelTex_003AC8[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_003AC8.ci8.inc.c"
};

u64 sZelda2SkelTex_003B48[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_003B48.ci8.inc.c"
};

u64 gZelda2EyeHalfTex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_half.ci8.inc.c"
};

u64 gZelda2EyeShutTex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_shut.ci8.inc.c"
};

u64 sZelda2SkelTex_004448[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_004448.ci8.inc.c"
};

u64 gZelda2Eye03Tex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_03.ci8.inc.c"
};

u64 gZelda2Eye04Tex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_04.ci8.inc.c"
};

u64 gZelda2Eye05Tex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_05.ci8.inc.c"
};

u64 gZelda2Eye06Tex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_06.ci8.inc.c"
};

u64 gZelda2MouthHappyTex[] = {
#include "assets/objects/object_zl2/zelda_2_mouth_happy.ci8.inc.c"
};

u64 gZelda2MouthOpenTex[] = {
#include "assets/objects/object_zl2/zelda_2_mouth_open.ci8.inc.c"
};

u64 gZelda2Eye07Tex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_07.ci8.inc.c"
};

u64 gZelda2Eye08Tex[] = {
#include "assets/objects/object_zl2/zelda_2_eye_08.ci8.inc.c"
};

u64 sZelda2SkelTex_006548[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_006548.ci8.inc.c"
};

static Vtx sZelda2SkelVtx_006748[6] = {
    VTX(646, -297, 397, 414, -1202, 57, 221, 99, 255),
    VTX(567, 265, 409, 86, -315, 14, 22, 117, 255),
    VTX(347, 178, 376, 603, -35, 19, 13, 117, 255),
    VTX(837, 453, 0, -538, -1013, 102, 62, 0, 255),
    VTX(638, 677, 0, -172, 220, 56, 106, 0, 255),
    VTX(647, 638, 166, 1097, 256, 68, 85, 51, 255),
}; 

static Vtx sZelda2SkelVtx_0067A8[7] = {
    VTX(45, 535, 236, 1110, 1374, 225, 64, 96, 255),
    VTX(-98, 539, 127, 541, 2043, 178, 54, 72, 255),
    VTX(7, 325, 256, 1249, 1586, 184, 0, 95, 255),
    VTX(686, 469, 280, 1330, -1190, 41, 52, 100, 255),
    VTX(647, 638, 166, 572, -1121, 68, 85, 51, 255),
    VTX(533, 694, 165, 576, -446, 10, 103, 60, 255),
    VTX(638, 677, 0, -186, -1051, 56, 106, 0, 255),
}; 

static Vtx sZelda2SkelVtx_006818[10] = {
    VTX(70, 782, 0, 47, 69, 25, 53, 104, 255),
    VTX(54, 671, 60, 114, 103, 214, 90, 66, 255),
    VTX(261, 691, 0, 104, -16, 251, 119, 0, 255),
    VTX(70, 782, 0, 268, 55, 161, 53, 207, 255),
    VTX(54, 671, -60, 45, 121, 214, 90, 190, 255),
    VTX(44, 681, 0, 244, 163, 169, 82, 0, 255),
    VTX(533, 694, -165, 70, -535, 10, 103, 196, 255),
    VTX(533, 694, 0, 147, -539, 9, 119, 0, 255),
    VTX(638, 677, 0, 147, -163, 56, 106, 0, 255),
    VTX(533, 694, 165, 224, -542, 10, 103, 60, 255),
}; 

static Vtx sZelda2SkelVtx_0068B8[3] = {
    VTX(762, -433, 0, 250, -747, 84, 171, 0, 255),
    VTX(974, -121, 0, 942, 47, 119, 249, 0, 255),
    VTX(813, -92, 329, -50, -27, 83, 246, 85, 255),
}; 

static Vtx sZelda2SkelVtx_0068E8[9] = {
    VTX(393, 342, 356, 1249, 1586, 239, 50, 107, 255),
    VTX(338, 528, 286, 1207, 376, 243, 65, 100, 255),
    VTX(45, 535, 236, 1110, 1374, 225, 64, 96, 255),
    VTX(393, 342, 356, 1549, 102, 239, 50, 107, 255),
    VTX(449, 520, 298, 1559, -286, 2, 56, 106, 255),
    VTX(21, 118, 230, 1651, 342, 179, 212, 80, 255),
    VTX(298, 259, 349, 1429, 359, 250, 39, 113, 255),
    VTX(7, 325, 256, 1249, 1586, 184, 0, 95, 255),
    VTX(45, 535, 236, 1207, 376, 225, 64, 96, 255),
}; 

static Vtx sZelda2SkelVtx_006978[3] = {
    VTX(28, 2, -215, 139, 130, 160, 36, 195, 255),
    VTX(12, -80, 0, 174, 142, 139, 26, 0, 255),
    VTX(-180, 483, 0, 250, 61, 137, 241, 0, 255),
}; 

static Vtx sZelda2SkelVtx_0069A8[3] = {
    VTX(-98, 539, 127, 541, 2043, 178, 54, 72, 255),
    VTX(-171, 576, 0, -188, 2383, 157, 67, 0, 255),
    VTX(-180, 483, 0, -187, 2455, 137, 241, 0, 255),
}; 

static Vtx sZelda2SkelVtx_0069D8[3] = {
    VTX(686, 469, 280, 212, -46, 41, 52, 100, 255),
    VTX(449, 520, 298, -115, 393, 2, 56, 106, 255),
    VTX(567, 265, 409, 570, 488, 14, 22, 117, 255),
}; 

static Vtx sZelda2SkelVtx_006A08[6] = {
    VTX(686, 469, 280, 1330, -1190, 41, 52, 100, 255),
    VTX(533, 694, 165, 576, -446, 10, 103, 60, 255),
    VTX(449, 520, 298, 1559, -286, 2, 56, 106, 255),
    VTX(-180, 483, 0, -187, 2455, 137, 241, 0, 255),
    VTX(7, 325, 256, 1249, 1586, 184, 0, 95, 255),
    VTX(-98, 539, 127, 541, 2043, 178, 54, 72, 255),
}; 

static Vtx sZelda2SkelVtx_006A68[3] = {
    VTX(567, 265, 409, 86, -315, 14, 22, 117, 255),
    VTX(449, 520, 298, 97, 316, 2, 56, 106, 255),
    VTX(393, 342, 356, 367, 126, 239, 50, 107, 255),
}; 

static Vtx sZelda2SkelVtx_006A98[3] = {
    VTX(390, 52, 438, 258, 148, 48, 19, 108, 255),
    VTX(28, 2, 215, 237, 189, 160, 36, 61, 255),
    VTX(432, -193, 500, 564, 102, 3, 24, 117, 255),
}; 

static Vtx sZelda2SkelVtx_006AC8[3] = {
    VTX(567, 265, 409, 92, 546, 14, 22, 117, 255),
    VTX(813, -92, 329, 1140, 249, 83, 246, 85, 255),
    VTX(686, 469, 280, -217, 79, 41, 52, 100, 255),
}; 

static Vtx sZelda2SkelVtx_006AF8[4] = {
    VTX(45, 535, 236, 1207, 376, 225, 64, 96, 255),
    VTX(298, 259, 349, 1429, 359, 250, 39, 113, 255),
    VTX(393, 342, 356, 1549, 102, 239, 50, 107, 255),
    VTX(347, 178, 376, 1651, 342, 19, 13, 117, 255),
}; 

static Vtx sZelda2SkelVtx_006B38[3] = {
    VTX(646, -297, 397, 783, -1742, 57, 221, 99, 255),
    VTX(813, -92, 329, 120, -1522, 83, 246, 85, 255),
    VTX(567, 265, 409, 496, 72, 14, 22, 117, 255),
}; 

static Vtx sZelda2SkelVtx_006B68[4] = {
    VTX(347, 178, 376, 278, 106, 19, 13, 117, 255),
    VTX(390, 52, 438, 421, 104, 48, 19, 108, 255),
    VTX(646, -297, 397, 688, 57, 57, 221, 99, 255),
    VTX(432, -193, 500, 564, 102, 3, 24, 117, 255),
}; 

static Vtx sZelda2SkelVtx_006BA8[3] = {
    VTX(583, 696, 116, 593, 7, 29, 108, 41, 255),
    VTX(583, 696, -116, -593, 7, 29, 108, 215, 255),
    VTX(534, 753, 0, 0, 213, 0, 119, 0, 255),
}; 

static Vtx sZelda2SkelVtx_006BD8[4] = {
    VTX(533, 694, -165, 576, -446, 10, 103, 196, 255),
    VTX(647, 638, -166, 572, -1121, 68, 85, 205, 255),
    VTX(686, 469, -280, 1330, -1190, 41, 52, 156, 255),
    VTX(638, 677, 0, -186, -1051, 56, 106, 0, 255),
}; 

static Vtx sZelda2SkelVtx_006C18[4] = {
    VTX(7, 325, -256, 154, 72, 184, 0, 161, 255),
    VTX(21, 118, -230, 146, 101, 176, 232, 171, 255),
    VTX(-180, 483, 0, 250, 61, 137, 241, 0, 255),
    VTX(28, 2, -215, 139, 130, 160, 36, 195, 255),
}; 

static Vtx sZelda2SkelVtx_006C58[11] = {
    VTX(449, 520, -298, 1559, -286, 2, 56, 150, 255),
    VTX(533, 694, -165, 576, -446, 10, 103, 196, 255),
    VTX(686, 469, -280, 1330, -1190, 41, 52, 156, 255),
    VTX(338, 528, -286, 1207, 376, 243, 65, 156, 255),
    VTX(393, 342, -356, 1549, 102, 241, 54, 151, 255),
    VTX(7, 325, -256, 1249, 1586, 184, 0, 161, 255),
    VTX(-98, 539, -127, 541, 2043, 178, 54, 184, 255),
    VTX(45, 535, -236, 1110, 1374, 225, 64, 160, 255),
    VTX(-180, 483, 0, -187, 2455, 137, 241, 0, 255),
    VTX(-171, 576, 0, -188, 2383, 157, 67, 0, 255),
    VTX(393, 342, -356, 1249, 1586, 241, 54, 151, 255),
}; 

static Vtx sZelda2SkelVtx_006D08[4] = {
    VTX(437, 703, 0, 0, 628, 202, 106, 0, 255),
    VTX(583, 696, 116, 593, 7, 29, 108, 41, 255),
    VTX(534, 753, 0, 0, 213, 0, 119, 0, 255),
    VTX(583, 696, -116, 593, 7, 29, 108, 215, 255),
}; 

static Vtx sZelda2SkelVtx_006D48[23] = {
    VTX(497, 615, 250, 259, 210, 245, 58, 104, 255),
    VTX(609, 635, 208, 36, 227, 52, 76, 76, 255),
    VTX(527, 705, 194, 152, 150, 12, 108, 50, 255),
    VTX(569, 712, 110, 8, 197, 24, 115, 20, 255),
    VTX(538, 710, 149, 64, 152, 244, 119, 10, 255),
    VTX(527, 705, 194, 128, 123, 12, 108, 50, 255),
    VTX(472, 708, 72, -45, 121, 242, 118, 11, 255),
    VTX(476, 700, 195, 213, 207, 228, 103, 54, 255),
    VTX(482, 698, 148, 137, 187, 237, 118, 3, 255),
    VTX(402, 686, 158, 276, 109, 211, 97, 52, 255),
    VTX(538, 710, 149, 47, 209, 244, 119, 10, 255),
    VTX(472, 708, 72, 47, 132, 242, 118, 11, 255),
    VTX(609, 635, 208, 191, 226, 52, 76, 76, 255),
    VTX(402, 686, 158, 363, 96, 211, 97, 52, 255),
    VTX(476, 700, 195, 243, 135, 228, 103, 54, 255),
    VTX(483, 539, 275, 221, 156, 194, 60, 83, 255),
    VTX(593, 428, 329, 152, 235, 253, 18, 118, 255),
    VTX(565, 582, 305, 67, 161, 11, 63, 101, 255),
    VTX(639, 439, 310, 49, 239, 76, 43, 81, 255),
    VTX(576, 619, 223, 6, 150, 26, 105, 51, 255),
    VTX(576, 619, 223, 25, 234, 26, 105, 51, 255),
    VTX(483, 539, 275, 192, 176, 194, 60, 83, 255),
    VTX(565, 582, 305, 56, 167, 11, 63, 101, 255),
}; 

static Vtx sZelda2SkelVtx_006EB8[15] = {
    VTX(772, 456, 240, -87, -281, 90, 45, 64, 255),
    VTX(686, 469, 280, 460, 155, 41, 52, 100, 255),
    VTX(813, -92, 329, 1083, -1558, 83, 246, 85, 255),
    VTX(772, 456, 240, -4, -28, 90, 45, 64, 255),
    VTX(813, -92, 329, 673, -825, 83, 246, 85, 255),
    VTX(974, -121, 0, -803, -1640, 119, 249, 0, 255),
    VTX(974, -121, 0, -785, -1414, 119, 249, 0, 255),
    VTX(837, 453, 0, -1062, -365, 102, 62, 0, 255),
    VTX(772, 456, 240, 970, -830, 90, 45, 64, 255),
    VTX(772, 456, 240, 1440, -565, 90, 45, 64, 255),
    VTX(837, 453, 0, -538, -1013, 102, 62, 0, 255),
    VTX(647, 638, 166, 1097, 256, 68, 85, 51, 255),
    VTX(772, 456, 240, 412, -560, 90, 45, 64, 255),
    VTX(647, 638, 166, 279, 299, 68, 85, 51, 255),
    VTX(686, 469, 280, 940, 191, 41, 52, 100, 255),
}; 

static Vtx sZelda2SkelVtx_006FA8[3] = {
    VTX(130, 122, 317, 507, 0, 0, 83, 86, 255),
    VTX(-42, 193, 248, 0, 492, 0, 83, 86, 255),
    VTX(-42, 50, 386, 1013, 492, 0, 83, 86, 255),
}; 

static Vtx sZelda2SkelVtx_006FD8[3] = {
    VTX(646, -297, 397, 774, -117, 57, 221, 99, 255),
    VTX(762, -433, 0, 386, -1552, 84, 171, 0, 255),
    VTX(813, -92, 329, 122, -116, 83, 246, 85, 255),
}; 

static Vtx sZelda2SkelVtx_007008[5] = {
    VTX(639, 439, -310, 49, 239, 76, 43, 175, 255),
    VTX(593, 428, -329, 152, 235, 253, 18, 138, 255),
    VTX(565, 582, -305, 67, 161, 11, 63, 155, 255),
    VTX(576, 619, -223, 6, 150, 26, 105, 205, 255),
    VTX(483, 539, -275, 221, 156, 194, 60, 173, 255),
}; 

static Vtx sZelda2SkelVtx_007058[10] = {
    VTX(647, 638, -166, 1097, 256, 68, 85, 205, 255),
    VTX(638, 677, 0, -172, 220, 56, 106, 0, 255),
    VTX(837, 453, 0, -538, -1013, 102, 62, 0, 255),
    VTX(772, 456, -240, 1440, -565, 90, 45, 192, 255),
    VTX(686, 469, -280, 940, 191, 41, 52, 156, 255),
    VTX(647, 638, -166, 279, 299, 68, 85, 205, 255),
    VTX(772, 456, -240, 412, -560, 90, 45, 192, 255),
    VTX(393, 342, -356, 367, 126, 241, 54, 151, 255),
    VTX(449, 520, -298, 97, 316, 2, 56, 150, 255),
    VTX(567, 265, -409, 86, -315, 14, 22, 139, 255),
}; 

static Vtx sZelda2SkelVtx_0070F8[3] = {
    VTX(567, 265, -409, 570, 488, 14, 22, 139, 255),
    VTX(449, 520, -298, -115, 393, 2, 56, 150, 255),
    VTX(686, 469, -280, 212, -46, 41, 52, 156, 255),
}; 

static Vtx sZelda2SkelVtx_007128[3] = {
    VTX(686, 469, -280, -217, 79, 41, 52, 156, 255),
    VTX(813, -92, -329, 1140, 249, 83, 246, 171, 255),
    VTX(567, 265, -409, 92, 546, 14, 22, 139, 255),
}; 

static Vtx sZelda2SkelVtx_007158[21] = {
    VTX(347, 178, -376, 603, -35, 30, 10, 141, 255),
    VTX(567, 265, -409, 86, -315, 14, 22, 139, 255),
    VTX(646, -297, -397, 414, -1202, 57, 221, 157, 255),
    VTX(567, 265, -409, 496, 72, 14, 22, 139, 255),
    VTX(813, -92, -329, 120, -1522, 83, 246, 171, 255),
    VTX(646, -297, -397, 783, -1742, 57, 221, 157, 255),
    VTX(772, 456, -240, 970, -830, 90, 45, 192, 255),
    VTX(837, 453, 0, -1062, -365, 102, 62, 0, 255),
    VTX(974, -121, 0, -785, -1414, 119, 249, 0, 255),
    VTX(974, -121, 0, -803, -1640, 119, 249, 0, 255),
    VTX(813, -92, -329, 673, -825, 83, 246, 171, 255),
    VTX(772, 456, -240, -4, -28, 90, 45, 192, 255),
    VTX(813, -92, -329, -50, -27, 83, 246, 171, 255),
    VTX(974, -121, 0, 942, 47, 119, 249, 0, 255),
    VTX(762, -433, 0, 250, -747, 84, 171, 0, 255),
    VTX(813, -92, -329, 122, -116, 83, 246, 171, 255),
    VTX(762, -433, 0, 386, -1552, 84, 171, 0, 255),
    VTX(646, -297, -397, 774, -117, 57, 221, 157, 255),
    VTX(813, -92, -329, 1083, -1558, 83, 246, 171, 255),
    VTX(686, 469, -280, 460, 155, 41, 52, 156, 255),
    VTX(772, 456, -240, -87, -281, 90, 45, 192, 255),
}; 

static Vtx sZelda2SkelVtx_0072A8[14] = {
    VTX(-180, 483, 0, 250, 61, 137, 241, 0, 255),
    VTX(21, 118, 230, 146, 101, 179, 212, 80, 255),
    VTX(7, 325, 256, 154, 72, 184, 0, 95, 255),
    VTX(28, 2, 215, 139, 130, 160, 36, 61, 255),
    VTX(12, -80, 0, 174, 142, 139, 26, 0, 255),
    VTX(28, 2, 215, 564, 89, 160, 36, 61, 255),
    VTX(390, 52, 438, 38, 182, 48, 19, 108, 255),
    VTX(21, 118, 230, 502, -59, 179, 212, 80, 255),
    VTX(390, 52, 438, 390, 5, 48, 19, 108, 255),
    VTX(347, 178, 376, -204, -241, 19, 13, 117, 255),
    VTX(298, 259, 349, -577, -497, 250, 39, 113, 255),
    VTX(390, 52, 438, 328, -332, 48, 19, 108, 255),
    VTX(298, 259, 349, 175, -414, 250, 39, 113, 255),
    VTX(467, 10, 708, 179, 31, 77, 220, 84, 255),
}; 

static Vtx sZelda2SkelVtx_007388[3] = {
    VTX(298, 259, 349, -174, 223, 250, 39, 113, 255),
    VTX(21, 118, 230, 402, 632, 191, 65, 76, 255),
    VTX(467, 10, 708, 527, -110, 77, 220, 84, 255),
}; 

static Vtx sZelda2SkelVtx_0073B8[11] = {
    VTX(21, 118, 230, 666, -1011, 179, 212, 80, 255),
    VTX(390, 52, 438, 328, -332, 48, 19, 108, 255),
    VTX(467, 10, 708, 179, 31, 77, 220, 84, 255),
    VTX(21, 118, -230, 502, -59, 176, 232, 171, 255),
    VTX(390, 52, -438, 38, 182, 193, 255, 154, 255),
    VTX(28, 2, -215, 564, 89, 160, 36, 195, 255),
    VTX(467, 10, -708, 179, 31, 243, 138, 15, 255),
    VTX(390, 52, -438, 328, -332, 98, 24, 191, 255),
    VTX(21, 118, -230, 666, -1011, 176, 232, 171, 255),
    VTX(467, 10, -708, 179, 31, 44, 100, 207, 255),
    VTX(298, 259, -349, 175, -414, 0, 43, 145, 255),
}; 

static Vtx sZelda2SkelVtx_007468[3] = {
    VTX(467, 10, -708, 527, -110, 44, 100, 207, 255),
    VTX(21, 118, -230, 402, 632, 176, 232, 171, 255),
    VTX(298, 259, -349, -174, 223, 0, 43, 145, 255),
}; 

static Vtx sZelda2SkelVtx_007498[5] = {
    VTX(7, 325, -256, 1249, 1586, 184, 0, 161, 255),
    VTX(298, 259, -349, 1429, 359, 0, 43, 145, 255),
    VTX(21, 118, -230, 1651, 342, 176, 232, 171, 255),
    VTX(45, 535, -236, 1207, 376, 225, 64, 160, 255),
    VTX(393, 342, -356, 1549, 102, 241, 54, 151, 255),
}; 

static Vtx sZelda2SkelVtx_0074E8[6] = {
    VTX(646, -297, -397, 688, 57, 57, 221, 157, 255),
    VTX(390, 52, -438, 421, 104, 98, 24, 191, 255),
    VTX(347, 178, -376, 278, 106, 30, 10, 141, 255),
    VTX(432, -193, -500, 564, 102, 3, 24, 139, 255),
    VTX(28, 2, -215, 237, 189, 160, 36, 195, 255),
    VTX(390, 52, -438, 258, 148, 193, 255, 154, 255),
}; 

static Vtx sZelda2SkelVtx_007548[3] = {
    VTX(298, 259, -349, -577, -497, 0, 43, 145, 255),
    VTX(347, 178, -376, -204, -241, 30, 10, 141, 255),
    VTX(390, 52, -438, 390, 5, 98, 24, 191, 255),
}; 

static Vtx sZelda2SkelVtx_007578[3] = {
    VTX(-42, 50, -386, 1013, 492, 0, 83, 170, 255),
    VTX(-42, 193, -248, 0, 492, 0, 83, 170, 255),
    VTX(130, 122, -317, 507, 0, 0, 83, 170, 255),
}; 

static Vtx sZelda2SkelVtx_0075A8[4] = {
    VTX(482, 698, 148, 137, 187, 237, 118, 3, 255),
    VTX(527, 705, 194, 130, 208, 12, 108, 50, 255),
    VTX(538, 710, 149, 47, 209, 244, 119, 10, 255),
    VTX(476, 700, 195, 213, 207, 228, 103, 54, 255),
}; 

static Vtx sZelda2SkelVtx_0075E8[14] = {
    VTX(565, 582, -305, 56, 167, 11, 63, 155, 255),
    VTX(483, 539, -275, 192, 176, 194, 60, 173, 255),
    VTX(576, 619, -223, 25, 234, 26, 105, 205, 255),
    VTX(402, 686, -158, 276, 109, 211, 97, 204, 255),
    VTX(482, 698, -148, 137, 187, 237, 118, 253, 255),
    VTX(476, 700, -195, 213, 207, 228, 103, 202, 255),
    VTX(538, 710, -149, 64, 152, 244, 119, 246, 255),
    VTX(472, 708, -72, -45, 121, 242, 118, 245, 255),
    VTX(569, 712, -110, 8, 197, 24, 115, 236, 255),
    VTX(472, 708, -72, 47, 132, 242, 118, 245, 255),
    VTX(538, 710, -149, 47, 209, 244, 119, 246, 255),
    VTX(476, 700, -195, 243, 135, 228, 103, 202, 255),
    VTX(497, 615, -250, 259, 210, 245, 58, 152, 255),
    VTX(402, 686, -158, 363, 96, 211, 97, 204, 255),
}; 

static Vtx sZelda2SkelVtx_0076C8[4] = {
    VTX(527, 705, -194, 130, 208, 12, 108, 206, 255),
    VTX(476, 700, -195, 213, 207, 228, 103, 202, 255),
    VTX(482, 698, -148, 137, 187, 237, 118, 253, 255),
    VTX(538, 710, -149, 47, 209, 244, 119, 246, 255),
}; 

static Vtx sZelda2SkelVtx_007708[8] = {
    VTX(476, 700, -195, 243, 135, 228, 103, 202, 255),
    VTX(527, 705, -194, 152, 150, 12, 108, 206, 255),
    VTX(497, 615, -250, 259, 210, 245, 58, 152, 255),
    VTX(569, 712, -110, 8, 197, 24, 115, 236, 255),
    VTX(609, 635, -208, 191, 226, 52, 76, 180, 255),
    VTX(527, 705, -194, 128, 123, 12, 108, 206, 255),
    VTX(538, 710, -149, 64, 152, 244, 119, 246, 255),
    VTX(609, 635, -208, 36, 227, 52, 76, 180, 255),
}; 

static Vtx sZelda2SkelVtx_007788[6] = {
    VTX(261, 691, 0, 104, -16, 251, 119, 0, 255),
    VTX(54, 671, -60, 114, 103, 214, 90, 190, 255),
    VTX(70, 782, 0, 47, 69, 161, 53, 207, 255),
    VTX(44, 681, 0, 244, 163, 169, 82, 0, 255),
    VTX(54, 671, 60, 45, 121, 214, 90, 66, 255),
    VTX(70, 782, 0, 268, 55, 161, 53, 207, 255),
}; 

static Vtx sZelda2SkelVtx_0077E8[8] = {
    VTX(261, 691, 0, -83, 586, 251, 119, 0, 255),
    VTX(533, 694, 0, 6, -334, 9, 119, 0, 255),
    VTX(533, 694, -165, 557, -395, 10, 103, 196, 255),
    VTX(338, 528, -286, 1090, 359, 243, 65, 156, 255),
    VTX(449, 520, -298, 1177, -13, 2, 56, 150, 255),
    VTX(315, 640, -173, 573, 385, 233, 98, 192, 255),
    VTX(45, 535, -236, 816, 1359, 225, 64, 160, 255),
    VTX(54, 671, -60, 71, 1277, 214, 90, 190, 255),
}; 

static Vtx sZelda2SkelVtx_007868[8] = {
    VTX(533, 694, 165, 557, -395, 10, 103, 60, 255),
    VTX(533, 694, 0, 6, -334, 9, 119, 0, 255),
    VTX(261, 691, 0, -83, 586, 251, 119, 0, 255),
    VTX(449, 520, 298, 1177, -13, 2, 56, 106, 255),
    VTX(338, 528, 286, 1090, 359, 243, 65, 100, 255),
    VTX(315, 640, 173, 573, 385, 233, 98, 64, 255),
    VTX(45, 535, 236, 816, 1359, 225, 64, 96, 255),
    VTX(54, 671, 60, 71, 1277, 214, 90, 66, 255),
}; 

static Vtx sZelda2SkelVtx_0078E8[9] = {
    VTX(54, 671, -60, 254, 108, 214, 90, 190, 255),
    VTX(-98, 539, -127, -29, 925, 178, 54, 184, 255),
    VTX(-16, 661, 0, 512, 485, 203, 107, 0, 255),
    VTX(54, 671, 60, 770, 108, 214, 90, 66, 255),
    VTX(44, 681, 0, 512, 162, 169, 82, 0, 255),
    VTX(-171, 576, 0, 512, 1318, 157, 67, 0, 255),
    VTX(-98, 539, 127, 1053, 925, 178, 54, 72, 255),
    VTX(45, 535, 236, 1602, 155, 225, 64, 96, 255),
    VTX(45, 535, -236, -578, 155, 225, 64, 160, 255),
}; 

static Vtx sZelda2SkelVtx_007978[10] = {
    VTX(12, -80, 0, 687, 274, 139, 26, 0, 255),
    VTX(28, 2, 215, 237, 189, 160, 36, 61, 255),
    VTX(28, 2, 215, 548, 280, 160, 36, 61, 255),
    VTX(432, -193, 500, 564, 102, 3, 24, 117, 255),
    VTX(646, -297, 397, 688, 57, 57, 221, 99, 255),
    VTX(762, -433, 0, 1167, 36, 84, 171, 0, 255),
    VTX(646, -297, -397, 688, 57, 57, 221, 157, 255),
    VTX(432, -193, -500, 564, 102, 3, 24, 139, 255),
    VTX(28, 2, -215, 237, 189, 160, 36, 195, 255),
    VTX(28, 2, -215, 548, 280, 160, 36, 195, 255),
}; 

static Vtx sZelda2SkelVtx_007A18[10] = {
    VTX(-315, 77, 0, 687, 233, 191, 100, 0, 255),
    VTX(-296, 155, 400, 446, 231, 214, 98, 54, 255),
    VTX(-296, 155, 400, 425, 240, 214, 98, 54, 255),
    VTX(-100, 40, 510, 578, 190, 12, 2, 119, 255),
    VTX(50, -98, 443, 709, 161, 26, 184, 92, 255),
    VTX(220, -250, 0, 1167, 127, 38, 143, 0, 255),
    VTX(50, -98, -443, 709, 161, 26, 184, 164, 255),
    VTX(-100, 40, -510, 578, 190, 12, 2, 137, 255),
    VTX(-296, 155, -400, 446, 231, 214, 98, 202, 255),
    VTX(-296, 155, -400, 425, 240, 214, 98, 202, 255),
}; 

static Vtx sZelda2SkelVtx_007AB8[10] = {
    VTX(-157, 232, 201, 444, 175, 218, 112, 19, 255),
    VTX(-27, 112, 588, 610, 274, 254, 46, 110, 255),
    VTX(-27, 112, 588, 328, 199, 254, 46, 110, 255),
    VTX(24, -37, 467, 733, 268, 49, 180, 78, 255),
    VTX(100, -250, 0, 1167, 259, 57, 151, 0, 255),
    VTX(24, -37, -467, 733, 268, 49, 180, 178, 255),
    VTX(-27, 112, -588, 610, 274, 254, 46, 146, 255),
    VTX(-27, 112, -588, 328, 199, 254, 46, 146, 255),
    VTX(-157, 232, -201, 687, 173, 218, 112, 237, 255),
    VTX(-157, 232, -201, 444, 175, 218, 112, 237, 255),
}; 

static Vtx sZelda2SkelVtx_007B58[11] = {
    VTX(0, 0, 0, 566, -28, 158, 68, 247, 255),
    VTX(0, 0, 0, 706, 512, 158, 68, 247, 255),
    VTX(0, 0, 0, 965, 512, 181, 169, 34, 255),
    VTX(0, 0, 0, 374, -28, 158, 68, 247, 255),
    VTX(655, -14, 714, 651, 359, 242, 39, 112, 255),
    VTX(655, -14, 714, 304, 118, 242, 39, 112, 255),
    VTX(579, -239, 652, 762, 386, 242, 182, 92, 255),
    VTX(671, -577, 0, 1167, 379, 25, 139, 0, 255),
    VTX(579, -239, -652, 762, 386, 242, 182, 164, 255),
    VTX(655, -14, -714, 304, 118, 242, 39, 144, 255),
    VTX(655, -14, -714, 651, 359, 242, 39, 144, 255),
}; 

static Vtx sZelda2SkelVtx_007C08[3] = {
    VTX(393, 342, 356, 368, -368, 239, 50, 107, 255),
    VTX(567, 265, 409, 540, 108, 14, 22, 117, 255),
    VTX(347, 178, 376, 735, -493, 19, 13, 117, 255),
}; 

static Vtx sZelda2SkelVtx_007C38[6] = {
    VTX(-13, 24, -32, 429, -1372, 254, 108, 51, 255),
    VTX(-13, 24, -32, -370, -44, 254, 108, 51, 255),
    VTX(0, 0, 20, 445, -1336, 13, 43, 111, 255),
    VTX(0, 0, 20, -329, -43, 13, 43, 111, 255),
    VTX(-29, -46, 9, 559, -1417, 30, 212, 107, 255),
    VTX(-29, -46, 9, -264, -56, 30, 212, 107, 255),
}; 

static Vtx sZelda2SkelVtx_007C98[5] = {
    VTX(0, 0, 0, -353, -167, 206, 92, 58, 255),
    VTX(248, 58, -29, -386, -95, 22, 95, 69, 255),
    VTX(260, 4, 20, -298, -97, 39, 43, 104, 255),
    VTX(127, 118, -77, -509, -121, 246, 104, 58, 255),
    VTX(135, 92, -29, -506, -118, 2, 98, 68, 255),
}; 

static Vtx sZelda2SkelVtx_007CE8[3] = {
    VTX(393, 342, -356, 368, -368, 241, 54, 151, 255),
    VTX(567, 265, -409, 540, 108, 14, 22, 139, 255),
    VTX(347, 178, -376, 735, -493, 30, 10, 141, 255),
}; 

static Vtx sZelda2SkelVtx_007D18[6] = {
    VTX(-13, 24, 32, 429, -1372, 254, 108, 205, 255),
    VTX(-13, 24, 32, -370, -44, 254, 108, 205, 255),
    VTX(0, 0, -20, 445, -1336, 13, 43, 145, 255),
    VTX(0, 0, -20, -329, -43, 13, 43, 145, 255),
    VTX(-29, -46, -9, 559, -1417, 30, 212, 149, 255),
    VTX(-29, -46, -9, -264, -56, 30, 212, 149, 255),
}; 

static Vtx sZelda2SkelVtx_007D78[5] = {
    VTX(0, 0, 0, -353, -167, 206, 92, 198, 255),
    VTX(248, 58, 29, -386, -95, 22, 95, 187, 255),
    VTX(260, 4, -20, -298, -97, 39, 43, 152, 255),
    VTX(127, 118, 77, -509, -121, 246, 104, 198, 255),
    VTX(135, 92, 29, -506, -118, 2, 98, 188, 255),
}; 

Gfx sZelda2SkelLimbDL_007DC8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0, LOD_FRACTION, 
                       0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sZelda2SkelVtx_006748[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gZelda2EyeOpenTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPVertex(&sZelda2SkelVtx_0067A8[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_0034C8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_3TLUT),
    gsSPVertex(&sZelda2SkelVtx_006818[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsSPVertex(&sZelda2SkelVtx_0068B8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gZelda2EyeOpenTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPVertex(&sZelda2SkelVtx_0068E8[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 8, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_0034C8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_3TLUT),
    gsSPVertex(&sZelda2SkelVtx_006978[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gZelda2EyeOpenTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPVertex(&sZelda2SkelVtx_0069A8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_004448, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsSPVertex(&sZelda2SkelVtx_0069D8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gZelda2EyeOpenTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPVertex(&sZelda2SkelVtx_006A08[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsSPVertex(&sZelda2SkelVtx_006A68[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003A48, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_006A98[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_006548, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_006AC8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gZelda2EyeOpenTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPVertex(&sZelda2SkelVtx_006AF8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsSPVertex(&sZelda2SkelVtx_006B38[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003A48, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_006B68[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003B48, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_006BA8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gZelda2EyeOpenTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_006BD8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_0034C8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_3TLUT),
    gsSPVertex(&sZelda2SkelVtx_006C18[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gZelda2EyeOpenTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPVertex(&sZelda2SkelVtx_006C58[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 6, 5, 8, 0),
    gsSP2Triangles(8, 9, 6, 0, 7, 3, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003B48, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_006D08[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003A08, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_006D48[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 8, 0, 5, 12, 3, 0),
    gsSP2Triangles(13, 0, 14, 0, 0, 2, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 18, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 17, 16, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_006EB8[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gZelda2TriforceTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0, LOD_FRACTION, 
                       0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_006FA8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0, LOD_FRACTION, 
                       0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_006FD8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003A08, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_007008[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(2, 1, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_007058[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_004448, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_0070F8[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_006548, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_007128[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_007158[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_0034C8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_3TLUT),
    gsSPVertex(&sZelda2SkelVtx_0072A8[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(0, 4, 3, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003908, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_007388[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_0034C8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_0073B8[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003908, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_007468[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gZelda2EyeOpenTex, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPVertex(&sZelda2SkelVtx_007498[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(4, 1, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003A48, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsSPVertex(&sZelda2SkelVtx_0074E8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_0034C8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_3TLUT),
    gsSPVertex(&sZelda2SkelVtx_007548[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gZelda2TriforceTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0, LOD_FRACTION, 
                       0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_007578[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTextureBlock(sZelda2SkelTex_003A08, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0, LOD_FRACTION, 
                       0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_0075A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_0075E8[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 4, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_0076C8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_007708[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 1, 7, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_0034C8, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_3TLUT),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_007788[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2EyesTLUT),
    gsSPVertex(&sZelda2SkelVtx_0077E8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(0, 2, 5, 0, 0, 5, 6, 0),
    gsSP2Triangles(6, 7, 0, 0, 5, 3, 6, 0),
    gsSP1Triangle(2, 3, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(0x09000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_007868[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 0, 2, 0, 6, 5, 2, 0),
    gsSP2Triangles(2, 7, 6, 0, 6, 4, 5, 0),
    gsSP1Triangle(5, 4, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(0x0A000000, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2MouthTLUT),
    gsSPVertex(&sZelda2SkelVtx_0078E8[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(2, 4, 0, 0, 5, 2, 1, 0),
    gsSP2Triangles(6, 2, 5, 0, 2, 6, 3, 0),
    gsSP2Triangles(3, 6, 7, 0, 8, 1, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003A48, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_4TLUT),
    gsSPVertex(&sZelda2SkelVtx_007978[0], 10, 0),
    gsSPMatrix(0x0C000000, G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007A18[0], 10, 16),
    gsSP2Triangles(20, 4, 3, 0, 3, 1, 17, 0),
    gsSP2Triangles(17, 19, 3, 0, 4, 20, 21, 0),
    gsSP2Triangles(3, 19, 20, 0, 21, 5, 4, 0),
    gsSP2Triangles(6, 5, 21, 0, 22, 23, 7, 0),
    gsSP2Triangles(21, 22, 6, 0, 7, 23, 24, 0),
    gsSP2Triangles(7, 6, 22, 0, 24, 8, 7, 0),
    gsSP2Triangles(16, 18, 2, 0, 2, 0, 16, 0),
    gsSP2Triangles(16, 0, 9, 0, 9, 25, 16, 0),
    gsSPMatrix(0x0C000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007AB8[0], 10, 0),
    gsSP2Triangles(16, 8, 0, 0, 1, 19, 17, 0),
    gsSP2Triangles(3, 20, 19, 0, 18, 0, 2, 0),
    gsSP2Triangles(19, 1, 3, 0, 3, 4, 21, 0),
    gsSP2Triangles(21, 20, 3, 0, 5, 22, 21, 0),
    gsSP2Triangles(21, 4, 5, 0, 5, 6, 23, 0),
    gsSP2Triangles(7, 9, 25, 0, 23, 22, 5, 0),
    gsSP2Triangles(24, 23, 6, 0, 0, 18, 16, 0),
    gsSP1Triangle(16, 25, 9, 0),
    gsSPMatrix(0x0C000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007B58[0], 11, 16),
    gsSP2Triangles(8, 16, 0, 0, 22, 20, 17, 0),
    gsSP2Triangles(18, 23, 22, 0, 0, 19, 21, 0),
    gsSP2Triangles(20, 22, 3, 0, 3, 22, 23, 0),
    gsSP2Triangles(3, 1, 20, 0, 23, 4, 3, 0),
    gsSP2Triangles(21, 2, 0, 0, 9, 7, 25, 0),
    gsSP2Triangles(5, 4, 23, 0, 26, 6, 5, 0),
    gsSP2Triangles(23, 24, 5, 0, 5, 24, 26, 0),
    gsSP2Triangles(25, 19, 9, 0, 24, 23, 18, 0),
    gsSP1Triangle(17, 26, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003AC8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007C08[0], 3, 0),
    gsSPMatrix(0x0C0000C0, G_MTX_PUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007C38[0], 6, 16),
    gsSP2Triangles(2, 1, 18, 0, 18, 1, 0, 0),
    gsSP2Triangles(18, 20, 2, 0, 0, 16, 18, 0),
    gsSPMatrix(0x0C000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007C98[0], 5, 0),
    gsSP2Triangles(3, 0, 4, 0, 19, 17, 1, 0),
    gsSP2Triangles(21, 19, 2, 0, 1, 2, 19, 0),
    gsSP2Triangles(4, 2, 1, 0, 4, 1, 3, 0),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007CE8[0], 3, 0),
    gsSPMatrix(0x0C000140, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007D18[0], 6, 16),
    gsSP2Triangles(18, 16, 0, 0, 2, 20, 18, 0),
    gsSP2Triangles(0, 1, 18, 0, 18, 1, 2, 0),
    gsSPMatrix(0x0C000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPVertex(&sZelda2SkelVtx_007D78[0], 5, 0),
    gsSP2Triangles(3, 1, 4, 0, 1, 2, 4, 0),
    gsSP2Triangles(19, 2, 1, 0, 2, 19, 21, 0),
    gsSP2Triangles(1, 17, 19, 0, 4, 0, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gZelda2_5TLUT[] = {
#include "assets/objects/object_zl2/zelda_2_5_tlut.rgb5a1.inc.c"
};

u64 gZelda2_6TLUT[] = {
#include "assets/objects/object_zl2/zelda_2_6_tlut.rgb5a1.inc.c"
};

u64 gZelda2_7TLUT[] = {
#include "assets/objects/object_zl2/zelda_2_7_tlut.rgb5a1.inc.c"
};

u64 sZelda2SkelTex_009738[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_009738.ci8.inc.c"
};

u64 sZelda2SkelTex_009938[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_009938.ci8.inc.c"
};

u64 sZelda2SkelTex_009A38[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_009A38.ci8.inc.c"
};

u64 sZelda2SkelTex_009A78[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_009A78.ci8.inc.c"
};

u64 sZelda2SkelTex_009E78[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_009E78.ci8.inc.c"
};

u64 sZelda2SkelTex_009F78[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_009F78.ci8.inc.c"
};

u64 sZelda2SkelTex_009FF8[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_009FF8.ci8.inc.c"
};

u64 sZelda2SkelTex_00A0F8[] = {
#include "assets/objects/object_zl2/sZelda2SkelTex_00A0F8.ci8.inc.c"
};

static Vtx sZelda2SkelVtx_00A4F8[8] = {
    VTX(815, 461, 297, -7, 23, 46, 105, 35, 255),
    VTX(607, 590, 291, -172, 255, 37, 105, 44, 255),
    VTX(880, 363, 454, 441, -59, 26, 77, 88, 255),
    VTX(568, 432, 535, 552, 254, 38, 92, 66, 255),
    VTX(607, 590, -291, -172, 255, 30, 109, 217, 255),
    VTX(880, 363, -454, 441, -59, 26, 77, 168, 255),
    VTX(568, 432, -535, 552, 254, 38, 92, 190, 255),
    VTX(815, 461, -297, -7, 23, 46, 105, 221, 255),
}; 

static Vtx sZelda2SkelVtx_00A578[14] = {
    VTX(907, 448, 126, 165, 65, 72, 96, 254, 255),
    VTX(767, 525, 176, 81, 205, 39, 111, 22, 255),
    VTX(945, 376, 319, 334, 120, 89, 75, 27, 255),
    VTX(815, 461, -297, 209, 218, 46, 105, 221, 255),
    VTX(767, 525, -176, 81, 205, 41, 112, 247, 255),
    VTX(945, 376, -319, 334, 120, 89, 75, 229, 255),
    VTX(907, 448, -126, 165, 65, 68, 98, 7, 255),
    VTX(815, 461, 297, 9, 215, 46, 105, 35, 255),
    VTX(880, 363, 454, 257, 211, 26, 77, 88, 255),
    VTX(945, 376, 319, 135, 57, 89, 75, 27, 255),
    VTX(815, 461, 297, 209, 218, 46, 105, 35, 255),
    VTX(945, 376, -319, 135, 57, 89, 75, 229, 255),
    VTX(880, 363, -454, 257, 211, 26, 77, 168, 255),
    VTX(815, 461, -297, 9, 215, 46, 105, 221, 255),
}; 

static Vtx sZelda2SkelVtx_00A658[14] = {
    VTX(1531, -80, 0, 745, -429, 19, 138, 0, 255),
    VTX(1558, -10, 168, 1287, -559, 16, 186, 95, 255),
    VTX(1240, -128, 0, 683, 721, 61, 153, 0, 255),
    VTX(1177, -32, 200, 1035, 854, 89, 19, 77, 255),
    VTX(1558, -10, 168, 910, -431, 16, 186, 95, 255),
    VTX(1539, 183, 0, -32, -557, 7, 119, 0, 255),
    VTX(1036, 225, 0, -168, 1083, 92, 77, 0, 255),
    VTX(1177, -32, 200, 1345, 929, 89, 19, 77, 255),
    VTX(1558, -10, -168, 1287, -559, 16, 186, 161, 255),
    VTX(1240, -128, 0, 683, 721, 61, 153, 0, 255),
    VTX(1177, -32, -200, 1345, 929, 89, 19, 179, 255),
    VTX(1558, -10, -168, 910, -431, 16, 186, 161, 255),
    VTX(1177, -32, -200, 1035, 854, 89, 19, 179, 255),
    VTX(1036, 225, 0, -168, 1083, 92, 77, 0, 255),
}; 

static Vtx sZelda2SkelVtx_00A738[28] = {
    VTX(994, -361, 367, -16, 17, 77, 172, 37, 255),
    VTX(1135, -5, 292, -40, 486, 112, 9, 41, 255),
    VTX(1022, -27, 676, 452, 490, 44, 7, 111, 255),
    VTX(1022, -27, -676, 494, 47, 44, 7, 145, 255),
    VTX(880, 363, -454, 502, 526, 26, 77, 168, 255),
    VTX(945, 376, -319, 251, 523, 89, 75, 229, 255),
    VTX(1022, -27, 676, 35, 483, 44, 7, 111, 255),
    VTX(677, -424, 375, 481, 495, 246, 174, 86, 255),
    VTX(994, -361, 367, 528, 57, 77, 172, 37, 255),
    VTX(1022, -27, -676, 452, 490, 44, 7, 145, 255),
    VTX(1135, -5, -292, -40, 486, 112, 9, 215, 255),
    VTX(994, -361, -367, -16, 17, 84, 182, 214, 255),
    VTX(1135, -5, -292, -151, 66, 112, 9, 215, 255),
    VTX(858, 30, -454, 257, 254, 215, 4, 144, 255),
    VTX(880, 363, -454, -1, 494, 26, 77, 168, 255),
    VTX(1022, -27, -676, 505, 455, 44, 7, 145, 255),
    VTX(677, -424, -375, 516, 13, 253, 173, 170, 255),
    VTX(994, -361, -367, 528, 57, 84, 182, 214, 255),
    VTX(677, -424, -375, 481, 495, 253, 173, 170, 255),
    VTX(1022, -27, -676, 35, 483, 44, 7, 145, 255),
    VTX(677, -424, 375, 516, 13, 246, 174, 86, 255),
    VTX(1022, -27, 676, 505, 455, 44, 7, 111, 255),
    VTX(858, 30, 454, 257, 254, 215, 4, 112, 255),
    VTX(880, 363, 454, -1, 494, 26, 77, 88, 255),
    VTX(945, 376, 319, 251, 523, 89, 75, 27, 255),
    VTX(880, 363, 454, 502, 526, 26, 77, 88, 255),
    VTX(1022, -27, 676, 494, 47, 44, 7, 111, 255),
    VTX(1135, -5, 292, -151, 66, 112, 9, 41, 255),
}; 

static Vtx sZelda2SkelVtx_00A8F8[10] = {
    VTX(767, 525, -176, -900, 695, 41, 112, 247, 255),
    VTX(694, 538, -126, -644, 965, 41, 112, 3, 255),
    VTX(907, 448, -126, -644, 105, 68, 98, 7, 255),
    VTX(907, 448, 126, 644, 105, 72, 96, 254, 255),
    VTX(694, 538, 126, 644, 965, 40, 113, 5, 255),
    VTX(767, 525, 176, 900, 695, 39, 111, 22, 255),
    VTX(767, 525, -176, 900, 695, 41, 112, 247, 255),
    VTX(694, 538, -126, 644, 965, 41, 112, 3, 255),
    VTX(907, 448, -126, 644, 105, 68, 98, 7, 255),
    VTX(656, 554, 0, 0, 1117, 54, 107, 0, 255),
}; 

static Vtx sZelda2SkelVtx_00A998[21] = {
    VTX(1177, -32, -200, 175, 33, 89, 19, 179, 255),
    VTX(1240, -128, 0, 163, 207, 61, 153, 0, 255),
    VTX(994, -361, -367, 705, -22, 84, 182, 214, 255),
    VTX(1135, -5, -292, 211, -41, 112, 9, 215, 255),
    VTX(994, -361, 367, 558, 599, 77, 172, 37, 255),
    VTX(1177, -32, 200, 95, 371, 89, 19, 77, 255),
    VTX(1036, 225, 0, -262, 181, 92, 77, 0, 255),
    VTX(907, 448, 126, 204, 151, 72, 96, 254, 255),
    VTX(945, 376, 319, 83, -5, 89, 75, 27, 255),
    VTX(907, 448, -126, 174, 330, 68, 98, 7, 255),
    VTX(945, 376, -319, 8, 448, 89, 75, 229, 255),
    VTX(907, 448, -126, 174, 330, 68, 98, 7, 255),
    VTX(1036, 225, 0, -262, 181, 92, 77, 0, 255),
    VTX(1177, -32, -200, 189, 161, 89, 19, 179, 255),
    VTX(1135, -5, -292, 307, 161, 112, 9, 215, 255),
    VTX(945, 376, -319, 324, 525, 89, 75, 229, 255),
    VTX(1036, 225, 0, -83, 505, 92, 77, 0, 255),
    VTX(945, 376, 319, 324, 525, 89, 75, 27, 255),
    VTX(1135, -5, 292, 307, 161, 112, 9, 41, 255),
    VTX(1177, -32, 200, 189, 161, 89, 19, 77, 255),
    VTX(1135, -5, 292, 94, 452, 112, 9, 41, 255),
}; 

static Vtx sZelda2SkelVtx_00AAE8[18] = {
    VTX(858, 30, 454, 565, 68, 215, 4, 112, 255),
    VTX(344, 41, 466, -1, 568, 15, 12, 118, 255),
    VTX(677, -424, 375, -9, -1, 246, 174, 86, 255),
    VTX(880, 363, 454, -5, -13, 26, 77, 88, 255),
    VTX(403, 332, 442, -3, 509, 253, 30, 116, 255),
    VTX(858, 30, 454, 365, 91, 215, 4, 112, 255),
    VTX(858, 30, -454, 446, 315, 215, 4, 144, 255),
    VTX(344, 41, -466, 54, 486, 15, 12, 138, 255),
    VTX(403, 332, -442, -73, 119, 253, 30, 140, 255),
    VTX(677, -424, -375, -9, -1, 253, 173, 170, 255),
    VTX(344, 41, -466, -1, 568, 15, 12, 138, 255),
    VTX(858, 30, -454, 565, 68, 215, 4, 144, 255),
    VTX(858, 30, -454, 365, 91, 215, 4, 144, 255),
    VTX(403, 332, -442, -3, 509, 253, 30, 140, 255),
    VTX(880, 363, -454, -5, -13, 26, 77, 168, 255),
    VTX(403, 332, 442, -73, 119, 253, 30, 116, 255),
    VTX(344, 41, 466, 54, 486, 15, 12, 118, 255),
    VTX(858, 30, 454, 446, 315, 215, 4, 112, 255),
}; 

static Vtx sZelda2SkelVtx_00AC08[43] = {
    VTX(607, 590, 291, 217, 86, 37, 105, 44, 255),
    VTX(694, 538, 126, 286, 180, 40, 113, 5, 255),
    VTX(656, 554, 0, 359, 168, 54, 107, 0, 255),
    VTX(-210, 33, 0, 116, 744, 137, 248, 0, 255),
    VTX(134, 73, -539, 134, 164, 222, 254, 141, 255),
    VTX(65, -331, -339, 530, 44, 195, 163, 213, 255),
    VTX(36, 461, -386, 158, 67, 211, 67, 168, 255),
    VTX(134, 73, -539, 451, 143, 222, 254, 141, 255),
    VTX(-210, 33, 0, 176, 617, 137, 248, 0, 255),
    VTX(994, -361, 367, 158, 256, 77, 172, 37, 255),
    VTX(677, -424, 375, 156, -295, 246, 174, 86, 255),
    VTX(677, -424, -375, 352, -295, 253, 173, 170, 255),
    VTX(36, 461, 386, 207, 131, 212, 81, 76, 255),
    VTX(344, 41, 466, 284, 221, 15, 12, 118, 255),
    VTX(403, 332, 442, 154, 249, 253, 30, 116, 255),
    VTX(994, -361, -367, 350, 256, 84, 182, 214, 255),
    VTX(403, 332, -442, 154, 249, 253, 30, 140, 255),
    VTX(344, 41, -466, 284, 221, 15, 12, 138, 255),
    VTX(36, 461, -386, 207, 131, 211, 67, 168, 255),
    VTX(134, 73, 539, 451, 143, 222, 254, 115, 255),
    VTX(36, 461, 386, 158, 67, 212, 81, 76, 255),
    VTX(65, -331, 339, 530, 44, 185, 176, 54, 255),
    VTX(134, 73, 539, 134, 164, 222, 254, 115, 255),
    VTX(134, 73, -539, 270, 95, 222, 254, 141, 255),
    VTX(344, 41, -466, 239, 230, 15, 12, 138, 255),
    VTX(677, -424, -375, 439, 318, 253, 173, 170, 255),
    VTX(694, 538, -126, 286, 180, 41, 112, 3, 255),
    VTX(607, 590, -291, 217, 86, 30, 109, 217, 255),
    VTX(767, 525, -176, 247, 223, 41, 112, 247, 255),
    VTX(815, 461, -297, 170, 260, 46, 105, 221, 255),
    VTX(-210, 33, 0, 240, 846, 137, 248, 0, 255),
    VTX(36, 461, 386, 478, 133, 212, 81, 76, 255),
    VTX(36, 461, -386, 53, 146, 211, 67, 168, 255),
    VTX(-210, 33, 0, 256, 805, 137, 248, 0, 255),
    VTX(65, -331, -339, 472, 135, 195, 163, 213, 255),
    VTX(65, -331, 339, 40, 135, 185, 176, 54, 255),
    VTX(677, -424, 375, 439, 318, 246, 174, 86, 255),
    VTX(344, 41, 466, 239, 230, 15, 12, 118, 255),
    VTX(134, 73, 539, 270, 95, 222, 254, 115, 255),
    VTX(815, 461, 297, 170, 260, 46, 105, 35, 255),
    VTX(767, 525, 176, 247, 223, 39, 111, 22, 255),
    VTX(694, 538, 126, 286, 180, 40, 113, 5, 255),
    VTX(607, 590, 291, 217, 86, 37, 105, 44, 255),
}; 

static Vtx sZelda2SkelVtx_00AEB8[27] = {
    VTX(607, 590, -291, 264, 233, 30, 109, 217, 255),
    VTX(36, 461, -386, 133, 935, 211, 67, 168, 255),
    VTX(36, 461, 386, 891, 935, 212, 81, 76, 255),
    VTX(344, 41, -466, 572, 730, 15, 12, 138, 255),
    VTX(134, 73, -539, 205, 917, 222, 254, 141, 255),
    VTX(36, 461, -386, -98, 411, 211, 67, 168, 255),
    VTX(36, 461, -386, 891, 935, 211, 67, 168, 255),
    VTX(607, 590, -291, 760, 233, 30, 109, 217, 255),
    VTX(403, 332, -442, 981, 522, 253, 30, 140, 255),
    VTX(403, 332, 442, 981, 522, 253, 30, 116, 255),
    VTX(607, 590, 291, 760, 233, 37, 105, 44, 255),
    VTX(677, -424, -375, 907, 756, 253, 173, 170, 255),
    VTX(65, -331, -339, 401, 1245, 195, 163, 213, 255),
    VTX(134, 73, -539, -12, 578, 222, 254, 141, 255),
    VTX(880, 363, 454, 899, -52, 26, 77, 88, 255),
    VTX(36, 461, 386, -98, 411, 212, 81, 76, 255),
    VTX(134, 73, 539, 205, 917, 222, 254, 115, 255),
    VTX(344, 41, 466, 572, 730, 15, 12, 118, 255),
    VTX(134, 73, 539, -12, 578, 222, 254, 115, 255),
    VTX(65, -331, 339, 401, 1245, 185, 176, 54, 255),
    VTX(677, -424, 375, 907, 756, 246, 174, 86, 255),
    VTX(656, 554, 0, 512, 181, 54, 107, 0, 255),
    VTX(880, 363, -454, 899, -52, 26, 77, 168, 255),
    VTX(65, -331, -339, 946, 976, 195, 163, 213, 255),
    VTX(677, -424, -375, 992, 130, 253, 173, 170, 255),
    VTX(677, -424, 375, 32, 130, 246, 174, 86, 255),
    VTX(65, -331, 339, 78, 976, 185, 176, 54, 255),
}; 

Gfx sZelda2SkelLimbDL_00B068[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sZelda2SkelTex_009A38, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_5TLUT),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x0B000000),
    gsSPVertex(&sZelda2SkelVtx_00A4F8[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 4, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_003A08, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00A578[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(2, 1, 10, 0, 11, 12, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_009738, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_6TLUT),
    gsSPVertex(&sZelda2SkelVtx_00A658[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 6, 3, 0, 7, 2, 1, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 8, 0, 0),
    gsSP2Triangles(5, 11, 12, 0, 12, 13, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_009938, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_5TLUT),
    gsSPVertex(&sZelda2SkelVtx_00A738[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(5, 12, 3, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 21, 23, 22, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 27, 24, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_009A78, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_00A8F8[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 3, 9, 4, 0),
    gsSP2Triangles(1, 9, 2, 0, 9, 3, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_009E78, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_6TLUT),
    gsSPVertex(&sZelda2SkelVtx_00A998[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 1, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 9, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 13, 15, 0),
    gsSP2Triangles(17, 18, 19, 0, 1, 4, 2, 0),
    gsSP2Triangles(4, 5, 20, 0, 17, 19, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_009F78, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_00AAE8[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_009FF8, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadTLUT_pal256(gZelda2_7TLUT),
    gsSPVertex(&sZelda2SkelVtx_00AC08[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 11, 15, 9, 0),
    gsSP2Triangles(16, 17, 18, 0, 8, 19, 20, 0),
    gsSP2Triangles(21, 22, 3, 0, 23, 24, 25, 0),
    gsSP2Triangles(2, 26, 27, 0, 26, 28, 29, 0),
    gsSP1Triangle(27, 26, 29, 0),
    gsSPVertex(&sZelda2SkelVtx_00AC08[30], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(9, 11, 12, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sZelda2SkelTex_00A0F8, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sZelda2SkelVtx_00AEB8[0], 27, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 2, 0),
    gsSP2Triangles(11, 12, 13, 0, 2, 10, 0, 0),
    gsSP2Triangles(14, 10, 9, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 0, 10, 21, 0),
    gsSP2Triangles(8, 7, 22, 0, 23, 24, 25, 0),
    gsSP1Triangle(25, 26, 23, 0),
    gsSPEndDisplayList(),
}; 

u64 gZelda2OcarinaTex[] = {
#include "assets/objects/object_zl2/zelda_2_ocarina.rgb5a1.inc.c"
};

static Vtx object_zl2Vtx_00B998[21] = {
    VTX(581, 19, -78, 249, 172, 90, 79, 1, 255),
    VTX(639, -152, -21, 489, 344, 86, 23, 80, 255),
    VTX(678, -106, -152, 501, 85, 107, 53, 254, 255),
    VTX(615, -104, -270, 502, -41, 53, 60, 167, 255),
    VTX(742, -342, -205, 871, 139, 119, 5, 1, 255),
    VTX(414, 74, 66, 19, 470, 255, 2, 119, 255),
    VTX(299, 179, 11, -171, 396, 176, 80, 39, 255),
    VTX(319, 72, 18, -20, 473, 149, 224, 42, 255),
    VTX(464, 108, 22, 23, 342, 64, 80, 61, 255),
    VTX(515, 77, -27, 112, 254, 82, 85, 18, 255),
    VTX(386, 161, -67, -64, 229, 7, 106, 201, 255),
    VTX(482, 72, -161, 147, 86, 21, 87, 176, 255),
    VTX(672, -358, -69, 798, 405, 76, 212, 81, 255),
    VTX(573, -285, -22, 622, 493, 15, 13, 118, 255),
    VTX(466, -202, -178, 504, 281, 165, 239, 181, 255),
    VTX(465, -326, -54, 621, 558, 143, 236, 34, 255),
    VTX(397, -449, 138, 671, 988, 217, 241, 112, 255),
    VTX(516, -435, -86, 808, 556, 178, 166, 250, 255),
    VTX(603, -554, -173, 1049, 453, 208, 149, 22, 255),
    VTX(699, -369, -321, 921, 21, 32, 250, 141, 255),
    VTX(669, -544, -252, 1107, 278, 62, 164, 212, 255),
}; 

Gfx gZelda2OcarinaDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gZelda2OcarinaTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x0B000000),
    gsSPVertex(&object_zl2Vtx_00B998[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 2, 0, 4, 2, 1, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(10, 6, 8, 0, 5, 8, 6, 0),
    gsSP2Triangles(11, 9, 0, 0, 10, 9, 11, 0),
    gsSP2Triangles(12, 1, 13, 0, 11, 3, 14, 0),
    gsSP2Triangles(11, 0, 3, 0, 0, 9, 1, 0),
    gsSP2Triangles(12, 4, 1, 0, 1, 9, 8, 0),
    gsSP2Triangles(1, 8, 5, 0, 14, 10, 11, 0),
    gsSP2Triangles(1, 5, 13, 0, 15, 13, 5, 0),
    gsSP2Triangles(15, 5, 7, 0, 7, 14, 15, 0),
    gsSP2Triangles(10, 14, 6, 0, 6, 14, 7, 0),
    gsSP2Triangles(12, 13, 16, 0, 12, 16, 17, 0),
    gsSP2Triangles(17, 16, 15, 0, 15, 16, 13, 0),
    gsSP2Triangles(17, 15, 14, 0, 17, 14, 18, 0),
    gsSP2Triangles(14, 19, 20, 0, 14, 20, 18, 0),
    gsSP2Triangles(4, 19, 3, 0, 3, 19, 14, 0),
    gsSP2Triangles(12, 17, 18, 0, 12, 18, 20, 0),
    gsSP2Triangles(12, 20, 4, 0, 20, 19, 4, 0),
    gsSPEndDisplayList(),
}; 

static Vtx sZelda2SkelVtx_00BC10[6] = {
    VTX(828, 105, 23, -347, 170, 11, 119, 0, 255),
    VTX(818, -94, 8, -665, 255, 8, 137, 244, 255),
    VTX(818, 23, -67, -402, 174, 6, 15, 138, 255),
    VTX(818, 23, -67, -980, 487, 6, 15, 138, 255),
    VTX(820, 21, 103, -674, 440, 12, 4, 119, 255),
    VTX(820, 21, 103, -393, 28, 12, 4, 119, 255),
}; 

static Vtx sZelda2SkelVtx_00BC70[12] = {
    VTX(61, 19, -65, 520, 144, 246, 43, 145, 255),
    VTX(63, 20, 102, 525, 439, 235, 255, 118, 255),
    VTX(58, -95, 9, 512, 252, 224, 141, 3, 255),
    VTX(61, 19, -65, 227, 481, 246, 43, 145, 255),
    VTX(58, -95, 9, 512, 252, 224, 141, 3, 255),
    VTX(58, -95, 9, 512, 252, 224, 141, 3, 255),
    VTX(63, 20, 102, 525, 439, 235, 255, 118, 255),
    VTX(63, 20, 102, 528, 2, 235, 255, 118, 255),
    VTX(64, 108, 20, 531, 151, 240, 115, 28, 255),
    VTX(64, 108, 20, 531, 151, 240, 115, 28, 255),
    VTX(64, 108, 20, 531, 151, 240, 115, 28, 255),
    VTX(61, 19, -65, 520, 144, 246, 43, 145, 255),
}; 

static Vtx sZelda2SkelVtx_00BD30[30] = {
    VTX(381, 94, 8, 2921, 596, 19, 13, 139, 255),
    VTX(425, 25, 8, 3397, 472, 27, 222, 145, 255),
    VTX(300, -145, -25, 2559, 173, 69, 201, 176, 255),
    VTX(342, 114, 113, 2737, 606, 24, 80, 85, 255),
    VTX(327, 156, -11, 2338, 714, 6, 72, 161, 255),
    VTX(64, 108, 20, 256, 619, 240, 115, 28, 255),
    VTX(382, -102, 136, 3456, 207, 9, 163, 74, 255),
    VTX(406, -123, 6, 3469, 204, 10, 167, 177, 255),
    VTX(684, -108, -90, 5621, 256, 35, 146, 226, 255),
    VTX(556, 130, -36, 4256, 674, 30, 78, 171, 255),
    VTX(645, 67, -60, 5064, 566, 46, 110, 247, 255),
    VTX(668, 28, -61, 5316, 497, 23, 171, 176, 255),
    VTX(430, -40, 17, 3554, 351, 31, 243, 141, 255),
    VTX(695, 5, -78, 5548, 458, 43, 111, 4, 255),
    VTX(706, -42, -72, 5729, 370, 19, 166, 180, 255),
    VTX(693, -72, -86, 5646, 320, 60, 101, 21, 255),
    VTX(586, 93, -33, 4570, 606, 48, 147, 0, 255),
    VTX(432, -202, -190, 3480, 113, 65, 21, 158, 255),
    VTX(247, -214, -133, 2039, 75, 210, 148, 236, 255),
    VTX(61, 19, -65, 227, 481, 246, 43, 145, 255),
    VTX(63, 20, 102, 525, 439, 235, 255, 118, 255),
    VTX(354, 76, 145, 2951, 528, 53, 49, 95, 255),
    VTX(377, -36, 156, 3341, 320, 46, 38, 103, 255),
    VTX(364, 25, 154, 3136, 434, 53, 44, 97, 255),
    VTX(437, -224, -139, 3645, 60, 61, 172, 59, 255),
    VTX(58, -95, 9, 512, 252, 224, 141, 3, 255),
    VTX(554, -77, 46, 4711, 276, 72, 238, 93, 255),
    VTX(399, -242, -159, 3320, 32, 17, 142, 225, 255),
    VTX(579, -5, 53, 4817, 404, 63, 222, 95, 255),
    VTX(500, 65, 74, 4079, 527, 63, 27, 97, 255),
}; 

static Vtx sZelda2SkelVtx_00BF10[42] = {
    VTX(645, 67, -60, 355, 65, 46, 110, 247, 255),
    VTX(381, 94, 8, 136, 113, 19, 13, 139, 255),
    VTX(500, 65, 74, 229, 38, 63, 27, 97, 255),
    VTX(354, 76, 145, 106, 47, 53, 49, 95, 255),
    VTX(364, 25, 154, 0, 25, 53, 44, 97, 255),
    VTX(579, -5, 53, 204, 25, 63, 222, 95, 255),
    VTX(695, 5, -78, 324, 68, 43, 111, 4, 255),
    VTX(425, 25, 8, 73, 88, 27, 222, 145, 255),
    VTX(693, -72, -86, 512, 46, 60, 101, 21, 255),
    VTX(430, -40, 17, 181, 111, 31, 243, 141, 255),
    VTX(377, -36, 156, 77, 31, 46, 38, 103, 255),
    VTX(377, -36, 156, 135, 26, 46, 38, 103, 255),
    VTX(554, -77, 46, 290, 28, 72, 238, 93, 255),
    VTX(693, -72, -86, 410, 56, 60, 101, 21, 255),
    VTX(430, -40, 17, 211, 101, 31, 243, 141, 255),
    VTX(706, -42, -72, -64, 71, 19, 166, 180, 255),
    VTX(579, -5, 53, 79, 28, 63, 222, 95, 255),
    VTX(364, 25, 154, 300, 26, 53, 44, 97, 255),
    VTX(500, 65, 74, 162, 43, 63, 27, 97, 255),
    VTX(425, 25, 8, 210, 87, 27, 222, 145, 255),
    VTX(668, 28, -61, 6, 47, 23, 171, 176, 255),
    VTX(354, 76, 145, 290, 56, 53, 49, 95, 255),
    VTX(342, 114, 113, 280, 46, 24, 80, 85, 255),
    VTX(381, 94, 8, 193, 81, 19, 13, 139, 255),
    VTX(586, 93, -33, -46, 48, 48, 147, 0, 255),
    VTX(342, 114, 113, 80, -11, 24, 80, 85, 255),
    VTX(354, 76, 145, 185, -19, 53, 49, 95, 255),
    VTX(381, 94, 8, 116, 124, 19, 13, 139, 255),
    VTX(354, 76, 145, 107, -17, 53, 49, 95, 255),
    VTX(364, 25, 154, 213, -14, 53, 44, 97, 255),
    VTX(425, 25, 8, 160, 147, 27, 222, 145, 255),
    VTX(377, -36, 156, 203, 8, 46, 38, 103, 255),
    VTX(430, -40, 17, 149, 180, 31, 243, 141, 255),
    VTX(364, 25, 154, 53, -8, 53, 44, 97, 255),
    VTX(58, -95, 9, 451, 1001, 224, 141, 3, 255),
    VTX(247, -214, -133, 630, 631, 210, 148, 236, 255),
    VTX(300, -145, -25, 342, 893, 69, 201, 176, 255),
    VTX(437, -224, -139, 488, 608, 61, 172, 59, 255),
    VTX(58, -95, 9, 418, 1032, 224, 141, 3, 255),
    VTX(300, -145, -25, 309, 924, 69, 201, 176, 255),
    VTX(382, -102, 136, -91, 1275, 9, 163, 74, 255),
    VTX(406, -123, 6, 148, 1001, 10, 167, 177, 255),
}; 

static Vtx sZelda2SkelVtx_00C1B0[4] = {
    VTX(812, -126, 10, 130, 64, 13, 137, 0, 255),
    VTX(841, 21, -108, 169, 60, 8, 253, 137, 255),
    VTX(866, 170, 0, 134, 57, 3, 119, 248, 255),
    VTX(853, 31, 141, 89, 59, 12, 4, 119, 255),
}; 

static Vtx sZelda2SkelVtx_00C1F0[14] = {
    VTX(78, 11, 183, 77, 45, 252, 238, 118, 255),
    VTX(365, -110, 9, 130, 64, 4, 138, 239, 255),
    VTX(112, 24, -140, 181, 39, 254, 254, 137, 255),
    VTX(413, 24, -88, 167, 3, 9, 247, 137, 255),
    VTX(112, 24, -140, 181, 39, 254, 254, 137, 255),
    VTX(38, 199, 15, 130, 49, 244, 116, 232, 255),
    VTX(112, 24, -140, 181, 39, 254, 254, 137, 255),
    VTX(78, 11, 183, 77, 45, 252, 238, 118, 255),
    VTX(38, 199, 15, 130, 49, 244, 116, 232, 255),
    VTX(38, 199, 15, 130, 49, 244, 116, 232, 255),
    VTX(38, 199, 15, 130, 49, 244, 116, 232, 255),
    VTX(78, 11, 183, 77, 45, 252, 238, 118, 255),
    VTX(365, -110, 9, 140, -44, 4, 138, 239, 255),
    VTX(413, 24, -88, 167, 3, 9, 247, 137, 255),
}; 

static Vtx sZelda2SkelVtx_00C2D0[10] = {
    VTX(38, 199, 15, 130, 49, 244, 116, 232, 255),
    VTX(828, 105, 23, 136, -45, 11, 119, 0, 255),
    VTX(413, 24, -88, 167, 3, 9, 247, 137, 255),
    VTX(112, 24, -140, 181, 39, 254, 254, 137, 255),
    VTX(78, 11, 183, 77, 45, 252, 238, 118, 255),
    VTX(818, -94, 8, 140, -44, 8, 137, 244, 255),
    VTX(365, -110, 9, 140, -44, 4, 138, 239, 255),
    VTX(820, 21, 103, 110, -44, 12, 4, 119, 255),
    VTX(818, 23, -67, 165, -45, 6, 15, 138, 255),
    VTX(365, -110, 9, 130, 64, 4, 138, 239, 255),
}; 

static Vtx sZelda2SkelVtx_00C370[31] = {
    VTX(352, 0, -146, 202, 62, 17, 2, 138, 255),
    VTX(568, 166, 16, 115, 103, 1, 119, 250, 255),
    VTX(568, 11, -127, 193, 104, 6, 0, 137, 255),
    VTX(270, 162, 32, 104, 44, 10, 114, 223, 255),
    VTX(289, 28, 203, 11, 47, 10, 9, 119, 255),
    VTX(568, 30, 172, 30, 102, 11, 7, 119, 255),
    VTX(568, -151, 15, 115, 103, 12, 137, 1, 255),
    VTX(265, -175, 21, 110, 43, 19, 143, 223, 255),
    VTX(167, -244, -35, -23, 501, 225, 145, 226, 255),
    VTX(442, -277, 123, 515, 508, 210, 178, 77, 255),
    VTX(-7, 42, 179, -210, 54, 173, 3, 86, 255),
    VTX(375, 60, 381, 515, 17, 201, 1, 106, 255),
    VTX(398, 323, 147, 515, 508, 203, 84, 67, 255),
    VTX(-7, 42, 179, -210, 54, 173, 3, 86, 255),
    VTX(375, 60, 381, 515, 17, 201, 1, 106, 255),
    VTX(185, 281, -20, -23, 501, 233, 110, 215, 255),
    VTX(167, -244, -35, -12, 514, 225, 145, 226, 255),
    VTX(-7, 42, 179, 343, 113, 173, 3, 86, 255),
    VTX(-116, 23, -37, 512, 509, 140, 4, 27, 255),
    VTX(-116, 23, -37, 512, 509, 140, 4, 27, 255),
    VTX(-7, 42, 179, 343, 113, 173, 3, 86, 255),
    VTX(185, 281, -20, -12, 514, 233, 110, 215, 255),
    VTX(167, -244, -35, 507, 497, 225, 145, 226, 255),
    VTX(-116, 23, -37, -1, 490, 140, 4, 27, 255),
    VTX(-112, 2, -324, 494, 138, 250, 252, 137, 255),
    VTX(-112, 2, -324, 494, 138, 250, 252, 137, 255),
    VTX(-116, 23, -37, -1, 490, 140, 4, 27, 255),
    VTX(185, 281, -20, 507, 497, 233, 110, 215, 255),
    VTX(265, -175, 21, 506, 494, 82, 20, 172, 255),
    VTX(167, -244, -35, 495, 125, 225, 145, 226, 255),
    VTX(-112, 2, -324, 4, 515, 250, 252, 137, 255),
}; 

static Vtx sZelda2SkelVtx_00C560[27] = {
    VTX(-112, 2, -324, 4, 515, 250, 252, 137, 255),
    VTX(185, 281, -20, 495, 125, 233, 110, 215, 255),
    VTX(270, 162, 32, 506, 494, 87, 249, 175, 255),
    VTX(185, 281, -20, 354, 485, 233, 110, 215, 255),
    VTX(398, 323, 147, 1, 488, 96, 228, 192, 255),
    VTX(270, 162, 32, 233, 409, 87, 249, 175, 255),
    VTX(265, -175, 21, 227, 386, 82, 20, 172, 255),
    VTX(442, -277, 123, 487, 512, 71, 34, 167, 255),
    VTX(167, -244, -35, 9, 512, 225, 145, 226, 255),
    VTX(289, 28, 203, 48, 214, 107, 237, 206, 255),
    VTX(398, 323, 147, 200, 208, 96, 228, 192, 255),
    VTX(375, 60, 381, 62, 242, 102, 20, 197, 255),
    VTX(270, 162, 32, 118, 189, 87, 249, 175, 255),
    VTX(265, -175, 21, 168, 194, 82, 20, 172, 255),
    VTX(289, 28, 203, 242, 203, 107, 237, 206, 255),
    VTX(375, 60, 381, 257, 223, 102, 20, 197, 255),
    VTX(442, -277, 123, 125, 223, 71, 34, 167, 255),
    VTX(-112, 2, -324, 125, 255, 42, 4, 144, 255),
    VTX(352, 0, -146, 210, 81, 17, 2, 138, 255),
    VTX(265, -175, 21, 135, 47, 19, 143, 223, 255),
    VTX(270, 162, 32, 133, 42, 10, 114, 223, 255),
    VTX(568, 166, 16, -323, 0, 1, 119, 250, 255),
    VTX(866, 170, 0, -339, 1173, 3, 119, 248, 255),
    VTX(568, 11, -127, 341, 0, 6, 0, 137, 255),
    VTX(841, 21, -108, 298, 1073, 8, 253, 137, 255),
    VTX(812, -126, 10, 929, 957, 13, 137, 0, 255),
    VTX(568, -151, 15, 1033, 0, 12, 137, 1, 255),
}; 

static Vtx sZelda2SkelVtx_00C710[6] = {
    VTX(568, -151, 15, 9, 0, 12, 137, 1, 255),
    VTX(812, -126, 10, -94, 957, 13, 137, 0, 255),
    VTX(568, 30, 172, -764, 0, 11, 7, 119, 255),
    VTX(853, 31, 141, -770, 1121, 12, 4, 119, 255),
    VTX(866, 170, 0, -1363, 1173, 3, 119, 248, 255),
    VTX(568, 166, 16, -1347, 0, 1, 119, 250, 255),
}; 

static Vtx sZelda2SkelVtx_00C770[6] = {
    VTX(828, 105, -23, -347, 170, 11, 119, 0, 255),
    VTX(818, -94, -8, -665, 255, 8, 137, 12, 255),
    VTX(818, 23, 67, -402, 174, 6, 15, 118, 255),
    VTX(818, 23, 67, -980, 487, 6, 15, 118, 255),
    VTX(820, 21, -103, -674, 440, 12, 4, 137, 255),
    VTX(820, 21, -103, -393, 28, 12, 4, 137, 255),
}; 

static Vtx sZelda2SkelVtx_00C7D0[12] = {
    VTX(60, 19, 65, 520, 144, 246, 43, 111, 255),
    VTX(62, 20, -102, 525, 439, 235, 255, 138, 255),
    VTX(57, -95, -9, 512, 252, 224, 141, 253, 255),
    VTX(57, -95, -9, 512, 252, 224, 141, 253, 255),
    VTX(60, 19, 65, 227, 481, 246, 43, 111, 255),
    VTX(62, 20, -102, 525, 439, 235, 255, 138, 255),
    VTX(57, -95, -9, 512, 252, 224, 141, 253, 255),
    VTX(63, 108, -20, 531, 151, 240, 115, 228, 255),
    VTX(62, 20, -102, 528, 2, 235, 255, 138, 255),
    VTX(63, 108, -20, 531, 151, 240, 115, 228, 255),
    VTX(60, 19, 65, 520, 144, 246, 43, 111, 255),
    VTX(63, 108, -20, 531, 151, 240, 115, 228, 255),
}; 

static Vtx sZelda2SkelVtx_00C890[30] = {
    VTX(299, -145, 25, 2559, 173, 69, 201, 80, 255),
    VTX(423, 25, -8, 3397, 472, 27, 222, 111, 255),
    VTX(380, 94, -8, 2921, 596, 19, 13, 117, 255),
    VTX(63, 108, -20, 256, 619, 240, 115, 228, 255),
    VTX(326, 156, 11, 2338, 714, 6, 72, 95, 255),
    VTX(341, 114, -113, 2737, 606, 24, 80, 171, 255),
    VTX(683, -108, 90, 5621, 256, 35, 146, 30, 255),
    VTX(405, -123, -6, 3469, 204, 10, 167, 79, 255),
    VTX(381, -102, -136, 3456, 207, 9, 163, 182, 255),
    VTX(555, 130, 36, 4256, 674, 30, 78, 85, 255),
    VTX(667, 28, 61, 5316, 497, 23, 171, 80, 255),
    VTX(644, 67, 60, 5064, 566, 46, 110, 9, 255),
    VTX(428, -40, -17, 3554, 351, 31, 243, 115, 255),
    VTX(705, -42, 72, 5729, 370, 19, 166, 76, 255),
    VTX(693, 5, 78, 5548, 458, 43, 111, 252, 255),
    VTX(692, -72, 86, 5646, 320, 60, 101, 235, 255),
    VTX(584, 93, 33, 4570, 606, 48, 147, 0, 255),
    VTX(60, 19, 65, 227, 481, 246, 43, 111, 255),
    VTX(245, -214, 133, 2039, 75, 210, 148, 20, 255),
    VTX(431, -202, 190, 3480, 113, 65, 21, 98, 255),
    VTX(353, 76, -145, 2951, 528, 53, 49, 161, 255),
    VTX(62, 20, -102, 525, 439, 235, 255, 138, 255),
    VTX(363, 25, -154, 3136, 434, 53, 44, 159, 255),
    VTX(375, -36, -156, 3341, 320, 46, 38, 153, 255),
    VTX(436, -224, 139, 3645, 60, 61, 172, 197, 255),
    VTX(57, -95, -9, 512, 252, 224, 141, 253, 255),
    VTX(553, -77, -46, 4711, 276, 72, 238, 163, 255),
    VTX(398, -242, 159, 3320, 32, 17, 142, 31, 255),
    VTX(578, -5, -53, 4817, 404, 63, 222, 161, 255),
    VTX(499, 65, -74, 4079, 527, 63, 27, 159, 255),
}; 

static Vtx sZelda2SkelVtx_00CA70[42] = {
    VTX(499, 65, -74, 229, 38, 63, 27, 159, 255),
    VTX(380, 94, -8, 136, 113, 19, 13, 117, 255),
    VTX(644, 67, 60, 355, 65, 46, 110, 9, 255),
    VTX(353, 76, -145, 106, 47, 53, 49, 161, 255),
    VTX(693, 5, 78, 324, 68, 43, 111, 252, 255),
    VTX(578, -5, -53, 204, 25, 63, 222, 161, 255),
    VTX(363, 25, -154, 0, 25, 53, 44, 159, 255),
    VTX(423, 25, -8, 73, 88, 27, 222, 111, 255),
    VTX(375, -36, -156, 77, 31, 46, 38, 153, 255),
    VTX(428, -40, -17, 181, 111, 31, 243, 115, 255),
    VTX(692, -72, 86, 512, 46, 60, 101, 235, 255),
    VTX(692, -72, 86, 410, 56, 60, 101, 235, 255),
    VTX(553, -77, -46, 290, 28, 72, 238, 163, 255),
    VTX(375, -36, -156, 135, 26, 46, 38, 153, 255),
    VTX(578, -5, -53, 79, 28, 63, 222, 161, 255),
    VTX(705, -42, 72, -64, 71, 19, 166, 76, 255),
    VTX(428, -40, -17, 211, 101, 31, 243, 115, 255),
    VTX(363, 25, -154, 300, 26, 53, 44, 159, 255),
    VTX(667, 28, 61, 6, 47, 23, 171, 80, 255),
    VTX(423, 25, -8, 210, 87, 27, 222, 111, 255),
    VTX(499, 65, -74, 162, 43, 63, 27, 159, 255),
    VTX(353, 76, -145, 290, 56, 53, 49, 161, 255),
    VTX(584, 93, 33, -46, 48, 48, 147, 0, 255),
    VTX(380, 94, -8, 193, 81, 19, 13, 117, 255),
    VTX(341, 114, -113, 280, 46, 24, 80, 171, 255),
    VTX(380, 94, -8, 116, 124, 19, 13, 117, 255),
    VTX(353, 76, -145, 185, -19, 53, 49, 161, 255),
    VTX(341, 114, -113, 80, -11, 24, 80, 171, 255),
    VTX(423, 25, -8, 160, 147, 27, 222, 111, 255),
    VTX(363, 25, -154, 213, -14, 53, 44, 159, 255),
    VTX(353, 76, -145, 107, -17, 53, 49, 161, 255),
    VTX(363, 25, -154, 53, -8, 53, 44, 159, 255),
    VTX(428, -40, -17, 149, 180, 31, 243, 115, 255),
    VTX(375, -36, -156, 203, 8, 46, 38, 153, 255),
    VTX(299, -145, 25, 342, 893, 69, 201, 80, 255),
    VTX(245, -214, 133, 630, 631, 210, 148, 20, 255),
    VTX(57, -95, -9, 451, 1001, 224, 141, 253, 255),
    VTX(436, -224, 139, 488, 608, 61, 172, 197, 255),
    VTX(381, -102, -136, -91, 1275, 9, 163, 182, 255),
    VTX(299, -145, 25, 309, 924, 69, 201, 80, 255),
    VTX(57, -95, -9, 418, 1032, 224, 141, 253, 255),
    VTX(405, -123, -6, 148, 1001, 10, 167, 79, 255),
}; 

static Vtx sZelda2SkelVtx_00CD10[4] = {
    VTX(812, -126, -10, 130, 64, 13, 137, 0, 255),
    VTX(841, 21, 108, 169, 60, 8, 253, 119, 255),
    VTX(866, 170, 0, 134, 57, 3, 119, 8, 255),
    VTX(853, 31, -141, 89, 59, 12, 4, 137, 255),
}; 

static Vtx sZelda2SkelVtx_00CD50[14] = {
    VTX(365, -110, -9, 140, -44, 4, 138, 17, 255),
    VTX(78, 11, -183, 77, 45, 252, 238, 138, 255),
    VTX(413, 24, 88, 167, 3, 9, 247, 119, 255),
    VTX(112, 24, 140, 181, 39, 254, 254, 119, 255),
    VTX(112, 24, 140, 181, 39, 254, 254, 119, 255),
    VTX(112, 24, 140, 181, 39, 254, 254, 119, 255),
    VTX(38, 199, -15, 130, 49, 244, 116, 24, 255),
    VTX(38, 199, -15, 130, 49, 244, 116, 24, 255),
    VTX(78, 11, -183, 77, 45, 252, 238, 138, 255),
    VTX(38, 199, -15, 130, 49, 244, 116, 24, 255),
    VTX(38, 199, -15, 130, 49, 244, 116, 24, 255),
    VTX(78, 11, -183, 77, 45, 252, 238, 138, 255),
    VTX(413, 24, 88, 167, 3, 9, 247, 119, 255),
    VTX(365, -110, -9, 130, 64, 4, 138, 17, 255),
}; 

static Vtx sZelda2SkelVtx_00CE30[10] = {
    VTX(413, 24, 88, 167, 3, 9, 247, 119, 255),
    VTX(828, 105, -23, 136, -45, 11, 119, 0, 255),
    VTX(38, 199, -15, 130, 49, 244, 116, 24, 255),
    VTX(112, 24, 140, 181, 39, 254, 254, 119, 255),
    VTX(78, 11, -183, 77, 45, 252, 238, 138, 255),
    VTX(365, -110, -9, 130, 64, 4, 138, 17, 255),
    VTX(818, -94, -8, 140, -44, 8, 137, 12, 255),
    VTX(820, 21, -103, 110, -44, 12, 4, 137, 255),
    VTX(818, 23, 67, 165, -45, 6, 15, 118, 255),
    VTX(365, -110, -9, 140, -44, 4, 138, 17, 255),
}; 

static Vtx sZelda2SkelVtx_00CED0[31] = {
    VTX(568, 11, 127, 193, 104, 6, 0, 119, 255),
    VTX(568, 166, -16, 115, 103, 1, 119, 6, 255),
    VTX(352, 0, 146, 202, 62, 17, 2, 118, 255),
    VTX(270, 162, -32, 104, 44, 10, 114, 33, 255),
    VTX(289, 28, -203, 11, 47, 10, 9, 137, 255),
    VTX(568, 30, -172, 30, 102, 11, 7, 137, 255),
    VTX(265, -175, -21, 110, 43, 19, 143, 33, 255),
    VTX(568, -151, -15, 115, 103, 12, 137, 255, 255),
    VTX(-7, 42, -179, -210, 54, 173, 3, 170, 255),
    VTX(442, -277, -123, 515, 508, 210, 178, 179, 255),
    VTX(167, -244, 35, -23, 501, 225, 145, 30, 255),
    VTX(375, 60, -381, 515, 17, 201, 1, 150, 255),
    VTX(375, 60, -381, 515, 17, 201, 1, 150, 255),
    VTX(-7, 42, -179, -210, 54, 173, 3, 170, 255),
    VTX(398, 323, -147, 515, 508, 203, 84, 189, 255),
    VTX(185, 281, 20, -23, 501, 233, 110, 41, 255),
    VTX(-116, 23, 37, 512, 509, 140, 4, 229, 255),
    VTX(-7, 42, -179, 343, 113, 173, 3, 170, 255),
    VTX(167, -244, 35, -12, 514, 225, 145, 30, 255),
    VTX(185, 281, 20, -12, 514, 233, 110, 41, 255),
    VTX(-7, 42, -179, 343, 113, 173, 3, 170, 255),
    VTX(-116, 23, 37, 512, 509, 140, 4, 229, 255),
    VTX(-112, 2, 324, 494, 138, 250, 252, 119, 255),
    VTX(-116, 23, 37, -1, 490, 140, 4, 229, 255),
    VTX(167, -244, 35, 507, 497, 225, 145, 30, 255),
    VTX(185, 281, 20, 507, 497, 233, 110, 41, 255),
    VTX(-116, 23, 37, -1, 490, 140, 4, 229, 255),
    VTX(-112, 2, 324, 494, 138, 250, 252, 119, 255),
    VTX(-112, 2, 324, 4, 515, 250, 252, 119, 255),
    VTX(167, -244, 35, 495, 125, 225, 145, 30, 255),
    VTX(265, -175, -21, 506, 494, 82, 20, 84, 255),
}; 

static Vtx sZelda2SkelVtx_00D0C0[27] = {
    VTX(270, 162, -32, 506, 494, 87, 249, 81, 255),
    VTX(185, 281, 20, 495, 125, 233, 110, 41, 255),
    VTX(-112, 2, 324, 4, 515, 250, 252, 119, 255),
    VTX(270, 162, -32, 233, 409, 87, 249, 81, 255),
    VTX(398, 323, -147, 1, 488, 96, 228, 64, 255),
    VTX(185, 281, 20, 354, 485, 233, 110, 41, 255),
    VTX(167, -244, 35, 9, 512, 225, 145, 30, 255),
    VTX(442, -277, -123, 487, 512, 71, 34, 89, 255),
    VTX(265, -175, -21, 227, 386, 82, 20, 84, 255),
    VTX(375, 60, -381, 62, 242, 102, 20, 59, 255),
    VTX(398, 323, -147, 200, 208, 96, 228, 64, 255),
    VTX(289, 28, -203, 48, 214, 107, 237, 50, 255),
    VTX(270, 162, -32, 118, 189, 87, 249, 81, 255),
    VTX(375, 60, -381, 257, 223, 102, 20, 59, 255),
    VTX(289, 28, -203, 242, 203, 107, 237, 50, 255),
    VTX(265, -175, -21, 168, 194, 82, 20, 84, 255),
    VTX(442, -277, -123, 125, 223, 71, 34, 89, 255),
    VTX(265, -175, -21, 135, 47, 19, 143, 33, 255),
    VTX(352, 0, 146, 210, 81, 17, 2, 118, 255),
    VTX(-112, 2, 324, 125, 255, 42, 4, 112, 255),
    VTX(270, 162, -32, 133, 42, 10, 114, 33, 255),
    VTX(568, 11, 127, 341, 0, 6, 0, 119, 255),
    VTX(866, 170, 0, -339, 1173, 3, 119, 8, 255),
    VTX(568, 166, -16, -323, 0, 1, 119, 6, 255),
    VTX(841, 21, 108, 298, 1073, 8, 253, 119, 255),
    VTX(812, -126, -10, 929, 957, 13, 137, 0, 255),
    VTX(568, -151, -15, 1033, 0, 12, 137, 255, 255),
}; 

static Vtx sZelda2SkelVtx_00D270[6] = {
    VTX(568, 30, -172, -764, 0, 11, 7, 137, 255),
    VTX(812, -126, -10, -94, 957, 13, 137, 0, 255),
    VTX(568, -151, -15, 9, 0, 12, 137, 255, 255),
    VTX(853, 31, -141, -770, 1121, 12, 4, 137, 255),
    VTX(866, 170, 0, -1363, 1173, 3, 119, 8, 255),
    VTX(568, 166, -16, -1347, 0, 1, 119, 6, 255),
}; 

static Vtx sZelda2SkelVtx_00D2D0[14] = {
    VTX(321, 1573, 0, 425, 1656, 203, 107, 0, 255),
    VTX(321, 1385, -736, 21, 1703, 198, 73, 182, 255),
    VTX(321, 1385, -736, 684, 1702, 198, 73, 182, 255),
    VTX(321, -556, -584, 482, 1704, 245, 181, 164, 255),
    VTX(321, -556, -584, 20, 1699, 245, 181, 164, 255),
    VTX(321, -829, 0, 69, 1703, 249, 137, 0, 255),
    VTX(321, 313, -1023, 474, 1694, 226, 5, 141, 255),
    VTX(321, 313, -1023, 143, 1698, 226, 5, 141, 255),
    VTX(321, 313, 1023, 143, 1698, 226, 5, 115, 255),
    VTX(321, 313, 1023, 474, 1694, 226, 5, 115, 255),
    VTX(321, 1385, 736, 684, 1702, 198, 73, 74, 255),
    VTX(321, 1385, 736, 21, 1703, 198, 73, 74, 255),
    VTX(321, -556, 584, 20, 1699, 245, 181, 92, 255),
    VTX(321, -556, 584, 482, 1704, 245, 181, 92, 255),
}; 

static Vtx sZelda2SkelVtx_00D3B0[15] = {
    VTX(249, 1949, 0, 493, 2048, 184, 95, 0, 255),
    VTX(249, 1949, 0, 493, 2048, 184, 95, 0, 255),
    VTX(249, 1549, -823, 0, 2048, 208, 56, 162, 255),
    VTX(249, -597, -674, 512, 2048, 225, 183, 167, 255),
    VTX(249, -924, 0, 32, 2048, 229, 140, 0, 255),
    VTX(249, -924, 0, 32, 2048, 229, 140, 0, 255),
    VTX(249, 347, -1176, 498, 2048, 213, 245, 145, 255),
    VTX(249, -597, -674, 0, 2048, 225, 183, 167, 255),
    VTX(249, -597, -674, 0, 2048, 225, 183, 167, 255),
    VTX(249, 1549, -823, 732, 2048, 208, 56, 162, 255),
    VTX(249, 1549, -823, 732, 2048, 208, 56, 162, 255),
    VTX(249, 347, -1176, 121, 2048, 213, 245, 145, 255),
    VTX(249, 1549, 823, 732, 2048, 208, 56, 94, 255),
    VTX(249, 347, 1176, 121, 2048, 213, 245, 111, 255),
    VTX(249, 1549, 823, 732, 2048, 208, 56, 94, 255),
}; 

static Vtx sZelda2SkelVtx_00D4A0[9] = {
    VTX(249, -597, 674, 0, 2048, 225, 183, 89, 255),
    VTX(249, 347, 1176, 498, 2048, 213, 245, 111, 255),
    VTX(249, -597, 674, 0, 2048, 225, 183, 89, 255),
    VTX(249, -924, 0, 32, 2048, 229, 140, 0, 255),
    VTX(249, -597, 674, 512, 2048, 225, 183, 89, 255),
    VTX(249, -924, 0, 32, 2048, 229, 140, 0, 255),
    VTX(249, 1949, 0, 493, 2048, 184, 95, 0, 255),
    VTX(249, 1549, 823, 0, 2048, 208, 56, 94, 255),
    VTX(249, 1949, 0, 493, 2048, 184, 95, 0, 255),
}; 

static Vtx sZelda2SkelVtx_00D530[14] = {
    VTX(406, 1391, 0, 402, 1291, 221, 114, 0, 255),
    VTX(406, 1191, -604, 60, 1317, 225, 83, 176, 255),
    VTX(406, 1191, -604, 629, 1317, 225, 83, 176, 255),
    VTX(406, -555, -539, 468, 1336, 245, 182, 163, 255),
    VTX(406, -555, -539, 36, 1334, 245, 182, 163, 255),
    VTX(406, -801, 0, 88, 1334, 248, 137, 0, 255),
    VTX(406, 277, -947, 468, 1326, 235, 12, 139, 255),
    VTX(406, 277, -947, 154, 1329, 235, 12, 139, 255),
    VTX(406, 277, 947, 154, 1329, 235, 12, 117, 255),
    VTX(406, 277, 947, 468, 1326, 235, 12, 117, 255),
    VTX(406, 1191, 604, 629, 1317, 225, 83, 80, 255),
    VTX(406, 1191, 604, 60, 1317, 225, 83, 80, 255),
    VTX(406, -555, 539, 36, 1334, 245, 182, 93, 255),
    VTX(406, -555, 539, 468, 1336, 245, 182, 93, 255),
}; 

static Vtx sZelda2SkelVtx_00D610[15] = {
    VTX(321, 1573, 0, 425, 1656, 203, 107, 0, 255),
    VTX(321, 1573, 0, 425, 1656, 203, 107, 0, 255),
    VTX(321, 1385, -736, 21, 1703, 198, 73, 182, 255),
    VTX(321, -556, -584, 482, 1704, 245, 181, 164, 255),
    VTX(321, -829, 0, 69, 1703, 249, 137, 0, 255),
    VTX(321, -829, 0, 69, 1703, 249, 137, 0, 255),
    VTX(321, 313, -1023, 474, 1694, 226, 5, 141, 255),
    VTX(321, -556, -584, 20, 1699, 245, 181, 164, 255),
    VTX(321, -556, -584, 20, 1699, 245, 181, 164, 255),
    VTX(321, 1385, -736, 684, 1702, 198, 73, 182, 255),
    VTX(321, 313, -1023, 143, 1698, 226, 5, 141, 255),
    VTX(321, 313, -1023, 143, 1698, 226, 5, 141, 255),
    VTX(321, 313, 1023, 143, 1698, 226, 5, 115, 255),
    VTX(321, 1385, 736, 684, 1702, 198, 73, 74, 255),
    VTX(321, 313, 1023, 143, 1698, 226, 5, 115, 255),
}; 

static Vtx sZelda2SkelVtx_00D700[9] = {
    VTX(321, -556, 584, 20, 1699, 245, 181, 92, 255),
    VTX(321, 313, 1023, 474, 1694, 226, 5, 115, 255),
    VTX(321, -556, 584, 20, 1699, 245, 181, 92, 255),
    VTX(321, -829, 0, 69, 1703, 249, 137, 0, 255),
    VTX(321, -556, 584, 482, 1704, 245, 181, 92, 255),
    VTX(321, -829, 0, 69, 1703, 249, 137, 0, 255),
    VTX(321, 1573, 0, 425, 1656, 203, 107, 0, 255),
    VTX(321, 1385, 736, 21, 1703, 198, 73, 74, 255),
    VTX(321, 1573, 0, 425, 1656, 203, 107, 0, 255),
}; 

static Vtx sZelda2SkelVtx_00D790[14] = {
    VTX(1843, 1071, -524, 87, 955, 219, 89, 185, 255),
    VTX(1843, 1071, -524, 596, 944, 219, 89, 185, 255),
    VTX(1843, -541, -494, 454, 967, 245, 162, 183, 255),
    VTX(1843, -541, -494, 52, 969, 245, 162, 183, 255),
    VTX(1843, 254, -870, 462, 959, 241, 236, 139, 255),
    VTX(1843, 254, -870, 166, 961, 241, 236, 139, 255),
    VTX(1843, -759, 0, 108, 965, 249, 137, 0, 255),
    VTX(1843, 1221, 0, 378, 926, 214, 112, 0, 255),
    VTX(1843, -541, 494, 52, 969, 245, 162, 73, 255),
    VTX(1843, -541, 494, 454, 967, 245, 162, 73, 255),
    VTX(1843, 1071, 524, 87, 955, 219, 89, 71, 255),
    VTX(1843, 1071, 524, 596, 944, 219, 89, 71, 255),
    VTX(1843, 254, 870, 166, 961, 241, 236, 117, 255),
    VTX(1843, 254, 870, 462, 959, 241, 236, 117, 255),
}; 

static Vtx sZelda2SkelVtx_00D870[15] = {
    VTX(406, 1391, 0, 402, 1291, 221, 114, 0, 255),
    VTX(406, 1191, -604, 60, 1317, 225, 83, 176, 255),
    VTX(406, 1391, 0, 402, 1291, 221, 114, 0, 255),
    VTX(406, -555, -539, 468, 1336, 245, 182, 163, 255),
    VTX(406, -801, 0, 88, 1334, 248, 137, 0, 255),
    VTX(406, -801, 0, 88, 1334, 248, 137, 0, 255),
    VTX(406, 277, -947, 468, 1326, 235, 12, 139, 255),
    VTX(406, -555, -539, 36, 1334, 245, 182, 163, 255),
    VTX(406, -555, -539, 36, 1334, 245, 182, 163, 255),
    VTX(406, 1191, -604, 629, 1317, 225, 83, 176, 255),
    VTX(406, 277, -947, 154, 1329, 235, 12, 139, 255),
    VTX(406, 277, -947, 154, 1329, 235, 12, 139, 255),
    VTX(406, 277, 947, 154, 1329, 235, 12, 117, 255),
    VTX(406, 1191, 604, 629, 1317, 225, 83, 80, 255),
    VTX(406, 277, 947, 154, 1329, 235, 12, 117, 255),
}; 

static Vtx sZelda2SkelVtx_00D960[9] = {
    VTX(406, -555, 539, 36, 1334, 245, 182, 93, 255),
    VTX(406, 277, 947, 468, 1326, 235, 12, 117, 255),
    VTX(406, -555, 539, 36, 1334, 245, 182, 93, 255),
    VTX(406, -801, 0, 88, 1334, 248, 137, 0, 255),
    VTX(406, -555, 539, 468, 1336, 245, 182, 93, 255),
    VTX(406, -801, 0, 88, 1334, 248, 137, 0, 255),
    VTX(406, 1391, 0, 402, 1291, 221, 114, 0, 255),
    VTX(406, 1391, 0, 402, 1291, 221, 114, 0, 255),
    VTX(406, 1191, 604, 60, 1317, 225, 83, 80, 255),
}; 

static Vtx sZelda2SkelVtx_00D9F0[13] = {
    VTX(468, -396, -363, 204, -747, 241, 166, 179, 255),
    VTX(468, -396, -363, 1024, -384, 241, 166, 179, 255),
    VTX(468, -396, -363, 429, -775, 241, 166, 179, 255),
    VTX(596, -581, 0, 0, 0, 223, 141, 0, 255),
    VTX(342, 113, -591, 230, -842, 200, 253, 151, 255),
    VTX(342, 113, -591, 471, -843, 200, 253, 151, 255),
    VTX(486, 546, 0, 308, -704, 188, 98, 0, 255),
    VTX(486, 546, 0, 511, -793, 188, 98, 0, 255),
    VTX(342, 113, 591, 471, -843, 200, 253, 105, 255),
    VTX(342, 113, 591, 230, -842, 200, 253, 105, 255),
    VTX(468, -396, 363, 204, -747, 241, 166, 77, 255),
    VTX(468, -396, 363, 429, -775, 241, 166, 77, 255),
    VTX(468, -396, 363, 1024, -384, 241, 166, 77, 255),
}; 

static Vtx sZelda2SkelVtx_00DAC0[17] = {
    VTX(1843, 254, -870, 462, 959, 241, 236, 139, 255),
    VTX(1843, 254, -870, 462, 959, 241, 236, 139, 255),
    VTX(1843, -541, -494, 52, 969, 245, 162, 183, 255),
    VTX(1843, 1071, -524, 596, 944, 219, 89, 185, 255),
    VTX(1843, 1071, -524, 596, 944, 219, 89, 185, 255),
    VTX(1843, 254, -870, 166, 961, 241, 236, 139, 255),
    VTX(960, -513, -363, 1024, 2048, 243, 151, 201, 255),
    VTX(939, -680, 0, 0, 2048, 242, 137, 0, 255),
    VTX(939, -680, 0, 0, 2048, 242, 137, 0, 255),
    VTX(1843, 1221, 0, 378, 926, 214, 112, 0, 255),
    VTX(1843, 1071, -524, 87, 955, 219, 89, 185, 255),
    VTX(1843, -541, -494, 432, 967, 245, 162, 183, 255),
    VTX(960, -513, -363, 393, -76, 243, 151, 201, 255),
    VTX(960, -513, 363, 393, -76, 243, 151, 55, 255),
    VTX(1843, -541, 494, 432, 967, 245, 162, 73, 255),
    VTX(1843, 1071, 524, 87, 955, 219, 89, 71, 255),
    VTX(1843, 1221, 0, 378, 926, 214, 112, 0, 255),
}; 

static Vtx sZelda2SkelVtx_00DBD0[16] = {
    VTX(939, -680, 0, 0, 2048, 242, 137, 0, 255),
    VTX(960, -513, 363, 1024, 2048, 243, 151, 55, 255),
    VTX(939, -680, 0, 0, 2048, 242, 137, 0, 255),
    VTX(1843, 254, 870, 462, 959, 241, 236, 117, 255),
    VTX(1843, -541, 494, 52, 969, 245, 162, 73, 255),
    VTX(1843, 254, 870, 462, 959, 241, 236, 117, 255),
    VTX(1843, 1071, 524, 596, 944, 219, 89, 71, 255),
    VTX(1843, 254, 870, 166, 961, 241, 236, 117, 255),
    VTX(1843, 1071, 524, 596, 944, 219, 89, 71, 255),
    VTX(960, -513, -363, 1024, 0, 243, 151, 201, 255),
    VTX(1357, -563, -363, 1024, 1024, 246, 149, 203, 255),
    VTX(1336, -730, 0, 0, 1024, 244, 137, 0, 255),
    VTX(939, -680, 0, 0, 0, 242, 137, 0, 255),
    VTX(1843, -759, 0, 1024, 1331, 249, 137, 0, 255),
    VTX(1336, -730, 0, -62, 522, 244, 137, 0, 255),
    VTX(1357, -563, -363, 1024, 26, 246, 149, 203, 255),
}; 

static Vtx sZelda2SkelVtx_00DCD0[19] = {
    VTX(1357, -563, -363, 389, 622, 246, 149, 203, 255),
    VTX(1843, -541, -494, 454, 967, 245, 162, 183, 255),
    VTX(1843, -759, 0, 108, 965, 249, 137, 0, 255),
    VTX(1843, -541, -494, 432, 967, 245, 162, 183, 255),
    VTX(1357, -563, -363, 357, 622, 246, 149, 203, 255),
    VTX(960, -513, -363, 393, -76, 243, 151, 201, 255),
    VTX(960, -513, 363, 393, -76, 243, 151, 55, 255),
    VTX(1357, -563, 363, 357, 622, 246, 149, 53, 255),
    VTX(1843, -541, 494, 432, 967, 245, 162, 73, 255),
    VTX(1843, -759, 0, 108, 965, 249, 137, 0, 255),
    VTX(1843, -541, 494, 454, 967, 245, 162, 73, 255),
    VTX(1357, -563, 363, 389, 622, 246, 149, 53, 255),
    VTX(1357, -563, 363, 1024, 26, 246, 149, 53, 255),
    VTX(1336, -730, 0, -62, 522, 244, 137, 0, 255),
    VTX(1843, -759, 0, 1024, 1331, 249, 137, 0, 255),
    VTX(1336, -730, 0, 0, 1024, 244, 137, 0, 255),
    VTX(1357, -563, 363, 1024, 1024, 246, 149, 53, 255),
    VTX(960, -513, 363, 1024, 0, 243, 151, 55, 255),
    VTX(939, -680, 0, 0, 0, 242, 137, 0, 255),
}; 

static Vtx sZelda2SkelVtx_00DE00[31] = {
    VTX(165, -446, 0, 71, 72, 218, 143, 0, 255),
    VTX(258, -482, -39, -25, 259, 214, 144, 0, 255),
    VTX(258, -482, 40, 160, 258, 214, 144, 0, 255),
    VTX(311, -414, -217, 193, 321, 225, 144, 229, 255),
    VTX(468, -396, -363, 346, 437, 241, 166, 179, 255),
    VTX(596, -581, 0, 12, 615, 223, 141, 0, 255),
    VTX(165, -446, 0, -21, 195, 218, 143, 0, 255),
    VTX(139, -332, -276, 237, 147, 203, 167, 196, 255),
    VTX(267, -399, -344, 252, -48, 217, 165, 189, 255),
    VTX(311, -414, -217, 379, 236, 225, 144, 229, 255),
    VTX(139, -332, -276, -141, 237, 203, 167, 196, 255),
    VTX(267, -399, -344, 188, -47, 217, 165, 189, 255),
    VTX(468, -396, -363, 444, 219, 241, 166, 179, 255),
    VTX(311, -414, -217, -50, 235, 225, 144, 229, 255),
    VTX(294, -280, -392, 269, 251, 225, 205, 153, 255),
    VTX(468, -396, -363, -179, 219, 241, 166, 179, 255),
    VTX(267, -399, -344, 78, -40, 217, 165, 189, 255),
    VTX(139, -332, -276, -15, 241, 203, 167, 196, 255),
    VTX(294, -280, -392, 526, 247, 225, 205, 153, 255),
    VTX(267, -399, -344, 395, -36, 217, 165, 189, 255),
    VTX(258, -482, 0, 17, -82, 173, 170, 0, 255),
    VTX(351, -518, -59, 29, 240, 231, 155, 197, 255),
    VTX(325, -546, 0, 140, 104, 227, 140, 0, 255),
    VTX(351, -518, -59, 301, 317, 231, 155, 197, 255),
    VTX(389, -532, 0, -26, 570, 25, 139, 0, 255),
    VTX(325, -546, 0, 86, 157, 227, 140, 0, 255),
    VTX(342, 113, -591, 15, 508, 200, 253, 151, 255),
    VTX(294, -280, -392, 406, 308, 225, 205, 153, 255),
    VTX(130, -219, -379, 279, 98, 204, 210, 159, 255),
    VTX(468, -396, -363, 592, 476, 241, 166, 179, 255),
    VTX(139, -332, -276, 416, 52, 203, 167, 196, 255),
}; 

static Vtx sZelda2SkelVtx_00DFF0[31] = {
    VTX(-5, -219, -379, 966, 8, 197, 185, 181, 255),
    VTX(139, -332, -276, 642, 267, 229, 160, 190, 255),
    VTX(165, -446, 0, -54, 266, 227, 140, 0, 255),
    VTX(28, -446, 0, -57, 8, 186, 160, 0, 255),
    VTX(130, -219, -379, 969, 266, 0, 229, 140, 255),
    VTX(-5, -219, -379, 997, 12, 197, 185, 181, 255),
    VTX(28, -446, 0, -23, 188, 186, 160, 0, 255),
    VTX(-103, -134, 0, 382, 517, 137, 247, 0, 255),
    VTX(-103, -134, 0, 298, -225, 137, 247, 0, 255),
    VTX(-23, 277, 0, 482, 236, 204, 107, 0, 255),
    VTX(-15, 93, -374, 13, 246, 191, 36, 163, 255),
    VTX(486, 546, 0, 1912, 256, 188, 98, 0, 255),
    VTX(342, 113, -591, 0, 256, 200, 253, 151, 255),
    VTX(120, 93, -374, 301, -481, 181, 65, 190, 255),
    VTX(120, 93, -374, 184, 237, 181, 65, 190, 255),
    VTX(113, 277, 0, 266, 252, 186, 97, 0, 255),
    VTX(486, 546, 0, 254, -118, 188, 98, 0, 255),
    VTX(-23, 277, 0, 494, 15, 204, 107, 0, 255),
    VTX(113, 277, 0, 494, 258, 0, 120, 0, 255),
    VTX(120, 93, -374, 0, 255, 0, 83, 170, 255),
    VTX(-15, 93, -374, 0, 12, 191, 36, 163, 255),
    VTX(-15, 93, -374, 627, 14, 191, 36, 163, 255),
    VTX(120, 93, -374, 619, 459, 0, 83, 170, 255),
    VTX(130, -219, -379, 85, 479, 0, 229, 140, 255),
    VTX(-5, -219, -379, 92, 34, 197, 185, 181, 255),
    VTX(-5, -219, -379, 7, 240, 197, 185, 181, 255),
    VTX(-103, -134, 0, 33, -14, 137, 247, 0, 255),
    VTX(-15, 93, -374, 120, 234, 191, 36, 163, 255),
    VTX(130, -219, -379, 0, 256, 204, 210, 159, 255),
    VTX(120, 93, -374, 461, -486, 181, 65, 190, 255),
    VTX(342, 113, -591, 917, 256, 200, 253, 151, 255),
}; 

static Vtx sZelda2SkelVtx_00E1E0[31] = {
    VTX(342, 113, 591, 917, 256, 200, 253, 105, 255),
    VTX(120, 93, 374, 461, -486, 181, 65, 66, 255),
    VTX(130, -219, 379, 0, 256, 204, 210, 97, 255),
    VTX(-15, 93, 374, 120, 234, 191, 36, 93, 255),
    VTX(-103, -134, 0, 33, -14, 137, 247, 0, 255),
    VTX(-5, -219, 379, 7, 240, 197, 185, 75, 255),
    VTX(130, -219, 379, 85, 479, 0, 229, 116, 255),
    VTX(120, 93, 374, 619, 459, 0, 83, 86, 255),
    VTX(-15, 93, 374, 627, 14, 191, 36, 93, 255),
    VTX(-5, -219, 379, 92, 34, 197, 185, 75, 255),
    VTX(120, 93, 374, 0, 255, 0, 83, 86, 255),
    VTX(113, 277, 0, 494, 258, 0, 120, 0, 255),
    VTX(-23, 277, 0, 494, 15, 204, 107, 0, 255),
    VTX(-15, 93, 374, 0, 12, 191, 36, 93, 255),
    VTX(486, 546, 0, 254, -118, 188, 98, 0, 255),
    VTX(113, 277, 0, 266, 252, 186, 97, 0, 255),
    VTX(120, 93, 374, 184, 237, 181, 65, 66, 255),
    VTX(120, 93, 374, 301, -481, 181, 65, 66, 255),
    VTX(342, 113, 591, 0, 256, 200, 253, 105, 255),
    VTX(486, 546, 0, 1912, 256, 188, 98, 0, 255),
    VTX(-15, 93, 374, 13, 246, 191, 36, 93, 255),
    VTX(-23, 277, 0, 482, 236, 204, 107, 0, 255),
    VTX(-103, -134, 0, 298, -225, 137, 247, 0, 255),
    VTX(-103, -134, 0, 382, 517, 137, 247, 0, 255),
    VTX(28, -446, 0, -23, 188, 186, 160, 0, 255),
    VTX(-5, -219, 379, 997, 12, 197, 185, 75, 255),
    VTX(165, -446, 0, -54, 266, 227, 140, 0, 255),
    VTX(139, -332, 276, 642, 267, 229, 160, 66, 255),
    VTX(-5, -219, 379, 966, 8, 197, 185, 75, 255),
    VTX(28, -446, 0, -57, 8, 186, 160, 0, 255),
    VTX(130, -219, 379, 969, 266, 0, 229, 116, 255),
}; 

static Vtx sZelda2SkelVtx_00E3D0[28] = {
    VTX(130, -219, 379, 279, 98, 204, 210, 97, 255),
    VTX(294, -280, 392, 406, 308, 225, 205, 103, 255),
    VTX(342, 113, 591, 15, 508, 200, 253, 105, 255),
    VTX(468, -396, 363, 592, 476, 241, 166, 77, 255),
    VTX(139, -332, 276, 416, 52, 203, 167, 60, 255),
    VTX(325, -546, 0, 86, 157, 227, 140, 0, 255),
    VTX(389, -532, 0, -26, 570, 25, 139, 0, 255),
    VTX(351, -518, 60, 301, 317, 231, 155, 59, 255),
    VTX(325, -546, 0, 140, 104, 227, 140, 0, 255),
    VTX(351, -518, 60, 29, 240, 231, 155, 59, 255),
    VTX(258, -482, 0, 17, -82, 173, 170, 0, 255),
    VTX(267, -399, 344, 395, -36, 217, 165, 67, 255),
    VTX(294, -280, 392, 526, 247, 225, 205, 103, 255),
    VTX(139, -332, 276, -15, 241, 203, 167, 60, 255),
    VTX(267, -399, 344, 78, -40, 217, 165, 67, 255),
    VTX(468, -396, 363, -179, 219, 241, 166, 77, 255),
    VTX(294, -280, 392, 269, 251, 225, 205, 103, 255),
    VTX(311, -414, 217, -50, 235, 225, 144, 27, 255),
    VTX(468, -396, 363, 444, 219, 241, 166, 77, 255),
    VTX(267, -399, 344, 188, -47, 217, 165, 67, 255),
    VTX(139, -332, 276, -141, 237, 203, 167, 60, 255),
    VTX(311, -414, 217, 379, 236, 225, 144, 27, 255),
    VTX(267, -399, 344, 252, -48, 217, 165, 67, 255),
    VTX(596, -581, 0, 12, 615, 223, 141, 0, 255),
    VTX(468, -396, 363, 346, 437, 241, 166, 77, 255),
    VTX(311, -414, 217, 193, 321, 225, 144, 27, 255),
    VTX(165, -446, 0, -21, 195, 218, 143, 0, 255),
    VTX(139, -332, 276, 237, 147, 203, 167, 60, 255),
}; 

Gfx sZelda2SkelLimbDL_00E590[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001140, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00CED0[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 1, 4, 0, 1, 5, 4, 0),
    gsSP2Triangles(2, 6, 7, 0, 0, 2, 7, 0),
    gsSP2Triangles(5, 7, 4, 0, 7, 6, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(8, 9, 10, 0, 9, 8, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 14, 13, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsSP1Triangle(19, 20, 21, 0),
    gsSP1Triangle(22, 23, 24, 0),
    gsSP1Triangle(25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&sZelda2SkelVtx_00D0C0[0], 27, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001280, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 11, 0),
    gsSP2Triangles(13, 14, 15, 0, 16, 13, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001140, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(17, 18, 19, 0, 19, 18, 20, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000F40, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsSP2Triangles(21, 22, 23, 0, 21, 24, 22, 0),
    gsSP2Triangles(21, 25, 24, 0, 21, 26, 25, 0),
    gsSPVertex(&sZelda2SkelVtx_00D270[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 5, 4, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_00E910[] = {
    gsSPMatrix(0x0D000240, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00CD10[0], 4, 0),
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000F00, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00CD50[0], 14, 4),
    gsSP2Triangles(4, 0, 5, 0, 6, 7, 0, 0),
    gsSP2Triangles(8, 1, 0, 0, 1, 9, 10, 0),
    gsSP2Triangles(11, 12, 3, 0, 13, 2, 1, 0),
    gsSP2Triangles(3, 2, 14, 0, 0, 3, 15, 0),
    gsSP1Triangle(16, 0, 17, 0),
    gsSPVertex(&sZelda2SkelVtx_00CE30[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 6, 0, 0),
    gsSP2Triangles(4, 7, 6, 0, 1, 7, 4, 0),
    gsSP2Triangles(0, 8, 1, 0, 6, 8, 0, 0),
    gsSP1Triangle(4, 6, 9, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_00EA58[] = {
    gsSPMatrix(0x0D000280, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00C770[0], 6, 0),
    gsSPMatrix(0x0D0002C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000E00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00C7D0[0], 12, 6),
    gsSP2Triangles(0, 2, 6, 0, 1, 4, 7, 0),
    gsSP2Triangles(3, 1, 8, 0, 9, 10, 3, 0),
    gsSP2Triangles(11, 12, 1, 0, 13, 14, 5, 0),
    gsSP2Triangles(5, 0, 15, 0, 16, 17, 0, 0),
    gsSPVertex(&sZelda2SkelVtx_00C890[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 4, 2, 0),
    gsSP2Triangles(10, 11, 2, 0, 6, 12, 7, 0),
    gsSP2Triangles(13, 14, 1, 0, 12, 0, 7, 0),
    gsSP2Triangles(1, 0, 12, 0, 2, 4, 0, 0),
    gsSP2Triangles(12, 6, 15, 0, 1, 12, 13, 0),
    gsSP2Triangles(2, 1, 10, 0, 2, 16, 9, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 0, 17, 0),
    gsSP2Triangles(17, 0, 4, 0, 5, 20, 21, 0),
    gsSP2Triangles(22, 23, 21, 0, 22, 21, 20, 0),
    gsSP2Triangles(5, 4, 9, 0, 0, 19, 24, 0),
    gsSP2Triangles(17, 25, 18, 0, 8, 26, 6, 0),
    gsSP2Triangles(27, 19, 18, 0, 19, 27, 24, 0),
    gsSP2Triangles(26, 8, 23, 0, 9, 16, 5, 0),
    gsSP2Triangles(18, 24, 27, 0, 4, 3, 17, 0),
    gsSP2Triangles(8, 25, 21, 0, 15, 6, 26, 0),
    gsSP2Triangles(28, 14, 13, 0, 23, 8, 21, 0),
    gsSP2Triangles(11, 10, 29, 0, 5, 21, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000F00, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPVertex(&sZelda2SkelVtx_00CA70[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 14, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 19, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&sZelda2SkelVtx_00CA70[31], 11, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000F40, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsSP2Triangles(3, 4, 5, 0, 6, 4, 3, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 8, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_00ED60[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001140, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00C370[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 3, 0, 4, 5, 1, 0),
    gsSP2Triangles(6, 7, 0, 0, 6, 0, 2, 0),
    gsSP2Triangles(4, 6, 5, 0, 4, 7, 6, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001180, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(8, 9, 10, 0, 11, 10, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 13, 12, 15, 0),
    gsSP1Triangle(16, 17, 18, 0),
    gsSP1Triangle(19, 20, 21, 0),
    gsSP1Triangle(22, 23, 24, 0),
    gsSP1Triangle(25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&sZelda2SkelVtx_00C560[0], 27, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001280, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001140, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(17, 18, 19, 0, 20, 18, 17, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000F40, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(24, 25, 23, 0, 25, 26, 23, 0),
    gsSPVertex(&sZelda2SkelVtx_00C710[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(2, 3, 4, 0, 2, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_00F0E0[] = {
    gsSPMatrix(0x0D000180, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00C1B0[0], 4, 0),
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000F00, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00C1F0[0], 14, 4),
    gsSP2Triangles(4, 0, 5, 0, 0, 6, 7, 0),
    gsSP2Triangles(0, 1, 8, 0, 9, 10, 1, 0),
    gsSP2Triangles(3, 11, 12, 0, 1, 2, 13, 0),
    gsSP2Triangles(14, 2, 3, 0, 15, 3, 0, 0),
    gsSP1Triangle(16, 0, 17, 0),
    gsSPVertex(&sZelda2SkelVtx_00C2D0[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 0, 4, 0, 2, 5, 6, 0),
    gsSP2Triangles(5, 7, 4, 0, 4, 7, 1, 0),
    gsSP2Triangles(1, 8, 2, 0, 2, 8, 5, 0),
    gsSP1Triangle(9, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_00F228[] = {
    gsSPMatrix(0x0D0001C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00BC10[0], 6, 0),
    gsSPMatrix(0x0D000200, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000E00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00BC70[0], 12, 6),
    gsSP2Triangles(6, 2, 0, 0, 7, 4, 1, 0),
    gsSP2Triangles(8, 1, 3, 0, 3, 9, 10, 0),
    gsSP2Triangles(1, 11, 12, 0, 5, 13, 14, 0),
    gsSP2Triangles(15, 0, 5, 0, 0, 16, 17, 0),
    gsSPVertex(&sZelda2SkelVtx_00BD30[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 0, 4, 9, 0),
    gsSP2Triangles(0, 10, 11, 0, 7, 12, 8, 0),
    gsSP2Triangles(1, 13, 14, 0, 7, 2, 12, 0),
    gsSP2Triangles(12, 2, 1, 0, 2, 4, 0, 0),
    gsSP2Triangles(15, 8, 12, 0, 14, 12, 1, 0),
    gsSP2Triangles(11, 1, 0, 0, 9, 16, 0, 0),
    gsSP2Triangles(17, 18, 19, 0, 19, 2, 17, 0),
    gsSP2Triangles(4, 2, 19, 0, 20, 21, 3, 0),
    gsSP2Triangles(20, 22, 23, 0, 21, 20, 23, 0),
    gsSP2Triangles(9, 4, 3, 0, 24, 17, 2, 0),
    gsSP2Triangles(18, 25, 19, 0, 8, 26, 6, 0),
    gsSP2Triangles(18, 17, 27, 0, 24, 27, 17, 0),
    gsSP2Triangles(22, 6, 26, 0, 3, 16, 9, 0),
    gsSP2Triangles(27, 24, 18, 0, 19, 5, 4, 0),
    gsSP2Triangles(20, 25, 6, 0, 26, 8, 15, 0),
    gsSP2Triangles(14, 13, 28, 0, 20, 6, 22, 0),
    gsSP2Triangles(29, 11, 10, 0, 5, 20, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000F00, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSPVertex(&sZelda2SkelVtx_00BF10[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 14, 16, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 19, 18, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&sZelda2SkelVtx_00BF10[31], 11, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000F40, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x007C),
    gsSP2Triangles(3, 4, 5, 0, 5, 4, 6, 0),
    gsSP2Triangles(7, 8, 9, 0, 9, 8, 10, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_00F530[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0024C0, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00DE00[0], 31, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000E00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(3, 4, 5, 0, 3, 5, 6, 0),
    gsSP1Triangle(3, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0024C0, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(14, 15, 16, 0),
    gsSP1Triangle(17, 18, 19, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002500, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(23, 24, 25, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000E00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(26, 27, 28, 0, 26, 29, 27, 0),
    gsSP1Triangle(30, 28, 27, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x001C),
    gsSPVertex(&sZelda2SkelVtx_00DFF0[0], 31, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP1Triangle(0, 4, 1, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002700, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(8, 9, 10, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002740, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(11, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002780, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(14, 15, 16, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002700, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(17, 18, 19, 0, 20, 17, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002880, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsSP2Triangles(21, 22, 23, 0, 24, 21, 23, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002700, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(25, 26, 27, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002740, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&sZelda2SkelVtx_00E1E0[0], 31, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002700, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002880, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x003C),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002700, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002780, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(14, 15, 16, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002740, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(17, 18, 19, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002700, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002600, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x001C),
    gsSP1Triangle(23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 28, 29, 26, 0),
    gsSP1Triangle(27, 30, 28, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000E00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSPVertex(&sZelda2SkelVtx_00E3D0[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(1, 0, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_002500, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP1Triangle(5, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_1TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0024C0, G_IM_FMT_CI, G_IM_SIZ_8b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x001C, 0x001C),
    gsSP1Triangle(8, 9, 10, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Triangle(14, 15, 16, 0),
    gsSP1Triangle(17, 18, 19, 0),
    gsSP1Triangle(20, 21, 22, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_000E00, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsSP2Triangles(23, 24, 25, 0, 26, 23, 25, 0),
    gsSP1Triangle(27, 26, 25, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_0102D8[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00D9F0[0], 13, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0012C0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00DAC0[0], 17, 13),
    gsSP2Triangles(0, 5, 13, 0, 0, 14, 15, 0),
    gsSP2Triangles(16, 4, 7, 0, 17, 18, 4, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x00FC),
    gsSP2Triangles(1, 19, 20, 0, 21, 3, 1, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0012C0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x00FC),
    gsSP1Triangle(22, 23, 6, 0),
    gsSP1Triangle(24, 25, 2, 0),
    gsSP1Triangle(11, 26, 27, 0),
    gsSP1Triangle(6, 28, 29, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001CC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x00FC),
    gsSPVertex(&sZelda2SkelVtx_00DBD0[0], 16, 13),
    gsSP2Triangles(13, 14, 12, 0, 12, 3, 15, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0012C0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x00FC),
    gsSP2Triangles(16, 8, 10, 0, 17, 18, 10, 0),
    gsSP2Triangles(7, 9, 19, 0, 9, 20, 21, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0016C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSP2Triangles(22, 23, 24, 0, 24, 25, 22, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001AC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSP1Triangle(26, 27, 28, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0012C0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x00FC),
    gsSPVertex(&sZelda2SkelVtx_00DCD0[0], 19, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSP1Triangle(3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_001AC0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x003C),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_2TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0016C0, G_IM_FMT_CI, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x007C),
    gsSP2Triangles(15, 16, 17, 0, 17, 18, 15, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_0108E8[] = {
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00D790[0], 14, 0),
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0012C0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00D870[0], 15, 14),
    gsSP2Triangles(0, 7, 14, 0, 15, 0, 16, 0),
    gsSP2Triangles(2, 17, 18, 0, 19, 6, 2, 0),
    gsSP2Triangles(4, 20, 21, 0, 22, 3, 4, 0),
    gsSP2Triangles(1, 23, 24, 0, 25, 5, 1, 0),
    gsSP2Triangles(26, 27, 11, 0, 11, 12, 28, 0),
    gsSPVertex(&sZelda2SkelVtx_00D960[0], 9, 14),
    gsSP2Triangles(14, 15, 13, 0, 13, 8, 16, 0),
    gsSP2Triangles(17, 18, 9, 0, 9, 6, 19, 0),
    gsSP2Triangles(20, 7, 10, 0, 21, 10, 22, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_010A20[] = {
    gsSPMatrix(0x0D000080, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00D530[0], 14, 0),
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0012C0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00D610[0], 15, 14),
    gsSP2Triangles(0, 14, 1, 0, 15, 16, 1, 0),
    gsSP2Triangles(3, 17, 18, 0, 19, 5, 3, 0),
    gsSP2Triangles(6, 20, 21, 0, 22, 4, 6, 0),
    gsSP2Triangles(2, 23, 24, 0, 25, 7, 2, 0),
    gsSP2Triangles(26, 27, 10, 0, 10, 8, 28, 0),
    gsSPVertex(&sZelda2SkelVtx_00D700[0], 9, 14),
    gsSP2Triangles(14, 15, 9, 0, 9, 12, 16, 0),
    gsSP2Triangles(17, 18, 13, 0, 13, 5, 19, 0),
    gsSP2Triangles(11, 20, 0, 0, 11, 21, 22, 0),
    gsSPEndDisplayList(),
}; 

Gfx sZelda2SkelLimbDL_010B58[] = {
    gsSPMatrix(0x0D0000C0, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&sZelda2SkelVtx_00D2D0[0], 14, 0),
    gsSPMatrix(0x0D000100, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x0B000000),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsDPLoadTLUT_pal256(gZelda2_0TLUT),
    gsDPLoadTextureBlock(sZelda2SkelTex_0012C0, G_IM_FMT_CI, G_IM_SIZ_8b, 16, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x00FC),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sZelda2SkelVtx_00D3B0[0], 15, 14),
    gsSP2Triangles(0, 14, 1, 0, 15, 16, 1, 0),
    gsSP2Triangles(3, 17, 18, 0, 19, 5, 3, 0),
    gsSP2Triangles(6, 20, 21, 0, 22, 4, 6, 0),
    gsSP2Triangles(7, 2, 23, 0, 24, 25, 7, 0),
    gsSP2Triangles(26, 10, 8, 0, 8, 27, 28, 0),
    gsSPVertex(&sZelda2SkelVtx_00D4A0[0], 9, 14),
    gsSP2Triangles(14, 15, 9, 0, 9, 12, 16, 0),
    gsSP2Triangles(17, 18, 13, 0, 13, 5, 19, 0),
    gsSP2Triangles(11, 20, 0, 0, 11, 21, 22, 0),
    gsSPEndDisplayList(),
}; 

StandardLimb sZelda2SkelLimb_010C90 = { 
    { 0, 3600, 100 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sZelda2SkelLimb_010C9C = { 
    { 0, 0, 0 },
    0x02, 0x06,
    sZelda2SkelLimbDL_00F530
}; 

StandardLimb sZelda2SkelLimb_010CA8 = { 
    { 450, 0, 0 },
    0x03, 0xFF,
    sZelda2SkelLimbDL_0102D8
}; 

StandardLimb sZelda2SkelLimb_010CB4 = { 
    { 1950, 0, 0 },
    0x04, 0xFF,
    sZelda2SkelLimbDL_0108E8
}; 

StandardLimb sZelda2SkelLimb_010CC0 = { 
    { 500, 0, 0 },
    0x05, 0xFF,
    sZelda2SkelLimbDL_010A20
}; 

StandardLimb sZelda2SkelLimb_010CCC = { 
    { 450, 0, 0 },
    0xFF, 0xFF,
    sZelda2SkelLimbDL_010B58
}; 

StandardLimb sZelda2SkelLimb_010CD8 = { 
    { 0, 0, 0 },
    0x07, 0xFF,
    sZelda2SkelLimbDL_00B068
}; 

StandardLimb sZelda2SkelLimb_010CE4 = { 
    { 897, -50, 550 },
    0x08, 0x0A,
    sZelda2SkelLimbDL_00ED60
}; 

StandardLimb sZelda2SkelLimb_010CF0 = { 
    { 900, 0, 0 },
    0x09, 0xFF,
    sZelda2SkelLimbDL_00F0E0
}; 

StandardLimb sZelda2SkelLimb_010CFC = { 
    { 900, 0, 0 },
    0xFF, 0xFF,
    sZelda2SkelLimbDL_00F228
}; 

StandardLimb sZelda2SkelLimb_010D08 = { 
    { 897, -50, -550 },
    0x0B, 0x0D,
    sZelda2SkelLimbDL_00E590
}; 

StandardLimb sZelda2SkelLimb_010D14 = { 
    { 900, 0, 0 },
    0x0C, 0xFF,
    sZelda2SkelLimbDL_00E910
}; 

StandardLimb sZelda2SkelLimb_010D20 = { 
    { 901, 0, 0 },
    0xFF, 0xFF,
    sZelda2SkelLimbDL_00EA58
}; 

StandardLimb sZelda2SkelLimb_010D2C = { 
    { 1405, 0, 0 },
    0xFF, 0xFF,
    sZelda2SkelLimbDL_007DC8
}; 

static void* sZelda2SkelLimbs[14] = {
    &sZelda2SkelLimb_010C90,
    &sZelda2SkelLimb_010C9C,
    &sZelda2SkelLimb_010CA8,
    &sZelda2SkelLimb_010CB4,
    &sZelda2SkelLimb_010CC0,
    &sZelda2SkelLimb_010CCC,
    &sZelda2SkelLimb_010CD8,
    &sZelda2SkelLimb_010CE4,
    &sZelda2SkelLimb_010CF0,
    &sZelda2SkelLimb_010CFC,
    &sZelda2SkelLimb_010D08,
    &sZelda2SkelLimb_010D14,
    &sZelda2SkelLimb_010D20,
    &sZelda2SkelLimb_010D2C,
}; 

FlexSkeletonHeader gZelda2Skel = { sZelda2SkelLimbs, 14, 13 }; 

static u8 unaccounted_010D7C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 


