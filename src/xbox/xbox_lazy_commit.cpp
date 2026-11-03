// Guest memory committed on first touch (TS_LAZY_GUEST_RAM; see
// xbox_lazy_commit.h).
//
// Why: a four-player match leaves the console 50-600 KB free, and running
// out at a level load freezes the game. Measured mid-match on the console,
// 4.4 MB of the PS2 main RAM's pages and 2.0 MB of the GS VRAM's had never
// been written; allocated with new[] and memset, every one of them held
// physical memory from boot.
//
// How: each range is reserved with VirtualAlloc(MEM_RESERVE). A touch of a
// page not committed yet is an access violation (the Xbox kernel never pages:
// reserved-only is simply not present), dispatched to the faulting thread's
// SEH chain at fs:[0]. Every thread that can touch guest memory has this
// file's handler there for its lifetime (XboxLazyThreadScope: main, the game
// thread, the audio feeder, the texture pack loader; the VIF1 and GS stage
// workers, which the Xbox never starts, too). The handler commits the 4 KB
// page holding ExceptionInformation[1] (fresh pages read zero) and resumes
// the faulting instruction; any other fault goes on down the chain as
// before. A bit per page says which pages are committed, so a page two
// threads fault on together is counted once, and xboxCommitRange commits
// only the pages still missing.
//
// The handler runs at the faulting IRQL, on the faulting thread's stack,
// takes no lock and calls only NtAllocateVirtualMemory. A fault at
// DISPATCH_LEVEL or above cannot be served (the kernel stops before SEH
// there); nothing touches guest memory at raised IRQL (the renderer's and
// the profiler's interrupt work never does). Kernel copies into guest memory
// (ReadFile, in xbox_stdio.cpp's fread) commit their destination first.
//
// Under a debugger (XBDM) every first touch is a first-chance exception;
// the harness keeps the debugger from stopping on them.
#include "xbox_lazy_commit.h"

#if TS_LAZY_GUEST_RAM

#include "xbox_log.h"
#include "ps2x/exceptions.h"

#include <atomic>
#include <cstdio>
#include <cstring>
#include <excpt.h>

#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

namespace
{
    constexpr uint32_t kPageShift = 12u;
    constexpr uint32_t kPageSize = 1u << kPageShift;

    // One lazily committed range. Set up before any thread can touch it and
    // cleared after (PS2Memory::initialize / its destructor): the handler
    // reads the table without a lock.
    struct Range
    {
        uint8_t *base = nullptr;
        uint32_t pages = 0;
        const char *name = nullptr;
        std::atomic<uint32_t> *committed = nullptr; // bit per page (page / 32, page % 32)
        std::atomic<uint32_t> committedPages{0};
    };
    Range g_ranges[XboxLazyStats::kRanges];

    std::atomic<uint32_t> g_readFaults{0}, g_writeFaults{0}, g_precommitPages{0}, g_refaults{0};

    Range *rangeOf(uintptr_t address)
    {
        for (Range &range : g_ranges)
            if (range.base && address - uintptr_t(range.base) < uintptr_t(range.pages) << kPageShift)
                return &range;
        return nullptr;
    }

    bool pageCommitted(const Range &range, uint32_t page)
    {
        return (range.committed[page >> 5].load(std::memory_order_acquire) >> (page & 31u)) & 1u;
    }

    // Out of physical memory: the game cannot go on (a page it needs has no
    // memory behind it), as when new[] failed before; said in the log.
    [[noreturn]] void outOfMemory(const Range &range, uint32_t page, uint32_t pages)
    {
        char text[120];
        std::snprintf(text, sizeof(text), "[TS:mem] out of memory committing %s pages 0x%07X-0x%07X",
                      range.name, page << kPageShift, (page + pages) << kPageShift);
        ps2x::fatalError(text);
    }

    // Commits pages [first, first + count) of range in one kernel call and
    // marks them; returns how many were not marked before (another thread
    // may have committed some meanwhile: committing a committed page is a
    // no-op). False on no memory.
    bool commitPages(Range &range, uint32_t first, uint32_t count, uint32_t &added)
    {
        PVOID base = range.base + (size_t(first) << kPageShift);
        SIZE_T bytes = size_t(count) << kPageShift;
        if (!NT_SUCCESS(NtAllocateVirtualMemory(&base, 0, &bytes, MEM_COMMIT, PAGE_READWRITE)))
            return false;
        added = 0;
        for (uint32_t page = first; page < first + count; ++page)
        {
            const uint32_t bit = 1u << (page & 31u);
            if (!(range.committed[page >> 5].fetch_or(bit, std::memory_order_release) & bit))
                ++added;
        }
        range.committedPages.fetch_add(added, std::memory_order_relaxed);
        return true;
    }
}

// The SEH handler (cdecl, as the kernel's dispatcher calls it): commits the
// page of an access violation inside a lazy range and resumes the access.
extern "C" EXCEPTION_DISPOSITION __cdecl xboxLazyCommitHandler(EXCEPTION_RECORD *record, void *, CONTEXT *, void *)
{
    if (record->ExceptionCode != NTSTATUS(STATUS_ACCESS_VIOLATION) || (record->ExceptionFlags & EXCEPTION_UNWIND) ||
        record->NumberParameters < 2u)
        return ExceptionContinueSearch;
    Range *range = rangeOf(record->ExceptionInformation[1]);
    if (!range || KeGetCurrentIrql() >= DISPATCH_LEVEL)
        return ExceptionContinueSearch;
    // The faulting code may have left the direction flag set (a backward
    // memmove); the kernel's page zeroing expects it clear. The access
    // resumes with its own flags from the context record.
    __asm__ volatile("cld" ::: "memory");
    const uint32_t page = uint32_t((record->ExceptionInformation[1] - uintptr_t(range->base)) >> kPageShift);
    if (pageCommitted(*range, page))
    {
        // Committed by another thread between this access and here: the
        // access runs again and finds it.
        g_refaults.fetch_add(1u, std::memory_order_relaxed);
        return ExceptionContinueExecution;
    }
    uint32_t added = 0;
    if (!commitPages(*range, page, 1u, added))
        outOfMemory(*range, page, 1u);
    (record->ExceptionInformation[0] ? g_writeFaults : g_readFaults).fetch_add(1u, std::memory_order_relaxed);
    return ExceptionContinueExecution;
}

uint8_t *xboxLazyReserve(size_t bytes, const char *name)
{
    Range *slot = nullptr;
    for (Range &range : g_ranges)
        if (!range.base)
        {
            slot = &range;
            break;
        }
    const uint32_t pages = uint32_t((bytes + kPageSize - 1u) >> kPageShift);
    if (!slot || pages == 0u)
        return nullptr;
    void *base = VirtualAlloc(nullptr, size_t(pages) << kPageShift, MEM_RESERVE, PAGE_READWRITE);
    if (!base)
        return nullptr;
    slot->committed = new std::atomic<uint32_t>[(pages + 31u) / 32u]();
    slot->committedPages.store(0u, std::memory_order_relaxed);
    slot->pages = pages;
    slot->name = name;
    std::atomic_thread_fence(std::memory_order_release);
    slot->base = static_cast<uint8_t *>(base); // last: the handler looks ranges up by base
    return slot->base;
}

void xboxLazyRelease(void *base)
{
    if (!base)
        return;
    for (Range &range : g_ranges)
        if (range.base == base)
        {
            range.base = nullptr;
            VirtualFree(base, 0, MEM_RELEASE);
            delete[] range.committed;
            range.committed = nullptr;
            range.pages = 0;
            range.committedPages.store(0u, std::memory_order_relaxed);
            return;
        }
}

void xboxCommitRange(const void *ptr, size_t bytes)
{
    if (bytes == 0u)
        return;
    const uintptr_t start = uintptr_t(ptr), end = start + bytes;
    for (Range &range : g_ranges)
    {
        if (!range.base)
            continue;
        const uintptr_t low = uintptr_t(range.base), high = low + (uintptr_t(range.pages) << kPageShift);
        if (end <= low || start >= high)
            continue;
        const uint32_t first = uint32_t(((start > low ? start : low) - low) >> kPageShift);
        const uint32_t last = uint32_t(((end < high ? end : high) - low + kPageSize - 1u) >> kPageShift);
        // Each run of missing pages in one call.
        for (uint32_t page = first; page < last;)
        {
            if (pageCommitted(range, page))
            {
                ++page;
                continue;
            }
            uint32_t run = page + 1u;
            while (run < last && !pageCommitted(range, run))
                ++run;
            uint32_t added = 0;
            if (!commitPages(range, page, run - page, added))
                outOfMemory(range, page, run - page);
            g_precommitPages.fetch_add(added, std::memory_order_relaxed);
            page = run;
        }
    }
}

void xboxLazyFrameEnter(void *frame[2])
{
    void *top;
    __asm__ volatile("movl %%fs:0, %0" : "=r"(top));
    frame[0] = top;
    frame[1] = reinterpret_cast<void *>(&xboxLazyCommitHandler);
    __asm__ volatile("movl %0, %%fs:0" : : "r"(frame) : "memory");
}

void xboxLazyFrameLeave(void *frame[2])
{
    void *top;
    __asm__ volatile("movl %%fs:0, %0" : "=r"(top));
    if (top == frame)
    {
        __asm__ volatile("movl %0, %%fs:0" : : "r"(frame[0]) : "memory");
        return;
    }
    // A record above this one was left linked: unlink this one in place.
    for (void **record = static_cast<void **>(top); record && record != reinterpret_cast<void **>(-1);
         record = static_cast<void **>(record[0]))
        if (record[0] == frame)
        {
            record[0] = frame[0];
            return;
        }
}

void xboxLazyGetStats(XboxLazyStats &stats)
{
    stats = XboxLazyStats{};
    for (const Range &range : g_ranges)
    {
        if (!range.base)
            continue;
        const int i = stats.ranges++;
        stats.names[i] = range.name;
        stats.sizeKB[i] = range.pages * (kPageSize / 1024u);
        stats.committedKB[i] = range.committedPages.load(std::memory_order_relaxed) * (kPageSize / 1024u);
    }
    stats.readFaults = g_readFaults.load(std::memory_order_relaxed);
    stats.writeFaults = g_writeFaults.load(std::memory_order_relaxed);
    stats.precommitKB = g_precommitPages.load(std::memory_order_relaxed) * (kPageSize / 1024u);
    stats.refaults = g_refaults.load(std::memory_order_relaxed);
}

#endif // TS_LAZY_GUEST_RAM
