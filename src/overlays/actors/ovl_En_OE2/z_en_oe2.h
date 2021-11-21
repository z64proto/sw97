#ifndef _Z_EN_OE2_H_
#define _Z_EN_OE2_H_

#include "ultra64.h"
#include "global.h"

struct EnOE2;

typedef void (*EnOE2InitFunc)(struct EnOE2*, GlobalContext*);
typedef void (*EnOE2UpdateFunc)(struct EnOE2*, GlobalContext*);
typedef void (*EnOE2DrawFunc)(struct EnOE2*, GlobalContext*);

typedef enum {
    OE2_INIT_MIDO_A,
    OE2_INIT_REDHEAD_GIRL,
    OE2_INIT_SARIA,
    OE2_INIT_REDHEAD_BOY_A,
    OE2_INIT_FADO_A,
    OE2_INIT_GIRL_BROWN_BAND,
    OE2_INIT_BOY_GREEN_CAP,
    OE2_INIT_GIRL_GREEN_BAND,
    OE2_INIT_BOY_MINT_CAP,
    OE2_INIT_SHOP_VENDOR,
    OE2_INIT_GIRL_GREEN_CAP,
    OE2_INIT_FADO_B,
    OE2_INIT_GORON
} EnOE2InitMode;

typedef enum {
    OE2_UPDATE_MIDO_A,
    OE2_UPDATE_REDHEAD_GIRL,
    OE2_UPDATE_SARIA,
    OE2_UPDATE_REDHEAD_BOY_A,
    OE2_UPDATE_FADO_A,
    OE2_UPDATE_GIRL_BROWN_BAND,
    OE2_UPDATE_BOY_GREEN_CAP,
    OE2_UPDATE_GIRL_GREEN_BAND,
    OE2_UPDATE_BOY_MINT_CAP,
    OE2_UPDATE_SHOP_VENDOR,
    OE2_UPDATE_GIRL_GREEN_CAP,
    OE2_UPDATE_FADO_B,
    OE2_UPDATE_GORON
} EnOE2UpdateMode;

typedef enum {
    OE2_DRAW_MIDO_A,
    OE2_DRAW_REDHEAD_GIRL,
    OE2_DRAW_SARIA,
    OE2_DRAW_REDHEAD_BOY_A,
    OE2_DRAW_FADO_A,
    OE2_DRAW_GIRL_BROWN_BAND,
    OE2_DRAW_BOY_GREEN_CAP,
    OE2_DRAW_GIRL_GREEN_BAND,
    OE2_DRAW_BOY_MINT_CAP,
    OE2_DRAW_SHOP_VENDOR,
    OE2_DRAW_GIRL_GREEN_CAP,
    OE2_DRAW_FADO_B,
    OE2_DRAW_GORON
} EnOE2DrawMode;

typedef enum { OE2_DRAWFLAG_DEBUG = 0x00000001 } EnOE2DrawFlags;

typedef struct EnOE2 {
    Actor actor;
    SkelAnime skelAnime;
    Vec3s jointTable[39];
    Vec3s morphTable[39];
    s8 npcType;
    s16 priObjectId;
    s16 secObjectId;
    s16 animObjectId;
    s32 priDrawObjBankIndex;
    s32 secDrawObjBankIndex;
    s32 animObjBankIndex;
    s16 eyeBlinkTimer;
    s16 eyeTextureIndex;
    void* eyeTexture;
    s16 mouthTextureIndex;
    void* mouthTexture;
    s32 drawFlags;
    s32 updateMode;
    s32 drawMode;
    ColliderCylinder collider;
    Vec3s unknownVector1;
    Vec3s unknownVector2;
    NpcInfo npcInfo;
    s16 goronState;
    void* goronEyeTexture;
} EnOE2;

extern const ActorInit En_OE2_InitVars;

#endif
