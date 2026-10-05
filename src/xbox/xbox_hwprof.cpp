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

// ------------------------------------------------------------ interrupt side
// The two IDT entry points (file-scope assembly: no compiler prologue).
// Both save the registers a cdecl call may change, pass the interrupted EIP
// to C, and restore everything before leaving.
extern "C"
{
    void hwprofStubPit() __asm__("hwprof_stub_pit");
    void hwprofStubRtc() __asm__("hwprof_stub_rtc");
    void hwprofOnPit(uint32_t eip) __asm__("hwprof_on_pit");
    void hwprofOnRtc(uint32_t eip) __asm__("hwprof_on_rtc");
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
        "    pushl 16(%esp)\n" // interrupted EIP
        "    call hwprof_on_pit\n"
        "    addl $4, %esp\n"
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
        "    pushl 12(%esp)\n"
        "    call hwprof_on_rtc\n" // acknowledges the clock and both PICs
        "    addl $4, %esp\n"
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

    volatile uint32_t g_active = 0;
    uint32_t g_primary = kSrcNone;
    volatile uint32_t g_rtcHits = 0, g_pitHits = 0;
    uint32_t g_idleThread = 0;
    bool g_irqlOk = false;
    size_t g_offUnique = 0, g_offStart = 0;

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

    void record(uint32_t eip, uint32_t source)
    {
        const uint32_t s = slotFor(fsDword(kPcrCurrentThread));
        Slot &slot = g_slots[s];
        if (source == kSrcRtc)
            ++slot.rtc;
        else
            ++slot.pit;
        if (source != g_primary)
            return;
        if (g_irqlOk && fsByte(kPcrIrql) >= 2u)
            ++slot.high;
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

extern "C" __attribute__((used)) void hwprofOnPit(uint32_t eip)
{
    ++g_pitHits;
    if (g_active)
        record(eip, kSrcPit);
}

extern "C" __attribute__((used)) void hwprofOnRtc(uint32_t eip)
{
    outb(0x70, 0x0C); // reading register C acknowledges the clock
    if (inb(0x71) & 0x80u)
    {
        ++g_rtcHits;
        if (g_active)
            record(eip, kSrcRtc);
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

    // Once, at start-up, before the game claims its memory: the largest
    // table that fits, 6 bytes an entry, filled to 7/8. The texture pack's
    // pool is smaller by the same amount in profiler builds
    // (gs_nv2a_backend.cpp), so the game keeps the memory it normally has.
    void reserveTable()
    {
        for (uint32_t bits = 14; bits >= 11; --bits)
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
        {
            char text[200];
            size_t n = 0;
            text[0] = 0;
            for (uint32_t b = 0; b < kFrameBins; ++b)
                if (g_frameHist[b] && n + 16 < sizeof(text))
                    n += size_t(std::snprintf(text + n, sizeof(text) - n, " %u:%u", b * (kFrameBinUs / 1000u), g_frameHist[b]));
            emit("fh%s", text);
        }
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
        emit("end lines=%u", g_lineNo + 1u);

        g_keys = nullptr;
        g_counts = nullptr;
        VirtualFree(g_tableMemory, 0, MEM_RELEASE);
        g_tableMemory = nullptr;
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
    g_phase = g_primary == kSrcNone ? Phase::Off : Phase::Waiting;
    if (g_phase == Phase::Waiting)
    {
        reserveTable();
        std::snprintf(text, sizeof(text), "[TS:prof] table reserved: %u entries\n", g_tableMemory ? 1u << g_bits : 0u);
        xboxLogWrite(text, unsigned(std::strlen(text)));
    }
}

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
