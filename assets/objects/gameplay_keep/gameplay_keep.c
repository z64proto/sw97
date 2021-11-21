#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "gameplay_keep.h"

extern Vtx gameplay_keepVtx_003500[12];
extern Vtx gameplay_keepVtx_003A50[32];
extern Vtx gameplay_keepVtx_003C50[4];
extern Vtx gameplay_keepVtx_003D08[32];
extern Vtx gameplay_keepVtx_003F08[8];
extern Vtx gameplay_keepVtx_003F88[4];
extern Vtx gameplay_keepVtx_004258[4];
extern s16 sArrow1AnimFrameData[32];
extern JointIndex sArrow1AnimJointIndices[5];
extern s16 sArrow2AnimFrameData[22];
extern JointIndex sArrow2AnimJointIndices[5];
extern Vtx gameplay_keepVtx_005780[18];
extern Vtx gameplay_keepVtx_0058A0[8];
extern Vtx gameplay_keepVtx_005920[3];
extern Vtx gameplay_keepVtx_005950[21];
extern Vtx gameplay_keepVtx_005C80[3];
extern Vtx gameplay_keepVtx_005CB0[9];
extern Vtx gameplay_keepVtx_005D40[4];
extern Vtx gameplay_keepVtx_005D80[4];
extern Vtx gameplay_keepVtx_005DC0[6];
extern void* sArrowSkelLimbs[4];
extern Vtx gameplay_keepVtx_007820[4];
extern Vtx gameplay_keepVtx_007970[4];
extern Vtx gameplay_keepVtx_0079B0[10];
extern Vtx gameplay_keepVtx_007B90[3];
extern Vtx gameplay_keepVtx_007BC0[14];
extern Vtx gameplay_keepVtx_007CA0[15];
extern Vtx gameplay_keepVtx_007D90[8];
extern Vtx gameplay_keepVtx_00C058[4];
extern Vtx gameplay_keepVtx_00C0A0[3];
extern Vtx gameplay_keepVtx_00C360[36];
extern Vtx gameplay_keepVtx_00C5A0[15];
extern Vtx gameplay_keepVtx_00C848[3];
extern Vtx gameplay_keepVtx_00C880[4];
extern Vtx gameplay_keepVtx_00C8C0[43];
extern Vtx gameplay_keepVtx_00CCC0[12];
extern Vtx gameplay_keepVtx_00D0C0[4];
extern Vtx gameplay_keepVtx_00D100[20];
extern Vtx gameplay_keepVtx_00D418[12];
extern s16 sDoor1AnimFrameData[90];
extern JointIndex sDoor1AnimJointIndices[5];
extern s16 sDoor2AnimFrameData[88];
extern JointIndex sDoor2AnimJointIndices[5];
extern s16 sDoor3AnimFrameData[68];
extern JointIndex sDoor3AnimJointIndices[5];
extern Vtx gameplay_keepVtx_00E770[4];
extern Vtx gameplay_keepVtx_00E7B0[6];
extern Vtx gameplay_keepVtx_00E810[4];
extern Vtx gameplay_keepVtx_00E850[4];
extern Vtx gameplay_keepVtx_00E890[8];
extern Vtx gameplay_keepVtx_00E910[8];
extern Vtx gameplay_keepVtx_00E990[4];
extern Vtx gameplay_keepVtx_00E9D0[6];
extern Vtx gameplay_keepVtx_00EA30[4];
extern Vtx gameplay_keepVtx_00EA70[4];
extern Vtx gameplay_keepVtx_00EAB0[8];
extern Vtx gameplay_keepVtx_00EB30[8];
extern Vtx gameplay_keepVtx_00EBB0[8];
extern void* sDoorSkelLimbs[4];
extern s16 sDoor4AnimFrameData[76];
extern JointIndex sDoor4AnimJointIndices[5];
extern Vtx gameplay_keepVtx_0100A8[4];
extern Vtx gameplay_keepVtx_0100F0[4];
extern Vtx gameplay_keepVtx_012230[26];
extern Vtx gameplay_keepVtx_0123D0[26];
extern Vtx gameplay_keepVtx_0127B0[26];
extern Vtx gameplay_keepVtx_012950[26];
extern Vtx gameplay_keepVtx_013530[14];
extern Vtx gameplay_keepVtx_014700[32];
extern Vtx gameplay_keepVtx_014900[12];
extern s16 sFairyAnimFrameData[44];
extern JointIndex sFairyAnimJointIndices[15];
extern Vtx gameplay_keepVtx_0153C0[4];
extern Vtx gameplay_keepVtx_015488[4];
extern Vtx gameplay_keepVtx_015550[4];
extern Vtx gameplay_keepVtx_015618[4];
extern Vtx gameplay_keepVtx_0156E0[4];
extern Vtx gameplay_keepVtx_0158E8[4];
extern Vtx gameplay_keepVtx_015928[4];
extern void* sFairySkelLimbs[14];
extern Vtx gameplay_keepVtx_0183D0[14];
extern s16 sFish1AnimFrameData[24];
extern JointIndex sFish1AnimJointIndices[7];
extern Vtx sFishSkelVtx_018610[4];
extern Vtx sFishSkelVtx_018650[4];
extern Vtx sFishSkelVtx_018690[12];
extern Vtx sFishSkelVtx_018750[22];
extern void* sFishSkelLimbs[6];
extern s16 sFish2AnimFrameData[64];
extern JointIndex sFish2AnimJointIndices[7];
extern Vtx gameplay_keepVtx_01A120[4];
extern Vtx gameplay_keepVtx_01A1D8[4];
extern Vtx gameplay_keepVtx_01C280[4];
extern Vtx gameplay_keepVtx_01E330[4];
extern Vtx gameplay_keepVtx_0217C8[4];
extern Vtx gameplay_keepVtx_024470[4];
extern Vtx gameplay_keepVtx_025510[4];
extern Vtx gameplay_keepVtx_0255B0[4];
extern Vtx gameplay_keepVtx_027E50[4];
extern Vtx gameplay_keepVtx_029EF0[4];
extern Vtx gameplay_keepVtx_02CF98[4];
extern Vtx gameplay_keepVtx_032048[4];
extern Vtx gameplay_keepVtx_033490[3];
extern Vtx gameplay_keepVtx_0334C0[38];
extern Vtx gameplay_keepVtx_033910[3];
extern Vtx gameplay_keepVtx_033940[90];
extern s16 sBugCrawlAnimFrameData[142];
extern JointIndex sBugCrawlAnimJointIndices[24];
extern Vtx gameplay_keepVtx_0342D0[3];
extern Vtx gameplay_keepVtx_0343C0[3];
extern Vtx gameplay_keepVtx_0344B0[3];
extern Vtx gameplay_keepVtx_0345A0[3];
extern Vtx gameplay_keepVtx_034690[3];
extern Vtx gameplay_keepVtx_034780[3];
extern Vtx gameplay_keepVtx_034870[3];
extern Vtx gameplay_keepVtx_034960[3];
extern Vtx gameplay_keepVtx_034A60[12];
extern void* sBugSkelLimbs[23];
extern Vtx gameplay_keepVtx_0355A0[4];
extern Vtx gameplay_keepVtx_035670[3];
extern Vtx gameplay_keepVtx_037800[4];
extern Vtx gameplay_keepVtx_037840[4];
extern Vtx gameplay_keepVtx_037D60[13];
extern Vtx gameplay_keepVtx_038F70[4];
extern Vtx gameplay_keepVtx_0394E0[24];
extern Vtx gameplay_keepVtx_039710[24];
extern Vtx gameplay_keepVtx_039A80[24];
extern Vtx gameplay_keepVtx_039DF0[24];
extern Vtx gameplay_keepVtx_03A150[24];
extern Vtx gameplay_keepVtx_03A4B0[24];
extern Vtx gameplay_keepVtx_03A820[20];
extern Vtx gameplay_keepVtx_03A960[5];
extern Vtx gameplay_keepVtx_03AAC0[8];
extern Vtx gameplay_keepVtx_03AB40[4];
extern Vtx gameplay_keepVtx_03AD30[3];
extern Vtx gameplay_keepVtx_03AD60[41];
extern Vtx gameplay_keepVtx_03AFF0[4];
extern Vtx gameplay_keepVtx_03B1E0[32];
extern Vtx gameplay_keepVtx_03B3E0[32];
extern Vtx gameplay_keepVtx_03B5E0[16];
extern Vtx gameplay_keepVtx_03B6E0[32];
extern Vtx gameplay_keepVtx_03B8E0[32];
extern Vtx gameplay_keepVtx_03BAE0[12];
extern Vtx gameplay_keepVtx_03BDE0[8];
extern Vtx gameplay_keepVtx_03BE60[4];
extern Vtx gameplay_keepVtx_03BEA0[4];
extern Vtx gameplay_keepVtx_03BEE0[4];
extern Vtx gameplay_keepVtx_03BF20[4];
extern Vtx gameplay_keepVtx_03BF60[11];
extern Vtx gameplay_keepVtx_03C010[4];
extern Vtx gameplay_keepVtx_03C2E0[5];
extern Vtx gameplay_keepVtx_03C330[4];
extern Vtx gameplay_keepVtx_03C370[4];
extern Vtx gameplay_keepVtx_03C3B0[4];
extern Vtx gameplay_keepVtx_03C3F0[13];
extern Vtx gameplay_keepVtx_03C4C0[3];
extern Vtx gameplay_keepVtx_03C4F0[8];
extern Vtx gameplay_keepVtx_03C570[4];
extern Vtx gameplay_keepVtx_03F0F8[4];
extern Vtx gameplay_keepVtx_042200[3];
extern Vtx gameplay_keepVtx_042230[33];
extern Vtx gameplay_keepVtx_048130[3];
extern Vtx gameplay_keepVtx_0481E0[3];
extern Vtx gameplay_keepVtx_049260[3];
extern Vtx gameplay_keepVtx_049A90[4];
extern Vtx gameplay_keepVtx_049F20[4];
extern Vtx gameplay_keepVtx_049F60[4];
extern Vtx gameplay_keepVtx_049FA0[4];
extern Vtx gameplay_keepVtx_04B090[4];
extern Vtx gameplay_keepVtx_04D348[12];
extern Vtx gameplay_keepVtx_04D408[4];
extern Vtx gameplay_keepVtx_04D468[3];
extern Vtx gameplay_keepVtx_04D4A0[4];
extern Vtx gameplay_keepVtx_04E660[32];
extern Vtx gameplay_keepVtx_04E860[5];
extern Vtx gameplay_keepVtx_04E8B0[11];
extern Vtx gameplay_keepVtx_04E960[3];
extern Vtx gameplay_keepVtx_04E990[32];
extern Vtx gameplay_keepVtx_04EB90[28];
extern Vtx gameplay_keepVtx_04ED50[32];
extern Vtx gameplay_keepVtx_04EF50[29];
extern Vtx gameplay_keepVtx_04F120[25];
extern Vtx gameplay_keepVtx_04F640[32];
extern Vtx gameplay_keepVtx_04F840[5];
extern Vtx gameplay_keepVtx_04F890[16];
extern Vtx gameplay_keepVtx_04F990[30];
extern Vtx gameplay_keepVtx_04FB70[32];
extern Vtx gameplay_keepVtx_04FD70[29];
extern Vtx gameplay_keepVtx_04FF40[32];
extern Vtx gameplay_keepVtx_050140[26];
extern Vtx gameplay_keepVtx_050610[32];
extern Vtx gameplay_keepVtx_050810[5];
extern Vtx gameplay_keepVtx_050860[8];
extern Vtx gameplay_keepVtx_0508E0[32];
extern Vtx gameplay_keepVtx_050AE0[28];
extern Vtx gameplay_keepVtx_050CA0[32];
extern Vtx gameplay_keepVtx_050EA0[26];
extern Vtx gameplay_keepVtx_051040[32];
extern Vtx gameplay_keepVtx_051240[4];

u64 gHilite1Tex[] = {
#include "assets/objects/gameplay_keep/hilite_1.rgb5a1.inc.c"
};

u64 gHilite2Tex[] = {
#include "assets/objects/gameplay_keep/hilite_2.rgb5a1.inc.c"
};

u64 gHylianShieldDesignTex[] = {
#include "assets/objects/gameplay_keep/hylian_shield_design.rgb5a1.inc.c"
};

u64 gOcarinaofTimeDesignTex[] = {
#include "assets/objects/gameplay_keep/ocarina_of_time_design.rgb5a1.inc.c"
};

u64 gBottleGlassTex[] = {
#include "assets/objects/gameplay_keep/bottle_glass.rgb5a1.inc.c"
};

u64 gLinkTunic1Tex[] = {
#include "assets/objects/gameplay_keep/link_tunic_1.i8.inc.c"
};

u64 gLinkHairTex[] = {
#include "assets/objects/gameplay_keep/link_hair.rgb5a1.inc.c"
};

u64 gLinkTunic2Tex[] = {
#include "assets/objects/gameplay_keep/link_tunic_2.i8.inc.c"
};

u64 gLinkTunic3Tex[] = {
#include "assets/objects/gameplay_keep/link_tunic_3.i8.inc.c"
};

u64 gLinkTunic4Tex[] = {
#include "assets/objects/gameplay_keep/link_tunic_4.i8.inc.c"
};

Vec3s D_04002040[24] = {
{ -37, 2346, 93 },
{ 0, 11995, 0 },
{ -16385, -305, -16333 },
{ 0, 51, 12 },
{ 3761, 2263, -384 },
{ 0, 0, 3786 },
{ 1594, 1384, -18344 },
{ -2288, -2428, -1562 },
{ 0, 0, 3219 },
{ -2148, -5, -16840 },
{ 15365, -1708, 15611 },
{ 1761, 8365, 17711 },
{ 0, 0, 18859 },
{ 0, 0, 0 },
{ -9392, -9579, 28686 },
{ 0, 0, -7093 },
{ -2748, 685, -14092 },
{ 213, 6553, -32212 },
{ 0, 0, -1877 },
{ 3267, 3309, -16090 },
{ -18101, 25946, -2670 },
{ -104, 0, 0 },
{ 0, 0, 0 },
{ 0, 0, 0 }
}; 

Vec3s D_040020D0[24] = {
{ -37, 2346, 93 },
{ 0, 0, 0 },
{ -16385, -305, -16333 },
{ 0, 51, 12 },
{ 3772, 2035, -691 },
{ 0, 0, 4065 },
{ 1594, 1384, -18344 },
{ -2642, -1922, 1479 },
{ 0, 0, 0 },
{ -2148, -5, -16840 },
{ 19142, 330, 15619 },
{ 18, 2734, 17602 },
{ 0, 0, 19902 },
{ 0, 0, 0 },
{ -11942, -3370, -28056 },
{ 0, 0, -7093 },
{ -2634, -1046, -20439 },
{ -5943, 8897, -31239 },
{ 0, 0, -18149 },
{ 5367, 4005, -18767 },
{ -16384, 27240, -730 },
{ -104, 0, 0 },
{ 0, 0, 0 },
{ 0, 0, 0 }
}; 

Vec3s D_04002160[24] = {
{ 112, 3506, -156 },
{ 0, 7927, 0 },
{ -18104, 728, -17116 },
{ 0, 0, 0 },
{ 5584, 2893, -779 },
{ 0, 0, 2813 },
{ 2710, 1166, -16888 },
{ -2057, -3191, -2192 },
{ 0, 0, 4577 },
{ -2215, -1317, -18974 },
{ 22897, -947, 17702 },
{ 1386, 9779, 19889 },
{ 0, 0, 19902 },
{ 0, 0, 0 },
{ 11423, -1937, 26391 },
{ 0, 0, -15854 },
{ -16991, -26137, 13708 },
{ -6976, -2831, 26031 },
{ 0, 0, -4798 },
{ 4441, 221, -18986 },
{ -19499, 27753, -227 },
{ 0, 0, 0 },
{ 0, 0, 0 },
{ 0, 0, 0 }
}; 

Vec3s D_040021F0[24] = {
{ 37, 3529, 0 },
{ 0, 0, 0 },
{ -18104, 728, -17116 },
{ 0, 0, 0 },
{ 3114, 1725, -1243 },
{ 0, 0, 2607 },
{ 2184, 1320, -17823 },
{ -2001, -2988, -3620 },
{ 0, 0, 5024 },
{ -1665, -1220, -18352 },
{ 23087, -313, 16384 },
{ -474, 5888, 18054 },
{ 0, 0, 19902 },
{ 0, 0, 0 },
{ -2318, -1154, 30091 },
{ 0, 0, -5945 },
{ 124, -489, -19513 },
{ 5893, 3955, -26617 },
{ 0, 0, -5319 },
{ 5865, 3517, -16725 },
{ -15534, 27097, 2355 },
{ 0, 0, 0 },
{ 0, 0, 0 },
{ 0, 0, 0 }
}; 

Vec3s D_04002280[24] = {
{ 37, 3529, 0 },
{ 0, 0, 0 },
{ -18104, 728, -17116 },
{ 0, 0, 0 },
{ 3114, 1725, -1243 },
{ 0, 0, 2607 },
{ 2184, 1320, -17823 },
{ -2001, -2988, -3620 },
{ 0, 0, 5024 },
{ -1665, -1220, -18352 },
{ 23087, -313, 16384 },
{ -474, 5888, 18054 },
{ 0, 0, 19902 },
{ 0, 0, 0 },
{ -2318, -1154, 30091 },
{ 0, 0, -5945 },
{ 124, -489, -19513 },
{ 5893, 3955, -26617 },
{ 0, 0, -19192 },
{ 5865, 3517, -16725 },
{ -15534, 27097, 2355 },
{ 0, 0, 0 },
{ 0, 0, 0 },
{ 0, 0, 0 }
}; 

LinkAnimationHeader gPlayerAnim_002310 = { { 51 }, 0x0700D710 }; 

LinkAnimationHeader gPlayerAnim_002318 = { { 133 }, 0x0700F1D0 }; 

LinkAnimationHeader gPlayerAnim_002320 = { { 33 }, 0x07013770 }; 

LinkAnimationHeader gPlayerAnim_002328 = { { 55 }, 0x070148C0 }; 

LinkAnimationHeader gPlayerAnim_002330 = { { 100 }, 0x07016590 }; 

LinkAnimationHeader gPlayerAnim_002338 = { { 100 }, 0x070199F0 }; 

LinkAnimationHeader gPlayerAnim_002340 = { { 40 }, 0x0701CE50 }; 

LinkAnimationHeader gPlayerAnim_002348 = { { 40 }, 0x0701E340 }; 

LinkAnimationHeader gPlayerAnim_002350 = { { 20 }, 0x0701F830 }; 

LinkAnimationHeader gPlayerAnim_002358 = { { 20 }, 0x070202B0 }; 

LinkAnimationHeader gPlayerAnim_002360 = { { 110 }, 0x07020D30 }; 

LinkAnimationHeader gPlayerAnim_002368 = { { 35 }, 0x070246D0 }; 

LinkAnimationHeader gPlayerAnim_002370 = { { 25 }, 0x07025930 }; 

LinkAnimationHeader gPlayerAnim_002378 = { { 20 }, 0x07026650 }; 

LinkAnimationHeader gPlayerAnim_002380 = { { 15 }, 0x070270D0 }; 

LinkAnimationHeader gPlayerAnim_002388 = { { 55 }, 0x070278B0 }; 

LinkAnimationHeader gPlayerAnim_002390 = { { 30 }, 0x07029580 }; 

LinkAnimationHeader gPlayerAnim_002398 = { { 30 }, 0x0702A540 }; 

LinkAnimationHeader gPlayerAnim_0023A0 = { { 30 }, 0x0702B500 }; 

LinkAnimationHeader gPlayerAnim_0023A8 = { { 51 }, 0x0702C4C0 }; 

LinkAnimationHeader gPlayerAnim_0023B0 = { { 78 }, 0x0702DF80 }; 

LinkAnimationHeader gPlayerAnim_0023B8 = { { 30 }, 0x07030860 }; 

LinkAnimationHeader gPlayerAnim_0023C0 = { { 35 }, 0x07031820 }; 

LinkAnimationHeader gPlayerAnim_0023C8 = { { 36 }, 0x07032A80 }; 

LinkAnimationHeader gPlayerAnim_0023D0 = { { 35 }, 0x07033D60 }; 

LinkAnimationHeader gPlayerAnim_0023D8 = { { 36 }, 0x07034FC0 }; 

LinkAnimationHeader gPlayerAnim_0023E0 = { { 30 }, 0x070362A0 }; 

LinkAnimationHeader gPlayerAnim_0023E8 = { { 50 }, 0x07037260 }; 

LinkAnimationHeader gPlayerAnim_0023F0 = { { 21 }, 0x07038C90 }; 

LinkAnimationHeader gPlayerAnim_0023F8 = { { 21 }, 0x07039790 }; 

LinkAnimationHeader gPlayerAnim_002400 = { { 5 }, 0x0703A290 }; 

LinkAnimationHeader gPlayerAnim_002408 = { { 55 }, 0x0703A530 }; 

LinkAnimationHeader gPlayerAnim_002410 = { { 365 }, 0x0703C200 }; 

LinkAnimationHeader gPlayerAnim_002418 = { { 110 }, 0x07048110 }; 

LinkAnimationHeader gPlayerAnim_002420 = { { 80 }, 0x0704BAB0 }; 

LinkAnimationHeader gPlayerAnim_002428 = { { 30 }, 0x0704E490 }; 

LinkAnimationHeader gPlayerAnim_002430 = { { 30 }, 0x0704F450 }; 

LinkAnimationHeader gPlayerAnim_002438 = { { 20 }, 0x07050410 }; 

LinkAnimationHeader gPlayerAnim_002440 = { { 60 }, 0x07050E90 }; 

LinkAnimationHeader gPlayerAnim_002448 = { { 45 }, 0x07052E00 }; 

LinkAnimationHeader gPlayerAnim_002450 = { { 45 }, 0x07054590 }; 

LinkAnimationHeader gPlayerAnim_002458 = { { 90 }, 0x07055D20 }; 

LinkAnimationHeader gPlayerAnim_002460 = { { 90 }, 0x07058C40 }; 

LinkAnimationHeader gPlayerAnim_002468 = { { 45 }, 0x0705BB60 }; 

LinkAnimationHeader gPlayerAnim_002470 = { { 60 }, 0x0705D2F0 }; 

LinkAnimationHeader gPlayerAnim_002478 = { { 11 }, 0x0705F260 }; 

LinkAnimationHeader gPlayerAnim_002480 = { { 16 }, 0x0705F830 }; 

LinkAnimationHeader gPlayerAnim_002488 = { { 11 }, 0x07060090 }; 

LinkAnimationHeader gPlayerAnim_002490 = { { 18 }, 0x07060660 }; 

LinkAnimationHeader gPlayerAnim_002498 = { { 10 }, 0x07060FD0 }; 

LinkAnimationHeader gPlayerAnim_0024A0 = { { 11 }, 0x07061510 }; 

LinkAnimationHeader gPlayerAnim_0024A8 = { { 9 }, 0x07061AE0 }; 

LinkAnimationHeader gPlayerAnim_0024B0 = { { 13 }, 0x07061FA0 }; 

LinkAnimationHeader gPlayerAnim_0024B8 = { { 12 }, 0x07062670 }; 

LinkAnimationHeader gPlayerAnim_0024C0 = { { 8 }, 0x07062CC0 }; 

LinkAnimationHeader gPlayerAnim_0024C8 = { { 15 }, 0x070630F0 }; 

LinkAnimationHeader gPlayerAnim_0024D0 = { { 18 }, 0x070638D0 }; 

LinkAnimationHeader gPlayerAnim_0024D8 = { { 19 }, 0x07064240 }; 

LinkAnimationHeader gPlayerAnim_0024E0 = { { 34 }, 0x07064C40 }; 

LinkAnimationHeader gPlayerAnim_0024E8 = { { 18 }, 0x07065E10 }; 

LinkAnimationHeader gPlayerAnim_0024F0 = { { 16 }, 0x07066780 }; 

LinkAnimationHeader gPlayerAnim_0024F8 = { { 16 }, 0x07066FE0 }; 

LinkAnimationHeader gPlayerAnim_002500 = { { 16 }, 0x07067840 }; 

LinkAnimationHeader gPlayerAnim_002508 = { { 16 }, 0x070680A0 }; 

LinkAnimationHeader gPlayerAnim_002510 = { { 8 }, 0x07068900 }; 

LinkAnimationHeader gPlayerAnim_002518 = { { 8 }, 0x07068D30 }; 

LinkAnimationHeader gPlayerAnim_002520 = { { 7 }, 0x07069160 }; 

LinkAnimationHeader gPlayerAnim_002528 = { { 16 }, 0x07069510 }; 

LinkAnimationHeader gPlayerAnim_002530 = { { 13 }, 0x07069D70 }; 

LinkAnimationHeader gPlayerAnim_002538 = { { 21 }, 0x0706A440 }; 

LinkAnimationHeader gPlayerAnim_002540 = { { 19 }, 0x0706AF40 }; 

LinkAnimationHeader gPlayerAnim_002548 = { { 9 }, 0x0706B940 }; 

LinkAnimationHeader gPlayerAnim_002550 = { { 32 }, 0x0706BE00 }; 

LinkAnimationHeader gPlayerAnim_002558 = { { 15 }, 0x0706CEC0 }; 

LinkAnimationHeader gPlayerAnim_002560 = { { 14 }, 0x0706D6A0 }; 

LinkAnimationHeader gPlayerAnim_002568 = { { 16 }, 0x0706DE00 }; 

LinkAnimationHeader gPlayerAnim_002570 = { { 16 }, 0x0706E660 }; 

LinkAnimationHeader gPlayerAnim_002578 = { { 3 }, 0x0706FDF0 }; 

LinkAnimationHeader gPlayerAnim_002580 = { { 3 }, 0x0706FF90 }; 

LinkAnimationHeader gPlayerAnim_002588 = { { 3 }, 0x07070130 }; 

LinkAnimationHeader gPlayerAnim_002590 = { { 29 }, 0x0706EEC0 }; 

LinkAnimationHeader gPlayerAnim_002598 = { { 5 }, 0x070702D0 }; 

LinkAnimationHeader gPlayerAnim_0025A0 = { { 31 }, 0x07070570 }; 

LinkAnimationHeader gPlayerAnim_0025A8 = { { 16 }, 0x070715B0 }; 

LinkAnimationHeader gPlayerAnim_0025B0 = { { 9 }, 0x07071E10 }; 

LinkAnimationHeader gPlayerAnim_0025B8 = { { 3 }, 0x07073200 }; 

LinkAnimationHeader gPlayerAnim_0025C0 = { { 3 }, 0x070733A0 }; 

LinkAnimationHeader gPlayerAnim_0025C8 = { { 3 }, 0x07073540 }; 

LinkAnimationHeader gPlayerAnim_0025D0 = { { 29 }, 0x070722D0 }; 

LinkAnimationHeader gPlayerAnim_0025D8 = { { 5 }, 0x070736E0 }; 

LinkAnimationHeader gPlayerAnim_0025E0 = { { 31 }, 0x07073980 }; 

LinkAnimationHeader gPlayerAnim_0025E8 = { { 16 }, 0x070749C0 }; 

LinkAnimationHeader gPlayerAnim_0025F0 = { { 9 }, 0x07075220 }; 

LinkAnimationHeader gPlayerAnim_0025F8 = { { 20 }, 0x070756E0 }; 

LinkAnimationHeader gPlayerAnim_002600 = { { 20 }, 0x07076AD0 }; 

LinkAnimationHeader gPlayerAnim_002608 = { { 20 }, 0x07077550 }; 

LinkAnimationHeader gPlayerAnim_002610 = { { 18 }, 0x07076160 }; 

LinkAnimationHeader gPlayerAnim_002618 = { { 16 }, 0x07077FD0 }; 

LinkAnimationHeader gPlayerAnim_002620 = { { 16 }, 0x07078830 }; 

LinkAnimationHeader gPlayerAnim_002628 = { { 6 }, 0x07079090 }; 

LinkAnimationHeader gPlayerAnim_002630 = { { 29 }, 0x070793C0 }; 

LinkAnimationHeader gPlayerAnim_002638 = { { 29 }, 0x0707A2F0 }; 

LinkAnimationHeader gPlayerAnim_002640 = { { 44 }, 0x0707B220 }; 

LinkAnimationHeader gPlayerAnim_002648 = { { 13 }, 0x0707C930 }; 

LinkAnimationHeader gPlayerAnim_002650 = { { 131 }, 0x0707D000 }; 

LinkAnimationHeader gPlayerAnim_002658 = { { 126 }, 0x070814A0 }; 

LinkAnimationHeader gPlayerAnim_002660 = { { 50 }, 0x070856A0 }; 

LinkAnimationHeader gPlayerAnim_002668 = { { 47 }, 0x070870D0 }; 

LinkAnimationHeader gPlayerAnim_002670 = { { 9 }, 0x07088970 }; 

LinkAnimationHeader gPlayerAnim_002678 = { { 44 }, 0x07088E30 }; 

LinkAnimationHeader gPlayerAnim_002680 = { { 21 }, 0x0708A540 }; 

LinkAnimationHeader gPlayerAnim_002688 = { { 120 }, 0x0708B040 }; 

LinkAnimationHeader gPlayerAnim_002690 = { { 100 }, 0x0708EF10 }; 

LinkAnimationHeader gPlayerAnim_002698 = { { 20 }, 0x07092370 }; 

LinkAnimationHeader gPlayerAnim_0026A0 = { { 9 }, 0x07092DF0 }; 

LinkAnimationHeader gPlayerAnim_0026A8 = { { 3 }, 0x070932B0 }; 

LinkAnimationHeader gPlayerAnim_0026B0 = { { 16 }, 0x07093450 }; 

LinkAnimationHeader gPlayerAnim_0026B8 = { { 8 }, 0x07093CB0 }; 

LinkAnimationHeader gPlayerAnim_0026C0 = { { 66 }, 0x070940E0 }; 

LinkAnimationHeader gPlayerAnim_0026C8 = { { 5 }, 0x07096370 }; 

LinkAnimationHeader gPlayerAnim_0026D0 = { { 31 }, 0x07096610 }; 

LinkAnimationHeader gPlayerAnim_0026D8 = { { 18 }, 0x07097650 }; 

LinkAnimationHeader gPlayerAnim_0026E0 = { { 19 }, 0x07097FC0 }; 

LinkAnimationHeader gPlayerAnim_0026E8 = { { 24 }, 0x070989C0 }; 

LinkAnimationHeader gPlayerAnim_0026F0 = { { 9 }, 0x07099650 }; 

LinkAnimationHeader gPlayerAnim_0026F8 = { { 100 }, 0x07099B10 }; 

LinkAnimationHeader gPlayerAnim_002700 = { { 71 }, 0x0709CF70 }; 

LinkAnimationHeader gPlayerAnim_002708 = { { 80 }, 0x0709F4A0 }; 

LinkAnimationHeader gPlayerAnim_002710 = { { 51 }, 0x070A1E80 }; 

LinkAnimationHeader gPlayerAnim_002718 = { { 133 }, 0x070A3940 }; 

LinkAnimationHeader gPlayerAnim_002720 = { { 90 }, 0x070A7EE0 }; 

LinkAnimationHeader gPlayerAnim_002728 = { { 35 }, 0x070AAE00 }; 

LinkAnimationHeader gPlayerAnim_002730 = { { 40 }, 0x070AC060 }; 

LinkAnimationHeader gPlayerAnim_002738 = { { 25 }, 0x070AD550 }; 

LinkAnimationHeader gPlayerAnim_002740 = { { 20 }, 0x070AE270 }; 

LinkAnimationHeader gPlayerAnim_002748 = { { 100 }, 0x070AECF0 }; 

LinkAnimationHeader gPlayerAnim_002750 = { { 100 }, 0x070B2150 }; 

LinkAnimationHeader gPlayerAnim_002758 = { { 100 }, 0x070B55B0 }; 

LinkAnimationHeader gPlayerAnim_002760 = { { 100 }, 0x070B8A10 }; 

LinkAnimationHeader gPlayerAnim_002768 = { { 45 }, 0x070BE850 }; 

LinkAnimationHeader gPlayerAnim_002770 = { { 30 }, 0x070BFFE0 }; 

LinkAnimationHeader gPlayerAnim_002778 = { { 80 }, 0x070BBE70 }; 

LinkAnimationHeader gPlayerAnim_002780 = { { 22 }, 0x070C0FA0 }; 

LinkAnimationHeader gPlayerAnim_002788 = { { 22 }, 0x070C1B30 }; 

LinkAnimationHeader gPlayerAnim_002790 = { { 46 }, 0x070C26C0 }; 

LinkAnimationHeader gPlayerAnim_002798 = { { 20 }, 0x070C3EE0 }; 

LinkAnimationHeader gPlayerAnim_0027A0 = { { 10 }, 0x070C4960 }; 

LinkAnimationHeader gPlayerAnim_0027A8 = { { 100 }, 0x070C4EA0 }; 

LinkAnimationHeader gPlayerAnim_0027B0 = { { 20 }, 0x070C8300 }; 

LinkAnimationHeader gPlayerAnim_0027B8 = { { 85 }, 0x070C8D80 }; 

LinkAnimationHeader gPlayerAnim_0027C0 = { { 25 }, 0x070CBA00 }; 

LinkAnimationHeader gPlayerAnim_0027C8 = { { 20 }, 0x070CC720 }; 

LinkAnimationHeader gPlayerAnim_0027D0 = { { 20 }, 0x070CD1A0 }; 

LinkAnimationHeader gPlayerAnim_0027D8 = { { 15 }, 0x070CDC20 }; 

LinkAnimationHeader gPlayerAnim_0027E0 = { { 20 }, 0x070CE400 }; 

LinkAnimationHeader gPlayerAnim_0027E8 = { { 10 }, 0x070CEE80 }; 

LinkAnimationHeader gPlayerAnim_0027F0 = { { 20 }, 0x070CF3C0 }; 

LinkAnimationHeader gPlayerAnim_0027F8 = { { 35 }, 0x070CFE40 }; 

LinkAnimationHeader gPlayerAnim_002800 = { { 15 }, 0x070D10A0 }; 

LinkAnimationHeader gPlayerAnim_002808 = { { 20 }, 0x070D1880 }; 

LinkAnimationHeader gPlayerAnim_002810 = { { 28 }, 0x070D2300 }; 

LinkAnimationHeader gPlayerAnim_002818 = { { 35 }, 0x070D31B0 }; 

LinkAnimationHeader gPlayerAnim_002820 = { { 20 }, 0x070D4410 }; 

LinkAnimationHeader gPlayerAnim_002828 = { { 70 }, 0x070D4E90 }; 

LinkAnimationHeader gPlayerAnim_002830 = { { 35 }, 0x070D7340 }; 

LinkAnimationHeader gPlayerAnim_002838 = { { 80 }, 0x070D85A0 }; 

LinkAnimationHeader gPlayerAnim_002840 = { { 11 }, 0x070DAF80 }; 

LinkAnimationHeader gPlayerAnim_002848 = { { 30 }, 0x070DB550 }; 

LinkAnimationHeader gPlayerAnim_002850 = { { 10 }, 0x070DC510 }; 

LinkAnimationHeader gPlayerAnim_002858 = { { 30 }, 0x070DCA50 }; 

LinkAnimationHeader gPlayerAnim_002860 = { { 70 }, 0x070DDA10 }; 

LinkAnimationHeader gPlayerAnim_002868 = { { 15 }, 0x070DFEC0 }; 

LinkAnimationHeader gPlayerAnim_002870 = { { 25 }, 0x070E06A0 }; 

LinkAnimationHeader gPlayerAnim_002878 = { { 230 }, 0x070E13C0 }; 

LinkAnimationHeader gPlayerAnim_002880 = { { 6 }, 0x070E8C30 }; 

LinkAnimationHeader gPlayerAnim_002888 = { { 13 }, 0x070E8F60 }; 

LinkAnimationHeader gPlayerAnim_002890 = { { 9 }, 0x070E9630 }; 

LinkAnimationHeader gPlayerAnim_002898 = { { 16 }, 0x070E9AF0 }; 

LinkAnimationHeader gPlayerAnim_0028A0 = { { 6 }, 0x070EA350 }; 

LinkAnimationHeader gPlayerAnim_0028A8 = { { 11 }, 0x070EA680 }; 

LinkAnimationHeader gPlayerAnim_0028B0 = { { 6 }, 0x070EAC50 }; 

LinkAnimationHeader gPlayerAnim_0028B8 = { { 17 }, 0x070EAF80 }; 

LinkAnimationHeader gPlayerAnim_0028C0 = { { 5 }, 0x070EB870 }; 

LinkAnimationHeader gPlayerAnim_0028C8 = { { 9 }, 0x070EBB10 }; 

LinkAnimationHeader gPlayerAnim_0028D0 = { { 8 }, 0x070EBFD0 }; 

LinkAnimationHeader gPlayerAnim_0028D8 = { { 11 }, 0x070EC400 }; 

LinkAnimationHeader gPlayerAnim_0028E0 = { { 3 }, 0x070EC9D0 }; 

LinkAnimationHeader gPlayerAnim_0028E8 = { { 10 }, 0x070ECB70 }; 

LinkAnimationHeader gPlayerAnim_0028F0 = { { 9 }, 0x070ED0B0 }; 

LinkAnimationHeader gPlayerAnim_0028F8 = { { 13 }, 0x070ED570 }; 

LinkAnimationHeader gPlayerAnim_002900 = { { 10 }, 0x070EDC40 }; 

LinkAnimationHeader gPlayerAnim_002908 = { { 19 }, 0x070EE180 }; 

LinkAnimationHeader gPlayerAnim_002910 = { { 9 }, 0x070EEB80 }; 

LinkAnimationHeader gPlayerAnim_002918 = { { 21 }, 0x070EF040 }; 

LinkAnimationHeader gPlayerAnim_002920 = { { 16 }, 0x070EFB40 }; 

LinkAnimationHeader gPlayerAnim_002928 = { { 35 }, 0x070F03A0 }; 

LinkAnimationHeader gPlayerAnim_002930 = { { 15 }, 0x070F1600 }; 

LinkAnimationHeader gPlayerAnim_002938 = { { 21 }, 0x070F1DE0 }; 

LinkAnimationHeader gPlayerAnim_002940 = { { 16 }, 0x070F28E0 }; 

LinkAnimationHeader gPlayerAnim_002948 = { { 12 }, 0x070F3140 }; 

LinkAnimationHeader gPlayerAnim_002950 = { { 7 }, 0x070F3790 }; 

LinkAnimationHeader gPlayerAnim_002958 = { { 8 }, 0x070F3F70 }; 

LinkAnimationHeader gPlayerAnim_002960 = { { 8 }, 0x070F3B40 }; 

LinkAnimationHeader gPlayerAnim_002968 = { { 5 }, 0x070F43A0 }; 

LinkAnimationHeader gPlayerAnim_002970 = { { 9 }, 0x070F4640 }; 

LinkAnimationHeader gPlayerAnim_002978 = { { 9 }, 0x070F4B00 }; 

LinkAnimationHeader gPlayerAnim_002980 = { { 15 }, 0x070F4FC0 }; 

LinkAnimationHeader gPlayerAnim_002988 = { { 7 }, 0x070F57A0 }; 

LinkAnimationHeader gPlayerAnim_002990 = { { 8 }, 0x070F5F80 }; 

LinkAnimationHeader gPlayerAnim_002998 = { { 8 }, 0x070F5B50 }; 

LinkAnimationHeader gPlayerAnim_0029A0 = { { 5 }, 0x070F63B0 }; 

LinkAnimationHeader gPlayerAnim_0029A8 = { { 12 }, 0x070F6650 }; 

LinkAnimationHeader gPlayerAnim_0029B0 = { { 7 }, 0x070F6CA0 }; 

LinkAnimationHeader gPlayerAnim_0029B8 = { { 18 }, 0x070F7050 }; 

LinkAnimationHeader gPlayerAnim_0029C0 = { { 17 }, 0x070F79C0 }; 

LinkAnimationHeader gPlayerAnim_0029C8 = { { 12 }, 0x070F82B0 }; 

LinkAnimationHeader gPlayerAnim_0029D0 = { { 15 }, 0x070F8900 }; 

LinkAnimationHeader gPlayerAnim_0029D8 = { { 12 }, 0x070F9490 }; 

LinkAnimationHeader gPlayerAnim_0029E0 = { { 7 }, 0x070F90E0 }; 

LinkAnimationHeader gPlayerAnim_0029E8 = { { 20 }, 0x070F9AE0 }; 

LinkAnimationHeader gPlayerAnim_0029F0 = { { 20 }, 0x070FA560 }; 

LinkAnimationHeader gPlayerAnim_0029F8 = { { 3 }, 0x070FAFE0 }; 

LinkAnimationHeader gPlayerAnim_002A00 = { { 5 }, 0x070FB180 }; 

LinkAnimationHeader gPlayerAnim_002A08 = { { 9 }, 0x070FB420 }; 

LinkAnimationHeader gPlayerAnim_002A10 = { { 31 }, 0x070FB8E0 }; 

LinkAnimationHeader gPlayerAnim_002A18 = { { 31 }, 0x070FC920 }; 

LinkAnimationHeader gPlayerAnim_002A20 = { { 20 }, 0x070FD960 }; 

LinkAnimationHeader gPlayerAnim_002A28 = { { 10 }, 0x070FE3E0 }; 

LinkAnimationHeader gPlayerAnim_002A30 = { { 21 }, 0x070FF420 }; 

LinkAnimationHeader gPlayerAnim_002A38 = { { 21 }, 0x070FE920 }; 

LinkAnimationHeader gPlayerAnim_002A40 = { { 20 }, 0x070FFF20 }; 

LinkAnimationHeader gPlayerAnim_002A48 = { { 10 }, 0x071009A0 }; 

LinkAnimationHeader gPlayerAnim_002A50 = { { 10 }, 0x07100EE0 }; 

LinkAnimationHeader gPlayerAnim_002A58 = { { 12 }, 0x07101420 }; 

LinkAnimationHeader gPlayerAnim_002A60 = { { 11 }, 0x07101A70 }; 

LinkAnimationHeader gPlayerAnim_002A68 = { { 32 }, 0x07102040 }; 

LinkAnimationHeader gPlayerAnim_002A70 = { { 20 }, 0x07103100 }; 

LinkAnimationHeader gPlayerAnim_002A78 = { { 20 }, 0x07103B80 }; 

LinkAnimationHeader gPlayerAnim_002A80 = { { 5 }, 0x07104600 }; 

LinkAnimationHeader gPlayerAnim_002A88 = { { 9 }, 0x07104CD0 }; 

LinkAnimationHeader gPlayerAnim_002A90 = { { 8 }, 0x071048A0 }; 

LinkAnimationHeader gPlayerAnim_002A98 = { { 6 }, 0x07105190 }; 

LinkAnimationHeader gPlayerAnim_002AA0 = { { 19 }, 0x071054C0 }; 

LinkAnimationHeader gPlayerAnim_002AA8 = { { 4 }, 0x07105EC0 }; 

LinkAnimationHeader gPlayerAnim_002AB0 = { { 9 }, 0x071060E0 }; 

LinkAnimationHeader gPlayerAnim_002AB8 = { { 10 }, 0x071065A0 }; 

LinkAnimationHeader gPlayerAnim_002AC0 = { { 19 }, 0x07106AE0 }; 

LinkAnimationHeader gPlayerAnim_002AC8 = { { 20 }, 0x071074E0 }; 

LinkAnimationHeader gPlayerAnim_002AD0 = { { 39 }, 0x07107F60 }; 

LinkAnimationHeader gPlayerAnim_002AD8 = { { 21 }, 0x071093D0 }; 

LinkAnimationHeader gPlayerAnim_002AE0 = { { 11 }, 0x0710A4A0 }; 

LinkAnimationHeader gPlayerAnim_002AE8 = { { 11 }, 0x07109ED0 }; 

LinkAnimationHeader gPlayerAnim_002AF0 = { { 34 }, 0x0710AA70 }; 

LinkAnimationHeader gPlayerAnim_002AF8 = { { 15 }, 0x0710BC40 }; 

LinkAnimationHeader gPlayerAnim_002B00 = { { 21 }, 0x0710C420 }; 

LinkAnimationHeader gPlayerAnim_002B08 = { { 11 }, 0x0710D4F0 }; 

LinkAnimationHeader gPlayerAnim_002B10 = { { 11 }, 0x0710CF20 }; 

LinkAnimationHeader gPlayerAnim_002B18 = { { 13 }, 0x0710E190 }; 

LinkAnimationHeader gPlayerAnim_002B20 = { { 13 }, 0x0710DAC0 }; 

LinkAnimationHeader gPlayerAnim_002B28 = { { 13 }, 0x0710E860 }; 

LinkAnimationHeader gPlayerAnim_002B30 = { { 16 }, 0x0710EF30 }; 

LinkAnimationHeader gPlayerAnim_002B38 = { { 20 }, 0x0710F790 }; 

LinkAnimationHeader gPlayerAnim_002B40 = { { 20 }, 0x07110210 }; 

LinkAnimationHeader gPlayerAnim_002B48 = { { 20 }, 0x07110C90 }; 

LinkAnimationHeader gPlayerAnim_002B50 = { { 20 }, 0x07111710 }; 

LinkAnimationHeader gPlayerAnim_002B58 = { { 16 }, 0x07112190 }; 

LinkAnimationHeader gPlayerAnim_002B60 = { { 16 }, 0x071129F0 }; 

LinkAnimationHeader gPlayerAnim_002B68 = { { 29 }, 0x07113250 }; 

LinkAnimationHeader gPlayerAnim_002B70 = { { 5 }, 0x07114180 }; 

LinkAnimationHeader gPlayerAnim_002B78 = { { 16 }, 0x07114420 }; 

LinkAnimationHeader gPlayerAnim_002B80 = { { 6 }, 0x07114C80 }; 

LinkAnimationHeader gPlayerAnim_002B88 = { { 16 }, 0x07114FB0 }; 

LinkAnimationHeader gPlayerAnim_002B90 = { { 22 }, 0x07115810 }; 

LinkAnimationHeader gPlayerAnim_002B98 = { { 5 }, 0x071163A0 }; 

LinkAnimationHeader gPlayerAnim_002BA0 = { { 14 }, 0x07116640 }; 

LinkAnimationHeader gPlayerAnim_002BA8 = { { 6 }, 0x07116DA0 }; 

LinkAnimationHeader gPlayerAnim_002BB0 = { { 6 }, 0x071170D0 }; 

LinkAnimationHeader gPlayerAnim_002BB8 = { { 13 }, 0x07117400 }; 

LinkAnimationHeader gPlayerAnim_002BC0 = { { 29 }, 0x07117AD0 }; 

LinkAnimationHeader gPlayerAnim_002BC8 = { { 13 }, 0x07118A00 }; 

LinkAnimationHeader gPlayerAnim_002BD0 = { { 29 }, 0x071190D0 }; 

LinkAnimationHeader gPlayerAnim_002BD8 = { { 22 }, 0x0711A000 }; 

LinkAnimationHeader gPlayerAnim_002BE0 = { { 89 }, 0x0711AB90 }; 

LinkAnimationHeader gPlayerAnim_002BE8 = { { 11 }, 0x0711DA30 }; 

LinkAnimationHeader gPlayerAnim_002BF0 = { { 11 }, 0x0711E000 }; 

LinkAnimationHeader gPlayerAnim_002BF8 = { { 29 }, 0x0711E5D0 }; 

LinkAnimationHeader gPlayerAnim_002C00 = { { 51 }, 0x0711F500 }; 

LinkAnimationHeader gPlayerAnim_002C08 = { { 10 }, 0x07120FC0 }; 

LinkAnimationHeader gPlayerAnim_002C10 = { { 6 }, 0x07121500 }; 

LinkAnimationHeader gPlayerAnim_002C18 = { { 6 }, 0x07121830 }; 

LinkAnimationHeader gPlayerAnim_002C20 = { { 6 }, 0x07121B60 }; 

LinkAnimationHeader gPlayerAnim_002C28 = { { 6 }, 0x07121E90 }; 

LinkAnimationHeader gPlayerAnim_002C30 = { { 50 }, 0x071221C0 }; 

LinkAnimationHeader gPlayerAnim_002C38 = { { 41 }, 0x07123BF0 }; 

LinkAnimationHeader gPlayerAnim_002C40 = { { 11 }, 0x07125170 }; 

LinkAnimationHeader gPlayerAnim_002C48 = { { 23 }, 0x07126350 }; 

LinkAnimationHeader gPlayerAnim_002C50 = { { 23 }, 0x07125740 }; 

LinkAnimationHeader gPlayerAnim_002C58 = { { 20 }, 0x07126F60 }; 

LinkAnimationHeader gPlayerAnim_002C60 = { { 20 }, 0x071279E0 }; 

LinkAnimationHeader gPlayerAnim_002C68 = { { 20 }, 0x07128460 }; 

LinkAnimationHeader gPlayerAnim_002C70 = { { 12 }, 0x07128EE0 }; 

LinkAnimationHeader gPlayerAnim_002C78 = { { 23 }, 0x0712A140 }; 

LinkAnimationHeader gPlayerAnim_002C80 = { { 23 }, 0x07129530 }; 

LinkAnimationHeader gPlayerAnim_002C88 = { { 72 }, 0x0712AD50 }; 

LinkAnimationHeader gPlayerAnim_002C90 = { { 9 }, 0x0712D300 }; 

LinkAnimationHeader gPlayerAnim_002C98 = { { 21 }, 0x0712D7C0 }; 

LinkAnimationHeader gPlayerAnim_002CA0 = { { 9 }, 0x0712E2C0 }; 

LinkAnimationHeader gPlayerAnim_002CA8 = { { 18 }, 0x0712E780 }; 

LinkAnimationHeader gPlayerAnim_002CB0 = { { 18 }, 0x0712F0F0 }; 

LinkAnimationHeader gPlayerAnim_002CB8 = { { 24 }, 0x0712FA60 }; 

LinkAnimationHeader gPlayerAnim_002CC0 = { { 69 }, 0x071306F0 }; 

LinkAnimationHeader gPlayerAnim_002CC8 = { { 9 }, 0x07132B10 }; 

LinkAnimationHeader gPlayerAnim_002CD0 = { { 82 }, 0x07132FD0 }; 

LinkAnimationHeader gPlayerAnim_002CD8 = { { 28 }, 0x07135AC0 }; 

LinkAnimationHeader gPlayerAnim_002CE0 = { { 60 }, 0x07136970 }; 

LinkAnimationHeader gPlayerAnim_002CE8 = { { 25 }, 0x071388E0 }; 

LinkAnimationHeader gPlayerAnim_002CF0 = { { 60 }, 0x07139600 }; 

LinkAnimationHeader gPlayerAnim_002CF8 = { { 56 }, 0x0713B570 }; 

LinkAnimationHeader gPlayerAnim_002D00 = { { 9 }, 0x0713D2C0 }; 

LinkAnimationHeader gPlayerAnim_002D08 = { { 32 }, 0x0713D780 }; 

LinkAnimationHeader gPlayerAnim_002D10 = { { 52 }, 0x0713E840 }; 

LinkAnimationHeader gPlayerAnim_002D18 = { { 29 }, 0x07140380 }; 

LinkAnimationHeader gPlayerAnim_002D20 = { { 49 }, 0x071412B0 }; 

LinkAnimationHeader gPlayerAnim_002D28 = { { 43 }, 0x07142C60 }; 

LinkAnimationHeader gPlayerAnim_002D30 = { { 44 }, 0x071442F0 }; 

LinkAnimationHeader gPlayerAnim_002D38 = { { 28 }, 0x07145A00 }; 

LinkAnimationHeader gPlayerAnim_002D40 = { { 45 }, 0x071468B0 }; 

LinkAnimationHeader gPlayerAnim_002D48 = { { 10 }, 0x07148040 }; 

LinkAnimationHeader gPlayerAnim_002D50 = { { 50 }, 0x07148580 }; 

LinkAnimationHeader gPlayerAnim_002D58 = { { 10 }, 0x07149FB0 }; 

LinkAnimationHeader gPlayerAnim_002D60 = { { 10 }, 0x0714A4F0 }; 

LinkAnimationHeader gPlayerAnim_002D68 = { { 30 }, 0x0714AA30 }; 

LinkAnimationHeader gPlayerAnim_002D70 = { { 21 }, 0x0714B9F0 }; 

LinkAnimationHeader gPlayerAnim_002D78 = { { 21 }, 0x0714C4F0 }; 

LinkAnimationHeader gPlayerAnim_002D80 = { { 30 }, 0x0714CFF0 }; 

LinkAnimationHeader gPlayerAnim_002D88 = { { 15 }, 0x0714DFB0 }; 

LinkAnimationHeader gPlayerAnim_002D90 = { { 21 }, 0x0714E790 }; 

LinkAnimationHeader gPlayerAnim_002D98 = { { 21 }, 0x0714F290 }; 

LinkAnimationHeader gPlayerAnim_002DA0 = { { 12 }, 0x0714FD90 }; 

LinkAnimationHeader gPlayerAnim_002DA8 = { { 12 }, 0x071503E0 }; 

LinkAnimationHeader gPlayerAnim_002DB0 = { { 6 }, 0x07150A30 }; 

LinkAnimationHeader gPlayerAnim_002DB8 = { { 14 }, 0x07150D60 }; 

LinkAnimationHeader gPlayerAnim_002DC0 = { { 36 }, 0x071514C0 }; 

LinkAnimationHeader gPlayerAnim_002DC8 = { { 16 }, 0x071527A0 }; 

LinkAnimationHeader gPlayerAnim_002DD0 = { { 16 }, 0x07153000 }; 

LinkAnimationHeader gPlayerAnim_002DD8 = { { 8 }, 0x07153C90 }; 

LinkAnimationHeader gPlayerAnim_002DE0 = { { 8 }, 0x07153860 }; 

LinkAnimationHeader gPlayerAnim_002DE8 = { { 29 }, 0x071540C0 }; 

LinkAnimationHeader gPlayerAnim_002DF0 = { { 13 }, 0x07154FF0 }; 

LinkAnimationHeader gPlayerAnim_002DF8 = { { 50 }, 0x071556C0 }; 

LinkAnimationHeader gPlayerAnim_002E00 = { { 36 }, 0x071570F0 }; 

LinkAnimationHeader gPlayerAnim_002E08 = { { 17 }, 0x071583D0 }; 

LinkAnimationHeader gPlayerAnim_002E10 = { { 55 }, 0x07158CC0 }; 

LinkAnimationHeader gPlayerAnim_002E18 = { { 20 }, 0x0715A990 }; 

LinkAnimationHeader gPlayerAnim_002E20 = { { 10 }, 0x0715B410 }; 

LinkAnimationHeader gPlayerAnim_002E28 = { { 10 }, 0x0715B950 }; 

LinkAnimationHeader gPlayerAnim_002E30 = { { 20 }, 0x0715BE90 }; 

LinkAnimationHeader gPlayerAnim_002E38 = { { 54 }, 0x0715C910 }; 

LinkAnimationHeader gPlayerAnim_002E40 = { { 54 }, 0x0715E560 }; 

LinkAnimationHeader gPlayerAnim_002E48 = { { 29 }, 0x071601B0 }; 

LinkAnimationHeader gPlayerAnim_002E50 = { { 27 }, 0x071610E0 }; 

LinkAnimationHeader gPlayerAnim_002E58 = { { 28 }, 0x07161F10 }; 

LinkAnimationHeader gPlayerAnim_002E60 = { { 56 }, 0x07162DC0 }; 

LinkAnimationHeader gPlayerAnim_002E68 = { { 56 }, 0x07164B10 }; 

LinkAnimationHeader gPlayerAnim_002E70 = { { 30 }, 0x07166860 }; 

LinkAnimationHeader gPlayerAnim_002E78 = { { 56 }, 0x07167820 }; 

LinkAnimationHeader gPlayerAnim_002E80 = { { 21 }, 0x0716A4A0 }; 

LinkAnimationHeader gPlayerAnim_002E88 = { { 21 }, 0x0716AFA0 }; 

LinkAnimationHeader gPlayerAnim_002E90 = { { 29 }, 0x07169570 }; 

LinkAnimationHeader gPlayerAnim_002E98 = { { 20 }, 0x0716BAA0 }; 

LinkAnimationHeader gPlayerAnim_002EA0 = { { 2 }, 0x0716C520 }; 

LinkAnimationHeader gPlayerAnim_002EA8 = { { 5 }, 0x0716C630 }; 

LinkAnimationHeader gPlayerAnim_002EB0 = { { 5 }, 0x0716C8D0 }; 

LinkAnimationHeader gPlayerAnim_002EB8 = { { 5 }, 0x0716CB70 }; 

LinkAnimationHeader gPlayerAnim_002EC0 = { { 9 }, 0x0716CE10 }; 

LinkAnimationHeader gPlayerAnim_002EC8 = { { 5 }, 0x0716D2D0 }; 

LinkAnimationHeader gPlayerAnim_002ED0 = { { 20 }, 0x0716D570 }; 

LinkAnimationHeader gPlayerAnim_002ED8 = { { 20 }, 0x0716DFF0 }; 

LinkAnimationHeader gPlayerAnim_002EE0 = { { 10 }, 0x0716EA70 }; 

LinkAnimationHeader gPlayerAnim_002EE8 = { { 19 }, 0x0716EFB0 }; 

LinkAnimationHeader gPlayerAnim_002EF0 = { { 19 }, 0x0716F9B0 }; 

LinkAnimationHeader gPlayerAnim_002EF8 = { { 19 }, 0x071703B0 }; 

LinkAnimationHeader gPlayerAnim_002F00 = { { 26 }, 0x07170DB0 }; 

LinkAnimationHeader gPlayerAnim_002F08 = { { 113 }, 0x07171B50 }; 

LinkAnimationHeader gPlayerAnim_002F10 = { { 37 }, 0x07175680 }; 

LinkAnimationHeader gPlayerAnim_002F18 = { { 86 }, 0x071769E0 }; 

LinkAnimationHeader gPlayerAnim_002F20 = { { 61 }, 0x071796F0 }; 

LinkAnimationHeader gPlayerAnim_002F28 = { { 61 }, 0x0717B6E0 }; 

LinkAnimationHeader gPlayerAnim_002F30 = { { 20 }, 0x0717D6D0 }; 

LinkAnimationHeader gPlayerAnim_002F38 = { { 20 }, 0x0717E150 }; 

LinkAnimationHeader gPlayerAnim_002F40 = { { 20 }, 0x0717EBD0 }; 

LinkAnimationHeader gPlayerAnim_002F48 = { { 20 }, 0x071800D0 }; 

LinkAnimationHeader gPlayerAnim_002F50 = { { 20 }, 0x0717F650 }; 

LinkAnimationHeader gPlayerAnim_002F58 = { { 5 }, 0x07180B50 }; 

LinkAnimationHeader gPlayerAnim_002F60 = { { 12 }, 0x07180DF0 }; 

LinkAnimationHeader gPlayerAnim_002F68 = { { 39 }, 0x07181440 }; 

LinkAnimationHeader gPlayerAnim_002F70 = { { 16 }, 0x071828B0 }; 

LinkAnimationHeader gPlayerAnim_002F78 = { { 8 }, 0x07183540 }; 

LinkAnimationHeader gPlayerAnim_002F80 = { { 8 }, 0x07183110 }; 

LinkAnimationHeader gPlayerAnim_002F88 = { { 47 }, 0x07183970 }; 

LinkAnimationHeader gPlayerAnim_002F90 = { { 11 }, 0x07185210 }; 

LinkAnimationHeader gPlayerAnim_002F98 = { { 252 }, 0x071857E0 }; 

LinkAnimationHeader gPlayerAnim_002FA0 = { { 19 }, 0x0718DBD0 }; 

LinkAnimationHeader gPlayerAnim_002FA8 = { { 20 }, 0x0718E5D0 }; 

LinkAnimationHeader gPlayerAnim_002FB0 = { { 20 }, 0x0718F050 }; 

LinkAnimationHeader gPlayerAnim_002FB8 = { { 28 }, 0x0718FAD0 }; 

LinkAnimationHeader gPlayerAnim_002FC0 = { { 28 }, 0x07190980 }; 

LinkAnimationHeader gPlayerAnim_002FC8 = { { 28 }, 0x07191830 }; 

LinkAnimationHeader gPlayerAnim_002FD0 = { { 16 }, 0x071926E0 }; 

LinkAnimationHeader gPlayerAnim_002FD8 = { { 12 }, 0x07193400 }; 

LinkAnimationHeader gPlayerAnim_002FE0 = { { 9 }, 0x07192F40 }; 

LinkAnimationHeader gPlayerAnim_002FE8 = { { 18 }, 0x07193A50 }; 

LinkAnimationHeader gPlayerAnim_002FF0 = { { 18 }, 0x071943C0 }; 

LinkAnimationHeader gPlayerAnim_002FF8 = { { 38 }, 0x07194D30 }; 

LinkAnimationHeader gPlayerAnim_003000 = { { 38 }, 0x07196120 }; 

LinkAnimationHeader gPlayerAnim_003008 = { { 73 }, 0x07197510 }; 

LinkAnimationHeader gPlayerAnim_003010 = { { 72 }, 0x07199B50 }; 

LinkAnimationHeader gPlayerAnim_003018 = { { 36 }, 0x0719C100 }; 

LinkAnimationHeader gPlayerAnim_003020 = { { 21 }, 0x0719D3E0 }; 

LinkAnimationHeader gPlayerAnim_003028 = { { 21 }, 0x0719DEE0 }; 

LinkAnimationHeader gPlayerAnim_003030 = { { 32 }, 0x0719E9E0 }; 

LinkAnimationHeader gPlayerAnim_003038 = { { 32 }, 0x0719FAA0 }; 

LinkAnimationHeader gPlayerAnim_003040 = { { 20 }, 0x071A0B60 }; 

LinkAnimationHeader gPlayerAnim_003048 = { { 12 }, 0x071A15E0 }; 

LinkAnimationHeader gPlayerAnim_003050 = { { 19 }, 0x071A1C30 }; 

LinkAnimationHeader gPlayerAnim_003058 = { { 20 }, 0x071A2630 }; 

LinkAnimationHeader gPlayerAnim_003060 = { { 9 }, 0x071A30B0 }; 

LinkAnimationHeader gPlayerAnim_003068 = { { 7 }, 0x071A3570 }; 

LinkAnimationHeader gPlayerAnim_003070 = { { 5 }, 0x071A3920 }; 

LinkAnimationHeader gPlayerAnim_003078 = { { 20 }, 0x071A3BC0 }; 

LinkAnimationHeader gPlayerAnim_003080 = { { 20 }, 0x071A4640 }; 

LinkAnimationHeader gPlayerAnim_003088 = { { 20 }, 0x071A50C0 }; 

LinkAnimationHeader gPlayerAnim_003090 = { { 20 }, 0x071A5B40 }; 

LinkAnimationHeader gPlayerAnim_003098 = { { 12 }, 0x071A65C0 }; 

LinkAnimationHeader gPlayerAnim_0030A0 = { { 12 }, 0x071A6C10 }; 

LinkAnimationHeader gPlayerAnim_0030A8 = { { 68 }, 0x071A7260 }; 

LinkAnimationHeader gPlayerAnim_0030B0 = { { 16 }, 0x071A9600 }; 

LinkAnimationHeader gPlayerAnim_0030B8 = { { 16 }, 0x071A9E60 }; 

LinkAnimationHeader gPlayerAnim_0030C0 = { { 16 }, 0x071AA6C0 }; 

LinkAnimationHeader gPlayerAnim_0030C8 = { { 16 }, 0x071AAF20 }; 

LinkAnimationHeader gPlayerAnim_0030D0 = { { 31 }, 0x071AB780 }; 

LinkAnimationHeader gPlayerAnim_0030D8 = { { 31 }, 0x071AC7C0 }; 

LinkAnimationHeader gPlayerAnim_0030E0 = { { 16 }, 0x071AD800 }; 

LinkAnimationHeader gPlayerAnim_0030E8 = { { 19 }, 0x071AE060 }; 

LinkAnimationHeader gPlayerAnim_0030F0 = { { 16 }, 0x071AEA60 }; 

LinkAnimationHeader gPlayerAnim_0030F8 = { { 10 }, 0x071AF2C0 }; 

LinkAnimationHeader gPlayerAnim_003100 = { { 11 }, 0x071AF800 }; 

LinkAnimationHeader gPlayerAnim_003108 = { { 31 }, 0x071AFDD0 }; 

LinkAnimationHeader gPlayerAnim_003110 = { { 21 }, 0x071B0E10 }; 

LinkAnimationHeader gPlayerAnim_003118 = { { 15 }, 0x071B1910 }; 

LinkAnimationHeader gPlayerAnim_003120 = { { 9 }, 0x071B20F0 }; 

LinkAnimationHeader gPlayerAnim_003128 = { { 11 }, 0x071B25B0 }; 

LinkAnimationHeader gPlayerAnim_003130 = { { 20 }, 0x071B2B80 }; 

LinkAnimationHeader gPlayerAnim_003138 = { { 20 }, 0x071B3600 }; 

LinkAnimationHeader gPlayerAnim_003140 = { { 20 }, 0x071B4080 }; 

LinkAnimationHeader gPlayerAnim_003148 = { { 13 }, 0x071B4B00 }; 

LinkAnimationHeader gPlayerAnim_003150 = { { 19 }, 0x071B51D0 }; 

LinkAnimationHeader gPlayerAnim_003158 = { { 31 }, 0x071B5BD0 }; 

LinkAnimationHeader gPlayerAnim_003160 = { { 13 }, 0x071B6C10 }; 

LinkAnimationHeader gPlayerAnim_003168 = { { 16 }, 0x071B72E0 }; 

LinkAnimationHeader gPlayerAnim_003170 = { { 16 }, 0x071B7B40 }; 

LinkAnimationHeader gPlayerAnim_003178 = { { 16 }, 0x071B92D0 }; 

LinkAnimationHeader gPlayerAnim_003180 = { { 16 }, 0x071B9B30 }; 

LinkAnimationHeader gPlayerAnim_003188 = { { 29 }, 0x071B83A0 }; 

LinkAnimationHeader gPlayerAnim_003190 = { { 29 }, 0x071BA390 }; 

LinkAnimationHeader gPlayerAnim_003198 = { { 38 }, 0x071BB2C0 }; 

LinkAnimationHeader gPlayerAnim_0031A0 = { { 7 }, 0x071BC6B0 }; 

LinkAnimationHeader gPlayerAnim_0031A8 = { { 34 }, 0x071BCA60 }; 

LinkAnimationHeader gPlayerAnim_0031B0 = { { 15 }, 0x071BDC30 }; 

LinkAnimationHeader gPlayerAnim_0031B8 = { { 36 }, 0x071BE410 }; 

LinkAnimationHeader gPlayerAnim_0031C0 = { { 21 }, 0x071BF6F0 }; 

LinkAnimationHeader gPlayerAnim_0031C8 = { { 21 }, 0x071C01F0 }; 

LinkAnimationHeader gPlayerAnim_0031D0 = { { 10 }, 0x071C0CF0 }; 

LinkAnimationHeader gPlayerAnim_0031D8 = { { 19 }, 0x071C1230 }; 

LinkAnimationHeader gPlayerAnim_0031E0 = { { 19 }, 0x071C1C30 }; 

LinkAnimationHeader gPlayerAnim_0031E8 = { { 19 }, 0x071C2630 }; 

LinkAnimationHeader gPlayerAnim_0031F0 = { { 6 }, 0x071C5ED0 }; 

LinkAnimationHeader gPlayerAnim_0031F8 = { { 6 }, 0x071C6200 }; 

LinkAnimationHeader gPlayerAnim_003200 = { { 184 }, 0x071C6530 }; 

LinkAnimationHeader gPlayerAnim_003208 = { { 187 }, 0x071CC580 }; 

LinkAnimationHeader gPlayerAnim_003210 = { { 200 }, 0x071D2770 }; 

LinkAnimationHeader gPlayerAnim_003218 = { { 13 }, 0x071D9020 }; 

LinkAnimationHeader gPlayerAnim_003220 = { { 29 }, 0x071D96F0 }; 

LinkAnimationHeader gPlayerAnim_003228 = { { 13 }, 0x071DA620 }; 

LinkAnimationHeader gPlayerAnim_003230 = { { 29 }, 0x071DACF0 }; 

LinkAnimationHeader gPlayerAnim_003238 = { { 89 }, 0x071C3030 }; 

LinkAnimationHeader gPlayerAnim_003240 = { { 89 }, 0x071DBC20 }; 

LinkAnimationHeader gPlayerAnim_003248 = { { 184 }, 0x071DEAC0 }; 

LinkAnimationHeader gPlayerAnim_003250 = { { 187 }, 0x071E4B10 }; 

LinkAnimationHeader gPlayerAnim_003258 = { { 200 }, 0x071EAD00 }; 

LinkAnimationHeader gPlayerAnim_003260 = { { 112 }, 0x071F15B0 }; 

LinkAnimationHeader gPlayerAnim_003268 = { { 29 }, 0x071F5050 }; 

LinkAnimationHeader gPlayerAnim_003270 = { { 11 }, 0x071F5F80 }; 

LinkAnimationHeader gPlayerAnim_003278 = { { 11 }, 0x071F6550 }; 

LinkAnimationHeader gPlayerAnim_003280 = { { 11 }, 0x071F6B20 }; 

LinkAnimationHeader gPlayerAnim_003288 = { { 11 }, 0x071F70F0 }; 

LinkAnimationHeader gPlayerAnim_003290 = { { 29 }, 0x071F76C0 }; 

LinkAnimationHeader gPlayerAnim_003298 = { { 45 }, 0x071F85F0 }; 

LinkAnimationHeader gPlayerAnim_0032A0 = { { 80 }, 0x071F9D80 }; 

LinkAnimationHeader gPlayerAnim_0032A8 = { { 13 }, 0x071FC760 }; 

LinkAnimationHeader gPlayerAnim_0032B0 = { { 80 }, 0x071FCE30 }; 

LinkAnimationHeader gPlayerAnim_0032B8 = { { 31 }, 0x071FF810 }; 

LinkAnimationHeader gPlayerAnim_0032C0 = { { 71 }, 0x07200850 }; 

LinkAnimationHeader gPlayerAnim_0032C8 = { { 34 }, 0x07202D80 }; 

LinkAnimationHeader gPlayerAnim_0032D0 = { { 34 }, 0x07203F50 }; 

LinkAnimationHeader gPlayerAnim_0032D8 = { { 39 }, 0x07205120 }; 

LinkAnimationHeader gPlayerAnim_0032E0 = { { 27 }, 0x07206590 }; 

LinkAnimationHeader gPlayerAnim_0032E8 = { { 66 }, 0x072082F0 }; 

LinkAnimationHeader gPlayerAnim_0032F0 = { { 29 }, 0x072073C0 }; 

LinkAnimationHeader gPlayerAnim_0032F8 = { { 20 }, 0x0720A580 }; 

LinkAnimationHeader gPlayerAnim_003300 = { { 32 }, 0x0720B000 }; 

LinkAnimationHeader gPlayerAnim_003308 = { { 50 }, 0x0720C0C0 }; 

LinkAnimationHeader gPlayerAnim_003310 = { { 178 }, 0x0720DAF0 }; 

LinkAnimationHeader gPlayerAnim_003318 = { { 12 }, 0x07213820 }; 

LinkAnimationHeader gPlayerAnim_003320 = { { 10 }, 0x07213E70 }; 

LinkAnimationHeader gPlayerAnim_003328 = { { 46 }, 0x072143B0 }; 

LinkAnimationHeader gPlayerAnim_003330 = { { 10 }, 0x07215BD0 }; 

LinkAnimationHeader gPlayerAnim_003338 = { { 24 }, 0x07216110 }; 

LinkAnimationHeader gPlayerAnim_003340 = { { 24 }, 0x07216DA0 }; 

LinkAnimationHeader gPlayerAnim_003348 = { { 23 }, 0x07217A30 }; 

LinkAnimationHeader gPlayerAnim_003350 = { { 30 }, 0x07218640 }; 

LinkAnimationHeader gPlayerAnim_003358 = { { 29 }, 0x07219600 }; 

LinkAnimationHeader gPlayerAnim_003360 = { { 29 }, 0x0721A530 }; 

LinkAnimationHeader gPlayerAnim_003368 = { { 33 }, 0x0721B460 }; 

LinkAnimationHeader gPlayerAnim_003370 = { { 65 }, 0x0721C5B0 }; 

LinkAnimationHeader gPlayerAnim_003378 = { { 35 }, 0x0721FA20 }; 

LinkAnimationHeader gPlayerAnim_003380 = { { 35 }, 0x0721E7C0 }; 

LinkAnimationHeader gPlayerAnim_003388 = { { 35 }, 0x07220C80 }; 

LinkAnimationHeader gPlayerAnim_003390 = { { 65 }, 0x07221EE0 }; 

LinkAnimationHeader gPlayerAnim_003398 = { { 70 }, 0x072240F0 }; 

LinkAnimationHeader gPlayerAnim_0033A0 = { { 48 }, 0x072265A0 }; 

LinkAnimationHeader gPlayerAnim_0033A8 = { { 74 }, 0x07227EC0 }; 

LinkAnimationHeader gPlayerAnim_0033B0 = { { 75 }, 0x0722A580 }; 

LinkAnimationHeader gPlayerAnim_0033B8 = { { 208 }, 0x0722CCD0 }; 

LinkAnimationHeader gPlayerAnim_0033C0 = { { 195 }, 0x072339B0 }; 

LinkAnimationHeader gPlayerAnim_0033C8 = { { 30 }, 0x07239FD0 }; 

LinkAnimationHeader gPlayerAnim_0033D0 = { { 36 }, 0x0723AF90 }; 

LinkAnimationHeader gPlayerAnim_0033D8 = { { 24 }, 0x0723C270 }; 

LinkAnimationHeader gPlayerAnim_0033E0 = { { 90 }, 0x0723CF00 }; 

LinkAnimationHeader gPlayerAnim_0033E8 = { { 100 }, 0x0723FE20 }; 

LinkAnimationHeader gPlayerAnim_0033F0 = { { 138 }, 0x07243280 }; 

LinkAnimationHeader gPlayerAnim_0033F8 = { { 35 }, 0x07247AC0 }; 

LinkAnimationHeader gPlayerAnim_003400 = { { 25 }, 0x07248D20 }; 

LinkAnimationHeader gPlayerAnim_003408 = { { 90 }, 0x07249A40 }; 

LinkAnimationHeader gPlayerAnim_003410 = { { 100 }, 0x0724C960 }; 

LinkAnimationHeader gPlayerAnim_003418 = { { 93 }, 0x0724FDC0 }; 

LinkAnimationHeader gPlayerAnim_003420 = { { 70 }, 0x07252E70 }; 

LinkAnimationHeader gPlayerAnim_003428 = { { 108 }, 0x07255320 }; 

LinkAnimationHeader gPlayerAnim_003430 = { { 138 }, 0x07258BB0 }; 

LinkAnimationHeader gPlayerAnim_003438 = { { 45 }, 0x0725D3F0 }; 

LinkAnimationHeader gPlayerAnim_003440 = { { 20 }, 0x0725EB80 }; 

LinkAnimationHeader gPlayerAnim_003448 = { { 20 }, 0x0725F600 }; 

LinkAnimationHeader gPlayerAnim_003450 = { { 50 }, 0x07260080 }; 

LinkAnimationHeader gPlayerAnim_003458 = { { 30 }, 0x07261AB0 }; 

LinkAnimationHeader gPlayerAnim_003460 = { { 50 }, 0x07262A70 }; 

LinkAnimationHeader gPlayerAnim_003468 = { { 45 }, 0x072644A0 }; 

LinkAnimationHeader gPlayerAnim_003470 = { { 20 }, 0x07000000 }; 

LinkAnimationHeader gPlayerAnim_003478 = { { 20 }, 0x07000A80 }; 

LinkAnimationHeader gPlayerAnim_003480 = { { 15 }, 0x07001500 }; 

LinkAnimationHeader gPlayerAnim_003488 = { { 24 }, 0x07001CE0 }; 

LinkAnimationHeader gPlayerAnim_003490 = { { 15 }, 0x07002970 }; 

LinkAnimationHeader gPlayerAnim_003498 = { { 26 }, 0x07003150 }; 

LinkAnimationHeader gPlayerAnim_0034A0 = { { 20 }, 0x07003EF0 }; 

LinkAnimationHeader gPlayerAnim_0034A8 = { { 20 }, 0x07004970 }; 

LinkAnimationHeader gPlayerAnim_0034B0 = { { 10 }, 0x070053F0 }; 

LinkAnimationHeader gPlayerAnim_0034B8 = { { 30 }, 0x07005930 }; 

LinkAnimationHeader gPlayerAnim_0034C0 = { { 30 }, 0x070068F0 }; 

LinkAnimationHeader gPlayerAnim_0034C8 = { { 35 }, 0x070078B0 }; 

LinkAnimationHeader gPlayerAnim_0034D0 = { { 40 }, 0x07008B10 }; 

LinkAnimationHeader gPlayerAnim_0034D8 = { { 20 }, 0x0700A000 }; 

LinkAnimationHeader gPlayerAnim_0034E0 = { { 25 }, 0x0700AA80 }; 

LinkAnimationHeader gPlayerAnim_0034E8 = { { 20 }, 0x0700B7A0 }; 

LinkAnimationHeader gPlayerAnim_0034F0 = { { 40 }, 0x0700C220 }; 

static u8 unaccounted_0034F8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_003500[12] = {
    VTX(0, 648, 405, 0, 0, 0, 127, 0, 0),
    VTX(350, 648, -202, 0, 0, 0, 127, 0, 0),
    VTX(-350, 648, -202, 0, 0, 0, 127, 0, 0),
    VTX(-350, 648, -202, 0, 0, 0, 219, 135, 0),
    VTX(350, 648, -202, 0, 0, 0, 219, 135, 0),
    VTX(0, 0, 0, 0, 0, 0, 219, 135, 0),
    VTX(350, 648, -202, 0, 0, 105, 219, 60, 0),
    VTX(0, 648, 405, 0, 0, 105, 219, 60, 0),
    VTX(0, 0, 0, 0, 0, 105, 219, 60, 0),
    VTX(-350, 648, -202, 0, 0, 151, 219, 60, 0),
    VTX(0, 0, 0, 0, 0, 151, 219, 60, 0),
    VTX(0, 648, 405, 0, 0, 151, 219, 60, 0),
}; 

Gfx gDebugPyramidDL[] = {
    gsSPVertex(&gameplay_keepVtx_003500[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 4, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

u64 gDebugCircleTex[] = {
#include "assets/objects/gameplay_keep/debug_circle.i8.inc.c"
};

u64 gDebugBallTex[] = {
#include "assets/objects/gameplay_keep/debug_ball.i8.inc.c"
};

u64 gDebugCursorTex[] = {
#include "assets/objects/gameplay_keep/debug_cursor.i8.inc.c"
};

u64 gDebugCrossTex[] = {
#include "assets/objects/gameplay_keep/debug_cross.i8.inc.c"
};

Gfx gDebugArrowDL[] = {
    gsSPVertex(&gameplay_keepVtx_003A50[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 23, 25, 0, 24, 26, 25, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 31, 29, 0),
    gsSPVertex(&gameplay_keepVtx_003C50[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_003A50[32] = {
    VTX(3, -2, 8, 0, 0, 126, 14, 4, 255),
    VTX(3, 3, -7, 0, 0, 126, 14, 4, 255),
    VTX(3, 3, 8, 0, 0, 126, 14, 4, 255),
    VTX(3, -2, -7, 0, 0, 126, 14, 4, 255),
    VTX(3, -2, -7, 0, 0, 0, 0, 130, 255),
    VTX(-2, 3, -7, 0, 0, 0, 0, 130, 255),
    VTX(3, 3, -7, 0, 0, 0, 0, 130, 255),
    VTX(-2, -2, -7, 0, 0, 0, 0, 130, 255),
    VTX(-2, 3, -7, 0, 0, 0, 127, 0, 255),
    VTX(3, 3, 8, 0, 0, 0, 127, 0, 255),
    VTX(3, 3, -7, 0, 0, 0, 127, 0, 255),
    VTX(-2, 3, 8, 0, 0, 0, 127, 0, 255),
    VTX(3, -2, -7, 0, 0, 0, 131, 3, 255),
    VTX(3, -2, 8, 0, 0, 0, 131, 3, 255),
    VTX(-2, -2, 8, 0, 0, 0, 131, 3, 255),
    VTX(-2, -2, -7, 0, 0, 0, 131, 3, 255),
    VTX(-2, -2, 8, 0, 0, 0, 0, 127, 255),
    VTX(3, -2, 8, 0, 0, 0, 0, 127, 255),
    VTX(3, 3, 8, 0, 0, 0, 0, 127, 255),
    VTX(-2, 3, 8, 0, 0, 0, 0, 127, 255),
    VTX(-10, -2, 7, 0, 0, 0, 131, 3, 255),
    VTX(11, -2, 7, 0, 0, 0, 132, 18, 255),
    VTX(0, 0, 28, 0, 0, 0, 132, 18, 255),
    VTX(11, -2, 7, 0, 0, 0, 0, 130, 255),
    VTX(-10, -2, 7, 0, 0, 0, 0, 130, 255),
    VTX(0, 0, 7, 0, 0, 0, 0, 130, 255),
    VTX(0, 6, 7, 0, 0, 0, 0, 130, 255),
    VTX(0, 6, 7, 0, 0, 133, 25, 7, 255),
    VTX(-10, -2, 7, 0, 0, 133, 25, 7, 255),
    VTX(0, 0, 28, 0, 0, 0, 122, 35, 255),
    VTX(11, -2, 7, 0, 0, 80, 94, 27, 255),
    VTX(0, 6, 7, 0, 0, 126, 14, 4, 255),
}; 

static Vtx gameplay_keepVtx_003C50[4] = {
    VTX(-2, -2, -7, 0, 0, 133, 25, 7, 255),
    VTX(-2, -2, 8, 0, 0, 133, 25, 7, 255),
    VTX(-2, 3, 8, 0, 0, 133, 25, 7, 255),
    VTX(-2, 3, -7, 0, 0, 133, 25, 7, 255),
}; 

Gfx gDebugCameraDL[] = {
    gsSPVertex(&gameplay_keepVtx_003D08[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 0, 2, 0),
    gsSP2Triangles(4, 6, 2, 0, 6, 5, 2, 0),
    gsSP2Triangles(7, 8, 9, 0, 8, 10, 11, 0),
    gsSP2Triangles(8, 11, 12, 0, 7, 10, 8, 0),
    gsSP2Triangles(13, 14, 15, 0, 13, 15, 16, 0),
    gsSP2Triangles(17, 18, 19, 0, 17, 20, 18, 0),
    gsSP2Triangles(21, 22, 23, 0, 22, 24, 23, 0),
    gsSP2Triangles(25, 26, 23, 0, 26, 27, 23, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 31, 29, 0),
    gsSPVertex(&gameplay_keepVtx_003F08[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_003D08[32] = {
    VTX(-3, 10, 25, 0, 0, 0, 0, 127, 255),
    VTX(-7, 4, 25, 0, 0, 0, 0, 127, 255),
    VTX(0, 4, 25, 0, 0, 0, 0, 127, 255),
    VTX(-3, -2, 25, 0, 0, 0, 0, 127, 255),
    VTX(4, -2, 25, 0, 0, 0, 0, 127, 255),
    VTX(4, 10, 25, 0, 0, 0, 0, 127, 255),
    VTX(8, 4, 25, 0, 0, 0, 0, 127, 255),
    VTX(-5, -9, 12, 0, 0, 241, 137, 220, 255),
    VTX(6, -4, -11, 0, 0, 25, 212, 141, 255),
    VTX(6, -9, 12, 0, 0, 241, 137, 220, 255),
    VTX(-5, -4, -11, 0, 0, 25, 212, 141, 255),
    VTX(-5, 10, -11, 0, 0, 25, 212, 141, 255),
    VTX(6, 10, -11, 0, 0, 25, 212, 141, 255),
    VTX(-5, -9, 12, 0, 0, 0, 0, 127, 255),
    VTX(6, -9, 12, 0, 0, 0, 0, 127, 255),
    VTX(6, 10, 12, 0, 0, 0, 0, 127, 255),
    VTX(-5, 10, 12, 0, 0, 0, 0, 127, 255),
    VTX(6, 10, 12, 0, 0, 34, 120, 234, 255),
    VTX(-5, 10, -11, 0, 0, 0, 127, 0, 255),
    VTX(-5, 10, 12, 0, 0, 34, 120, 234, 255),
    VTX(6, 10, -11, 0, 0, 0, 127, 0, 255),
    VTX(-3, 10, 25, 0, 0, 34, 120, 234, 255),
    VTX(4, 10, 25, 0, 0, 34, 120, 234, 255),
    VTX(0, 3, 1, 0, 0, 25, 212, 141, 255),
    VTX(8, 4, 25, 0, 0, 34, 120, 234, 255),
    VTX(8, 4, 25, 0, 0, 121, 225, 239, 255),
    VTX(4, -2, 25, 0, 0, 241, 137, 220, 255),
    VTX(-3, -2, 25, 0, 0, 241, 137, 220, 255),
    VTX(-7, 4, 25, 0, 0, 241, 137, 220, 255),
    VTX(0, 3, 1, 0, 0, 131, 0, 242, 255),
    VTX(-7, 4, 25, 0, 0, 136, 32, 239, 255),
    VTX(-3, 10, 25, 0, 0, 133, 21, 245, 255),
}; 

static Vtx gameplay_keepVtx_003F08[8] = {
    VTX(6, -9, 12, -2115, -1279, 127, 0, 0, 255),
    VTX(6, -4, -11, 2093, -656, 127, 0, 0, 255),
    VTX(6, 10, -11, 2116, 1280, 127, 0, 0, 255),
    VTX(6, 10, 12, -2115, 1280, 121, 225, 239, 255),
    VTX(-5, -4, -11, -33, -656, 131, 0, 242, 255),
    VTX(-5, -9, 12, 3123, -1279, 136, 32, 239, 255),
    VTX(-5, 10, 12, 3123, 1280, 133, 21, 245, 255),
    VTX(-5, 10, -11, -50, 1280, 131, 0, 242, 255),
}; 

static Vtx gameplay_keepVtx_003F88[4] = {
    VTX(-8000, 0, -8000, -3584, -3584, 0, 120, 0, 255),
    VTX(-8000, 0, 8000, -3584, 4608, 0, 120, 0, 255),
    VTX(8000, 0, 8000, 4608, 4608, 0, 120, 0, 255),
    VTX(8000, 0, -8000, 4608, -3584, 0, 120, 0, 255),
}; 

Gfx gDebugCheckeredFloorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gDebugCheckeredFloorTex, G_IM_FMT_IA, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                            G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_003F88[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gDebugCheckeredFloorTex[] = {
#include "assets/objects/gameplay_keep/debug_checkered_floor.ia4.inc.c"
};

static Vtx gameplay_keepVtx_004258[4] = {
    VTX(-32, 32, 0, 0, 0, 0, 0, 127, 255),
    VTX(32, 32, 0, 1023, 0, 0, 0, 127, 255),
    VTX(-32, -32, 0, 0, 1023, 0, 0, 127, 255),
    VTX(32, -32, 0, 1023, 1023, 0, 0, 127, 255),
}; 

Gfx gDebugSpriteDL[] = {
    gsSPVertex(&gameplay_keepVtx_004258[0], 4, 0),
    gsSP2Triangles(0, 2, 1, 0, 1, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static s16 sArrow1AnimFrameData[32] = {
    0x0000, 0x4000, 0x0000, 0xE89F, 0xD0D3, 0xB8AC, 0xA039, 0x878A, 0x6EAE, 0x55B5, 0x3CAD, 0x23A6, 0x0AB0, 0xF1DA, 
    0xD934, 0xC0CD, 0xA8B4, 0x90F9, 0x79AB, 0x62D9, 0x4C93, 0x36E9, 0x21EA, 0x0DA5, 0xFA2A, 0xE787, 0xD76E, 0xD56F, 
    0xDEB7, 0xED0E, 0xFA3A, 0x0000, 
}; 

static JointIndex sArrow1AnimJointIndices[5] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0002, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gArrow1Anim = { { 30 }, sArrow1AnimFrameData, sArrow1AnimJointIndices, 2 }; 

static s16 sArrow2AnimFrameData[22] = {
    0x0000, 0x4000, 0x3AA1, 0x3047, 0x2997, 0x3818, 0x50AB, 0x507F, 0x3C3A, 0x2F4C, 0x37DC, 0x43E1, 0x484F, 0x3B90, 
    0x3CA2, 0x4367, 0x3DE4, 0x4000, 0x400C, 0x3F0F, 0x3FF6, 0x0000, 
}; 

static JointIndex sArrow2AnimJointIndices[5] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gArrow2Anim = { { 20 }, sArrow2AnimFrameData, sArrow2AnimJointIndices, 1 }; 

static u8 unaccounted_00437C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

u64 gArrowShaftTex[] = {
#include "assets/objects/gameplay_keep/arrow_shaft.rgb5a1.inc.c"
};

u64 gArrowFletchingTex[] = {
#include "assets/objects/gameplay_keep/arrow_fletching.rgb5a1.inc.c"
};

static Vtx gameplay_keepVtx_005780[18] = {
    VTX(2001, -38, 0, 249, 4081, 0, 139, 233, 255),
    VTX(-5, -20, -32, 464, 24, 0, 178, 166, 255),
    VTX(2001, -20, -32, 464, 4081, 0, 217, 143, 255),
    VTX(-5, -38, 0, 249, 24, 0, 139, 23, 255),
    VTX(2001, -20, 32, 33, 4081, 0, 196, 103, 255),
    VTX(-5, -20, 32, 33, 24, 0, 196, 103, 255),
    VTX(-5, 17, -32, 464, 24, 0, 60, 153, 255),
    VTX(2001, 17, -32, 464, 4081, 0, 60, 153, 255),
    VTX(2001, 35, 0, 249, 4081, 0, 120, 0, 255),
    VTX(-5, 17, 32, 33, 24, 0, 60, 103, 255),
    VTX(2001, 17, 32, 33, 4081, 0, 60, 103, 255),
    VTX(-5, 35, 0, 249, 24, 0, 120, 0, 255),
    VTX(2001, 17, 32, 33, 4081, 120, 0, 0, 255),
    VTX(2001, 17, -32, 464, 4081, 120, 0, 0, 255),
    VTX(2001, 35, 0, 249, 4081, 120, 0, 0, 255),
    VTX(2001, -20, -32, 464, 4081, 120, 0, 0, 255),
    VTX(2001, -38, 0, 249, 4081, 120, 0, 0, 255),
    VTX(2001, -20, 32, 33, 4081, 120, 0, 0, 255),
}; 

static Vtx gameplay_keepVtx_0058A0[8] = {
    VTX(1958, -1, -149, 896, 122, 0, 120, 0, 255),
    VTX(1438, -1, -149, 8, 122, 0, 120, 0, 255),
    VTX(1438, -1, 179, 8, 960, 0, 120, 0, 255),
    VTX(1958, -1, 179, 896, 960, 0, 120, 0, 255),
    VTX(1958, -149, 1, 896, 122, 0, 0, 136, 255),
    VTX(1438, 179, 1, 8, 960, 0, 0, 136, 255),
    VTX(1958, 179, 1, 896, 960, 0, 0, 136, 255),
    VTX(1438, -149, 1, 8, 122, 0, 0, 136, 255),
}; 

static Vtx gameplay_keepVtx_005920[3] = {
    VTX(-37, 63, -3, 685, 547, 34, 94, 190, 255),
    VTX(64, -1, 0, 1040, 465, 34, 94, 190, 255),
    VTX(1, -1, -75, 718, 387, 34, 94, 190, 255),
}; 

static Vtx gameplay_keepVtx_005950[21] = {
    VTX(64, -1, 0, 1040, 465, 33, 97, 61, 255),
    VTX(-37, 63, -3, 685, 547, 33, 97, 61, 255),
    VTX(4, -1, 77, 808, 687, 33, 97, 61, 255),
    VTX(68, -1, 200, 998, 902, 209, 0, 110, 255),
    VTX(-37, 63, -3, 685, 547, 235, 118, 255, 255),
    VTX(-396, -1, 0, -2, 726, 203, 100, 39, 255),
    VTX(68, -1, -200, 775, 105, 209, 0, 146, 255),
    VTX(-37, -66, -3, 685, 547, 106, 0, 56, 255),
    VTX(68, -1, -200, 775, 105, 106, 0, 56, 255),
    VTX(-37, 63, -3, 685, 547, 106, 0, 56, 255),
    VTX(-37, -66, -3, 685, 547, 106, 0, 201, 255),
    VTX(-37, 61, -3, 685, 547, 106, 0, 201, 255),
    VTX(68, -1, 200, 998, 902, 106, 0, 201, 255),
    VTX(-37, -66, -3, 685, 547, 235, 138, 255, 255),
    VTX(-396, -1, 0, -2, 726, 236, 147, 210, 255),
    VTX(4, -1, 77, 808, 687, 33, 159, 61, 255),
    VTX(-37, -66, -3, 685, 547, 33, 159, 61, 255),
    VTX(64, -1, 0, 1040, 465, 33, 159, 61, 255),
    VTX(1, -1, -75, 718, 387, 34, 162, 190, 255),
    VTX(64, -1, 0, 1040, 465, 34, 162, 190, 255),
    VTX(-37, -66, -3, 685, 547, 34, 162, 190, 255),
}; 

Gfx gArrowNearDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gArrowShaftTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_005780[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 3, 0, 0, 4, 5, 3, 0),
    gsSP2Triangles(6, 2, 1, 0, 6, 7, 2, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(6, 8, 7, 0, 6, 11, 8, 0),
    gsSP2Triangles(4, 9, 5, 0, 4, 10, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 15, 13, 0),
    gsSP2Triangles(12, 16, 15, 0, 12, 17, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gArrowFletchingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_0058A0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 7, 5, 0),
    gsDPPipeSync(),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 5, 5, 1, 1),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_005920[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_005950[0], 21, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 5, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 6, 0),
    gsSP2Triangles(5, 13, 3, 0, 15, 16, 17, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_005C80[3] = {
    VTX(-2, 0, 73, 839, 462, 244, 103, 60, 255),
    VTX(-2, 88, -77, 832, 781, 244, 103, 60, 255),
    VTX(-502, -1, -27, -153, 820, 244, 103, 60, 255),
}; 

static Vtx gameplay_keepVtx_005CB0[9] = {
    VTX(-2, 88, -77, 832, 781, 244, 1, 137, 255),
    VTX(-1, -86, -78, 833, 784, 244, 1, 137, 255),
    VTX(-502, -1, -27, -153, 820, 244, 1, 137, 255),
    VTX(-1, -86, -78, 833, 784, 244, 153, 59, 255),
    VTX(-2, 0, 73, 839, 462, 244, 153, 59, 255),
    VTX(-502, -1, -27, -153, 820, 244, 153, 59, 255),
    VTX(-1, -86, -78, 833, 784, 119, 0, 0, 255),
    VTX(-2, 88, -77, 832, 781, 119, 0, 0, 255),
    VTX(-2, 0, 73, 839, 462, 119, 0, 0, 255),
}; 

static Vtx gameplay_keepVtx_005D40[4] = {
    VTX(1958, -1, -189, 935, 838, 0, 120, 0, 255),
    VTX(1438, -1, 164, 8, 182, 0, 120, 0, 255),
    VTX(1958, -1, 164, 935, 182, 0, 120, 0, 255),
    VTX(1438, -1, -189, 8, 838, 0, 120, 0, 255),
}; 

static Vtx gameplay_keepVtx_005D80[4] = {
    VTX(1958, -189, 1, 935, 838, 0, 0, 136, 255),
    VTX(1438, 164, 1, 8, 182, 0, 0, 136, 255),
    VTX(1958, 164, 1, 935, 182, 0, 0, 136, 255),
    VTX(1438, -189, 1, 8, 838, 0, 0, 136, 255),
}; 

static Vtx gameplay_keepVtx_005DC0[6] = {
    VTX(2011, -39, -44, 70, 4083, 53, 162, 205, 255),
    VTX(-2, 27, -42, 120, 80, 0, 57, 151, 255),
    VTX(2011, 25, -46, 57, 4083, 60, 103, 253, 255),
    VTX(-2, -37, -40, 132, 80, 0, 151, 199, 255),
    VTX(2011, -5, 11, 470, 4083, 85, 2, 84, 255),
    VTX(-2, -3, 14, 533, 80, 0, 3, 119, 255),
}; 

Gfx gArrowFarDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 5, 5, 1, 1),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_005C80[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_005CB0[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gArrowFletchingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_005D40[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPVertex(&gameplay_keepVtx_005D80[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gArrowShaftTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_005DC0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 3, 0, 0),
    gsSP2Triangles(2, 5, 4, 0, 2, 1, 5, 0),
    gsSPEndDisplayList(),
}; 

LodLimb sArrowSkelLimb_005FC0 = { 
    { 0, 0, 0 },
    0x01, 0xFF,
    { NULL, NULL }
}; 

LodLimb sArrowSkelLimb_005FD0 = { 
    { -1, 0, 998 },
    0x02, 0xFF,
    { NULL, NULL }
}; 

LodLimb sArrowSkelLimb_005FE0 = { 
    { 0, 0, 0 },
    0x03, 0xFF,
    { NULL, NULL }
}; 

LodLimb sArrowSkelLimb_005FF0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    { gArrowNearDL, gArrowFarDL }
}; 

static void* sArrowSkelLimbs[4] = {
    &sArrowSkelLimb_005FC0,
    &sArrowSkelLimb_005FD0,
    &sArrowSkelLimb_005FE0,
    &sArrowSkelLimb_005FF0,
}; 

SkeletonHeader gArrowSkel = { sArrowSkelLimbs, 4 }; 

static u8 unaccounted_006018[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gUnknownEffBlureTex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_blure.i8.inc.c"
};

u64 gBombBodyTex[] = {
#include "assets/objects/gameplay_keep/bomb_body.ia8.inc.c"
};

static Vtx gameplay_keepVtx_007820[4] = {
    VTX(800, 0, -800, 2048, 0, 255, 255, 255, 255),
    VTX(-800, 0, -800, 0, 0, 255, 255, 255, 255),
    VTX(-800, 0, 800, 0, 2048, 255, 255, 255, 255),
    VTX(800, 0, 800, 2048, 2048, 255, 255, 255, 255),
}; 

Gfx gBombBodyDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBombBodyTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(1, 0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsSPVertex(&gameplay_keepVtx_007820[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0078E8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gBombCapTex[] = {
#include "assets/objects/gameplay_keep/bomb_cap.rgb5a1.inc.c"
};

static Vtx gameplay_keepVtx_007970[4] = {
    VTX(-1, 640, 397, 132, 218, 0, 69, 97, 255),
    VTX(-1, 820, 269, 126, 197, 0, 98, 69, 255),
    VTX(-256, 820, 84, 71, 179, 191, 98, 21, 255),
    VTX(-378, 640, 124, 51, 191, 163, 69, 30, 255),
}; 

static Vtx gameplay_keepVtx_0079B0[10] = {
    VTX(-378, 640, 124, 51, 191, 163, 69, 30, 255),
    VTX(-256, 820, 84, 71, 179, 191, 98, 21, 255),
    VTX(-159, 820, -215, 74, 125, 216, 98, 200, 255),
    VTX(-234, 640, -319, 55, 112, 199, 69, 177, 255),
    VTX(156, 820, -215, 130, 110, 40, 98, 200, 255),
    VTX(232, 640, -319, 139, 89, 57, 69, 177, 255),
    VTX(253, 820, 84, 163, 154, 65, 98, 21, 255),
    VTX(375, 640, 124, 186, 155, 93, 69, 30, 255),
    VTX(-1, 820, 269, 126, 197, 0, 98, 69, 255),
    VTX(-1, 640, 397, 132, 218, 0, 69, 97, 255),
}; 

Gfx gBombCapDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x03E8, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBombCapTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_007970[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&gameplay_keepVtx_0079B0[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 2, 4, 0, 3, 4, 5, 0),
    gsSP2Triangles(5, 4, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 6, 8, 0, 7, 8, 9, 0),
    gsSP2Triangles(8, 6, 4, 0, 8, 4, 2, 0),
    gsSP1Triangle(8, 2, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 gBombchuBodyTex[] = {
#include "assets/objects/gameplay_keep/bombchu_body.rgb5a1.inc.c"
};

static Vtx gameplay_keepVtx_007B90[3] = {
    VTX(-800, -4, 320, 67, 176, 254, 137, 245, 255),
    VTX(-918, 834, -753, 61, 113, 243, 162, 183, 255),
    VTX(-439, 470, -367, 122, 136, 243, 162, 183, 255),
}; 

static Vtx gameplay_keepVtx_007BC0[14] = {
    VTX(800, -4, 320, 282, 176, 64, 94, 38, 255),
    VTX(918, 834, -753, 308, 113, 66, 77, 63, 255),
    VTX(0, 388, 742, 170, 200, 0, 114, 36, 255),
    VTX(918, 834, -753, 308, 113, 173, 81, 229, 255),
    VTX(439, 470, -367, 240, 136, 251, 87, 174, 255),
    VTX(-918, 834, -753, 61, 113, 190, 77, 63, 255),
    VTX(-800, -4, 320, 67, 176, 192, 94, 38, 255),
    VTX(-439, 470, -367, 122, 136, 8, 105, 200, 255),
    VTX(-918, 834, -753, 61, 113, 83, 81, 229, 255),
    VTX(918, 834, -753, 308, 113, 13, 162, 183, 255),
    VTX(800, -4, 320, 282, 176, 4, 139, 231, 255),
    VTX(-365, -4, 1060, 118, 219, 220, 103, 48, 255),
    VTX(0, -4, 1339, 165, 235, 0, 100, 66, 255),
    VTX(365, -4, 1060, 217, 219, 36, 103, 48, 255),
}; 

static Vtx gameplay_keepVtx_007CA0[15] = {
    VTX(307, 92, -499, 0, 256, 243, 48, 0, 255),
    VTX(-307, 92, -499, 0, 256, 243, 48, 0, 255),
    VTX(0, 88, -1673, 0, 256, 243, 48, 0, 255),
    VTX(1, 254, -312, 0, 256, 243, 48, 0, 255),
    VTX(439, 470, -367, 0, 256, 243, 48, 0, 255),
    VTX(1144, -4, -767, 0, 256, 243, 48, 0, 255),
    VTX(0, -4, -561, 0, 256, 243, 48, 0, 255),
    VTX(-439, 470, -367, 0, 256, 243, 48, 0, 255),
    VTX(-1144, -4, -767, 0, 256, 243, 48, 0, 255),
    VTX(-800, -4, 320, 0, 256, 243, 48, 0, 255),
    VTX(0, 388, 742, 0, 256, 243, 48, 0, 255),
    VTX(800, -4, 320, 0, 256, 243, 48, 0, 255),
    VTX(0, -4, 1339, 0, 256, 243, 48, 0, 255),
    VTX(-365, -4, 1060, 0, 256, 243, 48, 0, 255),
    VTX(365, -4, 1060, 0, 256, 243, 48, 0, 255),
}; 

static Vtx gameplay_keepVtx_007D90[8] = {
    VTX(-107, 54, 1206, 0, 256, 188, 75, 0, 255),
    VTX(-201, 116, 1039, 0, 256, 188, 75, 0, 255),
    VTX(-271, 118, 982, 0, 256, 188, 75, 0, 255),
    VTX(-246, 59, 1092, 0, 256, 188, 75, 0, 255),
    VTX(246, 59, 1092, 0, 256, 188, 75, 0, 255),
    VTX(271, 118, 982, 0, 256, 188, 75, 0, 255),
    VTX(201, 116, 1039, 0, 256, 188, 75, 0, 255),
    VTX(107, 54, 1206, 0, 256, 188, 75, 0, 255),
}; 

Gfx gBombchuDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0190, 0x0190, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBombchuBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 3, 3, 15, 15),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_007B90[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_007BC0[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 4, 0),
    gsSP2Triangles(2, 5, 6, 0, 7, 8, 2, 0),
    gsSP2Triangles(4, 9, 10, 0, 11, 12, 2, 0),
    gsSP2Triangles(2, 12, 13, 0, 2, 6, 11, 0),
    gsSP1Triangle(13, 0, 2, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(ENVIRONMENT, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&gameplay_keepVtx_007CA0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 0, 2, 0, 4, 5, 6, 0),
    gsSP2Triangles(7, 4, 6, 0, 6, 8, 7, 0),
    gsSP2Triangles(7, 8, 9, 0, 10, 4, 7, 0),
    gsSP2Triangles(11, 5, 4, 0, 9, 12, 13, 0),
    gsSP2Triangles(9, 14, 12, 0, 9, 11, 14, 0),
    gsSP2Triangles(9, 6, 5, 0, 9, 5, 11, 0),
    gsSP1Triangle(9, 8, 6, 0),
    gsDPPipeSync(),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 188, 75, 0, 255),
    gsSPVertex(&gameplay_keepVtx_007D90[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_007F78[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gEffBombExplosion1Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_1.ia16.inc.c"
};

u64 gEffBombExplosion2Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_2.ia16.inc.c"
};

u64 gEffBombExplosion3Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_3.ia16.inc.c"
};

u64 gEffBombExplosion4Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_4.ia16.inc.c"
};

u64 gEffBombExplosion5Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_5.ia16.inc.c"
};

u64 gEffBombExplosion6Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_6.ia16.inc.c"
};

u64 gEffBombExplosion7Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_7.ia16.inc.c"
};

u64 gEffBombExplosion8Tex[] = {
#include "assets/objects/gameplay_keep/eff_bomb_explosion_8.ia16.inc.c"
};

Gfx gEffBombExplosion1DL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00C058[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx gEffBombExplosion2DL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPEndDisplayList(),
}; 

Gfx gEffBombExplosion3DL[] = {
    gsSPVertex(&gameplay_keepVtx_00C058[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_00C058[4] = {
    VTX(32, 32, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-31, 32, 0, 0, 0, 255, 255, 255, 255),
    VTX(-31, -31, 0, 0, 1024, 255, 255, 255, 255),
    VTX(32, -31, 0, 1024, 1024, 255, 255, 255, 255),
}; 

static u8 unaccounted_00C098[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_00C0A0[3] = {
    VTX(346, 0, 200, 611, 512, 0, 120, 0, 255),
    VTX(0, 0, -400, 256, -102, 0, 120, 0, 255),
    VTX(-346, 0, 200, -99, 512, 0, 120, 0, 255),
}; 

Gfx gEffFragments1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWitheredLeafTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_00C0A0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 gWitheredLeafTex[] = {
#include "assets/objects/gameplay_keep/withered_leaf.rgb5a1.inc.c"
};

static Vtx gameplay_keepVtx_00C360[36] = {
    VTX(0, 0, -151, 703, 822, 18, 145, 40, 255),
    VTX(-245, -59, -202, 341, 798, 18, 145, 40, 255),
    VTX(0, -72, -353, 661, 532, 18, 145, 40, 255),
    VTX(0, -72, -353, 661, 532, 223, 150, 212, 255),
    VTX(-245, -59, -202, 341, 798, 223, 150, 212, 255),
    VTX(-213, 0, -368, 353, 554, 223, 150, 212, 255),
    VTX(0, 0, -481, 635, 348, 30, 155, 199, 255),
    VTX(213, 0, -368, 963, 467, 30, 155, 199, 255),
    VTX(0, -72, -353, 661, 532, 30, 155, 199, 255),
    VTX(0, 0, -481, 635, 348, 226, 155, 199, 255),
    VTX(0, -72, -353, 661, 532, 226, 155, 199, 255),
    VTX(-213, 0, -368, 353, 554, 226, 155, 199, 255),
    VTX(0, 0, -151, 703, 822, 238, 145, 40, 255),
    VTX(0, -72, -353, 661, 532, 238, 145, 40, 255),
    VTX(245, -59, -202, 1043, 698, 238, 145, 40, 255),
    VTX(0, -72, -353, 661, 532, 33, 150, 212, 255),
    VTX(213, 0, -368, 963, 467, 33, 150, 212, 255),
    VTX(245, -59, -202, 1043, 698, 33, 150, 212, 255),
    VTX(0, 72, -353, 661, 532, 223, 106, 212, 255),
    VTX(-213, 0, -368, 353, 554, 223, 106, 212, 255),
    VTX(-245, 59, -202, 341, 799, 223, 106, 212, 255),
    VTX(0, 0, -151, 703, 822, 18, 111, 40, 255),
    VTX(0, 72, -353, 661, 532, 18, 111, 40, 255),
    VTX(-245, 59, -202, 341, 799, 18, 111, 40, 255),
    VTX(-213, 0, -368, 353, 554, 226, 101, 199, 255),
    VTX(0, 72, -353, 661, 532, 226, 101, 199, 255),
    VTX(0, 0, -481, 635, 348, 226, 101, 199, 255),
    VTX(0, 0, -481, 635, 348, 30, 101, 199, 255),
    VTX(0, 72, -353, 661, 532, 30, 101, 199, 255),
    VTX(213, 0, -368, 963, 467, 30, 101, 199, 255),
    VTX(213, 0, -368, 963, 467, 33, 106, 212, 255),
    VTX(0, 72, -353, 661, 532, 33, 106, 212, 255),
    VTX(245, 59, -202, 1043, 698, 33, 106, 212, 255),
    VTX(245, 59, -202, 1043, 698, 238, 111, 40, 255),
    VTX(0, 72, -353, 661, 532, 238, 111, 40, 255),
    VTX(0, 0, -151, 703, 822, 238, 111, 40, 255),
}; 

static Vtx gameplay_keepVtx_00C5A0[15] = {
    VTX(213, 0, -368, 0, 0, 76, 226, 169, 255),
    VTX(766, 0, 332, 0, 0, 105, 39, 214, 255),
    VTX(766, -18, 402, 0, 0, 79, 167, 10, 255),
    VTX(766, 18, 402, 0, 0, 60, 99, 31, 255),
    VTX(728, 0, 444, 0, 0, 13, 187, 97, 255),
    VTX(-213, 0, -368, 0, 0, 180, 30, 169, 255),
    VTX(-766, 18, 402, 0, 0, 177, 89, 10, 255),
    VTX(-245, 59, -202, 0, 0, 250, 119, 1, 255),
    VTX(0, 0, -151, 0, 0, 0, 0, 119, 255),
    VTX(-728, 0, 444, 0, 0, 243, 68, 97, 255),
    VTX(-766, -18, 402, 0, 0, 196, 157, 31, 255),
    VTX(-245, -59, -202, 0, 0, 236, 139, 245, 255),
    VTX(245, -59, -202, 0, 0, 6, 137, 1, 255),
    VTX(245, 59, -202, 0, 0, 20, 117, 245, 255),
    VTX(-766, 0, 332, 0, 0, 151, 217, 214, 255),
}; 

Gfx gUnknownBlankDL[] = {
    gsSPEndDisplayList(),
}; 

Gfx gBoomerangDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0x0800, 0x0800, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gUnknownCircle4Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, 1, COMBINED, TEXEL0, COMBINED, 1, COMBINED, TEXEL0, 
                       COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 243, 0, 97, 255),
    gsSPVertex(&gameplay_keepVtx_00C360[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_00C360[30], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, SHADE, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00C5A0[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 7, 9, 8, 0),
    gsSP2Triangles(8, 10, 11, 0, 2, 4, 12, 0),
    gsSP2Triangles(4, 3, 8, 0, 8, 3, 13, 0),
    gsSP2Triangles(13, 3, 1, 0, 4, 8, 12, 0),
    gsSP2Triangles(2, 12, 0, 0, 7, 6, 9, 0),
    gsSP2Triangles(11, 10, 14, 0, 14, 10, 6, 0),
    gsSP2Triangles(5, 14, 6, 0, 11, 14, 5, 0),
    gsSP2Triangles(0, 13, 1, 0, 6, 10, 9, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBoomerangRefDL[] = {
    gsSPDisplayList(gBoomerangDL),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00C818[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx gCompassArrowDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_OFF),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_00C848[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_00C848[3] = {
    VTX(0, 0, 10, 0, 0, 255, 255, 255, 255),
    VTX(-5, 0, -10, 0, 0, 128, 128, 128, 0),
    VTX(5, 0, -10, 0, 0, 128, 128, 128, 0),
}; 

static u8 unaccounted_00C878[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_00C880[4] = {
    VTX(200, 200, 0, 274, 126, 38, 0, 113, 255),
    VTX(157, 191, 16, 253, 134, 25, 255, 117, 255),
    VTX(17, 75, 13, 180, 201, 20, 230, 115, 255),
    VTX(15, 45, 0, 167, 226, 40, 208, 102, 255),
}; 

static Vtx gameplay_keepVtx_00C8C0[43] = {
    VTX(90, 270, 0, 185, 96, 30, 47, 106, 255),
    VTX(72, 246, 16, 192, 113, 15, 23, 116, 255),
    VTX(157, 191, 16, 253, 134, 25, 255, 117, 255),
    VTX(200, 200, 0, 274, 126, 38, 0, 113, 255),
    VTX(17, 75, 13, 180, 201, 20, 230, 115, 255),
    VTX(-15, 45, 0, 146, 228, 209, 200, 95, 255),
    VTX(-17, 75, 13, 119, 208, 232, 226, 113, 255),
    VTX(-157, 191, 16, 14, 160, 229, 252, 116, 255),
    VTX(-200, 200, 0, -10, 158, 214, 251, 112, 255),
    VTX(-72, 246, 16, 59, 128, 241, 23, 116, 255),
    VTX(-90, 270, 0, 57, 110, 226, 46, 106, 255),
    VTX(100, 300, 0, 187, 79, 97, 224, 61, 255),
    VTX(53, 253, 50, 161, 109, 41, 23, 110, 255),
    VTX(0, 95, 41, 149, 200, 67, 234, 96, 255),
    VTX(0, 0, 0, 163, 252, 97, 224, 61, 255),
    VTX(0, 0, 0, 163, 252, 159, 224, 61, 255),
    VTX(0, 95, 41, 149, 200, 153, 222, 50, 255),
    VTX(-53, 253, 50, 86, 117, 215, 23, 110, 255),
    VTX(-100, 300, 0, 45, 95, 159, 224, 61, 255),
    VTX(-100, 300, 0, 45, 95, 0, 87, 82, 255),
    VTX(100, 300, 0, 187, 79, 0, 87, 82, 255),
    VTX(0, 95, -36, 149, 200, 67, 234, 160, 255),
    VTX(-53, 253, -50, 86, 117, 215, 23, 146, 255),
    VTX(53, 253, -50, 161, 109, 41, 23, 146, 255),
    VTX(100, 300, 0, 187, 79, 0, 87, 174, 255),
    VTX(-100, 300, 0, 45, 95, 0, 87, 174, 255),
    VTX(-100, 300, 0, 45, 95, 159, 224, 195, 255),
    VTX(0, 95, -36, 149, 200, 153, 222, 206, 255),
    VTX(0, 0, 0, 163, 252, 159, 224, 195, 255),
    VTX(0, 0, 0, 163, 252, 97, 224, 195, 255),
    VTX(100, 300, 0, 187, 79, 97, 224, 195, 255),
    VTX(-17, 75, -13, 119, 208, 232, 226, 143, 255),
    VTX(-157, 191, -16, 14, 160, 229, 252, 140, 255),
    VTX(-72, 246, -16, 59, 128, 241, 23, 140, 255),
    VTX(-90, 270, 0, 57, 110, 226, 46, 150, 255),
    VTX(-200, 200, 0, -10, 158, 214, 251, 144, 255),
    VTX(-15, 45, 0, 146, 228, 209, 200, 161, 255),
    VTX(72, 246, -16, 192, 113, 15, 23, 140, 255),
    VTX(157, 191, -16, 253, 134, 25, 255, 139, 255),
    VTX(17, 75, -13, 180, 201, 20, 230, 141, 255),
    VTX(200, 200, 0, 274, 126, 38, 0, 143, 255),
    VTX(90, 270, 0, 185, 96, 30, 47, 150, 255),
    VTX(15, 45, 0, 167, 226, 40, 208, 154, 255),
}; 

Gfx gZTargetArrowDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x03E8, 0x2710, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 3, 3, G_TX_NOLOD, 4),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_AA_OPA_SURF, G_RM_AA_OPA_SURF2),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&gameplay_keepVtx_00C880[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&gameplay_keepVtx_00C8C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 2, 1, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(8, 9, 10, 0, 9, 7, 6, 0),
    gsSP2Triangles(11, 12, 13, 0, 11, 13, 14, 0),
    gsSP2Triangles(15, 16, 17, 0, 15, 17, 18, 0),
    gsSP2Triangles(19, 17, 12, 0, 19, 12, 20, 0),
    gsSP2Triangles(12, 17, 13, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 23, 22, 0, 24, 22, 25, 0),
    gsSP2Triangles(26, 22, 27, 0, 26, 27, 28, 0),
    gsSP2Triangles(29, 21, 23, 0, 29, 23, 30, 0),
    gsSPVertex(&gameplay_keepVtx_00C8C0[31], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(3, 1, 4, 0, 4, 1, 0, 0),
    gsSP2Triangles(4, 0, 5, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 7, 6, 0, 9, 6, 10, 0),
    gsSP2Triangles(11, 8, 7, 0, 11, 7, 9, 0),
    gsSPEndDisplayList(),
}; 

u64 gHilite3Tex[] = {
#include "assets/objects/gameplay_keep/hilite_3.i8.inc.c"
};

static Vtx gameplay_keepVtx_00CCC0[12] = {
    VTX(0, 0, -80, 0, 0, 0, 119, 244, 255),
    VTX(-14, 8, 0, 0, 0, 0, 119, 244, 255),
    VTX(14, 8, 0, 0, 0, 0, 119, 244, 255),
    VTX(0, -16, 0, 0, 0, 0, 0, 120, 255),
    VTX(14, 8, 0, 0, 0, 0, 0, 120, 255),
    VTX(-14, 8, 0, 0, 0, 0, 0, 120, 255),
    VTX(0, -16, 0, 0, 0, 153, 197, 244, 255),
    VTX(-14, 8, 0, 0, 0, 153, 197, 244, 255),
    VTX(0, 0, -80, 0, 0, 153, 197, 244, 255),
    VTX(14, 8, 0, 0, 0, 103, 197, 244, 255),
    VTX(0, -16, 0, 0, 0, 103, 197, 244, 255),
    VTX(0, 0, -80, 0, 0, 103, 197, 244, 255),
}; 

Gfx gEffFragments2DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsSPVertex(&gameplay_keepVtx_00CCC0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_00CDB8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gSelectionCursorTex[] = {
#include "assets/objects/gameplay_keep/selection_cursor.ia4.inc.c"
};

u64 gControlStickTex[] = {
#include "assets/objects/gameplay_keep/control_stick.ia8.inc.c"
};

u64 gArrowCursorTex[] = {
#include "assets/objects/gameplay_keep/arrow_cursor.ia8.inc.c"
};

static Vtx gameplay_keepVtx_00D0C0[4] = {
    VTX(0, 0, 24, 512, 819, 0, 120, 0, 255),
    VTX(24, 0, 10, 819, 635, 0, 120, 0, 255),
    VTX(-5, 0, -19, 451, 266, 0, 120, 0, 255),
    VTX(-24, 0, 10, 205, 635, 0, 120, 0, 255),
}; 

static Vtx gameplay_keepVtx_00D100[20] = {
    VTX(24, 0, 10, 2848, 0, 82, 227, 174, 255),
    VTX(16, -17, 8, 2833, 1107, 82, 227, 174, 255),
    VTX(-3, -17, -12, 4811, 1107, 82, 227, 174, 255),
    VTX(-5, 0, -19, 4807, 0, 82, 227, 174, 255),
    VTX(-5, 0, -19, 4807, 0, 161, 220, 193, 255),
    VTX(-3, -17, -12, 4811, 1107, 161, 220, 193, 255),
    VTX(-16, -17, 8, 6383, 1107, 161, 220, 193, 255),
    VTX(-24, 0, 10, 6368, 0, 161, 220, 193, 255),
    VTX(-24, 0, 10, 224, 0, 197, 221, 98, 255),
    VTX(-16, -17, 8, 239, 1107, 197, 221, 98, 255),
    VTX(0, -17, 18, 1536, 1107, 197, 221, 98, 255),
    VTX(0, 0, 24, 1536, 0, 197, 221, 98, 255),
    VTX(0, 0, 24, 1536, 0, 59, 221, 98, 255),
    VTX(0, -17, 18, 1536, 1107, 59, 221, 98, 255),
    VTX(16, -17, 8, 2833, 1107, 59, 221, 98, 255),
    VTX(24, 0, 10, 2848, 0, 59, 221, 98, 255),
    VTX(-16, -17, 8, 305, 930, 0, 136, 0, 255),
    VTX(-3, -17, -12, 807, 596, 0, 136, 0, 255),
    VTX(16, -17, 8, 305, 94, 0, 136, 0, 255),
    VTX(0, -17, 18, 55, 512, 0, 136, 0, 255),
}; 

Gfx gUnusedRockFragmentDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gRockFragment2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_00D0C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gRockFragment1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_00D100[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBoulderFragmentsDL[] = {
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gRockFragment2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_00D418[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(3, 4, 2, 0, 2, 5, 6, 0),
    gsSP2Triangles(2, 6, 0, 0, 4, 5, 2, 0),
    gsSP2Triangles(6, 5, 7, 0, 7, 5, 4, 0),
    gsSP2Triangles(6, 8, 0, 0, 7, 8, 6, 0),
    gsSP2Triangles(4, 9, 7, 0, 10, 11, 9, 0),
    gsSP2Triangles(9, 11, 7, 0, 9, 4, 3, 0),
    gsSP2Triangles(9, 3, 10, 0, 3, 1, 10, 0),
    gsSP2Triangles(8, 11, 10, 0, 10, 1, 0, 0),
    gsSP2Triangles(0, 8, 10, 0, 7, 11, 8, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_00D418[12] = {
    VTX(682, 0, -394, 403, 1722, 49, 153, 202, 255),
    VTX(866, 600, -500, 512, 1910, 77, 42, 165, 255),
    VTX(866, 600, 499, -511, 1910, 92, 35, 78, 255),
    VTX(515, 1200, -298, 305, 1551, 33, 114, 213, 255),
    VTX(0, 1200, 594, -608, 1024, 246, 119, 40, 255),
    VTX(0, 600, 999, -1023, 1024, 254, 233, 123, 255),
    VTX(0, 0, 787, -806, 1024, 0, 157, 77, 255),
    VTX(-865, 600, 499, -511, 137, 159, 23, 76, 255),
    VTX(-681, 0, -394, 403, 325, 183, 156, 242, 255),
    VTX(-514, 1200, -298, 305, 496, 214, 115, 225, 255),
    VTX(0, 600, -1000, 1024, 1023, 22, 10, 132, 255),
    VTX(-865, 600, -500, 512, 137, 161, 48, 189, 255),
}; 

static u8 unaccounted_00D4D8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gRockFragment1Tex[] = {
#include "assets/objects/gameplay_keep/rock_fragment_1.rgb5a1.inc.c"
};

u64 gRockFragment2Tex[] = {
#include "assets/objects/gameplay_keep/rock_fragment_2.rgb5a1.inc.c"
};

static s16 sDoor1AnimFrameData[90] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0xFFAE, 0xFEF3, 0xFDC2, 0xFC0D, 0xF900, 0xF512, 0xF226, 0xF0B1, 0xEFBF, 0xEF17, 0xEE81, 0xEDC2, 0xECC8, 
    0xEBDA, 0xEB37, 0xEA8E, 0xE9B2, 0xE8CF, 0xE7E3, 0xE6ED, 0xE5ED, 0xE4D8, 0xE3AB, 0xE271, 0xE130, 0xDFF4, 0xDEC3, 
    0xDDA9, 0xDCAC, 0xDBD7, 0xDB33, 0xDB42, 0xDB51, 0xDB61, 0xDB70, 0xDB7F, 0xDB8E, 0xDB9E, 0xDBAD, 0xDBBC, 0xDDC2, 
    0xE043, 0xE329, 0xE65B, 0xE9C4, 0xED4C, 0xF0DC, 0xF45D, 0xF7B8, 0xFAD6, 0xFDA1, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
}; 

static JointIndex sDoor1AnimJointIndices[5] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDoor1Anim = { { 88 }, sDoor1AnimFrameData, sDoor1AnimJointIndices, 2 }; 

static u8 unaccounted_00E5C4[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sDoor2AnimFrameData[88] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFFA7, 0xFF09, 0xFE39, 
    0xFD4C, 0xFC53, 0xFB62, 0xFA8D, 0xF9EA, 0xF96B, 0xF8EF, 0xF853, 0xF777, 0xF639, 0xF2E7, 0xEEB6, 0xEB6C, 0xE85E, 
    0xE611, 0xE46A, 0xE300, 0xE1E0, 0xE117, 0xE0B3, 0xE0A9, 0xE0DD, 0xE143, 0xE1D1, 0xE27B, 0xE335, 0xE3F5, 0xE586, 
    0xE766, 0xE8A5, 0xE9C1, 0xEAE1, 0xEC2F, 0xEDB2, 0xEF52, 0xF106, 0xF2C8, 0xF490, 0xF655, 0xF811, 0xF9BB, 0xFB4C, 
    0xFCBD, 0xFE06, 0xFF1F, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 
}; 

static JointIndex sDoor2AnimJointIndices[5] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDoor2Anim = { { 85 }, sDoor2AnimFrameData, sDoor2AnimJointIndices, 2 }; 

static s16 sDoor3AnimFrameData[68] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFEB0, 
    0xFC16, 0xF8C9, 0xF561, 0xF276, 0xEFF6, 0xED6C, 0xEAE2, 0xE85F, 0xE5EB, 0xE390, 0xE154, 0xDF41, 0xDD5E, 0xDCA1, 
    0xDD03, 0xDD16, 0xDC61, 0xDB5C, 0xD9FE, 0xD763, 0xD54F, 0xD51D, 0xD56E, 0xD618, 0xD6F0, 0xD7F4, 0xD939, 0xDAB0, 
    0xDC4A, 0xDD97, 0xDF2B, 0xE285, 0xECEC, 0xF1B8, 0xF6A1, 0xFAE4, 0xFE4B, 0xFFCE, 0x0017, 0x0000, 
}; 

static JointIndex sDoor3AnimJointIndices[5] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDoor3Anim = { { 66 }, sDoor3AnimFrameData, sDoor3AnimJointIndices, 2 }; 

static u8 unaccounted_00E768[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_00E770[4] = {
    VTX(-300, 250, 10000, 1024, 0, 170, 170, 170, 255),
    VTX(5700, 250, 10000, 0, 0, 170, 170, 170, 255),
    VTX(5700, 250, 0, 0, 2048, 170, 170, 170, 255),
    VTX(-300, 250, 0, 1024, 2048, 170, 170, 170, 255),
}; 

static Vtx gameplay_keepVtx_00E7B0[6] = {
    VTX(5094, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4383, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, 724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, 724, 4456, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E810[4] = {
    VTX(4560, 250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, 250, 3840, 0, 0, 93, 93, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E850[4] = {
    VTX(4560, 724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, 250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, 250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, 724, 4456, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E890[8] = {
    VTX(4383, 250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4383, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, 250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, 250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, 724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(5094, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(5094, 250, 4148, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E910[8] = {
    VTX(4560, 250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, 724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4383, 724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4383, 250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, 724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, 250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(5094, 250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(5094, 724, 4148, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00E990[4] = {
    VTX(5700, -250, 10000, 0, 0, 170, 170, 170, 255),
    VTX(-300, -250, 10000, 1024, 0, 170, 170, 170, 255),
    VTX(-300, -250, 0, 1024, 2048, 170, 170, 170, 255),
    VTX(5700, -250, 0, 0, 2048, 170, 170, 170, 255),
}; 

static Vtx gameplay_keepVtx_00E9D0[6] = {
    VTX(4916, -724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(5094, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4383, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, -724, 3840, 0, 0, 93, 93, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EA30[4] = {
    VTX(4560, -724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, -250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, -250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, -724, 3840, 0, 0, 93, 93, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EA70[4] = {
    VTX(4560, -250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, -250, 4456, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EAB0[8] = {
    VTX(4383, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4383, -250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, -250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4560, -724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(5094, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, -724, 3840, 0, 0, 93, 93, 0, 255),
    VTX(4916, -250, 3840, 0, 0, 93, 93, 0, 255),
    VTX(5094, -250, 4148, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EB30[8] = {
    VTX(4383, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4560, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4560, -250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4383, -250, 4148, 0, 0, 134, 134, 0, 255),
    VTX(4916, -250, 4456, 0, 0, 134, 134, 0, 255),
    VTX(4916, -724, 4456, 0, 0, 134, 134, 0, 255),
    VTX(5094, -724, 4148, 0, 0, 134, 134, 0, 255),
    VTX(5094, -250, 4148, 0, 0, 134, 134, 0, 255),
}; 

static Vtx gameplay_keepVtx_00EBB0[8] = {
    VTX(5700, 250, 0, 1024, 2048, 170, 170, 170, 255),
    VTX(-300, -250, 0, 0, 2048, 170, 170, 170, 255),
    VTX(-300, 250, 0, 0, 2048, 170, 170, 170, 255),
    VTX(5700, -250, 0, 1024, 2048, 170, 170, 170, 255),
    VTX(-300, 250, 10000, 0, 0, 170, 170, 170, 255),
    VTX(-300, -250, 10000, 0, 0, 170, 170, 170, 255),
    VTX(5700, -250, 10000, 1024, 0, 170, 170, 170, 255),
    VTX(5700, 250, 10000, 1024, 0, 170, 170, 170, 255),
}; 

Gfx gDoorFrameDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWoodenDoorTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00EBB0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 5, 0, 4, 2, 1, 0),
    gsSP2Triangles(0, 6, 3, 0, 0, 7, 6, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx gDoorLeftDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWoodenDoorTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00E770[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 187, 187, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E7B0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 53, 53, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E810[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 174, 174, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E850[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 93, 93, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E890[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 134, 134, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E910[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPDisplayList(gDoorFrameDL),
    gsSPEndDisplayList(),
}; 

Gfx gDoorRightDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gWoodenDoorTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR |
                         G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00E990[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 187, 187, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E9D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 53, 53, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EA30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 174, 174, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EA70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 93, 93, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EAB0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 134, 134, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EB30[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPDisplayList(gDoorFrameDL),
    gsSPEndDisplayList(),
}; 

u64 gWoodenDoorTex[] = {
#include "assets/objects/gameplay_keep/wooden_door.rgb5a1.inc.c"
};

StandardLimb sDoorSkelLimb_00FF38 = { 
    { 0, 0, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sDoorSkelLimb_00FF44 = { 
    { -2700, 0, 0 },
    0x02, 0xFF,
    NULL
}; 

StandardLimb sDoorSkelLimb_00FF50 = { 
    { 0, 0, 0 },
    0x03, 0xFF,
    NULL
}; 

StandardLimb sDoorSkelLimb_00FF5C = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gDoorLeftDL
}; 

static void* sDoorSkelLimbs[4] = {
    &sDoorSkelLimb_00FF38,
    &sDoorSkelLimb_00FF44,
    &sDoorSkelLimb_00FF50,
    &sDoorSkelLimb_00FF5C,
}; 

SkeletonHeader gDoorSkel = { sDoorSkelLimbs, 4 }; 

static s16 sDoor4AnimFrameData[76] = {
    0x0000, 0xC000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFE4E, 0xFAF1, 0xF6BC, 0xF284, 0xED1E, 0xE732, 
    0xE455, 0xE3FA, 0xE3AC, 0xE36B, 0xE336, 0xE30A, 0xE2E8, 0xE2CC, 0xE2B6, 0xE2A4, 0xE295, 0xE288, 0xE27A, 0xE26B, 
    0xE258, 0xE242, 0xE242, 0xE242, 0xE242, 0xE242, 0xE242, 0xE242, 0xE3AC, 0xE59E, 0xE723, 0xE8B8, 0xEA58, 0xEC01, 
    0xEDB0, 0xEF61, 0xF112, 0xF2BF, 0xF465, 0xF601, 0xF790, 0xF90F, 0xFA7A, 0xFBCE, 0xFD09, 0xFE27, 0xFF25, 0x0000, 
    0xFFA6, 0xFF4B, 0xFF22, 0xFF6C, 0xFFB6, 0x0000, 
}; 

static JointIndex sDoor4AnimJointIndices[5] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gDoor4Anim = { { 74 }, sDoor4AnimFrameData, sDoor4AnimJointIndices, 2 }; 

static u8 unaccounted_010048[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx gEffDustDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0100A8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0100A8[4] = {
    VTX(20, 20, 0, 1024, 1024, 0, 127, 0, 255),
    VTX(-19, 20, 0, 0, 1024, 0, 127, 0, 255),
    VTX(-19, -19, 0, 0, 0, 0, 127, 0, 255),
    VTX(20, -19, 0, 1024, 0, 0, 127, 0, 255),
}; 

static u8 unaccounted_0100E8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_0100F0[4] = {
    VTX(-1000, -1000, 0, 0, 2048, 0, 0, 120, 255),
    VTX(1000, -1000, 0, 2048, 2048, 0, 0, 120, 255),
    VTX(1000, 1000, 0, 2048, 0, 0, 0, 120, 255),
    VTX(-1000, 1000, 0, 0, 0, 0, 0, 120, 255),
}; 

Gfx gEffFlash1DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlashTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | 
                         G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetOtherMode(G_AD_NOTPATTERN | G_CD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | 
                     G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE, G_AC_THRESHOLD | G_ZS_PIXEL | G_RM_PASS |
                     G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&gameplay_keepVtx_0100F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx gEffFlash2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlashTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | 
                         G_TX_CLAMP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL0, 0, PRIMITIVE, 0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetOtherMode(G_AD_NOTPATTERN | G_CD_DISABLE | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TT_NONE | G_TL_TILE | 
                     G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE, G_AC_THRESHOLD | G_ZS_PIXEL | G_RM_PASS |
                     G_RM_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&gameplay_keepVtx_0100F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gFlashTex[] = {
#include "assets/objects/gameplay_keep/flash.i8.inc.c"
};

static u8 unaccounted_011228[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gTorchFlameTex[] = {
#include "assets/objects/gameplay_keep/torch_flame.i8.inc.c"
};

u64 gEffUnknown1Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_1.i8.inc.c"
};

static Vtx gameplay_keepVtx_012230[26] = {
    VTX(1500, 0, 0, 512, 1024, 255, 255, 255, 255),
    VTX(1299, 0, -750, 683, 1024, 255, 255, 255, 255),
    VTX(984, 0, -264, 683, 0, 255, 255, 255, 255),
    VTX(984, 0, 264, 512, 0, 255, 255, 255, 255),
    VTX(750, 0, -1299, 853, 1024, 255, 255, 255, 255),
    VTX(720, 0, -720, 853, 0, 255, 255, 255, 255),
    VTX(0, 0, -1500, 1024, 1024, 255, 255, 255, 255),
    VTX(264, 0, -984, 1024, 0, 255, 255, 255, 255),
    VTX(-750, 0, -1299, 1195, 1024, 255, 255, 255, 255),
    VTX(-264, 0, -984, 1195, 0, 255, 255, 255, 255),
    VTX(-1299, 0, -750, 1365, 1024, 255, 255, 255, 255),
    VTX(-720, 0, -720, 1365, 0, 255, 255, 255, 255),
    VTX(-1500, 0, 0, 1536, 1024, 255, 255, 255, 255),
    VTX(-984, 0, -264, 1536, 0, 255, 255, 255, 255),
    VTX(-1299, 0, 750, 1707, 1024, 255, 255, 255, 255),
    VTX(-984, 0, 264, 1707, 0, 255, 255, 255, 255),
    VTX(-750, 0, 1299, 1877, 1024, 255, 255, 255, 255),
    VTX(-720, 0, 720, 1877, 0, 255, 255, 255, 255),
    VTX(0, 0, 1500, 2048, 1024, 255, 255, 255, 255),
    VTX(-264, 0, 984, 2048, 0, 255, 255, 255, 255),
    VTX(0, 0, 1500, 0, 1024, 255, 255, 255, 255),
    VTX(750, 0, 1299, 171, 1024, 255, 255, 255, 255),
    VTX(264, 0, 984, 171, 0, 255, 255, 255, 255),
    VTX(-264, 0, 984, 0, 0, 255, 255, 255, 255),
    VTX(1299, 0, 750, 341, 1024, 255, 255, 255, 255),
    VTX(720, 0, 720, 341, 0, 255, 255, 255, 255),
}; 

static Vtx gameplay_keepVtx_0123D0[26] = {
    VTX(1065, -250, 615, 341, 1024, 255, 255, 255, 255),
    VTX(1229, 250, 329, 512, 0, 255, 255, 255, 255),
    VTX(900, 250, 900, 341, 0, 255, 255, 255, 255),
    VTX(615, -250, 1065, 171, 1024, 255, 255, 255, 255),
    VTX(329, 250, 1229, 171, 0, 255, 255, 255, 255),
    VTX(0, -250, 1229, 0, 1024, 255, 255, 255, 255),
    VTX(-329, 250, 1229, 0, 0, 255, 255, 255, 255),
    VTX(-615, -250, 1065, 1877, 1024, 255, 255, 255, 255),
    VTX(-329, 250, 1229, 2048, 0, 255, 255, 255, 255),
    VTX(-900, 250, 900, 1877, 0, 255, 255, 255, 255),
    VTX(0, -250, 1229, 2048, 1024, 255, 255, 255, 255),
    VTX(-1065, -250, 615, 1707, 1024, 255, 255, 255, 255),
    VTX(-1229, 250, 329, 1707, 0, 255, 255, 255, 255),
    VTX(-1229, -250, 0, 1536, 1024, 255, 255, 255, 255),
    VTX(-1229, 250, -329, 1536, 0, 255, 255, 255, 255),
    VTX(-1065, -250, -615, 1365, 1024, 255, 255, 255, 255),
    VTX(-900, 250, -900, 1365, 0, 255, 255, 255, 255),
    VTX(-615, -250, -1065, 1195, 1024, 255, 255, 255, 255),
    VTX(-329, 250, -1229, 1195, 0, 255, 255, 255, 255),
    VTX(0, -250, -1229, 1024, 1024, 255, 255, 255, 255),
    VTX(329, 250, -1229, 1024, 0, 255, 255, 255, 255),
    VTX(615, -250, -1065, 853, 1024, 255, 255, 255, 255),
    VTX(900, 250, -900, 853, 0, 255, 255, 255, 255),
    VTX(1065, -250, -615, 683, 1024, 255, 255, 255, 255),
    VTX(1229, 250, -329, 683, 0, 255, 255, 255, 255),
    VTX(1229, -250, 0, 512, 1024, 255, 255, 255, 255),
}; 

Gfx gSpinAttack1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gTorchFlameTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gEffUnknown1Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 13, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(0, 0, 255, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_012230[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(24, 3, 25, 0, 24, 0, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx gSpinAttack2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gTorchFlameTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gEffUnknown1Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 13, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(0, 100, 255, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_0123D0[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 4, 6, 0),
    gsSP2Triangles(5, 3, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 9, 12, 0),
    gsSP2Triangles(11, 7, 9, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 11, 12, 0, 15, 14, 16, 0),
    gsSP2Triangles(15, 13, 14, 0, 17, 16, 18, 0),
    gsSP2Triangles(17, 15, 16, 0, 19, 18, 20, 0),
    gsSP2Triangles(19, 17, 18, 0, 21, 20, 22, 0),
    gsSP2Triangles(21, 19, 20, 0, 23, 22, 24, 0),
    gsSP2Triangles(23, 21, 22, 0, 25, 24, 1, 0),
    gsSP2Triangles(25, 23, 24, 0, 0, 25, 1, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0127B0[26] = {
    VTX(1650, 0, 0, 512, 1024, 255, 255, 255, 255),
    VTX(1429, 0, -825, 683, 1024, 255, 255, 255, 255),
    VTX(885, 0, -237, 683, 0, 255, 255, 255, 255),
    VTX(885, 0, 237, 512, 0, 255, 255, 255, 255),
    VTX(825, 0, -1429, 853, 1024, 255, 255, 255, 255),
    VTX(648, 0, -648, 853, 0, 255, 255, 255, 255),
    VTX(0, 0, -1650, 1024, 1024, 255, 255, 255, 255),
    VTX(237, 0, -885, 1024, 0, 255, 255, 255, 255),
    VTX(-825, 0, -1429, 1195, 1024, 255, 255, 255, 255),
    VTX(-237, 0, -885, 1195, 0, 255, 255, 255, 255),
    VTX(-1429, 0, -825, 1365, 1024, 255, 255, 255, 255),
    VTX(-648, 0, -648, 1365, 0, 255, 255, 255, 255),
    VTX(-1650, 0, 0, 1536, 1024, 255, 255, 255, 255),
    VTX(-885, 0, -237, 1536, 0, 255, 255, 255, 255),
    VTX(-1429, 0, 825, 1707, 1024, 255, 255, 255, 255),
    VTX(-885, 0, 237, 1707, 0, 255, 255, 255, 255),
    VTX(-825, 0, 1429, 1877, 1024, 255, 255, 255, 255),
    VTX(-648, 0, 648, 1877, 0, 255, 255, 255, 255),
    VTX(0, 0, 1650, 2048, 1024, 255, 255, 255, 255),
    VTX(-237, 0, 885, 2048, 0, 255, 255, 255, 255),
    VTX(0, 0, 1650, 0, 1024, 255, 255, 255, 255),
    VTX(825, 0, 1429, 171, 1024, 255, 255, 255, 255),
    VTX(237, 0, 885, 171, 0, 255, 255, 255, 255),
    VTX(-237, 0, 885, 0, 0, 255, 255, 255, 255),
    VTX(1429, 0, 825, 341, 1024, 255, 255, 255, 255),
    VTX(648, 0, 648, 341, 0, 255, 255, 255, 255),
}; 

static Vtx gameplay_keepVtx_012950[26] = {
    VTX(1065, -500, 615, 341, 1024, 255, 255, 255, 255),
    VTX(1229, 500, 329, 512, 0, 255, 255, 255, 255),
    VTX(900, 500, 900, 341, 0, 255, 255, 255, 255),
    VTX(615, -500, 1065, 171, 1024, 255, 255, 255, 255),
    VTX(329, 500, 1229, 171, 0, 255, 255, 255, 255),
    VTX(0, -500, 1229, 0, 1024, 255, 255, 255, 255),
    VTX(-329, 500, 1229, 0, 0, 255, 255, 255, 255),
    VTX(-615, -500, 1065, 1877, 1024, 255, 255, 255, 255),
    VTX(-329, 500, 1229, 2048, 0, 255, 255, 255, 255),
    VTX(-900, 500, 900, 1877, 0, 255, 255, 255, 255),
    VTX(0, -500, 1229, 2048, 1024, 255, 255, 255, 255),
    VTX(-1065, -500, 615, 1707, 1024, 255, 255, 255, 255),
    VTX(-1229, 500, 329, 1707, 0, 255, 255, 255, 255),
    VTX(-1229, -500, 0, 1536, 1024, 255, 255, 255, 255),
    VTX(-1229, 500, -329, 1536, 0, 255, 255, 255, 255),
    VTX(-1065, -500, -615, 1365, 1024, 255, 255, 255, 255),
    VTX(-900, 500, -900, 1365, 0, 255, 255, 255, 255),
    VTX(-615, -500, -1065, 1195, 1024, 255, 255, 255, 255),
    VTX(-329, 500, -1229, 1195, 0, 255, 255, 255, 255),
    VTX(0, -500, -1229, 1024, 1024, 255, 255, 255, 255),
    VTX(329, 500, -1229, 1024, 0, 255, 255, 255, 255),
    VTX(615, -500, -1065, 853, 1024, 255, 255, 255, 255),
    VTX(900, 500, -900, 853, 0, 255, 255, 255, 255),
    VTX(1065, -500, -615, 683, 1024, 255, 255, 255, 255),
    VTX(1229, 500, -329, 683, 0, 255, 255, 255, 255),
    VTX(1229, -500, 0, 512, 1024, 255, 255, 255, 255),
}; 

Gfx gSpinAttack3DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gTorchFlameTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gEffUnknown1Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 13, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(255, 0, 0, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_0127B0[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(1, 4, 5, 0, 1, 5, 2, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 7, 5, 0),
    gsSP2Triangles(6, 8, 9, 0, 6, 9, 7, 0),
    gsSP2Triangles(8, 10, 11, 0, 8, 11, 9, 0),
    gsSP2Triangles(10, 12, 13, 0, 10, 13, 11, 0),
    gsSP2Triangles(12, 14, 15, 0, 12, 15, 13, 0),
    gsSP2Triangles(14, 16, 17, 0, 14, 17, 15, 0),
    gsSP2Triangles(16, 18, 19, 0, 16, 19, 17, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSP2Triangles(21, 24, 25, 0, 21, 25, 22, 0),
    gsSP2Triangles(24, 3, 25, 0, 24, 0, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx gSpinAttack4DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gTorchFlameTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gEffUnknown1Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 6, 5, 13, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetEnvColor(255, 100, 0, 128),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_012950[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(3, 0, 2, 0, 5, 4, 6, 0),
    gsSP2Triangles(5, 3, 4, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 10, 8, 0, 11, 9, 12, 0),
    gsSP2Triangles(11, 7, 9, 0, 13, 12, 14, 0),
    gsSP2Triangles(13, 11, 12, 0, 15, 14, 16, 0),
    gsSP2Triangles(15, 13, 14, 0, 17, 16, 18, 0),
    gsSP2Triangles(17, 15, 16, 0, 19, 18, 20, 0),
    gsSP2Triangles(19, 17, 18, 0, 21, 20, 22, 0),
    gsSP2Triangles(21, 19, 20, 0, 23, 22, 24, 0),
    gsSP2Triangles(23, 21, 22, 0, 25, 24, 1, 0),
    gsSP2Triangles(25, 23, 24, 0, 0, 25, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 gFlameWall1Tex[] = {
#include "assets/objects/gameplay_keep/flame_wall_1.i8.inc.c"
};

u64 gFlameWall2Tex[] = {
#include "assets/objects/gameplay_keep/flame_wall_2.i8.inc.c"
};

static Vtx gameplay_keepVtx_013530[14] = {
    VTX(411, -312, -240, 643, 2054, 255, 255, 255, 255),
    VTX(-3725, -175, -154, 632, -30, 255, 255, 255, 255),
    VTX(-3725, 0, -307, 512, -30, 255, 255, 255, 255),
    VTX(411, 0, -480, 512, 2054, 255, 255, 255, 255),
    VTX(411, -312, 240, 893, 2054, 255, 255, 255, 255),
    VTX(-3725, -175, 154, 904, -30, 255, 255, 255, 255),
    VTX(411, 0, 480, 1024, 2054, 255, 255, 255, 255),
    VTX(-3725, 0, 307, 1024, -30, 255, 255, 255, 255),
    VTX(411, 312, 240, 131, 2054, 255, 255, 255, 255),
    VTX(-3725, 175, 154, 120, -30, 255, 255, 255, 255),
    VTX(-3725, 0, 307, 0, -30, 255, 255, 255, 255),
    VTX(411, 312, -240, 381, 2054, 255, 255, 255, 255),
    VTX(-3725, 175, -154, 392, -30, 255, 255, 255, 255),
    VTX(411, 0, 480, 0, 2054, 255, 255, 255, 255),
}; 

Gfx gSpinAttackChargingDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFlameWall1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gFlameWall2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_MIRROR | G_TX_WRAP, 5, 5, 14, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&gameplay_keepVtx_013530[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 1, 0, 4, 1, 0, 0),
    gsSP2Triangles(6, 7, 5, 0, 6, 5, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 11, 12, 9, 0),
    gsSP2Triangles(11, 9, 8, 0, 3, 2, 12, 0),
    gsSP2Triangles(3, 12, 11, 0, 8, 10, 13, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0136F8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gEffUnknown2Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_2.i8.inc.c"
};

u64 gEffUnknown3Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_3.i8.inc.c"
};

static Vtx gameplay_keepVtx_014700[32] = {
    VTX(-354, -89, 0, 1280, 0, 0, 0, 255, 255),
    VTX(-600, 0, 0, 0, 0, 0, 0, 255, 255),
    VTX(-118, -30, -250, 853, 1365, 0, 50, 255, 255),
    VTX(-167, 0, -250, 427, 1365, 0, 50, 255, 255),
    VTX(0, 0, -500, 640, 2048, 0, 255, 255, 255),
    VTX(-600, 0, 0, 10240, 0, 0, 0, 255, 255),
    VTX(-118, 30, -250, 9387, 1365, 0, 50, 255, 255),
    VTX(-167, 0, -250, 9813, 1365, 0, 50, 255, 255),
    VTX(-354, 89, 0, 8960, 0, 0, 0, 255, 255),
    VTX(-118, 30, -250, 9387, 1365, 0, 50, 255, 255),
    VTX(0, 0, -500, 9600, 2048, 0, 255, 255, 255),
    VTX(0, 42, -250, 8107, 1365, 0, 50, 255, 255),
    VTX(-118, 30, -250, 8533, 1365, 0, 50, 255, 255),
    VTX(0, 126, 0, 7680, 0, 0, 0, 255, 255),
    VTX(0, 0, -500, 8320, 2048, 0, 255, 255, 255),
    VTX(354, 89, 0, 6400, 0, 0, 0, 255, 255),
    VTX(118, 30, -250, 6827, 1365, 0, 50, 255, 255),
    VTX(0, 42, -250, 7253, 1365, 0, 50, 255, 255),
    VTX(118, 30, -250, 6827, 1365, 0, 50, 255, 255),
    VTX(0, 0, -500, 7040, 2048, 0, 255, 255, 255),
    VTX(600, 0, 0, 5120, 0, 0, 0, 255, 255),
    VTX(118, 30, -250, 5973, 1365, 0, 50, 255, 255),
    VTX(167, 0, -250, 5547, 1365, 0, 50, 255, 255),
    VTX(0, 0, -500, 5760, 2048, 0, 255, 255, 255),
    VTX(118, -30, -250, 4267, 1365, 0, 50, 255, 255),
    VTX(167, 0, -250, 4693, 1365, 0, 50, 255, 255),
    VTX(354, -89, 0, 3840, 0, 0, 0, 255, 255),
    VTX(118, -30, -250, 4267, 1365, 0, 50, 255, 255),
    VTX(0, 0, -500, 4480, 2048, 0, 255, 255, 255),
    VTX(0, -42, -250, 2987, 1365, 0, 50, 255, 255),
    VTX(118, -30, -250, 3413, 1365, 0, 50, 255, 255),
    VTX(0, -126, 0, 2560, 0, 0, 0, 255, 255),
}; 

static Vtx gameplay_keepVtx_014900[12] = {
    VTX(0, -42, -250, 2987, 1365, 0, 50, 255, 255),
    VTX(0, 0, -500, 3200, 2048, 0, 255, 255, 255),
    VTX(118, -30, -250, 3413, 1365, 0, 50, 255, 255),
    VTX(0, -126, 0, 2560, 0, 0, 0, 255, 255),
    VTX(-354, -89, 0, 1280, 0, 0, 0, 255, 255),
    VTX(0, -42, -250, 2133, 1365, 0, 50, 255, 255),
    VTX(-118, -30, -250, 1707, 1365, 0, 50, 255, 255),
    VTX(-118, -30, -250, 1707, 1365, 0, 50, 255, 255),
    VTX(0, 0, -500, 1920, 2048, 0, 255, 255, 255),
    VTX(0, 126, 0, 7680, 0, 0, 0, 255, 255),
    VTX(354, 89, 0, 6400, 0, 0, 0, 255, 255),
    VTX(0, 42, -250, 7253, 1365, 0, 50, 255, 255),
}; 

Gfx gUnusedBeamBladeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown2Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 5, 6, 15, G_TX_NOLOD),
    gsDPLoadMultiBlock(gEffUnknown3Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, 1),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, TEXEL1, 1, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_014700[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(3, 4, 2, 0, 5, 6, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 9, 10, 7, 0),
    gsSP2Triangles(8, 11, 12, 0, 8, 13, 11, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 17, 0, 15, 20, 21, 0),
    gsSP2Triangles(20, 22, 21, 0, 22, 23, 21, 0),
    gsSP2Triangles(20, 24, 25, 0, 20, 26, 24, 0),
    gsSP2Triangles(27, 28, 25, 0, 26, 29, 30, 0),
    gsSP1Triangle(26, 31, 29, 0),
    gsSPVertex(&gameplay_keepVtx_014900[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 5, 0),
    gsSP1Triangle(9, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_014AE8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sFairyAnimFrameData[44] = {
    0x0000, 0xE7EE, 0x9812, 0x4AAB, 0x50E4, 0x58E4, 0x5AF7, 0x58E4, 0x4AAB, 0x50E4, 0x58E4, 0x59C7, 0x58E4, 0x3555, 
    0x2F1C, 0x271C, 0x2509, 0x271C, 0x3555, 0x2F1C, 0x271C, 0x2639, 0x271C, 0x4AAB, 0x50FA, 0x58E4, 0x5AE0, 0x58E4, 
    0x4AAB, 0x50E4, 0x58E4, 0x59C7, 0x58E4, 0x3555, 0x2F06, 0x271C, 0x2520, 0x271C, 0x3555, 0x2F1C, 0x271C, 0x2639, 
    0x271C, 0x0000, 
}; 

static JointIndex sFairyAnimJointIndices[15] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0001, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x000D },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0002, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0017 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0002, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0021 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gFairyAnim = { { 10 }, sFairyAnimFrameData, sFairyAnimJointIndices, 3 }; 

static u8 unaccounted_014BB4[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gFairyWingTex[] = {
#include "assets/objects/gameplay_keep/fairy_wing.i8.inc.c"
};

static Vtx OLDgameplay_keepVtx_0153C0[4] = {
    VTX(-7, 64, -238, 0, 2048, 210, 210, 255, 255),
    VTX(28, -90, 341, 1024, 2048, 210, 210, 255, 255),
    VTX(1426, -59, 264, 1024, 0, 210, 210, 255, 255),
    VTX(1391, 96, -314, 0, 0, 210, 210, 255, 255),
}; 

Gfx OLDgFairyWing1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFairyWingTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 210, 210, 255, 255),
    gsSPVertex(&OLDgameplay_keepVtx_0153C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx OLDgameplay_keepVtx_015488[4] = {
    VTX(1391, -96, -314, 0, 0, 255, 255, 255, 255),
    VTX(1426, 59, 264, 1024, 0, 255, 255, 255, 255),
    VTX(28, 90, 341, 1024, 2048, 255, 255, 255, 255),
    VTX(-7, -64, -238, 0, 2048, 255, 255, 255, 255),
}; 

Gfx OLDgFairyWing2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFairyWingTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 210, 210, 255, 255),
    gsSPVertex(&OLDgameplay_keepVtx_015488[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx OLDgameplay_keepVtx_015550[4] = {
    VTX(684, 52, -238, 1114, 0, 255, 255, 255, 255),
    VTX(-15, 56, -206, 934, 2048, 255, 255, 255, 255),
    VTX(3, -57, 216, -120, 2048, 255, 255, 255, 255),
    VTX(703, -61, 184, 60, 0, 255, 255, 255, 255),
}; 

Gfx OLDgFairyWing3DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFairyWingTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 210, 210, 255, 255),
    gsSPVertex(&OLDgameplay_keepVtx_015550[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx OLDgameplay_keepVtx_015618[4] = {
    VTX(703, 61, 184, 60, 0, 255, 255, 255, 255),
    VTX(3, 57, 216, -120, 2048, 255, 255, 255, 255),
    VTX(-15, -56, -206, 934, 2048, 255, 255, 255, 255),
    VTX(684, -52, -238, 1114, 0, 255, 255, 255, 255),
}; 

Gfx OLDgFairyWing4DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFairyWingTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 210, 210, 255, 255),
    gsSPVertex(&OLDgameplay_keepVtx_015618[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0156E0[4] = {
    VTX(500, -499, 0, 2048, 0, 255, 255, 255, 255),
    VTX(-499, -499, 0, 0, 0, 255, 255, 255, 255),
    VTX(-499, 500, 0, 0, 2048, 255, 255, 255, 255),
    VTX(500, 500, 0, 2048, 2048, 255, 255, 255, 255),
}; 

Gfx gGlowCircleTextureLoadDL[] = {
    gsDPLoadTextureBlock(gCircleGlowLTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPEndDisplayList(),
}; 

Gfx gGlowCircleDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPVertex(&gameplay_keepVtx_0156E0[0], 4, 0),
    gsSP2Triangles(2, 1, 0, 0, 3, 2, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx gGlowCircleSmallDL[] = {
    gsSPMatrix(0x01000000, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(0x08000000),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_2CYCLE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, TEXEL1, TEXEL0, ENVIRONMENT, TEXEL0, PRIMITIVE, ENVIRONMENT, 
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPLoadTextureBlock(gCircleGlowLTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gCircleGlowSLTex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_0158E8[0], 4, 0),
    gsSP2Triangles(2, 1, 0, 0, 3, 2, 0, 0),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gCircleGlowRTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gCircleGlowSRTex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_015928[0], 4, 0),
    gsSP2Triangles(2, 1, 0, 0, 3, 2, 0, 0),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPSetCycleType(G_CYC_1CYCLE),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0158E8[4] = {
    VTX(0, -499, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-499, -499, 0, 0, 0, 255, 255, 255, 255),
    VTX(-499, 500, 0, 0, 2048, 255, 255, 255, 255),
    VTX(0, 500, 0, 1024, 2048, 255, 255, 255, 255),
}; 

static Vtx gameplay_keepVtx_015928[4] = {
    VTX(500, -499, 0, 1024, 0, 255, 255, 255, 255),
    VTX(0, -499, 0, 0, 0, 255, 255, 255, 255),
    VTX(0, 500, 0, 0, 2048, 255, 255, 255, 255),
    VTX(500, 500, 0, 1024, 2048, 255, 255, 255, 255),
}; 

u64 gUnusedFairyWingTex[] = {
#include "assets/objects/gameplay_keep/unused_fairy_wing.rgb5a1.inc.c"
};

StandardLimb sFairySkelLimb_016968 = { 
    { 0, 0, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sFairySkelLimb_016974 = { 
    { 0, 0, 0 },
    0x02, 0x04,
    NULL
}; 

StandardLimb sFairySkelLimb_016980 = { 
    { 0, 0, 0 },
    0x03, 0xFF,
    NULL
}; 

StandardLimb sFairySkelLimb_01698C = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gFairyWing1DL
}; 

StandardLimb sFairySkelLimb_016998 = { 
    { 0, 0, 0 },
    0x05, 0x07,
    NULL
}; 

StandardLimb sFairySkelLimb_0169A4 = { 
    { 0, 0, 0 },
    0x06, 0xFF,
    NULL
}; 

StandardLimb sFairySkelLimb_0169B0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gFairyWing2DL
}; 

StandardLimb sFairySkelLimb_0169BC = { 
    { 0, 0, 0 },
    0xFF, 0x08,
    gGlowCircleSmallDL
}; 

StandardLimb sFairySkelLimb_0169C8 = { 
    { 0, 0, 0 },
    0x09, 0x0B,
    NULL
}; 

StandardLimb sFairySkelLimb_0169D4 = { 
    { 0, 0, 0 },
    0x0A, 0xFF,
    NULL
}; 

StandardLimb sFairySkelLimb_0169E0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gFairyWing3DL
}; 

StandardLimb sFairySkelLimb_0169EC = { 
    { 0, 0, 0 },
    0x0C, 0xFF,
    NULL
}; 

StandardLimb sFairySkelLimb_0169F8 = { 
    { 0, 0, 0 },
    0x0D, 0xFF,
    NULL
}; 

StandardLimb sFairySkelLimb_016A04 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gFairyWing4DL
}; 

static void* sFairySkelLimbs[14] = {
    &sFairySkelLimb_016968,
    &sFairySkelLimb_016974,
    &sFairySkelLimb_016980,
    &sFairySkelLimb_01698C,
    &sFairySkelLimb_016998,
    &sFairySkelLimb_0169A4,
    &sFairySkelLimb_0169B0,
    &sFairySkelLimb_0169BC,
    &sFairySkelLimb_0169C8,
    &sFairySkelLimb_0169D4,
    &sFairySkelLimb_0169E0,
    &sFairySkelLimb_0169EC,
    &sFairySkelLimb_0169F8,
    &sFairySkelLimb_016A04,
}; 

SkeletonHeader gFairySkel = { sFairySkelLimbs, 14 }; 

u64 gUnknownCircle3Tex[] = {
#include "assets/objects/gameplay_keep/unknown_circle_3.i4.inc.c"
};

u64 gUnknownCircle4Tex[] = {
#include "assets/objects/gameplay_keep/unknown_circle_4.i8.inc.c"
};

u64 gHilite4Tex[] = {
#include "assets/objects/gameplay_keep/hilite_4.rgb5a1.inc.c"
};

u64 gEffUnknown4Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_4.i8.inc.c"
};

u64 gEffUnknown5Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_5.i8.inc.c"
};

static Vtx gameplay_keepVtx_0183D0[14] = {
    VTX(424, 0, 735, 341, 2048, 60, 0, 103, 255),
    VTX(424, 2400, 735, 341, 0, 60, 0, 103, 255),
    VTX(-424, 2400, 735, 171, 0, 196, 0, 103, 255),
    VTX(-849, 0, 0, 1024, 2048, 136, 0, 0, 255),
    VTX(-424, 2400, -735, 853, 0, 196, 0, 153, 255),
    VTX(-424, 0, -735, 853, 2048, 196, 0, 153, 255),
    VTX(-424, 0, 735, 1195, 2048, 196, 0, 103, 255),
    VTX(-424, 2400, 735, 1195, 0, 196, 0, 103, 255),
    VTX(-849, 2400, 0, 1024, 0, 136, 0, 0, 255),
    VTX(-424, 0, 735, 171, 2048, 196, 0, 103, 255),
    VTX(849, 0, 0, 512, 2048, 120, 0, 0, 255),
    VTX(849, 2400, 0, 512, 0, 120, 0, 0, 255),
    VTX(424, 0, -735, 683, 2048, 60, 0, 153, 255),
    VTX(424, 2400, -735, 683, 0, 60, 0, 153, 255),
}; 

Gfx gEffFireCircleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown4Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gEffUnknown5Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 6, 15, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, 
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_0183D0[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 3, 0),
    gsSP2Triangles(3, 8, 4, 0, 0, 2, 9, 0),
    gsSP2Triangles(10, 11, 1, 0, 10, 1, 0, 0),
    gsSP2Triangles(12, 13, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(5, 4, 13, 0, 5, 13, 12, 0),
    gsSPEndDisplayList(),
}; 

static s16 sFish1AnimFrameData[24] = {
    0x0000, 0x4000, 0x8000, 0x0000, 0x03E9, 0x071C, 0x031C, 0xFCE4, 0xF8E4, 0xFC17, 0x0000, 0x0FA5, 0x1C72, 0x0C6E, 
    0xF392, 0xE38E, 0xF05B, 0x0000, 0x0BBC, 0x1555, 0x0953, 0xF6AD, 0xEAAB, 0xF444, 
}; 

static JointIndex sFish1AnimJointIndices[7] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x000A, 0x0002 },
    { 0x0000, 0x0011, 0x0000 },
}; 

AnimationHeader gFish1Anim = { { 7 }, sFish1AnimFrameData, sFish1AnimJointIndices, 3 }; 

static u8 unaccounted_01860C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx sFishSkelVtx_018610[4] = {
    VTX(609, 299, 0, 512, 0, 0, 0, 120, 255),
    VTX(9, 299, 0, 0, 0, 0, 0, 120, 255),
    VTX(9, -300, 0, 0, 512, 0, 0, 120, 255),
    VTX(609, -300, 0, 512, 512, 0, 0, 120, 255),
}; 

static Vtx sFishSkelVtx_018650[4] = {
    VTX(0, 0, -199, 0, 0, 22, 46, 148, 255),
    VTX(0, 400, 0, 0, 0, 16, 53, 150, 255),
    VTX(0, 0, 200, 0, 0, 22, 46, 108, 255),
    VTX(0, -400, 0, 0, 0, 16, 203, 106, 255),
}; 

static Vtx sFishSkelVtx_018690[12] = {
    VTX(318, 249, 0, 243, 77, 61, 102, 0, 255),
    VTX(651, 0, 0, 0, 236, 120, 0, 0, 255),
    VTX(318, 249, 0, 243, 77, 61, 102, 0, 255),
    VTX(318, 249, 0, 243, 77, 61, 102, 0, 255),
    VTX(651, 0, 0, 0, 236, 120, 0, 0, 255),
    VTX(318, 249, 0, 243, 77, 61, 102, 0, 255),
    VTX(651, 0, 0, 0, 256, 120, 0, 0, 255),
    VTX(318, -249, 0, 243, 96, 61, 154, 0, 255),
    VTX(318, -249, 0, 243, 96, 61, 154, 0, 255),
    VTX(318, -249, 0, 243, 96, 61, 154, 0, 255),
    VTX(651, 0, 0, 0, 256, 120, 0, 0, 255),
    VTX(318, -249, 0, 243, 96, 61, 154, 0, 255),
}; 

static Vtx sFishSkelVtx_018750[22] = {
    VTX(10, -400, 0, 0, 341, 0, 0, 120, 255),
    VTX(483, -633, 0, 495, -56, 0, 0, 120, 255),
    VTX(356, -202, 0, 364, 679, 0, 0, 120, 255),
    VTX(356, 202, 0, 364, 679, 0, 0, 120, 255),
    VTX(483, 632, 0, 495, -56, 0, 0, 120, 255),
    VTX(10, 400, 0, 0, 341, 0, 0, 120, 255),
    VTX(0, 0, -199, 476, 256, 22, 46, 148, 255),
    VTX(0, 400, 0, 476, 0, 16, 53, 150, 255),
    VTX(396, 273, 0, 766, 80, 22, 46, 148, 255),
    VTX(396, 273, 0, 766, 80, 22, 46, 108, 255),
    VTX(0, 400, 0, 476, 0, 16, 53, 106, 255),
    VTX(0, 0, 200, 476, 256, 22, 46, 108, 255),
    VTX(800, 0, 0, 1061, 256, 27, 40, 147, 255),
    VTX(800, 0, 0, 1061, 256, 27, 40, 109, 255),
    VTX(0, 0, 200, 476, 236, 22, 210, 108, 255),
    VTX(0, -400, 0, 476, -19, 16, 203, 106, 255),
    VTX(395, -273, 0, 766, 61, 22, 210, 108, 255),
    VTX(800, 0, 0, 1061, 236, 27, 216, 109, 255),
    VTX(395, -273, 0, 766, 61, 22, 210, 148, 255),
    VTX(0, -400, 0, 476, -19, 16, 203, 150, 255),
    VTX(0, 0, -199, 476, 236, 22, 210, 148, 255),
    VTX(800, 0, 0, 1061, 236, 27, 216, 147, 255),
}; 

Gfx sFishSkelLimbDL_0188B0[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gFishTailTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sFishSkelVtx_018610[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sFishSkelLimbDL_018950[] = {
    gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPVertex(&sFishSkelVtx_018650[0], 4, 0),
    gsSPMatrix(0x0D000040, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gFishBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x001C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sFishSkelVtx_018690[0], 12, 4),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x01DC00EC),
    gsSPModifyVertex(3, G_MWO_POINT_ST, 0x01DCFFED),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x01DC00EC),
    gsSP2Triangles(2, 5, 6, 0, 7, 8, 0, 0),
    gsSP1Triangle(9, 3, 2, 0),
    gsSPModifyVertex(0, G_MWO_POINT_ST, 0x01DC0100),
    gsSP1Triangle(0, 10, 11, 0),
    gsSPModifyVertex(2, G_MWO_POINT_ST, 0x01DC0100),
    gsSPModifyVertex(1, G_MWO_POINT_ST, 0x01DC0000),
    gsSP2Triangles(2, 1, 12, 0, 13, 14, 2, 0),
    gsSP1Triangle(15, 1, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sFishSkelLimbDL_018A68[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, 0, 0, 0, 0, COMBINED),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gFishTailTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x003C, 0x003C),
    gsDPSetPrimColor(0, 0x80, 255, 255, 255, 255),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&sFishSkelVtx_018750[0], 22, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(gFishBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 8, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 5, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetTileSize(G_TX_RENDERTILE, 0, 0, 0x007C, 0x001C),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(8, 12, 6, 0, 11, 13, 9, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsSP2Triangles(18, 19, 20, 0, 20, 21, 18, 0),
    gsSPEndDisplayList(),
}; 

u64 gFishTailTex[] = {
#include "assets/objects/gameplay_keep/fish_tail.rgb5a1.inc.c"
};

u64 gFishBodyTex[] = {
#include "assets/objects/gameplay_keep/fish_body.rgb5a1.inc.c"
};

StandardLimb sFishSkelLimb_018F80 = { 
    { 0, 0, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sFishSkelLimb_018F8C = { 
    { 0, 0, 0 },
    0x02, 0xFF,
    NULL
}; 

StandardLimb sFishSkelLimb_018F98 = { 
    { 0, 0, 0 },
    0xFF, 0x03,
    sFishSkelLimbDL_018A68
}; 

StandardLimb sFishSkelLimb_018FA4 = { 
    { 0, 0, 0 },
    0x04, 0x05,
    NULL
}; 

StandardLimb sFishSkelLimb_018FB0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sFishSkelLimbDL_018950
}; 

StandardLimb sFishSkelLimb_018FBC = { 
    { 700, 0, 0 },
    0xFF, 0xFF,
    sFishSkelLimbDL_0188B0
}; 

static void* sFishSkelLimbs[6] = {
    &sFishSkelLimb_018F80,
    &sFishSkelLimb_018F8C,
    &sFishSkelLimb_018F98,
    &sFishSkelLimb_018FA4,
    &sFishSkelLimb_018FB0,
    &sFishSkelLimb_018FBC,
}; 

FlexSkeletonHeader gFishSkel = { sFishSkelLimbs, 6, 3 }; 

static u8 unaccounted_018FEC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sFish2AnimFrameData[64] = {
    0x0000, 0x4000, 0x8000, 0xFFC0, 0xFF2D, 0xFE8D, 0xFDEE, 0xFD5B, 0xFCE2, 0xFC90, 0xFC72, 0xFC90, 0xFCE2, 0xFD5B, 
    0xFDEE, 0xFE8D, 0xFF2D, 0xFFC0, 0x0040, 0x00D3, 0x0173, 0x0212, 0x02A5, 0x031E, 0x0370, 0x038E, 0x0370, 0x031E, 
    0x02A5, 0x0212, 0x0173, 0x00D3, 0x0040, 0xFDBC, 0xFEF1, 0x0000, 0x010F, 0x0244, 0x0387, 0x04BD, 0x05CB, 0x0699, 
    0x070D, 0x070D, 0x0699, 0x05CB, 0x04BD, 0x0387, 0x0244, 0x010F, 0x0000, 0xFEF1, 0xFDBC, 0xFC79, 0xFB43, 0xFA35, 
    0xF967, 0xF8F3, 0xF8F3, 0xF967, 0xFA35, 0xFB43, 0xFC79, 0x0000, 
}; 

static JointIndex sFish2AnimJointIndices[7] = {
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0021, 0x0000 },
}; 

AnimationHeader gFish2Anim = { { 30 }, sFish2AnimFrameData, sFish2AnimJointIndices, 3 }; 

static u8 unaccounted_0190AC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

u64 gEffShockwaveTex[] = {
#include "assets/objects/gameplay_keep/eff_shockwave.i8.inc.c"
};

Gfx gEffShockwaveDL[] = {
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_ZB_CLD_SURF2),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffShockwaveTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_01A120[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_01A120[4] = {
    VTX(-31, 0, 32, 0, 0, 255, 255, 255, 255),
    VTX(32, 0, 32, 2048, 0, 255, 255, 255, 255),
    VTX(-31, 0, -31, 0, 2048, 255, 255, 255, 255),
    VTX(32, 0, -31, 2048, 2048, 255, 255, 255, 255),
}; 

Gfx gEffBubbleDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_01A1D8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_01A1D8[4] = {
    VTX(8, 8, 0, 0, 0, 255, 255, 255, 255),
    VTX(-7, 8, 0, 512, 0, 255, 255, 255, 255),
    VTX(-7, -7, 0, 512, 512, 255, 255, 255, 255),
    VTX(8, -7, 0, 0, 512, 255, 255, 255, 255),
}; 

static u8 unaccounted_01A218[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gEffFireFootprint1Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_1.ia8.inc.c"
};

u64 gEffFireFootprint2Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_2.ia8.inc.c"
};

u64 gEffFireFootprint3Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_3.ia8.inc.c"
};

u64 gEffFireFootprint4Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_4.ia8.inc.c"
};

u64 gEffFireFootprint5Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_5.ia8.inc.c"
};

u64 gEffFireFootprint6Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_6.ia8.inc.c"
};

u64 gEffFireFootprint7Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_7.ia8.inc.c"
};

u64 gEffFireFootprint8Tex[] = {
#include "assets/objects/gameplay_keep/eff_fire_footprint_8.ia8.inc.c"
};

Gfx gEffFireFootprintDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | 
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_01C280[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_01C280[4] = {
    VTX(16, 16, 0, 2048, 0, 255, 255, 255, 255),
    VTX(-15, 16, 0, 0, 0, 255, 255, 255, 255),
    VTX(-15, -15, 0, 0, 2048, 255, 255, 255, 255),
    VTX(16, -15, 0, 2048, 2048, 255, 255, 255, 255),
}; 

u64 gEffUnusedBubbles1Tex[] = {
#include "assets/objects/gameplay_keep/eff_unused_bubbles_1.ia8.inc.c"
};

u64 gEffUnusedBubbles2Tex[] = {
#include "assets/objects/gameplay_keep/eff_unused_bubbles_2.ia8.inc.c"
};

u64 gEffUnusedBubbles3Tex[] = {
#include "assets/objects/gameplay_keep/eff_unused_bubbles_3.ia8.inc.c"
};

u64 gEffUnusedBubbles4Tex[] = {
#include "assets/objects/gameplay_keep/eff_unused_bubbles_4.ia8.inc.c"
};

u64 gEffUnusedBubbles5Tex[] = {
#include "assets/objects/gameplay_keep/eff_unused_bubbles_5.ia8.inc.c"
};

u64 gEffUnusedBubbles6Tex[] = {
#include "assets/objects/gameplay_keep/eff_unused_bubbles_6.ia8.inc.c"
};

u64 gEffUnusedBubbles7Tex[] = {
#include "assets/objects/gameplay_keep/eff_unused_bubbles_7.ia8.inc.c"
};

u64 gEffUnusedBubbles8Tex[] = {
#include "assets/objects/gameplay_keep/eff_unused_bubbles_8.ia8.inc.c"
};

Gfx gEffUnusedBubblesDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_01E330[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_01E330[4] = {
    VTX(16, 16, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(-15, 16, 0, 0, 1024, 255, 255, 255, 255),
    VTX(-15, -15, 0, 0, 0, 255, 255, 255, 255),
    VTX(16, -15, 0, 1024, 0, 255, 255, 255, 255),
}; 

u64 gLensOfTruthMaskTex[] = {
#include "assets/objects/gameplay_keep/lens_of_truth_mask.i8.inc.c"
};

u64 gEffHitMark1Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_1.i4.inc.c"
};

u64 gEffHitMark2Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_2.i4.inc.c"
};

u64 gEffHitMark3Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_3.i4.inc.c"
};

u64 gEffHitMark4Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_4.i4.inc.c"
};

u64 gEffHitMark5Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_5.i4.inc.c"
};

u64 gEffHitMark6Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_6.i4.inc.c"
};

u64 gEffHitMark7Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_7.i4.inc.c"
};

u64 gEffHitMark8Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_8.i4.inc.c"
};

u64 gEffHitMark9Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_9.i4.inc.c"
};

u64 gEffHitMark10Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_10.i4.inc.c"
};

u64 gEffHitMark11Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_11.i4.inc.c"
};

u64 gEffHitMark12Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_12.i4.inc.c"
};

u64 gEffHitMark13Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_13.i4.inc.c"
};

u64 gEffHitMark14Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_14.i4.inc.c"
};

u64 gEffHitMark15Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_15.i4.inc.c"
};

u64 gEffHitMark16Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_16.i4.inc.c"
};

u64 gEffHitMark17Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_17.i4.inc.c"
};

u64 gEffHitMark18Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_18.i4.inc.c"
};

u64 gEffHitMark19Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_19.i4.inc.c"
};

u64 gEffHitMark20Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_20.i4.inc.c"
};

u64 gEffHitMark21Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_21.i4.inc.c"
};

u64 gEffHitMark22Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_22.i4.inc.c"
};

u64 gEffHitMark23Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_23.i4.inc.c"
};

u64 gEffHitMark24Tex[] = {
#include "assets/objects/gameplay_keep/eff_hit_mark_24.i4.inc.c"
};

Gfx gEffHitMarkDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 24, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0217C8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0217C8[4] = {
    VTX(12, 12, 0, 768, 0, 255, 255, 255, 255),
    VTX(-11, 12, 0, 0, 0, 255, 255, 255, 255),
    VTX(-11, -11, 0, 0, 768, 255, 255, 255, 255),
    VTX(12, -11, 0, 768, 768, 255, 255, 255, 255),
}; 

static u8 unaccounted_021808[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gEffUnknown6Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_6.i8.inc.c"
};

u64 gEffUnknown7Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_7.i8.inc.c"
};

u64 gEffUnknown8Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_8.i8.inc.c"
};

u64 gEffMagmaBubble1Tex[] = {
#include "assets/objects/gameplay_keep/eff_magma_bubbles_1.ia8.inc.c"
};

u64 gEffMagmaBubble2Tex[] = {
#include "assets/objects/gameplay_keep/eff_magma_bubbles_2.ia8.inc.c"
};

u64 gEffMagmaBubble3Tex[] = {
#include "assets/objects/gameplay_keep/eff_magma_bubbles_3.ia8.inc.c"
};

u64 gEffMagmaBubble4Tex[] = {
#include "assets/objects/gameplay_keep/eff_magma_bubbles_4.ia8.inc.c"
};

u64 gEffMagmaBubble5Tex[] = {
#include "assets/objects/gameplay_keep/eff_magma_bubbles_5.ia8.inc.c"
};

u64 gEffMagmaBubble6Tex[] = {
#include "assets/objects/gameplay_keep/eff_magma_bubbles_6.ia8.inc.c"
};

u64 gEffMagmaBubble7Tex[] = {
#include "assets/objects/gameplay_keep/eff_magma_bubbles_7.ia8.inc.c"
};

u64 gEffMagmaBubble8Tex[] = {
#include "assets/objects/gameplay_keep/eff_magma_bubbles_8.ia8.inc.c"
};

Gfx gEffMagmaBubbleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 24, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_024470[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_024470[4] = {
    VTX(16, 12, 0, 2048, 0, 255, 255, 255, 255),
    VTX(-15, 12, 0, 0, 0, 255, 255, 255, 255),
    VTX(-15, -11, 0, 0, 1536, 255, 255, 255, 255),
    VTX(16, -11, 0, 2048, 1536, 255, 255, 255, 255),
}; 

u64 gEffWaterRippleTex[] = {
#include "assets/objects/gameplay_keep/eff_ss_g_ripple.i8.inc.c"
};

Gfx gEffWaterRippleDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffWaterRippleTex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_025510[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_025510[4] = {
    VTX(32, 0, -31, 2048, 2048, 255, 255, 255, 255),
    VTX(-31, 0, -31, 0, 2048, 255, 255, 255, 255),
    VTX(-31, 0, 32, 0, 0, 255, 255, 255, 255),
    VTX(32, 0, 32, 2048, 0, 255, 255, 255, 255),
}; 

Gfx gEffSparkDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0255B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0255B0[4] = {
    VTX(-15, -15, 0, 0, 0, 255, 255, 255, 255),
    VTX(16, -15, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-15, 16, 0, 0, 1024, 255, 255, 255, 255),
    VTX(16, 16, 0, 1024, 1024, 255, 255, 255, 255),
}; 

u64 gEffWaterSplash1Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_1.i8.inc.c"
};

u64 gEffWaterSplash2Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_2.i8.inc.c"
};

u64 gEffWaterSplash3Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_3.i8.inc.c"
};

u64 gEffWaterSplash4Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_4.i8.inc.c"
};

u64 gEffWaterSplash5Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_5.i8.inc.c"
};

u64 gEffWaterSplash6Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_6.i8.inc.c"
};

u64 gEffWaterSplash7Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_7.i8.inc.c"
};

u64 gEffWaterSplash8Tex[] = {
#include "assets/objects/gameplay_keep/eff_water_splash_8.i8.inc.c"
};

Gfx gEffWaterSplashDL[] = {
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 40, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | 
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_027E50[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_027E50[4] = {
    VTX(16, 24, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-15, 24, 0, 0, 0, 255, 255, 255, 255),
    VTX(-15, -23, 0, 0, 1536, 255, 255, 255, 255),
    VTX(16, -23, 0, 1024, 1536, 255, 255, 255, 255),
}; 

u64 gUnknownEffStone1Tex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_stone_1.ia8.inc.c"
};

u64 gUnknownEffStone2Tex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_stone_2.ia8.inc.c"
};

u64 gUnknownEffStone3Tex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_stone_3.ia8.inc.c"
};

u64 gUnknownEffStone4Tex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_stone_4.ia8.inc.c"
};

u64 gUnknownEffStone5Tex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_stone_5.ia8.inc.c"
};

u64 gUnknownEffStone6Tex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_stone_6.ia8.inc.c"
};

u64 gUnknownEffStone7Tex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_stone_7.ia8.inc.c"
};

u64 gUnknownEffStone8Tex[] = {
#include "assets/objects/gameplay_keep/unknown_eff_stone_8.ia8.inc.c"
};

Gfx gUnknownEffStoneDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_029EF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_029EF0[4] = {
    VTX(16, 16, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-15, 16, 0, 0, 0, 255, 255, 255, 255),
    VTX(-15, -15, 0, 0, 1024, 255, 255, 255, 255),
    VTX(16, -15, 0, 1024, 1024, 255, 255, 255, 255),
}; 

u64 gEffLightning1Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_1.i8.inc.c"
};

u64 gEffLightning2Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_2.i8.inc.c"
};

u64 gEffLightning3Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_3.i8.inc.c"
};

u64 gEffLightning4Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_4.i8.inc.c"
};

u64 gEffLightning5Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_5.i8.inc.c"
};

u64 gEffLightning6Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_6.i8.inc.c"
};

u64 gEffLightning7Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_7.i8.inc.c"
};

u64 gEffLightning8Tex[] = {
#include "assets/objects/gameplay_keep/eff_lightning_8.i8.inc.c"
};

Gfx gEffLightningDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 32, 96, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_02CF98[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_02CF98[4] = {
    VTX(16, 0, 0, 2048, 0, 255, 255, 255, 255),
    VTX(-15, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(-15, -95, 0, 0, 6144, 255, 255, 255, 255),
    VTX(16, -95, 0, 2048, 6144, 255, 255, 255, 255),
}; 

static u8 unaccounted_02CFD8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gEffEnemyDeathFlame1Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_1.i8.inc.c"
};

u64 gEffEnemyDeathFlame2Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_2.i8.inc.c"
};

u64 gEffEnemyDeathFlame3Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_3.i8.inc.c"
};

u64 gEffEnemyDeathFlame4Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_4.i8.inc.c"
};

u64 gEffEnemyDeathFlame5Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_5.i8.inc.c"
};

u64 gEffEnemyDeathFlame6Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_6.i8.inc.c"
};

u64 gEffEnemyDeathFlame7Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_7.i8.inc.c"
};

u64 gEffEnemyDeathFlame8Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_8.i8.inc.c"
};

u64 gEffEnemyDeathFlame9Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_9.i8.inc.c"
};

u64 gEffEnemyDeathFlame10Tex[] = {
#include "assets/objects/gameplay_keep/eff_enemy_death_flame_10.i8.inc.c"
};

Gfx gEffEnemyDeathFlameDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_032048[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_032048[4] = {
    VTX(16, 32, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-15, 32, 0, 0, 0, 255, 255, 255, 255),
    VTX(-15, -31, 0, 0, 2048, 255, 255, 255, 255),
    VTX(16, -31, 0, 1024, 2048, 255, 255, 255, 255),
}; 

static u8 unaccounted_032088[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gEffUnknown9Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_9.i8.inc.c"
};

u64 gEffUnknown10Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_10.i8.inc.c"
};

u64 gEffUnknown11Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_11.i8.inc.c"
};

u64 gEffUnknown12Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_12.i8.inc.c"
};

u64 gUnknownWoodBoardTex[] = {
#include "assets/objects/gameplay_keep/unknown_wood_board.i8.inc.c"
};

static Vtx gameplay_keepVtx_033490[3] = {
    VTX(13, -6, 10, 390, 1635, 96, 66, 28, 255),
    VTX(16, -5, -4, 558, 1599, 87, 82, 12, 255),
    VTX(3, 6, 13, 267, 1354, 89, 78, 15, 255),
}; 

static Vtx gameplay_keepVtx_0334C0[38] = {
    VTX(1, -14, 1, 68, 2021, 50, 151, 27, 255),
    VTX(13, -6, 10, 390, 1635, 50, 151, 27, 255),
    VTX(-5, -10, 13, 171, 1702, 28, 152, 52, 255),
    VTX(1, -14, 1, 68, 2021, 50, 151, 27, 255),
    VTX(16, -5, -4, 558, 1599, 67, 157, 0, 255),
    VTX(13, -6, 10, 390, 1635, 50, 151, 27, 255),
    VTX(1, -14, 1, 68, 2021, 36, 170, 181, 255),
    VTX(-2, -4, -13, -200, 1586, 44, 191, 166, 255),
    VTX(16, -5, -4, 558, 1599, 44, 191, 166, 255),
    VTX(1, -14, 1, 68, 2021, 192, 159, 230, 255),
    VTX(-11, -6, 0, -4, 1632, 192, 159, 230, 255),
    VTX(-2, -4, -13, -200, 1586, 198, 166, 203, 255),
    VTX(-5, -10, 13, 171, 1702, 162, 44, 59, 255),
    VTX(3, 6, 13, 267, 1354, 162, 53, 51, 255),
    VTX(-11, -6, 0, -4, 1632, 162, 53, 51, 255),
    VTX(1, -14, 1, 68, 2021, 192, 159, 230, 255),
    VTX(-5, -10, 13, 171, 1702, 189, 157, 1, 255),
    VTX(-11, -6, 0, -4, 1632, 192, 159, 230, 255),
    VTX(-1, 11, -2, 939, 1121, 81, 88, 4, 255),
    VTX(16, -5, -4, 558, 1599, 87, 82, 12, 255),
    VTX(6, 5, -12, 719, 1384, 81, 88, 5, 255),
    VTX(3, 6, 13, 267, 1354, 20, 242, 117, 255),
    VTX(-5, -10, 13, 171, 1702, 20, 242, 117, 255),
    VTX(13, -6, 10, 390, 1635, 20, 242, 117, 255),
    VTX(-1, 11, -2, -85, 1121, 81, 88, 4, 255),
    VTX(3, 6, 13, 267, 1354, 89, 78, 15, 255),
    VTX(16, -5, -4, 558, 1599, 87, 82, 12, 255),
    VTX(-1, 11, -2, -85, 1121, 163, 61, 43, 255),
    VTX(-11, -6, 0, -4, 1632, 162, 53, 51, 255),
    VTX(3, 6, 13, 267, 1354, 162, 53, 51, 255),
    VTX(6, 5, -12, 719, 1384, 175, 62, 195, 255),
    VTX(-2, -4, -13, 824, 1586, 178, 80, 215, 255),
    VTX(-11, -6, 0, 1020, 1632, 175, 62, 195, 255),
    VTX(-1, 11, -2, 939, 1121, 176, 41, 178, 255),
    VTX(-11, -6, 0, 1020, 1632, 175, 62, 195, 255),
    VTX(6, 5, -12, 719, 1384, 50, 216, 155, 255),
    VTX(16, -5, -4, 558, 1599, 44, 191, 166, 255),
    VTX(-2, -4, -13, 824, 1586, 44, 191, 166, 255),
}; 

Gfx gEffIceFragment1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown12Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | 
                G_TX_WRAP, 5, 1),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, 
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0x80, 170, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_033490[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_0334C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0334C0[30], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx gEffIceFragment2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown12Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, 15),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, G_TX_NOLOD, G_TX_NOMIRROR | 
                G_TX_WRAP, 5, 1),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, 
                       ENVIRONMENT, COMBINED, ENVIRONMENT, ENVIRONMENT, 0, LOD_FRACTION, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_033490[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_0334C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_0334C0[30], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_033908[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_033910[3] = {
    VTX(23, 19, -35, -110, 1771, 47, 251, 146, 255),
    VTX(-17, 24, -41, 42, 1760, 239, 241, 139, 255),
    VTX(-30, 93, -32, 102, 1319, 239, 19, 139, 255),
}; 

static Vtx gameplay_keepVtx_033940[90] = {
    VTX(23, 19, -35, -110, 1771, 47, 251, 146, 255),
    VTX(-30, 93, -32, 102, 1319, 239, 19, 139, 255),
    VTX(29, 68, -34, -127, 1484, 5, 20, 138, 255),
    VTX(-60, 22, -26, 180, 1720, 140, 11, 27, 255),
    VTX(-48, 29, 21, 328, 1724, 140, 11, 26, 255),
    VTX(-44, 77, 19, 328, 1410, 146, 37, 27, 255),
    VTX(-54, 81, -24, 176, 1419, 152, 49, 34, 255),
    VTX(-23, 28, 38, 442, 1751, 7, 209, 110, 255),
    VTX(25, 14, 29, 647, 1808, 8, 194, 102, 255),
    VTX(27, 79, 44, 619, 1426, 64, 231, 98, 255),
    VTX(-23, 28, 38, 442, 1751, 203, 246, 107, 255),
    VTX(27, 79, 44, 619, 1426, 238, 25, 115, 255),
    VTX(-15, 64, 40, 476, 1503, 216, 25, 110, 255),
    VTX(42, 41, 18, 712, 1655, 106, 230, 48, 255),
    VTX(49, 20, -21, 831, 1730, 114, 238, 30, 255),
    VTX(45, 59, -15, 818, 1542, 119, 245, 7, 255),
    VTX(48, 68, 20, 715, 1493, 116, 227, 253, 255),
    VTX(27, 2, 16, -323, 1866, 17, 138, 11, 255),
    VTX(-24, 2, 21, 388, 1905, 6, 151, 57, 255),
    VTX(-22, -8, -17, 119, 1936, 17, 138, 11, 255),
    VTX(31, 6, -23, -161, 1824, 53, 149, 250, 255),
    VTX(31, 101, -14, -193, 1276, 46, 98, 51, 255),
    VTX(-30, 128, -20, 138, 1170, 34, 92, 68, 255),
    VTX(-26, 95, 22, 386, 1251, 25, 103, 56, 255),
    VTX(-30, 128, -20, 138, 1170, 25, 49, 150, 255),
    VTX(31, 101, -14, -193, 1276, 88, 49, 192, 255),
    VTX(29, 68, -34, -127, 1484, 79, 30, 172, 255),
    VTX(45, 59, -15, 818, 1542, 94, 23, 186, 255),
    VTX(49, 20, -21, 831, 1730, 58, 239, 153, 255),
    VTX(23, 19, -35, 914, 1771, 47, 251, 146, 255),
    VTX(29, 68, -34, 897, 1484, 79, 30, 172, 255),
    VTX(31, 6, -23, -161, 1824, 23, 186, 162, 255),
    VTX(-22, -8, -17, 119, 1936, 246, 184, 161, 255),
    VTX(-17, 24, -41, 42, 1760, 7, 180, 164, 255),
    VTX(23, 19, -35, -110, 1771, 6, 178, 166, 255),
    VTX(-60, 22, -26, 180, 1720, 218, 237, 144, 255),
    VTX(-54, 81, -24, 176, 1419, 210, 21, 148, 255),
    VTX(-30, 93, -32, 102, 1319, 239, 19, 139, 255),
    VTX(-17, 24, -41, 42, 1760, 239, 241, 139, 255),
    VTX(-26, 95, 22, 386, 1251, 163, 65, 36, 255),
    VTX(-30, 128, -20, 138, 1170, 156, 46, 46, 255),
    VTX(-54, 81, -24, 176, 1419, 152, 49, 34, 255),
    VTX(-44, 77, 19, 328, 1410, 146, 37, 27, 255),
    VTX(-22, -8, -17, 119, 1936, 173, 173, 23, 255),
    VTX(-24, 2, 21, 388, 1905, 167, 178, 14, 255),
    VTX(-48, 29, 21, 328, 1724, 178, 179, 47, 255),
    VTX(-60, 22, -26, 180, 1720, 181, 169, 32, 255),
    VTX(-23, 28, 38, 442, 1751, 203, 246, 107, 255),
    VTX(-15, 64, 40, 476, 1503, 216, 25, 110, 255),
    VTX(-44, 77, 19, 328, 1410, 194, 20, 100, 255),
    VTX(-48, 29, 21, 328, 1724, 191, 10, 99, 255),
    VTX(-26, 95, 22, 386, 1251, 216, 46, 103, 255),
    VTX(27, 79, 44, 619, 1426, 238, 25, 115, 255),
    VTX(-24, 2, 21, 388, 1905, 6, 151, 57, 255),
    VTX(27, 2, 16, 701, 1866, 9, 167, 80, 255),
    VTX(25, 14, 29, 647, 1808, 8, 194, 102, 255),
    VTX(-24, 2, 21, 388, 1905, 225, 194, 97, 255),
    VTX(-23, 28, 38, 442, 1751, 7, 209, 110, 255),
    VTX(42, 41, 18, 712, 1655, 106, 230, 48, 255),
    VTX(48, 68, 20, 715, 1493, 83, 232, 83, 255),
    VTX(27, 79, 44, 619, 1426, 64, 231, 98, 255),
    VTX(25, 14, 29, 647, 1808, 93, 225, 68, 255),
    VTX(27, 79, 44, 619, 1426, 52, 100, 41, 255),
    VTX(48, 68, 20, 715, 1493, 102, 62, 8, 255),
    VTX(31, 101, -14, 831, 1276, 46, 98, 51, 255),
    VTX(31, 101, -14, 831, 1276, 88, 49, 192, 255),
    VTX(45, 59, -15, 818, 1542, 94, 23, 186, 255),
    VTX(27, 2, 16, 701, 1866, 98, 195, 32, 255),
    VTX(31, 6, -23, 863, 1824, 53, 149, 250, 255),
    VTX(49, 20, -21, 831, 1730, 75, 163, 253, 255),
    VTX(49, 20, -21, 831, 1730, 114, 238, 30, 255),
    VTX(42, 41, 18, 712, 1655, 106, 230, 48, 255),
    VTX(23, 19, -35, 914, 1771, 47, 251, 146, 255),
    VTX(49, 20, -21, 831, 1730, 58, 239, 153, 255),
    VTX(31, 6, -23, 863, 1824, 23, 186, 162, 255),
    VTX(-60, 22, -26, 180, 1720, 218, 237, 144, 255),
    VTX(-17, 24, -41, 42, 1760, 239, 241, 139, 255),
    VTX(-22, -8, -17, 119, 1936, 246, 184, 161, 255),
    VTX(29, 68, -34, 897, 1484, 79, 30, 172, 255),
    VTX(-30, 93, -32, 102, 1319, 239, 19, 139, 255),
    VTX(-54, 81, -24, 176, 1419, 210, 21, 148, 255),
    VTX(-30, 128, -20, 138, 1170, 205, 35, 153, 255),
    VTX(25, 14, 29, 647, 1808, 93, 225, 68, 255),
    VTX(-23, 28, 38, 442, 1751, 203, 246, 107, 255),
    VTX(-48, 29, 21, 328, 1724, 178, 179, 47, 255),
    VTX(-24, 2, 21, 388, 1905, 225, 194, 97, 255),
    VTX(-44, 77, 19, 328, 1410, 194, 20, 100, 255),
    VTX(-15, 64, 40, 476, 1503, 216, 25, 110, 255),
    VTX(-26, 95, 22, 386, 1251, 216, 46, 103, 255),
    VTX(-26, 95, 22, 386, 1251, 25, 103, 56, 255),
}; 

Gfx gEffIceFragment3DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x0FA0, 0x0FA0, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown12Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, 1, G_TX_NOLOD),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_I, G_IM_SIZ_8b, 4, 0x0000, 1, 0, G_TX_NOMIRROR | G_TX_WRAP, 5, 1, G_TX_NOMIRROR | G_TX_WRAP, 5,
                2),
    gsDPSetTileSize(1, 0, 0, 0x007C, 0x007C),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, 
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0x80, 0x80, 170, 255, 255, 255),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_033910[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_033940[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(13, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 24, 2, 1, 0),
    gsSP2Triangles(27, 28, 29, 0, 27, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_033940[31], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 17, 21, 0, 22, 23, 24, 0),
    gsSP2Triangles(25, 24, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_033940[62], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 4, 0),
    gsSP2Triangles(5, 6, 7, 0, 5, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(4, 16, 3, 0, 17, 18, 19, 0),
    gsSP2Triangles(9, 20, 5, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 0, 2, 27, 0),
    gsSPEndDisplayList(),
}; 

static s16 sBugCrawlAnimFrameData[142] = {
    0x0000, 0x4000, 0x0081, 0x0173, 0xE3E0, 0x6792, 0xD86C, 0x12CF, 0x1705, 0x2643, 0xED31, 0xE8FB, 0x1C20, 0x986E, 
    0x0000, 0xF9CB, 0xF1B0, 0xF9CB, 0x0000, 0x0422, 0x0627, 0x0422, 0x0000, 0xFD16, 0xFABF, 0xFD16, 0x0000, 0x0381, 
    0x0776, 0x0381, 0x0004, 0x0382, 0x0591, 0x0382, 0x0004, 0xFB5B, 0xF534, 0xFB5B, 0xB8CF, 0xB191, 0xACCE, 0xB191, 
    0xB8CF, 0xC270, 0xCEFB, 0xC270, 0x041E, 0x0742, 0x0BC6, 0x0742, 0x041E, 0x0268, 0x0269, 0x0269, 0xFCD7, 0xFE1D, 
    0xFEC1, 0xFE1D, 0xFCD7, 0xFB2D, 0xF97D, 0xFB2D, 0xFF37, 0x05A0, 0x0AE9, 0x05A0, 0xFF37, 0xF761, 0xEC7F, 0xF761, 
    0xC59C, 0xBBEF, 0xB41F, 0xBBEF, 0xC59C, 0xD1CC, 0xE30A, 0xD1CC, 0xFBE2, 0xFD98, 0xFD97, 0xFD98, 0xFBE2, 0xF8BE, 
    0xF43A, 0xF8BE, 0x0329, 0x04D3, 0x0683, 0x04D3, 0x0329, 0x01E3, 0x013F, 0x01E3, 0xFF37, 0xF761, 0xEC7F, 0xF761, 
    0xFF37, 0x05A0, 0x0AE9, 0x05A0, 0xC59C, 0xD1CC, 0xE30A, 0xD1CC, 0xC59C, 0xBBEF, 0xB41F, 0xBBEF, 0x0000, 0xFBDE, 
    0xF9D9, 0xFBDE, 0x0000, 0x0635, 0x0E50, 0x0635, 0x0000, 0xFC7F, 0xF88A, 0xFC7F, 0x0000, 0x02EA, 0x0541, 0x02EA, 
    0x0004, 0xFB5B, 0xF534, 0xFB5B, 0x0004, 0x0382, 0x0591, 0x0382, 0xB8CF, 0xC270, 0xCEFB, 0xC270, 0xB8CF, 0xB191, 
    0xACCE, 0xB191, 
}; 

static JointIndex sBugCrawlAnimJointIndices[24] = {
    { 0x0000, 0x0002, 0x0003 },
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0004, 0x0005, 0x0006 },
    { 0x000E, 0x0016, 0x001E },
    { 0x0000, 0x0000, 0x0026 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0007, 0x0008, 0x0009 },
    { 0x002E, 0x0036, 0x003E },
    { 0x0000, 0x0000, 0x0046 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x000A, 0x000B, 0x0009 },
    { 0x004E, 0x0056, 0x005E },
    { 0x0000, 0x0000, 0x0066 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x000C, 0x000D, 0x0006 },
    { 0x006E, 0x0076, 0x007E },
    { 0x0000, 0x0000, 0x0086 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
}; 

AnimationHeader gBugCrawlAnim = { { 8 }, sBugCrawlAnimFrameData, sBugCrawlAnimJointIndices, 14 }; 

static u8 unaccounted_03420C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

Gfx gBugLimb1DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_0342D0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb1WrapperDL[] = {
    gsSPDisplayList(gBugLimb1DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb1WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb1WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0342D0[3] = {
    VTX(263, 0, -36, 4, 0, 0, 127, 0, 255),
    VTX(0, 0, 0, 128, 513, 0, 127, 0, 255),
    VTX(263, 0, 35, 252, 0, 0, 127, 0, 255),
}; 

Gfx gBugLimb2DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_0343C0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb2WrapperDL[] = {
    gsSPDisplayList(gBugLimb2DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb2WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb2WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0343C0[3] = {
    VTX(0, 0, 35, 4, 0, 0, 127, 0, 255),
    VTX(436, 0, 0, 128, 510, 0, 127, 0, 255),
    VTX(0, 0, -36, 252, 0, 0, 127, 0, 255),
}; 

Gfx gBugLimb3DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_0344B0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb3WrapperDL[] = {
    gsSPDisplayList(gBugLimb3DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb3WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb3WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0344B0[3] = {
    VTX(263, 0, -36, 252, 0, 0, 127, 0, 255),
    VTX(0, 0, 0, 128, 538, 0, 127, 0, 255),
    VTX(263, 0, 35, 4, 0, 0, 127, 0, 255),
}; 

Gfx gBugLimb4DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_0345A0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb4WrapperDL[] = {
    gsSPDisplayList(gBugLimb4DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb4WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb4WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0345A0[3] = {
    VTX(0, 0, 35, 4, 0, 0, 127, 0, 255),
    VTX(333, 0, 0, 128, 505, 0, 127, 0, 255),
    VTX(0, 0, -36, 252, 0, 0, 127, 0, 255),
}; 

Gfx gBugLimb5DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_034690[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb5WrapperDL[] = {
    gsSPDisplayList(gBugLimb5DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb5WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb5WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_034690[3] = {
    VTX(263, 0, -36, 4, 0, 0, 127, 0, 255),
    VTX(0, 0, 0, 128, 513, 0, 127, 0, 255),
    VTX(263, 0, 35, 252, 0, 0, 127, 0, 255),
}; 

Gfx gBugLimb6DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_034780[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb6WrapperDL[] = {
    gsSPDisplayList(gBugLimb6DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb6WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb6WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_034780[3] = {
    VTX(0, 0, 35, 4, 0, 0, 127, 0, 255),
    VTX(436, 0, 0, 128, 510, 0, 127, 0, 255),
    VTX(0, 0, -36, 252, 0, 0, 127, 0, 255),
}; 

Gfx gBugLimb7DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_034870[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb7WrapperDL[] = {
    gsSPDisplayList(gBugLimb7DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb7WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb7WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_034870[3] = {
    VTX(263, 0, -36, 4, 0, 0, 127, 0, 255),
    VTX(0, 0, 0, 128, 513, 0, 127, 0, 255),
    VTX(263, 0, 35, 252, 0, 0, 127, 0, 255),
}; 

Gfx gBugLimb8DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugLegTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_034960[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb8WrapperDL[] = {
    gsSPDisplayList(gBugLimb8DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb8WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb8WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_034960[3] = {
    VTX(0, 0, 35, 4, 0, 0, 127, 0, 255),
    VTX(333, 0, 0, 128, 505, 0, 127, 0, 255),
    VTX(0, 0, -36, 252, 0, 0, 127, 0, 255),
}; 

Gfx gBugLimb9DL[] = {
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0x01, 255, 255, 255, 255),
    gsDPPipeSync(),
    gsDPSetRenderMode(AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | ALPHA_CVG_SEL | 
                      G_RM_FOG_SHADE_A, AA_EN | Z_CMP | Z_UPD | IM_RD | CVG_DST_CLAMP | ZMODE_INTER | CVG_X_ALPHA | 
                      ALPHA_CVG_SEL | GBL_c2(G_BL_CLR_IN, G_BL_A_IN, G_BL_CLR_MEM, G_BL_1MA)),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, SHADE, 0, TEXEL1, 0, 
                       PRIM_LOD_FRAC, COMBINED),
    gsDPLoadTextureBlock(gBugBodyTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPSetGeometryMode(G_LIGHTING),
    gsSPSetGeometryMode(G_SHADING_SMOOTH),
    gsSPVertex(&gameplay_keepVtx_034A60[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 6, 0, 5, 7, 6, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb9WrapperDL[] = {
    gsSPDisplayList(gBugLimb9DL),
    gsSPEndDisplayList(),
}; 

Gfx gBugLimb9WrapperWrapperDL[] = {
    gsSPDisplayList(gBugLimb9WrapperDL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_034A60[12] = {
    VTX(235, 157, 0, 512, 744, 187, 105, 7, 255),
    VTX(0, 0, 0, 512, -129, 189, 102, 32, 255),
    VTX(158, 0, 163, -46, 455, 195, 93, 59, 255),
    VTX(158, 0, -164, -46, 455, 189, 102, 225, 255),
    VTX(616, 0, 0, 512, 2164, 44, 106, 202, 255),
    VTX(478, 0, -113, 128, 1648, 37, 103, 192, 255),
    VTX(235, 157, 0, 512, 744, 24, 95, 176, 255),
    VTX(158, 0, -164, -46, 455, 22, 93, 173, 255),
    VTX(478, 0, 112, 128, 1648, 30, 98, 73, 255),
    VTX(235, 157, 0, 512, 744, 28, 98, 74, 255),
    VTX(158, 0, 163, -46, 455, 14, 87, 90, 255),
    VTX(616, 0, 0, 512, 2164, 39, 104, 60, 255),
}; 

u64 gBugBodyTex[] = {
#include "assets/objects/gameplay_keep/bug_body.rgb5a1.inc.c"
};

u64 gBugLegTex[] = {
#include "assets/objects/gameplay_keep/bug_leg.rgb5a1.inc.c"
};

StandardLimb sBugSkelLimb_035420 = { 
    { 0, 129, 371 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sBugSkelLimb_03542C = { 
    { 0, 0, 0 },
    0x02, 0xFF,
    NULL
}; 

StandardLimb sBugSkelLimb_035438 = { 
    { 0, 0, 0 },
    0xFF, 0x03,
    gBugLimb9WrapperWrapperDL
}; 

StandardLimb sBugSkelLimb_035444 = { 
    { 268, -29, -113 },
    0x04, 0x08,
    NULL
}; 

StandardLimb sBugSkelLimb_035450 = { 
    { 0, 0, 0 },
    0x05, 0xFF,
    NULL
}; 

StandardLimb sBugSkelLimb_03545C = { 
    { 263, 0, 0 },
    0x06, 0x07,
    NULL
}; 

StandardLimb sBugSkelLimb_035468 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gBugLimb8WrapperWrapperDL
}; 

StandardLimb sBugSkelLimb_035474 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gBugLimb7WrapperWrapperDL
}; 

StandardLimb sBugSkelLimb_035480 = { 
    { 346, -29, -61 },
    0x09, 0x0D,
    NULL
}; 

StandardLimb sBugSkelLimb_03548C = { 
    { 0, 0, 0 },
    0x0A, 0xFF,
    NULL
}; 

StandardLimb sBugSkelLimb_035498 = { 
    { 263, 0, 0 },
    0x0B, 0x0C,
    NULL
}; 

StandardLimb sBugSkelLimb_0354A4 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gBugLimb6WrapperWrapperDL
}; 

StandardLimb sBugSkelLimb_0354B0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gBugLimb5WrapperWrapperDL
}; 

StandardLimb sBugSkelLimb_0354BC = { 
    { 346, -29, 61 },
    0x0E, 0x12,
    NULL
}; 

StandardLimb sBugSkelLimb_0354C8 = { 
    { 0, 0, 0 },
    0x0F, 0xFF,
    NULL
}; 

StandardLimb sBugSkelLimb_0354D4 = { 
    { 263, 0, 0 },
    0x10, 0x11,
    NULL
}; 

StandardLimb sBugSkelLimb_0354E0 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gBugLimb2WrapperWrapperDL
}; 

StandardLimb sBugSkelLimb_0354EC = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gBugLimb1WrapperWrapperDL
}; 

StandardLimb sBugSkelLimb_0354F8 = { 
    { 268, -29, 113 },
    0x13, 0xFF,
    NULL
}; 

StandardLimb sBugSkelLimb_035504 = { 
    { 0, 0, 0 },
    0x14, 0xFF,
    NULL
}; 

StandardLimb sBugSkelLimb_035510 = { 
    { 263, 0, 0 },
    0x15, 0x16,
    NULL
}; 

StandardLimb sBugSkelLimb_03551C = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gBugLimb4WrapperWrapperDL
}; 

StandardLimb sBugSkelLimb_035528 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gBugLimb3WrapperWrapperDL
}; 

static void* sBugSkelLimbs[23] = {
    &sBugSkelLimb_035420,
    &sBugSkelLimb_03542C,
    &sBugSkelLimb_035438,
    &sBugSkelLimb_035444,
    &sBugSkelLimb_035450,
    &sBugSkelLimb_03545C,
    &sBugSkelLimb_035468,
    &sBugSkelLimb_035474,
    &sBugSkelLimb_035480,
    &sBugSkelLimb_03548C,
    &sBugSkelLimb_035498,
    &sBugSkelLimb_0354A4,
    &sBugSkelLimb_0354B0,
    &sBugSkelLimb_0354BC,
    &sBugSkelLimb_0354C8,
    &sBugSkelLimb_0354D4,
    &sBugSkelLimb_0354E0,
    &sBugSkelLimb_0354EC,
    &sBugSkelLimb_0354F8,
    &sBugSkelLimb_035504,
    &sBugSkelLimb_035510,
    &sBugSkelLimb_03551C,
    &sBugSkelLimb_035528,
}; 

SkeletonHeader gBugSkel = { sBugSkelLimbs, 23 }; 

static u8 unaccounted_035598[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_0355A0[4] = {
    VTX(16, 16, 0, 558, 1151, 6, 76, 164, 255),
    VTX(8, -16, 0, 847, 843, 6, 76, 164, 255),
    VTX(-8, -16, 0, 846, 172, 2, 12, 137, 255),
    VTX(-15, 16, 0, 557, -135, 6, 76, 164, 255),
}; 

Gfx gCuttableShrubStalkDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gCuttableShrubLeafTFragmentTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_0355A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_035670[3] = {
    VTX(-15, -12, 0, 558, 1151, 250, 206, 108, 255),
    VTX(16, -12, 0, 557, -135, 250, 206, 108, 255),
    VTX(-1, 24, 0, -46, 507, 249, 7, 119, 255),
}; 

Gfx gCuttableShrubTipDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gCuttableShrubLeafTFragmentTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                         G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_035670[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 gCuttableShrubLeafTFragmentTex[] = {
#include "assets/objects/gameplay_keep/cuttable_shrub_leaf_fragment.rgb5a1.inc.c"
};

u64 gCuttableShrubTex[] = {
#include "assets/objects/gameplay_keep/cuttanble_shrub.rgb5a1.inc.c"
};

u64 gBurnMark1Tex[] = {
#include "assets/objects/gameplay_keep/burn_mark_1.i4.inc.c"
};

u64 gBurnMark2Tex[] = {
#include "assets/objects/gameplay_keep/burn_mark_2.i4.inc.c"
};

Gfx gEffBurnMark1DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gBurnMark1Tex, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                            6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_037800[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gEffBurnMark2DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(gBurnMark2Tex, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                            6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_037800[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_037800[4] = {
    VTX(-31, -31, 0, 0, 0, 255, 255, 255, 255),
    VTX(32, -31, 0, 2048, 0, 255, 255, 255, 255),
    VTX(-31, 32, 0, 0, 2048, 255, 255, 255, 255),
    VTX(32, 32, 0, 2048, 2048, 255, 255, 255, 255),
}; 

static Vtx gameplay_keepVtx_037840[4] = {
    VTX(-14, -14, 0, 0, 512, 255, 255, 255, 255),
    VTX(14, -14, 0, 512, 512, 255, 255, 255, 255),
    VTX(14, 14, 0, 512, 0, 255, 255, 255, 255),
    VTX(-14, 14, 0, 0, 0, 255, 255, 255, 255),
}; 

Gfx gEffSparklesDL[] = {
    gsDPLoadTextureBlock_4b(gEffSparklesTex, G_IM_FMT_I, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                            G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPVertex(&gameplay_keepVtx_037840[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gEffSparklesTex[] = {
#include "assets/objects/gameplay_keep/eff_sparkles.i4.inc.c"
};

u64 gEffUnknown13Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_tex_13.i8.inc.c"
};

u64 gEffUnknown14Tex[] = {
#include "assets/objects/gameplay_keep/eff_unknown_tex_14.i8.inc.c"
};

static Vtx gameplay_keepVtx_037D60[13] = {
    VTX(-13, 0, -8, 551, 0, 255, 255, 255, 255),
    VTX(-13, 0, 8, -39, 0, 255, 255, 255, 255),
    VTX(0, 0, 0, 256, 1023, 79, 0, 0, 255),
    VTX(0, 0, -15, 551, 0, 255, 255, 255, 255),
    VTX(-13, 0, -8, -39, 0, 255, 255, 255, 255),
    VTX(13, 0, 8, 551, 0, 255, 255, 255, 255),
    VTX(13, 0, -8, -39, 0, 255, 255, 255, 255),
    VTX(0, 0, 15, 551, 0, 255, 255, 255, 255),
    VTX(13, 0, 8, -39, 0, 255, 255, 255, 255),
    VTX(-13, 0, 8, 551, 0, 255, 255, 255, 255),
    VTX(0, 0, 15, -39, 0, 255, 255, 255, 255),
    VTX(13, 0, -8, 551, 0, 255, 255, 255, 255),
    VTX(0, 0, -15, -39, 0, 255, 255, 255, 255),
}; 

Gfx gHoverBootsCircleDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown13Tex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 4, 5, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock(gEffUnknown14Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                       G_TX_NOMIRROR | G_TX_WRAP, 4, 5, 15, 14),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, ENV_ALPHA, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, 0, COMBINED, ENVIRONMENT, 
                       COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_037D60[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 2, 0, 7, 8, 2, 0),
    gsSP2Triangles(9, 10, 2, 0, 11, 12, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 gMoonTex[] = {
#include "assets/objects/gameplay_keep/moon.ia8.inc.c"
};

Gfx gMoonDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPPipeSync(),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock(gMoonTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | 
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_038F70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_038F70[4] = {
    VTX(-31, -31, 0, 0, 0, 255, 255, 255, 255),
    VTX(32, -31, 0, 4096, 0, 255, 255, 255, 255),
    VTX(-31, 32, 0, 0, 4096, 255, 255, 255, 255),
    VTX(32, 32, 0, 4096, 4096, 255, 255, 255, 255),
}; 

u64 gUnknownCircle6Tex[] = {
#include "assets/objects/gameplay_keep/unknown_circle_6.i8.inc.c"
};

CamData gUnknown1Col_camDataList_000393B0[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

SurfaceType gUnknown1Col_surfaceType_000393B8[] = {
    { 0x00000000, 0x000007C0 },
}; 

CollisionPoly gUnknown1Col_polygons_000393C0[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xE0C0 },
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xE0C0 },
   { 0x0000, 0x0004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xF060 },
   { 0x0000, 0x0004, 0x0000, 0x0005, 0x8001, 0x0000, 0x0000, 0xF060 },
   { 0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xF060 },
   { 0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xF060 },
   { 0x0000, 0x0007, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF060 },
   { 0x0000, 0x0007, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xF060 },
   { 0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xF060 },
   { 0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xF060 },
   { 0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000 },
   { 0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000 },

}; 

Vec3s gUnknown1Col_vtx_00039480[] = {
   { -4000, 8000, -4000 },
   { -4000, 8000, 4000 },
   { 4000, 8000, 4000 },
   { 4000, 8000, -4000 },
   { -4000, 0, 4000 },
   { -4000, 0, -4000 },
   { 4000, 0, 4000 },
   { 4000, 0, -4000 },
}; 

CollisionHeader gUnknown1Col = { 
    { -4000, 0, -4000 },
    { 4000, 8000, 4000 },
    8,
    gUnknown1Col_vtx_00039480,
    12,
    gUnknown1Col_polygons_000393C0,
    gUnknown1Col_surfaceType_000393B8,
    gUnknown1Col_camDataList_000393B0,
    0,
    NULL
}; 

static u32 pad394DC = 0;

static Vtx gameplay_keepVtx_0394E0[24] = {
    VTX(-793, 3200, -1039, -821, 1999, 251, 119, 15, 255),
    VTX(-593, 1998, 690, 203, 1999, 251, 119, 15, 255),
    VTX(456, 2904, 148, 0, 1024, 251, 119, 15, 255),
    VTX(595, 2684, -824, -957, 1329, 251, 119, 15, 255),
    VTX(-1959, 0, 1375, 370, 1638, 139, 24, 0, 255),
    VTX(-593, 1998, 690, 1174, 1153, 139, 24, 0, 255),
    VTX(-793, 3200, -1039, 765, 111, 139, 24, 0, 255),
    VTX(-1326, 0, -1959, -200, 693, 139, 24, 0, 255),
    VTX(1505, 0, 1834, 0, 2204, 0, 0, 120, 255),
    VTX(456, 2904, 148, 1071, 2204, 0, 0, 120, 255),
    VTX(-593, 1998, 690, 1024, 1024, 0, 0, 120, 255),
    VTX(-1959, 0, 1375, 0, 1024, 0, 0, 120, 255),
    VTX(1779, 0, -1251, 1024, 1035, 118, 13, 244, 255),
    VTX(595, 2684, -824, 1003, 16, 118, 13, 244, 255),
    VTX(456, 2904, 148, -19, 110, 118, 13, 244, 255),
    VTX(1505, 0, 1834, 0, 1024, 118, 13, 244, 255),
    VTX(-793, 3200, -1039, 823, 2007, 0, 0, 136, 255),
    VTX(595, 2684, -824, 961, 1331, 0, 0, 136, 255),
    VTX(1779, 0, -1251, 0, 1024, 0, 0, 136, 255),
    VTX(-1326, 0, -1959, -201, 2007, 0, 0, 136, 255),
    VTX(1779, 0, -1251, 0, 1024, 0, 136, 0, 255),
    VTX(1505, 0, 1834, 1024, 1024, 0, 136, 0, 255),
    VTX(-1959, 0, 1375, 1024, 0, 0, 136, 0, 255),
    VTX(-1326, 0, -1959, 0, 0, 0, 136, 0, 255),
}; 

Gfx gLiftableRockDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnknownStone1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_0394E0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 16, 18, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_039710[24] = {
    VTX(-3000, 12000, -6000, 122, 250, 0, 120, 0, 255),
    VTX(-3000, 12000, 6000, -178, 1535, 0, 120, 0, 255),
    VTX(3000, 12000, 6000, 620, 1438, 0, 120, 0, 255),
    VTX(3000, 12000, -6000, 920, 153, 0, 120, 0, 255),
    VTX(-3000, 0, 6000, 1350, 1307, 136, 0, 0, 255),
    VTX(-3000, 12000, 6000, 1650, -122, 136, 0, 0, 255),
    VTX(-3000, 12000, -6000, 221, -422, 136, 0, 0, 255),
    VTX(-3000, 0, -6000, -79, 1008, 136, 0, 0, 255),
    VTX(3000, 0, 6000, 512, 1213, 0, 0, 120, 255),
    VTX(3000, 12000, 6000, 291, 97, 0, 0, 120, 255),
    VTX(-3000, 12000, 6000, -267, 208, 0, 0, 120, 255),
    VTX(-3000, 0, 6000, -46, 1324, 0, 0, 120, 255),
    VTX(3000, 0, -6000, -106, 1806, 120, 0, 0, 255),
    VTX(3000, 12000, -6000, 918, 1806, 120, 0, 0, 255),
    VTX(3000, 12000, 6000, 918, 782, 120, 0, 0, 255),
    VTX(3000, 0, 6000, -106, 782, 120, 0, 0, 255),
    VTX(-3000, 0, -6000, 624, 1203, 0, 0, 136, 255),
    VTX(-3000, 12000, -6000, 507, -326, 0, 0, 136, 255),
    VTX(3000, 12000, -6000, -257, -268, 0, 0, 136, 255),
    VTX(3000, 0, -6000, -140, 1261, 0, 0, 136, 255),
    VTX(3000, 0, -6000, 117, -186, 0, 136, 0, 255),
    VTX(3000, 0, 6000, -20, 1126, 0, 136, 0, 255),
    VTX(-3000, 0, 6000, 1018, 1180, 0, 136, 0, 255),
    VTX(-3000, 0, -6000, 1155, -132, 0, 136, 0, 255),
}; 

Gfx gUnusedRockRectangularPrism1DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnknownStone1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_039710[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

CamData gUnknown2Col_camDataList_00039940[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

SurfaceType gUnknown2Col_surfaceType_00039948[] = {
    { 0x00000000, 0x000007C0 },
    { 0x00200000, 0x000007C0 },
}; 

CollisionPoly gUnknown2Col_polygons_00039958[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xD120 },
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xD120 },
   { 0x0001, 0x0004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xF448 },
   { 0x0001, 0x0004, 0x0000, 0x0005, 0x8001, 0x0000, 0x0000, 0xF448 },
   { 0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xE890 },
   { 0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xE890 },
   { 0x0001, 0x0007, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xF448 },
   { 0x0001, 0x0007, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xF448 },
   { 0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xE890 },
   { 0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xE890 },
   { 0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000 },
   { 0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000 },

}; 

Vec3s gUnknown2Col_vtx_00039A18[] = {
   { -3000, 12000, -6000 },
   { -3000, 12000, 6000 },
   { 3000, 12000, 6000 },
   { 3000, 12000, -6000 },
   { -3000, 0, 6000 },
   { -3000, 0, -6000 },
   { 3000, 0, 6000 },
   { 3000, 0, -6000 },
}; 

CollisionHeader gUnknown2Col = { 
    { -3000, 0, -6000 },
    { 3000, 12000, 6000 },
    8,
    gUnknown2Col_vtx_00039A18,
    12,
    gUnknown2Col_polygons_00039958,
    gUnknown2Col_surfaceType_00039948,
    gUnknown2Col_camDataList_00039940,
    0,
    NULL
}; 

static u32 pad39A74 = 0;
static u32 pad39A78 = 0;
static u32 pad39A7C = 0;

static Vtx gameplay_keepVtx_039A80[24] = {
    VTX(-300, 2400, -600, 122, 250, 255, 255, 255, 255),
    VTX(-300, 2400, 600, -178, 1535, 255, 255, 255, 255),
    VTX(300, 2400, 600, 620, 1438, 255, 255, 255, 255),
    VTX(300, 2400, -600, 920, 153, 255, 255, 255, 255),
    VTX(-300, 0, 600, 1350, 1307, 255, 255, 255, 255),
    VTX(-300, 2400, 600, 1650, -122, 255, 255, 255, 255),
    VTX(-300, 2400, -600, 221, -422, 255, 255, 255, 255),
    VTX(-300, 0, -600, -79, 1008, 255, 255, 255, 255),
    VTX(300, 0, 600, 512, 1213, 178, 178, 178, 255),
    VTX(300, 2400, 600, 291, 97, 178, 178, 178, 255),
    VTX(-300, 2400, 600, -267, 208, 178, 178, 178, 255),
    VTX(-300, 0, 600, -46, 1324, 178, 178, 178, 255),
    VTX(300, 0, -600, -106, 1806, 216, 216, 216, 255),
    VTX(300, 2400, -600, 918, 1806, 216, 216, 216, 255),
    VTX(300, 2400, 600, 918, 782, 216, 216, 216, 255),
    VTX(300, 0, 600, -106, 782, 216, 216, 216, 255),
    VTX(-300, 0, -600, 624, 1203, 178, 178, 178, 255),
    VTX(-300, 2400, -600, 507, -326, 178, 178, 178, 255),
    VTX(300, 2400, -600, -257, -268, 178, 178, 178, 255),
    VTX(300, 0, -600, -140, 1261, 178, 178, 178, 255),
    VTX(300, 0, -600, 117, -186, 255, 255, 255, 255),
    VTX(300, 0, 600, -20, 1126, 255, 255, 255, 255),
    VTX(-300, 0, 600, 1018, 1180, 255, 255, 255, 255),
    VTX(-300, 0, -600, 1155, -132, 255, 255, 255, 255),
}; 

Gfx gUnusedRockRectangularPrism2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnknownStone1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_039A80[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_039CB8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gUnknown3Col_camDataList_00039CC0[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

SurfaceType gUnknown3Col_surfaceType_00039CC8[] = {
    { 0x00000000, 0x000007C0 },
}; 

CollisionPoly gUnknown3Col_polygons_00039CD0[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xF6A0 },
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xF6A0 },
   { 0x0000, 0x0004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xFED4 },
   { 0x0000, 0x0004, 0x0000, 0x0005, 0x8001, 0x0000, 0x0000, 0xFED4 },
   { 0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFDA8 },
   { 0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFDA8 },
   { 0x0000, 0x0007, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFED4 },
   { 0x0000, 0x0007, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFED4 },
   { 0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xFDA8 },
   { 0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xFDA8 },
   { 0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000 },
   { 0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000 },

}; 

Vec3s gUnknown3Col_vtx_00039D90[] = {
   { -300, 2400, -600 },
   { -300, 2400, 600 },
   { 300, 2400, 600 },
   { 300, 2400, -600 },
   { -300, 0, 600 },
   { -300, 0, -600 },
   { 300, 0, 600 },
   { 300, 0, -600 },
}; 

CollisionHeader gUnknown3Col = { 
    { -300, 0, -600 },
    { 300, 2400, 600 },
    8,
    gUnknown3Col_vtx_00039D90,
    12,
    gUnknown3Col_polygons_00039CD0,
    gUnknown3Col_surfaceType_00039CC8,
    gUnknown3Col_camDataList_00039CC0,
    0,
    NULL
}; 

static u32 pad39DEC = 0;

static Vtx gameplay_keepVtx_039DF0[24] = {
    VTX(2000, 1200, -4000, 1487, 0, 0, 120, 0, 255),
    VTX(-2000, 1200, -4000, 1487, 2048, 0, 120, 0, 255),
    VTX(-2000, 1200, 4000, 4096, 2048, 0, 120, 0, 255),
    VTX(2000, 1200, 4000, 4096, 0, 0, 120, 0, 255),
    VTX(-2000, -1200, -4000, 1658, 1024, 0, 0, 136, 255),
    VTX(-2000, 1200, -4000, 1658, 29, 0, 0, 136, 255),
    VTX(2000, 1200, -4000, 0, 29, 0, 0, 136, 255),
    VTX(2000, -1200, -4000, 0, 1024, 0, 0, 136, 255),
    VTX(-2000, -1200, 4000, 2592, 1024, 136, 0, 0, 255),
    VTX(-2000, 1200, 4000, 2592, 7, 136, 0, 0, 255),
    VTX(-2000, 1200, -4000, 0, 7, 136, 0, 0, 255),
    VTX(-2000, -1200, -4000, 0, 1024, 136, 0, 0, 255),
    VTX(2000, -1200, 4000, 1675, 1024, 0, 0, 120, 255),
    VTX(2000, 1200, 4000, 1675, 19, 0, 0, 120, 255),
    VTX(-2000, 1200, 4000, 0, 19, 0, 0, 120, 255),
    VTX(-2000, -1200, 4000, 0, 1024, 0, 0, 120, 255),
    VTX(2000, -1200, -4000, 2510, 1024, 120, 0, 0, 255),
    VTX(2000, 1200, -4000, 2510, 27, 120, 0, 0, 255),
    VTX(2000, 1200, 4000, 0, 27, 120, 0, 0, 255),
    VTX(2000, -1200, 4000, 0, 1024, 120, 0, 0, 255),
    VTX(2000, -1200, 4000, 4096, 2048, 0, 136, 0, 255),
    VTX(-2000, -1200, 4000, 4096, 0, 0, 136, 0, 255),
    VTX(-2000, -1200, -4000, 1561, 0, 0, 136, 0, 255),
    VTX(2000, -1200, -4000, 1561, 2048, 0, 136, 0, 255),
}; 

Gfx gUnusedRockRectangularPrism3DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnknownStone2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_039DF0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

CamData gUnknown4Col_camDataList_0003A020[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

SurfaceType gUnknown4Col_surfaceType_0003A028[] = {
    { 0x00000000, 0x000007C0 },
}; 

CollisionPoly gUnknown4Col_polygons_0003A030[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFB50 },
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFB50 },
   { 0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x8001, 0xF060 },
   { 0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x0000, 0x8001, 0xF060 },
   { 0x0000, 0x0006, 0x0002, 0x0001, 0x8001, 0x0000, 0x0000, 0xF830 },
   { 0x0000, 0x0006, 0x0001, 0x0004, 0x8001, 0x0000, 0x0000, 0xF830 },
   { 0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xF060 },
   { 0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xF060 },
   { 0x0000, 0x0005, 0x0000, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xF830 },
   { 0x0000, 0x0005, 0x0003, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xF830 },
   { 0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0xFB50 },
   { 0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0xFB50 },

}; 

Vec3s gUnknown4Col_vtx_0003A0F0[] = {
   { 2000, 1200, -4000 },
   { -2000, 1200, -4000 },
   { -2000, 1200, 4000 },
   { 2000, 1200, 4000 },
   { -2000, -1200, -4000 },
   { 2000, -1200, -4000 },
   { -2000, -1200, 4000 },
   { 2000, -1200, 4000 },
}; 

CollisionHeader gUnknown4Col = { 
    { -2000, -1200, -4000 },
    { 2000, 1200, 4000 },
    8,
    gUnknown4Col_vtx_0003A0F0,
    12,
    gUnknown4Col_polygons_0003A030,
    gUnknown4Col_surfaceType_0003A028,
    gUnknown4Col_camDataList_0003A020,
    0,
    NULL
}; 

static u32 pad3A14C = 0;

static Vtx gameplay_keepVtx_03A150[24] = {
    VTX(3000, 1800, -7000, 0, 27, 0, 120, 0, 255),
    VTX(-3000, 1800, -7000, -13, 2020, 0, 120, 0, 255),
    VTX(-3000, 1800, 7000, 2579, 1989, 0, 120, 0, 255),
    VTX(3000, 1800, 7000, 2592, -4, 0, 120, 0, 255),
    VTX(-3000, -1800, -7000, 1671, 1024, 0, 0, 136, 255),
    VTX(-3000, 1800, -7000, 1671, 22, 0, 0, 136, 255),
    VTX(3000, 1800, -7000, 0, 22, 0, 0, 136, 255),
    VTX(3000, -1800, -7000, 0, 1024, 0, 0, 136, 255),
    VTX(-3000, -1800, 7000, 2966, 1024, 136, 0, 0, 255),
    VTX(-3000, 1800, 7000, 2966, 26, 136, 0, 0, 255),
    VTX(-3000, 1800, -7000, 328, 26, 136, 0, 0, 255),
    VTX(-3000, -1800, -7000, 328, 1024, 136, 0, 0, 255),
    VTX(3000, -1800, 7000, 1655, 1024, 0, 0, 120, 255),
    VTX(3000, 1800, 7000, 1655, 31, 0, 0, 120, 255),
    VTX(-3000, 1800, 7000, 0, 31, 0, 0, 120, 255),
    VTX(-3000, -1800, 7000, 0, 1024, 0, 0, 120, 255),
    VTX(3000, -1800, -7000, 2596, 1024, 120, 0, 0, 255),
    VTX(3000, 1800, -7000, 2596, 35, 120, 0, 0, 255),
    VTX(3000, 1800, 7000, 0, 35, 120, 0, 0, 255),
    VTX(3000, -1800, 7000, 0, 1024, 120, 0, 0, 255),
    VTX(3000, -1800, 7000, 4756, 2018, 0, 136, 0, 255),
    VTX(-3000, -1800, 7000, 4779, 30, 0, 136, 0, 255),
    VTX(-3000, -1800, -7000, 2048, 83, 0, 136, 0, 255),
    VTX(3000, -1800, -7000, 2026, 2071, 0, 136, 0, 255),
}; 

Gfx gUnusedRockRectangularPrism4DL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnknownStone2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_03A150[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

CamData gUnknown5Col_camDataList_0003A380[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

SurfaceType gUnknown5Col_surfaceType_0003A388[] = {
    { 0x00000000, 0x000007C0 },
}; 

CollisionPoly gUnknown5Col_polygons_0003A390[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xF8F8 },
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xF8F8 },
   { 0x0000, 0x0004, 0x0001, 0x0000, 0x0000, 0x0000, 0x8001, 0xE4A8 },
   { 0x0000, 0x0004, 0x0000, 0x0005, 0x0000, 0x0000, 0x8001, 0xE4A8 },
   { 0x0000, 0x0006, 0x0002, 0x0001, 0x8001, 0x0000, 0x0000, 0xF448 },
   { 0x0000, 0x0006, 0x0001, 0x0004, 0x8001, 0x0000, 0x0000, 0xF448 },
   { 0x0000, 0x0007, 0x0003, 0x0002, 0x0000, 0x0000, 0x7FFF, 0xE4A8 },
   { 0x0000, 0x0007, 0x0002, 0x0006, 0x0000, 0x0000, 0x7FFF, 0xE4A8 },
   { 0x0000, 0x0005, 0x0000, 0x0003, 0x7FFF, 0x0000, 0x0000, 0xF448 },
   { 0x0000, 0x0005, 0x0003, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xF448 },
   { 0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0xF8F8 },
   { 0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0xF8F8 },

}; 

Vec3s gUnknown5Col_vtx_0003A450[] = {
   { 3000, 1800, -7000 },
   { -3000, 1800, -7000 },
   { -3000, 1800, 7000 },
   { 3000, 1800, 7000 },
   { -3000, -1800, -7000 },
   { 3000, -1800, -7000 },
   { -3000, -1800, 7000 },
   { 3000, -1800, 7000 },
}; 

CollisionHeader gUnknown5Col = { 
    { -3000, -1800, -7000 },
    { 3000, 1800, 7000 },
    8,
    gUnknown5Col_vtx_0003A450,
    12,
    gUnknown5Col_polygons_0003A390,
    gUnknown5Col_surfaceType_0003A388,
    gUnknown5Col_camDataList_0003A380,
    0,
    NULL
}; 

static u32 pad3A4AC = 0;

static Vtx gameplay_keepVtx_03A4B0[24] = {
    VTX(-300, 600, -300, -185, 1126, 255, 255, 255, 255),
    VTX(-300, 600, 300, 1113, 1306, 255, 255, 255, 255),
    VTX(300, 600, 300, 1293, 8, 255, 255, 255, 255),
    VTX(300, 600, -300, -5, -172, 255, 255, 255, 255),
    VTX(-300, 0, 300, 992, 1038, 89, 89, 89, 255),
    VTX(-300, 600, 300, 992, -86, 153, 153, 153, 255),
    VTX(-300, 600, -300, -131, -86, 255, 255, 255, 255),
    VTX(-300, 0, -300, -131, 1038, 114, 114, 114, 255),
    VTX(300, 0, 300, 1024, 1024, 89, 89, 89, 255),
    VTX(300, 600, 300, 1175, -97, 153, 153, 153, 255),
    VTX(-300, 600, 300, 151, -97, 255, 255, 255, 255),
    VTX(-300, 0, 300, 0, 1024, 114, 114, 114, 255),
    VTX(300, 0, -300, 1202, 1024, 89, 89, 89, 255),
    VTX(300, 600, -300, 1202, -178, 153, 153, 153, 255),
    VTX(300, 600, 300, 0, -178, 255, 255, 255, 255),
    VTX(300, 0, 300, 0, 1024, 114, 114, 114, 255),
    VTX(-300, 0, -300, 0, 0, 89, 89, 89, 255),
    VTX(-300, 600, -300, 0, 1024, 153, 153, 153, 255),
    VTX(300, 600, -300, 1024, 1024, 255, 255, 255, 255),
    VTX(300, 0, -300, 1024, 0, 114, 114, 114, 255),
    VTX(300, 0, -300, 1174, -212, 89, 89, 89, 255),
    VTX(300, 0, 300, -62, -212, 89, 89, 89, 255),
    VTX(-300, 0, 300, -62, 1024, 89, 89, 89, 255),
    VTX(-300, 0, -300, 1174, 1024, 89, 89, 89, 255),
}; 

Gfx gUnusedRockRectangularPrism5DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnknownStone1Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_03A4B0[0], 24, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 20, 22, 23, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_03A6E8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gUnknown6Col_camDataList_0003A6F0[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

SurfaceType gUnknown6Col_surfaceType_0003A6F8[] = {
    { 0x00000000, 0x000007C0 },
}; 

CollisionPoly gUnknown6Col_polygons_0003A700[] = {
   { 0x0000, 0x0000, 0x0001, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFDA8 },
   { 0x0000, 0x0000, 0x0002, 0x0003, 0x0000, 0x7FFF, 0x0000, 0xFDA8 },
   { 0x0000, 0x0004, 0x0001, 0x0000, 0x8001, 0x0000, 0x0000, 0xFED4 },
   { 0x0000, 0x0004, 0x0000, 0x0005, 0x8001, 0x0000, 0x0000, 0xFED4 },
   { 0x0000, 0x0006, 0x0002, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFED4 },
   { 0x0000, 0x0006, 0x0001, 0x0004, 0x0000, 0x0000, 0x7FFF, 0xFED4 },
   { 0x0000, 0x0007, 0x0003, 0x0002, 0x7FFF, 0x0000, 0x0000, 0xFED4 },
   { 0x0000, 0x0007, 0x0002, 0x0006, 0x7FFF, 0x0000, 0x0000, 0xFED4 },
   { 0x0000, 0x0005, 0x0000, 0x0003, 0x0000, 0x0000, 0x8001, 0xFED4 },
   { 0x0000, 0x0005, 0x0003, 0x0007, 0x0000, 0x0000, 0x8001, 0xFED4 },
   { 0x0000, 0x0007, 0x0006, 0x0004, 0x0000, 0x8001, 0x0000, 0x0000 },
   { 0x0000, 0x0007, 0x0004, 0x0005, 0x0000, 0x8001, 0x0000, 0x0000 },

}; 

Vec3s gUnknown6Col_vtx_0003A7C0[] = {
   { -300, 600, -300 },
   { -300, 600, 300 },
   { 300, 600, 300 },
   { 300, 600, -300 },
   { -300, 0, 300 },
   { -300, 0, -300 },
   { 300, 0, 300 },
   { 300, 0, -300 },
}; 

CollisionHeader gUnknown6Col = { 
    { -300, 0, -300 },
    { 300, 600, 300 },
    8,
    gUnknown6Col_vtx_0003A7C0,
    12,
    gUnknown6Col_polygons_0003A700,
    gUnknown6Col_surfaceType_0003A6F8,
    gUnknown6Col_camDataList_0003A6F0,
    0,
    NULL
}; 

static u32 pad3A81C = 0;

static Vtx gameplay_keepVtx_03A820[20] = {
    VTX(1523, -35, 502, 1766, 1024, 112, 23, 36, 255),
    VTX(1095, 2267, 356, 1431, -957, 112, 23, 36, 255),
    VTX(0, 2267, 1151, -311, -957, 0, 23, 117, 255),
    VTX(2, -35, 1607, -655, 1024, 0, 23, 117, 255),
    VTX(942, -35, -1287, 1339, 1024, 69, 23, 161, 255),
    VTX(677, 2267, -931, 1156, -576, 69, 23, 161, 255),
    VTX(1095, 2267, 356, -53, -576, 112, 23, 36, 255),
    VTX(1523, -35, 502, -342, 1024, 112, 23, 36, 255),
    VTX(-939, -35, -1287, 1914, 1024, 187, 23, 161, 255),
    VTX(-677, 2267, -931, 1585, -981, 187, 23, 161, 255),
    VTX(677, 2267, -931, -110, -981, 69, 23, 161, 255),
    VTX(942, -35, -1287, -443, 1024, 69, 23, 161, 255),
    VTX(-1520, -35, 502, 1715, 1024, 144, 23, 36, 255),
    VTX(-1095, 2267, 356, 1362, -1009, 144, 23, 36, 255),
    VTX(-677, 2267, -931, -406, -1009, 187, 23, 161, 255),
    VTX(-939, -35, -1287, -743, 1024, 187, 23, 161, 255),
    VTX(2, -35, 1607, 1816, 1024, 0, 23, 117, 255),
    VTX(0, 2267, 1151, 1455, -984, 0, 23, 117, 255),
    VTX(-1095, 2267, 356, -362, -984, 144, 23, 36, 255),
    VTX(-1520, -35, 502, -708, 1024, 144, 23, 36, 255),
}; 

static Vtx gameplay_keepVtx_03A960[5] = {
    VTX(0, 2267, 1151, 1790, 399, 255, 255, 255, 255),
    VTX(1095, 2267, 356, 668, 61, 255, 255, 255, 255),
    VTX(677, 2267, -931, 0, 1024, 255, 255, 255, 255),
    VTX(-677, 2267, -931, 709, 1957, 255, 255, 255, 255),
    VTX(-1095, 2267, 356, 1815, 1571, 255, 255, 255, 255),
}; 

Gfx gUnusedTreeStumpDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnusedTreeStumpBarkTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI, G_CC_MODULATEI_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_03A820[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(16, 17, 18, 0, 16, 18, 19, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gUnusedTreeStumpTopTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEI_PRIM, G_CC_PASS2),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(&gameplay_keepVtx_03A960[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_03AAC0[8] = {
    VTX(0, -85, 1632, 2010, 1025, 255, 255, 255, 255),
    VTX(0, 3115, 1632, 2010, 218, 255, 255, 255, 255),
    VTX(0, 3115, -1568, 84, 218, 255, 255, 255, 255),
    VTX(0, -85, -1568, 84, 1025, 255, 255, 255, 255),
    VTX(1600, -85, 32, 2010, 1025, 255, 255, 255, 255),
    VTX(1600, 3115, 32, 2010, 218, 255, 255, 255, 255),
    VTX(-1600, 3115, 32, 84, 218, 255, 255, 255, 255),
    VTX(-1600, -85, 32, 84, 1025, 255, 255, 255, 255),
}; 

static Vtx gameplay_keepVtx_03AB40[4] = {
    VTX(-1787, 164, 0, 0, 217, 255, 255, 255, 255),
    VTX(0, 164, 1787, 2048, 217, 255, 255, 255, 255),
    VTX(1787, 164, 0, 2048, 1810, 255, 255, 255, 255),
    VTX(0, 164, -1787, 0, 1810, 255, 255, 255, 255),
}; 

Gfx gUnusedGrassBladesDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnusedGrassBladesTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIA_PRIM, G_CC_PASS2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_03AAC0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&gameplay_keepVtx_03AB40[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_03AC28[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gHeartShapeTex[] = {
#include "assets/objects/gameplay_keep/heart_shape.i8.inc.c"
};

static Vtx gameplay_keepVtx_03AD30[3] = {
    VTX(-313, 698, 95, 48, 1167, 16, 118, 0, 255),
    VTX(0, 429, 95, 256, 1095, 0, 120, 0, 255),
    VTX(0, 429, -95, -256, 1095, 0, 120, 0, 255),
}; 

static Vtx gameplay_keepVtx_03AD60[41] = {
    VTX(-313, 698, 95, 48, 1167, 16, 118, 0, 255),
    VTX(0, 429, -95, -256, 1095, 0, 120, 0, 255),
    VTX(-313, 698, -95, -48, 1167, 16, 118, 0, 255),
    VTX(-608, 562, -95, -25, 1295, 166, 79, 0, 255),
    VTX(-608, 562, 95, 25, 1295, 166, 79, 0, 255),
    VTX(-745, 119, 95, 21, 1485, 137, 243, 0, 255),
    VTX(-745, 119, -95, -21, 1485, 137, 243, 0, 255),
    VTX(-472, -357, -95, -32, 1744, 167, 176, 0, 255),
    VTX(-472, -357, 95, 32, 1744, 167, 176, 0, 255),
    VTX(0, -698, 95, 256, 2004, 0, 136, 0, 255),
    VTX(0, -698, -95, 768, 2004, 0, 136, 0, 255),
    VTX(472, -357, -95, 544, 1744, 89, 176, 0, 255),
    VTX(472, -357, 95, 480, 1744, 89, 176, 0, 255),
    VTX(745, 119, 95, 491, 1485, 119, 243, 0, 255),
    VTX(745, 119, -95, 533, 1485, 119, 243, 0, 255),
    VTX(608, 562, -95, 537, 1295, 90, 79, 0, 255),
    VTX(608, 562, 95, 487, 1295, 90, 79, 0, 255),
    VTX(313, 698, 95, 464, 1167, 240, 118, 0, 255),
    VTX(313, 698, -95, 560, 1167, 240, 118, 0, 255),
    VTX(0, 429, 95, 256, 1095, 0, 120, 0, 255),
    VTX(0, 429, -95, 768, 1095, 0, 120, 0, 255),
    VTX(0, 429, 95, 256, 1095, 0, 25, 117, 255),
    VTX(-472, -357, 95, 32, 1744, 207, 212, 100, 255),
    VTX(472, -357, 95, 480, 1744, 49, 212, 100, 255),
    VTX(0, -698, 95, 256, 2004, 0, 142, 35, 255),
    VTX(745, 119, 95, 491, 1485, 104, 244, 57, 255),
    VTX(608, 562, 95, 487, 1295, 61, 53, 88, 255),
    VTX(313, 698, 95, 464, 1167, 240, 113, 34, 255),
    VTX(-745, 119, 95, 21, 1485, 152, 244, 57, 255),
    VTX(-608, 562, 95, 25, 1295, 195, 53, 88, 255),
    VTX(-313, 698, 95, 48, 1167, 16, 113, 34, 255),
    VTX(0, 429, -95, 768, 1095, 0, 48, 146, 255),
    VTX(472, -357, -95, 544, 1744, 70, 193, 183, 255),
    VTX(-472, -357, -95, 992, 1744, 186, 193, 183, 255),
    VTX(0, -698, -95, 768, 2004, 0, 154, 193, 255),
    VTX(745, 119, -95, 533, 1485, 80, 247, 168, 255),
    VTX(608, 562, -95, 537, 1295, 79, 69, 199, 255),
    VTX(313, 698, -95, 560, 1167, 242, 102, 195, 255),
    VTX(-745, 119, -95, 1003, 1485, 176, 247, 168, 255),
    VTX(-608, 562, -95, 999, 1295, 177, 69, 199, 255),
    VTX(-313, 698, -95, 976, 1167, 14, 102, 195, 255),
}; 

static Vtx gameplay_keepVtx_03AFF0[4] = {
    VTX(-420, 420, 0, 0, 0, 15, 159, 254, 255),
    VTX(-420, -420, 0, 0, 512, 15, 159, 254, 255),
    VTX(420, -420, 0, 512, 512, 15, 159, 254, 255),
    VTX(420, 420, 0, 512, 0, 15, 159, 254, 255),
}; 

Gfx gHeartPieceInteriorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x09C4, 0x09C4, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gEffUnknown10Tex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR
                         | G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, PRIMITIVE, ENV_ALPHA, TEXEL0, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, 
                       ENVIRONMENT, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG),
    gsSPSetGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsDPSetEnvColor(0, 100, 255, 128),
    gsSPVertex(&gameplay_keepVtx_03AD30[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_03AD60[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(0, 3, 4, 0, 5, 4, 3, 0),
    gsSP2Triangles(6, 5, 3, 0, 7, 5, 6, 0),
    gsSP2Triangles(8, 5, 7, 0, 8, 7, 9, 0),
    gsSP2Triangles(7, 10, 9, 0, 9, 10, 11, 0),
    gsSP2Triangles(9, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 13, 11, 0, 15, 13, 14, 0),
    gsSP2Triangles(15, 16, 13, 0, 17, 15, 18, 0),
    gsSP2Triangles(17, 16, 15, 0, 19, 17, 20, 0),
    gsSP2Triangles(17, 18, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 23, 22, 0, 23, 25, 21, 0),
    gsSP2Triangles(25, 26, 21, 0, 26, 27, 21, 0),
    gsSP2Triangles(21, 28, 22, 0, 21, 29, 28, 0),
    gsSP1Triangle(21, 30, 29, 0),
    gsSPVertex(&gameplay_keepVtx_03AD60[31], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 1, 0, 0, 5, 4, 0),
    gsSP2Triangles(0, 6, 5, 0, 0, 2, 7, 0),
    gsSP2Triangles(8, 0, 7, 0, 8, 9, 0, 0),
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHeartShapeTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR |
                         G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsDPSetPrimColor(0, 0, 200, 0, 100, 255),
    gsSPVertex(&gameplay_keepVtx_03AFF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_03B1D8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_03B1E0[32] = {
    VTX(229, 639, 236, 610, 304, 172, 67, 53, 255),
    VTX(260, 897, 0, 623, 193, 171, 63, 55, 255),
    VTX(0, 536, 0, 512, 347, 172, 66, 53, 255),
    VTX(0, 365, 236, 512, 420, 173, 70, 50, 255),
    VTX(260, 897, 0, 623, 193, 171, 65, 203, 255),
    VTX(229, 639, -236, 610, 304, 174, 65, 198, 255),
    VTX(0, 365, -236, 512, 420, 172, 65, 202, 255),
    VTX(0, 536, 0, 512, 347, 168, 65, 207, 255),
    VTX(0, 536, 0, 512, 347, 84, 66, 203, 255),
    VTX(0, 365, -236, 512, 420, 83, 70, 206, 255),
    VTX(-229, 639, -236, 414, 304, 84, 67, 203, 255),
    VTX(-260, 897, 0, 401, 193, 85, 63, 201, 255),
    VTX(0, 365, 236, 512, 420, 84, 65, 54, 255),
    VTX(0, 536, 0, 512, 347, 88, 65, 49, 255),
    VTX(-260, 897, 0, 401, 193, 85, 65, 53, 255),
    VTX(-229, 639, 236, 414, 304, 82, 65, 58, 255),
    VTX(229, 639, -236, 610, 304, 233, 82, 173, 255),
    VTX(260, 897, 0, 623, 193, 234, 82, 172, 255),
    VTX(674, 1002, 0, 800, 148, 234, 82, 172, 255),
    VTX(595, 751, -236, 766, 256, 231, 84, 174, 255),
    VTX(-229, 639, 236, 414, 304, 23, 82, 83, 255),
    VTX(-260, 897, 0, 401, 193, 22, 82, 84, 255),
    VTX(-674, 1002, 0, 224, 148, 22, 82, 84, 255),
    VTX(-595, 751, 236, 258, 256, 25, 84, 82, 255),
    VTX(534, -325, -236, 740, 715, 56, 171, 194, 255),
    VTX(643, -424, 0, 786, 757, 56, 171, 194, 255),
    VTX(0, -850, 0, 512, 939, 56, 171, 194, 255),
    VTX(0, -677, -236, 512, 865, 56, 171, 194, 255),
    VTX(643, -424, 0, 786, 757, 56, 171, 62, 255),
    VTX(534, -325, 236, 740, 715, 56, 171, 62, 255),
    VTX(0, -677, 236, 512, 865, 56, 171, 62, 255),
    VTX(0, -850, 0, 512, 939, 56, 171, 62, 255),
}; 

static Vtx gameplay_keepVtx_03B3E0[32] = {
    VTX(-643, -424, 0, 238, 757, 200, 171, 194, 255),
    VTX(-534, -325, -236, 284, 715, 200, 171, 194, 255),
    VTX(0, -677, -236, 512, 865, 200, 171, 194, 255),
    VTX(0, -850, 0, 512, 939, 200, 171, 194, 255),
    VTX(-534, -325, 236, 284, 715, 200, 171, 62, 255),
    VTX(-643, -424, 0, 238, 757, 200, 171, 62, 255),
    VTX(0, -850, 0, 512, 939, 200, 171, 62, 255),
    VTX(0, -677, 236, 512, 865, 200, 171, 62, 255),
    VTX(-534, -325, -236, 284, 715, 166, 207, 195, 255),
    VTX(-643, -424, 0, 238, 757, 166, 208, 194, 255),
    VTX(-1000, 242, 0, 85, 473, 166, 207, 195, 255),
    VTX(-828, 217, -236, 159, 483, 166, 207, 195, 255),
    VTX(534, -325, 236, 740, 715, 90, 207, 61, 255),
    VTX(643, -424, 0, 786, 757, 90, 208, 62, 255),
    VTX(1000, 242, 0, 939, 473, 90, 207, 61, 255),
    VTX(828, 217, 236, 865, 483, 90, 207, 61, 255),
    VTX(-1000, 242, 0, 85, 473, 167, 39, 187, 255),
    VTX(-674, 1002, 0, 224, 148, 167, 38, 186, 255),
    VTX(-595, 751, -236, 258, 256, 167, 39, 186, 255),
    VTX(-828, 217, -236, 159, 483, 167, 39, 187, 255),
    VTX(643, -424, 0, 786, 757, 90, 207, 195, 255),
    VTX(534, -325, -236, 740, 715, 90, 207, 194, 255),
    VTX(828, 217, -236, 865, 483, 90, 207, 194, 255),
    VTX(1000, 242, 0, 939, 473, 90, 207, 195, 255),
    VTX(1000, 242, 0, 939, 473, 89, 39, 69, 255),
    VTX(674, 1002, 0, 800, 148, 89, 38, 70, 255),
    VTX(595, 751, 236, 766, 256, 89, 39, 70, 255),
    VTX(828, 217, 236, 865, 483, 89, 39, 69, 255),
    VTX(-260, 897, 0, 401, 193, 23, 82, 173, 255),
    VTX(-229, 639, -236, 414, 304, 25, 80, 171, 255),
    VTX(-595, 751, -236, 258, 256, 24, 81, 172, 255),
    VTX(-674, 1002, 0, 224, 148, 22, 83, 173, 255),
}; 

static Vtx gameplay_keepVtx_03B5E0[16] = {
    VTX(260, 897, 0, 623, 193, 233, 82, 83, 255),
    VTX(229, 639, 236, 610, 304, 231, 80, 85, 255),
    VTX(595, 751, 236, 766, 256, 232, 81, 84, 255),
    VTX(674, 1002, 0, 800, 148, 234, 83, 83, 255),
    VTX(-643, -424, 0, 238, 757, 166, 207, 61, 255),
    VTX(-534, -325, 236, 284, 715, 166, 207, 62, 255),
    VTX(-828, 217, 236, 159, 483, 166, 207, 62, 255),
    VTX(-1000, 242, 0, 85, 473, 166, 207, 61, 255),
    VTX(674, 1002, 0, 800, 148, 89, 39, 186, 255),
    VTX(1000, 242, 0, 939, 473, 89, 38, 186, 255),
    VTX(828, 217, -236, 865, 483, 89, 38, 186, 255),
    VTX(595, 751, -236, 766, 256, 89, 39, 186, 255),
    VTX(-674, 1002, 0, 224, 148, 167, 39, 70, 255),
    VTX(-1000, 242, 0, 85, 473, 167, 38, 70, 255),
    VTX(-828, 217, 236, 159, 483, 167, 38, 70, 255),
    VTX(-595, 751, 236, 258, 256, 167, 39, 70, 255),
}; 

static Vtx gameplay_keepVtx_03B6E0[32] = {
    VTX(100, 314, 337, 70, 44, 0, 107, 54, 255),
    VTX(0, 365, 236, 64, 41, 0, 107, 54, 255),
    VTX(-100, 314, 337, 58, 44, 0, 107, 54, 255),
    VTX(-100, 314, 337, 58, 44, 0, 36, 114, 255),
    VTX(0, 62, 416, 64, 60, 0, 36, 114, 255),
    VTX(100, 314, 337, 70, 44, 0, 36, 114, 255),
    VTX(0, 365, 236, 64, 41, 62, 52, 88, 255),
    VTX(-229, 639, 236, 49, 23, 62, 52, 88, 255),
    VTX(-100, 314, 337, 58, 44, 62, 52, 88, 255),
    VTX(-100, 314, -337, 58, 44, 0, 107, 202, 255),
    VTX(0, 365, -236, 64, 41, 0, 107, 202, 255),
    VTX(100, 314, -337, 70, 44, 0, 107, 202, 255),
    VTX(100, 314, -337, 70, 44, 0, 36, 142, 255),
    VTX(0, 62, -416, 64, 60, 0, 36, 142, 255),
    VTX(-100, 314, -337, 58, 44, 0, 36, 142, 255),
    VTX(-100, 314, -337, 58, 44, 62, 52, 168, 255),
    VTX(-229, 639, -236, 49, 23, 62, 52, 168, 255),
    VTX(0, 365, -236, 64, 41, 62, 52, 168, 255),
    VTX(100, 314, 337, 70, 44, 194, 52, 88, 255),
    VTX(229, 639, 236, 79, 23, 194, 52, 88, 255),
    VTX(0, 365, 236, 64, 41, 194, 52, 88, 255),
    VTX(-229, 639, 236, 49, 23, 12, 40, 112, 255),
    VTX(-595, 751, 236, 26, 16, 12, 40, 112, 255),
    VTX(0, 62, 416, 64, 60, 12, 40, 112, 255),
    VTX(-100, 314, 337, 58, 44, 12, 40, 112, 255),
    VTX(0, 62, 416, 64, 60, 244, 40, 112, 255),
    VTX(595, 751, 236, 102, 16, 244, 40, 112, 255),
    VTX(229, 639, 236, 79, 23, 244, 40, 112, 255),
    VTX(100, 314, 337, 70, 44, 244, 40, 112, 255),
    VTX(0, 62, 416, 64, 60, 18, 228, 115, 255),
    VTX(0, -677, 236, 64, 107, 18, 228, 115, 255),
    VTX(534, -325, 236, 98, 85, 18, 228, 115, 255),
}; 

static Vtx gameplay_keepVtx_03B8E0[32] = {
    VTX(-534, -325, 236, 30, 85, 238, 228, 115, 255),
    VTX(0, -677, 236, 64, 107, 238, 228, 115, 255),
    VTX(0, 62, 416, 64, 60, 238, 228, 115, 255),
    VTX(-595, 751, -236, 26, 16, 12, 40, 144, 255),
    VTX(-229, 639, -236, 49, 23, 12, 40, 144, 255),
    VTX(-100, 314, -337, 58, 44, 12, 40, 144, 255),
    VTX(0, 62, -416, 64, 60, 12, 40, 144, 255),
    VTX(229, 639, -236, 79, 23, 244, 40, 144, 255),
    VTX(595, 751, -236, 102, 16, 244, 40, 144, 255),
    VTX(0, 62, -416, 64, 60, 244, 40, 144, 255),
    VTX(100, 314, -337, 70, 44, 244, 40, 144, 255),
    VTX(0, 365, -236, 64, 41, 194, 52, 168, 255),
    VTX(229, 639, -236, 79, 23, 194, 52, 168, 255),
    VTX(100, 314, -337, 70, 44, 194, 52, 168, 255),
    VTX(0, 62, -416, 64, 60, 238, 228, 141, 255),
    VTX(0, -677, -236, 64, 107, 238, 228, 141, 255),
    VTX(-534, -325, -236, 30, 85, 238, 228, 141, 255),
    VTX(534, -325, -236, 98, 85, 18, 228, 141, 255),
    VTX(0, -677, -236, 64, 107, 18, 228, 141, 255),
    VTX(0, 62, -416, 64, 60, 18, 228, 141, 255),
    VTX(0, 62, 416, 64, 60, 228, 241, 115, 255),
    VTX(-828, 217, 236, 11, 50, 228, 241, 115, 255),
    VTX(-534, -325, 236, 30, 85, 228, 241, 115, 255),
    VTX(0, 62, 416, 64, 60, 23, 10, 117, 255),
    VTX(828, 217, 236, 117, 50, 23, 10, 117, 255),
    VTX(595, 751, 236, 102, 16, 23, 10, 117, 255),
    VTX(0, 62, -416, 64, 60, 28, 241, 141, 255),
    VTX(828, 217, -236, 117, 50, 28, 241, 141, 255),
    VTX(534, -325, -236, 98, 85, 28, 241, 141, 255),
    VTX(0, 62, -416, 64, 60, 233, 10, 139, 255),
    VTX(-828, 217, -236, 11, 50, 233, 10, 139, 255),
    VTX(-595, 751, -236, 26, 16, 233, 10, 139, 255),
}; 

static Vtx gameplay_keepVtx_03BAE0[12] = {
    VTX(-595, 751, 236, 26, 16, 233, 10, 117, 255),
    VTX(-828, 217, 236, 11, 50, 233, 10, 117, 255),
    VTX(0, 62, 416, 64, 60, 233, 10, 117, 255),
    VTX(595, 751, -236, 102, 16, 23, 10, 139, 255),
    VTX(828, 217, -236, 117, 50, 23, 10, 139, 255),
    VTX(0, 62, -416, 64, 60, 23, 10, 139, 255),
    VTX(-534, -325, -236, 30, 85, 228, 241, 141, 255),
    VTX(-828, 217, -236, 11, 50, 228, 241, 141, 255),
    VTX(0, 62, -416, 64, 60, 228, 241, 141, 255),
    VTX(534, -325, 236, 98, 85, 28, 241, 115, 255),
    VTX(828, 217, 236, 117, 50, 28, 241, 115, 255),
    VTX(0, 62, 416, 64, 60, 28, 241, 115, 255),
}; 

Gfx gHeartPieceExteriorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gHilite2Tex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_03B1E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 30, 31, 28, 0),
    gsSPVertex(&gameplay_keepVtx_03B3E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSP2Triangles(20, 21, 22, 0, 22, 23, 20, 0),
    gsSP2Triangles(24, 25, 26, 0, 26, 27, 24, 0),
    gsSP2Triangles(28, 29, 30, 0, 30, 31, 28, 0),
    gsSPVertex(&gameplay_keepVtx_03B5E0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSPEndDisplayList(),
}; 

Gfx gHeartContainerInteriorDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gRupeeLightRedTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 2, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, PRIMITIVE, 0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 229),
    gsSPVertex(&gameplay_keepVtx_03B6E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 23, 24, 0, 25, 26, 27, 0),
    gsSP2Triangles(25, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_03B8E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(20, 21, 22, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 31, 0),
    gsSPVertex(&gameplay_keepVtx_03BAE0[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_03BDE0[8] = {
    VTX(-2000, 5600, 0, 2048, 0, 0, 0, 136, 255),
    VTX(2000, 5600, 0, 0, 0, 0, 0, 136, 255),
    VTX(2000, 3200, 0, 0, 1024, 0, 0, 136, 255),
    VTX(-2000, 3200, 0, 2048, 1024, 0, 0, 136, 255),
    VTX(-2000, 3200, 0, 1024, 512, 136, 0, 0, 255),
    VTX(-2000, 3290, 200, 947, 204, 136, 0, 0, 255),
    VTX(-2000, 5510, 200, -948, 204, 136, 0, 0, 255),
    VTX(-2000, 5600, 0, -1025, 512, 136, 0, 0, 255),
}; 

static Vtx gameplay_keepVtx_03BE60[4] = {
    VTX(-2000, 5600, 0, 0, -21, 0, 109, 49, 255),
    VTX(-2000, 5510, 200, 0, 256, 0, 109, 49, 255),
    VTX(2000, 5510, 200, 5048, 256, 0, 109, 49, 255),
    VTX(2000, 5600, 0, 5048, -21, 0, 109, 49, 255),
}; 

static Vtx gameplay_keepVtx_03BEA0[4] = {
    VTX(2000, 5600, 0, 2054, 512, 120, 0, 0, 255),
    VTX(2000, 5510, 200, 1976, 96, 120, 0, 0, 255),
    VTX(2000, 3290, 200, 77, 96, 120, 0, 0, 255),
    VTX(2000, 3200, 0, 0, 512, 120, 0, 0, 255),
}; 

static Vtx gameplay_keepVtx_03BEE0[4] = {
    VTX(2000, 3200, 0, 4816, 256, 0, 147, 49, 255),
    VTX(2000, 3290, 200, 4816, -8, 0, 147, 49, 255),
    VTX(-2000, 3290, 200, 0, -8, 0, 147, 49, 255),
    VTX(-2000, 3200, 0, 0, 256, 0, 147, 49, 255),
}; 

static Vtx gameplay_keepVtx_03BF20[4] = {
    VTX(-2000, 3290, 200, 0, 1024, 0, 0, 120, 255),
    VTX(2000, 3290, 200, 2048, 1024, 0, 0, 120, 255),
    VTX(2000, 5510, 200, 2048, 0, 0, 0, 120, 255),
    VTX(-2000, 5510, 200, 0, 0, 0, 0, 120, 255),
}; 

static Vtx gameplay_keepVtx_03BF60[11] = {
    VTX(171, 6000, 100, -603, 512, 0, 120, 0, 255),
    VTX(0, 6000, -100, 421, 512, 0, 120, 0, 255),
    VTX(-171, 6000, 100, -193, -307, 0, 120, 0, 255),
    VTX(0, 0, -300, 0, 512, 102, 2, 195, 255),
    VTX(0, 6000, -100, 3478, 512, 102, 2, 195, 255),
    VTX(171, 6000, 100, 3482, 239, 102, 2, 195, 255),
    VTX(240, 0, 100, 8, 21, 102, 2, 195, 255),
    VTX(-240, 0, 100, 1585, -3, 154, 1, 195, 255),
    VTX(-171, 6000, 100, -2554, 225, 154, 1, 195, 255),
    VTX(0, 6000, -100, -2550, 512, 154, 1, 195, 255),
    VTX(0, 0, -300, 1595, 512, 154, 1, 195, 255),
}; 

static Vtx gameplay_keepVtx_03C010[4] = {
    VTX(240, 0, 100, 0, 256, 0, 0, 120, 255),
    VTX(171, 6000, 100, 5314, 256, 0, 0, 120, 255),
    VTX(-171, 6000, 100, 5318, -47, 0, 0, 120, 255),
    VTX(-240, 0, 100, 5, -169, 0, 0, 120, 255),
}; 

Gfx gSignRectangularDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSignRectangularSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_03BDE0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03BE60[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignRectangularSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03BEA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03BEE0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignRectangularFrontTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03BF20[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignRectangularSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03BF60[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP1Triangle(7, 9, 10, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03C010[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_03C2D8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_03C2E0[5] = {
    VTX(2731, 4000, 200, 2202, 512, 0, 0, 120, 255),
    VTX(-1600, 3200, 200, 0, 1024, 0, 0, 120, 255),
    VTX(1546, 3200, 200, 1600, 1024, 0, 0, 120, 255),
    VTX(-1600, 4800, 200, 0, 0, 0, 0, 120, 255),
    VTX(1546, 4800, 200, 1600, 0, 0, 0, 120, 255),
}; 

static Vtx gameplay_keepVtx_03C330[4] = {
    VTX(1546, 3200, -200, 2964, -148, 0, 136, 0, 255),
    VTX(1546, 3200, 200, 2974, 230, 0, 136, 0, 255),
    VTX(-1600, 3200, 200, 2, 313, 0, 136, 0, 255),
    VTX(-1600, 3200, -200, -9, -65, 0, 136, 0, 255),
}; 

static Vtx gameplay_keepVtx_03C370[4] = {
    VTX(-1600, 3200, -200, 0, 1024, 155, 193, 0, 255),
    VTX(-1600, 3200, 200, 0, 1024, 155, 193, 0, 255),
    VTX(-1600, 4800, 200, 0, 0, 155, 193, 0, 255),
    VTX(-1600, 4800, -200, 0, 0, 155, 193, 0, 255),
}; 

static Vtx gameplay_keepVtx_03C3B0[4] = {
    VTX(-1600, 4800, -200, 3391, -71, 0, 120, 0, 255),
    VTX(-1600, 4800, 200, 3391, 256, 0, 120, 0, 255),
    VTX(1546, 4800, 200, 0, 256, 0, 120, 0, 255),
    VTX(1546, 4800, -200, 0, -71, 0, 120, 0, 255),
}; 

static Vtx gameplay_keepVtx_03C3F0[13] = {
    VTX(2731, 4000, -200, 2202, 512, 67, 157, 0, 255),
    VTX(2731, 4000, 200, 2202, 512, 67, 157, 0, 255),
    VTX(1546, 3200, 200, 1600, 1024, 67, 157, 0, 255),
    VTX(1546, 3200, -200, 1600, 1024, 67, 157, 0, 255),
    VTX(2731, 4000, -200, 2202, 512, 67, 99, 0, 255),
    VTX(1546, 4800, -200, 1600, 0, 67, 99, 0, 255),
    VTX(1546, 4800, 200, 1600, 0, 67, 99, 0, 255),
    VTX(2731, 4000, 200, 2202, 512, 67, 99, 0, 255),
    VTX(2731, 4000, -200, 2202, 512, 0, 0, 136, 255),
    VTX(-1600, 4800, -200, 0, 0, 0, 0, 136, 255),
    VTX(1546, 4800, -200, 1600, 0, 0, 0, 136, 255),
    VTX(-1600, 3200, -200, 0, 1024, 0, 0, 136, 255),
    VTX(1546, 3200, -200, 1600, 1024, 0, 0, 136, 255),
}; 

static Vtx gameplay_keepVtx_03C4C0[3] = {
    VTX(207, 5200, 100, -603, 512, 0, 120, 0, 255),
    VTX(0, 5200, -142, 421, 512, 0, 120, 0, 255),
    VTX(-207, 5200, 100, -193, -307, 0, 120, 0, 255),
}; 

static Vtx gameplay_keepVtx_03C4F0[8] = {
    VTX(0, 0, -233, 0, 512, 101, 1, 192, 255),
    VTX(0, 5200, -142, 3196, 512, 101, 1, 192, 255),
    VTX(207, 5200, 100, 3199, 319, 101, 1, 192, 255),
    VTX(264, 0, 185, 5, 208, 101, 1, 192, 255),
    VTX(-264, 0, 185, 0, 794, 155, 0, 192, 255),
    VTX(-207, 5200, 100, 4227, 794, 155, 0, 192, 255),
    VTX(0, 5200, -142, 4227, 512, 155, 0, 192, 255),
    VTX(0, 0, -233, 0, 512, 155, 0, 192, 255),
}; 

static Vtx gameplay_keepVtx_03C570[4] = {
    VTX(264, 0, 185, 0, 256, 0, 2, 119, 255),
    VTX(207, 5200, 100, 4543, 256, 0, 2, 119, 255),
    VTX(-207, 5200, 100, 4547, -105, 0, 2, 119, 255),
    VTX(-264, 0, 185, 5, -205, 0, 2, 119, 255),
}; 

Gfx gSignDirectionalDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gSignLetteringTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_03C2E0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP1Triangle(0, 4, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03C330[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignLetteringTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03C370[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03C3B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignLetteringTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 32, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR
                         | G_TX_WRAP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03C3F0[0], 13, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP1Triangle(8, 12, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignRectangularSideTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03C4C0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 216, 216, 216, 255),
    gsSPVertex(&gameplay_keepVtx_03C4F0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSignPostWoodTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 64, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 6, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_03C570[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gDropArrows2Tex[] = {
#include "assets/objects/gameplay_keep/drop_arrows_2.rgb5a1.inc.c"
};

u64 gDropArrows1Tex[] = {
#include "assets/objects/gameplay_keep/drop_arrows_1.rgb5a1.inc.c"
};

u64 gDropArrows3Tex[] = {
#include "assets/objects/gameplay_keep/drop_arrows_3.rgb5a1.inc.c"
};

u64 gDropBombTex[] = {
#include "assets/objects/gameplay_keep/drop_bomb.rgb5a1.inc.c"
};

u64 gDropRecoveryHeartTex[] = {
#include "assets/objects/gameplay_keep/drop_recovery_heart.rgb5a1.inc.c"
};

u64 gDropHeartPieceTex[] = {
#include "assets/objects/gameplay_keep/drop_heart_piece.rgb5a1.inc.c"
};

Gfx gItemDropDL[] = {
    gsDPPipeSync(),
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPSetTexturePersp(G_TP_PERSP),
    gsDPSetTextureLOD(G_TL_TILE),
    gsDPSetTextureFilter(G_TF_BILERP),
    gsDPSetTextureConvert(G_TC_FILT),
    gsDPSetTextureLUT(G_TT_NONE),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR |
                         G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_03F0F8[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_03F0F8[4] = {
    VTX(250, 250, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(-250, 250, 0, 0, 1024, 255, 255, 255, 255),
    VTX(-250, -250, 0, 0, 0, 255, 255, 255, 255),
    VTX(250, -250, 0, 1024, 0, 255, 255, 255, 255),
}; 

static u8 unaccounted_03F138[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gDropKeySmallTex[] = {
#include "assets/objects/gameplay_keep/drop_key_small.rgb5a1.inc.c"
};

u64 gDropMagicSmallTex[] = {
#include "assets/objects/gameplay_keep/drop_magic_small.rgb5a1.inc.c"
};

u64 gDropDekuNutTex[] = {
#include "assets/objects/gameplay_keep/drop_deku_nut.rgb5a1.inc.c"
};

u64 gDropDekuSeedsTex[] = {
#include "assets/objects/gameplay_keep/drop_deku_seeds.rgb5a1.inc.c"
};

u64 gDropDekuStickTex[] = {
#include "assets/objects/gameplay_keep/drop_deku_stick.rgb5a1.inc.c"
};

u64 gDropMagicLargeTex[] = {
#include "assets/objects/gameplay_keep/drop_magic_large.rgb5a1.inc.c"
};

u64 gRupeeGreenTex[] = {
#include "assets/objects/gameplay_keep/rupee_green.rgb5a1.inc.c"
};

u64 gRupeeBlueTex[] = {
#include "assets/objects/gameplay_keep/rupee_blue.rgb5a1.inc.c"
};

u64 gRupeeRedTex[] = {
#include "assets/objects/gameplay_keep/rupee_red.rgb5a1.inc.c"
};

u64 gRupeeOrangeTex[] = {
#include "assets/objects/gameplay_keep/rupee_orange.rgb5a1.inc.c"
};

u64 gRupeePinkTex[] = {
#include "assets/objects/gameplay_keep/rupee_pink.rgb5a1.inc.c"
};

u64 gRupeeSilverTex[] = {
#include "assets/objects/gameplay_keep/rupee_silver.rgb5a1.inc.c"
};

static Vtx gameplay_keepVtx_042200[3] = {
    VTX(0, -644, 0, 64, 5, 233, 229, 142, 255),
    VTX(-312, -378, 0, 35, 29, 233, 229, 142, 255),
    VTX(0, 0, -153, 64, 64, 233, 229, 142, 255),
}; 

static Vtx gameplay_keepVtx_042230[33] = {
    VTX(0, 0, -153, 64, 64, 53, 0, 149, 255),
    VTX(312, 378, 0, 93, 99, 53, 0, 149, 255),
    VTX(312, -378, 0, 93, 29, 53, 0, 149, 255),
    VTX(0, -644, 0, 64, 5, 23, 229, 142, 255),
    VTX(0, 0, -153, 64, 64, 23, 229, 142, 255),
    VTX(312, -378, 0, 93, 29, 23, 229, 142, 255),
    VTX(-312, -378, 0, 35, 29, 203, 0, 149, 255),
    VTX(-312, 378, 0, 35, 99, 203, 0, 149, 255),
    VTX(0, 0, -153, 64, 64, 203, 0, 149, 255),
    VTX(-312, 378, 0, 35, 99, 233, 27, 142, 255),
    VTX(0, 644, 0, 64, 123, 233, 27, 142, 255),
    VTX(0, 0, -153, 64, 64, 233, 27, 142, 255),
    VTX(0, 0, -153, 64, 64, 23, 27, 142, 255),
    VTX(0, 644, 0, 64, 123, 23, 27, 142, 255),
    VTX(312, 378, 0, 93, 99, 23, 27, 142, 255),
    VTX(312, -378, 0, 93, 29, 53, 0, 107, 255),
    VTX(312, 378, 0, 93, 99, 53, 0, 107, 255),
    VTX(0, 0, 153, 64, 64, 53, 0, 107, 255),
    VTX(0, 0, 153, 64, 64, 203, 0, 107, 255),
    VTX(-312, 378, 0, 35, 99, 203, 0, 107, 255),
    VTX(-312, -378, 0, 35, 29, 203, 0, 107, 255),
    VTX(0, 0, 153, 64, 64, 233, 27, 114, 255),
    VTX(0, 644, 0, 64, 123, 233, 27, 114, 255),
    VTX(-312, 378, 0, 35, 99, 233, 27, 114, 255),
    VTX(0, 0, 153, 64, 64, 23, 27, 114, 255),
    VTX(312, 378, 0, 93, 99, 23, 27, 114, 255),
    VTX(0, 644, 0, 64, 123, 23, 27, 114, 255),
    VTX(0, -644, 0, 64, 5, 233, 229, 114, 255),
    VTX(0, 0, 153, 64, 64, 233, 229, 114, 255),
    VTX(-312, -378, 0, 35, 29, 233, 229, 114, 255),
    VTX(0, -644, 0, 64, 5, 23, 229, 114, 255),
    VTX(312, -378, 0, 93, 29, 23, 229, 114, 255),
    VTX(0, 0, 153, 64, 64, 23, 229, 114, 255),
}; 

Gfx gRupeeDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0x07D0, 0x03E8, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | 
                         G_TX_WRAP, 2, 2, 2, 1),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_FOG),
    gsSPSetGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_042200[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPVertex(&gameplay_keepVtx_042230[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_042230[30], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

u64 gRupeeLightRedTex[] = {
#include "assets/objects/gameplay_keep/rupee_light_red.rgb5a1.inc.c"
};

u64 gUnknownStone1Tex[] = {
#include "assets/objects/gameplay_keep/unknown_stone_1.rgb5a1.inc.c"
};

u64 gUnknownStone2Tex[] = {
#include "assets/objects/gameplay_keep/unknown_stone_2.rgb5a1.inc.c"
};

u64 gUnusedTreeStumpTopTex[] = {
#include "assets/objects/gameplay_keep/unused_tree_stump_top.rgb5a1.inc.c"
};

u64 gUnusedTreeStumpBarkTex[] = {
#include "assets/objects/gameplay_keep/unused_tree_stump_bark.rgb5a1.inc.c"
};

u64 gUnusedGrassBladesTex[] = {
#include "assets/objects/gameplay_keep/unused_grass_blades.rgb5a1.inc.c"
};

u64 gUnusedStoneHookshotTargetTex[] = {
#include "assets/objects/gameplay_keep/unused_stone_hookshot_target.rgb5a1.inc.c"
};

u64 gUnknownStone3Tex[] = {
#include "assets/objects/gameplay_keep/unknown_stone_3.rgb5a1.inc.c"
};

u64 gSignRectangularSideTex[] = {
#include "assets/objects/gameplay_keep/sign_rectangular_side.rgb5a1.inc.c"
};

u64 gSignRectangularFrontTex[] = {
#include "assets/objects/gameplay_keep/sign_rectangular_front.rgb5a1.inc.c"
};

u64 gSignPostWoodTex[] = {
#include "assets/objects/gameplay_keep/sign_post_wood.rgb5a1.inc.c"
};

u64 gSignLetteringTex[] = {
#include "assets/objects/gameplay_keep/sign_lettering.rgb5a1.inc.c"
};

static Vtx gameplay_keepVtx_048130[3] = {
    VTX(0, 32, 0, 256, -149, 0, 0, 120, 255),
    VTX(-1, 32, 0, 896, 491, 0, 0, 120, 255),
    VTX(-1, -32, 0, -384, 491, 0, 0, 120, 255),
}; 

Gfx gRaindropDL[] = {
    gsDPSetCombineMode(G_CC_PRIMITIVE, G_CC_PRIMITIVE),
    gsSPVertex(&gameplay_keepVtx_048130[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gFootShadowDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gFootShadowTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR
                         | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_0481E0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_0481E0[3] = {
    VTX(-11, 0, 4, 21, 1957, 151, 151, 205, 255),
    VTX(12, 0, 4, 1003, 1957, 151, 151, 205, 255),
    VTX(0, 0, -35, 512, -318, 151, 151, 205, 255),
}; 

u64 gFootShadowTex[] = {
#include "assets/objects/gameplay_keep/footprint_shadow.ia16.inc.c"
};

Gfx gCircleShadowDL[] = {
    gsDPLoadTextureBlock(gCircleShadowTex, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_049260[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_049260[3] = {
    VTX(-128, 0, 75, -639, -127, 160, 151, 205, 255),
    VTX(129, 0, 74, 1642, -165, 160, 151, 205, 255),
    VTX(0, 0, -148, 534, 1830, 160, 151, 205, 255),
}; 

u64 gCircleShadowTex[] = {
#include "assets/objects/gameplay_keep/circular_shadow.ia16.inc.c"
};

static Vtx gameplay_keepVtx_049A90[4] = {
    VTX(-133, 0, 364, 0, 0, 0, 0, 0, 255),
    VTX(133, 0, 364, 1024, 0, 0, 0, 0, 255),
    VTX(133, 0, -329, 1024, 2048, 0, 0, 0, 255),
    VTX(-133, 0, -329, 0, 2048, 0, 0, 0, 255),
}; 

Gfx gHorseShadowDL[] = {
    gsDPLoadTextureBlock(gHorseShadowTex, G_IM_FMT_I, G_IM_SIZ_8b, 16, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 4, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_049A90[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gHorseShadowTex[] = {
#include "assets/objects/gameplay_keep/horse_shadow.i8.inc.c"
};

static Vtx gameplay_keepVtx_049F20[4] = {
    VTX(40, 110, 10, 1195, -205, 255, 255, 255, 255),
    VTX(-40, 110, 10, -171, -205, 255, 255, 255, 255),
    VTX(-40, 0, 10, -171, 2048, 255, 255, 255, 255),
    VTX(40, 0, 10, 1195, 2048, 255, 255, 255, 255),
}; 

static Vtx gameplay_keepVtx_049F60[4] = {
    VTX(-40, 0, -10, 1195, 2048, 255, 255, 255, 255),
    VTX(-40, 110, -10, 1195, -205, 255, 255, 255, 255),
    VTX(40, 110, -10, -171, -205, 255, 255, 255, 255),
    VTX(40, 0, -10, -171, 2048, 255, 255, 255, 255),
}; 

static Vtx gameplay_keepVtx_049FA0[4] = {
    VTX(40, 0, -10, 1024, 2048, 85, 85, 85, 255),
    VTX(40, 0, 10, 1024, 1755, 85, 85, 85, 255),
    VTX(-40, 0, 10, 0, 1755, 85, 85, 85, 255),
    VTX(-40, 0, -10, 0, 2048, 85, 85, 85, 255),
}; 

Gfx gDungeonDoorDL[] = {
    gsDPPipeSync(),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gGenericDungeonDoorTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA, G_CC_MODULATEIA_PRIM2),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_049F20[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSPVertex(&gameplay_keepVtx_049F60[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&gameplay_keepVtx_049FA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_04A088[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gDoorMetalBarsTex[] = {
#include "assets/objects/gameplay_keep/door_metal_bars.ia8.inc.c"
};

static Vtx gameplay_keepVtx_04B090[4] = {
    VTX(-30, 100, 0, -232, 22, 255, 255, 255, 255),
    VTX(-30, -20, 0, -232, 4118, 255, 255, 255, 255),
    VTX(30, -20, 0, 3852, 4118, 255, 255, 255, 255),
    VTX(30, 100, 0, 3852, 22, 255, 255, 255, 255),
}; 

Gfx gDoorMetalBarsDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDoorMetalBarsTex, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_04B090[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gGenericDungeonDoorTex[] = {
#include "assets/objects/gameplay_keep/generic_dungeon_door.rgb5a1.inc.c"
};

u64 gSun1Tex[] = {
#include "assets/objects/gameplay_keep/sun_1.i4.inc.c"
};

u64 gSun2Tex[] = {
#include "assets/objects/gameplay_keep/sun_2.i4.inc.c"
};

u64 gSun3Tex[] = {
#include "assets/objects/gameplay_keep/sun_3.i4.inc.c"
};

static u8 unaccounted_04C940[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gSunEvening1Tex[] = {
#include "assets/objects/gameplay_keep/sun_evening_1.i4.inc.c"
};

u64 gSunEvening2Tex[] = {
#include "assets/objects/gameplay_keep/sun_evening_2.i4.inc.c"
};

u64 gSunEvening3Tex[] = {
#include "assets/objects/gameplay_keep/sun_evening_3.i4.inc.c"
};

static u8 unaccounted_04D140[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx gKokiriDustMoteTextureLoadDL[] = {
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, ENVIRONMENT, 
                       TEXEL0, ENVIRONMENT, PRIMITIVE, 0, TEXEL0, 0),
    gsDPLoadTextureBlock_4b(0x08000000, G_IM_FMT_I, 64, 64, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | G_TX_CLAMP, 
                            G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD),
    gsSPEndDisplayList(),
}; 

Gfx gKokiriDustMoteDL[] = {
    gsSPVertex(&gameplay_keepVtx_04D408[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gSunDL[] = {
    gsSPMatrix(0x01000000, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(gSun1Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSunEvening1Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&gameplay_keepVtx_04D348[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsDPLoadTextureBlock(gSun2Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 17, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSunEvening2Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 17, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(4, 5, 6, 0, 6, 5, 7, 0),
    gsDPLoadTextureBlock(gSun3Tex, G_IM_FMT_I, G_IM_SIZ_8b, 64, 17, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(gSunEvening3Tex, 0x0100, 1, G_IM_FMT_I, G_IM_SIZ_8b, 64, 17, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                       G_TX_NOMIRROR | G_TX_CLAMP, 6, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSP2Triangles(8, 9, 10, 0, 10, 9, 11, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_04D348[12] = {
    VTX(-31, -31, 0, 0, 0, 255, 255, 255, 255),
    VTX(32, -31, 0, 2016, 0, 255, 255, 255, 255),
    VTX(-31, 0, 0, 0, 992, 255, 255, 255, 255),
    VTX(32, 0, 0, 2016, 992, 255, 255, 255, 255),
    VTX(-31, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(32, 0, 0, 2016, 0, 255, 255, 255, 255),
    VTX(-31, 16, 0, 0, 512, 255, 255, 255, 255),
    VTX(32, 16, 0, 2016, 512, 255, 255, 255, 255),
    VTX(-31, 16, 0, 0, 0, 255, 255, 255, 255),
    VTX(32, 16, 0, 2016, 0, 255, 255, 255, 255),
    VTX(-31, 32, 0, 0, 512, 255, 255, 255, 255),
    VTX(32, 32, 0, 2016, 512, 255, 255, 255, 255),
}; 

static Vtx gameplay_keepVtx_04D408[4] = {
    VTX(-15, -15, 0, 0, 0, 255, 255, 255, 255),
    VTX(16, -15, 0, 2016, 0, 255, 255, 255, 255),
    VTX(-15, 16, 0, 0, 2016, 255, 255, 255, 255),
    VTX(16, 16, 0, 2016, 2016, 255, 255, 255, 255),
}; 

static u8 unaccounted_04D448[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

Gfx gZTargetLockOnTriangleDL[] = {
    gsSPVertex(&gameplay_keepVtx_04D468[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_04D468[3] = {
    VTX(-31, -31, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(32, -31, 0, 0, 1024, 255, 255, 255, 255),
    VTX(-31, 32, 0, 1024, 0, 255, 255, 255, 255),
}; 

static u8 unaccounted_04D498[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx gameplay_keepVtx_04D4A0[4] = {
    VTX(-4000, 0, 0, 0, 2048, 255, 255, 255, 255),
    VTX(4000, 16000, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-4000, 16000, 0, 0, 0, 255, 255, 255, 255),
    VTX(4000, 0, 0, 1024, 2048, 255, 255, 255, 255),
}; 

Gfx gEffFire1DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDecorativeFlameTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gDecorativeFlameMaskTex, 0x0100, 1, G_IM_FMT_I, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                          G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, PRIMITIVE, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, 
                       ENVIRONMENT, COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_04D4A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx gEffFire2DL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gDecorativeFlameTex, G_IM_FMT_I, G_IM_SIZ_8b, 32, 64, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR
                         | G_TX_CLAMP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock_4b(gDecorativeFlameMaskTex, 0x0100, 1, G_IM_FMT_I, 32, 128, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                          G_TX_NOMIRROR | G_TX_WRAP, 5, 7, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, PRIM_LOD_FRAC, TEXEL0, TEXEL1, 1, PRIM_LOD_FRAC, TEXEL0, PRIMITIVE, ENVIRONMENT,
                       COMBINED, ENVIRONMENT, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_PASS, G_RM_ZB_CLD_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPDisplayList(0x08000000),
    gsSPVertex(&gameplay_keepVtx_04D4A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 gDecorativeFlameMaskTex[] = {
#include "assets/objects/gameplay_keep/eff_fire_mask.i4.inc.c"
};

u64 gDecorativeFlameTex[] = {
#include "assets/objects/gameplay_keep/eff_fire.i8.inc.c"
};

static Vtx gameplay_keepVtx_04E660[32] = {
    VTX(719, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(811, 404, 0, 0, 0, 0, 0, 127, 0),
    VTX(-719, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-811, -404, 0, 0, 0, 0, 0, 127, 0),
    VTX(811, -404, 0, 0, 0, 0, 0, 127, 0),
    VTX(-408, -477, 0, 0, 0, 0, 0, 127, 0),
    VTX(408, 477, 0, 0, 0, 0, 0, 127, 0),
    VTX(-408, 477, 0, 0, 0, 0, 0, 127, 0),
    VTX(408, -477, 0, 0, 0, 0, 0, 127, 0),
    VTX(-811, 404, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1194, 271, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, -502, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 502, 0, 0, 0, 0, 0, 127, 0),
    VTX(-200, -492, 0, 0, 0, 0, 0, 127, 0),
    VTX(200, -492, 0, 0, 0, 0, 0, 127, 0),
    VTX(-200, 492, 0, 0, 0, 0, 0, 127, 0),
    VTX(200, 492, 0, 0, 0, 0, 0, 127, 0),
    VTX(-578, -505, 0, 0, 0, 0, 0, 127, 0),
    VTX(-578, 505, 0, 0, 0, 0, 0, 127, 0),
    VTX(599, -443, 0, 0, 0, 0, 0, 127, 0),
    VTX(599, 443, 0, 0, 0, 0, 0, 127, 0),
    VTX(-599, 443, 0, 0, 0, 0, 0, 127, 0),
    VTX(578, -505, 0, 0, 0, 0, 0, 127, 0),
    VTX(-599, -443, 0, 0, 0, 0, 0, 127, 0),
    VTX(-989, 348, 0, 0, 0, 0, 0, 127, 0),
    VTX(578, 505, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1121, 368, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-359, -225, 0, 0, 0, 0, 0, 127, 0),
    VTX(-359, 225, 0, 0, 0, 0, 0, 127, 0),
    VTX(359, 225, 0, 0, 0, 0, 0, 127, 0),
    VTX(359, -225, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04E860[5] = {
    VTX(1194, 271, 0, 0, 0, 0, 0, 127, 0),
    VTX(998, 410, 0, 0, 0, 0, 0, 127, 0),
    VTX(-705, 482, 0, 0, 0, 0, 0, 127, 0),
    VTX(1121, 368, 0, 0, 0, 0, 0, 127, 0),
    VTX(989, 348, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04E8B0[11] = {
    VTX(1372, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1372, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1194, -271, 0, 0, 0, 0, 0, 127, 0),
    VTX(998, -410, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1387, 242, 0, 0, 0, 0, 0, 127, 0),
    VTX(1121, -368, 0, 0, 0, 0, 0, 127, 0),
    VTX(1387, -242, 0, 0, 0, 0, 0, 127, 0),
    VTX(1344, -180, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1462, 135, 0, 0, 0, 0, 0, 127, 0),
    VTX(989, -348, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1344, 180, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04E960[3] = {
    VTX(1194, 271, 0, 0, 0, 0, 0, 127, 0),
    VTX(1344, 180, 0, 0, 0, 0, 0, 127, 0),
    VTX(1462, -135, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04E990[32] = {
    VTX(0, -502, 0, 0, 0, 0, 0, 127, 0),
    VTX(-100, -608, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, -724, 0, 0, 0, 0, 0, 127, 0),
    VTX(100, -608, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1344, -180, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1387, -242, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1430, -304, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1517, -429, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1253, -388, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1474, -366, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1385, -408, 0, 0, 0, 0, 0, 127, 0),
    VTX(-811, -404, 0, 0, 0, 0, 0, 127, 0),
    VTX(-998, -410, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1006, -473, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1023, -598, 0, 0, 0, 0, 0, 127, 0),
    VTX(-811, -521, 0, 0, 0, 0, 0, 127, 0),
    VTX(-705, -482, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1014, -536, 0, 0, 0, 0, 0, 127, 0),
    VTX(-917, -559, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1372, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1462, -135, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1580, -90, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1816, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1580, 90, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1698, 45, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1698, -45, 0, 0, 0, 0, 0, 127, 0),
    VTX(-599, -443, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1462, 135, 0, 0, 0, 0, 0, 127, 0),
    VTX(-719, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1194, -271, 0, 0, 0, 0, 0, 127, 0),
    VTX(-989, -348, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1121, -368, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04EB90[28] = {
    VTX(811, 404, 0, 0, 0, 0, 0, 127, 0),
    VTX(705, 482, 0, 0, 0, 0, 0, 127, 0),
    VTX(811, 521, 0, 0, 0, 0, 0, 127, 0),
    VTX(1023, 598, 0, 0, 0, 0, 0, 127, 0),
    VTX(1006, 473, 0, 0, 0, 0, 0, 127, 0),
    VTX(-150, -550, 0, 0, 0, 0, 0, 127, 0),
    VTX(-408, -477, 0, 0, 0, 0, 0, 127, 0),
    VTX(-279, -542, 0, 0, 0, 0, 0, 127, 0),
    VTX(-357, -592, 0, 0, 0, 0, 0, 127, 0),
    VTX(-515, -692, 0, 0, 0, 0, 0, 127, 0),
    VTX(-557, -568, 0, 0, 0, 0, 0, 127, 0),
    VTX(-536, -630, 0, 0, 0, 0, 0, 127, 0),
    VTX(-436, -642, 0, 0, 0, 0, 0, 127, 0),
    VTX(-578, -505, 0, 0, 0, 0, 0, 127, 0),
    VTX(408, -477, 0, 0, 0, 0, 0, 127, 0),
    VTX(279, -542, 0, 0, 0, 0, 0, 127, 0),
    VTX(357, -592, 0, 0, 0, 0, 0, 127, 0),
    VTX(515, -692, 0, 0, 0, 0, 0, 127, 0),
    VTX(557, -568, 0, 0, 0, 0, 0, 127, 0),
    VTX(436, -642, 0, 0, 0, 0, 0, 127, 0),
    VTX(536, -630, 0, 0, 0, 0, 0, 127, 0),
    VTX(578, -505, 0, 0, 0, 0, 0, 127, 0),
    VTX(-50, -666, 0, 0, 0, 0, 0, 127, 0),
    VTX(50, -666, 0, 0, 0, 0, 0, 127, 0),
    VTX(200, -492, 0, 0, 0, 0, 0, 127, 0),
    VTX(150, -550, 0, 0, 0, 0, 0, 127, 0),
    VTX(-200, -492, 0, 0, 0, 0, 0, 127, 0),
    VTX(1014, 536, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04ED50[32] = {
    VTX(-408, 477, 0, 0, 0, 0, 0, 127, 0),
    VTX(-557, 568, 0, 0, 0, 0, 0, 127, 0),
    VTX(-515, 692, 0, 0, 0, 0, 0, 127, 0),
    VTX(998, 410, 0, 0, 0, 0, 0, 127, 0),
    VTX(1006, 473, 0, 0, 0, 0, 0, 127, 0),
    VTX(1023, 598, 0, 0, 0, 0, 0, 127, 0),
    VTX(811, 521, 0, 0, 0, 0, 0, 127, 0),
    VTX(917, 559, 0, 0, 0, 0, 0, 127, 0),
    VTX(408, 477, 0, 0, 0, 0, 0, 127, 0),
    VTX(279, 542, 0, 0, 0, 0, 0, 127, 0),
    VTX(357, 592, 0, 0, 0, 0, 0, 127, 0),
    VTX(515, 692, 0, 0, 0, 0, 0, 127, 0),
    VTX(557, 568, 0, 0, 0, 0, 0, 127, 0),
    VTX(536, 630, 0, 0, 0, 0, 0, 127, 0),
    VTX(436, 642, 0, 0, 0, 0, 0, 127, 0),
    VTX(200, 492, 0, 0, 0, 0, 0, 127, 0),
    VTX(578, 505, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 502, 0, 0, 0, 0, 0, 127, 0),
    VTX(100, 608, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 724, 0, 0, 0, 0, 0, 127, 0),
    VTX(-100, 608, 0, 0, 0, 0, 0, 127, 0),
    VTX(150, 550, 0, 0, 0, 0, 0, 127, 0),
    VTX(50, 666, 0, 0, 0, 0, 0, 127, 0),
    VTX(-50, 666, 0, 0, 0, 0, 0, 127, 0),
    VTX(-200, 492, 0, 0, 0, 0, 0, 127, 0),
    VTX(-150, 550, 0, 0, 0, 0, 0, 127, 0),
    VTX(811, 404, 0, 0, 0, 0, 0, 127, 0),
    VTX(-279, 542, 0, 0, 0, 0, 0, 127, 0),
    VTX(-357, 592, 0, 0, 0, 0, 0, 127, 0),
    VTX(599, 443, 0, 0, 0, 0, 0, 127, 0),
    VTX(705, 482, 0, 0, 0, 0, 0, 127, 0),
    VTX(-436, 642, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04EF50[29] = {
    VTX(1344, 180, 0, 0, 0, 0, 0, 127, 0),
    VTX(-578, 505, 0, 0, 0, 0, 0, 127, 0),
    VTX(811, -404, 0, 0, 0, 0, 0, 127, 0),
    VTX(705, -482, 0, 0, 0, 0, 0, 127, 0),
    VTX(811, -521, 0, 0, 0, 0, 0, 127, 0),
    VTX(1023, -598, 0, 0, 0, 0, 0, 127, 0),
    VTX(1006, -473, 0, 0, 0, 0, 0, 127, 0),
    VTX(917, -559, 0, 0, 0, 0, 0, 127, 0),
    VTX(1014, -536, 0, 0, 0, 0, 0, 127, 0),
    VTX(599, -443, 0, 0, 0, 0, 0, 127, 0),
    VTX(998, -410, 0, 0, 0, 0, 0, 127, 0),
    VTX(-811, 404, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1006, 473, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1023, 598, 0, 0, 0, 0, 0, 127, 0),
    VTX(-811, 521, 0, 0, 0, 0, 0, 127, 0),
    VTX(-917, 559, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1014, 536, 0, 0, 0, 0, 0, 127, 0),
    VTX(-989, 348, 0, 0, 0, 0, 0, 127, 0),
    VTX(-998, 410, 0, 0, 0, 0, 0, 127, 0),
    VTX(-705, 482, 0, 0, 0, 0, 0, 127, 0),
    VTX(1194, 271, 0, 0, 0, 0, 0, 127, 0),
    VTX(1430, 304, 0, 0, 0, 0, 0, 127, 0),
    VTX(1517, 429, 0, 0, 0, 0, 0, 127, 0),
    VTX(1253, 388, 0, 0, 0, 0, 0, 127, 0),
    VTX(1474, 366, 0, 0, 0, 0, 0, 127, 0),
    VTX(1385, 408, 0, 0, 0, 0, 0, 127, 0),
    VTX(-536, 630, 0, 0, 0, 0, 0, 127, 0),
    VTX(1387, 242, 0, 0, 0, 0, 0, 127, 0),
    VTX(1121, 368, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04F120[25] = {
    VTX(-1194, 271, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1517, 429, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1430, 304, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1253, 388, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1474, 366, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1385, 408, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1387, 242, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1121, 368, 0, 0, 0, 0, 0, 127, 0),
    VTX(1194, -271, 0, 0, 0, 0, 0, 127, 0),
    VTX(1517, -429, 0, 0, 0, 0, 0, 127, 0),
    VTX(1253, -388, 0, 0, 0, 0, 0, 127, 0),
    VTX(1430, -304, 0, 0, 0, 0, 0, 127, 0),
    VTX(1385, -408, 0, 0, 0, 0, 0, 127, 0),
    VTX(1474, -366, 0, 0, 0, 0, 0, 127, 0),
    VTX(1387, -242, 0, 0, 0, 0, 0, 127, 0),
    VTX(1121, -368, 0, 0, 0, 0, 0, 127, 0),
    VTX(1372, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1580, 90, 0, 0, 0, 0, 0, 127, 0),
    VTX(1816, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1580, -90, 0, 0, 0, 0, 0, 127, 0),
    VTX(1698, -45, 0, 0, 0, 0, 0, 127, 0),
    VTX(1698, 45, 0, 0, 0, 0, 0, 127, 0),
    VTX(1344, 180, 0, 0, 0, 0, 0, 127, 0),
    VTX(1462, 135, 0, 0, 0, 0, 0, 127, 0),
    VTX(1462, -135, 0, 0, 0, 0, 0, 127, 0),
}; 

Gfx gUnusedUnknownShape1DL[] = {
    gsSPVertex(&gameplay_keepVtx_04E660[0], 32, 0),
    gsSP1Quadrangle(25, 6, 30, 20, 0),
    gsSP1Quadrangle(17, 5, 28, 23, 0),
    gsSP1Quadrangle(18, 21, 29, 7, 0),
    gsSP1Quadrangle(22, 19, 31, 8, 0),
    gsSP1Quadrangle(21, 9, 24, 2, 0),
    gsSP1Quadrangle(7, 29, 12, 15, 0),
    gsSP1Quadrangle(6, 16, 12, 30, 0),
    gsSP1Quadrangle(8, 31, 11, 14, 0),
    gsSP1Quadrangle(2, 24, 26, 10, 0),
    gsSP1Quadrangle(21, 2, 27, 29, 0),
    gsSP1Quadrangle(5, 13, 11, 28, 0),
    gsSP1Quadrangle(3, 23, 28, 2, 0),
    gsSP1Quadrangle(1, 20, 30, 0, 0),
    gsSP1Quadrangle(31, 19, 4, 0, 0),
    gsSP1Quadrangle(29, 27, 30, 12, 0),
    gsSP1Quadrangle(2, 28, 11, 27, 0),
    gsSP1Quadrangle(11, 31, 0, 27, 0),
    gsSP1Triangle(27, 0, 30, 0),
    gsSPVertex(&gameplay_keepVtx_04E860[0], 5, 27),
    gsSP1Triangle(9, 21, 29, 0),
    gsSP1Quadrangle(28, 1, 0, 31, 0),
    gsSP1Quadrangle(30, 31, 0, 27, 0),
    gsSPVertex(&gameplay_keepVtx_04E8B0[0], 11, 21),
    gsSP1Quadrangle(25, 31, 2, 10, 0),
    gsSP1Quadrangle(27, 28, 0, 23, 0),
    gsSP1Quadrangle(24, 30, 0, 4, 0),
    gsSP1Quadrangle(2, 31, 29, 22, 0),
    gsSP1Quadrangle(0, 30, 26, 23, 0),
    gsSPVertex(&gameplay_keepVtx_04E960[0], 3, 29),
    gsSP1Quadrangle(21, 30, 29, 0, 0),
    gsSP1Quadrangle(0, 28, 31, 21, 0),
    gsSPVertex(&gameplay_keepVtx_04E990[0], 32, 0),
    gsSP1Quadrangle(12, 11, 28, 30, 0),
    gsSP1Quadrangle(31, 30, 28, 29, 0),
    gsSP1Quadrangle(20, 4, 28, 19, 0),
    gsSP1Quadrangle(28, 4, 5, 29, 0),
    gsSP1Triangle(16, 26, 11, 0),
    gsSP1Quadrangle(22, 19, 23, 24, 0),
    gsSP1Triangle(19, 27, 23, 0),
    gsSP1Quadrangle(22, 25, 21, 19, 0),
    gsSP1Triangle(19, 21, 20, 0),
    gsSP1Quadrangle(7, 29, 6, 9, 0),
    gsSP1Triangle(29, 5, 6, 0),
    gsSP1Quadrangle(7, 10, 8, 29, 0),
    gsSP1Triangle(29, 8, 31, 0),
    gsSP1Quadrangle(14, 11, 13, 17, 0),
    gsSP1Triangle(11, 12, 13, 0),
    gsSP1Quadrangle(14, 18, 15, 11, 0),
    gsSP1Triangle(11, 15, 16, 0),
    gsSPVertex(&gameplay_keepVtx_04EB90[0], 28, 4),
    gsSP1Quadrangle(30, 9, 1, 0, 0),
    gsSP1Triangle(18, 28, 19, 0),
    gsSP1Quadrangle(28, 0, 3, 29, 0),
    gsSP1Triangle(11, 30, 10, 0),
    gsSP1Quadrangle(13, 10, 14, 15, 0),
    gsSP1Triangle(10, 17, 14, 0),
    gsSP1Quadrangle(13, 16, 12, 10, 0),
    gsSP1Triangle(10, 12, 11, 0),
    gsSP1Quadrangle(2, 0, 1, 26, 0),
    gsSP1Quadrangle(2, 27, 3, 0, 0),
    gsSP1Quadrangle(21, 18, 20, 23, 0),
    gsSP1Triangle(18, 19, 20, 0),
    gsSP1Quadrangle(21, 24, 22, 18, 0),
    gsSP1Triangle(18, 22, 25, 0),
    gsSP1Quadrangle(7, 4, 8, 31, 0),
    gsSP1Triangle(4, 6, 5, 0),
    gsSPVertex(&gameplay_keepVtx_04ED50[0], 32, 0),
    gsSP1Quadrangle(15, 21, 18, 17, 0),
    gsSP1Triangle(0, 24, 27, 0),
    gsSP1Quadrangle(24, 17, 20, 25, 0),
    gsSP2Triangles(9, 15, 8, 0, 30, 29, 26, 0),
    gsSP1Triangle(26, 3, 4, 0),
    gsSP1Quadrangle(5, 7, 6, 26, 0),
    gsSP1Quadrangle(11, 8, 12, 13, 0),
    gsSP1Triangle(8, 16, 12, 0),
    gsSP1Quadrangle(11, 14, 10, 8, 0),
    gsSP1Triangle(8, 10, 9, 0),
    gsSP1Quadrangle(19, 17, 18, 22, 0),
    gsSP1Quadrangle(19, 23, 20, 17, 0),
    gsSP1Quadrangle(2, 0, 28, 31, 0),
    gsSP1Triangle(0, 27, 28, 0),
    gsSPVertex(&gameplay_keepVtx_04EF50[0], 29, 3),
    gsSP1Quadrangle(20, 14, 15, 21, 0),
    gsSP1Quadrangle(3, 30, 24, 23, 0),
    gsSP1Triangle(5, 12, 6, 0),
    gsSP1Quadrangle(8, 5, 7, 10, 0),
    gsSP1Triangle(5, 6, 7, 0),
    gsSP1Quadrangle(8, 11, 9, 5, 0),
    gsSP1Triangle(5, 9, 13, 0),
    gsSP1Quadrangle(25, 23, 24, 27, 0),
    gsSP1Quadrangle(25, 28, 26, 23, 0),
    gsSP1Triangle(23, 26, 31, 0),
    gsSP1Quadrangle(2, 29, 1, 0, 0),
    gsSP1Triangle(0, 1, 4, 0),
    gsSP1Quadrangle(16, 14, 17, 18, 0),
    gsSP1Triangle(14, 22, 17, 0),
    gsSP1Quadrangle(16, 19, 15, 14, 0),
    gsSPVertex(&gameplay_keepVtx_04F120[0], 25, 0),
    gsSP1Quadrangle(22, 16, 17, 23, 0),
    gsSP1Quadrangle(1, 4, 2, 0, 0),
    gsSP1Triangle(0, 2, 6, 0),
    gsSP1Quadrangle(1, 0, 3, 5, 0),
    gsSP1Triangle(7, 3, 0, 0),
    gsSP1Quadrangle(9, 8, 10, 12, 0),
    gsSP1Triangle(8, 15, 10, 0),
    gsSP1Quadrangle(9, 13, 11, 8, 0),
    gsSP1Triangle(8, 11, 14, 0),
    gsSP1Quadrangle(18, 16, 19, 20, 0),
    gsSP1Triangle(16, 24, 19, 0),
    gsSP1Quadrangle(18, 21, 17, 16, 0),
    gsSPEndDisplayList(),
}; 

Gfx gUnusedUnknownShape1RefDL[] = {
    gsSPDisplayList(gUnusedUnknownShape1DL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_04F640[32] = {
    VTX(0, -529, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1444, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(846, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1257, 286, 0, 0, 0, 0, 0, 127, 0),
    VTX(-429, -503, 0, 0, 0, 0, 0, 127, 0),
    VTX(-854, 425, 0, 0, 0, 0, 0, 127, 0),
    VTX(429, 503, 0, 0, 0, 0, 0, 127, 0),
    VTX(854, 425, 0, 0, 0, 0, 0, 127, 0),
    VTX(-429, 503, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1257, 286, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 529, 0, 0, 0, 0, 0, 127, 0),
    VTX(423, -265, 0, 0, 0, 0, 0, 127, 0),
    VTX(-846, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1064, 374, 0, 0, 0, 0, 0, 127, 0),
    VTX(644, 476, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1445, 193, 0, 0, 0, 0, 0, 127, 0),
    VTX(-423, -265, 0, 0, 0, 0, 0, 127, 0),
    VTX(1064, 374, 0, 0, 0, 0, 0, 127, 0),
    VTX(-644, -476, 0, 0, 0, 0, 0, 127, 0),
    VTX(-215, -529, 0, 0, 0, 0, 0, 127, 0),
    VTX(262, 560, 0, 0, 0, 0, 0, 127, 0),
    VTX(173, 565, 0, 0, 0, 0, 0, 127, 0),
    VTX(-173, 565, 0, 0, 0, 0, 0, 127, 0),
    VTX(-696, 502, 0, 0, 0, 0, 0, 127, 0),
    VTX(-644, 476, 0, 0, 0, 0, 0, 127, 0),
    VTX(-606, -518, 0, 0, 0, 0, 0, 127, 0),
    VTX(-262, 560, 0, 0, 0, 0, 0, 127, 0),
    VTX(-215, 529, 0, 0, 0, 0, 0, 127, 0),
    VTX(-423, 265, 0, 0, 0, 0, 0, 127, 0),
    VTX(215, 529, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(423, 265, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04F840[5] = {
    VTX(429, -503, 0, 0, 0, 0, 0, 127, 0),
    VTX(854, -425, 0, 0, 0, 0, 0, 127, 0),
    VTX(644, -476, 0, 0, 0, 0, 0, 127, 0),
    VTX(-173, -565, 0, 0, 0, 0, 0, 127, 0),
    VTX(-262, -560, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04F890[16] = {
    VTX(1444, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1257, -286, 0, 0, 0, 0, 0, 127, 0),
    VTX(854, -425, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1257, -286, 0, 0, 0, 0, 0, 127, 0),
    VTX(-854, -425, 0, 0, 0, 0, 0, 127, 0),
    VTX(1445, 193, 0, 0, 0, 0, 0, 127, 0),
    VTX(1445, -193, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1064, -374, 0, 0, 0, 0, 0, 127, 0),
    VTX(1064, -374, 0, 0, 0, 0, 0, 127, 0),
    VTX(-987, 458, 0, 0, 0, 0, 0, 127, 0),
    VTX(558, 551, 0, 0, 0, 0, 0, 127, 0),
    VTX(1392, 294, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1392, 294, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1445, -193, 0, 0, 0, 0, 0, 127, 0),
    VTX(-644, -476, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1486, -162, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04F990[30] = {
    VTX(-1257, 286, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1392, 294, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1297, 363, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1176, 394, 0, 0, 0, 0, 0, 127, 0),
    VTX(644, -476, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1445, 193, 0, 0, 0, 0, 0, 127, 0),
    VTX(423, -265, 0, 0, 0, 0, 0, 127, 0),
    VTX(215, -529, 0, 0, 0, 0, 0, 127, 0),
    VTX(429, -503, 0, 0, 0, 0, 0, 127, 0),
    VTX(262, -560, 0, 0, 0, 0, 0, 127, 0),
    VTX(316, -580, 0, 0, 0, 0, 0, 127, 0),
    VTX(440, -587, 0, 0, 0, 0, 0, 127, 0),
    VTX(558, -551, 0, 0, 0, 0, 0, 127, 0),
    VTX(501, -574, 0, 0, 0, 0, 0, 127, 0),
    VTX(377, -589, 0, 0, 0, 0, 0, 127, 0),
    VTX(-122, -592, 0, 0, 0, 0, 0, 127, 0),
    VTX(606, -518, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1547, -56, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1547, 56, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1486, 162, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1552, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1526, 114, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, -613, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1486, -162, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1526, -114, 0, 0, 0, 0, 0, 127, 0),
    VTX(-173, -565, 0, 0, 0, 0, 0, 127, 0),
    VTX(62, -609, 0, 0, 0, 0, 0, 127, 0),
    VTX(173, -565, 0, 0, 0, 0, 0, 127, 0),
    VTX(-62, -609, 0, 0, 0, 0, 0, 127, 0),
    VTX(122, -592, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04FB70[32] = {
    VTX(854, 425, 0, 0, 0, 0, 0, 127, 0),
    VTX(987, 458, 0, 0, 0, 0, 0, 127, 0),
    VTX(752, 516, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 613, 0, 0, 0, 0, 0, 127, 0),
    VTX(-173, 565, 0, 0, 0, 0, 0, 127, 0),
    VTX(-122, 592, 0, 0, 0, 0, 0, 127, 0),
    VTX(173, 565, 0, 0, 0, 0, 0, 127, 0),
    VTX(122, 592, 0, 0, 0, 0, 0, 127, 0),
    VTX(-854, 425, 0, 0, 0, 0, 0, 127, 0),
    VTX(-814, 518, 0, 0, 0, 0, 0, 127, 0),
    VTX(-933, 489, 0, 0, 0, 0, 0, 127, 0),
    VTX(-987, 458, 0, 0, 0, 0, 0, 127, 0),
    VTX(-874, 507, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1064, 374, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1030, 420, 0, 0, 0, 0, 0, 127, 0),
    VTX(-696, 502, 0, 0, 0, 0, 0, 127, 0),
    VTX(-752, 516, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1257, 286, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1176, 394, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1297, 363, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1392, 294, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1351, 333, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1118, 391, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1237, 384, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1445, 193, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1424, 247, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 529, 0, 0, 0, 0, 0, 127, 0),
    VTX(62, 609, 0, 0, 0, 0, 0, 127, 0),
    VTX(874, 507, 0, 0, 0, 0, 0, 127, 0),
    VTX(-62, 609, 0, 0, 0, 0, 0, 127, 0),
    VTX(933, 489, 0, 0, 0, 0, 0, 127, 0),
    VTX(814, 518, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04FD70[29] = {
    VTX(1445, -193, 0, 0, 0, 0, 0, 127, 0),
    VTX(1526, -114, 0, 0, 0, 0, 0, 127, 0),
    VTX(1444, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1030, 420, 0, 0, 0, 0, 0, 127, 0),
    VTX(429, 503, 0, 0, 0, 0, 0, 127, 0),
    VTX(558, 551, 0, 0, 0, 0, 0, 127, 0),
    VTX(440, 587, 0, 0, 0, 0, 0, 127, 0),
    VTX(316, 580, 0, 0, 0, 0, 0, 127, 0),
    VTX(606, 518, 0, 0, 0, 0, 0, 127, 0),
    VTX(501, 574, 0, 0, 0, 0, 0, 127, 0),
    VTX(377, 589, 0, 0, 0, 0, 0, 127, 0),
    VTX(262, 560, 0, 0, 0, 0, 0, 127, 0),
    VTX(1257, 286, 0, 0, 0, 0, 0, 127, 0),
    VTX(1176, 394, 0, 0, 0, 0, 0, 127, 0),
    VTX(1297, 363, 0, 0, 0, 0, 0, 127, 0),
    VTX(1392, 294, 0, 0, 0, 0, 0, 127, 0),
    VTX(1118, 391, 0, 0, 0, 0, 0, 127, 0),
    VTX(1351, 333, 0, 0, 0, 0, 0, 127, 0),
    VTX(1237, 384, 0, 0, 0, 0, 0, 127, 0),
    VTX(1445, 193, 0, 0, 0, 0, 0, 127, 0),
    VTX(1424, 247, 0, 0, 0, 0, 0, 127, 0),
    VTX(644, 476, 0, 0, 0, 0, 0, 127, 0),
    VTX(1526, 114, 0, 0, 0, 0, 0, 127, 0),
    VTX(1552, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(696, 502, 0, 0, 0, 0, 0, 127, 0),
    VTX(1547, -56, 0, 0, 0, 0, 0, 127, 0),
    VTX(1547, 56, 0, 0, 0, 0, 0, 127, 0),
    VTX(1486, 162, 0, 0, 0, 0, 0, 127, 0),
    VTX(1064, 374, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_04FF40[32] = {
    VTX(1257, -286, 0, 0, 0, 0, 0, 127, 0),
    VTX(1297, -363, 0, 0, 0, 0, 0, 127, 0),
    VTX(1392, -294, 0, 0, 0, 0, 0, 127, 0),
    VTX(1176, -394, 0, 0, 0, 0, 0, 127, 0),
    VTX(-440, -587, 0, 0, 0, 0, 0, 127, 0),
    VTX(-606, -518, 0, 0, 0, 0, 0, 127, 0),
    VTX(-558, -551, 0, 0, 0, 0, 0, 127, 0),
    VTX(-262, -560, 0, 0, 0, 0, 0, 127, 0),
    VTX(-429, 503, 0, 0, 0, 0, 0, 127, 0),
    VTX(-440, 587, 0, 0, 0, 0, 0, 127, 0),
    VTX(-558, 551, 0, 0, 0, 0, 0, 127, 0),
    VTX(-316, 580, 0, 0, 0, 0, 0, 127, 0),
    VTX(-501, 574, 0, 0, 0, 0, 0, 127, 0),
    VTX(-377, 589, 0, 0, 0, 0, 0, 127, 0),
    VTX(-644, 476, 0, 0, 0, 0, 0, 127, 0),
    VTX(-606, 518, 0, 0, 0, 0, 0, 127, 0),
    VTX(-262, 560, 0, 0, 0, 0, 0, 127, 0),
    VTX(854, -425, 0, 0, 0, 0, 0, 127, 0),
    VTX(987, -458, 0, 0, 0, 0, 0, 127, 0),
    VTX(874, -507, 0, 0, 0, 0, 0, 127, 0),
    VTX(752, -516, 0, 0, 0, 0, 0, 127, 0),
    VTX(933, -489, 0, 0, 0, 0, 0, 127, 0),
    VTX(814, -518, 0, 0, 0, 0, 0, 127, 0),
    VTX(644, -476, 0, 0, 0, 0, 0, 127, 0),
    VTX(696, -502, 0, 0, 0, 0, 0, 127, 0),
    VTX(1064, -374, 0, 0, 0, 0, 0, 127, 0),
    VTX(1030, -420, 0, 0, 0, 0, 0, 127, 0),
    VTX(-429, -503, 0, 0, 0, 0, 0, 127, 0),
    VTX(-501, -574, 0, 0, 0, 0, 0, 127, 0),
    VTX(-377, -589, 0, 0, 0, 0, 0, 127, 0),
    VTX(-316, -580, 0, 0, 0, 0, 0, 127, 0),
    VTX(1118, -391, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_050140[26] = {
    VTX(1351, -333, 0, 0, 0, 0, 0, 127, 0),
    VTX(1237, -384, 0, 0, 0, 0, 0, 127, 0),
    VTX(1445, -193, 0, 0, 0, 0, 0, 127, 0),
    VTX(1424, -247, 0, 0, 0, 0, 0, 127, 0),
    VTX(1444, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1526, -114, 0, 0, 0, 0, 0, 127, 0),
    VTX(1486, -162, 0, 0, 0, 0, 0, 127, 0),
    VTX(-854, -425, 0, 0, 0, 0, 0, 127, 0),
    VTX(-874, -507, 0, 0, 0, 0, 0, 127, 0),
    VTX(-752, -516, 0, 0, 0, 0, 0, 127, 0),
    VTX(-987, -458, 0, 0, 0, 0, 0, 127, 0),
    VTX(-814, -518, 0, 0, 0, 0, 0, 127, 0),
    VTX(-933, -489, 0, 0, 0, 0, 0, 127, 0),
    VTX(-644, -476, 0, 0, 0, 0, 0, 127, 0),
    VTX(-696, -502, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1064, -374, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1030, -420, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1257, -286, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1176, -394, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1297, -363, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1392, -294, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1118, -391, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1351, -333, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1237, -384, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1445, -193, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1424, -247, 0, 0, 0, 0, 0, 127, 0),
}; 

Gfx gUnusedUnknownShape2DL[] = {
    gsSPVertex(&gameplay_keepVtx_04F640[0], 32, 0),
    gsSP1Quadrangle(26, 8, 28, 27, 0),
    gsSP1Quadrangle(20, 29, 31, 6, 0),
    gsSP1Quadrangle(23, 5, 12, 24, 0),
    gsSP1Quadrangle(25, 4, 16, 18, 0),
    gsSP1Quadrangle(8, 24, 12, 28, 0),
    gsSP1Quadrangle(6, 31, 2, 14, 0),
    gsSP1Quadrangle(9, 12, 5, 13, 0),
    gsSP1Triangle(12, 18, 16, 0),
    gsSP1Quadrangle(9, 15, 1, 12, 0),
    gsSP1Quadrangle(28, 10, 22, 27, 0),
    gsSP1Quadrangle(31, 29, 21, 10, 0),
    gsSP1Quadrangle(3, 17, 7, 2, 0),
    gsSP1Triangle(2, 7, 14, 0),
    gsSP1Quadrangle(10, 28, 12, 30, 0),
    gsSP2Triangles(30, 12, 16, 0, 30, 16, 0, 0),
    gsSP1Quadrangle(0, 11, 2, 30, 0),
    gsSP2Triangles(30, 2, 31, 0, 30, 31, 10, 0),
    gsSPVertex(&gameplay_keepVtx_04F840[0], 5, 27),
    gsSP1Quadrangle(31, 19, 16, 4, 0),
    gsSP1Quadrangle(27, 29, 2, 11, 0),
    gsSP1Quadrangle(16, 19, 30, 0, 0),
    gsSP1Triangle(2, 29, 28, 0),
    gsSPVertex(&gameplay_keepVtx_04F890[0], 16, 16),
    gsSP1Quadrangle(16, 21, 3, 2, 0),
    gsSP1Quadrangle(31, 29, 12, 1, 0),
    gsSP1Quadrangle(23, 20, 30, 12, 0),
    gsSP1Quadrangle(16, 2, 17, 22, 0),
    gsSP1Quadrangle(23, 12, 29, 19, 0),
    gsSP1Quadrangle(17, 2, 18, 24, 0),
    gsSPVertex(&gameplay_keepVtx_04F990[0], 30, 2),
    gsSP1Quadrangle(6, 10, 14, 18, 0),
    gsSP1Quadrangle(11, 10, 8, 9, 0),
    gsSP1Quadrangle(14, 10, 13, 15, 0),
    gsSP1Quadrangle(13, 10, 12, 16, 0),
    gsSP1Triangle(11, 12, 10, 0),
    gsSP1Quadrangle(17, 30, 24, 0, 0),
    gsSP1Quadrangle(19, 26, 25, 1, 0),
    gsSP1Quadrangle(29, 0, 28, 31, 0),
    gsSP1Triangle(0, 24, 28, 0),
    gsSP1Quadrangle(19, 1, 20, 22, 0),
    gsSP1Quadrangle(21, 23, 20, 1, 0),
    gsSP1Quadrangle(8, 0, 29, 9, 0),
    gsSP2Triangles(7, 21, 1, 0, 0, 27, 17, 0),
    gsSPVertex(&gameplay_keepVtx_04FB70[0], 32, 0),
    gsSP1Quadrangle(15, 16, 9, 8, 0),
    gsSP1Quadrangle(11, 14, 13, 8, 0),
    gsSP1Quadrangle(24, 17, 20, 25, 0),
    gsSP1Quadrangle(1, 30, 28, 0, 0),
    gsSP1Quadrangle(28, 31, 2, 0, 0),
    gsSP1Quadrangle(10, 8, 9, 12, 0),
    gsSP1Quadrangle(20, 17, 19, 21, 0),
    gsSP1Quadrangle(13, 22, 18, 17, 0),
    gsSP1Triangle(10, 11, 8, 0),
    gsSP1Quadrangle(19, 17, 18, 23, 0),
    gsSP1Quadrangle(6, 7, 27, 26, 0),
    gsSP1Quadrangle(27, 3, 29, 26, 0),
    gsSP1Quadrangle(29, 5, 4, 26, 0),
    gsSPVertex(&gameplay_keepVtx_04FD70[0], 29, 3),
    gsSP1Quadrangle(31, 6, 1, 0, 0),
    gsSP1Quadrangle(24, 11, 8, 7, 0),
    gsSP1Quadrangle(22, 23, 18, 15, 0),
    gsSP1Quadrangle(31, 15, 16, 19, 0),
    gsSP1Quadrangle(17, 15, 18, 20, 0),
    gsSP1Quadrangle(17, 21, 16, 15, 0),
    gsSP1Quadrangle(24, 0, 2, 27, 0),
    gsSP1Quadrangle(8, 12, 9, 7, 0),
    gsSP1Quadrangle(9, 13, 10, 7, 0),
    gsSP1Triangle(7, 10, 14, 0),
    gsSP1Quadrangle(4, 28, 26, 5, 0),
    gsSP1Quadrangle(26, 29, 25, 5, 0),
    gsSP1Quadrangle(25, 30, 22, 5, 0),
    gsSPVertex(&gameplay_keepVtx_04FF40[0], 32, 0),
    gsSP1Quadrangle(5, 6, 28, 27, 0),
    gsSP1Quadrangle(9, 12, 10, 8, 0),
    gsSP1Quadrangle(14, 8, 10, 15, 0),
    gsSP1Triangle(27, 30, 7, 0),
    gsSP1Quadrangle(25, 17, 18, 26, 0),
    gsSP1Quadrangle(11, 13, 9, 8, 0),
    gsSP1Quadrangle(25, 31, 3, 0, 0),
    gsSP1Quadrangle(23, 24, 20, 17, 0),
    gsSP1Quadrangle(18, 17, 19, 21, 0),
    gsSP1Quadrangle(19, 17, 20, 22, 0),
    gsSP1Triangle(16, 11, 8, 0),
    gsSP1Quadrangle(29, 27, 28, 4, 0),
    gsSP1Triangle(27, 29, 30, 0),
    gsSPVertex(&gameplay_keepVtx_050140[0], 26, 4),
    gsSP1Quadrangle(12, 15, 13, 11, 0),
    gsSP1Quadrangle(6, 0, 2, 7, 0),
    gsSP1Quadrangle(1, 4, 2, 0, 0),
    gsSP1Quadrangle(1, 0, 3, 5, 0),
    gsSP1Quadrangle(13, 18, 17, 11, 0),
    gsSP1Quadrangle(19, 20, 14, 11, 0),
    gsSP1Quadrangle(28, 29, 24, 21, 0),
    gsSP1Quadrangle(19, 21, 22, 25, 0),
    gsSP1Quadrangle(23, 21, 24, 26, 0),
    gsSP1Quadrangle(23, 27, 22, 21, 0),
    gsSP1Quadrangle(12, 11, 14, 16, 0),
    gsSP1Quadrangle(6, 10, 9, 8, 0),
    gsSPEndDisplayList(),
}; 

Gfx gUnusedUnknownShape2RefDL[] = {
    gsSPDisplayList(gUnusedUnknownShape2DL),
    gsSPEndDisplayList(),
}; 

static Vtx gameplay_keepVtx_050610[32] = {
    VTX(-781, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1333, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1161, -264, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, -489, 0, 0, 0, 0, 0, 127, 0),
    VTX(-396, -465, 0, 0, 0, 0, 0, 127, 0),
    VTX(1161, 264, 0, 0, 0, 0, 0, 127, 0),
    VTX(396, -465, 0, 0, 0, 0, 0, 127, 0),
    VTX(788, -394, 0, 0, 0, 0, 0, 127, 0),
    VTX(788, 394, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 489, 0, 0, 0, 0, 0, 127, 0),
    VTX(-396, 465, 0, 0, 0, 0, 0, 127, 0),
    VTX(396, 465, 0, 0, 0, 0, 0, 127, 0),
    VTX(-214, -610, 0, 0, 0, 0, 0, 127, 0),
    VTX(1405, -212, 0, 0, 0, 0, 0, 127, 0),
    VTX(-618, -560, 0, 0, 0, 0, 0, 127, 0),
    VTX(1028, -446, 0, 0, 0, 0, 0, 127, 0),
    VTX(1405, 212, 0, 0, 0, 0, 0, 127, 0),
    VTX(-618, 560, 0, 0, 0, 0, 0, 127, 0),
    VTX(-214, 610, 0, 0, 0, 0, 0, 127, 0),
    VTX(214, -610, 0, 0, 0, 0, 0, 127, 0),
    VTX(214, 610, 0, 0, 0, 0, 0, 127, 0),
    VTX(1028, 446, 0, 0, 0, 0, 0, 127, 0),
    VTX(664, -550, 0, 0, 0, 0, 0, 127, 0),
    VTX(618, 560, 0, 0, 0, 0, 0, 127, 0),
    VTX(-390, -245, 0, 0, 0, 0, 0, 127, 0),
    VTX(664, 550, 0, 0, 0, 0, 0, 127, 0),
    VTX(618, -560, 0, 0, 0, 0, 0, 127, 0),
    VTX(781, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(390, -245, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-390, 245, 0, 0, 0, 0, 0, 127, 0),
    VTX(390, 245, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_050810[5] = {
    VTX(-1161, 264, 0, 0, 0, 0, 0, 127, 0),
    VTX(-788, 394, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1028, 446, 0, 0, 0, 0, 0, 127, 0),
    VTX(-570, -566, 0, 0, 0, 0, 0, 127, 0),
    VTX(-664, 550, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_050860[8] = {
    VTX(-1161, -264, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1333, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1161, 264, 0, 0, 0, 0, 0, 127, 0),
    VTX(-788, -394, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1405, -212, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1405, 212, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1028, -446, 0, 0, 0, 0, 0, 127, 0),
    VTX(-664, -550, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_0508E0[32] = {
    VTX(1161, 264, 0, 0, 0, 0, 0, 127, 0),
    VTX(1310, 295, 0, 0, 0, 0, 0, 127, 0),
    VTX(1213, 360, 0, 0, 0, 0, 0, 127, 0),
    VTX(1121, 409, 0, 0, 0, 0, 0, 127, 0),
    VTX(161, -612, 0, 0, 0, 0, 0, 127, 0),
    VTX(-55, -614, 0, 0, 0, 0, 0, 127, 0),
    VTX(110, -613, 0, 0, 0, 0, 0, 127, 0),
    VTX(-214, -610, 0, 0, 0, 0, 0, 127, 0),
    VTX(-161, -612, 0, 0, 0, 0, 0, 127, 0),
    VTX(214, -610, 0, 0, 0, 0, 0, 127, 0),
    VTX(-396, -465, 0, 0, 0, 0, 0, 127, 0),
    VTX(-310, -601, 0, 0, 0, 0, 0, 127, 0),
    VTX(-417, -590, 0, 0, 0, 0, 0, 127, 0),
    VTX(-469, -583, 0, 0, 0, 0, 0, 127, 0),
    VTX(-264, -606, 0, 0, 0, 0, 0, 127, 0),
    VTX(-364, -596, 0, 0, 0, 0, 0, 127, 0),
    VTX(-570, -566, 0, 0, 0, 0, 0, 127, 0),
    VTX(-524, -574, 0, 0, 0, 0, 0, 127, 0),
    VTX(396, -465, 0, 0, 0, 0, 0, 127, 0),
    VTX(310, -601, 0, 0, 0, 0, 0, 127, 0),
    VTX(417, -590, 0, 0, 0, 0, 0, 127, 0),
    VTX(524, -574, 0, 0, 0, 0, 0, 127, 0),
    VTX(264, -606, 0, 0, 0, 0, 0, 127, 0),
    VTX(469, -583, 0, 0, 0, 0, 0, 127, 0),
    VTX(364, -596, 0, 0, 0, 0, 0, 127, 0),
    VTX(618, -560, 0, 0, 0, 0, 0, 127, 0),
    VTX(570, -566, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, -489, 0, 0, 0, 0, 0, 127, 0),
    VTX(-110, -613, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, -614, 0, 0, 0, 0, 0, 127, 0),
    VTX(1165, 386, 0, 0, 0, 0, 0, 127, 0),
    VTX(55, -614, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_050AE0[28] = {
    VTX(788, 394, 0, 0, 0, 0, 0, 127, 0),
    VTX(824, 513, 0, 0, 0, 0, 0, 127, 0),
    VTX(714, 540, 0, 0, 0, 0, 0, 127, 0),
    VTX(1028, -446, 0, 0, 0, 0, 0, 127, 0),
    VTX(930, 479, 0, 0, 0, 0, 0, 127, 0),
    VTX(1333, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1472, 110, 0, 0, 0, 0, 0, 127, 0),
    VTX(1490, 56, 0, 0, 0, 0, 0, 127, 0),
    VTX(1497, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(1472, -110, 0, 0, 0, 0, 0, 127, 0),
    VTX(1490, -56, 0, 0, 0, 0, 0, 127, 0),
    VTX(1446, 161, 0, 0, 0, 0, 0, 127, 0),
    VTX(1405, -212, 0, 0, 0, 0, 0, 127, 0),
    VTX(1446, -161, 0, 0, 0, 0, 0, 127, 0),
    VTX(1161, -264, 0, 0, 0, 0, 0, 127, 0),
    VTX(1310, -295, 0, 0, 0, 0, 0, 127, 0),
    VTX(1213, -360, 0, 0, 0, 0, 0, 127, 0),
    VTX(1165, -386, 0, 0, 0, 0, 0, 127, 0),
    VTX(1121, -409, 0, 0, 0, 0, 0, 127, 0),
    VTX(1359, -257, 0, 0, 0, 0, 0, 127, 0),
    VTX(1263, -328, 0, 0, 0, 0, 0, 127, 0),
    VTX(1263, 328, 0, 0, 0, 0, 0, 127, 0),
    VTX(1073, -429, 0, 0, 0, 0, 0, 127, 0),
    VTX(1028, 446, 0, 0, 0, 0, 0, 127, 0),
    VTX(1073, 429, 0, 0, 0, 0, 0, 127, 0),
    VTX(1405, 212, 0, 0, 0, 0, 0, 127, 0),
    VTX(1359, 257, 0, 0, 0, 0, 0, 127, 0),
    VTX(980, 464, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_050CA0[32] = {
    VTX(-788, 394, 0, 0, 0, 0, 0, 127, 0),
    VTX(-930, 479, 0, 0, 0, 0, 0, 127, 0),
    VTX(-824, 513, 0, 0, 0, 0, 0, 127, 0),
    VTX(-714, 540, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1028, 446, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1028, -446, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1161, 264, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1073, 429, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1405, 212, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1359, 257, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1333, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1472, 110, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1490, 56, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1497, 0, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1472, -110, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1490, -56, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1446, 161, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1405, -212, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1446, -161, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1161, -264, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1310, -295, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1213, -360, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1165, -386, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1121, -409, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1359, -257, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1263, -328, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1310, 295, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1073, -429, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1213, 360, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1165, 386, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1121, 409, 0, 0, 0, 0, 0, 127, 0),
    VTX(-1263, 328, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_050EA0[26] = {
    VTX(396, 465, 0, 0, 0, 0, 0, 127, 0),
    VTX(310, 601, 0, 0, 0, 0, 0, 127, 0),
    VTX(417, 590, 0, 0, 0, 0, 0, 127, 0),
    VTX(524, 574, 0, 0, 0, 0, 0, 127, 0),
    VTX(-214, 610, 0, 0, 0, 0, 0, 127, 0),
    VTX(214, 610, 0, 0, 0, 0, 0, 127, 0),
    VTX(-824, -513, 0, 0, 0, 0, 0, 127, 0),
    VTX(-714, -540, 0, 0, 0, 0, 0, 127, 0),
    VTX(-770, -527, 0, 0, 0, 0, 0, 127, 0),
    VTX(-980, -464, 0, 0, 0, 0, 0, 127, 0),
    VTX(-878, -497, 0, 0, 0, 0, 0, 127, 0),
    VTX(-664, -550, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 489, 0, 0, 0, 0, 0, 127, 0),
    VTX(110, 613, 0, 0, 0, 0, 0, 127, 0),
    VTX(0, 614, 0, 0, 0, 0, 0, 127, 0),
    VTX(-110, 613, 0, 0, 0, 0, 0, 127, 0),
    VTX(55, 614, 0, 0, 0, 0, 0, 127, 0),
    VTX(-55, 614, 0, 0, 0, 0, 0, 127, 0),
    VTX(-980, 464, 0, 0, 0, 0, 0, 127, 0),
    VTX(-161, 612, 0, 0, 0, 0, 0, 127, 0),
    VTX(-770, 527, 0, 0, 0, 0, 0, 127, 0),
    VTX(161, 612, 0, 0, 0, 0, 0, 127, 0),
    VTX(-878, 497, 0, 0, 0, 0, 0, 127, 0),
    VTX(-664, 550, 0, 0, 0, 0, 0, 127, 0),
    VTX(-788, -394, 0, 0, 0, 0, 0, 127, 0),
    VTX(-930, -479, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_051040[32] = {
    VTX(-396, 465, 0, 0, 0, 0, 0, 127, 0),
    VTX(-524, 574, 0, 0, 0, 0, 0, 127, 0),
    VTX(-310, 601, 0, 0, 0, 0, 0, 127, 0),
    VTX(770, 527, 0, 0, 0, 0, 0, 127, 0),
    VTX(930, 479, 0, 0, 0, 0, 0, 127, 0),
    VTX(878, 497, 0, 0, 0, 0, 0, 127, 0),
    VTX(664, 550, 0, 0, 0, 0, 0, 127, 0),
    VTX(788, -394, 0, 0, 0, 0, 0, 127, 0),
    VTX(930, -479, 0, 0, 0, 0, 0, 127, 0),
    VTX(824, -513, 0, 0, 0, 0, 0, 127, 0),
    VTX(714, -540, 0, 0, 0, 0, 0, 127, 0),
    VTX(878, -497, 0, 0, 0, 0, 0, 127, 0),
    VTX(770, -527, 0, 0, 0, 0, 0, 127, 0),
    VTX(1028, -446, 0, 0, 0, 0, 0, 127, 0),
    VTX(980, -464, 0, 0, 0, 0, 0, 127, 0),
    VTX(664, -550, 0, 0, 0, 0, 0, 127, 0),
    VTX(396, 465, 0, 0, 0, 0, 0, 127, 0),
    VTX(524, 574, 0, 0, 0, 0, 0, 127, 0),
    VTX(417, 590, 0, 0, 0, 0, 0, 127, 0),
    VTX(310, 601, 0, 0, 0, 0, 0, 127, 0),
    VTX(469, 583, 0, 0, 0, 0, 0, 127, 0),
    VTX(364, 596, 0, 0, 0, 0, 0, 127, 0),
    VTX(618, 560, 0, 0, 0, 0, 0, 127, 0),
    VTX(570, 566, 0, 0, 0, 0, 0, 127, 0),
    VTX(214, 610, 0, 0, 0, 0, 0, 127, 0),
    VTX(264, 606, 0, 0, 0, 0, 0, 127, 0),
    VTX(788, 394, 0, 0, 0, 0, 0, 127, 0),
    VTX(-417, 590, 0, 0, 0, 0, 0, 127, 0),
    VTX(824, 513, 0, 0, 0, 0, 0, 127, 0),
    VTX(714, 540, 0, 0, 0, 0, 0, 127, 0),
    VTX(-469, 583, 0, 0, 0, 0, 0, 127, 0),
    VTX(-364, 596, 0, 0, 0, 0, 0, 127, 0),
}; 

static Vtx gameplay_keepVtx_051240[4] = {
    VTX(-618, 560, 0, 0, 0, 0, 0, 127, 0),
    VTX(-570, 566, 0, 0, 0, 0, 0, 127, 0),
    VTX(-214, 610, 0, 0, 0, 0, 0, 127, 0),
    VTX(-264, 606, 0, 0, 0, 0, 0, 127, 0),
}; 

Gfx gUnusedUnknownShape3DL[] = {
    gsSPVertex(&gameplay_keepVtx_050610[0], 32, 0),
    gsSP1Quadrangle(25, 23, 27, 8, 0),
    gsSP1Quadrangle(22, 7, 27, 26, 0),
    gsSP1Quadrangle(18, 10, 17, 30, 0),
    gsSP1Quadrangle(20, 31, 23, 11, 0),
    gsSP1Quadrangle(26, 28, 19, 6, 0),
    gsSP1Quadrangle(1, 16, 5, 27, 0),
    gsSP1Quadrangle(17, 0, 29, 30, 0),
    gsSP1Triangle(24, 4, 12, 0),
    gsSP1Quadrangle(14, 24, 29, 0, 0),
    gsSP1Quadrangle(1, 27, 2, 13, 0),
    gsSP2Triangles(30, 9, 18, 0, 9, 31, 20, 0),
    gsSP1Quadrangle(5, 21, 8, 27, 0),
    gsSP2Triangles(3, 24, 12, 0, 19, 28, 3, 0),
    gsSP1Quadrangle(23, 31, 29, 27, 0),
    gsSP1Quadrangle(2, 27, 7, 15, 0),
    gsSP1Quadrangle(26, 27, 29, 28, 0),
    gsSP1Quadrangle(30, 29, 31, 9, 0),
    gsSP1Quadrangle(24, 3, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_050810[0], 5, 27),
    gsSP1Quadrangle(31, 28, 0, 17, 0),
    gsSP1Quadrangle(30, 4, 24, 14, 0),
    gsSP1Quadrangle(27, 0, 28, 29, 0),
    gsSPVertex(&gameplay_keepVtx_050860[0], 8, 24),
    gsSP1Quadrangle(31, 14, 0, 27, 0),
    gsSP1Quadrangle(27, 0, 24, 30, 0),
    gsSP1Quadrangle(26, 29, 25, 0, 0),
    gsSP1Quadrangle(25, 28, 24, 0, 0),
    gsSPVertex(&gameplay_keepVtx_0508E0[0], 32, 0),
    gsSP1Quadrangle(16, 17, 13, 10, 0),
    gsSP2Triangles(0, 2, 30, 0, 0, 30, 3, 0),
    gsSP1Quadrangle(7, 10, 11, 14, 0),
    gsSP1Quadrangle(25, 18, 21, 26, 0),
    gsSP1Quadrangle(9, 22, 19, 18, 0),
    gsSP1Quadrangle(21, 18, 20, 23, 0),
    gsSP1Quadrangle(20, 18, 19, 24, 0),
    gsSP1Quadrangle(12, 15, 11, 10, 0),
    gsSP1Triangle(10, 13, 12, 0),
    gsSP1Quadrangle(28, 5, 29, 27, 0),
    gsSP1Quadrangle(4, 27, 31, 6, 0),
    gsSP2Triangles(27, 29, 31, 0, 27, 4, 9, 0),
    gsSP1Quadrangle(7, 8, 28, 27, 0),
    gsSPVertex(&gameplay_keepVtx_050AE0[0], 28, 4),
    gsSP1Quadrangle(27, 31, 8, 4, 0),
    gsSP1Quadrangle(29, 30, 1, 0, 0),
    gsSP1Quadrangle(27, 0, 3, 28, 0),
    gsSP1Quadrangle(2, 0, 1, 25, 0),
    gsSP1Quadrangle(16, 18, 19, 23, 0),
    gsSP1Quadrangle(7, 26, 22, 18, 0),
    gsSP1Quadrangle(20, 24, 19, 18, 0),
    gsSP2Triangles(21, 20, 18, 0, 22, 21, 18, 0),
    gsSP1Quadrangle(16, 17, 13, 9, 0),
    gsSP1Quadrangle(13, 14, 12, 9, 0),
    gsSP2Triangles(9, 12, 11, 0, 9, 11, 10, 0),
    gsSP1Quadrangle(10, 15, 29, 9, 0),
    gsSPVertex(&gameplay_keepVtx_050CA0[0], 32, 0),
    gsSP1Quadrangle(8, 6, 26, 9, 0),
    gsSP1Quadrangle(26, 6, 28, 31, 0),
    gsSP1Quadrangle(4, 7, 30, 6, 0),
    gsSP1Quadrangle(17, 24, 20, 19, 0),
    gsSP2Triangles(29, 28, 6, 0, 30, 29, 6, 0),
    gsSP1Quadrangle(5, 19, 23, 27, 0),
    gsSP1Quadrangle(21, 19, 20, 25, 0),
    gsSP2Triangles(19, 21, 22, 0, 19, 22, 23, 0),
    gsSP1Quadrangle(14, 10, 13, 15, 0),
    gsSP1Quadrangle(17, 10, 14, 18, 0),
    gsSP1Quadrangle(11, 10, 8, 16, 0),
    gsSP2Triangles(11, 12, 10, 0, 12, 13, 10, 0),
    gsSPVertex(&gameplay_keepVtx_050EA0[0], 26, 6),
    gsSP1Triangle(29, 3, 0, 0),
    gsSP1Quadrangle(1, 24, 4, 0, 0),
    gsSP1Quadrangle(3, 26, 2, 0, 0),
    gsSP1Quadrangle(12, 14, 13, 30, 0),
    gsSP1Quadrangle(2, 28, 1, 0, 0),
    gsSP1Triangle(30, 13, 17, 0),
    gsSP1Quadrangle(5, 15, 31, 30, 0),
    gsSP1Quadrangle(12, 30, 31, 16, 0),
    gsSP1Quadrangle(11, 27, 19, 18, 0),
    gsSP1Quadrangle(19, 22, 20, 18, 0),
    gsSP1Quadrangle(20, 23, 21, 18, 0),
    gsSP1Quadrangle(21, 25, 10, 18, 0),
    gsSPVertex(&gameplay_keepVtx_051040[0], 32, 0),
    gsSP1Quadrangle(22, 23, 17, 16, 0),
    gsSP1Quadrangle(27, 30, 1, 0, 0),
    gsSP1Quadrangle(4, 5, 28, 26, 0),
    gsSP1Quadrangle(28, 3, 29, 26, 0),
    gsSP1Triangle(26, 29, 6, 0),
    gsSP1Quadrangle(24, 16, 19, 25, 0),
    gsSP1Quadrangle(17, 20, 18, 16, 0),
    gsSP1Quadrangle(18, 21, 19, 16, 0),
    gsSP1Quadrangle(13, 7, 8, 14, 0),
    gsSP1Quadrangle(2, 31, 27, 0, 0),
    gsSP1Quadrangle(8, 7, 9, 11, 0),
    gsSP1Quadrangle(9, 7, 10, 12, 0),
    gsSP1Triangle(15, 10, 7, 0),
    gsSPVertex(&gameplay_keepVtx_051240[0], 4, 3),
    gsSP1Quadrangle(3, 0, 1, 4, 0),
    gsSP1Quadrangle(5, 6, 2, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx gUnusedUnknownShape3RefDL[] = {
    gsSPDisplayList(gUnusedUnknownShape3DL),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_0515A8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 gUnusedUpsideDownZeldaTex[] = {
#include "assets/objects/gameplay_keep/upside_down_zelda.i8.inc.c"
};

u64 gDust1Tex[] = {
#include "assets/objects/gameplay_keep/dust_1.i8.inc.c"
};

u64 gDust2Tex[] = {
#include "assets/objects/gameplay_keep/dust_2.i8.inc.c"
};

u64 gDust3Tex[] = {
#include "assets/objects/gameplay_keep/dust_3.i8.inc.c"
};

u64 gDust4Tex[] = {
#include "assets/objects/gameplay_keep/dust_4.i8.inc.c"
};

u64 gDust5Tex[] = {
#include "assets/objects/gameplay_keep/dust_5.i8.inc.c"
};

u64 gDust6Tex[] = {
#include "assets/objects/gameplay_keep/dust_6.i8.inc.c"
};

u64 gDust7Tex[] = {
#include "assets/objects/gameplay_keep/dust_7.i8.inc.c"
};

u64 gDust8Tex[] = {
#include "assets/objects/gameplay_keep/dust_8.i8.inc.c"
};

u64 gCircleGlowLTex[] = {
#include "assets/objects/gameplay_keep/circle_glow_l.i8.inc.c"
};

u64 gCircleGlowRTex[] = {
#include "assets/objects/gameplay_keep/circle_glow_r.i8.inc.c"
};

u64 gCircleGlowSLTex[] = {
#include "assets/objects/gameplay_keep/circle_glow_sl.i8.inc.c"
};

u64 gCircleGlowSRTex[] = {
#include "assets/objects/gameplay_keep/circle_glow_sr.i8.inc.c"
};

u64 gEffBubble1Tex[] = {
#include "assets/objects/gameplay_keep/eff_bubble_1.i8.inc.c"
};

u64 gEffBubble2Tex[] = {
#include "assets/objects/gameplay_keep/eff_bubble_2.i8.inc.c"
};

u64 gEffSpark1Tex[] = {
#include "assets/objects/gameplay_keep/eff_spark_1.i4.inc.c"
};

u64 gEffSpark2Tex[] = {
#include "assets/objects/gameplay_keep/eff_spark_2.i4.inc.c"
};

u64 gEffSpark3Tex[] = {
#include "assets/objects/gameplay_keep/eff_spark_3.i4.inc.c"
};

u64 gEffSpark4Tex[] = {
#include "assets/objects/gameplay_keep/eff_spark_4.i4.inc.c"
};

/******* Added data *******/

static Vtx gameplay_keepVtx_0153C0[4] = {
    VTX(985, 69, 271, 853, 671, 255, 255, 255, 255),
    VTX(905, -85, -305, 251, 626, 255, 255, 255, 255),
    VTX(1413, 10, 62, 728, 205, 255, 255, 255, 255),
    VTX(-548, 2, -8, 318, 2127, 255, 255, 255, 255),
};

Gfx gFairyWing1DL[] = {
    gsDPPipeSync(),
    gsSPGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR, G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnusedFairyWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xAF),
    gsSPVertex(&gameplay_keepVtx_0153C0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Vtx gameplay_keepVtx_015488[4] = {
    VTX(985, -69, 269, 853, 671, 255, 255, 255, 255),
    VTX(905, 85, -306, 251, 626, 255, 255, 255, 255),
    VTX(1413, -10, 61, 728, 205, 255, 255, 255, 255),
    VTX(-548, -2, -9, 318, 2127, 255, 255, 255, 255),
};

Gfx gFairyWing2DL[] = {
    gsDPPipeSync(),
    gsSPGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR, G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnusedFairyWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xAF),
    gsSPVertex(&gameplay_keepVtx_015488[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Vtx gameplay_keepVtx_015550[4] = {
    VTX(513, 47, 185, 853, 671, 255, 255, 255, 255),
    VTX(473, -58, -209, 251, 626, 255, 255, 255, 255),
    VTX(726, 7, 42, 728, 205, 255, 255, 255, 255),
    VTX(-100, 1, -5, 318, 2127, 255, 255, 255, 255),
};

Gfx gFairyWing3DL[] = {
    gsDPPipeSync(),
    gsSPGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR, G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnusedFairyWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xAF),
    gsSPVertex(&gameplay_keepVtx_015550[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

static Vtx gameplay_keepVtx_015618[4] = {
    VTX(513, -47, 184, 853, 671, 255, 255, 255, 255),
    VTX(473, 58, -255, 251, 626, 255, 255, 255, 255),
    VTX(726, -7, 41, 728, 205, 255, 255, 255, 255),
    VTX(-100, -1, -6, 318, 2127, 255, 255, 255, 255),
};

Gfx gFairyWing4DL[] = {
    gsDPPipeSync(),
    gsSPGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR, G_FOG | G_LIGHTING),
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gUnusedFairyWingTex, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 64, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, 5, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_ZB_CLD_SURF, G_RM_ZB_CLD_SURF2),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xAF),
    gsSPVertex(&gameplay_keepVtx_015618[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
};

u64 gDekuDungeonDoorTex[] = {
#include "assets/objects/gameplay_keep/deku_dungeon_door.rgb5a1.inc.c"
};

Gfx gDekuDoorDL[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuDungeonDoorTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 3, 6, 0, 3, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 3, 6, 0, 3, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, COMBINED, 0, PRIMITIVE, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&gameplay_keepVtx_049F20[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSPVertex(&gameplay_keepVtx_049F60[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPVertex(&gameplay_keepVtx_049FA0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 gDekuBossDoorTex[] = {
#include "assets/objects/gameplay_keep/deku_boss_door.rgb5a1.inc.c"
};

Gfx gDekuBossDoorFrameDL[] = {
    gsDPPipeSync(),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuBossDoorTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00EBB0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 1, 5, 0, 4, 2, 1, 0),
    gsSP2Triangles(0, 6, 3, 0, 0, 7, 6, 0),
    gsSP2Triangles(6, 4, 5, 0, 6, 7, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx gDekuBossDoorLeftDL[] = {
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuBossDoorTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00E770[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(K5, K5, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 187, 187, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E7B0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 53, 53, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E810[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 174, 174, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E850[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 93, 93, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E890[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 134, 134, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E910[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPDisplayList(gDekuBossDoorFrameDL),
    gsSPEndDisplayList(),
}; 

Gfx gDekuBossDoorRightDL[] = {
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, gDekuBossDoorTex),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 1, 6, 0, 1, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 2047, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 1, 6, 0, 1, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 252),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, TEXEL0, 0, PRIMITIVE, 0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 170, 170, 170, 255),
    gsSPVertex(&gameplay_keepVtx_00E990[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, 0, G_OFF),
    gsDPSetCombineLERP(K5, K5, 0, PRIMITIVE, 0, 0, 0, PRIMITIVE,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 187, 187, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00E9D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 0, 4, 5, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 53, 53, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EA30[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 174, 174, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EA70[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 93, 93, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EAB0[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 134, 134, 0, 255),
    gsSPVertex(&gameplay_keepVtx_00EB30[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPDisplayList(gDekuBossDoorFrameDL),
    gsSPEndDisplayList(),
}; 

#include "gSignDl.c"

#include "gDodongoJaw.c"

#include "gHookshotTarget.c"

#include "gSignRectDL.c"

#include "gBombHandleDL.c"

static Vtx object_landmineVtx_000AF8[30];
static Vtx object_landmineVtx_000CD8[30];
static Vtx object_landmineVtx_000EB8[24];
static Vtx object_landmineVtx_001170[30];
static Vtx object_landmineVtx_001350[29];
static Vtx object_landmineVtx_001520[9];
static Vtx object_landmineVtx_0016E0[4];

u64 object_landmineTex_000000[] = {
#include "assets/objects/gameplay_keep/object_landmineTex_000000.ci8.inc.c"
};

u64 object_landmineTex_000100[] = {
#include "assets/objects/gameplay_keep/object_landmineTex_000100.ci8.inc.c"
};

u64 object_landmineTex_000900[] = {
#include "assets/objects/gameplay_keep/object_landmineTex_000900.ci8.inc.c"
};

u64 object_landmineTex_000980[] = {
#include "assets/objects/gameplay_keep/object_landmineTex_000980.rgb5a1.inc.c"
};

u64 object_landmineTex_000A38[] = {
#include "assets/objects/gameplay_keep/object_landmineTex_000A38.rgb5a1.inc.c"
};

u64 object_landmineTex_000A58[] = {
#include "assets/objects/gameplay_keep/object_landmineTex_000A58.rgb5a1.inc.c"
};

Vtx gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_vtx_0[84] = {
	{{{-200, 1400, 0},0, {0, 512},{0xAC, 0x2A, 0x55, 0xFE}}},
	{{{0, 1400, 200},0, {256, 512},{0xAC, 0x2A, 0x55, 0xFE}}},
	{{{0, 1800, 0},0, {256, 0},{0xAC, 0x2A, 0x55, 0xFE}}},
	{{{0, 1400, -200},0, {0, 512},{0xAC, 0x2C, 0xAC, 0xFE}}},
	{{{-200, 1400, 0},0, {256, 512},{0xAC, 0x2C, 0xAC, 0xFE}}},
	{{{0, 1800, 0},0, {256, 0},{0xAC, 0x2C, 0xAC, 0xFE}}},
	{{{0, 1400, 200},0, {0, 512},{0x55, 0x29, 0x55, 0xFE}}},
	{{{200, 1400, 0},0, {256, 512},{0x55, 0x29, 0x55, 0xFE}}},
	{{{0, 1800, 0},0, {256, 0},{0x55, 0x29, 0x55, 0xFE}}},
	{{{200, 1400, 0},0, {0, 512},{0x55, 0x2A, 0xAC, 0xFE}}},
	{{{0, 1400, -200},0, {256, 512},{0x55, 0x2A, 0xAC, 0xFE}}},
	{{{0, 1800, 0},0, {256, 0},{0x55, 0x2A, 0xAC, 0xFE}}},
	{{{-700, 800, 156},0, {0, 512},{0xD8, 0xC, 0x78, 0xFE}}},
	{{{-602, 1095, 156},0, {256, 512},{0xD8, 0xC, 0x78, 0xFE}}},
	{{{-1068, 1087, 0},0, {256, 0},{0xD8, 0xC, 0x78, 0xFE}}},
	{{{-700, 800, -156},0, {0, 512},{0xB3, 0x9B, 0x0, 0xFE}}},
	{{{-700, 800, 156},0, {256, 512},{0xB3, 0x9B, 0x0, 0xFE}}},
	{{{-1068, 1087, 0},0, {256, 0},{0xB3, 0x9B, 0x0, 0xFE}}},
	{{{-602, 1095, 156},0, {0, 512},{0xFC, 0x7F, 0x0, 0xFE}}},
	{{{-602, 1095, -156},0, {256, 512},{0xFC, 0x7F, 0x0, 0xFE}}},
	{{{-1068, 1087, 0},0, {256, 0},{0xFC, 0x7F, 0x0, 0xFE}}},
	{{{-602, 1095, -156},0, {0, 512},{0xD8, 0xC, 0x88, 0xFE}}},
	{{{-700, 800, -156},0, {256, 512},{0xD8, 0xC, 0x88, 0xFE}}},
	{{{-1068, 1087, 0},0, {256, 0},{0xD8, 0xC, 0x88, 0xFE}}},
	{{{602, 1095, 156},0, {0, 512},{0x28, 0xC, 0x78, 0xFE}}},
	{{{700, 800, 156},0, {256, 512},{0x28, 0xC, 0x78, 0xFE}}},
	{{{1068, 1087, 0},0, {256, 0},{0x28, 0xC, 0x78, 0xFE}}},
	{{{602, 1095, -156},0, {0, 512},{0x4, 0x7F, 0x0, 0xFE}}},
	{{{602, 1095, 156},0, {256, 512},{0x4, 0x7F, 0x0, 0xFE}}},
	{{{1068, 1087, 0},0, {256, 0},{0x4, 0x7F, 0x0, 0xFE}}},
	{{{700, 800, 156},0, {0, 512},{0x4D, 0x9B, 0x0, 0xFE}}},
	{{{700, 800, -156},0, {256, 512},{0x4D, 0x9B, 0x0, 0xFE}}},
	{{{1068, 1087, 0},0, {256, 0},{0x4D, 0x9B, 0x0, 0xFE}}},
	{{{700, 800, -156},0, {0, 512},{0x28, 0xC, 0x88, 0xFE}}},
	{{{602, 1095, -156},0, {256, 512},{0x28, 0xC, 0x88, 0xFE}}},
	{{{1068, 1087, 0},0, {256, 0},{0x28, 0xC, 0x88, 0xFE}}},
	{{{-215, 800, 684},0, {0, 512},{0x54, 0xC, 0x5F, 0xFE}}},
	{{{-166, 1095, 599},0, {256, 512},{0x54, 0xC, 0x5F, 0xFE}}},
	{{{-534, 1087, 925},0, {256, 0},{0x54, 0xC, 0x5F, 0xFE}}},
	{{{-485, 800, 528},0, {0, 512},{0xDA, 0x9B, 0x43, 0xFE}}},
	{{{-215, 800, 684},0, {256, 512},{0xDA, 0x9B, 0x43, 0xFE}}},
	{{{-534, 1087, 925},0, {256, 0},{0xDA, 0x9B, 0x43, 0xFE}}},
	{{{-166, 1095, 599},0, {0, 512},{0xFE, 0x7F, 0x3, 0xFE}}},
	{{{-436, 1095, 443},0, {256, 512},{0xFE, 0x7F, 0x3, 0xFE}}},
	{{{-534, 1087, 925},0, {256, 0},{0xFE, 0x7F, 0x3, 0xFE}}},
	{{{-436, 1095, 443},0, {0, 512},{0x84, 0xC, 0xE7, 0xFE}}},
	{{{-485, 800, 528},0, {256, 512},{0x84, 0xC, 0xE7, 0xFE}}},
	{{{-534, 1087, 925},0, {256, 0},{0x84, 0xC, 0xE7, 0xFE}}},
	{{{436, 1095, -443},0, {0, 512},{0x7C, 0xC, 0x19, 0xFE}}},
	{{{485, 800, -528},0, {256, 512},{0x7C, 0xC, 0x19, 0xFE}}},
	{{{534, 1087, -925},0, {256, 0},{0x7C, 0xC, 0x19, 0xFE}}},
	{{{166, 1095, -599},0, {0, 512},{0x2, 0x7F, 0xFD, 0xFE}}},
	{{{436, 1095, -443},0, {256, 512},{0x2, 0x7F, 0xFD, 0xFE}}},
	{{{534, 1087, -925},0, {256, 0},{0x2, 0x7F, 0xFD, 0xFE}}},
	{{{485, 800, -528},0, {0, 512},{0x26, 0x9B, 0xBD, 0xFE}}},
	{{{215, 800, -684},0, {256, 512},{0x26, 0x9B, 0xBD, 0xFE}}},
	{{{534, 1087, -925},0, {256, 0},{0x26, 0x9B, 0xBD, 0xFE}}},
	{{{215, 800, -684},0, {0, 512},{0xAC, 0xC, 0xA1, 0xFE}}},
	{{{166, 1095, -599},0, {256, 512},{0xAC, 0xC, 0xA1, 0xFE}}},
	{{{534, 1087, -925},0, {256, 0},{0xAC, 0xC, 0xA1, 0xFE}}},
	{{{485, 800, 528},0, {0, 512},{0x7C, 0xC, 0xE7, 0xFE}}},
	{{{436, 1095, 443},0, {256, 512},{0x7C, 0xC, 0xE7, 0xFE}}},
	{{{534, 1087, 925},0, {256, 0},{0x7C, 0xC, 0xE7, 0xFE}}},
	{{{215, 800, 684},0, {0, 512},{0x26, 0x9B, 0x43, 0xFE}}},
	{{{485, 800, 528},0, {256, 512},{0x26, 0x9B, 0x43, 0xFE}}},
	{{{534, 1087, 925},0, {256, 0},{0x26, 0x9B, 0x43, 0xFE}}},
	{{{436, 1095, 443},0, {0, 512},{0x2, 0x7F, 0x3, 0xFE}}},
	{{{166, 1095, 599},0, {256, 512},{0x2, 0x7F, 0x3, 0xFE}}},
	{{{534, 1087, 925},0, {256, 0},{0x2, 0x7F, 0x3, 0xFE}}},
	{{{166, 1095, 599},0, {0, 512},{0xAC, 0xC, 0x5F, 0xFE}}},
	{{{215, 800, 684},0, {256, 512},{0xAC, 0xC, 0x5F, 0xFE}}},
	{{{534, 1087, 925},0, {256, 0},{0xAC, 0xC, 0x5F, 0xFE}}},
	{{{-166, 1095, -599},0, {0, 512},{0x54, 0xC, 0xA1, 0xFE}}},
	{{{-215, 800, -684},0, {256, 512},{0x54, 0xC, 0xA1, 0xFE}}},
	{{{-534, 1087, -925},0, {256, 0},{0x54, 0xC, 0xA1, 0xFE}}},
	{{{-436, 1095, -443},0, {0, 512},{0xFE, 0x7F, 0xFD, 0xFE}}},
	{{{-166, 1095, -599},0, {256, 512},{0xFE, 0x7F, 0xFD, 0xFE}}},
	{{{-534, 1087, -925},0, {256, 0},{0xFE, 0x7F, 0xFD, 0xFE}}},
	{{{-215, 800, -684},0, {0, 512},{0xDA, 0x9B, 0xBD, 0xFE}}},
	{{{-485, 800, -528},0, {256, 512},{0xDA, 0x9B, 0xBD, 0xFE}}},
	{{{-534, 1087, -925},0, {256, 0},{0xDA, 0x9B, 0xBD, 0xFE}}},
	{{{-485, 800, -528},0, {0, 512},{0x84, 0xC, 0x19, 0xFE}}},
	{{{-436, 1095, -443},0, {256, 512},{0x84, 0xC, 0x19, 0xFE}}},
	{{{-534, 1087, -925},0, {256, 0},{0x84, 0xC, 0x19, 0xFE}}},
};

Gfx gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_vtx_0 + 15, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_vtx_0 + 30, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_vtx_0 + 45, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_vtx_0 + 60, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSP1Triangle(9, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSPVertex(gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_vtx_0 + 75, 9, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(3, 4, 5, 0),
	gsSP1Triangle(6, 7, 8, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gLandMineSphere004_f3d_material_004_layerOpaque[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_landmineTex_000900),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 2048),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 1, 0, 0, 0, 2, 4, 0, 0, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 60),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_landmineTex_000A58),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1,
                       COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING | G_CLIPPING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
	gsSPEndDisplayList(),
};

Gfx gLandMineSphere004DL[] = {
	gsSPDisplayList(mat_gLandMineSphere004_f3d_material_004_layerOpaque),
	gsSPDisplayList(gLandMineSphere004_gLandMineSphere004_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

static Vtx object_landmineVtx_001170[30] = {
    VTX(8, 5, 0, 1022, -3, 86, 75, 53, 255),
    VTX(5, 3, 8, 1536, 256, 86, 75, 53, 255),
    VTX(9, 3, 0, 1022, 256, 86, 75, 53, 255),
    VTX(4, 5, -6, 509, -3, 92, 65, 199, 255),
    VTX(9, 3, 0, 1022, 256, 92, 65, 199, 255),
    VTX(5, 3, -8, 509, 256, 92, 65, 199, 255),
    VTX(-4, 5, -6, 2, -3, 0, 83, 161, 255),
    VTX(5, 3, -8, 509, 256, 0, 83, 161, 255),
    VTX(-5, 3, -8, 2, 256, 0, 83, 161, 255),
    VTX(-9, 3, 0, -510, 256, 164, 65, 199, 255),
    VTX(-4, 5, -6, 2, -3, 164, 65, 199, 255),
    VTX(-5, 3, -8, 2, 256, 164, 65, 199, 255),
    VTX(-5, 3, 8, -1024, 256, 170, 75, 53, 255),
    VTX(-8, 5, 0, -510, -3, 170, 75, 53, 255),
    VTX(-9, 3, 0, -510, 256, 170, 75, 53, 255),
    VTX(-7, 1, 0, 260, 388, 0, 127, 0, 255),
    VTX(-4, 1, 6, 525, 388, 0, 127, 0, 255),
    VTX(4, 1, 6, 525, 388, 0, 127, 0, 255),
    VTX(-5, 3, 8, -1024, 256, 175, 171, 47, 255),
    VTX(-7, 1, 0, -510, 425, 175, 171, 47, 255),
    VTX(-4, 1, 6, -1024, 425, 175, 171, 47, 255),
    VTX(-7, 1, 0, -510, 425, 175, 171, 209, 255),
    VTX(-5, 3, -8, 2, 256, 175, 171, 209, 255),
    VTX(-4, 1, -6, 2, 425, 175, 171, 209, 255),
    VTX(-5, 3, -8, 2, 256, 0, 171, 162, 255),
    VTX(4, 1, -6, 509, 425, 0, 171, 162, 255),
    VTX(-4, 1, -6, 2, 425, 0, 171, 162, 255),
    VTX(5, 3, -8, 509, 256, 81, 171, 209, 255),
    VTX(7, 1, 0, 1022, 425, 81, 171, 209, 255),
    VTX(4, 1, -6, 509, 425, 81, 171, 209, 255),
}; 

static Vtx object_landmineVtx_001350[29] = {
    VTX(7, 1, 0, 1022, 425, 81, 171, 47, 255),
    VTX(5, 3, 8, 1536, 256, 81, 171, 47, 255),
    VTX(4, 1, 6, 1536, 425, 81, 171, 47, 255),
    VTX(8, 5, 0, 1022, -3, 77, 85, 52, 255),
    VTX(4, 5, 6, 1536, -3, 77, 85, 52, 255),
    VTX(5, 3, 8, 1536, 256, 77, 85, 52, 255),
    VTX(4, 5, -6, 509, -3, 88, 76, 206, 255),
    VTX(8, 5, 0, 1022, -3, 88, 76, 206, 255),
    VTX(9, 3, 0, 1022, 256, 88, 76, 206, 255),
    VTX(-4, 5, -6, 2, -3, 0, 83, 161, 255),
    VTX(4, 5, -6, 509, -3, 0, 83, 161, 255),
    VTX(5, 3, -8, 509, 256, 0, 83, 161, 255),
    VTX(-9, 3, 0, -510, 256, 168, 76, 206, 255),
    VTX(-8, 5, 0, -510, -3, 168, 76, 206, 255),
    VTX(-4, 5, -6, 2, -3, 168, 76, 206, 255),
    VTX(-5, 3, 8, -1024, 256, 179, 85, 52, 255),
    VTX(-4, 5, 6, -1024, -3, 179, 85, 52, 255),
    VTX(-8, 5, 0, -510, -3, 179, 85, 52, 255),
    VTX(4, 1, 6, 525, 388, 0, 127, 0, 255),
    VTX(7, 1, 0, 260, 388, 0, 127, 0, 255),
    VTX(-7, 1, 0, 260, 388, 0, 127, 0, 255),
    VTX(4, 1, -6, -4, 388, 0, 127, 0, 255),
    VTX(-4, 1, -6, -4, 388, 0, 127, 0, 255),
    VTX(-5, 3, 8, -1024, 256, 182, 164, 45, 255),
    VTX(-9, 3, 0, -510, 256, 182, 164, 45, 255),
    VTX(-7, 1, 0, -510, 425, 182, 164, 45, 255),
    VTX(-7, 1, 0, -510, 425, 182, 164, 211, 255),
    VTX(-9, 3, 0, -510, 256, 182, 164, 211, 255),
    VTX(-5, 3, -8, 2, 256, 182, 164, 211, 255),
}; 

static Vtx object_landmineVtx_001520[9] = {
    VTX(-5, 3, -8, 2, 256, 0, 171, 162, 255),
    VTX(5, 3, -8, 509, 256, 0, 171, 162, 255),
    VTX(4, 1, -6, 509, 425, 0, 171, 162, 255),
    VTX(5, 3, -8, 509, 256, 74, 164, 211, 255),
    VTX(9, 3, 0, 1022, 256, 74, 164, 211, 255),
    VTX(7, 1, 0, 1022, 425, 74, 164, 211, 255),
    VTX(7, 1, 0, 1022, 425, 74, 164, 45, 255),
    VTX(9, 3, 0, 1022, 256, 74, 164, 45, 255),
    VTX(5, 3, 8, 1536, 256, 74, 164, 45, 255),
}; 

Gfx gLandMineSphereDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_RGBA16),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_CI, G_IM_SIZ_16b, 1, object_landmineTex_000000),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 127, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_CI, G_IM_SIZ_8b, 2, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_landmineTex_000980),
    gsDPTileSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_4b, 0, 256, 7, 0, 0, 0, 0, 0, 0, 0),
    gsDPLoadSync(),
    gsDPLoadTLUTCmd(7, 255),
    gsDPPipeSync(),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1,
                       COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR | G_CULL_BACK),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_CLIPPING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_landmineVtx_001170[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&object_landmineVtx_001350[0], 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 19, 21, 20, 0),
    gsSP2Triangles(21, 22, 20, 0, 23, 24, 25, 0),
    gsSP1Triangle(26, 27, 28, 0),
    gsSPVertex(&object_landmineVtx_001520[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_landmineVtx_0016E0[4] = {
    VTX(8, 14, 0, 2, 36, 0, 1, 130, 255),
    VTX(-8, 0, 0, 2101, 2016, 0, 1, 130, 255),
    VTX(-8, 15, 0, 2059, 36, 0, 1, 130, 255),
    VTX(8, 0, 0, -67, 2016, 0, 1, 130, 255),
}; 

Gfx gLandMinePlaneDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(gBombBodyTex, G_IM_FMT_IA, G_IM_SIZ_8b, 64, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | 
                         G_TX_WRAP, 6, 6, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(1, 0, PRIMITIVE, TEXEL0, 0, 0, 0, TEXEL0, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetEnvColor(0, 0, 0, 255),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPVertex(&object_landmineVtx_0016E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

u64 WaistBagTexture_ia16[] = {
	0xbcb7bdb7bdbccbc6, 0xbdc2c5c3c4c4c6c6, 0xc8cecfd3c5b1b4b9, 0xbec1c6bec1c3b7bc, 0xa4b4bbafb3b4c2c1, 0xbebdbebdbdbebfbc, 0xb9bfcabebea5a9a5, 0xaaa09aa0b0b7aaac, 
	0xa1a79d9aacb9c1b6, 0xb4b6bbb8b8b8b8a9, 0xa4a9a6959881898b, 0x958e8f8e9d9a9aa5, 0xb9bebbb9bebebbb9, 0xb0b6b7afabafb7ac, 0xa9b4b6b1a998a2a5, 0xb1b4abb4b4afa9b1, 
	0xb3b4b1aaa6a7abb1, 0xa9a8a9acaeabaeb1, 0xbfc8c5c3c0a7acbc, 0xc1beaebeb4aaaeac, 0xb6b7c3bcb6b4b4af, 0xb1a5a1acb4b5b5bb, 0xc1c8c6bebbaaa9b7, 0xbebeb4bcbbbeacb9, 
	0xb1b1b8b1aea5b7c1, 0xc1adaea59f9e9a9b, 0x94949a95a795a0af, 0xbeb9a9b1b9b7a7af, 0xbbb9b6b4afaaafb4, 0xb2bdc1b6b0b3b1a4, 0xa3aab0acac8e8fa0, 0x9aa5a5b1c1c6b0bc, 
	0x9a95939385849aa2, 0xa0aab6b7a8aac0c0, 0xbec9cecbcbb7aaaf, 0xabafa6a7b1aa9a98, 0xc2c3bcb7aeafc6d3, 0xcfc8cbbcb6b1a6aa, 0xb0bcc3c1bdb4b3be, 0xc7c1b0b7c0c1bdc3, 
	0xd4d3dfd8d2d0dad8, 0xc6c6cfc3c7cbc9c8, 0xc1cbcec6c1aaafb4, 0xbcbcb4bccbd3cbd8, 0xa6a5aca79a9da5a2, 0x8fa0ada5b6b7b5ae, 0xa8b1a79da79d9da0, 0x9da59895a0a59dac, 
	0xc1c3c2b9a6a5afa9, 0xa2a9aca09fa1aab5, 0xc1c7c8c3bdb4aeb1, 0xaebcb6b4bcb7b3be, 0xc7c1c0c1b4a7bcbf, 0xb2b1b2b3b8b8b7b6, 0xb5b4b7b9bbbeb3b7, 0xbbc8c1becbcbc5c8, 
	0xc1c6c2beb1aab3b6, 0xb1b9c0bfb9b0abab, 0xa9aab2bebeb1aebe, 0xb8c3c7c6d5d0c6c6, 0xa5a5a09a8e819094, 0x8f949a96a1acbbbd, 0xc2bdc3c2bbafa6aa, 0xabb7abb1afa09da0, 
	0xb8c1b1aaaeaca9b7, 0xbdb7c0afacb3abae, 0xa7afaea89d9a9dac, 0xa9aa97a5a4acacb9, 0xc1c3c0b9b8b9bec6, 0xc0b9cbcbc0bfb3b6, 0xb2b0b4b9b9beb9be, 0xb4b9aeaca5b1abc1, 
	0xbeb9b7afa0a5abac, 0xaebcc3c1b9b4b1b2, 0xb4bac5c7c7bebcc6, 0xbcc3bbc1bdbcb8c3, 0xb7aab3b7acaaa09d, 0x9aa2a5a5a4a9b2b5, 0xb1b5b8b2aca09fa0, 0xa6aaa1acb0b9bbb9, 
	0xdfd3cdceb6acaea5, 0xa6a7b1a5a09dacb7, 0xb6adafbdc4c0bec5, 0xc6cbb0bcbbc8cdce, 0xe2d5cac8c2bebdb4, 0xabacb0acafa7a7b2, 0xb3babebfbfc0bdca, 0xd1d0b6bec0c8c1d3, 
	0xd3d3cac8c6c1c1c3, 0xbec6cbd0c8cccdc9, 0xc8c9cbcbcccac8c9, 0xc8c6c7d0cbd3c2cb, 0xc7cbcdd3cac8d3d3, 0xcedddacbcbcfcbc7, 0xc4bdc2c6c8c5c8c3, 0xc4a5a7b7b1c1c0c1, 
	0xa5a0a9a29d9aa09d, 0x928b938e8f8b9ca3, 0xa6aaa7b1b2a9a0a4, 0x9d9a939aa4afa6a2, 0x8a8e8f8984899290, 0x9497999e9b9ca2a8, 0xabaec1beb4aaa7ac, 0xa5a0a5a5a2a58d90, 
	0xc2c6c5c8c3dac8c8, 0xc7a9a4a39e9fa19b, 0x999eb4b1a9a2a6aa, 0xb0afa9bcc1c6c3c1, 0xafaaabb1a6a7a2a0, 0xa2b3b9b7b6b4bac2, 0xc7cbd4dfd5cbcbce, 0xcfd3bec1b8b9abaf, 
	0xa79da2a0aca7a6a5, 0xa2abb1b1b5b0acaa, 0xa9a5b0b7b9b4a9b7, 0xb9b4b6b1a9a7a0a7, 0xaeb1a59a98988f8e, 0x838f8083757e9ea3, 0xaeafc1cecac3bebe, 0xbebebdc3bbb9b0af, 
	0x98a29d9a8f8e8e84, 0x8d99a1a99aa0a4a7, 0xa5a5a7b1b0afaca7, 0x959a9a9d8fa08a8e, 0xabb7bcc3b8c1c1c3, 0xbcbb868a898b8782, 0x828b8f9595988d8e, 0x9aa09da7a2a5a2a0, 
	
};

Vtx gLinkChildWaistBagDL_bombbag_mesh_layer_Opaque_vtx_cull[8] = {
	{{{124, -487, -859},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{124, -487, -267},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{124, 274, -267},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{124, 274, -859},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{829, -487, -859},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{829, -487, -267},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{829, 274, -267},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{829, 274, -859},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gLinkChildWaistBagDL_bombbag_mesh_layer_Opaque_vtx_0[25] = {
	{{{124, -108, -471},0, {-16, 93},{0x82, 0x0, 0x12, 0xFF}}},
	{{{183, 161, -488},0, {-365, 248},{0xA1, 0x53, 0xF, 0xFF}}},
	{{{150, -107, -593},0, {-16, 296},{0x85, 0x0, 0xDF, 0xFF}}},
	{{{183, -377, -492},0, {333, 248},{0xA1, 0xAC, 0xD, 0xFF}}},
	{{{201, -110, -267},0, {1008, 270},{0xB5, 0x0, 0x67, 0xFF}}},
	{{{516, -431, -361},0, {794, 481},{0x17, 0x99, 0x47, 0xFF}}},
	{{{449, -487, -658},0, {375, 477},{0xF7, 0x83, 0xEB, 0xFF}}},
	{{{417, -374, -798},0, {171, 480},{0xDC, 0xAB, 0xA9, 0xFF}}},
	{{{711, -375, -716},0, {333, 716},{0x53, 0xA9, 0xD5, 0xFF}}},
	{{{590, -105, -859},0, {-16, 605},{0x38, 0x0, 0x8E, 0xFF}}},
	{{{819, -106, -739},0, {-16, 880},{0x73, 0x0, 0xCA, 0xFF}}},
	{{{711, 163, -712},0, {-365, 716},{0x53, 0x57, 0xD6, 0xFF}}},
	{{{829, -108, -430},0, {-1040, 698},{0x75, 0x0, 0x32, 0xFF}}},
	{{{829, -108, -430},0, {1008, 698},{0x75, 0x0, 0x32, 0xFF}}},
	{{{529, -109, -301},0, {1008, 481},{0x22, 0x0, 0x7A, 0xFF}}},
	{{{516, 213, -356},0, {1222, 481},{0x17, 0x66, 0x49, 0xFF}}},
	{{{711, 163, -712},0, {1683, 716},{0x53, 0x57, 0xD6, 0xFF}}},
	{{{449, 274, -652},0, {1641, 477},{0xF7, 0x7D, 0xED, 0xFF}}},
	{{{417, 163, -793},0, {1845, 480},{0xDC, 0x57, 0xAA, 0xFF}}},
	{{{590, -105, -859},0, {2032, 605},{0x38, 0x0, 0x8E, 0xFF}}},
	{{{403, -105, -854},0, {2032, 481},{0xC8, 0x0, 0x8E, 0xFF}}},
	{{{417, -374, -798},0, {2219, 480},{0xDC, 0xAB, 0xA9, 0xFF}}},
	{{{150, -107, -593},0, {2032, 296},{0x85, 0x0, 0xDF, 0xFF}}},
	{{{183, -377, -492},0, {2381, 248},{0xA1, 0xAC, 0xD, 0xFF}}},
	{{{183, 161, -488},0, {1683, 248},{0xA1, 0x53, 0xF, 0xFF}}},
};

Gfx gLinkChildWaistBagDL_bombbag_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gLinkChildWaistBagDL_bombbag_mesh_layer_Opaque_vtx_0 + 0, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 3, 5, 4, 0),
	gsSP2Triangles(3, 6, 5, 0, 3, 7, 6, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 13, 8, 0),
	gsSP2Triangles(13, 5, 8, 0, 13, 14, 5, 0),
	gsSP2Triangles(13, 15, 14, 0, 16, 15, 13, 0),
	gsSP2Triangles(16, 17, 15, 0, 16, 18, 17, 0),
	gsSP2Triangles(19, 18, 16, 0, 19, 20, 18, 0),
	gsSP2Triangles(19, 21, 20, 0, 22, 20, 21, 0),
	gsSP2Triangles(22, 21, 23, 0, 22, 18, 20, 0),
	gsSP2Triangles(24, 18, 22, 0, 24, 17, 18, 0),
	gsSP2Triangles(24, 15, 17, 0, 4, 15, 24, 0),
	gsSP2Triangles(0, 4, 24, 0, 4, 14, 15, 0),
	gsSP2Triangles(4, 5, 14, 0, 8, 5, 6, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gLinkChildWaistBagDL_f3d_material_001_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b_LOAD_BLOCK, 1, WaistBagTexture_ia16),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsDPSetPrimColor(0, 0, 97, 96, 53, 255),
	gsSPEndDisplayList(),
};

Gfx gLinkChildWaistBagDL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gLinkChildWaistBagDL_bombbag_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gLinkChildWaistBagDL_f3d_material_001_layerOpaque),
	gsSPDisplayList(gLinkChildWaistBagDL_bombbag_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

Vtx gLinkBoyWaistBagDL_bombbag_mesh_layer_Opaque_vtx_cull[8] = {
	{{{43, -485, -1061},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{43, -485, -346},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{43, 465, -346},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{43, 465, -1061},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{931, -485, -1061},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{931, -485, -346},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{931, 465, -346},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{931, 465, -1061},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gLinkBoyWaistBagDL_bombbag_mesh_layer_Opaque_vtx_0[25] = {
	{{{43, -7, -607},0, {-16, 93},{0x81, 0x0, 0x9, 0xFF}}},
	{{{117, 329, -632},0, {-365, 248},{0xA1, 0x54, 0x6, 0xFF}}},
	{{{85, -10, -757},0, {-16, 296},{0x88, 0x0, 0xD7, 0xFF}}},
	{{{118, -343, -620},0, {333, 248},{0xA0, 0xAD, 0x9, 0xFF}}},
	{{{122, -2, -346},0, {1008, 270},{0xAF, 0x1, 0x61, 0xFF}}},
	{{{521, -405, -428},0, {794, 481},{0x12, 0x9C, 0x4C, 0xFF}}},
	{{{462, -485, -800},0, {375, 477},{0xF8, 0x83, 0xEE, 0xFF}}},
	{{{434, -349, -981},0, {171, 480},{0xE2, 0xA8, 0xA9, 0xFF}}},
	{{{794, -347, -855},0, {333, 716},{0x55, 0xA9, 0xDD, 0xFF}}},
	{{{655, -15, -1052},0, {-16, 605},{0x40, 0xFE, 0x92, 0xFF}}},
	{{{931, -11, -883},0, {-16, 880},{0x76, 0x0, 0xD2, 0xFF}}},
	{{{793, 325, -868},0, {-365, 716},{0x55, 0x56, 0xDA, 0xFF}}},
	{{{918, -4, -498},0, {-1040, 698},{0x71, 0x1, 0x3A, 0xFF}}},
	{{{918, -4, -498},0, {1008, 698},{0x71, 0x1, 0x3A, 0xFF}}},
	{{{533, -2, -361},0, {1008, 481},{0x1A, 0x2, 0x7C, 0xFF}}},
	{{{521, 399, -443},0, {1222, 481},{0x12, 0x67, 0x48, 0xFF}}},
	{{{793, 325, -868},0, {1683, 716},{0x55, 0x56, 0xDA, 0xFF}}},
	{{{462, 465, -818},0, {1641, 477},{0xF8, 0x7D, 0xE9, 0xFF}}},
	{{{434, 322, -994},0, {1845, 480},{0xE2, 0x54, 0xA5, 0xFF}}},
	{{{655, -15, -1052},0, {2032, 605},{0x40, 0xFE, 0x92, 0xFF}}},
	{{{422, -15, -1061},0, {2032, 481},{0xD0, 0xFE, 0x8A, 0xFF}}},
	{{{434, -349, -981},0, {2219, 480},{0xE2, 0xA8, 0xA9, 0xFF}}},
	{{{85, -10, -757},0, {2032, 296},{0x88, 0x0, 0xD7, 0xFF}}},
	{{{118, -343, -620},0, {2381, 248},{0xA0, 0xAD, 0x9, 0xFF}}},
	{{{117, 329, -632},0, {1683, 248},{0xA1, 0x54, 0x6, 0xFF}}},
};

Gfx gLinkBoyWaistBagDL_bombbag_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gLinkBoyWaistBagDL_bombbag_mesh_layer_Opaque_vtx_0 + 0, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
	gsSP2Triangles(0, 3, 4, 0, 3, 5, 4, 0),
	gsSP2Triangles(3, 6, 5, 0, 3, 7, 6, 0),
	gsSP2Triangles(8, 6, 7, 0, 8, 7, 9, 0),
	gsSP2Triangles(10, 8, 9, 0, 10, 9, 11, 0),
	gsSP2Triangles(10, 11, 12, 0, 10, 13, 8, 0),
	gsSP2Triangles(13, 5, 8, 0, 13, 14, 5, 0),
	gsSP2Triangles(13, 15, 14, 0, 16, 15, 13, 0),
	gsSP2Triangles(16, 17, 15, 0, 16, 18, 17, 0),
	gsSP2Triangles(19, 18, 16, 0, 19, 20, 18, 0),
	gsSP2Triangles(19, 21, 20, 0, 22, 20, 21, 0),
	gsSP2Triangles(22, 21, 23, 0, 22, 18, 20, 0),
	gsSP2Triangles(24, 18, 22, 0, 24, 17, 18, 0),
	gsSP2Triangles(24, 15, 17, 0, 4, 15, 24, 0),
	gsSP2Triangles(0, 4, 24, 0, 4, 14, 15, 0),
	gsSP2Triangles(4, 5, 14, 0, 8, 5, 6, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gLinkBoyWaistBagDL_f3d_material_001_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_IA, G_IM_SIZ_16b_LOAD_BLOCK, 1, WaistBagTexture_ia16),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 511, 512),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_IA, G_IM_SIZ_16b, 4, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 4, 0),
	gsDPSetTileSize(0, 0, 0, 60, 124),
	gsDPSetPrimColor(0, 0, 97, 96, 53, 255),
	gsSPEndDisplayList(),
};

Gfx gLinkBoyWaistBagDL[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gLinkBoyWaistBagDL_bombbag_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPMatrix(0x0D000000, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gLinkBoyWaistBagDL_f3d_material_001_layerOpaque),
	gsSPDisplayList(gLinkBoyWaistBagDL_bombbag_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

// custom animations
// spin charge up animations
extern u16 gPlayerSpinCharge_FrameData[];
LinkAnimationHeader gPlayerSpinCharge = { { 40 }, gPlayerSpinCharge_FrameData }; 

extern u16 gPlayerSpinCharge2_FrameData[];
LinkAnimationHeader gPlayerSpinCharge2 = { { 40 }, gPlayerSpinCharge2_FrameData }; 

extern u16 gPlayer2HSpinCharge_FrameData[];
LinkAnimationHeader gPlayer2HSpinCharge = { { 45 }, gPlayer2HSpinCharge_FrameData }; 

// moving slash animations
extern u16 gPlayerMoveSwordSlashAnimFrameData[];
LinkAnimationHeader gPlayerMoveSwordSlashAnim = { { 19 }, gPlayerMoveSwordSlashAnimFrameData }; 

extern u16 gPlayerMoveStickSlashAnimFrameData[];
LinkAnimationHeader gPlayerMoveStickSlashAnim = { { 21 }, gPlayerMoveStickSlashAnimFrameData }; 

// reed whistle animation
extern u16 gPlayerReedWhistleAnimFrameData[];
LinkAnimationHeader gPlayerReedWhistleAnim = { { 52 }, gPlayerReedWhistleAnimFrameData }; 

// ocarina animations
extern u16 gPlayerOcarinaSwingAnimFrameData[];
LinkAnimationHeader gPlayerOcarinaSwingAnim = { { 68 }, gPlayerOcarinaSwingAnimFrameData }; 

extern u16 gPlayerOcarinaStartAnimFrameData[];
LinkAnimationHeader gPlayerOcarinaStartAnim = { { 12 }, gPlayerOcarinaStartAnimFrameData }; 

extern u16 gPlayerOcarinaEndAnimFrameData[];
LinkAnimationHeader gPlayerOcarinaEndAnim = { { 12 }, gPlayerOcarinaEndAnimFrameData }; 

// free turn animations
extern u16 gPlayer180TurnLeftAnimFrameData[];
LinkAnimationHeader gPlayer180TurnLeftAnim = { { 14 }, gPlayer180TurnLeftAnimFrameData }; 

extern u16 gPlayer180TurnRightAnimFrameData[];
LinkAnimationHeader gPlayer180TurnRightAnim = { { 14 }, gPlayer180TurnRightAnimFrameData }; 

extern u16 gPlayer90TurnLeftAnimFrameData[];
LinkAnimationHeader gPlayer90TurnLeftAnim = { { 14 }, gPlayer90TurnLeftAnimFrameData }; 

extern u16 gPlayer90TurnRightAnimFrameData[];
LinkAnimationHeader gPlayer90TurnRightAnim = { { 14 }, gPlayer90TurnRightAnimFrameData }; 

// armed turn animations
extern u16 gPlayer180TurnLeftArmedAnimFrameData[];
LinkAnimationHeader gPlayer180TurnLeftArmedAnim = { { 14 }, gPlayer180TurnLeftArmedAnimFrameData }; 

extern u16 gPlayer180TurnRightArmedAnimFrameData[];
LinkAnimationHeader gPlayer180TurnRightArmedAnim = { { 14 }, gPlayer180TurnRightArmedAnimFrameData }; 

extern u16 gPlayer90TurnLeftArmedAnimFrameData[];
LinkAnimationHeader gPlayer90TurnLeftArmedAnim = { { 14 }, gPlayer90TurnLeftArmedAnimFrameData }; 

extern u16 gPlayer90TurnRightArmedAnimFrameData[];
LinkAnimationHeader gPlayer90TurnRightArmedAnim = { { 14 }, gPlayer90TurnRightArmedAnimFrameData }; 

// carry turn animations
extern u16 gPlayer180TurnLeftCarryAnimFrameData[];
LinkAnimationHeader gPlayer180TurnLeftCarryAnim = { { 14 }, gPlayer180TurnLeftCarryAnimFrameData }; 

extern u16 gPlayer180TurnRightCarryAnimFrameData[];
LinkAnimationHeader gPlayer180TurnRightCarryAnim = { { 14 }, gPlayer180TurnRightCarryAnimFrameData }; 

extern u16 gPlayer90TurnLeftCarryAnimFrameData[];
LinkAnimationHeader gPlayer90TurnLeftCarryAnim = { { 14 }, gPlayer90TurnLeftCarryAnimFrameData }; 

extern u16 gPlayer90TurnRightCarryAnimFrameData[];
LinkAnimationHeader gPlayer90TurnRightCarryAnim = { { 14 }, gPlayer90TurnRightCarryAnimFrameData }; 

// twohanded armed turn animations
extern u16 gPlayer180TurnLeft2HArmedAnimFrameData[];
LinkAnimationHeader gPlayer180TurnLeft2HArmedAnim = { { 14 }, gPlayer180TurnLeft2HArmedAnimFrameData }; 

extern u16 gPlayer180TurnRight2HArmedAnimFrameData[];
LinkAnimationHeader gPlayer180TurnRight2HArmedAnim = { { 14 }, gPlayer180TurnRight2HArmedAnimFrameData }; 

extern u16 gPlayer90TurnLeft2HArmedAnimFrameData[];
LinkAnimationHeader gPlayer90TurnLeft2HArmedAnim = { { 14 }, gPlayer90TurnLeft2HArmedAnimFrameData }; 

extern u16 gPlayer90TurnRight2HArmedAnimFrameData[];
LinkAnimationHeader gPlayer90TurnRight2HArmedAnim = { { 14 }, gPlayer90TurnRight2HArmedAnimFrameData }; 

// beta getitem animation
extern u16 gPlayerBetaGetItemAAnimFrameData[];
LinkAnimationHeader gPlayerBetaGetItemAAnim = { { 22 }, gPlayerBetaGetItemAAnimFrameData }; 

extern u16 gPlayerBetaGetItemBAnimFrameData[];
LinkAnimationHeader gPlayerBetaGetItemBAnim = { { 22 }, gPlayerBetaGetItemBAnimFrameData }; 

// beta backjump animation
extern u16 gPlayerBetaBackjumpAnimFrameData[];
LinkAnimationHeader gPlayerBetaBackjumpAnim = { { 17 }, gPlayerBetaBackjumpAnimFrameData }; 

// Bombiwa
u64 gBombiwa_dk_spia_dk_spiaTex_0005A8_rgb5a1_rgba16[] = {
	0x72d3835793db7b15, 0x6a915a4f7b158355, 0x83577ad57ad57b15, 0x8b57939993998b57, 0x9399a461aca5def9, 0xd635939972d38b57, 0x8b5772d372d3b4eb, 0x6a936a9372d372d3, 
	0x8b9983576a917b15, 0x72d36a916a918357, 0x83178b598b578b59, 0x939993db939993dd, 0x935983178317b4a7, 0xdeb7c5ad831793db, 0x939b8b5793ddbd2d, 0x7b1583178b598b57, 
	0x935b8317628f7b17, 0x835772d36a917b17, 0x83178b598b998b59, 0x93dd941d83178357, 0x8b5972d383179bdd, 0xa4a5bd6bce339c1f, 0x941d9399bd2d939b, 0x8357939b9c1f939b, 
	0x7b1783156a917293, 0x7ad57ad56a9372d3, 0x7b1783158b9993db, 0x9c61a46393997ad5, 0x8b578315939d93dd, 0x939b93dbd6b7b529, 0x93db8b57b4eb939b, 0x939993db9bdf9bdd, 
	0x93dd8b9b72d36a93, 0x7b156a915a0f8357, 0x8355831793dd9c1f, 0x941d9c1f9c1d8b59, 0x9c1f7ad58b578b57, 0x8315939b83579c1f, 0xbd2bce35bd2d939b, 0x8b999c1f939b82d5, 
	0x8b59aca583176a91, 0x7b1572d362516a93, 0x7b15835783577b15, 0x8b598b598b99939b, 0x9c2193dd83579399, 0x9bdd9c1f8b59939b, 0xa463b529a46593db, 0x8b5793999bdd8315, 
	0x8b578b5793df628f, 0x7b17835772d36a91, 0x83578317939b8b99, 0x83159399939b939b, 0x93db9bdf8b5993dd, 0x939983577ad5aca7, 0x7ad5a4a3c56d8b57, 0x8b57835593db8315, 
	0x72d38357941f72d3, 0x72937ad57ad56a93, 0x72d37b177b158b99, 0x93db9c61a4639c1f, 0x93dd941f9c1f9c63, 0x7b15935b93d9b4eb, 0x8b998357a4a3941f, 0x9bdd93db939b8b59, 
	0x8b59835972d58b99, 0x835772d36a4f72d3, 0x6a91939d8b599399, 0x9c1f941d941d9c1f, 0x93df93dd9c1f9c61, 0x941d939d93dda4a5, 0x939b93995a0d7b15, 0xa4a393999399a4a3, 
	0x83178b59939b6251, 0x4a0d41cb73156a91, 0x939b8b998b597b15, 0x6251835793998b57, 0x93dba4619c619c1f, 0x93db835793db9399, 0xc56f7b158315520d, 0x9c21a4619c1faca3, 
	0x6a918357939b7b15, 0x83576a916b138b99, 0x83177ad372d36a91, 0x72d372938b599399, 0x8357941f9c63941f, 0x93db8b99941d93db, 0xc56f9c217ad37b15, 0x72d3a4a3a4639bdd, 
	0x6a915a4f8b598359, 0x831772d572d36a91, 0x945f520d49cb624f, 0x72d35a4f6a938357, 0x939b9c639c61939b, 0x93db93db9c1f9c1f, 0x93ddcdf383579c1f, 0x939b941dbd6b9c61, 
	0x8357624f520d6a91, 0x7b578b5783577293, 0x3989398931476291, 0x7b157b1772d38357, 0x8b5793df93998357, 0x93db9c61939b93db, 0x8b57a46393db9399, 0x835793d9aca5cdf1, 
	0xbd2d8b5972d36251, 0x5a51939d83178359, 0x624f629183593949, 0x7b1583176a918317, 0x93dda4219c1f8b57, 0x93999c5f8b5793db, 0x9397a463939b7b15, 0x72d3729172d3aca5, 
	0xaca9cdf3831772d3, 0x6a939c21835772d3, 0x6a938357aca56a93, 0x520d6a93520d7b15, 0x8b5993998b579399, 0x93998b9993999c21, 0x93dba465939b939b, 0x8b596a936a938b59, 
	0x8315d6b7bd2d72d3, 0x6a937b1593db72d5, 0x6a518b5993db9c61, 0x520b625183158315, 0x9399939d939b939b, 0x939b83578b57939b, 0x9399941da4a3ace5, 0x941d935b93dfbd2d, 
	0x5a0d7ad593dd6291, 0x7b157b177b158b59, 0x8359624f72d5939b, 0x72d55a0f62517ad5, 0x8b5993db8b577b15, 0x939d9c1f93998315, 0x93ddaca5939b8359, 0xcdb3d679bd6f9c21, 
	0x831583158b59aca7, 0x7b1772d38357939b, 0x93db6251520d520f, 0x93e172d55a0f6251, 0x83178b577ad57ad5, 0x93598b597b158b57, 0x93998357628f7b17, 0xd67783576a919399, 
	0x7ad383176a91cdf3, 0xc5f372d36a938317, 0x83179c236a937293, 0xb4ed8b5772d36251, 0x8b577b1772d38b17, 0x8b178b1772939359, 0x939972d36a9193e5, 0x625141897b158b59, 
	0x7b138b575a0d4189, 0x8b9bb52d5a0f6251, 0x49cb6a9372d5624f, 0x93e17b577ad56251, 0x8b598b598b598317, 0x8b579bdd93599359, 0xb4a7b4e972d551cd, 0x51cb8b1793dd6a93, 
	0x6a918b57831572d3, 0x72d3c571bd6f8b5b, 0x628f5a0f6ad3a465, 0x5a0f62918b595a0f, 0x939993dd941f939b, 0x8b57939993e1aca9, 0x9be1939d72d3624f, 0x7291835572d39397, 
	0x5a0f624f7291624f, 0x7b15b4ed8b59a4a7, 0x835983577ad58359, 0x7ad58b9b72d37ad5, 0x939b941d9c1f93dd, 0x9c1dacabb4ef939d, 0x7ad59c1f7b1551cb, 0x6a91629141897ad3, 
	0x6a916a916a91624f, 0x7291aca9bd718359, 0xb52d8b5b8357939d, 0x72d3939b83579399, 0x939b9c21aca7a4a7, 0xb4edc5f5aca59397, 0x8b57939b939b6a91, 0x72936a515a0d5a4f, 
	0x6a9172917ad58315, 0x72916a9183597315, 0x9bdfbd2fa4a5941d, 0x83177ad3624f935d, 0xbd2da4abb52face9, 0xb4e99c5f93db8b59, 0x93dd7b1572d37293, 0x7ad56a9172d35a4f, 
	0x939b7ad372d3624f, 0x6a917ad372939c5f, 0x939b9c61e6f9deb7, 0xa4a78b5939895a0f, 0x9c21941f7b55aca5, 0x93dd72d38b999c61, 0x93db72d372d3624f, 0x72d3624f5a4d8b57, 
	0x5a0f6a917b158317, 0x624f6a9172936a91, 0x7a9182d5939daca5, 0xe73bdeb793e18357, 0x8b99a463941f9c21, 0x93db7ad55a4f941f, 0x93df7b157ad36251, 0x83178317624f7b15, 
	0x6a916a917b158317, 0x7293624f6a917293, 0x82d9620f5a0f7291, 0x7b15bd29cdf5c56f, 0x93db83979ca19c1f, 0x941d8357398993dd, 0xa4a393db835772d3, 0x72d583177ad59c21, 
	0x5a4f625172d38b99, 0x83177ad55a0f6a93, 0x625151cd520d6a91, 0x7b138b5993ddaca9, 0xd6357b1593db93db, 0x8b999c1f624f5a4f, 0x83179c63939b9399, 0x5a0f72d393dd72d3, 
	0x49cb5a0f72d36a91, 0x945f520d624f5a0d, 0x7ad37293520f624f, 0x83156a9183159399, 0x935dbd2d9c5f8bd9, 0x72d393dd9c216a91, 0x49cd93df9c1f6291, 0x72d3aca5624f72d3, 
	0x83178b5783577293, 0x398939898317624f, 0x6a9172936a9172d1, 0x7ad3624f624f7b15, 0x939bbd2fdeb7945f, 0x72d58b999c1f7293, 0x5a4f5a0f418b6251, 0x83597ad362518317, 
	0x8317939d83178359, 0x624f7b1583177293, 0x624f6a9172936a91, 0x6a91624f624f7ad3, 0x93db93ddef7bcdef, 0x72d5945f93db6251, 0x8397624f72d59c65, 0x72d5835772d372d5, 
	0x520d9c21835772d3, 0x6a9372d383157293, 0x6a916a916a91624f, 0x6a5172d1624f520d, 0x7ad5941bb527deb7, 0xc56f8b9b93dd9c61, 0x83578b578b59c5b1, 0x5a0f625193995a0f, 
	
};

Vtx gBombiwa_bombiwa_mesh_layer_Opaque_vtx_cull[8] = {
	{{{-489, -123, -416},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-489, -123, 514},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-489, 773, 514},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{-489, 773, -416},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{489, -123, -416},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{489, -123, 514},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{489, 773, 514},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
	{{{489, 773, -416},0, {-16, -16},{0x0, 0x0, 0x0, 0x0}}},
};

Vtx gBombiwa_bombiwa_mesh_layer_Opaque_vtx_0[25] = {
	{{{-244, 773, 77},0, {610, -58},{0xBF, 0x6B, 0x15, 0xFE}}},
	{{{189, 773, 173},0, {610, 509},{0x2D, 0x6C, 0x31, 0xFE}}},
	{{{55, 773, -250},0, {1101, 225},{0x20, 0x6A, 0xC2, 0xFE}}},
	{{{302, 387, -416},0, {2142, 521},{0x48, 0x10, 0x99, 0xFE}}},
	{{{385, 0, -125},0, {1938, 1016},{0x59, 0xAA, 0xE4, 0xFE}}},
	{{{0, 0, -405},0, {2347, 1016},{0x0, 0xA9, 0xA3, 0xFE}}},
	{{{489, 387, 159},0, {1733, 521},{0x78, 0x1E, 0x1B, 0xFE}}},
	{{{55, 773, -250},0, {2276, 26},{0x20, 0x6A, 0xC2, 0xFE}}},
	{{{189, 773, 173},0, {1594, 26},{0x2D, 0x6C, 0x31, 0xFE}}},
	{{{0, 387, 514},0, {1323, 521},{0xFD, 0x1D, 0x7C, 0xFE}}},
	{{{-244, 773, 77},0, {911, 26},{0xBF, 0x6B, 0x15, 0xFE}}},
	{{{-489, 387, 159},0, {914, 521},{0x88, 0xE, 0x27, 0xFE}}},
	{{{-302, 387, -416},0, {504, 521},{0xB4, 0x1C, 0x9E, 0xFE}}},
	{{{55, 773, -250},0, {228, 26},{0x20, 0x6A, 0xC2, 0xFE}}},
	{{{302, 387, -416},0, {94, 521},{0x48, 0x10, 0x99, 0xFE}}},
	{{{0, 0, -405},0, {299, 1016},{0x0, 0xA9, 0xA3, 0xFE}}},
	{{{-385, 0, -125},0, {709, 1016},{0xA7, 0xAA, 0xE4, 0xFE}}},
	{{{-238, 0, 327},0, {1118, 1016},{0xC9, 0xAB, 0x4D, 0xFE}}},
	{{{238, 0, 327},0, {1528, 1016},{0x37, 0xAB, 0x4D, 0xFE}}},
	{{{0, 0, -405},0, {957, 703},{0x0, 0xA9, 0xA3, 0xFE}}},
	{{{385, 0, -125},0, {855, 168},{0x59, 0xAA, 0xE4, 0xFE}}},
	{{{0, -123, 31},0, {506, 490},{0x0, 0x81, 0x2, 0xFE}}},
	{{{238, 0, 327},0, {315, 99},{0x37, 0xAB, 0x4D, 0xFE}}},
	{{{-238, 0, 327},0, {83, 591},{0xC9, 0xAB, 0x4D, 0xFE}}},
	{{{-385, 0, -125},0, {480, 965},{0xA7, 0xAA, 0xE4, 0xFE}}},
};

Gfx gBombiwa_bombiwa_mesh_layer_Opaque_tri_0[] = {
	gsSPVertex(gBombiwa_bombiwa_mesh_layer_Opaque_vtx_0 + 0, 25, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 4, 3, 0, 3, 7, 6, 0),
	gsSP2Triangles(7, 8, 6, 0, 6, 8, 9, 0),
	gsSP2Triangles(10, 9, 8, 0, 11, 9, 10, 0),
	gsSP2Triangles(12, 11, 10, 0, 13, 12, 10, 0),
	gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
	gsSP2Triangles(15, 16, 12, 0, 12, 16, 11, 0),
	gsSP2Triangles(16, 17, 11, 0, 11, 17, 9, 0),
	gsSP2Triangles(9, 17, 18, 0, 9, 18, 6, 0),
	gsSP2Triangles(6, 18, 4, 0, 19, 20, 21, 0),
	gsSP2Triangles(20, 22, 21, 0, 22, 23, 21, 0),
	gsSP2Triangles(23, 24, 21, 0, 24, 19, 21, 0),
	gsSPEndDisplayList(),
};

Gfx mat_gBombiwa_f3d_material_001_layerOpaque[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
	gsSPSetGeometryMode(G_ZBUFFER | G_SHADE | G_CULL_BACK | G_FOG | G_LIGHTING | G_SHADING_SMOOTH),
	gsSPClearGeometryMode(G_CULL_FRONT | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
	gsSPSetOtherMode(G_SETOTHERMODE_H, 4, 20, G_AD_NOISE | G_CD_MAGICSQ | G_CK_NONE | G_TC_FILT | G_TF_BILERP | G_TL_TILE | G_TD_CLAMP | G_TP_PERSP | G_CYC_2CYCLE | G_PM_NPRIMITIVE),
	gsSPSetOtherMode(G_SETOTHERMODE_L, 0, 32, G_AC_NONE | G_ZS_PIXEL | G_RM_FOG_SHADE_A | G_RM_AA_ZB_OPA_SURF2),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureLUT(G_TT_NONE),
	gsDPTileSync(),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, gBombiwa_dk_spia_dk_spiaTex_0005A8_rgb5a1_rgba16),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPPipeSync(),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsDPSetPrimColor(0, 0, 254, 254, 254, 255),
	gsSPEndDisplayList(),
};

Gfx gBombiwa[] = {
	gsSPClearGeometryMode(G_LIGHTING),
	gsSPVertex(gBombiwa_bombiwa_mesh_layer_Opaque_vtx_cull + 0, 8, 0),
	gsSPCullDisplayList(0, 7),
	gsSPDisplayList(mat_gBombiwa_f3d_material_001_layerOpaque),
	gsSPDisplayList(gBombiwa_bombiwa_mesh_layer_Opaque_tri_0),
	gsSPEndDisplayList(),
};

