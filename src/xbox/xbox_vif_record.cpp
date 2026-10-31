#include "xbox_vif_record.h"
#include "runtime/ps2_memory.h"
#include "xbox_vif_fast.h"
#include "xbox_vif_source.h"
#include "xbox_vif_write_plan.h"

#if TS_DRAW_RECORDS
#include <atomic>
#include <cstddef>
#include <cstring>

namespace
{
    constexpr uint32_t kMaxOperations = 64u;
    constexpr uint32_t kPlans = 8u;
    static_assert(kMaxOperations == xbox_vif_write_plan::kMaxOperations,
                  "write proof and command plan must share their bound");

    uint32_t read32(const uint8_t *p)
    {
        uint32_t value;
        std::memcpy(&value, p, sizeof(value));
        return value;
    }

    uint16_t read16(const uint8_t *p)
    {
        uint16_t value;
        std::memcpy(&value, p, sizeof(value));
        return value;
    }

    struct Operation
    {
        uint32_t code, commandOffset, payloadOffset;
        uint16_t payloadBytes, vectors;
        uint8_t opcode, format, cl, wl;
    };
    struct Plan
    {
        uint32_t chainAddress = 0, firstOffset = 0, cycle = 0, mode = 0;
        uint32_t count = 0, bytes = 0, vectors = 0;
        uint32_t terminalOffset = 0, terminalCode = 0;
        Operation operations[kMaxOperations];
        xbox_vif_write_plan::Result writes;
        uint32_t writeBase = 0, writeTops = 0;
        bool writesValid = false, valid = false;
    };
    struct Cache
    {
        std::atomic_flag busy = ATOMIC_FLAG_INIT;
        std::atomic<uint32_t> contention{0};
        const uint8_t *rdram = nullptr;
        uint32_t replacement = 0;
        Plan plans[kPlans]{};
        XboxVifRecordStats stats;
    };
    Cache cache;
    static_assert(sizeof(Operation) == 20u, "bounded decoded VIF operation");
    static_assert(sizeof(Cache) <= 12u * 1024u, "bounded decoded VIF metadata");

    struct Lease
    {
        bool held;
        Lease() : held(!cache.busy.test_and_set(std::memory_order_acquire))
        {
            if (!held) cache.contention.fetch_add(1u, std::memory_order_relaxed);
        }
        ~Lease() { if (held) cache.busy.clear(std::memory_order_release); }
    };

    bool ramOffset(const uint8_t *ram, const uint8_t *data, uint32_t &out)
    {
        const uintptr_t base = reinterpret_cast<uintptr_t>(ram);
        const uintptr_t at = reinterpret_cast<uintptr_t>(data);
        if (!ram || !data || at < base || at - base >= XboxDrawRecordChain::kRamBytes)
            return false;
        out = uint32_t(at - base);
        return true;
    }

    // A private reader of the descriptor's raw source sequence. It stores
    // offsets only. A logical span may cross adjacent raw TTE/payload pieces
    // when they are physically contiguous; the live reader independently
    // proves that its current piece also holds each complete command/data.
    class Source
    {
    public:
        Source(const XboxDrawRecordChain &chain, uint32_t start) : chain_(chain)
        {
            uint32_t matches = 0;
            for (uint32_t i = 0; i < chain.pieceCount; ++i)
            {
                const auto &p = chain.pieces[i];
                if (p.offset > XboxDrawRecordChain::kRamBytes ||
                    p.bytes > XboxDrawRecordChain::kRamBytes - p.offset)
                    return;
                if (start >= p.offset && start - p.offset < p.bytes)
                {
                    piece_ = i;
                    offset_ = start - p.offset;
                    ++matches;
                }
            }
            valid_ = matches == 1u;
        }

        bool span(uint32_t bytes, uint32_t &address)
        {
            if (!valid_ || piece_ >= chain_.pieceCount || !bytes)
                return false;
            address = chain_.pieces[piece_].offset + offset_;
            uint32_t rest = bytes, wanted = address;
            while (rest)
            {
                if (piece_ >= chain_.pieceCount) return false;
                const auto &p = chain_.pieces[piece_];
                if (p.offset + offset_ != wanted) return false;
                const uint32_t available = p.bytes - offset_;
                const uint32_t take = rest < available ? rest : available;
                offset_ += take;
                wanted += take;
                rest -= take;
                consumed_ += take;
                if (offset_ == p.bytes)
                {
                    ++piece_;
                    offset_ = 0;
                }
            }
            return true;
        }
        uint32_t consumed() const { return consumed_; }

    private:
        const XboxDrawRecordChain &chain_;
        uint32_t piece_ = 0, offset_ = 0, consumed_ = 0;
        bool valid_ = false;
    };

    bool prepare(Plan &plan, const XboxDrawRecordChain &chain,
                 const uint8_t *ram, uint32_t first, uint32_t cycle, uint32_t mode)
    {
        plan.valid = plan.writesValid = false;
        plan.chainAddress = chain.chainAddress;
        plan.firstOffset = first;
        plan.cycle = cycle;
        plan.mode = mode;
        plan.count = plan.bytes = plan.vectors = 0;
        Source source(chain, first);
        for (;;)
        {
            uint32_t at;
            if (!source.span(4u, at)) return false;
            const uint32_t code = read32(ram + at);
            const uint32_t opcode = (code >> 24u) & 0x7Fu;
            const uint32_t imm = code & 0xFFFFu;
            if (opcode == 0x14u || opcode == 0x15u)
            {
                if (!plan.vectors) return false;
                plan.bytes = source.consumed() - 4u;
                plan.terminalOffset = at;
                plan.terminalCode = code;
                plan.valid = true;
                return true;
            }
            if (plan.count == kMaxOperations) return false;
            Operation op{code, at, 0u, 0u, 0u, uint8_t(opcode), 0u, 0u, 0u};
            if ((opcode & 0x60u) == 0x60u)
            {
                const uint32_t format = opcode & 0xFu;
                uint32_t cl = cycle & 0xFFu, wl = (cycle >> 8u) & 0xFFu;
                if (!cl) cl = 1u;
                if (!wl) wl = 1u;
                if ((opcode & 0x10u) || (mode & 3u) || cl < wl ||
                    ((format & 3u) == 3u && format != 0xFu))
                    return false;
                const uint32_t num = (code >> 16u) & 0xFFu;
                const uint32_t count = num ? num : 256u;
                const uint32_t vectorBytes = format == 0xFu ? 2u :
                    ((format >> 2u) + 1u) * (4u >> (format & 3u));
                // Compact vectors still consume padding through the next
                // word, exactly like the original segmented decoder.
                const uint32_t bytes = (count * vectorBytes + 3u) & ~3u;
                if (!source.span(bytes, op.payloadOffset)) return false;
                op.payloadBytes = uint16_t(bytes);
                op.vectors = uint16_t(count);
                op.format = uint8_t(format);
                op.cl = uint8_t(cl); op.wl = uint8_t(wl);
                plan.vectors += count;
            }
            else
            {
                switch (opcode)
                {
                case 0x00u: case 0x02u: case 0x03u: case 0x04u:
                case 0x07u: case 0x10u: case 0x11u: case 0x13u:
                    break;
                case 0x01u: cycle = imm; break;
                case 0x05u: mode = imm & 3u; break;
                case 0x20u: op.payloadBytes = 4u; break;
                case 0x30u: case 0x31u: op.payloadBytes = 16u; break;
                default: return false;
                }
                if (op.payloadBytes && !source.span(op.payloadBytes, op.payloadOffset))
                    return false;
            }
            plan.operations[plan.count++] = op;
        }
    }

    bool sameCommands(const Plan &plan, const uint8_t *ram)
    {
        for (uint32_t i = 0; i < plan.count; ++i)
            if (read32(ram + plan.operations[i].commandOffset) != plan.operations[i].code)
                return false;
        return read32(ram + plan.terminalOffset) == plan.terminalCode;
    }

    bool sameStream(const Plan &plan, const uint8_t *ram,
                    XboxVifRecordMatch match, void *user)
    {
        for (uint32_t i = 0; i < plan.count; ++i)
        {
            const Operation &op = plan.operations[i];
            if (!match(user, ram + op.commandOffset, 4u) ||
                (op.payloadBytes && !match(user, ram + op.payloadOffset, op.payloadBytes)))
                return false;
        }
        // The untouched decoder must see the same terminal command next.
        // This changes only the probe reader, not the eventual skip count.
        return match(user, ram + plan.terminalOffset, 4u);
    }

    // Standard compact formats use the segmented decoder's mode-0 rules:
    // scalar broadcast, untouched upper V2/V3 lanes, USN extension, and
    // packed V4-5 fields without scaling. kBytes=0 selects V4-5.
    template <uint32_t kBytes>
    void unpackCompact(const Operation &op, const uint8_t *source,
                       uint8_t *vu, uint32_t dest)
    {
        uint32_t cyclePosition = 0;
        for (uint32_t vector = 0; vector < op.vectors; ++vector)
        {
            uint8_t *out = vu + dest * 16u;
            uint32_t values[4];
            if constexpr (kBytes == 0u)
            {
                const uint32_t packed = read16(source);
                values[0] = packed & 0x1Fu;
                values[1] = (packed >> 5u) & 0x1Fu;
                values[2] = (packed >> 10u) & 0x1Fu;
                values[3] = (packed >> 15u) & 1u;
                source += 2u;
                std::memcpy(out, values, sizeof(values));
            }
            else
            {
                const uint32_t lanes = (op.format >> 2u) + 1u;
                const bool zeroExtend = (op.code & 0x4000u) != 0u;
                constexpr uint32_t sign = 1u << (kBytes * 8u - 1u);
                constexpr uint32_t upper = kBytes == 2u ? 0xFFFF0000u : 0xFFFFFF00u;
                for (uint32_t lane = 0; lane < lanes; ++lane)
                {
                    const uint32_t raw = kBytes == 2u ? read16(source) : *source;
                    values[lane] = !zeroExtend && (raw & sign) ? raw | upper : raw;
                    source += kBytes;
                }
                if (lanes == 1u)
                {
                    for (uint32_t lane = 1u; lane < 4u; ++lane) values[lane] = values[0];
                    std::memcpy(out, values, sizeof(values));
                }
                else
                    std::memcpy(out, values, lanes * 4u);
            }
            dest = (dest + 1u) & 0x3FFu;
            if (++cyclePosition == op.wl)
            {
                dest = (dest + op.cl - op.wl) & 0x3FFu;
                cyclePosition = 0;
            }
        }
    }

    uint64_t finalWriteMask(Plan &plan, const uint8_t *ram,
                            const uint8_t *vu, const VIFRegisters &regs,
                            XboxVifRecordWritePolicy policy)
    {
        // Diagnostic/custom observers default to every original store. A
        // caller opting in promises not to inspect intermediate VU data.
        // Aliased RAM/VU/register storage cannot satisfy the read-free proof.
        if (policy != XboxVifRecordWritePolicy::FinalState ||
            !xbox_vif_write_plan::disjoint(vu, 16384u, ram, XboxDrawRecordChain::kRamBytes) ||
            !xbox_vif_write_plan::disjoint(vu, 16384u, &regs, sizeof(regs)))
            return ~uint64_t(0);
        const uint32_t base = regs.base & 1023u, tops = regs.tops & 1023u;
        if (!plan.writesValid || plan.writeBase != base || plan.writeTops != tops)
        {
            // The parent plan already keys initial cycle/mode and checks
            // every command. BASE/TOPS are live per invocation, not part of
            // that older key: never reuse a relative-address proof blindly.
            plan.writes = xbox_vif_write_plan::analyze(plan.operations, plan.count,
                                                      base, tops, regs.cycle, regs.mode);
            plan.writeBase = base;
            plan.writeTops = tops;
            plan.writesValid = true;
            ++cache.stats.writePlans;
        }
        else
            ++cache.stats.writePlanHits;
        cache.stats.omittedUploads += plan.writes.omittedUploads;
        cache.stats.omittedVectors += plan.writes.omittedVectors;
        cache.stats.omittedStoreBytes += plan.writes.omittedStoreBytes;
        return plan.writes.keep;
    }

    void execute(const Plan &plan, const uint8_t *ram, VIFRegisters &regs,
                  uint8_t *vu, XboxVifRecordObserve observe, void *user,
                  XboxVifSourceScope *sourceScope, uint64_t writeMask)
    {
#if !TS_VIF_SOURCE
        (void)sourceScope;
#endif
        for (uint32_t i = 0; i < plan.count; ++i)
        {
            const Operation &op = plan.operations[i];
            const uint32_t imm = op.code & 0xFFFFu;
            regs.code = op.code;
            regs.num = (op.code >> 16u) & 0xFFu;
            if (op.code & 0x80000000u) regs.stat |= 1u << 11u;
            if (op.vectors)
            {
                uint32_t dest = imm & 0x3FFu;
                if (imm & 0x8000u) dest = (dest + (regs.tops & 0x3FFu)) & 0x3FFu;
                const uint8_t *source = ram + op.payloadOffset;
                if (observe) observe(user, dest, source, op.vectors, op.format,
                                      op.cl, op.wl, regs.mode);
#if TS_VIF_SOURCE
                if (sourceScope)
                    sourceScope->noteUnpack(dest, source, op.vectors, op.format, op.cl, op.wl);
#endif
                // Command registers, watched rows and both provenance paths
                // see EVERY logical upload. Only its dead memory stores go.
                if ((writeMask & (uint64_t(1) << i)) == 0u) continue;
                if (op.format & 3u)
                {
                    switch (op.format & 3u)
                    {
                    case 1u: unpackCompact<2u>(op, source, vu, dest); break;
                    case 2u: unpackCompact<1u>(op, source, vu, dest); break;
                    default: unpackCompact<0u>(op, source, vu, dest); break;
                    }
                    continue;
                }
#if TS_VIF_FAST
                // Use the same bounded SSE1 row writer as the production
                // decoder. Its false return has no writes; all accepted
                // formats/counts/destinations satisfy its admission rules.
                if (op.cl == op.wl &&
                    xbox_vif_fast::unpackContiguous32(vu, source, dest, op.vectors, op.format))
                    continue;
#endif
                const uint32_t lanes = (op.format >> 2u) + 1u;
                uint32_t cyclePosition = 0;
                for (uint32_t vector = 0; vector < op.vectors; ++vector)
                {
                    uint8_t *out = vu + dest * 16u;
                    if (lanes == 1u)
                    {
                        const uint32_t value = read32(source);
                        for (uint32_t lane = 0; lane < 4u; ++lane)
                            std::memcpy(out + lane * 4u, &value, 4u);
                    }
                    else
                        std::memcpy(out, source, lanes * 4u);
                    source += lanes * 4u;
                    dest = (dest + 1u) & 0x3FFu;
                    if (++cyclePosition == op.wl)
                    {
                        dest = (dest + op.cl - op.wl) & 0x3FFu;
                        cyclePosition = 0;
                    }
                }
                continue;
            }
            switch (op.opcode)
            {
            case 0x01u: regs.cycle = imm; break;
            case 0x02u:
                regs.ofst = imm & 0x3FFu;
                regs.tops = regs.base & 0x3FFu;
                regs.stat &= ~(1u << 7u);
                break;
            case 0x03u: regs.base = imm & 0x3FFu; break;
            case 0x04u: regs.itops = imm & 0x3FFu; break;
            case 0x05u: regs.mode = imm & 3u; break;
            case 0x07u: regs.mark = imm; regs.stat |= 1u << 6u; break;
            case 0x20u: regs.mask = read32(ram + op.payloadOffset); break;
            case 0x30u: std::memcpy(regs.row, ram + op.payloadOffset, 16u); break;
            case 0x31u: std::memcpy(regs.col, ram + op.payloadOffset, 16u); break;
            default: break; // NOP and the original decoder's no-op FLUSH commands.
            }
        }
    }
}
#endif

bool xboxVifRecordTryPrefix(const XboxDrawRecordChain &chain, const uint8_t *rdram,
                            const uint8_t *firstData, VIFRegisters &registers,
                            uint8_t *vuData, XboxVifRecordMatch match,
                            XboxVifRecordObserve observe, void *user,
                            uint32_t &consumedBytes, uint32_t &vectors,
                            uint32_t &commands, XboxVifSourceScope *sourceScope,
                            XboxVifRecordWritePolicy writePolicy)
{
    consumedBytes = vectors = commands = 0;
#if TS_DRAW_RECORDS
    uint32_t first;
    if (!vuData || !match || !chain.pieceCount ||
        chain.pieceCount > XboxDrawRecordChain::kMaxPieces ||
        !ramOffset(rdram, firstData, first))
        return false;
    Lease lease;
    if (!lease.held) return false;
    ++cache.stats.attempts;
    if (cache.rdram != rdram)
    {
        for (Plan &plan : cache.plans) plan.valid = false;
        cache.rdram = rdram;
        cache.replacement = 0;
    }
    const uint32_t cycle = registers.cycle & 0xFFFFu;
    const uint32_t mode = registers.mode & 3u;
    Plan *plan = nullptr;
    for (Plan &candidate : cache.plans)
        if (candidate.valid && candidate.chainAddress == chain.chainAddress &&
            candidate.firstOffset == first && candidate.cycle == cycle && candidate.mode == mode)
        {
            if (sameCommands(candidate, rdram))
            {
                plan = &candidate;
                ++cache.stats.hits;
            }
            else candidate.valid = false;
            break;
        }
    if (!plan)
    {
        Plan &candidate = cache.plans[cache.replacement++ & (kPlans - 1u)];
        if (!prepare(candidate, chain, rdram, first, cycle, mode))
        {
            ++cache.stats.rejected;
            return false;
        }
        ++cache.stats.built;
        plan = &candidate;
    }
    if (!sameStream(*plan, rdram, match, user))
    {
        // A changed raw-source layout may retain the same command words.
        // Retire its plan and leave the original reader untouched. Rebuild
        // on a later attempt with a fresh probe rather than reuse this one.
        plan->valid = false;
        ++cache.stats.rejected;
        return false;
    }
    // No effects precede complete live-reader admission. The prefix has
    // no VU reader; MSCAL remains in the original decoder after it returns.
    const uint64_t writeMask = finalWriteMask(*plan, rdram, vuData, registers, writePolicy);
#if TS_VIF_SOURCE
    if (sourceScope) sourceScope->beginPrefix(rdram, vuData);
#endif
    execute(*plan, rdram, registers, vuData, observe, user, sourceScope, writeMask);
#if TS_VIF_SOURCE
    if (sourceScope)
        sourceScope->finishPrefix(rdram + plan->terminalOffset, plan->terminalCode,
                                  registers.tops & 0x3ffu);
#endif
    consumedBytes = plan->bytes;
    vectors = plan->vectors;
    commands = plan->count;
    ++cache.stats.prefixes;
    cache.stats.commands += commands;
    cache.stats.vectors += vectors;
    cache.stats.bytes += consumedBytes;
    return true;
#else
    (void)chain; (void)rdram; (void)firstData; (void)registers; (void)vuData;
    (void)match; (void)observe; (void)user; (void)sourceScope; (void)writePolicy;
    return false;
#endif
}

bool xboxVifRecordGetStats(XboxVifRecordStats &out)
{
    out = {};
#if TS_DRAW_RECORDS
    Lease lease;
    if (!lease.held) return false;
    out = cache.stats;
    out.busy = cache.contention.load(std::memory_order_relaxed);
#endif
    return true;
}
