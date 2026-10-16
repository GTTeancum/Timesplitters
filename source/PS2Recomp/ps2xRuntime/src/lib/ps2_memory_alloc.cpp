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

uint8_t *ps2xHostAllocGuest(Ps2GuestMemoryKind kind, size_t bytes)
{
    if (kind == Ps2GuestMemoryKind::Rdram)
        if (uint8_t *placed = ps2xPlatformAllocRdram(bytes))
            return placed;
    return new uint8_t[bytes];
}

void ps2xHostFreeGuest(Ps2GuestMemoryKind kind, uint8_t *memory, size_t bytes)
{
    if (!memory)
        return;
    if (kind == Ps2GuestMemoryKind::Rdram && ps2xPlatformFreeRdram(memory, bytes))
        return;
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
