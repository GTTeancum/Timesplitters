# TimeSplitters for the original Xbox (nxdk).
#
# Builds the same recompiled game code, runtime and IOP emulator as the PC
# build, plus the Xbox platform layer in this folder, into
# build/xbox/default.xbe and a bootable build/xbox/TimeSplitters.iso.
# Run through build.sh (MSYS2 CLANG64 shell); see README.md.

ROOT      := $(abspath $(CURDIR)/../..)
OUT       := $(ROOT)/build/xbox
OBJ       := $(OUT)/obj
NXDK_DIR  ?= /c/nxdk

RUNTIME   := $(ROOT)/source/PS2Recomp/ps2xRuntime
IOP       := $(ROOT)/source/PS2Recomp/ps2xIOP
GAME      := $(ROOT)/project/game
GENERATED := $(ROOT)/project/generated
# The Xbox's own VU1 microprogram: project/tools/vu1/vu1_recomp.py --lean
# (same inputs as project/generated-vu; drops timing bookkeeping nothing
# can observe). Checked bit-exact against the interpreter with
# timesplitters_vu_replay + vu1_diff.py before each regeneration.
GENVU     := $(ROOT)/project/generated-vu-xbox
# make TS_VU1_RECOMPILED=1: link it, as the fallback for the draws the native
# program (project/game/vu1_native_ts.cpp) declines. Off by default: 0.64 MB
# of code, and the native program takes every draw (the status block shows
# vu runs=0 jit=0 through boot, menus and matches); what it declines would
# run in the interpreter, bit-exact with the recompiled code but slower.
TS_VU1_RECOMPILED ?= 0
GENVU_SRCS := $(if $(filter 1,$(TS_VU1_RECOMPILED)),$(wildcard $(GENVU)/*.cpp))
XBOX      := $(CURDIR)

# ---- Push B/C track fragments (src/xbox/PUSH-BC-PLAN.md W0-I). This
# Makefile is frozen: each track adds what it needs through its own
# src/xbox/mk/<track>.mk, which may append to
#   EXTRA_GAME_SRCS       project/game sources (built like GAME_SRCS)
#   EXTRA_RUNTIME_SRCS    runtime sources (built like RUNTIME_SRCS)
#   EXTRA_XBOX_OBJS_FAST  objects (under $(OBJ)) built -O2 like FAST_OBJS
#   EXTRA_DEFINES         -D switches for every file, generated code included
#   PATCH_FLAGS           options for patch_generated.py (every generated file)
#   HOST_TESTS            host tests (src/xbox/test/host_tests.mk)
# and may define stamps of its own for switches only some files see (the
# TS_HWPROF block below is the pattern). EXTRA_DEFINES and PATCH_FLAGS are in
# the generated-code and patch stamps; the source and object lists in the
# link stamp.
EXTRA_GAME_SRCS :=
EXTRA_RUNTIME_SRCS :=
EXTRA_XBOX_OBJS_FAST :=
EXTRA_DEFINES :=
PATCH_FLAGS :=
HOST_TESTS :=
include $(wildcard $(XBOX)/mk/*.mk)

CXX  := $(XBOX)/tools/nxdk-cxx-hosted
CC   := nxdk-cc
LINK := nxdk-link
CXBE := $(NXDK_DIR)/tools/cxbe/cxbe.exe
XISO := $(NXDK_DIR)/tools/extract-xiso/build/extract-xiso.exe

DEFINES := -DPLATFORM_XBOX=1 -DPS2X_SCALAR_SIMD=1 -DPS2X_NO_EXCEPTIONS=1 -DPS2X_HAS_FFMPEG=0 -DPS2X_ENABLE_IOP_RPC_TRACE=0 -DPS2X_DEVICE_CYCLE_BATCH=2048 -DPS2X_VU1_SSE1=1 $(EXTRA_DEFINES)
INCLUDES := -include $(XBOX)/compat/xbox_prelude.h -I$(XBOX)/compat -I$(XBOX)/raylib \
            -I$(RUNTIME)/include -I$(RUNTIME)/src/lib -I$(RUNTIME)/src/lib/Kernel -I$(IOP)/include -I$(IOP)/src -I$(GENERATED)
# Newer clang needs this for nxdk's libc++ 10 headers.
COMMON := -std=c++20 -mfpmath=sse -fms-compatibility-version=19.29 -Wno-everything $(DEFINES) $(INCLUDES)

# The recompiled game is ~2,700 files; optimising it for size keeps the code
# near 10 MB instead of ~25-30 MB, which a 64 MB Xbox cannot hold next to
# the PS2's 32 MB of RAM.
GEN_FLAGS     := $(COMMON) -Oz
# The platform layer also uses nxdk's SDL2 (gamepads, audio).
SDL_FLAGS     := -I$(NXDK_DIR)/lib/sdl/SDL2/include -DXBOX
RUNTIME_FLAGS := $(COMMON) -Os $(SDL_FLAGS) -DPS2_RUNTIME_LOGS=1

RUNTIME_SRCS := \
    $(RUNTIME)/src/lib/game_overrides.cpp \
    $(RUNTIME)/src/lib/gs/ps2_gif_arbiter.cpp \
    $(RUNTIME)/src/lib/ps2_audio.cpp \
    $(RUNTIME)/src/lib/ps2_audio_vag.cpp \
    $(RUNTIME)/src/lib/ps2_spu2.cpp \
    $(RUNTIME)/src/lib/ps2_music.cpp \
    $(RUNTIME)/src/lib/ps2_host_settings.cpp \
    $(RUNTIME)/src/lib/gs/ps2_gs_memory.cpp \
    $(RUNTIME)/src/lib/gs/gs_frontend.cpp \
    $(RUNTIME)/src/lib/gs/gs_cpu_backend.cpp \
    $(RUNTIME)/src/lib/gs/gs_threaded_backend.cpp \
    $(RUNTIME)/src/lib/gs/gs_texture_replacement.cpp \
    $(RUNTIME)/src/lib/ps2_iop_host.cpp \
    $(RUNTIME)/src/lib/ps2_guest_memory_xbox.cpp \
    $(RUNTIME)/src/lib/ps2_memory.cpp \
    $(RUNTIME)/src/lib/ps2_pad.cpp \
    $(RUNTIME)/src/lib/ps2_rom_device.cpp \
    $(RUNTIME)/src/lib/ps2_vfs.cpp \
    $(RUNTIME)/src/lib/ps2_runtime.cpp \
    $(RUNTIME)/src/lib/ps2_sample_profiler.cpp \
    $(RUNTIME)/src/lib/ps2_vif1_interpreter.cpp \
    $(RUNTIME)/src/lib/vu/ps2_vu1_core.cpp \
    $(RUNTIME)/src/lib/vu/ps2_vu1_upper.cpp \
    $(RUNTIME)/src/lib/vu/ps2_vu1_lower.cpp \
    $(RUNTIME)/src/lib/vu/ps2_vu1_jit.cpp \
    $(RUNTIME)/src/lib/games_database.cpp \
    $(shell find $(RUNTIME)/src/lib/Kernel -name '*.cpp') \
    $(EXTRA_RUNTIME_SRCS)

IOP_SRCS := $(addprefix $(IOP)/src/, \
    ps2_path.cpp iop_module_manager.cpp iop_subsystem.cpp \
    emulator/iop_emulator.cpp emulator/core/iop_cpu.cpp emulator/core/iop_kernel.cpp emulator/core/iop_memory.cpp \
    emulator/services/iop_module_loader.cpp emulator/services/iop_rpc.cpp \
    emulator/imports/iop_cdvd.cpp emulator/imports/iop_heaplib.cpp emulator/imports/iop_imports.cpp \
    emulator/imports/iop_intrman.cpp emulator/imports/iop_ioman.cpp emulator/imports/iop_loadcore.cpp \
    emulator/imports/iop_stdio.cpp emulator/imports/iop_sysclib.cpp emulator/imports/iop_sysmem.cpp \
    emulator/imports/iop_timrman.cpp emulator/imports/iop_vblank.cpp \
    modules/dbcman.cpp modules/libsd.cpp modules/mcserv.cpp)

GAME_SRCS := $(GAME)/ts_overrides.cpp $(GAME)/vu1_native_ts.cpp $(GAME)/ts_native_math.cpp $(GAME)/ts_native_fp.cpp \
    $(GAME)/ts_native_game.cpp $(GAME)/ts_native_game2.cpp $(GAME)/ts_native_game3.cpp $(GAME)/ts_render_counters.cpp \
    $(GAME)/ts_game_hooks.cpp $(GAME)/ts_knobs.cpp $(EXTRA_GAME_SRCS)
XBOX_SRCS := $(wildcard $(XBOX)/*.cpp)
# register_functions.cpp is replaced by a compact table (see the rule below).
GEN_TABLE := $(OUT)/gen/register_functions_xbox.cpp
# Every game function is compiled from a patched copy under build/xbox/gen
# (src/xbox/tools/patch_generated.py: constant calls go through the function
# table directly, plus a few one-off patches).
GEN_PATCHED := $(patsubst $(GENERATED)/%.cpp,$(OUT)/gen/%.cpp,$(filter-out $(GENERATED)/register_functions.cpp,$(wildcard $(GENERATED)/*.cpp)))
GEN_SRCS  := $(GEN_PATCHED) $(GENVU_SRCS) $(GEN_TABLE)

# Objects mirror the source path under build/xbox/obj.
objof = $(patsubst $(ROOT)/%.cpp,$(OBJ)/%.obj,$(1))
GEN_OBJS   := $(call objof,$(GEN_SRCS))
OTHER_OBJS := $(call objof,$(RUNTIME_SRCS) $(IOP_SRCS) $(GAME_SRCS) $(XBOX_SRCS))
# The VU1 microprogram is the hottest code of all (most of a match frame): -O2.
VU_OBJS := $(call objof,$(GENVU_SRCS))
ifneq ($(VU_OBJS),)
$(VU_OBJS): GEN_FLAGS := $(COMMON) -O2
endif
# The game functions that take most of a busy match frame (GEN_FAST_NAMES,
# src/xbox/gen_fast_names.mk): -O2, and their constant calls are inlined
# (PS2X_DIRECT_CALL_INLINE, ps2_direct_call_xbox.h); the other files call
# the same code out of line, which keeps them as small as before. The same
# file lists the originals a native twin replaces (NATIVE_TWINS).
GEN_FAST_FLAGS := $(COMMON) -O2 -DPS2X_DIRECT_CALL_INLINE=1
include $(XBOX)/gen_fast_names.mk
TS_DEMOTE_NATIVE_TWINS ?= 1
ifeq ($(TS_DEMOTE_NATIVE_TWINS),1)
GEN_FAST_NAMES := $(filter-out $(NATIVE_TWINS),$(GEN_FAST_NAMES))
endif
GEN_FAST_MISSING := $(filter-out $(notdir $(basename $(GEN_PATCHED))),$(GEN_FAST_NAMES))
$(if $(and $(GEN_FAST_MISSING),$(filter-out clean,$(MAKECMDGOALS))),$(error GEN_FAST_NAMES not in project/generated: $(GEN_FAST_MISSING)))
GEN_FAST_OBJS := $(foreach n,$(GEN_FAST_NAMES),$(OBJ)/build/xbox/gen/$(n).obj)
$(GEN_FAST_OBJS): GEN_FLAGS := $(GEN_FAST_FLAGS)
# An object does not record the flags it was built with. The generated flags
# and the -O2 list are written to a stamp (only when they change) that every
# generated object depends on, so a flag change or a file moved between the
# two lists rebuilds the generated code instead of linking a stale object.
GEN_FLAGS_STAMP := $(OUT)/gen/gen_flags.stamp
GEN_FLAGS_TEXT  := $(GEN_FLAGS) / $(GEN_FAST_FLAGS): $(GEN_FAST_NAMES)
$(shell mkdir -p $(OUT)/gen && { [ "$$(cat $(GEN_FLAGS_STAMP) 2>/dev/null)" = "$(GEN_FLAGS_TEXT)" ] || printf '%s\n' "$(GEN_FLAGS_TEXT)" > $(GEN_FLAGS_STAMP); })
# The patcher's options (PATCH_FLAGS, from the track fragments) have a stamp
# of their own that every patched copy depends on, so a change re-patches
# (and recompiles) the generated code. Empty by default: written once.
PATCH_STAMP := $(OUT)/gen/patch.flags
$(shell mkdir -p $(OUT)/gen && { { [ -f $(PATCH_STAMP) ] && [ "$$(cat $(PATCH_STAMP))" = "$(PATCH_FLAGS)" ]; } || printf '%s\n' "$(PATCH_FLAGS)" > $(PATCH_STAMP); })
.DEFAULT_GOAL := all # dependency rules above this line must not become the default
$(GEN_OBJS): $(GEN_FLAGS_STAMP)

# The software renderer and the Xbox presenter are the hottest code: -O2
# (a track adds its own through EXTRA_XBOX_OBJS_FAST).
FAST_OBJS = $(filter $(EXTRA_XBOX_OBJS_FAST) $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/gs/%.obj $(OBJ)/src/xbox/xbox_raylib.obj $(OBJ)/project/game/vu1_native_ts.obj \
                     $(OBJ)/project/game/ts_native_math.obj $(OBJ)/project/game/ts_native_fp.obj \
                     $(OBJ)/project/game/ts_native_game.obj $(OBJ)/project/game/ts_native_game2.obj \
                     $(OBJ)/project/game/ts_native_game3.obj \
                     $(OBJ)/src/xbox/gs_nv2a_backend.obj $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/Kernel/EeScheduler.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_spu2.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_music.obj,$(OTHER_OBJS))
$(FAST_OBJS): RUNTIME_FLAGS := $(COMMON) -O2 $(SDL_FLAGS) -DPS2_RUNTIME_LOGS=1 -DPS2X_POINT_SAMPLING=1

# lld is a native Windows program: paths in its response file must be Windows paths.
NXDK_WIN  := $(shell cygpath -m $(NXDK_DIR))
NXDK_LIBS := $(addprefix $(NXDK_WIN)/lib/, xboxkrnl/libxboxkrnl.lib libpdclib.lib winmm.lib libwinapi.lib \
    libnxdk_hal.lib libnxdk.lib libnxdk_automount_d.lib libpbkit.lib nxdk_usb.lib libxboxrt.lib libzlib.lib \
    libpng.lib libc++.lib libSDL2.lib)

all: $(OUT)/TimeSplitters.iso

# clang names the target D:/..., make calls it /d/...: sed fixes the first line.
$(GEN_OBJS): $(OBJ)/%.obj: $(ROOT)/%.cpp
	@mkdir -p $(dir $@)
	@echo "[ CXX gen ] $(notdir $<)"
	@$(CXX) $(GEN_FLAGS) -MD -MP -MT $@ -MF $(@:.obj=.d) -c -o $@ $<
	@sed -i '1s|^\([A-Za-z]\):/|/\L\1/|' $(@:.obj=.d)

$(OTHER_OBJS): $(OBJ)/%.obj: $(ROOT)/%.cpp
	@mkdir -p $(dir $@)
	@echo "[ CXX     ] $(subst $(ROOT)/,,$<)"
	@$(CXX) $(RUNTIME_FLAGS) -MD -MP -MT $@ -MF $(@:.obj=.d) -c -o $@ $<
	@sed -i '1s|^\([A-Za-z]\):/|/\L\1/|' $(@:.obj=.d)

$(GEN_TABLE): $(GENERATED)/register_functions.cpp $(XBOX)/tools/compact_function_table.py
	@mkdir -p $(dir $@)
	@echo "[ TABLE   ] $@"
	@python $(XBOX)/tools/compact_function_table.py $< $@

# The patcher reads the call targets' slots from the compact table, so a
# regenerated table re-patches (and recompiles) every game function; so do
# the patcher's options (PATCH_STAMP).
$(GEN_PATCHED): $(OUT)/gen/%.cpp: $(GENERATED)/%.cpp $(GEN_TABLE) $(XBOX)/tools/patch_generated.py $(XBOX)/tools/direct_calls.py $(PATCH_STAMP)
	@mkdir -p $(dir $@)
	@echo "[ PATCH   ] $(notdir $@)"
	@python $(XBOX)/tools/patch_generated.py $(PATCH_FLAGS) $< $(GEN_TABLE) $@

# Fixed copies of nxdk C sources, built in place of the library's
# (pbkit: double-buffered; winapi/sync: condition-variable timeouts).
# PBKIT_CFLAGS: per-object switches (the measurement build's, below).
PBKIT_OBJ := $(OBJ)/src/xbox/pbkit/pbkit_ts.obj $(OBJ)/src/xbox/winapi/sync_ts.obj
PBKIT_CFLAGS :=

$(PBKIT_OBJ): $(OBJ)/src/xbox/%.obj: $(XBOX)/%.c
	@mkdir -p $(dir $@)
	@echo "[ CC      ] src/xbox/$*.c"
	@nxdk-cc -O2 $(PBKIT_CFLAGS) -I$(NXDK_DIR)/lib/pbkit -I$(NXDK_DIR)/lib/winapi -Wno-everything -c -o $@ $<

# NV2A shaders (src/xbox/shaders): Cg -> vp20/fp20 assembly -> pushbuffer .inl.
CGC    := $(NXDK_DIR)/tools/cg/win/cgc.exe
VP20   := $(NXDK_DIR)/tools/vp20compiler/vp20compiler.exe
FP20   := $(NXDK_DIR)/tools/fp20compiler/fp20compiler.exe
SHADERS := $(OUT)/gen/shaders
PS_VARIANTS := untextured modulate modulate_tcc decal decal_tcc highlight highlight_tcc \
               modulate_tcc_unit decal_tcc_unit highlight_tcc_unit
PS_DEFINES_untextured    := -DGS_UNTEXTURED
PS_DEFINES_modulate      := -DGS_MODULATE
PS_DEFINES_modulate_tcc  := -DGS_MODULATE -DGS_TCC
PS_DEFINES_decal         := -DGS_DECAL
PS_DEFINES_decal_tcc     := -DGS_DECAL -DGS_TCC
PS_DEFINES_highlight     := -DGS_HIGHLIGHT
PS_DEFINES_highlight_tcc := -DGS_HIGHLIGHT -DGS_TCC
# Textures whose one alpha bit stands for GS 0x80 (DXT1, A1R5G5B5).
PS_DEFINES_modulate_tcc_unit  := -DGS_MODULATE -DGS_TCC -DGS_UNIT_ALPHA
PS_DEFINES_decal_tcc_unit     := -DGS_DECAL -DGS_TCC -DGS_UNIT_ALPHA
PS_DEFINES_highlight_tcc_unit := -DGS_HIGHLIGHT -DGS_TCC -DGS_UNIT_ALPHA
XF_VARIANTS := plain lit env skin
XF_DEFINES_plain :=
XF_DEFINES_lit   := -DXF_LIT
XF_DEFINES_env   := -DXF_ENV
XF_DEFINES_skin  := -DXF_LIT -DXF_SKIN
SHADER_INLS := $(SHADERS)/gs_vs.inl $(foreach v,$(PS_VARIANTS),$(SHADERS)/gs_ps_$(v).inl) \
               $(foreach v,$(XF_VARIANTS),$(SHADERS)/gs_xf_$(v).inl)

$(SHADERS)/gs_xf_%.inl: $(XBOX)/shaders/gs_xf.vs.cg
	@mkdir -p $(dir $@)
	@echo "[ CG      ] $(notdir $@)"
	@$(CGC) -profile vp20 $(XF_DEFINES_$*) -o $@.vp $< > /dev/null && $(VP20) $@.vp > $@ && rm -f $@.vp

$(SHADERS)/gs_vs.inl: $(XBOX)/shaders/gs.vs.cg
	@mkdir -p $(dir $@)
	@echo "[ CG      ] $(notdir $@)"
	@$(CGC) -profile vp20 -o $@.vp $< > /dev/null && $(VP20) $@.vp > $@ && rm -f $@.vp

$(SHADERS)/gs_ps_%.inl: $(XBOX)/shaders/gs.ps.cg
	@mkdir -p $(dir $@)
	@echo "[ CG      ] $(notdir $@)"
	@$(CGC) -profile fp20 $(PS_DEFINES_$*) -o $@.fp $< > /dev/null && $(FP20) $@.fp > $@ && rm -f $@.fp

$(OBJ)/src/xbox/gs_nv2a_backend.obj: $(SHADER_INLS)
$(OBJ)/src/xbox/gs_nv2a_backend.obj: RUNTIME_FLAGS += -I$(SHADERS)

# make TS_HWPROF=1: the sampling profiler for real consoles (xbox_hwprof.cpp),
# written to the log between script reads 1500 and 2700. Off by default. Only
# the three files that use it see the switch; a stamp rebuilds them when it changes.
TS_HWPROF ?= 0
HWPROF_STAMP := $(OUT)/gen/hwprof.flags
HWPROF_OBJS := $(OBJ)/src/xbox/xbox_hwprof.obj $(OBJ)/src/xbox/xbox_main.obj $(OBJ)/src/xbox/gs_nv2a_backend.obj
$(HWPROF_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(TS_HWPROF)' ] || echo '$(TS_HWPROF)' > $@
$(HWPROF_OBJS): $(HWPROF_STAMP)
$(HWPROF_OBJS): RUNTIME_FLAGS += -DTS_HWPROF=$(TS_HWPROF)

# make TS_RENDER_COUNTERS=2: the render-origin counters ([TS:render] in the
# log, runtime/ps2_render_counters.h) also count per DMA tag and VIF command
# ([TS:render2]; an estimated 0.1-0.2 ms a frame); 0 counts nothing, 1
# (default) the cheap ones. Only the files that count see the switch; a
# stamp rebuilds them when it changes.
TS_RENDER_COUNTERS ?= 1
RENDER_COUNTERS_STAMP := $(OUT)/gen/render_counters.flags
RENDER_COUNTERS_OBJS := $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.obj $(OBJ)/project/game/vu1_native_ts.obj \
    $(OBJ)/project/game/ts_native_game2.obj $(OBJ)/project/game/ts_render_counters.obj
$(RENDER_COUNTERS_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(TS_RENDER_COUNTERS)' ] || echo '$(TS_RENDER_COUNTERS)' > $@
$(RENDER_COUNTERS_OBJS): $(RENDER_COUNTERS_STAMP)
$(RENDER_COUNTERS_OBJS): RUNTIME_FLAGS += -DTS_RENDER_COUNTERS=$(TS_RENDER_COUNTERS)

# make TS_MEASURE_PUSHBC=1: the Push B/C measurement counters (PUSH-BC-PLAN.md
# W0-M; runtime/ps2_measure.h, src/xbox/xbox_measure.cpp: the [TS:m-*] lines
# for the first console session), with the renderer timing ([TS:kick],
# TS_PERF_BACKEND) and the tick sub-brackets ([TS:sub], TS_PERF_SUBBRACKETS)
# unless those are given on their own. Off by default: 0 counts nothing and
# the objects are as without it. Only the files that count see the switch; a
# stamp rebuilds them when it changes. The lock census is in sync_ts.c,
# built by the C rule below: PBKIT_CFLAGS carries its switch.
TS_MEASURE_PUSHBC ?= 0
TS_PERF_BACKEND ?= $(TS_MEASURE_PUSHBC)
TS_PERF_SUBBRACKETS ?= $(TS_MEASURE_PUSHBC)
MEASURE_FLAGS := -DTS_MEASURE_PUSHBC=$(TS_MEASURE_PUSHBC) -DTS_PERF_BACKEND=$(TS_PERF_BACKEND) -DTS_PERF_SUBBRACKETS=$(TS_PERF_SUBBRACKETS)
MEASURE_STAMP := $(OUT)/gen/measure.flags
MEASURE_OBJS := $(OBJ)/src/xbox/xbox_measure.obj $(OBJ)/src/xbox/xbox_perf.obj $(OBJ)/src/xbox/xbox_main.obj \
    $(OBJ)/src/xbox/xbox_shims.obj $(OBJ)/src/xbox/xbox_string.obj $(OBJ)/src/xbox/gs_nv2a_backend.obj \
    $(OBJ)/project/game/ts_overrides.obj $(OBJ)/project/game/ts_pacing.obj $(OBJ)/project/game/vu1_native_ts.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_frontend.obj \
    $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/Kernel/EeScheduler.obj
$(MEASURE_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(MEASURE_FLAGS)' ] || echo '$(MEASURE_FLAGS)' > $@
$(MEASURE_OBJS): $(MEASURE_STAMP)
$(MEASURE_OBJS): RUNTIME_FLAGS += $(MEASURE_FLAGS)
$(OBJ)/src/xbox/winapi/sync_ts.obj: $(MEASURE_STAMP)
$(OBJ)/src/xbox/winapi/sync_ts.obj: PBKIT_CFLAGS += -DTS_MEASURE_PUSHBC=$(TS_MEASURE_PUSHBC)

# Thread stacks (REWRITE-PLAN.md M2.5). Every thread created without a size
# (std::thread, CreateThread(..., 0, ...): the game thread, the audio
# feeder) and the main thread get the XBE's stack size, 256 KB, committed
# whole. (The texture pack's loader asks for its own 64 KB.)
#   make TS_LEAN_STACKS=1  64 KB for those, and the game thread an explicit
#                          256 KB (ps2_runtime.cpp): 384 KB less (main and
#                          audio feeder). Off until the stacks' real depths
#                          are measured:
#   make TS_STACK_PAINT=1  every thread's deepest stack use, in a [TS:mem]
#                          line when it grows (src/xbox/xbox_stacks.cpp).
TS_LEAN_STACKS ?= 0
TS_STACK_PAINT ?= 0
XBE_STACK := $(if $(filter 1,$(TS_LEAN_STACKS)),0x10000,0x40000)
STACK_FLAGS := -DTS_GAME_THREAD_STACK=$(if $(filter 1,$(TS_LEAN_STACKS)),0x40000,0) -DTS_STACK_PAINT=$(TS_STACK_PAINT)
STACK_STAMP := $(OUT)/gen/stacks.flags
STACK_OBJS := $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.obj $(OBJ)/src/xbox/xbox_stacks.obj
$(STACK_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(STACK_FLAGS)' ] || echo '$(STACK_FLAGS)' > $@
$(STACK_OBJS): $(STACK_STAMP)
$(STACK_OBJS): RUNTIME_FLAGS += $(STACK_FLAGS)

# What the link depends on besides the objects: a switch that leaves objects
# out (TS_VU1_RECOMPILED) or changes the link (the stack) relinks.
LINK_STAMP := $(OUT)/gen/link.flags
LINK_FLAGS_TEXT := TS_VU1_RECOMPILED=$(TS_VU1_RECOMPILED) stack=$(XBE_STACK) extra=$(EXTRA_GAME_SRCS) $(EXTRA_RUNTIME_SRCS) $(EXTRA_XBOX_OBJS_FAST)
$(LINK_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(LINK_FLAGS_TEXT)' ] || echo '$(LINK_FLAGS_TEXT)' > $@

# The object list is long; hand it to the linker in a response file.
$(OUT)/main.exe: $(GEN_OBJS) $(OTHER_OBJS) $(PBKIT_OBJ) $(LINK_STAMP)
	@echo "[ LD      ] $@"
	@printf '%s\n' $(patsubst $(OUT)/%,%,$(GEN_OBJS) $(OTHER_OBJS) $(PBKIT_OBJ)) $(NXDK_LIBS) > $(OUT)/link.rsp
	@cd $(OUT) && $(LINK) -include:_automount_d_drive -stack:$(XBE_STACK) -errorlimit:0 -map:main.map -out:main.exe @link.rsp

$(OUT)/iso/default.xbe: $(OUT)/main.exe
	@mkdir -p $(dir $@)
	@echo "[ CXBE    ] $@"
	@$(CXBE) -OUT:$@ -TITLE:TimeSplitters $< > /dev/null

# The PS2 disc image (project/disc, not in git): the game reads the disc's
# directory sectors itself, as on the PC build.
$(OUT)/iso/ps2disc.iso: $(ROOT)/project/disc/TimeSplitters.iso
	@mkdir -p $(dir $@)
	@echo "[ COPY    ] $@"
	@cp $< $@

# The texture pack (tools/xtpbuild.py): the disc's textures at full size with
# mip chains, DXT-compressed offline and looked up by the PC port's texture
# key; the runtime keeps its own path for anything not in it. Built from the
# user's MISC.PAK into build/ only, never into the source tree. Without
# MISC.PAK, or without a Python that has numpy and Pillow (MSYS2's own python
# usually lacks both, so XTP_PYTHON, else the first candidate below that has
# them; python.org installs live under local AppData, CSIDL 28), the ISO is
# built without it. XTP_FLAGS adds options and rebuilds the pack when it
# changes, e.g.
#   make XTP_FLAGS="--replacements $(ROOT)/textures/replacements --dump $(ROOT)/textures/dump"
MISC_PAK   ?= $(ROOT)/project/game-data/PAK/MISC.PAK
XTP        := $(OUT)/iso/textures.xtp
XTP_FLAGS  ?=
XTP_PYTHON ?=
XTP_STAMP  := $(OUT)/gen/xtp.flags
XTP_DEP    := $(if $(wildcard $(MISC_PAK)),$(XTP))

# Rewritten only when XTP_FLAGS changes, so the pack rebuilds only then.
$(XTP_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(XTP_FLAGS)' ] || echo '$(XTP_FLAGS)' > $@

$(XTP): $(MISC_PAK) $(XBOX)/tools/xtpbuild.py $(XTP_STAMP)
	@mkdir -p $(dir $@)
	@echo "[ XTP     ] $@"
	@py='$(XTP_PYTHON)'; local="$$(cygpath -u -F 28 2>/dev/null)"; \
	if [ -z "$$py" ]; then \
	    for c in python python3 py "$$local"/Programs/Python/Python3*/python.exe "$$local"/Programs/Python/Launcher/py.exe; do \
	        if "$$c" -c "import numpy, PIL" > /dev/null 2>&1; then py="$$c"; break; fi; \
	    done; \
	fi; \
	if [ -z "$$py" ]; then \
	    echo "[ XTP     ] skipped: no Python with numpy and Pillow (set XTP_PYTHON); runtime textures only"; rm -f $@; \
	else \
	    "$$py" $(XBOX)/tools/xtpbuild.py $(XTP_FLAGS) $< $@; \
	fi

# The disc carries the game's own files from project/game-data (not in git).
# make AUTOPLAY=<pad script>: the disc plays that controller script (tests).
AUTOPLAY ?=

$(OUT)/TimeSplitters.iso: $(OUT)/iso/default.xbe $(OUT)/iso/ps2disc.iso $(XTP_DEP) FORCE
	@echo "[ XISO    ] $@"
	@$(if $(XTP_DEP),,echo "[ XTP     ] skipped: no $(MISC_PAK); runtime textures only" && rm -f $(XTP))
	@rm -f $(OUT)/iso/autoplay.pad
	@$(if $(AUTOPLAY),cp $(AUTOPLAY) $(OUT)/iso/autoplay.pad)
	@rm -rf $(OUT)/iso/game-data && cp -r $(ROOT)/project/game-data $(OUT)/iso/game-data
	@rm -rf $(OUT)/iso/game-data/mc0 $(OUT)/iso/game-data/mc1
	@cd $(OUT) && $(XISO) -c iso TimeSplitters.iso > /dev/null

# Compile one group only, e.g. make runtime / make generated / make textures
runtime: $(OTHER_OBJS)
generated: $(GEN_OBJS)
textures: $(XTP_DEP)
	@$(if $(XTP_DEP),,echo "[ XTP     ] skipped: no $(MISC_PAK)")

clean:
	rm -rf $(OUT)

vuflags:
	@echo $(CXX) $(GEN_FLAGS) -O2

# make host-tests: the host-side tests of src/xbox/test (host_tests.mk; a
# track lists its own through HOST_TESTS in its .mk).
include $(XBOX)/test/host_tests.mk

.PHONY: all runtime generated textures clean FORCE vuflags host-tests
FORCE:
-include $(GEN_OBJS:.obj=.d) $(OTHER_OBJS:.obj=.d)
