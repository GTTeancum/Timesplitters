// Thread stacks (REWRITE-PLAN.md M2.5), for ps2_runtime.cpp.
//
// xboxThreadStart: a thread with a stack of a given size. nxdk's std::thread
// takes the XBE's default stack (the -stack link option), as every thread
// created without a size does; with TS_LEAN_STACKS (src/xbox/Makefile) that
// default drops to 64 KB and the game thread alone is made with 256 KB.
//
// xboxStackReport (TS_STACK_PAINT=1): the deepest stack use of every thread
// of the title (main, game, audio feeder, texture pack loader, the kernel's).
// A thread's stack is filled with a pattern below where it stands when it is
// first seen: the main thread's at start-up, before main (static
// initialisation runs on it); another's below the stack pointer it was
// switched out at, read from its KTHREAD at DISPATCH_LEVEL, where no thread
// switch happens (one CPU: none of them is running, and interrupts use the
// running thread's stack; painting holds DISPATCH_LEVEL for a fraction of a
// millisecond, once a thread). The report finds each stack's deepest word no
// longer holding the pattern, the most that thread has used since, reading
// 4 KB at a time at DISPATCH_LEVEL once the thread is found still there.
// Logged as one [TS:mem] line, by thread id (the ids of the [TS:prof]
// report), when a stack went 4 KB deeper or a thread appeared, every 5 s at
// most. The sizes TS_LEAN_STACKS picks are to be checked against these.
#include <cstdint>
#include <cstdio>

#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

#include "xbox_log.h"

#ifndef TS_STACK_PAINT
#define TS_STACK_PAINT 0
#endif

namespace
{
    struct Start
    {
        void (*entry)(void *);
        void *arg;
    };

    DWORD WINAPI threadEntry(LPVOID parameter)
    {
        const Start start = *static_cast<Start *>(parameter);
        delete static_cast<Start *>(parameter);
        start.entry(start.arg);
        return 0;
    }

#if TS_STACK_PAINT
    constexpr uint32_t kPaint = 0x57AC4B1Du;
    constexpr int kWatchedMax = 16;
    struct Watched
    {
        const KTHREAD *thread = nullptr;
        const uint32_t *limit = nullptr, *base = nullptr; // the stack: [limit, base)
        uint32_t id = 0;
        uint32_t deepest = 0; // bytes, last reported
    };
    Watched g_watched[kWatchedMax];
    int g_watchedCount = 0;
    bool g_newThread = false;

    constexpr size_t kScanWords = 1024u; // 4 KB of a stack read at a time

    uint32_t threadId(const KTHREAD *thread)
    {
        return uint32_t(uintptr_t(reinterpret_cast<const ETHREAD *>(thread)->UniqueThread));
    }

    bool live(const KTHREAD *thread)
    {
        return !thread->HasTerminated && thread->State != 4 /* Terminated */;
    }

    // At DISPATCH_LEVEL: thread's slot in g_watched (-1: none).
    int findWatched(const KTHREAD *thread)
    {
        for (int slot = 0; slot < g_watchedCount; ++slot)
            if (g_watched[slot].thread == thread && g_watched[slot].base == thread->StackBase &&
                g_watched[slot].id == threadId(thread))
                return slot;
        return -1;
    }

    // At DISPATCH_LEVEL: g_watched[slot]'s thread is still one of the
    // title's, alive, with the stack it was painted in.
    bool stillWatched(int slot)
    {
        KPROCESS *const process = KeGetCurrentThread()->ApcState.Process;
        for (LIST_ENTRY *entry = process ? process->ThreadListHead.Flink : nullptr;
             entry && entry != &process->ThreadListHead; entry = entry->Flink)
        {
            const KTHREAD *const thread = CONTAINING_RECORD(entry, KTHREAD, ThreadListEntry);
            if (thread == g_watched[slot].thread)
                return live(thread) && findWatched(thread) == slot;
        }
        return false;
    }

    // At DISPATCH_LEVEL. Paints thread's stack below `top` and watches it.
    void watch(KTHREAD *thread, uint32_t *top)
    {
        uint32_t *const limit = static_cast<uint32_t *>(thread->StackLimit);
        const uint32_t *const base = static_cast<const uint32_t *>(thread->StackBase);
        if (g_watchedCount >= kWatchedMax || !limit || !base || limit >= base || top <= limit || top > base ||
            uintptr_t(base) - uintptr_t(limit) > 1024u * 1024u)
            return;
        for (uint32_t *p = limit; p < top; ++p)
            *p = kPaint;
        g_watched[g_watchedCount++] = Watched{thread, limit, base, threadId(thread), 0u};
        g_newThread = true;
    }

    // At DISPATCH_LEVEL: the calling thread, below its frame less 4 KB (for
    // the calls that paint and the interrupts that may come meanwhile).
    void watchCurrent()
    {
        volatile uint32_t here = 0;
        watch(KeGetCurrentThread(), const_cast<uint32_t *>(&here) - 1024);
    }

    // The main thread from before main().
    struct PaintMain
    {
        PaintMain()
        {
            const KIRQL irql = KeRaiseIrqlToDpcLevel();
            watchCurrent();
            KfLowerIrql(irql);
        }
    } g_paintMain;
#endif
}

void *xboxThreadStart(uint32_t stackBytes, void (*entry)(void *), void *arg)
{
    Start *start = new Start{entry, arg};
    HANDLE thread = CreateThread(nullptr, stackBytes, &threadEntry, start, 0, nullptr);
    if (!thread)
    {
        delete start;
        return nullptr;
    }
    return thread;
}

void xboxThreadJoin(void *thread)
{
    WaitForSingleObject(static_cast<HANDLE>(thread), INFINITE);
    CloseHandle(static_cast<HANDLE>(thread));
}

void xboxStackReport()
{
#if TS_STACK_PAINT
    static DWORD next = 0;
    const DWORD now = GetTickCount();
    if (int32_t(now - next) < 0)
        return;
    next = now + 5000u;

    // Threads met for the first time are painted, at DISPATCH_LEVEL (once
    // each: up to 256 KB, a fraction of a millisecond).
    bool present[kWatchedMax] = {};
    {
        const KIRQL irql = KeRaiseIrqlToDpcLevel();
        KTHREAD *const self = KeGetCurrentThread();
        KPROCESS *const process = self->ApcState.Process;
        for (LIST_ENTRY *entry = process ? process->ThreadListHead.Flink : nullptr;
             entry && entry != &process->ThreadListHead; entry = entry->Flink)
        {
            KTHREAD *const thread = CONTAINING_RECORD(entry, KTHREAD, ThreadListEntry);
            if (!live(thread))
                continue;
            const int slot = findWatched(thread);
            if (slot >= 0)
                present[slot] = true;
            else if (thread == self)
                watchCurrent();
            else // switched out: everything below its saved stack pointer is free
                watch(thread, static_cast<uint32_t *>(thread->KernelStack) - 16);
        }
        KfLowerIrql(irql);
    }

    // The stacks of those still there are read kScanWords at a time, each
    // at DISPATCH_LEVEL after checking the thread is still there (a thread
    // gone may have taken its stack with it): DPCs (vblank, USB) wait
    // microseconds, not the milliseconds a whole scan takes.
    uint32_t used[kWatchedMax] = {};
    for (int i = 0; i < g_watchedCount; ++i)
    {
        const uint32_t *p = g_watched[i].limit;
        while (present[i] && p < g_watched[i].base)
        {
            const uint32_t *const end = size_t(g_watched[i].base - p) > kScanWords ? p + kScanWords : g_watched[i].base;
            const KIRQL irql = KeRaiseIrqlToDpcLevel();
            present[i] = stillWatched(i);
            while (present[i] && p < end && *p == kPaint)
                ++p;
            KfLowerIrql(irql);
            if (p < end)
                break; // the deepest word used
        }
        used[i] = uint32_t(uintptr_t(g_watched[i].base) - uintptr_t(p));
    }

    bool deeper = g_newThread;
    g_newThread = false;
    for (int i = 0; i < g_watchedCount; ++i)
        if (present[i] && used[i] >= g_watched[i].deepest + 4096u)
            deeper = true;
    if (!deeper)
        return;
    char line[320];
    int length = std::snprintf(line, sizeof(line), "[TS:mem] stack deepest (thread used/size KB):");
    for (int i = 0; i < g_watchedCount && length < int(sizeof(line)); ++i)
    {
        if (!present[i])
            continue;
        g_watched[i].deepest = used[i];
        const uint32_t size = uint32_t(uintptr_t(g_watched[i].base) - uintptr_t(g_watched[i].limit));
        length += std::snprintf(line + length, sizeof(line) - size_t(length), " %u:%u/%u", g_watched[i].id,
                                (used[i] + 1023u) / 1024u, size / 1024u);
    }
    if (length < int(sizeof(line)) - 1)
    {
        line[length++] = '\n';
        xboxLogWrite(line, unsigned(length));
    }
#endif
}
