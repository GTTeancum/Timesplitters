// The sweep's packages, each behind its own switch (xbox_sweep.h).
#include "xbox_sweep.h"

#ifndef TS_SWEEP_LIGHT
#define TS_SWEEP_LIGHT 0
#endif
#ifndef TS_SWEEP_ANIM
#define TS_SWEEP_ANIM 0
#endif
#ifndef TS_SWEEP_CHR
#define TS_SWEEP_CHR 0
#endif
#ifndef TS_SWEEP_ROOMGFX
#define TS_SWEEP_ROOMGFX 0
#endif
#ifndef TS_SWEEP_PLAYER
#define TS_SWEEP_PLAYER 0
#endif
#ifndef TS_SWEEP_PORTAL
#define TS_SWEEP_PORTAL 0
#endif
#ifndef TS_SWEEP_HUD
#define TS_SWEEP_HUD 0
#endif
#ifndef TS_SWEEP_PROPS
#define TS_SWEEP_PROPS 0
#endif
#ifndef TS_SWEEP_WALK
#define TS_SWEEP_WALK 0
#endif

void registerXboxSweep(PS2Runtime &runtime)
{
    (void)runtime;
#if TS_SWEEP_LIGHT
    registerSweepLight(runtime);
#endif
#if TS_SWEEP_ANIM
    registerSweepAnim(runtime);
#endif
#if TS_SWEEP_CHR
    registerSweepChr(runtime);
#endif
#if TS_SWEEP_ROOMGFX
    registerSweepRoomGfx(runtime);
#endif
#if TS_SWEEP_PLAYER
    registerSweepPlayer(runtime);
#endif
#if TS_SWEEP_PORTAL
    registerSweepPortal(runtime);
#endif
#if TS_SWEEP_HUD
    registerSweepHud(runtime);
#endif
#if TS_SWEEP_PROPS
    registerSweepProps(runtime);
#endif
#if TS_SWEEP_WALK
    registerSweepWalk(runtime);
#endif
}
