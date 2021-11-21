#include "ultra64.h"
#include "global.h"

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EC960.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ECA00.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ECA60.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ECAF0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ECB34.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ECB7C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ECC04.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ECDBC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ECDF8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ED200.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ED458.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ED848.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ED858.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800ED93C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EDA3C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EDD68.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE170.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE29C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE2D4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE318.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE3C8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE3D4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE3F8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE404.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE57C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE5EC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE6F4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE824.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE930.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE97C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EE9D0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800EEA50.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F1BDC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F2150.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F227C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F2464.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F27A0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F28AC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F28B4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F29FC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F2A04.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F2D6C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F2E28.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3054.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3138.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3140.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F314C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3188.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F32F0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3468.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F35EC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F37B8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3990.s")

// #pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3A08.s")
typedef enum { BANK_PLAYER, BANK_ITEM, BANK_ENV, BANK_ENEMY, BANK_SYSTEM, BANK_OCARINA, BANK_VOICE } SoundBankTypes;

typedef struct {
    f32 unk_00;
    f32 unk_04;
    s8 unk_08;
    s8 unk_09;
    s8 unk_0A;
    u8 unk_0B;
    u8 unk_0C;
} unk_s1;

extern f32 D_801305C4[];
extern s8 D_80130604;
extern u8 D_8013063C;
extern u8 D_80130640;
extern unk_s1 D_8016B8B8[0x10];
extern u8 gPitchSound;

void Audio_QueueCmdF32(u32 opArgs, f32 data);
void Audio_QueueCmdS8(u32 opArgs, s8 data);
void Audio_QueueCmdU16(u32 opArgs, u16 data);
f32 func_800F3188(u8 bankIdx, u8 entryIdx);
s8 func_800F3990(f32 arg0, u16 arg1);
s8 func_800F32F0(u8 arg0, u8 arg1, u8 arg2);
s8 func_800F3468(f32 arg0, f32 arg1, u8 arg2);
f32 func_800F35EC(u8 bankIdx, u8 entryIdx);
u8 func_800F37B8(f32 arg0, SoundBankEntry* arg1, s8 arg2);

#define SEMITONE(num) ((f32)(2 ^ ((num) / 12)))

void func_800F3A08(u8 bankIdx, u8 entryIdx, u8 channelIdx) {
    f32 sp44;
    s8 phi_a1;
    s8 sp42;
    f32 sp3C;
    s8 sp3B;
    u8 sp3A;
    u8 sp39;
    s8 sp38;
    f32 sp34;
    u8 sp33;
    SoundBankEntry* temp_a3;

    sp42 = 0;
    sp3B = 0x40;
    sp3A = 0;
    sp39 = 0;
    sp38 = 0;
    sp33 = 0;
    sp3C = 1.0f;
    sp44 = 1.0f;
    temp_a3 = &gSoundBanks[bankIdx][entryIdx];
    switch (bankIdx) {
        case BANK_PLAYER:
        case BANK_ITEM:
        case BANK_ENV:
        case BANK_ENEMY:
        case BANK_VOICE:
            if (D_80130604 == 2) {
                sp38 = func_800F3990(*temp_a3->posY, temp_a3->unk_26);
            }
        case BANK_OCARINA:
            temp_a3->unk_1C = sqrtf(temp_a3->unk_1C);
            sp44 = func_800F3188(bankIdx, entryIdx) * *temp_a3->unk_14;

            // Remove reverb from ocarina for Spaceworld
            if (bankIdx != BANK_OCARINA) {
                sp42 = func_800F32F0(bankIdx, entryIdx, channelIdx); // reverb
            } else {
                sp42 = 0;
            }

            sp3B = func_800F3468(*temp_a3->posX, *temp_a3->posZ, temp_a3->unk_C);
            sp3C = func_800F35EC(bankIdx, entryIdx) * *temp_a3->unk_10;
            if (D_80130604 == 2) {
                sp34 = D_801305C4[(temp_a3->unk_26 & 0x400) >> 0xA];
                if (!(temp_a3->unk_26 & 0x800)) {
                    if (*temp_a3->posZ < sp34) {
                        sp3A = 0x10;
                    }

                    if ((D_8016B8B8[channelIdx].unk_0A ^ sp3A) & 0x10) {
                        if (sp3B < 0x40) {
                            sp3A = D_8016B8B8[channelIdx].unk_0A ^ 0x14;
                        } else {
                            sp3A = D_8016B8B8[channelIdx].unk_0A ^ 0x18;
                        }
                    } else {
                        sp3A = D_8016B8B8[channelIdx].unk_0A;
                    }
                }
            }
            if (D_8013063C != 0) {
                if ((bankIdx == 1) || (bankIdx == 0) || (bankIdx == 6)) {
                    sp33 = D_8013063C;
                }
            }

            if ((sp33 | D_80130640) != 0) {
                sp39 = (sp33 | D_80130640);
            } else if (D_80130604 != 2) {
            } else if (temp_a3->unk_26 & 0x2000) {
            } else {
                sp39 = func_800F37B8(sp34, temp_a3, sp3B);
            }
            break;
        case BANK_SYSTEM:
            break;
    }

    // added for spaceworld, change the pitch of specific sounds
    switch (temp_a3->unk_28) {
        case NA_SE_SY_HP_RECOVER:
        case NA_SE_SY_MESSAGE_WOMAN:
            sp3C /= 2.0f; // 1 octave lower
            gPitchSound = false;
            break;

        case NA_SE_SY_ATTENTION_ON_OLD:
            gPitchSound = false;
            break;

        case NA_SE_SY_LOCK_ON_HUMAN:
            sp3C *= 1.5f; // 1 octave higher
            gPitchSound = false;
            break;

        default:
            break;
    }

    if (D_8016B8B8[channelIdx].unk_00 != sp44) {
        phi_a1 = (u8)(sp44 * 127.0f);
        D_8016B8B8[channelIdx].unk_00 = sp44;
    } else {
        phi_a1 = -1;
    }

    Audio_QueueCmdS8(0x6020000 | (channelIdx << 8) | 2, phi_a1);
    if (sp42 != D_8016B8B8[channelIdx].unk_08) {
        Audio_QueueCmdS8(0x5020000 | (channelIdx << 8), sp42);
        D_8016B8B8[channelIdx].unk_08 = sp42;
    }
    if (sp3C != D_8016B8B8[channelIdx].unk_04) {
        Audio_QueueCmdF32(0x4020000 | (channelIdx << 8), sp3C);
        D_8016B8B8[channelIdx].unk_04 = sp3C;
    }
    if (sp3A != D_8016B8B8[channelIdx].unk_0A) {
        Audio_QueueCmdS8(0xE020000 | (channelIdx << 8), sp3A | 0x10);
        D_8016B8B8[channelIdx].unk_0A = sp3A;
    }
    if (sp39 != D_8016B8B8[channelIdx].unk_0B) {
        Audio_QueueCmdS8(0x6020000 | (channelIdx << 8) | 3, sp39);
        D_8016B8B8[channelIdx].unk_0B = sp39;
    }
    if (sp38 != D_8016B8B8[channelIdx].unk_0C) {
        Audio_QueueCmdS8(0xC020000 | (channelIdx << 8), 0x10);
        Audio_QueueCmdU16(0xD020000 | (channelIdx << 8), ((u16)(sp38) << 8) + 0xFF);
        D_8016B8B8[channelIdx].unk_0C = sp38;
    }
    if (sp3B != D_8016B8B8[channelIdx].unk_09) {
        Audio_QueueCmdS8(0x3020000 | (channelIdx << 8), sp3B);
        D_8016B8B8[channelIdx].unk_09 = sp3B;
    }
}

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3ED4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3F3C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F3F84.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4010.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4138.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4190.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F41E0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4254.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F436C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4414.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F44EC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4524.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4578.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F45D0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4634.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F46E0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4784.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F47BC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F47FC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F483C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4870.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F491C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4A54.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4A70.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4B58.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4BE8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4BF4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4C58.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F4E30.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F50CC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F50EC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F510C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F52A0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5504.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5510.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5550.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F56A8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5718.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F574C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5918.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F595C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F59E8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5A58.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5ACC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5B58.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5BF0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5C2C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5C64.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5CF8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5E18.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F5E90.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6114.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6268.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F64E0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6584.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F66C0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F66DC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6700.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F67A0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6828.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F68BC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F68D4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F691C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6964.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6AB0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6B3C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6B68.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6BB8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6BDC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6C14.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6C34.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6D58.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6E7C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F6FB4.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F70F8.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F711C.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F7170.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F71BC.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/code_800EC960/func_800F7208.s")
