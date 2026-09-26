#include "runtime/ps2_vu1_jit.h"
#include "runtime/ps2_memory.h"

#include <algorithm>
#include <cstdlib>
#include <xmmintrin.h>
#include <iostream>
#include <mutex>
#include <vector>

namespace
{
    std::vector<Vu1CompiledProgram> &registry()
    {
        static std::vector<Vu1CompiledProgram> programs;
        return programs;
    }
}

void registerVu1CompiledProgram(const Vu1CompiledProgram &program)
{
    registry().push_back(program);
}

const bool g_vu1Trace = [] { const char *v = std::getenv("TS_VU1_TRACE"); return v && *v; }();

void traceVu1Pair(const VU1State &state, uint32_t pc, uint64_t cycle)
{
    static FILE *out = std::fopen(std::getenv("TS_VU1_TRACE"), "w");
    if (!out)
        return;
    const uint64_t vf = hashVu1Code(reinterpret_cast<const uint8_t *>(state.vf), sizeof(state.vf));
    const uint64_t vi = hashVu1Code(reinterpret_cast<const uint8_t *>(state.vi), sizeof(state.vi));
    const uint64_t acc = hashVu1Code(reinterpret_cast<const uint8_t *>(state.acc), sizeof(state.acc));
    uint32_t q;
    std::memcpy(&q, &state.q, 4);
    if (const char *watch = std::getenv("TS_VU1_TRACE_PC"); watch && std::strtoul(watch, nullptr, 16) == pc)
    {
        uint32_t w[12];
        std::memcpy(w, state.acc, 16);
        std::memcpy(w + 4, state.vf[15], 16);
        std::memcpy(w + 8, state.vf[17], 16);
        std::fprintf(out, "  acc %08x %08x %08x %08x vf15 %08x %08x %08x %08x vf17 %08x %08x %08x %08x\n",
                     w[0], w[1], w[2], w[3], w[4], w[5], w[6], w[7], w[8], w[9], w[10], w[11]);
    }
    std::fprintf(out, "%04x %llu vf=%016llx vi=%016llx acc=%016llx q=%08x\n", pc, static_cast<unsigned long long>(cycle),
                 static_cast<unsigned long long>(vf), static_cast<unsigned long long>(vi),
                 static_cast<unsigned long long>(acc), q);
}

uint64_t hashVu1Code(const uint8_t *code, uint32_t size)
{
    uint64_t hash = 0xcbf29ce484222325ull;
    for (uint32_t i = 0; i < size; ++i)
    {
        hash ^= code[i];
        hash *= 0x100000001b3ull;
    }
    return hash;
}

Vu1CompiledEntry VU1Interpreter::lookupCompiledProgram(const uint8_t *vuCode, uint32_t codeSize, const PS2Memory *memory)
{
    static const bool disabled = [] {
        const char *value = std::getenv("TS_VU1_INTERPRET");
        return value && *value && *value != '0';
    }();
    if (disabled || m_unit != Unit::VU1 || !memory || vuCode != memory->getVU1Code() || registry().empty())
        return nullptr;
    const uint64_t generation = memory->getVU1CodeGeneration();
    if (!m_compiledLookupValid || m_compiledLookupGeneration != generation)
    {
        const uint64_t hash = hashVu1Code(vuCode, codeSize);
        m_compiledProgram = nullptr;
        for (const Vu1CompiledProgram &program : registry())
        {
            if (program.hash == hash)
            {
                m_compiledProgram = program.run;
                static std::once_flag announced;
                std::call_once(announced, [&] {
                    std::cerr << "[TS:vu1-jit] using recompiled microprogram " << program.name << '\n';
                });
                break;
            }
        }
        m_compiledLookupGeneration = generation;
        m_compiledLookupValid = true;
    }
    return m_compiledProgram;
}

Vu1Jit::Vu1Jit(VU &interpreter, uint8_t *vuData)
    : vu(interpreter), s(interpreter.m_state), data(vuData), cyc(interpreter.m_cycle),
      budgetSafe(UINT64_MAX), pendingMax(interpreter.m_cycle), kickBoundary(interpreter.m_cycle),
      vfReady(reinterpret_cast<uint64_t (*)[4]>(interpreter.m_vfReady.data())),
      viReady(interpreter.m_viReady.data()), accReady(interpreter.m_accReady.data())
{
    if (interpreter.m_viBranchBackupValid)
    {
        bkReg = interpreter.m_viBranchBackupReg;
        bkVal = interpreter.m_viBranchBackupValue;
    }
    static const bool debug = std::getenv("TS_VU1_DEBUG") != nullptr;
    static bool once = false;
    if (debug && !once)
    {
        once = true;
        std::cerr << "[TS:vu1-jit] mxcsr=0x" << std::hex << _mm_getcsr() << std::dec << '\n';
    }
}

uint64_t Vu1Jit::vu_efuResourceReady() const
{
    return vu.m_efuResourceReady;
}

void Vu1Jit::clip(uint8_t fs, uint8_t ft)
{
    uint32_t wBits;
    std::memcpy(&wBits, &s.vf[ft][3], 4);
    const int32_t limit = (wBits & 0x7F800000u) != 0u ? static_cast<int32_t>(wBits & 0x7FFFFFFFu) : 0x007FFFFF;
    const auto exceeds = [limit](float value, uint32_t signMask) {
        uint32_t bits;
        std::memcpy(&bits, &value, 4);
        bits ^= signMask;
        int32_t ordered;
        std::memcpy(&ordered, &bits, 4);
        return ordered > limit;
    };
    uint32_t result = 0u;
    if (exceeds(s.vf[fs][0], 0u)) result |= 0x01u;
    if (exceeds(s.vf[fs][0], 0x80000000u)) result |= 0x02u;
    if (exceeds(s.vf[fs][1], 0u)) result |= 0x04u;
    if (exceeds(s.vf[fs][1], 0x80000000u)) result |= 0x08u;
    if (exceeds(s.vf[fs][2], 0u)) result |= 0x10u;
    if (exceeds(s.vf[fs][2], 0x80000000u)) result |= 0x20u;
    vu.m_workingClip = ((vu.m_workingClip << 6) | result) & 0xFFFFFFu;
    FlagEntry &e = pushFlag();
    e.clip = vu.m_workingClip;
    e.writesClip = true;
}

void Vu1Jit::fcset(uint32_t value)
{
    vu.m_workingClip = value & 0xFFFFFFu;
    cancelSameCycle(false, true);
    FlagEntry &e = pushFlag();
    e.clip = vu.m_workingClip;
    e.writesClip = true;
}

void Vu1Jit::finish(uint32_t nextPc)
{
    // flushPipelines(): advance until every queued write and PATH1 retired.
    uint64_t end = std::max(cyc, pendingMax);
    kickTo(cyc);
    uint64_t kickEnd = cyc;
    while (vu.m_xgkick.active)
    {
        ++kickEnd;
        kickTo(kickEnd);
    }
    end = std::max(end, kickEnd);
    commitFlagsUpTo(UINT64_MAX);
    s.status |= stickyAccum;
    for (EfuEntry &e : efu)
        if (e.valid)
            end = std::max(end, e.ready);
    retireEfu(UINT64_MAX);

    vu.m_cycle = end;
    s.cycles = end;
    s.pc = nextPc;
    s.ebit = false;
    s.haltAfterDelaySlot = false;
    s.branchPending = false;
    vu.m_viBranchBackupValid = bkReg != 0u;
    vu.m_viBranchBackupReg = bkReg;
    vu.m_viBranchBackupValue = bkVal;
}

bool Vu1Jit::handoff(uint32_t pc)
{
    static const bool debug = std::getenv("TS_VU1_DEBUG") != nullptr;
    if (debug)
    {
        static std::mutex lock;
        static std::vector<uint32_t> reported;
        std::lock_guard<std::mutex> guard(lock);
        if (std::find(reported.begin(), reported.end(), pc) == reported.end() && reported.size() < 64)
        {
            reported.push_back(pc);
            std::cerr << "[TS:vu1-jit] handoff pc=0x" << std::hex << pc << std::dec << " cycle=" << cyc
                      << " budgetSafe=" << budgetSafe << '\n';
        }
    }
    kickTo(cyc);
    commitFlagsUpTo(cyc);
    retireEfu(cyc);
    // Elided entries' sticky bits: the program never reads or resets status
    // (a precondition for eliding), so only the final value matters.
    s.status |= stickyAccum;
    stickyAccum = 0;

    uint64_t next = UINT64_MAX;
    unsigned slot = 0;
    for (unsigned n = 0; n < flagCount; ++n)
    {
        FlagEntry e = flags[(flagHead + n) % kFlagCapacity];
        if (e.rawMasks)
        {
            e.mac = reverse4Bits(e.zero) | (reverse4Bits(e.negative) << 4) | (reverse4Bits(e.under) << 8) |
                    (reverse4Bits(e.over) << 12);
            e.status = (e.zero ? 1u : 0u) | (e.negative ? 2u : 0u) | (e.under ? 4u : 0u) | (e.over ? 8u : 0u);
        }
        auto &target = vu.m_flagPipeline[slot];
        target = {};
        target.valid = true;
        target.readyCycle = e.ready;
        target.issueCycle = e.ready - 4u;
        target.mac = e.mac;
        target.status = e.status;
        target.extraSticky = e.extraSticky;
        target.clip = e.clip;
        target.writesMac = e.writesMac;
        target.writesStatus = e.writesStatus;
        target.writesSticky = e.writesSticky;
        target.writesClip = e.writesClip;
        vu.m_pendingMasks[VU::PendingFlags] |= 1u << slot;
        next = std::min(next, e.ready);
        ++slot;
    }
    flagCount = 0;
    if (qPending)
    {
        vu.m_fdiv.valid = true;
        vu.m_fdiv.readyCycle = qReady;
        vu.m_fdiv.value = qValue;
        vu.m_fdiv.statusDi = qDi;
        next = std::min(next, qReady);
    }
    for (unsigned i = 0; i < 2u; ++i)
    {
        if (!efu[i].valid)
            continue;
        vu.m_efu[i].valid = true;
        vu.m_efu[i].readyCycle = efu[i].ready;
        vu.m_efu[i].value = efu[i].value;
        vu.m_pendingMasks[VU::PendingEfu] |= 1u << i;
        next = std::min(next, efu[i].ready);
    }
    if (pendingMax > cyc)
    {
        // Register writes were applied immediately; keep their retirement
        // time so flushPipelines ends on the same cycle.
        auto &placeholder = vu.m_vfWritePipeline[0];
        placeholder = {};
        placeholder.valid = true;
        placeholder.readyCycle = pendingMax;
        placeholder.laneMask = 0u;
        vu.m_pendingMasks[VU::PendingVf] |= 1u;
        next = std::min(next, pendingMax);
    }
    vu.m_nextPipelineReady = next;
    vu.m_cycle = cyc;
    s.cycles = cyc;
    s.pc = pc;
    vu.m_viBranchBackupValid = bkReg != 0u;
    vu.m_viBranchBackupReg = bkReg;
    vu.m_viBranchBackupValue = bkVal;
    return false;
}
