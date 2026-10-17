#pragma once
// EE clock and scheduler seams for the natives, their boot self-tests and
// the game-logic harness (src/xbox/PUSH-BC-PLAN.md section 3.4 item 1 and
// section 6, I-7; owned by B-SCHED after Week 0). The names and signatures
// here are the frozen interface; B-SCHED filled the bodies in:
//   EeClockFreeze        the self-tests' ClockHold (one copy instead of three):
//                        lifts the checkpoint fast path's bound for the
//                        scope and puts the clock back after. It also saves
//                        and restores the countdown budget (M3.1), and while
//                        any freeze is open the slow checkpoint re-arms the
//                        budget and answers "not due" without touching the
//                        EE timers or the IOP (EeScheduler::checkpointDueSlow).
//   ps2xNoYieldEnter/Leave(tag)  no-yield regions (M7.0): inside one the
//                        scheduler charges cycles but never says "due", and a
//                        transfer out of the running thread is deferred to
//                        Leave; a blocking call inside one is fatal.
//   EeTimePolicy / ps2xEeTimePolicy()  Host (today) or Pinned (det mode: no
//                        host clock anywhere in the scheduler; ps2xSetEeTimePolicy)
//   ps2xSetVblankSource  the scheduler's VBlankStart source (M6.5, gated):
//                        recorded; the scheduler's own timing is the only
//                        source wired today.
#include "ps2_runtime.h"
#include "runtime/ee_scheduler.h"

#include <atomic>
#include <cstdint>

enum class EeTimePolicy : uint8_t
{
    Host = 0,   // host time drives the vblank and the device clocks (today)
    Pinned = 1, // det mode: every host input pinned (B-SCHED, M0.8)
};
extern EeTimePolicy g_ps2xEeTimePolicy; // EeScheduler.cpp
inline EeTimePolicy ps2xEeTimePolicy() { return g_ps2xEeTimePolicy; }
// Before the runtime runs (xboxDetSetup); the scheduler reads it at every
// wait and deadline pass.
inline void ps2xSetEeTimePolicy(EeTimePolicy policy) { g_ps2xEeTimePolicy = policy; }

enum class EeVblankSource : uint8_t
{
    Scheduler = 0, // the EE scheduler's own vblank timing (today)
    PbVbl = 1,     // pbkit's vblank counter (pb_vbl_count; M6.5, gated)
};
extern EeVblankSource g_ps2xEeVblankSource; // EeScheduler.cpp
inline void ps2xSetVblankSource(EeVblankSource source) { g_ps2xEeVblankSource = source; }
inline EeVblankSource ps2xEeVblankSource() { return g_ps2xEeVblankSource; }

// A no-yield region: inside it the scheduler charges cycles but never says
// "due", and a transfer out of the running thread is deferred until Leave.
// tag names the region in the counters. Regions nest; the outermost Leave
// fires the deferred checkpoint, if any, at the next safe point.
#if defined(PLATFORM_XBOX)
void ps2xNoYieldEnter(uint16_t tag);
void ps2xNoYieldLeave(uint16_t tag);
#else
inline void ps2xNoYieldEnter(uint16_t) {}
inline void ps2xNoYieldLeave(uint16_t) {}
#endif

// The originals' loops and calls run scheduler checkpoints. Before the game
// starts none may come due or charge cycles (that would run the IOP and the
// EE timers): the fast path's bound is lifted for the scope and the clock put
// back afterwards. The base class is protected; a C-style cast is the one
// conversion that may name it.
class EeClockFreeze
{
public:
#if defined(PLATFORM_XBOX)
    explicit EeClockFreeze(PS2Runtime &runtime)
        : m_scheduler(runtime.eeScheduler()), m_clock((EeCheckpointClock &)runtime.eeScheduler())
    {
        m_clock.syncCycle();
#if defined(PS2X_DEVICE_CYCLE_BATCH)
        m_deviceBatchStart = m_scheduler.deviceBatchStart();
#endif
        m_cycle = m_clock.m_eeCycle;
        m_fastUntil = m_clock.m_fastUntil;
#if PS2X_EE_COUNTDOWN
        m_budget = g_ps2xEeBudget;
        m_budgetLoaded = m_clock.m_budgetLoaded;
#endif
        m_pending = m_clock.m_checkpointPending.exchange(false, std::memory_order_acq_rel);
        ++m_clock.m_freezeDepth;
        m_clock.m_fastUntil = UINT64_MAX;
        m_clock.reloadBudget();
    }

    ~EeClockFreeze()
    {
        --m_clock.m_freezeDepth;
        m_clock.setCycle(m_cycle);
#if defined(PS2X_DEVICE_CYCLE_BATCH)
        m_scheduler.setDeviceBatchStart(m_deviceBatchStart);
#endif
        m_clock.m_fastUntil = m_fastUntil;
#if PS2X_EE_COUNTDOWN
        g_ps2xEeBudget = m_budget;
        m_clock.m_budgetLoaded = m_budgetLoaded;
#endif
        if (m_pending)
            m_clock.setPendingLocal();
    }

    EeClockFreeze(const EeClockFreeze &) = delete;
    EeClockFreeze &operator=(const EeClockFreeze &) = delete;

private:
    EeScheduler &m_scheduler;
    EeCheckpointClock &m_clock;
    uint64_t m_cycle = 0, m_fastUntil = 0;
#if defined(PS2X_DEVICE_CYCLE_BATCH)
    uint64_t m_deviceBatchStart = 0;
#endif
#if PS2X_EE_COUNTDOWN
    int32_t m_budget = 0, m_budgetLoaded = 0;
#endif
    bool m_pending = false;
#else
    // The PC scheduler keeps its checkpoint clock private: nothing to hold.
    explicit EeClockFreeze(PS2Runtime &) {}
#endif
};
