#ifndef PS2_MEMORY_H
#define PS2_MEMORY_H

#include <cstddef>
#include <cstdint>
#include <array>
#include <functional>
#include <vector>
#include <unordered_map>
#include <atomic>
#include <iostream>
#include <mutex>
#include <condition_variable>
#include <thread>
#include <utility>

#include "gs/ps2_gif_arbiter.h"
#include "ps2_simd.h"

class GS;
struct VU1State;

// EE I/O register storage. Registers in 0x10000000-0x1000FFFF live in a flat
// array so different registers can be read and written from different
// threads (the async VIF1 worker touches only VIF/GIF/DMA registers while the
// EE thread keeps using timers, INTC and so on). The map-like interface
// (operator[], count, find/end, clear) mirrors the std::unordered_map it
// replaces; other addresses fall back to a mutex-guarded map.
class IoRegisterFile
{
public:
    struct Slot
    {
        uint32_t first = 0;
        uint32_t second = 0;
    };

    uint32_t &operator[](uint32_t address)
    {
        if (Slot *slot = flatSlot(address))
        {
            present(address) = 1u;
            return slot->second;
        }
        std::lock_guard<std::mutex> lock(m_otherMutex);
        Slot &slot = m_other[address];
        slot.first = address;
        return slot.second;
    }
    size_t count(uint32_t address) const
    {
        if (address - kBase < kSize)
            return m_present[(address - kBase) >> 2] != 0u ? 1u : 0u;
        std::lock_guard<std::mutex> lock(m_otherMutex);
        return m_other.count(address);
    }
    Slot *find(uint32_t address)
    {
        if (Slot *slot = flatSlot(address))
            return present(address) ? slot : nullptr;
        std::lock_guard<std::mutex> lock(m_otherMutex);
        auto it = m_other.find(address);
        return it == m_other.end() ? nullptr : &it->second;
    }
    const Slot *find(uint32_t address) const { return const_cast<IoRegisterFile *>(this)->find(address); }
    Slot *end() { return nullptr; }
    const Slot *end() const { return nullptr; }
    void clear()
    {
        for (size_t i = 0; i < m_flat.size(); ++i)
        {
            m_flat[i].second = 0u;
            m_present[i] = 0u;
        }
        std::lock_guard<std::mutex> lock(m_otherMutex);
        m_other.clear();
    }

private:
    static constexpr uint32_t kBase = 0x10000000u;
    static constexpr uint32_t kSize = 0x10000u;
    Slot *flatSlot(uint32_t address)
    {
        if (address - kBase >= kSize)
            return nullptr;
        Slot &slot = m_flat[(address - kBase) >> 2];
        slot.first = address & ~3u;
        return &slot;
    }
    uint8_t &present(uint32_t address) { return m_present[(address - kBase) >> 2]; }

    std::array<Slot, kSize / 4> m_flat{};
    std::array<uint8_t, kSize / 4> m_present{};
    mutable std::mutex m_otherMutex;
    std::unordered_map<uint32_t, Slot> m_other;
};

constexpr uint32_t PS2_RAM_SIZE = 32u * 1024u * 1024u; // 32MB
constexpr uint32_t PS2_RAM_MASK = PS2_RAM_SIZE - 1u;   // Mask for 32MB alignment
constexpr uint32_t PS2_RAM_BASE = 0x00000000;          // Physical base of RDRAM
constexpr uint32_t PS2_SCRATCHPAD_BASE = 0x70000000;
constexpr uint32_t PS2_SCRATCHPAD_ALIAS_BASE = 0xF0000000;
constexpr uint32_t PS2_SCRATCHPAD_SIZE = 16u * 1024u;  // 16KB
constexpr uint32_t PS2_IO_BASE = 0x10000000;           // Base for many I/O regs (Timers, DMAC, INTC)
constexpr uint32_t PS2_IO_SIZE = 0x10000;              // 64KB
constexpr uint32_t PS2_BIOS_BASE = 0x1FC00000;         // Or BFC00000 depending on KSEG
constexpr uint32_t PS2_BIOS_SIZE = 4u * 1024u * 1024u; // 4MB

constexpr uint32_t PS2_VU0_CODE_BASE = 0x11000000; // Base address as seen from EE
constexpr uint32_t PS2_VU0_DATA_BASE = 0x11004000;
constexpr uint32_t PS2_VU0_CODE_SIZE = 4u * 1024u; // 4KB Micro Memory
constexpr uint32_t PS2_VU0_DATA_SIZE = 4u * 1024u; // 4KB Data Memory (VU Mem)

constexpr uint32_t PS2_VU1_CODE_BASE = 0x11008000;
constexpr uint32_t PS2_VU1_DATA_BASE = 0x1100C000;
constexpr uint32_t PS2_VU1_MEM_BASE = PS2_VU1_CODE_BASE; // Alias used by older code paths
constexpr uint32_t PS2_VU1_CODE_SIZE = 16u * 1024u;      // 16KB Micro Memory
constexpr uint32_t PS2_VU1_DATA_SIZE = 16u * 1024u;      // 16KB Data Memory (VU Mem)

constexpr uint32_t PS2_GS_BASE = 0x12000000;
constexpr uint32_t PS2_GS_PRIV_REG_BASE = PS2_GS_BASE; // GS Privileged Registers
constexpr uint32_t PS2_GS_PRIV_REG_SIZE = 0x2000;
constexpr size_t PS2_GS_VRAM_SIZE = 4u * 1024u * 1024u; // 4MB GS VRAM

inline constexpr uint32_t PS2_FIO_O_RDONLY = 0x0001;
inline constexpr uint32_t PS2_FIO_O_WRONLY = 0x0002;
inline constexpr uint32_t PS2_FIO_O_RDWR = 0x0003;
inline constexpr uint32_t PS2_FIO_O_NBLOCK = 0x0010;
inline constexpr uint32_t PS2_FIO_O_APPEND = 0x0100;
inline constexpr uint32_t PS2_FIO_O_CREAT = 0x0200;
inline constexpr uint32_t PS2_FIO_O_TRUNC = 0x0400;
inline constexpr uint32_t PS2_FIO_O_EXCL = 0x0800;
inline constexpr uint32_t PS2_FIO_O_NOWAIT = 0x8000;

inline constexpr uint32_t PS2_FIO_SEEK_SET = 0;
inline constexpr uint32_t PS2_FIO_SEEK_CUR = 1;
inline constexpr uint32_t PS2_FIO_SEEK_END = 2;

inline constexpr uint32_t PS2_FIO_S_IFDIR = 0x1000;
inline constexpr uint32_t PS2_FIO_S_IFREG = 0x2000;

static_assert((PS2_RAM_SIZE & (PS2_RAM_SIZE - 1u)) == 0u, "PS2_RAM_SIZE must be a power of two");
static_assert(PS2_RAM_MASK == (PS2_RAM_SIZE - 1u), "PS2_RAM_MASK must match PS2_RAM_SIZE");

inline std::atomic<uint8_t *> &ps2ScratchpadHostPtrStorage()
{
    static std::atomic<uint8_t *> ptr{nullptr};
    return ptr;
}

inline void ps2SetScratchpadHostPtr(uint8_t *ptr)
{
    ps2ScratchpadHostPtrStorage().store(ptr, std::memory_order_relaxed);
}

inline uint8_t *ps2GetScratchpadHostPtr()
{
    return ps2ScratchpadHostPtrStorage().load(std::memory_order_relaxed);
}

inline bool ps2IsScratchpadAddress(uint32_t addr)
{
    if (addr >= PS2_SCRATCHPAD_BASE && addr < (PS2_SCRATCHPAD_BASE + PS2_SCRATCHPAD_SIZE))
    {
        return true;
    }

    if ((addr & 0x80000000u) != 0u)
    {
        const uint32_t lower = addr & 0x7FFFFFFFu;
        return lower >= PS2_SCRATCHPAD_BASE &&
               lower < (PS2_SCRATCHPAD_BASE + PS2_SCRATCHPAD_SIZE);
    }

    return false;
}

inline uint32_t ps2ScratchpadOffset(uint32_t addr)
{
    if (addr >= PS2_SCRATCHPAD_BASE && addr < (PS2_SCRATCHPAD_BASE + PS2_SCRATCHPAD_SIZE))
    {
        return addr - PS2_SCRATCHPAD_BASE;
    }

    const uint32_t lower = addr & 0x7FFFFFFFu;
    return lower - PS2_SCRATCHPAD_BASE;
}

inline bool ps2ResolveGuestPointer(uint32_t addr, uint32_t &offset, bool &scratch)
{
    if (ps2IsScratchpadAddress(addr))
    {
        scratch = true;
        offset = ps2ScratchpadOffset(addr);
        return true;
    }

    uint32_t phys = 0;
    if (addr < 0x20000000u)
    {
        phys = addr;
    }
    else if ((addr >= 0x20000000u && addr < 0x40000000u) ||
             (addr >= 0x80000000u && addr < 0xC0000000u))
    {
        phys = addr & 0x1FFFFFFFu;
    }

    if (phys >= PS2_RAM_SIZE)
    {
        phys &= PS2_RAM_MASK;
    }

    scratch = false;
    offset = phys;
    return true;
}
inline uint8_t *getMemPtr(uint8_t *rdram, uint32_t addr)
{
    if (rdram == nullptr)
    {
        return nullptr;
    }

    uint32_t offset = 0;
    bool scratch = false;
    if (!ps2ResolveGuestPointer(addr, offset, scratch))
    {
        return nullptr;
    }

    if (scratch)
    {
        uint8_t *scratchpad = ps2GetScratchpadHostPtr();
        return scratchpad ? (scratchpad + offset) : nullptr;
    }
    return rdram + offset;
}

inline const uint8_t *getConstMemPtr(const uint8_t *rdram, uint32_t addr)
{
    if (rdram == nullptr)
    {
        return nullptr;
    }

    uint32_t offset = 0;
    bool scratch = false;
    if (!ps2ResolveGuestPointer(addr, offset, scratch))
    {
        return nullptr;
    }

    if (scratch)
    {
        const uint8_t *scratchpad = ps2GetScratchpadHostPtr();
        return scratchpad ? (scratchpad + offset) : nullptr;
    }
    return rdram + offset;
}

// PS2 GS (Graphics Synthesizer) registers
struct GSRegisters
{
    uint64_t pmode;    // Pixel mode
    uint64_t smode1;   // Sync mode 1
    uint64_t smode2;   // Sync mode 2
    uint64_t srfsh;    // Refresh control
    uint64_t synch1;   // Synchronization control 1
    uint64_t synch2;   // Synchronization control 2
    uint64_t syncv;    // Synchronization control V
    uint64_t dispfb1;  // Display buffer 1
    uint64_t display1; // Display area 1
    uint64_t dispfb2;  // Display buffer 2
    uint64_t display2; // Display area 2
    uint64_t extbuf;   // External buffer
    uint64_t extdata;  // External data
    uint64_t extwrite; // External write
    uint64_t bgcolor;  // Background color
    std::atomic<uint64_t> csr;
    std::atomic<uint64_t> vsyncTick;
    uint64_t imr;      // Interrupt mask
    uint64_t busdir;   // Bus direction
    uint64_t siglblid; // Signal label ID
};
static_assert(sizeof(GSRegisters) == (20u * sizeof(uint64_t)), "GSRegisters layout changed unexpectedly");
static_assert(alignof(GSRegisters) == alignof(uint64_t), "GSRegisters alignment must remain 64-bit");
static_assert(std::atomic<uint64_t>::is_always_lock_free, "GS CSR atomic must be lock-free on all supported targets");

// PS2 VIF (VPU Interface) registers
struct VIFRegisters
{
    uint32_t stat;   // Status
    uint32_t fbrst;  // VIF Force Break
    uint32_t err;    // Error status
    uint32_t mark;   // Interrupt control
    uint32_t cycle;  // Transfer mode
    uint32_t mode;   // Mode control
    uint32_t num;    // Data amount counter
    uint32_t mask;   // Data mask
    uint32_t code;   // VIFcode
    uint32_t itops;  // ITOP save
    uint32_t base;   // Base address
    uint32_t ofst;   // Offset
    uint32_t tops;   // TOPS
    uint32_t itop;   // ITOP
    uint32_t top;    // TOP
    uint32_t row[4]; // Transfer row data
    uint32_t col[4]; // Transfer column data
};
static_assert(sizeof(VIFRegisters) == (23u * sizeof(uint32_t)), "VIFRegisters layout changed unexpectedly");

#if defined(PLATFORM_XBOX)
// Development counters for the Xbox status block (cumulative).
struct Vif1StreamStats
{
    unsigned chains = 0, pieces = 0, splits = 0;
    unsigned long long fastVectors = 0, slowVectors = 0;
    unsigned checked = 0, diffs = 0; // TS_VIF_SELFCHECK (ps2_memory.cpp)
};
extern Vif1StreamStats g_vif1StreamStats;
#include "ps2_render_counters.h"

// TS_MSCAL_FAST 1 (rewrite plan M1.4): a VIF1 chain's MSCAL calls the
// native VU1 program straight from the decoder (PS2Memory::Vu1MscalFast).
// 0: every MSCAL goes through the std::function callback (PS2Runtime) as
// before.
#ifndef TS_MSCAL_FAST
#define TS_MSCAL_FAST 1
#endif
// TS_MSCAL_FAST_CHECK 1 (development): every fast MSCAL also does the
// callback's lookups of the native program and the EE context, and counts
// any difference from the cached ones (mscheck= in the [TS:render] line,
// the first few logged as [VIF:mscalcheck]; must stay 0).
#ifndef TS_MSCAL_FAST_CHECK
#define TS_MSCAL_FAST_CHECK 0
#endif
#endif

// PS2 DMA registers
struct DMARegisters
{
    uint32_t chcr; // Channel control
    uint32_t madr; // Memory address
    uint32_t qwc;  // Quadword count
    uint32_t tadr; // Tag address
    uint32_t asr0; // Address stack 0
    uint32_t asr1; // Address stack 1
    uint32_t sadr; // Source address
};
static_assert(sizeof(DMARegisters) == (7u * sizeof(uint32_t)), "DMARegisters layout changed unexpectedly");

struct JumpTable
{
    uint32_t address = 0;          // Base address of the jump table
    uint32_t baseRegister = 0;     // Register used for index
    std::vector<uint32_t> targets; // Jump targets
};

class PS2Memory
{
public:
    PS2Memory();
    ~PS2Memory();

    PS2Memory(const PS2Memory &) = delete;
    PS2Memory &operator=(const PS2Memory &) = delete;
    PS2Memory(PS2Memory &&) = delete;
    PS2Memory &operator=(PS2Memory &&) = delete;

    // Initialize memory
    bool initialize(size_t ramSize = PS2_RAM_SIZE);

    // Memory access methods
    uint8_t *getRDRAM() { return m_rdram; }
    uint8_t *getScratchpad() { return m_scratchpad; }
    uint8_t *getIOPRAM() { return iop_ram; }
    uint64_t dmaStartCount() const { return m_dmaStartCount.load(std::memory_order_relaxed); }
    uint64_t gifCopyCount() const { return m_gifCopyCount.load(std::memory_order_relaxed); }
    uint64_t gsWriteCount() const { return m_gsWriteCount.load(std::memory_order_relaxed); }
    uint64_t vifWriteCount() const { return m_vifWriteCount.load(std::memory_order_relaxed); }
    uint64_t getVU0CodeGeneration() const { return m_vu0CodeGeneration.load(std::memory_order_relaxed); }
    uint64_t getVU1CodeGeneration() const { return m_vu1CodeGeneration.load(std::memory_order_relaxed); }

    // Read/write memory
    uint8_t read8(uint32_t address);
    uint16_t read16(uint32_t address);
    uint32_t read32(uint32_t address);
    uint64_t read64(uint32_t address);
    __m128i read128(uint32_t address);

    void write8(uint32_t address, uint8_t value);
    void write16(uint32_t address, uint16_t value);
    void write32(uint32_t address, uint32_t value);
    void write64(uint32_t address, uint64_t value);
    void write128(uint32_t address, __m128i value);

    // TLB handling
    uint32_t translateAddress(uint32_t virtualAddress);
    bool tlbRead(uint32_t index, uint32_t &vpn, uint32_t &pfn, uint32_t &mask, bool &valid) const;
    bool tlbWrite(uint32_t index, uint32_t vpn, uint32_t pfn, uint32_t mask, bool valid);
    int32_t tlbProbe(uint32_t vpn) const;
    size_t tlbEntryCount() const { return m_tlbEntries.size(); }

    // Hardware register interface
    bool writeIORegister(uint32_t address, uint32_t value);
    uint32_t readIORegister(uint32_t address);

    // EE timers advance from the scheduler's emulated EE-cycle clock. The
    // returned mask uses bits 0..3 for newly raised TIM0..TIM3 interrupts.
    uint32_t advanceEeTimers(uint64_t eeCycles) noexcept;
    [[nodiscard]] uint64_t cyclesUntilNextEeTimerInterrupt() const noexcept;
    void resetEeTimers() noexcept;

    using GifPacketCallback = std::function<void(const uint8_t *, uint32_t)>;
    void setGifPacketCallback(GifPacketCallback cb) { m_gifPacketCallback = std::move(cb); }
    void setGifArbiter(GifArbiter *arbiter) { m_gifArbiter = arbiter; }
    GifArbiter *gifArbiter() const { return m_gifArbiter; }
    using GsReadbackCallback = std::function<uint32_t(uint8_t *, uint32_t)>;
    void setGsReadbackCallback(GsReadbackCallback cb) { m_gsReadbackCallback = std::move(cb); }


    using Vu1MscalCallback = std::function<void(uint32_t startPC, uint32_t top, uint32_t itop)>;
    void setVu1MscalCallback(Vu1MscalCallback cb) { m_vu1MscalCallback = std::move(cb); }
#if defined(PLATFORM_XBOX)
    // The MSCAL fast path (TS_MSCAL_FAST, processVIF1Pieces): the callback's
    // work for an MSCAL the native VU1 program takes, without the
    // std::function, execute()'s two program lookups and the two lookups of
    // the EE thread's context. The native program is looked up again only
    // when VU1 code changes (generation), the context once per chain (the
    // EE scheduler changes the running thread or its interrupt context only
    // in its dispatcher, never inside a chain's decode). PS2Runtime fills it
    // in; owner null: the callback.
    struct Vu1MscalFast
    {
        void *owner = nullptr;
        // The native program for VU1 code `generation` (null: none; the callback runs).
        bool (*native)(uint32_t pc, uint8_t *vuData, uint32_t dataSize, uint32_t top, PS2Memory *memory, GS &gs) = nullptr;
        uint64_t generation = 0;
        GS *gs = nullptr;
        VU1State *vu1 = nullptr; // set as the callback and execute() set it
        // The running EE thread's FBRST and VPU_STAT (null: look them up).
        uint32_t *fbrst = nullptr, *vpuStat = nullptr;
        // Sets native and generation for the current code, fbrst and vpuStat.
        void (*lookup)(void *owner, Vu1MscalFast &fast) = nullptr;
        // The native program declined: the rest of execute() and VPU_STAT, as the callback.
        void (*interpret)(void *owner, Vu1MscalFast &fast, uint32_t startPC, uint32_t top, uint32_t itop) = nullptr;
        // TS_MSCAL_FAST_CHECK: whether native, fbrst and vpuStat are what the callback would use.
        bool (*check)(void *owner, const Vu1MscalFast &fast) = nullptr;
    };
    void setVu1MscalFast(const Vu1MscalFast &fast) { m_vu1MscalFast = fast; }
#endif

    // Asynchronous VIF1: forward VIF1 DMA (VIF decode, VU1 microprograms,
    // PATH1/PATH2 output to the GS) runs on a worker thread while the EE
    // continues, like the real VIF1/VU1 running beside the EE. The channel
    // stays busy (CHCR.STR) until the EE thread completes it; any EE access
    // to VIF/GIF/DMA/VU/GS registers or memory waits for the worker first.
    // TS_VIF1_ASYNC=0 processes VIF1 DMA inline as before.
    // start: EE thread, before a job is handed over. done: worker thread,
    // after it finished (post an EE event that calls completeVif1Async).
    void setVif1AsyncCallbacks(std::function<void()> start, std::function<void()> done)
    {
        m_vif1StartCallback = std::move(start);
        m_vif1DoneCallback = std::move(done);
    }
    bool vif1AsyncBusy() const { return m_vif1Busy.load(std::memory_order_acquire); }
    // Waits for the worker, then completes the channel (EE thread).
    void waitVif1Idle();
    // Completes the channel if the worker finished: CHCR/QWC/D_STAT and a
    // queued DMAC cause 1. Returns true if it completed a job.
    bool completeVif1Async();
    static bool onVif1Worker();
    // Waits for the worker if the address belongs to the VIF/GIF/VU/GS
    // pipeline (EE-side accessors).
    void syncVif1ForAddress(uint32_t address)
    {
        if (m_vif1Busy.load(std::memory_order_acquire) && isPipelineAddress(address) && !onVif1Worker())
            waitVif1Idle();
    }
    static bool isPipelineAddress(uint32_t a)
    {
        a &= 0x1FFFFFFFu;
        return (a >= 0x10003000u && a < 0x1000B000u) || // GIF/VIF regs, FIFOs, DMA ch0-2
               (a >= 0x1000E000u && a < 0x1000F000u) || // DMA control
               (a >= 0x11000000u && a < 0x11010000u) || // VU memory
               (a >= 0x12000000u && a < 0x12002000u);   // GS privileged
    }
    using Vu1MscntCallback = std::function<void(uint32_t top, uint32_t itop)>;
    void setVu1MscntCallback(Vu1MscntCallback cb) { m_vu1MscntCallback = std::move(cb); }

    uint8_t *getVU1Code() { return m_vu1Code; }
    const uint8_t *getVU1Code() const { return m_vu1Code; }
    uint8_t *getVU1Data() { return m_vu1Data; }
    const uint8_t *getVU1Data() const { return m_vu1Data; }
    uint8_t *getVU0Code() { return m_vu0Code; }
    const uint8_t *getVU0Code() const { return m_vu0Code; }
    uint8_t *getVU0Data() { return m_vu0Data; }
    const uint8_t *getVU0Data() const { return m_vu0Data; }

    bool isPath3Masked() const { return m_path3Masked; }
    void flushMaskedPath3Packets(bool drainImmediately = true);

    void submitGifPacket(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes, bool drainImmediately = true, bool path2DirectHl = false);
    void processGIFPacket(uint32_t srcPhysAddr, uint32_t qwCount);
    void processGIFPacket(const uint8_t *data, uint32_t sizeBytes);
    bool tryProcessNativeGifImageUploadChain(GS &gs, uint32_t tadr, uint32_t chcr);
    bool tryProcessNativeGifPackedChain(GS &gs, uint32_t tadr, uint32_t chcr);
    void processVIF0Data(uint32_t srcPhysAddr, uint32_t sizeBytes);
    void processVIF0Data(const uint8_t *data, uint32_t sizeBytes);
    void processVIF1Data(uint32_t srcPhysAddr, uint32_t sizeBytes);
    void processVIF1Data(const uint8_t *data, uint32_t sizeBytes);
#if defined(PLATFORM_XBOX)
    // A VIF1 DMA chain as the pieces of guest memory it is made of, in order
    // (recorded by the chain walk in ps2_memory.cpp): decoded where they lie,
    // as processVIF1Data would decode them joined into one buffer.
    using Vif1Piece = std::pair<const uint8_t *, uint32_t>;
    void processVIF1Pieces(const Vif1Piece *pieces, size_t count);
    // bytes: the pieces' total (the chain walk adds it up as it records them).
    void processVIF1Pieces(const Vif1Piece *pieces, size_t count, uint32_t bytes);
#endif
    void processPendingTransfers();
    std::vector<uint32_t> consumeCompletedDmacCauses();
#if defined(PLATFORM_XBOX)
    // True while consumeCompletedDmacCauses() has something to return; lets
    // the per-store drain skip the mutex when nothing completed.
    bool hasCompletedDmacCauses() const { return m_completedDmacPending.load(std::memory_order_acquire); }
#endif

    int pollDmaRegisters();

    // Track code modifications for self-modifying code
    void registerCodeRegion(uint32_t start, uint32_t end);
    bool isCodeAddress(uint32_t address) const;
    bool isCodeModified(uint32_t address, uint32_t size);
    void clearModifiedFlag(uint32_t address, uint32_t size);

    // GS register accessors
    GSRegisters &gs() { return gs_regs; }
    const GSRegisters &gs() const { return gs_regs; }
    uint8_t *getGSVRAM() { return m_gsVRAM; }
    const uint8_t *getGSVRAM() const { return m_gsVRAM; }
    bool hasSeenGifCopy() const { return m_seenGifCopy; }
    // Main RAM (32MB)
    uint8_t *m_rdram;

    // Scratchpad memory (16KB)
    uint8_t *m_scratchpad;

    // IOP RAM (2MB)
    uint8_t *iop_ram;

    bool m_seenGifCopy;
    std::atomic<uint64_t> m_dmaStartCount{0};
    std::atomic<uint64_t> m_gifCopyCount{0};
    std::atomic<uint64_t> m_gsWriteCount{0};
    std::atomic<uint64_t> m_vifWriteCount{0};
    std::atomic<uint64_t> m_vu0CodeGeneration{0};
    std::atomic<uint64_t> m_vu1CodeGeneration{0};
    // I/O registers
    IoRegisterFile m_ioRegisters;

    // Registers
    GSRegisters gs_regs;
    uint8_t *m_gsVRAM;
    VIFRegisters vif0_regs;
    VIFRegisters vif1_regs;
    DMARegisters dma_regs[10]; // 10 DMA channels

    // TLB entries
    struct TLBEntry
    {
        uint32_t vpn;
        uint32_t pfn;
        uint32_t mask;
        bool valid;
    };

    std::vector<TLBEntry> m_tlbEntries;

    GifPacketCallback m_gifPacketCallback;
    GsReadbackCallback m_gsReadbackCallback;
    GifArbiter *m_gifArbiter = nullptr;
    Vu1MscalCallback m_vu1MscalCallback;
    Vu1MscntCallback m_vu1MscntCallback;

    // Asynchronous VIF1 worker (see setVif1AsyncCallbacks).
    bool startVif1Async();
    void vif1WorkerLoop();
    void stopVif1Worker();
    std::thread m_vif1Thread;
    std::mutex m_vif1Mutex;
    std::condition_variable m_vif1Cv;
    std::vector<std::vector<uint8_t>> m_vif1Job;
    bool m_vif1HasJob = false;
    bool m_vif1Stop = false;
    std::atomic<bool> m_vif1Busy{false}; // handed over and not yet completed
    std::atomic<bool> m_vif1Done{false}; // worker finished the job
    int m_vif1AsyncMode = -1;             // -1: read TS_VIF1_ASYNC on first use
    std::function<void()> m_vif1StartCallback;
    std::function<void()> m_vif1DoneCallback;

    // GS stage of the asynchronous VIF1 pipeline: GIF packets the VIF1
    // worker produces (XGKICK, DIRECT) are handed, in order, to another
    // thread that runs them through the arbiter/GS, so VU1 work overlaps GS
    // packet processing. The worker waits for the stage to empty before it
    // reports a transfer complete. TS_GS_STAGE=0 disables it.
    struct GsStagePacket
    {
        GifPathId path;
        std::vector<uint8_t> data;
    };
    bool gsStageSubmit(GifPathId path, const uint8_t *data, uint32_t sizeBytes);
    void gsStageWaitEmpty();
    void gsStageLoop();
    std::thread m_gsStageThread;
    std::mutex m_gsStageMutex;
    std::condition_variable m_gsStageWake, m_gsStageIdle;
    std::vector<GsStagePacket> m_gsStageQueue, m_gsStageWork;
    std::vector<std::vector<uint8_t>> m_gsStageFree; // recycled packet buffers
    std::atomic<size_t> m_gsStageQueued{0};
    uint64_t m_gsStageSubmitted = 0, m_gsStageCompleted = 0;
    bool m_gsStageSleeping = false, m_gsStageStop = false, m_gsStageWaiting = false;
    int m_gsStageMode = -1;

    uint8_t *m_vu0Code = nullptr;
    uint8_t *m_vu0Data = nullptr;
    uint8_t *m_vu1Code = nullptr;
    uint8_t *m_vu1Data = nullptr;
    bool m_path3Masked = false;
    uint32_t m_vif1PendingPath2ImageQwc = 0u;
    bool m_vif1PendingPath2DirectHl = false;
    std::vector<std::vector<uint8_t>> m_path3MaskedFifo;

    struct PendingTransfer
    {
        bool fromScratchpad = false;
        uint32_t srcAddr = 0;
        uint32_t qwc = 0;
        std::vector<uint8_t> chainData;
#if defined(PLATFORM_XBOX)
        uint32_t pieceBytes = 0; // a VIF1 chain recorded as pieces: their total (ps2_memory.cpp)
#endif
    };
    std::vector<PendingTransfer> m_pendingGifTransfers;
    std::vector<PendingTransfer> m_pendingVif0Transfers;
    std::vector<PendingTransfer> m_pendingVif1Transfers;
    std::mutex m_completedDmacMutex;
    std::vector<uint32_t> m_completedDmacCauses;
#if defined(PLATFORM_XBOX)
    // !m_completedDmacCauses.empty(), written only under m_completedDmacMutex.
    std::atomic<bool> m_completedDmacPending{false};
#endif

    struct CodeRegion
    {
        uint32_t start;
        uint32_t end;
        std::vector<bool> modified; // Bitmap of modified 4-byte blocks
    };
    std::vector<CodeRegion> m_codeRegions;

    bool isAddressInRegion(uint32_t address, const CodeRegion &region);
    void markModified(uint32_t address, uint32_t size);
    void markVU0CodeModified() { m_vu0CodeGeneration.fetch_add(1, std::memory_order_relaxed); }
    void markVU1CodeModified() { m_vu1CodeGeneration.fetch_add(1, std::memory_order_relaxed); }
    bool isScratchpad(uint32_t address) const;
    uint8_t *mapVuMemory(uint32_t physAddr, uint32_t size, uint32_t &offset, uint32_t &limit);
    const uint8_t *mapVuMemory(uint32_t physAddr, uint32_t size, uint32_t &offset, uint32_t &limit) const;
    struct EeTimer
    {
        uint32_t count = 0;
        uint32_t mode = 0;
        uint32_t compare = 0;
        uint32_t hold = 0;
        uint64_t clockRemainder = 0;
    };

    std::array<EeTimer, 4> m_eeTimers{};
    bool tryProcessScratchpadDma(uint32_t channelBase, uint32_t chcr);
    void completeDmacChannel(uint32_t channelBase, uint32_t cause);
    void queueCompletedDmacCause(uint32_t cause);
#if defined(PLATFORM_XBOX)
    Vu1MscalFast m_vu1MscalFast; // setVu1MscalFast
#endif
};

#endif // PS2_MEMORY_H
