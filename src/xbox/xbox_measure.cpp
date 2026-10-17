// The Push B/C measurement counters' storage, hooks and report lines
// (runtime/ps2_measure.h; src/xbox/PUSH-BC-PLAN.md section 4, W0-M). Built
// into the game by make TS_MEASURE_PUSHBC=1; nothing of it exists otherwise.
//
// The counters are cumulative; every line prints the change since the line
// before, per game frame where the plan asks for a per-frame figure. The
// address tables (dispatch pcs, __aulldiv callers, locks) are
// open-addressed with stable slots, so a line lists the slots that moved
// most since the last report, as address:count. Resolve addresses with
// build/xbox/main.map (host code) or the function names of
// project/generated (guest pcs).
#include "runtime/ps2_measure.h"

#if TS_MEASURE_PUSHBC
#include "xbox_log.h"
#include "xbox_perf.h"
#include "gs_nv2a_backend.h" // g_nv2aTextureStats.gameFrames
#include "../../project/game/ts_game_hooks.h"
#include "ps2_runtime.h"
#include "ps2_runtime_macros.h"

#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>
#include <xmmintrin.h>

#include <cstdio>
#include <cstring>

MeasureCounters g_measure;

namespace
{
    using Line = XboxReportLine;
    uint64_t g_tscPerUs = 733;
    // What the last report saw (the deltas' other side).
    MeasureCounters g_last;
    uint32_t g_lastFrames = 0;
    constexpr uint32_t kRdtscCycles = 70u; // a pair of rdtsc on the Pentium III, about

    uint32_t frames()
    {
        const uint32_t f = g_nv2aTextureStats.gameFrames - g_lastFrames;
        return f ? f : 1u;
    }
    uint64_t usOf(uint64_t cycles) { return cycles / g_tscPerUs; }
    // ms a frame of a cycle count's change.
    void msPerFrame(Line &line, const char *name, uint64_t now, uint64_t was)
    {
        line.ms(name, usOf(now - was) / frames());
    }
    // The rdtsc pairs a frame and what they cost, from a count's change.
    void overhead(Line &line, uint64_t pairs)
    {
        line.perFrame("rd", pairs, frames());
        line.ms("ovh", usOf(pairs * kRdtscCycles) / frames());
    }

    // The entries of a table that moved most since the last report, as
    // key:count (count = the change), up to `top` of them.
    template <size_t N>
    void topMoved(Line &line, const char *name, const MeasureAddrCount (&now)[N], const MeasureAddrCount (&was)[N], uint32_t top)
    {
        line.add(" %s=", name);
        bool shown[N] = {};
        for (uint32_t t = 0; t < top; ++t)
        {
            uint32_t best = N, bestDelta = 0;
            for (uint32_t i = 0; i < N; ++i)
            {
                if (shown[i] || now[i].key == 0u)
                    continue;
                const uint32_t delta = now[i].count - (was[i].key == now[i].key ? was[i].count : 0u);
                if (delta > bestDelta)
                {
                    bestDelta = delta;
                    best = i;
                }
            }
            if (best == N)
                break;
            shown[best] = true;
            line.add("%s%x:%u", t ? "," : "", now[best].key, bestDelta);
        }
    }

    // ---------------------------------------------------------- the lines
    void lineKick(Line &line)
    {
        const MeasureCounters &a = g_measure, &b = g_last;
        line.add(" f=%u", frames());
        msPerFrame(line, "walk", a.walkCycles, b.walkCycles);
        line.perFrame("n", a.walks - b.walks, frames());
        msPerFrame(line, "dmain", a.decodeCycles[0], b.decodeCycles[0]);
        msPerFrame(line, "dchain", a.decodeCycles[1], b.decodeCycles[1]);
        line.perFrame("dsw", a.decodeSwitches - b.decodeSwitches, frames());
        line.perFrame("dec", a.decodes - b.decodes, frames());
        msPerFrame(line, "unpack", a.unpackCycles, b.unpackCycles);
        line.perFrame("n", a.unpacks - b.unpacks, frames());
        const char *const names[3] = {"vu1draw", "vu1const", "vu1kick"};
        for (uint32_t c = 0; c < 3; ++c)
        {
            msPerFrame(line, names[c], a.vu1Cycles[c], b.vu1Cycles[c]);
            line.perFrame("n", a.vu1Runs[c] - b.vu1Runs[c], frames());
        }
#if TS_PERF_BACKEND
        // The GS front end on GIF packets and the renderer inside the kick
        // ([TS:kick]'s gif and nv2a totals), so the line adds up on its own.
        static uint64_t lastGif = 0, lastNv2a = 0;
        const uint64_t gif = xboxPerfKickCycles(true), nv2a = xboxPerfKickCycles(false);
        msPerFrame(line, "gs", gif, lastGif);
        msPerFrame(line, "nv2a", nv2a, lastNv2a);
        lastGif = gif;
        lastNv2a = nv2a;
#else
        line.add(" gs=? nv2a=?");
#endif
        const uint64_t pairs = (a.walks - b.walks) + (a.decodes - b.decodes) + (a.decodeSwitches - b.decodeSwitches) / 2u +
                               (a.unpacks - b.unpacks) + (a.vu1Runs[0] - b.vu1Runs[0]) + (a.vu1Runs[1] - b.vu1Runs[1]) +
                               (a.vu1Runs[2] - b.vu1Runs[2]);
        overhead(line, pairs);
    }

    void lineGs(Line &line)
    {
        const MeasureCounters &a = g_measure, &b = g_last;
        line.add(" f=%u", frames());
        msPerFrame(line, "gsxf", a.gsBeginXfCycles, b.gsBeginXfCycles);
        line.perFrame("n", a.gsBeginXf - b.gsBeginXf, frames());
        msPerFrame(line, "implxf", a.implBeginXfCycles, b.implBeginXfCycles);
        line.perFrame("n", a.implBeginXf - b.implBeginXf, frames());
        msPerFrame(line, "keyfor", a.keyForCycles, b.keyForCycles);
        line.perFrame("n", a.keyFors - b.keyFors, frames());
        msPerFrame(line, "tex", a.textureCycles, b.textureCycles);
        line.perFrame("n", a.textures - b.textures, frames());
        msPerFrame(line, "keycmp", a.keyCmpCycles, b.keyCmpCycles);
        line.perFrame("n", a.keyCmps - b.keyCmps, frames());
        line.perFrame("prims", a.prims - b.prims, frames());
        line.perFrame("texprims", a.primsTextured - b.primsTextured, frames());
        line.perFrame("kicks", a.kicks - b.kicks, frames());
        line.add(" kp=");
        for (uint32_t i = 0; i < 5; ++i)
            line.add("%s%u", i ? "/" : "", a.kickPrims[i] - b.kickPrims[i]);
        line.add(" kinds=");
        for (uint32_t i = 0; i < 4; ++i)
            line.add("%s%u", i ? "/" : "", a.kickKinds[i] - b.kickKinds[i]);
        overhead(line, uint64_t(a.gsBeginXf - b.gsBeginXf) + (a.implBeginXf - b.implBeginXf) + (a.keyFors - b.keyFors) +
                           (a.textures - b.textures) + (a.keyCmps - b.keyCmps));
    }

    void lineEe(Line &line)
    {
        const MeasureCounters &a = g_measure, &b = g_last;
        line.add(" f=%u", frames());
        line.perFrame("disp", a.dispatches - b.dispatches, frames());
        line.add(" other=%u", a.dispatchOther - b.dispatchOther);
        topMoved(line, "pc", a.dispatch, b.dispatch, 10);
        line.perFrame("div", a.divs - b.divs, frames());
        line.add(" other=%u", a.divOther - b.divOther);
        topMoved(line, "ret", a.divCaller, b.divCaller, 8);
    }

    void lineLock(Line &line)
    {
        const MeasureCounters &a = g_measure, &b = g_last;
        line.add(" f=%u", frames());
        line.perFrame("cs", a.csEnters - b.csEnters, frames());
        line.perFrame("cont", a.csContended - b.csContended, frames());
        line.perFrame("srw", a.srwAcquires - b.srwAcquires, frames());
        line.perFrame("spins", a.srwSpins - b.srwSpins, frames());
        line.add(" other=%u/%u", a.lockRetOther - b.lockRetOther, a.lockObjOther - b.lockObjOther);
        topMoved(line, "ret", a.lockRet, b.lockRet, 8);
        topMoved(line, "obj", a.lockObj, b.lockObj, 6);
    }

    void histogramLine(Line &line, const uint32_t (&now)[10][3], const uint32_t (&was)[10][3])
    {
        const char *const sizes[10] = {"16", "32", "64", "128", "256", "512", "1k", "4k", "64k", "big"};
        line.add(" f=%u", frames());
        for (uint32_t s = 0; s < 10; ++s)
            line.add(" %s=%u/%u/%u", sizes[s], (now[s][0] - was[s][0]) / frames(), (now[s][1] - was[s][1]) / frames(),
                     (now[s][2] - was[s][2]) / frames());
    }
    void lineMemcpy(Line &line) { histogramLine(line, g_measure.memcpyHist, g_last.memcpyHist); }
    void lineMemcmp(Line &line) { histogramLine(line, g_measure.memcmpHist, g_last.memcmpHist); }

    void lineList(Line &line)
    {
        // The game's list high-water mark in quadwords (gp-0x6CA0, kept by
        // cpuMain) and the two list buffers (gp-0x6CF0[0..1]); their
        // distance stands in for a buffer's capacity (an estimate: the
        // buffers are static and adjacent).
        constexpr uint32_t kGp = 0x003B47F0u;
        if (const uint8_t *rdram = g_measure.rdram)
        {
            uint32_t hw = 0, buf0 = 0, buf1 = 0;
            std::memcpy(&hw, rdram + kGp - 0x6CA0u, 4);
            std::memcpy(&buf0, rdram + kGp - 0x6CF0u, 4);
            std::memcpy(&buf1, rdram + kGp - 0x6CF0u + 4u, 4);
            const uint32_t distance = (buf1 > buf0 ? buf1 - buf0 : buf0 - buf1) & 0x0FFFFFFFu;
            line.add(" hw=%uqw buf0=%08x buf1=%08x cap~=%uqw", hw, buf0, buf1, distance / 16u);
        }
        else
            line.add(" hw=? (no frame yet)");
        line.add(" memdbhalf hw=%uK size=%uK", g_measure.memdbHalfHw / 1024u, g_measure.memdbHalfSize / 1024u);
    }

    void lineChain(Line &line)
    {
        const MeasureCounters &a = g_measure, &b = g_last;
        line.add(" precalc=%u level=%u resets=%u", a.precalcCalls - b.precalcCalls, a.precalcLevel, a.levelResets);
        const uint32_t f = a.chainFrames - b.chainFrames;
        const uint32_t ff = f ? f : 1u;
        line.add(" frames=%u", f);
        line.perFrame("calls", a.chainCallsSum - b.chainCallsSum, ff);
        line.perFrame("distinct", a.chainDistinctSum - b.chainDistinctSum, ff);
        line.add(" max=%u full=%u", a.chainDistinctMax, a.chainSetFull - b.chainSetFull);
    }

    void lineFp(Line &line)
    {
        const MeasureCounters &a = g_measure, &b = g_last;
        const char *const names[6] = {"tick", "before", "player", "after", "gfx", "kick"};
        line.add(" f=%u", frames());
        for (uint32_t p = 0; p < 6; ++p)
            line.add(" %s=%02x/%u/%u", names[p], a.phaseFlags[p], a.phaseDe[p] - b.phaseDe[p], a.phaseUe[p] - b.phaseUe[p]);
    }

    void lineOnce(Line &line)
    {
        const MeasureCounters &a = g_measure;
        line.add(" chcr=%08x tte=%u walks=%u differ=%u last=%08x", a.chcrFirst, (a.chcrFirst >> 6) & 1u, a.chcrWalks,
                 a.chcrDiffer, a.chcrLast);
        line.add(" cw boot/tick/kick=%04x/%04x/%04x have=%x", a.cwBoot, a.cwTick, a.cwKick, a.cwHave);
        line.add(" contig=%uK phys=%uK", a.largestContiguousKB, a.physicalKB);
        // The last line of a report: what the next report's deltas are against.
        std::memcpy(&g_last, &g_measure, sizeof(g_last));
        g_lastFrames = g_nv2aTextureStats.gameFrames;
    }

    // ----------------------------------------------------------- the hooks
    uint16_t x87ControlWord()
    {
        uint16_t cw;
        __asm__ volatile("fnstcw %0" : "=m"(cw));
        return cw;
    }

    // The MXCSR exception flags raised since the last sample, attributed to
    // phase and cleared.
    void sampleFlagsTo(uint32_t phase)
    {
        const uint32_t csr = _mm_getcsr();
        const uint32_t raised = csr & 0x3Fu;
        if (!raised)
            return;
        g_measure.phaseFlags[phase] |= raised;
        g_measure.phaseDe[phase] += (raised & 0x02u) ? 1u : 0u;
        g_measure.phaseUe[phase] += (raised & 0x10u) ? 1u : 0u;
        _mm_setcsr(csr & ~0x3Fu);
    }

    // The largest block MmAllocateContiguousMemoryEx gives now, by bisection
    // in 64 KB steps (each try freed at once).
    uint32_t largestContiguousKB()
    {
        uint32_t lo = 0, hi = 64u * 1024u;
        while (hi - lo > 64u)
        {
            const uint32_t mid = ((lo + hi) / 2u) & ~63u;
            if (mid == lo)
                break;
            void *block = MmAllocateContiguousMemoryEx(mid * 1024u, 0u, 0xFFFFFFFFu, 0u, PAGE_READWRITE);
            if (block)
            {
                MmFreeContiguousMemory(block);
                lo = mid;
            }
            else
                hi = mid;
        }
        return lo;
    }

    void precalcBefore(void *, uint8_t *, R5900Context *, PS2Runtime *)
    {
        ++g_measure.precalcCalls;
        ++g_measure.precalcLevel;
    }
    void memResetBefore(void *, uint8_t *, R5900Context *, PS2Runtime *)
    {
        ++g_measure.levelResets;
        g_measure.precalcLevel = 0;
    }
    // memdbTick swaps the halves: gp-0x49DC is the allocation pointer,
    // gp-0x49E4 the base of the half it allocates from, gp-0x49E0 the
    // other half's base (memdbAlloc_0x201f78, memdbTick_0x201f50).
    void memdbTickBefore(void *, uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t gp = GPR_U32(ctx, 28);
        const uint32_t ptr = READ32(gp - 0x49DCu), base = READ32(gp - 0x49E4u), other = READ32(gp - 0x49E0u);
        if (ptr >= base && ptr - base > g_measure.memdbHalfHw)
            g_measure.memdbHalfHw = ptr - base;
        g_measure.memdbHalfSize = other > base ? other - base : base - other;
        g_measure.rdram = rdram;
    }
}

void xboxMeasureInit()
{
    const uint64_t frequency = KeQueryPerformanceFrequency();
    if (frequency >= 1000000u)
        g_tscPerUs = frequency / 1000000u;
    g_measure.cwBoot = x87ControlWord();
    g_measure.cwHave |= 1u;
    MM_STATISTICS stats{};
    stats.Length = sizeof(stats);
    MmQueryStatistics(&stats);
    g_measure.physicalKB = stats.TotalPhysicalPages * 4u;
    g_measure.largestContiguousKB = largestContiguousKB();
    xboxRegisterReportLine("[TS:m-kick]", &lineKick);
    xboxRegisterReportLine("[TS:m-gs]", &lineGs);
    xboxRegisterReportLine("[TS:m-ee]", &lineEe);
    xboxRegisterReportLine("[TS:m-lock]", &lineLock);
    xboxRegisterReportLine("[TS:m-cpy]", &lineMemcpy);
    xboxRegisterReportLine("[TS:m-cmp]", &lineMemcmp);
    xboxRegisterReportLine("[TS:m-list]", &lineList);
    xboxRegisterReportLine("[TS:m-chain]", &lineChain);
    xboxRegisterReportLine("[TS:m-fp]", &lineFp);
    const bool registered = xboxRegisterReportLine("[TS:m-once]", &lineOnce); // last: it takes the snapshot
    char text[200];
    const int n = std::snprintf(text, sizeof(text), "[TS:m-once] boot: x87 cw=%04x physical=%uK largest contiguous=%uK lines %s\n",
                                g_measure.cwBoot, g_measure.physicalKB, g_measure.largestContiguousKB,
                                registered ? "registered" : "NOT ALL REGISTERED");
    xboxLogWrite(text, unsigned(n > 0 ? n : 0));
}

void xboxMeasureFrame()
{
    MeasureCounters &m = g_measure;
    m.chainCallsSum += m.chainCallsFrame;
    m.chainDistinctSum += m.chainDistinctFrame;
    if (m.chainDistinctFrame > m.chainDistinctMax)
        m.chainDistinctMax = m.chainDistinctFrame;
    ++m.chainFrames;
    m.chainCallsFrame = m.chainDistinctFrame = 0;
    if (++m.chainGen == 0u)
        m.chainGen = 1u;
}

void xboxMeasurePhase(uint32_t phase, bool open)
{
    MeasureCounters &m = g_measure;
    if (phase >= 6u)
        return;
    if (open)
    {
        // What was raised so far belongs to the phase still open around this one.
        if (m.phaseDepth)
            sampleFlagsTo(m.phaseStack[m.phaseDepth - 1u]);
        else
            _mm_setcsr(_mm_getcsr() & ~0x3Fu);
        if (m.phaseDepth < 8u)
            m.phaseStack[m.phaseDepth++] = phase;
        if (phase == kPerfTickBefore && !(m.cwHave & 2u))
        {
            m.cwTick = x87ControlWord();
            m.cwHave |= 2u;
            char text[96];
            const int n = std::snprintf(text, sizeof(text), "[TS:m-once] x87 cw at lvTickBefore entry=%04x\n", m.cwTick);
            xboxLogWrite(text, unsigned(n > 0 ? n : 0));
        }
    }
    else
    {
        sampleFlagsTo(phase);
        if (m.phaseDepth && m.phaseStack[m.phaseDepth - 1u] == phase)
            --m.phaseDepth;
        if (phase == kPerfKick && !(m.cwHave & 4u))
        {
            m.cwKick = x87ControlWord();
            m.cwHave |= 4u;
            char text[96];
            const int n = std::snprintf(text, sizeof(text), "[TS:m-once] x87 cw after a kick=%04x\n", m.cwKick);
            xboxLogWrite(text, unsigned(n > 0 ? n : 0));
        }
    }
}

void xboxMeasureGameHooks()
{
    tsGameHookOn(TsGameFn::partPrecalcDmaData, TsHookPhase::Before, &precalcBefore);
    tsGameHookOn(TsGameFn::memReset, TsHookPhase::Before, &memResetBefore);
    tsGameHookOn(TsGameFn::memdbTick, TsHookPhase::Before, &memdbTickBefore);
}

void xboxMeasureChcr(uint32_t chcr)
{
    MeasureCounters &m = g_measure;
    if (m.chcrWalks++ == 0u)
    {
        m.chcrFirst = chcr;
        char text[96];
        const int n = std::snprintf(text, sizeof(text), "[TS:m-once] D1_CHCR at the first VIF1 chain walk=%08x (TTE %u)\n", chcr,
                                    (chcr >> 6) & 1u);
        xboxLogWrite(text, unsigned(n > 0 ? n : 0));
    }
    else if (chcr != m.chcrFirst)
    {
        ++m.chcrDiffer;
        m.chcrLast = chcr;
    }
}

void xboxMeasureChainCall(uint32_t addr)
{
    MeasureCounters &m = g_measure;
    ++m.chainCallsFrame;
    const uint32_t gen = m.chainGen;
    for (uint32_t i = ((addr >> 4) ^ (addr >> 14)) & 1023u, n = 0; n < 1024u; ++n, i = (i + 1u) & 1023u)
    {
        MeasureCounters::ChainSlot &s = m.chainSet[i];
        if (s.gen == gen && s.addr == addr)
            return;
        if (s.gen != gen)
        {
            s = {addr, gen};
            ++m.chainDistinctFrame;
            return;
        }
    }
    ++m.chainSetFull;
}

extern "C" void xboxMeasureDivCaller(uint32_t ret)
{
    ++g_measure.divs;
    measureCount(g_measure.divCaller, ret, g_measure.divOther);
}

// The lock census (src/xbox/winapi/sync_ts.c): kind 0 a critical section
// (contended: owned by another thread on entry), 1 an SRW lock (contended:
// the spins before it was taken).
extern "C" void xboxMeasureLock(const void *ret, const void *object, int kind, int contended)
{
    MeasureCounters &m = g_measure;
    measureCount(m.lockRet, uint32_t(reinterpret_cast<uintptr_t>(ret)), m.lockRetOther);
    measureCount(m.lockObj, uint32_t(reinterpret_cast<uintptr_t>(object)), m.lockObjOther);
    if (kind == 0)
    {
        ++m.csEnters;
        m.csContended += contended ? 1u : 0u;
    }
    else
    {
        ++m.srwAcquires;
        m.srwSpins += uint32_t(contended);
    }
}

// __aulldiv, the 64-bit unsigned division clang calls for uint64_t / uint64_t
// (stdcall: both operands on the stack, the quotient in edx:eax, 16 bytes
// popped), replacing nxdk's (libxboxrt's _aulldiv.obj is left out of the
// link when this object defines it): the caller's return address is
// counted first, then the same code as nxdk's _aulldiv.s (compiler-rt's
// __udivdi3; MIT or NCSA).
__asm__(".text\n"
        ".balign 4\n"
        ".globl __aulldiv\n"
        "__aulldiv:\n"
        "    pushl 0(%esp)\n"
        "    call _xboxMeasureDivCaller\n"
        "    addl $4, %esp\n"
        "    pushl %ebx\n"
        "    movl 20(%esp), %ebx\n"
        "    bsrl %ebx, %ecx\n"
        "    jz 9f\n"
        "    movl 16(%esp), %eax\n"
        "    shrl %cl, %eax\n"
        "    shrl %eax\n"
        "    notl %ecx\n"
        "    shll %cl, %ebx\n"
        "    orl %eax, %ebx\n"
        "    movl 12(%esp), %edx\n"
        "    movl 8(%esp), %eax\n"
        "    cmpl %ebx, %edx\n"
        "    jae 1f\n"
        "    divl %ebx\n"
        "    pushl %edi\n"
        "    notl %ecx\n"
        "    shrl %eax\n"
        "    shrl %cl, %eax\n"
        "    movl %eax, %edi\n"
        "    mull 20(%esp)\n"
        "    movl 12(%esp), %ebx\n"
        "    movl 16(%esp), %ecx\n"
        "    subl %eax, %ebx\n"
        "    sbbl %edx, %ecx\n"
        "    movl 24(%esp), %eax\n"
        "    imull %edi, %eax\n"
        "    subl %eax, %ecx\n"
        "    sbbl $0, %edi\n"
        "    xorl %edx, %edx\n"
        "    movl %edi, %eax\n"
        "    popl %edi\n"
        "    popl %ebx\n"
        "    ret $0x10\n"
        "1:\n"
        "    subl %ebx, %edx\n"
        "    divl %ebx\n"
        "    pushl %edi\n"
        "    notl %ecx\n"
        "    shrl %eax\n"
        "    orl $0x80000000, %eax\n"
        "    shrl %cl, %eax\n"
        "    movl %eax, %edi\n"
        "    mull 20(%esp)\n"
        "    movl 12(%esp), %ebx\n"
        "    movl 16(%esp), %ecx\n"
        "    subl %eax, %ebx\n"
        "    sbbl %edx, %ecx\n"
        "    movl 24(%esp), %eax\n"
        "    imull %edi, %eax\n"
        "    subl %eax, %ecx\n"
        "    sbbl $0, %edi\n"
        "    xorl %edx, %edx\n"
        "    movl %edi, %eax\n"
        "    popl %edi\n"
        "    popl %ebx\n"
        "    ret $0x10\n"
        "9:\n"
        "    movl 12(%esp), %eax\n"
        "    movl 16(%esp), %ecx\n"
        "    xorl %edx, %edx\n"
        "    divl %ecx\n"
        "    movl %eax, %ebx\n"
        "    movl 8(%esp), %eax\n"
        "    divl %ecx\n"
        "    movl %ebx, %edx\n"
        "    popl %ebx\n"
        "    ret $0x10\n");
#endif // TS_MEASURE_PUSHBC
