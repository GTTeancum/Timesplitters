# B-CODEGEN (src/xbox/PUSH-BC-PLAN.md section 5.2): the generated code's
# shape: patch_generated.py options (PATCH_FLAGS), call slots
# (TS_NATIVE_CALL_SLOTS through EXTRA_DEFINES), the -O2 list
# (src/xbox/gen_fast_names.mk).
#
# Included by the Makefile before its own variables: only ROOT, OUT, OBJ,
# RUNTIME, GAME, GENERATED and XBOX exist yet, so paths are spelled out here
# (GEN_TABLE is $(OUT)/gen/register_functions_xbox.cpp). Every switch below
# that reaches the generated code goes through EXTRA_DEFINES or PATCH_FLAGS,
# whose stamps rebuild (and re-patch) the generated code when one changes.

# ---- Native call slots (M3.2). make TS_NATIVE_CALL_SLOTS=0: the natives'
# guestCall / lightCall go through dispatchGuestBranch as before. 1
# (default): through their build-time slots (ps2_native_call_xbox.h); the
# same calls, the same cycles, no lookup. make TS_CALL_SLOT_CHECK=1 (check
# build, SC-E): every slot call checked against the table and the
# generated list compared at boot ([TS:callslot] boot=0 bad=0).
TS_NATIVE_CALL_SLOTS ?= 1
TS_CALL_SLOT_CHECK ?= 0
CODEGEN_SLOTS_H := $(OUT)/gen/ps2_function_slots_xbox.h
CODEGEN_NATIVE_SRCS := $(GAME)/ts_native_game.cpp $(GAME)/ts_native_game2.cpp $(GAME)/ts_native_game3.cpp \
    $(GAME)/ts_native_math.cpp
CODEGEN_OBJS := $(patsubst $(ROOT)/%.cpp,$(OBJ)/%.obj,$(CODEGEN_NATIVE_SRCS)) $(OBJ)/src/xbox/xbox_codegen.obj
ifeq ($(TS_NATIVE_CALL_SLOTS),1)
EXTRA_DEFINES += -DTS_NATIVE_CALL_SLOTS=1 -I$(OUT)/gen
$(CODEGEN_OBJS): $(CODEGEN_SLOTS_H)
endif
ifeq ($(TS_CALL_SLOT_CHECK),1)
EXTRA_DEFINES += -DTS_CALL_SLOT_CHECK=1
endif

# The natives' call targets resolved against this build's compact table.
# Rewritten only when its text changes, so the natives recompile only then.
$(CODEGEN_SLOTS_H): $(OUT)/gen/register_functions_xbox.cpp $(CODEGEN_NATIVE_SRCS) \
                    $(XBOX)/tools/compact_function_table.py $(XBOX)/tools/direct_calls.py
	@mkdir -p $(dir $@)
	@echo "[ SLOTS   ] $(notdir $@)"
	@python $(XBOX)/tools/compact_function_table.py --slots $< $@ $(CODEGEN_NATIVE_SRCS)

# ---- patch_generated.py options (M3.5, M3.9, the indirect-call cache,
# direct leaf calls). Each is off by default: the patched copies are then
# exactly as before. Each is exact (the corpus test,
# src/xbox/test/patch_generated_test.py, checks the flow pass over every
# generated file; the check builds below check it running):
#   make TS_PATCH_PC_STORES=1    drop the pc stores nothing reads (-pc-stores);
#                                TS_PC_STORE_CHECK=1 poisons each dropped
#                                store instead (a wrong drop shows as a call
#                                or resume at 0xDEADxxxx)
#   make TS_PATCH_DELAY_FLAGS=1  drop the delay-slot flag triples around
#                                instructions that cannot trap (-delay-flags)
#   make TS_PATCH_RESUME_GUARD=1 skip the resume switch on a normal call
#                                (-resume-guard)
#   make TS_INDIRECT_CACHE=1     JALR through a direct-mapped cache
#                                (-indirect-cache, ps2_indirect_call_xbox.h)
#   make TS_LEAF_CALLS=1         whitelisted leaves call their ts_leaf.h core
#                                (-leaf-calls; needs B-LOGIC's whitelist)
#   make TS_RESTRICT_CTX=1       ctx __restrict in every generated function
#                                (-restrict-ctx); TS_CTX_GUARD=1 checks the
#                                rule at every scheduler checkpoint
#   make TS_PATCH_ALL=1          the first four together
TS_PATCH_ALL ?= 0
TS_PATCH_PC_STORES ?= $(TS_PATCH_ALL)
TS_PATCH_DELAY_FLAGS ?= $(TS_PATCH_ALL)
TS_PATCH_RESUME_GUARD ?= $(TS_PATCH_ALL)
TS_INDIRECT_CACHE ?= $(TS_PATCH_ALL)
TS_LEAF_CALLS ?= 0
TS_RESTRICT_CTX ?= 0
TS_CTX_GUARD ?= 0
TS_PC_STORE_CHECK ?= 0
CODEGEN_LEAF_WHITELIST := $(XBOX)/tools/leaf_whitelist.txt
ifeq ($(TS_PATCH_PC_STORES),1)
PATCH_FLAGS += -pc-stores
endif
ifeq ($(TS_PATCH_DELAY_FLAGS),1)
PATCH_FLAGS += -delay-flags
endif
ifeq ($(TS_PATCH_RESUME_GUARD),1)
PATCH_FLAGS += -resume-guard
endif
ifeq ($(TS_INDIRECT_CACHE),1)
PATCH_FLAGS += -indirect-cache
EXTRA_DEFINES += -DTS_INDIRECT_CACHE=1
endif
ifeq ($(TS_LEAF_CALLS),1)
ifeq ($(wildcard $(CODEGEN_LEAF_WHITELIST)),)
$(error TS_LEAF_CALLS=1 needs $(CODEGEN_LEAF_WHITELIST) (B-LOGIC))
endif
# (the hash re-patches when the whitelist's content changes)
PATCH_FLAGS += -leaf-calls=$(CODEGEN_LEAF_WHITELIST) -leaf-hash=$(firstword $(shell md5sum $(CODEGEN_LEAF_WHITELIST)))
EXTRA_DEFINES += -I$(GAME)/native
endif
ifeq ($(TS_RESTRICT_CTX),1)
PATCH_FLAGS += -restrict-ctx
ifeq ($(TS_CTX_GUARD),1)
PATCH_FLAGS += -ctx-guard
EXTRA_DEFINES += -DTS_CTX_GUARD=1
endif
endif
ifeq ($(TS_PC_STORE_CHECK),1)
EXTRA_DEFINES += -DTS_PC_STORE_CHECK=1
endif

# The objects outside the generated code that see these switches: a stamp
# of their own rebuilds them when one changes (the generated code's stamps
# already cover EXTRA_DEFINES and PATCH_FLAGS).
CODEGEN_FLAGS_TEXT := slots=$(TS_NATIVE_CALL_SLOTS) check=$(TS_CALL_SLOT_CHECK) icache=$(TS_INDIRECT_CACHE) \
    ctxguard=$(TS_RESTRICT_CTX)$(TS_CTX_GUARD)
CODEGEN_STAMP := $(OUT)/gen/b_codegen.flags
$(CODEGEN_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(CODEGEN_FLAGS_TEXT)' ] || echo '$(CODEGEN_FLAGS_TEXT)' > $@
$(CODEGEN_OBJS): $(CODEGEN_STAMP)

# ---- The -O2 list (M3.6): src/xbox/gen_fast_names.mk (TS_O2_RANKED there).
