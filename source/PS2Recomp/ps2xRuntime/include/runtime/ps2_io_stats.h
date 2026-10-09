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
    //
    // Per call site (EeScheduler.cpp: 1 = pacing to a deadline that is due
    // in EE cycles but not yet in host time, 2 = nothing scheduled at all,
    // 3 = waiting for the next deadline or EE timer): waits finished, their
    // time, and how long they lasted (kWaitBuckets: under 0.1, 0.5, 1, 2,
    // 4, 8 and 16 ms, then longer).
    struct SchedulerWaitProbe
    {
        static constexpr int kSites = 4; // 1..3 used
        static constexpr int kWaitBuckets = 8;
        std::atomic<int> site{0};
        std::atomic<int64_t> requestedMicroseconds{0};
        std::atomic<int64_t> startedMicroseconds{0};
        std::atomic<uint64_t> waits{0};
        std::atomic<int64_t> waitedMicroseconds{0}; // time spent in the waits (the game's idle time)
        std::atomic<uint32_t> siteWaits[kSites]{};
        std::atomic<int64_t> siteMicroseconds[kSites]{};
        std::atomic<uint32_t> siteBuckets[kSites][kWaitBuckets]{};
    };

    inline int schedulerWaitBucket(int64_t microseconds)
    {
        static constexpr int64_t kBounds[SchedulerWaitProbe::kWaitBuckets - 1] = {100, 500, 1000, 2000, 4000, 8000, 16000};
        int bucket = 0;
        while (bucket < SchedulerWaitProbe::kWaitBuckets - 1 && microseconds >= kBounds[bucket])
            ++bucket;
        return bucket;
    }

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
            m_site = site;
        }
        ~SchedulerWaitScope()
        {
            SchedulerWaitProbe &probe = schedulerWaitProbe();
            const int64_t waited = steadyMicroseconds() - m_started;
            probe.waitedMicroseconds.fetch_add(waited, std::memory_order_relaxed);
            if (m_site > 0 && m_site < SchedulerWaitProbe::kSites)
            {
                probe.siteWaits[m_site].fetch_add(1, std::memory_order_relaxed);
                probe.siteMicroseconds[m_site].fetch_add(waited, std::memory_order_relaxed);
                probe.siteBuckets[m_site][schedulerWaitBucket(waited)].fetch_add(1, std::memory_order_relaxed);
            }
            probe.site.store(0, std::memory_order_release);
        }

    private:
        int64_t m_started = 0;
        int m_site = 0;
    };

    // EE scheduler protocol counts for the Xbox status lines (cumulative,
    // written by the executor thread only; EeScheduler.cpp). The dispatcher
    // passes and longjmp unwinds are EeSchedulerStats (ee_scheduler.h).
    struct EeProtocolStats
    {
        uint32_t slowCheckpoints = 0;  // checkpoints past the inline fast path
        uint32_t firedCheckpoints = 0; // of them, "due": the guest code unwinds by returning
        uint32_t deviceBatches = 0;    // EE timer / IOP cycle batches handed over
        uint32_t catchUps = 0;         // wall-clock catch-ups (expired deadlines, timed-out waits)
        uint64_t catchUpCycles = 0;    // the EE cycles they charged
        uint64_t eeCycle = 0;          // the EE cycle count at the last dispatcher pass
    };
    inline EeProtocolStats g_eeProtocolStats;
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
