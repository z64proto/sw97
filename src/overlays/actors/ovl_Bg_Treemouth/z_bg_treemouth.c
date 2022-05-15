/*
 * File: z_bg_treemouth.c
 * Overlay: ovl_Bg_Treemouth
 * Description: Great Deku Tree's Mouth
 */

#include "z_bg_treemouth.h"
#include "overlays/effects/ovl_Effect_Ss_Hahen/z_eff_ss_hahen.h"
#include "scenes/overworld/kokiri_forest/kokiri_forest_scene.h"

#define FLAGS 0x00000030

#define THIS ((BgTreemouth*)thisx)

void BgTreemouth_Init(Actor* thisx, GlobalContext* globalCtx);
void BgTreemouth_Destroy(Actor* thisx, GlobalContext* globalCtx);
void BgTreemouth_Update(Actor* thisx, GlobalContext* globalCtx);
void BgTreemouth_Draw(Actor* thisx, GlobalContext* globalCtx);

void func_808BC65C(BgTreemouth* this, GlobalContext* globalCtx);
void func_808BC6F8(BgTreemouth* this, GlobalContext* globalCtx);
void func_808BC80C(BgTreemouth* this, GlobalContext* globalCtx);
void func_808BC864(BgTreemouth* this, GlobalContext* globalCtx);
void BgTreemouth_DoNothing(BgTreemouth* this, GlobalContext* globalCtx);
void func_808BC8B8(BgTreemouth* this, GlobalContext* globalCtx);
void func_808BC9EC(BgTreemouth* this, GlobalContext* globalCtx);
void func_808BCAF0(BgTreemouth* this, GlobalContext* globalCtx);

#include "z_bg_treemouth_cutscene_data.c" EARLY

const ActorInit Bg_Treemouth_InitVars = {
    ACTOR_BG_TREEMOUTH,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_SPOT04_OBJECTS,
    sizeof(BgTreemouth),
    (ActorFunc)BgTreemouth_Init,
    (ActorFunc)BgTreemouth_Destroy,
    (ActorFunc)BgTreemouth_Update,
    (ActorFunc)BgTreemouth_Draw,
};

static InitChainEntry sInitChain[] = {
    ICHAIN_U8(targetMode, 5, ICHAIN_CONTINUE),
    ICHAIN_VEC3F(scale, 1, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneForward, 8000, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneScale, 300, ICHAIN_CONTINUE),
    ICHAIN_F32(uncullZoneDownward, 300, ICHAIN_STOP),
};

u64 treemouth_texture[] = {
#include "assets/scenes/overworld/kokiri_forest//kokiri_forest_sceneTex_0070C0.rgb5a1.inc.c"
};

static Gfx D_060009D0_edited[] = {
    gsDPPipeSync(),
    gsDPSetTextureLUT(G_TT_NONE),
    gsSPTexture(0xFFFF, 0xFFFF, 0, G_TX_RENDERTILE, G_ON),
    gsDPLoadTextureBlock(treemouth_texture, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                         G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, 1),
    gsDPLoadMultiBlock(0x06000000, 0x0100, 1, G_IM_FMT_RGBA, G_IM_SIZ_16b, 32, 16, 0, G_TX_NOMIRROR | G_TX_WRAP,
                       G_TX_NOMIRROR | G_TX_WRAP, 5, 4, G_TX_NOLOD, G_TX_NOLOD),
    gsDPSetCombineLERP(TEXEL1, TEXEL0, ENV_ALPHA, TEXEL0, 0, 0, 0, 1, COMBINED, 0, SHADE, 0, 0, 0, 0, COMBINED),
    gsDPSetRenderMode(G_RM_FOG_SHADE_A, G_RM_AA_ZB_OPA_SURF2),
    gsSPClearGeometryMode(G_TEXTURE_GEN | G_TEXTURE_GEN_LINEAR),
    gsSPSetGeometryMode(G_CULL_BACK | G_FOG | G_LIGHTING),
    gsDPSetPrimColor(0, 0, 0xFF, 0xFF, 0xFF, 0xFF),
    gsSPVertex(0x06000800, 29, 0),
    gsSP2Triangles(0, 1, 2, 0, 0, 2, 3, 0),
    gsSP2Triangles(0, 3, 4, 0, 4, 3, 5, 0),
    gsSP2Triangles(6, 7, 8, 0, 9, 10, 6, 0),
    gsSP2Triangles(10, 7, 6, 0, 9, 6, 11, 0),
    gsSP2Triangles(11, 6, 8, 0, 12, 11, 13, 0),
    gsSP2Triangles(14, 12, 13, 0, 14, 15, 12, 0),
    gsSP2Triangles(16, 7, 1, 0, 7, 16, 17, 0),
    gsSP2Triangles(8, 7, 17, 0, 14, 13, 18, 0),
    gsSP2Triangles(19, 14, 18, 0, 5, 14, 19, 0),
    gsSP2Triangles(20, 19, 18, 0, 20, 18, 21, 0),
    gsSP2Triangles(19, 20, 5, 0, 18, 17, 22, 0),
    gsSP2Triangles(18, 22, 21, 0, 17, 23, 22, 0),
    gsSP2Triangles(17, 16, 23, 0, 23, 16, 1, 0),
    gsSP2Triangles(24, 23, 1, 0, 0, 22, 23, 0),
    gsSP2Triangles(25, 20, 21, 0, 20, 4, 5, 0),
    gsSP2Triangles(9, 11, 26, 0, 26, 12, 15, 0),
    gsSP2Triangles(26, 27, 28, 0, 26, 28, 9, 0),
    gsSP2Triangles(9, 28, 10, 0, 27, 26, 15, 0),
    gsSP2Triangles(13, 11, 8, 0, 8, 17, 18, 0),
    gsSP2Triangles(8, 18, 13, 0, 21, 22, 0, 0),
    gsSP2Triangles(21, 0, 25, 0, 26, 11, 12, 0),
    gsSPEndDisplayList(),
};
extern CollisionHeader D_06000E94;

void BgTreemouth_SetupAction(BgTreemouth* this, BgTreemouthActionFunc actionFunc) {
    this->actionFunc = actionFunc;
}

void BgTreemouth_Init(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    BgTreemouth* this = THIS;
    CollisionHeader* colHeader = NULL;

    Actor_ProcessInitChain(thisx, sInitChain);
    DynaPolyActor_Init(&this->dyna, DPM_UNK);
    CollisionHeader_GetVirtual(&D_06000E94, &colHeader);
    this->dyna.bgId = DynaPoly_SetBgActor(globalCtx, &globalCtx->colCtx.dyna, thisx, colHeader);
    ActorShape_Init(&thisx->shape, 0.0f, NULL, 0.0f);
    Actor_SetFocus(thisx, 50.0f);

    if ((gSaveContext.sceneSetupIndex < 4) && LINK_IS_CHILD) {
        BgTreemouth_SetupAction(this, func_808BC8B8);
    } /* else if (LINK_IS_ADULT || (gSaveContext.sceneSetupIndex == 7)) {
        this->unk_168 = 0.0f;
        BgTreemouth_SetupAction(this, BgTreemouth_DoNothing);
    } */
    else {
        this->unk_168 = 1.0f;
        BgTreemouth_SetupAction(this, func_808BC6F8);
    }

    thisx->textId = 0x905;
}

void BgTreemouth_Destroy(Actor* thisx, GlobalContext* globalCtx) {
    BgTreemouth* this = THIS;

    DynaPoly_DeleteBgActor(globalCtx, &globalCtx->colCtx.dyna, this->dyna.bgId);
}

void func_808BC65C(BgTreemouth* this, GlobalContext* globalCtx) {
    CsCmdActorAction* npcAction;

    if ((globalCtx->csCtx.state != CS_STATE_IDLE)) {
        npcAction = globalCtx->csCtx.npcActions[0];
        if (npcAction != NULL) {
            if (npcAction->action == 2) {
                BgTreemouth_SetupAction(this, func_808BC80C);
            } else if (npcAction->action == 3) {
                Audio_PlaySoundGeneral(NA_SE_EV_WOODDOOR_OPEN, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                BgTreemouth_SetupAction(this, func_808BC6F8);
            }
        }
    }
}

void func_808BC6F8(BgTreemouth* this, GlobalContext* globalCtx) {
    Vec3f sp34;

    if (this->unk_168 < 1.0f) {
        this->unk_168 += 0.01f;
    } else {
        this->unk_168 = 1.0f;
    }

    if ((gSaveContext.sceneSetupIndex == 6) && (globalCtx->csCtx.frames >= 0x2BD) &&
        (globalCtx->state.frames % 8 == 0)) {
        sp34.x = (Rand_ZeroOne() * 1158.0f) + 3407.0f;
        sp34.y = 970.0f;
        sp34.z = (Rand_ZeroOne() * 2026.0f) + -2163.0f;
        EffectSsHahen_SpawnBurst(globalCtx, &sp34, 0.8f, 0, 50, 30, 1, HAHEN_OBJECT_DEFAULT, 10, NULL);
    }
}

void func_808BC80C(BgTreemouth* this, GlobalContext* globalCtx) {
    this->unk_168 += 0.05f;
    if (this->unk_168 >= 0.8f) {
        BgTreemouth_SetupAction(this, func_808BC864);
    }
}

void func_808BC864(BgTreemouth* this, GlobalContext* globalCtx) {
    this->unk_168 -= 0.03f;
    if (this->unk_168 <= 0.0f) {
        BgTreemouth_SetupAction(this, func_808BC65C);
    }
}

void func_808BC8B8(BgTreemouth* this, GlobalContext* globalCtx) {
    if ((!(Flags_GetEventChkInf(5))) || LINK_IS_ADULT) {
        if (LINK_IS_CHILD) {
            if (Flags_GetEventChkInf(0xC)) {
                if (Actor_IsFacingAndNearPlayer(&this->dyna.actor, 1658.0f, 0x7530)) {
                    this->dyna.actor.flags |= 1;
                    if (this->dyna.actor.isTargeted) {
                        this->dyna.actor.flags &= ~1;
                        globalCtx->csCtx.segment = D_808BD2A0;
                        gSaveContext.cutsceneTrigger = 1;
                        BgTreemouth_SetupAction(this, func_808BC9EC);
                    }
                }
            } else if (Actor_IsFacingAndNearPlayer(&this->dyna.actor, 1658.0f, 0x4E20)) {
                Flags_SetEventChkInf(0xC);
                globalCtx->csCtx.segment = D_808BCE20;
                gSaveContext.cutsceneTrigger = 1;
                BgTreemouth_SetupAction(this, func_808BC9EC);
            }
        }
    } else {
        this->unk_168 = 1.0f;
    }
}

void func_808BC9EC(BgTreemouth* this, GlobalContext* globalCtx) {
    Player* player = PLAYER;

    if (globalCtx->csCtx.state == CS_STATE_UNSKIPPABLE_INIT) {
        if (Actor_IsFacingAndNearPlayer(&this->dyna.actor, 350.0f, 0x7530)) {
            player->actor.world.pos.x = 3827.0f;
            player->actor.world.pos.y = -161.0f;
            player->actor.world.pos.z = -1142.0f;
        }

        globalCtx->csCtx.frames = 0;
        globalCtx->csCtx.unk_18 = 0xFFFF;
        D_8015FCC0 = 0xFFFF;
        D_8015FCC2 = 0xFFFF;
        D_8015FCC4 = 0xFFFF;
        globalCtx->csCtx.unk_1A = 0;
        globalCtx->csCtx.unk_1B = 0;
        globalCtx->csCtx.state = CS_STATE_SKIPPABLE_EXEC;

        if (globalCtx->msgCtx.choiceIndex == 0) {
            globalCtx->csCtx.segment = D_808BD520;
            Flags_SetEventChkInf(5);
            BgTreemouth_SetupAction(this, func_808BCAF0);
        } else {
            globalCtx->csCtx.segment = D_808BD790;
            globalCtx->csCtx.frames = 0;
            BgTreemouth_SetupAction(this, func_808BC8B8);
        }
    }
}

void func_808BCAF0(BgTreemouth* this, GlobalContext* globalCtx) {
    CsCmdActorAction* npcAction;

    if (globalCtx->csCtx.state != CS_STATE_IDLE) {
        npcAction = globalCtx->csCtx.npcActions[0];
        if (npcAction != NULL) {
            if (npcAction->action == 2) {
                BgTreemouth_SetupAction(this, func_808BC80C);
            } else if (npcAction->action == 3) {
                Audio_PlaySoundGeneral(NA_SE_EV_WOODDOOR_OPEN, &D_801333D4, 4, &D_801333E0, &D_801333E0, &D_801333E8);
                BgTreemouth_SetupAction(this, func_808BC6F8);
            }
        }
    }
}

void BgTreemouth_DoNothing(BgTreemouth* this, GlobalContext* globalCtx) {
}

void BgTreemouth_Update(Actor* thisx, GlobalContext* globalCtx) {
    BgTreemouth* this = THIS;
    f32 unk_168;

    this->actionFunc(this, globalCtx);

    // Modified for SW97... put the mouth underground if it's fully open
    if (this->unk_168 >= 1.0f) {
        this->unk_168 = 1.1f;
    }

    unk_168 = this->unk_168;
    if (globalCtx->sceneNum != SCENE_SPOT04_OLD) {
        thisx->world.pos.x = (unk_168 * -160.0f) + 4029.0f;
        thisx->world.pos.y = (unk_168 * -399.0f) + 136.0f;
        thisx->world.pos.z = (unk_168 * 92.0f) + -1255.0f;
    }
}

void BgTreemouth_Draw(Actor* thisx, GlobalContext* globalCtx) {
    s32 pad;
    // u16 alpha = 500;

    OPEN_DISPS(globalCtx->state.gfxCtx);

    func_80093D18(globalCtx->state.gfxCtx);

    /*if ((gSaveContext.sceneSetupIndex < 4) || LINK_IS_ADULT) {
        if (gSaveContext.eventChkInf[0] & 0x80) {
            alpha = 2150;
        }
    } else { // neeeded to match
    }

    if (gSaveContext.sceneSetupIndex == 6) {
        alpha = (globalCtx->unk_11D30[0] + 0x1F4);
    }*/

    gDPSetEnvColor(POLY_OPA_DISP++, 128, 128, 128, 0); // Spaceworld change, alpha * 0.1f
    gSPMatrix(POLY_OPA_DISP++, Matrix_NewMtx(globalCtx->state.gfxCtx, "../z_bg_treemouth.c", 932),
              G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    gSPDisplayList(POLY_OPA_DISP++, &D_060009D0_edited);

    CLOSE_DISPS(globalCtx->state.gfxCtx);
}
