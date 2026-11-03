#pragma once
// Xbox-only helpers for the generated segmented VIF decoder. These change
// how a validated UNPACK is decoded/copied, never whether its writes occur.
#include <cstdint>
#include <cstring>
#include <xmmintrin.h>

#ifndef TS_VIF_FAST
#define TS_VIF_FAST 1
#endif

#if TS_VIF_FAST
namespace xbox_vif_fast
{
    struct UnpackPlan
    {
        uint16_t writeVectors, sourceVectors, sourceBytes, totalBytes;
        uint8_t cl, wl, format, bytesPerVector;
    };

    // A decoder call owns its cache. It borrows no source/guest pointers and
    // needs neither shared state nor invalidation between games or chains.
    // Only NUM, format and STCYCL affect these sizes; destination, TOPS,
    // masks, mode, IRQ and signed extension remain live in the decoder.
    class UnpackPlans
    {
    public:
        const UnpackPlan &get(uint32_t command, uint32_t cycle)
        {
            const uint32_t code = (command >> 16u) & 0x0FFFu;
            const uint32_t key = ((cycle & 0xFFFFu) << 12u) | code;
            const uint32_t slot = (key ^ (key >> 5u) ^ (key >> 10u) ^ (key >> 17u)) & 31u;
            Entry &entry = entries_[slot];
            const uint32_t bit = uint32_t(1u) << slot;
            if ((valid_ & bit) == 0u || entry.key != key)
            {
                static constexpr uint8_t kVectorBytes[16] = {
                    4, 2, 1, 2, 8, 4, 2, 4, 12, 6, 3, 6, 16, 8, 4, 2};
                UnpackPlan &plan = entry.plan;
                const uint32_t num = code & 0xFFu;
                const uint32_t cl = (cycle & 0xFFu) != 0u ? cycle & 0xFFu : 1u;
                const uint32_t wl = ((cycle >> 8u) & 0xFFu) != 0u ? (cycle >> 8u) & 0xFFu : 1u;
                const uint32_t writes = num != 0u ? num : 256u;
                uint32_t sources = writes;
                if (cl < wl)
                {
                    const uint32_t remainder = writes % wl;
                    sources = (writes / wl) * cl + (remainder < cl ? remainder : cl);
                }
                plan.writeVectors = static_cast<uint16_t>(writes);
                plan.sourceVectors = static_cast<uint16_t>(sources);
                plan.format = static_cast<uint8_t>((code >> 8u) & 0xFu);
                plan.bytesPerVector = kVectorBytes[plan.format];
                plan.cl = static_cast<uint8_t>(cl);
                plan.wl = static_cast<uint8_t>(wl);
                plan.sourceBytes = static_cast<uint16_t>(sources * plan.bytesPerVector);
                plan.totalBytes = static_cast<uint16_t>((plan.sourceBytes + 3u) & ~3u);
                entry.key = key;
                valid_ |= bit;
            }
            return entry.plan;
        }

    private:
        struct Entry
        {
            uint32_t key;
            UnpackPlan plan;
        };
        Entry entries_[32]; // unread until the corresponding valid bit is set
        uint32_t valid_ = 0;
    };
    static_assert(sizeof(UnpackPlans) == 516u, "bounded per-call VIF plan storage");

    template <uint32_t kLanes>
    inline void copyVector(uint8_t *dest, const uint8_t *source)
    {
        if constexpr (kLanes == 1u)
        {
            // S-32 broadcasts its raw bits to every lane.
            _mm_storeu_ps(reinterpret_cast<float *>(dest),
                          _mm_load1_ps(reinterpret_cast<const float *>(source)));
        }
        else if constexpr (kLanes == 4u)
        {
            _mm_storeu_ps(reinterpret_cast<float *>(dest),
                          _mm_loadu_ps(reinterpret_cast<const float *>(source)));
        }
        else
        {
            // V2/V3 retain the destination's unspecified lanes. In
            // particular, a V3 source ends after 12 bytes: no 16-byte read.
            _mm_storel_pi(reinterpret_cast<__m64 *>(dest),
                         _mm_loadl_pi(_mm_undefined_ps(), reinterpret_cast<const __m64 *>(source)));
            if constexpr (kLanes == 3u)
                std::memcpy(dest + 8u, source + 8u, 4u);
        }
    }

    template <uint32_t kLanes>
    inline void copyRows(uint8_t *dest, const uint8_t *source, uint32_t count)
    {
        constexpr uint32_t kBytes = kLanes * 4u;
        constexpr uint32_t kAhead = 128u / kBytes;
        // One bounded prefetch per four vectors instead of one per vector.
        // Each load stays within this run; the final short run reads exactly
        // its payload. Writes remain in source order, including VU wrap.
        while (count >= 4u)
        {
            if (count > kAhead)
                _mm_prefetch(reinterpret_cast<const char *>(source + 128u), _MM_HINT_T0);
            copyVector<kLanes>(dest, source);
            copyVector<kLanes>(dest + 16u, source + kBytes);
            copyVector<kLanes>(dest + 32u, source + kBytes * 2u);
            copyVector<kLanes>(dest + 48u, source + kBytes * 3u);
            dest += 64u;
            source += kBytes * 4u;
            count -= 4u;
        }
        while (count != 0u)
        {
            copyVector<kLanes>(dest, source);
            dest += 16u;
            source += kBytes;
            --count;
        }
    }

    template <uint32_t kLanes>
    inline void unpackRows(uint8_t *vu, const uint8_t *source, uint32_t dest, uint32_t count)
    {
        // NUM admits at most 256 vectors, so a run crosses VU's 1024-row
        // boundary at most once. No address mask is needed per vector.
        const uint32_t toEnd = 1024u - dest;
        const uint32_t first = count < toEnd ? count : toEnd;
        copyRows<kLanes>(vu + dest * 16u, source, first);
        if (first != count)
            copyRows<kLanes>(vu, source + first * (kLanes * 4u), count - first);
    }

    // Caller has already admitted an unmasked mode-0, CL==WL UNPACK whose
    // source payload lies in one piece. False has no memory side effects.
    inline bool unpackContiguous32(uint8_t *vu, const uint8_t *source,
                                   uint32_t dest, uint32_t count, uint32_t format)
    {
        if (!vu || !source || dest >= 1024u || count == 0u || count > 256u)
            return false;
        switch (format)
        {
        case 0x0u: unpackRows<1u>(vu, source, dest, count); return true;
        case 0x4u: unpackRows<2u>(vu, source, dest, count); return true;
        case 0x8u: unpackRows<3u>(vu, source, dest, count); return true;
        case 0xCu: unpackRows<4u>(vu, source, dest, count); return true;
        default: return false;
        }
    }
}
#endif
