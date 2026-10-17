// Guest RAM placement for in-place vertex fetch: see xbox_guest_ram.h.
#include "xbox_guest_ram.h"

#include <hal/xbox.h>
#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

#include <cstddef>
#include <cstdint>
#include <iostream>

namespace
{
    constexpr size_t kRdramBytes = 32u << 20;
    constexpr uint32_t kPage = 4096u;

    uint8_t *s_block = nullptr; // P1's reservation (handed out once)
    bool s_handedOut = false;
    uint32_t s_blockPhysical = 0;
}

// The placement seam's override (runtime/ps2_memory.h, ps2_memory_alloc.cpp:
// weak there). P0: declines, and the runtime allocates RDRAM as before.
uint8_t *ps2xPlatformAllocRdram(size_t bytes)
{
    if (!s_block || s_handedOut || bytes > kRdramBytes)
        return nullptr;
    s_handedOut = true;
    return s_block;
}

bool ps2xPlatformFreeRdram(uint8_t *memory, size_t bytes)
{
    (void)bytes;
    if (!s_block || memory != s_block)
        return false;
    MmFreeContiguousMemory(s_block);
    s_block = nullptr;
    s_handedOut = false;
    s_blockPhysical = 0;
    return true;
}

// xbox_main.cpp: right after the video mode, before anything else takes
// memory (weak there).
void xboxEarlyPlatformInit()
{
#if TS_INPLACE_PLACEMENT
    // Write-back cached, anywhere in RAM (the game's RDRAM is ordinary
    // cached memory today; coherency with the GPU is the in-place glue's).
    void *block = MmAllocateContiguousMemoryEx(kRdramBytes, 0, 0xFFFFFFFFu, kPage, PAGE_READWRITE);
    if (!block)
    {
        std::cout << "[TS:inplace] P1: no contiguous 32 MiB block; P0 (arrays checked one by one)" << std::endl;
        return;
    }
    // What comes after must still find its contiguous memory.
    void *margin = MmAllocateContiguousMemoryEx(kP1MarginBytes, 0, 0x03FFFFFFu, 0, PAGE_READWRITE);
    if (!margin)
    {
        MmFreeContiguousMemory(block);
        std::cout << "[TS:inplace] P1: the block leaves too little contiguous memory; P0" << std::endl;
        return;
    }
    MmFreeContiguousMemory(margin);
    s_block = static_cast<uint8_t *>(block);
    s_blockPhysical = uint32_t(MmGetPhysicalAddress(block));
    std::cout << "[TS:inplace] P1: RDRAM contiguous at physical 0x" << std::hex << s_blockPhysical << std::dec
              << std::endl;
#endif
}

uint32_t xboxGuestRamPlacement() { return s_block && s_handedOut ? 1u : 0u; }

uint32_t xboxGuestRamPhysicalBase() { return s_block && s_handedOut ? s_blockPhysical : 0u; }

uint32_t xboxGuestPhysical(const void *host)
{
    const uint8_t *p = static_cast<const uint8_t *>(host);
    if (s_block && s_handedOut && p >= s_block && p < s_block + kRdramBytes)
        return s_blockPhysical + uint32_t(p - s_block);
    return uint32_t(MmGetPhysicalAddress(const_cast<void *>(host)));
}

bool xboxGuestContiguous(const void *host, uint32_t bytes, uint32_t &physical)
{
    const uint8_t *p = static_cast<const uint8_t *>(host);
    physical = xboxGuestPhysical(p);
    if (bytes == 0u)
        return true;
    if (s_block && s_handedOut && p >= s_block && p + bytes <= s_block + kRdramBytes)
        return true;
    // Page by page: each page's physical address must follow the last.
    const uintptr_t first = reinterpret_cast<uintptr_t>(p);
    const uintptr_t last = first + bytes - 1u;
    uintptr_t page = (first & ~uintptr_t(kPage - 1u)) + kPage;
    for (; page <= last; page += kPage)
    {
        const uint32_t expected = physical + uint32_t(page - first);
        if (uint32_t(MmGetPhysicalAddress(reinterpret_cast<void *>(page))) != expected)
            return false;
    }
    return true;
}
