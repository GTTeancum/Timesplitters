#pragma once

#include <atomic>
#include <cstddef>
#include <cstdint>
#include <functional>
#include <optional>
#include <span>
#include <string>
#include <unordered_map>
#include <vector>

// TS_IOP_SPARSE_RAM 1 (Xbox): IOP RAM (2 MB) and its ownership bits (one per
// byte, 256 KB) are reserved address space, and a 4 KB page of either is
// committed when something is first stored in it. A page never written reads
// zero, as the zero-filled RAM did; one never committed costs nothing. The
// game touches a fraction of the 2 MB (modules, the IOP heap, the call
// stacks: an IOP RAM dump taken in a match has 77 pages, 308 KB, that are not
// all zero). Reads that need the bytes in one place (ramRange: SPU2 DMA, RPC
// replies) commit what they cover. A commit takes a page from the kernel:
// expected at boot and at loads, not in a match. The committed total is
// logged at each 128 KB, and so is any commit after 2 s without one
// ([TS:mem] IOP RAM ... late: none should come in a match); the counts are in
// ps2x::iop::g_iopRamStats for a status line. 0: one allocation of each, as
// before.
// TS_IOP_SPARSE_SELFCHECK 1: a dense copy of both is kept as well and every
// read is compared with it ([TS:iopcheck] lines; development only, 2.3 MB).
#ifndef TS_IOP_SPARSE_RAM
#define TS_IOP_SPARSE_RAM 1
#endif
#ifndef TS_IOP_SPARSE_SELFCHECK
#define TS_IOP_SPARSE_SELFCHECK 0
#endif
#if defined(PLATFORM_XBOX) && TS_IOP_SPARSE_RAM
#define PS2X_IOP_SPARSE_RAM 1
#else
#define PS2X_IOP_SPARSE_RAM 0
#endif

#if PS2X_IOP_SPARSE_RAM
namespace ps2x::iop
{
    // Sparse IOP RAM's committed 4 KB pages (RAM, ownership bits) and the
    // commits that came after 2 s without one (late: in a match, none).
    struct IopRamStats
    {
        std::atomic<uint32_t> ramPages{0}, ownedPages{0}, lateCommits{0};
    };
    extern IopRamStats g_iopRamStats;
}
#endif

namespace ps2x::iop::detail
{
    class IopMemory
    {
    public:
        static constexpr uint32_t RamSize = 2u * 1024u * 1024u;
        static constexpr uint32_t ScratchBase = 0x1F800000u;
        static constexpr uint32_t ScratchSize = 0x400u;
        static constexpr uint32_t HardwareBase = 0x1F801000u;
        static constexpr uint32_t HardwareEnd = 0x1F900000u;
        static constexpr uint32_t Spu2Base = 0x1F900000u;
        static constexpr uint32_t Spu2End = 0x1FA00000u;
        static constexpr uint32_t SifBase = 0x1D000000u;
        static constexpr uint32_t SifEnd = 0x1D001000u;
        static constexpr uint32_t HeapBase = 0x00120000u;
        static constexpr uint32_t HeapLimit = 0x001F0000u;

        struct Allocation
        {
            uint32_t address = 0;
            uint32_t size = 0;
        };

        struct DmaStart
        {
            int irq = 0;
            uint64_t delayCycles = 0;
        };

        IopMemory();
#if PS2X_IOP_SPARSE_RAM
        ~IopMemory();
        IopMemory(const IopMemory &) = delete;
        IopMemory &operator=(const IopMemory &) = delete;
#endif

        // SPU2 register/DMA bus (see IopHost::spu2*).
        struct SpuBus
        {
            std::function<void(uint32_t offset, uint16_t value)> write;
            std::function<bool(uint32_t offset, uint16_t &value)> read;
            std::function<void(unsigned core, const uint8_t *data, uint32_t bytes)> dma;
        };
        void setSpuBus(SpuBus bus) { m_spuBus = std::move(bus); }

        void reset();

        [[nodiscard]] uint8_t read8(uint32_t address) const;
        [[nodiscard]] uint16_t read16(uint32_t address) const;
        [[nodiscard]] uint32_t read32(uint32_t address) const;
        void write8(uint32_t address, uint8_t value);
        void write16(uint32_t address, uint16_t value);
        void write32(uint32_t address, uint32_t value);

        [[nodiscard]] bool readRam(uint32_t address, void *destination, size_t size) const;
        [[nodiscard]] bool writeRam(uint32_t address, const void *source, size_t size);
        [[nodiscard]] bool zeroRam(uint32_t address, size_t size);
        [[nodiscard]] bool ownsRamRange(uint32_t address, size_t size) const;
        [[nodiscard]] bool isHardwareAddress(uint32_t address) const;
        [[nodiscard]] std::string readString(uint32_t address, size_t limit = 1024u) const;

        [[nodiscard]] uint32_t allocate(uint32_t size, uint32_t alignment = 16u, std::optional<uint32_t> fixed = std::nullopt);
        [[nodiscard]] bool freeAllocation(uint32_t address);
        [[nodiscard]] uint32_t maxFreeMemory() const;
        [[nodiscard]] std::optional<Allocation> allocationContaining(uint32_t address) const;

        [[nodiscard]] uint32_t interruptStatus() const noexcept { return m_interruptStatus; }
        [[nodiscard]] uint32_t interruptMask() const noexcept { return m_interruptMask; }
        [[nodiscard]] uint32_t interruptControl() const noexcept { return m_interruptControl; }
        void setInterruptStatus(uint32_t value) noexcept { m_interruptStatus = value; }
        void setInterruptMask(uint32_t value) noexcept { m_interruptMask = value; }
        void setInterruptControl(uint32_t value) noexcept { m_interruptControl = value & 1u; }

        [[nodiscard]] std::optional<DmaStart> takeDmaStart() noexcept;
#if !PS2X_IOP_SPARSE_RAM
        [[nodiscard]] std::span<const uint8_t> ram() const noexcept { return m_ram; }
#endif
        // RAM bytes [address, address + size) in one place, to be read where
        // they lie (the caller checked the range). Sparse RAM commits pages
        // never written first, which read zero.
        [[nodiscard]] const uint8_t *ramRange(uint32_t address, size_t size);

        [[nodiscard]] static uint32_t physicalAddress(uint32_t address) noexcept;

    private:
        [[nodiscard]] uint32_t readHardware32(uint32_t address) const;
        void writeHardware32(uint32_t address, uint32_t value);
        void markOwned(uint32_t address, size_t size);

#if PS2X_IOP_SPARSE_RAM
        static constexpr uint32_t PageSize = 4096u;
        static constexpr uint32_t RamPages = RamSize / PageSize;
        static constexpr uint32_t OwnedPages = RamSize / 8u / PageSize; // a page of bits covers 32 KB
        [[nodiscard]] bool ramPage(uint32_t page) const noexcept
        {
            return (m_ramCommitted[page >> 5].load(std::memory_order_acquire) >> (page & 31u)) & 1u;
        }
        [[nodiscard]] bool ownedPage(uint32_t page) const noexcept
        {
            return (m_ownedCommitted[page >> 5].load(std::memory_order_acquire) >> (page & 31u)) & 1u;
        }
        // Readable in place: every page of [phys, phys + size) committed.
        [[nodiscard]] bool ramReadable(uint32_t phys, size_t size) const noexcept;
        [[nodiscard]] uint8_t ramByte(uint32_t phys) const noexcept { return ramPage(phys / PageSize) ? m_ram[phys] : 0u; }
        void commitRam(uint32_t phys, size_t size);
        void setOwned(uint32_t address, size_t size, bool owned);
        void noteCommit(const char *what, uint32_t page); // (under the commit lock)
        void decommitAll();

        uint8_t *m_ram = nullptr;        // RamSize bytes of address space
        uint32_t *m_owned = nullptr;     // RamSize bits of address space
        std::atomic<uint32_t> m_ramCommitted[RamPages / 32u]{};
        std::atomic<uint32_t> m_ownedCommitted[(OwnedPages + 31u) / 32u]{};
        // (Under the commit lock.) Pages committed, the RAM total last
        // logged, the time of the last commit (GetTickCount).
        uint32_t m_committedPages = 0, m_ownedPagesCommitted = 0, m_loggedPages = 0;
        uint32_t m_lastCommitTick = 0;
#if TS_IOP_SPARSE_SELFCHECK
        std::vector<uint8_t> m_checkRam;
        std::vector<bool> m_checkOwned;
        void checkRead(const char *what, uint32_t phys, const void *sparse, size_t size) const;
#endif
#else
        std::vector<uint8_t> m_ram;
        std::vector<bool> m_owned; // one bit per RAM byte: 256 KB instead of 2 MB
#endif
        std::vector<uint8_t> m_scratch;
        std::unordered_map<uint32_t, uint32_t> m_hardware;
        std::vector<Allocation> m_allocations;
        uint32_t m_heapCursor = HeapBase;
        uint32_t m_interruptStatus = 0;
        uint32_t m_interruptMask = 0;
        uint32_t m_interruptControl = 1;
        std::optional<DmaStart> m_dmaStart;
        SpuBus m_spuBus;
    };
}
