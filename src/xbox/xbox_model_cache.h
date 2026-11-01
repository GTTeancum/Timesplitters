#pragma once
// Native model cache (make TS_NATIVE_MODELS=1, Xbox only).
//
// The game draws every model (level rooms, props, weapons, characters)
// through partGfx, which puts a CALL to the model's precalculated VIF chain
// in the display list. The original path then walks that chain, decodes
// its UNPACKs into VU1 memory and runs the native VU1 program, which
// decodes the arrays into the renderer's 44-byte vertex records every
// frame. Those records do not depend on the camera (the NV2A's vertex
// program transforms them), so the cache keeps them:
//
//  - capture: the first walk of a chain marks its start and end in the
//    VIF piece stream (16-byte marker pieces). In between, the original
//    path runs unchanged and each native draw's strips, runs and state
//    block are recorded in Xbox form;
//  - replay: later walks skip the chain and leave one REPLAY marker. The
//    decoder then hands the stored records to the renderer with the live
//    constants (matrices, lights) and the stored state blocks, in the
//    chain's original stream position, and leaves the VIF registers as the
//    chain would have.
//
// What else the chain does is recorded as replay steps, in stream order:
// MSCALs of the constant and kick entries, MSCALs the program declined or
// the interpreter ran, MSCNT, and draws with CPU-path strips (the VU rows
// the chain wrote that the program reads, restored where the chain would
// write them, and the MSCAL run as the decoder runs it); UNPACKs into the
// transform constants' rows; DIRECT/DIRECTHL packets; MPG (checked
// unchanged at replay); BASE/OFFSET/ITOP; MSKPATH3; and the rows the chain
// leaves that no program of its own read. A replay whose live state differs
// from the capture's in a way the steps do not cover (VU1 code, UNPACK
// registers the chain relies on, a buffer that would wrap) decodes the chain
// from guest memory instead, as do replays the decoder cannot make (no
// native program, the VIF1 worker, a model evicted meanwhile). Stored chains
// are re-hashed against guest memory on a rotation and recaptured when they
// change; a full store evicts the models replayed least recently.
#include <cstdint>

#ifndef TS_NATIVE_MODELS
#define TS_NATIVE_MODELS 0
#endif
#ifndef TS_MODEL_FILES
#define TS_MODEL_FILES 0 // save and load captured models (needs TS_NATIVE_MODELS)
#endif
// make TS_NATIVE_REPLAY=1 (needs TS_NATIVE_MODELS): a stored model's replay
// with its per-run work done once. partGfx's model prologues run natively at
// their stream position (xboxPrologueNative / xboxPrologueDecode: the
// headers' STCYCL and UNPACKs written straight into VU1 memory, their MSCALs
// run as the decoder runs them); a replayed draw applies its state block
// decoded once per stored block; each replayed run names its renderer
// segment (xboxNv2aUseSegment), which keeps the run's texture, material key
// and draw commands while the inputs they came from are unchanged.
#ifndef TS_NATIVE_REPLAY
#define TS_NATIVE_REPLAY 0
#endif

class PS2Memory;
class GS;
struct VIFRegisters;

// --- DMA walker (ps2_memory.cpp copy) ----------------------------------
enum XboxModelWalk : int
{
    XboxModelWalkNormal = 0,    // walk the CALL as usual
    XboxModelWalkCapture = 1,   // walk it, after the BEGIN marker in `marker`
    XboxModelWalkReplay = 2,    // skip it: append `marker` instead
    XboxModelWalkReplayEnd = 3, // the same, and the chain ends there (xboxModelWalkReplayEnd)
};
// A zero-QWC CALL to `target` (VIF1 chain, no tag transfer) from the tag at
// `callTag`, at call depth `asp` (before the push); `tie`: CHCR.TIE.
XboxModelWalk xboxModelWalkCall(const uint8_t *rdram, uint32_t target, uint32_t callTag, uint32_t asp, bool tie,
                                const uint8_t *&marker);
// After XboxModelWalkReplayEnd: the walker's state where the chain ended
// inside the CALL (an END tag, or an IRQ tag with TIE), as the walk left it.
void xboxModelWalkReplayEnd(uint32_t &tagAddr, uint32_t &asp, uint32_t &asr0, uint32_t &asr1,
                            uint32_t &lastTagUpper);
// Every piece the walker appends (for the capture's source hash).
void xboxModelWalkPiece(const uint8_t *data, uint32_t bytes);
// Every tag read (the chain's structure is part of the hash).
void xboxModelWalkTag(const uint8_t *tag);
// After a RET tag's payload: the END marker when it closed the capture.
const uint8_t *xboxModelWalkAfterRet(uint32_t aspAfter);
// A chain walk ends with its state: the END marker when it ended inside a
// captured CALL (by an END tag, or an IRQ tag with TIE), else null.
const uint8_t *xboxModelWalkChainEnd(uint32_t tagAddr, uint32_t asp, uint32_t asr0, uint32_t asr1,
                                     uint32_t lastTagUpper);

// --- VIF decoder (ps2_vif1_interpreter.cpp copy) -----------------------
constexpr uint32_t kXboxModelMarkerOpcode = 0x7Eu; // no VIFcode uses it
constexpr uint32_t kXboxModelMagic = 0x4D4E5354u;  // 'TSNM'
// XboxModelPrologue (TS_NATIVE_REPLAY): a partGfx prologue token run
// natively (xboxPrologueDecode; words[1] its record's sequence).
enum XboxModelMarker : uint32_t { XboxModelBegin = 1, XboxModelEnd = 2, XboxModelReplay = 3, XboxModelPrologue = 4 };
// The decoder's own steps for the replay (built in the decoder copy, which
// can reach PS2Memory's MSCAL state): an MSCAL or MSCNT run as the decoder
// runs it (after its register steps), what a native run leaves in the VU1
// state, and MSKPATH3.
struct XboxModelVif
{
    void (*mscal)(PS2Memory *memory, uint32_t pc, uint32_t top, uint32_t itop, bool mscnt);
    void (*afterNative)(PS2Memory *memory, uint32_t top, uint32_t itop);
    void (*mskPath3)(PS2Memory *memory, uint32_t imm);
};
// The marker's last three words (`words[0]` is the VIFcode already read).
void xboxModelDecodeMarker(const uint32_t words[4], uint8_t *vuData, VIFRegisters &regs, PS2Memory *memory,
                           GS *gs, bool onWorker, const XboxModelVif &vif);
// Inside a capture (xboxModelCapturing()):
// MSCAL/MSCALF/MSCNT, after its register steps and before the program runs.
void xboxModelCaptureMscal(uint32_t startPC, bool mscnt, const VIFRegisters &regs, const uint8_t *vuData);
// The MSCAL's program did not run natively: the interpreter or the callback
// runs it next (VU memory as it was at the MSCAL).
void xboxModelCaptureInterpreted();
// An UNPACK of `writes` vectors to VU1 row `vuAddr` (TOPS added), before it
// writes.
void xboxModelCaptureUnpack(uint32_t vuAddr, uint32_t writes, uint32_t cl, uint32_t wl, uint32_t opcode,
                            uint32_t imm, const VIFRegisters &regs);
// A PATH2 packet of a DIRECT/DIRECTHL (or its IMAGE data), before it goes.
void xboxModelCaptureGif(const uint8_t *data, uint32_t bytes, bool directHl);
// An MPG's code, after it was copied to VU1 code memory.
void xboxModelCaptureMpg(uint32_t dest, const uint8_t *code, uint32_t bytes);
// STCYCL, OFFSET, BASE, ITOP, STMOD, MARK, STMASK, STROW, STCOL after they
// took effect, MSKPATH3 before (`opcode`: the VIFcode's; kXboxModelIBit: a
// command with the I bit set STAT.INT).
constexpr uint32_t kXboxModelIBit = 0xFFu;
void xboxModelCaptureCommand(uint32_t opcode, uint32_t imm, const VIFRegisters &regs);
// Something the replay cannot reproduce (`reason`: the failure counter).
void xboxModelCaptureFail(uint32_t reason);
extern bool g_xboxModelCaptureOpen;
inline bool xboxModelCapturing() { return g_xboxModelCaptureOpen; }

// --- native VU1 program (vu1_native_ts.cpp copy) -----------------------
// One native draw inside a capture: its layout, the VU data and the batch's
// TOP, its state block and its strip headers (`strips`: count records of
// `strideWords` words, tag[4] then n and vi).
void xboxModelCaptureDraw(uint32_t kind, const uint8_t *data, uint32_t top, const uint8_t *stateBlock,
                          uint32_t stateBytes, bool material, const uint32_t *strips, uint32_t strideWords,
                          uint32_t count);
// A strip of the draw being captured takes the CPU path.
void xboxModelCaptureCpuStrip();

// Implemented in the patched vu1_native_ts.cpp copy (its file-local caches).
struct GSXfConstants;
const void *xboxNativeMaterialFor(const uint8_t *block, uint32_t size);
GSXfConstants &xboxNativeTransformConstants(const uint8_t *data);
bool xboxNativeApplyMaterial(const void *material, GS &gs);
void xboxNativeSubmitState(const uint8_t *block, uint32_t bytes, PS2Memory *memory, GS &gs);
void xboxNativeDrainArbiter(PS2Memory *memory);
// The VU1 rows a constant or kick entry at `pc` reads and writes for a batch
// at `top` ([first, first + count) each, before the wrap at 1024): false for
// a draw entry or one the program does not have. `kicks`: it sends a packet.
bool xboxNativeEntryRows(uint32_t pc, const uint8_t *data, uint32_t top, uint32_t reads[2][2],
                         uint32_t &readCount, uint32_t writes[2][2], uint32_t &writeCount, bool &kicks);

// --- partGfx list tokens (xbox_part_prologue.cpp) ----------------------
// A QWC-0 REF whose ADDR is kXboxPrologueTag | sequence stands for a run of
// REFs partGfx would have written there: a model's header, matrix and light
// REFs, or a REF route's batches.
constexpr uint32_t kXboxPrologueTag = 0x7E000000u;
constexpr uint32_t kXboxPrologueIndexMask = 0x00FFFFFFu;
struct XboxPrologueRef
{
    uint32_t addr, qwc; // a REF tag's ADDR and QWC fields
};
// partGfx (ts_native_game2.cpp copy): a record opens, takes the REFs in list
// order and closes into the token's ADDR field (0: it took none, so no
// token). One record is open at a time.
void xboxPrologueOpen();
void xboxPrologueRef(uint32_t addr, uint32_t qwc);
uint32_t xboxPrologueClose();
// The open record is long: partGfx closes it at the batch's end and opens
// another after its token.
bool xboxPrologueFull();
// The first prologue's record in one call (lights 0: none).
uint32_t xboxPrologueRecord(uint32_t matrix, uint32_t lightA, uint32_t lightB);
// The walker: the REFs the token stands for, in order, `count` of them
// (nullptr: not a token, or its record is gone).
const XboxPrologueRef *xboxPrologueExpand(uint32_t addr, uint32_t &count);
// TS_NATIVE_REPLAY, the walker (VIF1 piece list): a 16-byte marker piece to
// append in place of the token's payloads when its record is a model
// prologue (only the static headers, each UNPACK header followed by its four
// data qwords in main RAM), else null (expand it as usual).
const uint8_t *xboxPrologueNative(uint32_t addr);
// The decoder, at the marker (xboxModelDecodeMarker): the prologue's
// commands as the decoder would run them from the payloads, with VU1
// memory, the VIF1 registers and the MSCALs' effects the same. Headers that
// no longer hold the static commands, MODE other than 0 or an open capture
// decode the payloads from guest memory instead.
void xboxPrologueDecode(const uint32_t words[4], uint8_t *vuData, VIFRegisters &regs, PS2Memory *memory,
                        const XboxModelVif &vif);
struct XboxPrologueStats
{
    uint64_t tokens = 0, refs = 0, expanded = 0, lost = 0;
    uint64_t native = 0, nativeDecoded = 0, nativeInline = 0, nativeLost = 0; // TS_NATIVE_REPLAY
};
void xboxPrologueGetStats(XboxPrologueStats &out);

// --- status ------------------------------------------------------------
struct XboxModelStats
{
    uint32_t models = 0, ready = 0, failed = 0;
    uint64_t captures = 0, captured = 0, failures[8] = {};
    uint64_t replays = 0, replayDraws = 0, replayRuns = 0, replayVertices = 0;
    uint64_t replayDeclined = 0, replayMissing = 0, stale = 0, flushes = 0, verifies = 0;
    uint64_t replaySteps = 0, inlined = 0, evicted = 0; // inlined: replays decoded from guest memory
    uint32_t compactions = 0;
    uint32_t fileLoads = 0, fileSaves = 0, fileFailures = 0; // TS_MODEL_FILES
    uint32_t vertexBytes = 0, vertexCapacity = 0;
};
void xboxModelGetStats(XboxModelStats &out);
