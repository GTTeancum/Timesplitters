#include "iop_memory.h"

#include <algorithm>
#include <cstring>
#include <cstdio>
#include <cstdlib>
#if PS2X_IOP_SPARSE_RAM
#include <mutex>
#include <windows.h>
#endif

#if PS2X_IOP_SPARSE_RAM
namespace ps2x::iop
{
    IopRamStats g_iopRamStats;
}
#endif

namespace ps2x::iop::detail
{
    namespace
    {
        constexpr uint32_t kDmaSpu0Chcr = 0x1F8010C8u;
        constexpr uint32_t kDmaSpu1Chcr = 0x1F801508u;
        constexpr uint32_t kDmaStart = 1u << 24u;
        constexpr int kDmaSpu0Irq = 0x24;
        constexpr int kDmaSpu1Irq = 0x28;

        uint32_t alignUp(uint32_t value, uint32_t alignment)
        {
            return (value + alignment - 1u) & ~(alignment - 1u);
        }

#if PS2X_IOP_SPARSE_RAM
        // Page commits (rare: a page's first store) from any thread.
        std::mutex g_commitMutex;
        // The committed size is logged at each step of this, and at a commit
        // that comes this long after the last one (boot and loads commit in
        // bursts; a match should not commit at all).
        constexpr uint32_t kCommitLogStep = 128u * 1024u;
        constexpr uint32_t kLateCommitMs = 2000u;

        // Bits [first, last) of a bit array (bit i: word i / 32, bit i % 32).
        bool allBits(const uint32_t *bits, uint32_t first, uint32_t last)
        {
            for (; first < last && (first & 31u) != 0u; ++first)
                if (((bits[first >> 5] >> (first & 31u)) & 1u) == 0u)
                    return false;
            for (; last - first >= 32u && first < last; first += 32u)
                if (bits[first >> 5] != 0xFFFFFFFFu)
                    return false;
            for (; first < last; ++first)
                if (((bits[first >> 5] >> (first & 31u)) & 1u) == 0u)
                    return false;
            return true;
        }
        void fillBits(uint32_t *bits, uint32_t first, uint32_t last, bool value)
        {
            for (; first < last && (first & 31u) != 0u; ++first)
                bits[first >> 5] = value ? (bits[first >> 5] | (1u << (first & 31u))) : (bits[first >> 5] & ~(1u << (first & 31u)));
            for (; last - first >= 32u && first < last; first += 32u)
                bits[first >> 5] = value ? 0xFFFFFFFFu : 0u;
            for (; first < last; ++first)
                bits[first >> 5] = value ? (bits[first >> 5] | (1u << (first & 31u))) : (bits[first >> 5] & ~(1u << (first & 31u)));
        }
#if TS_IOP_SPARSE_SELFCHECK
        unsigned g_checkDiffs = 0;
#endif
#endif
    }

#if PS2X_IOP_SPARSE_RAM
    IopMemory::IopMemory()
        : m_scratch(ScratchSize)
    {
        // Address space only; pages are committed as they are first written.
        m_ram = static_cast<uint8_t *>(VirtualAlloc(nullptr, RamSize, MEM_RESERVE, PAGE_READWRITE));
        m_owned = static_cast<uint32_t *>(VirtualAlloc(nullptr, RamSize / 8u, MEM_RESERVE, PAGE_READWRITE));
        if (!m_ram || !m_owned)
        {
            std::fprintf(stderr, "[TS:mem] IOP RAM: no address space\n");
            std::abort();
        }
#if TS_IOP_SPARSE_SELFCHECK
        m_checkRam.assign(RamSize, uint8_t{0});
        m_checkOwned.assign(RamSize, false);
#endif
        reset();
    }

    IopMemory::~IopMemory()
    {
        VirtualFree(m_ram, 0, MEM_RELEASE);
        VirtualFree(m_owned, 0, MEM_RELEASE);
    }

    bool IopMemory::ramReadable(uint32_t phys, size_t size) const noexcept
    {
        if (size == 0u)
            return true;
        const uint32_t last = static_cast<uint32_t>((phys + size - 1u) / PageSize);
        for (uint32_t page = phys / PageSize; page <= last; ++page)
            if (!ramPage(page))
                return false;
        return true;
    }

    // Commits the RAM pages of [phys, phys + size) not committed yet (they
    // read zero, as before). The caller checked the range.
    void IopMemory::commitRam(uint32_t phys, size_t size)
    {
        if (size == 0u)
            return;
        std::lock_guard<std::mutex> lock(g_commitMutex);
        const uint32_t last = static_cast<uint32_t>((phys + size - 1u) / PageSize);
        for (uint32_t page = phys / PageSize; page <= last; ++page)
        {
            if (ramPage(page))
                continue;
            if (!VirtualAlloc(m_ram + page * PageSize, PageSize, MEM_COMMIT, PAGE_READWRITE))
            {
                std::fprintf(stderr, "[TS:mem] IOP RAM: out of memory committing page 0x%05X\n", page * PageSize);
                std::abort();
            }
            m_ramCommitted[page >> 5].fetch_or(1u << (page & 31u), std::memory_order_release);
            ++m_committedPages;
            noteCommit("RAM", page);
        }
    }

    // A page committed: the counts, and the log line at each kCommitLogStep
    // of RAM or after kLateCommitMs without a commit.
    void IopMemory::noteCommit(const char *what, uint32_t page)
    {
        g_iopRamStats.ramPages.store(m_committedPages, std::memory_order_relaxed);
        g_iopRamStats.ownedPages.store(m_ownedPagesCommitted, std::memory_order_relaxed);
        const uint32_t now = GetTickCount();
        const bool late = m_lastCommitTick != 0u && now - m_lastCommitTick >= kLateCommitMs;
        m_lastCommitTick = now != 0u ? now : 1u;
        if (late)
            g_iopRamStats.lateCommits.fetch_add(1u, std::memory_order_relaxed);
        if (!late && m_committedPages * PageSize < m_loggedPages * PageSize + kCommitLogStep)
            return;
        m_loggedPages = m_committedPages;
        std::fprintf(stderr, "[TS:mem] IOP RAM: %u KB of %u committed (ownership bits %u KB of %u)%s%s page %u\n",
                     m_committedPages * PageSize / 1024u, RamSize / 1024u, m_ownedPagesCommitted * PageSize / 1024u,
                     RamSize / 8u / 1024u, late ? "; late: " : "; ", what, page);
    }

    // Ownership of [address, address + size): pages of bits are committed
    // to set them; clearing bits never committed is nothing to do.
    void IopMemory::setOwned(uint32_t address, size_t size, bool owned)
    {
        if (size == 0u)
            return;
        const uint32_t end = static_cast<uint32_t>(address + size);
        for (uint32_t first = address; first < end;)
        {
            const uint32_t page = (first >> 3) / PageSize;
            const uint32_t pageEnd = std::min<uint32_t>(end, (page + 1u) * PageSize * 8u);
            if (!ownedPage(page))
            {
                if (!owned)
                {
                    first = pageEnd;
                    continue;
                }
                std::lock_guard<std::mutex> lock(g_commitMutex);
                if (!ownedPage(page))
                {
                    if (!VirtualAlloc(reinterpret_cast<uint8_t *>(m_owned) + page * PageSize, PageSize, MEM_COMMIT,
                                      PAGE_READWRITE))
                    {
                        std::fprintf(stderr, "[TS:mem] IOP RAM: out of memory committing ownership page %u\n", page);
                        std::abort();
                    }
                    m_ownedCommitted[page >> 5].fetch_or(1u << (page & 31u), std::memory_order_release);
                    ++m_ownedPagesCommitted;
                    noteCommit("ownership", page);
                }
            }
            fillBits(m_owned, first, pageEnd, owned);
            first = pageEnd;
        }
    }

    void IopMemory::decommitAll()
    {
        std::lock_guard<std::mutex> lock(g_commitMutex);
        for (uint32_t page = 0; page < RamPages; ++page)
            if (ramPage(page))
                VirtualFree(m_ram + page * PageSize, PageSize, MEM_DECOMMIT);
        for (uint32_t page = 0; page < OwnedPages; ++page)
            if (ownedPage(page))
                VirtualFree(reinterpret_cast<uint8_t *>(m_owned) + page * PageSize, PageSize, MEM_DECOMMIT);
        for (auto &word : m_ramCommitted)
            word.store(0u, std::memory_order_release);
        for (auto &word : m_ownedCommitted)
            word.store(0u, std::memory_order_release);
        m_committedPages = 0;
        m_loggedPages = 0;
        m_ownedPagesCommitted = 0;
        m_lastCommitTick = 0;
        g_iopRamStats.ramPages.store(0u, std::memory_order_relaxed);
        g_iopRamStats.ownedPages.store(0u, std::memory_order_relaxed);
    }

#if TS_IOP_SPARSE_SELFCHECK
    void IopMemory::checkRead(const char *what, uint32_t phys, const void *sparse, size_t size) const
    {
        if (std::memcmp(m_checkRam.data() + phys, sparse, size) == 0)
            return;
        if (++g_checkDiffs <= 8u)
            std::fprintf(stderr, "[TS:iopcheck] %s at 0x%05X (%u bytes) differs from the dense copy (%u)\n", what,
                         phys, static_cast<unsigned>(size), g_checkDiffs);
    }
#endif
#else
    IopMemory::IopMemory()
        : m_ram(RamSize), m_owned(RamSize), m_scratch(ScratchSize)
    {
        reset();
    }
#endif

    void IopMemory::reset()
    {
#if PS2X_IOP_SPARSE_RAM
        decommitAll(); // every page reads zero again, and no byte is owned
#if TS_IOP_SPARSE_SELFCHECK
        std::fill(m_checkRam.begin(), m_checkRam.end(), uint8_t{0});
        std::fill(m_checkOwned.begin(), m_checkOwned.end(), false);
#endif
#else
        std::fill(m_ram.begin(), m_ram.end(), uint8_t{0});
        std::fill(m_owned.begin(), m_owned.end(), false);
#endif
        std::fill(m_scratch.begin(), m_scratch.end(), uint8_t{0});
        m_hardware.clear();
        m_allocations.clear();
        m_heapCursor = HeapBase;
        m_interruptStatus = 0;
        m_interruptMask = 0;
        m_interruptControl = 1;
        m_dmaStart.reset();
    }

    uint32_t IopMemory::physicalAddress(uint32_t address) noexcept
    {
        return address & 0x1FFFFFFFu;
    }

    uint8_t IopMemory::read8(uint32_t address) const
    {
        const uint32_t phys = physicalAddress(address);
        if (phys < RamSize)
        {
#if PS2X_IOP_SPARSE_RAM
            const uint8_t value = ramByte(phys);
#if TS_IOP_SPARSE_SELFCHECK
            checkRead("read8", phys, &value, sizeof(value));
#endif
            return value;
#else
            return m_ram[phys];
#endif
        }
        if (phys >= ScratchBase && phys < ScratchBase + ScratchSize)
            return m_scratch[phys - ScratchBase];
        const uint32_t value = readHardware32(phys & ~3u);
        return static_cast<uint8_t>(value >> ((phys & 3u) * 8u));
    }

    uint16_t IopMemory::read16(uint32_t address) const
    {
        const uint32_t phys = physicalAddress(address);
        if (phys >= Spu2Base && phys < Spu2Base + 0x800u && m_spuBus.read)
        {
            uint16_t value = 0;
            if (m_spuBus.read(phys - Spu2Base, value))
                return value;
        }
        if (phys + 1u < RamSize)
        {
            uint16_t value;
#if PS2X_IOP_SPARSE_RAM
            if ((phys & (PageSize - 1u)) != PageSize - 1u) // both bytes in one page
            {
                value = 0u;
                if (ramPage(phys / PageSize))
                    std::memcpy(&value, m_ram + phys, sizeof(value));
            }
            else
                value = static_cast<uint16_t>(ramByte(phys) | (static_cast<uint16_t>(ramByte(phys + 1u)) << 8u));
#if TS_IOP_SPARSE_SELFCHECK
            checkRead("read16", phys, &value, sizeof(value));
#endif
#else
            std::memcpy(&value, m_ram.data() + phys, sizeof(value));
#endif
            return value;
        }
        return static_cast<uint16_t>(read8(address) | (static_cast<uint16_t>(read8(address + 1u)) << 8u));
    }

    uint32_t IopMemory::read32(uint32_t address) const
    {
        const uint32_t phys = physicalAddress(address);
        if ((phys & 3u) == 0u && phys + 3u < RamSize)
        {
            uint32_t value;
#if PS2X_IOP_SPARSE_RAM
            // An aligned word is in one page.
            value = 0u;
            if (ramPage(phys / PageSize))
                std::memcpy(&value, m_ram + phys, sizeof(value));
#if TS_IOP_SPARSE_SELFCHECK
            checkRead("read32", phys, &value, sizeof(value));
#endif
#else
            std::memcpy(&value, m_ram.data() + phys, sizeof(value));
#endif
            return value;
        }
        if ((phys & 3u) == 0u && phys >= ScratchBase && phys + 3u < ScratchBase + ScratchSize)
        {
            uint32_t value;
            std::memcpy(&value, m_scratch.data() + (phys - ScratchBase), sizeof(value));
            return value;
        }
        if ((phys & 3u) == 0u && phys >= Spu2Base && phys < Spu2Base + 0x800u && m_spuBus.read)
            return static_cast<uint32_t>(read16(address)) | (static_cast<uint32_t>(read16(address + 2u)) << 16u);
        if ((phys & 3u) == 0u && isHardwareAddress(phys))
            return readHardware32(phys);

        return static_cast<uint32_t>(read8(address)) |
               (static_cast<uint32_t>(read8(address + 1u)) << 8u) |
               (static_cast<uint32_t>(read8(address + 2u)) << 16u) |
               (static_cast<uint32_t>(read8(address + 3u)) << 24u);
    }

    void IopMemory::write8(uint32_t address, uint8_t value)
    {
        const uint32_t phys = physicalAddress(address);
        if (phys < RamSize)
        {
#if PS2X_IOP_SPARSE_RAM
            if (!ramPage(phys / PageSize))
                commitRam(phys, sizeof(value));
#if TS_IOP_SPARSE_SELFCHECK
            m_checkRam[phys] = value;
#endif
#endif
            m_ram[phys] = value;
            markOwned(phys, sizeof(value));
            return;
        }
        if (phys >= ScratchBase && phys < ScratchBase + ScratchSize)
        {
            m_scratch[phys - ScratchBase] = value;
            return;
        }
        const uint32_t aligned = phys & ~3u;
        uint32_t current = readHardware32(aligned);
        const uint32_t shift = (phys & 3u) * 8u;
        current = (current & ~(0xFFu << shift)) | (static_cast<uint32_t>(value) << shift);
        writeHardware32(aligned, current);
    }

    void IopMemory::write16(uint32_t address, uint16_t value)
    {
        const uint32_t phys = physicalAddress(address);
        if (phys >= Spu2Base && phys < Spu2Base + 0x800u && m_spuBus.write)
            m_spuBus.write(phys - Spu2Base, value);
        if (phys + 1u < RamSize)
        {
#if PS2X_IOP_SPARSE_RAM
            if (!ramReadable(phys, sizeof(value)))
                commitRam(phys, sizeof(value));
            std::memcpy(m_ram + phys, &value, sizeof(value));
#if TS_IOP_SPARSE_SELFCHECK
            std::memcpy(m_checkRam.data() + phys, &value, sizeof(value));
#endif
#else
            std::memcpy(m_ram.data() + phys, &value, sizeof(value));
#endif
            markOwned(phys, sizeof(value));
            return;
        }
        write8(address, static_cast<uint8_t>(value));
        write8(address + 1u, static_cast<uint8_t>(value >> 8u));
    }

    void IopMemory::write32(uint32_t address, uint32_t value)
    {
        const uint32_t phys = physicalAddress(address);
        if ((phys & 3u) == 0u && phys + 3u < RamSize)
        {
#if PS2X_IOP_SPARSE_RAM
            if (!ramPage(phys / PageSize))
                commitRam(phys, sizeof(value));
            std::memcpy(m_ram + phys, &value, sizeof(value));
#if TS_IOP_SPARSE_SELFCHECK
            std::memcpy(m_checkRam.data() + phys, &value, sizeof(value));
#endif
#else
            std::memcpy(m_ram.data() + phys, &value, sizeof(value));
#endif
            markOwned(phys, sizeof(value));
            return;
        }
        if ((phys & 3u) == 0u && phys >= ScratchBase && phys + 3u < ScratchBase + ScratchSize)
        {
            std::memcpy(m_scratch.data() + (phys - ScratchBase), &value, sizeof(value));
            return;
        }
        if ((phys & 3u) == 0u)
        {
            if (phys >= Spu2Base && phys < Spu2Base + 0x800u && m_spuBus.write)
            {
                m_spuBus.write(phys - Spu2Base, static_cast<uint16_t>(value));
                m_spuBus.write(phys - Spu2Base + 2u, static_cast<uint16_t>(value >> 16u));
            }
            writeHardware32(phys, value);
            return;
        }
        write8(address, static_cast<uint8_t>(value));
        write8(address + 1u, static_cast<uint8_t>(value >> 8u));
        write8(address + 2u, static_cast<uint8_t>(value >> 16u));
        write8(address + 3u, static_cast<uint8_t>(value >> 24u));
    }

    bool IopMemory::readRam(uint32_t address, void *destination, size_t size) const
    {
        const uint32_t phys = physicalAddress(address);
        if ((!destination && size != 0u) || phys > RamSize || size > RamSize - phys)
            return false;
#if PS2X_IOP_SPARSE_RAM
        // Page by page: pages never written read zero.
        uint8_t *out = static_cast<uint8_t *>(destination);
        for (uint32_t at = phys, end = static_cast<uint32_t>(phys + size); at < end;)
        {
            const uint32_t chunk = std::min<uint32_t>(end - at, PageSize - at % PageSize);
            if (ramPage(at / PageSize))
                std::memcpy(out, m_ram + at, chunk);
            else
                std::memset(out, 0, chunk);
            out += chunk;
            at += chunk;
        }
#if TS_IOP_SPARSE_SELFCHECK
        if (size != 0u)
            checkRead("readRam", phys, destination, size);
#endif
#else
        if (size != 0u)
            std::memcpy(destination, m_ram.data() + phys, size);
#endif
        return true;
    }

    bool IopMemory::writeRam(uint32_t address, const void *source, size_t size)
    {
        const uint32_t phys = physicalAddress(address);
        if ((!source && size != 0u) || phys > RamSize || size > RamSize - phys)
            return false;
        if (size != 0u)
        {
#if PS2X_IOP_SPARSE_RAM
            commitRam(phys, size);
            std::memcpy(m_ram + phys, source, size);
#if TS_IOP_SPARSE_SELFCHECK
            std::memcpy(m_checkRam.data() + phys, source, size);
#endif
#else
            std::memcpy(m_ram.data() + phys, source, size);
#endif
            markOwned(phys, size);
        }
        return true;
    }

    bool IopMemory::zeroRam(uint32_t address, size_t size)
    {
        const uint32_t phys = physicalAddress(address);
        if (phys > RamSize || size > RamSize - phys)
            return false;
        if (size != 0u)
        {
#if PS2X_IOP_SPARSE_RAM
            // Pages never written are zero already: only committed ones are cleared.
            for (uint32_t at = phys, end = static_cast<uint32_t>(phys + size); at < end;)
            {
                const uint32_t chunk = std::min<uint32_t>(end - at, PageSize - at % PageSize);
                if (ramPage(at / PageSize))
                    std::memset(m_ram + at, 0, chunk);
                at += chunk;
            }
#if TS_IOP_SPARSE_SELFCHECK
            std::memset(m_checkRam.data() + phys, 0, size);
#endif
#else
            std::memset(m_ram.data() + phys, 0, size);
#endif
            markOwned(phys, size);
        }
        return true;
    }

    const uint8_t *IopMemory::ramRange(uint32_t address, size_t size)
    {
        const uint32_t phys = physicalAddress(address);
#if PS2X_IOP_SPARSE_RAM
        if (!ramReadable(phys, size))
            commitRam(phys, size);
        return m_ram + phys;
#else
        (void)size;
        return m_ram.data() + phys;
#endif
    }

    bool IopMemory::ownsRamRange(uint32_t address, size_t size) const
    {
        const uint32_t phys = physicalAddress(address);
        if (phys > RamSize || size > RamSize - phys)
            return false;
#if PS2X_IOP_SPARSE_RAM
        bool owned = true;
        for (uint32_t first = phys, end = static_cast<uint32_t>(phys + size); first < end && owned;)
        {
            const uint32_t page = (first >> 3) / PageSize;
            const uint32_t pageEnd = std::min<uint32_t>(end, (page + 1u) * PageSize * 8u);
            owned = ownedPage(page) && allBits(m_owned, first, pageEnd);
            first = pageEnd;
        }
#if TS_IOP_SPARSE_SELFCHECK
        const bool dense = std::all_of(m_checkOwned.begin() + phys, m_checkOwned.begin() + phys + size,
                                       [](bool value)
                                       { return value; });
        if (dense != owned && ++g_checkDiffs <= 8u)
            std::fprintf(stderr, "[TS:iopcheck] ownsRamRange 0x%05X+%u: sparse %d, dense %d (%u)\n", phys,
                         static_cast<unsigned>(size), int(owned), int(dense), g_checkDiffs);
#endif
        return owned;
#else
        return std::all_of(m_owned.begin() + phys, m_owned.begin() + phys + size,
                           [](bool value)
                           { return value; });
#endif
    }

    void IopMemory::markOwned(uint32_t address, size_t size)
    {
        if (address > RamSize || size > RamSize - address)
            return;
#if PS2X_IOP_SPARSE_RAM
        // A store of 1-4 bytes (every write8/16/32) whose bits lie in one
        // word of a committed page: one OR. Else page by page.
        const uint32_t last = static_cast<uint32_t>(address + size - 1u);
        if (size - 1u < 4u && (address >> 5) == (last >> 5) && ownedPage(address >> 15))
            m_owned[address >> 5] |= ((1u << size) - 1u) << (address & 31u);
        else
            setOwned(address, size, true);
#if TS_IOP_SPARSE_SELFCHECK
        std::fill(m_checkOwned.begin() + address, m_checkOwned.begin() + address + size, true);
#endif
#else
        std::fill(m_owned.begin() + address, m_owned.begin() + address + size, true);
#endif
    }

    bool IopMemory::isHardwareAddress(uint32_t address) const
    {
        const uint32_t phys = physicalAddress(address);
        return (phys >= HardwareBase && phys < HardwareEnd) ||
               (phys >= Spu2Base && phys < Spu2End) ||
               (phys >= SifBase && phys < SifEnd);
    }

    uint32_t IopMemory::readHardware32(uint32_t address) const
    {
        const auto value = m_hardware.find(address);
        if (value != m_hardware.end())
            return value->second;
        switch (address)
        {
        case 0x1F801070u:
            return m_interruptStatus;
        case 0x1F801074u:
            return m_interruptMask;
        case 0x1F801078u:
            return m_interruptControl;
        default:
            return 0u;
        }
    }

    void IopMemory::writeHardware32(uint32_t address, uint32_t value)
    {
        switch (address)
        {
        case 0x1F801070u:
            m_interruptStatus &= value;
            return;
        case 0x1F801074u:
            m_interruptMask = value;
            return;
        case 0x1F801078u:
            m_interruptControl = value & 1u;
            return;
        default:
            break;
        }

        m_hardware[address] = value;
        if ((address != kDmaSpu0Chcr && address != kDmaSpu1Chcr) || (value & kDmaStart) == 0u)
            return;

        const bool secondCore = address == kDmaSpu1Chcr;
        m_hardware[address] = value & ~kDmaStart;

        const uint32_t statusAddress = 0x1F900344u + (secondCore ? 0x400u : 0u);
        const uint32_t alignedStatus = statusAddress & ~3u;
        const uint32_t shift = (statusAddress & 2u) * 8u;
        uint32_t status = 0u;
        if (const auto current = m_hardware.find(alignedStatus); current != m_hardware.end())
            status = current->second;
        status |= 0x80u << shift;
        m_hardware[alignedStatus] = status;

        const uint32_t blockControlAddress = address - sizeof(uint32_t);
        uint32_t blockControl = 0u;
        if (const auto current = m_hardware.find(blockControlAddress); current != m_hardware.end())
            blockControl = current->second;
        const uint32_t wordsPerBlock = std::max<uint32_t>(blockControl & 0xFFFFu, 1u);
        const uint32_t blockCount = std::max<uint32_t>(blockControl >> 16u, 1u);
        const uint64_t transferWords = static_cast<uint64_t>(wordsPerBlock) * blockCount;
        // CHCR bit 0: RAM -> device. Copy the bytes into sound RAM.
        const uint32_t madrAddress = address - 2u * sizeof(uint32_t);
        uint32_t madr = 0u;
        if (const auto current = m_hardware.find(madrAddress); current != m_hardware.end())
            madr = current->second & 0x1FFFFFu;
        const uint64_t transferBytes = transferWords * 4u;
        if ((value & 1u) != 0u && m_spuBus.dma && madr < RamSize && transferBytes <= RamSize - madr)
            m_spuBus.dma(secondCore ? 1u : 0u, ramRange(madr, static_cast<size_t>(transferBytes)),
                         static_cast<uint32_t>(transferBytes));
        m_dmaStart = DmaStart{
            secondCore ? kDmaSpu1Irq : kDmaSpu0Irq,
            std::max<uint64_t>(transferWords * 2u, 64u),
        };
    }

    std::optional<IopMemory::DmaStart> IopMemory::takeDmaStart() noexcept
    {
        std::optional<DmaStart> result = m_dmaStart;
        m_dmaStart.reset();
        return result;
    }

    uint32_t IopMemory::allocate(uint32_t size, uint32_t alignment, std::optional<uint32_t> fixed)
    {
        size = alignUp(std::max(size, 1u), 16u);
        alignment = std::max<uint32_t>(alignment, 4u);
        if (fixed)
        {
            const uint32_t address = *fixed;
            if (address < HeapBase || address + size > HeapLimit)
                return 0u;
            for (const auto &block : m_allocations)
                if (address < block.address + block.size && block.address < address + size)
                    return 0u;
            m_allocations.push_back({address, size});
            markOwned(address, size);
            return address;
        }

        uint32_t candidate = alignUp(m_heapCursor, alignment);
        for (;;)
        {
            bool overlap = false;
            for (const auto &block : m_allocations)
            {
                if (candidate < block.address + block.size && block.address < candidate + size)
                {
                    candidate = alignUp(block.address + block.size, alignment);
                    overlap = true;
                    break;
                }
            }
            if (!overlap)
                break;
        }
        if (candidate > HeapLimit || size > HeapLimit - candidate)
            return 0u;
        m_allocations.push_back({candidate, size});
        markOwned(candidate, size);
        m_heapCursor = std::max(m_heapCursor, candidate + size);
        return candidate;
    }

    bool IopMemory::freeAllocation(uint32_t address)
    {
        const auto block = std::find_if(m_allocations.begin(), m_allocations.end(),
                                        [&](const Allocation &candidate)
                                        { return candidate.address == address; });
        if (block == m_allocations.end())
            return false;
#if PS2X_IOP_SPARSE_RAM
        setOwned(block->address, block->size, false);
#if TS_IOP_SPARSE_SELFCHECK
        std::fill(m_checkOwned.begin() + block->address, m_checkOwned.begin() + block->address + block->size, false);
#endif
#else
        std::fill(m_owned.begin() + block->address,
                  m_owned.begin() + block->address + block->size,
                  false);
#endif
        m_allocations.erase(block);
        return true;
    }

    uint32_t IopMemory::maxFreeMemory() const
    {
        return m_heapCursor < HeapLimit ? HeapLimit - m_heapCursor : 0u;
    }

    std::optional<IopMemory::Allocation> IopMemory::allocationContaining(uint32_t address) const
    {
        const auto block = std::find_if(m_allocations.begin(), m_allocations.end(),
                                        [&](const Allocation &candidate)
                                        {
                                            return address >= candidate.address &&
                                                   address < candidate.address + candidate.size;
                                        });
        if (block == m_allocations.end())
            return std::nullopt;
        return *block;
    }

    std::string IopMemory::readString(uint32_t address, size_t limit) const
    {
        std::string result;
        result.reserve(std::min<size_t>(limit, 64u));
        for (size_t i = 0; i < limit; ++i)
        {
            const char ch = static_cast<char>(read8(address + static_cast<uint32_t>(i)));
            if (ch == '\0')
                break;
            result.push_back(ch);
        }
        return result;
    }
}
