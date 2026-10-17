// The guest memories PS2Memory owns (RDRAM, scratchpad, GS VRAM, VU0/VU1
// code and data): their allocation and release, split out of ps2_memory.cpp
// (src/xbox/PUSH-BC-PLAN.md W0-S; owned by B-PLATFORM) behind
// ps2xHostAllocGuest / ps2xHostFreeGuest (runtime/ps2_memory.h), the
// placement seam of section 6, I-13. Today both are new[] and delete[], as
// before; RDRAM first asks the weak platform hook, which declines until
// C-XF's M8 placement defines it (B-PLATFORM's page-aligned allocations
// come through the same two functions).
#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include "ps2x/exceptions.h"

#include <cstring>
#include <exception>
#include <iostream>

// TS_GUEST_PAGE_ALIGN 1 (src/xbox/PUSH-BC-PLAN.md M3.8, B-PLATFORM; Xbox
// only; gated on the console's MISALIGN_MEM_REF count, so 0 by default):
// RDRAM and GS VRAM come from VirtualAlloc, page-aligned, instead of
// dlmalloc, which hands large blocks out at a page + 8 bytes (so every
// 16-byte guest quadword straddled a 16-byte boundary and every 64-byte
// line held parts of two). The small memories (scratchpad 16 KB, VU0 code
// and data 4 KB each, VU1 code and data 16 KB each: 56 KB) share one
// page-aligned VirtualAlloc block, each 4 KB-aligned in it. The contents
// are the same (zeroed by allocateGuestMemory as before); only the host
// addresses move. The platform placement hook (ps2xPlatformAllocRdram, C-XF)
// still goes first for RDRAM. 0: new[] / delete[], as before.
#ifndef TS_GUEST_PAGE_ALIGN
#define TS_GUEST_PAGE_ALIGN 0
#endif
#if TS_GUEST_PAGE_ALIGN && defined(PLATFORM_XBOX)
#include <windows.h>
#define PS2X_GUEST_PAGES 1
#else
#define PS2X_GUEST_PAGES 0
#endif

#if defined(__clang__) || defined(__GNUC__)
#define PS2X_WEAK __attribute__((weak))
#else
#define PS2X_WEAK
#endif

PS2X_WEAK uint8_t *ps2xPlatformAllocRdram(size_t bytes)
{
    (void)bytes;
    return nullptr;
}

PS2X_WEAK bool ps2xPlatformFreeRdram(uint8_t *memory, size_t bytes)
{
    (void)memory;
    (void)bytes;
    return false;
}

#if PS2X_GUEST_PAGES
namespace
{
    // The small memories' shared block: each kind's offset (4 KB-aligned)
    // and size; the block is released when the last of them goes.
    struct SmallSlot
    {
        Ps2GuestMemoryKind kind;
        uint32_t offset, bytes;
    };
    constexpr SmallSlot kSmallSlots[] = {
        {Ps2GuestMemoryKind::Scratchpad, 0x0000u, PS2_SCRATCHPAD_SIZE},
        {Ps2GuestMemoryKind::Vu1Data, 0x4000u, PS2_VU1_DATA_SIZE},
        {Ps2GuestMemoryKind::Vu1Code, 0x8000u, PS2_VU1_CODE_SIZE},
        {Ps2GuestMemoryKind::Vu0Code, 0xC000u, PS2_VU0_CODE_SIZE},
        {Ps2GuestMemoryKind::Vu0Data, 0xD000u, PS2_VU0_DATA_SIZE},
    };
    constexpr uint32_t kSmallBlockBytes = 0xE000u; // 56 KB
    static_assert(PS2_SCRATCHPAD_SIZE <= 0x4000u && PS2_VU1_DATA_SIZE <= 0x4000u && PS2_VU1_CODE_SIZE <= 0x4000u &&
                      PS2_VU0_CODE_SIZE <= 0x1000u && PS2_VU0_DATA_SIZE <= 0x1000u,
                  "the small guest memories must fit their slots");
    uint8_t *s_smallBlock = nullptr;
    uint32_t s_smallLive = 0u; // bit per kind handed out
    uint8_t *s_paged[2] = {};  // RDRAM and GS VRAM, when VirtualAlloc gave them

    const SmallSlot *smallSlot(Ps2GuestMemoryKind kind, size_t bytes)
    {
        for (const SmallSlot &slot : kSmallSlots)
            if (slot.kind == kind && bytes <= slot.bytes)
                return &slot;
        return nullptr;
    }

    uint8_t *pages(size_t bytes)
    {
        return static_cast<uint8_t *>(VirtualAlloc(nullptr, bytes, MEM_RESERVE | MEM_COMMIT, PAGE_READWRITE));
    }
}
#endif

uint8_t *ps2xHostAllocGuest(Ps2GuestMemoryKind kind, size_t bytes)
{
    if (kind == Ps2GuestMemoryKind::Rdram)
        if (uint8_t *placed = ps2xPlatformAllocRdram(bytes))
            return placed;
#if PS2X_GUEST_PAGES
    if (kind == Ps2GuestMemoryKind::Rdram || kind == Ps2GuestMemoryKind::GsVram)
    {
        if (uint8_t *memory = pages(bytes))
            return s_paged[kind == Ps2GuestMemoryKind::Rdram ? 0 : 1] = memory;
    }
    else if (const SmallSlot *slot = smallSlot(kind, bytes))
    {
        if (!s_smallBlock)
            s_smallBlock = pages(kSmallBlockBytes);
        if (s_smallBlock)
        {
            s_smallLive |= 1u << static_cast<uint32_t>(kind);
            return s_smallBlock + slot->offset;
        }
    }
    // (VirtualAlloc failed: new[] below, freed by the matching test there.)
#endif
    return new uint8_t[bytes];
}

void ps2xHostFreeGuest(Ps2GuestMemoryKind kind, uint8_t *memory, size_t bytes)
{
    if (!memory)
        return;
    if (kind == Ps2GuestMemoryKind::Rdram && ps2xPlatformFreeRdram(memory, bytes))
        return;
#if PS2X_GUEST_PAGES
    if (s_smallBlock && memory >= s_smallBlock && memory < s_smallBlock + kSmallBlockBytes)
    {
        s_smallLive &= ~(1u << static_cast<uint32_t>(kind));
        if (s_smallLive == 0u)
        {
            VirtualFree(s_smallBlock, 0, MEM_RELEASE);
            s_smallBlock = nullptr;
        }
        return;
    }
    for (uint8_t *&paged : s_paged)
        if (paged && paged == memory)
        {
            VirtualFree(memory, 0, MEM_RELEASE);
            paged = nullptr;
            return;
        }
#endif
    delete[] memory;
}

namespace
{
    size_t s_rdramBytes = PS2_RAM_SIZE; // the one PS2Memory's RDRAM size (for the free)
}

PS2Memory::~PS2Memory()
{
    stopVif1Worker();
    freeGuestMemory();
}

void PS2Memory::freeGuestMemory()
{
    ps2xHostFreeGuest(Ps2GuestMemoryKind::Rdram, m_rdram, s_rdramBytes);
    ps2xHostFreeGuest(Ps2GuestMemoryKind::Scratchpad, m_scratchpad, PS2_SCRATCHPAD_SIZE);
    delete[] iop_ram; // never allocated any more (see initialize)
    ps2xHostFreeGuest(Ps2GuestMemoryKind::GsVram, m_gsVRAM, PS2_GS_VRAM_SIZE);
    ps2xHostFreeGuest(Ps2GuestMemoryKind::Vu0Code, m_vu0Code, PS2_VU0_CODE_SIZE);
    ps2xHostFreeGuest(Ps2GuestMemoryKind::Vu0Data, m_vu0Data, PS2_VU0_DATA_SIZE);
    ps2xHostFreeGuest(Ps2GuestMemoryKind::Vu1Code, m_vu1Code, PS2_VU1_CODE_SIZE);
    ps2xHostFreeGuest(Ps2GuestMemoryKind::Vu1Data, m_vu1Data, PS2_VU1_DATA_SIZE);
    m_rdram = nullptr;
    m_scratchpad = nullptr;
    ps2SetScratchpadHostPtr(nullptr);
    iop_ram = nullptr;
    m_gsVRAM = nullptr;
    m_vu0Code = nullptr;
    m_vu0Data = nullptr;
    m_vu1Code = nullptr;
    m_vu1Data = nullptr;
}

bool PS2Memory::allocateGuestMemory(size_t ramSize)
{
    PS2X_TRY
    {
        // Allocate main RAM
        s_rdramBytes = ramSize;
        m_rdram = ps2xHostAllocGuest(Ps2GuestMemoryKind::Rdram, ramSize);
        std::memset(m_rdram, 0, ramSize);

        // Allocate scratchpad
        m_scratchpad = ps2xHostAllocGuest(Ps2GuestMemoryKind::Scratchpad, PS2_SCRATCHPAD_SIZE);
        std::memset(m_scratchpad, 0, PS2_SCRATCHPAD_SIZE);
        ps2SetScratchpadHostPtr(m_scratchpad);

        // Allocate GS VRAM (4MB)
        m_gsVRAM = ps2xHostAllocGuest(Ps2GuestMemoryKind::GsVram, PS2_GS_VRAM_SIZE);
        std::memset(m_gsVRAM, 0, PS2_GS_VRAM_SIZE);

        m_vu0Code = ps2xHostAllocGuest(Ps2GuestMemoryKind::Vu0Code, PS2_VU0_CODE_SIZE);
        m_vu0Data = ps2xHostAllocGuest(Ps2GuestMemoryKind::Vu0Data, PS2_VU0_DATA_SIZE);
        std::memset(m_vu0Code, 0, PS2_VU0_CODE_SIZE);
        std::memset(m_vu0Data, 0, PS2_VU0_DATA_SIZE);

        m_vu1Code = ps2xHostAllocGuest(Ps2GuestMemoryKind::Vu1Code, PS2_VU1_CODE_SIZE);
        m_vu1Data = ps2xHostAllocGuest(Ps2GuestMemoryKind::Vu1Data, PS2_VU1_DATA_SIZE);
        std::memset(m_vu1Code, 0, PS2_VU1_CODE_SIZE);
        std::memset(m_vu1Data, 0, PS2_VU1_DATA_SIZE);
        return true;
    }
    PS2X_CATCH(const std::exception &, e)
    {
        std::cerr << "Error initializing PS2 memory: " << e.what() << std::endl;
        freeGuestMemory();
        return false;
    }
}
