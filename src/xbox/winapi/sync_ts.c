// Copy of nxdk's lib/winapi/sync.c for the TimeSplitters Xbox build, built
// in place of the library's (see src/xbox/Makefile). Changes, marked TS:
//  - condition-variable waits are capped at 10 ms (they may wake early);
//  - condition-variable timeouts are relative waits in 100 ns units (nxdk
//    passed milliseconds * 1000 as a positive, i.e. absolute, time, so every
//    timed wait returned at once);
//  - a waiter is counted before the lock is released (a wake in between
//    was lost, and the waiter slept until its timeout, or forever);
//  - a timed-out wait sets ERROR_TIMEOUT. libc++ reads GetLastError() after
//    a failed wait; the stale value left by an earlier call (a file not
//    found, say) made it treat a timeout as an error and abort.
//  - TS_UP_LOCKS (default 1; src/xbox/PUSH-BC-PLAN.md M3.3, B-PLATFORM): the
//    SRW lock and condition-variable counters use cmpxchg / and / xadd
//    without the lock prefix. The Xbox has one CPU and no other bus master
//    touches these words, and an interrupt (so a thread switch) only comes
//    between two instructions, so one read-modify-write instruction is
//    atomic as it is; the prefix only costs its bus lock (about 20 cycles on
//    the Pentium III). 0: the __sync/__atomic builtins, as nxdk has them.
//  - TS_CV_SKIP_IDLE_WAKE (default 0): a wake with no waiter counted is not
//    sent (no NtSetEvent kernel call). Every waiter is counted before it
//    lets the lock go (above), so a waiter that would see the wake has
//    already counted itself; one that has not re-checks its condition under
//    the lock first. The one difference: a notifier that changes the
//    condition without the lock (an atomic flag) and races a waiter between
//    its check and its count costs that waiter one 10 ms wait instead of a
//    stale wake left set. Off until Train 1's A/B.
// SPDX-License-Identifier: MIT

// SPDX-FileCopyrightText: 2019-2020 Stefan Schmidt
// SPDX-FileCopyrightText: 2020 Jannik Vogel
// SPDX-FileCopyrightText: 2022 Ryan Wendland

#include <assert.h>
#include <processthreadsapi.h>
#include <stdbool.h>
#include <synchapi.h>
#include <winbase.h>
#include <winerror.h>
#include <xboxkrnl/xboxkrnl.h>

// The lock census of the measurement build (make TS_MEASURE_PUSHBC=1;
// runtime/ps2_measure.h, counted in src/xbox/xbox_measure.cpp): every
// critical section entered and SRW lock taken, by return address and lock
// object, with contention. Nothing otherwise.
#if defined(TS_MEASURE_PUSHBC) && TS_MEASURE_PUSHBC
void xboxMeasureLock(const void *ret, const void *object, int kind, int contended);
#define TS_LOCK_CENSUS(object, kind, contended) xboxMeasureLock(__builtin_return_address(0), (object), (kind), (contended))
#else
#define TS_LOCK_CENSUS(object, kind, contended) ((void)0)
#endif

VOID InitializeCriticalSection (LPCRITICAL_SECTION lpCriticalSection)
{
    RtlInitializeCriticalSection(lpCriticalSection);
}

BOOL InitializeCriticalSectionAndSpinCount (LPCRITICAL_SECTION lpCriticalSection, DWORD dwSpinCount)
{
    // From the MSDN: The spin count for the critical section object
    // On single-processor systems, the spin count is ignored and the critical
    // section spin count is set to 0 (zero).
    InitializeCriticalSection(lpCriticalSection);
    return TRUE;
}

VOID DeleteCriticalSection (LPCRITICAL_SECTION lpCriticalSection)
{
    RtlDeleteCriticalSection(lpCriticalSection);
}

VOID EnterCriticalSection (LPCRITICAL_SECTION lpCriticalSection)
{
    // Contended: held by another thread on entry (a glance, not a lock).
    TS_LOCK_CENSUS(lpCriticalSection, 0,
                   lpCriticalSection->LockCount >= 0 && lpCriticalSection->OwningThread != (PVOID)KeGetCurrentThread());
    RtlEnterCriticalSection(lpCriticalSection);
}

BOOL TryEnterCriticalSection (LPCRITICAL_SECTION lpCriticalSection)
{
    return RtlTryEnterCriticalSection(lpCriticalSection);
}

VOID LeaveCriticalSection (LPCRITICAL_SECTION lpCriticalSection)
{
    RtlLeaveCriticalSection(lpCriticalSection);
}

#ifndef TS_UP_LOCKS
#define TS_UP_LOCKS 1
#endif
#ifndef TS_CV_SKIP_IDLE_WAKE
#define TS_CV_SKIP_IDLE_WAKE 0
#endif

#if TS_UP_LOCKS && defined(__i386__)
// Uniprocessor read-modify-writes (TS_UP_LOCKS, above): one instruction
// each, no lock prefix; "memory" keeps the compiler from moving guarded
// accesses across them (the CPU keeps its own order on one core).
static inline bool up_cas (volatile uintptr_t *p, uintptr_t expected, uintptr_t desired)
{
    uintptr_t prev;
    __asm__ __volatile__("cmpxchgl %2, %1" : "=a"(prev), "+m"(*p) : "r"(desired), "0"(expected) : "memory", "cc");
    return prev == expected;
}
static inline void up_and (volatile uintptr_t *p, uintptr_t mask)
{
    __asm__ __volatile__("andl %1, %0" : "+m"(*p) : "ir"(mask) : "memory", "cc");
}
static inline uintptr_t up_xadd (volatile uintptr_t *p, uintptr_t delta)
{
    __asm__ __volatile__("xaddl %0, %1" : "+r"(delta), "+m"(*p) : : "memory", "cc");
    return delta; // the value before
}
#define TS_CAS(p, e, d)    up_cas((volatile uintptr_t *)(p), (uintptr_t)(e), (uintptr_t)(d))
#define TS_AND(p, m)       up_and((volatile uintptr_t *)(p), (uintptr_t)(m))
#define TS_FETCH_ADD(p, v) up_xadd((volatile uintptr_t *)(p), (uintptr_t)(v))
#define TS_FETCH_SUB(p, v) up_xadd((volatile uintptr_t *)(p), (uintptr_t)0 - (uintptr_t)(v))
#define TS_COUNT_ADD(p, v) ((int)up_xadd((volatile uintptr_t *)(p), (uintptr_t)(intptr_t)(v)))
#else
#define TS_CAS(p, e, d)    __sync_bool_compare_and_swap((p), (e), (d))
#define TS_AND(p, m)       ((void)__sync_fetch_and_and((p), (m)))
#define TS_FETCH_ADD(p, v) __atomic_fetch_add((p), (v), __ATOMIC_ACQ_REL)
#define TS_FETCH_SUB(p, v) __atomic_fetch_sub((p), (v), __ATOMIC_ACQ_REL)
#define TS_COUNT_ADD(p, v) ((int)__atomic_fetch_add((p), (v), __ATOMIC_ACQ_REL))
#endif

#define SRW_GLOBAL_LOCK_MASK  ((uintptr_t)0x40000000)
#define SRW_READER_LOCK_MASK  ((uintptr_t)0x80000000)
#define SRW_READER_COUNT_MASK ~(SRW_GLOBAL_LOCK_MASK | SRW_READER_LOCK_MASK)

static bool TryAcquireLockMask (uintptr_t *lock, uintptr_t mask)
{
    uintptr_t unlocked_val = *lock & ~mask;
    return TS_CAS(lock, unlocked_val, unlocked_val | mask);
}

static void ReleaseLockMask (uintptr_t *lock, uintptr_t mask)
{
    TS_AND(lock, ~mask);
}

void AcquireSRWLockExclusive (PSRWLOCK SRWLock)
{
#if defined(TS_MEASURE_PUSHBC) && TS_MEASURE_PUSHBC
    int spins = 0;
#endif
    // Grab the global lock (second-highest bit)
    while (!TryAcquireLockMask(&SRWLock->Ptr, SRW_GLOBAL_LOCK_MASK)) {
#if defined(TS_MEASURE_PUSHBC) && TS_MEASURE_PUSHBC
        ++spins;
#endif
        SwitchToThread();
    }
#if defined(TS_MEASURE_PUSHBC) && TS_MEASURE_PUSHBC
    TS_LOCK_CENSUS(SRWLock, 1, spins);
#endif
}

void AcquireSRWLockShared (PSRWLOCK SRWLock)
{
#if defined(TS_MEASURE_PUSHBC) && TS_MEASURE_PUSHBC
    int spins = 0;
#endif
    // Grab the reader lock
    while (!TryAcquireLockMask(&SRWLock->Ptr, SRW_READER_LOCK_MASK)) {
#if defined(TS_MEASURE_PUSHBC) && TS_MEASURE_PUSHBC
        ++spins;
#endif
        SwitchToThread();
    }
#if defined(TS_MEASURE_PUSHBC) && TS_MEASURE_PUSHBC
    TS_LOCK_CENSUS(SRWLock, 1, spins);
#endif

    // Increase reader count by one
    uintptr_t prev_val = TS_FETCH_ADD(&SRWLock->Ptr, 1);
    if ((prev_val & SRW_READER_COUNT_MASK) == 0) {
        // If we're the first reader, grab the global lock, too
        AcquireSRWLockExclusive(SRWLock);
    }

    // Release the reader lock
    ReleaseLockMask(&SRWLock->Ptr, SRW_READER_LOCK_MASK);
}

void InitializeSRWLock (PSRWLOCK SRWLock)
{
    __atomic_store_n(&SRWLock->Ptr, 0, __ATOMIC_RELEASE);
}

void ReleaseSRWLockExclusive (PSRWLOCK SRWLock)
{
    // Release the global lock (second-highest bit)
    ReleaseLockMask(&SRWLock->Ptr, SRW_GLOBAL_LOCK_MASK);
}

void ReleaseSRWLockShared (PSRWLOCK SRWLock)
{
    // Grab the reader lock
    while (!TryAcquireLockMask(&SRWLock->Ptr, SRW_READER_LOCK_MASK)) {
        SwitchToThread();
    }

    // Decrease reader count by one
    uintptr_t prev_val = TS_FETCH_SUB(&SRWLock->Ptr, 1);
    assert((prev_val & SRW_READER_COUNT_MASK) != 0);
    if ((prev_val & SRW_READER_COUNT_MASK) == 1) {
        // If we're the last reader, release the global lock
        ReleaseSRWLockExclusive(SRWLock);
    }

    // Release the reader lock
    ReleaseLockMask(&SRWLock->Ptr, SRW_READER_LOCK_MASK);
}

BOOLEAN TryAcquireSRWLockExclusive (PSRWLOCK SRWLock)
{
    // Try once to grab the global lock, return whether we succeeded
    return TryAcquireLockMask(&SRWLock->Ptr, SRW_GLOBAL_LOCK_MASK);
}

BOOLEAN TryAcquireSRWLockShared (PSRWLOCK SRWLock)
{
    bool success;

    // Grab the reader lock
    while (!TryAcquireLockMask(&SRWLock->Ptr, SRW_READER_LOCK_MASK)) {
        SwitchToThread();
    }

    // Increase reader count by one
    uintptr_t prev_val = TS_FETCH_ADD(&SRWLock->Ptr, 1);
    if ((prev_val & SRW_READER_COUNT_MASK) == 0) {
        // If we're the first reader, try grab the global lock
        success = TryAcquireSRWLockExclusive(SRWLock);
    } else {
        success = TRUE;
    }

    if (!success) {
        // If we didn't succeed, we decrement the reader count again
        TS_FETCH_SUB(&SRWLock->Ptr, 1);
    }

    // Release the reader lock
    ReleaseLockMask(&SRWLock->Ptr, SRW_READER_LOCK_MASK);

    return success;
}

#define INITONCE_MASK              (((uintptr_t)1 << INIT_ONCE_CTX_RESERVED_BITS) - 1)
#define INITONCE_UNINITIALIZED     0
#define INITONCE_IN_PROGRESS       1
#define INITONCE_ASYNC_IN_PROGRESS 2
#define INITONCE_DONE              3

BOOL InitOnceBeginInitialize (LPINIT_ONCE lpInitOnce, DWORD dwFlags, PBOOL fPending, LPVOID *lpContext)
{
    assert(fPending != NULL);

    if (dwFlags & INIT_ONCE_CHECK_ONLY) {
        if (dwFlags & INIT_ONCE_ASYNC) {
            *fPending = FALSE;
            SetLastError(ERROR_INVALID_PARAMETER);
            return FALSE;
        }
        if (((ULONG_PTR)lpInitOnce->Ptr & INITONCE_MASK) != INITONCE_DONE) {
            *fPending = TRUE;
            SetLastError(ERROR_GEN_FAILURE);
            return FALSE;
        }

        if (lpContext) {
            *lpContext = (LPVOID)((ULONG_PTR)lpInitOnce->Ptr & ~INITONCE_MASK);
        }
        // success
        *fPending = FALSE;
        return TRUE;
    }

    while (true) {
        switch ((ULONG_PTR)__atomic_load_n(&lpInitOnce->Ptr, __ATOMIC_ACQUIRE) & INITONCE_MASK) {
            case INITONCE_UNINITIALIZED:
                if (__sync_bool_compare_and_swap(&lpInitOnce->Ptr, (PVOID)INITONCE_UNINITIALIZED, (dwFlags & INIT_ONCE_ASYNC) ? (PVOID)INITONCE_ASYNC_IN_PROGRESS : (PVOID)INITONCE_IN_PROGRESS)) {
                    *fPending = TRUE;
                    return TRUE;
                }
                break;
            case INITONCE_IN_PROGRESS:
                if (dwFlags & INIT_ONCE_ASYNC) {
                    SetLastError(ERROR_INVALID_PARAMETER);
                    *fPending = TRUE;
                    return FALSE;
                }
                SwitchToThread();
                break;
            case INITONCE_ASYNC_IN_PROGRESS:
                if (!(dwFlags & INIT_ONCE_ASYNC)) {
                    SetLastError(ERROR_INVALID_PARAMETER);
                    *fPending = TRUE;
                    return FALSE;
                }
                *fPending = TRUE;
                return TRUE;
            case INITONCE_DONE:
                if (lpContext) {
                    *lpContext = (PVOID)((ULONG_PTR)lpInitOnce->Ptr & ~INITONCE_MASK);
                }
                *fPending = FALSE;
                return TRUE;
        }
    }
}

BOOL InitOnceExecuteOnce (PINIT_ONCE InitOnce, PINIT_ONCE_FN InitFn, PVOID Parameter, LPVOID *Context)
{
    if ((((ULONG_PTR)Context) & INITONCE_MASK) != INITONCE_UNINITIALIZED) {
        SetLastError(ERROR_INVALID_PARAMETER);
        return FALSE;
    }

    BOOL fPending;
    BOOL ret;
    ret = InitOnceBeginInitialize(InitOnce, 0, &fPending, Context);
    if (!fPending) {
        return ret;
    }

    if (InitFn(InitOnce, Parameter, Context)) {
        return InitOnceComplete(InitOnce, 0, Context ? *Context : NULL);
    }

    BOOL success = InitOnceComplete(InitOnce, INIT_ONCE_INIT_FAILED, NULL);
    assert(success);
    return FALSE;
}

BOOL InitOnceComplete (LPINIT_ONCE lpInitOnce, DWORD dwFlags, LPVOID lpContext)
{
    if (((ULONG_PTR)lpContext & INITONCE_MASK) != INITONCE_UNINITIALIZED) {
        SetLastError(ERROR_INVALID_PARAMETER);
        return FALSE;
    }

    if (dwFlags & INIT_ONCE_INIT_FAILED) {
        if (lpContext || (dwFlags & INIT_ONCE_ASYNC)) {
            SetLastError(ERROR_INVALID_PARAMETER);
            return FALSE;
        }
    } else {
        lpContext = (PVOID)((ULONG_PTR)lpContext | INITONCE_DONE);
    }

    while (true) {
        PVOID cur_val = lpInitOnce->Ptr;

        switch ((ULONG_PTR)lpInitOnce->Ptr & INITONCE_MASK) {
            case INITONCE_IN_PROGRESS:
                if (__sync_val_compare_and_swap(&lpInitOnce->Ptr, cur_val, lpContext) != cur_val) {
                    break; // failed to swap the value, try again
                }

                // init done, waiters continue because they were spinning in InitOnceBeginInitialize
                return TRUE;
            case INITONCE_ASYNC_IN_PROGRESS:
                if (!(dwFlags & INIT_ONCE_ASYNC)) {
                    SetLastError(ERROR_INVALID_PARAMETER);
                    return FALSE;
                }

                if (__sync_val_compare_and_swap(&lpInitOnce->Ptr, cur_val, lpContext) == cur_val) {
                    // async init done
                    return TRUE;
                }
                break;
            default:
                SetLastError(ERROR_GEN_FAILURE);
                return FALSE;
        }
    }
}

static BOOL WINAPI condvar_init (PINIT_ONCE InitOnce, PVOID Parameter, PVOID *Context)
{
    PCONDITION_VARIABLE ConditionVariable = Parameter;
    NTSTATUS status;
    assert(ConditionVariable->waitCount == 0);
    assert(ConditionVariable->eventHandles[0] == INVALID_HANDLE_VALUE);
    assert(ConditionVariable->eventHandles[1] == INVALID_HANDLE_VALUE);
    status = NtCreateEvent(&ConditionVariable->eventHandles[0], NULL, SynchronizationEvent, FALSE);
    assert(NT_SUCCESS(status));
    status = NtCreateEvent(&ConditionVariable->eventHandles[1], NULL, NotificationEvent, FALSE);
    assert(NT_SUCCESS(status));
    return true;
}

VOID InitializeConditionVariable (PCONDITION_VARIABLE ConditionVariable)
{
    ConditionVariable->initOnce.Ptr = 0;
    __atomic_store_n(&ConditionVariable->waitCount, 0, __ATOMIC_RELEASE);
    ConditionVariable->eventHandles[0] = INVALID_HANDLE_VALUE;
    ConditionVariable->eventHandles[1] = INVALID_HANDLE_VALUE;

    BOOL success = InitOnceExecuteOnce(&ConditionVariable->initOnce, condvar_init, ConditionVariable, NULL);
    assert(success);
}

BOOL SleepConditionVariableCS (PCONDITION_VARIABLE ConditionVariable, PCRITICAL_SECTION CriticalSection, DWORD dwMilliseconds)
{
    BOOL success = InitOnceExecuteOnce(&ConditionVariable->initOnce, condvar_init, ConditionVariable, NULL);
    assert(success);

    NTSTATUS status;
    LARGE_INTEGER waitTime;
    LARGE_INTEGER *waitTimePtr = NULL;

    //TS: relative, in 100 ns units, and never longer than 10 ms: condition
    //    variables may wake early (every caller re-checks and waits again),
    //    so a wake that goes missing costs 10 ms instead of a hang.
    const DWORD cappedMs = dwMilliseconds < 10u ? dwMilliseconds : 10u;
    waitTime.QuadPart = -(LONGLONG)cappedMs * 10000;
    waitTimePtr = &waitTime;

    //TS: count the waiter before giving up the lock, so a wake sent in between
    //    is not lost (it leaves the event set for the wait below).
    TS_COUNT_ADD(&ConditionVariable->waitCount, 1);
    LeaveCriticalSection(CriticalSection);
    status = NtWaitForMultipleObjectsEx(2, ConditionVariable->eventHandles, WaitAny, UserMode, FALSE, waitTimePtr);
    if (status == WAIT_FAILED || status == STATUS_TIMEOUT) {
        SetLastError(status == STATUS_TIMEOUT ? ERROR_TIMEOUT : ERROR_GEN_FAILURE); //TS
        TS_COUNT_ADD(&ConditionVariable->waitCount, -1);
        EnterCriticalSection(CriticalSection);
        return FALSE;
    }

    int oldCount = TS_COUNT_ADD(&ConditionVariable->waitCount, -1);
    if (oldCount == 1) {
        // Last waiter needs to manually reset the broadcast-object
        status = NtClearEvent(ConditionVariable->eventHandles[1]);
        if (!NT_SUCCESS(status)) {
            EnterCriticalSection(CriticalSection);
            return FALSE;
        }
    }

    EnterCriticalSection(CriticalSection);
    return TRUE;
}

BOOL SleepConditionVariableSRW (PCONDITION_VARIABLE ConditionVariable, PSRWLOCK SRWLock, DWORD dwMilliseconds, ULONG Flags)
{
    BOOL success = InitOnceExecuteOnce(&ConditionVariable->initOnce, condvar_init, ConditionVariable, NULL);
    assert(success);

    NTSTATUS status;
    LARGE_INTEGER waitTime;
    LARGE_INTEGER *waitTimePtr = NULL;

    //TS: relative, in 100 ns units, and never longer than 10 ms: condition
    //    variables may wake early (every caller re-checks and waits again),
    //    so a wake that goes missing costs 10 ms instead of a hang.
    const DWORD cappedMs = dwMilliseconds < 10u ? dwMilliseconds : 10u;
    waitTime.QuadPart = -(LONGLONG)cappedMs * 10000;
    waitTimePtr = &waitTime;

    //TS: count the waiter before giving up the lock, so a wake sent in between
    //    is not lost (it leaves the event set for the wait below).
    TS_COUNT_ADD(&ConditionVariable->waitCount, 1);
    if (Flags == CONDITION_VARIABLE_LOCKMODE_SHARED) {
        ReleaseSRWLockShared(SRWLock);
    } else {
        ReleaseSRWLockExclusive(SRWLock);
    }
    status = NtWaitForMultipleObjectsEx(2, ConditionVariable->eventHandles, WaitAny, UserMode, FALSE, waitTimePtr);
    if (status == WAIT_FAILED || status == STATUS_TIMEOUT) {
        SetLastError(status == STATUS_TIMEOUT ? ERROR_TIMEOUT : ERROR_GEN_FAILURE); //TS
        TS_COUNT_ADD(&ConditionVariable->waitCount, -1);
        if (Flags == CONDITION_VARIABLE_LOCKMODE_SHARED) {
            AcquireSRWLockShared(SRWLock);
        } else {
            AcquireSRWLockExclusive(SRWLock);
        }
        return FALSE;
    }

    int oldCount = TS_COUNT_ADD(&ConditionVariable->waitCount, -1);
    if (oldCount == 1) {
        // Last waiter needs to manually reset the broadcast-object
        status = NtClearEvent(ConditionVariable->eventHandles[1]);
        if (!NT_SUCCESS(status)) {
            if (Flags == CONDITION_VARIABLE_LOCKMODE_SHARED) {
                AcquireSRWLockShared(SRWLock);
            } else {
                AcquireSRWLockExclusive(SRWLock);
            }
            return FALSE;
        }
    }

    if (Flags == CONDITION_VARIABLE_LOCKMODE_SHARED) {
        AcquireSRWLockShared(SRWLock);
    } else {
        AcquireSRWLockExclusive(SRWLock);
    }
    return TRUE;
}

VOID WakeConditionVariable (PCONDITION_VARIABLE ConditionVariable)
{
#if TS_CV_SKIP_IDLE_WAKE
    if (__atomic_load_n(&ConditionVariable->waitCount, __ATOMIC_ACQUIRE) == 0)
        return; // nobody counted: nobody to wake (TS_CV_SKIP_IDLE_WAKE, above)
#endif
    BOOL success = InitOnceExecuteOnce(&ConditionVariable->initOnce, condvar_init, ConditionVariable, NULL);
    assert(success);

    NTSTATUS status;
    status = NtSetEvent(ConditionVariable->eventHandles[0], NULL);
    assert(NT_SUCCESS(status));
}

VOID WakeAllConditionVariable (PCONDITION_VARIABLE ConditionVariable)
{
#if TS_CV_SKIP_IDLE_WAKE
    if (__atomic_load_n(&ConditionVariable->waitCount, __ATOMIC_ACQUIRE) == 0)
        return;
#endif
    BOOL success = InitOnceExecuteOnce(&ConditionVariable->initOnce, condvar_init, ConditionVariable, NULL);
    assert(success);

    NTSTATUS status;
    status = NtSetEvent(ConditionVariable->eventHandles[1], NULL);
    assert(NT_SUCCESS(status));
}

VOID UninitializeConditionVariable (PCONDITION_VARIABLE ConditionVariable)
{
    //TS: libc++ destroys every std::condition_variable through here
    //    (src/xbox/compat/xbox_prelude.h), never-used ones too: those have no
    //    events yet (their handles are still 0 from libc++'s static
    //    initializer), so only the events of one that was initialized close.
    if (((ULONG_PTR)ConditionVariable->initOnce.Ptr & INITONCE_MASK) == INITONCE_DONE) {
        for (int i = 0; i < 2; ++i) {
            HANDLE handle = ConditionVariable->eventHandles[i];
            if (handle != NULL && handle != INVALID_HANDLE_VALUE)
                NtClose(handle);
        }
    }
    ConditionVariable->initOnce.Ptr = (PVOID)INITONCE_DONE;
    ConditionVariable->eventHandles[0] = INVALID_HANDLE_VALUE;
    ConditionVariable->eventHandles[1] = INVALID_HANDLE_VALUE;
}

VOID Sleep (DWORD dwMilliseconds)
{
    SleepEx(dwMilliseconds, FALSE);
}

DWORD SleepEx (DWORD dwMilliseconds, BOOL bAlertable)
{
    LARGE_INTEGER duration;
    duration.QuadPart = ((LONGLONG)dwMilliseconds) * -10000;
    while (true) {
        NTSTATUS status = KeDelayExecutionThread(UserMode, bAlertable, &duration);
        if (status != STATUS_ALERTED) {
            return status == STATUS_USER_APC ? WAIT_IO_COMPLETION : 0;
        }
    }
}

DWORD WaitForSingleObjectEx (HANDLE hHandle, DWORD dwMilliseconds, BOOL bAlertable)
{
    LARGE_INTEGER duration;
    duration.QuadPart = ((LONGLONG)dwMilliseconds) * -10000;

    while (true) {
        NTSTATUS status = NtWaitForSingleObjectEx(hHandle, UserMode, bAlertable, &duration);

        if (status == STATUS_ALERTED) {
            continue;
        }

        if (!NT_SUCCESS(status)) {
            SetLastError(RtlNtStatusToDosError(status));
            return WAIT_FAILED;
        }

        return status;
    }
}

DWORD WaitForSingleObject (HANDLE hHandle, DWORD dwMilliseconds)
{
    return WaitForSingleObjectEx(hHandle, dwMilliseconds, FALSE);
}

DWORD WaitForMultipleObjectsEx (DWORD nCount, const HANDLE *lpHandles, BOOL bWaitAll, DWORD dwMilliseconds, BOOL bAlertable)
{
    LARGE_INTEGER duration;
    duration.QuadPart = ((LONGLONG)dwMilliseconds) * -10000;

    while (true) {
        NTSTATUS status = NtWaitForMultipleObjectsEx(nCount, lpHandles, bWaitAll ? WaitAll : WaitAny, UserMode, bAlertable, &duration);

        if (status == STATUS_ALERTED) {
            continue;
        }

        if (!NT_SUCCESS(status)) {
            SetLastError(RtlNtStatusToDosError(status));
            return WAIT_FAILED;
        }

        return status;
    }
}

DWORD WaitForMultipleObjects (DWORD nCount, const HANDLE *lpHandles, BOOL bWaitAll, DWORD dwMilliseconds)
{
    return WaitForMultipleObjectsEx(nCount, lpHandles, bWaitAll, dwMilliseconds, FALSE);
}

HANDLE CreateSemaphore (LPSECURITY_ATTRIBUTES lpSemaphoreAttributes, LONG lInitialCount, LONG lMaximumCount, LPCSTR lpName)
{
    NTSTATUS status;
    HANDLE handle;
    ANSI_STRING obj_name;
    OBJECT_ATTRIBUTES obj_attributes;
    POBJECT_ATTRIBUTES obj_attributes_ptr;

    if (lpName) {
        RtlInitAnsiString(&obj_name, lpName);
        InitializeObjectAttributes(&obj_attributes, &obj_name, OBJ_OPENIF, ObWin32NamedObjectsDirectory(), NULL);
        obj_attributes_ptr = &obj_attributes;
    } else {
        obj_attributes_ptr = NULL;
    }

    status = NtCreateSemaphore(&handle, obj_attributes_ptr, lInitialCount, lMaximumCount);
    if (!NT_SUCCESS(status)) {
        SetLastError(RtlNtStatusToDosError(status));
        return NULL;
    }

    if (status == STATUS_OBJECT_NAME_EXISTS) {
        SetLastError(ERROR_ALREADY_EXISTS);
    } else {
        SetLastError(0);
    }

    return handle;
}

BOOL ReleaseSemaphore (HANDLE hSemaphore, LONG lReleaseCount, LPLONG lpPreviousCount)
{
    NTSTATUS status;

    status = NtReleaseSemaphore(hSemaphore, lReleaseCount, lpPreviousCount);
    if (NT_SUCCESS(status)) {
        return TRUE;
    }

    SetLastError(RtlNtStatusToDosError(status));
    return FALSE;
}

HANDLE CreateMutexA (LPSECURITY_ATTRIBUTES lpMutexAttributes, BOOL bInitialOwner, LPCSTR lpName)
{
    NTSTATUS status;
    HANDLE handle;
    ANSI_STRING obj_name;
    OBJECT_ATTRIBUTES obj_attributes;
    POBJECT_ATTRIBUTES obj_attributes_ptr;

    if (lpName) {
        RtlInitAnsiString(&obj_name, lpName);
        InitializeObjectAttributes(&obj_attributes, &obj_name, OBJ_OPENIF, ObWin32NamedObjectsDirectory(), NULL);
        obj_attributes_ptr = &obj_attributes;
    } else {
        obj_attributes_ptr = NULL;
    }

    status = NtCreateMutant(&handle, obj_attributes_ptr, bInitialOwner);
    if (!NT_SUCCESS(status)) {
        SetLastError(RtlNtStatusToDosError(status));
        return NULL;
    }

    if (status == STATUS_OBJECT_NAME_EXISTS) {
        SetLastError(ERROR_ALREADY_EXISTS);
    } else {
        SetLastError(0);
    }

    return handle;
}

BOOL ReleaseMutex (HANDLE hMutex)
{
    NTSTATUS status;

    status = NtReleaseMutant(hMutex, NULL);
    if (NT_SUCCESS(status)) {
        return TRUE;
    }

    SetLastError(RtlNtStatusToDosError(status));
    return FALSE;
}

HANDLE CreateEventA (LPSECURITY_ATTRIBUTES lpEventAttributes, BOOL bManualReset, BOOL bInitialState, LPCSTR lpName)
{
    NTSTATUS status;
    HANDLE handle;
    ANSI_STRING obj_name;
    OBJECT_ATTRIBUTES obj_attributes;
    POBJECT_ATTRIBUTES obj_attributes_ptr;
    EVENT_TYPE event;

    if (lpName) {
        RtlInitAnsiString(&obj_name, lpName);
        InitializeObjectAttributes(&obj_attributes, &obj_name, OBJ_OPENIF, ObWin32NamedObjectsDirectory(), NULL);
        obj_attributes_ptr = &obj_attributes;
    } else {
        obj_attributes_ptr = NULL;
    }

    if (bManualReset) {
        event = NotificationEvent;
    } else {
        event = SynchronizationEvent;
    }

    status = NtCreateEvent(&handle, obj_attributes_ptr, event, bInitialState);
    if (!NT_SUCCESS(status)) {
        SetLastError(RtlNtStatusToDosError(status));
        return NULL;
    }

    if (status == STATUS_OBJECT_NAME_EXISTS) {
        SetLastError(ERROR_ALREADY_EXISTS);
    } else {
        SetLastError(0);
    }

    return handle;
}

BOOL SetEvent (HANDLE hEvent)
{
    NTSTATUS status;

    status = NtSetEvent(hEvent, NULL);
    if (NT_SUCCESS(status)) {
        return TRUE;
    }

    SetLastError(RtlNtStatusToDosError(status));
    return FALSE;
}

BOOL ResetEvent (HANDLE hEvent)
{
    NTSTATUS status;

    status = NtClearEvent(hEvent);
    if (NT_SUCCESS(status)) {
        return TRUE;
    }

    SetLastError(RtlNtStatusToDosError(status));
    return FALSE;
}

BOOL PulseEvent (HANDLE hEvent)
{
    NTSTATUS status;

    status = NtPulseEvent(hEvent, NULL);
    if (NT_SUCCESS(status)) {
        return TRUE;
    }

    SetLastError(RtlNtStatusToDosError(status));
    return FALSE;
}
