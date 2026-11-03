#pragma once
// Xbox-only plans for complete native PACKED GIF packets. Plans contain
// register descriptors and offsets, never cached vertex or register values.
#include <cstdint>

#ifndef TS_GIF_NATIVE
#define TS_GIF_NATIVE 1
#endif

class GS;
class PS2Memory;

struct XboxGifNativePlan
{
    static constexpr uint32_t kMaxBytes = 16u * 1024u;
    static constexpr uint32_t kMaxTags = 32u;
    static constexpr uint32_t kMaxOperations = kMaxBytes / 16u;

    enum Kind : uint8_t { Tag, Packed, FirstPacked };
    struct Operation
    {
        // Tag: index in tags[]. Packed: byte offset of the live qword.
        uint16_t offset;
        uint8_t reg, kind;
    };
    struct TagInfo
    {
        uint64_t lo, hi; // exact structural identity, including PRE/PRIM
        uint16_t sourceOffset, nloop;
        uint8_t nreg;
    };
    uint32_t bytes;
    uint16_t tagCount, operationCount;
    TagInfo tags[kMaxTags];
    Operation operations[kMaxOperations];
};

// The callback is invoked exactly once only after the complete packet is
// admitted. It must finish synchronously, cannot retain the plan or packet,
// and cannot request fallback after emitting any effects. The cache lease
// stays held through the callback; reentrant/other-owner requests decline
// without writing GS state. False always means the caller may use its old
// packet route without duplicating any effect.
using XboxGifNativeExecutor = void (*)(void *, const XboxGifNativePlan &, const uint8_t *);
bool xboxGifWithNativePlan(const uint8_t *data, uint32_t bytes,
                          XboxGifNativeExecutor execute, void *user);

// Called only by the known TS native XGKICK entry with its runtime-owned
// arbiter. Queued GIF paths, callback-only memory, the VIF worker, and backend
// timing instrumentation keep their original route; null memory retains the
// original direct-GS behavior.
// The GS entry additionally requires idle streams before applying a plan.
bool xboxGifTryNativePacket(PS2Memory *memory, GS &gs, const uint8_t *data, uint32_t bytes);
void xboxGifNativeStreamFallback();

struct XboxGifNativeStats
{
    uint32_t planHits = 0, planBuilds = 0, rejected = 0, cacheBusy = 0;
    uint32_t packets = 0, tags = 0, packedWrites = 0;
    uint32_t queuedFallbacks = 0, workerFallbacks = 0, streamFallbacks = 0;
};
XboxGifNativeStats xboxGifNativeGetStats();
