// The EE timers (TIM0..TIM3), split out of ps2_memory.cpp (src/xbox/
// PUSH-BC-PLAN.md W0-S; owned by B-PLATFORM): their register reads and
// writes, how they advance with the scheduler's EE-cycle clock, and how far
// off the next timer interrupt is. The arithmetic is the one ps2_memory.cpp
// had, unchanged.
#include "runtime/ps2_memory.h"

#include <algorithm>
#include <array>
#include <limits>

namespace
{
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
}

void PS2Memory::resetEeTimers() noexcept
{
    m_eeTimers = {};
}

bool PS2Memory::readEeTimerRegister(uint32_t address, uint32_t &value) const noexcept
{
    size_t timerIndex = 0u;
    uint32_t timerOffset = 0u;
    if (!decodeEeTimerRegister(address, timerIndex, timerOffset))
        return false;
    const EeTimer &timer = m_eeTimers[timerIndex];
    switch (timerOffset)
    {
    case kEeTimerCountOffset:
        value = timer.count & 0xFFFFu;
        break;
    case kEeTimerModeOffset:
        value = timer.mode & (kEeTimerModeConfigMask | kEeTimerModeStatusMask);
        break;
    case kEeTimerCompareOffset:
        value = timer.compare & 0xFFFFu;
        break;
    case kEeTimerHoldOffset:
        value = timer.hold & 0xFFFFu;
        break;
    default:
        value = 0u;
        break;
    }
    return true;
}

bool PS2Memory::writeEeTimerRegister(uint32_t address, uint32_t value, bool &result) noexcept
{
    size_t timerIndex = 0u;
    uint32_t timerOffset = 0u;
    if (!decodeEeTimerRegister(address, timerIndex, timerOffset))
        return false;
    EeTimer &timer = m_eeTimers[timerIndex];
    result = true;
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
        result = false;
        break;
    }
    return true;
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
