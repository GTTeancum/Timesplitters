#pragma once

// Totals for host file reads made on the game's behalf (disc and host files),
// for spotting slow storage. Read by development status displays.
#include <atomic>
#include <chrono>
#include <cstdint>

namespace ps2x
{
    struct IoStats
    {
        std::atomic<uint64_t> reads{0};
        std::atomic<uint64_t> bytes{0};
        std::atomic<uint64_t> microseconds{0};
    };

    inline IoStats &ioStats()
    {
        static IoStats stats;
        return stats;
    }

    // Adds the scope's duration and byte count to ioStats().
    class IoReadTimer
    {
    public:
        explicit IoReadTimer(uint64_t bytes) : bytes_(bytes), start_(std::chrono::steady_clock::now()) {}
        ~IoReadTimer()
        {
            IoStats &stats = ioStats();
            stats.reads.fetch_add(1, std::memory_order_relaxed);
            stats.bytes.fetch_add(bytes_, std::memory_order_relaxed);
            stats.microseconds.fetch_add(static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::microseconds>(
                                             std::chrono::steady_clock::now() - start_)
                                             .count()),
                                         std::memory_order_relaxed);
        }

    private:
        uint64_t bytes_;
        std::chrono::steady_clock::time_point start_;
    };
}

namespace ps2x
{
    // The EE scheduler's current blocking wait: which call site (0 = not
    // waiting), how long it asked to wait, and when it started.
    struct SchedulerWaitProbe
    {
        std::atomic<int> site{0};
        std::atomic<int64_t> requestedMicroseconds{0};
        std::atomic<int64_t> startedMicroseconds{0};
        std::atomic<uint64_t> waits{0};
        std::atomic<int64_t> waitedMicroseconds{0}; // time spent in the waits (the game's idle time)
    };

    inline SchedulerWaitProbe &schedulerWaitProbe()
    {
        static SchedulerWaitProbe probe;
        return probe;
    }

    inline int64_t steadyMicroseconds()
    {
        return std::chrono::duration_cast<std::chrono::microseconds>(
                   std::chrono::steady_clock::now().time_since_epoch())
            .count();
    }

    // Marks the scope as a scheduler wait at `site` until `deadline`.
    class SchedulerWaitScope
    {
    public:
        SchedulerWaitScope(int site, std::chrono::steady_clock::time_point deadline)
        {
            SchedulerWaitProbe &probe = schedulerWaitProbe();
            const auto now = std::chrono::steady_clock::now();
            const int64_t requested =
                deadline == std::chrono::steady_clock::time_point::max()
                    ? -1
                    : std::chrono::duration_cast<std::chrono::microseconds>(deadline - now).count();
            probe.requestedMicroseconds.store(requested, std::memory_order_relaxed);
            probe.startedMicroseconds.store(steadyMicroseconds(), std::memory_order_relaxed);
            probe.waits.fetch_add(1, std::memory_order_relaxed);
            probe.site.store(site, std::memory_order_release);
            m_started = probe.startedMicroseconds.load(std::memory_order_relaxed);
        }
        ~SchedulerWaitScope()
        {
            SchedulerWaitProbe &probe = schedulerWaitProbe();
            probe.waitedMicroseconds.fetch_add(steadyMicroseconds() - m_started, std::memory_order_relaxed);
            probe.site.store(0, std::memory_order_release);
        }

    private:
        int64_t m_started = 0;
    };
}

namespace ps2x
{
    // The game's most recent kernel call and SIF RPC, for development status
    // displays.
    struct GuestCallProbe
    {
        std::atomic<uint32_t> lastSyscall{0};
        std::atomic<uint64_t> syscalls{0};
        std::atomic<uint32_t> lastRpcClient{0};
        std::atomic<uint32_t> lastRpcNumber{0};
        std::atomic<uint64_t> rpcs{0};
    };

    inline GuestCallProbe &guestCallProbe()
    {
        static GuestCallProbe probe;
        return probe;
    }
}

namespace ps2x
{
    // Time spent in the runtime's memcpy replacement (same fields as IoStats).
    inline IoStats &copyStats()
    {
        static IoStats stats;
        return stats;
    }

    class CopyTimer
    {
    public:
        explicit CopyTimer(uint64_t bytes) : bytes_(bytes), start_(std::chrono::steady_clock::now()) {}
        ~CopyTimer()
        {
            IoStats &stats = copyStats();
            stats.reads.fetch_add(1, std::memory_order_relaxed);
            stats.bytes.fetch_add(bytes_, std::memory_order_relaxed);
            stats.microseconds.fetch_add(static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::microseconds>(
                                             std::chrono::steady_clock::now() - start_)
                                             .count()),
                                         std::memory_order_relaxed);
        }

    private:
        uint64_t bytes_;
        std::chrono::steady_clock::time_point start_;
    };
}

namespace ps2x
{
    // Development aid for slow hosts: while set, the software renderer skips
    // drawing primitives (register writes and transfers still happen), so a
    // scripted run can get through menus quickly.
    inline std::atomic<bool> &rasterSuspended()
    {
        static std::atomic<bool> suspended{false};
        return suspended;
    }
}
