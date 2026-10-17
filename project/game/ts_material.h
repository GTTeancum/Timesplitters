// The native pipeline's side of the material table (src/xbox/PUSH-BC-PLAN.md
// section 3.5 item 7; section 6, I-4; owned by B-GS):
//   ts_material::applyRunState   header-inline: applies a run's material
//                                through GS::applyMaterial, keeping the
//                                g_nv2aTextureStats material counters
// The id is a GSMaterialTable id (runtime/gs/gs_material.h: gsMaterialTable()
// .find(bytes, size) gives the entry; its id stays valid until the slot is
// taken by another block, and then answers nothing). M4.1 phase 1: the
// material is applied with GS::applyStateBlock's rule (a repeat of the block
// applied last, with no texture register written since, applies only its
// TEXFLUSH).
#pragma once
#include "runtime/gs/gs_material.h"
#include "runtime/gs/gs_frontend.h"

#if defined(PLATFORM_XBOX)
#include "../../src/xbox/gs_nv2a_backend.h" // status counters
#endif

#include <cstdint>

namespace ts_material
{
    // True when the material was applied (the run's state block need not be
    // sent); false (no such material any more, or PATH1 inside a packet):
    // the caller sends the block as before.
    inline bool applyRunState(GS &gs, uint32_t materialId)
    {
#if TS_GS_MATERIAL_TABLE
        const GS::StateBlockResult result = gs.applyMaterial(materialId);
        if (result == GS::StateBlockResult::NotApplied)
            return false;
#if defined(PLATFORM_XBOX)
        if (result == GS::StateBlockResult::Repeated)
            ++g_nv2aTextureStats.materialRepeats;
        else
            ++g_nv2aTextureStats.materialHits;
#endif
        return true;
#else
        (void)gs;
        (void)materialId;
        return false; // no shared table: the block goes as before
#endif
    }
}
