#pragma once
// Guest memory committed on first touch (TS_LAZY_GUEST_RAM, xbox_lazy_commit.cpp).
//
// The PS2's 32 MB of main RAM and the GS's 4 MB of VRAM are address space
// only (ps2_memory.cpp); a page takes physical memory when it is first read
// or written. A touch of a page not committed yet faults; the handler every
// thread that can touch guest memory installs (XboxLazyThreadScope) commits
// that page, which reads zero as the old memset left it, and the access runs
// again. Kernel calls that write into guest memory (file reads) are not
// covered by the handler: the kernel may copy at a raised IRQL or lock the
// pages for DMA, where a fault is fatal, so their destination is committed
// first (xboxCommitRange).
//
// The runtime files (ps2_memory.cpp, ps2_runtime.cpp) declare the functions
// they use themselves, as they do for xbox_stacks.cpp; TS_LAZY_GUEST_RAM's
// default is repeated there.
#include <cstddef>
#include <cstdint>

#ifndef TS_LAZY_GUEST_RAM
#define TS_LAZY_GUEST_RAM 1
#endif

// Reserves bytes of address space as a lazily committed range named name
// (the status line's label); nullptr when there is no address space.
uint8_t *xboxLazyReserve(size_t bytes, const char *name);
// Releases a range xboxLazyReserve returned (nullptr: nothing).
void xboxLazyRelease(void *base);
// Commits the pages of [ptr, ptr + bytes) that lie in a lazy range and are
// not committed yet; memory outside the ranges is left alone. Halts the
// title (logged) when the console is out of memory.
void xboxCommitRange(const void *ptr, size_t bytes);

// The handler's registration record (prev, handler), on the stack of the
// thread it covers, linked at fs:[0] from Enter until Leave.
void xboxLazyFrameEnter(void *frame[2]);
void xboxLazyFrameLeave(void *frame[2]);

// Installs the handler for this thread while it exists: a local of the
// thread's entry function, constructed before the thread touches guest memory.
class XboxLazyThreadScope
{
public:
    XboxLazyThreadScope() { xboxLazyFrameEnter(frame_); }
    ~XboxLazyThreadScope() { xboxLazyFrameLeave(frame_); }
    XboxLazyThreadScope(const XboxLazyThreadScope &) = delete;
    XboxLazyThreadScope &operator=(const XboxLazyThreadScope &) = delete;

private:
    void *frame_[2];
};

// Cumulative, for the [TS:lazy] status line (xbox_main.cpp).
struct XboxLazyStats
{
    static constexpr int kRanges = 4;
    int ranges = 0;
    const char *names[kRanges] = {};
    uint32_t sizeKB[kRanges] = {};
    uint32_t committedKB[kRanges] = {};
    uint32_t readFaults = 0;    // pages committed by the handler on a read
    uint32_t writeFaults = 0;   // ... on a write
    uint32_t precommitKB = 0;   // committed ahead of a kernel call (xboxCommitRange)
    uint32_t refaults = 0;      // faults on a page another thread had just committed
};
void xboxLazyGetStats(XboxLazyStats &stats);
