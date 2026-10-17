#pragma once
// Host locks the runtime can elide (src/xbox/PUSH-BC-PLAN.md M3.3; owned by
// B-PLATFORM after Week 0).
//
// OwnedRecursiveMutex: the GS front end's state lock. TS_GS_LOCK_ELIDE 1
// (B-PLATFORM, switched on through src/xbox/mk/b_platform.mk once the Xbox
// build has a single GS owner: the EE executor thread draws, the host
// thread never touches GS state) skips the lock while setSingleOwner(true)
// stands; 0 (default): a std::recursive_mutex, as before. The same size as
// the mutex it wraps: GS is a member of PS2Runtime, whose layout every
// compiled game file uses.
//
// TS_LOCK_CHECK 1 (the SC-E check build): the lock is always taken (elided
// or not), and every lock() made from a different thread than the previous
// one counts in g_hostLockStats.switches ([TS:plat] gsforeign=). Start-up
// makes one or two (the main thread sets the GS up, the EE executor draws);
// the gate for TS_GS_LOCK_ELIDE is that the count does not move during a
// match (gsforeign=0 over the match).
#include <cstdint>
#include <mutex>
#include <thread>

#ifndef TS_GS_LOCK_ELIDE
#define TS_GS_LOCK_ELIDE 0
#endif
#ifndef TS_LOCK_CHECK
#define TS_LOCK_CHECK 0
#endif

namespace ps2x
{
    struct HostLockStats
    {
        uint32_t locks = 0;    // TS_LOCK_CHECK: lock() calls
        uint32_t switches = 0; // TS_LOCK_CHECK: lock() calls from another thread than the last one
    };
    inline HostLockStats g_hostLockStats;

    class OwnedRecursiveMutex
    {
    public:
        void lock()
        {
#if TS_LOCK_CHECK
            noteThread();
            m_mutex.lock();
            return;
#endif
#if TS_GS_LOCK_ELIDE
            if (s_singleOwner)
                return;
#endif
            m_mutex.lock();
        }
        void unlock()
        {
#if TS_LOCK_CHECK
            m_mutex.unlock();
            return;
#endif
#if TS_GS_LOCK_ELIDE
            if (s_singleOwner)
                return;
#endif
            m_mutex.unlock();
        }
        bool try_lock()
        {
#if TS_LOCK_CHECK
            noteThread();
            return m_mutex.try_lock();
#endif
#if TS_GS_LOCK_ELIDE
            if (s_singleOwner)
                return true;
#endif
            return m_mutex.try_lock();
        }

        // One thread owns every locked object of this type from now on
        // (xboxInstallBackend sets it from TS_GS_LOCK_ELIDE); false puts
        // the lock back. With TS_GS_LOCK_ELIDE 0 it records nothing.
        static void setSingleOwner(bool on)
        {
#if TS_GS_LOCK_ELIDE
            s_singleOwner = on;
#else
            (void)on;
#endif
        }
        static bool singleOwner()
        {
#if TS_GS_LOCK_ELIDE
            return s_singleOwner;
#else
            return false;
#endif
        }

    private:
#if TS_LOCK_CHECK
        static void noteThread()
        {
            static std::thread::id s_last{};
            const std::thread::id self = std::this_thread::get_id();
            ++g_hostLockStats.locks;
            if (self != s_last)
            {
                ++g_hostLockStats.switches;
                s_last = self;
            }
        }
#endif
        std::recursive_mutex m_mutex;
#if TS_GS_LOCK_ELIDE
        static inline bool s_singleOwner = false;
#endif
    };
    static_assert(sizeof(OwnedRecursiveMutex) == sizeof(std::recursive_mutex), "OwnedRecursiveMutex adds no storage");
}
