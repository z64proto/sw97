#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_anubice.h"

static s16 sAnubiceLaughingAnimFrameData[114];
static JointIndex sAnubiceLaughingAnimJointIndices[16];
static s16 sAnubiceFallDownAnimFrameData[196];
static JointIndex sAnubiceFallDownAnimJointIndices[16];
static s16 sAnubiceAttackingAnimFrameData[486];
static JointIndex sAnubiceAttackingAnimJointIndices[16];
static s16 sAnubiceStandUpAnimFrameData[152];
static JointIndex sAnubiceStandUpAnimJointIndices[16];
static s16 sAnubiceAnim_000A48FrameData[84];
static JointIndex sAnubiceAnim_000A48JointIndices[16];
static s16 sAnubiceAnim_000BACFrameData[118];
static JointIndex sAnubiceAnim_000BACJointIndices[16];
static s16 sAnubiceIdleAnimFrameData[426];
static JointIndex sAnubiceIdleAnimJointIndices[16];
static Vtx sAnubiceSkelVtx_001B10[42];
static Vtx sAnubiceSkelVtx_001DB0[20];
static Vtx sAnubiceSkelVtx_001EF0[20];
static Vtx sAnubiceSkelVtx_002030[20];
static Vtx sAnubiceSkelVtx_002170[20];
static Vtx sAnubiceSkelVtx_0022B0[17];
static Vtx sAnubiceSkelVtx_0023C0[5];
static Vtx sAnubiceSkelVtx_002410[10];
static Vtx sAnubiceSkelVtx_0024B0[6];
static Vtx sAnubiceSkelVtx_002510[32];
static Vtx sAnubiceSkelVtx_002710[26];
static Vtx sAnubiceSkelVtx_0028B0[17];
static Vtx sAnubiceSkelVtx_0029C0[40];
static Vtx object_anubiceVtx_002C40[10];
static Vtx object_anubiceVtx_003590[4];
static Vtx object_anubiceVtx_0035D0[4];
static void* sAnubiceSkelLimbs[15];

static s16 sAnubiceLaughingAnimFrameData[114] = {
    0x0000, 0x125C, 0x4000, 0x2000, 0x8000, 0x13E9, 0x125C, 0x1324, 0x13EC, 0x12A0, 0x1154, 0x1008, 0x104B, 0x108F, 
    0x10D2, 0x108F, 0x104B, 0x1008, 0xC000, 0xBD7C, 0xB77D, 0xB054, 0xAA54, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 0xA7D1, 
    0xA7D1, 0xA7D1, 0x0000, 0x012B, 0x03F5, 0x0749, 0x0A13, 0x0B3F, 0x0B3F, 0x0B3F, 0x0B3F, 0x0B3F, 0x0B3F, 0x0B3F, 
    0x0000, 0x0145, 0x044D, 0x07EC, 0x0AF4, 0x0C39, 0x0C39, 0x0C39, 0x0C39, 0x0C39, 0x0C39, 0x0C39, 0x0000, 0x0179, 
    0x04FE, 0x0930, 0x0CB4, 0x0E2E, 0x0E2E, 0x0E2E, 0x0E2E, 0x0E2E, 0x0E2E, 0x0E2E, 0x0000, 0x01DF, 0x0657, 0x0BAB, 
    0x1023, 0x1202, 0x1202, 0x1202, 0x1202, 0x1202, 0x1202, 0x1202, 0xC000, 0xC000, 0xBB57, 0xB144, 0xA7A2, 0xA44B, 
    0xB6AA, 0xCA91, 0xC216, 0xB78F, 0xC2AF, 0xCD72, 0x8000, 0x7B8C, 0x70A6, 0x6301, 0x564C, 0x4E39, 0x4B14, 0x4A33, 
    0x4AD4, 0x4C36, 0x4D98, 0x4E39, 0x8000, 0x83B1, 0x8C9F, 0x9794, 0xA158, 0xA6B5, 0xA1EE, 0x96E0, 0x90B4, 0x9669, 
    0xA101, 0xA6B5, 
}; 

static JointIndex sAnubiceLaughingAnimJointIndices[16] = {
    { 0x0000, 0x0006, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0012 },
    { 0x0000, 0x0000, 0x001E },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x002A },
    { 0x0000, 0x0000, 0x0036 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0042 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x004E },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x005A },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0066 },
}; 

AnimationHeader gAnubiceLaughingAnim = { { 12 }, sAnubiceLaughingAnimFrameData, sAnubiceLaughingAnimJointIndices, 6 }; 

static u8 unaccounted_000154[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sAnubiceFallDownAnimFrameData[196] = {
    0x0000, 0x1068, 0x4000, 0x2000, 0x8000, 0x13E9, 0x1068, 0x0F6E, 0x0E74, 0x0D7A, 0x0C80, 0x0A8C, 0x0898, 0x06A4, 
    0x04B0, 0x0557, 0x05FD, 0x06A4, 0x0627, 0x05AA, 0x052D, 0x04B0, 0x0514, 0x0578, 0x0535, 0x04F3, 0x04B0, 0x0000, 
    0xFDDA, 0xFBB4, 0xF98E, 0xF768, 0xF542, 0xF31C, 0xF0F6, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 
    0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xEED0, 0xD58C, 0xCFA0, 0xC763, 0xBD76, 0xB27A, 0xA710, 0x9BD9, 0x9177, 
    0x888A, 0x8148, 0x7C2D, 0x7A48, 0x7C9B, 0x81A4, 0x86AB, 0x88F2, 0x88F2, 0x88F2, 0x88F2, 0x88F2, 0x88F2, 0xF3F4, 
    0xF435, 0xF526, 0xF6A1, 0xF87C, 0xFA90, 0xFCB6, 0xFEC5, 0x0096, 0x02E6, 0x057A, 0x06B2, 0x0609, 0x046C, 0x026B, 
    0x0096, 0xFE91, 0xFD53, 0xFE2C, 0xFFBD, 0x0096, 0xF54C, 0xF3DB, 0xF2A6, 0xF1B9, 0xF123, 0xF0F2, 0xF132, 0xF1F3, 
    0xF342, 0xF90C, 0x024A, 0x07A1, 0x0679, 0x0276, 0xFD91, 0xF9C7, 0xF851, 0xF826, 0xF892, 0xF95B, 0xF9C7, 0xF575, 
    0xF434, 0xF326, 0xF260, 0xF1F5, 0xF1FA, 0xF284, 0xF3A6, 0xF575, 0xFC82, 0x07A1, 0x0E50, 0x0DA0, 0x09BA, 0x04C3, 
    0x00DE, 0xFEFB, 0xFE6C, 0xFF0E, 0x003C, 0x00DE, 0xF084, 0xEE74, 0xECD6, 0xEBBB, 0xEB33, 0xEB4E, 0xEC1E, 0xEDB2, 
    0xF01C, 0xF8FA, 0x0747, 0x111D, 0x13A6, 0x1355, 0x1132, 0x0E43, 0x05FA, 0xFF2F, 0x0318, 0x0A5A, 0x0E43, 0x9756, 
    0xB344, 0xC480, 0xBBEB, 0xA84A, 0x9DBD, 0xA52D, 0xB48C, 0xC386, 0xC9C7, 0xB06A, 0x97AA, 0x9C86, 0xA7EE, 0xB629, 
    0xC37F, 0xCC39, 0xC55F, 0xBBED, 0xC413, 0xCC39, 0x9B3A, 0x8E84, 0x7B43, 0x6644, 0x5453, 0x4660, 0x3A72, 0x30F7, 
    0x2A5B, 0x293B, 0x2C44, 0x2E06, 0x2C4B, 0x2966, 0x26AC, 0x2578, 0x2578, 0x2578, 0x2578, 0x2578, 0x2578, 0x0000, 
    
}; 

static JointIndex sAnubiceFallDownAnimJointIndices[16] = {
    { 0x0000, 0x0006, 0x001B },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0030 },
    { 0x0000, 0x0000, 0x0045 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x005A },
    { 0x0000, 0x0000, 0x006F },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0084 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0099 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x00AE },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0004 },
}; 

AnimationHeader gAnubiceFallDownAnim = { { 21 }, sAnubiceFallDownAnimFrameData, sAnubiceFallDownAnimJointIndices, 6 }; 

static u8 unaccounted_000358[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sAnubiceAttackingAnimFrameData[486] = {
    0x0000, 0x125C, 0x4000, 0x2000, 0x8000, 0x13E9, 0xC000, 0xC035, 0xC070, 0xC0B1, 0xC0F5, 0xC13B, 0xC180, 0xC1C5, 
    0xC205, 0xC241, 0xC275, 0xC2A1, 0xC2C3, 0xC2D8, 0xC2E0, 0xC2D8, 0xC2C5, 0xC2AB, 0xC28C, 0xC268, 0xC23F, 0xC212, 
    0xC1E1, 0xC1AC, 0xC175, 0xC13B, 0xC0FE, 0xC0C0, 0xC081, 0xC041, 0xC000, 0xBFBF, 0xBF7F, 0xBF40, 0xBF02, 0xBEC5, 
    0xBE8B, 0xBE54, 0xBE1F, 0xBDEE, 0xBDC1, 0xBD98, 0xBD74, 0xBD55, 0xBD3B, 0xBD28, 0xBD20, 0xBD28, 0xBD3D, 0xBD5F, 
    0xBD8B, 0xBDBF, 0xBDFB, 0xBE3B, 0xBE80, 0xBEC5, 0xBF0B, 0xBF4F, 0xBF90, 0xBFCB, 0x0000, 0x001A, 0x0038, 0x0058, 
    0x007A, 0x009D, 0x00C0, 0x00E2, 0x0103, 0x0120, 0x013B, 0x0151, 0x0161, 0x016C, 0x0170, 0x016C, 0x0162, 0x0156, 
    0x0146, 0x0134, 0x0120, 0x0109, 0x00F0, 0x00D6, 0x00BA, 0x009D, 0x007F, 0x0060, 0x0040, 0x0020, 0x0000, 0xFFE0, 
    0xFFC0, 0xFFA0, 0xFF81, 0xFF63, 0xFF46, 0xFF2A, 0xFF10, 0xFEF7, 0xFEE0, 0xFECC, 0xFEBA, 0xFEAA, 0xFE9E, 0xFE94, 
    0xFE90, 0xFE94, 0xFE9F, 0xFEAF, 0xFEC5, 0xFEE0, 0xFEFD, 0xFF1E, 0xFF40, 0xFF63, 0xFF86, 0xFFA8, 0xFFC8, 0xFFE6, 
    0x0000, 0xFFE6, 0xFFC8, 0xFFA8, 0xFF86, 0xFF63, 0xFF40, 0xFF1E, 0xFEFD, 0xFEE0, 0xFEC5, 0xFEAF, 0xFE9F, 0xFE94, 
    0xFE90, 0xFE94, 0xFE9E, 0xFEAA, 0xFEBA, 0xFECC, 0xFEE0, 0xFEF7, 0xFF10, 0xFF2A, 0xFF46, 0xFF63, 0xFF81, 0xFFA0, 
    0xFFC0, 0xFFE0, 0x0000, 0x0020, 0x0040, 0x0060, 0x007F, 0x009D, 0x00BA, 0x00D6, 0x00F0, 0x0109, 0x0120, 0x0134, 
    0x0146, 0x0156, 0x0162, 0x016C, 0x0170, 0x016C, 0x0161, 0x0151, 0x013B, 0x0120, 0x0103, 0x00E2, 0x00C0, 0x009D, 
    0x007A, 0x0058, 0x0038, 0x001A, 0x0000, 0xFFCB, 0xFF90, 0xFF4F, 0xFF0B, 0xFEC5, 0xFE80, 0xFE3B, 0xFDFB, 0xFDBF, 
    0xFD8B, 0xFD5F, 0xFD3D, 0xFD28, 0xFD20, 0xFD28, 0xFD3B, 0xFD55, 0xFD74, 0xFD98, 0xFDC1, 0xFDEE, 0xFE1F, 0xFE54, 
    0xFE8B, 0xFEC5, 0xFF02, 0xFF40, 0xFF7F, 0xFFBF, 0x0000, 0x0041, 0x0081, 0x00C0, 0x00FE, 0x013B, 0x0175, 0x01AC, 
    0x01E1, 0x0212, 0x023F, 0x0268, 0x028C, 0x02AB, 0x02C5, 0x02D8, 0x02E0, 0x02D8, 0x02C3, 0x02A1, 0x0275, 0x0241, 
    0x0205, 0x01C5, 0x0180, 0x013B, 0x00F5, 0x00B1, 0x0070, 0x0035, 0x0000, 0xFFC0, 0xFF7C, 0xFF34, 0xFEEB, 0xFEA1, 
    0xFE5A, 0xFE15, 0xFDD6, 0xFD9C, 0xFD6B, 0xFD44, 0xFD28, 0xFD19, 0xFD18, 0xFD28, 0xFD44, 0xFD67, 0xFD91, 0xFDC2, 
    0xFDF8, 0xFE33, 0xFE73, 0xFEB6, 0xFEFD, 0xFF48, 0xFF94, 0xFFE3, 0x0033, 0x0083, 0x00D4, 0x0125, 0x0175, 0x01C3, 
    0x0210, 0x025A, 0x02A2, 0x02E5, 0x0325, 0x0360, 0x0396, 0x03C6, 0x03F1, 0x0414, 0x0430, 0x0444, 0x0448, 0x0436, 
    0x040F, 0x03D7, 0x0390, 0x033E, 0x02E3, 0x0281, 0x021B, 0x01B4, 0x014F, 0x00EE, 0x0094, 0x0044, 0xC000, 0xBE5A, 
    0xBC79, 0xBAB6, 0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 
    0xC699, 0xC54A, 0xC387, 0xC1A6, 0xC000, 0xBE5A, 0xBC79, 0xBAB6, 0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 
    0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 0xC699, 0xC54A, 0xC387, 0xC1A6, 0xC000, 0xBE5A, 0xBC79, 0xBAB6, 
    0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 0xC6C4, 0xC5D8, 
    0xC486, 0xC2FE, 0x8000, 0x817B, 0x8502, 0x8937, 0x8CBE, 0x8E39, 0x8E39, 0x8E39, 0x8E39, 0x8E39, 0x857F, 0x74DF, 
    0x6AAB, 0x68B8, 0x6749, 0x6651, 0x65C2, 0x658F, 0x65AA, 0x6607, 0x6698, 0x6750, 0x6821, 0x68FF, 0x69DC, 0x6AAB, 
    0x6B9A, 0x6CD9, 0x6E59, 0x700C, 0x71E4, 0x73D2, 0x75C9, 0x77BA, 0x7996, 0x7B51, 0x7CDB, 0x7E26, 0x7F24, 0x7FC7, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x86EC, 0x942B, 0x9C72, 0x9E3F, 0x9F9C, 0xA08F, 0xA11F, 0xA153, 0xA131, 0xA0C0, 0xA007, 0x9F0E, 
    0x9DDA, 0x9C72, 0x9A13, 0x9651, 0x91B1, 0x8CBA, 0x87F3, 0x83E2, 0x810F, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
    0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 0x8000, 
}; 

static JointIndex sAnubiceAttackingAnimJointIndices[16] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0042 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x007E },
    { 0x0000, 0x0000, 0x00BA },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x00F6 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0132 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x016E },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x01AA },
}; 

AnimationHeader gAnubiceAttackingAnim = { { 60 }, sAnubiceAttackingAnimFrameData, sAnubiceAttackingAnimJointIndices, 6 }; 

static u8 unaccounted_00079C[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sAnubiceStandUpAnimFrameData[152] = {
    0x0000, 0x04B0, 0xEED0, 0x4000, 0x2000, 0x8000, 0x13E9, 0x04B0, 0x0488, 0x0460, 0x0438, 0x0410, 0x03E8, 0x0578, 
    0x0708, 0x0898, 0x0A28, 0x0BB8, 0x0DAC, 0x0FA0, 0x1194, 0x11F8, 0x125C, 0xEED0, 0xEF3E, 0xEFAC, 0xF01A, 0xF088, 
    0xF0F6, 0xF1C8, 0xF29A, 0xF36C, 0xF43E, 0xF510, 0xF7AB, 0xFA45, 0xFCE0, 0xFE70, 0x0000, 0x88F2, 0x85E8, 0x7EE0, 
    0x7702, 0x7171, 0x7154, 0x78AD, 0x8563, 0x9472, 0xA2D6, 0xAD8D, 0xB481, 0xB9B5, 0xBD48, 0xBF57, 0xC000, 0x0096, 
    0x0208, 0x0567, 0x0942, 0x0C28, 0x0CA8, 0x099E, 0x0400, 0xFD84, 0xF7DE, 0xF4C2, 0xF51E, 0xF7CE, 0xFB70, 0xFEA1, 
    0x0000, 0xF9C7, 0xFBBB, 0x0060, 0x05DF, 0x0A64, 0x0C18, 0x09DD, 0x04EA, 0xFEF0, 0xF9A1, 0xF6AD, 0xF6DF, 0xF916, 
    0xFC23, 0xFED6, 0x0000, 0x00DE, 0x0202, 0x04AB, 0x07B8, 0x0A04, 0x0A6C, 0x080D, 0x03AB, 0xFE98, 0xFA29, 0xF7B1, 
    0xF7E4, 0xF9DE, 0xFC93, 0xFEF8, 0x0000, 0x0E43, 0x0F74, 0x1221, 0x14F1, 0x168A, 0x1590, 0x109A, 0x088C, 0xFF8A, 
    0xF7B5, 0xF32F, 0xF323, 0xF625, 0xFA74, 0xFE52, 0x0000, 0xCC39, 0xC74A, 0xBB78, 0xAD3A, 0xA106, 0x9B55, 0xA0E7, 
    0xAE80, 0xBC99, 0xC3AB, 0xBBB6, 0xABBA, 0xA2AA, 0xAA00, 0xB842, 0xC000, 0x2578, 0x2450, 0x2211, 0x208A, 0x218F, 
    0x26F0, 0x3314, 0x44C5, 0x5868, 0x6A65, 0x7720, 0x7DC0, 0x80AA, 0x8127, 0x8081, 0x8000, 0x0000, 
}; 

static JointIndex sAnubiceStandUpAnimJointIndices[16] = {
    { 0x0000, 0x0007, 0x0017 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0003, 0x0000 },
    { 0x0000, 0x0000, 0x0027 },
    { 0x0000, 0x0000, 0x0037 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0047 },
    { 0x0000, 0x0000, 0x0057 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0067 },
    { 0x0000, 0x0000, 0x0003 },
    { 0x0000, 0x0000, 0x0077 },
    { 0x0004, 0x0003, 0x0004 },
    { 0x0000, 0x0000, 0x0087 },
    { 0x0005, 0x0005, 0x0006 },
    { 0x0000, 0x0000, 0x0005 },
}; 

AnimationHeader gAnubiceStandUpAnim = { { 16 }, sAnubiceStandUpAnimFrameData, sAnubiceStandUpAnimJointIndices, 7 }; 

static s16 sAnubiceAnim_000A48FrameData[84] = {
    0x0000, 0x1210, 0x4000, 0x2000, 0x8000, 0x13E9, 0xB1C7, 0xB350, 0xB818, 0xBE3D, 0xC3DE, 0xC71C, 0xC748, 0xC5A2, 
    0xC330, 0xC0F8, 0xC000, 0x061D, 0x0510, 0x026A, 0xFF24, 0xFC38, 0xFA9F, 0xFACA, 0xFC13, 0xFDD0, 0xFF58, 0x0000, 
    0x0755, 0x06D0, 0x04BB, 0x01F3, 0xFF59, 0xFDCD, 0xFD8F, 0xFE0C, 0xFEE0, 0xFFA7, 0x0000, 0x088E, 0x07A5, 0x04F9, 
    0x018F, 0xFE6C, 0xFC94, 0xFC63, 0xFD2B, 0xFE62, 0xFF82, 0x0000, 0x09C7, 0x092F, 0x0674, 0x02C4, 0xFF4C, 0xFD3B, 
    0xFCE4, 0xFD80, 0xFE8E, 0xFF8E, 0x0000, 0x99B3, 0x9E82, 0xA8F9, 0xB5B7, 0xC15E, 0xC88E, 0xCA1E, 0xC84D, 0xC4DA, 
    0xC181, 0xC000, 0x5C25, 0x60B1, 0x6D1C, 0x7CC2, 0x8AFC, 0x9326, 0x9374, 0x8EFE, 0x8876, 0x8291, 0x8000, 0x0000, 
    
}; 

static JointIndex sAnubiceAnim_000A48JointIndices[16] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0011 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x001C },
    { 0x0000, 0x0000, 0x0027 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0032 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x003D },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0048 },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0004 },
}; 

AnimationHeader gAnubiceAnim_000A48 = { { 11 }, sAnubiceAnim_000A48FrameData, sAnubiceAnim_000A48JointIndices, 6 }; 

static u8 unaccounted_000A58[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sAnubiceAnim_000BACFrameData[118] = {
    0x0000, 0x1210, 0x4000, 0x2000, 0x8000, 0x13E9, 0xC000, 0xC140, 0xC453, 0xC831, 0xCBD5, 0xCE39, 0xCF96, 0xD09D, 
    0xD0F4, 0xD045, 0xCE39, 0xC98F, 0xC281, 0xBAF0, 0xB4BC, 0xB1C7, 0x0000, 0xFF76, 0xFE24, 0xFC7B, 0xFAEA, 0xF9E3, 
    0xF94D, 0xF8DD, 0xF8B7, 0xF902, 0xF9E3, 0xFBEE, 0xFF09, 0x0258, 0x04FD, 0x061D, 0x0000, 0xFF52, 0xFDA6, 0xFB8A, 
    0xF98F, 0xF842, 0xF786, 0xF6FA, 0xF6CD, 0xF72C, 0xF842, 0xFAB4, 0xFE62, 0x025A, 0x05A7, 0x0755, 0x0000, 0xFF6D, 
    0xFE05, 0xFC3F, 0xFA94, 0xF97B, 0xF8D3, 0xF84A, 0xF815, 0xF869, 0xF97B, 0xFBF7, 0xFFB9, 0x03C0, 0x0708, 0x088E, 
    0x0000, 0xFEFF, 0xFC88, 0xF96E, 0xF682, 0xF497, 0xF386, 0xF2C1, 0xF285, 0xF30E, 0xF497, 0xF803, 0xFD29, 0x02B7, 
    0x075C, 0x09C7, 0xC000, 0xC000, 0xC000, 0xB570, 0xA1D2, 0x9742, 0x9B74, 0xA57B, 0xB17B, 0xBB9B, 0xC000, 0xBC09, 
    0xB249, 0xA6AF, 0x9D2D, 0x99B3, 0x8000, 0x8283, 0x88AC, 0x906E, 0x97BB, 0x9C85, 0x9F60, 0xA1AA, 0xA286, 0xA119, 
    0x9C85, 0x91DB, 0x81AD, 0x7064, 0x6269, 0x5C25, 
}; 

static JointIndex sAnubiceAnim_000BACJointIndices[16] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0016 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0026 },
    { 0x0000, 0x0000, 0x0036 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x0046 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0056 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x0066 },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0004 },
}; 

AnimationHeader gAnubiceAnim_000BAC = { { 16 }, sAnubiceAnim_000BACFrameData, sAnubiceAnim_000BACJointIndices, 6 }; 

static u8 unaccounted_000BBC[4] = {
    0x00, 0x00, 0x00, 0x00, 
}; 

static s16 sAnubiceIdleAnimFrameData[426] = {
    0x0000, 0x125C, 0x4000, 0x2000, 0x8000, 0x13E9, 0xC000, 0xC035, 0xC070, 0xC0B1, 0xC0F5, 0xC13B, 0xC180, 0xC1C5, 
    0xC205, 0xC241, 0xC275, 0xC2A1, 0xC2C3, 0xC2D8, 0xC2E0, 0xC2D8, 0xC2C5, 0xC2AB, 0xC28C, 0xC268, 0xC23F, 0xC212, 
    0xC1E1, 0xC1AC, 0xC175, 0xC13B, 0xC0FE, 0xC0C0, 0xC081, 0xC041, 0xC000, 0xBFBF, 0xBF7F, 0xBF40, 0xBF02, 0xBEC5, 
    0xBE8B, 0xBE54, 0xBE1F, 0xBDEE, 0xBDC1, 0xBD98, 0xBD74, 0xBD55, 0xBD3B, 0xBD28, 0xBD20, 0xBD28, 0xBD3D, 0xBD5F, 
    0xBD8B, 0xBDBF, 0xBDFB, 0xBE3B, 0xBE80, 0xBEC5, 0xBF0B, 0xBF4F, 0xBF90, 0xBFCB, 0x0000, 0x001A, 0x0038, 0x0058, 
    0x007A, 0x009D, 0x00C0, 0x00E2, 0x0103, 0x0120, 0x013B, 0x0151, 0x0161, 0x016C, 0x0170, 0x016C, 0x0162, 0x0156, 
    0x0146, 0x0134, 0x0120, 0x0109, 0x00F0, 0x00D6, 0x00BA, 0x009D, 0x007F, 0x0060, 0x0040, 0x0020, 0x0000, 0xFFE0, 
    0xFFC0, 0xFFA0, 0xFF81, 0xFF63, 0xFF46, 0xFF2A, 0xFF10, 0xFEF7, 0xFEE0, 0xFECC, 0xFEBA, 0xFEAA, 0xFE9E, 0xFE94, 
    0xFE90, 0xFE94, 0xFE9F, 0xFEAF, 0xFEC5, 0xFEE0, 0xFEFD, 0xFF1E, 0xFF40, 0xFF63, 0xFF86, 0xFFA8, 0xFFC8, 0xFFE6, 
    0x0000, 0xFFE6, 0xFFC8, 0xFFA8, 0xFF86, 0xFF63, 0xFF40, 0xFF1E, 0xFEFD, 0xFEE0, 0xFEC5, 0xFEAF, 0xFE9F, 0xFE94, 
    0xFE90, 0xFE94, 0xFE9E, 0xFEAA, 0xFEBA, 0xFECC, 0xFEE0, 0xFEF7, 0xFF10, 0xFF2A, 0xFF46, 0xFF63, 0xFF81, 0xFFA0, 
    0xFFC0, 0xFFE0, 0x0000, 0x0020, 0x0040, 0x0060, 0x007F, 0x009D, 0x00BA, 0x00D6, 0x00F0, 0x0109, 0x0120, 0x0134, 
    0x0146, 0x0156, 0x0162, 0x016C, 0x0170, 0x016C, 0x0161, 0x0151, 0x013B, 0x0120, 0x0103, 0x00E2, 0x00C0, 0x009D, 
    0x007A, 0x0058, 0x0038, 0x001A, 0x0000, 0xFFCB, 0xFF90, 0xFF4F, 0xFF0B, 0xFEC5, 0xFE80, 0xFE3B, 0xFDFB, 0xFDBF, 
    0xFD8B, 0xFD5F, 0xFD3D, 0xFD28, 0xFD20, 0xFD28, 0xFD3B, 0xFD55, 0xFD74, 0xFD98, 0xFDC1, 0xFDEE, 0xFE1F, 0xFE54, 
    0xFE8B, 0xFEC5, 0xFF02, 0xFF40, 0xFF7F, 0xFFBF, 0x0000, 0x0041, 0x0081, 0x00C0, 0x00FE, 0x013B, 0x0175, 0x01AC, 
    0x01E1, 0x0212, 0x023F, 0x0268, 0x028C, 0x02AB, 0x02C5, 0x02D8, 0x02E0, 0x02D8, 0x02C3, 0x02A1, 0x0275, 0x0241, 
    0x0205, 0x01C5, 0x0180, 0x013B, 0x00F5, 0x00B1, 0x0070, 0x0035, 0x0000, 0xFFC0, 0xFF7C, 0xFF34, 0xFEEB, 0xFEA1, 
    0xFE5A, 0xFE15, 0xFDD6, 0xFD9C, 0xFD6B, 0xFD44, 0xFD28, 0xFD19, 0xFD18, 0xFD28, 0xFD44, 0xFD67, 0xFD91, 0xFDC2, 
    0xFDF8, 0xFE33, 0xFE73, 0xFEB6, 0xFEFD, 0xFF48, 0xFF94, 0xFFE3, 0x0033, 0x0083, 0x00D4, 0x0125, 0x0175, 0x01C3, 
    0x0210, 0x025A, 0x02A2, 0x02E5, 0x0325, 0x0360, 0x0396, 0x03C6, 0x03F1, 0x0414, 0x0430, 0x0444, 0x0448, 0x0436, 
    0x040F, 0x03D7, 0x0390, 0x033E, 0x02E3, 0x0281, 0x021B, 0x01B4, 0x014F, 0x00EE, 0x0094, 0x0044, 0xC000, 0xBE5A, 
    0xBC79, 0xBAB6, 0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 
    0xC699, 0xC54A, 0xC387, 0xC1A6, 0xC000, 0xBE5A, 0xBC79, 0xBAB6, 0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 
    0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 0xC699, 0xC54A, 0xC387, 0xC1A6, 0xC000, 0xBE5A, 0xBC79, 0xBAB6, 
    0xB967, 0xB8E4, 0xB967, 0xBAB6, 0xBC79, 0xBE5A, 0xC000, 0xC1A6, 0xC387, 0xC54A, 0xC699, 0xC71C, 0xC6C4, 0xC5D8, 
    0xC486, 0xC2FE, 0x8000, 0x8087, 0x8122, 0x81C3, 0x825E, 0x82E6, 0x834D, 0x8386, 0x8386, 0x834D, 0x82E6, 0x825E, 
    0x81C3, 0x8122, 0x8087, 0x8000, 0x7F79, 0x7EDE, 0x7E3D, 0x7DA2, 0x7D1A, 0x7CB3, 0x7C7A, 0x7C7A, 0x7CB3, 0x7D1A, 
    0x7DA2, 0x7E3D, 0x7EDE, 0x7F79, 0x8000, 0x8087, 0x8122, 0x81C3, 0x825E, 0x82E6, 0x834D, 0x8386, 0x8386, 0x834D, 
    0x82E6, 0x825E, 0x81C3, 0x8122, 0x8087, 0x8000, 0x7F79, 0x7EDE, 0x7E3D, 0x7DA2, 0x7D1A, 0x7CB3, 0x7C7A, 0x7C7A, 
    0x7CB3, 0x7D1A, 0x7DA2, 0x7E3D, 0x7EDE, 0x7F79, 
}; 

static JointIndex sAnubiceIdleAnimJointIndices[16] = {
    { 0x0000, 0x0001, 0x0000 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0002, 0x0000 },
    { 0x0000, 0x0000, 0x0006 },
    { 0x0000, 0x0000, 0x0042 },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x007E },
    { 0x0000, 0x0000, 0x00BA },
    { 0x0000, 0x0000, 0x0000 },
    { 0x0000, 0x0000, 0x00F6 },
    { 0x0000, 0x0000, 0x0002 },
    { 0x0000, 0x0000, 0x0132 },
    { 0x0003, 0x0002, 0x0003 },
    { 0x0000, 0x0000, 0x016E },
    { 0x0004, 0x0004, 0x0005 },
    { 0x0000, 0x0000, 0x0004 },
}; 

AnimationHeader gAnubiceIdleAnim = { { 60 }, sAnubiceIdleAnimFrameData, sAnubiceIdleAnimJointIndices, 6 }; 

static u8 unaccounted_000F84[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 

u64 sAnubiceSkelTex_000F90[] = {
#include "assets/objects/object_anubice/sAnubiceSkelTex_000F90.rgb5a1.inc.c"
};

u64 sAnubiceSkelTex_001090[] = {
#include "assets/objects/object_anubice/sAnubiceSkelTex_001090.rgb5a1.inc.c"
};

u64 sAnubiceSkelTex_001110[] = {
#include "assets/objects/object_anubice/sAnubiceSkelTex_001110.rgb5a1.inc.c"
};

u64 sAnubiceSkelTex_001510[] = {
#include "assets/objects/object_anubice/sAnubiceSkelTex_001510.rgb5a1.inc.c"
};

u64 sAnubiceSkelTex_001590[] = {
#include "assets/objects/object_anubice/sAnubiceSkelTex_001590.rgb5a1.inc.c"
};

u64 sAnubiceSkelTex_001610[] = {
#include "assets/objects/object_anubice/sAnubiceSkelTex_001610.rgb5a1.inc.c"
};

u64 object_anubiceTex_001690[] = {
#include "assets/objects/object_anubice/object_anubiceTex_001690.ia16.inc.c"
};

u64 sAnubiceSkelTex_001A90[] = {
#include "assets/objects/object_anubice/sAnubiceSkelTex_001A90.rgb5a1.inc.c"
};

static Vtx sAnubiceSkelVtx_001B10[42] = {
    VTX(598, 173, 1211, 0, 512, 164, 53, 55, 255),
    VTX(1328, 674, 753, 638, 512, 213, 104, 40, 255),
    VTX(333, 551, 0, 354, -238, 195, 103, 255, 255),
    VTX(333, 551, 0, 214, -261, 195, 103, 255, 255),
    VTX(1328, 674, 753, 0, 512, 213, 104, 40, 255),
    VTX(1562, 1032, 0, 554, 512, 213, 111, 252, 255),
    VTX(598, 173, 1211, 321, 512, 164, 53, 55, 255),
    VTX(-45, 101, 0, -2, -305, 138, 240, 0, 255),
    VTX(672, -270, 990, 0, 512, 175, 180, 45, 255),
    VTX(356, -448, 0, 73, -124, 193, 154, 0, 255),
    VTX(1337, -808, 0, -126, 514, 215, 144, 0, 255),
    VTX(1193, -586, 660, 329, 514, 214, 148, 30, 255),
    VTX(356, -448, 0, 178, -132, 193, 154, 0, 255),
    VTX(1193, -586, 660, -64, 512, 214, 148, 30, 255),
    VTX(672, -270, 990, 379, 512, 175, 180, 45, 255),
    VTX(333, 551, 0, 357, -246, 195, 103, 255, 255),
    VTX(-45, 101, 0, 1, -315, 138, 240, 0, 255),
    VTX(598, 173, 1211, 0, 512, 164, 53, 55, 255),
    VTX(356, -448, 0, -232, -139, 193, 154, 0, 255),
    VTX(672, -270, 990, 128, 512, 175, 180, 45, 255),
    VTX(-45, 101, 0, 128, -305, 138, 240, 0, 255),
    VTX(1562, 1032, 0, 554, 512, 213, 111, 4, 255),
    VTX(1328, 674, -753, 0, 512, 213, 104, 216, 255),
    VTX(333, 551, 0, 214, -261, 195, 103, 1, 255),
    VTX(333, 551, 0, 354, -238, 195, 103, 1, 255),
    VTX(1328, 674, -753, 638, 512, 213, 104, 216, 255),
    VTX(598, 173, -1211, 0, 512, 164, 53, 201, 255),
    VTX(598, 173, -1211, 0, 512, 164, 53, 201, 255),
    VTX(-45, 101, 0, 1, -315, 138, 240, 0, 255),
    VTX(333, 551, 0, 357, -246, 195, 103, 1, 255),
    VTX(672, -270, -990, 0, 512, 175, 180, 211, 255),
    VTX(-45, 101, 0, -2, -305, 138, 240, 0, 255),
    VTX(598, 173, -1211, 321, 512, 164, 53, 201, 255),
    VTX(-45, 101, 0, 128, -305, 138, 240, 0, 255),
    VTX(672, -270, -990, 128, 512, 175, 180, 211, 255),
    VTX(356, -448, 0, -232, -139, 193, 154, 0, 255),
    VTX(672, -270, -990, 379, 512, 175, 180, 211, 255),
    VTX(1193, -586, -660, -64, 512, 214, 148, 226, 255),
    VTX(356, -448, 0, 178, -132, 193, 154, 0, 255),
    VTX(1193, -586, -660, 329, 514, 214, 148, 226, 255),
    VTX(1337, -808, 0, -126, 514, 215, 144, 0, 255),
    VTX(356, -448, 0, 73, -124, 193, 154, 0, 255),
}; 

static Vtx sAnubiceSkelVtx_001DB0[20] = {
    VTX(1687, -649, -523, 892, 510, 220, 164, 189, 255),
    VTX(450, -230, -281, 410, -579, 213, 147, 232, 255),
    VTX(388, 63, -651, 65, -534, 216, 26, 147, 255),
    VTX(1531, 728, 0, 21, 513, 229, 116, 4, 255),
    VTX(1483, 255, -846, 849, 513, 230, 39, 146, 255),
    VTX(388, 63, -651, 831, -515, 216, 26, 147, 255),
    VTX(388, 63, 651, 836, -452, 217, 20, 111, 255),
    VTX(450, -230, 281, 477, -529, 210, 151, 33, 255),
    VTX(1587, -649, 523, 0, 512, 215, 154, 46, 255),
    VTX(388, 457, 0, 183, -543, 228, 116, 0, 255),
    VTX(1531, 728, 0, 873, 513, 229, 116, 4, 255),
    VTX(388, 457, 0, 601, -569, 228, 116, 0, 255),
    VTX(388, 63, 651, -39, -456, 217, 20, 111, 255),
    VTX(1383, 77, 846, -47, 513, 233, 28, 114, 255),
    VTX(450, -230, -281, 306, -580, 213, 147, 232, 255),
    VTX(1687, -649, -523, 0, 512, 220, 164, 189, 255),
    VTX(1587, -649, 523, 897, 512, 215, 154, 46, 255),
    VTX(450, -230, 281, 784, -537, 210, 151, 33, 255),
    VTX(1383, 77, 846, 701, 512, 233, 28, 114, 255),
    VTX(1483, 255, -846, 54, 510, 230, 39, 146, 255),
}; 

static Vtx sAnubiceSkelVtx_001EF0[20] = {
    VTX(-238, 144, -592, -266, -297, 252, 3, 137, 255),
    VTX(685, 89, -623, 0, 512, 252, 60, 152, 255),
    VTX(889, -521, -385, 585, 512, 246, 174, 170, 255),
    VTX(-34, -426, -366, 285, -286, 244, 145, 214, 255),
    VTX(-90, 537, 0, 242, -319, 251, 115, 225, 255),
    VTX(833, 618, 0, 58, 513, 246, 117, 21, 255),
    VTX(685, 89, -623, 767, 513, 252, 60, 152, 255),
    VTX(-238, 144, -592, 857, -332, 252, 3, 137, 255),
    VTX(-238, 144, 592, -36, -409, 248, 65, 100, 255),
    VTX(785, 218, 623, 31, 512, 250, 8, 119, 255),
    VTX(833, 618, 0, 664, 512, 246, 117, 21, 255),
    VTX(-90, 537, 0, 576, -317, 251, 115, 225, 255),
    VTX(-34, -426, 366, 330, -361, 249, 176, 89, 255),
    VTX(989, -521, 385, 37, 512, 245, 146, 46, 255),
    VTX(785, 218, 623, 722, 512, 250, 8, 119, 255),
    VTX(-238, 144, 592, 879, -397, 248, 65, 100, 255),
    VTX(-34, -426, -366, -85, -275, 244, 145, 214, 255),
    VTX(889, -521, -385, 0, 512, 246, 174, 170, 255),
    VTX(989, -521, 385, 662, 512, 245, 146, 46, 255),
    VTX(-34, -426, 366, 534, -355, 249, 176, 89, 255),
}; 

static Vtx sAnubiceSkelVtx_002030[20] = {
    VTX(-255, 139, -515, -212, -445, 249, 7, 137, 255),
    VTX(862, 192, -566, 0, 512, 248, 66, 156, 255),
    VTX(1066, -465, -350, 615, 512, 248, 176, 167, 255),
    VTX(-51, -369, -318, 282, -409, 245, 145, 212, 255),
    VTX(-255, 139, 515, 16, -348, 250, 60, 103, 255),
    VTX(762, 104, 566, 137, 513, 250, 1, 119, 255),
    VTX(910, 570, 0, 775, 513, 249, 116, 30, 255),
    VTX(-107, 488, 0, 560, -330, 247, 116, 230, 255),
    VTX(-107, 488, 0, 123, -351, 247, 116, 230, 255),
    VTX(910, 570, 0, 23, 515, 249, 116, 30, 255),
    VTX(862, 192, -566, 605, 515, 248, 66, 156, 255),
    VTX(-255, 139, -515, 662, -439, 249, 7, 137, 255),
    VTX(-51, -369, -318, 162, -432, 245, 145, 212, 255),
    VTX(1066, -465, -350, 0, 512, 248, 176, 167, 255),
    VTX(966, -465, 350, 603, 512, 245, 145, 43, 255),
    VTX(-51, -369, 318, 699, -355, 246, 174, 86, 255),
    VTX(-51, -369, 318, 367, -358, 246, 174, 86, 255),
    VTX(966, -465, 350, 27, 511, 245, 145, 43, 255),
    VTX(762, 104, 566, 575, 511, 250, 1, 119, 255),
    VTX(-255, 139, 515, 862, -376, 250, 60, 103, 255),
}; 

static Vtx sAnubiceSkelVtx_002170[20] = {
    VTX(720, 118, -485, 0, 512, 251, 60, 153, 255),
    VTX(924, -385, -300, 489, 512, 247, 157, 189, 255),
    VTX(-21, -320, -273, 160, -284, 247, 145, 213, 255),
    VTX(-193, 134, -442, -279, -273, 251, 34, 142, 255),
    VTX(-21, -320, 273, 339, -364, 250, 176, 89, 255),
    VTX(1024, -385, 300, 0, 512, 248, 146, 45, 255),
    VTX(820, 163, 485, 523, 512, 250, 6, 119, 255),
    VTX(-193, 134, 442, 778, -364, 250, 63, 101, 255),
    VTX(-193, 134, 442, -54, -352, 250, 63, 101, 255),
    VTX(820, 163, 485, 0, 512, 250, 6, 119, 255),
    VTX(868, 502, 0, 507, 512, 249, 117, 25, 255),
    VTX(-45, 447, 0, 417, -264, 251, 116, 226, 255),
    VTX(-45, 447, 0, 209, -263, 251, 116, 226, 255),
    VTX(868, 502, 0, 0, 512, 249, 117, 25, 255),
    VTX(720, 118, -485, 543, 512, 251, 60, 153, 255),
    VTX(-193, 134, -442, 687, -278, 251, 34, 142, 255),
    VTX(-21, -320, -273, -110, -290, 247, 145, 213, 255),
    VTX(924, -385, -300, 0, 512, 247, 157, 189, 255),
    VTX(1024, -385, 300, 519, 512, 248, 146, 45, 255),
    VTX(-21, -320, 273, 349, -366, 250, 176, 89, 255),
}; 

static Vtx sAnubiceSkelVtx_0022B0[17] = {
    VTX(506, 102, 287, 515, 181, 34, 20, 113, 255),
    VTX(506, -206, 178, 1000, 183, 42, 164, 64, 255),
    VTX(992, 17, 0, 758, 0, 119, 0, 0, 255),
    VTX(506, 292, 0, 0, 181, 35, 113, 19, 255),
    VTX(992, 17, 0, 258, 0, 119, 0, 0, 255),
    VTX(506, -206, -178, 1560, 183, 36, 175, 176, 255),
    VTX(-7, -292, 219, 1020, 375, 18, 180, 90, 255),
    VTX(-7, -292, -219, 1540, 375, 21, 164, 183, 255),
    VTX(992, 17, 0, 1280, 0, 119, 0, 0, 255),
    VTX(-241, 122, 355, 507, 461, 14, 62, 101, 255),
    VTX(-71, 398, 0, 0, 396, 19, 115, 231, 255),
    VTX(-241, 135, -355, 2066, 461, 13, 9, 138, 255),
    VTX(506, 102, -287, 2045, 181, 35, 51, 154, 255),
    VTX(992, 17, 0, 1802, 0, 119, 0, 0, 255),
    VTX(-71, 398, 0, 2560, 396, 19, 115, 231, 255),
    VTX(506, 292, 0, 2560, 181, 35, 113, 19, 255),
    VTX(992, 17, 0, 2302, 0, 119, 0, 0, 255),
}; 

static Vtx sAnubiceSkelVtx_0023C0[5] = {
    VTX(-19, -2, 250, 1024, 0, 0, 136, 0, 255),
    VTX(-19, -2, -250, 0, 0, 0, 136, 0, 255),
    VTX(481, -2, -250, 0, 1024, 0, 136, 0, 255),
    VTX(481, -2, 0, 512, 1024, 0, 0, 0, 255),
    VTX(481, -2, 250, 1024, 1024, 0, 136, 0, 255),
}; 

static Vtx sAnubiceSkelVtx_002410[10] = {
    VTX(-223, 298, 288, 256, 256, 55, 90, 56, 255),
    VTX(1087, -5, 0, 87, -534, 104, 197, 3, 255),
    VTX(-223, 298, -288, -51, 256, 56, 91, 203, 255),
    VTX(-13, 1, 583, 29, 292, 34, 205, 102, 255),
    VTX(-13, 1, -583, -656, 292, 37, 237, 144, 255),
    VTX(1087, -5, 0, -313, 937, 104, 197, 3, 255),
    VTX(-223, 298, 288, 0, 256, 55, 90, 56, 255),
    VTX(-223, 298, -288, -307, 256, 56, 91, 203, 255),
    VTX(-13, 1, -583, -511, 469, 37, 237, 144, 255),
    VTX(-13, 1, 583, 174, 469, 34, 205, 102, 255),
}; 

static Vtx sAnubiceSkelVtx_0024B0[6] = {
    VTX(-223, 298, 288, 663, 239, 55, 90, 56, 255),
    VTX(-13, 1, 583, 637, 0, 34, 205, 102, 255),
    VTX(1087, -5, 0, 0, 0, 104, 197, 3, 255),
    VTX(1087, -5, 0, 0, 0, 104, 197, 253, 255),
    VTX(-13, 1, -583, 637, 0, 34, 205, 154, 255),
    VTX(-223, 298, -288, 663, 239, 55, 90, 200, 255),
}; 

static Vtx sAnubiceSkelVtx_002510[32] = {
    VTX(308, 259, 288, 0, 256, 6, 105, 56, 255),
    VTX(-119, -208, 765, -465, 256, 1, 251, 119, 255),
    VTX(633, 96, 583, -58, 525, 54, 227, 102, 255),
    VTX(633, 96, 583, 0, 256, 54, 227, 102, 255),
    VTX(-119, -208, 765, -487, 256, 1, 251, 119, 255),
    VTX(-42, -714, 377, -505, 633, 36, 182, 87, 255),
    VTX(-119, -208, -765, -484, 256, 254, 251, 137, 255),
    VTX(-745, 147, -667, -519, 681, 205, 40, 156, 255),
    VTX(308, 259, -288, 0, 256, 6, 107, 203, 255),
    VTX(-416, 629, 0, 0, 256, 15, 118, 0, 255),
    VTX(308, 259, 288, -506, 256, 6, 105, 56, 255),
    VTX(308, 259, -288, -404, 546, 6, 107, 203, 255),
    VTX(-1010, -1604, -507, -594, 536, 184, 163, 232, 255),
    VTX(-42, -714, -377, 181, 536, 33, 182, 168, 255),
    VTX(-300, -936, 0, 4, 296, 242, 137, 2, 255),
    VTX(-300, -936, 0, -177, 496, 242, 137, 2, 255),
    VTX(-42, -714, 377, 0, 256, 36, 182, 87, 255),
    VTX(-1010, -1604, 507, -776, 256, 203, 167, 60, 255),
    VTX(403, -561, -204, -759, 894, 78, 178, 209, 255),
    VTX(1607, 607, 0, 0, 256, 119, 253, 3, 255),
    VTX(403, -561, 204, -890, 693, 78, 178, 47, 255),
    VTX(-1007, 541, 0, -58, 256, 162, 74, 0, 255),
    VTX(-416, 629, 0, 292, 256, 15, 118, 0, 255),
    VTX(-745, 147, -667, 60, -209, 205, 40, 156, 255),
    VTX(308, 259, 288, 407, 557, 6, 105, 56, 255),
    VTX(-416, 629, 0, 0, 256, 15, 118, 0, 255),
    VTX(-745, 147, 667, -232, 721, 204, 40, 100, 255),
    VTX(-745, 147, -667, -67, 771, 205, 40, 156, 255),
    VTX(-416, 629, 0, 0, 256, 15, 118, 0, 255),
    VTX(308, 259, -288, -497, 256, 6, 107, 203, 255),
    VTX(-745, 147, 667, -660, 256, 204, 40, 100, 255),
    VTX(-119, -208, 765, -356, 555, 1, 251, 119, 255),
}; 

static Vtx sAnubiceSkelVtx_002710[26] = {
    VTX(633, 96, -583, 199, -349, 42, 1, 144, 255),
    VTX(633, 96, 583, -122, 256, 200, 106, 0, 255),
    VTX(1607, 607, 0, 609, 256, 200, 106, 0, 255),
    VTX(633, 96, 583, 11, 766, 54, 227, 102, 255),
    VTX(-42, -714, 377, 76, 139, 36, 182, 87, 255),
    VTX(403, -561, 204, -148, 329, 78, 178, 47, 255),
    VTX(1607, 607, 0, 0, 256, 119, 253, 3, 255),
    VTX(403, -561, -204, -992, 256, 78, 178, 209, 255),
    VTX(633, 96, -583, -656, 578, 42, 1, 144, 255),
    VTX(-745, 147, 667, -39, 333, 204, 40, 100, 255),
    VTX(-416, 629, 0, 194, 798, 15, 118, 0, 255),
    VTX(-1007, 541, 0, 404, 518, 162, 74, 0, 255),
    VTX(403, -561, -204, 107, 52, 78, 178, 209, 255),
    VTX(-42, -714, -377, -105, 256, 33, 182, 168, 255),
    VTX(633, 96, -583, 525, 256, 42, 1, 144, 255),
    VTX(308, 259, -288, 0, 256, 6, 107, 203, 255),
    VTX(308, 259, 288, -307, 256, 6, 105, 56, 255),
    VTX(633, 96, 583, -481, 469, 54, 227, 102, 255),
    VTX(633, 96, -583, 204, 469, 42, 1, 144, 255),
    VTX(308, 259, -288, 93, 536, 6, 107, 203, 255),
    VTX(633, 96, -583, 0, 256, 42, 1, 144, 255),
    VTX(-119, -208, -765, -391, 548, 254, 251, 137, 255),
    VTX(1607, 607, 0, 742, 766, 119, 253, 3, 255),
    VTX(633, 96, 583, 295, 188, 54, 227, 102, 255),
    VTX(633, 96, -583, 0, 256, 42, 1, 144, 255),
    VTX(-42, -714, -377, -630, 256, 33, 182, 168, 255),
}; 

static Vtx sAnubiceSkelVtx_0028B0[17] = {
    VTX(403, -561, 204, 390, 256, 78, 178, 47, 255),
    VTX(135, -940, 0, 128, -140, 51, 148, 0, 255),
    VTX(403, -561, -204, -134, 256, 78, 178, 209, 255),
    VTX(135, -940, 0, 180, -103, 51, 148, 0, 255),
    VTX(403, -561, 204, -138, 255, 78, 178, 47, 255),
    VTX(181, -638, 291, 144, 256, 0, 0, 0, 255),
    VTX(-42, -714, 377, 425, 257, 36, 182, 87, 255),
    VTX(-300, -936, 0, 453, 256, 242, 137, 2, 255),
    VTX(135, -940, 0, 172, -88, 51, 148, 0, 255),
    VTX(-42, -714, 377, -197, 256, 36, 182, 87, 255),
    VTX(-42, -714, -377, -197, 256, 36, 182, 169, 255),
    VTX(135, -940, 0, 172, -88, 51, 148, 0, 255),
    VTX(-300, -936, 0, 453, 256, 242, 137, 254, 255),
    VTX(-42, -714, -377, 425, 257, 36, 182, 169, 255),
    VTX(181, -638, -291, 144, 256, 0, 0, 0, 255),
    VTX(403, -561, -204, -138, 255, 78, 178, 209, 255),
    VTX(135, -940, 0, 180, -103, 51, 148, 0, 255),
}; 

static Vtx sAnubiceSkelVtx_0029C0[40] = {
    VTX(-119, -208, 765, 412, 512, 1, 251, 119, 255),
    VTX(-586, -767, 299, -15, -1, 169, 198, 58, 255),
    VTX(-42, -714, 377, 0, 512, 36, 182, 87, 255),
    VTX(-1010, -1604, 507, 703, 384, 203, 167, 60, 255),
    VTX(-586, -767, 299, 141, 135, 169, 198, 58, 255),
    VTX(-300, -936, 0, 0, 384, 242, 137, 2, 255),
    VTX(-586, -767, -299, 0, -64, 167, 197, 202, 255),
    VTX(-586, -767, 299, 0, -447, 169, 198, 58, 255),
    VTX(-1004, -142, 0, 481, -256, 141, 223, 0, 255),
    VTX(-1007, 541, 0, 523, 512, 162, 74, 0, 255),
    VTX(-1004, -142, 0, 312, 129, 141, 223, 0, 255),
    VTX(-745, 147, 667, 0, 512, 204, 40, 100, 255),
    VTX(-119, -208, 765, 0, 512, 1, 251, 119, 255),
    VTX(-745, 147, 667, 465, 512, 204, 40, 100, 255),
    VTX(-586, -767, 299, 123, -28, 169, 198, 58, 255),
    VTX(-300, -936, 0, -192, -256, 242, 137, 2, 255),
    VTX(-586, -767, 299, -319, -31, 169, 198, 58, 255),
    VTX(-745, 147, 667, -87, 524, 204, 40, 100, 255),
    VTX(-1004, -142, 0, 141, 123, 141, 223, 0, 255),
    VTX(-586, -767, 299, 573, 160, 169, 198, 58, 255),
    VTX(-1010, -1604, 507, 0, 384, 203, 167, 60, 255),
    VTX(-42, -714, 377, 846, 384, 36, 182, 87, 255),
    VTX(-300, -936, 0, 0, 384, 242, 137, 254, 255),
    VTX(-586, -767, -299, 141, 135, 169, 198, 198, 255),
    VTX(-1010, -1604, -507, 703, 384, 203, 167, 196, 255),
    VTX(-42, -714, -377, 846, 384, 36, 182, 169, 255),
    VTX(-1010, -1604, -507, 0, 384, 203, 167, 196, 255),
    VTX(-586, -767, -299, 573, 160, 169, 198, 198, 255),
    VTX(-42, -714, -377, 0, 512, 36, 182, 169, 255),
    VTX(-586, -767, -299, -15, -1, 169, 198, 198, 255),
    VTX(-119, -208, -765, 412, 512, 1, 251, 137, 255),
    VTX(-586, -767, -299, 123, -28, 169, 198, 198, 255),
    VTX(-745, 147, -667, 465, 512, 204, 40, 156, 255),
    VTX(-119, -208, -765, 0, 512, 1, 251, 137, 255),
    VTX(-1004, -142, 0, 141, 123, 141, 223, 0, 255),
    VTX(-745, 147, -667, -87, 524, 204, 40, 156, 255),
    VTX(-586, -767, -299, -319, -31, 169, 198, 198, 255),
    VTX(-745, 147, -667, 0, 512, 204, 40, 156, 255),
    VTX(-1004, -142, 0, 312, 129, 141, 223, 0, 255),
    VTX(-1007, 541, 0, 523, 512, 162, 74, 0, 255),
}; 

static Vtx object_anubiceVtx_002C40[10] = {
    VTX(633, 96, 583, 0, 614, 54, 227, 102, 255),
    VTX(-119, -208, 765, 1063, 614, 1, 251, 119, 255),
    VTX(-42, -714, 377, 1101, -43, 36, 182, 87, 255),
    VTX(403, -561, 204, 466, -106, 78, 178, 47, 255),
    VTX(1607, 607, 0, -1531, 472, 119, 253, 3, 255),
    VTX(633, 96, -583, 0, 614, 54, 227, 154, 255),
    VTX(1607, 607, 0, -1531, 472, 119, 253, 253, 255),
    VTX(403, -561, -204, 466, -106, 78, 178, 209, 255),
    VTX(-42, -714, -377, 1101, -43, 36, 182, 169, 255),
    VTX(-119, -208, -765, 1063, 614, 1, 251, 137, 255),
}; 

Gfx sAnubiceSkelLimbDL_002CE0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sAnubiceSkelTex_001090, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sAnubiceSkelVtx_001B10[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSPVertex(&sAnubiceSkelVtx_001B10[30], 12, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sAnubiceSkelTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPVertex(&sAnubiceSkelVtx_001DB0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 5, 9, 3, 0),
    gsSP2Triangles(10, 11, 12, 0, 12, 13, 10, 0),
    gsSP2Triangles(14, 15, 16, 0, 16, 17, 14, 0),
    gsSP2Triangles(8, 18, 6, 0, 2, 19, 0, 0),
    gsSPEndDisplayList(),
}; 

Gfx sAnubiceSkelLimbDL_002E30[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sAnubiceSkelTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sAnubiceSkelVtx_001EF0[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSPEndDisplayList(),
}; 

Gfx sAnubiceSkelLimbDL_002EE0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sAnubiceSkelTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sAnubiceSkelVtx_002030[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 2, 3, 0, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSPEndDisplayList(),
}; 

Gfx sAnubiceSkelLimbDL_002F90[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sAnubiceSkelTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sAnubiceSkelVtx_002170[0], 20, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(4, 5, 6, 0, 6, 7, 4, 0),
    gsSP2Triangles(8, 9, 10, 0, 10, 11, 8, 0),
    gsSP2Triangles(12, 13, 14, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 17, 18, 0, 18, 19, 16, 0),
    gsSPEndDisplayList(),
}; 

Gfx sAnubiceSkelLimbDL_003040[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sAnubiceSkelTex_000F90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sAnubiceSkelVtx_0022B0[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 0, 4, 0),
    gsSP2Triangles(5, 1, 6, 0, 5, 6, 7, 0),
    gsSP2Triangles(1, 5, 8, 0, 9, 0, 3, 0),
    gsSP2Triangles(3, 10, 9, 0, 11, 12, 5, 0),
    gsSP2Triangles(5, 7, 11, 0, 5, 12, 13, 0),
    gsSP2Triangles(6, 1, 0, 0, 0, 9, 6, 0),
    gsSP2Triangles(14, 15, 12, 0, 12, 11, 14, 0),
    gsSP1Triangle(12, 15, 16, 0),
    gsSPEndDisplayList(),
}; 

Gfx sAnubiceSkelLimbDL_003108[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sAnubiceSkelTex_001110, G_IM_FMT_RGBA, G_IM_SIZ_16b, 16, 32, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 4, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_TEX_EDGE2),
    gsSPClearGeometryMode(G_CULL_BACK | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sAnubiceSkelVtx_0023C0[0], 5, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP1Triangle(0, 3, 4, 0),
    gsSPEndDisplayList(),
}; 

Gfx sAnubiceSkelLimbDL_0031A0[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sAnubiceSkelTex_001510, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sAnubiceSkelVtx_002410[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sAnubiceSkelTex_001A90, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sAnubiceSkelVtx_0024B0[0], 6, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx sAnubiceSkelLimbDL_003288[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(sAnubiceSkelTex_001510, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_MIRROR | G_TX_WRAP, 
                         G_TX_MIRROR | G_TX_WRAP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 255),
    gsSPVertex(&sAnubiceSkelVtx_002510[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(18, 19, 20, 0, 21, 22, 23, 0),
    gsSP2Triangles(24, 25, 26, 0, 27, 28, 29, 0),
    gsSP1Triangle(0, 30, 31, 0),
    gsSPVertex(&sAnubiceSkelVtx_002710[0], 26, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 15, 16, 17, 0),
    gsSP2Triangles(15, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(5, 22, 23, 0, 24, 25, 21, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sAnubiceSkelTex_001590, G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 8, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 3, 3, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sAnubiceSkelVtx_0028B0[0], 17, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
    gsSP2Triangles(10, 11, 12, 0, 13, 14, 15, 0),
    gsSP1Triangle(13, 15, 16, 0),
    gsDPPipeSync(),
    gsDPLoadTextureBlock(sAnubiceSkelTex_001610, G_IM_FMT_RGBA, G_IM_SIZ_16b, 4, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 2, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsSPVertex(&sAnubiceSkelVtx_0029C0[0], 32, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
    gsSP2Triangles(12, 13, 14, 0, 6, 15, 7, 0),
    gsSP2Triangles(16, 17, 18, 0, 19, 20, 21, 0),
    gsSP2Triangles(22, 23, 24, 0, 25, 26, 27, 0),
    gsSP1Triangle(28, 29, 30, 0),
    gsSPVertex(&sAnubiceSkelVtx_0029C0[31], 9, 0),
    gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
    gsSP1Triangle(6, 7, 8, 0),
    gsSPEndDisplayList(),
}; 

Gfx gAnubiceEyesDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(object_anubiceTex_001690, G_IM_FMT_IA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_CLAMP, 
                         G_TX_NOMIRROR | G_TX_CLAMP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, TEXEL0, PRIMITIVE, ENVIRONMENT, COMBINED, ENVIRONMENT, 0, 0, 0, 
                       COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_XLU_DECAL2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 150, 100, 0, 255),
    gsDPSetEnvColor(30, 20, 10, 255),
    gsSPVertex(&object_anubiceVtx_002C40[0], 10, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(3, 4, 0, 0, 5, 6, 7, 0),
    gsSP2Triangles(7, 8, 5, 0, 8, 9, 5, 0),
    gsSPEndDisplayList(),
}; 

Gfx gAnubiceFireAttackDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(0x08000000, G_IM_FMT_I, G_IM_SIZ_8b, 32, 32, 0, G_TX_NOMIRROR | G_TX_CLAMP, G_TX_NOMIRROR | 
                         G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, 0, 0, 
                       0, COMBINED, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPVertex(&object_anubiceVtx_003590[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

static Vtx object_anubiceVtx_003590[4] = {
    VTX(20, 20, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(-19, 20, 0, 0, 1024, 255, 255, 255, 255),
    VTX(-19, -19, 0, 0, 0, 255, 255, 255, 255),
    VTX(20, -19, 0, 1024, 0, 255, 255, 255, 255),
}; 

static Vtx object_anubiceVtx_0035D0[4] = {
    VTX(5, -5, 0, 1024, 1024, 255, 255, 255, 255),
    VTX(5, 5, 0, 1024, 0, 255, 255, 255, 255),
    VTX(-5, 5, 0, 0, 0, 255, 255, 255, 255),
    VTX(-5, -5, 0, 0, 1024, 255, 255, 255, 255),
}; 

Gfx gAnubiceUnusedParticleTextureDL[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock_4b(object_anubiceTex_0036A0, G_IM_FMT_I, 32, 32, 0, G_TX_MIRROR | G_TX_CLAMP, G_TX_MIRROR | 
                            G_TX_CLAMP, 5, 5, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED, 0, 0, 0,
                       COMBINED),
    gsDPSetRenderMode(G_RM_PASS, G_RM_AA_ZB_XLU_SURF2),
    gsSPClearGeometryMode(G_FOG | G_LIGHTING | G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK),
    gsSPEndDisplayList(),
}; 

Gfx gAnubiceUnusedParticleGeometryDL[] = {
    gsSPVertex(&object_anubiceVtx_0035D0[0], 4, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSPEndDisplayList(),
}; 

u64 object_anubiceTex_0036A0[] = {
#include "assets/objects/object_anubice/object_anubiceTex_0036A0.i4.inc.c"
};

StandardLimb sAnubiceSkelLimb_0038A0 = { 
    { 0, 4700, 0 },
    0x01, 0xFF,
    NULL
}; 

StandardLimb sAnubiceSkelLimb_0038AC = { 
    { 0, 0, 0 },
    0x02, 0x0B,
    NULL
}; 

StandardLimb sAnubiceSkelLimb_0038B8 = { 
    { 0, 0, 0 },
    0x03, 0xFF,
    sAnubiceSkelLimbDL_002CE0
}; 

StandardLimb sAnubiceSkelLimb_0038C4 = { 
    { 1319, 0, 0 },
    0x04, 0x09,
    NULL
}; 

StandardLimb sAnubiceSkelLimb_0038D0 = { 
    { 0, 0, 0 },
    0xFF, 0x05,
    sAnubiceSkelLimbDL_002E30
}; 

StandardLimb sAnubiceSkelLimb_0038DC = { 
    { 721, 0, 0 },
    0x06, 0xFF,
    sAnubiceSkelLimbDL_002EE0
}; 

StandardLimb sAnubiceSkelLimb_0038E8 = { 
    { 793, 0, 0 },
    0x07, 0xFF,
    NULL
}; 

StandardLimb sAnubiceSkelLimb_0038F4 = { 
    { 0, 0, 0 },
    0xFF, 0x08,
    sAnubiceSkelLimbDL_002F90
}; 

StandardLimb sAnubiceSkelLimb_003900 = { 
    { 742, 0, 0 },
    0xFF, 0xFF,
    sAnubiceSkelLimbDL_003040
}; 

StandardLimb sAnubiceSkelLimb_00390C = { 
    { 1367, -800, 0 },
    0x0A, 0xFF,
    NULL
}; 

StandardLimb sAnubiceSkelLimb_003918 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sAnubiceSkelLimbDL_003108
}; 

StandardLimb sAnubiceSkelLimb_003924 = { 
    { 0, 12, -100 },
    0x0C, 0xFF,
    NULL
}; 

StandardLimb sAnubiceSkelLimb_003930 = { 
    { 0, 0, 0 },
    0x0D, 0xFF,
    sAnubiceSkelLimbDL_003288
}; 

StandardLimb sAnubiceSkelLimb_00393C = { 
    { 647, 89, 0 },
    0x0E, 0xFF,
    NULL
}; 

StandardLimb sAnubiceSkelLimb_003948 = { 
    { 0, 0, 0 },
    0xFF, 0xFF,
    sAnubiceSkelLimbDL_0031A0
}; 

static void* sAnubiceSkelLimbs[15] = {
    &sAnubiceSkelLimb_0038A0,
    &sAnubiceSkelLimb_0038AC,
    &sAnubiceSkelLimb_0038B8,
    &sAnubiceSkelLimb_0038C4,
    &sAnubiceSkelLimb_0038D0,
    &sAnubiceSkelLimb_0038DC,
    &sAnubiceSkelLimb_0038E8,
    &sAnubiceSkelLimb_0038F4,
    &sAnubiceSkelLimb_003900,
    &sAnubiceSkelLimb_00390C,
    &sAnubiceSkelLimb_003918,
    &sAnubiceSkelLimb_003924,
    &sAnubiceSkelLimb_003930,
    &sAnubiceSkelLimb_00393C,
    &sAnubiceSkelLimb_003948,
}; 

SkeletonHeader gAnubiceSkel = { sAnubiceSkelLimbs, 15 }; 

static u8 unaccounted_003998[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
}; 


