# B-SCHED (src/xbox/PUSH-BC-PLAN.md section 5.1): scheduler, determinism
# (TS_DET, src/xbox/xbox_det.cpp), countdown (M3.1), pacing (M6.4/6.5).
EXTRA_GAME_SRCS += $(GAME)/ts_pacing.cpp

# make TS_DET=1: deterministic mode (src/xbox/xbox_det.h): pinned time and
# host inputs, per-frame [TS:det] hashes. Every file sees the switch (the
# generated code included: detTrace sits in inline runtime paths), so a
# change rebuilds everything. The TS_DET_* tunables pass through likewise.
TS_DET ?= 0
ifeq ($(TS_DET),1)
EXTRA_DEFINES += -DTS_DET=1
EXTRA_DEFINES += $(if $(TS_DET_EVERY),-DTS_DET_EVERY=$(TS_DET_EVERY)) $(if $(TS_DET_DUMP),-DTS_DET_DUMP=$(TS_DET_DUMP)) \
                 $(if $(TS_DET_TRACE),-DTS_DET_TRACE=$(TS_DET_TRACE)) $(if $(TS_DET_VBLANK),-DTS_DET_VBLANK=$(TS_DET_VBLANK))
endif

# M3.1, the 32-bit checkpoint countdown (ps2_runtime.h PS2X_EE_COUNTDOWN) and
# the one-compare call return (ps2_direct_call_xbox.h PS2X_CALL_RETURN_SLOW),
# both 0 by default until Train 2's gates. `make PS2X_EE_COUNTDOWN=1
# PS2X_CALL_RETURN_SLOW=1` switches them on (every file, generated code
# included). TS_EE_COUNTDOWN_CHECK=1 keeps the 64-bit clock beside the
# countdown and counts differences ([TS:ee] cdiff=, must stay 0).
# The kernel snapshot only when read (ee_scheduler.h TS_SNAPSHOT_ON_DEMAND,
# 1 by default). Frame pacing (project/game/ts_pacing.cpp TS_PACING, 1:
# timeTickStart wrapped, [TS:pace]; the carry itself is the knob
# pacing.carry, 0 by default).
B_SCHED_SWITCHES := PS2X_EE_COUNTDOWN PS2X_CALL_RETURN_SLOW TS_EE_COUNTDOWN_CHECK TS_SNAPSHOT_ON_DEMAND TS_PACING
B_SCHED_DEFINES := $(foreach v,$(B_SCHED_SWITCHES),$(if $($(v)),-D$(v)=$($(v))))
EXTRA_DEFINES += $(B_SCHED_DEFINES)

# The objects outside the generated code that read a switch rebuild when one
# changes (the generated code has its own stamp).
B_SCHED_STAMP := $(OUT)/gen/b_sched.flags
B_SCHED_OBJS := $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/Kernel/EeScheduler.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_host_settings.obj \
    $(OBJ)/src/xbox/xbox_det.obj $(OBJ)/src/xbox/xbox_perf.obj $(OBJ)/src/xbox/xbox_main.obj \
    $(OBJ)/src/xbox/xbox_raylib.obj $(OBJ)/project/game/ts_overrides.obj $(OBJ)/project/game/ts_pacing.obj \
    $(OBJ)/project/game/ts_native_math.obj $(OBJ)/project/game/ts_native_fp.obj \
    $(OBJ)/project/game/ts_native_game.obj $(OBJ)/project/game/ts_native_game2.obj \
    $(OBJ)/project/game/ts_native_game3.obj $(OBJ)/project/game/vu1_native_ts.obj
$(B_SCHED_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(TS_DET) $(B_SCHED_DEFINES)' ] || echo '$(TS_DET) $(B_SCHED_DEFINES)' > $@
$(B_SCHED_OBJS): $(B_SCHED_STAMP)

# Host test: the countdown clock (src/xbox/test/ee_countdown_test.cpp).
HOST_TESTS += ee_countdown_test
