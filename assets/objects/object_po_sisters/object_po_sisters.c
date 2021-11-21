#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_po_sisters.h"

static s16 sPoeSistersAttackAnimFrameData[102];
static JointIndex sPoeSistersAttackAnimJointIndices[12];
static s16 sPoeSistersMegCryAnimFrameData[644];
static JointIndex sPoeSistersMegCryAnimJointIndices[12];
static s16 sPoeSistersDamagedAnimFrameData[244];
static JointIndex sPoeSistersDamagedAnimJointIndices[12];
static s16 sPoeSistersFleeAnimFrameData[158];
static JointIndex sPoeSistersFleeAnimJointIndices[12];
static s16 sPoeSistersFloatAnimFrameData[324];
static JointIndex sPoeSistersFloatAnimJointIndices[12];
static s16 sPoeSistersAppearDisappearAnimFrameData[514];
static JointIndex sPoeSistersAppearDisappearAnimJointIndices[12];
static s16 sPoeSistersSwayAnimFrameData[362];
static JointIndex sPoeSistersSwayAnimJointIndices[12];
static Vtx object_po_sistersVtx_0014E0[19];
static Vtx object_po_sistersVtx_001610[10];
static Vtx object_po_sistersVtx_0016B0[3];
static Vtx object_po_sistersVtx_0016E0[32];
static Vtx object_po_sistersVtx_0018E0[30];
static Vtx object_po_sistersVtx_001AC0[10];
static Vtx object_po_sistersVtx_001B60[18];
static Vtx object_po_sistersVtx_001C80[3];
static Vtx sPoeSistersSkelVtx_0020A8[19];
static Vtx sPoeSistersSkelVtx_0021D8[6];
static Vtx sPoeSistersSkelVtx_002238[6];
static Vtx sPoeSistersSkelVtx_002298[6];
static Vtx sPoeSistersSkelVtx_0022F8[6];
static Vtx object_po_sistersVtx_002358[11];
static Vtx sPoeSistersSkelVtx_002408[4];
static Vtx sPoeSistersSkelVtx_002448[6];
static Vtx object_po_sistersVtx_002908[19];
static Vtx object_po_sistersVtx_002A38[8];
static Vtx object_po_sistersVtx_002AB8[11];
static Vtx object_po_sistersVtx_002B68[41];
static Vtx object_po_sistersVtx_002DF8[12];
static Vtx object_po_sistersVtx_003208[9];
static Vtx object_po_sistersVtx_003298[9];
static Vtx object_po_sistersVtx_003328[15];
static Vtx object_po_sistersVtx_003418[19];
static Vtx object_po_sistersVtx_003548[14];
static Vtx object_po_sistersVtx_003948[8];
static Vtx object_po_sistersVtx_0039C8[11];
static Vtx object_po_sistersVtx_003A78[11];
static Vtx object_po_sistersVtx_003B28[19];
static Vtx object_po_sistersVtx_003C58[23];
static Vtx object_po_sistersVtx_0040F0[32];
static Vtx object_po_sistersVtx_0042F0[54];
static Vtx object_po_sistersVtx_004650[3];
static Vtx object_po_sistersVtx_004680[6];
static void* sPoeSistersSkelLimbs[11];
static Vtx object_po_sistersVtx_0065D0[16];
static Vtx object_po_sistersVtx_0066D0[6];
static Vtx object_po_sistersVtx_006730[5];
static Vtx object_po_sistersVtx_006780[6];
static Vtx object_po_sistersVtx_0067E0[5];
static Vtx object_po_sistersVtx_006B00[16];
static Vtx object_po_sistersVtx_006C00[6];
static Vtx object_po_sistersVtx_006C60[5];
static Vtx object_po_sistersVtx_006CB0[6];
static Vtx object_po_sistersVtx_006D10[5];
static Vtx object_po_sistersVtx_007030[4];
static Vtx object_po_sistersVtx_007070[4];
static Vtx object_po_sistersVtx_0070B0[4];
static Vtx object_po_sistersVtx_0070F0[4];
static Vtx object_po_sistersVtx_007130[16];
static Vtx object_po_sistersVtx_007420[4];
static Vtx object_po_sistersVtx_007460[4];
static Vtx object_po_sistersVtx_0074A0[4];
static Vtx object_po_sistersVtx_0074E0[4];
static Vtx object_po_sistersVtx_007520[8];
static Vtx object_po_sistersVtx_007890[4];
static Vtx object_po_sistersVtx_0078D0[17];

static s16 sPoeSistersAttackAnimFrameData[102] = {
    0x0000, 0x170C, 0xC000, 0xDE8F, 0xEC09, 0x000E, 0x170C, 0x174B, 0x17D4, 0x185E, 0x189C, 0x185E, 0x17D4, 0x174B, 
    0x2000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0x4000, 0xC000, 0xC1E9, 0xC61D, 0xCA50, 0xCC39, 0xCA50, 
    0xC61D, 0xC1E9, 0x2000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0x0000, 0xCD8E, 0xCD6B, 0xCD1F, 0xCCD4, 
    0xCCB1, 0xCCD4, 0xCD1F, 0xCD6B, 0xFC28, 0xFBCB, 0xFAFE, 0xFA31, 0xF9D4, 0xFA31, 0xFAFE, 0xFBCB, 0x22FA, 0x2412, 
    0x267B, 0x28E4, 0x29FC, 0x28E4, 0x267B, 0x2412, 0x0000, 0xEFA5, 0x5B17, 0x52A2, 0x5064, 0x52A2, 0x5B17, 0xEFA5, 
    0x420A, 0x4248, 0x3C60, 0x3AA2, 0x39CC, 0x3AA2, 0x3C60, 0x4248, 0xC000, 0xAFAB, 0x1B2C, 0x12C6, 0x1090, 0x12C6, 
    0x1B2C, 0xAFAB, 0x0775, 0x0923, 0x0AD1, 0x0B95, 0x0AD1, 0x0923, 0x0775, 0x06B1, 0x0704, 0x0704, 0x0705, 0x0705, 
    0x0705, 0x0704, 0x0704, 0x0703, 
}; 

static JointIndex sPoeSistersAttackAnimJointIndices[12] = {
    { 0x0000, 0x0006, 0x0000 },
    { 0x0002, 0x0000, 0x0003 },
    { 0x000E, 0x0016, 0x001E },
    { 0x0026, 0x002E, 0x0036 },
    { 0x003E, 0x0046, 0x004E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0004 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0005, 0x0056, 0x005E },
}; 

AnimationHeader gPoeSistersAttackAnim = { { 8 }, sPoeSistersAttackAnimFrameData, sPoeSistersAttackAnimJointIndices, 6 }; 

static u8 unaccounted_000124[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sPoeSistersMegCryAnimFrameData[644] = {
    0x0000, 0x0E74, 0xC000, 0xC000, 0xC05A, 0xC14E, 0xC2B2, 0xC45E, 0xC62A, 0xC7EC, 0xC97C, 0xCAB1, 0xCB63, 0xCB69, 
    0xCAA2, 0xC928, 0xC726, 0xC4C8, 0xC23A, 0xBFA8, 0xBD3F, 0xBB29, 0xB994, 0xB8AB, 0xB860, 0xB87D, 0xB8F0, 0xB9A5, 
    0xBA8B, 0xBB8E, 0xBC9C, 0xBDA3, 0xBE90, 0xBF50, 0xBFD1, 0x175F, 0x1795, 0x17EE, 0x1800, 0x175F, 0x13C1, 0x10B1, 
    0x13E5, 0x175F, 0x17E0, 0x1843, 0x188B, 0x18B5, 0x18C4, 0x18B5, 0x188B, 0x1843, 0x17E0, 0x175F, 0x13E4, 0x10B0, 
    0x1379, 0x175F, 0x175F, 0x14D9, 0x130B, 0x150D, 0x175F, 0x17C5, 0x17D1, 0x17AB, 0x1779, 0x4BD5, 0x4C1E, 0x4CAB, 
    0x4CEE, 0x4C3D, 0x47F9, 0x4438, 0x4696, 0x49FD, 0x4A32, 0x4AB3, 0x4B92, 0x4C95, 0x4D66, 0x4DBE, 0x4D74, 0x4C89, 
    0x4B23, 0x498C, 0x46D8, 0x4533, 0x4601, 0x477C, 0x47DF, 0x474B, 0x46EC, 0x486D, 0x4A6E, 0x4B42, 0x4BB9, 0x4BE2, 
    0x4BDE, 0xEF1E, 0xEEC3, 0xEDCC, 0xEC62, 0xEACA, 0xE9D6, 0xE97A, 0xE75E, 0xE528, 0xE466, 0xE439, 0xE4C4, 0xE604, 
    0xE7E3, 0xEA3A, 0xECD6, 0xEF7F, 0xF1FB, 0xF413, 0xF510, 0xF541, 0xF620, 0xF6D4, 0xF65E, 0xF52D, 0xF401, 0xF358, 
    0xF295, 0xF190, 0xF09C, 0xEFD4, 0xEF4E, 0xE0E9, 0xE0E3, 0xE122, 0xE22B, 0xE494, 0xEBCF, 0xF25D, 0xEF84, 0xEBA8, 
    0xEBC6, 0xEB2D, 0xE9B4, 0xE79B, 0xE541, 0xE2FA, 0xE100, 0xDF72, 0xDE5E, 0xDDC6, 0xE132, 0xE498, 0xE104, 0xDC62, 
    0xDC99, 0xE00E, 0xE2DA, 0xE0F2, 0xDEA0, 0xDEC0, 0xDF4B, 0xE002, 0xE0A4, 0xF4C8, 0xF462, 0xF357, 0xF1DD, 0xF02B, 
    0xEE79, 0xECFD, 0xEBEE, 0xEB69, 0xEB56, 0xEBA8, 0xEC4B, 0xED7F, 0xEF4F, 0xF160, 0xF3A7, 0xF63B, 0xF8EA, 0xFB85, 
    0xFDDB, 0xFFBC, 0x00F8, 0x0121, 0x0035, 0xFEAB, 0xFCF8, 0xFB8F, 0xFA4A, 0xF8D1, 0xF757, 0xF60B, 0xF521, 0xEFDC, 
    0xEFE2, 0xEFF7, 0xF01E, 0xF05B, 0xF0B0, 0xF123, 0xF1B6, 0xF2F6, 0xF4D5, 0xF673, 0xF6EC, 0xF51F, 0xF1D1, 0xEEFF, 
    0xED07, 0xEB06, 0xE913, 0xE748, 0xE5BC, 0xE488, 0xE3C3, 0xE3C8, 0xE4A4, 0xE5FE, 0xE77F, 0xE8CF, 0xEA18, 0xEB9D, 
    0xED29, 0xEE85, 0xEF7E, 0x3127, 0x3181, 0x326F, 0x33BD, 0x3539, 0x36B1, 0x37F2, 0x38CA, 0x38EF, 0x387E, 0x37DB, 
    0x376C, 0x378A, 0x37C7, 0x3759, 0x361B, 0x3488, 0x32C8, 0x3104, 0x2F64, 0x2E0F, 0x2D2F, 0x2D0F, 0x2DA5, 0x2E98, 
    0x2F90, 0x3034, 0x3086, 0x30C5, 0x30F3, 0x3111, 0x3122, 0xE513, 0xE50B, 0xE51E, 0xE560, 0xE5A6, 0xE5C4, 0xE5BD, 
    0xE5AB, 0xE590, 0xE56E, 0xE54B, 0xE52D, 0xE517, 0xE50C, 0xE50C, 0xE510, 0xE513, 0xE50B, 0xE51E, 0xE560, 0xE5A6, 
    0xE5C4, 0xE5BD, 0xE5AB, 0xE590, 0xE56E, 0xE54B, 0xE52D, 0xE517, 0xE50C, 0xE50C, 0xE510, 0x135D, 0x11E3, 0x0E58, 
    0x0A1C, 0x069B, 0x0528, 0x057B, 0x065F, 0x07B6, 0x0961, 0x0B40, 0x0D32, 0x0F14, 0x10C4, 0x1221, 0x1309, 0x135D, 
    0x11E3, 0x0E58, 0x0A1C, 0x069B, 0x0528, 0x057B, 0x065F, 0x07B6, 0x0961, 0x0B40, 0x0D32, 0x0F14, 0x10C4, 0x1221, 
    0x1309, 0xA4A4, 0xA420, 0xA338, 0xA2A9, 0xA297, 0xA2AA, 0xA2A4, 0xA299, 0xA294, 0xA29E, 0xA2C2, 0xA303, 0xA35F, 
    0xA3CA, 0xA434, 0xA485, 0xA4A4, 0xA420, 0xA338, 0xA2A9, 0xA297, 0xA2AA, 0xA2A4, 0xA299, 0xA294, 0xA29E, 0xA2C2, 
    0xA303, 0xA35F, 0xA3CA, 0xA434, 0xA485, 0xDFE1, 0xDF8B, 0xDEA0, 0xDD40, 0xDB8E, 0xD9AA, 0xD7B5, 0xD5D1, 0xD41E, 
    0xD2BF, 0xD1D3, 0xD17E, 0xD2FD, 0xD68E, 0xDAD0, 0xDE62, 0xDFE1, 0xDF8B, 0xDEA0, 0xDD40, 0xDB8E, 0xD9AA, 0xD7B5, 
    0xD5D1, 0xD41E, 0xD2BF, 0xD1D3, 0xD17E, 0xD2FD, 0xD68E, 0xDAD0, 0xDE62, 0xE028, 0xE00F, 0xDFCC, 0xDF68, 0xDEEC, 
    0xDE62, 0xDDD3, 0xDD49, 0xDCCD, 0xDC68, 0xDC25, 0xDC0D, 0xDC7A, 0xDD7F, 0xDEB6, 0xDFBB, 0xE028, 0xE00F, 0xDFCC, 
    0xDF68, 0xDEEC, 0xDE62, 0xDDD3, 0xDD49, 0xDCCD, 0xDC68, 0xDC25, 0xDC0D, 0xDC7A, 0xDD7F, 0xDEB6, 0xDFBB, 0xD91D, 
    0xD996, 0xDAE1, 0xDCD0, 0xDF34, 0xE1DE, 0xE49F, 0xE749, 0xE9AC, 0xEB9B, 0xECE6, 0xED5F, 0xEB44, 0xE63E, 0xE03F, 
    0xDB39, 0xD91D, 0xD996, 0xDAE1, 0xDCD0, 0xDF34, 0xE1DE, 0xE49F, 0xE749, 0xE9AC, 0xEB9B, 0xECE6, 0xED5F, 0xEB44, 
    0xE63E, 0xE03F, 0xDB39, 0x7A15, 0x7DA0, 0x853A, 0x8C55, 0x8E66, 0x8AD3, 0x84BD, 0x7D29, 0x751D, 0x6D9E, 0x67B1, 
    0x645C, 0x64CA, 0x688C, 0x6E43, 0x7490, 0x7A15, 0x8041, 0x8790, 0x8D36, 0x8E66, 0x8AD3, 0x84BD, 0x7D29, 0x751D, 
    0x6D9E, 0x67B1, 0x645C, 0x6589, 0x6ACA, 0x719F, 0x778D, 0x0124, 0xFE6F, 0xF894, 0xF2F6, 0xF0F8, 0xF2FA, 0xF6AB, 
    0xFB64, 0x007F, 0x0555, 0x0941, 0x0B9A, 0x0BD9, 0x0A4F, 0x079A, 0x0457, 0x0124, 0xFCC5, 0xF719, 0xF268, 0xF0F8, 
    0xF2FA, 0xF6AB, 0xFB64, 0x007F, 0x0555, 0x0941, 0x0B9A, 0x0B60, 0x08E4, 0x0578, 0x0272, 0xD651, 0xDB94, 0xE72E, 
    0xF2D4, 0xF83D, 0xF6F7, 0xF348, 0xEDFC, 0xE7DC, 0xE1B2, 0xDC4A, 0xD86D, 0xD5D5, 0xD3F4, 0xD328, 0xD3D2, 0xD651, 
    0xDD91, 0xE8F3, 0xF37E, 0xF83D, 0xF6F7, 0xF348, 0xEDFC, 0xE7DC, 0xE1B2, 0xDC4A, 0xD86D, 0xD666, 0xD5A6, 0xD5B4, 
    0xD615, 0x0000, 0xFFAD, 0xFECE, 0xFD88, 0xFBFF, 0xFA59, 0xF8B9, 0xF747, 0xF626, 0xF57B, 0xF56C, 0xF613, 0xF759, 
    0xF917, 0xFB28, 0xFD64, 0xFFA4, 0x01C3, 0x039A, 0x0502, 0x05D5, 0x061F, 0x0611, 0x05BB, 0x052D, 0x0475, 0x03A3, 
    0x02C7, 0x01F0, 0x012E, 0x0091, 0x0027, 0x0000, 0x0029, 0x0097, 0x0137, 0x01F6, 0x02C2, 0x0388, 0x0434, 0x04B5, 
    0x04F7, 0x04E7, 0x0474, 0x03A4, 0x0291, 0x0151, 0xFFFA, 0xFEA3, 0xFD65, 0xFC54, 0xFB89, 0xFB1A, 0xFB03, 0xFB28, 
    0xFB7E, 0xFBFA, 0xFC91, 0xFD37, 0xFDE3, 0xFE88, 0xFF1C, 0xFF93, 0xFFE3, 0x138F, 0x132B, 0x1272, 0x120F, 0x12AF, 
    0x178A, 0x1BA9, 0x171C, 0x1235, 0x116F, 0x10C9, 0x1048, 0x0FED, 0x0FBD, 0x0FB9, 0x0FE5, 0x1044, 0x10D9, 0x11A7, 
    0x17A0, 0x1D40, 0x18D7, 0x1289, 0x1289, 0x16BA, 0x19B7, 0x1653, 0x127F, 0x120B, 0x123D, 0x12C3, 0x134E, 0x0000, 
    
}; 

static JointIndex sPoeSistersMegCryAnimJointIndices[12] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0003, 0x0023, 0x0002 },
    { 0x0043, 0x0063, 0x0083 },
    { 0x00A3, 0x00C3, 0x00E3 },
    { 0x0103, 0x0123, 0x0143 },
    { 0x0163, 0x0183, 0x01A3 },
    { 0x01C3, 0x01E3, 0x0203 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0223, 0x0243, 0x0263 },
}; 

AnimationHeader gPoeSistersMegCryAnim = { { 32 }, sPoeSistersMegCryAnimFrameData, sPoeSistersMegCryAnimJointIndices, 3 }; 

static s16 sPoeSistersDamagedAnimFrameData[244] = {
    0x0000, 0x170C, 0xC000, 0x0000, 0x02EE, 0xFDA8, 0x0258, 0xFE3E, 0x01C2, 0xFED4, 0x012C, 0xFED4, 0x0096, 0xFF6A, 
    0x0096, 0xFFB5, 0xFFB8, 0xFFE4, 0x0000, 0x12E4, 0x1F62, 0x0B8B, 0xF271, 0xE613, 0xE613, 0xE613, 0xE613, 0xE613, 
    0xE613, 0xE613, 0xE613, 0xE613, 0xE613, 0xE613, 0xE613, 0x5A1F, 0x5D57, 0x53D6, 0xCF19, 0xCEAE, 0xCEAE, 0xCEAE, 
    0xCEAE, 0xCEAE, 0xCEAE, 0xCEAE, 0xCEAE, 0xCEAE, 0xCEAE, 0xCEAE, 0xCEAE, 0xDF81, 0xEBDA, 0xE5AB, 0xA090, 0xA149, 
    0xA149, 0xA149, 0xA149, 0xA149, 0xA149, 0xA149, 0xA149, 0xA149, 0xA149, 0xA149, 0xA149, 0xDC63, 0xC3C2, 0xBB36, 
    0x2A8F, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x1FEF, 0x0000, 
    0x003B, 0x1EE0, 0x4212, 0x52E5, 0x52E5, 0x52E5, 0x52E5, 0x52E5, 0x52E5, 0x52E5, 0x52E5, 0x52E5, 0x52E5, 0x52E5, 
    0x52E5, 0x0000, 0x0892, 0xF679, 0xE017, 0xD522, 0xD522, 0xD522, 0xD522, 0xD522, 0xD522, 0xD522, 0xD522, 0xD522, 
    0xD522, 0xD522, 0xD522, 0x49E0, 0xE027, 0xD421, 0xD9AE, 0xDF67, 0xDF67, 0xDF67, 0xDF67, 0xDF67, 0xDF67, 0xDF67, 
    0xDF67, 0xDF67, 0xDF67, 0xDF67, 0xDF67, 0xE1B9, 0xF0BA, 0xEE25, 0xE17C, 0xDEA0, 0xDEA0, 0xDEA0, 0xDEA0, 0xDEA0, 
    0xDEA0, 0xDEA0, 0xDEA0, 0xDEA0, 0xDEA0, 0xDEA0, 0xDEA0, 0x19A0, 0x1961, 0x218E, 0x2123, 0x1B23, 0x1B23, 0x1B23, 
    0x1B23, 0x1B23, 0x1B23, 0x1B23, 0x1B23, 0x1B23, 0x1B23, 0x1B23, 0x1B23, 0xBA95, 0xD0B2, 0xC587, 0xAAC0, 0xA031, 
    0xA031, 0xA031, 0xA031, 0xA031, 0xA031, 0xA031, 0xA031, 0xA031, 0xA031, 0xA031, 0xA031, 0x23DC, 0x1FA6, 0x0B5E, 
    0xF4B0, 0xE7D6, 0xEA09, 0xF3F5, 0xFF02, 0x049A, 0x03E5, 0x0104, 0xFCCA, 0xF80E, 0xF3A4, 0xF062, 0xEF1D, 0x0BCD, 
    0xE9DE, 0xE9C9, 0xEFE4, 0xF373, 0xF110, 0xEC8D, 0xE7FD, 0xE576, 0xE523, 0xE59D, 0xE69F, 0xE7E2, 0xE920, 0xEA12, 
    0xEA72, 0xF07F, 0x0DAB, 0x22FF, 0x3626, 0x3DFE, 0x3553, 0x2335, 0x10E8, 0x07AE, 0x088B, 0x0D56, 0x1495, 0x1CCB, 
    0x247E, 0x2A33, 0x2C6E, 0xFF72, 0xEDE3, 0xF6D0, 0x044D, 0x0B42, 0x0B42, 0x0B42, 0x0B42, 0x0B42, 0x0B42, 0x0B42, 
    0x0B42, 0x0B42, 0x0B42, 0x0B42, 0x0B42, 0x0000, 
}; 

static JointIndex sPoeSistersDamagedAnimJointIndices[12] = {
    { 0x0003, 0x0001, 0x0000 },
    { 0x0002, 0x0013, 0x0002 },
    { 0x0023, 0x0033, 0x0043 },
    { 0x0053, 0x0063, 0x0073 },
    { 0x0083, 0x0093, 0x00A3 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x00B3, 0x00C3, 0x00D3 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x00E3 },
}; 

AnimationHeader gPoeSistersDamagedAnim = { { 16 }, sPoeSistersDamagedAnimFrameData, sPoeSistersDamagedAnimJointIndices, 3 }; 

static s16 sPoeSistersFleeAnimFrameData[158] = {
    0x0000, 0x170C, 0xC000, 0x5B1B, 0x11B0, 0xFEC1, 0x0000, 0x007A, 0x00CF, 0x0045, 0xFF72, 0xFEAA, 0xFE3E, 0xFF16, 
    0x170C, 0x174B, 0x17D4, 0x185E, 0x189C, 0x1851, 0x17B2, 0x1725, 0x0000, 0x003B, 0x00BC, 0x013C, 0x0177, 0x014C, 
    0x00E5, 0x006A, 0xF123, 0xF05F, 0xEEB1, 0xED03, 0xEC3F, 0xED03, 0xEEB1, 0xF05F, 0x73BA, 0x706A, 0x6C8B, 0x6FA1, 
    0x73BA, 0x711D, 0x6C8B, 0x706A, 0xF62E, 0xEB8C, 0xDFE9, 0xE93B, 0xF62E, 0xEDA2, 0xDFE9, 0xEB8C, 0xE161, 0xE3BF, 
    0xE3F5, 0xE3FC, 0xE161, 0xE373, 0xE3F5, 0xE3BF, 0xEB1C, 0xE0A3, 0xD611, 0xE028, 0xEA58, 0xE028, 0xD611, 0xE0A3, 
    0xE98B, 0xEAD3, 0xEBAE, 0xE8AB, 0xE617, 0xE8AB, 0xEBAE, 0xEAD3, 0xF9D2, 0xFAED, 0xFD6A, 0xFFEA, 0x010B, 0xFFEA, 
    0xFD6A, 0xFAED, 0x21D9, 0x220B, 0x224E, 0x2254, 0x2243, 0x2254, 0x224E, 0x220B, 0xCC7F, 0xCDF4, 0xD142, 0xD4A7, 
    0xD636, 0xD4A7, 0xD142, 0xCDF4, 0x0BC9, 0x08B9, 0x063A, 0x0B8C, 0x104D, 0x0B8C, 0x063A, 0x08B9, 0xEBC7, 0xF28B, 
    0xF795, 0xE9E5, 0xDDF1, 0xE9E5, 0xF795, 0xF28B, 0xE30A, 0xE5E3, 0xE8DC, 0xE683, 0xE40B, 0xE683, 0xE8DC, 0xE5E3, 
    0xDFD8, 0xDE1C, 0xDD10, 0xDF79, 0xE308, 0xE65C, 0xE816, 0xE415, 0x017F, 0x017C, 0x017A, 0x0179, 0x017A, 0x017C, 
    0x017F, 0x0182, 0x0480, 0x071C, 0x04A5, 0x0060, 0xFBE7, 0xF8E4, 0xFB77, 0x002F, 0xF3C9, 0xF962, 0xFDEA, 0xFFC7, 
    0xFDEA, 0xF962, 0xF3C9, 0xEEB8, 
}; 

static JointIndex sPoeSistersFleeAnimJointIndices[12] = {
    { 0x0006, 0x000E, 0x0016 },
    { 0x0002, 0x001E, 0x0002 },
    { 0x0026, 0x002E, 0x0036 },
    { 0x003E, 0x0046, 0x0003 },
    { 0x004E, 0x0056, 0x005E },
    { 0x0066, 0x006E, 0x0076 },
    { 0x0004, 0x007E, 0x0005 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0086, 0x008E, 0x0096 },
}; 

AnimationHeader gPoeSistersFleeAnim = { { 8 }, sPoeSistersFleeAnimFrameData, sPoeSistersFleeAnimJointIndices, 6 }; 

static u8 unaccounted_000A64[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sPoeSistersFloatAnimFrameData[324] = {
    0x0000, 0x170C, 0xC000, 0x0000, 0x005E, 0x00C9, 0x011B, 0x012C, 0x00FA, 0x00A3, 0x0037, 0xFFC5, 0xFF59, 0xFF04, 
    0xFED4, 0xFED9, 0xFF0C, 0xFF5A, 0xFFB2, 0x170C, 0x1732, 0x1777, 0x17D0, 0x1832, 0x1891, 0x18E3, 0x191C, 0x1932, 
    0x191C, 0x18E3, 0x1891, 0x1832, 0x17D0, 0x1777, 0x1732, 0x0000, 0xFFF4, 0xFFEE, 0xFFEE, 0xFFF0, 0xFFF5, 0xFFFA, 
    0xFFFE, 0x0000, 0xFFFE, 0xFFFA, 0xFFF5, 0xFFF0, 0xFFEE, 0xFFEE, 0xFFF4, 0x0300, 0x02D5, 0x0262, 0x01C0, 0x0107, 
    0x004D, 0xFFAB, 0xFF38, 0xFF0D, 0xFF38, 0xFFAB, 0x004D, 0x0107, 0x01C0, 0x0262, 0x02D5, 0x5B01, 0x5C18, 0x5B01, 
    0x5748, 0x4F83, 0x42BD, 0x343A, 0x297E, 0x23BD, 0x21F0, 0x23BD, 0x297E, 0x343A, 0x42BD, 0x4F83, 0x5748, 0xE20E, 
    0xE392, 0xE20E, 0xDE4D, 0xD9EC, 0xD729, 0xD7CA, 0xDB0F, 0xDE83, 0xE001, 0xDE83, 0xDB0F, 0xD7CA, 0xD729, 0xD9EC, 
    0xDE4D, 0xDFEB, 0xDDBC, 0xDFEB, 0xE65B, 0xF19C, 0x01F0, 0x139F, 0x20DC, 0x2841, 0x2AA8, 0x2841, 0x20DC, 0x139F, 
    0x01F0, 0xF19C, 0xE65B, 0xFF75, 0x0000, 0xFF75, 0xFE06, 0xFC00, 0xF9AE, 0xF75C, 0xF556, 0xF3E7, 0xF35C, 0xF3E7, 
    0xF556, 0xF75C, 0xF9AE, 0xFC00, 0xFE06, 0xFF81, 0x0000, 0xFF81, 0xFE31, 0xFC56, 0xFA36, 0xF816, 0xF63C, 0xF4EC, 
    0xF46D, 0xF4EC, 0xF63C, 0xF816, 0xFA36, 0xFC56, 0xFE31, 0x4281, 0x42D2, 0x4281, 0x41AC, 0x407E, 0x3F25, 0x3DCB, 
    0x3C9D, 0x3BC8, 0x3B77, 0x3BC8, 0x3C9D, 0x3DCB, 0x3F25, 0x407E, 0x41AC, 0xE448, 0xE744, 0xEBA0, 0xF000, 0xF3E7, 
    0xF76F, 0xFA7C, 0xFCAD, 0xFD5E, 0xFBD9, 0xF827, 0xF2FE, 0xEDB1, 0xE947, 0xE624, 0xE46B, 0x259B, 0x252B, 0x2419, 
    0x2280, 0x2093, 0x1E77, 0x1C61, 0x1A89, 0x1945, 0x191E, 0x1A5B, 0x1CC2, 0x1F8E, 0x2200, 0x23D3, 0x2503, 0xBACA, 
    0xBCA6, 0xBF72, 0xC209, 0xC461, 0xC6CE, 0xC91A, 0xCB3B, 0xCCFF, 0xCDF7, 0xCD96, 0xCB78, 0xC7CA, 0xC367, 0xBF41, 
    0xBC27, 0xCD77, 0xCFDE, 0xD39D, 0xD80C, 0xDBD4, 0xDE0D, 0xDEEE, 0xDE2E, 0xDBAC, 0xD7BC, 0xD376, 0xCFC4, 0xCD44, 
    0xCC03, 0xCBD0, 0xCC68, 0x24C1, 0x237B, 0x2050, 0x1C3D, 0x183D, 0x13C6, 0x0EDD, 0x0B54, 0x0AE4, 0x0D14, 0x1125, 
    0x162A, 0x1A77, 0x1DFA, 0x214D, 0x23C8, 0xE31B, 0xE37F, 0xE46D, 0xE585, 0xE668, 0xE6E5, 0xE73E, 0xE7BF, 0xE8FB, 
    0xE9D4, 0xE956, 0xE858, 0xE746, 0xE615, 0xE4B5, 0xE393, 0x17E3, 0x162A, 0x125C, 0x0E83, 0x0CAA, 0x0D33, 0x0EDF, 
    0x113D, 0x13DE, 0x1655, 0x1966, 0x1CCD, 0x1E87, 0x1D9D, 0x1B51, 0x18F7, 0x0000, 0x000D, 0x0031, 0x0065, 0x00A4, 
    0x00E5, 0x0123, 0x0156, 0x0179, 0x018C, 0x0195, 0x0198, 0x0195, 0x018F, 0x0189, 0x0184, 0x002F, 0x0243, 0x0486, 
    0x0659, 0x071C, 0x0668, 0x04A5, 0x026F, 0x0060, 0xFE53, 0xFC0F, 0xFA14, 0xF8E4, 0xF957, 0xFB55, 0xFDED, 0xFAC8, 
    0xFB05, 0xFBEE, 0xFD4B, 0xFEE4, 0x0084, 0x01F1, 0x02F4, 0x0357, 0x02F4, 0x01F1, 0x0084, 0xFEE4, 0xFD4B, 0xFBEE, 
    0xFB05, 0x0000, 
}; 

static JointIndex sPoeSistersFloatAnimJointIndices[12] = {
    { 0x0003, 0x0013, 0x0023 },
    { 0x0002, 0x0033, 0x0002 },
    { 0x0043, 0x0053, 0x0063 },
    { 0x0073, 0x0083, 0x0093 },
    { 0x00A3, 0x00B3, 0x00C3 },
    { 0x0000, 0x0000, 0x00D3 },
    { 0x00E3, 0x00F3, 0x0103 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0113, 0x0123, 0x0133 },
}; 

AnimationHeader gPoeSistersFloatAnim = { { 16 }, sPoeSistersFloatAnimFrameData, sPoeSistersFloatAnimJointIndices, 3 }; 

static s16 sPoeSistersAppearDisappearAnimFrameData[514] = {
    0x0000, 0x170C, 0x330F, 0xC000, 0x6514, 0x118B, 0xC517, 0x7F68, 0x402E, 0x071A, 0xD3E0, 0xA627, 0x7DAD, 0x5A1F, 
    0x3B1D, 0x2065, 0x09B4, 0xF6B9, 0xE718, 0xDA7D, 0xD097, 0xC91C, 0xC3BF, 0xC032, 0xBE27, 0xBD4F, 0xBD5B, 0xBDFB, 
    0xBEE0, 0xBFB8, 0xC033, 0xC000, 0xC000, 0x0000, 0xFFFC, 0xFFF6, 0x0035, 0xFFFF, 0xFF72, 0xFFDE, 0x00E9, 0x010D, 
    0xFFE9, 0xFE75, 0xFDC1, 0xFE23, 0xFF4D, 0x00C1, 0x021F, 0x033A, 0x040C, 0x04A2, 0x0511, 0x0568, 0x05B3, 0x05F9, 
    0x0639, 0x0674, 0x06A6, 0x06CE, 0x06EB, 0x06FD, 0x0703, 0xC000, 0xBFFB, 0xC016, 0xC007, 0xBFA3, 0xBFFF, 0xC0C4, 
    0xC07B, 0xBF3A, 0xBE65, 0xBED9, 0xC045, 0xC1D4, 0xC2E1, 0xC33D, 0xC305, 0xC273, 0xC1BE, 0xC10D, 0xC077, 0xC007, 
    0xBFBE, 0xBF9B, 0xBF99, 0xBFAE, 0xBFD1, 0xBFF4, 0xC009, 0xC000, 0xC000, 0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 
    0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 0x4286, 0x408C, 0x3BBF, 
    0x35F9, 0x30B2, 0x2C9A, 0x29CD, 0x282C, 0x279E, 0x2904, 0x2D51, 0x34D8, 0x3DE3, 0x4286, 0xD255, 0xD255, 0xD255, 
    0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 0xD255, 
    0xD2B0, 0xD3CD, 0xD5C0, 0xD85E, 0xDB42, 0xDDEA, 0xDFD8, 0xE095, 0xDECD, 0xDAAE, 0xD63A, 0xD342, 0xD255, 0xFDAC, 
    0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 0xFDAC, 
    0xFDAC, 0xFDAC, 0xFFB6, 0x04BB, 0x0AEA, 0x10D3, 0x15B9, 0x1962, 0x1BB6, 0x1C8C, 0x1A7B, 0x14D7, 0x0C27, 0x027B, 
    0xFDAC, 0x2000, 0xF216, 0xF1E6, 0xF19F, 0xF13C, 0xF0C2, 0xF033, 0xEF90, 0xEEDB, 0xEE17, 0xED46, 0xEC69, 0xEB83, 
    0xEA96, 0xE9A4, 0xE8AF, 0xE7BA, 0xE6C7, 0xE5D9, 0xE4F2, 0xE414, 0xE342, 0xE27F, 0xE1CD, 0xE12F, 0xE0A8, 0xE03A, 
    0xDFE9, 0xDFB6, 0xDFA4, 0x4000, 0x3FE8, 0x3FA4, 0x3F36, 0x3EA1, 0x3DE9, 0x3D12, 0x3C1F, 0x3B12, 0x39F0, 0x38BC, 
    0x3779, 0x362B, 0x34D5, 0x337A, 0x321D, 0x30C3, 0x2F6E, 0x2E22, 0x2CE2, 0x2BB1, 0x2A93, 0x298A, 0x289B, 0x27C7, 
    0x2713, 0x2682, 0x2616, 0x25D3, 0x25BC, 0xE000, 0xB226, 0xB223, 0xB225, 0xB226, 0xB227, 0xB22A, 0xB22E, 0xB234, 
    0xB23C, 0xB246, 0xB252, 0xB261, 0xB273, 0xB287, 0xB29E, 0xB2B7, 0xB2D3, 0xB2EF, 0xB30E, 0xB32C, 0xB34B, 0xB369, 
    0xB386, 0xB3A0, 0xB3B7, 0xB3CB, 0xB3D9, 0xB3E3, 0xB3E6, 0x0000, 0xFFF3, 0xFFCF, 0xFF9A, 0xFF59, 0xFF13, 0xFECD, 
    0xFE8D, 0xFE58, 0xFE34, 0xFE27, 0xFE36, 0xFE67, 0xFEC0, 0xFF47, 0x0000, 0x0157, 0x0386, 0x0648, 0x0959, 0x0C75, 
    0x0F57, 0x11BA, 0x135B, 0x13F5, 0x11E2, 0x0CEF, 0x0706, 0x0213, 0x0000, 0x0000, 0x0003, 0x000B, 0x0017, 0x0025, 
    0x0034, 0x0044, 0x0052, 0x005E, 0x0066, 0x0069, 0x0066, 0x005B, 0x0047, 0x0029, 0x0000, 0xFFB4, 0xFF38, 0xFE9B, 
    0xFDED, 0xFD3D, 0xFC99, 0xFC11, 0xFBB5, 0xFB93, 0xFC08, 0xFD22, 0xFE71, 0xFF8A, 0x0000, 0x0000, 0xFF92, 0xFE59, 
    0xFC6D, 0xF9E7, 0xF6E0, 0xF371, 0xEFB1, 0xEBBB, 0xE7A6, 0xE38C, 0xDF85, 0xDBAA, 0xD813, 0xD4D9, 0xD215, 0xCF9F, 
    0xCD46, 0xCB16, 0xC91B, 0xC761, 0xC5F4, 0xC4E1, 0xC433, 0xC3F6, 0xC56E, 0xC8EF, 0xCD1D, 0xD09D, 0xD215, 0x0193, 
    0x01B6, 0x021B, 0x02BE, 0x0398, 0x04A6, 0x05E3, 0x074A, 0x08D5, 0x0A80, 0x0C47, 0x0E23, 0x1010, 0x120A, 0x140B, 
    0x160F, 0x1810, 0x1A09, 0x1BF7, 0x1DD3, 0x1F99, 0x2144, 0x22D0, 0x2436, 0x2573, 0x2681, 0x275C, 0x27FE, 0x2863, 
    0x2886, 0xFD66, 0xFD4F, 0xFD0C, 0xFCA1, 0xFC10, 0xFB5D, 0xFA8C, 0xF99F, 0xF899, 0xF77F, 0xF652, 0xF517, 0xF3D1, 
    0xF282, 0xF12F, 0xEFDA, 0xEE86, 0xED38, 0xEBF1, 0xEAB6, 0xE98A, 0xE86F, 0xE76A, 0xE67D, 0xE5AB, 0xE4F8, 0xE468, 
    0xE3FC, 0xE3BA, 0xE3A3, 0x2708, 0x26F6, 0x26C0, 0x2669, 0x25F4, 0x2564, 0x24BB, 0x23FC, 0x2328, 0x2244, 0x2152, 
    0x2054, 0x1F4C, 0x1E3E, 0x1D2C, 0x1C19, 0x1B07, 0x19F9, 0x18F2, 0x17F3, 0x1701, 0x161D, 0x154A, 0x148A, 0x13E1, 
    0x1351, 0x12DC, 0x1285, 0x1250, 0x123D, 0x002F, 0x002E, 0x002E, 0x002D, 0x002C, 0x002B, 0x0029, 0x0028, 0x0026, 
    0x0024, 0x0022, 0x0020, 0x001D, 0x001B, 0x0018, 0x0016, 0x0014, 0x0011, 0x000F, 0x000D, 0x000B, 0x0009, 0x0007, 
    0x0005, 0x0004, 0x0002, 0x0001, 0x0001, 0x0000, 0x0000, 0xFAC8, 0xFACD, 0xFADB, 0xFAF1, 0xFB0E, 0xFB33, 0xFB5E, 
    0xFB8E, 0xFBC4, 0xFBFE, 0xFC3C, 0xFC7C, 0xFCBF, 0xFD04, 0xFD49, 0xFD8F, 0xFDD5, 0xFE1A, 0xFE5D, 0xFE9D, 0xFEDB, 
    0xFF15, 0xFF4A, 0xFF7B, 0xFFA6, 0xFFCB, 0xFFE8, 0xFFFE, 0x000C, 0x0011, 0x0000, 
}; 

static JointIndex sPoeSistersAppearDisappearAnimJointIndices[12] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0003, 0x0021, 0x003F },
    { 0x005D, 0x007B, 0x0099 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x00B7, 0x00D5, 0x00F3 },
    { 0x0111, 0x012F, 0x014D },
    { 0x016B, 0x0189, 0x01A7 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x01C5, 0x01E3 },
}; 

AnimationHeader gPoeSistersAppearDisappearAnim = { { 30 }, sPoeSistersAppearDisappearAnimFrameData, sPoeSistersAppearDisappearAnimJointIndices, 3 }; 

static u8 unaccounted_0011AC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sPoeSistersSwayAnimFrameData[362] = {
    0x0000, 0x170C, 0x170C, 0x171D, 0x174A, 0x178E, 0x17DF, 0x1838, 0x1891, 0x18E2, 0x1926, 0x1953, 0x1964, 0x194F, 
    0x1918, 0x18C8, 0x186A, 0x1806, 0x17A8, 0x1758, 0x1721, 0x170C, 0xC000, 0xC039, 0xC073, 0xC0AC, 0xC0DD, 0xC0FD, 
    0xC101, 0xC0E5, 0xC0AD, 0xC05D, 0xC000, 0xBFA3, 0xBF53, 0xBF1B, 0xBEFF, 0xBF03, 0xBF23, 0xBF54, 0xBF8D, 0xBFC7, 
    0x0703, 0x0723, 0x0779, 0x07F8, 0x0892, 0x093C, 0x09E8, 0x0A8A, 0x0B10, 0x0B6D, 0x0B8F, 0x0B6D, 0x0B10, 0x0A8A, 
    0x09E8, 0x093C, 0x0892, 0x07F8, 0x0779, 0x0723, 0xC000, 0xC148, 0xC277, 0xC372, 0xC41E, 0xC461, 0xC426, 0xC37F, 
    0xC284, 0xC150, 0xC000, 0xBEB0, 0xBD7C, 0xBC81, 0xBBDA, 0xBB9F, 0xBBE2, 0xBC8E, 0xBD89, 0xBEB8, 0x4286, 0x4115, 
    0x3CC3, 0x3551, 0x2AF2, 0x1F53, 0x14FB, 0x0D45, 0x0828, 0x0537, 0x043A, 0x0537, 0x0828, 0x0D45, 0x14FB, 0x1F53, 
    0x2AF2, 0x3551, 0x3CC3, 0x4115, 0xD255, 0xD1E1, 0xD0C7, 0xCF8F, 0xCEE6, 0xCF56, 0xD0E5, 0xD317, 0xD547, 0xD6E8, 
    0xD788, 0xD6E8, 0xD547, 0xD317, 0xD0E5, 0xCF56, 0xCEE6, 0xCF8F, 0xD0C7, 0xD1E1, 0xFDAC, 0xFF39, 0x03CF, 0x0B8B, 
    0x161D, 0x21C1, 0x2BEA, 0x3348, 0x37FC, 0x3A94, 0x3B6D, 0x3A94, 0x37FC, 0x3348, 0x2BEA, 0x21C1, 0x161D, 0x0B8B, 
    0x03CF, 0xFF39, 0x0000, 0xFB47, 0xF320, 0xEA1D, 0xE2D1, 0xDFD0, 0xE2D1, 0xEA1D, 0xF320, 0xFB47, 0x0000, 0x01EE, 
    0x036F, 0x0482, 0x0526, 0x055D, 0x0526, 0x0482, 0x036F, 0x01EE, 0x330F, 0x26FD, 0x1223, 0xFB18, 0xE870, 0xE0C1, 
    0xE870, 0xFB18, 0x1223, 0x26FD, 0x330F, 0x37FF, 0x3BD6, 0x3E94, 0x403A, 0x40C6, 0x403A, 0x3E94, 0x3BD6, 0x37FF, 
    0xDFA4, 0xDE34, 0xDD81, 0xDD7F, 0xDE31, 0xDFB0, 0xE20B, 0xE506, 0xE850, 0xEB82, 0xEE35, 0xEFFA, 0xF0A8, 0xF04D, 
    0xEEFC, 0xECC9, 0xE9EA, 0xE6FE, 0xE47C, 0xE2B1, 0x25BC, 0x2537, 0x24CE, 0x248D, 0x2481, 0x24AF, 0x250E, 0x2571, 
    0x25B3, 0x25C3, 0x25AF, 0x25A0, 0x25B7, 0x25F9, 0x265A, 0x26BB, 0x26F8, 0x26F5, 0x26B5, 0x2655, 0xB3E6, 0xB1E7, 
    0xB0B0, 0xB03C, 0xB099, 0xB1EA, 0xB44D, 0xB789, 0xBB3D, 0xBEF7, 0xC242, 0xC49E, 0xC5D3, 0xC5DF, 0xC4C8, 0xC29C, 
    0xBF8E, 0xBC41, 0xB943, 0xB6F7, 0xD215, 0xD45A, 0xD64C, 0xD7CF, 0xD8B7, 0xD8CB, 0xD7DC, 0xD610, 0xD3C2, 0xD13D, 
    0xCEBF, 0xCC85, 0xCABF, 0xC991, 0xC917, 0xC966, 0xCA83, 0xCC46, 0xCE66, 0xD089, 0x2886, 0x2829, 0x2742, 0x2619, 
    0x24F9, 0x2428, 0x239E, 0x232B, 0x22DC, 0x22C0, 0x22E3, 0x2367, 0x2443, 0x2545, 0x263E, 0x26FB, 0x2781, 0x27EE, 
    0x2840, 0x2874, 0xE3A3, 0xE38A, 0xE356, 0xE32A, 0xE32A, 0xE377, 0xE43D, 0xE564, 0xE6AC, 0xE7D7, 0xE8A4, 0xE915, 
    0xE955, 0xE960, 0xE936, 0xE8D3, 0xE7F6, 0xE6A3, 0xE538, 0xE418, 0x123D, 0x1196, 0x1003, 0x0E18, 0x0C69, 0x0B89, 
    0x0B9C, 0x0C3E, 0x0D3C, 0x0E5F, 0x0F73, 0x10A4, 0x1215, 0x1383, 0x14AD, 0x154F, 0x152B, 0x146D, 0x1374, 0x129A, 
    0x0000, 0x021B, 0x040A, 0x05A2, 0x06B6, 0x071C, 0x06C5, 0x05D5, 0x0470, 0x02B6, 0x00CA, 0xFECD, 0xFCE3, 0xFB2D, 
    0xF9CC, 0xF8E4, 0xF8C7, 0xF990, 0xFB09, 0xFCFD, 0x0011, 0xFFB6, 0xFEC0, 0xFD56, 0xFB9F, 0xF9C0, 0xF7E1, 0xF62A, 
    0xF4C0, 0xF3CA, 0xF36F, 0xF3CA, 0xF4C0, 0xF62A, 0xF7E1, 0xF9C0, 0xFB9F, 0xFD56, 0xFEC0, 0xFFB6, 
}; 

static JointIndex sPoeSistersSwayAnimJointIndices[12] = {
    { 0x0000, 0x0002, 0x0000 },
    { 0x0016, 0x002A, 0x003E },
    { 0x0052, 0x0066, 0x007A },
    { 0x0000, 0x008E, 0x00A2 },
    { 0x00B6, 0x00CA, 0x00DE },
    { 0x0000, 0x0000, 0x00F2 },
    { 0x0106, 0x011A, 0x012E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0142, 0x0156 },
}; 

AnimationHeader gPoeSistersSwayAnim = { { 20 }, sPoeSistersSwayAnimFrameData, sPoeSistersSwayAnimJointIndices, 2 }; 

static u8 unaccounted_0014DC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_po_sistersVtx_0014E0[19] = {
    VTX(-290, -1251, -1244, 437, 641, 239, 255, 178, 255),
    VTX(539, -1803, 0, -91, 519, 239, 255, 178, 255),
    VTX(-896, -2607, -300, 165, -44, 239, 255, 178, 255),
    VTX(-1595, -890, -1430, 639, 92, 239, 255, 178, 255),
    VTX(-290, -1251, -1244, 437, 641, 239, 255, 178, 255),
    VTX(-896, -2607, 300, 165, -44, 239, 255, 178, 255),
    VTX(-290, -1251, 1244, 437, 641, 239, 255, 178, 255),
    VTX(-1595, -890, 1430, 639, 92, 239, 255, 178, 255),
    VTX(-896, -2607, -300, -47, -294, 239, 255, 178, 255),
    VTX(539, -1803, 0, -91, 519, 239, 255, 178, 255),
    VTX(539, -1803, 0, -91, 519, 239, 255, 178, 255),
    VTX(-290, -1251, 1244, 437, 641, 239, 255, 178, 255),
    VTX(-207, -1894, -373, -145, 6, 239, 255, 178, 255),
    VTX(-207, -1894, 337, 107, 302, 239, 255, 178, 255),
    VTX(1238, -2425, -6, -166, 852, 239, 255, 178, 255),
    VTX(-993, -2574, -7, 67, -219, 239, 255, 178, 255),
    VTX(-993, -2574, -7, 106, -163, 239, 255, 178, 255),
    VTX(-207, -1894, -373, 124, 305, 239, 255, 178, 255),
    VTX(1238, -2425, -6, -158, 814, 239, 255, 178, 255),
}; 

static Vtx object_po_sistersVtx_001610[10] = {
    VTX(-896, -2607, 300, 425, 398, 24, 157, 63, 255),
    VTX(-1595, -890, 1430, 1004, 512, 8, 199, 105, 255),
    VTX(-1794, -2419, 541, 549, 42, 222, 152, 48, 255),
    VTX(-896, -2607, -300, 118, 398, 15, 150, 203, 255),
    VTX(-1794, -2419, -538, -4, 42, 209, 157, 208, 255),
    VTX(-1595, -890, -1430, -461, 512, 7, 199, 151, 255),
    VTX(-2774, -1545, 750, 655, -179, 181, 167, 27, 255),
    VTX(-2787, -1551, -740, -107, -186, 176, 176, 218, 255),
    VTX(-1595, -890, 1430, 1004, 512, 8, 199, 105, 255),
    VTX(-1595, -890, -1430, -461, 512, 7, 199, 151, 255),
}; 

static Vtx object_po_sistersVtx_0016B0[3] = {
    VTX(-2774, -1545, 750, 665, -81, 181, 167, 27, 255),
    VTX(-3835, 184, 0, 281, 466, 144, 214, 0, 255),
    VTX(-2787, -1551, -740, -97, -80, 176, 176, 218, 255),
}; 

static Vtx object_po_sistersVtx_0016E0[32] = {
    VTX(-4679, -281, 1638, -9, 1, 161, 194, 37, 255),
    VTX(-3410, 3334, -11, 165, 7, 195, 103, 0, 255),
    VTX(-3835, 184, 0, 34, -37, 144, 214, 0, 255),
    VTX(-5185, 2084, 367, 64, 81, 153, 61, 5, 255),
    VTX(-3396, 2908, 1663, 150, -3, 230, 72, 92, 255),
    VTX(-2774, -1545, 750, 32, 48, 181, 167, 27, 255),
    VTX(-4679, -281, 1638, 33, -23, 161, 194, 37, 255),
    VTX(-3835, 184, 0, 29, 5, 144, 214, 0, 255),
    VTX(-1561, 910, 1643, 33, 6, 35, 9, 114, 255),
    VTX(-290, -1251, 1244, -65, 41, 40, 212, 104, 255),
    VTX(-101, 396, 1472, 11, 69, 1, 22, 117, 255),
    VTX(-1595, -890, 1430, -50, -18, 8, 199, 105, 255),
    VTX(-607, 1747, 2, 73, 61, 36, 114, 0, 255),
    VTX(-1307, 2933, -1224, 126, 42, 61, 84, 197, 255),
    VTX(-1307, 2933, 1224, 126, 42, 61, 84, 59, 255),
    VTX(-3396, 2908, 1663, 150, -3, 230, 72, 92, 255),
    VTX(-1595, -890, 1430, 83, 72, 8, 199, 105, 255),
    VTX(-2978, 509, 2748, 97, 8, 16, 249, 118, 255),
    VTX(-2978, 509, 2748, 129, -8, 16, 249, 118, 255),
    VTX(-3396, 2908, 1663, 165, -34, 230, 72, 92, 255),
    VTX(-4679, -281, 1638, 42, -45, 161, 194, 37, 255),
    VTX(-1561, 910, 1643, 124, 55, 35, 9, 114, 255),
    VTX(-101, 397, -1472, 11, 69, 1, 22, 139, 255),
    VTX(-290, -1251, -1244, -65, 41, 40, 212, 152, 255),
    VTX(-1560, 910, -1643, 33, 6, 35, 9, 142, 255),
    VTX(-1595, -890, -1430, -50, -18, 7, 199, 151, 255),
    VTX(-2978, 509, -2749, 0, 17, 16, 249, 138, 255),
    VTX(-1560, 910, -1643, 80, 61, 35, 9, 142, 255),
    VTX(-1595, -890, -1430, 37, 76, 7, 199, 151, 255),
    VTX(-4679, -281, -1638, -43, -29, 161, 194, 218, 255),
    VTX(-3396, 2909, -1663, 79, -17, 230, 72, 164, 255),
    VTX(-2774, -1545, -750, 2, 41, 198, 154, 234, 255),
}; 

static Vtx object_po_sistersVtx_0018E0[30] = {
    VTX(-5185, 2084, -367, 64, 81, 154, 62, 251, 255),
    VTX(-3396, 2909, -1663, 150, -3, 230, 72, 164, 255),
    VTX(-4679, -281, -1638, -9, 1, 161, 194, 218, 255),
    VTX(-3396, 2909, -1663, 150, -3, 230, 72, 164, 255),
    VTX(-3410, 3334, -11, 165, 7, 195, 103, 0, 255),
    VTX(-3835, 184, 0, 34, -37, 144, 214, 0, 255),
    VTX(-3835, 184, 0, 36, -14, 144, 214, 0, 255),
    VTX(-4679, -281, -1638, -43, -29, 161, 194, 218, 255),
    VTX(-2774, -1545, -750, 2, 41, 198, 154, 234, 255),
    VTX(-3396, 2908, 1663, 122, -58, 230, 72, 92, 255),
    VTX(-1307, 2933, 1224, 126, 42, 61, 84, 59, 255),
    VTX(-3410, 3334, -11, 141, -54, 195, 103, 0, 255),
    VTX(-1307, 2933, -1224, 126, 42, 61, 84, 197, 255),
    VTX(-3396, 2909, -1663, 122, -58, 230, 72, 164, 255),
    VTX(-101, 396, 1472, 11, 69, 1, 22, 117, 255),
    VTX(-607, 1747, 2, 73, 61, 36, 114, 0, 255),
    VTX(-1561, 910, 1643, 33, 6, 35, 9, 114, 255),
    VTX(-101, 397, -1472, 11, 69, 1, 22, 139, 255),
    VTX(-1560, 910, -1643, 33, 6, 35, 9, 142, 255),
    VTX(539, -1803, 0, -89, 74, 41, 144, 0, 255),
    VTX(36, -965, 1070, -51, 60, 255, 187, 98, 255),
    VTX(-290, -1251, 1244, -65, 41, 40, 212, 104, 255),
    VTX(36, -965, -1070, -51, 60, 255, 187, 158, 255),
    VTX(-290, -1251, -1244, -65, 41, 40, 212, 152, 255),
    VTX(-1561, 910, 1643, 124, 55, 35, 9, 114, 255),
    VTX(-3396, 2908, 1663, 124, -17, 230, 72, 92, 255),
    VTX(-2978, 509, 2748, 97, 8, 16, 249, 118, 255),
    VTX(-3396, 2909, -1663, 79, -17, 230, 72, 164, 255),
    VTX(-1560, 910, -1643, 80, 61, 35, 9, 142, 255),
    VTX(-2978, 509, -2749, 0, 17, 16, 249, 138, 255),
}; 

static Vtx object_po_sistersVtx_001AC0[10] = {
    VTX(-1745, -2400, -1318, 1039, 651, 200, 162, 208, 255),
    VTX(-3396, -1471, -1193, 1017, -709, 206, 177, 181, 255),
    VTX(-1325, 318, -1821, -105, 412, 237, 237, 140, 255),
    VTX(-1325, 318, 1821, -105, 412, 237, 237, 116, 255),
    VTX(-3396, -1471, 1193, 1017, -709, 200, 162, 48, 255),
    VTX(-1745, -2400, 1318, 1039, 651, 206, 177, 75, 255),
    VTX(-1745, -2400, -1318, 47, 495, 200, 162, 208, 255),
    VTX(-3396, -1471, 1193, 977, 0, 200, 162, 48, 255),
    VTX(-3396, -1471, -1193, 47, 0, 206, 177, 181, 255),
    VTX(-1745, -2400, 1318, 977, 495, 206, 177, 75, 255),
}; 

static Vtx object_po_sistersVtx_001B60[18] = {
    VTX(2393, 3460, -1225, 2274, 785, 201, 69, 175, 255),
    VTX(-607, 1747, 2, 2081, -156, 36, 114, 0, 255),
    VTX(2393, 3460, 1225, 1830, 762, 201, 69, 81, 255),
    VTX(532, -126, -1998, 3112, 216, 213, 237, 146, 255),
    VTX(2875, -2138, -947, 3822, 932, 233, 161, 188, 255),
    VTX(36, -965, -1070, 3554, 114, 255, 187, 158, 255),
    VTX(539, -1803, 0, 4067, 199, 41, 144, 0, 255),
    VTX(2875, -2138, 947, 4365, 914, 233, 161, 68, 255),
    VTX(36, -965, 1070, 4578, 96, 255, 187, 98, 255),
    VTX(2875, -2138, 947, 269, 914, 233, 161, 68, 255),
    VTX(532, -126, 1998, 981, 178, 213, 237, 110, 255),
    VTX(36, -965, 1070, 482, 96, 255, 187, 98, 255),
    VTX(3065, 551, 2343, 1175, 960, 243, 246, 118, 255),
    VTX(3065, 551, -2343, 2922, 1004, 243, 246, 138, 255),
    VTX(-101, 396, 1472, 1392, -76, 1, 22, 117, 255),
    VTX(36, -965, -1070, 3554, 114, 255, 187, 158, 255),
    VTX(-101, 397, -1472, 2744, -47, 1, 22, 139, 255),
    VTX(2393, 3460, -1225, 2274, 785, 201, 69, 175, 255),
}; 

static Vtx object_po_sistersVtx_001C80[3] = {
    VTX(36, -965, 1070, 0, 1024, 255, 187, 98, 255),
    VTX(532, -126, 1998, 0, 1024, 213, 237, 110, 255),
    VTX(-101, 396, 1472, 0, 1024, 1, 22, 117, 255),
}; 

Gfx gPoeSistersMegFaceDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_0056D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG),
    gsDPSetPrimColor(0, 0, 239, 255, 178, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_0014E0[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 8, 9, 5, 0),
    gsSP2Triangles(5, 10, 11, 0, 12, 13, 14, 0),
    gsSP2Triangles(13, 15, 14, 0, 16, 17, 18, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_005AF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsSPSetGeometryMode(G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_po_sistersVtx_001610[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsSP2Triangles(3, 2, 4, 0, 5, 3, 4, 0),
    gsSP2Triangles(4, 6, 7, 0, 4, 2, 6, 0),
    gsSP2Triangles(8, 6, 2, 0, 7, 9, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx gPoeSistersMegBodyDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_005AF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_0016B0[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_0058D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 2, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 160, 100, 255, 255),
    gsSPVertex(&object_po_sistersVtx_0016E0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(1, 3, 4, 0, 5, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 11, 9, 0),
    gsSP2Triangles(12, 13, 14, 0, 0, 15, 3, 0),
    gsSP2Triangles(5, 16, 6, 0, 16, 17, 6, 0),
    gsSP2Triangles(18, 19, 20, 0, 16, 21, 17, 0),
    gsSP2Triangles(22, 23, 24, 0, 23, 25, 24, 0),
    gsSP2Triangles(26, 27, 28, 0, 29, 30, 26, 0),
    gsSP2Triangles(29, 26, 28, 0, 29, 28, 31, 0),
    gsSPVertex(&object_po_sistersVtx_0018E0[0], 30, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(4, 0, 2, 0, 5, 4, 2, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 11, 0, 14, 15, 10, 0),
    gsSP2Triangles(14, 10, 16, 0, 15, 17, 12, 0),
    gsSP2Triangles(12, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(20, 14, 21, 0, 22, 19, 23, 0),
    gsSP2Triangles(17, 22, 23, 0, 10, 12, 11, 0),
    gsSP2Triangles(24, 25, 26, 0, 16, 10, 9, 0),
    gsSP2Triangles(27, 28, 29, 0, 12, 18, 13, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_0058F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_001AC0[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 9, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_004AD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 160, 100, 255, 255),
    gsSPVertex(&object_po_sistersVtx_001B60[0], 18, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(4, 6, 5, 0, 7, 8, 6, 0),
    gsSP2Triangles(9, 10, 11, 0, 9, 12, 10, 0),
    gsSP2Triangles(4, 3, 13, 0, 10, 2, 14, 0),
    gsSP2Triangles(3, 15, 16, 0, 14, 2, 1, 0),
    gsSP2Triangles(17, 16, 1, 0, 17, 3, 16, 0),
    gsSP2Triangles(3, 17, 13, 0, 12, 2, 10, 0),
    gsSP1Triangle(7, 6, 4, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_001C80[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsSPEndDisplayList(),
}; 

static Vtx sPoeSistersSkelVtx_0020A8[19] = {
    VTX(1219, 2024, -3, 824, 751, 206, 109, 0, 255),
    VTX(-254, 1157, -1100, 306, 410, 224, 81, 174, 255),
    VTX(-254, 1157, 1100, 1386, 255, 224, 81, 82, 255),
    VTX(2427, -1715, 0, 833, 610, 39, 143, 0, 255),
    VTX(2387, 418, 1667, 1640, 717, 18, 12, 118, 255),
    VTX(-300, -910, 1125, 1409, 19, 239, 178, 89, 255),
    VTX(-300, -910, -1125, 305, 177, 239, 178, 167, 255),
    VTX(2387, 418, -1667, 4, 950, 18, 11, 138, 255),
    VTX(-254, 1157, 1100, 633, 207, 224, 81, 82, 255),
    VTX(2387, 418, 1667, 113, 785, 18, 12, 118, 255),
    VTX(1219, 2024, -3, 786, 549, 206, 109, 0, 255),
    VTX(4122, 89, -2, -174, 1167, 119, 245, 0, 255),
    VTX(2202, 3317, -3, 1136, 789, 22, 117, 0, 255),
    VTX(2202, 3317, -3, 338, 774, 22, 117, 0, 255),
    VTX(4122, 89, -2, 1595, 1163, 119, 245, 0, 255),
    VTX(2387, 418, -1667, 1355, 843, 18, 11, 138, 255),
    VTX(-254, 1157, -1100, 907, 353, 224, 81, 174, 255),
    VTX(1219, 2024, -3, 714, 611, 206, 109, 0, 255),
    VTX(4122, 89, -2, 804, 1180, 119, 245, 0, 255),
}; 

static Vtx sPoeSistersSkelVtx_0021D8[6] = {
    VTX(-150, 0, 455, 0, 1024, 171, 249, 83, 255),
    VTX(-150, 450, -361, 0, 1024, 168, 64, 208, 255),
    VTX(-150, -503, -361, 0, 1024, 182, 169, 220, 255),
    VTX(1419, 0, -1065, 0, 1024, 35, 8, 142, 255),
    VTX(1978, -510, 639, 0, 1024, 46, 163, 59, 255),
    VTX(1459, 1282, 639, 0, 1024, 13, 113, 36, 255),
}; 

static Vtx sPoeSistersSkelVtx_002238[6] = {
    VTX(-210, 619, -619, 1039, 784, 0, 84, 84, 255),
    VTX(-210, -654, 654, 1039, -302, 0, 84, 84, 255),
    VTX(2690, -17, 17, -547, 241, 0, 84, 84, 255),
    VTX(2690, -17, -17, -547, 241, 0, 84, 172, 255),
    VTX(-210, -654, -654, 1039, -302, 0, 84, 172, 255),
    VTX(-210, 619, 619, 1039, 784, 0, 84, 172, 255),
}; 

static Vtx sPoeSistersSkelVtx_002298[6] = {
    VTX(-311, 619, -619, 1025, 784, 0, 84, 84, 255),
    VTX(-311, -654, 654, 1025, -302, 0, 84, 84, 255),
    VTX(3189, -17, 17, -606, 241, 0, 84, 84, 255),
    VTX(3189, -17, -17, -606, 241, 0, 84, 172, 255),
    VTX(-311, -654, -654, 1025, -302, 0, 84, 172, 255),
    VTX(-311, 619, 619, 1025, 784, 0, 84, 172, 255),
}; 

static Vtx sPoeSistersSkelVtx_0022F8[6] = {
    VTX(-576, 619, -619, 1032, 784, 0, 84, 84, 255),
    VTX(-572, -583, 583, 1031, -241, 0, 84, 84, 255),
    VTX(5126, 61, -54, -750, 302, 0, 84, 84, 255),
    VTX(5126, 61, 54, -750, 302, 0, 84, 172, 255),
    VTX(-572, -583, -583, 1031, -241, 0, 84, 172, 255),
    VTX(-576, 619, 619, 1032, 784, 0, 84, 172, 255),
}; 

static Vtx object_po_sistersVtx_002358[11] = {
    VTX(1351, 1545, 1, 0, 110, 113, 39, 0, 255),
    VTX(841, -1565, 1, 0, 906, 0, 136, 0, 255),
    VTX(841, 1545, -509, 174, 110, 0, 39, 143, 255),
    VTX(841, 1545, 511, -174, 110, 0, 39, 113, 255),
    VTX(331, 1545, 1, 0, 110, 143, 39, 0, 255),
    VTX(841, 2076, 1, 0, -26, 0, 120, 0, 255),
    VTX(-569, -2151, 1, 256, 42, 137, 4, 0, 255),
    VTX(841, -2151, 1411, -145, 42, 0, 182, 94, 255),
    VTX(841, -513, 1, 256, 442, 0, 120, 0, 255),
    VTX(2251, -2151, 1, 256, 42, 119, 4, 0, 255),
    VTX(841, -2151, -1409, 657, 42, 0, 182, 162, 255),
}; 

static Vtx sPoeSistersSkelVtx_002408[4] = {
    VTX(297, -300, 296, 0, 512, 18, 103, 58, 255),
    VTX(1548, -1050, 1233, 0, 512, 18, 103, 58, 255),
    VTX(1109, -300, 167, 0, 512, 10, 99, 66, 255),
    VTX(1071, -1050, 1476, 0, 512, 26, 105, 50, 255),
}; 

static Vtx sPoeSistersSkelVtx_002448[6] = {
    VTX(-150, 300, -450, 0, 512, 195, 88, 202, 255),
    VTX(-150, 300, 450, 0, 512, 204, 77, 75, 255),
    VTX(2219, -450, -208, 0, 512, 93, 71, 27, 255),
    VTX(1485, -450, -1350, 0, 512, 218, 192, 162, 255),
    VTX(983, -450, 732, 0, 512, 238, 190, 98, 255),
    VTX(-150, -300, 0, 0, 512, 185, 160, 255, 255),
}; 

Gfx sPoeSistersSkelLimbDL_0024A8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_004AD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, ENVIRONMENT, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&sPoeSistersSkelVtx_0020A8[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 6, 7, 0, 8, 9, 10, 0),
    gsSP2Triangles(9, 11, 12, 0, 13, 14, 15, 0),
    gsSP2Triangles(4, 2, 5, 0, 7, 6, 1, 0),
    gsSP2Triangles(15, 16, 17, 0, 5, 6, 3, 0),
    gsSP2Triangles(12, 10, 9, 0, 15, 17, 13, 0),
    gsSP2Triangles(4, 3, 18, 0, 18, 3, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx sPoeSistersSkelLimbDL_002570[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&sPoeSistersSkelVtx_0021D8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 3, 1, 0, 3, 5, 4, 0),
    gsSP2Triangles(4, 5, 0, 0, 5, 1, 0, 0),
    gsSP2Triangles(4, 0, 2, 0, 2, 1, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx sPoeSistersSkelLimbDL_0025E8[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sPoeSistersSkelTex_0052D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&sPoeSistersSkelVtx_002238[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sPoeSistersSkelLimbDL_002680[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sPoeSistersSkelTex_0052D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&sPoeSistersSkelVtx_002298[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sPoeSistersSkelLimbDL_002718[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sPoeSistersSkelTex_0052D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&sPoeSistersSkelVtx_0022F8[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx gPoSistersTorchDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_0048D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_po_sistersVtx_002358[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 1, 0, 0),
    gsSP2Triangles(4, 1, 3, 0, 1, 4, 2, 0),
    gsSP2Triangles(2, 5, 0, 0, 3, 5, 4, 0),
    gsSP2Triangles(5, 3, 0, 0, 5, 2, 4, 0),
    gsSP2Triangles(6, 7, 8, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 8, 9, 0, 6, 8, 10, 0),
    gsSP2Triangles(10, 9, 7, 0, 6, 10, 7, 0),
    gsSPEndDisplayList(),
}; 

Gfx sPoeSistersSkelLimbDL_002870[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0, 0, 0, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&sPoeSistersSkelVtx_002408[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsDPPipeSync(),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sPoeSistersSkelVtx_002448[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(1, 4, 2, 0, 1, 0, 5, 0),
    gsSP2Triangles(5, 2, 4, 0, 5, 3, 2, 0),
    gsSP2Triangles(5, 0, 3, 0, 1, 5, 4, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_po_sistersVtx_002908[19] = {
    VTX(210, -1201, 1272, 434, -343, 213, 255, 151, 255),
    VTX(-944, -2369, 541, 312, 559, 213, 255, 151, 255),
    VTX(54, -2407, 0, -108, 291, 213, 255, 151, 255),
    VTX(-945, -1290, 1321, 640, 157, 213, 255, 151, 255),
    VTX(-1882, -1616, 858, 569, 746, 213, 255, 151, 255),
    VTX(-2236, -1821, 0, 277, 1384, 213, 255, 151, 255),
    VTX(-944, -2369, -538, -141, 1117, 213, 255, 151, 255),
    VTX(-1882, -1616, -858, -151, 1633, 213, 255, 151, 255),
    VTX(-945, -1290, -1321, -469, 1522, 213, 255, 151, 255),
    VTX(-945, -1290, -1321, 610, 194, 213, 255, 151, 255),
    VTX(210, -1201, -1272, 477, -315, 213, 255, 151, 255),
    VTX(-944, -2369, -538, 266, 561, 213, 255, 151, 255),
    VTX(54, -2407, 0, -88, 258, 213, 255, 151, 255),
    VTX(789, -1603, 0, -128, 71, 213, 255, 151, 255),
    VTX(789, -1603, 0, -173, 107, 213, 255, 151, 255),
    VTX(293, -1644, 374, 8, 117, 213, 255, 151, 255),
    VTX(638, -3525, -6, -282, -192, 213, 255, 151, 255),
    VTX(293, -1644, -415, -253, 438, 213, 255, 151, 255),
    VTX(-943, -2324, -7, 24, 677, 213, 255, 151, 255),
}; 

static Vtx object_po_sistersVtx_002A38[8] = {
    VTX(-4516, 77, -765, 26, -93, 169, 15, 175, 255),
    VTX(-3185, 584, -1129, 32, 224, 197, 49, 164, 255),
    VTX(-3487, -1851, 0, 103, 276, 174, 169, 0, 255),
    VTX(-4518, 74, 796, 219, -93, 171, 14, 82, 255),
    VTX(-3185, 584, 1129, 311, 224, 187, 55, 81, 255),
    VTX(-4717, -624, 15, 123, -93, 137, 252, 0, 255),
    VTX(-3756, 973, 31, 171, 39, 196, 104, 0, 255),
    VTX(-4717, -624, 15, 123, -93, 137, 252, 0, 255),
}; 

static Vtx object_po_sistersVtx_002AB8[11] = {
    VTX(-953, -1126, -1840, 0, 99, 246, 206, 148, 255),
    VTX(-2464, -1913, -703, -99, 272, 245, 153, 196, 255),
    VTX(-2157, 333, -1261, 146, 214, 186, 63, 183, 255),
    VTX(-257, 1806, 1082, 352, 10, 206, 82, 71, 255),
    VTX(-257, 1806, -1046, 352, 10, 218, 65, 163, 255),
    VTX(150, -1395, -1324, -20, -4, 250, 170, 173, 255),
    VTX(150, -1395, 1370, -20, -4, 242, 161, 71, 255),
    VTX(-549, -1646, 0, -54, 80, 15, 137, 0, 255),
    VTX(-953, -1126, 1840, 0, 99, 245, 206, 108, 255),
    VTX(-2464, -1913, 703, -99, 272, 245, 153, 59, 255),
    VTX(-2157, 333, 1287, 146, 214, 194, 45, 92, 255),
}; 

static Vtx object_po_sistersVtx_002B68[41] = {
    VTX(-3487, -1851, 0, -66, 40, 174, 169, 0, 255),
    VTX(-1062, -2710, 1279, -12, 474, 213, 165, 64, 255),
    VTX(-2323, -1263, 1837, 176, 165, 194, 219, 95, 255),
    VTX(-1062, -2710, 1279, 454, 493, 213, 165, 64, 255),
    VTX(-3487, -1851, 0, 227, -88, 174, 169, 0, 255),
    VTX(-1062, -2710, -1279, -96, 500, 213, 165, 192, 255),
    VTX(681, 3559, 0, 575, 454, 227, 116, 0, 255),
    VTX(-2202, 1972, 1245, 371, 21, 193, 82, 61, 255),
    VTX(577, -26, 2822, -161, 432, 225, 17, 114, 255),
    VTX(-3185, 584, 1129, 166, -411, 187, 55, 81, 255),
    VTX(681, 3559, 0, -41, 446, 227, 116, 0, 255),
    VTX(-2202, 1972, -1245, 88, 118, 183, 81, 208, 255),
    VTX(-2202, 1972, 1245, -169, 118, 193, 82, 61, 255),
    VTX(-3185, 584, -1129, 216, -211, 197, 49, 164, 255),
    VTX(-3185, 584, 1129, -297, -211, 187, 55, 81, 255),
    VTX(-1062, -2710, -1279, 42, 473, 213, 165, 192, 255),
    VTX(-2323, -1263, -1837, 276, 135, 194, 219, 161, 255),
    VTX(577, -26, -2822, 711, 440, 225, 17, 142, 255),
    VTX(-3185, 584, -1129, 510, -202, 197, 49, 164, 255),
    VTX(-3487, -1851, 0, 52, -117, 174, 169, 0, 255),
    VTX(-2323, -1263, -1837, 276, 135, 194, 219, 161, 255),
    VTX(577, -26, -2822, -161, 432, 225, 17, 142, 255),
    VTX(-2202, 1972, -1245, 371, 21, 183, 81, 208, 255),
    VTX(681, 3559, 0, 575, 454, 227, 116, 0, 255),
    VTX(-3185, 584, -1129, 166, -411, 197, 49, 164, 255),
    VTX(577, -26, 2822, 531, 432, 225, 17, 114, 255),
    VTX(-2323, -1263, 1837, 176, 165, 194, 219, 95, 255),
    VTX(-3185, 584, 1129, 364, -144, 187, 55, 81, 255),
    VTX(-4027, -668, 0, 258, -627, 75, 163, 0, 255),
    VTX(-4878, 3245, 2313, 556, 428, 68, 217, 90, 255),
    VTX(-7052, 501, 1269, -163, 426, 243, 155, 62, 255),
    VTX(-4878, 3245, 2313, -4, 397, 68, 217, 90, 255),
    VTX(-4027, -668, 0, 205, -493, 75, 163, 0, 255),
    VTX(-3438, 3632, 0, 382, 485, 118, 240, 0, 255),
    VTX(-4027, -668, 0, 220, -518, 75, 163, 0, 255),
    VTX(-7052, 501, 1269, 553, 468, 243, 155, 62, 255),
    VTX(-7052, 501, -1269, -25, 451, 243, 155, 194, 255),
    VTX(-4027, -668, 0, 258, -627, 75, 163, 0, 255),
    VTX(-7052, 501, -1269, -163, 426, 243, 155, 194, 255),
    VTX(-4878, 3245, -2313, 556, 428, 68, 217, 166, 255),
    VTX(-4878, 3245, -2313, -4, 397, 68, 217, 166, 255),
}; 

static Vtx object_po_sistersVtx_002DF8[12] = {
    VTX(-257, 1806, -1046, 2936, -22, 218, 65, 163, 255),
    VTX(-257, 1806, 1082, 2173, -22, 206, 82, 71, 255),
    VTX(2293, 3127, -1054, 2871, 982, 204, 100, 215, 255),
    VTX(2293, 3127, 1054, 2249, 982, 210, 90, 63, 255),
    VTX(3165, 212, -2537, 3836, 1050, 224, 1, 141, 255),
    VTX(3165, 212, 2537, 1284, 1050, 226, 1, 116, 255),
    VTX(3275, -2578, -1332, 4689, 1014, 216, 151, 214, 255),
    VTX(150, -1395, -1324, 4523, 138, 250, 170, 173, 255),
    VTX(150, -1395, 1370, 5731, 138, 242, 161, 71, 255),
    VTX(3275, -2578, 1332, 5551, 1014, 221, 162, 64, 255),
    VTX(150, -1395, 1370, 611, 138, 242, 161, 71, 255),
    VTX(3275, -2578, 1332, 431, 1014, 221, 162, 64, 255),
}; 

Gfx gPoeSistersJoelleFaceDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_0056D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 240, 255, 180, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_002908[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 0, 3, 0),
    gsSP2Triangles(3, 4, 1, 0, 1, 4, 5, 0),
    gsSP2Triangles(6, 1, 5, 0, 6, 2, 1, 0),
    gsSP2Triangles(5, 7, 6, 0, 6, 7, 8, 0),
    gsSP2Triangles(9, 10, 11, 0, 12, 11, 10, 0),
    gsSP2Triangles(10, 13, 12, 0, 2, 14, 0, 0),
    gsSP2Triangles(15, 16, 17, 0, 16, 15, 18, 0),
    gsSP1Triangle(17, 16, 18, 0),
    gsSPEndDisplayList(),
}; 

Gfx gPoeSistersJoelleBodyDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_005CF8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_002A38[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSP2Triangles(2, 5, 0, 0, 2, 3, 5, 0),
    gsSP2Triangles(6, 3, 4, 0, 1, 6, 4, 0),
    gsSP2Triangles(0, 6, 1, 0, 6, 7, 3, 0),
    gsSP1Triangle(6, 0, 7, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_0058D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 2, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 250, 80, 0, 255),
    gsSPVertex(&object_po_sistersVtx_002AB8[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 2, 0),
    gsSP2Triangles(5, 6, 7, 0, 2, 4, 0, 0),
    gsSP2Triangles(4, 5, 0, 0, 7, 6, 8, 0),
    gsSP2Triangles(1, 7, 9, 0, 8, 3, 10, 0),
    gsSP2Triangles(10, 9, 8, 0, 9, 7, 8, 0),
    gsSP2Triangles(3, 2, 10, 0, 3, 8, 6, 0),
    gsSP2Triangles(7, 0, 5, 0, 0, 7, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_005D78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_002B68[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 7, 9, 8, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 14, 0),
    gsSP2Triangles(11, 14, 12, 0, 15, 16, 17, 0),
    gsSP2Triangles(16, 18, 17, 0, 15, 19, 20, 0),
    gsSP2Triangles(19, 18, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(21, 24, 22, 0, 25, 26, 1, 0),
    gsSP2Triangles(25, 27, 26, 0, 27, 0, 2, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&object_po_sistersVtx_002B68[31], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 1, 9, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_004AD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 250, 80, 0, 255),
    gsSPVertex(&object_po_sistersVtx_002DF8[0], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(2, 4, 0, 0, 1, 5, 3, 0),
    gsSP2Triangles(4, 6, 7, 0, 8, 7, 6, 0),
    gsSP2Triangles(8, 6, 9, 0, 5, 10, 11, 0),
    gsSP2Triangles(0, 4, 7, 0, 1, 10, 5, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_po_sistersVtx_003208[9] = {
    VTX(-5081, 2029, -707, 60, -49, 164, 53, 202, 255),
    VTX(-4667, 2575, -50, 258, -49, 186, 97, 0, 255),
    VTX(-3345, 2581, -1279, -112, 195, 17, 86, 175, 255),
    VTX(-5081, 2029, 607, 456, -49, 164, 53, 54, 255),
    VTX(-5308, 1344, -50, 258, -49, 137, 11, 0, 255),
    VTX(-4818, 349, 1179, 628, 195, 188, 200, 81, 255),
    VTX(-3345, 2581, 1179, 628, 195, 17, 86, 81, 255),
    VTX(-4818, 349, -1279, -112, 195, 188, 200, 175, 255),
    VTX(-2001, 376, -50, 258, 768, 102, 194, 0, 255),
}; 

static Vtx object_po_sistersVtx_003298[9] = {
    VTX(-2382, -1766, -673, -17, 34, 159, 224, 193, 255),
    VTX(-2985, -66, -744, 48, 108, 150, 250, 202, 255),
    VTX(-1760, 1010, -1999, 100, -1, 189, 30, 162, 255),
    VTX(-1545, -1140, -1615, 13, -42, 224, 207, 152, 255),
    VTX(-1761, 1010, 2017, 100, -1, 188, 30, 94, 255),
    VTX(-2985, -66, 744, 48, 108, 149, 250, 53, 255),
    VTX(-2382, -1766, 673, -17, 34, 159, 224, 63, 255),
    VTX(-1545, -1140, 1615, 13, -42, 224, 207, 104, 255),
    VTX(-2157, 2133, -46, 143, 48, 187, 97, 255, 255),
}; 

static Vtx object_po_sistersVtx_003328[15] = {
    VTX(-3854, 1026, 0, 24, 394, 140, 27, 0, 255),
    VTX(-2205, 1012, -2096, -174, 32, 167, 39, 186, 255),
    VTX(-2903, -1581, -1000, 242, 24, 146, 231, 217, 255),
    VTX(-2205, 1012, -2096, 429, 38, 167, 39, 186, 255),
    VTX(-3854, 1026, 0, 256, 384, 140, 27, 0, 255),
    VTX(-1795, 2905, 0, 80, 31, 175, 88, 0, 255),
    VTX(-3854, 1026, 0, 131, 384, 140, 27, 0, 255),
    VTX(-2205, 1012, 2096, -53, 32, 167, 38, 70, 255),
    VTX(-1795, 2905, 0, 374, 32, 175, 88, 0, 255),
    VTX(-3854, 1026, 0, 116, 396, 140, 27, 0, 255),
    VTX(-2903, -1581, -1000, -53, 34, 146, 231, 217, 255),
    VTX(-2905, -1581, 948, 256, 30, 146, 230, 39, 255),
    VTX(-2905, -1581, 948, -81, 30, 146, 230, 39, 255),
    VTX(-2205, 1012, 2096, 278, 30, 167, 38, 70, 255),
    VTX(-3854, 1026, 0, 134, 373, 140, 27, 0, 255),
}; 

static Vtx object_po_sistersVtx_003418[19] = {
    VTX(-1760, 1010, -1999, 2767, -440, 189, 30, 162, 255),
    VTX(152, 586, -2552, 2856, 287, 241, 15, 138, 255),
    VTX(-1545, -1140, -1615, 3457, -375, 224, 207, 152, 255),
    VTX(3065, 562, -2512, 2946, 1013, 5, 220, 142, 255),
    VTX(-1761, 1010, 2017, 1327, -440, 188, 30, 94, 255),
    VTX(2593, 3327, 949, 1867, 871, 235, 95, 70, 255),
    VTX(-2157, 2133, -46, 2062, -559, 187, 97, 255, 255),
    VTX(2875, -1978, 1199, 4451, 956, 241, 150, 54, 255),
    VTX(839, -1853, 0, 4096, 343, 233, 139, 0, 255),
    VTX(2875, -1978, -1199, 3741, 956, 241, 150, 202, 255),
    VTX(310, -1201, -1495, 3472, 184, 247, 173, 170, 255),
    VTX(2593, 3327, -949, 2229, 871, 235, 94, 185, 255),
    VTX(152, 586, 2561, 1238, 287, 242, 15, 118, 255),
    VTX(3065, 562, 2512, 1150, 1013, 5, 220, 114, 255),
    VTX(310, -1201, 1495, 4720, 184, 247, 173, 86, 255),
    VTX(-1545, -1140, 1615, 639, -375, 224, 207, 104, 255),
    VTX(152, 586, -2552, 2856, 287, 241, 15, 138, 255),
    VTX(310, -1201, 1495, 624, 184, 247, 173, 86, 255),
    VTX(2875, -1978, 1199, 355, 956, 241, 150, 54, 255),
}; 

static Vtx object_po_sistersVtx_003548[14] = {
    VTX(-1244, -2769, 541, 348, -127, 224, 255, 178, 255),
    VTX(-2382, -1766, 673, 368, -492, 224, 255, 178, 255),
    VTX(-2382, -1766, -673, 159, -492, 224, 255, 178, 255),
    VTX(-1244, -2769, -538, 180, -127, 224, 255, 178, 255),
    VTX(-146, -2857, 0, 264, 224, 224, 255, 178, 255),
    VTX(310, -1201, -1495, -1, 370, 224, 255, 178, 255),
    VTX(-1545, -1140, 1615, 528, -224, 224, 255, 178, 255),
    VTX(310, -1201, 1495, 528, 370, 224, 255, 178, 255),
    VTX(839, -1853, 0, 264, 539, 224, 255, 178, 255),
    VTX(543, -1894, -523, 183, 412, 224, 255, 178, 255),
    VTX(543, -1894, 472, 337, 412, 224, 255, 178, 255),
    VTX(-362, -3925, -6, 263, 251, 224, 255, 178, 255),
    VTX(-643, -2174, -7, 263, 65, 224, 255, 178, 255),
    VTX(-1545, -1140, -1615, 0, -224, 224, 255, 178, 255),
}; 

Gfx gPoeSistersBethBodyDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_006078, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_003208[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 3, 6, 0, 7, 5, 4, 0),
    gsSP2Triangles(4, 0, 7, 0, 4, 3, 1, 0),
    gsSP2Triangles(6, 2, 1, 0, 1, 0, 4, 0),
    gsSP2Triangles(5, 7, 8, 0, 2, 8, 7, 0),
    gsSP2Triangles(5, 8, 6, 0, 2, 6, 8, 0),
    gsSP2Triangles(5, 6, 3, 0, 2, 7, 0, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_0058D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 2, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 0, 157, 155, 255),
    gsSPVertex(&object_po_sistersVtx_003298[0], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(1, 8, 2, 0, 0, 6, 5, 0),
    gsSP2Triangles(0, 5, 1, 0, 4, 8, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_006278, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_003328[0], 15, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP1Triangle(12, 13, 14, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_004AD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 0, 157, 155, 255),
    gsSPVertex(&object_po_sistersVtx_003418[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(9, 8, 10, 0, 5, 11, 6, 0),
    gsSP2Triangles(4, 12, 5, 0, 12, 13, 5, 0),
    gsSP2Triangles(7, 14, 8, 0, 15, 12, 4, 0),
    gsSP2Triangles(15, 13, 12, 0, 0, 11, 16, 0),
    gsSP2Triangles(11, 3, 16, 0, 0, 6, 11, 0),
    gsSP2Triangles(17, 18, 13, 0, 9, 10, 3, 0),
    gsSP2Triangles(17, 13, 15, 0, 3, 10, 2, 0),
    gsSPEndDisplayList(),
}; 

Gfx gPoeSistersBethFaceDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_005F78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 240, 255, 180, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_003548[0], 14, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 3, 5, 0, 6, 1, 0, 0),
    gsSP2Triangles(0, 4, 7, 0, 0, 7, 6, 0),
    gsSP2Triangles(4, 0, 3, 0, 4, 8, 7, 0),
    gsSP2Triangles(9, 10, 11, 0, 10, 12, 11, 0),
    gsSP2Triangles(12, 9, 11, 0, 13, 5, 3, 0),
    gsSP2Triangles(5, 8, 4, 0, 2, 13, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_po_sistersVtx_003948[8] = {
    VTX(-3968, -276, 566, 135, -10, 18, 220, 112, 255),
    VTX(-3867, -825, 11, 81, -9, 17, 138, 0, 255),
    VTX(-2687, -1151, 0, 79, 142, 188, 158, 0, 255),
    VTX(-3966, -273, -544, 26, -9, 18, 222, 143, 255),
    VTX(-4106, 323, 31, 83, -40, 20, 118, 1, 255),
    VTX(-2685, -216, -744, 6, 155, 193, 17, 156, 255),
    VTX(-2685, -216, 744, 153, 155, 194, 17, 101, 255),
    VTX(-2785, 684, 0, 79, 155, 178, 90, 0, 255),
}; 

static Vtx object_po_sistersVtx_0039C8[11] = {
    VTX(-1432, -1616, -1141, 1, -17, 191, 214, 165, 255),
    VTX(-2685, -216, -744, 63, 69, 193, 17, 156, 255),
    VTX(-1560, 710, -1567, 114, 2, 210, 21, 148, 255),
    VTX(-1561, 710, 1581, 114, 2, 210, 20, 108, 255),
    VTX(-2685, -216, 744, 63, 69, 194, 17, 101, 255),
    VTX(-1432, -1616, 1141, 1, -17, 191, 213, 91, 255),
    VTX(-1457, 1883, -746, 171, 2, 189, 90, 214, 255),
    VTX(-1457, 1883, 760, 171, 2, 185, 82, 50, 255),
    VTX(-2785, 684, 0, 106, 80, 178, 90, 0, 255),
    VTX(-2687, -1151, 0, 17, 65, 188, 158, 0, 255),
    VTX(-1836, -2221, 0, -31, 6, 162, 182, 0, 255),
}; 

static Vtx object_po_sistersVtx_003A78[11] = {
    VTX(-4106, 323, 31, 467, -138, 20, 118, 1, 255),
    VTX(-5762, -204, 1466, 275, 415, 54, 32, 102, 255),
    VTX(-3968, -276, 566, 127, -241, 18, 220, 112, 255),
    VTX(-5967, -2162, -54, -316, 446, 62, 154, 255, 255),
    VTX(-5761, -199, -1422, 277, 415, 53, 35, 155, 255),
    VTX(-3966, -273, -544, 128, -242, 18, 222, 143, 255),
    VTX(-5967, -2162, -54, 130, 427, 62, 154, 255, 255),
    VTX(-3867, -825, 11, 234, -193, 17, 138, 0, 255),
    VTX(-3968, -276, 566, 421, -171, 18, 220, 112, 255),
    VTX(-3966, -273, -544, 48, -215, 18, 222, 143, 255),
    VTX(-5961, 1499, 22, 782, 517, 64, 101, 0, 255),
}; 

static Vtx object_po_sistersVtx_003B28[19] = {
    VTX(610, -1451, 1094, 364, 163, 242, 170, 82, 255),
    VTX(3065, 562, 2603, 872, 981, 239, 229, 115, 255),
    VTX(-595, -1090, 1453, 453, -126, 239, 214, 111, 255),
    VTX(3065, 562, -2603, 2200, 981, 239, 229, 141, 255),
    VTX(610, -1451, -1094, 2708, 163, 242, 170, 174, 255),
    VTX(-595, -1090, -1453, 2619, -126, 239, 215, 145, 255),
    VTX(2593, 3327, 949, 1400, 830, 219, 99, 56, 255),
    VTX(2593, 3327, -949, 1672, 830, 222, 89, 183, 255),
    VTX(-1457, 1883, -746, 1720, -466, 189, 90, 214, 255),
    VTX(-1457, 1883, 760, 1348, -466, 185, 82, 50, 255),
    VTX(-1560, 710, -1567, 2096, -499, 210, 21, 148, 255),
    VTX(-1561, 710, 1581, 974, -499, 210, 20, 108, 255),
    VTX(-1432, -1616, 1141, 301, -458, 191, 213, 91, 255),
    VTX(-1432, -1616, -1141, 2771, -458, 191, 214, 165, 255),
    VTX(2875, -1978, -1199, 2806, 920, 237, 150, 205, 255),
    VTX(1089, -1903, 0, 3072, 348, 235, 138, 0, 255),
    VTX(2875, -1978, 1199, 3338, 920, 237, 150, 51, 255),
    VTX(610, -1451, 1094, 3436, 163, 242, 170, 82, 255),
    VTX(2875, -1978, 1199, 266, 920, 237, 150, 51, 255),
}; 

static Vtx object_po_sistersVtx_003C58[23] = {
    VTX(610, -1451, -1094, -250, 219, 255, 255, 178, 255),
    VTX(504, -2757, 0, 276, 217, 255, 255, 178, 255),
    VTX(-544, -2969, -441, 102, -28, 255, 255, 178, 255),
    VTX(1089, -1903, 0, 276, 333, 255, 255, 178, 255),
    VTX(504, -2757, 0, 276, 217, 255, 255, 178, 255),
    VTX(-544, -2969, 443, 450, -28, 255, 255, 178, 255),
    VTX(-1836, -2221, 0, 276, -243, 255, 255, 178, 255),
    VTX(610, -1451, 1094, 802, 219, 255, 255, 178, 255),
    VTX(-1432, -1616, 1141, 725, -164, 255, 255, 178, 255),
    VTX(1089, -1903, 0, 276, 333, 255, 255, 178, 255),
    VTX(693, -1844, -523, 70, 255, 255, 255, 178, 255),
    VTX(693, -1844, 472, 462, 255, 255, 255, 178, 255),
    VTX(1438, -2625, -6, 273, 401, 255, 255, 178, 255),
    VTX(407, -2774, -7, 273, 179, 255, 255, 178, 255),
    VTX(-1432, -1616, -1141, -174, -164, 255, 255, 178, 255),
    VTX(610, -1451, 1094, 3084, 106, 255, 255, 255, 255),
    VTX(-595, -1090, 1453, 2935, -342, 255, 255, 255, 255),
    VTX(-1432, -1616, 1141, 2492, -829, 255, 255, 255, 255),
    VTX(-544, -2969, 443, 2234, -451, 255, 255, 255, 255),
    VTX(-595, -1090, -1453, 1164, -165, 255, 255, 255, 255),
    VTX(610, -1451, -1094, 1456, 269, 255, 255, 255, 255),
    VTX(-1432, -1616, -1141, 1101, -690, 255, 255, 255, 255),
    VTX(-544, -2969, -441, 1696, -397, 255, 255, 255, 255),
}; 

Gfx gPoeSistersAmyBodyDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_0062F8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 2, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_003948[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 2, 0),
    gsSP2Triangles(4, 5, 3, 0, 0, 6, 4, 0),
    gsSP2Triangles(6, 7, 4, 0, 7, 5, 4, 0),
    gsSP2Triangles(5, 2, 3, 0, 0, 2, 6, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_0058D8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 4, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 2, 2, G_TX_NOLOD, G_TX_NOLOD),
    gsSPClearGeometryMode(G_CULL_BACK),
    gsDPSetPrimColor(0, 0, 150, 200, 0, 255),
    gsSPVertex(&object_po_sistersVtx_0039C8[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(1, 6, 2, 0, 7, 4, 3, 0),
    gsSP2Triangles(6, 1, 8, 0, 9, 1, 0, 0),
    gsSP2Triangles(4, 9, 5, 0, 9, 0, 10, 0),
    gsSP2Triangles(9, 10, 5, 0, 7, 8, 4, 0),
    gsSP1Triangle(7, 6, 8, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_005D78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_003A78[0], 11, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 1, 3, 0),
    gsSP2Triangles(4, 5, 3, 0, 6, 7, 8, 0),
    gsSP2Triangles(6, 9, 7, 0, 5, 4, 0, 0),
    gsSP2Triangles(0, 4, 10, 0, 0, 10, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_004AD8, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetPrimColor(0, 0, 150, 200, 0, 255),
    gsSPVertex(&object_po_sistersVtx_003B28[0], 19, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 6, 8, 0),
    gsSP2Triangles(10, 8, 7, 0, 9, 11, 6, 0),
    gsSP2Triangles(2, 1, 11, 0, 11, 1, 6, 0),
    gsSP2Triangles(10, 7, 3, 0, 10, 3, 5, 0),
    gsSP2Triangles(11, 12, 2, 0, 13, 10, 5, 0),
    gsSP2Triangles(14, 15, 4, 0, 16, 17, 15, 0),
    gsSP2Triangles(16, 15, 14, 0, 0, 18, 1, 0),
    gsSP1Triangle(14, 4, 3, 0),
    gsSPEndDisplayList(),
}; 

Gfx gPoSistersAmyFaceDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_005F78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, ENVIRONMENT, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, COMBINED, 0, ENVIRONMENT, 0),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 240, 255, 180, 255),
    gsSPDisplayList(0x09000000),
    gsSPVertex(&object_po_sistersVtx_003C58[0], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 3, 1, 0),
    gsSP2Triangles(4, 5, 2, 0, 5, 6, 2, 0),
    gsSP2Triangles(5, 4, 7, 0, 8, 6, 5, 0),
    gsSP2Triangles(4, 9, 7, 0, 10, 11, 12, 0),
    gsSP2Triangles(11, 13, 12, 0, 13, 10, 12, 0),
    gsSP2Triangles(6, 14, 2, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 15, 17, 0, 19, 20, 21, 0),
    gsSP1Triangle(20, 22, 21, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_po_sistersVtx_0040F0[32] = {
    VTX(132, -1528, -2338, 646, 338, 49, 55, 162, 255),
    VTX(-905, -2575, -3496, 1, 160, 49, 55, 162, 255),
    VTX(-278, -1139, -2323, 496, 251, 49, 55, 162, 255),
    VTX(43, -1203, -2553, 565, 326, 87, 174, 253, 255),
    VTX(-190, -1464, -2108, 577, 262, 87, 174, 253, 255),
    VTX(-1226, -2511, -3266, -68, 84, 87, 174, 253, 255),
    VTX(-3320, -4423, -3295, 691, 120, 246, 142, 223, 255),
    VTX(-1617, -3103, -3461, 547, 320, 113, 254, 216, 255),
    VTX(-2723, -3480, -1642, 817, 374, 215, 230, 109, 255),
    VTX(826, -3151, -4317, 278, 540, 113, 254, 216, 255),
    VTX(382, -2653, -4006, 343, 517, 50, 107, 17, 255),
    VTX(484, -3288, -3680, 369, 565, 72, 223, 89, 255),
    VTX(-3602, -2666, -4195, 619, -12, 157, 28, 196, 255),
    VTX(-3004, -1723, -2543, 745, 241, 17, 114, 31, 255),
    VTX(268, -3629, -4278, 324, 473, 24, 147, 213, 255),
    VTX(166, -2994, -4603, 298, 425, 2, 32, 141, 255),
    VTX(-2609, -3084, -3113, 657, 231, 143, 2, 40, 255),
    VTX(-1609, -2050, -3528, 540, 314, 171, 83, 16, 255),
    VTX(-1530, -3358, -4749, 408, 193, 224, 255, 141, 255),
    VTX(-1543, -4376, -3187, 570, 359, 181, 196, 71, 255),
    VTX(-710, -2067, -3843, 441, 395, 56, 97, 214, 255),
    VTX(207, -3912, -3642, 393, 533, 117, 231, 248, 255),
    VTX(-880, -2295, -2956, 545, 468, 29, 58, 100, 255),
    VTX(782, 1044, -1100, 247, 291, 202, 68, 174, 255),
    VTX(782, 1044, 1100, 777, 291, 202, 68, 82, 255),
    VTX(1962, 2280, 3, 512, 136, 178, 90, 0, 255),
    VTX(1302, -957, -1125, 1818, 223, 2, 176, 167, 255),
    VTX(4336, 972, -1667, 2220, -175, 7, 13, 137, 255),
    VTX(4356, -1069, 0, 1536, -178, 60, 153, 0, 255),
    VTX(4336, 972, -1667, 172, -175, 7, 13, 137, 255),
    VTX(782, 1044, -1100, 2295, 291, 202, 68, 174, 255),
    VTX(3655, 3792, 3, 512, -86, 222, 115, 0, 255),
}; 

static Vtx object_po_sistersVtx_0042F0[54] = {
    VTX(782, 1044, 1100, 777, 291, 202, 68, 82, 255),
    VTX(1302, -957, 1125, 1254, 223, 2, 176, 89, 255),
    VTX(4336, 972, 1667, 852, -175, 7, 13, 119, 255),
    VTX(1302, -957, -1125, 1818, 223, 2, 176, 167, 255),
    VTX(4356, -1069, 0, 1536, -178, 60, 153, 0, 255),
    VTX(3655, 3792, 3, 512, -86, 222, 115, 0, 255),
    VTX(1962, 2280, 3, 512, 136, 178, 90, 0, 255),
    VTX(1136, -514, -1217, 1918, 245, 49, 55, 162, 255),
    VTX(-80, -1742, -2574, 1854, 404, 49, 55, 162, 255),
    VTX(726, -125, -1202, 2014, 299, 49, 55, 162, 255),
    VTX(1047, -189, -1431, 2005, 256, 87, 174, 253, 255),
    VTX(815, -450, -987, 1908, 287, 87, 174, 253, 255),
    VTX(-401, -1678, -2345, 1846, 447, 87, 174, 253, 255),
    VTX(-169, -1416, -2789, 1895, 416, 87, 174, 253, 255),
    VTX(-336, -1419, 2551, 459, -321, 51, 153, 222, 255),
    VTX(722, -365, 957, 250, 6, 51, 153, 222, 255),
    VTX(95, -1319, 2903, 571, -131, 51, 153, 222, 255),
    VTX(1, -1612, 2647, 512, -183, 165, 235, 182, 255),
    VTX(-242, -1126, 2806, 519, -269, 165, 235, 182, 255),
    VTX(816, -73, 1212, 309, 58, 165, 235, 182, 255),
    VTX(1059, -558, 1053, 302, 144, 165, 235, 182, 255),
    VTX(29, -1579, 2877, 1188, 390, 60, 179, 69, 255),
    VTX(-2346, -1599, 2690, 1199, 702, 176, 41, 177, 255),
    VTX(-985, -2140, 2172, 1278, 523, 26, 145, 219, 255),
    VTX(160, -1357, 2173, 1206, 373, 71, 18, 161, 255),
    VTX(20, -829, 2888, 1115, 391, 60, 103, 3, 255),
    VTX(-1802, -923, 3733, 1103, 630, 16, 3, 118, 255),
    VTX(-50, -1395, 1298, 1292, 335, 237, 160, 69, 255),
    VTX(2675, -2278, -1332, 1708, 43, 213, 152, 217, 255),
    VTX(2675, -2278, 1332, 1364, 43, 217, 160, 60, 255),
    VTX(-50, -1395, -1255, 1775, 335, 244, 169, 175, 255),
    VTX(-1762, -2710, -1279, 1680, 560, 183, 191, 187, 255),
    VTX(-3987, -1851, 0, 1536, 852, 183, 162, 0, 255),
    VTX(-3685, 284, -1129, 2128, 812, 194, 47, 165, 255),
    VTX(-723, 374, -1722, 2118, 489, 189, 22, 160, 255),
    VTX(-3357, 1133, -994, 2325, 769, 170, 54, 193, 255),
    VTX(43, 2106, -1046, 2410, 388, 220, 65, 162, 255),
    VTX(-453, -1126, -1665, 1854, 453, 245, 202, 150, 255),
    VTX(-1762, -2710, 1279, 1392, 560, 183, 191, 69, 255),
    VTX(-3685, 284, 1129, 944, 812, 195, 47, 92, 255),
    VTX(-823, 374, 2122, 967, 502, 189, 22, 96, 255),
    VTX(-50, -1395, 1298, 1292, 335, 237, 160, 69, 255),
    VTX(2765, 12, 2537, 1022, 31, 223, 2, 115, 255),
    VTX(43, 2106, 1082, 667, 388, 209, 83, 73, 255),
    VTX(2593, 2627, 1054, 636, 53, 236, 101, 60, 255),
    VTX(2593, 2627, -1054, 388, 53, 233, 111, 217, 255),
    VTX(-453, -1126, 1665, 1218, 453, 243, 202, 106, 255),
    VTX(-3357, 1133, -994, 277, 769, 170, 54, 193, 255),
    VTX(-2857, 1133, 1014, 750, 769, 179, 38, 83, 255),
    VTX(43, 2106, -1046, 362, 388, 220, 65, 162, 255),
    VTX(2765, 12, -2537, 2, 31, 221, 1, 142, 255),
    VTX(-50, -1395, -1255, 1775, 335, 244, 169, 175, 255),
    VTX(2765, 12, -2537, 2050, 31, 221, 1, 142, 255),
    VTX(2675, -2278, -1332, 1708, 43, 213, 152, 217, 255),
}; 

static Vtx object_po_sistersVtx_004650[3] = {
    VTX(-146, -2407, 0, 64, 416, 255, 255, 255, 255),
    VTX(-1762, -2710, 1279, 410, 148, 255, 255, 255, 255),
    VTX(-1762, -2710, -1279, -173, 83, 255, 255, 255, 255),
}; 

static Vtx object_po_sistersVtx_004680[6] = {
    VTX(-1844, -2369, 825, 105, -100, 218, 255, 206, 255),
    VTX(-146, -2407, 0, -61, 254, 218, 255, 206, 255),
    VTX(-190, -1101, 1272, 310, 202, 218, 255, 206, 255),
    VTX(-146, -2407, 0, 570, 249, 218, 255, 206, 255),
    VTX(-1844, -2369, -821, 377, -122, 218, 255, 206, 255),
    VTX(-190, -1101, -1272, 211, 224, 218, 255, 206, 255),
}; 

Gfx gPoSistersBurnDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_006318, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 4, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_po_sistersVtx_0040F0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(7, 12, 13, 0, 8, 13, 12, 0),
    gsSP2Triangles(9, 14, 15, 0, 16, 11, 10, 0),
    gsSP2Triangles(16, 14, 11, 0, 17, 18, 19, 0),
    gsSP2Triangles(18, 17, 20, 0, 21, 18, 20, 0),
    gsSP2Triangles(22, 17, 19, 0, 21, 20, 22, 0),
    gsSP2Triangles(22, 19, 21, 0, 23, 24, 25, 0),
    gsSP2Triangles(26, 27, 28, 0, 23, 25, 29, 0),
    gsSP2Triangles(30, 27, 26, 0, 25, 31, 29, 0),
    gsSPVertex(&object_po_sistersVtx_0042F0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 1, 3, 4, 0),
    gsSP2Triangles(5, 6, 2, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 10, 12, 13, 0),
    gsSP2Triangles(14, 15, 16, 0, 17, 18, 19, 0),
    gsSP2Triangles(17, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 21, 0, 24, 23, 22, 0),
    gsSP2Triangles(22, 26, 25, 0, 25, 24, 22, 0),
    gsSP2Triangles(27, 28, 29, 0, 30, 28, 27, 0),
    gsSPVertex(&object_po_sistersVtx_0042F0[31], 23, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 7, 8, 1, 0),
    gsSP2Triangles(7, 1, 0, 0, 8, 7, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 11, 13, 12, 0),
    gsSP2Triangles(14, 12, 13, 0, 15, 10, 12, 0),
    gsSP2Triangles(12, 16, 17, 0, 17, 15, 12, 0),
    gsSP2Triangles(18, 14, 19, 0, 20, 21, 22, 0),
    gsSP1Triangle(20, 5, 21, 0),
    gsDPPipeSync(),
    gsDPSetCombineMode(G_CC_MODULATEIDECALA_PRIM, G_CC_PASS2),
    gsSPClearGeometryMode(G_LIGHTING),
    gsSPVertex(&object_po_sistersVtx_004650[0], 3, 0),
    gsSP1Triangle(0, 1, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_005F78, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 8, 0, G_TX_MIRROR | G_TX_CLAMP, 
                         G_TX_MIRROR | G_TX_CLAMP, 4, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsDPSetPrimColor(0, 0, 218, 255, 206, 255),
    gsSPVertex(&object_po_sistersVtx_004680[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

u64 object_po_sistersTex_0048D8[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_0048D8.rgb5a1.inc.c"
};

u64 object_po_sistersTex_004AD8[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_004AD8.rgb5a1.inc.c"
};

u64 sPoeSistersSkelTex_0052D8[] = {
#include "assets/objects/object_po_sisters/sPoeSistersSkelTex_0052D8.rgb5a1.inc.c"
};

u64 object_po_sistersTex_0056D8[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_0056D8.rgb5a1.inc.c"
};

u64 object_po_sistersTex_0058D8[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_0058D8.rgb5a1.inc.c"
};

u64 object_po_sistersTex_0058F8[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_0058F8.rgb5a1.inc.c"
};

u64 object_po_sistersTex_005AF8[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_005AF8.rgb5a1.inc.c"
};

u64 object_po_sistersTex_005CF8[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_005CF8.rgb5a1.inc.c"
};

u64 object_po_sistersTex_005D78[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_005D78.rgb5a1.inc.c"
};

u64 object_po_sistersTex_005F78[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_005F78.rgb5a1.inc.c"
};

u64 object_po_sistersTex_006078[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_006078.rgb5a1.inc.c"
};

u64 object_po_sistersTex_006278[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_006278.rgb5a1.inc.c"
};

u64 object_po_sistersTex_0062F8[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_0062F8.rgb5a1.inc.c"
};

u64 object_po_sistersTex_006318[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_006318.rgb5a1.inc.c"
};

StandardLimb sPoeSistersSkelLimb_006518 = { 
    { 0, 5900, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sPoeSistersSkelLimb_006524 = { 
    { 760, -492, 1400 },
    0x02, 0x03,
    sPoeSistersSkelLimbDL_002718
}; 

StandardLimb sPoeSistersSkelLimb_006530 = { 
    { 2625, 0, 0 },
    0xFF, 0xFF,
    sPoeSistersSkelLimbDL_002870
}; 

StandardLimb sPoeSistersSkelLimb_00653C = { 
    { 760, -491, -1400 },
    0x04, 0x08,
    sPoeSistersSkelLimbDL_002680
}; 

StandardLimb sPoeSistersSkelLimb_006548 = { 
    { 1700, 0, 0 },
    0x05, 0xFF,
    sPoeSistersSkelLimbDL_0025E8
}; 

StandardLimb sPoeSistersSkelLimb_006554 = { 
    { 1550, 0, 0 },
    0x06, 0xFF,
    NULL
}; 

StandardLimb sPoeSistersSkelLimb_006560 = { 
    { 0, 0, 0 },
    0xFF, 0x07,
    sPoeSistersSkelLimbDL_002570
}; 

StandardLimb sPoeSistersSkelLimb_00656C = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    gPoSistersTorchDL
}; 

StandardLimb sPoeSistersSkelLimb_006578 = { 
    { 0, 0, 0 },
    0xFF, 0x09,
    gPoeSistersMegBodyDL
}; 

StandardLimb sPoeSistersSkelLimb_006584 = { 
    { 0, 0, 0 },
    0xFF, 0x0A,
    gPoeSistersMegFaceDL
}; 

StandardLimb sPoeSistersSkelLimb_006590 = { 
    { 1342, 0, 0 },
    0xFF, 0xFF,
    sPoeSistersSkelLimbDL_0024A8
}; 

static void* sPoeSistersSkelLimbs[11] = {
    &sPoeSistersSkelLimb_006518,
    &sPoeSistersSkelLimb_006524,
    &sPoeSistersSkelLimb_006530,
    &sPoeSistersSkelLimb_00653C,
    &sPoeSistersSkelLimb_006548,
    &sPoeSistersSkelLimb_006554,
    &sPoeSistersSkelLimb_006560,
    &sPoeSistersSkelLimb_00656C,
    &sPoeSistersSkelLimb_006578,
    &sPoeSistersSkelLimb_006584,
    &sPoeSistersSkelLimb_006590,
}; 

SkeletonHeader gPoeSistersSkel = { sPoeSistersSkelLimbs, 11 }; 

static Vtx object_po_sistersVtx_0065D0[16] = {
    VTX(-32, 40, 0, -55, -213, 147, 131, 97, 255),
    VTX(-25, 33, 0, 51, 0, 147, 131, 97, 255),
    VTX(25, 33, 0, 51, 1599, 147, 131, 97, 255),
    VTX(32, 40, 0, -55, 1812, 147, 131, 97, 255),
    VTX(-25, 33, 0, 64, -219, 147, 131, 97, 255),
    VTX(-32, 40, 0, -69, -372, 147, 131, 97, 255),
    VTX(-32, -40, 0, -69, 1456, 81, 72, 55, 255),
    VTX(-25, -33, 0, 64, 1304, 169, 154, 126, 255),
    VTX(25, 33, 0, 51, 512, 147, 131, 97, 255),
    VTX(25, -33, 0, 51, -1620, 169, 154, 126, 255),
    VTX(32, -40, 0, -55, -1834, 81, 72, 55, 255),
    VTX(32, 40, 0, -55, 725, 147, 131, 97, 255),
    VTX(25, -33, 0, 51, 717, 169, 154, 126, 255),
    VTX(-25, -33, 0, 51, -882, 169, 154, 126, 255),
    VTX(-32, -40, 0, -55, -1096, 81, 72, 55, 255),
    VTX(32, -40, 0, -56, 930, 81, 72, 55, 255),
}; 

static Vtx object_po_sistersVtx_0066D0[6] = {
    VTX(-25, 33, 0, 0, 0, 151, 101, 50, 255),
    VTX(-25, 0, 0, 0, 1024, 134, 119, 89, 255),
    VTX(0, 0, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(0, 33, 0, 1024, 0, 134, 119, 89, 255),
    VTX(-25, 33, 0, 0, 0, 151, 101, 50, 255),
    VTX(0, 0, 0, 1024, 1024, 255, 255, 255, 255),
}; 

static Vtx object_po_sistersVtx_006730[5] = {
    VTX(0, 33, 0, 0, 0, 134, 119, 89, 255),
    VTX(0, 0, 0, 0, 1024, 255, 255, 255, 255),
    VTX(25, 33, 0, 1024, 0, 151, 101, 50, 255),
    VTX(25, 0, 0, 1024, 1024, 134, 119, 89, 255),
    VTX(0, 0, 0, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx object_po_sistersVtx_006780[6] = {
    VTX(0, -33, 0, 0, 1024, 134, 119, 89, 255),
    VTX(25, -33, 0, 1024, 1024, 151, 101, 50, 255),
    VTX(0, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(25, 0, 0, 1024, 0, 134, 119, 89, 255),
    VTX(0, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(25, -33, 0, 1024, 1024, 151, 101, 50, 255),
}; 

static Vtx object_po_sistersVtx_0067E0[5] = {
    VTX(-25, 0, 0, 0, 0, 134, 119, 89, 255),
    VTX(-25, -33, 0, 0, 1024, 151, 101, 50, 255),
    VTX(0, 0, 0, 1024, 0, 255, 255, 255, 255),
    VTX(0, -33, 0, 1024, 1024, 134, 119, 89, 255),
    VTX(-25, -33, 0, 0, 1024, 151, 101, 50, 255),
}; 

Gfx gPoSistersJoellePaintingDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_0082C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_po_sistersVtx_0065D0[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_008BC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_po_sistersTex_007AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                       G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&object_po_sistersVtx_0066D0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_009BC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_po_sistersTex_007AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                       G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_006730[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_0083C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_po_sistersTex_007AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                       G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_006780[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_0093C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_po_sistersTex_007AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                       G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_0067E0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_po_sistersVtx_006B00[16] = {
    VTX(-32, 40, 0, -55, -213, 147, 131, 97, 255),
    VTX(-25, 33, 0, 51, 0, 147, 131, 97, 255),
    VTX(25, 33, 0, 51, 1599, 147, 131, 97, 255),
    VTX(32, 40, 0, -55, 1812, 147, 131, 97, 255),
    VTX(-25, 33, 0, 64, -219, 147, 131, 97, 255),
    VTX(-32, 40, 0, -69, -372, 147, 131, 97, 255),
    VTX(-32, -40, 0, -69, 1456, 81, 72, 55, 255),
    VTX(-25, -33, 0, 64, 1304, 169, 154, 126, 255),
    VTX(25, 33, 0, 51, 512, 147, 131, 97, 255),
    VTX(25, -33, 0, 51, -1620, 169, 154, 126, 255),
    VTX(32, -40, 0, -55, -1834, 81, 72, 55, 255),
    VTX(32, 40, 0, -55, 725, 147, 131, 97, 255),
    VTX(25, -33, 0, 51, 717, 169, 154, 126, 255),
    VTX(-25, -33, 0, 51, -882, 169, 154, 126, 255),
    VTX(-32, -40, 0, -55, -1096, 81, 72, 55, 255),
    VTX(32, -40, 0, -56, 930, 81, 72, 55, 255),
}; 

static Vtx object_po_sistersVtx_006C00[6] = {
    VTX(-25, 33, 0, 0, 0, 151, 101, 50, 255),
    VTX(-25, 0, 0, 0, 1024, 134, 119, 89, 255),
    VTX(0, 0, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(0, 33, 0, 1024, 0, 134, 119, 89, 255),
    VTX(-25, 33, 0, 0, 0, 151, 101, 50, 255),
    VTX(0, 0, 0, 1024, 1024, 255, 255, 255, 255),
}; 

static Vtx object_po_sistersVtx_006C60[5] = {
    VTX(0, 33, 0, 0, 0, 134, 119, 89, 255),
    VTX(0, 0, 0, 0, 1024, 255, 255, 255, 255),
    VTX(25, 33, 0, 1024, 0, 151, 101, 50, 255),
    VTX(25, 0, 0, 1024, 1024, 134, 119, 89, 255),
    VTX(0, 0, 0, 0, 1024, 255, 255, 255, 255),
}; 

static Vtx object_po_sistersVtx_006CB0[6] = {
    VTX(0, -33, 0, 0, 1024, 134, 119, 89, 255),
    VTX(25, -33, 0, 1024, 1024, 151, 101, 50, 255),
    VTX(0, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(25, 0, 0, 1024, 0, 134, 119, 89, 255),
    VTX(0, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(25, -33, 0, 1024, 1024, 151, 101, 50, 255),
}; 

static Vtx object_po_sistersVtx_006D10[5] = {
    VTX(-25, 0, 0, 0, 0, 134, 119, 89, 255),
    VTX(-25, -33, 0, 0, 1024, 151, 101, 50, 255),
    VTX(0, 0, 0, 1024, 0, 255, 255, 255, 255),
    VTX(0, -33, 0, 1024, 1024, 134, 119, 89, 255),
    VTX(-25, -33, 0, 0, 1024, 151, 101, 50, 255),
}; 

Gfx gPoSistersBethPaintingDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_0082C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_po_sistersVtx_006B00[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00ABC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_po_sistersTex_007AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                       G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsSPVertex(&object_po_sistersVtx_006C00[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00BBC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_po_sistersTex_007AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                       G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_006C60[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00A3C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_po_sistersTex_007AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                       G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_006CB0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00B3C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPLoadMultiBlock(object_po_sistersTex_007AC0, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | 
                       G_TX_CLAMP, G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_006D10[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 4, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_po_sistersVtx_007030[4] = {
    VTX(0, 60, 0, 0, 0, 147, 131, 97, 255),
    VTX(0, 0, 0, 0, 1024, 255, 255, 255, 255),
    VTX(60, 60, 0, 1024, 0, 81, 72, 55, 255),
    VTX(60, 0, 0, 1024, 1024, 169, 154, 126, 255),
}; 

static Vtx object_po_sistersVtx_007070[4] = {
    VTX(-60, 60, 0, 0, 0, 81, 72, 55, 255),
    VTX(-60, 0, 0, 0, 1024, 169, 154, 126, 255),
    VTX(0, 0, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(0, 60, 0, 1024, 0, 147, 131, 97, 255),
}; 

static Vtx object_po_sistersVtx_0070B0[4] = {
    VTX(60, 0, 0, 1024, 0, 169, 154, 126, 255),
    VTX(0, 0, 0, 0, 0, 255, 255, 255, 255),
    VTX(60, -60, 0, 1024, 1024, 81, 72, 55, 255),
    VTX(0, -60, 0, 0, 1024, 147, 131, 97, 255),
}; 

static Vtx object_po_sistersVtx_0070F0[4] = {
    VTX(0, -60, 0, 1024, 1024, 147, 131, 97, 255),
    VTX(0, 0, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-60, -60, 0, 0, 1024, 81, 72, 55, 255),
    VTX(-60, 0, 0, 0, 0, 169, 154, 126, 255),
}; 

static Vtx object_po_sistersVtx_007130[16] = {
    VTX(-60, 60, 0, 64, -219, 147, 131, 97, 255),
    VTX(-70, 70, 0, -69, -372, 147, 131, 97, 255),
    VTX(-70, -70, 0, -69, 1456, 81, 72, 55, 255),
    VTX(-60, -60, 0, 64, 1304, 169, 154, 126, 255),
    VTX(60, -60, 0, 51, 717, 169, 154, 126, 255),
    VTX(-60, -60, 0, 51, -882, 169, 154, 126, 255),
    VTX(-70, -70, 0, -55, -1096, 81, 72, 55, 255),
    VTX(70, -70, 0, -56, 930, 81, 72, 55, 255),
    VTX(60, 60, 0, 51, 512, 147, 131, 97, 255),
    VTX(60, -60, 0, 51, -1620, 169, 154, 126, 255),
    VTX(70, -70, 0, -55, -1834, 81, 72, 55, 255),
    VTX(70, 70, 0, -55, 725, 147, 131, 97, 255),
    VTX(-70, 70, 0, -55, -213, 147, 131, 97, 255),
    VTX(-60, 60, 0, 51, 0, 147, 131, 97, 255),
    VTX(60, 60, 0, 51, 1599, 147, 131, 97, 255),
    VTX(70, 70, 0, -55, 1812, 147, 131, 97, 255),
}; 

Gfx gPoSistersAmyPaintingDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_00DBC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_po_sistersVtx_007030[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00D3C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_007070[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 2, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00CBC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_0070B0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00C3C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_0070F0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 2, 1, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_0082C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_007130[0], 16, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_007418[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static Vtx object_po_sistersVtx_007420[4] = {
    VTX(-30, -30, 30, 1024, 0, 213, 206, 192, 255),
    VTX(-30, 30, 30, 0, 0, 189, 178, 157, 255),
    VTX(-30, 30, -30, 0, 1024, 213, 206, 192, 255),
    VTX(-30, -30, -30, 1024, 1024, 255, 255, 255, 255),
}; 

static Vtx object_po_sistersVtx_007460[4] = {
    VTX(30, 30, 30, 0, 0, 177, 164, 138, 255),
    VTX(30, 30, -30, 0, 1024, 213, 206, 192, 255),
    VTX(-30, 30, -30, 1024, 1024, 255, 255, 255, 255),
    VTX(-30, 30, 30, 1024, 0, 213, 206, 192, 255),
}; 

static Vtx object_po_sistersVtx_0074A0[4] = {
    VTX(30, -30, -30, 0, 1024, 213, 206, 192, 255),
    VTX(30, 30, -30, 1024, 1024, 255, 255, 255, 255),
    VTX(30, 30, 30, 1024, 0, 213, 206, 192, 255),
    VTX(30, -30, 30, 0, 0, 189, 178, 157, 255),
}; 

static Vtx object_po_sistersVtx_0074E0[4] = {
    VTX(-30, -30, 30, 0, 0, 189, 178, 157, 255),
    VTX(-30, -30, -30, 0, 1024, 213, 206, 192, 255),
    VTX(30, -30, -30, 1024, 1024, 255, 255, 255, 255),
    VTX(30, -30, 30, 1024, 0, 213, 206, 192, 255),
}; 

static Vtx object_po_sistersVtx_007520[8] = {
    VTX(30, -30, 30, 0, 1024, 34, 36, 41, 255),
    VTX(30, 30, 30, 0, 1024, 22, 23, 26, 255),
    VTX(-30, 30, 30, 0, 1024, 22, 23, 26, 255),
    VTX(-30, -30, 30, 0, 1024, 34, 36, 41, 255),
    VTX(-30, -30, -30, 0, 1024, 22, 23, 26, 255),
    VTX(-30, 30, -30, 0, 1024, 34, 36, 41, 255),
    VTX(30, 30, -30, 0, 1024, 34, 36, 41, 255),
    VTX(30, -30, -30, 0, 1024, 22, 23, 26, 255),
}; 

Gfx gPoSistersAmyBlockDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_00DBC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_po_sistersVtx_007420[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00D3C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_007460[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00C3C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_0074A0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(object_po_sistersTex_00CBC0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&object_po_sistersVtx_0074E0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 34, 36, 41, 255),
    gsSPVertex(&object_po_sistersVtx_007520[0], 8, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSPEndDisplayList(),
}; 

static u8 unaccounted_007758[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

CamData gPoSistersAmyBlockCol_camDataList_00007760[1] = {
    { 0x0000, 0, 0x00000000 },
}; 

SurfaceType gPoSistersAmyBlockCol_surfaceType_00007768[] = {
    { 0x00E00000, 0x000007C0 },
}; 

CollisionPoly gPoSistersAmyBlockCol_polygons_00007770[] = {
   { 0x0000, 0x2000, 0x0001, 0x0002, 0x8001, 0x0000, 0x0000, 0xFFE2 },
   { 0x0000, 0x2000, 0x0002, 0x0003, 0x8001, 0x0000, 0x0000, 0xFFE2 },
   { 0x0000, 0x2004, 0x0005, 0x0002, 0x0000, 0x7FFF, 0x0000, 0xFFE2 },
   { 0x0000, 0x2004, 0x0002, 0x0001, 0x0000, 0x7FFF, 0x0000, 0xFFE2 },
   { 0x0000, 0x2006, 0x0005, 0x0004, 0x7FFF, 0x0000, 0x0000, 0xFFE2 },
   { 0x0000, 0x2006, 0x0004, 0x0007, 0x7FFF, 0x0000, 0x0000, 0xFFE2 },
   { 0x0000, 0x2000, 0x0003, 0x0006, 0x0000, 0x8001, 0x0000, 0xFFE2 },
   { 0x0000, 0x2000, 0x0006, 0x0007, 0x0000, 0x8001, 0x0000, 0xFFE2 },
   { 0x0000, 0x2007, 0x0004, 0x0001, 0x0000, 0x0000, 0x7FFF, 0xFFE2 },
   { 0x0000, 0x2007, 0x0001, 0x0000, 0x0000, 0x0000, 0x7FFF, 0xFFE2 },
   { 0x0000, 0x2003, 0x0002, 0x0005, 0x0000, 0x0000, 0x8001, 0xFFE2 },
   { 0x0000, 0x2003, 0x0005, 0x0006, 0x0000, 0x0000, 0x8001, 0xFFE2 },

}; 

Vec3s gPoSistersAmyBlockCol_vtx_00007830[] = {
   { -30, -30, 30 },
   { -30, 30, 30 },
   { -30, 30, -30 },
   { -30, -30, -30 },
   { 30, 30, 30 },
   { 30, 30, -30 },
   { 30, -30, -30 },
   { 30, -30, 30 },
}; 

CollisionHeader gPoSistersAmyBlockCol = { 
    { -30, -30, -30 },
    { 30, 30, 30 },
    8,
    gPoSistersAmyBlockCol_vtx_00007830,
    12,
    gPoSistersAmyBlockCol_polygons_00007770,
    gPoSistersAmyBlockCol_surfaceType_00007768,
    gPoSistersAmyBlockCol_camDataList_00007760,
    0,
    NULL
}; 

static u32 pad788C = 0;

static Vtx object_po_sistersVtx_007890[4] = {
    VTX(30, 30, 30, 0, 0, 203, 195, 178, 255),
    VTX(30, 30, -30, 0, 1024, 169, 154, 126, 255),
    VTX(-30, 30, -30, 1024, 1024, 203, 195, 178, 255),
    VTX(-30, 30, 30, 1024, 0, 245, 244, 241, 255),
}; 

static Vtx object_po_sistersVtx_0078D0[17] = {
    VTX(30, -30, -30, 0, 1024, 22, 23, 26, 255),
    VTX(30, 30, -30, 0, 1024, 34, 36, 41, 255),
    VTX(30, 30, 30, 0, 1024, 22, 23, 26, 255),
    VTX(30, -30, 30, 0, 1024, 10, 11, 13, 255),
    VTX(-30, -30, -30, 0, 1024, 22, 23, 26, 255),
    VTX(-30, 30, -30, 0, 1024, 34, 36, 41, 255),
    VTX(30, 30, -30, 0, 1024, 22, 23, 26, 255),
    VTX(30, -30, -30, 0, 1024, 10, 11, 13, 255),
    VTX(-30, -30, 30, 0, 1024, 22, 23, 26, 255),
    VTX(-30, 30, 30, 0, 1024, 34, 36, 41, 255),
    VTX(-30, 30, -30, 0, 1024, 22, 23, 26, 255),
    VTX(-30, -30, -30, 0, 1024, 10, 11, 13, 255),
    VTX(30, -30, 30, 0, 1024, 22, 23, 26, 255),
    VTX(30, 30, 30, 0, 1024, 34, 36, 41, 255),
    VTX(-30, 30, 30, 0, 1024, 22, 23, 26, 255),
    VTX(-30, -30, 30, 0, 1024, 10, 11, 13, 255),
    VTX(30, -30, -30, 0, 1024, 34, 36, 41, 255),
}; 

Gfx gPoSistersAmyBethBlockDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_po_sistersTex_00B3C0, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP,
                         G_TX_MIRROR | G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&object_po_sistersVtx_007890[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsDPPipeSync(),
    gsSPTexture(0, 0, 0, G_TX_RENDERTILE, G_OFF),
    gsDPSetCombineLERP(SHADE, 0, PRIMITIVE, 0, 0, 0, 0, 1, 0, 0, 0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 34, 36, 41, 255),
    gsSPVertex(&object_po_sistersVtx_0078D0[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 4, 6, 7, 0),
    gsSP2Triangles(8, 9, 10, 0, 8, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 12, 14, 15, 0),
    gsSP2Triangles(15, 4, 16, 0, 15, 16, 12, 0),
    gsSPEndDisplayList(),
}; 

u64 object_po_sistersTex_007AC0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_007AC0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_0082C0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_0082C0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_0083C0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_0083C0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_008BC0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_008BC0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_0093C0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_0093C0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_009BC0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_009BC0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_00A3C0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_00A3C0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_00ABC0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_00ABC0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_00B3C0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_00B3C0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_00BBC0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_00BBC0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_00C3C0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_00C3C0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_00CBC0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_00CBC0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_00D3C0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_00D3C0.rgb5a1.inc.c"
};

u64 object_po_sistersTex_00DBC0[] = {
#include "assets/objects/object_po_sisters/object_po_sistersTex_00DBC0.rgb5a1.inc.c"
};


