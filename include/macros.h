#ifndef _MACROS_H_
#define _MACROS_H_

#define ARRAY_COUNT(arr) (s32)(sizeof(arr) / sizeof(arr[0]))
#define ARRAY_COUNTU(arr) (u32)(sizeof(arr) / sizeof(arr[0]))

#define PHYSICAL_TO_VIRTUAL(addr) (void*)((u32)(addr) + 0x80000000)
#define VIRTUAL_TO_PHYSICAL(addr) (u32)((u8*)(addr)-0x80000000)
#define SEGMENTED_TO_VIRTUAL(addr) PHYSICAL_TO_VIRTUAL(gSegments[SEGMENT_NUMBER(addr)] + SEGMENT_OFFSET(addr))

#define ALIGN16(val) (((val) + 0xF) & ~0xF)

#define SQ(x) ((x) * (x))
#define ABS(x) ((x) >= 0 ? (x) : -(x))
#define DECR(x) ((x) == 0 ? 0 : --(x))
#define CLAMP(x, min, max) ((x) < (min) ? (min) : (x) > (max) ? (max) : (x))
#define CLAMP_MAX(x, max) ((x) > (max) ? (max) : (x))
#define CLAMP_MIN(x, min) ((x) < (min) ? (min) : (x))
#define MEDIAN3(a1, a2, a3) \
    ((a2 >= a1) ? ((a3 >= a2) ? a2 : ((a1 >= a3) ? a1 : a3)) : ((a2 >= a3) ? a2 : ((a3 >= a1) ? a1 : a3)))

#define RGBA8(r, g, b, a) (((r & 0xFF) << 24) | ((g & 0xFF) << 16) | ((b & 0xFF) << 8) | ((a & 0xFF) << 0))

#define PLAYER ((Player*)globalCtx->actorCtx.actorLists[ACTORCAT_PLAYER].head)

#define ACTIVE_CAM globalCtx->cameraPtrs[globalCtx->activeCamera]

#define YEARS_CHILD 5
#define YEARS_ADULT 17
#define LINK_IS_CHILD (gSaveContext.linkAge != 0)
#define LINK_IS_ADULT (gSaveContext.linkAge == 0)
#define LINK_AGE_IN_YEARS (LINK_IS_CHILD ? YEARS_CHILD : YEARS_ADULT)

// New entrance format macros
#define ENTRANCE(scene, spawn, transition, musicFlag, titleFlag) \
    ((scene << 9) | (spawn << 4) | (transition << 2) | (musicFlag << 1) | titleFlag)
#define GET_ENTRANCE_SCENE(entrance) ((entrance >> 9) & 0x7F)
#define GET_ENTRANCE_SPAWN(entrance) ((entrance >> 4) & 0x1F)
#define GET_ENTRANCE_TRANSITION(entrance) ((entrance >> 2) & 3)
#define GET_ENTRANCE_MUSIC_FLAG(entrance) ((entrance >> 1) & 1)
#define GET_ENTRANCE_TITLE_FLAG(entrance) (entrance & 1)

#define USE_DOOR_COLLISON(globalCtx)                                                             \
    (!(globalCtx->sceneNum == SCENE_DODONGOS_CAVERN || globalCtx->sceneNum == SCENE_DEKU_TREE || \
       globalCtx->sceneNum == SCENE_SPECIAL_COURSE))

#define SLOT(item) gItemSlots[item]
#define INV_CONTENT(item) gSaveContext.inventory.items[SLOT(item)]
#define AMMO(item) gSaveContext.inventory.ammo[SLOT(item)]
#define BEANS_BOUGHT AMMO(ITEM_BEAN + 1)
#define HEART_AMOUNT(numHearts) (numHearts * 16)

#define ALL_EQUIP_VALUE(equip) ((s32)(gSaveContext.inventory.equipment & gEquipMasks[equip]) >> gEquipShifts[equip])
#define CUR_EQUIP_VALUE(equip) ((s32)(gSaveContext.equips.equipment & gEquipMasks[equip]) >> gEquipShifts[equip])
#define CHECK_OWNED_EQUIP(equip, value) ((gBitFlags[value] << gEquipShifts[equip]) & gSaveContext.inventory.equipment)

#define CUR_UPG_VALUE(upg) ((s32)(gSaveContext.inventory.upgrades & gUpgradeMasks[upg]) >> gUpgradeShifts[upg])
#define CAPACITY(upg, value) gUpgradeCapacities[upg][value]
#define CUR_CAPACITY(upg) CAPACITY(upg, CUR_UPG_VALUE(upg))

#define CHECK_QUEST_ITEM(item) (gBitFlags[item] & gSaveContext.inventory.questItems)
#define CHECK_DUNGEON_ITEM(item, dungeonIndex) (gSaveContext.inventory.dungeonItems[dungeonIndex] & gBitFlags[item])

#define GET_GS_FLAGS(index) ((gSaveContext.gsFlags[(index) >> 2] & gGsFlagsMask[(index)&3]) >> gGsFlagsShift[(index)&3])
#define SET_GS_FLAGS(index, value) (gSaveContext.gsFlags[(index) >> 2] |= (value) << gGsFlagsShift[(index)&3])

#define HIGH_SCORE(score) (gSaveContext.highScores[score])

#define B_BTN_ITEM                                                               \
    ((gSaveContext.buttonStatus[0] == ITEM_NONE)                ? ITEM_NONE      \
     : (gSaveContext.equips.buttonItems[0] == ITEM_SWORD_KNIFE) ? ITEM_SWORD_BGS \
                                                                : gSaveContext.equips.buttonItems[0])

#define C_BTN_ITEM(button) \
    ((gSaveContext.buttonStatus[button + 1] != BTN_DISABLED) ? gSaveContext.equips.buttonItems[button + 1] : ITEM_NONE)

#define CHECK_BTN_ALL(state, combo) (~((state) | ~(combo)) == 0)
#define CHECK_BTN_ANY(state, combo) (((state) & (combo)) != 0)

#ifndef NDEBUG
#define LOG(exp, value, format, file, line)         \
    do {                                            \
        LogUtils_LogThreadId(file, line);           \
        osSyncPrintf(exp " = " format "\n", value); \
    } while (0)
#else
#define LOG(exp, value, format, file, line) ((void)0)
#endif

#ifndef NDEBUG
#define LOG_STRING(string, file, line) LOG(#string, string, "%s", file, line)
#define LOG_ADDRESS(exp, value, file, line) LOG(exp, value, "%08x", file, line)
#define LOG_TIME(exp, value, file, line) LOG(exp, value, "%lld", file, line)
#define LOG_NUM(exp, value, file, line) LOG(exp, value, "%d", file, line)
#define LOG_HEX(exp, value, file, line) LOG(exp, value, "%x", file, line)
#define LOG_FLOAT(exp, value, file, line) LOG(exp, value, "%f", file, line)
#else
#define LOG_STRING(string, file, line) ((void)0)
#define LOG_ADDRESS(exp, value, file, line) ((void)0)
#define LOG_TIME(exp, value, file, line) ((void)0)
#define LOG_NUM(exp, value, file, line) ((void)0)
#define LOG_HEX(exp, value, file, line) ((void)0)
#define LOG_FLOAT(exp, value, file, line) ((void)0)
#endif

#ifdef NDEBUG
#define ASSERT(cond) ((void)0)
#else
#define ASSERT(cond) ((cond) ? ((void)0) : __assert(#cond, __FILE__, __LINE__))
#endif

#define SET_NEXT_GAMESTATE(curState, newInit, newStruct) \
    do {                                                 \
        (curState)->init = newInit;                      \
        (curState)->size = sizeof(newStruct);            \
    } while (0)

#define SET_FULLSCREEN_VIEWPORT(view)      \
    {                                      \
        Viewport viewport;                 \
        viewport.bottomY = SCREEN_HEIGHT;  \
        viewport.rightX = SCREEN_WIDTH;    \
        viewport.topY = 0;                 \
        viewport.leftX = 0;                \
        View_SetViewport(view, &viewport); \
    }                                      \
    (void)0

extern GraphicsContext* __gfxCtx;

#define WORK_DISP __gfxCtx->work.p
#define POLY_OPA_DISP __gfxCtx->polyOpa.p
#define POLY_XLU_DISP __gfxCtx->polyXlu.p
#define OVERLAY_DISP __gfxCtx->overlay.p

// __gfxCtx shouldn't be used directly.
// Use the DISP macros defined above when writing to display buffers.
#ifndef NDEBUG
#define OPEN_DISPS(gfxCtx)         \
    {                              \
        GraphicsContext* __gfxCtx; \
        Gfx* dispRefs[4];          \
        __gfxCtx = gfxCtx;         \
        (void)__gfxCtx;            \
        Graph_OpenDisps(dispRefs, gfxCtx, __FILE__, __LINE__)
#else
#define OPEN_DISPS(gfxCtx)         \
    {                              \
        GraphicsContext* __gfxCtx; \
        __gfxCtx = gfxCtx;         \
        (void)__gfxCtx;            
#endif

#ifndef NDEBUG
#define CLOSE_DISPS(gfxCtx)                                 \
    Graph_CloseDisps(dispRefs, gfxCtx, __FILE__, __LINE__); \
    }                                                       \
    (void)0
#else
#define CLOSE_DISPS(gfxCtx)                                 \
    (void)0;                                        \
    }                                                       \
    (void)0
#endif

/**
 * `x` vertex x
 * `y` vertex y
 * `z` vertex z
 * `s` texture s coordinate
 * `t` texture t coordinate
 * `crnx` red component of color vertex, or x component of normal vertex
 * `cgny` green component of color vertex, or y component of normal vertex
 * `cbnz` blue component of color vertex, or z component of normal vertex
 * `a` alpha
 */
#define VTX(x, y, z, s, t, crnx, cgny, cbnz, a) \
    {                                           \
        {                                       \
            { x, y, z }, 0, { s, t }, {         \
                crnx, cgny, cbnz, a             \
            }                                   \
        }                                       \
    }

#define VTX_T(x, y, z, s, t, cr, cg, cb, a) \
    {                                       \
        { x, y, z }, 0, { s, t }, {         \
            cr, cg, cb, a                   \
        }                                   \
    }

#define gDPSetTileCustom(pkt, fmt, siz, width, height, pal, cms, cmt, masks, maskt, shifts, shiftt)                    \
    do {                                                                                                               \
        gDPPipeSync(pkt);                                                                                              \
        gDPTileSync(pkt);                                                                                              \
        gDPSetTile(pkt, fmt, siz, (((width)*siz##_TILE_BYTES) + 7) >> 3, 0, G_TX_LOADTILE, 0, cmt, maskt, shiftt, cms, \
                   masks, shifts);                                                                                     \
        gDPTileSync(pkt);                                                                                              \
        gDPSetTile(pkt, fmt, siz, (((width)*siz##_TILE_BYTES) + 7) >> 3, 0, G_TX_RENDERTILE, pal, cmt, maskt, shiftt,  \
                   cms, masks, shifts);                                                                                \
        gDPSetTileSize(pkt, G_TX_RENDERTILE, 0, 0, ((width)-1) << G_TEXTURE_IMAGE_FRAC,                                \
                       ((height)-1) << G_TEXTURE_IMAGE_FRAC);                                                          \
    } while (0)

// Vertex helpers
#define GET_VTX_X(vtx) ((void)0, vtx.v.ob[0])
#define GET_VTX_Y(vtx) ((void)0, vtx.v.ob[1])
#define GET_VTX_Z(vtx) ((void)0, vtx.v.ob[2])
#define SET_VTX_X(vtx, data) (vtx.v.ob[0] = data)
#define SET_VTX_Y(vtx, data) (vtx.v.ob[1] = data)
#define SET_VTX_Z(vtx, data) (vtx.v.ob[2] = data)

#define GET_VTX_U(vtx) ((void)0, vtx.v.tc[0])
#define GET_VTX_V(vtx) ((void)0, vtx.v.tc[1])
#define SET_VTX_U(vtx, data) (vtx.v.tc[0] = data)
#define SET_VTX_V(vtx, data) (vtx.v.tc[1] = data)

#define GET_VTX_R(vtx) ((void)0, vtx.v.cn[0])
#define GET_VTX_G(vtx) ((void)0, vtx.v.cn[1])
#define GET_VTX_B(vtx) ((void)0, vtx.v.cn[2])
#define GET_VTX_A(vtx) ((void)0, vtx.v.cn[3])
#define SET_VTX_R(vtx, data) (vtx.v.cn[0] = data)
#define SET_VTX_G(vtx, data) (vtx.v.cn[1] = data)
#define SET_VTX_B(vtx, data) (vtx.v.cn[2] = data)
#define SET_VTX_A(vtx, data) (vtx.v.cn[3] = data)

#define INIT_PRINTER(printer, x, y, r, g, b) \
    GfxPrint_SetPos(printer, x, y);          \
    GfxPrint_SetColor(printer, r, g, b, 255);

#define HARDWARE_IS_REAL() (DPC_PIPEBUSY_REG != 0)

#endif
