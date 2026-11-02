// The sweep's WALK package (xbox_sweep.h): the display-list walk, the VIF1
// DMA chain walk that sceDmaSend's kick runs (PS2Memory::writeIORegister in
// the walker copy build/xbox/gen/models/ps2_memory.cpp). It replaces no game
// routine, so nothing is installed in the function table here: the work sits
// behind the TS_SWEEP_WALK compile switch in the walker copy's patcher
// (src/xbox/tools/patch_native_models.py, memory), the model cache's walk
// hooks (xbox_model_cache.cpp) and the prologue tokens
// (xbox_part_prologue.cpp). All three objects need the same switch.
//
// With it, the VIF1 chain's tags in main RAM go through a lean copy of the
// walk loop (the general loop takes over at anything else), the model
// capture hooks run only while a walk capture may be open, a prologue
// token asks for the next model CALL's cache slot ahead, the prologue
// records, pairs and markers are asked for a few tokens ahead, and a
// replayed model's periodic verify re-hash asks for its lines ahead. The
// decoder receives the same pieces in the same order; every hook and cache
// sees the same calls in the same order.
#include "xbox_sweep.h"

void registerSweepWalk(PS2Runtime &runtime)
{
    (void)runtime;
}
