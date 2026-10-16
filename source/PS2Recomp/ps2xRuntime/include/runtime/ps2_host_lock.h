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
#include <mutex>

#ifndef TS_GS_LOCK_ELIDE
#define TS_GS_LOCK_ELIDE 0
#endif

namespace ps2x
{
    class OwnedRecursiveMutex
    {
    public:
        void lock()
        {
#if TS_GS_LOCK_ELIDE
            if (s_singleOwner)
                return;
#endif
            m_mutex.lock();
        }
        void unlock()
        {
#if TS_GS_LOCK_ELIDE
            if (s_singleOwner)
                return;
#endif
            m_mutex.unlock();
        }
        bool try_lock()
        {
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
        std::recursive_mutex m_mutex;
#if TS_GS_LOCK_ELIDE
        static inline bool s_singleOwner = false;
#endif
    };
    static_assert(sizeof(OwnedRecursiveMutex) == sizeof(std::recursive_mutex), "OwnedRecursiveMutex adds no storage");
}
