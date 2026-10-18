#pragma once

#include <csetjmp>
#include "ps2x/exceptions.h"

#include "ps2_runtime.h"

#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <cstdint>
#include <deque>
#include <functional>
#include <mutex>
#include <optional>
#include <thread>
#include <unordered_map>
#include <variant>
#include <vector>

// This exception is the EE equivalent of a longjmp to the dispatcher.  It is
// not an error and must only be caught at EeScheduler::run().
// Unwinds from inside guest code back to EeScheduler::run() after a thread
// switch. Thrown with C++ exceptions; without them (PS2X_NO_EXCEPTIONS, the
// Xbox) the same jump is a longjmp to the innermost runTransferable().
struct EeDispatcherTransfer final
{
};

enum class EeThreadStatus : uint8_t
{
    Running,
    Ready,
    Waiting,
    WaitingSuspended,
    Suspended,
    Dormant,
};

enum class EeWaitReason : uint8_t
{
    None,
    Sleep,
    Semaphore,
    EventFlag,
    VSync,
    External,
    Mpeg,
};

struct EeSemaphoreWait
{
    int id = 0;
};

struct EeEventFlagWait
{
    int id = 0;
    uint32_t bits = 0;
    uint32_t mode = 0;
    uint32_t resultAddress = 0;
};

struct EeVSyncWait
{
    uint64_t afterTick = 0;
    int fixedResult = -1;
};

struct EeExternalWait
{
    uint32_t type = 0;
    uint64_t token = 0;
};

using EeWaitPayload = std::variant<std::monostate,
                                   EeSemaphoreWait,
                                   EeEventFlagWait,
                                   EeVSyncWait,
                                   EeExternalWait>;

struct EeWaitState
{
    EeWaitReason reason = EeWaitReason::None;
    EeWaitPayload payload{};
    std::function<void(R5900Context &)> completion;
};

enum class GuestInvocationKind : uint8_t
{
    Interrupt,
    Alarm,
    GsCallback,
    RpcCallback,
    SyscallOverride,
    ExitHandler,
    HleCall,
    SifCommand,
};

struct GuestInvocation
{
    GuestInvocationKind kind = GuestInvocationKind::Interrupt;
    uint64_t sequence = 0;
    uint64_t tag = 0;
    R5900Context context{};
    std::function<void(const R5900Context &, R5900Context &)> onComplete;
};

struct GuestThread
{
    int id = 0;
    R5900Context context{};
    uint32_t entry = 0;
    uint32_t stack = 0;
    uint32_t stackSize = 0;
    uint32_t gp = 0;
    uint32_t attr = 0;
    uint32_t option = 0;
    uint32_t arg = 0;
    int initialPriority = 0;
    int currentPriority = 0;
    EeThreadStatus status = EeThreadStatus::Dormant;
    int suspendCount = 0;
    uint32_t wakeupCount = 0;
    bool ownsStack = false;
    uint32_t tlsBase = 0;
    EeWaitState wait{};
    std::function<void(R5900Context &)> resumeCompletion;
    std::vector<GuestInvocation> invocations;

    [[nodiscard]] R5900Context &activeContext()
    {
        return invocations.empty() ? context : invocations.back().context;
    }

    [[nodiscard]] const R5900Context &activeContext() const
    {
        return invocations.empty() ? context : invocations.back().context;
    }
};

struct EeSemaphore
{
    int id = 0;
    int count = 0;
    int maxCount = 0;
    int initCount = 0;
    uint32_t attr = 0;
    uint32_t option = 0;
    std::deque<int> waiters;
};

struct EeEventFlag
{
    int id = 0;
    uint32_t attr = 0;
    uint32_t option = 0;
    uint32_t initBits = 0;
    uint32_t bits = 0;
    std::deque<int> waiters;
};

struct EeAlarm
{
    int id = 0;
    uint16_t ticks = 0;
    uint32_t handler = 0;
    uint32_t argument = 0;
    uint32_t gp = 0;
    uint32_t sp = 0;
};

struct EeIrqHandler
{
    int id = 0;
    uint32_t cause = 0;
    uint32_t handler = 0;
    uint32_t argument = 0;
    uint32_t gp = 0;
    uint32_t sp = 0;
    bool enabled = true;
    int order = 0;
};

struct EeThreadSnapshot
{
    int id = 0;
    uint32_t pc = 0;
    uint32_t ra = 0;
    uint32_t sp = 0;
    uint32_t contextGp = 0;
    uint32_t entry = 0;
    uint32_t stack = 0;
    uint32_t stackSize = 0;
    uint32_t gp = 0;
    int initialPriority = 0;
    int currentPriority = 0;
    EeThreadStatus status = EeThreadStatus::Dormant;
    EeWaitReason waitReason = EeWaitReason::None;
    int waitId = 0;
    int suspendCount = 0;
    uint32_t wakeupCount = 0;
    uint32_t invocationDepth = 0;
};

struct EeSemaphoreSnapshot
{
    int id = 0;
    int count = 0;
    int maxCount = 0;
    uint32_t waiters = 0;
};

struct EeEventFlagSnapshot
{
    int id = 0;
    uint32_t bits = 0;
    uint32_t initBits = 0;
    uint32_t attr = 0;
    uint32_t waiters = 0;
};

struct EeKernelSnapshot
{
    uint64_t sequence = 0;
    uint64_t eeCycle = 0;
    uint64_t sliceEndCycle = 0;
    uint64_t nextEventCycle = 0;
    int runningThreadId = 0;
    std::vector<EeThreadSnapshot> threads;
    std::vector<EeSemaphoreSnapshot> semaphores;
    std::vector<EeEventFlagSnapshot> eventFlags;
};

enum class EeEventType : uint8_t
{
    Stop,
    VBlankStart,
    VBlankEnd,
    Dmac,
    ExternalWake,
    Alarm,
};

struct EeEvent
{
    EeEventType type = EeEventType::ExternalWake;
    uint32_t id = 0;
    uint64_t value = 0;
};

struct EeThreadCreateParams
{
    uint32_t attr = 0;
    uint32_t entry = 0;
    uint32_t stack = 0;
    uint32_t stackSize = 0;
    uint32_t gp = 0;
    int priority = 0;
    uint32_t option = 0;
};

#if defined(PLATFORM_XBOX)
// The checkpoint fast path skips accountCycles, which is only exact while
// the EE timers and the IOP take their cycles in batches.
#if !defined(PS2X_DEVICE_CYCLE_BATCH)
#error "The Xbox checkpoint fast path needs PS2X_DEVICE_CYCLE_BATCH (src/xbox/Makefile)"
#endif

// Development counters for the Xbox status block (cumulative): passes of the
// dispatcher loop, and thread switches that unwound guest code back to it.
struct EeSchedulerStats
{
    unsigned loopIterations = 0, unwinds = 0;
};
extern EeSchedulerStats g_eeSchedulerStats;
#if defined(PLATFORM_XBOX)

// TS_SNAPSHOT_ON_DEMAND 1 (src/xbox/PUSH-BC-PLAN.md M3.3, B-SCHED): the
// kernel snapshot (publishSnapshot: every thread copied into vectors) is
// built only when something asked for it since the last one (snapshot()
// arms the next publish and returns the last one built), instead of at
// every wait, wake and 4,096th dispatch. 0: at every call, as before.
#ifndef TS_SNAPSHOT_ON_DEMAND
#define TS_SNAPSHOT_ON_DEMAND 1
#endif
#endif
#endif
#if defined(PLATFORM_XBOX)

// A VBlankStart observer (the det harness's cheap per-vblank hashes; B-SCHED
// M0.8): called on the executor thread after the vblank's own work.
using EeVblankStartHook = void (*)(void *user, uint64_t vsyncTick);

class EeScheduler;
// The one EE scheduler (constructed with the runtime), or null before it.
EeScheduler *ps2xEeSchedulerInstance() noexcept;
#endif

class EeScheduler
#if defined(PLATFORM_XBOX)
    : protected EeCheckpointClock
#endif
{
public:
    static constexpr int kMainThreadId = 1;
    static constexpr int kFirstThreadId = 2;
    static constexpr int kLastThreadId = 255;
    static constexpr int kPriorityCount = 128;
    static constexpr uint64_t kEeClockHz = 294912000ull;
    static constexpr uint32_t kGeneratedCheckpointCycles = 32u;
    static constexpr uint32_t kGuestDispatchCycles = 8u;
    static constexpr uint64_t kDefaultTimeSliceCycles = 65536ull;

    explicit EeScheduler(PS2Runtime &runtime);
    ~EeScheduler();

    EeScheduler(const EeScheduler &) = delete;
    EeScheduler &operator=(const EeScheduler &) = delete;

    void reset(uint8_t *rdram, const R5900Context &mainContext);
    void run();
    void requestStop();
    void postEvent(EeEvent event);
#if defined(PLATFORM_XBOX)
    // Inline: nearly every call only charges the cycles (EeCheckpointClock).
    [[nodiscard]] bool checkpointDue(uint32_t cycles = kGeneratedCheckpointCycles) noexcept
    {
        const uint64_t elapsed = cycles > 1u ? cycles : 1u;
        return !chargeCyclesFast(elapsed) && checkpointDueSlow(elapsed);
    }
    // The rest of checkpointDue once the cycles are on m_eeCycle.
    [[nodiscard]] bool checkpointDueSlow(uint64_t elapsed) noexcept;
#else
    [[nodiscard]] bool checkpointDue(uint32_t cycles = kGeneratedCheckpointCycles) noexcept;
#endif
    void accountCycles(uint32_t cycles) noexcept;
    [[nodiscard]] bool isExecutingGuest() const noexcept;

    // Kernel object API. All calls except postEvent/requestStop execute on the
    // EE executor and therefore need no host synchronization.
    void setupCurrentThread(uint32_t stack, uint32_t stackSize, uint32_t gp);
    int createThread(const EeThreadCreateParams &params);
    int deleteThread(int id, uint32_t &ownedStack);
    int startThread(int id, uint32_t arg, const R5900Context &caller, bool interruptSafe);
    [[noreturn]] void exitCurrent(bool deleteThread);
    int terminateThread(int id, uint32_t &ownedStack, bool interruptSafe);
    int suspendThread(int id, bool interruptSafe);
    int resumeThread(int id, bool interruptSafe);
    void sleepCurrent();
    int wakeupThread(int id, bool interruptSafe);
    int cancelWakeup(int id);
    int changePriority(int id, int priority, bool interruptSafe, int &oldPriority);
    int rotateReadyQueue(int priority, bool interruptSafe);
    int releaseWait(int id, bool interruptSafe);
    void transferIfRequested(bool interruptSafe);

    int createSemaphore(int initCount, int maxCount, uint32_t attr, uint32_t option);
    int deleteSemaphore(int id, bool interruptSafe);
    int signalSemaphore(int id, bool interruptSafe);
    int pollSemaphore(int id);
    void waitSemaphore(int id);

    int createEventFlag(uint32_t initialBits, uint32_t attr, uint32_t option);
    int deleteEventFlag(int id, bool interruptSafe);
    int setEventFlag(int id, uint32_t bits, bool interruptSafe);
    int clearEventFlag(int id, uint32_t mask);
    int pollEventFlag(int id, uint32_t bits, uint32_t mode, uint32_t &observedBits);
    void waitEventFlag(int id, uint32_t bits, uint32_t mode, uint32_t resultAddress);

    int setAlarm(uint16_t ticks, uint32_t handler, uint32_t argument, uint32_t gp, uint32_t sp);
    int cancelAlarm(int id);
    void queueInvocation(GuestInvocation invocation);
    [[noreturn]] void invokeCurrent(GuestInvocation invocation);
    [[noreturn]] void invokeCurrentSequence(std::vector<GuestInvocation> invocations);
    [[nodiscard]] bool hasInvocation(GuestInvocationKind kind, uint64_t tag) const;
    [[nodiscard]] uint32_t invocationStackTop();
#if defined(PLATFORM_XBOX)
    void releaseInvocationStacks(int threadId);
#endif

    int addIrqHandler(bool dmac,
                      uint32_t cause,
                      uint32_t handler,
                      bool append,
                      uint32_t argument,
                      uint32_t gp,
                      uint32_t sp);
    int removeIrqHandler(bool dmac, uint32_t cause, int id);
    int setIrqHandlerEnabled(bool dmac, int id, bool enabled);
    int setIrqCauseEnabled(bool dmac, uint32_t cause, bool enabled);
    void dispatchIrq(bool dmac, uint32_t cause);
    void setVSyncFlag(uint32_t flagAddress, uint32_t tickAddress);
    [[nodiscard]] uint64_t currentVSyncTick() const noexcept;
    uint32_t setGsVSyncCallback(uint32_t callback, uint32_t gp, uint32_t sp);

    [[noreturn]] void waitVSync(uint64_t afterTick, int fixedResult = -1, std::function<void(R5900Context &)> completion = {});
    void completeVSync(uint64_t tick);
    void completeExternalWait(uint32_t type, uint64_t token, int result);
    [[noreturn]] void waitExternal(EeWaitReason reason, uint32_t type, uint64_t token, std::function<void(R5900Context &)> completion = {});

    [[nodiscard]] GuestThread *thread(int id);
    [[nodiscard]] const GuestThread *thread(int id) const;
    [[nodiscard]] EeSemaphore *semaphore(int id);
    [[nodiscard]] const EeSemaphore *semaphore(int id) const;
    [[nodiscard]] EeEventFlag *eventFlag(int id);
    [[nodiscard]] const EeEventFlag *eventFlag(int id) const;
    [[nodiscard]] GuestThread *currentThread();
    [[nodiscard]] const GuestThread *currentThread() const;
    [[nodiscard]] int currentThreadId() const noexcept;
    [[nodiscard]] R5900Context *currentContext();
    [[nodiscard]] uint8_t *rdram() const noexcept;

    // Direct syscall tests use the same main-thread record without starting a
    // second executor. Production execution calls reset() before run().
    void bindMainContextForSyscall(R5900Context &ctx, uint8_t *rdram);

    [[nodiscard]] EeKernelSnapshot snapshot() const;
    void publishSnapshot();

#if defined(PLATFORM_XBOX)
    // ---- B-SCHED hooks (src/xbox/PUSH-BC-PLAN.md section 5.1)
    // The current EE cycle (the countdown's lag folded in). Executor only.
    [[nodiscard]] uint64_t cycleNow() noexcept
    {
#if defined(PLATFORM_XBOX)
        return EeCheckpointClock::cycleNow();
#else
        return m_eeCycle;
#endif
    }
    // Every kernel thread (the invocation threads too, id < 0), for the
    // det harness's context stream. Executor only.
    template <class F>
    void forEachThread(F &&fn) const
    {
        for (const auto &[id, item] : m_threads)
            fn(item);
    }
    // The runtime this scheduler belongs to (the det harness's streams).
    [[nodiscard]] PS2Runtime &runtime() noexcept { return m_runtime; }
    // The VBlankStart count so far.
    [[nodiscard]] uint64_t vsyncTick() const noexcept { return m_vsyncTick; }
    // One VBlankStart observer (null clears it).
    void setVblankStartHook(EeVblankStartHook hook, void *user) noexcept
    {
        m_vblankHook = hook;
        m_vblankHookUser = user;
    }
#if defined(PLATFORM_XBOX)
    // No-yield regions (runtime/ee_checkpoint_clock.h, M7.0): see
    // EeCheckpointClock::m_noYieldDepth.
    void noYieldEnter(uint16_t tag) noexcept;
    void noYieldLeave(uint16_t tag) noexcept;
    [[nodiscard]] bool inNoYield() const noexcept { return m_noYieldDepth != 0u; }
#if defined(PS2X_DEVICE_CYCLE_BATCH)
    // EeClockFreeze saves and restores the device-batch carry with the clock.
    [[nodiscard]] uint64_t deviceBatchStart() const noexcept { return m_deviceBatchStart; }
    void setDeviceBatchStart(uint64_t cycle) noexcept { m_deviceBatchStart = cycle; }
#endif
#endif

#endif
private:
    [[noreturn]] void transferToDispatcher();

    // Runs f; returns false when it ended in a thread switch.
    template <class F>
    bool runTransferable(F &&f)
    {
#if defined(PS2X_NO_EXCEPTIONS)
        std::jmp_buf target;
        std::jmp_buf *const previous = m_transferTarget;
        m_transferTarget = &target;
        if (setjmp(target) != 0)
        {
            m_transferTarget = previous;
            return false;
        }
        f();
        m_transferTarget = previous;
        return true;
#else
        try
        {
            f();
            return true;
        }
        catch (const EeDispatcherTransfer &)
        {
            return false;
        }
#endif
    }

#if defined(PS2X_NO_EXCEPTIONS)
    std::jmp_buf *m_transferTarget = nullptr;
#endif


    struct ScheduledEvent
    {
        uint64_t deadlineCycle = 0;
        std::chrono::steady_clock::time_point hostDeadline{};
        EeEvent event{};
        uint64_t sequence = 0;
    };

    void assertExecutor() const;
    [[nodiscard]] bool checkpointDecision() noexcept;
    void accountDeviceCycles(uint64_t elapsed) noexcept;
#if defined(PLATFORM_XBOX)
    // m_eeCycle, read: on the Xbox the countdown's lag is folded in first
    // (EeCheckpointClock::syncCycle); every reader goes through here.
    [[nodiscard]] uint64_t eeCycle() noexcept
    {
#if defined(PLATFORM_XBOX)
        syncCycle();
#endif
        return m_eeCycle;
    }
    // The executor's own "something is due" flag (and the budget zeroed).
    void setPending() noexcept
    {
#if defined(PLATFORM_XBOX)
        setPendingLocal();
#else
        m_checkpointPending.store(true, std::memory_order_release);
#endif
    }
#endif
#if defined(PLATFORM_XBOX)
    void refreshFastUntil() noexcept;
    void refreshDeadlineCache();
#if defined(PLATFORM_XBOX)
    [[nodiscard]] bool deadlineMayBeDue() noexcept;
    // Det mode (EeTimePolicy::Pinned, runtime/ee_checkpoint_clock.h): no
    // host time anywhere; deadlines fall due by EE cycle alone.
    [[nodiscard]] static bool pinned() noexcept;
#else
    [[nodiscard]] bool deadlineMayBeDue() const noexcept;
#endif
#endif
    [[nodiscard]] int allocateThreadId();
    GuestThread &acquireInvocationThread();
    void enqueueReady(GuestThread &thread, bool front = false);
    void removeReady(GuestThread &thread);
    [[nodiscard]] GuestThread *selectReady();
    void makeRunning(GuestThread &thread);
    void makeDormant(GuestThread &thread);
    void removeFromWaitObject(GuestThread &thread);
    [[noreturn]] void blockCurrent(EeWaitState wait);
    void makeReady(GuestThread &thread, int result, bool interruptSafe);
    void requestPreemptionIfHigher(const GuestThread &readyThread, bool interruptSafe);
    void applyPendingPreemption();
    void processPendingEvents();
    void processDueDeadlines();
    void processEvent(const EeEvent &event);
    void finishEventWaiters(EeEventFlag &flag, bool interruptSafe);
    [[nodiscard]] static bool eventCondition(uint32_t current, uint32_t requested, uint32_t mode);
    static int waitObjectId(const EeWaitState &wait);
    void writeGuestU32(uint32_t address, uint32_t value);
    void waitForEvent();
    void scheduleEvent(uint64_t deadlineCycle, std::chrono::steady_clock::time_point hostDeadline, EeEvent event);
    void updateNextDeadline();
    [[nodiscard]] bool hasReadyAtOrAbovePriority(int priority) const;
    void renewTimeSlice();
    void copyMainContextToRuntime();
    void publishDebugContext(const R5900Context &context);
    void publishIdleDebugContext();

    PS2Runtime &m_runtime;
    uint8_t *m_rdram = nullptr;
    std::array<std::deque<int>, kPriorityCount> m_readyQueues{};
    std::unordered_map<int, GuestThread> m_threads;
    std::unordered_map<int, EeSemaphore> m_semaphores;
    std::unordered_map<int, EeEventFlag> m_eventFlags;
    std::unordered_map<int, EeAlarm> m_alarms;
    std::unordered_map<int, EeIrqHandler> m_intcHandlers;
    std::unordered_map<int, EeIrqHandler> m_dmacHandlers;
    int m_nextThreadId = kFirstThreadId;
    int m_nextInvocationThreadId = -1;
    int m_nextSemaphoreId = 1;
    int m_nextEventFlagId = 1;
    int m_nextAlarmId = 1;
    int m_nextIntcHandlerId = 1;
    int m_nextDmacHandlerId = 1;
    int m_intcHeadOrder = 0;
    int m_intcTailOrder = 1000;
    int m_dmacHeadOrder = 0;
    int m_dmacTailOrder = 1000;
    uint32_t m_enabledIntcMask = 0xFFFFFFFFu;
    uint32_t m_enabledDmacMask = 0xFFFFFFFFu;
    int m_currentThreadId = 0;
    bool m_rescheduleRequested = false;
    bool m_timeSliceExpired = false;
    bool m_insideInterrupt = false;
    uint32_t m_pendingEeTimerInterrupts = 0;
#if !defined(PLATFORM_XBOX) // the Xbox keeps it in EeCheckpointClock
    uint64_t m_eeCycle = 0;
#endif
    uint64_t m_sliceEndCycle = kDefaultTimeSliceCycles;
#if defined(PS2X_DEVICE_CYCLE_BATCH)
    // The EE cycle at which the device-batch carry was last zero: the carry
    // is m_eeCycle - m_deviceBatchStart, so charging cycles only has to
    // advance m_eeCycle (accountDeviceCycles).
    uint64_t m_deviceBatchStart = 0;
#endif
    std::thread::id m_executorThread{};
    std::atomic<bool> m_running{false};
    std::atomic<bool> m_guestExecuting{false};
    std::atomic<bool> m_stopRequested{false};
#if !defined(PLATFORM_XBOX) // the Xbox keeps it in EeCheckpointClock
    std::atomic<bool> m_checkpointPending{false};
#endif
    uint32_t m_debugPublishCountdown = 0u;

    mutable std::mutex m_eventMutex;
    std::condition_variable m_eventCv;
    std::deque<EeEvent> m_events;
    std::vector<ScheduledEvent> m_deadlines;
    std::deque<GuestInvocation> m_pendingInvocations;
    uint64_t m_eventSequence = 0;
    uint64_t m_invocationSequence = 0;
    uint64_t m_vsyncTick = 0;
    uint32_t m_vsyncFlagAddress = 0;
    uint32_t m_vsyncTickAddress = 0;
    uint32_t m_gsVSyncCallback = 0;
    uint32_t m_gsVSyncCallbackGp = 0;
    uint32_t m_gsVSyncCallbackSp = 0;
    std::unordered_map<uint64_t, uint32_t> m_invocationStackTops;
#if defined(PLATFORM_XBOX)
    // Invocation stacks of deleted threads, for the next (thread, depth)
    // that needs one (all are kInvocationStackSize).
    std::vector<uint32_t> m_freeInvocationStacks;
#endif
    std::atomic<uint64_t> m_nextDeadlineCycle{0};
#if defined(PLATFORM_XBOX)
    // Performance-counter value below which no entry of m_deadlines is due
    // by host time (refreshDeadlineCache). 0 forces the full scan.
    uint64_t m_hostDeadlineTicks = 0;
#endif

    mutable std::mutex m_snapshotMutex;
    EeKernelSnapshot m_snapshot;
    uint64_t m_snapshotSequence = 0;
#if defined(PLATFORM_XBOX)
    mutable std::atomic<bool> m_snapshotWanted{true}; // TS_SNAPSHOT_ON_DEMAND: a reader asked since the last publish
    EeVblankStartHook m_vblankHook = nullptr;
    void *m_vblankHookUser = nullptr;
#endif
};
