// Timing, CPU and memory telemetry for real-hardware runs (xbox_perf.h).
//
// Real consoles have no debugger that can sample a running game (it stops
// every thread), so what the frame costs is measured here and written to
// the log every few seconds. Everything is cumulative counters in fixed
// storage, updated where things happen and turned into per-frame figures
// for the interval when the status hook reports.
//
// Busy time. The frame histogram is filled at gameFrames++ (the frame's
// first draw, ts_overrides.cpp) with the time since the previous frame less
// the EE scheduler's blocking waits in it (exact, timed with the counter).
// A wait is not all idle CPU: other threads (the audio feeder) may run in
// it. The kernel's idle thread's KernelTime (clock ticks the idle thread
// was interrupted in) is the true idle; it is only exact over many ticks,
// so it is used for the interval's mean busy time, and the per-frame
// histogram stays on the exact EE waits. In a busy stretch both are ~0.
// Whether the kernel counts the idle thread's time at all is checked at
// start-up (a short sleep); if not, the mean uses the EE waits too.
//
// Phases. A bracket opens when a step's function is entered and closes
// when it returns to its call site, which may be much later when the game
// thread is switched out inside it (see ts_overrides.cpp). Its time is the
// wall time between, less what is accounted elsewhere in the meantime: the
// draw kick (gsMain runs on the same host thread), EE waits, and the audio
// feeder's mixing (xbox_raylib.cpp times it). What is left is the step's
// own work plus interrupts and the odd scheduler pass. (Audio mixed during
// an EE wait inside a bracket is taken off twice; there are none in a busy
// stretch.)
#include "xbox_perf.h"
#if TS_PERF
#include "xbox_log.h"
#include "gs_nv2a_backend.h"
#include "runtime/ee_scheduler.h"
#include "runtime/gs/gs_backend.h"
#include "runtime/gs/gs_frontend.h"
#include "runtime/gs/ps2_gif_arbiter.h"
#include "runtime/ps2_io_stats.h"
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1.h"

#include <nxdk/xbe.h>
#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>
#include <xmmintrin.h>

#include <atomic>
#include <cstdarg>
#include <cstdio>
#include <cstring>

extern uint32_t g_audioMixKcyc; // xbox_raylib.cpp: the audio feeder's mixing, thousands of cycles (cumulative)

// dlmalloc (nxdk's pdclib, USE_DL_PREFIX): its statistics.
extern "C"
{
    struct XboxDlMallinfo
    {
        size_t arena, ordblks, smblks, hblks, hblkhd, usmblks, fsmblks, uordblks, fordblks, keepcost;
    };
    XboxDlMallinfo dlmallinfo(void);
    size_t dlmalloc_footprint(void);
    size_t dlmalloc_max_footprint(void);
}

namespace
{
    inline uint64_t rdtsc() { return __builtin_ia32_rdtsc(); }
    // The performance counter is the time-stamp counter on the Xbox.
    uint64_t g_tscPerUs = 733;

    inline uint32_t fsDword(uint32_t offset)
    {
        uint32_t value;
        __asm__ volatile("movl %%fs:(%1), %0" : "=r"(value) : "r"(offset));
        return value;
    }
    // KPCR (fs): +0x28 PrcbData.CurrentThread, +0x30 IdleThread (xbox_hwprof.cpp).
    constexpr uint32_t kPcrCurrentThread = 0x28, kPcrIdleThread = 0x30;
    const volatile KTHREAD *g_idleThread = nullptr;
    bool g_idleCounted = false; // its KernelTime advanced in the start-up check

    // ------------------------------------------------------------ the log
    struct Line
    {
        char text[400];
        int n = 0;
        explicit Line(const char *tag) { add("%s", tag); }
        void add(const char *format, ...)
        {
            if (n >= int(sizeof(text)) - 2)
                return;
            va_list args;
            va_start(args, format);
            const int m = std::vsnprintf(text + n, sizeof(text) - size_t(n) - 1, format, args);
            va_end(args);
            if (m > 0)
                n += m < int(sizeof(text)) - n - 2 ? m : int(sizeof(text)) - n - 2;
        }
        // Microseconds as milliseconds with two decimals (pdclib's printf
        // has no %f).
        void ms(const char *name, uint64_t us)
        {
            add(" %s=%u.%02u", name, unsigned(us / 1000u), unsigned(us % 1000u / 10u));
        }
        // A count per frame with one decimal.
        void perFrame(const char *name, uint64_t count, uint32_t frames)
        {
            const uint64_t tenths = count * 10u / (frames ? frames : 1u);
            add(" %s=%u.%u", name, unsigned(tenths / 10u), unsigned(tenths % 10u));
        }
        void write()
        {
            text[n++] = '\n';
            xboxLogWrite(text, unsigned(n));
        }
    };

    // ---------------------------------------------------------- frame times
    constexpr uint32_t kBins = 128; // 1 ms each; the last also holds longer frames
    uint16_t g_frameBins[kBins];    // since the last report
    uint32_t g_windowBins[kBins];   // the TS_PERF_FROM..TO window (or the whole run)
    uint64_t g_lastFrameTsc = 0;
    int64_t g_lastFrameWaitUs = 0;
    enum class Window
    {
        Waiting,
        Open,
        Done
    };
    Window g_window = Window::Waiting;
    struct WindowStart
    {
        uint64_t tsc = 0;
        uint32_t frames = 0, reads = 0, idleTicks = 0, ticks = 0;
        int64_t waitUs = 0;
    } g_windowStart;

    uint32_t percentile(const uint32_t *bins, uint32_t total, uint32_t percent)
    {
        if (!total)
            return 0;
        const uint32_t want = (total * percent + 99u) / 100u;
        uint32_t seen = 0;
        for (uint32_t b = 0; b < kBins; ++b)
            if ((seen += bins[b]) >= want)
                return b;
        return kBins - 1u;
    }

    // ------------------------------------------------------ thread flags
    // MXCSR and x87 status sticky exception flags (IE DE ZE OE UE PE, bits
    // 0-5 in both): what was raised since the last sample, then cleared
    // (nothing in the game or runtime reads them). PE is set by nearly any
    // rounding and is only noted. Cumulative, written by the sampled
    // thread only.
    struct ThreadFlags
    {
        uint32_t samples = 0;
        uint32_t mxcsr = 0, x87 = 0;          // flags seen since boot (OR)
        uint32_t denormal = 0, underflow = 0; // samples with DE / UE (either unit)
    };
    ThreadFlags g_gameFlags, g_mainFlags;

    void sampleFlags(ThreadFlags &flags)
    {
        const uint32_t csr = _mm_getcsr();
        uint16_t status;
        __asm__ volatile("fnstsw %0" : "=m"(status));
        ++flags.samples;
        flags.mxcsr |= csr & 0x3Fu;
        flags.x87 |= status & 0x3Fu;
        const uint32_t raised = (csr | status) & 0x1Fu;
        flags.denormal += (raised & 0x02u) ? 1u : 0u;
        flags.underflow += (raised & 0x10u) ? 1u : 0u;
        if (csr & 0x1Fu)
            _mm_setcsr(csr & ~0x1Fu);
        if (status & 0x1Fu)
            __asm__ volatile("fnclex");
    }

    // ------------------------------------------------- renderer and GIF
#if TS_PERF_BACKEND
    enum BackendGroup : uint32_t
    {
        kBeXf,    // native VU1 runs' transform runs (BeginXfRun .. EndXfRun)
        kBePrim,  // primitives (Submit, SubmitStrip)
        kBeClut,  // LoadClut
        kBeXfer,  // transfers, uploads, read-backs
        kBeFlush, // Flush, TextureFlush, Sync
        kBeFrame, // Present, clears
        kBeOther,
        kBackendGroups
    };
    const char *const kBackendNames[kBackendGroups] = {"xf", "prim", "clut", "xfer", "flush", "frame", "misc"};
    // Cycles, cumulative: the renderer's calls by group, of them those made
    // inside a GIF packet, and the GIF packets the GS front end processed
    // (renderer calls included): [0] PATH1 (VU1 XGKICK), [1] PATH2 / PATH3.
    struct BackendTimes
    {
        uint64_t group[kBackendGroups] = {};
        uint64_t inGif = 0;
        uint64_t gif[2] = {};
    };
    BackendTimes g_beAll;  // every call, any thread
    BackendTimes g_beKick; // made on the executor thread while the draw kick is open
    uint32_t g_gifDepth = 0;
    volatile uint32_t g_kickThread = 0; // the open kick's KTHREAD (0: none open)

    inline bool inKick()
    {
        const uint32_t kick = g_kickThread;
        return kick && fsDword(kPcrCurrentThread) == kick;
    }

    void noteBackend(BackendGroup group, uint64_t cycles)
    {
        g_beAll.group[group] += cycles;
        if (inKick())
        {
            g_beKick.group[group] += cycles;
            if (g_gifDepth)
                g_beKick.inGif += cycles;
        }
    }
#endif

    // -------------------------------------------------------------- phases
    struct Clocks
    {
        uint64_t tsc = 0, kick = 0;
        int64_t waitUs = 0;
        uint32_t audioKcyc = 0;
    };
    struct OpenPhase
    {
        bool open = false;
        Clocks at;
        uint32_t nativeKcyc = 0, gpuWaitKcyc = 0, readbackKcyc = 0;
    };
    OpenPhase g_open[kPerfPhaseCount];

    struct PhaseTotals
    {
        uint64_t cycles[kPerfPhaseCount] = {};
        uint32_t calls[kPerfPhaseCount] = {};
        uint64_t player[4] = {}, view[4] = {}; // lvTickPlayer / lvGfx by call within the frame
        uint64_t kickNativeKcyc = 0, kickGpuWaitKcyc = 0, kickReadbackKcyc = 0;
        uint32_t lost = 0; // brackets opened again before they closed
    };
    PhaseTotals g_phases;
    uint32_t g_playerCall = 0, g_viewCall = 0;

    Clocks clocksNow()
    {
        Clocks c;
        c.tsc = rdtsc();
        c.kick = g_phases.cycles[kPerfKick];
        c.waitUs = ps2x::schedulerWaitProbe().waitedMicroseconds.load(std::memory_order_relaxed);
        c.audioKcyc = g_audioMixKcyc;
        return c;
    }

    // ------------------------------------------------- performance counters
#if TS_PMC
    struct PmcEvent
    {
        uint8_t event, umask;
        const char *name;
    };
    // P6 family events (Intel SDM vol. 3B, P6 family event table). FP_ASSIST
    // counts on counter 1 only. Data side first (REWRITE-PLAN.md M0.5).
    constexpr PmcEvent kPmcPairs[][2] = {
        {{0x05, 0x00, "misalign"}, {0x45, 0x00, "dcu_lines_in"}},
        {{0x05, 0x00, "misalign"}, {0x03, 0x00, "ld_blocks"}},
        {{0x45, 0x00, "dcu_lines_in"}, {0x48, 0x00, "dcu_miss_outst"}},
        {{0x6F, 0x00, "bus_tran_mem"}, {0x24, 0x00, "l2_lines_in"}},
        {{0x86, 0x00, "ifu_mem_stall"}, {0x85, 0x00, "itlb_miss"}},
        {{0x79, 0x00, "clk_unhalted"}, {0xC0, 0x00, "inst_retired"}},
        {{0xC0, 0x00, "inst_retired"}, {0x11, 0x00, "fp_assist"}},
        {{0xA2, 0x00, "resource_stalls"}, {0xD2, 0x00, "partial_rat"}},
    };
    constexpr uint32_t kPmcPairCount = sizeof(kPmcPairs) / sizeof(kPmcPairs[0]);
    constexpr uint32_t kEvtSel0 = 0x186, kEvtSel1 = 0x187, kPerfCtr0 = 0xC1, kPerfCtr1 = 0xC2;
    // USR, OS (the Xbox runs everything in ring 0), EN (PerfEvtSel0 only:
    // starts both counters; reserved in PerfEvtSel1).
    constexpr uint32_t kUsr = 1u << 16, kOs = 1u << 17, kEnable = 1u << 22;
    constexpr uint64_t kCounterMask = (1ull << 40) - 1u; // 40-bit counters

    bool g_pmcOk = false;
    uint32_t g_pmcPair = TS_PMC_PAIR % kPmcPairCount;
    uint64_t g_pmcLast[2] = {};

    inline uint64_t rdmsr(uint32_t msr)
    {
        uint32_t lo, hi;
        __asm__ volatile("rdmsr" : "=a"(lo), "=d"(hi) : "c"(msr));
        return (uint64_t(hi) << 32) | lo;
    }
    inline void wrmsr(uint32_t msr, uint64_t value)
    {
        __asm__ volatile("wrmsr" : : "c"(msr), "a"(uint32_t(value)), "d"(uint32_t(value >> 32)));
    }
    inline void cpuid(uint32_t leaf, uint32_t r[4])
    {
        __asm__ volatile("cpuid" : "=a"(r[0]), "=b"(r[1]), "=c"(r[2]), "=d"(r[3]) : "a"(leaf), "c"(0u));
    }

    // Counting stops, both counters restart from 0 on the pair's events.
    void pmcProgram(uint32_t pair)
    {
        const PmcEvent &e0 = kPmcPairs[pair][0], &e1 = kPmcPairs[pair][1];
        wrmsr(kEvtSel0, 0u);
        wrmsr(kPerfCtr0, 0u);
        wrmsr(kPerfCtr1, 0u);
        wrmsr(kEvtSel1, e1.event | (uint32_t(e1.umask) << 8) | kUsr | kOs);
        wrmsr(kEvtSel0, e0.event | (uint32_t(e0.umask) << 8) | kUsr | kOs | kEnable);
        g_pmcLast[0] = rdmsr(kPerfCtr0) & kCounterMask;
        g_pmcLast[1] = rdmsr(kPerfCtr1) & kCounterMask;
    }

    // A P6-family Intel processor with MSRs (the Xbox's Pentium III).
    // xemu ignores the writes and reads 0.
    void pmcInit()
    {
        uint32_t r[4];
        cpuid(0u, r);
        const bool intel = r[1] == 0x756E6547u && r[3] == 0x49656E69u && r[2] == 0x6C65746Eu; // GenuineIntel
        cpuid(1u, r);
        const uint32_t family = (r[0] >> 8) & 0xFu;
        g_pmcOk = intel && family == 6u && (r[3] & (1u << 5)) != 0u;
        if (g_pmcOk)
            pmcProgram(g_pmcPair);
        char text[160];
        const int n = std::snprintf(text, sizeof(text), "[TS:cpu] cpuid %08x performance counters %s, pair %u (%s, %s)%s\n",
                                    r[0], g_pmcOk ? "on" : "off", g_pmcPair, kPmcPairs[g_pmcPair][0].name,
                                    kPmcPairs[g_pmcPair][1].name, TS_PMC_ROTATE ? ", rotating" : "");
        xboxLogWrite(text, unsigned(n > 0 ? n : 0));
    }
#endif

    // ---------------------------------------------------------------- memory
    std::atomic<uint32_t> g_minFreePages{0xFFFFFFFFu};      // since boot
    std::atomic<uint32_t> g_minFreePagesRecent{0xFFFFFFFFu}; // since the last report

    void noteFree(uint32_t pages)
    {
        for (std::atomic<uint32_t> *mark : {&g_minFreePages, &g_minFreePagesRecent})
        {
            uint32_t seen = mark->load(std::memory_order_relaxed);
            while (pages < seen && !mark->compare_exchange_weak(seen, pages, std::memory_order_relaxed))
            {
            }
        }
    }

    MM_STATISTICS memoryStatistics()
    {
        MM_STATISTICS stats{};
        stats.Length = sizeof(stats);
        MmQueryStatistics(&stats);
        return stats;
    }

    // Physical pages none of the kernel's other counters cover: contiguous
    // allocations (the renderer's textures and buffers, pbkit, audio) and
    // the kernel's own.
    uint32_t contiguousPages(const MM_STATISTICS &stats)
    {
        const uint32_t known = stats.AvailablePages + stats.CachePagesCommitted + stats.PoolPagesCommitted +
                               stats.StackPagesCommitted + stats.ImagePagesCommitted +
                               stats.VirtualMemoryBytesCommitted / 4096u;
        return stats.TotalPhysicalPages > known ? stats.TotalPhysicalPages - known : 0u;
    }
    uint32_t g_contiguousAtInit = 0;

    // The last 16 requests of kPerfBigAllocation bytes or more: when, how
    // big, whether they got memory, the free memory after, and the callers
    // (operator new's return address, then the next two return addresses
    // found on the stack; resolve with build/xbox/main.map).
    struct BigAllocation
    {
        uint32_t bytes, result, frame, freeKB, ms;
        uint32_t callers[3];
    };
    constexpr uint32_t kBigRing = 16;
    BigAllocation g_big[kBigRing];
    std::atomic<uint32_t> g_bigCount{0};
    uint32_t g_textStart = 0, g_textEnd = 0;
    uint64_t g_bootTsc = 0;

    // A value that looks like a return address: inside .text, and after a
    // call instruction (E8 rel32; FF /2 through a register or memory).
    bool returnAddress(uint32_t a)
    {
        if (a < g_textStart + 8u || a >= g_textEnd)
            return false;
        const uint8_t *p = reinterpret_cast<const uint8_t *>(a);
        auto ffCall = [](const uint8_t *op) { return op[0] == 0xFFu && (op[1] & 0x38u) == 0x10u; };
        return p[-5] == 0xE8u || ffCall(p - 2) || ffCall(p - 3) || ffCall(p - 4) || ffCall(p - 6) || ffCall(p - 7);
    }

    // Scans up the stack from here: past operator new's return address
    // (first; it is also on the stack as an argument copy, so every copy is
    // skipped), the next two values that look like return addresses.
    void findCallers(uint32_t first, uint32_t callers[3])
    {
        callers[0] = first;
        callers[1] = callers[2] = 0u;
        if (!g_textEnd)
            return;
        uint32_t sp;
        __asm__ volatile("movl %%esp, %0" : "=r"(sp));
        const uint32_t top = uint32_t(reinterpret_cast<uintptr_t>(KeGetCurrentThread()->StackBase));
        bool past = false;
        uint32_t found = 1;
        for (uint32_t at = sp; at + 4u <= top && at < sp + 4096u && found < 3u; at += 4u)
        {
            const uint32_t value = *reinterpret_cast<const uint32_t *>(at);
            if (value == first)
                past = true;
            else if (past && value != callers[found - 1u] && returnAddress(value))
                callers[found++] = value;
        }
    }

    // ------------------------------------------------------ report state
    struct Reported
    {
        uint64_t tsc = 0;
        uint32_t frames = 0;
        int64_t waitUs = 0;
        uint32_t idleTicks = 0, ticks = 0;
        PhaseTotals phases;
        uint32_t nativeKcyc = 0, gpuWaitKcyc = 0, readbackKcyc = 0, audioKcyc = 0;
        uint32_t siteWaits[ps2x::SchedulerWaitProbe::kSites] = {};
        int64_t siteUs[ps2x::SchedulerWaitProbe::kSites] = {};
        uint32_t siteBuckets[ps2x::SchedulerWaitProbe::kSites][ps2x::SchedulerWaitProbe::kWaitBuckets] = {};
        ps2x::EeProtocolStats ee;
        uint32_t loops = 0, unwinds = 0, vu1Runs = 0, vif1Chains = 0;
        uint64_t syscalls = 0, rpcs = 0;
        uint32_t rtcSamples = 0, rtcIdle = 0, gpuGraph = 0, gpuFifo = 0, gpuBusy = 0;
        uint32_t bigCount = 0;
        ThreadFlags gameFlags, mainFlags;
#if TS_PERF_BACKEND
        BackendTimes beAll, beKick;
#endif
    };
    Reported g_last;
    uint32_t g_reports = 0;

    // A copy of totals the game thread is updating (64-bit fields are two
    // stores on this CPU): taken again until two copies agree.
    template <typename T>
    void stableCopy(T &out, const T &live)
    {
        for (int tries = 0; tries < 4; ++tries)
        {
            std::memcpy(&out, &live, sizeof(T));
            __asm__ volatile("" : : : "memory"); // read live again
            if (std::memcmp(&out, &live, sizeof(T)) == 0)
                return;
        }
    }

    uint32_t idleTicks() { return g_idleThread ? g_idleThread->KernelTime : 0u; }
    uint32_t tickCount() { return KeTickCount; }

    // Kernel idle time in a span of wall time (from its clock ticks).
    uint64_t idleMicroseconds(uint64_t wallUs, uint32_t idle, uint32_t ticks)
    {
        return ticks ? wallUs * idle / ticks : 0u;
    }
    // Not busy: the kernel's idle time where it is counted, else the EE waits.
    uint64_t notBusy(uint64_t idleUs, uint64_t waitUs) { return g_idleCounted ? idleUs : waitUs; }

    void writeWindow(uint32_t reads)
    {
        const uint64_t wallUs = (rdtsc() - g_windowStart.tsc) / g_tscPerUs;
        const uint32_t frames = g_nv2aTextureStats.gameFrames - g_windowStart.frames;
        const int64_t waitUs = ps2x::schedulerWaitProbe().waitedMicroseconds.load(std::memory_order_relaxed) - g_windowStart.waitUs;
        const uint64_t idleUs = idleMicroseconds(wallUs, idleTicks() - g_windowStart.idleTicks, tickCount() - g_windowStart.ticks);
        uint32_t counted = 0, longest = 0;
        for (uint32_t b = 0; b < kBins; ++b)
            if (g_windowBins[b])
            {
                counted += g_windowBins[b];
                longest = b;
            }
        const uint32_t f = frames ? frames : 1u;
        const uint64_t idle = notBusy(idleUs, waitUs > 0 ? uint64_t(waitUs) : 0u);
        const uint64_t busyUs = wallUs - (idle < wallUs ? idle : wallUs);
        Line line("[TS:perf] window");
        line.add(" reads=%u-%u frames=%u", g_windowStart.reads, reads, frames);
        line.ms("wall", wallUs / f);
        line.ms("busy", busyUs / f);
        const uint64_t busyPerFrame = busyUs / f;
        const uint64_t fpsTenths = busyPerFrame ? 10000000u / busyPerFrame : 0u;
        line.add(" fpsEq=%u.%u", unsigned(fpsTenths / 10u), unsigned(fpsTenths % 10u));
        line.ms("eewait", uint64_t(waitUs > 0 ? waitUs : 0) / f);
        line.ms("kidle", idleUs / f);
        line.add(" p50=%u p90=%u p99=%u max=%u n=%u", percentile(g_windowBins, counted, 50), percentile(g_windowBins, counted, 90),
                 percentile(g_windowBins, counted, 99), longest, counted);
        line.write();
        // The histogram (ms bin:frames, busy time as at gameFrames++), 16
        // bins a line.
        Line bins("[TS:fh]");
        uint32_t inLine = 0;
        for (uint32_t b = 0; b < kBins; ++b)
        {
            if (!g_windowBins[b])
                continue;
            bins.add(" %u:%u", b, g_windowBins[b]);
            if (++inLine == 16u)
            {
                bins.write();
                bins = Line("[TS:fh]");
                inLine = 0;
            }
        }
        if (inLine)
            bins.write();
    }

#if TS_PERF_BACKEND
    // The renderer, every call timed by group (TS_PERF_BACKEND).
    class TimedBackend final : public GSRasterBackend
    {
    public:
        explicit TimedBackend(std::unique_ptr<GSRasterBackend> inner) : m_inner(std::move(inner)) {}

        void Initialize(uint8_t *vram, uint32_t vramSize) override { m_inner->Initialize(vram, vramSize); }
        void Reset() override { m_inner->Reset(); }
        void Submit(const GSPrimitiveBatch &batch) override
        {
            Timed t(kBePrim);
            m_inner->Submit(batch);
        }
        bool SubmitStrip(const GSDrawState &state, const GSVertex *vertices, uint32_t count) override
        {
            Timed t(kBePrim);
            return m_inner->SubmitStrip(state, vertices, count);
        }
        bool BeginXfRun(const GSDrawState &state, const GSXfConstants &constants, GSXfCursor &cursor) override
        {
            Timed t(kBeXf);
            return m_inner->BeginXfRun(state, constants, cursor);
        }
        void GrowXfCursor(GSXfCursor &cursor, uint32_t count) override
        {
            Timed t(kBeXf);
            m_inner->GrowXfCursor(cursor, count);
        }
        void EmitXfStrip(const GSXfVertex *vertices, uint32_t count) override
        {
            Timed t(kBeXf);
            m_inner->EmitXfStrip(vertices, count);
        }
        void EndXfRun(GSXfCursor &cursor) override
        {
            Timed t(kBeXf);
            m_inner->EndXfRun(cursor);
        }
        void LoadClut(const GSTex0Reg &tex0, const GSTexClutReg &texclut) override
        {
            Timed t(kBeClut);
            m_inner->LoadClut(tex0, texclut);
        }
        uint64_t DebugClutState() override { return m_inner->DebugClutState(); }
        void BeginTransfer(const GSTransferCommand &command) override
        {
            Timed t(kBeXfer);
            m_inner->BeginTransfer(command);
        }
        void UploadImage(const uint8_t *data, uint32_t sizeBytes) override
        {
            Timed t(kBeXfer);
            m_inner->UploadImage(data, sizeBytes);
        }
        void Flush() override
        {
            Timed t(kBeFlush);
            m_inner->Flush();
        }
        void TextureFlush() override
        {
            Timed t(kBeFlush);
            m_inner->TextureFlush();
        }
        void Sync(GSSyncReason reason) override
        {
            Timed t(kBeFlush);
            m_inner->Sync(reason);
        }
        PresentationFrame Present(const GSPresentationRequest &request) override
        {
            Timed t(kBeFrame);
            return m_inner->Present(request);
        }
        bool PresentAsync(const GSPresentationRequest &request, std::function<void(PresentationFrame &&)> done) override
        {
            return m_inner->PresentAsync(request, std::move(done));
        }
        bool ClearFramebuffer(const GSContext &context, uint32_t rgba) override
        {
            Timed t(kBeFrame);
            return m_inner->ClearFramebuffer(context, rgba);
        }
        uint32_t ConsumeLocalToHostBytes(uint8_t *dst, uint32_t maxBytes) override
        {
            Timed t(kBeXfer);
            return m_inner->ConsumeLocalToHostBytes(dst, maxBytes);
        }
        uint32_t ReadVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y) const override
        {
            Timed t(kBeOther);
            return m_inner->ReadVram(psm, base, bw, x, y);
        }
        void WriteVram(uint32_t psm, uint32_t base, uint32_t bw, uint32_t x, uint32_t y, uint32_t value) override
        {
            Timed t(kBeOther);
            m_inner->WriteVram(psm, base, bw, x, y, value);
        }
        void SnapshotVram(std::vector<uint8_t> &out) const override { m_inner->SnapshotVram(out); }
        GSTransferSnapshot GetTransferSnapshot() const override { return m_inner->GetTransferSnapshot(); }

    private:
        struct Timed
        {
            explicit Timed(BackendGroup group) : group(group), start(rdtsc()) {}
            ~Timed() { noteBackend(group, rdtsc() - start); }
            BackendGroup group;
            uint64_t start;
        };
        std::unique_ptr<GSRasterBackend> m_inner;
    };
#endif
}

void xboxPerfInit()
{
    g_bootTsc = rdtsc();
    const uint64_t frequency = KeQueryPerformanceFrequency();
    if (frequency >= 1000000u)
        g_tscPerUs = frequency / 1000000u;
    const uint32_t current = fsDword(kPcrCurrentThread);
    const uint32_t idle = fsDword(kPcrIdleThread);
    if (current == reinterpret_cast<uint32_t>(KeGetCurrentThread()) && idle >= 0x80000000u && idle != current)
        g_idleThread = reinterpret_cast<const volatile KTHREAD *>(idle);
    if (const XBE_SECTION_HEADER *text = nxXbeGetSectionByName(".text"))
    {
        g_textStart = text->VirtualAddress;
        g_textEnd = text->VirtualAddress + text->VirtualSize;
    }
    // Does the kernel count the idle thread's time? Nothing else runs yet:
    // in a 30 ms sleep it should be most of the ticks.
    const uint32_t idle0 = idleTicks(), ticks0 = tickCount();
    Sleep(30);
    const uint32_t idleSlept = idleTicks() - idle0, ticksSlept = tickCount() - ticks0;
    g_idleCounted = g_idleThread && ticksSlept && idleSlept * 2u >= ticksSlept;
    const MM_STATISTICS stats = memoryStatistics();
    noteFree(stats.AvailablePages);
    g_contiguousAtInit = contiguousPages(stats);
    g_last.tsc = rdtsc();
    g_last.idleTicks = idleTicks();
    g_last.ticks = tickCount();
    char text[200];
    const int n = std::snprintf(text, sizeof(text),
                                "[TS:perf] init %u MHz idle thread %08x (%u of %u ticks in a 30 ms sleep: %s) .text %08x-%08x\n",
                                unsigned(g_tscPerUs), unsigned(reinterpret_cast<uintptr_t>(g_idleThread)), idleSlept, ticksSlept,
                                g_idleCounted ? "busy = wall - kernel idle" : "not counted, busy = wall - EE waits", g_textStart,
                                g_textEnd);
    xboxLogWrite(text, unsigned(n > 0 ? n : 0));
#if TS_PMC
    pmcInit();
#endif
}

void xboxPerfGameFrame()
{
    const uint64_t now = rdtsc();
    const int64_t waited = ps2x::schedulerWaitProbe().waitedMicroseconds.load(std::memory_order_relaxed);
    if (g_lastFrameTsc)
    {
        uint64_t us = (now - g_lastFrameTsc) / g_tscPerUs;
        const uint64_t wait = waited > g_lastFrameWaitUs ? uint64_t(waited - g_lastFrameWaitUs) : 0u;
        us -= wait < us ? wait : us;
        const uint32_t bin = us / 1000u < kBins ? uint32_t(us / 1000u) : kBins - 1u;
        if (g_frameBins[bin] != 0xFFFFu)
            ++g_frameBins[bin];
        if (g_window != Window::Done)
            ++g_windowBins[bin];
    }
    g_lastFrameTsc = now;
    g_lastFrameWaitUs = waited;
    sampleFlags(g_gameFlags);
}

void xboxPerfPhaseOpen(uint32_t phase)
{
    OpenPhase &o = g_open[phase];
    if (o.open)
        ++g_phases.lost;
    if (phase == kPerfGameTick)
        g_playerCall = g_viewCall = 0;
    o.open = true;
    if (phase == kPerfKick)
    {
        o.nativeKcyc = g_nv2aTextureStats.kcycNative;
        o.gpuWaitKcyc = g_nv2aTextureStats.kcycWait;
        o.readbackKcyc = g_nv2aTextureStats.kcycReadback;
#if TS_PERF_BACKEND
        g_kickThread = fsDword(kPcrCurrentThread);
#endif
    }
    o.at = clocksNow();
}

void xboxPerfPhaseClose(uint32_t phase)
{
    OpenPhase &o = g_open[phase];
    if (!o.open)
        return;
    const Clocks now = clocksNow();
    o.open = false;
    const uint64_t span = now.tsc - o.at.tsc;
    const uint64_t waited = now.waitUs > o.at.waitUs ? uint64_t(now.waitUs - o.at.waitUs) : 0u;
    uint64_t elsewhere = waited * g_tscPerUs + uint64_t(uint32_t(now.audioKcyc - o.at.audioKcyc)) * 1000u;
    if (phase != kPerfKick)
        elsewhere += now.kick - o.at.kick;
    const uint64_t cycles = span > elsewhere ? span - elsewhere : 0u;
    g_phases.cycles[phase] += cycles;
    ++g_phases.calls[phase];
    if (phase == kPerfTickPlayer)
        g_phases.player[g_playerCall < 3u ? g_playerCall++ : 3u] += cycles;
    else if (phase == kPerfGfx)
        g_phases.view[g_viewCall < 3u ? g_viewCall++ : 3u] += cycles;
    else if (phase == kPerfKick)
    {
        g_phases.kickNativeKcyc += uint32_t(g_nv2aTextureStats.kcycNative - o.nativeKcyc);
        g_phases.kickGpuWaitKcyc += uint32_t(g_nv2aTextureStats.kcycWait - o.gpuWaitKcyc);
        g_phases.kickReadbackKcyc += uint32_t(g_nv2aTextureStats.kcycReadback - o.readbackKcyc);
#if TS_PERF_BACKEND
        g_kickThread = 0;
#endif
    }
}

void xboxPerfNoteAllocation(size_t bytes, const void *result, const void *caller)
{
    const uint32_t pages = memoryStatistics().AvailablePages;
    noteFree(pages);
    BigAllocation &entry = g_big[g_bigCount.fetch_add(1u, std::memory_order_relaxed) % kBigRing];
    entry.bytes = uint32_t(bytes);
    entry.result = uint32_t(reinterpret_cast<uintptr_t>(result));
    entry.frame = g_nv2aTextureStats.gameFrames;
    entry.freeKB = pages * 4u;
    entry.ms = uint32_t((rdtsc() - g_bootTsc) / g_tscPerUs / 1000u);
    findCallers(uint32_t(reinterpret_cast<uintptr_t>(caller)), entry.callers);
}

void xboxPerfDumpAllocations()
{
    const MM_STATISTICS stats = memoryStatistics();
    char text[200];
    int n = std::snprintf(text, sizeof(text),
                          "[TS:mem] out of memory: free %uK (lowest %uK), heap %uK (largest %uK), contiguous %uK\n",
                          unsigned(stats.AvailablePages * 4u), unsigned(g_minFreePages.load() * 4u),
                          unsigned(dlmalloc_footprint() / 1024u), unsigned(dlmalloc_max_footprint() / 1024u),
                          unsigned(contiguousPages(stats) * 4u));
    xboxLogWrite(text, unsigned(n > 0 ? n : 0));
    const XboxDlMallinfo info = dlmallinfo();
    n = std::snprintf(text, sizeof(text), "[TS:mem] heap in use %uK, free inside %uK (top %uK), mapped %uK in %u\n",
                      unsigned(info.uordblks / 1024u), unsigned(info.fordblks / 1024u), unsigned(info.keepcost / 1024u),
                      unsigned(info.hblkhd / 1024u), unsigned(info.hblks));
    xboxLogWrite(text, unsigned(n > 0 ? n : 0));
    const uint32_t count = g_bigCount.load();
    for (uint32_t i = 0; i < kBigRing && i < count; ++i)
    {
        const BigAllocation &e = g_big[(count - 1u - i) % kBigRing];
        n = std::snprintf(text, sizeof(text),
                          "[TS:mem] big -%u: %u bytes %s at %u ms (frame %u), free after %uK, from %08x %08x %08x\n", i,
                          e.bytes, e.result ? "ok" : "FAILED", e.ms, e.frame, e.freeKB, e.callers[0], e.callers[1],
                          e.callers[2]);
        xboxLogWrite(text, unsigned(n > 0 ? n : 0));
    }
}

void xboxPerfHostFrame(bool scriptActive, uint32_t scriptReads)
{
    noteFree(memoryStatistics().AvailablePages);
    if (!scriptActive)
        return;
    if (g_window == Window::Waiting && scriptReads >= TS_PERF_FROM && scriptReads < TS_PERF_TO)
    {
        std::memset(g_windowBins, 0, sizeof(g_windowBins));
        g_windowStart.tsc = rdtsc();
        g_windowStart.frames = g_nv2aTextureStats.gameFrames;
        g_windowStart.reads = scriptReads;
        g_windowStart.waitUs = ps2x::schedulerWaitProbe().waitedMicroseconds.load(std::memory_order_relaxed);
        g_windowStart.idleTicks = idleTicks();
        g_windowStart.ticks = tickCount();
        g_window = Window::Open;
    }
    else if (g_window == Window::Open && scriptReads >= TS_PERF_TO)
    {
        g_window = Window::Done;
        writeWindow(scriptReads);
    }
}

void xboxPerfReport(const XboxPerfInputs &in)
{
    Reported now;
    now.tsc = rdtsc();
    now.frames = g_nv2aTextureStats.gameFrames;
    const ps2x::SchedulerWaitProbe &probe = ps2x::schedulerWaitProbe();
    now.waitUs = probe.waitedMicroseconds.load(std::memory_order_relaxed);
    now.idleTicks = idleTicks();
    now.ticks = tickCount();
    stableCopy(now.phases, g_phases);
    now.nativeKcyc = g_nv2aTextureStats.kcycNative;
    now.gpuWaitKcyc = g_nv2aTextureStats.kcycWait;
    now.readbackKcyc = g_nv2aTextureStats.kcycReadback;
    now.audioKcyc = g_audioMixKcyc;
    for (int s = 0; s < ps2x::SchedulerWaitProbe::kSites; ++s)
    {
        now.siteWaits[s] = probe.siteWaits[s].load(std::memory_order_relaxed);
        now.siteUs[s] = probe.siteMicroseconds[s].load(std::memory_order_relaxed);
        for (int b = 0; b < ps2x::SchedulerWaitProbe::kWaitBuckets; ++b)
            now.siteBuckets[s][b] = probe.siteBuckets[s][b].load(std::memory_order_relaxed);
    }
    stableCopy(now.ee, ps2x::g_eeProtocolStats);
    now.loops = g_eeSchedulerStats.loopIterations;
    now.unwinds = g_eeSchedulerStats.unwinds;
    now.vu1Runs = g_vu1Stats.runs;
    now.vif1Chains = g_vif1StreamStats.chains;
    now.syscalls = ps2x::guestCallProbe().syscalls.load(std::memory_order_relaxed);
    now.rpcs = ps2x::guestCallProbe().rpcs.load(std::memory_order_relaxed);
    now.rtcSamples = in.rtcSamples;
    now.rtcIdle = in.rtcIdle;
    now.gpuGraph = in.gpuGraph;
    now.gpuFifo = in.gpuFifo;
    now.gpuBusy = in.gpuBusy;
    now.bigCount = g_bigCount.load(std::memory_order_relaxed);
#if TS_PERF_BACKEND
    stableCopy(now.beAll, g_beAll);
    stableCopy(now.beKick, g_beKick);
#endif
    sampleFlags(g_mainFlags);
    stableCopy(now.gameFlags, g_gameFlags);
    now.mainFlags = g_mainFlags;
    ++g_reports;

    const Reported &was = g_last;
    const uint32_t frames = now.frames - was.frames;
    const uint32_t f = frames ? frames : 1u;
    const uint64_t wallUs = (now.tsc - was.tsc) / g_tscPerUs;
    const uint64_t waitUs = now.waitUs > was.waitUs ? uint64_t(now.waitUs - was.waitUs) : 0u;
    const uint64_t idleUs = idleMicroseconds(wallUs, now.idleTicks - was.idleTicks, now.ticks - was.ticks);
    const uint64_t idle = notBusy(idleUs, waitUs);
    const uint64_t busyUs = wallUs - (idle < wallUs ? idle : wallUs);
    const uint64_t audioUs = uint64_t(uint32_t(now.audioKcyc - was.audioKcyc)) * 1000u / g_tscPerUs;
    auto usOf = [](uint64_t cycles) { return cycles / g_tscPerUs; };

    // [TS:perf]: the old fields first (t, vsync, game, idle = EE waits since
    // boot, reads), then this interval per frame: wall time, busy time
    // (wall less true idle) and its frame rate, percentiles of the frames'
    // busy times (ms), EE waits, kernel idle, then the percentiles of the
    // run so far ("run") or of the TS_PERF_FROM..TO window ("win").
    {
        uint32_t bins[kBins], counted = 0, windowCount = 0;
        for (uint32_t b = 0; b < kBins; ++b)
        {
            bins[b] = g_frameBins[b];
            counted += bins[b];
            windowCount += g_windowBins[b];
        }
        std::memset(g_frameBins, 0, sizeof(g_frameBins));
        Line line("[TS:perf]");
        line.add(" t=%u vsync=%u game=%u idle=%ums reads=%u f=%u", in.seconds, unsigned(in.vsync), now.frames,
                 unsigned(now.waitUs / 1000), in.scriptReads, frames);
        line.ms("wall", wallUs / f);
        line.ms("busy", busyUs / f);
        const uint64_t busyPerFrame = busyUs / f;
        const uint64_t fpsTenths = busyPerFrame ? 10000000u / busyPerFrame : 0u;
        line.add(" fpsEq=%u.%u", unsigned(fpsTenths / 10u), unsigned(fpsTenths % 10u));
        line.add(" p50=%u p90=%u p99=%u", percentile(bins, counted, 50), percentile(bins, counted, 90), percentile(bins, counted, 99));
        line.ms("eewait", waitUs / f);
        line.ms("kidle", idleUs / f);
        line.add(" %s=%u/%u/%u n=%u", g_window == Window::Waiting ? "run" : "win", percentile(g_windowBins, windowCount, 50),
                 percentile(g_windowBins, windowCount, 90), percentile(g_windowBins, windowCount, 99), windowCount);
        line.write();
    }

#if TS_PERF_DETAIL
    // [TS:phase]: ms a frame of each step (exclusive, see the top), calls a
    // frame for the repeated ones, the first four players' and viewports'
    // own times, and inside the kick: native VU1 runs (their renderer calls
    // included; vu1all: all native runs, in the kick or not), the
    // renderer's GPU waits and read-backs (inside those), VU1 runs on the
    // recompiled / interpreted path (a frame); then the audio feeder's
    // mixing (ms a frame and share of the time) and the busy time no
    // bracket or the audio covers.
    {
        const PhaseTotals &a = now.phases, &b = was.phases;
        uint64_t total = 0;
        Line line("[TS:phase]");
        line.add(" f=%u", frames);
        const char *const names[kPerfPhaseCount] = {"tick", "before", "player", "after", "gfx", "kick"};
        for (uint32_t p = 0; p < kPerfPhaseCount; ++p)
        {
            const uint64_t cycles = a.cycles[p] - b.cycles[p];
            total += cycles;
            line.ms(names[p], usOf(cycles) / f);
            if (p == kPerfTickPlayer || p == kPerfGfx)
                line.perFrame("n", a.calls[p] - b.calls[p], f);
        }
        auto byCall = [&](const char *name, const uint64_t *now4, const uint64_t *was4) {
            line.add(" %s", name);
            for (uint32_t i = 0; i < 4; ++i)
            {
                const uint64_t us = usOf(now4[i] - was4[i]) / f;
                line.add("%s%u.%02u", i ? "/" : "=", unsigned(us / 1000u), unsigned(us % 1000u / 10u));
            }
        };
        byCall("pp", a.player, b.player);
        byCall("vp", a.view, b.view);
        line.ms("vu1", (a.kickNativeKcyc - b.kickNativeKcyc) * 1000u / g_tscPerUs / f);
        line.ms("vu1all", uint64_t(uint32_t(now.nativeKcyc - was.nativeKcyc)) * 1000u / g_tscPerUs / f);
        line.ms("gpuwait", (a.kickGpuWaitKcyc - b.kickGpuWaitKcyc) * 1000u / g_tscPerUs / f);
        line.ms("readback", (a.kickReadbackKcyc - b.kickReadbackKcyc) * 1000u / g_tscPerUs / f);
        line.perFrame("vu1r", now.vu1Runs - was.vu1Runs, f);
        const uint64_t audioTenths = wallUs ? audioUs * 1000u / wallUs : 0u;
        line.add(" audio=%u.%02u(%u.%u%%)", unsigned(audioUs / f / 1000u), unsigned(audioUs / f % 1000u / 10u),
                 unsigned(audioTenths / 10u), unsigned(audioTenths % 10u));
        const uint64_t accounted = usOf(total) + audioUs;
        line.ms("other", (busyUs > accounted ? busyUs - accounted : 0u) / f);
        line.add(" lost=%u", a.lost - b.lost);
        line.write();
    }
#endif

#if TS_PERF_BACKEND
    // [TS:kick] (TS_PERF_BACKEND): the draw kick in four parts that add up
    // to it, ms a frame: walk = DMA chain walk, VIF decode, MSCAL dispatch
    // and VU1 runs off the native path (vu1r); vu1x = the native VU1 runs'
    // own work (with the GS state they set directly); gs = the GS front end
    // on GIF packets; nv2a = the renderer. Then the renderer by group inside
    // the kick, and outside it (nv2aout: presents, mostly). The split
    // assumes PATH1 packets and renderer calls outside GIF packets come
    // from native runs (vu1r ~0).
    {
        const BackendTimes &a = now.beKick, &b = was.beKick;
        const int64_t kick = int64_t(now.phases.cycles[kPerfKick] - was.phases.cycles[kPerfKick]);
        const int64_t vu1 = int64_t((now.phases.kickNativeKcyc - was.phases.kickNativeKcyc) * 1000u);
        const int64_t gif1 = int64_t(a.gif[0] - b.gif[0]), gif23 = int64_t(a.gif[1] - b.gif[1]);
        const int64_t inGif = int64_t(a.inGif - b.inGif);
        int64_t nv2a = 0, outside = 0;
        for (uint32_t g = 0; g < kBackendGroups; ++g)
        {
            nv2a += int64_t(a.group[g] - b.group[g]);
            outside += int64_t((now.beAll.group[g] - was.beAll.group[g]) - (a.group[g] - b.group[g]));
        }
        Line line("[TS:kick]");
        line.add(" f=%u", frames);
        // Negative only through the assumption above: shown as 0.
        auto ms = [&](const char *name, int64_t cycles) { line.ms(name, usOf(uint64_t(cycles > 0 ? cycles : 0)) / f); };
        ms("kick", kick);
        ms("walk", kick - vu1 - gif23);
        ms("vu1x", vu1 - gif1 - (nv2a - inGif));
        ms("gs", gif1 + gif23 - inGif);
        ms("nv2a", nv2a);
        for (uint32_t g = 0; g < kBackendGroups; ++g)
            ms(kBackendNames[g], int64_t(a.group[g] - b.group[g]));
        ms("gif1", gif1);
        ms("gif23", gif23);
        ms("nv2aout", outside);
        line.write();
    }
#endif

    // [TS:ee]: the EE scheduler. Waits by call site over the interval
    // (count/ms and the length histogram), then per frame: dispatcher
    // passes, longjmp unwinds, checkpoints past the fast path and those
    // that fired (return unwinds), device batches, catch-ups, EE cycles
    // charged (thousands), kernel calls, RPCs, VIF1 chains.
    {
        Line line("[TS:ee]");
        line.add(" f=%u", frames);
        for (int s = 1; s < ps2x::SchedulerWaitProbe::kSites; ++s)
        {
            line.add(" w%d=%u/%ums(", s, now.siteWaits[s] - was.siteWaits[s], unsigned((now.siteUs[s] - was.siteUs[s]) / 1000));
            for (int k = 0; k < ps2x::SchedulerWaitProbe::kWaitBuckets; ++k)
                line.add("%s%u", k ? "," : "", now.siteBuckets[s][k] - was.siteBuckets[s][k]);
            line.add(")");
        }
        line.perFrame("it", now.loops - was.loops, f);
        line.perFrame("unw", now.unwinds - was.unwinds, f);
        line.perFrame("cp", now.ee.slowCheckpoints - was.ee.slowCheckpoints, f);
        line.perFrame("fired", now.ee.firedCheckpoints - was.ee.firedCheckpoints, f);
        line.perFrame("dev", now.ee.deviceBatches - was.ee.deviceBatches, f);
        line.perFrame("catchup", now.ee.catchUps - was.ee.catchUps, f);
        line.add(" catchupK=%u", unsigned((now.ee.catchUpCycles - was.ee.catchUpCycles) / 1000u / f));
        line.add(" eeK=%u", unsigned((now.ee.eeCycle - was.ee.eeCycle) / 1000u / f));
        line.perFrame("sys", now.syscalls - was.syscalls, f);
        line.perFrame("rpc", now.rpcs - was.rpcs, f);
        line.perFrame("vif1", now.vif1Chains - was.vif1Chains, f);
        line.write();
    }

    // [TS:cpu]: performance counters per frame (thousands), the TSC per
    // frame (thousands), kernel idle ticks of all ticks ("?": the kernel
    // does not count them), sticky FP flags per thread (raised flags as
    // hex MXCSR / x87, then samples with DE / with UE / samples: game =
    // every frame, main = every report), TS_HWPROF's CMOS clock samples
    // (idle and GPU busy shares, while its window is open).
    {
        Line line("[TS:cpu]");
        line.add(" f=%u", frames);
#if TS_PMC
        if (g_pmcOk)
        {
            const uint64_t c0 = rdmsr(kPerfCtr0) & kCounterMask, c1 = rdmsr(kPerfCtr1) & kCounterMask;
            line.add(" pair=%u %s=%uK %s=%uK", g_pmcPair, kPmcPairs[g_pmcPair][0].name,
                     unsigned(((c0 - g_pmcLast[0]) & kCounterMask) / 1000u / f), kPmcPairs[g_pmcPair][1].name,
                     unsigned(((c1 - g_pmcLast[1]) & kCounterMask) / 1000u / f));
            g_pmcLast[0] = c0;
            g_pmcLast[1] = c1;
#if TS_PMC_ROTATE
            g_pmcPair = (g_pmcPair + 1u) % kPmcPairCount;
            pmcProgram(g_pmcPair);
#endif
        }
#endif
        line.add(" tscK=%u", unsigned((now.tsc - was.tsc) / 1000u / f));
        line.add(" kidle=%u/%u%s", now.idleTicks - was.idleTicks, now.ticks - was.ticks, g_idleCounted ? "" : "?");
        auto flags = [&line](const char *name, const ThreadFlags &a, const ThreadFlags &b) {
            line.add(" %s=%02x/%02x/%u/%u/%u", name, a.mxcsr, a.x87, a.denormal - b.denormal, a.underflow - b.underflow,
                     a.samples - b.samples);
        };
        flags("fpgame", now.gameFlags, was.gameFlags);
        flags("fpmain", now.mainFlags, was.mainFlags);
        if (in.hwprof)
        {
            const uint32_t samples = now.rtcSamples - was.rtcSamples;
            const uint32_t s = samples ? samples : 1u;
            line.add(" rtc=%u idle=%u%% gpu=%u%% graph=%u%% fifo=%u%%", samples, (now.rtcIdle - was.rtcIdle) * 100u / s,
                     (now.gpuBusy - was.gpuBusy) * 100u / s, (now.gpuGraph - was.gpuGraph) * 100u / s,
                     (now.gpuFifo - was.gpuFifo) * 100u / s);
        }
        line.write();
    }

    // [TS:mem]: free memory now and its lowest (since boot / this
    // interval); dlmalloc's heap (footprint, largest footprint; in use and
    // free inside it with the walk's time, TS_PERF_MALLINFO); the kernel's
    // page use (virtual memory committed, pool, stacks, image, file cache,
    // and the rest: contiguous allocations such as the renderer's, and the
    // kernel, with its growth since start-up); the renderer's textures;
    // big requests since the last line; the game's level heap free and
    // memdb used.
    {
        const MM_STATISTICS stats = memoryStatistics();
        noteFree(stats.AvailablePages);
        const uint32_t recent = g_minFreePagesRecent.exchange(stats.AvailablePages, std::memory_order_relaxed);
        Line line("[TS:mem]");
        line.add(" free=%uK min=%uK/%uK heap=%uK max=%uK", unsigned(stats.AvailablePages * 4u),
                 unsigned(g_minFreePages.load() * 4u), unsigned(recent * 4u), unsigned(dlmalloc_footprint() / 1024u),
                 unsigned(dlmalloc_max_footprint() / 1024u));
#if TS_PERF_MALLINFO
        if (g_window != Window::Open && g_reports % TS_PERF_MALLINFO == 0u)
        {
            const uint64_t start = rdtsc();
            const XboxDlMallinfo info = dlmallinfo();
            line.add(" used=%uK infree=%uK walk=%uus", unsigned(info.uordblks / 1024u), unsigned(info.fordblks / 1024u),
                     unsigned(usOf(rdtsc() - start)));
        }
#endif
        const uint32_t contiguous = contiguousPages(stats);
        line.add(" vm=%uK pool=%uK stack=%uK image=%uK cache=%uK contig=%uK(%+dK)",
                 unsigned(stats.VirtualMemoryBytesCommitted / 1024u), unsigned(stats.PoolPagesCommitted * 4u),
                 unsigned(stats.StackPagesCommitted * 4u), unsigned(stats.ImagePagesCommitted * 4u),
                 unsigned(stats.CachePagesCommitted * 4u), unsigned(contiguous * 4u),
                 int(int32_t(contiguous - g_contiguousAtInit) * 4));
        line.add(" tex=%uK pack=%uK big=%u", g_nv2aTextureStats.residentBytes / 1024u, g_nv2aTextureStats.packPoolBytes / 1024u,
                 now.bigCount - was.bigCount);
        if (in.rdram)
        {
            // memGetFreeLevel: *(gp-0x6594) - *(gp-0x6598); memdbAlloc's
            // bytes used at gp-0x6570 (gp 0x3B47F0).
            constexpr uint32_t kGp = 0x003B47F0u;
            uint32_t end = 0, next = 0, memdb = 0;
            std::memcpy(&end, in.rdram + kGp - 0x6594u, 4);
            std::memcpy(&next, in.rdram + kGp - 0x6598u, 4);
            std::memcpy(&memdb, in.rdram + kGp - 0x6570u, 4);
            line.add(" level=%dK memdb=%uK", int32_t(end - next) / 1024, memdb / 1024u);
        }
        line.write();
    }

    g_last = now;
}

std::unique_ptr<GSRasterBackend> xboxPerfWrapBackend(std::unique_ptr<GSRasterBackend> backend)
{
#if TS_PERF_BACKEND
    if (backend)
        return std::make_unique<TimedBackend>(std::move(backend));
#endif
    return backend;
}

void xboxPerfWrapGif(GifArbiter &arbiter, GS &gs)
{
#if TS_PERF_BACKEND
    // The same packet function PS2Runtime::syncCoreSubsystems installs
    // (ps2_runtime.cpp), timed: the GS front end and the renderer calls it
    // makes, by path. Keep the call in step with that one.
    arbiter.setProcessPathPacketFn([&gs](GifPathId path, const uint8_t *data, uint32_t size) {
        const uint64_t start = rdtsc();
        ++g_gifDepth;
        gs.processGIFPacket(data, size, path);
        if (--g_gifDepth != 0u)
            return; // nested: counted by the outer packet
        const uint64_t cycles = rdtsc() - start;
        const uint32_t p = path == GifPathId::Path1 ? 0u : 1u;
        g_beAll.gif[p] += cycles;
        if (inKick())
            g_beKick.gif[p] += cycles;
    });
#else
    (void)arbiter;
    (void)gs;
#endif
}
#endif // TS_PERF
