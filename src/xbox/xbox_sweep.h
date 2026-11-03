#pragma once
// The 2026-11-02 sweep: Xbox replacements for the game routines that carry
// the console's 4-player frame (measured with make TS_PERF_JOBS=1). Each
// package lives in its own xbox_sweep_<name>.cpp and installs its routines
// over the function table's entries (after the shared natives, before the
// measurement brackets, so [TS:jobs] times the new versions). Each package
// has its own switch, TS_SWEEP_<NAME> (src/xbox/Makefile; 0: not installed).
class PS2Runtime;

void registerSweepLight(PS2Runtime &runtime);    // object lighting
void registerSweepAnim(PS2Runtime &runtime);     // animation and its matrices
void registerSweepChr(PS2Runtime &runtime);      // characters: AI, enemy tick
void registerSweepRoomGfx(PS2Runtime &runtime);  // rooms' drawing preparation, decals
void registerSweepPlayer(PS2Runtime &runtime);   // player tick, movement and collision, gun, camera
void registerSweepPortal(PS2Runtime &runtime);   // doorway visibility
void registerSweepHud(PS2Runtime &runtime);      // HUD and particles
void registerSweepProps(PS2Runtime &runtime);    // object updates, pickups, bullets
void registerSweepWalk(PS2Runtime &runtime);     // the display-list walk (installs nothing in the table)

// All the switched-on packages (xbox_sweep.cpp).
void registerXboxSweep(PS2Runtime &runtime);
