// Hardware sampling profiler (make TS_HWPROF=1). Development aid for real
// consoles, where a debugger's sampler stops every thread and only ever sees
// the kernel's stop routine.
//
// How it samples: two interrupt sources, both caught in the IDT before the
// kernel sees them, so the interrupted EIP is simply the top of the stack
// (ring 0 to ring 0: EIP, CS, EFLAGS, no error code) and the interrupted
// thread is the processor block's current thread (fs:[0x28]):
//
//  - the CMOS clock's periodic interrupt (IRQ 8, 1024 Hz), owned entirely by
//    this file: the kernel never uses it. Its crystal is not the kernel
//    timer's, so the samples drift through the 1 ms scheduler tick and do
//    not alias with threads that wake on the tick. This is the histogram's
//    source when it works.
//  - the kernel's own 1 ms clock interrupt (IRQ 0), chained straight to the
//    kernel's handler. Threads that wake on a tick and finish before the
//    next one are invisible to it, so it only counts per-thread totals (a
//    cross-check) unless the CMOS clock does not interrupt; then it is the
//    histogram's source.
//
// Each sample of the histogram source goes into a fixed hash table keyed by
// (thread slot, EIP / 16): raw samples would need ~400 KB for a 80 s window,
// which a busy match does not have free. No allocation, locking or I/O
// happens in the interrupt; the table is allocated when the window opens
// (script read TS_HWPROF_FROM) and written to the log when it closes
// (TS_HWPROF_TO), then freed.
//
// Every TS_HWPROF_STACK_EVERY-th histogram sample also copies the call
// stack: the interrupted thread's stack is scanned from its ESP to its
// StackBase for values inside .text that follow a call instruction (the game
// code has no frame pointers), and up to kStackKeep of them go into a buffer
// reserved at start-up with the table. hwprof_report.py rebuilds each chain
// from the link map and the XBE (a direct call must lead to the function
// below it, which drops stale values) and adds up the time of every job
// with everything it calls.
//
// Each histogram sample also notes whether the kernel's idle thread was
// running and whether the GPU was busy (graphics engine status, command
// FIFO not empty): the window's totals go in the report's gpu line, and the
// running counts in the status lines (xbox_perf.cpp [TS:cpu]).
#if TS_HWPROF

#include "xbox_hwprof.h"
#include "xbox_log.h"

#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstring>

#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

#ifndef TS_HWPROF_FROM
#define TS_HWPROF_FROM 1500
#endif
#ifndef TS_HWPROF_TO
#define TS_HWPROF_TO 2700
#endif
#ifndef TS_HWPROF_STACK_EVERY
#define TS_HWPROF_STACK_EVERY 96
#endif

// ------------------------------------------------------------ interrupt side
// The two IDT entry points (file-scope assembly: no compiler prologue).
// Both save the registers a cdecl call may change, pass the interrupted EIP
// to C, and restore everything before leaving.
extern "C"
{
    void hwprofStubPit() __asm__("hwprof_stub_pit");
    void hwprofStubRtc() __asm__("hwprof_stub_rtc");
    void hwprofOnPit(uint32_t eip, uint32_t esp) __asm__("hwprof_on_pit");
    void hwprofOnRtc(uint32_t eip, uint32_t esp) __asm__("hwprof_on_rtc");
    extern uint32_t hwprofOrigPit __asm__("hwprof_orig_pit");
    uint32_t hwprofOrigPit = 0;
}

__asm__(".text\n"
        ".globl hwprof_stub_pit\n"
        "hwprof_stub_pit:\n"
        "    pushfl\n"
        "    pushl %eax\n"
        "    pushl %ecx\n"
        "    pushl %edx\n"
        "    leal 28(%esp), %eax\n" // the interrupted stack, past EIP, CS, EFLAGS
        "    pushl %eax\n"
        "    pushl 20(%esp)\n" // interrupted EIP
        "    call hwprof_on_pit\n"
        "    addl $8, %esp\n"
        "    popl %edx\n"
        "    popl %ecx\n"
        "    popl %eax\n"
        "    popfl\n"
        "    jmp *hwprof_orig_pit\n" // the kernel's clock interrupt, untouched
        ".globl hwprof_stub_rtc\n"
        "hwprof_stub_rtc:\n"
        "    pushl %eax\n"
        "    pushl %ecx\n"
        "    pushl %edx\n"
        "    leal 24(%esp), %eax\n" // the interrupted stack, past EIP, CS, EFLAGS
        "    pushl %eax\n"
        "    pushl 16(%esp)\n" // interrupted EIP
        "    call hwprof_on_rtc\n" // acknowledges the clock and both PICs
        "    addl $8, %esp\n"
        "    popl %edx\n"
        "    popl %ecx\n"
        "    popl %eax\n"
        "    iretl\n");

namespace
{
    enum : uint32_t
    {
        kSrcNone = 0,
        kSrcRtc = 1,
        kSrcPit = 2,
    };

    // Thread slots: 1..15 (0 marks an empty table entry); the 16th thread
    // seen and later ones share slot 15.
    constexpr uint32_t kSlots = 16;
    struct Slot
    {
        uint32_t kthread, id, start;
        uint32_t rtc, pit; // samples from each source
        uint32_t high;     // histogram samples taken at IRQL >= DISPATCH (DPC / interrupt)
        uint32_t drops;    // histogram samples that found no room in the table
    };
    Slot g_slots[kSlots];
    uint32_t g_slotCount = 1;
    uint32_t g_slotOverflow = 0;
    uint32_t g_lastSlot = 0;

    uint32_t *g_keys = nullptr; // (slot << 28) | (EIP >> 4); 0 = empty
    uint16_t *g_counts = nullptr;
    uint32_t g_bits = 0, g_mask = 0, g_used = 0, g_limit = 0, g_saturated = 0;

    // Call stacks (see the top): records of [0xA5 << 24 | slot << 16 | n,
    // EIP, candidates found, n return addresses innermost first]. A stack
    // with more than kStackKeep keeps its innermost kStackInner and its
    // outermost kStackKeep - kStackInner (the jobs).
    constexpr uint32_t kStackKeep = 32, kStackInner = 8, kStackRing = 256, kStackScanWords = 32768;
    constexpr uint32_t kStackBufWords = 20480; // 80 KB
    uint32_t *g_stackBuf = nullptr;
    uint32_t g_stackUsed = 0, g_stackRecords = 0, g_stackFull = 0, g_stackBad = 0, g_stackCapped = 0, g_stackTick = 0;
    uint32_t g_textStart = 0, g_textEnd = 0;
    uint32_t g_stackScratch[kStackRing]; // the interrupt does not nest (interrupt gates)

    volatile uint32_t g_active = 0;
    uint32_t g_primary = kSrcNone;
    volatile uint32_t g_rtcHits = 0, g_pitHits = 0;
    uint32_t g_idleThread = 0;
    bool g_irqlOk = false;
    size_t g_offUnique = 0, g_offStart = 0;

    // Every histogram sample also counts the idle thread and the GPU
    // (hwprofSampleCounts; the window's totals go in the report's gpu line).
    HwprofSampleCounts g_samples;
    volatile uint32_t g_gpuReady = 0;
    // NV2A registers (pbkit's VIDEO_BASE 0xFD000000): the graphics engine's
    // status, and pbkit's FIFO channel 0's DMA PUT and GET (NV_USER,
    // pbkit_ts.c pb_init / pb_busy).
    constexpr uint32_t kPgraphStatus = 0xFD400700u, kDmaPut = 0xFD800040u, kDmaGet = 0xFD800044u;

    inline uint32_t fsDword(uint32_t offset)
    {
        uint32_t value;
        __asm__ volatile("movl %%fs:(%1), %0" : "=r"(value) : "r"(offset));
        return value;
    }
    inline uint32_t fsByte(uint32_t offset)
    {
        uint8_t value;
        __asm__ volatile("movb %%fs:(%1), %0" : "=q"(value) : "r"(offset));
        return value;
    }
    inline void outb(uint16_t port, uint8_t value) { __asm__ volatile("outb %0, %1" : : "a"(value), "Nd"(port)); }
    inline uint8_t inb(uint16_t port)
    {
        uint8_t value;
        __asm__ volatile("inb %1, %0" : "=a"(value) : "Nd"(port));
        return value;
    }
    inline uint32_t disableInterrupts()
    {
        uint32_t flags;
        __asm__ volatile("pushfl; popl %0; cli" : "=r"(flags) : : "memory");
        return flags;
    }
    inline void restoreInterrupts(uint32_t flags) { __asm__ volatile("pushl %0; popfl" : : "r"(flags) : "memory", "cc"); }

    // KPCR (fs): +0x24 Irql, +0x28 PrcbData.CurrentThread, +0x30 IdleThread.
    constexpr uint32_t kPcrIrql = 0x24, kPcrCurrentThread = 0x28, kPcrIdleThread = 0x30;

    uint32_t slotFor(uint32_t kthread)
    {
        if (g_slots[g_lastSlot].kthread == kthread && g_lastSlot != 0)
            return g_lastSlot;
        for (uint32_t i = 1; i < g_slotCount; ++i)
            if (g_slots[i].kthread == kthread)
                return g_lastSlot = i;
        if (g_slotCount == kSlots)
        {
            ++g_slotOverflow;
            return kSlots - 1;
        }
        const uint32_t i = g_slotCount++;
        Slot &slot = g_slots[i];
        slot.kthread = kthread;
        // The interrupted thread is alive, so its ETHREAD can be read now
        // (the idle thread has no ETHREAD).
        if (kthread != g_idleThread && kthread >= 0x80000000u)
        {
            slot.id = *reinterpret_cast<const uint32_t *>(kthread + g_offUnique);
            slot.start = *reinterpret_cast<const uint32_t *>(kthread + g_offStart);
        }
        return g_lastSlot = i;
    }

    // GPU busy as pbkit's pb_busy tests it, with the PUT the GPU was given.
    void sampleGpu()
    {
        const uint32_t status = *reinterpret_cast<volatile const uint32_t *>(kPgraphStatus);
        const uint32_t put = *reinterpret_cast<volatile const uint32_t *>(kDmaPut);
        const uint32_t get = *reinterpret_cast<volatile const uint32_t *>(kDmaGet);
        const bool graph = status != 0u, fifo = ((put ^ get) & 0x0FFFFFFFu) != 0u;
        g_samples.gpuGraph += graph ? 1u : 0u;
        g_samples.gpuFifo += fifo ? 1u : 0u;
        g_samples.gpuBusy += (graph || fifo) ? 1u : 0u;
    }

    // A return address: inside .text and just after a call (E8 rel32, or
    // FF /2 in any of its operand forms).
    inline bool afterCall(uint32_t v)
    {
        if (v < g_textStart + 8u || v >= g_textEnd)
            return false;
        const uint8_t *b = reinterpret_cast<const uint8_t *>(v);
        if (b[-5] == 0xE8u)
            return true;
        static constexpr int kBack[] = {2, 3, 4, 6, 7};
        for (int n : kBack)
            if (b[-n] == 0xFFu && ((b[1 - n] >> 3) & 7u) == 2u)
                return true;
        return false;
    }

    void recordStack(uint32_t s, uint32_t kthread, uint32_t eip, uint32_t esp)
    {
        if (!g_stackBuf || g_stackFull)
            return;
        uint32_t base = 0, limit = 0;
        if (kthread >= 0x80000000u)
        {
            const KTHREAD *t = reinterpret_cast<const KTHREAD *>(kthread);
            base = reinterpret_cast<uint32_t>(t->StackBase);
            limit = reinterpret_cast<uint32_t>(t->StackLimit);
        }
        uint32_t seen = 0;
        if (esp >= limit && esp < base)
        {
            const uint32_t *p = reinterpret_cast<const uint32_t *>(esp & ~3u);
            const uint32_t *end = reinterpret_cast<const uint32_t *>(base & ~3u);
            if (uint32_t(end - p) > kStackScanWords)
            {
                end = p + kStackScanWords;
                ++g_stackCapped;
            }
            for (; p < end; ++p)
            {
                const uint32_t v = *p;
                if (!afterCall(v))
                    continue;
                // The innermost kStackInner, then a ring holding the outermost.
                if (seen < kStackInner)
                    g_stackScratch[seen] = v;
                else
                    g_stackScratch[kStackInner + (seen - kStackInner) % (kStackRing - kStackInner)] = v;
                ++seen;
            }
        }
        else
            ++g_stackBad;
        const uint32_t ring = kStackRing - kStackInner;
        const uint32_t inner = seen < kStackInner ? seen : kStackInner;
        const uint32_t outerSeen = seen - inner;
        const uint32_t outer = outerSeen < kStackKeep - kStackInner ? outerSeen : kStackKeep - kStackInner;
        const uint32_t n = inner + outer;
        if (g_stackUsed + 3u + n > kStackBufWords)
        {
            g_stackFull = 1;
            return;
        }
        uint32_t *w = g_stackBuf + g_stackUsed;
        w[0] = 0xA5000000u | (s << 16) | n;
        w[1] = eip;
        w[2] = seen;
        for (uint32_t i = 0; i < inner; ++i)
            w[3 + i] = g_stackScratch[i];
        for (uint32_t i = 0; i < outer; ++i) // the last `outer` of the outer ones, innermost first
            w[3 + inner + i] = g_stackScratch[kStackInner + (outerSeen - outer + i) % ring];
        g_stackUsed += 3u + n;
        ++g_stackRecords;
    }

    void record(uint32_t eip, uint32_t esp, uint32_t source)
    {
        const uint32_t current = fsDword(kPcrCurrentThread);
        const uint32_t s = slotFor(current);
        Slot &slot = g_slots[s];
        if (source == kSrcRtc)
            ++slot.rtc;
        else
            ++slot.pit;
        if (source != g_primary)
            return;
        ++g_samples.samples;
        g_samples.idle += (g_idleThread && current == g_idleThread) ? 1u : 0u;
        if (g_gpuReady)
            sampleGpu();
        if (g_irqlOk && fsByte(kPcrIrql) >= 2u)
            ++slot.high;
        if (++g_stackTick >= TS_HWPROF_STACK_EVERY)
        {
            g_stackTick = 0;
            recordStack(s, current, eip, esp);
        }
        const uint32_t key = (s << 28) | (eip >> 4);
        uint32_t h = (key * 2654435761u) >> (32u - g_bits);
        for (uint32_t probe = 0; probe < 32u; ++probe)
        {
            const uint32_t k = g_keys[h];
            if (k == key)
            {
                if (g_counts[h] != 0xFFFFu)
                    ++g_counts[h];
                else
                    ++g_saturated;
                return;
            }
            if (k == 0u)
            {
                if (g_used >= g_limit)
                    break;
                g_keys[h] = key;
                g_counts[h] = 1u;
                ++g_used;
                return;
            }
            h = (h + 1u) & g_mask;
        }
        ++slot.drops;
    }
}

extern "C" __attribute__((used)) void hwprofOnPit(uint32_t eip, uint32_t esp)
{
    ++g_pitHits;
    if (g_active)
        record(eip, esp, kSrcPit);
}

extern "C" __attribute__((used)) void hwprofOnRtc(uint32_t eip, uint32_t esp)
{
    outb(0x70, 0x0C); // reading register C acknowledges the clock
    if (inb(0x71) & 0x80u)
    {
        ++g_rtcHits;
        if (g_active)
            record(eip, esp, kSrcRtc);
    }
    outb(0xA0, 0x60); // specific EOI: IRQ 8 on the slave PIC,
    outb(0x20, 0x62); // its cascade (IRQ 2) on the master
}

// --------------------------------------------------------------- setup side
namespace
{
    struct __attribute__((packed)) Idtr
    {
        uint16_t limit;
        uint32_t base;
    };

    uint32_t *idtEntry(uint32_t vector)
    {
        Idtr idtr{};
        __asm__ volatile("sidt %0" : "=m"(idtr));
        if (vector * 8u + 7u > idtr.limit)
            return nullptr;
        return reinterpret_cast<uint32_t *>(idtr.base + vector * 8u);
    }
    uint32_t gateHandler(const uint32_t *entry) { return (entry[0] & 0xFFFFu) | (entry[1] & 0xFFFF0000u); }
    bool isInterruptGate(const uint32_t *entry) { return ((entry[1] >> 8) & 0x9Fu) == 0x8Eu; } // present, 32-bit interrupt gate

    // Writes a present 32-bit interrupt gate to `handler`, with interrupts
    // off and the write protection of kernel pages lifted for the write.
    void setGate(uint32_t *entry, uint32_t handler)
    {
        uint16_t cs;
        __asm__ volatile("movw %%cs, %0" : "=r"(cs));
        const uint32_t flags = disableInterrupts();
        uint32_t cr0;
        __asm__ volatile("movl %%cr0, %0" : "=r"(cr0));
        __asm__ volatile("movl %0, %%cr0" : : "r"(cr0 & ~0x10000u) : "memory");
        entry[0] = (uint32_t(cs) << 16) | (handler & 0xFFFFu);
        entry[1] = (handler & 0xFFFF0000u) | 0x8E00u;
        __asm__ volatile("movl %0, %%cr0" : : "r"(cr0) : "memory");
        restoreInterrupts(flags);
    }

    uint8_t g_rtcA = 0, g_rtcB = 0;
    uint8_t cmosRead(uint8_t reg)
    {
        outb(0x70, reg);
        return inb(0x71);
    }
    void cmosWrite(uint8_t reg, uint8_t value)
    {
        outb(0x70, reg);
        outb(0x71, value);
    }
    // The CMOS clock's periodic interrupt at 1024 Hz (rate 6), or off again
    // with registers A and B as they were.
    void rtcPeriodic(bool on)
    {
        const uint32_t flags = disableInterrupts();
        if (on)
        {
            g_rtcA = cmosRead(0x0A);
            g_rtcB = cmosRead(0x0B);
            cmosWrite(0x0A, uint8_t((g_rtcA & 0xF0u) | 0x06u));
            cmosWrite(0x0B, uint8_t(g_rtcB | 0x40u));
        }
        else
        {
            cmosWrite(0x0B, uint8_t(g_rtcB & ~0x40u));
            cmosWrite(0x0A, g_rtcA);
        }
        cmosRead(0x0C);
        restoreInterrupts(flags);
    }

    uint64_t rdtsc() { return __builtin_ia32_rdtsc(); }

    unsigned g_lineNo = 0;
    void emit(const char *format, ...)
    {
        char line[256];
        int n = std::snprintf(line, sizeof(line), "[TS:prof] #%u ", g_lineNo++);
        va_list args;
        va_start(args, format);
        const int m = std::vsnprintf(line + n, sizeof(line) - size_t(n) - 1, format, args);
        va_end(args);
        n += m < 0 ? 0 : (m > int(sizeof(line)) - n - 2 ? int(sizeof(line)) - n - 2 : m);
        line[n++] = '\n';
        xboxLogWrite(line, unsigned(n));
        // The debug channel drops lines when flooded; the log file keeps all.
        Sleep(2);
    }

    // Window state.
    enum class Phase
    {
        Off,
        Waiting,
        Collecting,
        Done
    };
    Phase g_phase = Phase::Off;
    void *g_tableMemory = nullptr;
    struct Snapshot
    {
        uint64_t tsc = 0, qpc = 0;
        HwprofCounters counters;
    };
    Snapshot g_begin;
    uint64_t g_lastFrameTsc = 0; // performance counter
    uint32_t g_lastFrames = 0;
    constexpr uint32_t kFrameBins = 64, kFrameBinUs = 2000;
    uint32_t g_frameHist[kFrameBins];
    uint64_t g_qpcFrequency = 1;

    // Once, at start-up, before the game claims its memory: the stack
    // buffer (80 KB) and the largest table that fits beside it in 128 KB, 6
    // bytes an entry, filled to 7/8. The texture pack's pool is smaller by
    // those 128 KB in profiler builds (gs_nv2a_backend.cpp), so the game
    // keeps the memory it normally has.
    void reserveTable()
    {
        g_stackBuf = static_cast<uint32_t *>(VirtualAlloc(nullptr, kStackBufWords * 4u, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE));
        for (uint32_t bits = 13; bits >= 11; --bits)
        {
            const uint32_t entries = 1u << bits;
            if (void *memory = VirtualAlloc(nullptr, entries * 6u, MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE))
            {
                g_tableMemory = memory;
                g_bits = bits;
                return;
            }
        }
    }

    bool openWindow(const HwprofCounters &counters)
    {
        // The table was reserved at start-up (reserveTable): during a match
        // the game runs with a few hundred KB free, and taking them then
        // made its next large allocation fail (real console, 2026-10-05).
        if (g_tableMemory)
        {
            const uint32_t entries = 1u << g_bits;
            std::memset(g_tableMemory, 0, entries * 6u);
            g_keys = static_cast<uint32_t *>(g_tableMemory);
            g_counts = reinterpret_cast<uint16_t *>(g_keys + entries);
            g_mask = entries - 1u;
            g_limit = entries - entries / 8u;
        }
        if (!g_tableMemory)
        {
            emit("no memory for the table: not profiled");
            return false;
        }
        for (Slot &slot : g_slots)
        {
            slot.rtc = slot.pit = slot.high = slot.drops = 0;
        }
        g_used = g_saturated = g_slotOverflow = 0;
        g_stackUsed = g_stackRecords = g_stackFull = g_stackBad = g_stackCapped = g_stackTick = 0;
        std::memset(g_frameHist, 0, sizeof(g_frameHist));
        g_begin.tsc = rdtsc();
        g_begin.qpc = KeQueryPerformanceCounter();
        g_begin.counters = counters;
        g_lastFrameTsc = g_begin.qpc;
        g_lastFrames = counters.gameFrames;
        if (g_primary == kSrcRtc)
            rtcPeriodic(true);
        g_active = 1;
        return true;
    }

    void closeWindow(const HwprofCounters &counters)
    {
        g_active = 0;
        if (g_primary == kSrcRtc)
            rtcPeriodic(false);
        const uint64_t tsc = rdtsc() - g_begin.tsc;
        const uint64_t qpc = KeQueryPerformanceCounter() - g_begin.qpc;
        const uint64_t us = qpc * 1000000ull / g_qpcFrequency;
        const uint32_t mhz = us ? uint32_t(tsc / us) : 0u;
        const uint32_t frames = counters.gameFrames - g_begin.counters.gameFrames;
        const uint64_t eeWaitUs = uint64_t(counters.eeWaitMicroseconds - g_begin.counters.eeWaitMicroseconds);
        const uint64_t gpuWaitUs = mhz ? uint64_t(counters.gpuWaitKcyc - g_begin.counters.gpuWaitKcyc) * 1000ull / mhz : 0ull;

        // Every entry is listed (a full table is ~1,450 lines); should that
        // ever exceed ~1800 lines, the smallest counts are only summed per
        // thread ("unlisted").
        constexpr uint32_t kPerLine = 10, kMaxLines = 1800;
        uint32_t minCount = 1;
        for (;; ++minCount)
        {
            uint32_t listed = 0;
            for (uint32_t i = 0; i <= g_mask; ++i)
                listed += g_keys[i] != 0u && g_counts[i] >= minCount;
            if (listed <= kPerLine * kMaxLines)
                break;
        }
        uint32_t drops = 0;
        for (const Slot &slot : g_slots)
            drops += slot.drops;

        emit("begin v=1 src=%s hz=%u reads=%u-%u ms=%u mhz=%u frames=%u table=%u used=%u drops=%u sat=%u overflow=%u minc=%u shift=4",
             g_primary == kSrcRtc ? "rtc" : "pit", g_primary == kSrcRtc ? 1024u : 1000u,
             g_begin.counters.scriptReads, counters.scriptReads, uint32_t(us / 1000u), mhz, frames, g_mask + 1u, g_used, drops,
             g_saturated, g_slotOverflow, minCount);
        emit("frame us=%u eewait_us=%u gpuwait_us=%u irql=%s idle_kt=%08x",
             frames ? uint32_t(us / frames) : 0u, frames ? uint32_t(eeWaitUs / frames) : 0u,
             frames ? uint32_t(gpuWaitUs / frames) : 0u, g_irqlOk ? "ok" : "unknown", g_idleThread);
        // The frame-time histogram, 10 bins a line (at most 15 characters a
        // bin; one line was cut off at 200 characters, losing the long
        // frames); hwprof_report.py joins the fh lines.
        {
            char text[200];
            size_t n = 0;
            uint32_t inLine = 0;
            for (uint32_t b = 0; b < kFrameBins; ++b)
            {
                if (!g_frameHist[b])
                    continue;
                n += size_t(std::snprintf(text + n, sizeof(text) - n, " %u:%u", b * (kFrameBinUs / 1000u), g_frameHist[b]));
                if (++inLine == 10u)
                {
                    emit("fh%s", text);
                    n = 0;
                    inLine = 0;
                }
            }
            if (inLine)
                emit("fh%s", text);
        }
        emit("gpu samples=%u idle=%u graph=%u fifo=%u busy=%u ready=%u", g_samples.samples, g_samples.idle, g_samples.gpuGraph,
             g_samples.gpuFifo, g_samples.gpuBusy, unsigned(g_gpuReady));
        for (uint32_t s = 1; s < g_slotCount; ++s)
        {
            const Slot &slot = g_slots[s];
            uint32_t singles = 0;
            for (uint32_t i = 0; i <= g_mask; ++i)
                if ((g_keys[i] >> 28) == s && g_counts[i] < minCount)
                    singles += g_counts[i];
            emit("t %u kt=%08x id=%u start=%08x rtc=%u pit=%u hi=%u drops=%u unlisted=%u idle=%u", s, slot.kthread,
                 slot.id, slot.start, slot.rtc, slot.pit, slot.high, slot.drops, singles, slot.kthread == g_idleThread ? 1u : 0u);
        }
        for (uint32_t s = 1; s < g_slotCount; ++s)
        {
            char text[200];
            size_t n = 0;
            uint32_t inLine = 0;
            for (uint32_t i = 0; i <= g_mask; ++i)
            {
                if ((g_keys[i] >> 28) != s || g_counts[i] < minCount)
                    continue;
                n += size_t(std::snprintf(text + n, sizeof(text) - n, " %x:%u", (g_keys[i] & 0x0FFFFFFFu) << 4, g_counts[i]));
                if (++inLine == kPerLine)
                {
                    emit("h %u%s", s, text);
                    n = 0;
                    inLine = 0;
                }
            }
            if (inLine)
                emit("h %u%s", s, text);
        }
        // The call stacks: "s <record> <slot> <skipped> <eip> <return
        // addresses, innermost first>", continued in "s <record> + ..." (hex).
        emit("stacks records=%u words=%u full=%u bad=%u capped=%u every=%u keep=%u inner=%u text=%08x-%08x",
             g_stackRecords, g_stackUsed, g_stackFull, g_stackBad, g_stackCapped, unsigned(TS_HWPROF_STACK_EVERY),
             kStackKeep, kStackInner, g_textStart, g_textEnd);
        if (g_stackBuf)
        {
            uint32_t at = 0;
            for (uint32_t r = 0; r < g_stackRecords && at + 3u <= g_stackUsed; ++r)
            {
                const uint32_t *w = g_stackBuf + at;
                const uint32_t n = w[0] & 0xFFFFu, slot = (w[0] >> 16) & 0xFFu;
                char text[200];
                int len = std::snprintf(text, sizeof(text), "s %u %u %u %x", r, slot, w[2] > n ? w[2] - n : 0u, w[1]);
                for (uint32_t i = 0; i < n; ++i)
                {
                    if (len > 160)
                    {
                        emit("%s", text);
                        len = std::snprintf(text, sizeof(text), "s %u +", r);
                    }
                    len += std::snprintf(text + len, sizeof(text) - size_t(len), " %x", w[3 + i]);
                }
                emit("%s", text);
                at += 3u + n;
            }
        }
        emit("end lines=%u", g_lineNo + 1u);

        g_keys = nullptr;
        g_counts = nullptr;
        VirtualFree(g_tableMemory, 0, MEM_RELEASE);
        g_tableMemory = nullptr;
        if (g_stackBuf)
            VirtualFree(g_stackBuf, 0, MEM_RELEASE);
        g_stackBuf = nullptr;
    }
}

void hwprofInit()
{
    char text[200];
    auto say = [&](const char *line) {
        std::snprintf(text, sizeof(text), "[TS:prof] %s\n", line);
        xboxLogWrite(text, unsigned(std::strlen(text)));
    };
    g_offUnique = offsetof(ETHREAD, UniqueThread);
    g_offStart = offsetof(ETHREAD, StartAddress);
    g_qpcFrequency = KeQueryPerformanceFrequency();

    // The processor block layout this file reads in the interrupt.
    const uint32_t current = fsDword(kPcrCurrentThread);
    if (current != reinterpret_cast<uint32_t>(KeGetCurrentThread()))
    {
        say("fs:[0x28] is not the current thread: profiler off");
        return;
    }
    const uint32_t irqlPassive = fsByte(kPcrIrql);
    const KIRQL old = KeRaiseIrqlToDpcLevel();
    const uint32_t irqlDispatch = fsByte(kPcrIrql);
    KfLowerIrql(old);
    g_irqlOk = irqlPassive == 0u && irqlDispatch == 2u;
    const uint32_t idle = fsDword(kPcrIdleThread);
    g_idleThread = idle >= 0x80000000u && idle != current ? idle : 0u;
    const uint32_t id = *reinterpret_cast<const uint32_t *>(current + g_offUnique);

    KIRQL irql;
    const ULONG pitVector = HalGetInterruptVector(0, &irql);
    const ULONG rtcVector = HalGetInterruptVector(8, &irql);
    uint32_t *pit = idtEntry(pitVector);
    uint32_t *rtc = idtEntry(rtcVector);
    std::snprintf(text, sizeof(text),
                  "[TS:prof] init thread=%08x id=%u (GetCurrentThreadId %u) idle=%08x irql %u/%u vectors %lx/%lx handlers %08x/%08x\n",
                  current, id, unsigned(GetCurrentThreadId()), g_idleThread, irqlPassive, irqlDispatch, pitVector, rtcVector,
                  pit ? gateHandler(pit) : 0u, rtc ? gateHandler(rtc) : 0u);
    xboxLogWrite(text, unsigned(std::strlen(text)));
    if (!pit || !isInterruptGate(pit) || !rtc)
    {
        say("unexpected IDT layout: profiler off");
        return;
    }

    // Kernel clock: chained, never replaced.
    hwprofOrigPit = gateHandler(pit);
    {
        uint16_t selector = uint16_t(pit[0] >> 16);
        uint16_t cs;
        __asm__ volatile("movw %%cs, %0" : "=r"(cs));
        if (selector != cs)
        {
            say("clock gate uses another code segment: profiler off");
            return;
        }
    }
    setGate(pit, reinterpret_cast<uint32_t>(&hwprofStubPit));

    // CMOS clock: our handler, then a 100 ms trial.
    const uint32_t rtcOld = gateHandler(rtc);
    setGate(rtc, reinterpret_cast<uint32_t>(&hwprofStubRtc));
    HalEnableSystemInterrupt(8, Latched);
    const uint32_t pit0 = g_pitHits, rtc0 = g_rtcHits;
    rtcPeriodic(true);
    Sleep(100);
    rtcPeriodic(false);
    const uint32_t pitTrial = g_pitHits - pit0, rtcTrial = g_rtcHits - rtc0;
    if (rtcTrial >= 50u)
        g_primary = kSrcRtc;
    else
    {
        HalDisableSystemInterrupt(8);
        setGate(rtc, rtcOld);
        g_primary = pitTrial >= 50u ? kSrcPit : kSrcNone;
    }
    std::snprintf(text, sizeof(text),
                  "[TS:prof] trial 100 ms: clock %u, cmos %u interrupts (A=%02x B=%02x): sampling %s, reads %u-%u\n", pitTrial,
                  rtcTrial, g_rtcA, g_rtcB,
                  g_primary == kSrcRtc ? "the CMOS clock (1024 Hz)"
                                       : (g_primary == kSrcPit ? "the kernel clock (1000 Hz)" : "nothing: profiler off"),
                  TS_HWPROF_FROM, TS_HWPROF_TO);
    xboxLogWrite(text, unsigned(std::strlen(text)));
    // .text: the XBE section holding this code (section headers: count at
    // 0x1011C, their address at 0x10120, 0x38 bytes each with the virtual
    // address at +4 and size at +8).
    {
        const uint32_t self = reinterpret_cast<uint32_t>(&hwprofOnRtc);
        const uint32_t count = *reinterpret_cast<const uint32_t *>(0x1011Cu);
        const uint8_t *headers = reinterpret_cast<const uint8_t *>(*reinterpret_cast<const uint32_t *>(0x10120u));
        for (uint32_t i = 0; i < count && i < 64u; ++i)
        {
            const uint32_t va = *reinterpret_cast<const uint32_t *>(headers + i * 0x38u + 4u);
            const uint32_t size = *reinterpret_cast<const uint32_t *>(headers + i * 0x38u + 8u);
            if (self >= va && self - va < size)
            {
                g_textStart = va;
                g_textEnd = va + size;
            }
        }
        std::snprintf(text, sizeof(text), "[TS:prof] text %08x-%08x, a stack every %u samples\n", g_textStart, g_textEnd,
                      unsigned(TS_HWPROF_STACK_EVERY));
        xboxLogWrite(text, unsigned(std::strlen(text)));
    }
    g_phase = g_primary == kSrcNone ? Phase::Off : Phase::Waiting;
    if (g_phase == Phase::Waiting)
    {
        reserveTable();
        std::snprintf(text, sizeof(text), "[TS:prof] table reserved: %u entries, stack buffer %s\n",
                      g_tableMemory ? 1u << g_bits : 0u, g_stackBuf ? "80 KB" : "none");
        xboxLogWrite(text, unsigned(std::strlen(text)));
    }
}

void hwprofGpuReady() { g_gpuReady = 1; }

HwprofSampleCounts hwprofSampleCounts() { return g_samples; }

void hwprofFrame(const HwprofCounters &counters)
{
    if (g_phase == Phase::Waiting)
    {
        if (counters.scriptReads >= TS_HWPROF_FROM && counters.scriptReads < TS_HWPROF_TO)
            g_phase = openWindow(counters) ? Phase::Collecting : Phase::Done;
        return;
    }
    if (g_phase != Phase::Collecting)
        return;
    if (counters.gameFrames != g_lastFrames)
    {
        // Time since the last frame the game finished, spread over the
        // frames finished since (the hook runs once per presented frame).
        const uint64_t now = KeQueryPerformanceCounter();
        const uint32_t n = counters.gameFrames - g_lastFrames;
        const uint64_t us = (now - g_lastFrameTsc) * 1000000ull / g_qpcFrequency / n;
        const uint32_t bin = us / kFrameBinUs < kFrameBins ? uint32_t(us / kFrameBinUs) : kFrameBins - 1u;
        g_frameHist[bin] += n;
        g_lastFrameTsc = now;
        g_lastFrames = counters.gameFrames;
    }
    if (counters.scriptReads >= TS_HWPROF_TO)
    {
        closeWindow(counters);
        g_phase = Phase::Done;
    }
}

#endif // TS_HWPROF
