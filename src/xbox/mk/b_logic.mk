# B-LOGIC (src/xbox/PUSH-BC-PLAN.md section 5.6): the idiomatic game-logic
# modules under project/game/native, their audits and the lockstep harness.
# Every switch here is off by default: the default build registers no
# idiomatic module and logs nothing new.
#
# Included by the Makefile before its own variables: only ROOT, OUT, OBJ,
# RUNTIME, GAME, GENERATED and XBOX exist yet.
EXTRA_GAME_SRCS += $(GAME)/native/ts_native_idiom.cpp

# ---- M7.1, x87 doubles (project/game/native/ts_fp_x87.cpp).
#   make TS_FP_X87=1            dpadd/dpsub/dpmul/dpdiv/dpcmp/fptodp/dptofp/
#                               dptoli/__ieee754_sqrt on the x87, fp-bit
#                               transcriptions as the fallback; knob idiom
#                               bit 0 switches the module off in a session
#   make TS_FP_X87_BOOTTEST=1   each routine against its translated original
#                               at boot, Abi mode ([TS:x87] lines; one that
#                               differs stays on its transcription)
#   make TS_FP_X87_SELFCHECK=1  every accepted call also runs the
#                               transcription on a copy ([TS:idiom] fpdiff=0)
TS_FP_X87 ?= 0
TS_FP_X87_BOOTTEST ?= 0
TS_FP_X87_SELFCHECK ?= 0
ifeq ($(TS_FP_X87),1)
EXTRA_GAME_SRCS += $(GAME)/native/ts_fp_x87.cpp
endif

# ---- The inline leaf cores (project/game/native/ts_leaf.h, consumed by
# B-CODEGEN's TS_LEAF_CALLS): make TS_LEAF_BOOTTEST=1 tests each core
# against its translated original at boot ([TS:leaf]).
TS_LEAF_BOOTTEST ?= 0

# ---- The lockstep (project/game/native/ts_lockstep.cpp; check build SC-L):
#   make TS_NATIVE_LOCKSTEP=N   one call in N of every pure idiomatic entry
#                               runs the previous occupant first (journaled,
#                               undone) and is compared ([TS:idiom] ls.*);
#                               knob lockstep.control=1 is the control run
#   make PS2X_WRITE_JOURNAL=1   the journal hook alone (TS_NATIVE_LOCKSTEP
#                               sets it)
#   make TS_NATIVE_POISON=1     the free registers of every Abi entry are
#                               poisoned after each call
TS_NATIVE_LOCKSTEP ?= 0
TS_NATIVE_POISON ?= 0
ifneq ($(TS_NATIVE_LOCKSTEP),0)
PS2X_WRITE_JOURNAL := 1
endif
PS2X_WRITE_JOURNAL ?= 0
ifeq ($(PS2X_WRITE_JOURNAL),1)
EXTRA_GAME_SRCS += $(GAME)/native/ts_lockstep.cpp
# (every guest store sees it: EXTRA_DEFINES is in the generated code's stamp;
# the other objects that store are listed with the stamp below)
EXTRA_DEFINES += -DPS2X_WRITE_JOURNAL=1
endif

# ---- M7.0 in the natives: make TS_NATIVE_NOYIELD=1 runs the native lighting
# update (ts_native_math.cpp) as one no-yield region (B-SCHED's
# ps2xNoYieldEnter/Leave; its callees are all pure), so it finishes instead
# of handing the call to the translated original when a checkpoint comes due.
# Timing only; off until B-SCHED's regions and the console A/B.
TS_NATIVE_NOYIELD ?= 0

# ---- Direct leaf calls inside the natives: make TS_NATIVE_DIRECT_LEAF=1 lets
# the native lighting update call the native sqrtf, sceVu0MulMatrix,
# sceVu0TransposeMatrix and matrixVecRotAligned directly (when the table
# holds them) instead of through the dispatcher. Same registers and memory;
# the dispatch's checkpoint charge is skipped (timing only).
TS_NATIVE_DIRECT_LEAF ?= 0

# ---- Dropping a module's transcriptions once its idiomatic module has
# passed (section 3.6 item 6): make TS_NATIVE_TRANSCRIBED_ANIM=0 (_LIGHT,
# _COLLISION, _PORTAL). 1 (default): every transcription built.
TS_NATIVE_TRANSCRIBED_ANIM ?= 1
TS_NATIVE_TRANSCRIBED_LIGHT ?= 1
TS_NATIVE_TRANSCRIBED_COLLISION ?= 1
TS_NATIVE_TRANSCRIBED_PORTAL ?= 1

B_LOGIC_SWITCHES := TS_FP_X87 TS_FP_X87_BOOTTEST TS_FP_X87_SELFCHECK TS_LEAF_BOOTTEST TS_NATIVE_LOCKSTEP \
    TS_NATIVE_POISON TS_NATIVE_NOYIELD TS_NATIVE_DIRECT_LEAF
B_LOGIC_DEFINES := $(foreach v,$(B_LOGIC_SWITCHES),$(if $(filter-out 0,$($(v))),-D$(v)=$($(v))))
B_LOGIC_DEFINES += $(foreach m,ANIM LIGHT COLLISION PORTAL,$(if $(filter 0,$(TS_NATIVE_TRANSCRIBED_$(m))),\
    -DTS_NATIVE_TRANSCRIBED_$(m)=0))

# The switches reach only the game's own objects (project/game, natives
# included; the generated code does not read them, so it is not rebuilt).
# Those objects (and, for the journal, every object that stores to guest
# memory through the inline write paths) rebuild when a switch changes.
B_LOGIC_STAMP := $(OUT)/gen/b_logic.flags
B_LOGIC_FLAGS_TEXT := $(B_LOGIC_DEFINES) journal=$(PS2X_WRITE_JOURNAL)
B_LOGIC_OBJS := $(patsubst $(ROOT)/%.cpp,$(OBJ)/%.obj,$(wildcard $(GAME)/*.cpp $(GAME)/native/*.cpp))
ifeq ($(PS2X_WRITE_JOURNAL),1)
B_LOGIC_OBJS += $(patsubst $(ROOT)/%.cpp,$(OBJ)/%.obj,$(wildcard $(RUNTIME)/src/lib/*.cpp $(RUNTIME)/src/lib/*/*.cpp \
    $(RUNTIME)/src/lib/*/*/*.cpp $(XBOX)/*.cpp))
endif
$(B_LOGIC_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(B_LOGIC_FLAGS_TEXT)' ] || echo '$(B_LOGIC_FLAGS_TEXT)' > $@
$(B_LOGIC_OBJS): $(B_LOGIC_STAMP)
$(patsubst $(ROOT)/%.cpp,$(OBJ)/%.obj,$(wildcard $(GAME)/*.cpp $(GAME)/native/*.cpp)): RUNTIME_FLAGS += $(B_LOGIC_DEFINES)

# Host tests: the x87 kernels (3M cases per routine against IEEE double)
# and the journal (record, undo, compare).
HOST_TESTS += fp_x87_test lockstep_journal_test
HOST_TEST_FLAGS_fp_x87_test := -I$(GAME)/native
HOST_TEST_FLAGS_lockstep_journal_test := -I$(GAME)/native
