// TS_NATIVE_RECORD_SELFCHECK (ts_record_desc.h; src/xbox/PUSH-BC-PLAN.md
// section 3.1 item 7; owned by C-REC): a chain token R1 is about to run is
// first run both ways, dry, from the same state - the old path, T0 (the
// chain's pieces through the decoder, as the walk would have handed them
// over), and the new one, R1 - the way vif1SelfCheck (ps2_memory.cpp)
// compares the decoder's paths: no VU1 program runs (the MSCAL fast path is
// off and the callbacks record instead), so nothing reaches the GS or the
// backend. Each MSCAL records its pc, TOP, ITOP, the TOPS and DBF it left
// and a hash of VU1 data memory (what VIF1 alone wrote); the end, the VIF1
// registers, VU1 data and the pending PATH2 state. The two records must be
// equal; the state is put back after both, so the real run that follows
// starts where it would have. Development builds only (slow: a 16 KB hash
// per MSCAL).
#if defined(PLATFORM_XBOX)
#include "ts_record_desc.h"

#if TS_NATIVE_RECORD_SELFCHECK
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vif1_tokens.h"
#include "runtime/ps2_vu1_watch.h"
#include "ps2_log.h"

#include <cstring>
#include <vector>

namespace
{
    uint32_t hashBytes(const uint8_t *data, size_t bytes)
    {
        uint32_t hash = 2166136261u;
        for (size_t i = 0; i + 4u <= bytes; i += 4u)
        {
            uint32_t word;
            std::memcpy(&word, data + i, sizeof(word));
            hash = (hash ^ word) * 16777619u;
        }
        return hash;
    }
}

namespace ts_record
{
    bool recordSelfCheck(PS2Memory &m, const RecDesc &desc)
    {
        // What a run changes, saved.
        static uint8_t savedData[PS2_VU1_DATA_SIZE];
        const VIFRegisters savedRegs = m.vif1_regs;
        if (m.m_vu1Data)
            std::memcpy(savedData, m.m_vu1Data, PS2_VU1_DATA_SIZE);
        const Vu1WatchedRows savedWatched = g_vu1WatchedRows;
        const uint32_t savedPendingQwc = m.m_vif1PendingPath2ImageQwc;
        const bool savedPendingHl = m.m_vif1PendingPath2DirectHl;
        const Vif1StreamStats savedStats = g_vif1StreamStats;
        const RenderCounters savedCounters = g_renderCounters;
        auto restore = [&]()
        {
            m.vif1_regs = savedRegs;
            if (m.m_vu1Data)
                std::memcpy(m.m_vu1Data, savedData, PS2_VU1_DATA_SIZE);
            g_vu1WatchedRows = savedWatched;
            m.m_vif1PendingPath2ImageQwc = savedPendingQwc;
            m.m_vif1PendingPath2DirectHl = savedPendingHl;
        };

        // No program runs: the MSCALs are recorded.
        const PS2Memory::Vu1MscalFast savedFast = m.m_vu1MscalFast;
        m.m_vu1MscalFast.owner = nullptr;
        PS2Memory::Vu1MscalCallback mscal = std::move(m.m_vu1MscalCallback);
        PS2Memory::Vu1MscntCallback mscnt = std::move(m.m_vu1MscntCallback);
        static std::vector<uint32_t> records[2];
        std::vector<uint32_t> *record = nullptr;
        auto dataHash = [&]() { return m.m_vu1Data ? hashBytes(m.m_vu1Data, PS2_VU1_DATA_SIZE) : 0u; };
        m.m_vu1MscalCallback = [&](uint32_t startPC, uint32_t top, uint32_t itop)
        {
            record->insert(record->end(), {1u, startPC, top, itop, m.vif1_regs.tops, (m.vif1_regs.stat >> 7) & 1u,
                                           dataHash()});
        };
        m.m_vu1MscntCallback = [&](uint32_t top, uint32_t itop)
        { record->insert(record->end(), {2u, top, itop, dataHash()}); };

        for (int run = 0; run < 2; ++run)
        {
            restore();
            record = &records[run];
            record->clear();
            if (run == 0)
            {
                // T0: the chain's own pieces through the decoder.
                g_vif1DryDecode = true;
                m.decodeVIF1Pieces(desc.pieces(), desc.pieceCount, desc.pieceBytes, true);
                g_vif1DryDecode = false;
            }
            else if (!replayRecord(m, desc))
                record->push_back(0xDEADu); // (the caller checked the entry: cannot happen)
            record->insert(record->end(),
                           {3u, hashBytes(reinterpret_cast<const uint8_t *>(&m.vif1_regs), sizeof(VIFRegisters)),
                            dataHash(), m.m_vif1PendingPath2ImageQwc, m.m_vif1PendingPath2DirectHl ? 1u : 0u});
        }

        restore();
        m.m_vu1MscalCallback = std::move(mscal);
        m.m_vu1MscntCallback = std::move(mscnt);
        m.m_vu1MscalFast = savedFast;
        g_vif1StreamStats = savedStats;
        g_renderCounters = savedCounters;

        ++g_renderCounters.recChecked;
        const std::vector<uint32_t> &a = records[0], &b = records[1];
        if (a == b)
            return true;
        if (++g_renderCounters.recDiff <= 8u)
        {
            size_t at = 0;
            while (at < a.size() && at < b.size() && a[at] == b[at])
                ++at;
            RUNTIME_LOG("[REC:selfcheck] chain 0x" << std::hex << desc.chain << std::dec << " (" << desc.opCount
                        << " ops, " << desc.pieceCount << " pieces) differs at record word " << at << " of "
                        << a.size() << "/" << b.size() << ": T0 0x" << std::hex << (at < a.size() ? a[at] : 0u)
                        << ", R1 0x" << (at < b.size() ? b[at] : 0u) << std::dec << '\n');
        }
        return false;
    }
}
#else
namespace ts_record
{
    bool recordSelfCheck(PS2Memory &, const RecDesc &) { return true; }
}
#endif
#endif
