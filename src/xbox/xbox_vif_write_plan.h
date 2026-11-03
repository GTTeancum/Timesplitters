#pragma once
// Last-write proof for one already admitted, read-free VIF prefix. This
// never suppresses register effects or observers and never spans MSCAL.
#include <cstdint>

namespace xbox_vif_write_plan
{
    inline constexpr uint32_t kRows = 1024u, kMaxOperations = 64u;

    struct Result
    {
        // The conservative result keeps every upload, including on invalid
        // metadata. Bits correspond to operation indexes, not source rows.
        uint64_t keep = ~uint64_t(0);
        uint32_t omittedUploads = 0, omittedVectors = 0, omittedStoreBytes = 0;
    };

    inline uint32_t writtenLanes(uint32_t format)
    {
        const uint32_t lanes = (format >> 2u) + 1u;
        return lanes == 1u ? 4u : lanes; // S broadcasts to all four lanes.
    }

    // Operation has the fields of xbox_vif_record.cpp's admitted operation.
    // Command words, initial cycle/mode and source spans are still validated
    // by that caller. Recheck the read-free subset here: extending its
    // parser with a new command cannot silently extend this proof.
    template <typename Operation>
    Result analyze(const Operation *operations, uint32_t count,
                   uint32_t base, uint32_t tops, uint32_t cycle, uint32_t mode)
    {
        if (!operations || !count || count > kMaxOperations) return {};
        uint16_t destinations[kMaxOperations];
        base &= 1023u;
        tops &= 1023u;
        mode &= 3u;
        for (uint32_t i = 0; i < count; ++i)
        {
            const Operation &op = operations[i];
            const uint32_t opcode = (op.code >> 24u) & 0x7Fu;
            const uint32_t imm = op.code & 0xFFFFu;
            if (op.opcode != opcode) return {};
            if (op.vectors)
            {
                const uint32_t num = (op.code >> 16u) & 0xFFu;
                uint32_t cl = cycle & 0xFFu, wl = (cycle >> 8u) & 0xFFu;
                if (!cl) cl = 1u;
                if (!wl) wl = 1u;
                if ((opcode & 0x60u) != 0x60u || (opcode & 0x10u) || mode ||
                    op.format != (opcode & 15u) ||
                    ((op.format & 3u) == 3u && op.format != 15u) ||
                    op.vectors != (num ? num : 256u) ||
                    cl < wl || op.cl != cl || op.wl != wl)
                    return {};
                uint32_t row = imm & 1023u;
                if (imm & 0x8000u) row = (row + tops) & 1023u;
                destinations[i] = uint16_t(row);
            }
            else
            {
                // These controls read no VU rows and invoke no native/GS
                // callback in the original segmented decoder. All their
                // effects still run in the forward executor.
                switch (opcode)
                {
                case 0x00u: case 0x04u: case 0x07u:
                case 0x10u: case 0x11u: case 0x13u:
                case 0x20u: case 0x30u: case 0x31u: break;
                case 0x01u: cycle = imm; break;
                case 0x02u: tops = base; break; // OFFSET also clears DBF in execute.
                case 0x03u: base = imm & 1023u; break;
                case 0x05u: mode = imm & 3u; break;
                default: return {};
                }
            }
        }

        // One nibble per row records lanes guaranteed to be replaced by
        // later uploads. Keep an entire operation if ANY written lane lives;
        // V2/V3 must not hide the earlier W (or Z/W) that they preserve.
        uint8_t covered[kRows]{};
        Result result;
        result.keep = 0u;
        for (uint32_t reverse = count; reverse != 0u; --reverse)
        {
            const uint32_t i = reverse - 1u;
            const Operation &op = operations[i];
            if (!op.vectors) continue;
            const uint32_t lanes = writtenLanes(op.format);
            const uint8_t mask = uint8_t((1u << lanes) - 1u);
            uint32_t row = destinations[i], position = 0u;
            bool live = false;
            for (uint32_t vector = 0; vector < op.vectors; ++vector)
            {
                live = live || (covered[row] & mask) != mask;
                covered[row] |= mask;
                row = (row + 1u) & 1023u;
                if (++position == op.wl)
                {
                    row = (row + op.cl - op.wl) & 1023u;
                    position = 0u;
                }
            }
            if (live)
                result.keep |= uint64_t(1) << i;
            else
            {
                ++result.omittedUploads;
                result.omittedVectors += op.vectors;
                result.omittedStoreBytes += op.vectors * lanes * 4u;
            }
        }
        return result;
    }

    // Subtraction avoids overflow for addresses close to UINTPTR_MAX.
    // Equality at the exclusive end is disjoint; any shared byte is not.
    inline bool disjoint(const void *a, uintptr_t bytesA,
                         const void *b, uintptr_t bytesB)
    {
        const uintptr_t first = reinterpret_cast<uintptr_t>(a);
        const uintptr_t second = reinterpret_cast<uintptr_t>(b);
        return first <= second ? bytesA <= second - first : bytesB <= first - second;
    }
}
