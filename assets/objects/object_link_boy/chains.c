#include "ultra64.h"
#include "z64.h"
#include "macros.h"
#include "object_link_boy.h"

// dlists for chaining other dlists together for optimization purposes

extern Gfx gSWLinkAdultMirrorShieldInHandDL[];
extern Gfx gSWLinkAdultHylianShieldInHandDL[];
extern Gfx gSWLinkAdultMegatonHammerInHandDL[];
extern Gfx gSWLinkAdultHookshotInHandDL[];
extern Gfx gSWLinkAdultFairyBowInHandDL[];
extern Gfx gSWLinkAdultGiantsKnifeInHandDL[];
extern Gfx gSWLinkAdultMasterSwordInHandDL[];
extern Gfx gSWLinkBrokenGiantsKnifeInHandDL[];
extern Gfx gLinkAdultFPRightHandDL[];
extern Gfx gSWLinkAdultFairyBowFPDL[];
extern Gfx gSWLinkAdultFPHookshotDL[];
extern Gfx gSWLinkAdultOOTInHandDL[];

// Right hand items
Gfx gLinkAdultRightHandAndOOTNearDL[] = {
    gsSPDisplayList(gLinkAdultRightHandNearDL),
    gsSPDisplayList(gSWLinkAdultOOTInHandDL),
    gsSPEndDisplayList(),
};

// Right fist items
Gfx gLinkAdultRightFistAndFairyBowNearDL[] = {
    gsSPDisplayList(gLinkAdultRightFistNearDL),
    gsSPDisplayList(gSWLinkAdultFairyBowInHandDL),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightFistAndHookshotNearDL[] = {
    gsSPDisplayList(gLinkAdultRightFistNearDL),
    gsSPDisplayList(gSWLinkAdultHookshotInHandDL),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightFistAndHylianShieldNearDL[] = {
    gsSPDisplayList(gLinkAdultRightFistNearDL),
    gsSPDisplayList(gSWLinkAdultHylianShieldInHandDL),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightFistAndMegatonHammerNearDL[] = {
    gsSPDisplayList(gLinkAdultRightFistNearDL),
    gsSPDisplayList(gSWLinkAdultMegatonHammerInHandDL),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultRightFistAndMirrorShieldNearDL[] = {
    gsSPDisplayList(gLinkAdultRightFistNearDL),
    gsSPDisplayList(gSWLinkAdultMirrorShieldInHandDL),
    gsSPEndDisplayList(),
};

// Left fist items
Gfx gLinkAdultLeftFistAndBrokenGiantsKnifeNearDL[] = {
    gsSPDisplayList(gLinkAdultLeftFistNearDL),
    gsSPDisplayList(gSWLinkBrokenGiantsKnifeInHandDL),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftFistAndGiantsKnifeNearDL[] = {
    gsSPDisplayList(gLinkAdultLeftFistNearDL),
    gsSPDisplayList(gSWLinkAdultGiantsKnifeInHandDL),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultLeftFistAndMasterSwordNearDL[] = {
    gsSPDisplayList(gLinkAdultLeftFistNearDL),
    gsSPDisplayList(gSWLinkAdultMasterSwordInHandDL),
    gsSPEndDisplayList(),
};

// FP items
Gfx gLinkAdultFPRightHandAndFairyBowDL[] = {
    gsSPDisplayList(gLinkAdultFPRightHandDL),
    gsSPDisplayList(gSWLinkAdultFairyBowFPDL),
    gsSPEndDisplayList(),
};

Gfx gLinkAdultFPRightHandAndHookshotDL[] = {
    gsSPDisplayList(gLinkAdultFPRightHandDL),
    gsSPDisplayList(gSWLinkAdultFPHookshotDL),
    gsSPEndDisplayList(),
};
