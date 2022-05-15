#include "global.h"
#include "objects/object_link_child/object_link_child.h"
#include "objects/object_link_boy/object_link_boy.h"

static Vec3f sPhysicsSphereCenterList[6];
static PhysicsJoint sHatPhysicsJoints[HAT_LIMBS + 1];

#define BLENDER_TO_GAME(head, tail) ((head - tail) * 1000.0)

static f32 sChildHatJointLength[HAT_LIMBS + 1] = {
    BLENDER_TO_GAME(0.0, 0.822259) * HAT_SCALE_CHILD,
    BLENDER_TO_GAME(0.822259, 1.25981) * HAT_SCALE_CHILD,
    BLENDER_TO_GAME(1.25981, 1.60892) * (HAT_SCALE_CHILD * 1.15),
    BLENDER_TO_GAME(1.60892, 1.88539) * (HAT_SCALE_CHILD * 1.10),
    BLENDER_TO_GAME(1.88539, 1.88539) * HAT_SCALE_CHILD,
};

static f32 sAdultHatJointLength[HAT_LIMBS + 1] = {
    BLENDER_TO_GAME(0.0, 0.921235) * HAT_SCALE_ADULT,
    BLENDER_TO_GAME(0.921235, 1.50011) * HAT_SCALE_ADULT,
    BLENDER_TO_GAME(1.50011, 1.97856) * HAT_SCALE_ADULT,
    BLENDER_TO_GAME(1.97856, 2.33358) * HAT_SCALE_ADULT,
    BLENDER_TO_GAME(2.33358, 2.762) * HAT_SCALE_ADULT,
};

static Vec3f sHatOffsets[] = {
    { 561.4f, -650.3f, 0.0f }, // Adult
    { 481.6f, -588.2f, 0.0f }, // Child
};

static PhysicsStrand sHatPhysicsStrand[2] = {
    // Adult
    {
        // PhysicsInfo
        {
            HAT_LIMBS, // numLimbs
            -1.5f,     // gravity
            2.0f,      // floorY
            4.0f,      // maxVel
            0.8f,      // velStep
            1.2f       // velMult
        },
        // PhysicsHead
        {
            { 0.0f, 0.0f, 0.0f }, // pos
            { 0.0f, 0.0f, 0.0f }, // rot
            NULL                  // mtxF
        },
        // PhysicsGfx
        {
            gLinkAdultPhysicsHatDL,  // dlist
            { 0.01f, 0.01f, 0.01f }, // scale
            0x0A,                    // segID
            false                    // noDraw
        },
        // PhysicsSpheres
        {
            ARRAY_COUNT(sPhysicsSphereCenterList), // numSpheres
            sPhysicsSphereCenterList,              // centers
            0.0f                                   // radius
        },
        // PhysicsConstraint
        {
            true,             // lockRoot
            { 55.0f, 55.0f }, // rotStepCalc
            { 44.0f, 45.0f }  // rotStepDraw
        },
        // PhysicsRigidity
        {
            HAT_LIMBS,             // num
            { 0.0f, 0.0f, -2.0f }, // push
            0.3f,                  // mult
            { 0.0f, 90.0f, 90.0f } // rot
        },
        sAdultHatJointLength // limbsLength
    },
    // Child
    {
        // PhysicsInfo
        {
            HAT_LIMBS, // numLimbs
            -1.5f,     // gravity
            2.0f,      // floorY
            4.0f,      // maxVel
            0.8f,      // velStep
            1.2f       // velMult
        },
        // PhysicsHead
        {
            { 0.0f, 0.0f, 0.0f }, // pos
            { 0.0f, 0.0f, 0.0f }, // rot
            NULL                  // mtxF
        },
        // PhysicsGfx
        {
            gLinkChildPhysicsHatDL,  // dlist
            { 0.01f, 0.01f, 0.01f }, // scale
            0x0A,                    // segID
            false                    // noDraw
        },
        // PhysicsSpheres
        {
            ARRAY_COUNT(sPhysicsSphereCenterList), // numSpheres
            sPhysicsSphereCenterList,              // centers
            0.0f                                   // radius
        },
        // PhysicsConstraint
        {
            true,             // lockRoot
            { 55.0f, 55.0f }, // rotStepCalc
            { 44.0f, 45.0f }  // rotStepDraw
        },
        // PhysicsRigidity
        {
            HAT_LIMBS,             // num
            { 0.0f, 0.0f, -1.5f }, // push
            0.4f,                  // mult
            { 0.0f, 90.0f, 90.0f } // rot
        },
        sChildHatJointLength // limbsLength
    },
};
