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
// Anything the replay would not reproduce exactly (a constant entry,
// DIRECT/MPG/MSCNT, a CPU-path strip, a VU write the native draws did not
// make, a non-native MSCAL) keeps the chain on the original path. Stored
// chains are re-hashed against guest memory on a rotation and recaptured
// when they change.
#include <cstdint>

#ifndef TS_NATIVE_MODELS
#define TS_NATIVE_MODELS 0
#endif

class PS2Memory;
class GS;
struct VIFRegisters;

// --- DMA walker (ps2_memory.cpp copy) ----------------------------------
enum XboxModelWalk : int
{
    XboxModelWalkNormal = 0,  // walk the CALL as usual
    XboxModelWalkCapture = 1, // walk it, after the BEGIN marker in `marker`
    XboxModelWalkReplay = 2,  // skip it: append `marker` instead
};
// A zero-QWC CALL to `target` (VIF1 chain, no tag transfer), at call depth
// `asp` (before the push).
XboxModelWalk xboxModelWalkCall(const uint8_t *rdram, uint32_t target, uint32_t asp,
                                const uint8_t *&marker);
// Every piece the walker appends (for the capture's source hash).
void xboxModelWalkPiece(const uint8_t *data, uint32_t bytes);
// Every tag read (the chain's structure is part of the hash).
void xboxModelWalkTag(const uint8_t *tag);
// After a RET tag's payload: the END marker when it closed the capture.
const uint8_t *xboxModelWalkAfterRet(uint32_t aspAfter);
// A chain walk ends (an open capture there is abandoned).
void xboxModelWalkChainEnd();

// --- VIF decoder (ps2_vif1_interpreter.cpp copy) -----------------------
constexpr uint32_t kXboxModelMarkerOpcode = 0x7Eu; // no VIFcode uses it
constexpr uint32_t kXboxModelMagic = 0x4D4E5354u;  // 'TSNM'
enum XboxModelMarker : uint32_t { XboxModelBegin = 1, XboxModelEnd = 2, XboxModelReplay = 3 };
// The marker's last three words (`words[0]` is the VIFcode already read).
void xboxModelDecodeMarker(const uint32_t words[4], uint8_t *vuData, VIFRegisters &regs,
                           PS2Memory *memory, GS *gs, bool onWorker);
// MSCAL/MSCALF/MSCNT inside a capture (before the program runs).
void xboxModelCaptureMscal(uint32_t startPC, bool mscnt);
// The MSCAL's program did not run natively (interpreter or callback).
void xboxModelCaptureFail(uint32_t reason);
// DIRECT/DIRECTHL/MPG or anything else the replay does not reproduce.
inline void xboxModelCaptureUnsupported() { xboxModelCaptureFail(4u); }
bool xboxModelCapturing();

// --- native VU1 program (vu1_native_ts.cpp copy) -----------------------
// One native draw inside a capture: its layout, the VU data, its state
// block and its strip headers (`strips`: count records of `strideWords`
// words, tag[4] then n and vi).
void xboxModelCaptureDraw(uint32_t kind, const uint8_t *data, const uint8_t *stateBlock,
                          uint32_t stateBytes, bool material, const uint32_t *strips,
                          uint32_t strideWords, uint32_t count);

// Implemented in the patched vu1_native_ts.cpp copy (its file-local caches).
struct GSXfConstants;
const void *xboxNativeMaterialFor(const uint8_t *block, uint32_t size);
GSXfConstants &xboxNativeTransformConstants(const uint8_t *data);
bool xboxNativeApplyMaterial(const void *material, GS &gs);
void xboxNativeSubmitState(const uint8_t *block, uint32_t bytes, PS2Memory *memory, GS &gs);
void xboxNativeDrainArbiter(PS2Memory *memory);

// --- status ------------------------------------------------------------
struct XboxModelStats
{
    uint32_t models = 0, ready = 0, failed = 0;
    uint64_t captures = 0, captured = 0, failures[8] = {};
    uint64_t replays = 0, replayDraws = 0, replayRuns = 0, replayVertices = 0;
    uint64_t replayDeclined = 0, replayMissing = 0, stale = 0, flushes = 0, verifies = 0;
    uint32_t vertexBytes = 0, vertexCapacity = 0;
};
void xboxModelGetStats(XboxModelStats &out);
