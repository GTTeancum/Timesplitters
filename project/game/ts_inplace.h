// In-place fetch glue (src/xbox/PUSH-BC-PLAN.md section 3.3, M8; owned by
// C-XF): whether a strip of a direct batch (R2, ts_record_direct.h) can be
// drawn by the NV2A straight from the game's arrays, the strip for the
// backend (GSXfInPlaceStrip, runtime/gs/gs_xf_inplace.h), the writer hooks
// that keep the GPU's view coherent, and the fetch-emulation self-check.
//
// Eligibility of a strip, per attribute its program reads (the strip's
// rows all in one array of the batch):
//   position, normal  UNPACK V3-32 (stride 12) or V4-32 (stride 16)
//   colour            UNPACK V4-8 (stride 4; R G B A, the NV2A's UB_OGL)
//   s, t, q           V3-32 or V4-32, and no q of +-0 in the strip (the
//                     ring's decode makes those 1; the program cannot)
//   bone              S-16 / V2-16 / V3-16 / V4-16, every index 0..2
// and every array's span physically contiguous (xbox_guest_ram.h: P1, or
// P0's page walk). Anything else: the ring path writes the strip as before.
//
// Coherency (section 3.3 item 4): the game's array writers are hooked
// (ts_game_hooks.h: vtxlistcolour, obInstLight, obPrecalcDbufGfxData,
// partPrecalcDmaData). Before one runs, in-place draws the GPU may not have
// fetched yet are waited for (the backend's writer barrier); after it, the
// stamp moves (the next in-place strip breaks the vertex cache) and, unless
// the console showed the GPU snooping the CPU cache (probe T2a), a WBINVD
// precedes the next in-place draw (Case C).
//
// Switches:
//   TS_NATIVE_INPLACE (src/xbox/xbox_perf.h) 1: strips are prepared and the
//       backend takes them (modes 5-8). 0 (default; gated on the console
//       probe, plan section 8): nothing is in place.
//   TS_INPLACE_SNOOP 1: the GPU sees dirty CPU lines (T2a PASS): no WBINVD.
//       0 (default): Case C.
//   TS_INPLACE_SELFCHECK 1: every TS_INPLACE_SELFCHECK_EVERY-th prepared
//       strip is also fetched on the CPU the way the NV2A will
//       (tsInplaceFetch) and compared with the ring's decode; idiff in
//       [TS:inplace].
#pragma once
#include "runtime/gs/gs_xf_inplace.h"

#include <cstdint>

class PS2Runtime;
struct GSXfVertex;

#ifndef TS_INPLACE_SNOOP
#define TS_INPLACE_SNOOP 0
#endif
#ifndef TS_INPLACE_SELFCHECK
#define TS_INPLACE_SELFCHECK 0
#endif
#ifndef TS_INPLACE_SELFCHECK_EVERY
#define TS_INPLACE_SELFCHECK_EVERY 16
#endif

// Where one attribute of a strip comes from: the guest element of the
// strip's first vertex (host view), the UNPACK format (opcode's low four
// bits) and how many elements the array has from there on.
struct TsInplaceSource
{
    const uint8_t *host = nullptr; // null: no single array holds the strip's rows
    uint8_t format = 0;
    uint32_t elements = 0;
};

// The attribute roles, in TsInplaceSource order.
enum TsInplaceRole : uint32_t
{
    kTsInplacePosition = 0,
    kTsInplaceNormal,
    kTsInplaceColour,
    kTsInplaceTexture,
    kTsInplaceBone,
    kTsInplaceRoles
};

struct TsInplaceStats
{
    uint32_t prepared = 0, refused = 0; // strips
    uint32_t refusedFormat = 0, refusedQ = 0, refusedBone = 0, refusedSpan = 0;
    uint32_t writers = 0, stamp = 0;
    uint32_t checked = 0, diffs = 0; // TS_INPLACE_SELFCHECK (idiff)
};
extern TsInplaceStats g_tsInplaceStats;

// The strip of n vertices of layout kind (ts_native_xf::Kind) from its
// sources: true and `out` filled when it may be drawn in place.
bool tsInplacePrepareStrip(uint32_t kind, uint32_t n, const TsInplaceSource (&src)[kTsInplaceRoles], GSXfInPlaceStrip &out);
// Vertex v of a prepared strip as the in-place program receives it,
// emulated on the CPU, in the ring's record form (the self-check and the
// host fetch test compare it with the ring's decode).
void tsInplaceFetch(const GSXfInPlaceStrip &strip, uint32_t kind, uint32_t v, GSXfVertex &out);
// The arrays' generation (GSXfInPlaceStrip::stamp).
uint32_t tsInplaceStamp();
// Registers the writer hooks (ts_game_hooks.h) and the [TS:inplace] line.
void tsInplaceInstall(PS2Runtime &runtime);
