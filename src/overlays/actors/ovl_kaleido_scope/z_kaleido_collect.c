#include "z_kaleido_scope.h"
#include "textures/parameter_static/parameter_static.h"
#include "textures/icon_item_static/icon_item_static.h"
#include "textures/icon_item_24_static/icon_item_24_static.h"

static Color_RGB8 sMedalPrimColors[] = {
    /* Wind   */ { 0, 205, 58 },
    /* Fire   */ { 229, 63, 5 },
    /* Ice    */ { 11, 118, 250 },
    /* Spirit */ { 215, 191, 7 },
    /* Shadow */ { 90, 80, 70 },
    /* Light  */ { 196, 194, 204 },
};

static Color_RGB8 sTriforcePrimColor = { 255, 251, 18 };

#define WIND_MEDAL_GLOW_R 35
#define WIND_MEDAL_GLOW_G 87
#define WIND_MEDAL_GLOW_B 26

#define FIRE_MEDAL_GLOW_R 61
#define FIRE_MEDAL_GLOW_G 37
#define FIRE_MEDAL_GLOW_B 11

#define ICE_MEDAL_GLOW_R 7
#define ICE_MEDAL_GLOW_G 67
#define ICE_MEDAL_GLOW_B 74

#define SPIRIT_MEDAL_GLOW_R 92
#define SPIRIT_MEDAL_GLOW_G 91
#define SPIRIT_MEDAL_GLOW_B 34

#define SHADOW_MEDAL_GLOW_R 30
#define SHADOW_MEDAL_GLOW_G 30
#define SHADOW_MEDAL_GLOW_B 33

#define LIGHT_MEDAL_GLOW_R 84
#define LIGHT_MEDAL_GLOW_G 84
#define LIGHT_MEDAL_GLOW_B 77

#define TRIFORCE_MEDAL_GLOW_R 138
#define TRIFORCE_MEDAL_GLOW_G 124
#define TRIFORCE_MEDAL_GLOW_B 39

static s32 sPauseAnimStep = 0;

static void* sNoteTextures[] = {
    // gWhiteSongNoteTex, gBlackSongNoteTex, gYellowSongNoteTex, gGreenSongNoteTex, gBlueSongNoteTex, gRedSongNoteTex,
    gGreenSongNoteTex, gRedSongNoteTex, gBlueSongNoteTex, gYellowSongNoteTex, gBlackSongNoteTex, gWhiteSongNoteTex,
};

typedef struct {
    u16 keyFrameLength;
    u16 keyFrameCount;
    Color_RGB8* colors;
    u16* keyFrames;
} AnimatedMatColorParams;

// Frames used for all medallions
#define MEDAL_FINAL_FRAME 292
static u16 sMedalAnimFrames[] = {
    0, 200, 244, 245, 290, MEDAL_FINAL_FRAME - 1,
};

// Wind Medal Animation
static Color_RGB8 sWindMedalAnimColors[] = {
    { 0, 0, 0 },
    { 0, 0, 0 },
    { WIND_MEDAL_GLOW_R, WIND_MEDAL_GLOW_G, WIND_MEDAL_GLOW_B },
    { WIND_MEDAL_GLOW_R, WIND_MEDAL_GLOW_G, WIND_MEDAL_GLOW_B },
    { 0, 0, 0 },
    { 0, 0, 0 },
};
static AnimatedMatColorParams sWindMedalAnim = {
    MEDAL_FINAL_FRAME,
    ARRAY_COUNT(sMedalAnimFrames),
    sWindMedalAnimColors,
    sMedalAnimFrames,
};

// Fire Medal Animation
static Color_RGB8 sFireMedalAnimColors[] = {
    { 0, 0, 0 },
    { 0, 0, 0 },
    { FIRE_MEDAL_GLOW_R, FIRE_MEDAL_GLOW_G, FIRE_MEDAL_GLOW_B },
    { FIRE_MEDAL_GLOW_R, FIRE_MEDAL_GLOW_G, FIRE_MEDAL_GLOW_B },
    { 0, 0, 0 },
    { 0, 0, 0 },
};
static AnimatedMatColorParams sFireMedalAnim = {
    MEDAL_FINAL_FRAME,
    ARRAY_COUNT(sMedalAnimFrames),
    sFireMedalAnimColors,
    sMedalAnimFrames,
};

// Ice Medal Animation
static Color_RGB8 sIceMedalAnimColors[] = {
    { 0, 0, 0 },
    { 0, 0, 0 },
    { ICE_MEDAL_GLOW_R, ICE_MEDAL_GLOW_G, ICE_MEDAL_GLOW_B },
    { ICE_MEDAL_GLOW_R, ICE_MEDAL_GLOW_G, ICE_MEDAL_GLOW_B },
    { 0, 0, 0 },
    { 0, 0, 0 },
};
static AnimatedMatColorParams sIceMedalAnim = {
    MEDAL_FINAL_FRAME,
    ARRAY_COUNT(sMedalAnimFrames),
    sIceMedalAnimColors,
    sMedalAnimFrames,
};

// Spirit Medal Animation
static Color_RGB8 sSpiritMedalAnimColors[] = {
    { 0, 0, 0 },
    { 0, 0, 0 },
    { SPIRIT_MEDAL_GLOW_R, SPIRIT_MEDAL_GLOW_G, SPIRIT_MEDAL_GLOW_B },
    { SPIRIT_MEDAL_GLOW_R, SPIRIT_MEDAL_GLOW_G, SPIRIT_MEDAL_GLOW_B },
    { 0, 0, 0 },
    { 0, 0, 0 },
};
static AnimatedMatColorParams sSpiritMedalAnim = {
    MEDAL_FINAL_FRAME,
    ARRAY_COUNT(sMedalAnimFrames),
    sSpiritMedalAnimColors,
    sMedalAnimFrames,
};

// Shadow Medal Animation
static Color_RGB8 sShadowMedalAnimColors[] = {
    { 0, 0, 0 },
    { 0, 0, 0 },
    { SHADOW_MEDAL_GLOW_R, SHADOW_MEDAL_GLOW_G, SHADOW_MEDAL_GLOW_B },
    { SHADOW_MEDAL_GLOW_R, SHADOW_MEDAL_GLOW_G, SHADOW_MEDAL_GLOW_B },
    { 0, 0, 0 },
    { 0, 0, 0 },
};
static AnimatedMatColorParams sShadowMedalAnim = {
    MEDAL_FINAL_FRAME,
    ARRAY_COUNT(sMedalAnimFrames),
    sShadowMedalAnimColors,
    sMedalAnimFrames,
};

// Light Medal Animation
static Color_RGB8 sLightMedalAnimColors[] = {
    { 0, 0, 0 },
    { 0, 0, 0 },
    { LIGHT_MEDAL_GLOW_R, LIGHT_MEDAL_GLOW_G, LIGHT_MEDAL_GLOW_B },
    { LIGHT_MEDAL_GLOW_R, LIGHT_MEDAL_GLOW_G, LIGHT_MEDAL_GLOW_B },
    { 0, 0, 0 },
    { 0, 0, 0 },
};
static AnimatedMatColorParams sLightMedalAnim = {
    MEDAL_FINAL_FRAME,
    ARRAY_COUNT(sMedalAnimFrames),
    sLightMedalAnimColors,
    sMedalAnimFrames,
};

// List of all medal anims
static AnimatedMatColorParams* sMedalAnims[] = {
    &sWindMedalAnim, &sFireMedalAnim, &sIceMedalAnim, &sSpiritMedalAnim, &sShadowMedalAnim, &sLightMedalAnim,
};

// Triforce Animation
static Color_RGB8 sTriforceAnimColors[] = {
    { 0, 0, 0 },
    { 0, 0, 0 },
    { TRIFORCE_MEDAL_GLOW_R, TRIFORCE_MEDAL_GLOW_G, TRIFORCE_MEDAL_GLOW_B },
    { TRIFORCE_MEDAL_GLOW_R, TRIFORCE_MEDAL_GLOW_G, TRIFORCE_MEDAL_GLOW_B },
    { 0, 0, 0 },
    { 0, 0, 0 },
};
static AnimatedMatColorParams sTriforceAnim = {
    MEDAL_FINAL_FRAME,
    ARRAY_COUNT(sMedalAnimFrames),
    sTriforceAnimColors,
    sMedalAnimFrames,
};

s32 KaleidoScope_Lerp(s32 min, s32 max, f32 norm) {
    return (s32)((max - min) * norm) + min;
}

void AnimatedMat_DrawColorLerp(void* params, Color_RGB8* colorDest) {
    AnimatedMatColorParams* colorAnimParams = (AnimatedMatColorParams*)params;
    Color_RGB8* colorMax;
    u16* keyFrames;
    s32 curFrame;
    s32 endFrame;
    s32 relativeFrame; // relative to the start frame
    s32 startFrame;
    f32 norm;
    Color_RGB8* colorMin;
    Color_RGB8 colorResult;
    s32 i;

    colorMax = colorAnimParams->colors;
    keyFrames = colorAnimParams->keyFrames;
    curFrame = sPauseAnimStep % colorAnimParams->keyFrameLength;
    keyFrames++;
    i = 1;

    while (colorAnimParams->keyFrameCount > i) {
        if (curFrame < *keyFrames) {
            break;
        }
        i++;
        keyFrames++;
    }

    startFrame = keyFrames[-1];
    endFrame = keyFrames[0] - startFrame;
    relativeFrame = curFrame - startFrame;
    norm = (f32)relativeFrame / (f32)endFrame;

    colorMax += i;
    colorMin = colorMax - 1;
    colorDest->r = KaleidoScope_Lerp(colorMin->r, colorMax->r, norm);
    colorDest->g = KaleidoScope_Lerp(colorMin->g, colorMax->g, norm);
    colorDest->b = KaleidoScope_Lerp(colorMin->b, colorMax->b, norm);
}

void KaleidoScope_DrawQuestStatus(GlobalContext* globalCtx, GraphicsContext* gfxCtx) {
    static s16 D_8082A070[][4] = {
        { 255, 0, 0, 255 },
        { 255, 70, 0, 150 },
        { 255, 70, 0, 150 },
        { 255, 0, 0, 255 },
    };
    static s16 D_8082A104 = 0;
    static s16 D_8082A108 = 0;
    static s16 D_8082A10C = 0;
    static s16 D_8082A110 = 0;
    static s16 D_8082A114 = 20;
    static s16 D_8082A118 = 0;
    static s16 D_8082A11C = 0;
    static s16 D_8082A120 = 0;
    static u8 D_8082A124[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };
    static void* D_8082A130[] = {
        gHUDButtonATex, gHUDButtonCDownTex, gHUDButtonCRightTex, gHUDButtonCLeftTex, gHUDButtonCUpTex,
    };
    static u16 D_8082A144[] = {
        0xFFCC, 0xFFCC, 0xFFCC, 0xFFCC, 0xFFCC,
    };
    static s16 D_8082A150[] = {
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    };
    // Format: up, down, left, right
    static s8 questCursorMovement[][4] = {
        // Forest Medallion
        {
            QUEST_MEDALLION_LIGHT, QUEST_MEDALLION_FIRE,
            QUEST_TRIFORCE, // QUEST_MEDALLION_LIGHT,
            0xFE,           // to right screen?
        },
        // Fire Medallion
        {
            QUEST_MEDALLION_FOREST,
            QUEST_MEDALLION_WATER,
            QUEST_MEDALLION_WATER,
            0xFE,
        },
        // Water Medallion
        {
            QUEST_TRIFORCE, // 0xFF,
            QUEST_GORON_RUBY,
            QUEST_MEDALLION_SPIRIT,
            QUEST_MEDALLION_FIRE,
        },
        // Spirit Medallion
        {
            QUEST_MEDALLION_SHADOW,
            QUEST_MEDALLION_WATER,
            QUEST_HEART_PIECE, // QUEST_SONG_STORMS,
            QUEST_MEDALLION_WATER,
        },
        // Shadow Medallion
        {
            QUEST_MEDALLION_LIGHT, QUEST_MEDALLION_SPIRIT, QUEST_HEART_PIECE,
            QUEST_TRIFORCE, // QUEST_MEDALLION_LIGHT,
        },
        // Light Medallion
        {
            0xFF,
            QUEST_TRIFORCE, // 0xFF,
            QUEST_MEDALLION_SHADOW,
            QUEST_MEDALLION_FOREST,
        },
        // Minuet of Wind
        {
            QUEST_SKULL_TOKEN, // QUEST_SONG_LULLABY,
            0xFF,
            0xFD, // to left screen?
            QUEST_SONG_BOLERO,
        },
        // Bolero of Fire
        {
            QUEST_EXTRA_BLUE_ORB, // QUEST_SONG_EPONA, // TODO: Go to upper square stuff instead
            0xFF,
            QUEST_SONG_MINUET,
            QUEST_SONG_SERENADE,
        },
        // Waltz of Water
        {
            QUEST_HEART_PIECE, // QUEST_SONG_SARIA, // TODO: Go to upper square stuff instead
            0xFF,
            QUEST_SONG_BOLERO,
            QUEST_SONG_REQUIEM,
        },
        // Gospel of Spirit
        {
            QUEST_HEART_PIECE, // QUEST_SONG_SUN,
            0xFF,
            QUEST_SONG_SERENADE,
            QUEST_SONG_NOCTURNE,
        },
        // Etude of Shadow
        {
            QUEST_HEART_PIECE, // QUEST_SONG_TIME,
            0xFF,
            QUEST_SONG_REQUIEM,
            QUEST_SONG_PRELUDE,
        },
        // Prelude of Light
        {
            QUEST_HEART_PIECE, // QUEST_SONG_STORMS,
            0xFF,
            QUEST_SONG_NOCTURNE,
            QUEST_KOKIRI_EMERALD,
        },
        // Non-Warp Song 1 (Triforce)
        {
            QUEST_MEDALLION_LIGHT,  // QUEST_SKULL_TOKEN,
            QUEST_MEDALLION_WATER,  // QUEST_SONG_MINUET,
            QUEST_MEDALLION_SHADOW, // 0xFD,
            QUEST_MEDALLION_FOREST, // QUEST_SONG_EPONA,
        },
        // Non-Warp Song 2 (blue orb)
        {
            QUEST_GERUDO_CARD, // QUEST_SKULL_TOKEN,
            QUEST_SONG_BOLERO,
            QUEST_SKULL_TOKEN, // QUEST_SONG_LULLABY,
            QUEST_HEART_PIECE, // QUEST_SONG_SARIA,
        },
        // Non-Warp Song 3
        {
            QUEST_SKULL_TOKEN,
            QUEST_SONG_SERENADE,
            QUEST_SONG_EPONA,
            QUEST_SONG_SUN,
        },
        // Non-Warp Song 4
        {
            QUEST_HEART_PIECE,
            QUEST_SONG_REQUIEM,
            QUEST_SONG_SARIA,
            QUEST_SONG_TIME,
        },
        // Non-Warp Song 5
        {
            QUEST_HEART_PIECE,
            QUEST_SONG_NOCTURNE,
            QUEST_SONG_SUN,
            QUEST_SONG_STORMS,
        },
        // Non-Warp Song 6
        {
            QUEST_HEART_PIECE,
            QUEST_SONG_PRELUDE,
            QUEST_SONG_TIME,
            QUEST_MEDALLION_SPIRIT,
        },
        // Kokiri Emerald
        {
            QUEST_MEDALLION_WATER,
            0xFF,
            QUEST_SONG_PRELUDE,
            QUEST_GORON_RUBY,
        },
        // Goron Ruby
        {
            QUEST_MEDALLION_WATER,
            0xFF,
            QUEST_KOKIRI_EMERALD,
            QUEST_ZORA_SAPPHIRE,
        },
        // Zora Sapphire
        {
            QUEST_MEDALLION_WATER,
            0xFF,
            QUEST_GORON_RUBY,
            0xFE,
        },
        // Stone of Agony
        {
            0xFF,
            QUEST_SKULL_TOKEN,
            0xFD,
            QUEST_GERUDO_CARD,
        },
        // Gerudo Card
        {
            0xFF,
            QUEST_EXTRA_BLUE_ORB, // QUEST_SKULL_TOKEN,
            QUEST_STONE_OF_AGONY,
            QUEST_HEART_PIECE,
        },
        // Golden Skulltula
        {
            QUEST_STONE_OF_AGONY,
            QUEST_SONG_MINUET, // QUEST_SONG_LULLABY,
            0xFD,
            QUEST_EXTRA_BLUE_ORB, // QUEST_HEART_PIECE,
        },
        // Pieces of Heart
        {
            0xFF,
            QUEST_SONG_NOCTURNE, // QUEST_SONG_TIME,
            QUEST_GERUDO_CARD,
            QUEST_MEDALLION_SHADOW,
        },
        {
            0,
            0,
            0,
            0,
        },
    };
    PauseContext* pauseCtx = &globalCtx->pauseCtx;
    Input* input = &globalCtx->state.input[0];
    s16 sp226;
    s16 sp224;
    s16 sp222;
    s16 sp220;
    s16 phi_s0;
    s16 phi_s3;
    s16 sp21A;
    s16 sp218;
    s16 sp216;
    s16 phi_s6;
    s16 phi_v1;
    s16 phi_a2;
    s16 phi_s0_2;
    s16 sp208[3];

    OPEN_DISPS(gfxCtx);

    if ((!pauseCtx->unk_1E4 || (pauseCtx->unk_1E4 == 5) || (pauseCtx->unk_1E4 == 8)) &&
        (pauseCtx->pageIndex == PAUSE_QUEST)) {
        pauseCtx->cursorColorSet = 0;

        if (pauseCtx->cursorSpecialPos == 0) {
            pauseCtx->nameColorSet = 0;

            if ((pauseCtx->state != 6) || ((pauseCtx->stickRelX == 0) && (pauseCtx->stickRelY == 0))) {
                sp216 = pauseCtx->cursorSlot[PAUSE_QUEST];
            } else {
                phi_s3 = pauseCtx->cursorPoint[PAUSE_QUEST];

                if (pauseCtx->stickRelX < -30) {
                    phi_s0 = questCursorMovement[phi_s3][2];
                    if (phi_s0 == -3) {
                        KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_LEFT);
                        pauseCtx->unk_1E4 = 0;
                    } else {
                        while (phi_s0 >= 0) {
                            if ((s16)KaleidoScope_UpdateQuestStatusPoint(pauseCtx, phi_s0) != 0) {
                                break;
                            }
                            phi_s0 = questCursorMovement[phi_s0][2];
                        }
                    }
                } else if (pauseCtx->stickRelX > 30) {
                    phi_s0 = questCursorMovement[phi_s3][3];
                    if (phi_s0 == -2) {
                        KaleidoScope_MoveCursorToSpecialPos(globalCtx, PAUSE_CURSOR_PAGE_RIGHT);
                        pauseCtx->unk_1E4 = 0;
                    } else {
                        while (phi_s0 >= 0) {
                            if ((s16)KaleidoScope_UpdateQuestStatusPoint(pauseCtx, phi_s0) != 0) {
                                break;
                            }
                            phi_s0 = questCursorMovement[phi_s0][3];
                        }
                    }
                }

                if (pauseCtx->stickRelY < -30) {
                    phi_s0 = questCursorMovement[phi_s3][1];
                    while (phi_s0 >= 0) {
                        if ((s16)KaleidoScope_UpdateQuestStatusPoint(pauseCtx, phi_s0) != 0) {
                            break;
                        }
                        phi_s0 = questCursorMovement[phi_s0][1];
                    }
                } else if (pauseCtx->stickRelY > 30) {
                    phi_s0 = questCursorMovement[phi_s3][0];
                    while (phi_s0 >= 0) {
                        if ((s16)KaleidoScope_UpdateQuestStatusPoint(pauseCtx, phi_s0) != 0) {
                            break;
                        }
                        phi_s0 = questCursorMovement[phi_s0][0];
                    }
                }

                if (phi_s3 != pauseCtx->cursorPoint[PAUSE_QUEST]) {
                    pauseCtx->unk_1E4 = 0;
                    Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                }

                if (pauseCtx->cursorPoint[PAUSE_QUEST] != 0x18) {
                    if (CHECK_QUEST_ITEM(pauseCtx->cursorPoint[PAUSE_QUEST])) {
                        if (pauseCtx->cursorPoint[PAUSE_QUEST] < 6) {
                            phi_s0_2 = pauseCtx->cursorPoint[PAUSE_QUEST] + 0x66;
                            osSyncPrintf("000 ccc=%d\n", phi_s0_2);
                        } else if (pauseCtx->cursorPoint[PAUSE_QUEST] < 0x12) {
                            phi_s0_2 = pauseCtx->cursorPoint[PAUSE_QUEST] + 0x54;
                            osSyncPrintf("111 ccc=%d\n", phi_s0_2);
                        } else {
                            phi_s0_2 = pauseCtx->cursorPoint[PAUSE_QUEST] + 0x5A;
                            osSyncPrintf("222 ccc=%d (%d, %d, %d)\n", phi_s0_2, pauseCtx->cursorPoint[PAUSE_QUEST],
                                         0x12, 0x6C);
                        }
                    } else {
                        phi_s0_2 = PAUSE_ITEM_NONE;
                        osSyncPrintf("999 ccc=%d (%d,  %d)\n", PAUSE_ITEM_NONE, pauseCtx->cursorPoint[PAUSE_QUEST],
                                     0x18);
                    }
                } else {
                    if ((gSaveContext.inventory.questItems & 0xF0000000) != 0) {
                        phi_s0_2 = 0x72;
                    } else {
                        phi_s0_2 = PAUSE_ITEM_NONE;
                    }
                    osSyncPrintf("888 ccc=%d (%d,  %d,  %x)\n", phi_s0_2, pauseCtx->cursorPoint[PAUSE_QUEST], 0x72,
                                 gSaveContext.inventory.questItems & 0xF0000000);
                }

                sp216 = pauseCtx->cursorPoint[PAUSE_QUEST];
                pauseCtx->cursorItem[pauseCtx->pageIndex] = phi_s0_2;
                pauseCtx->cursorSlot[pauseCtx->pageIndex] = sp216;
            }

            KaleidoScope_SetCursorVtx(pauseCtx, sp216 * 4, pauseCtx->questVtx);

            if ((pauseCtx->state == 6) && (pauseCtx->unk_1E4 == 0) && (pauseCtx->cursorSpecialPos == 0)) {
                if ((sp216 >= 6) && (sp216 < 0x12)) {
                    if (CHECK_QUEST_ITEM(pauseCtx->cursorPoint[PAUSE_QUEST])) {
                        sp216 = pauseCtx->cursorSlot[PAUSE_QUEST];
                        pauseCtx->unk_264 = D_80153958[4 + sp216];
                        D_8082A120 = 10;

                        for (phi_s3 = 0; phi_s3 < 8; phi_s3++) {
                            D_8082A124[phi_s3] = 0xFF;
                            D_8082A150[phi_s3] = 0;
                        }

                        D_8082A11C = 0;
                        func_800ED858(1);
                        func_800ECC04((1 << pauseCtx->unk_264) + 0x8000);
                        pauseCtx->unk_194 = func_800EE3F8();
                        pauseCtx->unk_194->unk_02 = 0;
                        pauseCtx->unk_194->unk_01 = 0xFF;
                        VREG(21) = -62;
                        VREG(22) = -56;
                        VREG(23) = -49;
                        VREG(24) = -46;
                        VREG(25) = -41;
                        pauseCtx->unk_1E4 = 8;
                        func_800ED858(0);
                    }
                }
            } else if (pauseCtx->unk_1E4 == 5) {
                if ((pauseCtx->stickRelX != 0) || (pauseCtx->stickRelY != 0)) {
                    pauseCtx->unk_1E4 = 0;
                    func_800ED858(0);
                }
            }
#if 0
            // Disable melody playing
            else if (pauseCtx->unk_1E4 == 8) {
                if (CHECK_BTN_ALL(input->press.button, BTN_A) && (sp216 >= 6) && (sp216 < 0x12)) {
                    pauseCtx->unk_1E4 = 9;
                    D_8082A120 = 10;
                }
            }
#endif
        } else if (pauseCtx->cursorSpecialPos == PAUSE_CURSOR_PAGE_LEFT) {
            if (pauseCtx->stickRelX > 30) {
                pauseCtx->cursorPoint[PAUSE_QUEST] = 0x15;
                pauseCtx->nameDisplayTimer = 0;
                pauseCtx->cursorSpecialPos = 0;
                sp216 = pauseCtx->cursorPoint[PAUSE_QUEST];
                KaleidoScope_SetCursorVtx(pauseCtx, sp216 * 4, pauseCtx->questVtx);
                Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                if (CHECK_QUEST_ITEM(pauseCtx->cursorPoint[PAUSE_QUEST])) {
                    phi_s0_2 = pauseCtx->cursorPoint[PAUSE_QUEST] + 0x5A;
                } else {
                    phi_s0_2 = PAUSE_ITEM_NONE;
                }
                sp216 = pauseCtx->cursorPoint[PAUSE_QUEST];
                pauseCtx->cursorItem[pauseCtx->pageIndex] = phi_s0_2;
                pauseCtx->cursorSlot[pauseCtx->pageIndex] = sp216;
            }
        } else {
            if (pauseCtx->stickRelX < -30) {
                pauseCtx->cursorPoint[PAUSE_QUEST] = 0;
                pauseCtx->nameDisplayTimer = 0;
                pauseCtx->cursorSpecialPos = 0;
                sp216 = pauseCtx->cursorPoint[PAUSE_QUEST];
                KaleidoScope_SetCursorVtx(pauseCtx, sp216 * 4, pauseCtx->questVtx);
                Audio_PlaySoundGeneral(NA_SE_SY_CURSOR, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                if (CHECK_QUEST_ITEM(pauseCtx->cursorPoint[PAUSE_QUEST])) {
                    if (pauseCtx->cursorPoint[PAUSE_QUEST] < 6) {
                        phi_s0_2 = pauseCtx->cursorPoint[PAUSE_QUEST] + 0x66;
                    } else if (pauseCtx->cursorPoint[PAUSE_QUEST] < 0xC) {
                        phi_s0_2 = pauseCtx->cursorPoint[PAUSE_QUEST] + 0x4E;
                    } else {
                        phi_s0_2 = pauseCtx->cursorPoint[PAUSE_QUEST] + 0x69;
                    }
                } else {
                    phi_s0_2 = PAUSE_ITEM_NONE;
                }
                sp216 = pauseCtx->cursorPoint[PAUSE_QUEST];
                pauseCtx->cursorItem[pauseCtx->pageIndex] = phi_s0_2;
                pauseCtx->cursorSlot[pauseCtx->pageIndex] = sp216;
            }
        }

    } else {
        if (pauseCtx->unk_1E4 == 9) {
            pauseCtx->cursorColorSet = 8;
            D_8082A120--;

            if (D_8082A120 == 0) {
                for (phi_s3 = 0; phi_s3 < 8; phi_s3++) {
                    D_8082A124[phi_s3] = 0xFF;
                    D_8082A150[phi_s3] = 0;
                }

                D_8082A11C = 0;
                VREG(21) = -62;
                VREG(22) = -56;
                VREG(23) = -49;
                VREG(24) = -46;
                VREG(25) = -41;
                phi_s6 = pauseCtx->cursorSlot[PAUSE_QUEST];
                func_800ED858(1);
                func_800ED858(1);
                pauseCtx->unk_264 = D_80153958[4 + phi_s6];
                func_800ED93C(pauseCtx->unk_264 + 1, 1);
                pauseCtx->unk_1E4 = 2;
                pauseCtx->unk_194 = func_800EE3F8();
                pauseCtx->unk_194->unk_02 = 0;
                sp216 = pauseCtx->cursorSlot[PAUSE_QUEST];
                KaleidoScope_SetCursorVtx(pauseCtx, sp216 * 4, pauseCtx->questVtx);
            }
        } else {
            sp216 = pauseCtx->cursorSlot[PAUSE_QUEST];
            KaleidoScope_SetCursorVtx(pauseCtx, sp216 * 4, pauseCtx->questVtx);
        }
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
    gDPSetCombineLERP(POLY_OPA_DISP++, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0, TEXEL0, 0, PRIMITIVE, 0,
                      TEXEL0, 0, PRIMITIVE, 0);

    /********************************* Medal Draw *********************************/
    for (sp218 = sp21A = 0; sp218 < 6; sp218++, sp21A += 4) {
        Color_RGB8 curMedalEnvColor;

        AnimatedMat_DrawColorLerp(sMedalAnims[sp218], &curMedalEnvColor);

        if (CHECK_QUEST_ITEM(sp218)) {
            gDPPipeSync(POLY_OPA_DISP++);
            gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                              PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, sMedalPrimColors[sp218].r, sMedalPrimColors[sp218].g,
                            sMedalPrimColors[sp218].b, pauseCtx->alpha);
            gDPSetEnvColor(POLY_OPA_DISP++, curMedalEnvColor.r, curMedalEnvColor.g, curMedalEnvColor.b, 255);
            gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);

            KaleidoScope_DrawQuadTextureRGBA32(gfxCtx, gItemIcons[ITEM_MEDALLION_FOREST + sp218], 24, 24, 0);
        }
    }

    sPauseAnimStep++;

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);

    for (sp218 = 0; sp218 < 12; sp218++, sp21A += 4) {
        if (CHECK_QUEST_ITEM(sp218 + 6)) {
            // Don't expand when selected on Triforce or blue orb
            if (sp218 != 6 && sp218 != 7 && (sp218 + 6) == sp216) {
                pauseCtx->questVtx[sp21A + 0].v.ob[0] = pauseCtx->questVtx[sp21A + 2].v.ob[0] =
                    pauseCtx->questVtx[sp21A + 0].v.ob[0] - 2;

                pauseCtx->questVtx[sp21A + 1].v.ob[0] = pauseCtx->questVtx[sp21A + 3].v.ob[0] =
                    pauseCtx->questVtx[sp21A + 1].v.ob[0] + 4;

                pauseCtx->questVtx[sp21A + 0].v.ob[1] = pauseCtx->questVtx[sp21A + 1].v.ob[1] =
                    pauseCtx->questVtx[sp21A + 0].v.ob[1] + 2;

                pauseCtx->questVtx[sp21A + 2].v.ob[1] = pauseCtx->questVtx[sp21A + 3].v.ob[1] =
                    pauseCtx->questVtx[sp21A + 2].v.ob[1] - 4;
            }
            // Skip drawing the non-warp song notes
            // KEYWORD
            // NOTE WARP SONG
            if (sp218 < 6) {
                gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
                gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
                gDPLoadTextureBlock(POLY_OPA_DISP++, sNoteTextures[sp218], G_IM_FMT_RGBA, G_IM_SIZ_32b, 24, 24, 0,
                                    G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                    G_TX_NOLOD, G_TX_NOLOD);
                gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);
                gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
            } else if (sp218 == 6) {
                // Triforce
                Color_RGB8 triforceEnvCol;

                AnimatedMat_DrawColorLerp(&sTriforceAnim, &triforceEnvCol);

                gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                                  PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
                gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, sTriforcePrimColor.r, sTriforcePrimColor.g, sTriforcePrimColor.b,
                                pauseCtx->alpha);
                gDPSetEnvColor(POLY_OPA_DISP++, triforceEnvCol.r, triforceEnvCol.g, triforceEnvCol.b, 255);
                gDPLoadTextureBlock(POLY_OPA_DISP++, gTriforceSealTex, G_IM_FMT_IA, G_IM_SIZ_8b, 32, 32, 0,
                                    G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                    G_TX_NOLOD, G_TX_NOLOD);
                gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);
                gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
            } else if (sp218 == 7) {
                // blue orb
                gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
                gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
                gDPLoadTextureBlock(POLY_OPA_DISP++, gStoneOfAgonyIconTex, G_IM_FMT_RGBA, G_IM_SIZ_32b, 24, 24, 0,
                                    G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                    G_TX_NOLOD, G_TX_NOLOD);
                gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);
                gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
            }
        }
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
    gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);

    for (sp218 = 0; sp218 < 3; sp218++, sp21A += 4) {
        if (CHECK_QUEST_ITEM(sp218 + 0x12)) {
            gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);
            KaleidoScope_DrawQuadTextureRGBA32(gfxCtx, gItemIcons[ITEM_KOKIRI_EMERALD + sp218], 24, 24, 0);
        }
    }

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);

    for (sp218 = 0; sp218 < 3; sp218++, sp21A += 4) {
        if (CHECK_QUEST_ITEM(sp218 + 0x15)) {
            gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
            KaleidoScope_DrawQuadTextureRGBA32(gfxCtx, gItemIcons[ITEM_STONE_OF_AGONY + sp218], 24, 24, 0);
        }
    }

    sp226 = ABS(D_8082A104 - D_8082A070[D_8082A118][0]) / D_8082A114;
    sp224 = ABS(D_8082A108 - D_8082A070[D_8082A118][1]) / D_8082A114;
    sp222 = ABS(D_8082A10C - D_8082A070[D_8082A118][2]) / D_8082A114;
    sp220 = ABS(D_8082A110 - D_8082A070[D_8082A118][3]) / D_8082A114;
    if (D_8082A104 >= D_8082A070[D_8082A118][0]) {
        D_8082A104 -= sp226;
    } else {
        D_8082A104 += sp226;
    }
    if (D_8082A108 >= D_8082A070[D_8082A118][1]) {
        D_8082A108 -= sp224;
    } else {
        D_8082A108 += sp224;
    }
    if (D_8082A10C >= D_8082A070[D_8082A118][2]) {
        D_8082A10C -= sp222;
    } else {
        D_8082A10C += sp222;
    }
    if (D_8082A110 >= D_8082A070[D_8082A118][3]) {
        D_8082A110 -= sp220;
    } else {
        D_8082A110 += sp220;
    }

    D_8082A114--;
    if (D_8082A114 == 0) {
        D_8082A104 = D_8082A070[D_8082A118][0];
        D_8082A108 = D_8082A070[D_8082A118][1];
        D_8082A10C = D_8082A070[D_8082A118][2];
        D_8082A110 = D_8082A070[D_8082A118][3];
        D_8082A114 = ZREG(24 + D_8082A118);
        if (++D_8082A118 >= 4) {
            D_8082A118 = 0;
        }
    }

    // heart piece draw!
    if ((gSaveContext.inventory.questItems >> 0x1C) != 0) {
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                          PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);

        if ((pauseCtx->state == 4) || (pauseCtx->state == 0x12)) {
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, D_8082A070[0][0], D_8082A070[0][1], D_8082A070[0][2],
                            pauseCtx->alpha);
        } else {
            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, D_8082A104, D_8082A108, D_8082A10C, D_8082A110);
        }

        gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 255);
        gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);

        POLY_OPA_DISP = KaleidoScope_QuadTextureIA8(
            POLY_OPA_DISP,
            &gSWHeartPieceFragmentsTex[(((gSaveContext.inventory.questItems & 0xF0000000) & 0xF0000000) >> 0x1C) - 1]
                                      [0],
            48, 48, 0);
    }

    if (pauseCtx->state == 6) {
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCombineMode(POLY_OPA_DISP++, G_CC_MODULATEIA_PRIM, G_CC_MODULATEIA_PRIM);

        sp21A += 4;
#if 0
        // Make the cursor be white when hovering over ocarina songs because they are not playable anymore
        if ((pauseCtx->cursorSpecialPos == 0) && (sp216 >= 6) && (sp216 < 0x12)) {
            if ((pauseCtx->unk_1E4 < 3) || (pauseCtx->unk_1E4 == 5) || (pauseCtx->unk_1E4 == 8)) {
                if (pauseCtx->cursorItem[pauseCtx->pageIndex] != PAUSE_ITEM_NONE) {
                    pauseCtx->cursorColorSet = 8;
                    if ((pauseCtx->unk_1E4 >= 2) && (pauseCtx->unk_1E4 < 7)) {
                        pauseCtx->cursorColorSet = 0;
                    }
                }
            }
        }
#endif

        if (pauseCtx->unk_1E4 == 2) {
            pauseCtx->unk_194 = func_800EE3F8();

            if (pauseCtx->unk_194->unk_02 != 0) {
                if (D_8082A11C == (pauseCtx->unk_194->unk_02 - 1)) {
                    D_8082A124[pauseCtx->unk_194->unk_02 - 1] = pauseCtx->unk_194->unk_00;
                    D_8082A11C++;
                }

                for (sp218 = 0; sp218 < 8; sp218++, sp21A += 4) {
                    if (D_8082A124[sp218] == 0xFF) {
                        break;
                    }

                    if (D_8082A150[sp218] != 255) {
                        D_8082A150[sp218] += VREG(50);
                        if (D_8082A150[sp218] >= 255) {
                            D_8082A150[sp218] = 255;
                        }
                    }

                    pauseCtx->questVtx[sp21A + 0].v.ob[1] = pauseCtx->questVtx[sp21A + 1].v.ob[1] =
                        VREG(21 + D_8082A124[sp218]);

                    pauseCtx->questVtx[sp21A + 2].v.ob[1] = pauseCtx->questVtx[sp21A + 3].v.ob[1] =
                        pauseCtx->questVtx[sp21A + 0].v.ob[1] - 12;

                    gDPPipeSync(POLY_OPA_DISP++);

                    if (D_8082A124[sp218] == 0) {
                        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 80, 255, 150, D_8082A150[sp218]);
                    } else {
                        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 50, D_8082A150[sp218]);
                    }

                    gDPSetEnvColor(POLY_OPA_DISP++, 10, 10, 10, 0);
                    gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);

                    gDPLoadTextureBlock(POLY_OPA_DISP++, D_8082A130[D_8082A124[sp218]], G_IM_FMT_IA, G_IM_SIZ_8b, 16,
                                        16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK,
                                        G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

                    gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
                }
            }
        } else if (((pauseCtx->unk_1E4 >= 4) && (pauseCtx->unk_1E4 <= 6)) || (pauseCtx->unk_1E4 == 8)) {
            // Skip non warp songs!
            if (pauseCtx->unk_264 < 6) {
                phi_a2 = pauseCtx->unk_264;

                sp226 = D_80131C00[phi_a2][0];
                sp218 = sp21A;

                for (phi_s3 = 0; phi_s3 < sp226; phi_s3++, sp21A += 4) {
                    // Sets position of notes on the Ocarina staff
                    pauseCtx->questVtx[sp21A + 0].v.ob[1] = pauseCtx->questVtx[sp21A + 1].v.ob[1] =
                        62 + (1.5f * VREG(21 + D_80131C00[phi_a2][phi_s3 + 1]));

                    pauseCtx->questVtx[sp21A + 2].v.ob[1] = pauseCtx->questVtx[sp21A + 3].v.ob[1] =
                        pauseCtx->questVtx[sp21A + 0].v.ob[1] - 12;

                    gDPPipeSync(POLY_OPA_DISP++);

                    if (pauseCtx->unk_1E4 == 8) {
                        if (D_80131C00[phi_a2][phi_s3 + 1] == 0) {
                            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 80, 150, 255, 200); // A button note
                        } else {
                            gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 50, 200);
                        }
                    } else {
                        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 150, 150, 150, 150);
                    }

                    gDPSetEnvColor(POLY_OPA_DISP++, 10, 10, 10, 0);

                    gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);

                    gDPLoadTextureBlock(POLY_OPA_DISP++, D_8082A130[D_80131C00[phi_a2][phi_s3 + 1]], G_IM_FMT_IA,
                                        G_IM_SIZ_8b, 16, 16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP,
                                        G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

                    gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
                }
            }

            if (pauseCtx->unk_1E4 != 8) {
                pauseCtx->unk_194 = func_800EE3D4();

                if (pauseCtx->unk_194->unk_02 != 0) {
                    if (D_8082A11C == (pauseCtx->unk_194->unk_02 - 1)) {
                        if ((pauseCtx->unk_194->unk_00 >= 0) && (pauseCtx->unk_194->unk_00 < 5)) {
                            D_8082A124[pauseCtx->unk_194->unk_02 - 1] = pauseCtx->unk_194->unk_00;
                            D_8082A124[pauseCtx->unk_194->unk_02] = 0xFF;
                            D_8082A11C++;
                        }
                    }
                }

                for (phi_s3 = 0, sp21A = sp218 + 32; phi_s3 < 8; phi_s3++, sp21A += 4) {
                    if (D_8082A124[phi_s3] == 0xFF) {
                        break;
                    }

                    if (D_8082A150[phi_s3] != 255) {
                        D_8082A150[phi_s3] += VREG(50);
                        if (D_8082A150[phi_s3] >= 255) {
                            D_8082A150[phi_s3] = 255;
                        }
                    }
                    pauseCtx->questVtx[sp21A + 0].v.ob[1] = pauseCtx->questVtx[sp21A + 1].v.ob[1] =
                        VREG(21 + D_8082A124[phi_s3]);

                    pauseCtx->questVtx[sp21A + 2].v.ob[1] = pauseCtx->questVtx[sp21A + 3].v.ob[1] =
                        pauseCtx->questVtx[sp21A + 0].v.ob[1] - 12;

                    gDPPipeSync(POLY_OPA_DISP++);

                    if (D_8082A124[phi_s3] == 0) {
                        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 80, 255, 150, D_8082A150[phi_s3]);
                    } else {
                        gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 50, D_8082A150[phi_s3]);
                    }

                    gDPSetEnvColor(POLY_OPA_DISP++, 10, 10, 10, 0);

                    gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[sp21A], 4, 0);

                    gDPLoadTextureBlock(POLY_OPA_DISP++, D_8082A130[D_8082A124[phi_s3]], G_IM_FMT_IA, G_IM_SIZ_8b, 16,
                                        16, 0, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK,
                                        G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);

                    gSP1Quadrangle(POLY_OPA_DISP++, 0, 2, 3, 1, 0);
                }

                if (pauseCtx->unk_1E4 == 4) {
                    for (phi_s3 = 0; phi_s3 < 8; phi_s3++) {
                        D_8082A124[phi_s3] = 0xFF;
                        D_8082A150[phi_s3] = 0;
                    }

                    D_8082A11C = 0;
                    func_800ED858(1);
                    func_800ECC04((1 << pauseCtx->unk_264) + 0x8000);
                    pauseCtx->unk_194 = func_800EE3F8();
                    pauseCtx->unk_194->unk_02 = 0;
                    pauseCtx->unk_194->unk_01 = 0xFE;
                    pauseCtx->unk_1E4 = 5;
                }
            }
        }
    }
#if 0
// Disable counter for skulltula0
    if (CHECK_QUEST_ITEM(QUEST_SKULL_TOKEN)) {
        gDPPipeSync(POLY_OPA_DISP++);
        gDPSetCombineLERP(POLY_OPA_DISP++, PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0,
                          PRIMITIVE, ENVIRONMENT, TEXEL0, ENVIRONMENT, TEXEL0, 0, PRIMITIVE, 0);
        gDPSetEnvColor(POLY_OPA_DISP++, 0, 0, 0, 0);

        sp208[0] = sp208[1] = 0;
        sp208[2] = gSaveContext.inventory.gsTokens;

        while (sp208[2] >= 100) {
            sp208[0]++;
            sp208[2] -= 100;
        }

        while (sp208[2] >= 10) {
            sp208[1]++;
            sp208[2] -= 10;
        }

        gSPVertex(POLY_OPA_DISP++, &pauseCtx->questVtx[164], 24, 0);

        for (phi_s3 = 0, sp21A = 0; phi_s3 < 2; phi_s3++) {
            if (phi_s3 == 0) {
                gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, pauseCtx->alpha);
            } else if (gSaveContext.inventory.gsTokens == 100) {
                gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 200, 50, 50, pauseCtx->alpha);
            } else {
                gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 255, 255, 255, pauseCtx->alpha);
            }

            phi_s0 = 0;
            for (sp218 = 0; sp218 < 3; sp218++, sp21A += 4) {
                if ((sp218 >= 2) || (sp208[sp218] != 0) || (phi_s0 != 0)) {
                    gDPLoadTextureBlock(POLY_OPA_DISP++, D_02003040[sp208[sp218]], G_IM_FMT_I, G_IM_SIZ_8b, 8, 16, 0,
                                        G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK,
                                        G_TX_NOLOD, G_TX_NOLOD);
                    

                    gSP1Quadrangle(POLY_OPA_DISP++, sp21A, sp21A + 2, sp21A + 3, sp21A + 1, 0);

                    phi_s0 = 1;
                }
            }
        }
    }
#endif
    CLOSE_DISPS(gfxCtx);
}

s32 KaleidoScope_UpdateQuestStatusPoint(PauseContext* pauseCtx, s32 point) {
    pauseCtx->cursorPoint[PAUSE_QUEST] = point;

    return 1;
}
