// Guest RAM placement for in-place vertex fetch (src/xbox/PUSH-BC-PLAN.md
// section 3.3 item 1, M8; owned by C-XF). The NV2A fetches a model's arrays
// from the game's RDRAM through pbkit's DMA object 3 (all of RAM, physical
// offsets), so an array it draws must lie in physically contiguous memory:
//   P0 (default)  RDRAM is the runtime's ordinary allocation; each array is
//                 checked once for physical contiguity (MmGetPhysicalAddress
//                 of every page in its span: Xbox memory never pages or
//                 moves, so the answer is kept with the array).
//   P1            RDRAM is one contiguous, write-back cached 32 MiB block,
//                 reserved at start-up (xboxEarlyPlatformInit, right after
//                 the video mode) and handed to the runtime through the
//                 placement seam (ps2xPlatformAllocRdram, I-13). Taken only
//                 when a block of kP1MarginBytes is still free and
//                 contiguous after it (pbkit's push buffer, the screen and
//                 depth buffers, the texture pool, the transform ring and the
//                 screen vertex buffer); otherwise it is given back and P0
//                 is used. Every array is then contiguous.
// (P2, a DMA object of its own for a PCI/AGP target, is only for T2c/T2d's
// results and is not built.)
//
// TS_INPLACE_PLACEMENT 1: P1 is tried. 0 (default): P0, and the runtime's
// RDRAM is allocated exactly as before (the placement hook declines).
// P1's layout was only ever seen on the shared devkit: it must be checked
// on a retail console before it becomes a default (plan section 3.3 item 11).
#pragma once
#include <cstdint>

#ifndef TS_INPLACE_PLACEMENT
#define TS_INPLACE_PLACEMENT 0
#endif

// The contiguous memory P1 leaves for everything after it.
constexpr uint32_t kP1MarginBytes = (520u + 3u * 608u + 608u + 1280u + 352u + 288u) * 1024u;

// The placement in force: 0 (P0) or 1 (P1), and P1's physical base.
uint32_t xboxGuestRamPlacement();
uint32_t xboxGuestRamPhysicalBase();
// The physical address of a host byte (MmGetPhysicalAddress; P1: base +
// offset, no call).
uint32_t xboxGuestPhysical(const void *host);
// Whether [host, host + bytes) is physically contiguous; physical: its
// first byte's physical address. Walks the span's pages (P1: always true).
bool xboxGuestContiguous(const void *host, uint32_t bytes, uint32_t &physical);
