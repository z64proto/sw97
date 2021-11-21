/*
 * File: dungeon_keep_actors.c
 * Overlay: dungeon_keep_actors
 * Description: Various actors used in dungeons
 * This actor was orignally called En_B_Obj
 */

#include "dungeon_keep_actors.h"
#include "alloca.h"

#define FLAGS 0x00000030

#define THIS ((DungeonKeep*)thisx)

void DungeonKeep_Init(Actor* thisx, GlobalContext* globalCtx);
void DungeonKeep_Destroy(Actor* thisx, GlobalContext* globalCtx);
void DungeonKeep_Update(Actor* thisx, GlobalContext* globalCtx);

const ActorInit Dungeon_Keep_InitVars = {
    ACTOR_DUNGEON_KEEP,
    ACTORCAT_BG,
    FLAGS,
    OBJECT_GAMEPLAY_DANGEON_KEEP,
    sizeof(DungeonKeep),
    (ActorFunc)DungeonKeep_Init,
    (ActorFunc)DungeonKeep_Destroy,
    (ActorFunc)DungeonKeep_Update,
    NULL,
};

void DungeonKeep_Init(Actor* thisx, GlobalContext* globalCtx) {
    DungeonKeep* this = THIS;

    switch (DK_TYPE(this->dyna.actor.params)) {
        case DK_CRASHBOX_SMALL:
        case DK_CRASHBOX_LARGE:
            Crashbox_Init(this, globalCtx);
            break;

        case DK_ROLLING_BOULDER:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_EN_GOROIWA, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, 0x0000);
            Actor_Kill(thisx);
            break;

        case DK_FLOOR_SWITCH:
        case DK_FLOOR_SWITCH_DEKU_TIMER:
            BetaFloorSwitch_Init(this, globalCtx);
            break;

        case DK_FLAME_THROWER:
            FlameThrower_Init(&this->dyna.actor, globalCtx);
            break;

        case DK_CRYSTAL_SWITCH_18:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_SWITCH, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, 0x3F13);
            Actor_Kill(thisx);
            break;

        case DK_CRYSTAL_SWITCH:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_SWITCH, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, 0x3F03);
            Actor_Kill(thisx);
            break;

        case DK_EYE_SWITCH:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_SWITCH, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z,
                        (thisx->params & 0x3F00) | 0x0002);
            Actor_Kill(thisx);
            break;

        case DK_EYE_SWITCH_1B:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_SWITCH, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z,
                        (thisx->params & 0x3F00) | 0x0012);
            Actor_Kill(thisx);
            break;

        case DK_EYE_SWITCH_1E:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_SWITCH, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z,
                        (thisx->params & 0x3F00) | 0x0082);
            Actor_Kill(thisx);
            break;

        case DK_EYE_SWITCH_1F:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_SWITCH, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z,
                        (thisx->params & 0x3F00) | 0x0092);
            Actor_Kill(thisx);
            break;

        case DK_PUSH_BLOCK:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_OSHIHIKI, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, 0xFF02);
            break;

        case DK_PUSH_BLOCK_SMALL:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_OBJ_OSHIHIKI, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, 0xFF00);
            break;

        case DK_FLOATER:
        case DK_FLOATER_BIG:
            Floater_Init(this, globalCtx);
            break;

        default:
            Actor_Spawn(&globalCtx->actorCtx, globalCtx, ACTOR_GREEN_CUBE, thisx->world.pos.x, thisx->world.pos.y,
                        thisx->world.pos.z, thisx->world.rot.x, thisx->world.rot.y, thisx->world.rot.z, 0xFFFF);
            Actor_Kill(thisx);
            break;
    }
}

void DungeonKeep_Destroy(Actor* thisx, GlobalContext* globalCtx) {
}

void DungeonKeep_Update(Actor* thisx, GlobalContext* globalCtx) {
}

void DK_DrawDebugText(DungeonKeep* this, GlobalContext* globalCtx, Gfx** buf) {
    GfxPrint* printer = alloca(sizeof(GfxPrint));

    GfxPrint_Init(printer);
    GfxPrint_Open(printer, *buf);
    GfxPrint_SetColor(printer, 255, 255, 255, 255);

    // add messages here
    // GfxPrint_SetPos(printer, 3, 20);
    // GfxPrint_Printf(printer, "init:%08X", DungeonKeep_Init);

    // close
    *buf = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);
}
