#include "runtime/ps2_memory.h"
#include "runtime/ps2_vu1_watch.h"
#include "ps2x/exceptions.h"
#include "runtime/ps2_sample_profiler.h"
#include "runtime/ps2_address.h"
#include "runtime/gs/gs_frontend.h"
#include "ps2_log.h"
#include <atomic>
#include <cstring>
#include <limits>
#include <stdexcept>
#include <algorithm>
#include <string>

namespace
{
    // Streaming state of the VIF1 interpreter (ps2_vif1_interpreter.cpp).
}
extern uint32_t g_vif1LastConsumed;
extern bool g_vif1StopOnShort;
Vu1WatchedRows g_vu1WatchedRows;
namespace
{
    // A consumed DMA chain's buffer is released at once: holding it for the
    // next chain kept a megabyte-plus alive while a bigger chain needed its
    // own, which a 64 MB host cannot afford.
    void recycleChainBuffer(std::vector<uint8_t> &consumed)
    {
        std::vector<uint8_t>().swap(consumed);
    }

#if defined(PLATFORM_XBOX)
    // VIF1 chains (the level's display lists, over a megabyte) are not
    // copied on the Xbox: the chain is recorded as pieces of guest memory and
    // decoded where they lie (processVIF1Pieces). That is safe because the
    // drain (processPendingTransfers) follows the DMA kick before the game
    // runs again. A pending transfer with qwc == kSegmentedChain stands for a
    // chain; its srcAddr is where its pieces end in s_vif1Segments (they
    // start where the previous chain's end).
    constexpr uint32_t kSegmentedChain = 0xFFFFFFFFu;
    std::vector<PS2Memory::Vif1Piece> s_vif1Segments;
    // TS_VIF_SELFCHECK 1: every VIF1 chain is also decoded by the old window
    // path, both dry, and the two compared (vif1SelfCheck; vifdiff= in the
    // status block). Development only: slow, and 512 KB more memory. On for
    // the validation build of the leaner piece decoder; back to 0 after.
#ifndef TS_VIF_SELFCHECK
#define TS_VIF_SELFCHECK 0
#endif
// Chains checked, from boot (the check doubles the decode work; the rest
// of a run measures the new path alone).
#ifndef TS_VIF_SELFCHECK_CHAINS
#define TS_VIF_SELFCHECK_CHAINS 2500u
#endif
#if TS_VIF_SELFCHECK
    // The old path, for the comparison: the pieces fed through a fixed
    // window (ps2_vif1_interpreter.cpp stops at a command that does not fit
    // and reports what it consumed).
    constexpr size_t kVif1WindowBytes = 512u * 1024u;
    std::vector<uint8_t> s_vif1Window;
#endif
#endif
}
#include <vector>
#include <array>
#include <set>
#include <cstdlib>

namespace
{
    inline void inRange(uint32_t offset, size_t bytes, size_t regionSize, const char *op, uint32_t address)
    {
        if (static_cast<uint64_t>(offset) + static_cast<uint64_t>(bytes) > static_cast<uint64_t>(regionSize))
        {
            PS2X_THROW(std::runtime_error(std::string(op) + " out-of-bounds at address: 0x" + std::to_string(address)));
        }
    }

    template <typename T>
    inline T loadScalar(const uint8_t *base, uint32_t offset, size_t regionSize, const char *op, uint32_t address)
    {
        inRange(offset, sizeof(T), regionSize, op, address);
        T value{};
        std::memcpy(&value, base + offset, sizeof(T));
        return value;
    }

    template <typename T>
    inline void storeScalar(uint8_t *base, uint32_t offset, size_t regionSize, T value, const char *op, uint32_t address)
    {
        inRange(offset, sizeof(T), regionSize, op, address);
        std::memcpy(base + offset, &value, sizeof(T));
    }

    inline bool isGsPrivReg(uint32_t addr)
    {
        return Ps2AddressInRange(addr, PS2_GS_PRIV_REG_BASE, PS2_GS_PRIV_REG_SIZE);
    }

    inline bool isIoRegister(uint32_t addr)
    {
        return Ps2AddressInRange(addr, PS2_IO_BASE, PS2_IO_SIZE);
    }

    inline uint64_t *gsRegPtr(GSRegisters &gs, uint32_t addr)
    {
        // Support both 64-bit base offsets and +4 dword aliases.
        uint32_t off = (addr - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        switch (off)
        {
        case 0x0000:
            return &gs.pmode;
        case 0x0010:
            return &gs.smode1;
        case 0x0020:
            return &gs.smode2;
        case 0x0030:
            return &gs.srfsh;
        case 0x0040:
            return &gs.synch1;
        case 0x0050:
            return &gs.synch2;
        case 0x0060:
            return &gs.syncv;
        case 0x0070:
            return &gs.dispfb1;
        case 0x0080:
            return &gs.display1;
        case 0x0090:
            return &gs.dispfb2;
        case 0x00A0:
            return &gs.display2;
        case 0x00B0:
            return &gs.extbuf;
        case 0x00C0:
            return &gs.extdata;
        case 0x00D0:
            return &gs.extwrite;
        case 0x00E0:
            return &gs.bgcolor;
        // CSR (offset 0x1000) is intentionally not handled here: it is
        // std::atomic<uint64_t> and no longer converts to uint64_t*. Callers must
        // check for offset 0x1000 themselves and go through writeCsrHalf/
        // writeCsrFull/gs.csr.load() instead of gsRegPtr().
        case 0x1010:
            return &gs.imr;
        case 0x1040:
            return &gs.busdir;
        case 0x1080:
            return &gs.siglblid;
        default:
            return nullptr;
        }
    }

    constexpr uint32_t kGsCsrRegOffset = 0x1000u;

    // Atomically apply a 32-bit write to one half (off=0 low dword, off=4 high
    // dword) of the GS CSR register. Bits 0..1 of the low dword (SIGNAL/FINISH) are
    // write-one-to-clear; everything else is a plain merge. Uses compare_exchange
    // so the whole read-modify-write is a single atomic step -- this register is
    // also touched by the vsync worker (FIELD bit) and the GIF (SIGNAL/FINISH) on
    // other threads, so a load-then-store here would race with them.
    inline void writeCsrHalf(std::atomic<uint64_t> &csr, uint32_t off, uint32_t value)
    {
        constexpr uint32_t kW1cMask = 0x3u;
        uint64_t expected = csr.load();
        uint64_t desired;
        do
        {
            if (off == 0u)
            {
                uint32_t oldLow = static_cast<uint32_t>(expected & 0xFFFFFFFFull);
                uint32_t mergedLow = (oldLow & kW1cMask) | (value & ~kW1cMask);
                desired = (expected & 0xFFFFFFFF00000000ull) | static_cast<uint64_t>(mergedLow);
                desired &= ~static_cast<uint64_t>(value & kW1cMask);
            }
            else
            {
                uint64_t mask = 0xFFFFFFFFull << (off * 8u);
                desired = (expected & ~mask) | (static_cast<uint64_t>(value) << (off * 8u));
            }
        } while (!csr.compare_exchange_weak(expected, desired));
    }

    // Same as writeCsrHalf but for a full 64-bit CSR write (bits 0..1 are still
    // write-one-to-clear against the current value).
    inline void writeCsrFull(std::atomic<uint64_t> &csr, uint64_t value)
    {
        constexpr uint64_t kW1cMask = 0x3ull;
        uint64_t expected = csr.load();
        uint64_t desired;
        do
        {
            desired = (expected & kW1cMask) | (value & ~kW1cMask);
            desired &= ~(value & kW1cMask);
        } while (!csr.compare_exchange_weak(expected, desired));
    }

    constexpr std::array<uint32_t, 4> kEeTimerBases = {
        0x10000000u,
        0x10000800u,
        0x10001000u,
        0x10001800u,
    };
    constexpr uint32_t kEeTimerCountOffset = 0x00u;
    constexpr uint32_t kEeTimerModeOffset = 0x10u;
    constexpr uint32_t kEeTimerCompareOffset = 0x20u;
    constexpr uint32_t kEeTimerHoldOffset = 0x30u;
    constexpr uint32_t kEeTimerModeClksMask = 0x3u;
    constexpr uint32_t kEeTimerModeConfigMask = 0x3FFu;
    constexpr uint32_t kEeTimerModeStatusMask = 0xC00u;
    constexpr uint32_t kEeTimerModeZret = 1u << 6;
    constexpr uint32_t kEeTimerModeCue = 1u << 7;
    constexpr uint32_t kEeTimerModeCmpe = 1u << 8;
    constexpr uint32_t kEeTimerModeOvfe = 1u << 9;
    constexpr uint32_t kEeTimerModeEquf = 1u << 10;
    constexpr uint32_t kEeTimerModeOvff = 1u << 11;
    constexpr uint64_t kEeClockHz = 294912000ull;
    constexpr std::array<uint64_t, 4> kEeTimerClockHz = {
        147456000ull,
        9216000ull,
        576000ull,
        15734ull,
    };

    inline bool decodeEeTimerRegister(uint32_t address, size_t &timerIndex, uint32_t &offset)
    {
        for (size_t index = 0; index < kEeTimerBases.size(); ++index)
        {
            const uint32_t candidateOffset = address - kEeTimerBases[index];
            if (candidateOffset == kEeTimerCountOffset ||
                candidateOffset == kEeTimerModeOffset ||
                candidateOffset == kEeTimerCompareOffset ||
                (index < 2u && candidateOffset == kEeTimerHoldOffset))
            {
                timerIndex = index;
                offset = candidateOffset;
                return true;
            }
        }
        return false;
    }

    constexpr uint64_t ticksUntilMatch(uint32_t count, uint32_t target)
    {
        const uint32_t distance = (target - count) & 0xFFFFu;
        return distance == 0u ? 0x10000ull : static_cast<uint64_t>(distance);
    }

#if defined(PLATFORM_XBOX)
    static_assert((kEeClockHz >> 1) == kEeTimerClockHz[0] && (kEeClockHz >> 5) == kEeTimerClockHz[1] &&
                      (kEeClockHz >> 9) == kEeTimerClockHz[2] && (kEeClockHz & 511u) == 0u,
                  "timer modes 0-2 must be the EE clock / 2, / 32 and / 512");

    // The ticks and remainder of (eeCycles * clockHz + remainder) / kEeClockHz
    // for clockHz = kEeClockHz >> kShift, without the 64-bit divisions (a
    // library call each on the Xbox). With remainder = m * clockHz + t
    // (t < clockHz) that is ((eeCycles + m) >> kShift) ticks, leaving
    // ((eeCycles + m) & mask) * clockHz + t: bit-identical to the general form.
    template <uint32_t kShift>
    uint64_t busClockTimerTicks(uint64_t eeCycles, uint64_t &clockRemainder)
    {
        constexpr uint32_t kMask = (1u << kShift) - 1u;
        constexpr uint32_t kClockHz = static_cast<uint32_t>(kEeClockHz >> kShift);
        // Always below kEeClockHz (< 2^32): only ever 0 or a value % kEeClockHz.
        const uint32_t remainder = static_cast<uint32_t>(clockRemainder);
        const uint32_t carried = (static_cast<uint32_t>(eeCycles) & kMask) + remainder / kClockHz;
        clockRemainder = (carried & kMask) * kClockHz + remainder % kClockHz;
        return (eeCycles >> kShift) + (carried >> kShift);
    }
#endif

    struct DmaTagView
    {
        uint16_t qwc = 0;
        uint8_t id = 0;
        bool irq = false;
        uint32_t addr = 0;
        uint32_t upper = 0;
    };

    inline DmaTagView decodeDmaTag(uint64_t tag)
    {
        DmaTagView out{};
        out.qwc = static_cast<uint16_t>(tag & 0xFFFFu);
        out.id = static_cast<uint8_t>((tag >> 28u) & 0x7u);
        out.irq = ((tag >> 31u) & 0x1ull) != 0ull;
        out.addr = static_cast<uint32_t>((tag >> 32u) & 0x7FFFFFFFu);
        out.upper = static_cast<uint32_t>((tag >> 16u) & 0xFFFFu);
        return out;
    }

    inline uint32_t gifTagNloop(uint64_t tagLo)
    {
        return static_cast<uint32_t>(tagLo & 0x7FFFu);
    }

    inline uint8_t gifTagFlg(uint64_t tagLo)
    {
        return static_cast<uint8_t>((tagLo >> 58u) & 0x3u);
    }

    inline uint32_t gifTagNreg(uint64_t tagLo)
    {
        uint32_t nreg = static_cast<uint32_t>((tagLo >> 60u) & 0xFu);
        return nreg == 0u ? 16u : nreg;
    }

}

// Helpers for GS VRAM addressing (PSMCT32 path).
static inline uint32_t gs_vram_offset(uint32_t basePage, uint32_t x, uint32_t y, uint32_t fbw)
{
    // basePage is in 2048-byte units; fbw is in blocks of 64 pixels.
    uint32_t strideBytes = fbw * 64 * 4;
    return basePage * 2048 + y * strideBytes + x * 4;
}

PS2Memory::PS2Memory()
    : m_rdram(nullptr), m_scratchpad(nullptr), iop_ram(nullptr), m_seenGifCopy(false), m_gsVRAM(nullptr)
{
    ps2SetScratchpadHostPtr(nullptr);
}

PS2Memory::~PS2Memory()
{
    stopVif1Worker();
    if (m_rdram)
    {
        delete[] m_rdram;
        m_rdram = nullptr;
    }

    if (m_scratchpad)
    {
        ps2SetScratchpadHostPtr(nullptr);
        delete[] m_scratchpad;
        m_scratchpad = nullptr;
    }

    if (m_gsVRAM)
    {
        delete[] m_gsVRAM;
        m_gsVRAM = nullptr;
    }

    if (m_vu1Code)
    {
        delete[] m_vu1Code;
        m_vu1Code = nullptr;
    }
    if (m_vu1Data)
    {
        delete[] m_vu1Data;
        m_vu1Data = nullptr;
    }
    if (m_vu0Code)
    {
        delete[] m_vu0Code;
        m_vu0Code = nullptr;
    }
    if (m_vu0Data)
    {
        delete[] m_vu0Data;
        m_vu0Data = nullptr;
    }

    if (iop_ram)
    {
        delete[] iop_ram;
        iop_ram = nullptr;
    }
}

bool PS2Memory::initialize(size_t ramSize)
{
    auto cleanup = [this]()
    {
        delete[] m_rdram;
        delete[] m_scratchpad;
        delete[] iop_ram;
        delete[] m_gsVRAM;
        delete[] m_vu0Code;
        delete[] m_vu0Data;
        delete[] m_vu1Code;
        delete[] m_vu1Data;
        m_rdram = nullptr;
        m_scratchpad = nullptr;
        ps2SetScratchpadHostPtr(nullptr);
        iop_ram = nullptr;
        m_gsVRAM = nullptr;
        m_vu0Code = nullptr;
        m_vu0Data = nullptr;
        m_vu1Code = nullptr;
        m_vu1Data = nullptr;
    };

    cleanup();
    m_seenGifCopy = false;
    m_dmaStartCount.store(0, std::memory_order_relaxed);
    m_gifCopyCount.store(0, std::memory_order_relaxed);
    m_gsWriteCount.store(0, std::memory_order_relaxed);
    m_vifWriteCount.store(0, std::memory_order_relaxed);
    {
        std::lock_guard<std::mutex> lock(m_completedDmacMutex);
        m_completedDmacCauses.clear();
#if defined(PLATFORM_XBOX)
        m_completedDmacPending.store(false, std::memory_order_release);
#endif
    }
    m_codeRegions.clear();
    m_path3Masked = false;
    m_path3MaskedFifo.clear();
    m_vif1PendingPath2ImageQwc = 0u;
    m_vif1PendingPath2DirectHl = false;
    resetEeTimers();

    PS2X_TRY
    {
        // Allocate main RAM
        m_rdram = new uint8_t[ramSize];
        std::memset(m_rdram, 0, ramSize);

        // Allocate scratchpad
        m_scratchpad = new uint8_t[PS2_SCRATCHPAD_SIZE];
        std::memset(m_scratchpad, 0, PS2_SCRATCHPAD_SIZE);
        ps2SetScratchpadHostPtr(m_scratchpad);

        // Initialize EE TLB entries (R5900 has 48 entries).
        m_tlbEntries.assign(48, TLBEntry{0, 0, 0, false});

        // IOP RAM lives in the IOP emulator (ps2xIOP IopMemory); this legacy
        // buffer had no readers, so it is no longer allocated.
        iop_ram = nullptr;

        // Initialize I/O registers
        m_ioRegisters.clear();

        // Initialize GS registers
        memset(&gs_regs, 0, sizeof(gs_regs));
        // memset zero-fills std::atomic<uint64_t>::csr's bytes, which is not itself
        // a guaranteed-valid atomic store; make the zero-initialization explicit.
        gs_regs.csr.store(0);
        gs_regs.dispfb1 = (0ULL << 0) | (10ULL << 9) | (0ULL << 15) | (0ULL << 32) | (0ULL << 43);
        gs_regs.display1 = (0ULL << 0) | (0ULL << 12) | (0ULL << 23) | (0ULL << 27) | (639ULL << 32) | (447ULL << 44);
        gs_regs.dispfb2 = gs_regs.dispfb1;
        gs_regs.display2 = gs_regs.display1;

        // Allocate GS VRAM (4MB)
        m_gsVRAM = new uint8_t[PS2_GS_VRAM_SIZE];
        std::memset(m_gsVRAM, 0, PS2_GS_VRAM_SIZE);

        m_vu0Code = new uint8_t[PS2_VU0_CODE_SIZE];
        m_vu0Data = new uint8_t[PS2_VU0_DATA_SIZE];
        std::memset(m_vu0Code, 0, PS2_VU0_CODE_SIZE);
        std::memset(m_vu0Data, 0, PS2_VU0_DATA_SIZE);

        m_vu1Code = new uint8_t[PS2_VU1_CODE_SIZE];
        m_vu1Data = new uint8_t[PS2_VU1_DATA_SIZE];
        std::memset(m_vu1Code, 0, PS2_VU1_CODE_SIZE);
        std::memset(m_vu1Data, 0, PS2_VU1_DATA_SIZE);
        g_vu1WatchedRows.noteAll();
        markVU0CodeModified();
        markVU1CodeModified();

        // Initialize VIF registers
        memset(&vif0_regs, 0, sizeof(vif0_regs));
        memset(&vif1_regs, 0, sizeof(vif1_regs));

        // Initialize DMA registers
        memset(dma_regs, 0, sizeof(dma_regs));

        return true;
    }
    PS2X_CATCH(const std::exception &, e)
    {
        std::cerr << "Error initializing PS2 memory: " << e.what() << std::endl;
        cleanup();
        return false;
    }
}

void PS2Memory::resetEeTimers() noexcept
{
    m_eeTimers = {};
}

uint32_t PS2Memory::advanceEeTimers(uint64_t eeCycles) noexcept
{
    if (eeCycles == 0u)
    {
        return 0u;
    }

    constexpr uint32_t kGifStat = 0x10003020u;
    constexpr uint32_t kGifFqcMask = 0x1F000000u;
    auto gifStatIt = m_ioRegisters.find(kGifStat);
    if (gifStatIt != m_ioRegisters.end())
        gifStatIt->second &= ~kGifFqcMask;

    uint32_t interruptMask = 0u;
    for (size_t index = 0; index < m_eeTimers.size(); ++index)
    {
        EeTimer &timer = m_eeTimers[index];
        if ((timer.mode & kEeTimerModeCue) == 0u)
        {
            continue;
        }

#if defined(PLATFORM_XBOX)
        uint64_t ticks = 0u;
        switch (timer.mode & kEeTimerModeClksMask)
        {
        case 0u:
            ticks = busClockTimerTicks<1>(eeCycles, timer.clockRemainder);
            break;
        case 1u:
            ticks = busClockTimerTicks<5>(eeCycles, timer.clockRemainder);
            break;
        case 2u:
            ticks = busClockTimerTicks<9>(eeCycles, timer.clockRemainder);
            break;
        default:
        {
            // HBLANK is not a power-of-two fraction of the EE clock.
            const uint64_t clockHz = kEeTimerClockHz[3];
            const uint64_t wholeSeconds = eeCycles / kEeClockHz;
            const uint64_t remainingCycles = eeCycles % kEeClockHz;
            const uint64_t scaled = remainingCycles * clockHz + timer.clockRemainder;
            ticks = wholeSeconds * clockHz + scaled / kEeClockHz;
            timer.clockRemainder = scaled % kEeClockHz;
            break;
        }
        }
#else
        const uint64_t clockHz = kEeTimerClockHz[timer.mode & kEeTimerModeClksMask];
        const uint64_t wholeSeconds = eeCycles / kEeClockHz;
        const uint64_t remainingCycles = eeCycles % kEeClockHz;
        const uint64_t scaled = remainingCycles * clockHz + timer.clockRemainder;
        const uint64_t ticks = wholeSeconds * clockHz + scaled / kEeClockHz;
        timer.clockRemainder = scaled % kEeClockHz;
#endif
        if (ticks == 0u)
        {
            continue;
        }

        const uint32_t oldCount = timer.count & 0xFFFFu;
        const uint32_t compare = timer.compare & 0xFFFFu;
        const uint64_t compareDistance = ticksUntilMatch(oldCount, compare);
        const uint64_t overflowDistance = 0x10000ull - oldCount;
        const bool zeroReturn = (timer.mode & kEeTimerModeZret) != 0u;
        const bool compareReached = ticks >= compareDistance;
        bool overflowReached = false;

        if (zeroReturn)
        {
            overflowReached = ticks >= overflowDistance && overflowDistance <= compareDistance;
            if (compareReached)
            {
                const uint64_t remaining = ticks - compareDistance;
                timer.count = compare == 0u
                                  ? static_cast<uint32_t>(remaining & 0xFFFFu)
                                  : static_cast<uint32_t>(remaining % compare);
            }
            else
            {
                timer.count = static_cast<uint32_t>((oldCount + ticks) & 0xFFFFu);
            }
        }
        else
        {
            overflowReached = ticks >= overflowDistance;
            timer.count = static_cast<uint32_t>((oldCount + ticks) & 0xFFFFu);
        }

        if (compareReached && (timer.mode & kEeTimerModeCmpe) != 0u && (timer.mode & kEeTimerModeEquf) == 0u)
        {
            timer.mode |= kEeTimerModeEquf;
            interruptMask |= 1u << index;
        }
        if (overflowReached && (timer.mode & kEeTimerModeOvfe) != 0u && (timer.mode & kEeTimerModeOvff) == 0u)
        {
            timer.mode |= kEeTimerModeOvff;
            interruptMask |= 1u << index;
        }
    }
    return interruptMask;
}

uint64_t PS2Memory::cyclesUntilNextEeTimerInterrupt() const noexcept
{
    uint64_t nearest = std::numeric_limits<uint64_t>::max();
    for (const EeTimer &timer : m_eeTimers)
    {
        if ((timer.mode & kEeTimerModeCue) == 0u)
        {
            continue;
        }

        const uint32_t count = timer.count & 0xFFFFu;
        const uint32_t compare = timer.compare & 0xFFFFu;
        const uint64_t compareDistance = ticksUntilMatch(count, compare);
        const uint64_t overflowDistance = 0x10000ull - count;
        uint64_t eventTicks = std::numeric_limits<uint64_t>::max();

        if ((timer.mode & kEeTimerModeCmpe) != 0u &&
            (timer.mode & kEeTimerModeEquf) == 0u)
        {
            eventTicks = compareDistance;
        }
        const bool overflowCanOccur = (timer.mode & kEeTimerModeZret) == 0u ||
                                      overflowDistance <= compareDistance;
        if (overflowCanOccur &&
            (timer.mode & kEeTimerModeOvfe) != 0u &&
            (timer.mode & kEeTimerModeOvff) == 0u)
        {
            eventTicks = std::min(eventTicks, overflowDistance);
        }
        if (eventTicks == std::numeric_limits<uint64_t>::max())
        {
            continue;
        }

        const uint64_t clockHz = kEeTimerClockHz[timer.mode & kEeTimerModeClksMask];
        const uint64_t numerator = eventTicks * kEeClockHz - timer.clockRemainder;
        const uint64_t cycles = (numerator + clockHz - 1u) / clockHz;
        nearest = std::min(nearest, std::max<uint64_t>(1u, cycles));
    }
    return nearest;
}

bool PS2Memory::isScratchpad(uint32_t address) const
{
    return ps2IsScratchpadAddress(address);
}

uint8_t *PS2Memory::mapVuMemory(uint32_t physAddr, uint32_t size, uint32_t &offset, uint32_t &limit)
{
    return const_cast<uint8_t *>(static_cast<const PS2Memory *>(this)->mapVuMemory(physAddr, size, offset, limit));
}

const uint8_t *PS2Memory::mapVuMemory(uint32_t physAddr, uint32_t size, uint32_t &offset, uint32_t &limit) const
{
    auto mapRange = [&](uint32_t base, uint32_t rangeSize, const uint8_t *ptr) -> const uint8_t *
    {
        if (!ptr || physAddr < base)
        {
            return nullptr;
        }
        const uint32_t local = physAddr - base;
        if (local >= rangeSize || size > (rangeSize - local))
        {
            return nullptr;
        }
        offset = local;
        limit = rangeSize;
        return ptr;
    };

    if (const uint8_t *ptr = mapRange(PS2_VU0_CODE_BASE, PS2_VU0_CODE_SIZE, m_vu0Code))
    {
        return ptr;
    }
    if (const uint8_t *ptr = mapRange(PS2_VU0_DATA_BASE, PS2_VU0_DATA_SIZE, m_vu0Data))
    {
        return ptr;
    }
    if (const uint8_t *ptr = mapRange(PS2_VU1_CODE_BASE, PS2_VU1_CODE_SIZE, m_vu1Code))
    {
        return ptr;
    }
    return mapRange(PS2_VU1_DATA_BASE, PS2_VU1_DATA_SIZE, m_vu1Data);
}

uint32_t PS2Memory::translateAddress(uint32_t virtualAddress)
{
    if (isScratchpad(virtualAddress))
    {
        return ps2ScratchpadOffset(virtualAddress);
    }

    // EE uncached aliases of main RAM (per PS2 memory map):
    //   0x20000000-0x3FFFFFFF -> 32MB mirror of RDRAM
    // This includes the accelerated window rooted at 0x30100000.
    if (Ps2IsUncachedRamMirrorAddress(virtualAddress))
    {
        return virtualAddress & PS2_RAM_MASK;
    }

    // KSEG0/KSEG1 direct-mapped window.
    if (Ps2IsKseg01Address(virtualAddress))
    {
        return Ps2DirectMappedPhysicalAddress(virtualAddress);
    }

    // In this runtime, low segments are treated as physical-style addresses already.
    if (virtualAddress < 0x80000000)
    {
        return virtualAddress;
    }

    // KSEG2/KSEG3 are TLB mapped.
    if (Ps2IsKseg23Address(virtualAddress))
    {
        for (const auto &entry : m_tlbEntries)
        {
            if (entry.valid)
            {
                // PageMask uses bits [24:13]. Build an address-level mask (plus 4KB base page bits).
                const uint32_t mask = entry.mask & 0x01FFE000u;
                const uint32_t compareMask = ~(mask | 0xFFFu);
                if ((virtualAddress & compareMask) == (entry.vpn & compareMask))
                {
                    // TLB hit
                    const uint32_t pageOffsetMask = mask | 0xFFFu;
                    const uint32_t physBase = entry.pfn << 12;
                    return physBase | (virtualAddress & pageOffsetMask);
                }
            }
        }
        PS2X_THROW(std::runtime_error("TLB miss for address: 0x" + std::to_string(virtualAddress)));
    }

    return virtualAddress;
}

bool PS2Memory::tlbRead(uint32_t index, uint32_t &vpn, uint32_t &pfn, uint32_t &mask, bool &valid) const
{
    if (index >= m_tlbEntries.size())
    {
        return false;
    }

    const TLBEntry &entry = m_tlbEntries[index];
    vpn = entry.vpn;
    pfn = entry.pfn;
    mask = entry.mask;
    valid = entry.valid;
    return true;
}

bool PS2Memory::tlbWrite(uint32_t index, uint32_t vpn, uint32_t pfn, uint32_t mask, bool valid)
{
    if (index >= m_tlbEntries.size())
    {
        return false;
    }

    TLBEntry &entry = m_tlbEntries[index];
    entry.vpn = vpn & 0xFFFFF000u;
    entry.pfn = pfn & 0x000FFFFFu;
    entry.mask = mask & 0x01FFE000u;
    entry.valid = valid;
    return true;
}

int32_t PS2Memory::tlbProbe(uint32_t vpn) const
{
    const uint32_t normalizedVpn = vpn & 0xFFFFF000u;
    for (uint32_t i = 0; i < static_cast<uint32_t>(m_tlbEntries.size()); ++i)
    {
        const TLBEntry &entry = m_tlbEntries[i];
        if (!entry.valid)
        {
            continue;
        }

        const uint32_t mask = entry.mask & 0x01FFE000u;
        const uint32_t compareMask = ~(mask | 0xFFFu);
        if ((normalizedVpn & compareMask) == (entry.vpn & compareMask))
        {
            return static_cast<int32_t>(i);
        }
    }

    return -1;
}

uint8_t PS2Memory::read8(uint32_t address)
{
    syncVif1ForAddress(address);
    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return m_scratchpad[physAddr];
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return m_rdram[physAddr];
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint8_t), vuOffset, vuLimit))
    {
        (void)vuLimit;
        return vuMem[vuOffset];
    }
    else if (isIoRegister(physAddr))
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t value = readIORegister(regAddr);
        uint32_t shift = (physAddr & 3) * 8;
        return static_cast<uint8_t>((value >> shift) & 0xFF);
    }

    return 0;
}

uint16_t PS2Memory::read16(uint32_t address)
{
    syncVif1ForAddress(address);
    if (address & 1)
    {
        PS2X_THROW(std::runtime_error("Unaligned 16-bit read at address: 0x" + std::to_string(address)));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint16_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read16 scratchpad", address);
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint16_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read16 rdram", address);
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint16_t), vuOffset, vuLimit))
    {
        return loadScalar<uint16_t>(vuMem, vuOffset, vuLimit, "read16 vu", address);
    }
    else if (isIoRegister(physAddr))
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t value = readIORegister(regAddr);
        uint32_t shift = (physAddr & 2) * 8;
        return static_cast<uint16_t>((value >> shift) & 0xFFFF);
    }

    return 0;
}

uint32_t PS2Memory::read32(uint32_t address)
{
    syncVif1ForAddress(address);
    if (address & 3)
    {
        PS2X_THROW(std::runtime_error("Unaligned 32-bit read at address: 0x" + std::to_string(address)));
    }

    if (isGsPrivReg(address))
    {
        uint32_t off = address & 7;
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            uint64_t val = gs_regs.csr.load();
            return (uint32_t)(val >> (off * 8));
        }
        uint64_t *reg = gsRegPtr(gs_regs, address);
        if (!reg)
            return 0;
        uint64_t val = *reg;
        return (uint32_t)(val >> (off * 8));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint32_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read32 scratchpad", address);
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint32_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read32 rdram", address);
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint32_t), vuOffset, vuLimit))
    {
        return loadScalar<uint32_t>(vuMem, vuOffset, vuLimit, "read32 vu", address);
    }
    else if (isIoRegister(physAddr))
    {
        return readIORegister(physAddr);
    }

    return 0;
}

uint64_t PS2Memory::read64(uint32_t address)
{
    syncVif1ForAddress(address);
    if (address & 7)
    {
        PS2X_THROW(std::runtime_error("Unaligned 64-bit read at address: 0x" + std::to_string(address)));
    }

    if (isGsPrivReg(address))
    {
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            return gs_regs.csr.load();
        }
        uint64_t *reg = gsRegPtr(gs_regs, address);
        return reg ? *reg : 0;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        return loadScalar<uint64_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, "read64 scratchpad", address);
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        return loadScalar<uint64_t>(m_rdram, physAddr, PS2_RAM_SIZE, "read64 rdram", address);
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint64_t), vuOffset, vuLimit))
    {
        return loadScalar<uint64_t>(vuMem, vuOffset, vuLimit, "read64 vu", address);
    }

    // 64-bit IO read: compose from the two adjacent 32-bit IO register slots
    // to avoid any side-effects from read32 handlers.
    if (isIoRegister(address))
    {
        uint32_t lo = m_ioRegisters.count(address) ? m_ioRegisters[address] : 0u;
        uint32_t hi = m_ioRegisters.count(address + 4) ? m_ioRegisters[address + 4] : 0u;
        return static_cast<uint64_t>(lo) | (static_cast<uint64_t>(hi) << 32);
    }
    return (uint64_t)read32(address) | ((uint64_t)read32(address + 4) << 32);
}

__m128i PS2Memory::read128(uint32_t address)
{
    syncVif1ForAddress(address);
    if (address & 15)
    {
        PS2X_THROW(std::runtime_error("Unaligned 128-bit read at address: 0x" + std::to_string(address)));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        inRange(physAddr, sizeof(__m128i), PS2_SCRATCHPAD_SIZE, "read128 scratchpad", address);
        return _mm_loadu_si128(reinterpret_cast<__m128i *>(&m_scratchpad[physAddr]));
    }
    if (physAddr < PS2_RAM_SIZE)
    {
        inRange(physAddr, sizeof(__m128i), PS2_RAM_SIZE, "read128 rdram", address);
        return _mm_loadu_si128(reinterpret_cast<__m128i *>(&m_rdram[physAddr]));
    }
    uint32_t vuOffset = 0;
    uint32_t vuLimit = 0;
    if (const uint8_t *vuMem = mapVuMemory(physAddr, sizeof(__m128i), vuOffset, vuLimit))
    {
        inRange(vuOffset, sizeof(__m128i), vuLimit, "read128 vu", address);
        return _mm_loadu_si128(reinterpret_cast<const __m128i *>(vuMem + vuOffset));
    }

    // 128-bit reads are primarily for quad-word loads in the EE, which are only valid for RAM areas
    // Return zeroes for unsupported areas
    return _mm_setzero_si128();
}

void PS2Memory::write8(uint32_t address, uint8_t value)
{
    syncVif1ForAddress(address);
    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        m_scratchpad[physAddr] = value;
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        m_rdram[physAddr] = value;
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint8_t), vuOffset, vuLimit))
        {
            (void)vuLimit;
            vuMem[vuOffset] = value;
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            else if (vuMem == m_vu1Data)
                g_vu1WatchedRows.noteBytes(vuOffset, sizeof(uint8_t));
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        // IO registers - handle byte writes by modifying the appropriate byte in the word
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t shift = (physAddr & 3) * 8;
        uint32_t mask = ~(0xFF << shift);
        uint32_t newValue = (m_ioRegisters[regAddr] & mask) | ((uint32_t)value << shift);
        writeIORegister(regAddr, newValue);
    }
}

void PS2Memory::write16(uint32_t address, uint16_t value)
{
    syncVif1ForAddress(address);
    if (address & 1)
    {
        PS2X_THROW(std::runtime_error("Unaligned 16-bit write at address: 0x" + std::to_string(address)));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint16_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write16 scratchpad", address);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        storeScalar<uint16_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write16 rdram", address);
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint16_t), vuOffset, vuLimit))
        {
            storeScalar<uint16_t>(vuMem, vuOffset, vuLimit, value, "write16 vu", address);
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            else if (vuMem == m_vu1Data)
                g_vu1WatchedRows.noteBytes(vuOffset, sizeof(uint16_t));
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        uint32_t regAddr = physAddr & ~0x3;
        uint32_t shift = (physAddr & 2) * 8;
        uint32_t mask = ~(0xFFFF << shift);
        uint32_t newValue = (m_ioRegisters[regAddr] & mask) | ((uint32_t)value << shift);
        writeIORegister(regAddr, newValue);
    }
}

void PS2Memory::write32(uint32_t address, uint32_t value)
{
    syncVif1ForAddress(address);
    if (address & 3)
    {
        PS2X_THROW(std::runtime_error("Unaligned 32-bit write at address: 0x" + std::to_string(address)));
    }

    if (isGsPrivReg(address))
    {
        uint32_t off = address & 7;
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            // CSR: bits 0..1 of the low dword are write-one-to-clear status bits.
            // Done as a single atomic RMW -- see writeCsrHalf's comment.
            writeCsrHalf(gs_regs.csr, off, value);
        }
        else if (uint64_t *reg = gsRegPtr(gs_regs, address))
        {
            uint64_t mask = 0xFFFFFFFFULL << (off * 8);
            uint64_t newVal = (*reg & ~mask) | ((uint64_t)value << (off * 8));
            *reg = newVal;
        }
        return;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint32_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write32 scratchpad", address);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        // Check if this might be code modification
        markModified(address, 4);

        storeScalar<uint32_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write32 rdram", address);
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint32_t), vuOffset, vuLimit))
        {
            storeScalar<uint32_t>(vuMem, vuOffset, vuLimit, value, "write32 vu", address);
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            else if (vuMem == m_vu1Data)
                g_vu1WatchedRows.noteBytes(vuOffset, sizeof(uint32_t));
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        writeIORegister(physAddr, value);
    }
}

void PS2Memory::write64(uint32_t address, uint64_t value)
{
    syncVif1ForAddress(address);
    if (address & 7)
    {
        PS2X_THROW(std::runtime_error("Unaligned 64-bit write at address: 0x" + std::to_string(address)));
    }

    if (isGsPrivReg(address))
    {
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            // CSR: bits 0..1 are write-one-to-clear status bits. Done as a single
            // atomic RMW -- see writeCsrFull's comment.
            writeCsrFull(gs_regs.csr, value);
        }
        else if (uint64_t *reg = gsRegPtr(gs_regs, address))
        {
            *reg = value;
        }
        return;
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (scratch)
    {
        storeScalar<uint64_t>(m_scratchpad, physAddr, PS2_SCRATCHPAD_SIZE, value, "write64 scratchpad", address);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        markModified(address, 8);
        storeScalar<uint64_t>(m_rdram, physAddr, PS2_RAM_SIZE, value, "write64 rdram", address);
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(uint64_t), vuOffset, vuLimit))
        {
            storeScalar<uint64_t>(vuMem, vuOffset, vuLimit, value, "write64 vu", address);
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            else if (vuMem == m_vu1Data)
                g_vu1WatchedRows.noteBytes(vuOffset, sizeof(uint64_t));
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        write32(address, (uint32_t)value);
        write32(address + 4, (uint32_t)(value >> 32));
    }
}

void PS2Memory::write128(uint32_t address, __m128i value)
{
    syncVif1ForAddress(address);
    if (address & 15)
    {
        PS2X_THROW(std::runtime_error("Unaligned 128-bit write at address: 0x" + std::to_string(address)));
    }

    const bool scratch = isScratchpad(address);
    uint32_t physAddr = translateAddress(address);

    if (!scratch && physAddr == 0x10004000u) // VIF0_FIFO
    {
        alignas(16) uint8_t fifoData[16];
        _mm_storeu_si128(reinterpret_cast<__m128i *>(fifoData), value);
        processVIF0Data(fifoData, sizeof(fifoData));
        return;
    }
    if (!scratch && physAddr == 0x10005000u) // VIF1_FIFO
    {
        alignas(16) uint8_t fifoData[16];
        _mm_storeu_si128(reinterpret_cast<__m128i *>(fifoData), value);
        processVIF1Data(fifoData, sizeof(fifoData));
        return;
    }

    if (scratch)
    {
        inRange(physAddr, sizeof(__m128i), PS2_SCRATCHPAD_SIZE, "write128 scratchpad", address);
        _mm_storeu_si128(reinterpret_cast<__m128i *>(&m_scratchpad[physAddr]), value);
    }
    else if (physAddr < PS2_RAM_SIZE)
    {
        markModified(address, 16);
        inRange(physAddr, sizeof(__m128i), PS2_RAM_SIZE, "write128 rdram", address);
        _mm_storeu_si128(reinterpret_cast<__m128i *>(&m_rdram[physAddr]), value);
    }
    else
    {
        uint32_t vuOffset = 0;
        uint32_t vuLimit = 0;
        if (uint8_t *vuMem = mapVuMemory(physAddr, sizeof(__m128i), vuOffset, vuLimit))
        {
            inRange(vuOffset, sizeof(__m128i), vuLimit, "write128 vu", address);
            _mm_storeu_si128(reinterpret_cast<__m128i *>(vuMem + vuOffset), value);
            if (vuMem == m_vu0Code)
                markVU0CodeModified();
            else if (vuMem == m_vu1Code)
                markVU1CodeModified();
            else if (vuMem == m_vu1Data)
                g_vu1WatchedRows.noteBytes(vuOffset, sizeof(__m128i));
            return;
        }
    }
    if (isIoRegister(physAddr))
    {
        // Non-RAM 128-bit stores are modeled as two 64-bit stores.
        uint64_t lo = _mm_extract_epi64(value, 0);
        uint64_t hi = _mm_extract_epi64(value, 1);

        write64(address, lo);
        write64(address + 8, hi);
    }
}

bool PS2Memory::writeIORegister(uint32_t address, uint32_t value)
{
    syncVif1ForAddress(address);
    size_t timerIndex = 0u;
    uint32_t timerOffset = 0u;
    if (decodeEeTimerRegister(address, timerIndex, timerOffset))
    {
        EeTimer &timer = m_eeTimers[timerIndex];
        switch (timerOffset)
        {
        case kEeTimerCountOffset:
            timer.count = value & 0xFFFFu;
            timer.clockRemainder = 0u;
            break;
        case kEeTimerModeOffset:
        {
            const uint32_t previousMode = timer.mode;
            const uint32_t status = (previousMode & kEeTimerModeStatusMask) & ~(value & kEeTimerModeStatusMask);
            timer.mode = (value & kEeTimerModeConfigMask) | status;
            if (((previousMode ^ timer.mode) & (kEeTimerModeClksMask | kEeTimerModeCue)) != 0u)
            {
                timer.clockRemainder = 0u;
            }
            break;
        }
        case kEeTimerCompareOffset:
            timer.compare = value & 0xFFFFu;
            break;
        case kEeTimerHoldOffset:
            timer.hold = value & 0xFFFFu;
            break;
        default:
            return false;
        }
        return true;
    }

    if (isGsPrivReg(address))
    {
        // NB: unreachable from write8/16/32/64 today since those all funnel IO
        // register writes through addresses in PS2_IO_BASE's range, which is
        // disjoint from PS2_GS_PRIV_REG_BASE; kept correct for direct callers.
        m_ioRegisters[address] = value;
        const uint32_t off = address & 7u;
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            writeCsrHalf(gs_regs.csr, off, value);
        }
        else if (uint64_t *reg = gsRegPtr(gs_regs, address))
        {
            const uint64_t mask = 0xFFFFFFFFull << (off * 8u);
            *reg = (*reg & ~mask) | (static_cast<uint64_t>(value) << (off * 8u));
        }
        m_gsWriteCount.fetch_add(1, std::memory_order_relaxed);
        return true;
    }

    if (address >= 0x10002000 && address <= 0x10002030)
    {
        if (address == 0x10002010)
        {
            m_ioRegisters[address] = value & ~(1u << 31);
            if (value & (1u << 30))
            {
                m_ioRegisters[0x10002000] = 0;
                m_ioRegisters[0x10002020] = 0;
                m_ioRegisters[0x10002030] = 0;
            }
        }
        else
        {
            m_ioRegisters[address] = value;
        }
        return true;
    }

    if (address == 0x1000E010u)
    {
        const uint32_t current = m_ioRegisters.count(address) ? m_ioRegisters[address] : 0u;
        uint32_t status = current & 0x3FFu;
        uint32_t mask = (current >> 16) & 0x3FFu;

        // D_STAT low bits are W1C status, high bits [16..25] toggle masks on write-one.
        status &= ~(value & 0x3FFu);
        mask ^= ((value >> 16) & 0x3FFu);

        uint32_t next = (current & ~((0x3FFu) | (0x3FFu << 16) | (1u << 31)));
        next |= status | (mask << 16);
        if ((status & mask) != 0u)
            next |= (1u << 31);
        m_ioRegisters[address] = next;
        return true;
    }

    m_ioRegisters[address] = value;

    if (address >= 0x10003C00u && address < 0x10003E00u)
    {
        m_vifWriteCount.fetch_add(1, std::memory_order_relaxed);

        switch (address)
        {
        case 0x10003C00u: // VIF1_STAT: FDR is writable; keep hardware status flags.
            vif1_regs.stat = (vif1_regs.stat & ~(1u << 23)) | (value & (1u << 23));
            break;
        case 0x10003C10u:     // VIF1_FBRST
            if (value & 0x1u) // RST
            {
                const bool wasPath3Masked = m_path3Masked;
                std::memset(&vif1_regs, 0, sizeof(vif1_regs));
                m_vif1PendingPath2ImageQwc = 0u;
                m_vif1PendingPath2DirectHl = false;
                m_path3Masked = false;
                if (wasPath3Masked)
                    flushMaskedPath3Packets();
            }
            if (value & 0x8u) // STC
            {
                vif1_regs.stat &= ~((1u << 8) | (1u << 9) | (1u << 10) | (1u << 11) | (1u << 12) | (1u << 13));
            }
            break;
        case 0x10003C30u:
            vif1_regs.mark = value & 0xFFFFu;
            vif1_regs.stat &= ~(1u << 6); // clear MRK flag on CPU write
            break;
        case 0x10003C40u:
            vif1_regs.cycle = value & 0xFFFFu;
            break;
        case 0x10003C50u:
            vif1_regs.mode = value & 0x3u;
            break;
        case 0x10003C60u:
            vif1_regs.num = value & 0xFFu;
            break;
        case 0x10003C70u:
            vif1_regs.mask = value;
            break;
        case 0x10003C80u:
            vif1_regs.code = value;
            break;
        case 0x10003C90u:
            vif1_regs.itops = value & 0x3FFu;
            break;
        case 0x10003CA0u:
            vif1_regs.base = value & 0x3FFu;
            break;
        case 0x10003CB0u:
            vif1_regs.ofst = value & 0x3FFu;
            break;
        case 0x10003CC0u:
            vif1_regs.tops = value & 0x3FFu;
            break;
        case 0x10003CD0u:
            vif1_regs.itop = value & 0x3FFu;
            break;
        case 0x10003CE0u:
            vif1_regs.top = value & 0x3FFu;
            break;
        default:
            break;
        }

        return true;
    }

    if (address >= 0x10003800u && address < 0x10003A00u)
    {
        m_vifWriteCount.fetch_add(1, std::memory_order_relaxed);
        return true;
    }

    if (address >= 0x10008000 && address < 0x1000F000)
    {
        if ((address & 0xFF) == 0x00 && (value & 0x100))
        {
            const auto dctrlIt = m_ioRegisters.find(0x1000E000u);
            const bool dmacEnabled = (dctrlIt == m_ioRegisters.end()) || ((dctrlIt->second & 0x1u) != 0u);
            if (!dmacEnabled)
            {
                return true;
            }

            const uint32_t channelBase = address & 0xFFFFFF00;
            const uint32_t madr = m_ioRegisters[channelBase + 0x10];
            const uint32_t qwc = m_ioRegisters[channelBase + 0x20];
            m_dmaStartCount.fetch_add(1, std::memory_order_relaxed);

            if (channelBase == 0x10009000u && (value & 1u) == 0u &&
                (vif1_regs.stat & (1u << 23)) != 0u)
            {
                // VIF1 reverse DMA consumes GS local-to-host pixels. Never run
                // the destination RAM through the forward VIF command decoder.
                if (((value >> 2u) & 3u) != 0u || (gs_regs.busdir & 1u) == 0u)
                    PS2X_THROW(std::runtime_error("Unsupported VIF1 reverse DMA mode or GS BUSDIR"));
                if (!m_gsReadbackCallback)
                    PS2X_THROW(std::runtime_error("VIF1 reverse DMA has no GS readback backend"));
                processPendingTransfers(); // commit preceding GIF/VIF setup first
                const uint64_t bytes64 = static_cast<uint64_t>(qwc) * 16ull;
                const uint32_t offset = translateAddress(madr);
                const bool scratch = isScratchpad(madr);
                uint8_t *destination = scratch ? m_scratchpad : m_rdram;
                const uint32_t limit = scratch ? PS2_SCRATCHPAD_SIZE : PS2_RAM_SIZE;
                if (!destination || offset >= limit || bytes64 > limit - offset)
                    PS2X_THROW(std::runtime_error("VIF1 reverse DMA destination exceeds guest memory"));
                const uint32_t bytes = static_cast<uint32_t>(bytes64);
                const uint32_t received = m_gsReadbackCallback(destination + offset, bytes);
                if (received != bytes)
                    PS2X_THROW(std::runtime_error("VIF1 reverse DMA GS readback was shorter than QWC"));
                m_ioRegisters[channelBase + 0x10u] = madr + bytes;
                m_ioRegisters[channelBase + 0x20u] = 0u;
                m_ioRegisters[channelBase] = value & ~0x100u;
                uint32_t &dstat = m_ioRegisters[0x1000E010u];
                dstat |= 2u;
                if (((dstat & 0x3FFu) & ((dstat >> 16u) & 0x3FFu)) != 0u)
                    dstat |= 0x80000000u;
                else dstat &= ~0x80000000u;
                queueCompletedDmacCause(1u);
                return true;
            }

            if (tryProcessScratchpadDma(channelBase, value))
            {
                return true;
            }

            if ((channelBase == 0x1000A000u || channelBase == 0x10009000u || channelBase == 0x10008000u) && (m_gsVRAM || channelBase == 0x10008000u))
            {
                auto enqueueTransfer = [&](uint32_t srcAddr, uint32_t qwCount)
                {
                    if (qwCount == 0)
                        return;
                    const bool scratch = isScratchpad(srcAddr);
                    PendingTransfer pt;
                    pt.fromScratchpad = scratch;
                    pt.srcAddr = srcAddr;
                    pt.qwc = qwCount;
                    if (channelBase == 0x1000A000u)
                        m_pendingGifTransfers.push_back(pt);
                    else if (channelBase == 0x10009000u)
                        m_pendingVif1Transfers.push_back(pt);
                    else if (channelBase == 0x10008000u)
                        m_pendingVif0Transfers.push_back(pt);
                };

                uint32_t chcr = value;
                uint32_t mode = (chcr >> 2) & 0x3;

                if (mode == 0 && qwc > 0)
                {
                    enqueueTransfer(madr, qwc);
                }
                else if (mode == 1)
                {
                    uint32_t tagAddr = m_ioRegisters[channelBase + 0x30];
                    uint32_t asr0 = m_ioRegisters[channelBase + 0x40];
                    uint32_t asr1 = m_ioRegisters[channelBase + 0x50];
                    uint32_t asp = (chcr >> 4) & 0x3u;
                    const bool tieEnabled = (chcr & (1u << 7)) != 0u;
                    // A valid frame may reuse many CALL/RET sublists and exceed 4096
                    // tags. Truncating there loses real VIF commands (including GS
                    // completion SIGNAL), while incorrectly reporting DMA complete.
                    // The synchronous snapshot cannot change during this walk, so a
                    // repeated full control state proves a cycle. Return-stack values
                    // matter: revisiting a sublist from a different CALL is legal.
                    // Flat open-addressing set: a std::set allocated a node per tag.
                    struct ChainStateSet
                    {
                        std::vector<std::array<uint32_t, 4>> slots;
                        std::vector<uint8_t> used;
                        size_t count = 0;
                        static size_t hash(const std::array<uint32_t, 4> &k)
                        {
                            uint64_t h = 0x9E3779B97F4A7C15ull;
                            for (uint32_t v : k)
                                h = (h ^ v) * 0xFF51AFD7ED558CCDull;
                            return static_cast<size_t>(h ^ (h >> 29));
                        }
                        bool insert(const std::array<uint32_t, 4> &k)
                        {
                            if ((count + 1) * 2 > slots.size())
                            {
                                std::vector<std::array<uint32_t, 4>> oldSlots = std::move(slots);
                                std::vector<uint8_t> oldUsed = std::move(used);
                                const size_t capacity = std::max<size_t>(1024u, oldSlots.size() * 2u);
                                slots.assign(capacity, {});
                                used.assign(capacity, 0u);
                                count = 0;
                                for (size_t i = 0; i < oldSlots.size(); ++i)
                                    if (oldUsed[i])
                                        insert(oldSlots[i]);
                            }
                            const size_t mask = slots.size() - 1u;
                            for (size_t i = hash(k) & mask;; i = (i + 1u) & mask)
                            {
                                if (!used[i])
                                {
                                    used[i] = 1u;
                                    slots[i] = k;
                                    ++count;
                                    return true;
                                }
                                if (slots[i] == k)
                                    return false;
                            }
                        }
                        size_t size() const { return count; }
                    } chainStates;
                    constexpr size_t kMaxBufferedDmaBytes = 64u * 1024u * 1024u;
                    constexpr size_t kMaxDmaControlStates = 1u << 20;
                    std::vector<uint8_t> chainBuf;
                    // Display lists are similar from frame to frame: size the
                    // buffer once instead of growing it tag by tag.
                    static thread_local size_t s_lastChainBytes = 0;
#if defined(PLATFORM_XBOX)
                    const bool recordSegments = channelBase == 0x10009000u;
                    const size_t firstSegment = s_vif1Segments.size();
                    size_t segmentBytes = 0;
                    // A piece that continues the last one (a CNT tag's VIFcodes
                    // and its data) extends it.
                    auto addSegment = [&](const uint8_t *data, uint32_t bytes)
                    {
                        segmentBytes += bytes;
                        if (segmentBytes > kMaxBufferedDmaBytes)
                            PS2X_THROW(std::runtime_error("DMA chain exceeds host buffering budget"));
                        if (s_vif1Segments.size() > firstSegment &&
                            s_vif1Segments.back().first + s_vif1Segments.back().second == data)
                            s_vif1Segments.back().second += bytes;
                        else
                            s_vif1Segments.emplace_back(data, bytes);
                    };
                    if (!recordSegments)
#endif
                    chainBuf.reserve(s_lastChainBytes + 4096u);

                    auto appendData = [&](uint32_t srcAddr, uint32_t qwCount)
                    {
                        const uint64_t bytes64 = static_cast<uint64_t>(qwCount) * 16ull;
                        if (bytes64 > kMaxBufferedDmaBytes - chainBuf.size())
                            PS2X_THROW(std::runtime_error("DMA chain exceeds host buffering budget"));
                        uint32_t bytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
                        const bool scratch = isScratchpad(srcAddr);
                        uint32_t src = 0;
                        src = translateAddress(srcAddr);
                        const uint8_t *base2;
                        uint32_t maxSz2;
                        if (scratch)
                        {
                            base2 = m_scratchpad;
                            maxSz2 = PS2_SCRATCHPAD_SIZE;
                        }
                        else
                        {
                            base2 = m_rdram;
                            maxSz2 = PS2_RAM_SIZE;
                        }

                        while (bytes > 0)
                        {
                            if (src >= maxSz2)
                                src = 0;
                            uint32_t chunk = bytes;
                            if (src + chunk > maxSz2)
                                chunk = maxSz2 - src;
                            if (chunk == 0)
                                break;
#if defined(PLATFORM_XBOX)
                            if (recordSegments)
                            {
                                addSegment(base2 + src, chunk);
                                bytes -= chunk;
                                src += chunk;
                                continue;
                            }
#endif
                            // Grow gently: doubling (std::vector's default)
                            // briefly needs three times the chain's size,
                            // more than a 64 MB host has free.
                            if (chainBuf.capacity() < chainBuf.size() + chunk)
                                chainBuf.reserve(chainBuf.size() + chunk + (chainBuf.size() + chunk) / 4u);
                            chainBuf.insert(chainBuf.end(), base2 + src, base2 + src + chunk);
                            bytes -= chunk;
                            src += chunk;
                        }
                    };

                    auto appendVifTagData = [&](uint32_t localTagAddr)
                    {
                        uint32_t tagPhys = 0u;
                        const bool tagScratch = isScratchpad(localTagAddr);
                        tagPhys = translateAddress(localTagAddr);

                        const uint8_t *localBase = tagScratch ? m_scratchpad : m_rdram;
                        const uint32_t localMax = tagScratch ? PS2_SCRATCHPAD_SIZE : PS2_RAM_SIZE;
                        if (tagPhys + 16u > localMax)
                            return;

                        // CHCR.TTE sends the DMAtag's upper 64 bits to the channel before
                        // the tag payload. VIF chains use those bytes for two VIFcodes.
                        if (chainBuf.size() > kMaxBufferedDmaBytes - 8u)
                            PS2X_THROW(std::runtime_error("DMA chain exceeds host buffering budget"));
#if defined(PLATFORM_XBOX)
                        if (recordSegments)
                        {
                            addSegment(localBase + tagPhys + 8u, 8u);
                            return;
                        }
#endif
                        chainBuf.insert(chainBuf.end(), localBase + tagPhys + 8u, localBase + tagPhys + 16u);
                    };

                    const bool isVifChannel =
                        channelBase == 0x10009000u || channelBase == 0x10008000u;
                    const bool transferTagData = isVifChannel && (chcr & 0x40u) != 0u;

                    int tagsProcessed = 0;
                    uint32_t lastTagUpper = (chcr >> 16) & 0xFFFFu;

                    uint32_t chainTags = 0;
                    (void)chainTags;
                    for (;;)
                    {
                        if (asp > 2u)
                            PS2X_THROW(std::runtime_error("invalid DMA return-stack depth"));
#if defined(PLATFORM_XBOX)
                        // A tag count bounds a cyclic chain; the exact cycle check
                        // cleared a 17 KB table per chain and hashed each tag with
                        // 64-bit multiplies (library calls on the Pentium III).
                        if (++chainTags > kMaxDmaControlStates)
                            PS2X_THROW(std::runtime_error("DMA chain exceeds host control-state budget"));
#else
                        const std::array<uint32_t, 4> state{
                            tagAddr, asp, asp > 0u ? asr0 : 0u, asp > 1u ? asr1 : 0u};
                        if (!chainStates.insert(state))
                            PS2X_THROW(std::runtime_error("cyclic DMA chain at TADR=" + std::to_string(tagAddr)));
                        if (chainStates.size() > kMaxDmaControlStates)
                            PS2X_THROW(std::runtime_error("DMA chain exceeds host control-state budget"));
#endif
                        const uint32_t currentTagAddr = tagAddr;
#if defined(PLATFORM_XBOX)
                        // A tag in main RAM (nearly every one) is its own
                        // physical address, which is what translateAddress returns.
                        const bool tagInRam = tagAddr <= PS2_RAM_SIZE - 16u;
                        const bool tagInSPR = !tagInRam && isScratchpad(tagAddr);
                        uint32_t physTag = tagAddr;
                        if (!tagInRam)
#else
                        const bool tagInSPR = isScratchpad(tagAddr);
                        uint32_t physTag = 0;
#endif
                        PS2X_TRY
                        {
                            physTag = translateAddress(tagAddr);
                        }
                        PS2X_CATCH_ALL
                        {
                            break;
                        }
                        const uint8_t *tagBase;
                        uint32_t tagMax;
                        if (tagInSPR)
                        {
                            tagBase = m_scratchpad;
                            tagMax = PS2_SCRATCHPAD_SIZE;
                        }
                        else
                        {
                            tagBase = m_rdram;
                            tagMax = PS2_RAM_SIZE;
                        }
                        if (physTag + 16 > tagMax)
                            break;

                        const uint8_t *tp = tagBase + physTag;
                        uint64_t tag = loadScalar<uint64_t>(tp, 0, 16, "dma chain tag", tagAddr);
                        uint16_t tagQwc = static_cast<uint16_t>(tag & 0xFFFF);
                        uint32_t id = static_cast<uint32_t>((tag >> 28) & 0x7);
                        const bool irq = ((tag >> 31) & 0x1ull) != 0ull;
                        uint32_t addr = static_cast<uint32_t>((tag >> 32) & 0x7FFFFFFF);
                        lastTagUpper = static_cast<uint32_t>((tag >> 16) & 0xFFFFu);
                        ++tagsProcessed;

                        uint32_t dataAddr = 0;
                        bool hasPayload = (tagQwc > 0);
                        bool endChain = false;

                        switch (id)
                        {
                        case 0:
                            dataAddr = addr;
                            tagAddr = tagAddr + 16;
                            endChain = true;
                            break;
                        case 1:
                            dataAddr = tagAddr + 16;
                            tagAddr = dataAddr + static_cast<uint32_t>(tagQwc) * 16u;
                            break;
                        case 2:
                            dataAddr = tagAddr + 16;
                            tagAddr = addr;
                            break;
                        case 3:
                        case 4:
                            dataAddr = addr;
                            tagAddr = tagAddr + 16;
                            break;
                        case 5:
                            dataAddr = tagAddr + 16;
                            {
                                const uint32_t retAddr = dataAddr + static_cast<uint32_t>(tagQwc) * 16u;
                                if (asp == 0u)
                                {
                                    asr0 = retAddr;
                                    asp = 1u;
                                }
                                else if (asp == 1u)
                                {
                                    asr1 = retAddr;
                                    asp = 2u;
                                }
                                else
                                    PS2X_THROW(std::runtime_error("DMA CALL exceeds two-entry return stack"));
                            }
                            tagAddr = addr;
                            break;
                        case 6:
                            dataAddr = tagAddr + 16;
                            if (asp == 2u)
                            {
                                tagAddr = asr1;
                                asp = 1u;
                            }
                            else if (asp == 1u)
                            {
                                tagAddr = asr0;
                                asp = 0u;
                            }
                            else
                            {
                                endChain = true;
                            }
                            break;
                        case 7:
                            dataAddr = tagAddr + 16;
                            endChain = true;
                            break;
                        default:
                            hasPayload = false;
                            endChain = true;
                            break;
                        }

#if defined(PLATFORM_XBOX)
                        // The tag was read from tp; a payload wholly in main RAM
                        // is one piece where it lies (what appendData records).
                        if (recordSegments)
                        {
                            // The tags after the next one (REF tags lie in
                            // sequence, two to a 32-byte line): asked for now,
                            // since the Pentium III does not prefetch on its own.
                            // (Uncached-alias tag pointers, 0x2/0x3xxxxxxx, are masked like
                            // translateAddress does.)
                            const uint32_t tagPhys = tagAddr & PS2_RAM_MASK;
                            if (!isScratchpad(tagAddr) && tagPhys < PS2_RAM_SIZE - 64u)
                            {
                                _mm_prefetch(reinterpret_cast<const char *>(m_rdram + tagPhys + 32u), _MM_HINT_T0);
                                _mm_prefetch(reinterpret_cast<const char *>(m_rdram + tagPhys + 64u), _MM_HINT_T0);
                            }
                            if (transferTagData)
                                addSegment(tp + 8u, 8u);
                            const uint32_t payloadBytes = static_cast<uint32_t>(tagQwc) * 16u;
                            if (hasPayload && dataAddr < PS2_RAM_SIZE && payloadBytes <= PS2_RAM_SIZE - dataAddr)
                            {
                                addSegment(m_rdram + dataAddr, payloadBytes);
                                hasPayload = false;
                            }
                        }
                        else
#endif
                        if (transferTagData)
                            appendVifTagData(currentTagAddr);

                        if (hasPayload)
                            appendData(dataAddr, tagQwc);
                        if (irq && tieEnabled)
                            endChain = true;
                        if (endChain)
                            break;
                    }

                    if (tagsProcessed > 4096 && std::getenv("PS2X_TRACE_DMA_CHAIN"))
                        RUNTIME_LOG("[DMA:long-chain] channel=0x" << std::hex << channelBase
                            << " start=0x" << m_ioRegisters[channelBase + 0x30] << " end=0x" << tagAddr
                            << std::dec << " tags=" << tagsProcessed << " bytes=" << chainBuf.size() << '\n');
                    m_ioRegisters[channelBase + 0x30] = tagAddr;
                    m_ioRegisters[channelBase + 0x40] = asr0;
                    m_ioRegisters[channelBase + 0x50] = asr1;
                    chcr = (chcr & ~(0x3u << 4)) | ((asp & 0x3u) << 4);
                    chcr = (chcr & 0x0000FFFFu) | (lastTagUpper << 16);
                    m_ioRegisters[channelBase + 0x00] = chcr;

#if defined(PLATFORM_XBOX)
                    if (recordSegments && s_vif1Segments.size() > firstSegment)
                    {
                        PendingTransfer pt;
                        pt.qwc = kSegmentedChain;
                        pt.srcAddr = static_cast<uint32_t>(s_vif1Segments.size());
                        m_pendingVif1Transfers.push_back(std::move(pt));
                    }
                    else
#endif
                    if (!chainBuf.empty())
                    {
                        PendingTransfer pt;
                        pt.fromScratchpad = false;
                        pt.srcAddr = 0;
                        pt.qwc = 0;
                        s_lastChainBytes = std::max(s_lastChainBytes, chainBuf.size());
                        pt.chainData = std::move(chainBuf);
                        if (channelBase == 0x1000A000)
                        {
                            m_pendingGifTransfers.push_back(std::move(pt));
                        }
                        else if (channelBase == 0x10009000u)
                        {
                            m_pendingVif1Transfers.push_back(std::move(pt));
                        }
                        else if (channelBase == 0x10008000u)
                        {
                            m_pendingVif0Transfers.push_back(std::move(pt));
                        }
                    }
                    // else if (channelBase == 0x10009000u)
                    // {

                    // }
                }
                else if (qwc > 0)
                {
                    enqueueTransfer(madr, qwc);
                }

                const bool autoProcessTransfers =
                    (channelBase == 0x1000A000u) ? (m_gifPacketCallback || m_gifArbiter != nullptr) : true;
                if (autoProcessTransfers)
                {
                    processPendingTransfers();
                }
            }
        }
        return true;
    }

    if (address >= 0x10000000 && address < 0x10010000)
    {
        if (address >= 0x10000200 && address < 0x10000300)
        {
            return true;
        }
        if (address >= 0x10000000 && address < 0x10000100)
        {
            return true;
        }
    }

    return false;
}

bool PS2Memory::tryProcessScratchpadDma(uint32_t channelBase, uint32_t chcr)
{
    static constexpr uint32_t kSprFromChannel = 0x1000D000u;
    static constexpr uint32_t kSprToChannel = 0x1000D400u;
    if (channelBase != kSprFromChannel && channelBase != kSprToChannel)
        return false;

    const uint32_t mode = (chcr >> 2u) & 0x3u;
    if (mode != 0u)
        return false;

    const uint32_t qwc = m_ioRegisters[channelBase + 0x20u] & 0xFFFFu;
    const uint32_t byteCount = qwc * 16u;
    const uint32_t originalMadr = m_ioRegisters[channelBase + 0x10u] & 0x7FFFFFF0u;
    const uint32_t originalSadr = m_ioRegisters[channelBase + 0x80u] & 0x3FF0u;

    uint32_t mainOffset = 0u;
    PS2X_TRY
    {
        mainOffset = translateAddress(originalMadr);
    }
    PS2X_CATCH_TYPE(const std::exception &)
    {
        return false;
    }

    if (mainOffset > PS2_RAM_SIZE || byteCount > PS2_RAM_SIZE - mainOffset)
        return false;

    const bool fromScratchpad = channelBase == kSprFromChannel;
    uint32_t scratchOffset = originalSadr;
    uint32_t bytesLeft = byteCount;
    uint32_t copied = 0u;
    while (bytesLeft != 0u)
    {
        const uint32_t scratchChunk = PS2_SCRATCHPAD_SIZE - scratchOffset;
        const uint32_t chunk = std::min(bytesLeft, scratchChunk);
        if (fromScratchpad)
        {
            std::memcpy(m_rdram + mainOffset + copied, m_scratchpad + scratchOffset, chunk);
            markModified(mainOffset + copied, chunk);
        }
        else
        {
            std::memcpy(m_scratchpad + scratchOffset, m_rdram + mainOffset + copied, chunk);
        }

        copied += chunk;
        bytesLeft -= chunk;
        scratchOffset = (scratchOffset + chunk) & (PS2_SCRATCHPAD_SIZE - 1u);
    }

    m_ioRegisters[channelBase + 0x10u] = (originalMadr + byteCount) & 0x7FFFFFF0u;
    m_ioRegisters[channelBase + 0x20u] = 0u;
    m_ioRegisters[channelBase + 0x80u] = (originalSadr + byteCount) & 0x3FF0u;
    completeDmacChannel(channelBase, fromScratchpad ? 8u : 9u);
    return true;
}

void PS2Memory::completeDmacChannel(uint32_t channelBase, uint32_t cause)
{
    static constexpr uint32_t kDStat = 0x1000E010u;
    m_ioRegisters[channelBase] &= ~0x100u;

    uint32_t dstat = m_ioRegisters.count(kDStat) ? m_ioRegisters[kDStat] : 0u;
    dstat |= 1u << cause;
    const uint32_t status = dstat & 0x3FFu;
    const uint32_t mask = (dstat >> 16u) & 0x3FFu;
    if ((status & mask) != 0u)
        dstat |= 1u << 31u;
    else
        dstat &= ~(1u << 31u);
    m_ioRegisters[kDStat] = dstat;
    queueCompletedDmacCause(cause);
}

#if defined(PLATFORM_XBOX) && TS_VIF_SELFCHECK
namespace
{
    // The VIF1 chain path before processVIF1Pieces: the pieces copied through
    // a window, processVIF1Data stopping at a command that does not fit.
    void processVif1Window(PS2Memory &memory, const PS2Memory::Vif1Piece *pieces, size_t count)
    {
        std::vector<uint8_t> &window = s_vif1Window;
        if (window.capacity() < kVif1WindowBytes)
            window.reserve(kVif1WindowBytes);
        window.clear();
        size_t segment = 0, offset = 0;
        g_vif1StopOnShort = true;
        for (;;)
        {
            while (window.size() < kVif1WindowBytes && segment < count)
            {
                const auto &piece = pieces[segment];
                const size_t take = std::min<size_t>(piece.second - offset, kVif1WindowBytes - window.size());
                window.insert(window.end(), piece.first + offset, piece.first + offset + take);
                offset += take;
                if (offset == piece.second)
                {
                    ++segment;
                    offset = 0;
                }
            }
            if (window.empty())
                break;
            memory.processVIF1Data(window.data(), static_cast<uint32_t>(window.size()));
            uint32_t consumed = g_vif1LastConsumed;
            if (consumed == 0u)
            {
                // A command bigger than the window, or an incomplete one
                // at the chain's end: processed as a plain buffer.
                g_vif1StopOnShort = false;
                memory.processVIF1Data(window.data(), static_cast<uint32_t>(window.size()));
                g_vif1StopOnShort = true;
                consumed = static_cast<uint32_t>(window.size());
            }
            window.erase(window.begin(), window.begin() + consumed);
        }
        g_vif1StopOnShort = false;
    }

    // FNV-1a over 32-bit words (every GIF packet VIF1 sends is whole quadwords).
    uint32_t hashWords(uint32_t hash, const uint8_t *data, size_t bytes)
    {
        for (size_t i = 0; i + 4u <= bytes; i += 4u)
        {
            uint32_t word;
            std::memcpy(&word, data + i, sizeof(word));
            hash = (hash ^ word) * 16777619u;
        }
        for (size_t i = bytes & ~size_t(3); i < bytes; ++i)
            hash = (hash ^ data[i]) * 16777619u;
        return hash;
    }

    // Before a chain is decoded for real it is decoded twice, by the window
    // path and by processVIF1Pieces, from the same VIF1, VU1-memory and PATH3
    // state, both dry: MSCAL/MSCNT and GIF output are recorded instead of run
    // (VU1 cannot run twice, and its outputs would make the two differ). The
    // record holds, at each MSCAL/MSCNT, its arguments, a hash of VU1 data
    // memory (what VIF1 alone wrote, VU1 not running) and of the GIF bytes so
    // far; at the end, hashes of VU1 data and code memory and the VIF1
    // registers. A chain whose two records differ counts in
    // g_vif1StreamStats.diffs. All state is put back afterwards.
    void vif1SelfCheck(PS2Memory &m, const PS2Memory::Vif1Piece *pieces, size_t count)
    {
        static std::vector<uint8_t> savedData, savedCode;
        const VIFRegisters savedRegs = m.vif1_regs;
        if (m.m_vu1Data)
            savedData.assign(m.m_vu1Data, m.m_vu1Data + PS2_VU1_DATA_SIZE);
        if (m.m_vu1Code)
            savedCode.assign(m.m_vu1Code, m.m_vu1Code + PS2_VU1_CODE_SIZE);
        const uint32_t savedPendingQwc = m.m_vif1PendingPath2ImageQwc;
        const bool savedPendingHl = m.m_vif1PendingPath2DirectHl;
        const bool savedPath3Masked = m.m_path3Masked;
        const std::vector<std::vector<uint8_t>> savedPath3Fifo = m.m_path3MaskedFifo;
        const uint64_t savedCodeGeneration = m.m_vu1CodeGeneration.load(std::memory_order_relaxed);
        const Vif1StreamStats savedStats = g_vif1StreamStats;
        auto restore = [&]()
        {
            m.vif1_regs = savedRegs;
            if (m.m_vu1Data)
                std::memcpy(m.m_vu1Data, savedData.data(), PS2_VU1_DATA_SIZE);
            if (m.m_vu1Code)
                std::memcpy(m.m_vu1Code, savedCode.data(), PS2_VU1_CODE_SIZE);
            m.m_vif1PendingPath2ImageQwc = savedPendingQwc;
            m.m_vif1PendingPath2DirectHl = savedPendingHl;
            m.m_path3Masked = savedPath3Masked;
            m.m_path3MaskedFifo = savedPath3Fifo;
            m.m_vu1CodeGeneration.store(savedCodeGeneration, std::memory_order_relaxed);
        };

        PS2Memory::Vu1MscalCallback mscal = std::move(m.m_vu1MscalCallback);
        PS2Memory::Vu1MscntCallback mscnt = std::move(m.m_vu1MscntCallback);
        PS2Memory::GifPacketCallback gifCallback = std::move(m.m_gifPacketCallback);
        GifArbiter *const arbiter = m.m_gifArbiter;
        m.m_gifArbiter = nullptr; // GIF output reaches m_gifPacketCallback

        constexpr uint32_t kFnvBasis = 2166136261u;
        std::vector<uint32_t> records[2];
        std::vector<uint32_t> *record = nullptr;
        uint32_t gifHash = kFnvBasis, gifBytes = 0;
        auto dataHash = [&]() { return m.m_vu1Data ? hashWords(kFnvBasis, m.m_vu1Data, PS2_VU1_DATA_SIZE) : 0u; };
        m.m_vu1MscalCallback = [&](uint32_t startPC, uint32_t top, uint32_t itop)
        { record->insert(record->end(), {1u, startPC, top, itop, dataHash(), gifHash, gifBytes}); };
        m.m_vu1MscntCallback = [&](uint32_t top, uint32_t itop)
        { record->insert(record->end(), {2u, top, itop, dataHash(), gifHash, gifBytes}); };
        m.m_gifPacketCallback = [&](const uint8_t *data, uint32_t bytes)
        {
            gifHash = hashWords(gifHash, data, bytes);
            gifBytes += bytes;
        };

        for (int run = 0; run < 2; ++run)
        {
            restore();
            record = &records[run];
            gifHash = kFnvBasis;
            gifBytes = 0;
            if (run == 0)
                processVif1Window(m, pieces, count);
            else
                m.processVIF1Pieces(pieces, count);
            record->insert(record->end(),
                           {3u, dataHash(), m.m_vu1Code ? hashWords(kFnvBasis, m.m_vu1Code, PS2_VU1_CODE_SIZE) : 0u,
                            hashWords(kFnvBasis, reinterpret_cast<const uint8_t *>(&m.vif1_regs), sizeof(VIFRegisters)),
                            gifHash, gifBytes, m.m_vif1PendingPath2ImageQwc, m.m_vif1PendingPath2DirectHl ? 1u : 0u,
                            m.m_path3Masked ? 1u : 0u});
        }

        restore();
        m.m_vu1MscalCallback = std::move(mscal);
        m.m_vu1MscntCallback = std::move(mscnt);
        m.m_gifPacketCallback = std::move(gifCallback);
        m.m_gifArbiter = arbiter;
        g_vif1StreamStats = savedStats;
        ++g_vif1StreamStats.checked;
        if (records[0] != records[1])
        {
            ++g_vif1StreamStats.diffs;
            if (g_vif1StreamStats.diffs <= 8u)
            {
                size_t at = 0;
                while (at < records[0].size() && at < records[1].size() && records[0][at] == records[1][at])
                    ++at;
                RUNTIME_LOG("[VIF:selfcheck] chain " << g_vif1StreamStats.checked << " (" << count
                    << " pieces) differs at record word " << at << " of " << records[0].size() << "/"
                    << records[1].size() << ": window 0x" << std::hex
                    << (at < records[0].size() ? records[0][at] : 0u) << ", in place 0x"
                    << (at < records[1].size() ? records[1][at] : 0u) << std::dec << '\n');
            }
        }
    }
}
#endif

void PS2Memory::processPendingTransfers()
{
    if (!onVif1Worker())
    {
        if (m_pendingGifTransfers.empty() && m_pendingVif0Transfers.empty() && m_pendingVif1Transfers.empty() &&
            m_vif1Busy.load(std::memory_order_acquire))
            return; // nothing new; leave the asynchronous VIF1 transfer running
        if (m_vif1Busy.load(std::memory_order_acquire))
            waitVif1Idle();
        if (m_pendingGifTransfers.empty() && m_pendingVif0Transfers.empty() && !m_pendingVif1Transfers.empty() &&
            startVif1Async())
            return;
    }
    const bool hadGif = !m_pendingGifTransfers.empty();
    uint32_t observedGifQwc = 0u;
    for (const auto &transfer : m_pendingGifTransfers)
    {
        const uint64_t transferQwc = !transfer.chainData.empty()
                                         ? (transfer.chainData.size() / 16u)
                                         : transfer.qwc;
        observedGifQwc = static_cast<uint32_t>(std::min<uint64_t>(16u, static_cast<uint64_t>(observedGifQwc) + transferQwc));
    }
    if (observedGifQwc != 0u)
    {
        constexpr uint32_t kGifStat = 0x10003020u;
        constexpr uint32_t kGifFqcMask = 0x1F000000u;
        uint32_t &gifStat = m_ioRegisters[kGifStat];
        gifStat = (gifStat & ~kGifFqcMask) | (observedGifQwc << 24u);
    }

    for (size_t idx = 0; idx < m_pendingGifTransfers.size(); ++idx)
    {
        auto &p = m_pendingGifTransfers[idx];
        if (!p.chainData.empty())
        {
            m_seenGifCopy = true;
            m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
            submitGifPacket(GifPathId::Path3, p.chainData.data(), static_cast<uint32_t>(p.chainData.size()), false);
            recycleChainBuffer(p.chainData);
        }
        else if (p.qwc > 0)
        {
            const uint64_t bytes64 = static_cast<uint64_t>(p.qwc) * 16ull;
            uint32_t sizeBytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
            uint32_t srcPhys = 0;
            PS2X_TRY
            {
                srcPhys = translateAddress(p.srcAddr);
            }
            PS2X_CATCH_TYPE(const std::exception &)
            {
                continue;
            }
            if (p.fromScratchpad)
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft >= 16)
                {
                    if (srcPhys >= PS2_SCRATCHPAD_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_SCRATCHPAD_SIZE)
                        chunk = PS2_SCRATCHPAD_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    m_seenGifCopy = true;
                    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
                    submitGifPacket(GifPathId::Path3, m_scratchpad + srcPhys, chunk, false);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
            else
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft >= 16)
                {
                    if (srcPhys >= PS2_RAM_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_RAM_SIZE)
                        chunk = PS2_RAM_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    m_seenGifCopy = true;
                    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
                    submitGifPacket(GifPathId::Path3, m_rdram + srcPhys, chunk, false);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
        }
    }
    m_pendingGifTransfers.clear();

    const bool hadVif0 = !m_pendingVif0Transfers.empty();
    for (auto &p : m_pendingVif0Transfers)
    {
        if (!p.chainData.empty())
        {
            processVIF0Data(p.chainData.data(), static_cast<uint32_t>(p.chainData.size()));
        }
        else if (p.qwc > 0)
        {
            uint32_t srcPhys = 0;
            const uint64_t bytes64 = static_cast<uint64_t>(p.qwc) * 16ull;
            uint32_t sizeBytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
            PS2X_TRY
            {
                srcPhys = translateAddress(p.srcAddr);
            }
            PS2X_CATCH_TYPE(const std::exception &)
            {
                continue;
            }
            if (p.fromScratchpad)
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft > 0)
                {
                    if (srcPhys >= PS2_SCRATCHPAD_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_SCRATCHPAD_SIZE)
                        chunk = PS2_SCRATCHPAD_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    processVIF0Data(m_scratchpad + srcPhys, chunk);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
            else
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft > 0)
                {
                    if (srcPhys >= PS2_RAM_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_RAM_SIZE)
                        chunk = PS2_RAM_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    processVIF0Data(srcPhys, chunk);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
        }
    }
    m_pendingVif0Transfers.clear();

    const bool hadVif1 = !m_pendingVif1Transfers.empty();
#if defined(PLATFORM_XBOX)
    size_t segmentStart = 0; // the pieces of the chains before this one
#endif
    for (auto &p : m_pendingVif1Transfers)
    {
#if defined(PLATFORM_XBOX)
        if (p.qwc == kSegmentedChain)
        {
            const Vif1Piece *pieces = s_vif1Segments.data() + segmentStart;
            const size_t count = p.srcAddr - segmentStart;
            segmentStart = p.srcAddr;
#if TS_VIF_SELFCHECK
            if (g_vif1StreamStats.checked < TS_VIF_SELFCHECK_CHAINS)
                vif1SelfCheck(*this, pieces, count);
#endif
            processVIF1Pieces(pieces, count);
            continue;
        }
#endif
        if (!p.chainData.empty())
        {
            processVIF1Data(p.chainData.data(), static_cast<uint32_t>(p.chainData.size()));
            recycleChainBuffer(p.chainData);
        }
        else if (p.qwc > 0)
        {
            uint32_t srcPhys = 0;
            const uint64_t bytes64 = static_cast<uint64_t>(p.qwc) * 16ull;
            uint32_t sizeBytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
            PS2X_TRY
            {
                srcPhys = translateAddress(p.srcAddr);
            }
            PS2X_CATCH_TYPE(const std::exception &)
            {
                continue;
            }
            if (p.fromScratchpad)
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft > 0)
                {
                    if (srcPhys >= PS2_SCRATCHPAD_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_SCRATCHPAD_SIZE)
                        chunk = PS2_SCRATCHPAD_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    processVIF1Data(m_scratchpad + srcPhys, chunk);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
            else
            {
                uint32_t bytesLeft = sizeBytes;
                while (bytesLeft > 0)
                {
                    if (srcPhys >= PS2_RAM_SIZE)
                        srcPhys = 0;
                    uint32_t chunk = bytesLeft;
                    if (srcPhys + chunk > PS2_RAM_SIZE)
                        chunk = PS2_RAM_SIZE - srcPhys;
                    if (chunk == 0)
                        break;
                    processVIF1Data(srcPhys, chunk);
                    bytesLeft -= chunk;
                    srcPhys += chunk;
                }
            }
        }
    }
#if defined(PLATFORM_XBOX)
    s_vif1Segments.clear();
#endif
    m_pendingVif1Transfers.clear();

    if (m_gifArbiter)
        m_gifArbiter->drain();

    static constexpr uint32_t GIF_CHANNEL = 0x1000A000;
    static constexpr uint32_t VIF0_CHANNEL = 0x10008000;
    static constexpr uint32_t VIF1_CHANNEL = 0x10009000;
    static constexpr uint32_t D_STAT = 0x1000E010u;

    auto raiseDStatChannel = [&](uint32_t channelBit)
    {
        uint32_t dstat = m_ioRegisters.count(D_STAT) ? m_ioRegisters[D_STAT] : 0u;
        dstat |= (1u << channelBit);

        const uint32_t status = dstat & 0x3FFu;
        const uint32_t mask = (dstat >> 16) & 0x3FFu;
        if ((status & mask) != 0u)
            dstat |= (1u << 31);
        else
            dstat &= ~(1u << 31);

        m_ioRegisters[D_STAT] = dstat;
    };

    if (hadGif)
    {
        raiseDStatChannel(2u); // GIF channel
        queueCompletedDmacCause(2u);
        m_ioRegisters[GIF_CHANNEL + 0x00] &= ~0x100u;
        m_ioRegisters[GIF_CHANNEL + 0x20] = 0;
    }
    if (hadVif0)
    {
        raiseDStatChannel(0u); // VIF0 channel
        queueCompletedDmacCause(0u);
        m_ioRegisters[VIF0_CHANNEL + 0x00] &= ~0x100u;
        m_ioRegisters[VIF0_CHANNEL + 0x20] = 0;
    }
    if (hadVif1)
    {
        raiseDStatChannel(1u); // VIF1 channel
        queueCompletedDmacCause(1u);
        m_ioRegisters[VIF1_CHANNEL + 0x00] &= ~0x100u;
        m_ioRegisters[VIF1_CHANNEL + 0x20] = 0;
    }
}

namespace
{
    thread_local bool t_onVif1Worker = false;
}

bool PS2Memory::onVif1Worker()
{
    return t_onVif1Worker;
}

bool PS2Memory::startVif1Async()
{
    if (m_vif1AsyncMode < 0)
    {
#if defined(PLATFORM_XBOX)
        m_vif1AsyncMode = 0; // one core: a worker thread only costs memory
#else
        const char *mode = std::getenv("TS_VIF1_ASYNC");
        m_vif1AsyncMode = (mode && *mode == '0') ? 0 : 1;
#endif
    }
    if (m_vif1AsyncMode == 0)
        return false;

    // Own every byte: chains were gathered at kick time; normal transfers
    // are copied now, so the EE may reuse its buffers straight away.
    std::vector<std::vector<uint8_t>> job;
    size_t total = 0;
    for (auto &p : m_pendingVif1Transfers)
    {
        if (!p.chainData.empty())
        {
            total += p.chainData.size();
            job.push_back(std::move(p.chainData));
            continue;
        }
        if (p.qwc == 0)
            continue;
        uint32_t srcPhys = 0;
        PS2X_TRY
        {
            srcPhys = translateAddress(p.srcAddr);
        }
        PS2X_CATCH_TYPE(const std::exception &)
        {
            continue;
        }
        const uint8_t *base = p.fromScratchpad ? m_scratchpad : m_rdram;
        const uint32_t limit = p.fromScratchpad ? PS2_SCRATCHPAD_SIZE : PS2_RAM_SIZE;
        uint64_t bytesLeft = static_cast<uint64_t>(p.qwc) * 16ull;
        std::vector<uint8_t> bytes;
        bytes.reserve(static_cast<size_t>(bytesLeft));
        while (bytesLeft > 0)
        {
            if (srcPhys >= limit)
                srcPhys = 0;
            const uint32_t chunk = static_cast<uint32_t>(std::min<uint64_t>(bytesLeft, limit - srcPhys));
            bytes.insert(bytes.end(), base + srcPhys, base + srcPhys + chunk);
            bytesLeft -= chunk;
            srcPhys += chunk;
        }
        total += bytes.size();
        job.push_back(std::move(bytes));
    }
    // Small transfers (register setup before a readback, say) are cheaper
    // inline than a thread round trip; the EE usually waits on them at once.
    if (total < 4096u)
    {
        for (auto &p : m_pendingVif1Transfers)
            p.qwc = 0; // consumed below
        m_pendingVif1Transfers.clear();
        for (auto &bytes : job)
        {
            PendingTransfer pt{};
            pt.chainData = std::move(bytes);
            m_pendingVif1Transfers.push_back(std::move(pt));
        }
        return false;
    }
    m_pendingVif1Transfers.clear();

    if (m_vif1StartCallback)
        m_vif1StartCallback();
    {
        std::lock_guard<std::mutex> lock(m_vif1Mutex);
        if (!m_vif1Thread.joinable())
        {
            m_vif1Thread = std::thread([this] { vif1WorkerLoop(); });
            // TS_SAMPLE_PROFILE_VIF1=1: profile this worker instead of the EE.
            if (const char *v = std::getenv("TS_SAMPLE_PROFILE_VIF1"); v && *v == '1')
                ps2_sample_profiler::start(m_vif1Thread);
        }
        m_vif1Job = std::move(job);
        m_vif1HasJob = true;
        m_vif1Done.store(false, std::memory_order_release);
        m_vif1Busy.store(true, std::memory_order_release);
    }
    m_vif1Cv.notify_all();
    return true;
}

void PS2Memory::vif1WorkerLoop()
{
    t_onVif1Worker = true;
    for (;;)
    {
        std::vector<std::vector<uint8_t>> job;
        {
            std::unique_lock<std::mutex> lock(m_vif1Mutex);
            m_vif1Cv.wait(lock, [&] { return m_vif1Stop || m_vif1HasJob; });
            if (!m_vif1HasJob)
                return;
            job = std::move(m_vif1Job);
            m_vif1HasJob = false;
        }
        for (const auto &bytes : job)
            processVIF1Data(bytes.data(), static_cast<uint32_t>(bytes.size()));
        gsStageWaitEmpty();
        if (m_gifArbiter)
            m_gifArbiter->drain();
        {
            std::lock_guard<std::mutex> lock(m_vif1Mutex);
            m_vif1Done.store(true, std::memory_order_release);
        }
        m_vif1Cv.notify_all();
        if (m_vif1DoneCallback)
            m_vif1DoneCallback();
    }
}

void PS2Memory::waitVif1Idle()
{
    if (!m_vif1Busy.load(std::memory_order_acquire) || onVif1Worker())
        return;
    {
        std::unique_lock<std::mutex> lock(m_vif1Mutex);
        m_vif1Cv.wait(lock, [&] { return m_vif1Done.load(std::memory_order_acquire); });
    }
    completeVif1Async();
}

bool PS2Memory::completeVif1Async()
{
    {
        std::lock_guard<std::mutex> lock(m_vif1Mutex);
        if (!m_vif1Busy.load(std::memory_order_acquire) || !m_vif1Done.load(std::memory_order_acquire))
            return false;
        m_vif1Busy.store(false, std::memory_order_release);
    }
    constexpr uint32_t VIF1_CHANNEL = 0x10009000u;
    constexpr uint32_t D_STAT = 0x1000E010u;
    uint32_t dstat = m_ioRegisters.count(D_STAT) ? m_ioRegisters[D_STAT] : 0u;
    dstat |= 1u << 1;
    if (((dstat & 0x3FFu) & ((dstat >> 16) & 0x3FFu)) != 0u)
        dstat |= 1u << 31;
    else
        dstat &= ~(1u << 31);
    m_ioRegisters[D_STAT] = dstat;
    queueCompletedDmacCause(1u);
    m_ioRegisters[VIF1_CHANNEL + 0x00] &= ~0x100u;
    m_ioRegisters[VIF1_CHANNEL + 0x20] = 0;
    return true;
}

bool PS2Memory::gsStageSubmit(GifPathId path, const uint8_t *data, uint32_t sizeBytes)
{
    if (m_gsStageMode < 0)
    {
#if defined(PLATFORM_XBOX)
        m_gsStageMode = 0; // one core: a worker thread only costs memory
#else
        const char *mode = std::getenv("TS_GS_STAGE");
        m_gsStageMode = (mode && *mode == '0') ? 0 : 1;
#endif
    }
    if (m_gsStageMode == 0)
        return false;
    bool notify;
    {
        std::lock_guard<std::mutex> lock(m_gsStageMutex);
        if (!m_gsStageThread.joinable())
            m_gsStageThread = std::thread([this] { gsStageLoop(); });
        GsStagePacket packet{path, {}};
        if (!m_gsStageFree.empty())
        {
            packet.data = std::move(m_gsStageFree.back());
            m_gsStageFree.pop_back();
        }
        packet.data.assign(data, data + sizeBytes);
        m_gsStageQueue.push_back(std::move(packet));
        ++m_gsStageSubmitted;
        m_gsStageQueued.store(m_gsStageQueue.size(), std::memory_order_relaxed);
        notify = m_gsStageSleeping;
    }
    if (notify)
        m_gsStageWake.notify_one();
    return true;
}

void PS2Memory::gsStageWaitEmpty()
{
    std::unique_lock<std::mutex> lock(m_gsStageMutex);
    if (m_gsStageCompleted == m_gsStageSubmitted)
        return;
    const uint64_t target = m_gsStageSubmitted;
    if (m_gsStageSleeping)
        m_gsStageWake.notify_one();
    m_gsStageWaiting = true;
    m_gsStageIdle.wait(lock, [&] { return m_gsStageCompleted >= target; });
    m_gsStageWaiting = false;
}

void PS2Memory::gsStageLoop()
{
    t_onVif1Worker = true; // part of the VIF1 pipeline: never waits for it
    for (;;)
    {
        for (unsigned spin = 0; spin < 2048 && m_gsStageQueued.load(std::memory_order_relaxed) == 0u; ++spin)
            _mm_pause();
        {
            std::unique_lock<std::mutex> lock(m_gsStageMutex);
            for (auto &packet : m_gsStageWork)
                m_gsStageFree.push_back(std::move(packet.data));
            m_gsStageWork.clear();
            if (m_gsStageQueue.empty() && !m_gsStageStop)
            {
                m_gsStageSleeping = true;
                m_gsStageWake.wait(lock, [&] { return m_gsStageStop || !m_gsStageQueue.empty(); });
                m_gsStageSleeping = false;
            }
            if (m_gsStageQueue.empty())
                return; // stopping
            m_gsStageWork.swap(m_gsStageQueue);
            m_gsStageQueued.store(0, std::memory_order_relaxed);
        }
        for (const auto &packet : m_gsStageWork)
            m_gifArbiter->processDirect(packet.path, packet.data.data(), static_cast<uint32_t>(packet.data.size()));
        bool notify;
        {
            std::lock_guard<std::mutex> lock(m_gsStageMutex);
            m_gsStageCompleted += m_gsStageWork.size();
            notify = m_gsStageWaiting;
        }
        if (notify)
            m_gsStageIdle.notify_all();
    }
}

void PS2Memory::stopVif1Worker()
{
    {
        std::lock_guard<std::mutex> lock(m_gsStageMutex);
        m_gsStageStop = true;
    }
    m_gsStageWake.notify_all();
    if (m_gsStageThread.joinable())
        m_gsStageThread.join();
    {
        std::lock_guard<std::mutex> lock(m_vif1Mutex);
        m_vif1Stop = true;
    }
    m_vif1Cv.notify_all();
    if (m_vif1Thread.joinable())
        m_vif1Thread.join();
}

void PS2Memory::queueCompletedDmacCause(uint32_t cause)
{
    std::lock_guard<std::mutex> lock(m_completedDmacMutex);
    m_completedDmacCauses.push_back(cause);
#if defined(PLATFORM_XBOX)
    m_completedDmacPending.store(true, std::memory_order_release);
#endif
}

std::vector<uint32_t> PS2Memory::consumeCompletedDmacCauses()
{
    std::lock_guard<std::mutex> lock(m_completedDmacMutex);
    std::vector<uint32_t> causes;
    causes.swap(m_completedDmacCauses);
#if defined(PLATFORM_XBOX)
    m_completedDmacPending.store(false, std::memory_order_release);
#endif
    return causes;
}

void PS2Memory::flushMaskedPath3Packets(bool drainImmediately)
{
    if (m_path3Masked || m_path3MaskedFifo.empty())
        return;

    auto emit = [&](const uint8_t *packetData, uint32_t packetSize)
    {
        if (m_gifArbiter)
            m_gifArbiter->submit(GifPathId::Path3, packetData, packetSize, false);
        else if (m_gifPacketCallback)
            m_gifPacketCallback(packetData, packetSize);
    };

    for (const auto &packet : m_path3MaskedFifo)
    {
        if (packet.size() >= 16u)
            emit(packet.data(), static_cast<uint32_t>(packet.size()));
    }
    m_path3MaskedFifo.clear();

    if (m_gifArbiter && drainImmediately)
        m_gifArbiter->drain();
}

void PS2Memory::submitGifPacket(GifPathId pathId, const uint8_t *data, uint32_t sizeBytes, bool drainImmediately, bool path2DirectHl)
{
    if (!data || sizeBytes < 16)
        return;

    if (pathId == GifPathId::Path3)
    {
        if (m_path3Masked)
        {
            m_path3MaskedFifo.emplace_back(data, data + sizeBytes);
            return;
        }
        flushMaskedPath3Packets(false);
    }

    if (onVif1Worker() && m_gifArbiter && drainImmediately && m_gifArbiter->empty() &&
        gsStageSubmit(pathId, data, sizeBytes))
        return;
    if (onVif1Worker())
        gsStageWaitEmpty(); // the arbiter/GS are used directly below
    if (m_gifArbiter && drainImmediately && m_gifArbiter->empty())
    {
        // A lone packet has nothing to be ordered against: skip the copy.
        m_gifArbiter->processDirect(pathId, data, sizeBytes);
        return;
    }
    if (m_gifArbiter)
        m_gifArbiter->submit(pathId, data, sizeBytes, path2DirectHl);
    else if (m_gifPacketCallback)
        m_gifPacketCallback(data, sizeBytes);

    if (m_gifArbiter && drainImmediately)
        m_gifArbiter->drain();
}

void PS2Memory::processGIFPacket(uint32_t srcPhysAddr, uint32_t qwCount)
{
    if (!m_rdram || qwCount == 0)
        return;
    const uint64_t bytes64 = static_cast<uint64_t>(qwCount) * 16ull;
    uint32_t sizeBytes = (bytes64 > 0xFFFFFFFFull) ? 0xFFFFFFFFu : static_cast<uint32_t>(bytes64);
    uint32_t bytesLeft = sizeBytes;
    while (bytesLeft >= 16)
    {
        if (srcPhysAddr >= PS2_RAM_SIZE)
            srcPhysAddr = 0;
        uint32_t chunk = bytesLeft;
        if (srcPhysAddr + chunk > PS2_RAM_SIZE)
            chunk = PS2_RAM_SIZE - srcPhysAddr;
        if (chunk == 0)
            break;

        m_seenGifCopy = true;
        m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
        submitGifPacket(GifPathId::Path3, m_rdram + srcPhysAddr, chunk);

        bytesLeft -= chunk;
        srcPhysAddr += chunk;
    }
}

void PS2Memory::processGIFPacket(const uint8_t *data, uint32_t sizeBytes)
{
    if (m_gifArbiter)
        submitGifPacket(GifPathId::Path3, data, sizeBytes);
    else if (m_gifPacketCallback && data && sizeBytes >= 16)
        m_gifPacketCallback(data, sizeBytes);
}

bool PS2Memory::tryProcessNativeGifImageUploadChain(GS &gs, uint32_t tadr, uint32_t chcr)
{
    static constexpr uint32_t GIF_CHANNEL = 0x1000A000u;
    static constexpr uint32_t D_STAT = 0x1000E010u;
    static constexpr uint32_t D_CTRL = 0x1000E000u;

    if (!m_rdram || !m_gsVRAM || m_path3Masked)
        return false;
    if (m_gifArbiter && !m_gifArbiter->empty())
        return false;
    if ((chcr & 0x100u) == 0u || ((chcr >> 2u) & 0x3u) != 1u)
        return false;
    if ((chcr & (1u << 7u)) != 0u || ((chcr >> 4u) & 0x3u) != 0u)
        return false;

    const auto dctrlIt = m_ioRegisters.find(D_CTRL);
    if (dctrlIt != m_ioRegisters.end() && ((dctrlIt->second & 0x1u) == 0u))
        return false;

    auto resolveContiguous = [&](uint32_t guestAddr, uint32_t bytes, const uint8_t *&out) -> bool
    {
        PS2X_TRY
        {
            const bool scratch = isScratchpad(guestAddr);
            const uint32_t phys = translateAddress(guestAddr);
            const uint8_t *base = scratch ? m_scratchpad : m_rdram;
            const uint32_t limit = scratch ? PS2_SCRATCHPAD_SIZE : PS2_RAM_SIZE;
            if (!base || phys > limit || bytes > limit - phys)
                return false;
            out = base + phys;
            return true;
        }
        PS2X_CATCH_TYPE(const std::exception &)
        {
            return false;
        }
    };

    auto loadDmaTagAt = [&](uint32_t guestAddr, DmaTagView &out) -> bool
    {
        const uint8_t *ptr = nullptr;
        if (!resolveContiguous(guestAddr, 16u, ptr))
            return false;
        out = decodeDmaTag(loadScalar<uint64_t>(ptr, 0u, 16u, "native gif dma tag", guestAddr));
        return true;
    };

    auto decodeSetupPayload = [&](const uint8_t *payload, uint64_t (&regs)[4]) -> bool
    {
        const uint64_t tagLo = loadScalar<uint64_t>(payload, 0u, 80u, "native gif setup tag", 0u);
        const uint64_t tagHi = loadScalar<uint64_t>(payload, 8u, 80u, "native gif setup regs", 0u);
        if (gifTagNloop(tagLo) != 4u ||
            gifTagFlg(tagLo) != GIF_FMT_PACKED ||
            gifTagNreg(tagLo) != 1u ||
            (tagHi & 0xFull) != 0x0Eull)
        {
            return false;
        }

        static constexpr uint8_t kExpectedRegs[4] = {
            GS_REG_BITBLTBUF,
            GS_REG_TRXPOS,
            GS_REG_TRXREG,
            GS_REG_TRXDIR,
        };

        uint32_t offset = 16u;
        for (uint32_t i = 0; i < 4u; ++i)
        {
            regs[i] = loadScalar<uint64_t>(payload, offset, 80u, "native gif setup value", 0u);
            const uint64_t reg = loadScalar<uint64_t>(payload, offset + 8u, 80u, "native gif setup register", 0u);
            if ((reg & 0xFFu) != kExpectedRegs[i])
                return false;
            offset += 16u;
        }

        const uint32_t trxdirMode = static_cast<uint32_t>(regs[3] & 0x3ull);
        const uint32_t rrw = static_cast<uint32_t>(regs[2] & 0xFFFull);
        const uint32_t rrh = static_cast<uint32_t>((regs[2] >> 32u) & 0xFFFull);
        return trxdirMode == 0u && rrw != 0u && rrh != 0u;
    };

    DmaTagView setupTag{};
    if (!loadDmaTagAt(tadr, setupTag) ||
        setupTag.id != 1u ||
        setupTag.qwc != 5u ||
        setupTag.irq)
    {
        return false;
    }

    const uint8_t *setupPayload = nullptr;
    const uint32_t setupPayloadAddr = tadr + 16u;
    if (!resolveContiguous(setupPayloadAddr, 5u * 16u, setupPayload))
        return false;

    uint64_t setupRegs[4] = {};
    if (!decodeSetupPayload(setupPayload, setupRegs))
        return false;

    uint32_t imageTagDmaAddr = setupPayloadAddr + 5u * 16u;
    DmaTagView imageTagDma{};
    if (!loadDmaTagAt(imageTagDmaAddr, imageTagDma) ||
        imageTagDma.id != 1u ||
        imageTagDma.qwc != 1u ||
        imageTagDma.irq)
    {
        return false;
    }

    const uint8_t *imageGifTag = nullptr;
    if (!resolveContiguous(imageTagDmaAddr + 16u, 16u, imageGifTag))
        return false;

    const uint64_t imageTagLo = loadScalar<uint64_t>(imageGifTag, 0u, 16u, "native gif image tag", imageTagDmaAddr + 16u);
    if (gifTagFlg(imageTagLo) != GIF_FMT_IMAGE)
        return false;

    const uint32_t imageQwc = gifTagNloop(imageTagLo);
    if (imageQwc == 0u)
        return false;

    const uint64_t imageBytes64 = static_cast<uint64_t>(imageQwc) * 16ull;
    if (imageBytes64 > 0xFFFFFFFFull)
        return false;
    const uint32_t imageBytes = static_cast<uint32_t>(imageBytes64);

    const uint32_t payloadTagAddr = imageTagDmaAddr + 32u;
    DmaTagView payloadTag{};
    if (!loadDmaTagAt(payloadTagAddr, payloadTag) ||
        payloadTag.qwc != imageQwc ||
        payloadTag.irq)
    {
        return false;
    }

    uint32_t imageDataAddr = 0u;
    uint32_t finalTadr = payloadTagAddr;
    uint32_t lastTagUpper = payloadTag.upper;
    if (payloadTag.id == 3u || payloadTag.id == 4u)
    {
        imageDataAddr = payloadTag.addr;
        const uint32_t terminalTagAddr = payloadTagAddr + 16u;
        DmaTagView terminalTag{};
        if (!loadDmaTagAt(terminalTagAddr, terminalTag) ||
            terminalTag.qwc != 0u ||
            terminalTag.irq ||
            (terminalTag.id != 0u && terminalTag.id != 7u))
        {
            return false;
        }
        finalTadr = (terminalTag.id == 0u) ? (terminalTagAddr + 16u) : terminalTagAddr;
        lastTagUpper = terminalTag.upper;
    }
    else if (payloadTag.id == 7u)
    {
        imageDataAddr = payloadTagAddr + 16u;
        finalTadr = payloadTagAddr;
    }
    else
    {
        return false;
    }

    const uint8_t *imageData = nullptr;
    if (!resolveContiguous(imageDataAddr, imageBytes, imageData))
        return false;

    m_dmaStartCount.fetch_add(1, std::memory_order_relaxed);
    m_seenGifCopy = true;
    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);
    gs.uploadImageNative(setupRegs[0], setupRegs[1], setupRegs[2], setupRegs[3], imageData, imageBytes);

    m_ioRegisters[GIF_CHANNEL + 0x30u] = finalTadr;
    m_ioRegisters[GIF_CHANNEL + 0x40u] = 0u;
    m_ioRegisters[GIF_CHANNEL + 0x50u] = 0u;
    m_ioRegisters[GIF_CHANNEL + 0x00u] = ((chcr & 0x0000FFFFu) | (lastTagUpper << 16u)) & ~0x100u;
    m_ioRegisters[GIF_CHANNEL + 0x20u] = 0u;

    uint32_t dstat = m_ioRegisters.count(D_STAT) ? m_ioRegisters[D_STAT] : 0u;
    dstat |= (1u << 2u);
    const uint32_t status = dstat & 0x3FFu;
    const uint32_t mask = (dstat >> 16u) & 0x3FFu;
    if ((status & mask) != 0u)
        dstat |= (1u << 31u);
    else
        dstat &= ~(1u << 31u);
    m_ioRegisters[D_STAT] = dstat;
    queueCompletedDmacCause(2u);
    return true;
}

bool PS2Memory::tryProcessNativeGifPackedChain(GS &gs, uint32_t tadr, uint32_t chcr)
{
    static constexpr uint32_t GIF_CHANNEL = 0x1000A000u;
    static constexpr uint32_t D_STAT = 0x1000E010u;
    static constexpr uint32_t D_CTRL = 0x1000E000u;

    if (!m_rdram || !m_gsVRAM || m_path3Masked)
        return false;
    if (m_gifArbiter && !m_gifArbiter->empty())
        return false;
    if ((chcr & 0x100u) == 0u || ((chcr >> 2u) & 0x3u) != 1u)
        return false;
    if ((chcr & (1u << 7u)) != 0u || ((chcr >> 4u) & 0x3u) != 0u)
        return false;

    const auto dctrlIt = m_ioRegisters.find(D_CTRL);
    if (dctrlIt != m_ioRegisters.end() && ((dctrlIt->second & 0x1u) == 0u))
        return false;

    auto resolveContiguous = [&](uint32_t guestAddr, uint32_t bytes, const uint8_t *&out) -> bool
    {
        PS2X_TRY
        {
            const bool scratch = isScratchpad(guestAddr);
            const uint32_t phys = translateAddress(guestAddr);
            const uint8_t *base = scratch ? m_scratchpad : m_rdram;
            const uint32_t limit = scratch ? PS2_SCRATCHPAD_SIZE : PS2_RAM_SIZE;
            if (!base || phys > limit || bytes > limit - phys)
                return false;
            out = base + phys;
            return true;
        }
        PS2X_CATCH_TYPE(const std::exception &)
        {
            return false;
        }
    };

    const uint8_t *tagPtr = nullptr;
    if (!resolveContiguous(tadr, 16u, tagPtr))
        return false;

    const DmaTagView tag = decodeDmaTag(loadScalar<uint64_t>(tagPtr, 0u, 16u, "native packed gif dma tag", tadr));
    if (tag.id != 7u || tag.qwc == 0u || tag.irq)
        return false;

    const uint64_t payloadBytes64 = static_cast<uint64_t>(tag.qwc) * 16ull;
    if (payloadBytes64 > 0xFFFFFFFFull)
        return false;
    const uint32_t payloadBytes = static_cast<uint32_t>(payloadBytes64);

    const uint8_t *payload = nullptr;
    if (!resolveContiguous(tadr + 16u, payloadBytes, payload))
        return false;
    if (!gs.processNativePackedGIFPacket(payload, payloadBytes))
        return false;

    m_dmaStartCount.fetch_add(1, std::memory_order_relaxed);
    m_seenGifCopy = true;
    m_gifCopyCount.fetch_add(1, std::memory_order_relaxed);

    m_ioRegisters[GIF_CHANNEL + 0x30u] = tadr;
    m_ioRegisters[GIF_CHANNEL + 0x40u] = 0u;
    m_ioRegisters[GIF_CHANNEL + 0x50u] = 0u;
    m_ioRegisters[GIF_CHANNEL + 0x00u] = ((chcr & 0x0000FFFFu) | (tag.upper << 16u)) & ~0x100u;
    m_ioRegisters[GIF_CHANNEL + 0x20u] = 0u;

    uint32_t dstat = m_ioRegisters.count(D_STAT) ? m_ioRegisters[D_STAT] : 0u;
    dstat |= (1u << 2u);
    const uint32_t status = dstat & 0x3FFu;
    const uint32_t mask = (dstat >> 16u) & 0x3FFu;
    if ((status & mask) != 0u)
        dstat |= (1u << 31u);
    else
        dstat &= ~(1u << 31u);
    m_ioRegisters[D_STAT] = dstat;
    queueCompletedDmacCause(2u);
    return true;
}

int PS2Memory::pollDmaRegisters()
{
    return 0;
}

uint32_t PS2Memory::readIORegister(uint32_t address)
{
    syncVif1ForAddress(address);
    size_t timerIndex = 0u;
    uint32_t timerOffset = 0u;
    if (decodeEeTimerRegister(address, timerIndex, timerOffset))
    {
        const EeTimer &timer = m_eeTimers[timerIndex];
        switch (timerOffset)
        {
        case kEeTimerCountOffset:
            return timer.count & 0xFFFFu;
        case kEeTimerModeOffset:
            return timer.mode & (kEeTimerModeConfigMask | kEeTimerModeStatusMask);
        case kEeTimerCompareOffset:
            return timer.compare & 0xFFFFu;
        case kEeTimerHoldOffset:
            return timer.hold & 0xFFFFu;
        default:
            return 0u;
        }
    }

    if (isGsPrivReg(address))
    {
        // NB: unreachable from read8/16/32/64 today, same reasoning as the write
        // path above; kept correct for direct callers.
        const uint32_t off = address & 7u;
        const uint32_t regOff = (address - PS2_GS_PRIV_REG_BASE) & ~0x7u;
        if (regOff == kGsCsrRegOffset)
        {
            return static_cast<uint32_t>((gs_regs.csr.load() >> (off * 8u)) & 0xFFFFFFFFull);
        }
        if (uint64_t *reg = gsRegPtr(gs_regs, address))
        {
            return static_cast<uint32_t>((*reg >> (off * 8u)) & 0xFFFFFFFFull);
        }
        return 0u;
    }

    if (address >= 0x10002000 && address <= 0x10002030)
    {
        uint32_t val = 0;
        switch (address)
        {
        case 0x10002000:
            val = m_ioRegisters[address];
            break;
        case 0x10002010:
            val = m_ioRegisters[address] & ~(1u << 31);
            break;
        case 0x10002020:
        case 0x10002030:
            val = m_ioRegisters[address];
            break;
        default:
            val = 0;
            break;
        }
        return val;
    }

    if (address == 0x10003020u) // GIF_STAT
    {
        uint32_t stat = m_ioRegisters.count(address) ? m_ioRegisters[address] : 0u;
        const uint32_t mode = m_ioRegisters.count(0x10003010u) ? m_ioRegisters[0x10003010u] : 0u;
        const uint32_t ctrl = m_ioRegisters.count(0x10003000u) ? m_ioRegisters[0x10003000u] : 0u;

        // M3R and IMT mirror GIF_MODE, PSE mirrors GIF_CTRL, and M3P is the
        // effective PATH3 mask controlled by the VIF1 MSKPATH3 command.
        stat = (stat & ~0xFu) |
               (mode & 0x1u) |
               (m_path3Masked ? 0x2u : 0u) |
               (mode & 0x4u) |
               (ctrl & 0x8u);
        return stat;
    }

    if (address >= 0x10000000 && address < 0x10010000)
    {
        if (address >= 0x10008000 && address < 0x1000F000)
        {
            if ((address & 0xFF) == 0x00)
            {
                uint32_t channelStatus = m_ioRegisters[address] & ~0x100u;
                m_ioRegisters[address] = channelStatus;
                return channelStatus;
            }
        }

        if (address >= 0x10000200 && address < 0x10000300)
        {
            return 0;
        }

        if (address >= 0x1000F200 && address <= 0x1000F260)
        {
            if (address == 0x1000F230)
            {
                return 0x60000;
            }
            if (address == 0x1000F240)
            {
                return 0xF0000002;
            }
            return 0;
        }
    }

    auto it = m_ioRegisters.find(address);
    if (it != m_ioRegisters.end())
    {
        return it->second;
    }

    return 0;
}

void PS2Memory::registerCodeRegion(uint32_t start, uint32_t end)
{
    if (end <= start)
    {
        std::cerr << "Ignoring invalid code region: start=0x" << std::hex << start
                  << " end=0x" << end << std::dec << std::endl;
        return;
    }

    if ((end - start) > PS2_RAM_SIZE)
    {
        std::cerr << "Ignoring oversized code region: start=0x" << std::hex << start
                  << " end=0x" << end << std::dec << std::endl;
        return;
    }

    for (const auto &existing : m_codeRegions)
    {
        if (existing.start == start && existing.end == end)
        {
            return;
        }
    }

    CodeRegion region;
    region.start = start;
    region.end = end;

    size_t sizeInWords = (end - start + 3u) / 4u;
    region.modified.resize(sizeInWords, false);

    m_codeRegions.push_back(region);
    RUNTIME_LOG("Registered code region: " << std::hex << start << " - " << end << std::dec);
}

bool PS2Memory::isAddressInRegion(uint32_t address, const CodeRegion &region)
{
    return (address >= region.start && address < region.end);
}

bool PS2Memory::isCodeAddress(uint32_t address) const
{
    for (const auto &region : m_codeRegions)
    {
        if (address >= region.start && address < region.end)
        {
            return true;
        }
    }
    return false;
}

void PS2Memory::markModified(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size())
            {
                region.modified[bitIndex] = true;
                RUNTIME_LOG("Marked code at " << std::hex << addr << std::dec << " as modified");
            }
        }
    }
}

bool PS2Memory::isCodeModified(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return false;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (const auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size() && region.modified[bitIndex])
            {
                return true; // Found modified code
            }
        }
    }

    return false; // No modifications found
}

void PS2Memory::clearModifiedFlag(uint32_t address, uint32_t size)
{
    if (size == 0)
    {
        return;
    }

    const uint64_t writeEnd = static_cast<uint64_t>(address) + static_cast<uint64_t>(size);
    for (auto &region : m_codeRegions)
    {
        const uint64_t regionStart = region.start;
        const uint64_t regionEnd = region.end;
        if (writeEnd <= regionStart || static_cast<uint64_t>(address) >= regionEnd)
        {
            continue;
        }

        uint32_t overlapStart = static_cast<uint32_t>(std::max<uint64_t>(address, regionStart));
        uint32_t overlapEnd = static_cast<uint32_t>(std::min<uint64_t>(writeEnd, regionEnd));

        for (uint32_t addr = overlapStart; addr < overlapEnd; addr += 4)
        {
            size_t bitIndex = (addr - region.start) / 4;
            if (bitIndex < region.modified.size())
            {
                region.modified[bitIndex] = false;
            }
        }
    }
}
