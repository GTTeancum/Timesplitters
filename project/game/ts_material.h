// The native pipeline's side of the material table (src/xbox/PUSH-BC-PLAN.md
// section 3.5 item 7; section 6, I-4; owned by B-GS):
//   ts_material::applyRunState   header-inline: applies a run's material
//                                through GS::applyMaterial, keeping the
//                                g_nv2aTextureStats material counters
// Week 0 (W0-I): the function exists and answers false ("not applied: send
// the run's state block as before"), so that its consumers
// (vu1_native_material.h, C-REC's descriptors, C-EMIT's ops) build against
// it; B-GS fills it in with M4.1 phase 1.
#pragma once
#include "runtime/gs/gs_material.h"

#include <cstdint>

class GS;

namespace ts_material
{
    // True when the material was applied (the run's state block need not be
    // sent); false: the caller sends the block as before. Week 0: false.
    inline bool applyRunState(GS &gs, uint32_t materialId)
    {
        (void)gs;
        (void)materialId;
        return false;
    }
}
