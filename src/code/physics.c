#include "global.h"

void Physics_GetHeadProperties(PhysicsStrand* strand, Vec3f* mult, s32 flag) {
    static MtxF mtxF;
    static Vec3f zero = { 0.0f, 0.0f, 0.0f };

    Matrix_Get(&mtxF);
    strand->head.mtxF = &mtxF;
    func_800D20CC(&mtxF, &strand->head.rot, flag);
    if (mult == NULL) {
        Matrix_MultVec3f(&zero, &strand->head.pos);
    } else {
        Matrix_MultVec3f(mult, &strand->head.pos);
    }
}

static f32 pInitRotStepCalcY = 0;
static Vec3f pInitPush = {0, 0, 0};

void Physics_SetPhysicsStrand(PhysicsStrand* init, PhysicsStrand* dest, f32* limbsLength, Vec3f* sphereCenters) {
    *dest = *init;
    dest->limbsLength = limbsLength;
    dest->spheres.centers = sphereCenters;
}

Gfx* Physics_DrawDynamicStrand(GraphicsContext* gfxCtx, Gfx* gfx, PhysicsJoint* jointTable, PhysicsStrand* strand,
                               void* callback, void* callbackArg1, void* callbackArg2) {
    s32 i;
    s32 j;
    f32 tempY;
    f32 angX;
    f32 angY;
    Vec3f workVec;
    Vec3f posAdd;
    Vec3f rigidity;
    Vec3f velAdj = { 0.0f, 0.0f, 0.0f };
    s16 headRotY = strand->head.rot.y;
    Vec3f* pPos;
    Vec3f* pRot;
    Vec3f* pVel;
    Vec3f* pPrevPos;
    Vec3f* pPrevRot;
    Mtx* matrix;
    s16 y;
    s16 x;
    GlobalContext* globalCtx = Effect_GetGlobalCtx();
    Player* player = PLAYER;

    Matrix_Push();

    jointTable[0].pos.x = strand->head.pos.x;
    jointTable[0].pos.y = strand->head.pos.y;
    jointTable[0].pos.z = strand->head.pos.z;

    for (i = 1; i < strand->info.numLimbs + 1; i++) {
        Math_ApproachF(&jointTable[i].vel.x, 0.0f, 1.0f, strand->info.velStep);
        Math_ApproachF(&jointTable[i].vel.y, 0.0f, 1.0f, strand->info.velStep);
        Math_ApproachF(&jointTable[i].vel.z, 0.0f, 1.0f, strand->info.velStep);
    }

    Matrix_RotateX_s(strand->head.rot.x, MTXMODE_NEW);
    Matrix_RotateY_s(strand->head.rot.y, MTXMODE_APPLY);
    Matrix_RotateZ_s(strand->head.rot.z, MTXMODE_APPLY);

    if (strand->rigidity.rot.x) {
        Matrix_RotateX_f(strand->rigidity.rot.x, MTXMODE_APPLY);
    }
    if (strand->rigidity.rot.y) {
        Matrix_RotateY_f(strand->rigidity.rot.y, MTXMODE_APPLY);
    }
    if (strand->rigidity.rot.z) {
        Matrix_RotateZ_f(strand->rigidity.rot.z, MTXMODE_APPLY);
    }

    Matrix_MultVec3f(&strand->rigidity.push, &rigidity);

    // *(u32*)0x8070000C = (u32)player->skelAnime.animation;
    // *(f32*)0x80700010 = player->skelAnime.curFrame;
    // *(f32*)0x80700014 = BINANG_TO_DEGF(player->actor.world.rot.y);

    // Main calculation loop
    for (i = 1; i < strand->info.numLimbs + 1; i++) {
        Vec3f smoothedRigid = { 0.0f, 0.0f, 0.0f };

        pPos = &jointTable[i].pos;
        pVel = &jointTable[i].vel;
        pPrevPos = &jointTable[i - 1].pos;
        pPrevRot = &jointTable[i - 1].rot;

        if (pInitRotStepCalcY == 0) {
            pInitRotStepCalcY = strand->constraint.rotStepCalc.y;
            pInitPush = strand->rigidity.push;
        }

        // Fixes a bunch of bad hat movement during specific animations
        if ((u32)player->skelAnime.animation == 0x04002D10 || (u32)player->skelAnime.animation == 0x04002D18 ||
            (u32)player->skelAnime.animation == 0x04002D20 || (u32)player->skelAnime.animation == 0x04002CE0 ||
            (u32)player->skelAnime.animation == 0x04002CE8) {
                strand->rigidity.push.x = 0.5f;
                strand->rigidity.push.y = -0.5f;
        } else {
            strand->rigidity.push.x = pInitPush.x;
            strand->rigidity.push.y = pInitPush.y;
            strand->rigidity.push.z = pInitPush.z;
        }

        // Smoothens curve at the start of the limb array
        if (i < strand->rigidity.num) {
            smoothedRigid.x = ((strand->rigidity.num - i) * rigidity.x) * strand->rigidity.mult;
            smoothedRigid.y = ((strand->rigidity.num - i) * rigidity.y) * strand->rigidity.mult;
            smoothedRigid.z = ((strand->rigidity.num - i) * rigidity.z) * strand->rigidity.mult;
        }

        workVec.x = pPos->x + pVel->x - pPrevPos->x + smoothedRigid.x;
        tempY = pPos->y + pVel->y + strand->info.gravity + smoothedRigid.y;
        workVec.z = pPos->z + pVel->z - pPrevPos->z + smoothedRigid.z;

        // FLOOR, also gets rid of the smoothedRigid
        if (tempY < strand->info.floorY + 10.0f) {
            workVec.x -= smoothedRigid.x;
            workVec.z -= smoothedRigid.z;
            if (i != strand->info.numLimbs + 1 && tempY < strand->info.floorY)
                tempY = CLAMP_MIN(tempY, strand->info.floorY);
        }

        workVec.y = tempY - pPrevPos->y;
        // Spaceworld, try to make hat not move as much when moving slowly
        // If the player isn't falling, jumping, etc...
        if (player->actor.velocity.y == -4) {
            if (player->linearVelocity > 0) {
                // It just works!
                workVec.y -= sqrtf(20 * (1 / (player->linearVelocity + 1))) - 2;
            }
            // If Link is backwalking, kind of a jank check and might be better to check anim
            if (player->linearVelocity > 6.5f) {
                strand->constraint.rotStepCalc.y = 1.0f;
                workVec.y = -7.0f;
            } else {
                if (strand->constraint.rotStepCalc.y < pInitRotStepCalcY) {
                    strand->constraint.rotStepCalc.y += 1.0f;
                } else {
                    strand->constraint.rotStepCalc.y = pInitRotStepCalcY;
                }
            }
        }

        angY = Math_Atan2F(workVec.z, workVec.x);
        angX = -Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y);
        pPrevRot->y = angY;
        pPrevRot->x = angX;

        // Handle constraints if they are set
        if (strand->constraint.rotStepCalc.x || strand->constraint.rotStepCalc.y || strand->constraint.lockRoot) {
            s16 rootAngleX, rootAngleY;
            s16 workAngleX, workAngleY;
            s16 tempAngleX, tempAngleY;

            // Handle root rotations differently
            if (i == 1) {
                if (strand->constraint.lockRoot) {
                    pPrevRot->x = angX = -Math_Atan2F(sqrtf(SQ(rigidity.x) + SQ(rigidity.z)), rigidity.y);
                    pPrevRot->y = angY = Math_Atan2F(rigidity.z, rigidity.x);
                } else {
                    if (strand->constraint.rotStepCalc.x) {
                        rootAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(rigidity.x) + SQ(rigidity.z)), rigidity.y));
                        workAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y));
                        Math_SmoothStepToS(&rootAngleX, workAngleX, 1, DEGF_TO_BINANG(strand->constraint.rotStepCalc.x),
                                           1);
                        angX = BINANG_TO_RAD(rootAngleX);
                        pPrevRot->x = angX;
                    }
                    if (strand->constraint.rotStepCalc.y) {
                        rootAngleY = RADF_TO_BINANG(Math_Atan2F(rigidity.z, rigidity.x));
                        workAngleY = RADF_TO_BINANG(Math_Atan2F(workVec.z, workVec.x));
                        Math_SmoothStepToS(&rootAngleY, workAngleY, 1, DEGF_TO_BINANG(strand->constraint.rotStepCalc.y),
                                           1);
                        angY = BINANG_TO_RAD(rootAngleY);
                        pPrevRot->y = angY;
                    }
                }
            } else {
                if (strand->constraint.rotStepCalc.x) {
                    tempAngleX = RADF_TO_BINANG(jointTable[i - 2].rot.x);
                    workAngleX = RADF_TO_BINANG(-Math_Atan2F(sqrtf(SQ(workVec.x) + SQ(workVec.z)), workVec.y));
                    Math_SmoothStepToS(&tempAngleX, workAngleX, 1, DEGF_TO_BINANG(strand->constraint.rotStepCalc.x), 1);
                    angX = BINANG_TO_RAD(tempAngleX);
                    pPrevRot->x = angX;
                }
                if (strand->constraint.rotStepCalc.y) {
                    tempAngleY = RADF_TO_BINANG(jointTable[i - 2].rot.y);
                    workAngleY = RADF_TO_BINANG(Math_Atan2F(workVec.z, workVec.x));
                    Math_SmoothStepToS(&tempAngleY, workAngleY, 1, DEGF_TO_BINANG(strand->constraint.rotStepCalc.y), 1);
                    angY = BINANG_TO_RAD(tempAngleY);
                    pPrevRot->y = angY;
                }
            }
        }

        Matrix_RotateY(angY, MTXMODE_NEW);
        Matrix_RotateX(angX, MTXMODE_APPLY);
        Matrix_MultZ(ABS(strand->limbsLength[i]) * strand->gfx.scale.z, &posAdd);

        // Pushes limbs away from selected Vec3f points
        for (j = 0; j < strand->spheres.num; j++) {
            Vec3f tempPosAdd;
            f32 radiusTo;

            tempPosAdd.x = pPrevPos->x + posAdd.x;
            tempPosAdd.y = pPrevPos->y + posAdd.y;
            tempPosAdd.z = pPrevPos->z + posAdd.z;

            radiusTo = Math_Vec3f_DistXYZ(&tempPosAdd, &strand->spheres.centers[j]);

            if (radiusTo < strand->spheres.radius) {
                s16 yaw = Math_Vec3f_Yaw(&strand->spheres.centers[j], &tempPosAdd);

                posAdd.x += Math_SinS(yaw) * (strand->spheres.radius - radiusTo) * 0.5f;
                posAdd.z += Math_CosS(yaw) * (strand->spheres.radius - radiusTo) * 0.5f;
                velAdj.x += Math_SinS(yaw) * (strand->spheres.radius - radiusTo) * 0.5f;
                velAdj.z += Math_CosS(yaw) * (strand->spheres.radius - radiusTo) * 0.5f;

                pPrevRot->y = angY = Math_Atan2F(posAdd.z, posAdd.x);
                pPrevRot->x = angX = -Math_Atan2F(sqrtf(SQ(posAdd.x) + SQ(posAdd.z)), posAdd.y);
            }
        }

        workVec.x = pPos->x;
        workVec.y = pPos->y;
        workVec.z = pPos->z;

        pPos->x = pPrevPos->x + posAdd.x;
        pPos->y = pPrevPos->y + posAdd.y;
        pPos->z = pPrevPos->z + posAdd.z;

        pVel->x = (pPos->x - workVec.x + velAdj.x) * strand->info.velMult;
        pVel->y = (pPos->y - workVec.y + velAdj.y) * strand->info.velMult;
        pVel->z = (pPos->z - workVec.z + velAdj.z) * strand->info.velMult;

        jointTable[i].vel.x = CLAMP(pVel->x, -strand->info.maxVel, strand->info.maxVel);
        jointTable[i].vel.y = CLAMP(pVel->y, -strand->info.maxVel, strand->info.maxVel);
        jointTable[i].vel.z = CLAMP(pVel->z, -strand->info.maxVel, strand->info.maxVel);
    }

    if (strand->gfx.noDraw) {
        Matrix_Pop();
        return gfx;
    }

    matrix = Graph_Alloc(gfxCtx, strand->info.numLimbs * sizeof(Mtx));
    y = RADF_TO_BINANG(jointTable[0].rot.y);
    x = RADF_TO_BINANG(jointTable[0].rot.x);

    for (i = 0; i < strand->info.numLimbs; i++) {
        pPos = &jointTable[i].pos;
        pRot = &jointTable[i].rot;

        Matrix_Translate(pPos->x, pPos->y, pPos->z, MTXMODE_NEW);

        if (strand->constraint.rotStepDraw.y) {
            Math_SmoothStepToS(&y, RADF_TO_BINANG(pRot->y), 3, DEGF_TO_BINANG(strand->constraint.rotStepDraw.y), 1);
            Matrix_RotateY_s(y, MTXMODE_APPLY);
        } else {
            Matrix_RotateY(pRot->y, MTXMODE_APPLY);
        }

        if (strand->constraint.rotStepDraw.x) {
            Math_SmoothStepToS(&x, RADF_TO_BINANG(pRot->x), 3, DEGF_TO_BINANG(strand->constraint.rotStepDraw.x), 1);
            Matrix_RotateX_s(x, MTXMODE_APPLY);
        } else {
            Matrix_RotateX(pRot->x, MTXMODE_APPLY);
        }

        if (strand->limbsLength[i] < 0) {
            Matrix_Scale(-strand->gfx.scale.x, strand->gfx.scale.y, -strand->gfx.scale.z, MTXMODE_APPLY);
        } else {
            Matrix_Scale(strand->gfx.scale.x, strand->gfx.scale.y, strand->gfx.scale.z, MTXMODE_APPLY);
        }

        if (callback) {
            ((PhysicCallback)callback)(i, callbackArg1, callbackArg2);
        }
        Matrix_ToMtx(&matrix[i], __FILE__, __LINE__);
    }

    gDPPipeSync(gfx++);
    gSPSegment(gfx++, strand->gfx.segID, matrix);
    gSPDisplayList(gfx++, strand->gfx.dlist);
    Matrix_Pop();

    return gfx;
}
