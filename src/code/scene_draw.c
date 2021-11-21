#include "global.h"

Gfx sDefaultDisplayList[] = {
    gsSPSegment(0x08, gEmptyDL),
    gsSPSegment(0x09, gEmptyDL),
    gsSPSegment(0x0A, gEmptyDL),
    gsSPSegment(0x0B, gEmptyDL),
    gsSPSegment(0x0C, gEmptyDL),
    gsSPSegment(0x0D, gEmptyDL),
    gsDPPipeSync(),
    gsDPSetPrimColor(0, 0, 128, 128, 128, 128),
    gsDPSetEnvColor(128, 128, 128, 128),
    gsSPEndDisplayList(),
};

void SceneDraw_Default(GlobalContext* globalCtx) {
    OPEN_DISPS(globalCtx->state.gfxCtx);

    gSPDisplayList(POLY_OPA_DISP++, sDefaultDisplayList);
    gSPDisplayList(POLY_XLU_DISP++, sDefaultDisplayList);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_DekuTree(GlobalContext* globalCtx) {
    u32 gameplayFrames = globalCtx->gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    // Light Rays 1
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 2) % 512, 0, 16, 128, 1, 0, 0, 16, 128));

    // Light Rays 2
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 2) % 256, 0, 16, 128, 1, 0, 0, 16, 128));

    // Boss Room Fog
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 2) % 256, 0, 64, 32, 1, 0,
                                (gameplayFrames * 2) % 128, 64, 32));

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_HyruleField(GlobalContext* globalCtx) {
    u32 gameplayFrames = globalCtx->gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    // Water?
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));

    // Water?
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 10) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 10) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_DodongosCavern(GlobalContext* globalCtx) {
    u32 gameplayFrames = globalCtx->gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    // Fog
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 256, 0, 64, 32, 1, 0,
                                (gameplayFrames * 1) % 128, 64, 32));

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_HyruleCastle(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 10) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 10) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_TempleOfTime(GlobalContext* globalCtx) {
    s32 pad;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gSPSegment(POLY_XLU_DISP++, 8, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, globalCtx->gameplayFrames % 128, 64, 32));

    gSPSegment(POLY_XLU_DISP++, 9, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, globalCtx->gameplayFrames % 128, 64, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_WaterTemple(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, gameplayFrames * 1, 0, 32, 32, 1, 0, 0, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 145);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 145);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_GerudoValley(GlobalContext* globalCtx) {
    u32 gameplayFrames = globalCtx->gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    // dirt underneath, water on top
    gSPSegment(
        POLY_OPA_DISP++, 0x08,
        Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 127 - (gameplayFrames * 3) % 128, 32, 32, 1, 0, 0, 32, 32));

    // dirt underneath, water on top
    gSPSegment(
        POLY_OPA_DISP++, 0x09,
        Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 127 - (gameplayFrames * 3) % 128, 32, 32, 1, 0, 0, 32, 32));

    // two layer water
    gSPSegment(POLY_XLU_DISP++, 0x0A,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 2) % 128, 32, 32, 1, 0,
                                (gameplayFrames * 2) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_FireTemple(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0x00, 0x00 + (gameplayFrames * 1) % 0x80, 32, 32, 1,
                                0x00 + (gameplayFrames * 1) % 0x80, 0x00, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0x00, 0x00 + (gameplayFrames * 1) % 0x80, 32, 32, 1,
                                0x00 + (gameplayFrames * 1) % 0x80, 0x00, 32, 32));
    gSPSegment(POLY_OPA_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0x00 + (gameplayFrames * 1) % 0x80,
                                0x7F - (gameplayFrames * 2) % 0x80, 32, 32, 1, 0x00 + (gameplayFrames * 2) % 0x80,
                                0x7F - (gameplayFrames * 1) % 0x80, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0x00 + (gameplayFrames * 1) % 0x80,
                                0x7F - (gameplayFrames * 2) % 0x80, 32, 32, 1, 0x00 + (gameplayFrames * 2) % 0x80,
                                0x7F - (gameplayFrames * 1) % 0x80, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 64);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 64);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_LostWoods(GlobalContext* globalCtx) {
    u32 gameplayFrames = globalCtx->gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 3) % 128, 32, 32, 1, 0,
                                (gameplayFrames * 3) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 10) % 128, 32, 32, 1, 0,
                                (gameplayFrames * 10) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_KokiriForest(GlobalContext* globalCtx) {
    u32 gameplayFrames = globalCtx->gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 1) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - gameplayFrames % 128, (gameplayFrames * 10) % 128, 32,
                                32, 1, gameplayFrames % 128, (gameplayFrames * 10) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_Grottos(GlobalContext* globalCtx) {
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gameplayFrames = globalCtx->gameplayFrames;
    gSPSegment(POLY_XLU_DISP++, 0x08, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 64, 256, 16));
    gSPSegment(POLY_XLU_DISP++, 0x09,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 127 - (gameplayFrames % 128), (gameplayFrames * 1) % 128,
                                32, 32, 1, gameplayFrames % 128, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(
        POLY_OPA_DISP++, 0x0A,
        Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 32, 32, 1, 0, 127 - (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_OPA_DISP++, 0x0B, Gfx_TexScroll(globalCtx->state.gfxCtx, 0, (gameplayFrames * 1) % 128, 32, 32));
    gSPSegment(POLY_XLU_DISP++, 0x0C,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, (gameplayFrames * 50) % 2048, 8, 512, 1, 0,
                                (gameplayFrames * 60) % 2048, 8, 512));
    gSPSegment(POLY_OPA_DISP++, 0x0D,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 0, 32, 64, 1, 0, (gameplayFrames * 1) % 128, 32, 32));

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_DeathMountainCrater(GlobalContext* globalCtx) {
    s8 sp6F = coss((globalCtx->gameplayFrames * 1500) & 0xFFFF) >> 8;
    s8 sp6E = coss((globalCtx->gameplayFrames * 1500) & 0xFFFF) >> 8;
    u32 gameplayFrames;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gameplayFrames = globalCtx->gameplayFrames;
    sp6F = (sp6F >> 1) + 192;
    sp6E = (sp6E >> 1) + 192;

    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, gameplayFrames % 128, 32, 32, 1, 0, gameplayFrames % 128,
                                32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, sp6F, sp6E, 255, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void SceneDraw_SphereTest(GlobalContext* globalCtx) {
    static Gfx blankDList[] = { gsSPEndDisplayList() };

    OPEN_DISPS(globalCtx->state.gfxCtx);

    Actor_DrawHiliteReflectionOpa(
        &PLAYER->actor, globalCtx,
        1); // setup OPA hilite in segment 0x07. the actor param isn't important so arbitrarily use PLAYER

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

typedef struct {
    s16 keyFrame;
    f32 yScale;
} WaterAnim;

static f32 GetWaterAnimFrame(void) {
    static s32 curFrame = 0;
    static WaterAnim keyframes[] = {
        { 0, 0.5f }, { 10, 1.2f }, { 30, 2.0f }, { 50, 1.5f }, { 70, 0.5f },
    };
    f32 result;
    s32 entry;
    f32 norm;

    if (curFrame >= keyframes[ARRAY_COUNT(keyframes) - 1].keyFrame) {
        curFrame = 0;
    }

    // Find the current keyframe entry
    for (entry = 0; entry <= ARRAY_COUNT(keyframes); entry++) {
        if (entry != ARRAY_COUNT(keyframes)) {
            if (curFrame < keyframes[entry + 1].keyFrame && curFrame >= keyframes[entry].keyFrame) {
                // Found the current keyframe!
                break;
            }
        } else {
            entry = 0;
            break;
        }
    }

    // Interpolate the keyframes
    norm =
        fabsf(curFrame - keyframes[entry].keyFrame) / fabsf(keyframes[entry + 1].keyFrame - keyframes[entry].keyFrame);
    result = F32_LERP(keyframes[entry].yScale, keyframes[entry + 1].yScale, norm);

    // Increment the frame for the next frame
    curFrame++;

    return result;
}

// test 3
void SceneDraw_JungleGym(GlobalContext* globalCtx) {
    u32 gameplayFrames = globalCtx->gameplayFrames;
    Gfx* mtxDlist;
    Gfx* mtxDlistHead;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    mtxDlistHead = mtxDlist = Graph_Alloc(globalCtx->state.gfxCtx, sizeof(Gfx) * 4);

    Matrix_Translate(0.0f, -100.0f, 0.0f, MTXMODE_NEW);
    Matrix_Scale(1.0f, GetWaterAnimFrame(), 1.0f, MTXMODE_APPLY);

    gSPMatrix(mtxDlist++, Matrix_NewMtx(globalCtx->state.gfxCtx, __FILE__, __LINE__), G_MTX_PUSH);
    gDPSetPrimColor(mtxDlist++, 0, 0, 0, 150, 255, 255);
    gSPEndDisplayList(mtxDlist);

    gSPSegment(POLY_XLU_DISP++, 0x08, mtxDlistHead);

    gSPSegment(POLY_XLU_DISP++, 0x07,
               Gfx_TexScroll(globalCtx->state.gfxCtx, 127 - gameplayFrames % 128, (gameplayFrames * 3) % 128, 32, 32));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

f32 D_8012A398 = 0.0f;

void SceneDraw_Jabu(GlobalContext* globalCtx) {
    static s16 D_8012A39C = 538;
    static s16 D_8012A3A0 = 4272;
    u32 gameplayFrames;
    f32 temp;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    gameplayFrames = globalCtx->gameplayFrames;

    gSPSegment(POLY_OPA_DISP++, 0x08,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, gameplayFrames % 128, (gameplayFrames * 2) % 128, 32, 32, 1,
                                127 - gameplayFrames % 128, (gameplayFrames * 2) % 128, 32, 32));
    gSPSegment(POLY_OPA_DISP++, 0x0B,
               Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0, 255 - (gameplayFrames * 4) % 256, 32, 64, 1, 0,
                                255 - (gameplayFrames * 4) % 256, 32, 64));

    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 128);

    gDPPipeSync(POLY_XLU_DISP++);
    gDPSetEnvColor(POLY_XLU_DISP++, 128, 128, 128, 128);

    if (FrameAdvance_IsEnabled(globalCtx) != 1) {
        D_8012A39C += 1820;
        D_8012A3A0 += 1820;

        temp = 0.020000001f;
        func_800AA76C(&globalCtx->view, 0.00009587531f * temp * Math_CosS(D_8012A39C),
                      0.00009587531f * temp * Math_SinS(D_8012A39C), 0.00009587531f * temp * Math_SinS(D_8012A3A0));
        func_800AA78C(&globalCtx->view, 1.f + (0.79999995f * temp * Math_SinS(D_8012A3A0)),
                      1.f + (0.39999998f * temp * Math_CosS(D_8012A3A0)), 1.f + (1 * temp * Math_CosS(D_8012A39C)));
        func_800AA7AC(&globalCtx->view, 0.95f);

        switch (globalCtx->unk_11D30[0]) {
            case 0:
                break;
            case 1:
                if (globalCtx->unk_11D30[1] < 1200) {
                    globalCtx->unk_11D30[1] += 200;
                } else {
                    globalCtx->unk_11D30[0]++;
                }
                break;
            case 2:
                if (globalCtx->unk_11D30[1] > 0) {
                    globalCtx->unk_11D30[1] -= 30;
                } else {
                    globalCtx->unk_11D30[1] = 0;
                    globalCtx->unk_11D30[0] = 0;
                }
                break;
        }

        D_8012A398 += 0.15f + (globalCtx->unk_11D30[1] * 0.001f);
    }

    Matrix_Scale(1.005f, sinf(D_8012A398) * 0.8f, 1.005f, MTXMODE_NEW);

    gSPSegment(POLY_OPA_DISP++, 0x0D, Matrix_NewMtx(globalCtx->state.gfxCtx, __FILE__, __LINE__));

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}

void (*sSceneDrawHandlers[])(GlobalContext*) = {
    /* 0 */ SceneDraw_Default,
    /* 1 */ SceneDraw_HyruleField,
    /* 2 */ SceneDraw_HyruleCastle,
    /* 3 */ SceneDraw_DekuTree,
    /* 4 */ SceneDraw_DodongosCavern,
    /* 5 */ SceneDraw_TempleOfTime,
    /* 6 */ SceneDraw_WaterTemple,
    /* 7 */ SceneDraw_GerudoValley,
    /* 8 */ SceneDraw_FireTemple,
    /* 9 */ SceneDraw_LostWoods,
    /* 10 */ SceneDraw_KokiriForest,
    /* 11 */ SceneDraw_Jabu,
    /* 12 */ SceneDraw_Grottos,
    /* 13 */ SceneDraw_DeathMountainCrater,
    /* 14 */ SceneDraw_SphereTest,
    /* 15 */ SceneDraw_JungleGym,
};

void Scene_Draw(GlobalContext* globalCtx) {
    if (HREG(80) == 17) {
        if (HREG(95) != 17) {
            HREG(95) = 17;
            HREG(81) = 1;
            HREG(82) = 1;
            HREG(83) = 0;
            HREG(84) = 0;
            HREG(85) = 0;
            HREG(86) = 0;
            HREG(87) = 0;
            HREG(88) = 0;
            HREG(89) = 0;
            HREG(91) = 0;
            HREG(92) = 0;
            HREG(93) = 0;
            HREG(94) = 0;
        }

        OPEN_DISPS(globalCtx->state.gfxCtx);

        if (HREG(81) == 1) {
            gSPDisplayList(POLY_OPA_DISP++, sDefaultDisplayList);
            gSPDisplayList(POLY_XLU_DISP++, sDefaultDisplayList);
        }

        CLOSE_DISPS(globalCtx->state.gfxCtx);

        if (HREG(82) == 1) {
            sSceneDrawHandlers[globalCtx->sceneConfig](globalCtx);
        }
    } else {
        sSceneDrawHandlers[globalCtx->sceneConfig](globalCtx);
    }
}
