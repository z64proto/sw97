#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_dnk.h"

static s16 sDntStageSpitAnimFrameData[364];
static JointIndex sDntStageSpitAnimJointIndices[11];
static s16 sDntStageHideAnimFrameData[94];
static JointIndex sDntStageHideAnimJointIndices[11];
static s16 sDntStageDanceAnimFrameData[292];
static JointIndex sDntStageDanceAnimJointIndices[11];
static s16 sDntStageUnburrowAnimFrameData[184];
static JointIndex sDntStageUnburrowAnimJointIndices[11];
static s16 sDntStageUpAnimFrameData[318];
static JointIndex sDntStageUpAnimJointIndices[11];
static Vtx sDntStageSkelVtx_000B80[6];
static Vtx sDntStageSkelVtx_000BE0[10];
static Vtx sDntStageSkelVtx_000C80[10];
static Vtx sDntStageSkelVtx_000D20[5];
static Vtx sDntStageSkelVtx_000D70[28];
static Vtx sDntStageSkelVtx_000F30[6];
static Vtx sDntStageSkelVtx_000F90[6];
static Vtx sDntStageSkelVtx_000FF0[4];
static Vtx sDntStageSkelVtx_001030[4];
static Vtx sDntStageSkelVtx_001070[7];
static Vtx sDntStageSkelVtx_0010E0[7];
static Vtx object_dnkVtx_001860[3];
static Vtx object_dnkVtx_001920[15];
static Vtx object_dnkVtx_001A10[15];
static void* sDntStageSkelLimbs[10];
static s16 sDntStageWaitAnimFrameData[186];
static JointIndex sDntStageWaitAnimJointIndices[11];
static s16 sDntStageWalkAnimFrameData[132];
static JointIndex sDntStageWalkAnimJointIndices[11];

static s16 sDntStageSpitAnimFrameData[364] = {
    0x0000, 0xFEF7, 0x8000, 0xFEF7, 0xFEF7, 0xFEF7, 0xFEF7, 0xFEF7, 0xFEF7, 0xFEF7, 0xFF74, 0xFFF1, 0xFFF1, 0xFFD1, 
    0xFFAB, 0xFF81, 0xFF58, 0xFF33, 0xFF14, 0xFEFF, 0xFEF7, 0x0000, 0xFFE1, 0xFF93, 0xFF2D, 0xFEC4, 0xFE70, 0xFE70, 
    0xFF79, 0x0081, 0x0081, 0x0071, 0x005D, 0x0048, 0x0032, 0x001F, 0x000F, 0x0004, 0x0000, 0x0000, 0xFEAD, 0xFB58, 
    0xF6F7, 0xF27E, 0xEEE3, 0xEEE3, 0x03BD, 0x1896, 0x1896, 0x1570, 0x11AC, 0x0D9B, 0x0990, 0x05DC, 0x02D1, 0x00C2, 
    0x0000, 0x0000, 0x019B, 0x05A7, 0x0AF9, 0x1067, 0x14C7, 0x14C7, 0xFD5A, 0xE5ED, 0xE5ED, 0xE943, 0xED42, 0xF192, 
    0xF5DC, 0xF9C9, 0xFD03, 0xFF32, 0x0000, 0x0000, 0xF8E4, 0xF2AD, 0xFC86, 0x0725, 0x048B, 0x0000, 0xFF8C, 0xFF44, 
    0xFF21, 0xFF1C, 0xFF2F, 0xFF52, 0xFF7E, 0xFFAC, 0xFFD6, 0xFFF4, 0x0000, 0x0000, 0xFFDC, 0x0000, 0x0141, 0x023B, 
    0x0141, 0x0000, 0xFFDC, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0017, 0x0000, 0xFF32, 0xFE92, 0xFD36, 0x0000, 0x11F7, 0x1FC8, 0x1EB1, 0x1BC5, 0x178A, 0x1287, 0x0D41, 0x083D, 
    0x0403, 0x0117, 0x0000, 0x1060, 0x26A4, 0x3986, 0x1848, 0xF548, 0xFDFF, 0x1060, 0x1060, 0x004F, 0xF373, 0xF173, 
    0xF197, 0xF35C, 0xF63D, 0xF9B9, 0x0134, 0x0B4E, 0x1060, 0x0000, 0xFF23, 0x0000, 0x07C4, 0x8DCF, 0x0798, 0x0000, 
    0xFEC6, 0xFF63, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x7FA0, 0x8000, 
    0x81F5, 0xF9FB, 0x9157, 0x96D1, 0x8883, 0x73D0, 0x681D, 0x678D, 0x6983, 0x6D3D, 0x71FB, 0x76FC, 0x7B7D, 0x7EBF, 
    0x8000, 0xEFA0, 0x00E9, 0x0CF6, 0xE895, 0x45C4, 0xD59C, 0xEFA0, 0xFB6D, 0x03B5, 0x06D5, 0x05D6, 0x0335, 0xFF7D, 
    0xFB3B, 0xF6F8, 0xF341, 0xF0A0, 0xEFA0, 0x4000, 0x3778, 0x31BC, 0x4089, 0x5657, 0x54DB, 0x4000, 0x40AB, 0x40C8, 
    0x3F40, 0x3E2B, 0x3E68, 0x3FA6, 0x4104, 0x41D5, 0x41B3, 0x40B1, 0x4000, 0xEB96, 0xEDF2, 0xF116, 0xE756, 0xEBB0, 
    0xE0E9, 0xDE24, 0x00F9, 0x1E85, 0x1EC0, 0x188D, 0x0EEF, 0x04E3, 0xFD3D, 0xF761, 0xF1A2, 0xED49, 0xEB96, 0x4000, 
    0x52BF, 0x6069, 0x3F10, 0x1B0F, 0x241C, 0x4000, 0x4209, 0x3F7D, 0x3D46, 0x3B09, 0x395F, 0x3828, 0x3794, 0x38C5, 
    0x3B8B, 0x3E8B, 0x4000, 0x0000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x0000, 0x4000, 0x3EB5, 0x3B75, 0x372E, 0x32D0, 0x2F4C, 0x2F4C, 
    0x36F1, 0x3FC9, 0x3B26, 0x3A32, 0x3A33, 0x3AE7, 0x3C0E, 0x3D66, 0x3EAC, 0x3FA0, 0x4000, 0x0000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x0000, 0x4000, 0xF5DE, 0xEC1C, 0xB9F1, 0xA5E2, 0xB287, 0xC000, 0xC374, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x3FFF, 0x4000, 0xC000, 0xC8C4, 0xD06A, 0xCECD, 0xDC31, 0xDDA1, 0xDBB5, 0xCD59, 0xC11D, 
    0xC11D, 0xC0F8, 0xC0CD, 0xC09E, 0xC06F, 0xC044, 0xC021, 0xC009, 0xC000, 0x4000, 0x89E9, 0x9284, 0xC679, 0xDF5B, 
    0xD18C, 0xC000, 0xBC5B, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4001, 0x4000, 0x0000, 
    
}; 

static JointIndex sDntStageSpitAnimJointIndices[11] = {
    { 0x0000, 0x0003, 0x0015 },
    { 0x0027, 0x0000, 0x0000 },
    { 0x0039, 0x0000, 0x004B },
    { 0x005D, 0x006F, 0x0081 },
    { 0x0093, 0x00A5, 0x00B7 },
    { 0x00C9, 0x00DB, 0x00ED },
    { 0x00FF, 0x0111, 0x0123 },
    { 0x0135, 0x0147, 0x0159 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
}; 

AnimationHeader gDntStageSpitAnim = { { 18 }, sDntStageSpitAnimFrameData, sDntStageSpitAnimJointIndices, 3 }; 

static u8 unaccounted_00032C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sDntStageHideAnimFrameData[94] = {
    0x0000, 0xFEF7, 0x8000, 0x4000, 0xFEF7, 0x025F, 0xFC14, 0xF60A, 0xF4F1, 0xF57E, 0xF60A, 0xF60A, 0xF60A, 0xF60A, 
    0x0000, 0xF639, 0xFACE, 0x0000, 0x00D9, 0x0116, 0x00EB, 0x008B, 0x002B, 0x0000, 0x11C7, 0x0A7E, 0x0000, 0xFE8C, 
    0xFEA8, 0xFEED, 0xFF46, 0xFFA0, 0xFFE4, 0x0000, 0x1060, 0x1950, 0x29AD, 0x31C9, 0x1E62, 0x0A28, 0x170F, 0x2630, 
    0x1BAB, 0x1060, 0xEFA0, 0xE929, 0xDD9F, 0xD8CF, 0xEB02, 0xFC10, 0xEBA7, 0xD998, 0xE3D5, 0xEFA0, 0xEB96, 0xF21F, 
    0xFE2E, 0x0471, 0xF6F5, 0xE98D, 0xF64B, 0x036C, 0xF7A2, 0xEB96, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xE17E, 0xE9E9, 0xE64A, 0xD75F, 0xC384, 0xD1DD, 0xE55B, 0xF38D, 0xF90B, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 
}; 

static JointIndex sDntStageHideAnimJointIndices[11] = {
    { 0x0000, 0x0004, 0x0000 },
    { 0x000E, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0018 },
    { 0x0000, 0x0000, 0x0022 },
    { 0x0000, 0x0002, 0x002C },
    { 0x0003, 0x0036, 0x0003 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0040, 0x004A, 0x0054 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
}; 

AnimationHeader gDntStageHideAnim = { { 10 }, sDntStageHideAnimFrameData, sDntStageHideAnimJointIndices, 4 }; 

static s16 sDntStageDanceAnimFrameData[292] = {
    0x0000, 0xFEF7, 0x4000, 0xFEF7, 0x00DB, 0x02C0, 0x00DB, 0xFEF7, 0x00DB, 0x02C0, 0x00DB, 0xFEF7, 0x00DB, 0x02C0, 
    0x00DB, 0xFEF7, 0x00DB, 0x02C0, 0x00DB, 0x0000, 0x0239, 0x071C, 0x0C00, 0x0E39, 0x0CAB, 0x08E4, 0x0439, 0x0000, 
    0xFBC7, 0xF71C, 0xF355, 0xF1C7, 0xF400, 0xF8E4, 0xFDC7, 0x0000, 0x04C8, 0x0F4C, 0x19D0, 0x1E98, 0x19BB, 0x0F14, 
    0x0489, 0x0000, 0x0592, 0x1143, 0x1CD7, 0x2216, 0x1CC2, 0x110B, 0x0553, 0x0000, 0xFE17, 0xF9E5, 0xF5B2, 0xF3C9, 
    0xF5F2, 0xFA90, 0xFED8, 0x0000, 0xFBA9, 0xF3DC, 0xEC64, 0xE90F, 0xECA5, 0xF488, 0xFC6A, 0x1060, 0xFF45, 0xF33F, 
    0x18B0, 0x390A, 0x1625, 0xF33F, 0x1625, 0x390A, 0x1625, 0xF33F, 0x1625, 0x390A, 0x191E, 0xF33F, 0xFB5F, 0x0000, 
    0xFAEB, 0xEFBE, 0xE490, 0xDF7C, 0xE506, 0xF0F8, 0xFC4D, 0x0000, 0xF677, 0xE4AF, 0xD384, 0x4BD3, 0xD3FA, 0xE5E9, 
    0xF7D9, 0x8000, 0x862D, 0x93C2, 0xA158, 0xA785, 0xA204, 0x958E, 0x8831, 0x8000, 0x7FAC, 0x839E, 0x8875, 0xF52E, 
    0x8921, 0x8569, 0x81B1, 0xEFA0, 0xFF18, 0x0A79, 0xEAAC, 0xCEF4, 0xECB7, 0x0A79, 0xECB7, 0xCEF4, 0xECB7, 0x0A79, 
    0xECB7, 0x4EF4, 0xEAAC, 0x0A79, 0xFF18, 0x4000, 0x45F8, 0x5296, 0x55F4, 0x41F2, 0x25B5, 0x278B, 0x36B3, 0x413A, 
    0x46DD, 0x4C2C, 0x4A90, 0x3F2D, 0x2FDE, 0x2DBB, 0x3A16, 0xEB96, 0xE769, 0xE052, 0xD4DE, 0xCCBC, 0xD5B4, 0xE272, 
    0xE73A, 0xEB9F, 0xEB23, 0xE71F, 0xDFC2, 0xDB1A, 0xE02E, 0xE86C, 0xE9A2, 0x4000, 0x3577, 0x26BE, 0x26EB, 0x3D44, 
    0x5CB8, 0x605E, 0x4FB6, 0x3D72, 0x31AC, 0x2A6B, 0x2F54, 0x3EA3, 0x53D6, 0x5C2D, 0x4A97, 0x4000, 0xC000, 0xC000, 
    0xC000, 0x4000, 0xC000, 0xC000, 0xC000, 0x4000, 0xC000, 0xC000, 0xC000, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xD739, 0xEE73, 0xD739, 0xC000, 0xD739, 0xEE73, 0xD739, 0xC000, 0xD739, 0xEE73, 0xD739, 0xC000, 0xD739, 0xEE73, 
    0xD739, 0x4000, 0xC000, 0xC000, 0xC000, 0x4000, 0xC000, 0xC000, 0xC000, 0x4000, 0xC000, 0xC000, 0xC000, 0x4000, 
    0xC000, 0xC000, 0xC000, 0x0000, 0xBCC6, 0xB89C, 0xB517, 0xB235, 0xAFF8, 0xAE5E, 0xAD68, 0xAD16, 0xAD68, 0xAE5E, 
    0xAFF8, 0xB235, 0xB517, 0xB89C, 0xBCC6, 0x0000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xC0C8, 0xC4CB, 0xC830, 0xCAF6, 
    0xCD1F, 0xCEAA, 0xCF97, 0xCFE6, 0xCF97, 0xCEAA, 0xCD1F, 0xCAF6, 0xC830, 0xC4CB, 0xC0C8, 0x0000, 
}; 

static JointIndex sDntStageDanceAnimJointIndices[11] = {
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0013 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0023, 0x0033, 0x0043 },
    { 0x0053, 0x0063, 0x0073 },
    { 0x0083, 0x0093, 0x00A3 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x00B3, 0x00C3, 0x00D3 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x00E3 },
    { 0x00F3, 0x0103, 0x0113 },
}; 

AnimationHeader gDntStageDanceAnim = { { 16 }, sDntStageDanceAnimFrameData, sDntStageDanceAnimJointIndices, 3 }; 

static u8 unaccounted_0006DC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sDntStageUnburrowAnimFrameData[184] = {
    0x0000, 0x02C4, 0x8000, 0x02C4, 0x0785, 0x1059, 0x151A, 0x13CE, 0x1078, 0x0BF5, 0x071C, 0x02CA, 0x0000, 0xF59B, 
    0xED45, 0xF877, 0x0983, 0x13F7, 0x110F, 0x07D5, 0x0090, 0x11C7, 0x1BE5, 0x2082, 0x0A7B, 0xECAA, 0xDC67, 0xE6F0, 
    0xFE9C, 0x106B, 0x0000, 0x033B, 0x0676, 0x05A6, 0x03C0, 0x0198, 0x0000, 0xFFAB, 0xFFF7, 0x0000, 0xF4F1, 0xEC2B, 
    0xF52E, 0x0367, 0x1148, 0x1943, 0x102A, 0x0157, 0x1060, 0x0842, 0x0152, 0x0694, 0x0F54, 0x1819, 0x1D67, 0x18F5, 
    0x1118, 0xEFA0, 0xFA16, 0x01F6, 0xF844, 0xE95C, 0xDB03, 0xD2FD, 0xDD84, 0xEE21, 0x4000, 0x385A, 0x23ED, 0x31C2, 
    0x3896, 0x438B, 0x4B56, 0x481C, 0x40B7, 0xEB96, 0xE28A, 0xE08E, 0xF110, 0xEF2B, 0xECF2, 0xEECC, 0xED24, 0xEB99, 
    0x4000, 0x4B64, 0x6360, 0x6058, 0x5183, 0x3837, 0x2734, 0x2EB8, 0x3E83, 0x0000, 0xC000, 0xC000, 0xC000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x38E1, 0x3497, 0x3E1E, 0x341B, 0x2749, 0x20A3, 0x2C9D, 0x3E69, 0x0000, 
    0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0xCE43, 0xCB4D, 0xCC23, 0xCCC7, 0x4B01, 
    0x49D0, 0x4C03, 0x4EBA, 0xC000, 0xD36C, 0xE487, 0xDAE6, 0xC95A, 0xC8F8, 0xD490, 0xCE44, 0xC137, 0x4000, 0xB050, 
    0xAE92, 0xAFAB, 0xB083, 0x3131, 0x3070, 0x30C4, 0x3113, 0x0000, 0xE967, 0xD538, 0xE812, 0x0669, 0x176D, 0xDDE1, 
    0xFA4C, 0x001C, 0x0000, 0x0000, 0x8000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x8000, 0x8000, 0x0000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x0000, 0x289B, 0xCD6A, 0x2F46, 0xFCD0, 0xDB2F, 0x1824, 0xF9E3, 
    0xFE80, 0x0000, 
}; 

static JointIndex sDntStageUnburrowAnimJointIndices[11] = {
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x000C },
    { 0x0000, 0x0000, 0x0015 },
    { 0x001E, 0x0027, 0x0030 },
    { 0x0000, 0x0002, 0x0039 },
    { 0x0042, 0x004B, 0x0054 },
    { 0x005D, 0x0066, 0x006F },
    { 0x0078, 0x0081, 0x008A },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0093 },
    { 0x009C, 0x00A5, 0x00AE },
}; 

AnimationHeader gDntStageUnburrowAnim = { { 9 }, sDntStageUnburrowAnimFrameData, sDntStageUnburrowAnimJointIndices, 3 }; 

static u8 unaccounted_0008A4[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sDntStageUpAnimFrameData[318] = {
    0x0000, 0xF60A, 0x8000, 0x0000, 0x0092, 0x010C, 0x001B, 0xFF3F, 0x000D, 0x00F2, 0x00C9, 0x004F, 0x0000, 0xFFF2, 
    0xFFE9, 0xFFE5, 0xFFE4, 0xFFE6, 0xFFEB, 0xFFF0, 0xFFF6, 0xFFFB, 0xFFFF, 0x0000, 0xF60A, 0xF60A, 0xF60A, 0xF60A, 
    0xF60A, 0xF60A, 0xF60A, 0xF60A, 0xF60A, 0xF60A, 0xF7AB, 0xFA71, 0xFD3E, 0xFEF7, 0xFEF7, 0xFEF7, 0xFEF7, 0xFEF7, 
    0xFEF7, 0xFEF7, 0xFEF7, 0x0000, 0xFFED, 0xFFBD, 0xFF7D, 0xFF38, 0xFEFB, 0xFED4, 0xFECD, 0xFEF5, 0xFF57, 0x0000, 
    0x0538, 0x09C7, 0x07B7, 0x03B8, 0xFF8B, 0xFCF2, 0xFCBC, 0xFDDC, 0xFF4B, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xFF95, 0xFEE4, 0xFEC0, 0x0000, 0x0407, 
    0x0A00, 0x0F6B, 0x11C7, 0x1060, 0x0A8C, 0x0630, 0x1214, 0x1C1F, 0x1003, 0x031D, 0x05B6, 0x0CD2, 0x1060, 0x0C53, 
    0x04DB, 0xFE39, 0xFCB1, 0x0653, 0x167F, 0x216C, 0x1C27, 0x1290, 0x1067, 0x1060, 0xEFA0, 0xE798, 0xE0F5, 0xEEE3, 
    0xFAC9, 0xEB97, 0xDBE9, 0xDE98, 0xE726, 0xEFA0, 0xF7D3, 0x0127, 0x0818, 0x0922, 0xFD75, 0xE95F, 0xDA04, 0xD890, 
    0xDE1C, 0xE838, 0xEFA0, 0x4000, 0x4175, 0x43EC, 0x44A2, 0x3F56, 0x3AA2, 0x3F58, 0x44BF, 0x434C, 0x4000, 0x3F5B, 
    0x3F52, 0x3F48, 0x3F42, 0x3F55, 0x3F5A, 0x3F89, 0x3FCB, 0x40FB, 0x412E, 0x4000, 0xEB96, 0xEBA2, 0xEBF0, 0xEC13, 
    0xEB99, 0xEC3F, 0xEB99, 0xEC1A, 0xEAC3, 0xEB96, 0xF595, 0xFC69, 0xF45E, 0xE7A6, 0xE100, 0xE6C1, 0xF295, 0xFC4B, 
    0xF8CF, 0xF0D0, 0xEB96, 0x4000, 0x3CF8, 0x37CA, 0x364A, 0x4162, 0x4B49, 0x415E, 0x360A, 0x397F, 0x4000, 0x4136, 
    0x4134, 0x414E, 0x415D, 0x4157, 0x4176, 0x4175, 0x407A, 0x39A9, 0x3C9C, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x095F, 0x0000, 0xBDC3, 0xBE7D, 0xDC01, 0x40DB, 0x408B, 0x40A1, 0x109B, 0xBF92, 
    0xBFB6, 0xBFC3, 0x0000, 0x4000, 0x3AEB, 0x3772, 0x3EFD, 0x49DD, 0x500E, 0x4802, 0x3D5C, 0x3D6C, 0x4000, 0x39A7, 
    0x369A, 0x4086, 0x31D5, 0x2AE0, 0x3211, 0x4027, 0x366C, 0x3757, 0x3CBC, 0x4000, 0x0000, 0x0000, 0x0000, 0x0000, 
    0x0000, 0x0000, 0x0000, 0x0000, 0x0959, 0x0000, 0xBDCA, 0xBE89, 0xDC03, 0x40CD, 0x406F, 0x4087, 0x108C, 0xBF90, 
    0xBFB8, 0xBFC5, 0x0000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0xF90B, 0xF949, 0xF9F4, 0xFAF3, 
    0xFC2D, 0xFD8A, 0xFEF1, 0x0049, 0x0179, 0x026A, 0x06AF, 0x0A6F, 0x026A, 0xE0F2, 0xCC4A, 0xE785, 0xE8B9, 0xDF96, 
    0xD1E5, 0xC570, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
}; 

static JointIndex sDntStageUpAnimJointIndices[11] = {
    { 0x0003, 0x0018, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x002D, 0x0000, 0x0042 },
    { 0x0000, 0x0000, 0x0057 },
    { 0x0000, 0x0002, 0x006C },
    { 0x0081, 0x0096, 0x00AB },
    { 0x00C0, 0x00D5, 0x00EA },
    { 0x00FF, 0x0114, 0x0129 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
}; 

AnimationHeader gDntStageUpAnim = { { 21 }, sDntStageUpAnimFrameData, sDntStageUpAnimJointIndices, 3 }; 

static Vtx sDntStageSkelVtx_000B80[6] = {
    VTX(-807, 1230, 397, -29, -122, 255, 255, 255, 255),
    VTX(-1142, 508, 522, -105, 351, 255, 255, 255, 255),
    VTX(0, 508, 1385, 628, 314, 255, 255, 255, 255),
    VTX(0, 508, 1385, 628, 314, 255, 255, 255, 255),
    VTX(1142, 508, 522, -105, 351, 255, 255, 255, 255),
    VTX(807, 1230, 397, -29, -122, 255, 255, 255, 255),
}; 

static Vtx sDntStageSkelVtx_000BE0[10] = {
    VTX(0, 709, -983, 3072, 270, 0, 67, 157, 255),
    VTX(-953, 709, 0, 1536, 270, 153, 58, 239, 255),
    VTX(0, 1592, 0, 2304, -523, 0, 119, 8, 255),
    VTX(0, 709, 793, 0, 270, 0, 45, 111, 255),
    VTX(0, 1592, 0, 768, -523, 0, 119, 8, 255),
    VTX(0, -649, -1414, 3072, 978, 0, 35, 142, 255),
    VTX(-1224, -269, 0, 1536, 978, 150, 27, 47, 255),
    VTX(0, -744, 1034, 0, 978, 0, 20, 118, 255),
    VTX(1224, -269, 0, 1536, 978, 106, 27, 47, 255),
    VTX(953, 709, 0, 1536, 270, 103, 58, 239, 255),
}; 

static Vtx sDntStageSkelVtx_000C80[10] = {
    VTX(-112, 323, -286, 289, 257, 191, 73, 187, 255),
    VTX(-112, 323, 286, 289, 257, 186, 53, 81, 255),
    VTX(828, 474, 338, -15, 280, 64, 94, 37, 255),
    VTX(828, -175, -588, -18, 87, 84, 239, 173, 255),
    VTX(2, -306, -286, 248, 38, 191, 179, 192, 255),
    VTX(828, -175, 588, -18, 87, 60, 235, 101, 255),
    VTX(2, -306, 286, 248, 38, 191, 179, 64, 255),
    VTX(828, -604, 0, -20, -29, 22, 139, 0, 255),
    VTX(-305, 9, 0, 414, 145, 138, 239, 0, 255),
    VTX(828, 474, -338, -15, 280, 49, 90, 194, 255),
}; 

static Vtx sDntStageSkelVtx_000D20[5] = {
    VTX(828, 474, 338, 224, 268, 64, 94, 37, 255),
    VTX(828, -175, 588, 295, 81, 60, 235, 101, 255),
    VTX(828, -175, -588, -39, 81, 84, 239, 173, 255),
    VTX(828, -604, 0, 128, -32, 22, 139, 0, 255),
    VTX(828, 474, -338, 32, 268, 49, 90, 194, 255),
}; 

static Vtx sDntStageSkelVtx_000D70[28] = {
    VTX(0, -118, 977, 2048, 450, 240, 169, 81, 255),
    VTX(-807, -118, 302, 1653, 450, 172, 172, 11, 255),
    VTX(0, -456, 0, 1850, 572, 0, 137, 1, 255),
    VTX(0, 508, 1290, 2048, 225, 0, 252, 119, 255),
    VTX(-1142, 508, 427, 1653, 225, 143, 250, 38, 255),
    VTX(0, 1230, 977, 2048, -34, 16, 69, 96, 255),
    VTX(-807, 1230, 302, 1653, -34, 168, 66, 46, 255),
    VTX(0, 2043, 0, 1850, -326, 0, 119, 5, 255),
    VTX(807, -118, 302, 395, 450, 75, 172, 40, 255),
    VTX(0, -118, 977, 0, 450, 240, 169, 81, 255),
    VTX(0, -456, 0, 198, 572, 0, 137, 1, 255),
    VTX(1142, 508, 427, 395, 225, 114, 253, 37, 255),
    VTX(0, 508, 1290, 0, 225, 0, 252, 119, 255),
    VTX(807, 1230, 302, 395, -34, 100, 63, 19, 255),
    VTX(0, 1230, 977, 0, -34, 16, 69, 96, 255),
    VTX(0, 2043, 0, 198, -326, 0, 119, 5, 255),
    VTX(533, -118, -790, 831, 450, 62, 169, 203, 255),
    VTX(0, -456, 0, 613, 572, 0, 137, 1, 255),
    VTX(685, 508, -1118, 845, 225, 64, 3, 155, 255),
    VTX(599, 1230, -790, 813, -34, 62, 73, 184, 255),
    VTX(0, 2043, 0, 604, -326, 0, 119, 5, 255),
    VTX(-533, -118, -790, 1217, 450, 218, 168, 185, 255),
    VTX(0, -456, 0, 1024, 572, 0, 137, 1, 255),
    VTX(-685, 508, -1118, 1203, 225, 170, 238, 175, 255),
    VTX(-599, 1230, -790, 1235, -34, 194, 68, 180, 255),
    VTX(0, 2043, 0, 1024, -326, 0, 119, 5, 255),
    VTX(0, -456, 0, 1435, 572, 0, 137, 1, 255),
    VTX(0, 2043, 0, 1444, -326, 0, 119, 5, 255),
}; 

static Vtx sDntStageSkelVtx_000F30[6] = {
    VTX(864, -187, -365, 0, 124, 10, 65, 156, 255),
    VTX(785, 388, 1, 533, 139, 17, 118, 0, 255),
    VTX(2116, -500, 0, 467, 1666, 66, 99, 0, 255),
    VTX(864, -187, 365, 1067, 154, 9, 65, 100, 255),
    VTX(-277, -48, -4, 570, -832, 211, 111, 0, 255),
    VTX(785, 388, 1, 533, 139, 17, 118, 0, 255),
}; 

static Vtx sDntStageSkelVtx_000F90[6] = {
    VTX(969, 565, 1, 533, 139, 24, 117, 255, 255),
    VTX(874, -100, 660, 1067, 154, 15, 82, 85, 255),
    VTX(2315, -1080, 0, 467, 1666, 92, 76, 0, 255),
    VTX(874, -100, -659, 0, 124, 18, 82, 171, 255),
    VTX(969, 565, 1, 533, 139, 24, 117, 255, 255),
    VTX(-117, -43, -33, 570, -832, 198, 104, 255, 255),
}; 

static Vtx sDntStageSkelVtx_000FF0[4] = {
    VTX(645, 403, -95, 0, 124, 33, 25, 112, 255),
    VTX(710, -536, 95, 1067, 154, 33, 25, 112, 255),
    VTX(2022, 23, -855, 467, 1666, 62, 24, 99, 255),
    VTX(-96, -1, 0, 570, -832, 10, 119, 0, 255),
}; 

static Vtx sDntStageSkelVtx_001030[4] = {
    VTX(710, -536, -95, 1067, 154, 33, 25, 144, 255),
    VTX(-96, -1, 0, 570, -832, 10, 119, 0, 255),
    VTX(645, 403, 95, 0, 124, 33, 25, 144, 255),
    VTX(2022, 23, 855, 467, 1666, 62, 24, 157, 255),
}; 

static Vtx sDntStageSkelVtx_001070[7] = {
    VTX(640, -411, -439, 323, 73, 23, 184, 163, 255),
    VTX(1010, -411, 0, 449, 90, 110, 209, 0, 255),
    VTX(640, -411, 439, 323, 73, 27, 218, 110, 255),
    VTX(-283, -411, 257, 9, 31, 189, 171, 51, 255),
    VTX(-283, -411, -257, 9, 31, 166, 219, 187, 255),
    VTX(870, 178, 0, 414, 297, 83, 86, 0, 255),
    VTX(-226, 164, 14, 42, 242, 192, 101, 1, 255),
}; 

static Vtx sDntStageSkelVtx_0010E0[7] = {
    VTX(640, -411, -439, 345, 79, 23, 184, 163, 255),
    VTX(870, 178, 0, 310, 220, 83, 86, 0, 255),
    VTX(1010, -411, 0, 260, 86, 110, 209, 0, 255),
    VTX(640, -411, 439, 345, 79, 27, 218, 110, 255),
    VTX(-226, 164, -14, 563, 194, 192, 101, 255, 255),
    VTX(-283, -411, -256, 559, 60, 166, 219, 187, 255),
    VTX(-283, -411, 257, 559, 60, 189, 171, 51, 255),
}; 

Gfx sDntStageSkelLimbDL_001150[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, 0x08000000),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 3, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, 2, 3, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_000B80[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_0011E0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_001BD0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_000BE0[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 1, 0),
    gsSP2Triangles(5, 6, 1, 0, 0, 5, 1, 0),
    gsSP2Triangles(6, 7, 3, 0, 1, 6, 3, 0),
    gsSP2Triangles(3, 7, 8, 0, 3, 8, 9, 0),
    gsSP2Triangles(9, 8, 5, 0, 9, 5, 0, 0),
    gsSP2Triangles(9, 4, 3, 0, 2, 9, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_001298[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_002650),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 3, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, 2, 3, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_000C80[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 0, 0),
    gsSP2Triangles(5, 2, 1, 0, 6, 4, 7, 0),
    gsSP2Triangles(7, 5, 6, 0, 8, 4, 6, 0),
    gsSP2Triangles(8, 1, 0, 0, 6, 1, 8, 0),
    gsSP2Triangles(4, 3, 7, 0, 2, 9, 0, 0),
    gsSP2Triangles(0, 4, 8, 0, 1, 6, 5, 0),
    gsSP1Triangle(0, 9, 3, 0),
    gsDPPipeSync(),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_0026D0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 3, 0, 2, 3, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 63, 1024),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 2, 0, 0, 0, 2, 3, 0, 2, 3, 0),
    gsDPSetTileSize(0, 0, 0, 28, 28),
    gsSPVertex(&sDntStageSkelVtx_000D20[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP1Triangle(2, 4, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_0013B0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_0023D0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_000D70[0], 28, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 4, 0),
    gsSP2Triangles(4, 1, 0, 0, 3, 5, 6, 0),
    gsSP2Triangles(6, 4, 3, 0, 6, 5, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 12, 0),
    gsSP2Triangles(12, 9, 8, 0, 11, 13, 14, 0),
    gsSP2Triangles(14, 12, 11, 0, 14, 13, 15, 0),
    gsSP2Triangles(16, 8, 17, 0, 16, 18, 11, 0),
    gsSP2Triangles(11, 8, 16, 0, 18, 19, 13, 0),
    gsSP2Triangles(13, 11, 18, 0, 13, 19, 20, 0),
    gsSP2Triangles(21, 16, 22, 0, 21, 23, 18, 0),
    gsSP2Triangles(16, 21, 18, 0, 18, 23, 24, 0),
    gsSP2Triangles(18, 24, 19, 0, 19, 24, 25, 0),
    gsSP2Triangles(1, 21, 26, 0, 1, 4, 23, 0),
    gsSP2Triangles(23, 21, 1, 0, 4, 6, 24, 0),
    gsSP2Triangles(24, 23, 4, 0, 24, 6, 27, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_0014B0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_001BD0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_000F30[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(0, 4, 5, 0, 4, 3, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_001548[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_001BD0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_000F90[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(4, 3, 5, 0, 4, 5, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_0015E0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_001BD0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_000FF0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_001670[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_001BD0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_001030[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_001700[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_0023D0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_001070[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 4, 0, 0, 2, 5, 6, 0),
    gsSP2Triangles(0, 4, 6, 0, 4, 3, 6, 0),
    gsSP2Triangles(6, 3, 2, 0, 6, 5, 0, 0),
    gsSP2Triangles(5, 1, 0, 0, 1, 5, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx sDntStageSkelLimbDL_0017B0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_0023D0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 0, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 0, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, 1,
                       COMBINED, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sDntStageSkelVtx_0010E0[0], 7, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsSP2Triangles(3, 1, 4, 0, 0, 5, 4, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 3, 0),
    gsSP2Triangles(4, 1, 0, 0, 0, 3, 6, 0),
    gsSP2Triangles(0, 6, 5, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dnkVtx_001860[3] = {
    VTX(-1500, -800, 0, -293, 549, 255, 255, 255, 255),
    VTX(1500, -800, 0, 805, 549, 255, 255, 255, 255),
    VTX(0, 1500, 0, 256, -293, 255, 255, 255, 255),
}; 

Gfx gDntStageNutDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, object_dnkTex_002850),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 4, 0, 2, 4, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 255, 512),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 0, 0, 0, 2, 4, 0, 2, 4, 0),
    gsDPSetTileSize(0, 0, 0, 60, 60),
    gsDPSetCombineLERP(TEXEL0, K5, PRIMITIVE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       K5, K5, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dnkVtx_001860[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_dnkVtx_001920[15] = {
    VTX(2663, 800, -865, 4713, 984, 231, 117, 8, 255),
    VTX(0, 800, -2800, 6551, 984, 0, 117, 26, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(1646, 800, 2265, 4713, 984, 241, 117, 235, 255),
    VTX(2663, 800, -865, 6551, 984, 231, 117, 8, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(-2663, 800, -865, 4713, 984, 25, 117, 8, 255),
    VTX(-1646, 800, 2265, 6551, 984, 15, 117, 235, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(-1646, 800, 2265, 6551, 984, 15, 117, 235, 255),
    VTX(1646, 800, 2265, 4713, 984, 241, 117, 235, 255),
    VTX(0, 172, 0, 5632, -277, 0, 120, 0, 255),
    VTX(0, 800, -2800, 6551, 984, 0, 117, 26, 255),
    VTX(-2663, 800, -865, 4713, 984, 25, 117, 8, 255),
}; 

static Vtx object_dnkVtx_001A10[15] = {
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
    VTX(0, 0, -3500, 6551, 984, 0, 118, 240, 255),
    VTX(-3329, 0, -1082, 4713, 984, 241, 118, 251, 255),
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
    VTX(-2057, 0, 2832, 6551, 984, 247, 118, 13, 255),
    VTX(2057, 0, 2832, 4713, 984, 9, 118, 13, 255),
    VTX(-3329, 0, -1082, 4713, 984, 241, 118, 251, 255),
    VTX(-2057, 0, 2832, 6551, 984, 247, 118, 13, 255),
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
    VTX(2057, 0, 2832, 4713, 984, 9, 118, 13, 255),
    VTX(3329, 0, -1082, 6551, 984, 15, 118, 251, 255),
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
    VTX(3329, 0, -1082, 4713, 984, 15, 118, 251, 255),
    VTX(0, 0, -3500, 6551, 984, 0, 118, 240, 255),
    VTX(0, 472, 0, 5632, -277, 0, 120, 0, 255),
}; 

Gfx gDntStageFlowerDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(65535, 65535, 0, 0, G_ON),
    gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, sDntStageSkelTex_001BD0),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 0, 0, 7, 0, 2, 5, 0, 0, 5, 0),
    gsDPLoadSync(),
    gsDPLoadBlock(7, 0, 0, 1023, 256),
    gsDPPipeSync(),
    gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, 2, 5, 0, 0, 5, 0),
    gsDPSetTileSize(0, 0, 0, 124, 124),
    gsDPSetCombineLERP(TEXEL0, K5, SHADE, COMBINED_ALPHA, 0, 0, 0, TEXEL0,
                       COMBINED, K5, ENVIRONMENT, COMBINED_ALPHA, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_dnkVtx_001920[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_TEXTURE_ENABLE | G_CULL_BACK),
    gsSPVertex(&object_dnkVtx_001A10[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsSPEndDisplayList(),
}; 

u64 sDntStageSkelTex_001BD0[] = {
#include "assets/objects/object_dnk//sDntStageSkelTex_001BD0.rgb5a1.inc.c"
};

u64 sDntStageSkelTex_0023D0[] = {
#include "assets/objects/object_dnk//sDntStageSkelTex_0023D0.rgb5a1.inc.c"
};

u64 gDntStageEyeHalfTex[] = {
#include "assets/objects/object_dnk/dnt_stage_eye_half.rgb5a1.inc.c"
};

u64 sDntStageSkelTex_002650[] = {
#include "assets/objects/object_dnk//sDntStageSkelTex_002650.rgb5a1.inc.c"
};

u64 sDntStageSkelTex_0026D0[] = {
#include "assets/objects/object_dnk//sDntStageSkelTex_0026D0.rgb5a1.inc.c"
};

u64 gDntStageEyeShutTex[] = {
#include "assets/objects/object_dnk/dnt_stage_eye_shut.rgb5a1.inc.c"
};

u64 gDntStageEyeOpenTex[] = {
#include "assets/objects/object_dnk/dnt_stage_eye_open.rgb5a1.inc.c"
};

u64 object_dnkTex_002850[] = {
#include "assets/objects/object_dnk//object_dnkTex_002850.rgb5a1.inc.c"
};

StandardLimb sDntStageSkelLimb_002A50 = { { 0, -2550, 0 }, 1, 255, sDntStageSkelLimbDL_0011E0 }; 

StandardLimb sDntStageSkelLimb_002A5C = { { 0, 1300, 0 }, 2, 8, sDntStageSkelLimbDL_0013B0 }; 

StandardLimb sDntStageSkelLimb_002A68 = { { 150, 1900, 0 }, 255, 3, sDntStageSkelLimbDL_0015E0 }; 

StandardLimb sDntStageSkelLimb_002A74 = { { -150, 1900, 0 }, 255, 4, sDntStageSkelLimbDL_001670 }; 

StandardLimb sDntStageSkelLimb_002A80 = { { 0, 1800, -100 }, 255, 5, sDntStageSkelLimbDL_0014B0 }; 

StandardLimb sDntStageSkelLimb_002A8C = { { 0, 1800, 0 }, 255, 6, sDntStageSkelLimbDL_001548 }; 

StandardLimb sDntStageSkelLimb_002A98 = { { 0, 400, 950 }, 255, 7, sDntStageSkelLimbDL_001298 }; 

StandardLimb sDntStageSkelLimb_002AA4 = { { 0, 0, 0 }, 255, 255, sDntStageSkelLimbDL_001150 }; 

StandardLimb sDntStageSkelLimb_002AB0 = { { 400, -300, 0 }, 255, 9, sDntStageSkelLimbDL_001700 }; 

StandardLimb sDntStageSkelLimb_002ABC = { { -400, -300, 0 }, 255, 255, sDntStageSkelLimbDL_0017B0 }; 

static void* sDntStageSkelLimbs[10] = {
    &sDntStageSkelLimb_002A50,
    &sDntStageSkelLimb_002A5C,
    &sDntStageSkelLimb_002A68,
    &sDntStageSkelLimb_002A74,
    &sDntStageSkelLimb_002A80,
    &sDntStageSkelLimb_002A8C,
    &sDntStageSkelLimb_002A98,
    &sDntStageSkelLimb_002AA4,
    &sDntStageSkelLimb_002AB0,
    &sDntStageSkelLimb_002ABC,
}; 

SkeletonHeader gDntStageSkel = { sDntStageSkelLimbs, 10 }; 

static u8 unaccounted_002AF8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sDntStageWaitAnimFrameData[186] = {
    0x0000, 0xFEF7, 0x11C7, 0x4000, 0x8000, 0xFEF7, 0xFF08, 0xFF2E, 0xFF54, 0xFF65, 0xFF54, 0xFF2E, 0xFF08, 0xFEF7, 
    0xFF14, 0xFF49, 0xFF65, 0xFF54, 0xFF2E, 0xFF08, 0x0000, 0x002D, 0x00A3, 0x014A, 0x020A, 0x02C9, 0x0370, 0x03E6, 
    0x0413, 0x03D9, 0x0344, 0x0279, 0x019B, 0x00CF, 0x003A, 0x1060, 0x1013, 0x0F4B, 0x0E2F, 0x0CE9, 0x0BA4, 0x0A88, 
    0x09BF, 0x0972, 0x09D5, 0x0AD2, 0x0C2C, 0x0DA6, 0x0F00, 0x0FFD, 0x0000, 0xFD07, 0xFDCC, 0xFF3B, 0x0000, 0xFD07, 
    0xFDBB, 0xFF19, 0x0000, 0x0038, 0x004E, 0x004B, 0x0038, 0x001F, 0x0009, 0x8000, 0x8808, 0x85F3, 0x8215, 0x8000, 
    0x8808, 0x8620, 0x8270, 0x8000, 0x7F69, 0x7F2E, 0x7F37, 0x7F69, 0x7FAC, 0x7FE7, 0xEFA0, 0xFE2E, 0xFA68, 0xF366, 
    0xEFA0, 0xFE2E, 0xFABB, 0xF40C, 0xEFA0, 0xEE8F, 0xEE24, 0xEE33, 0xEE8F, 0xEF08, 0xEF73, 0x4000, 0x401B, 0x4062, 
    0x40C7, 0x413A, 0x41AD, 0x4211, 0x4258, 0x4272, 0x4250, 0x41F7, 0x417D, 0x40F7, 0x407D, 0x4023, 0xEB96, 0xEB96, 
    0xEB97, 0xEB9A, 0xEB9F, 0xEBA6, 0xEBAF, 0xEBB6, 0xEBB9, 0xEBB5, 0xEBAC, 0xEBA3, 0xEB9C, 0xEB98, 0xEB96, 0x4000, 
    0x3FC8, 0x3F34, 0x3E62, 0x3D72, 0x3C82, 0x3BB1, 0x3B1D, 0x3AE5, 0x3B2E, 0x3BE8, 0x3CE7, 0x3DFD, 0x3EFD, 0x3FB8, 
    0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0xC000, 0xC156, 0xC447, 0xC738, 0xC88E, 0xC797, 0xC544, 0xC272, 0xC000, 0xC23C, 0xC453, 0xC53E, 0xC46D, 
    0xC29F, 0xC0D2, 0x4000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0xC000, 0x4000, 0x4000, 0x4000, 0x4000, 
    0x4000, 0x4000, 0x4000, 0x0000, 
}; 

static JointIndex sDntStageWaitAnimJointIndices[11] = {
    { 0x0000, 0x0005, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0014, 0x0002 },
    { 0x0000, 0x0000, 0x0023 },
    { 0x0032, 0x0041, 0x0050 },
    { 0x005F, 0x006E, 0x007D },
    { 0x0000, 0x0003, 0x0000 },
    { 0x008C, 0x009B, 0x00AA },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0004, 0x0000 },
}; 

AnimationHeader gDntStageWaitAnim = { { 15 }, sDntStageWaitAnimFrameData, sDntStageWaitAnimJointIndices, 5 }; 

static u8 unaccounted_002CC8[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sDntStageWalkAnimFrameData[132] = {
    0x0000, 0x02C4, 0x8000, 0x4000, 0x02C4, 0x0476, 0x0629, 0x0478, 0x02C7, 0x0478, 0x0629, 0x04AF, 0x0000, 0x01B8, 
    0x0580, 0x0948, 0x0B00, 0x096A, 0x05DC, 0x0224, 0x0000, 0x0F93, 0x1555, 0x0E88, 0x0000, 0xF177, 0xEAAB, 0xF15F, 
    0x0000, 0xFEBA, 0xFBED, 0xF920, 0xF7DA, 0xF8AA, 0xFAAA, 0xFD34, 0x0000, 0xF18E, 0xEAAB, 0xF1D7, 0x0000, 0x0E29, 
    0x1555, 0x0E7F, 0x1060, 0x045B, 0xF856, 0x0460, 0x1060, 0x042C, 0xF802, 0x02AC, 0xEFA0, 0xFBD9, 0x0813, 0xFBD9, 
    0xEFA0, 0xFBD9, 0x0813, 0xFD60, 0xEB96, 0xF79B, 0x03A0, 0xF79B, 0xEB96, 0xF79B, 0x03A0, 0xF91B, 0x0000, 0x4000, 
    0x4000, 0x4000, 0x0000, 0x4000, 0x4000, 0x4000, 0x4000, 0x3BB9, 0x3772, 0x3BA0, 0x4000, 0x3C9B, 0x3903, 0x3C12, 
    0x0000, 0x4000, 0x4000, 0x4000, 0x0000, 0x4000, 0x4000, 0x4000, 0x4000, 0xC000, 0xC000, 0xC000, 0x4000, 0xC000, 
    0xC000, 0xC000, 0xC000, 0xD256, 0xE4AB, 0xD256, 0xC000, 0xD256, 0xE4AB, 0xD49F, 0x4000, 0xC000, 0xC000, 0xC000, 
    0x4000, 0xC000, 0xC000, 0xC000, 0x0000, 0xF03F, 0xE37B, 0x138B, 0x0000, 0xEB5A, 0xE37B, 0x138B, 0x0000, 0x11E9, 
    0x2098, 0xEAE4, 0x0000, 0x1AC7, 0x25FB, 0xE8D8, 
}; 

static JointIndex sDntStageWalkAnimJointIndices[11] = {
    { 0x0000, 0x0004, 0x0000 },
    { 0x000C, 0x0014, 0x0000 },
    { 0x001C, 0x0024, 0x0000 },
    { 0x0000, 0x0000, 0x002C },
    { 0x0000, 0x0002, 0x0034 },
    { 0x0003, 0x003C, 0x0003 },
    { 0x0044, 0x004C, 0x0054 },
    { 0x005C, 0x0064, 0x006C },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0074 },
    { 0x0000, 0x0002, 0x007C },
}; 

AnimationHeader gDntStageWalkAnim = { { 8 }, sDntStageWalkAnimFrameData, sDntStageWalkAnimJointIndices, 4 }; 

static u8 unaccounted_002E2C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 


