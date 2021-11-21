#ifndef _FIELD_KEEP_H_
#define _FIELD_KEEP_H_

#include "ultra64.h"
#include "global.h"

struct FieldKeep;

typedef void (*FieldKeepActionFunc)(struct FieldKeep*, GlobalContext*);

typedef struct FieldKeep {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x016C */ ColliderCylinder collider;
                 u8 cut;
} FieldKeep;

extern const ActorInit Field_Keep_InitVars;

#endif
