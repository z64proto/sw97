#include "global.h"
#include "vt.h"

u32 D_8012AC90[] = {
    0x00000000, 0x00010000, 0x00020000, 0x00030000, 0x00040000,
};

u32 D_8012ACA0[] = {
    0x00000002, 0x000A000C, 0x00020004, 0x000C000E, 0x000A000C, 0x00140016, 0x000C000E, 0x00160018,
    0x00010003, 0x00050006, 0x00070008, 0x0009000B, 0x000D000F, 0x00100011, 0x00120013, 0x00150017,
    0x00140016, 0x001E0020, 0x00160018, 0x00200022, 0x001E0020, 0x0028002A, 0x00200022, 0x002A002C,
    0x00150017, 0x0019001A, 0x001B001C, 0x001D001F, 0x00210023, 0x00240025, 0x00260027, 0x0029002B,
};

u32 D_8012AD20[] = {
    0x00000FC0,
    0x1F802F40,
    0x3F000000,
};

u32 D_8012AD2C[] = {
    0x000007C0, 0x0F801740, 0x1F0026C0, 0x2E803640, 0x3E000000,
};

u32 D_8012AD40[] = {
    0x00000010, 0x00130012, 0x00100001, 0x00140013, 0x00010011, 0x00150014, 0x00110005, 0x00160015,
    0x00120013, 0x00170002, 0x00130014, 0x00030017, 0x00140015, 0x00180003, 0x00150016, 0x00070018,
    0x00020017, 0x001A0019, 0x00170003, 0x001B001A, 0x00030018, 0x001C001B, 0x00180007, 0x001D001C,
    0x0019001A, 0x001E000A, 0x001A001B, 0x000B001E, 0x001B001C, 0x001F000B, 0x001C001D, 0x000F001F,
};

u32 D_8012ADC0[] = {
    0x00000000, 0x00002000, 0x00004000, 0x00006000, 0x00008000, 0x0000C000,
};

u32 D_8012ADD8[] = {
    0x00000002, 0x000A000C, 0x00020004, 0x000C000E, 0x000A000C, 0x00140016, 0x000C000E, 0x00160018,
    0x00010003, 0x00050006, 0x00070008, 0x0009000B, 0x000D000F, 0x00100011, 0x00120013, 0x00150017,
};

u32 D_8012AE18[] = {
    0x000007C0,
    0x0F801740,
    0x1F000000,
};

u32 D_8012AE24[] = {
    0x000007C0,
    0x0F801740,
    0x1F000000,
};

u32 D_8012AE30[] = {
    0x000007C0,
    0x0F8007C0,
    0x00000000,
};

u32 D_8012AE3C[] = {
    0x00000010, 0x00130012, 0x00100001, 0x00140013, 0x00010011, 0x00150014, 0x00110005, 0x00160015,
    0x00120013, 0x00170002, 0x00130014, 0x00030017, 0x00140015, 0x00180003, 0x00150016, 0x00070018,
    0x00020017, 0x001A0019, 0x00170003, 0x001B001A, 0x00030018, 0x001C001B, 0x00180007, 0x001D001C,
    0x0019001A, 0x001E000A, 0x001A001B, 0x000B001E, 0x001B001C, 0x001F000B, 0x001C001D, 0x000F001F,
};

typedef struct {
    /* 0x000 */ s32 x;      // X position of a corner of the sky cube
    /* 0x004 */ s32 y;      // Y position of a corner of the sky cube
    /* 0x008 */ s32 z;      // Z position of a corner of the sky cube
    /* 0x00C */ s32 width;  // Width of the subdivisions
    /* 0x010 */ s32 height; // Height of the subdivisions
} SkyCubeInfo;              // size = 0x14

// Kankyo data
typedef struct {
    /* 0x00 */ u16 unk_0; // start
    /* 0x02 */ u16 unk_2; // end
    /* 0x04 */ u8 unk_4;
    /* 0x05 */ u8 unk_5; // img idx 1
    /* 0x06 */ u8 unk_6; // img idx 2
    /* 0x07 */ char unk_7[0x1];
} Struct_8011FC1C; // size = 0x8

typedef struct {
    /* 0x00 */ u32 unk_0; // start
    /* 0x04 */ u32 unk_4; // end
    /* 0x08 */ u32 unk_8; // pal start
    /* 0x0C */ u32 unk_C; // pal end
} Struct_8011FD3C;        // size = 0x10

extern Struct_8011FC1C D_8011FC1C[8][9];
extern Struct_8011FD3C D_8011FD3C[];

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800ADBB0.s")

#pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AE2C0.s")

// Used for prerenders, has only 4 sides
void func_800AEFC8(SkyboxContext* skyboxCtx, s16 skyboxId) {
    static SkyCubeInfo D_8012AEBC[] = {
        { -126, 124, -126, 63, -31 },
        { 126, 124, -126, 63, -31 },
        { 126, 124, 126, -63, -31 },
        { -126, 124, 126, -63, -31 },
    };
    s32 phi_s1;
    s32 phi_s2;
    s32 vertexIndex = 0;

    if (skyboxId == 4) {
        // Outside Temple of Time
        static SkyCubeInfo templeCubeInfo[] = {
            { -126, 124, -126, 63, -31 }, // temple
            { -126, -124, -126, 63, 31 }, // steps, bottom
            { -126, 124, 126, -63, -31 }, // left of temple
            { 126, 124, -126, 63, -31 },  // right of temple
        };

        D_8012AC90[0] = 0x00000000; // front
        D_8012AC90[1] = 0x00020000; // left
        D_8012AC90[2] = 0x00000000; // behind
        D_8012AC90[3] = 0x00030000; // right
        D_8012AC90[4] = 0x00010000; // bottom

        vertexIndex =
            func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, vertexIndex, templeCubeInfo[0].x, templeCubeInfo[0].y,
                          templeCubeInfo[0].z, templeCubeInfo[0].width, templeCubeInfo[0].height, 0, 0);

        vertexIndex =
            func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, vertexIndex, templeCubeInfo[1].x, templeCubeInfo[1].y,
                          templeCubeInfo[1].z, templeCubeInfo[1].width, templeCubeInfo[1].height, 4, 2);

        vertexIndex =
            func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, vertexIndex, templeCubeInfo[2].x, templeCubeInfo[2].y,
                          templeCubeInfo[2].z, templeCubeInfo[2].width, templeCubeInfo[2].height, 1, 4);

        vertexIndex =
            func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, vertexIndex, templeCubeInfo[3].x, templeCubeInfo[3].y,
                          templeCubeInfo[3].z, templeCubeInfo[3].width, templeCubeInfo[3].height, 3, 6);

        // Reset the texture offsets now that we are done
        D_8012AC90[0] = 0x00000000;
        D_8012AC90[1] = 0x00010000;
        D_8012AC90[2] = 0x00020000;
        D_8012AC90[3] = 0x00030000;
        D_8012AC90[4] = 0x00040000;
        // } else if (skyboxId == 10) {
        //    static SkyCubeInfo shopCubeInfo[] = {
        //        { -124, 124, -124, 62, -31 },
        //        { 124, 124, -124, 62, -31 },
        //        { 124, 124, 124, -62, -31 },
        //        { -124, 124, 124, -62, -31 },
        //    };
        //    for (phi_s2 = 0, phi_s1 = 0; phi_s1 < 4; phi_s1++, phi_s2 += 2) {
        //        vertexIndex = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, vertexIndex, shopCubeInfo[phi_s1].x,
        //                                    shopCubeInfo[phi_s1].y, shopCubeInfo[phi_s1].z,
        //                                    shopCubeInfo[phi_s1].width, shopCubeInfo[phi_s1].height, phi_s1, phi_s2);
        //    }
    } else {
        if (skyboxId == 2 || (skyboxId > 16 && skyboxId < 25)) {
            for (phi_s2 = 0, phi_s1 = 0; phi_s1 < 2; phi_s1++, phi_s2 += 2) {
                vertexIndex = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, vertexIndex, D_8012AEBC[phi_s1].x,
                                            D_8012AEBC[phi_s1].y, D_8012AEBC[phi_s1].z, D_8012AEBC[phi_s1].width,
                                            D_8012AEBC[phi_s1].height, phi_s1, phi_s2);
            }
        } else if (skyboxCtx->unk_140 == 2) {
            for (phi_s2 = 0, phi_s1 = 0; phi_s1 < 3; phi_s1++, phi_s2 += 2) {
                vertexIndex = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, vertexIndex, D_8012AEBC[phi_s1].x,
                                            D_8012AEBC[phi_s1].y, D_8012AEBC[phi_s1].z, D_8012AEBC[phi_s1].width,
                                            D_8012AEBC[phi_s1].height, phi_s1, phi_s2);
            }
        } else {
            for (phi_s2 = 0, phi_s1 = 0; phi_s1 < 4; phi_s1++, phi_s2 += 2) {
                vertexIndex = func_800ADBB0(skyboxCtx, skyboxCtx->roomVtx, vertexIndex, D_8012AEBC[phi_s1].x,
                                            D_8012AEBC[phi_s1].y, D_8012AEBC[phi_s1].z, D_8012AEBC[phi_s1].width,
                                            D_8012AEBC[phi_s1].height, phi_s1, phi_s2);
            }
        }
    }
}

// Used for skyboxes, has 6 sides
void func_800AF178(SkyboxContext* skyboxCtx, s32 arg1) {
    static SkyCubeInfo D_8012AF0C[] = {
        { -64, 64, -64, 32, -32 }, { 64, 64, 64, -32, -32 }, { -64, 64, 64, -32, -32 },
        { 64, 64, -64, 32, -32 },  { -64, 64, 64, 32, -32 }, { -64, -64, -64, 32, 32 },
    };
    s32 phi_s2 = 0;
    s32 i;

    for (i = 0; i < arg1; i++) {
        phi_s2 = func_800AE2C0(skyboxCtx, skyboxCtx->roomVtx, phi_s2, D_8012AF0C[i].x, D_8012AF0C[i].y, D_8012AF0C[i].z,
                               D_8012AF0C[i].width, D_8012AF0C[i].height, i);
    }
}

// #ifdef NON_MATCHING
// Some reoderings at the end of the first case, some regalloc, stack
void func_800AF218(GlobalContext* globalCtx, SkyboxContext* skyboxCtx, s16 skyboxId) {
    Struct_8011FD3C* temp;
    u8 sp41; // imageIdx2
    u8 sp40; // imageIdx
    s16 phi_v0;
    s32 phi_v1;
    u32 sp30; // start
    u32 sp2C; // size

    switch (skyboxId) {
        case 1: // Normal sky
            phi_v1 = 0;
            if (gSaveContext.unk_13C3 != 0 && gSaveContext.sceneSetupIndex < 4 && D_8011FB30 > 0 && D_8011FB30 < 6) {
                phi_v1 = 1;
            }

            for (phi_v0 = 0; phi_v0 < 9; phi_v0++) {
                if (gSaveContext.environmentTime >= D_8011FC1C[phi_v1][phi_v0].unk_0 &&
                    (gSaveContext.environmentTime < D_8011FC1C[phi_v1][phi_v0].unk_2 ||
                     D_8011FC1C[phi_v1][phi_v0].unk_2 == 0xFFFF)) {
                    globalCtx->envCtx.unk_10 = sp41 = D_8011FC1C[phi_v1][phi_v0].unk_5;
                    globalCtx->envCtx.unk_11 = sp40 = D_8011FC1C[phi_v1][phi_v0].unk_6;
                    if (D_8011FC1C[phi_v1][phi_v0].unk_4 != 0) {
                        globalCtx->envCtx.unk_13 =
                            func_8006F93C(D_8011FC1C[phi_v1][phi_v0].unk_2, D_8011FC1C[phi_v1][phi_v0].unk_0,
                                          ((void)0, gSaveContext.environmentTime)) *
                            255.0f;
                    } else {
                        globalCtx->envCtx.unk_13 = 0;
                    }
                    break;
                }
            }

            sp2C = D_8011FD3C[sp41].unk_4 - D_8011FD3C[sp41].unk_0;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x41E);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], D_8011FD3C[sp41].unk_0, sp2C, "../z_vr_box.c", 0x422);

            sp2C = D_8011FD3C[sp40].unk_4 - D_8011FD3C[sp40].unk_0;
            skyboxCtx->staticSegments[1] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x424);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[1], D_8011FD3C[sp40].unk_0, sp2C, "../z_vr_box.c", 0x428);

            // reorderings in the rest of this case

            if (((u8)(sp41 & 4) >> 2) != (sp41 & 1)) {
                sp2C = D_8011FD3C[sp41].unk_C - D_8011FD3C[sp41].unk_8;
                skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C * 2, "../z_vr_box.c", 0x430);
                DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], D_8011FD3C[sp40].unk_8, sp2C, "../z_vr_box.c", 0x433);
                DmaMgr_SendRequest1((u32)skyboxCtx->staticSegments[2] + sp2C, D_8011FD3C[sp41].unk_8, sp2C,
                                    "../z_vr_box.c", 0x435);
            } else {
                sp2C = D_8011FD3C[sp41].unk_C - D_8011FD3C[sp41].unk_8;
                skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C * 2, "../z_vr_box.c", 0x43D);
                DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], D_8011FD3C[sp41].unk_8, sp2C, "../z_vr_box.c", 0x440);
                DmaMgr_SendRequest1((u32)skyboxCtx->staticSegments[2] + sp2C, D_8011FD3C[sp40].unk_8, sp2C,
                                    "../z_vr_box.c", 0x442);
            }
            break;
        case 2: // Bazaar
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_SP1a_staticSegmentRomStart;
            sp2C = _vr_SP1a_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x467);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x469);
            sp30 = _vr_SP1a_pal_staticSegmentRomStart;
            sp2C = _vr_SP1a_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x46C);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x46E);
            skyboxCtx->rot.y = 0.8f;
            break;
        case 3: // SPACEWORLD forest meadow
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, 0xC000, "../z_vr_box.c", 0x483);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], _vr_woods_staticSegmentRomStart, 0xC000, "../z_vr_box.c",
                                0x487);

            skyboxCtx->staticSegments[1] = GameState_Alloc(&globalCtx->state, 0xC000, "../z_vr_box.c", 0x48A);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[1], _vr_woods_staticSegmentRomStart, 0xC000, "../z_vr_box.c",
                                0x48E);

            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, 0x200, "../z_vr_box.c", 0x492);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], _vr_woods_pal_staticSegmentRomStart, 0x200,
                                "../z_vr_box.c", 0x495);
            break;
        case 4: // Space World Outside Temple of Time
            skyboxCtx->unk_140 = 1;

            // Set the special rotation values
            skyboxCtx->rot.x = 0.325f;
            skyboxCtx->rot.y = -0.675f;
            skyboxCtx->rot.z = 0.205f;

            // Allocate space for the whole static texture segment
            skyboxCtx->staticSegments[0] = GameState_Alloc(
                &globalCtx->state, (u32)_vr_RUVR_staticSegmentRomEnd - (u32)_vr_RUVR_staticSegmentRomStart, __FILE__,
                __LINE__);

            // Copy the texture into ram
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], (u32)_vr_RUVR_staticSegmentRomStart,
                                (u32)_vr_RUVR_staticSegmentRomEnd - (u32)_vr_RUVR_staticSegmentRomStart, __FILE__,
                                __LINE__);

            // Allocate space for the palette texture segment
            skyboxCtx->staticSegments[2] = GameState_Alloc(
                &globalCtx->state, (u32)_vr_RUVR_pal_staticSegmentRomEnd - (u32)_vr_RUVR_pal_staticSegmentRomStart,
                __FILE__, __LINE__);

            // Copy the palette into ram
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], (u32)_vr_RUVR_pal_staticSegmentRomStart,
                                (u32)_vr_RUVR_pal_staticSegmentRomEnd - (u32)_vr_RUVR_pal_staticSegmentRomStart,
                                __FILE__, __LINE__);
            break;
        case 5: // Cutscene Map
            sp30 = _vr_holy0_staticSegmentRomStart;
            sp2C = _vr_holy0_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4AC);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4B0);
            sp30 = _vr_holy1_staticSegmentRomStart;
            sp2C = _vr_holy1_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[1] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4B3);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[1], sp30, sp2C, "../z_vr_box.c", 0x4B7);
            sp30 = _vr_holy0_pal_staticSegmentRomStart;
            sp2C = _vr_holy0_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C * 2, "../z_vr_box.c", 0x4BB);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4BE);
            DmaMgr_SendRequest1((u32)skyboxCtx->staticSegments[2] + sp2C, _vr_holy1_pal_staticSegmentRomStart, sp2C,
                                "../z_vr_box.c", 0x4C0);
            break;
        case 7: // Link's House
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_LHVR_staticSegmentRomStart;
            sp2C = _vr_LHVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4CA);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4CC);
            sp30 = _vr_LHVR_pal_staticSegmentRomStart;
            sp2C = _vr_LHVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4CF);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4D1);
            break;
        case 9: // Child Market Day
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_MDVR_staticSegmentRomStart;
            sp2C = _vr_MDVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4E9);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4EB);
            sp30 = _vr_MDVR_pal_staticSegmentRomStart;
            sp2C = _vr_MDVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4EE);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4F0);
            break;
        case 10: // Child Market Night
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_MNVR_staticSegmentRomStart;
            sp2C = _vr_MNVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4F7);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x4F9);
            sp30 = _vr_MNVR_pal_staticSegmentRomStart;
            sp2C = _vr_MNVR_pal_staticSegmentRomEnd - sp30;
            osSyncPrintf("ＳＩＺＥ = %d\n", sp2C);
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x4FD);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x4FF);
            break;
        case 11: // Happy Mask Shop
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_FCVR_staticSegmentRomStart;
            sp2C = _vr_FCVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x506);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x508);
            sp30 = _vr_FCVR_pal_staticSegmentRomStart;
            sp2C = _vr_FCVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x50B);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x50D);
            skyboxCtx->rot.y = 0.8f;
            break;
        case 12: // Know-it-All Brothers' House
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_KHVR_staticSegmentRomStart;
            sp2C = _vr_KHVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x515);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x517);
            sp30 = _vr_KHVR_pal_staticSegmentRomStart;
            sp2C = _vr_KHVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x51A);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x51C);
            break;
        case 14: // House of Twins
            skyboxCtx->unk_140 = 2;
            sp30 = _vr_K3VR_staticSegmentRomStart;
            sp2C = _vr_K3VR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x533);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x535);
            sp30 = _vr_K3VR_pal_staticSegmentRomStart;
            sp2C = _vr_K3VR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x538);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x53A);
            break;
        case 15: // Stables
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_MLVR_staticSegmentRomStart;
            sp2C = _vr_MLVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x541);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x543);
            sp30 = _vr_MLVR_pal_staticSegmentRomStart;
            sp2C = _vr_MLVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x546);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x548);
            break;
        case 16: // Kakariko Village House
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_KKRVR_staticSegmentRomStart;
            sp2C = _vr_KKRVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x54F);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x551);
            sp30 = _vr_KKRVR_pal_staticSegmentRomStart;
            sp2C = _vr_KKRVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x554);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x556);
            break;
        case 17: // Kokiri Shop
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_KSVR_staticSegmentRomStart;
            sp2C = _vr_KSVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x55D);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x55F);
            sp30 = _vr_KSVR_pal_staticSegmentRomStart;
            sp2C = _vr_KSVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x562);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x564);
            skyboxCtx->rot.y = 0.8f;
            break;
        case 19: // Goron Shop
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_GLVR_staticSegmentRomStart;
            sp2C = _vr_GLVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x57D);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x57F);
            sp30 = _vr_GLVR_pal_staticSegmentRomStart;
            sp2C = _vr_GLVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x582);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x584);
            skyboxCtx->rot.y = 0.8f;
            break;
        case 20: // Zora Shop
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_ZRVR_staticSegmentRomStart;
            sp2C = _vr_ZRVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x58C);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x58E);
            sp30 = _vr_ZRVR_pal_staticSegmentRomStart;
            sp2C = _vr_ZRVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x591);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x593);
            skyboxCtx->rot.y = 0.8f;
            break;
        case 22: // Kakariko Potion Shop
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_DGVR_staticSegmentRomStart;
            sp2C = _vr_DGVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5AB);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5AD);
            sp30 = _vr_DGVR_pal_staticSegmentRomStart;
            sp2C = _vr_DGVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5B0);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5B2);
            skyboxCtx->rot.y = 0.8f;
            break;
        case 23: // Market Potion Shop
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_ALVR_staticSegmentRomStart;
            sp2C = _vr_ALVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5BA);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5BC);
            sp30 = _vr_ALVR_pal_staticSegmentRomStart;
            sp2C = _vr_ALVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5BF);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5C1);
            skyboxCtx->rot.y = 0.8f;
            break;
        case 24: // Bombchu Shop
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_NSVR_staticSegmentRomStart;
            sp2C = _vr_NSVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5C9);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5CB);
            sp30 = _vr_NSVR_pal_staticSegmentRomStart;
            sp2C = _vr_NSVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5CE);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5D0);
            skyboxCtx->rot.y = 0.8f;
            break;
        case 26: // Richard's House
            skyboxCtx->unk_140 = 1;
            sp30 = _vr_IPVR_staticSegmentRomStart;
            sp2C = _vr_IPVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5E8);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5EA);
            sp30 = _vr_IPVR_pal_staticSegmentRomStart;
            sp2C = _vr_IPVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5ED);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5EF);
            break;
        case 27: // Impa's House, Replaced by Hyrule Castle Garden Prerender
            skyboxCtx->unk_140 = 1;

            // Set the special rotation values
            skyboxCtx->rot.x = 0.460f;
            skyboxCtx->rot.y = 0.730f;
            skyboxCtx->rot.z = -0.320f;

            sp30 = _vr_LBVR_staticSegmentRomStart;
            sp2C = _vr_LBVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5F6);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x5F8);
            sp30 = _vr_LBVR_pal_staticSegmentRomStart;
            sp2C = _vr_LBVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x5FB);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x5FD);
            break;
        case 28: // Carpenter's Tent
            skyboxCtx->unk_140 = 2;
            sp30 = _vr_TTVR_staticSegmentRomStart;
            sp2C = _vr_TTVR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x604);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x606);
            sp30 = _vr_TTVR_pal_staticSegmentRomStart;
            sp2C = _vr_TTVR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x609);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x60B);
            break;
        case 32: // Mido's House
            skyboxCtx->unk_140 = 2;
            sp30 = _vr_K4VR_staticSegmentRomStart;
            sp2C = _vr_K4VR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x618);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x61A);
            sp30 = _vr_K4VR_pal_staticSegmentRomStart;
            sp2C = _vr_K4VR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x61D);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x61F);
            break;
        case 33: // Saria's House
            skyboxCtx->unk_140 = 2;
            sp30 = _vr_K5VR_staticSegmentRomStart;
            sp2C = _vr_K5VR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x626);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x628);
            sp30 = _vr_K5VR_pal_staticSegmentRomStart;
            sp2C = _vr_K5VR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x62B);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x62D);
            break;
        case 34: // Guy's House
            skyboxCtx->unk_140 = 2;
            sp30 = _vr_KR3VR_staticSegmentRomStart;
            sp2C = _vr_KR3VR_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[0] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x634);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[0], sp30, sp2C, "../z_vr_box.c", 0x636);
            sp30 = _vr_KR3VR_pal_staticSegmentRomStart;
            sp2C = _vr_KR3VR_pal_staticSegmentRomEnd - sp30;
            skyboxCtx->staticSegments[2] = GameState_Alloc(&globalCtx->state, sp2C, "../z_vr_box.c", 0x639);
            DmaMgr_SendRequest1(skyboxCtx->staticSegments[2], sp30, sp2C, "../z_vr_box.c", 0x63B);
            break;
        case 39:
        default:
            break;
    }
}
// #else
// void func_800AF218(GlobalContext *globalCtx, SkyboxContext *skyboxCtx, s16 skyboxId);
// #pragma GLOBAL_ASM("asm/non_matchings/code/z_vr_box/func_800AF218.s")
// #endif

void func_800B0E50(GameState* state, SkyboxContext* skyboxCtx, s16 skyboxId) {
    GlobalContext* globalCtx = (GlobalContext*)state;
    skyboxCtx->unk_140 = 0;
    skyboxCtx->rot.x = 0.0f;
    skyboxCtx->rot.y = 0.0f;
    skyboxCtx->rot.z = 0.0f;

    func_800AF218(globalCtx, skyboxCtx, skyboxId);

    osSyncPrintf("\n\n\n＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n\n\nＴＹＰＥ＝%"
                 "d\n\n\n＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊＊\n\n\n",
                 skyboxId);

    if (skyboxId != 0) {
        osSyncPrintf(VT_FGCOL(GREEN));

        // prerender flag?
        if (skyboxCtx->unk_140 != 0) {
            skyboxCtx->dpList = GameState_Alloc(state, 1200 * sizeof(Gfx), "../z_vr_box.c", 1636);
            skyboxCtx->roomVtx = GameState_Alloc(state, 256 * sizeof(Vtx), "../z_vr_box.c", 1639);
            func_800AEFC8(skyboxCtx, skyboxId);
        } else {
            skyboxCtx->dpList = GameState_Alloc(state, 1800 * sizeof(Gfx), "../z_vr_box.c", 1643);

            if (skyboxId == 5) {
                skyboxCtx->roomVtx = GameState_Alloc(state, 192 * sizeof(Vtx), "../z_vr_box.c", 1648);
                func_800AF178(skyboxCtx, 6);
            } else {
                skyboxCtx->roomVtx = GameState_Alloc(state, 160 * sizeof(Vtx), "../z_vr_box.c", 1653);
                func_800AF178(skyboxCtx, 5);
            }
        }

        osSyncPrintf(VT_RST);
    }
}
