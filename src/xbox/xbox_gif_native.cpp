#include "xbox_gif_native.h"
#include "xbox_perf.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/ps2_memory.h"

#include <atomic>
#include <cstring>

namespace
{
#if TS_GIF_NATIVE
    struct Counters
    {
        std::atomic<uint32_t> planHits{0}, planBuilds{0}, rejected{0}, cacheBusy{0};
        std::atomic<uint32_t> packets{0}, tags{0}, packedWrites{0};
        std::atomic<uint32_t> queuedFallbacks{0}, workerFallbacks{0}, streamFallbacks{0};
    };
    Counters counters;

    // Four bounded shapes cover recurring glyph/sprite/effect/state packets.
    // Shared across GS instances, so the lease is separate from a GS mutex.
    // The cache owns no guest pointers and makes no heap allocation.
    struct Cache
    {
        struct Entry
        {
            XboxGifNativePlan plan;
            bool valid = false;
        } entries[4]{};
        std::atomic_flag busy = ATOMIC_FLAG_INIT;
        uint32_t replacement = 0;
    };
    Cache cache;
    static_assert(sizeof(XboxGifNativePlan::Operation) == 4u, "compact live-payload operation");
    static_assert(sizeof(Cache) <= 24u * 1024u, "bounded native GIF cache");

    struct Lease
    {
        bool held;
        Lease() : held(!cache.busy.test_and_set(std::memory_order_acquire)) {}
        ~Lease() { if (held) cache.busy.clear(std::memory_order_release); }
    };

    uint64_t read64(const uint8_t *data)
    {
        uint64_t value;
        std::memcpy(&value, data, sizeof(value));
        return value;
    }

    bool sameShape(const XboxGifNativePlan &plan, const uint8_t *data, uint32_t bytes)
    {
        if (plan.bytes != bytes)
            return false;
        for (uint32_t i = 0; i < plan.tagCount; ++i)
        {
            const auto &tag = plan.tags[i];
            // Full tags determine every payload extent and descriptor. The
            // payload is deliberately excluded: animation, positions, colors,
            // A+D destinations and all register values are consumed live.
            if (read64(data + tag.sourceOffset) != tag.lo ||
                read64(data + tag.sourceOffset + 8u) != tag.hi)
                return false;
        }
        return true;
    }

    bool prepare(XboxGifNativePlan &plan, const uint8_t *data, uint32_t bytes)
    {
        plan.bytes = bytes;
        plan.tagCount = plan.operationCount = 0;
        uint32_t at = 0;
        while (at < bytes)
        {
            if (bytes - at < 16u || plan.tagCount == XboxGifNativePlan::kMaxTags)
                return false;
            const uint64_t lo = read64(data + at), hi = read64(data + at + 8u);
            if (((lo >> 58u) & 3u) != 0u)
                return false; // REGLIST, IMAGE and partial streams use the old route.
            const uint32_t nloop = uint32_t(lo) & 0x7FFFu;
            const uint32_t encodedRegs = uint32_t(lo >> 60u) & 15u;
            const uint32_t nreg = encodedRegs ? encodedRegs : 16u;
            const uint32_t writes = nloop * nreg; // at most 32767 * 16
            if (writes > (bytes - at - 16u) / 16u ||
                writes + 1u > XboxGifNativePlan::kMaxOperations - plan.operationCount)
                return false;

            const uint32_t tagIndex = plan.tagCount++;
            plan.tags[tagIndex] = {lo, hi, uint16_t(at), uint16_t(nloop), uint8_t(nreg)};
            plan.operations[plan.operationCount++] = {
                uint16_t(tagIndex), 0u, XboxGifNativePlan::Tag};
            at += 16u;
            for (uint32_t i = 0; i < writes; ++i)
            {
                const uint32_t regIndex = i % nreg;
                const uint8_t descriptor = uint8_t((hi >> (regIndex * 4u)) & 15u);
                plan.operations[plan.operationCount++] = {
                    uint16_t(at), descriptor,
                    uint8_t(i == 0u ? XboxGifNativePlan::FirstPacked : XboxGifNativePlan::Packed)};
                at += 16u;
            }
        }
        return at == bytes && plan.tagCount != 0u;
    }
#endif
}

bool xboxGifWithNativePlan(const uint8_t *data, uint32_t bytes,
                          XboxGifNativeExecutor execute, void *user)
{
#if TS_GIF_NATIVE
    if (!data || !execute || bytes < 16u || bytes > XboxGifNativePlan::kMaxBytes || (bytes & 15u))
    {
        counters.rejected.fetch_add(1u, std::memory_order_relaxed);
        return false;
    }
    Lease lease;
    if (!lease.held)
    {
        counters.cacheBusy.fetch_add(1u, std::memory_order_relaxed);
        return false;
    }
    const XboxGifNativePlan *plan = nullptr;
    for (const auto &entry : cache.entries)
        if (entry.valid && sameShape(entry.plan, data, bytes))
        {
            plan = &entry.plan;
            counters.planHits.fetch_add(1u, std::memory_order_relaxed);
            break;
        }
    if (!plan)
    {
        auto &entry = cache.entries[cache.replacement++ & 3u];
        entry.valid = false;
        if (!prepare(entry.plan, data, bytes))
        {
            counters.rejected.fetch_add(1u, std::memory_order_relaxed);
            return false;
        }
        entry.valid = true;
        plan = &entry.plan;
        counters.planBuilds.fetch_add(1u, std::memory_order_relaxed);
    }

    // No failure is possible from here through execution. A bounded complete
    // plan owns all structural decisions, and every payload qword remains live.
    execute(user, *plan, data);
    counters.packets.fetch_add(1u, std::memory_order_relaxed);
    counters.tags.fetch_add(plan->tagCount, std::memory_order_relaxed);
    counters.packedWrites.fetch_add(plan->operationCount - plan->tagCount, std::memory_order_relaxed);
    return true;
#else
    (void)data; (void)bytes; (void)execute; (void)user;
    return false;
#endif
}

bool xboxGifTryNativePacket(PS2Memory *memory, GS &gs, const uint8_t *data, uint32_t bytes)
{
#if TS_GIF_NATIVE && !TS_PERF_BACKEND
    if (PS2Memory::onVif1Worker())
    {
        counters.workerFallbacks.fetch_add(1u, std::memory_order_relaxed);
        return false;
    }
    // The known native entry runs with the runtime-owned arbiter forwarding
    // to this GS. Without that arbiter, submitGifPacket may instead invoke a
    // caller's capture/custom callback (or no callback); keep that route.
    if (memory && !memory->gifArbiter())
    {
        counters.rejected.fetch_add(1u, std::memory_order_relaxed);
        return false;
    }
    if (memory && !memory->gifArbiter()->empty())
    {
        counters.queuedFallbacks.fetch_add(1u, std::memory_order_relaxed);
        return false;
    }
    return gs.processNativePackedGIFPacket(data, bytes);
#else
    // Backend measurement wraps the arbiter callback for per-path timing
    // and reentrant depth accounting, so retain that callback in this mode.
    (void)memory; (void)gs; (void)data; (void)bytes;
    return false;
#endif
}

void xboxGifNativeStreamFallback()
{
#if TS_GIF_NATIVE
    counters.streamFallbacks.fetch_add(1u, std::memory_order_relaxed);
#endif
}

XboxGifNativeStats xboxGifNativeGetStats()
{
    XboxGifNativeStats out;
#if TS_GIF_NATIVE
#define COPY_COUNTER(name) out.name = counters.name.load(std::memory_order_relaxed)
    COPY_COUNTER(planHits); COPY_COUNTER(planBuilds); COPY_COUNTER(rejected); COPY_COUNTER(cacheBusy);
    COPY_COUNTER(packets); COPY_COUNTER(tags); COPY_COUNTER(packedWrites);
    COPY_COUNTER(queuedFallbacks); COPY_COUNTER(workerFallbacks); COPY_COUNTER(streamFallbacks);
#undef COPY_COUNTER
#endif
    return out;
}
