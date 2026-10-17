// [TS:gs] (B-GS, src/xbox/PUSH-BC-PLAN.md section 5.4): the GS front end's
// counters (GS::stats(), cumulative) through the report-line registry
// (xbox_perf.h), written with the other status lines on the status hook's
// thread:
//   serial=    state-serial moves; ds=hits/builds of the cached drawState()
//   mat=       applyMaterial applied/repeated/missing; rep= state-block repeats (any caller)
//   table=     material table entries/inserts/hits/evictions
//   bulk=      bulk packets/tags (state/vertex/fallback tags), runs submitted,
//              declined by the backend, vertices taken, packets that went
//              through the stream (PATH1 inside a tag)
//   nodraw=    primitives the native path recognised and drew nothing for
//   statediff= matdiff= bulkdiff=  the self-checks (TS_GS_STATE_SELFCHECK,
//              TS_GS_BULK_SELFCHECK; checks/diffs, 0/0 when off)
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/gs_material.h"
#include "xbox_perf.h"

namespace
{
    void gsReportLine(XboxReportLine &line)
    {
        const GS::Stats &s = GS::stats();
        line.add(" serial=%u ds=%u/%u mat=%u/%u/%u rep=%u", s.serialBumps, s.drawStateHits, s.drawStateBuilds,
                 s.materialApplied, s.materialRepeated, s.materialMissing, s.blockRepeats);
#if TS_GS_MATERIAL_TABLE
        const GSMaterialTable &table = gsMaterialTable();
        line.add(" table=%u/%u/%u/%u", table.count(), table.inserts(), table.hits(), table.evictions());
#endif
        line.add(" bulk=%u/%u(%u/%u/%u) runs=%u/%u v=%u fb=%u nodraw=%u", s.bulkPackets, s.bulkTags, s.bulkStateTags,
                 s.bulkVertexTags, s.bulkFallbackTags, s.submitPrimitivesTaken, s.bulkDeclined, s.bulkVertices,
                 s.bulkFallbackPackets, s.primsNoDraw);
        line.add(" statediff=%u/%u matdiff=%u/%u bulkdiff=%u/%u", s.stateChecks, s.stateDiffs, s.materialChecks,
                 s.materialDiffs, s.bulkChecks, s.bulkDiffs);
    }
    [[maybe_unused]] const bool g_gsLineRegistered = xboxRegisterReportLine("[TS:gs]", &gsReportLine);
}
