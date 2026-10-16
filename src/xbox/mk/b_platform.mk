# B-PLATFORM (src/xbox/PUSH-BC-PLAN.md section 5.3): locks (TS_GS_LOCK_ELIDE),
# timers, IOP, libc, guest memory placement. Week 0: the timer and guest
# memory halves split out of ps2_memory.cpp (W0-S), built -O2 like it.
EXTRA_RUNTIME_SRCS += $(RUNTIME)/src/lib/ps2_memory_timers.cpp $(RUNTIME)/src/lib/ps2_memory_alloc.cpp
EXTRA_XBOX_OBJS_FAST += $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory_timers.obj \
                        $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory_alloc.obj
