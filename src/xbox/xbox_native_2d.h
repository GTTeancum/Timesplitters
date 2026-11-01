#pragma once
// Native 2D display-list emitters (make TS_NATIVE_2D=1, Xbox only).
//
// The game's screen-space builders - dlTextureRectangle(+Float) (every HUD
// and text glyph: textPrint draws one per character), dlFillRectangle(+Float),
// dlSetZB, dlSetDitherMatrix and dlSetClip - each take a block of the frame's
// packet memory (memdbAlloc), write a VIF packet into it (an UNPACK of a GIF
// packet into VU1 memory, MSCAL 0x3FE0: the kick program XGKICKs it, FLUSH)
// and append REF tags to the display list (gp-0x6C60) for it and for the
// static blocks around it (the depth-mode, dither, rectangle header and
// trailer blocks at 0x380670-0x380910). The list is then walked, the VIF
// stream decoded, the GIF packets kicked one by one into the GS front end.
//
// Here the builders write no packets. Each call records an item (its
// static REF, or the few words its packet would carry) in a host ring, and
// the display list gets one QWC-0 REF token per batch of consecutive items
// whose ADDR is kXboxNative2dTag | sequence (the partGfx prologue tokens
// use 0x7E000000; xbox_part_prologue.cpp). Consecutive calls with nothing
// else appended in between (a string's glyphs and depth-mode switches)
// share one token. The memdb blocks are still taken (the arena advances as
// before; only its contents are not written), the registers, stack and
// scheduler charges are the originals' (memdbAlloc and the inner dlSetZB are
// called through the function table, as the originals call them).
//
// The token's way to the screen, in its list position:
//  - walker (ps2_memory.cpp copy, tools/patch_native_2d.py memory): the
//    token appends its batch's 16-byte marker piece (kXboxNative2dOpcode);
//  - decoder (ps2_vif1_interpreter.cpp copy, vif): the marker rebuilds the
//    VIF bytes the original REFs would have sent (the static blocks read
//    from guest memory then, as the walker's pieces point at them) and
//    checks them: only NOP/FLUSH, unmasked V4-32 UNPACKs to TOPS+0 each
//    followed by MSCAL 0x3FE0 kicking complete PACKED packets within the
//    rows it wrote, rows that neither wrap nor touch the program's constant
//    rows (0-122) or the native program's watched rows, STCYCL 1:1 and
//    STMOD 0, the native VU1 program active, an empty GIF arbiter, not the
//    VIF1 worker. Then the decoder does each MSCAL's register steps (TOP,
//    ITOP, TOPS, DBF; the VU1 state the native kick leaves) and sends one
//    16-byte token packet on PATH1 for all of the kicks. Anything else
//    decodes the rebuilt bytes as the original stream (a nested decode),
//    so the result is the original's in every case;
//  - GS front end (gs_frontend.cpp copy, gs): the token packet's kicks go
//    through the direct GIF decoder (xbox_gif_direct.h) on PATH1's stream
//    as one piece, with the registers whose GS write only stores a value
//    (ZBUF, SCISSOR, TEST, ALPHA, FBA, PABE, DIMX, DTHE, COLCLAMP, SCANMSK)
//    applied without ending the open run: a run ends at a draw only if the
//    draw state did change. A string of glyphs between depth-mode switches
//    is one run for the renderer instead of one per glyph.
//
// What the rest of the frame reads is left as the original leaves it: the
// GS registers, vertex queue, Q, draw counters and display-copy source (the
// direct decoder's own guarantees, the deferred stores the same values),
// the VIF registers (TOP, ITOP, TOPS, DBF; CODE/NUM from the marker's NOPs,
// as the original's last NOPs), the VU1 state of the native kick. Not left:
// the VU1 data rows the UNPACKs would write. Only the kick program reads
// them, in the same packet; the rows checked above are the only ones any
// other program reads without writing them first (constants, the watched
// rows), and a batch whose rows touch them takes the nested decode.
//
// Lists the game keeps (dlPushDmaTag active: precalculated chains) get no
// tokens: the builders run as originals there. A token whose batch is gone
// (the ring came round) expands to nothing and is counted ("lost").
#include <cstdint>
#include <utility>

#ifndef TS_NATIVE_2D
#define TS_NATIVE_2D 0
#endif

class PS2Runtime;

// --- display list ------------------------------------------------------
constexpr uint32_t kXboxNative2dTag = 0x7D000000u;
constexpr uint32_t kXboxNative2dIndexMask = 0x00FFFFFFu;

// The builders' natives replace the generated functions (after loadELF).
void xboxNative2dInstall(PS2Runtime &runtime);

// --- DMA walker ----------------------------------------------------------
// A QWC-0 REF whose ADDR is in the tag range: its batch's 16-byte marker
// piece, or null (not a token of this range, or its batch is gone).
inline bool xboxNative2dIsTag(uint32_t addr) { return (addr & ~kXboxNative2dIndexMask) == kXboxNative2dTag; }
const uint8_t *xboxNative2dWalk(uint32_t addr);

// --- VIF decoder ---------------------------------------------------------
// The marker's VIFcode (no VIFcode has this opcode; its NUM and IMMEDIATE
// carry the sequence). The marker's other three words are NOPs.
constexpr uint32_t kXboxNative2dOpcode = 0x2Du;
// The VIF bytes the batch stands for (valid until the next call): false if
// the batch is gone.
bool xboxNative2dMaterialize(uint32_t sequence, const uint8_t *&bytes, uint32_t &size);
// The VIF1 state the batch's MSCALs step (in: as before it; out: after).
struct XboxNative2dVifState
{
    uint32_t base, ofst, tops, itops, top, itop;
    bool dbf;
    uint32_t mscals; // out: the MSCALs (kicks) planned
};
// The fast route's checks over the rebuilt bytes (see above). True: `state`
// is the VIF1 state after the batch's MSCALs and the kicks wait for the
// token packet (xboxNative2dTokenPacket). cycle, mode: VIF1 STCYCL, STMOD.
bool xboxNative2dPlan(const uint8_t *bytes, uint32_t size, uint32_t cycle, uint32_t mode, XboxNative2dVifState &state);
// The 16-byte PATH1 packet that hands the planned kicks to the GS.
const uint8_t *xboxNative2dTokenPacket();

// --- GS front end --------------------------------------------------------
// A 16-byte PATH1 packet that is the token packet (a PACKED tag with NLOOP 0
// and the magic REGS: a GS without the hook writes nothing for it).
bool xboxNative2dIsTokenPacket(const uint8_t *data);
// The planned kicks of that token: `count` packets one after another in
// `bytes`, packet k ending at ends[k]. False: a stale token packet.
bool xboxNative2dTakeKicks(const uint8_t *token, const uint8_t *&bytes, const uint32_t *&ends, uint32_t &count);

// --- status --------------------------------------------------------------
struct XboxNative2dStats
{
    uint64_t items = 0, tokens = 0, walked = 0, lost = 0;
    uint64_t fast = 0, nested = 0, kicks = 0;           // decoder routes; kicks the fast route sent
    uint64_t declined[6] = {};                           // why nested: parse, rows, program, arbiter, gs, other
    uint64_t pushed = 0;                                 // calls that ran as originals (a kept list)
    uint64_t gsFallback = 0;                             // token packets the direct decoder declined
};
void xboxNative2dGetStats(XboxNative2dStats &out);
enum XboxNative2dDecline : uint32_t
{
    XboxNative2dDeclineParse = 0, // a command or packet outside the fast route
    XboxNative2dDeclineRows,      // rows wrap, or reach constant or watched rows
    XboxNative2dDeclineProgram,   // no native VU1 program, or on the VIF1 worker
    XboxNative2dDeclineArbiter,   // GIF packets queued (the kicks would interleave)
    XboxNative2dDeclineCycle,     // STCYCL not 1:1, or STMOD not 0
    XboxNative2dDeclineOther,
};
void xboxNative2dCountDecline(uint32_t reason);
void xboxNative2dCountGsFallback();
