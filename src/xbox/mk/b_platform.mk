# B-PLATFORM (src/xbox/PUSH-BC-PLAN.md section 5.3): locks (TS_GS_LOCK_ELIDE),
# timers, IOP, libc, guest memory placement. Week 0: the timer and guest
# memory halves split out of ps2_memory.cpp (W0-S), built -O2 like it.
EXTRA_RUNTIME_SRCS += $(RUNTIME)/src/lib/ps2_memory_timers.cpp $(RUNTIME)/src/lib/ps2_memory_alloc.cpp
EXTRA_XBOX_OBJS_FAST += $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory_timers.obj \
                        $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory_alloc.obj

# The switches. Each has its default in the source that reads it; `make
# NAME=0` or `NAME=1` overrides it for an A/B or a check build:
#   TS_UP_LOCKS           1  SRW / condition-variable counters without the lock prefix (winapi/sync_ts.c)
#   TS_CV_SKIP_IDLE_WAKE  0  no NtSetEvent when no waiter is counted (winapi/sync_ts.c)
#   TS_GS_LOCK_ELIDE      0  the GS state lock skipped (runtime/ps2_host_lock.h; gate: gsforeign)
#   TS_LOCK_CHECK         0  SC-E: GS lock calls by thread counted ([TS:plat] gsforeign=)
#   TS_IOP_IDLE           0  the IOP idle fast path (ps2x/iop_idle_stats.h)
#   TS_IOP_IDLE_CHECK     0  SC-E: the fast path checked against the full loop ([TS:plat] iop=.../miss)
#   TS_TIMER_DIVL         1  the EE timers' 64-bit divisions as divl (ps2_memory_timers.cpp)
#   TS_TIMER_CUE_MASK     1  only the counting EE timers visited (ps2_memory_timers.cpp)
#   TS_TIMER_CUE_CHECK    0  SC-E: the CUE mask against the modes ([TS:plat] cue=)
#   TS_SCRATCH_SHORTCUT   1  aligned scratchpad accesses straight to host memory (ps2_guest_memory_xbox.cpp)
#   TS_LIBC_CLASSES       1  memcpy / memset by size and alignment class (xbox_string.cpp)
#   TS_MEMCPY_SSE         0  movaps blocks in memcpy (xbox_string.cpp; needs the DPC audit)
#   TS_GUEST_PAGE_ALIGN   0  page-aligned RDRAM / VRAM / small memories (ps2_memory_alloc.cpp; gated, M3.8)
#   TS_CHRONO_MULT        1  steady_clock::now() by multiplier (xbox_chrono.cpp)
#   TS_PLATFORM_SELFTEST  0  the platform boot self-tests (xbox_platform_selftest.cpp)
# A given switch goes to every C++ file through EXTRA_DEFINES (the generated
# code then rebuilds through its own stamp); the objects that read one also
# depend on this fragment's stamp, so changing a switch rebuilds them.
B_PLATFORM_SWITCHES := TS_GS_LOCK_ELIDE TS_LOCK_CHECK TS_IOP_IDLE TS_IOP_IDLE_CHECK TS_TIMER_DIVL TS_TIMER_CUE_MASK \
                       TS_TIMER_CUE_CHECK TS_SCRATCH_SHORTCUT \
                       TS_LIBC_CLASSES TS_MEMCPY_SSE TS_GUEST_PAGE_ALIGN TS_CHRONO_MULT TS_PLATFORM_SELFTEST
B_PLATFORM_DEFINES := $(foreach v,$(B_PLATFORM_SWITCHES),$(if $($(v)),-D$(v)=$($(v))))
EXTRA_DEFINES += $(B_PLATFORM_DEFINES)
B_PLATFORM_C_DEFINES := $(if $(TS_UP_LOCKS),-DTS_UP_LOCKS=$(TS_UP_LOCKS)) \
                        $(if $(TS_CV_SKIP_IDLE_WAKE),-DTS_CV_SKIP_IDLE_WAKE=$(TS_CV_SKIP_IDLE_WAKE))
$(OBJ)/src/xbox/winapi/sync_ts.obj: PBKIT_CFLAGS += $(B_PLATFORM_C_DEFINES)

B_PLATFORM_STAMP := $(OUT)/gen/b_platform.flags
B_PLATFORM_OBJS := $(OBJ)/src/xbox/winapi/sync_ts.obj $(OBJ)/src/xbox/xbox_string.obj $(OBJ)/src/xbox/xbox_chrono.obj \
    $(OBJ)/src/xbox/xbox_perf.obj $(OBJ)/src/xbox/xbox_platform_selftest.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_frontend.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory_timers.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory_alloc.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_guest_memory_xbox.obj \
    $(OBJ)/source/PS2Recomp/ps2xIOP/src/emulator/iop_emulator.obj
$(B_PLATFORM_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(B_PLATFORM_DEFINES) $(B_PLATFORM_C_DEFINES)' ] || echo '$(B_PLATFORM_DEFINES) $(B_PLATFORM_C_DEFINES)' > $@
$(B_PLATFORM_OBJS): $(B_PLATFORM_STAMP)
# (The libc classes are i386 assembly; the host toolchain here is x86-64
# only, so they are tested at boot, TS_PLATFORM_SELFTEST, not as a host test.)
