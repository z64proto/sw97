#ifndef _Z_GREEN_CUBE_H_
#define _Z_GREEN_CUBE_H_

#include "ultra64.h"
#include "global.h"

struct GreenCube;

typedef struct GreenCube {
    /* 0x0000 */ Actor actor;
} GreenCube; // size = 0x0150

extern const ActorInit Green_Cube_InitVars;

#endif
