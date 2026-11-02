# TimeSplitters for the original Xbox (nxdk).
#
# Builds the same recompiled game code, runtime and IOP emulator as the PC
# build, plus the Xbox platform layer in this folder, into
# build/xbox/default.xbe and a bootable build/xbox/TimeSplitters.iso.
# Run through build.sh (MSYS2 CLANG64 or Linux); see README.md.

ROOT      := $(abspath $(CURDIR)/../..)
OUT       := $(ROOT)/build/xbox
OBJ       := $(OUT)/obj
NXDK_DIR  ?= /c/nxdk
# An external library overlay can complete a reused, read-only SDK.
NXDK_LIB_DIR ?= $(NXDK_DIR)/lib
export NXDK_DIR

# Windows LLVM needs drive paths in response files; native Linux LLVM needs
# the original POSIX paths. Keep the SDK's host tools separate from the Xbox
# PE/XBE outputs, whose extensions are the same on either build host.
HOST_SYSTEM := $(shell uname -s)
ifneq ($(filter MINGW% MSYS% CYGWIN%,$(HOST_SYSTEM)),)
HOST_EXE := .exe
CG_HOST := win
NXDK_LINK_LIB_DIR := $(shell cygpath -m $(NXDK_LIB_DIR))
PYTHON ?= python
else
HOST_EXE :=
CG_HOST := linux
NXDK_LINK_LIB_DIR := $(NXDK_LIB_DIR)
PYTHON ?= python3
endif

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

# The optimized target keeps the executable and its converted private assets
# together. It selects native geometry and the compiler header cache; ordinary
# xbe/all targets retain their explicit background opt-in for comparisons.
ifneq ($(filter optimized,$(MAKECMDGOALS)),)
TS_BG_NATIVE ?= 1
TS_GEN_PCH ?= 1
endif

# Optional build-speed aid for generated functions with the exact common
# include prefix. The default keeps the existing Windows compilation route.
TS_GEN_PCH ?= 0
ifneq ($(TS_GEN_PCH),0)
ifneq ($(TS_GEN_PCH),1)
$(error TS_GEN_PCH must be 0 or 1)
endif
endif

# Source-derived background vertices remain opt-in until target validation.
# Keep the original object names: their optimisation/counter flags and link
# ordering remain the same when their input is an Xbox-generated source copy.
TS_BG_NATIVE ?= 0
TS_BG_VERIFY ?= 0
# The switches below default off: measured 2026-11-01 in xemu (4-player
# arcade-4p.pad, reads 1500-2700), none was faster than all-off on its own,
# TS_DRAW_RECORDS made a frame ~3x longer, and all of them together ~4x.
# They add checks around the original VIF/VU1 work without removing it.
TS_BG_FAST ?= 0
TS_BG_BATCH ?= 0
TS_VIF_FAST ?= 0
TS_NV2A_MATERIAL_CACHE ?= 0
TS_NV2A_PACK_IDENTITY_CACHE ?= 0
TS_GIF_NATIVE ?= 0
TS_DMA_CHAIN_CACHE ?= 0
TS_NATIVE_CALL_SLOTS ?= 0
TS_DRAW_RECORDS ?= 0
TS_VIF_SOURCE ?= 0
TS_PERF_BACKEND ?= 0
OPT_SWITCHES := TS_BG_FAST TS_BG_BATCH TS_VIF_FAST TS_NV2A_MATERIAL_CACHE TS_NV2A_PACK_IDENTITY_CACHE \
    TS_GIF_NATIVE TS_DMA_CHAIN_CACHE TS_NATIVE_CALL_SLOTS TS_DRAW_RECORDS TS_VIF_SOURCE TS_PERF_BACKEND
$(foreach v,$(OPT_SWITCHES),$(if $(filter 1,$(words $($(v)))),$(if $(filter 0 1,$($(v))),,$(error $(v) must be 0 or 1)),$(error $(v) must be 0 or 1)))
ifneq ($(filter optimized,$(MAKECMDGOALS)),)
ifneq ($(TS_BG_NATIVE),1)
$(error optimized requires TS_BG_NATIVE=1; use xbe for an original-geometry comparison)
endif
endif
ifneq ($(TS_BG_NATIVE),0)
ifneq ($(TS_BG_NATIVE),1)
$(error TS_BG_NATIVE must be 0 or 1)
endif
endif
ifneq ($(TS_BG_VERIFY),0)
ifneq ($(TS_BG_VERIFY),1)
$(error TS_BG_VERIFY must be 0 or 1)
endif
endif
BG_NATIVE_GAME_OBJ := $(OBJ)/project/game/vu1_native_ts.obj
BG_NATIVE_VIF_OBJ := $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.obj
BG_NATIVE_MEMORY_OBJ := $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.obj
BG_NATIVE_ROUTED_OBJS := $(BG_NATIVE_GAME_OBJ) $(BG_NATIVE_VIF_OBJ) $(BG_NATIVE_MEMORY_OBJ)
BG_NATIVE_VU_OBJ := $(OBJ)/src/xbox/xbox_bg_vu.obj
BG_NATIVE_ADAPTER_OBJS := $(addprefix $(OBJ)/src/xbox/,$(addsuffix .obj,\
    xbox_bg_game xbox_bg_loader xbox_bg_runtime xbox_bg_vu xbox_bg_xf))
BG_NATIVE_OBJS := $(BG_NATIVE_ROUTED_OBJS) $(BG_NATIVE_ADAPTER_OBJS) \
    $(OBJ)/src/xbox/gs_nv2a_backend.obj $(OBJ)/src/xbox/xbox_main.obj
BG_NATIVE_GAME_COPY := $(OUT)/gen/bg/vu1_native_ts.cpp
BG_NATIVE_VIF_COPY := $(OUT)/gen/bg/ps2_vif1_interpreter.cpp
BG_NATIVE_MEMORY_COPY := $(OUT)/gen/bg/ps2_memory.cpp
ifeq ($(TS_BG_NATIVE),1)
BG_NATIVE_GAME_SOURCE := $(BG_NATIVE_GAME_COPY)
BG_NATIVE_VIF_SOURCE := $(BG_NATIVE_VIF_COPY)
BG_NATIVE_MEMORY_SOURCE := $(BG_NATIVE_MEMORY_COPY)
else
BG_NATIVE_GAME_SOURCE := $(GAME)/vu1_native_ts.cpp
BG_NATIVE_VIF_SOURCE := $(RUNTIME)/src/lib/ps2_vif1_interpreter.cpp
BG_NATIVE_MEMORY_SOURCE := $(RUNTIME)/src/lib/ps2_memory.cpp
endif

# Compose the fast decoder after the optional source-provenance observations.
# Neither patcher ever edits the shared PS2 runtime source.
VIF_FAST_INPUT := $(BG_NATIVE_VIF_SOURCE)
VIF_FAST_COPY := $(OUT)/gen/vif/ps2_vif1_interpreter.cpp
ifeq ($(TS_VIF_FAST),1)
BG_NATIVE_VIF_SOURCE := $(VIF_FAST_COPY)
endif

# Ordered draw records observe original precalc/Dbuf CALLs and consume
# admitted VIF prefixes. Keep the original guest list and stream intact.
DRAW_RECORD_GAME_OBJ := $(OBJ)/project/game/ts_native_game2.obj
DRAW_RECORD_GAME_COPY := $(OUT)/gen/draw-records/ts_native_game2.cpp
DRAW_RECORD_GAME_SOURCE := $(GAME)/ts_native_game2.cpp
DRAW_RECORD_VIF_INPUT := $(BG_NATIVE_VIF_SOURCE)
DRAW_RECORD_VIF_COPY := $(OUT)/gen/draw-records/ps2_vif1_interpreter.cpp
ifeq ($(TS_DRAW_RECORDS),1)
DRAW_RECORD_GAME_SOURCE := $(DRAW_RECORD_GAME_COPY)
BG_NATIVE_VIF_SOURCE := $(DRAW_RECORD_VIF_COPY)
endif

# Additional Xbox source-copy stages. Keep all original object names so the
# established optimization flags, link order and instrumentation still apply.
GIF_NATIVE_INPUT := $(BG_NATIVE_GAME_SOURCE)
GIF_NATIVE_COPY := $(OUT)/gen/gif/vu1_native_ts.cpp
GIF_GS_OBJ := $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/gs/gs_frontend.obj
GIF_GS_COPY := $(OUT)/gen/gif/gs_frontend.cpp
GIF_GS_SOURCE := $(RUNTIME)/src/lib/gs/gs_frontend.cpp
ifeq ($(TS_GIF_NATIVE),1)
BG_NATIVE_GAME_SOURCE := $(GIF_NATIVE_COPY)
GIF_GS_SOURCE := $(GIF_GS_COPY)
endif
# A certified prefix may supply source arrays to its immediate native draw.
# This is the outer native stage, after both pack geometry and GIF routing.
VIF_SOURCE_NATIVE_INPUT := $(BG_NATIVE_GAME_SOURCE)
VIF_SOURCE_NATIVE_COPY := $(OUT)/gen/vif-source/vu1_native_ts.cpp
ifeq ($(TS_VIF_SOURCE),1)
BG_NATIVE_GAME_SOURCE := $(VIF_SOURCE_NATIVE_COPY)
endif
DMA_CHAIN_INPUT := $(BG_NATIVE_MEMORY_SOURCE)
DMA_CHAIN_COPY := $(OUT)/gen/dma/ps2_memory.cpp
ifeq ($(TS_DMA_CHAIN_CACHE),1)
BG_NATIVE_MEMORY_SOURCE := $(DMA_CHAIN_COPY)
endif
# Observed linear REF groups reuse the producer's exact descriptor before
# the ordinary DMA loop. Keep this route independent of the CALL-leaf cache.
DRAW_RECORD_MEMORY_INPUT := $(BG_NATIVE_MEMORY_SOURCE)
DRAW_RECORD_MEMORY_COPY := $(OUT)/gen/draw-records/ps2_memory.cpp
ifeq ($(TS_DRAW_RECORDS),1)
BG_NATIVE_MEMORY_SOURCE := $(DRAW_RECORD_MEMORY_COPY)
endif

# Native model cache (xbox_model_cache.cpp): models' precalculated VIF chains
# captured once in Xbox vertex form and replayed straight to the renderer,
# skipping the DMA walk, VIF decode and VU1 program for them. The outermost
# stage of all three copies. It replaces those paths, so the switches that
# add work around them stay off with it.
# On by default (measured 2026-11-01, xemu, four players, alternating
# discs): with TS_NATIVE_REPLAY, TS_NATIVE_LOGIC and TS_SOUND_NATIVE about
# 31 FPS uncapped against 23 with all off. Native backgrounds (the
# optimized target) replace the same path, so they turn it off.
ifeq ($(TS_BG_NATIVE),1)
TS_NATIVE_MODELS ?= 0
else
TS_NATIVE_MODELS ?= 1
endif
# Model files: a level's captured models saved to E:\TimeSplitters\models once
# its captures settle, and loaded when it starts again (xbox_model_cache.cpp).
TS_MODEL_FILES ?= 0
ifneq ($(filter-out 0 1,$(TS_MODEL_FILES)),)
$(error TS_MODEL_FILES must be 0 or 1)
endif
ifeq ($(TS_MODEL_FILES)$(TS_NATIVE_MODELS),10)
$(error TS_MODEL_FILES=1 needs TS_NATIVE_MODELS=1)
endif
ifneq ($(filter-out 0 1,$(TS_NATIVE_MODELS)),)
$(error TS_NATIVE_MODELS must be 0 or 1)
endif
# Native replay: a stored model's replay with its per-run work done once
# (xbox_model_cache.h): partGfx's model prologues run natively at their
# stream position instead of through the VIF decoder, replayed draws apply
# their state blocks decoded once, and replayed runs keep their renderer
# segment (texture, material key, draw commands) while its inputs stand.
TS_NATIVE_REPLAY ?= $(TS_NATIVE_MODELS)
ifneq ($(filter-out 0 1,$(TS_NATIVE_REPLAY)),)
$(error TS_NATIVE_REPLAY must be 0 or 1)
endif
ifeq ($(TS_NATIVE_REPLAY)$(TS_NATIVE_MODELS),10)
$(error TS_NATIVE_REPLAY=1 needs TS_NATIVE_MODELS=1)
endif
ifeq ($(TS_NATIVE_MODELS),1)
ifneq ($(TS_BG_NATIVE)$(TS_DRAW_RECORDS)$(TS_VIF_SOURCE)$(TS_DMA_CHAIN_CACHE),0000)
$(error TS_NATIVE_MODELS=1 needs TS_BG_NATIVE, TS_DRAW_RECORDS, TS_VIF_SOURCE and TS_DMA_CHAIN_CACHE at 0)
endif
endif
NATIVE_MODELS_GAME_INPUT := $(BG_NATIVE_GAME_SOURCE)
NATIVE_MODELS_VIF_INPUT := $(BG_NATIVE_VIF_SOURCE)
NATIVE_MODELS_MEMORY_INPUT := $(BG_NATIVE_MEMORY_SOURCE)
NATIVE_MODELS_GAME_COPY := $(OUT)/gen/models/vu1_native_ts.cpp
NATIVE_MODELS_VIF_COPY := $(OUT)/gen/models/ps2_vif1_interpreter.cpp
NATIVE_MODELS_MEMORY_COPY := $(OUT)/gen/models/ps2_memory.cpp
# partGfx (ts_native_game2.cpp) writes one prologue token per model in place
# of its header, matrix and light REFs (xbox_part_prologue.cpp).
NATIVE_MODELS_PARTGFX_INPUT := $(DRAW_RECORD_GAME_SOURCE)
NATIVE_MODELS_PARTGFX_COPY := $(OUT)/gen/models/ts_native_game2.cpp
ifeq ($(TS_NATIVE_MODELS),1)
DRAW_RECORD_GAME_SOURCE := $(NATIVE_MODELS_PARTGFX_COPY)
BG_NATIVE_GAME_SOURCE := $(NATIVE_MODELS_GAME_COPY)
BG_NATIVE_VIF_SOURCE := $(NATIVE_MODELS_VIF_COPY)
BG_NATIVE_MEMORY_SOURCE := $(NATIVE_MODELS_MEMORY_COPY)
endif

# Direct GIF decoder (xbox_gif_direct.h): complete PACKED/REGLIST packets of
# sprites, triangles, strips, fans and state writes decoded straight into
# runs for the renderer, skipping the GS front end's per-register state
# machine; anything else keeps the original route. The outermost stage of
# the GS front end copy (after TS_GIF_NATIVE's).
TS_GIF_DIRECT ?= 0
ifneq ($(filter-out 0 1,$(TS_GIF_DIRECT)),)
$(error TS_GIF_DIRECT must be 0 or 1)
endif
GIF_DIRECT_GS_INPUT := $(GIF_GS_SOURCE)
GIF_DIRECT_GS_COPY := $(OUT)/gen/gif-direct/gs_frontend.cpp
ifeq ($(TS_GIF_DIRECT),1)
GIF_GS_SOURCE := $(GIF_DIRECT_GS_COPY)
endif

# Native 2D emitters (xbox_native_2d.h): dlTextureRectangle(+Float),
# dlFillRectangle(+Float), dlSetZB, dlSetDitherMatrix and dlSetClip write no
# packets; one list token per batch of consecutive calls stands for their
# REFs, and its kicks reach the direct GIF decoder as one piece in the
# token's place (a string of glyphs: one run). The outermost stage of the
# walker and decoder copies (after the native models') and of the GS front
# end copy (after the direct GIF decoder's). Off by default.
TS_NATIVE_2D ?= 0
ifneq ($(filter-out 0 1,$(TS_NATIVE_2D)),)
$(error TS_NATIVE_2D must be 0 or 1)
endif
ifeq ($(TS_NATIVE_2D),1)
ifneq ($(TS_GIF_DIRECT),1)
$(error TS_NATIVE_2D=1 needs TS_GIF_DIRECT=1)
endif
ifneq ($(TS_BG_NATIVE)$(TS_DRAW_RECORDS)$(TS_VIF_SOURCE)$(TS_DMA_CHAIN_CACHE)$(TS_VIF_FAST),00000)
$(error TS_NATIVE_2D=1 needs TS_BG_NATIVE, TS_DRAW_RECORDS, TS_VIF_SOURCE, TS_DMA_CHAIN_CACHE and TS_VIF_FAST at 0)
endif
endif
NATIVE_2D_MEMORY_INPUT := $(BG_NATIVE_MEMORY_SOURCE)
NATIVE_2D_VIF_INPUT := $(BG_NATIVE_VIF_SOURCE)
NATIVE_2D_GS_INPUT := $(GIF_GS_SOURCE)
NATIVE_2D_MEMORY_COPY := $(OUT)/gen/native-2d/ps2_memory.cpp
NATIVE_2D_VIF_COPY := $(OUT)/gen/native-2d/ps2_vif1_interpreter.cpp
NATIVE_2D_GS_COPY := $(OUT)/gen/native-2d/gs_frontend.cpp
ifeq ($(TS_NATIVE_2D),1)
BG_NATIVE_MEMORY_SOURCE := $(NATIVE_2D_MEMORY_COPY)
BG_NATIVE_VIF_SOURCE := $(NATIVE_2D_VIF_COPY)
GIF_GS_SOURCE := $(NATIVE_2D_GS_COPY)
endif

# Native FX route (xbox_native_fx.h): the 0x3FE0 kicks (HUD, text, fills,
# particles, bullets, weather, decals, glows and the state blocks between
# them) are taken by the VIF decoder where their bytes lie - no VU1 copy, no
# program call, no arbiter - and consecutive ones reach the GS in one call,
# one direct GIF decoder over all of them (a string of glyphs: one renderer
# run). Works with TS_GIF_DIRECT on or off (it borrows that decoder's run
# buffer when it is built). The outermost stage of the decoder and GS front
# end copies. Off by default.
TS_NATIVE_FX ?= 0
ifneq ($(filter-out 0 1,$(TS_NATIVE_FX)),)
$(error TS_NATIVE_FX must be 0 or 1)
endif
ifeq ($(TS_NATIVE_FX),1)
ifneq ($(TS_NATIVE_2D),0)
$(error TS_NATIVE_FX=1 replaces TS_NATIVE_2D: set TS_NATIVE_2D=0)
endif
ifneq ($(TS_BG_NATIVE)$(TS_DRAW_RECORDS)$(TS_VIF_SOURCE)$(TS_DMA_CHAIN_CACHE)$(TS_VIF_FAST),00000)
$(error TS_NATIVE_FX=1 needs TS_BG_NATIVE, TS_DRAW_RECORDS, TS_VIF_SOURCE, TS_DMA_CHAIN_CACHE and TS_VIF_FAST at 0)
endif
endif
NATIVE_FX_VIF_INPUT := $(BG_NATIVE_VIF_SOURCE)
NATIVE_FX_GS_INPUT := $(GIF_GS_SOURCE)
NATIVE_FX_VIF_COPY := $(OUT)/gen/native-fx/ps2_vif1_interpreter.cpp
NATIVE_FX_GS_COPY := $(OUT)/gen/native-fx/gs_frontend.cpp
ifeq ($(TS_NATIVE_FX),1)
BG_NATIVE_VIF_SOURCE := $(NATIVE_FX_VIF_COPY)
GIF_GS_SOURCE := $(NATIVE_FX_GS_COPY)
endif

NATIVE_CALL_NAMES := ts_native_math ts_native_game ts_native_game2 ts_native_game3
NATIVE_CALL_DIR := $(OUT)/gen/native-calls
NATIVE_CALL_COPIES := $(addprefix $(NATIVE_CALL_DIR)/,$(addsuffix .cpp,$(NATIVE_CALL_NAMES)))
NATIVE_CALL_OBJS := $(addprefix $(OBJ)/project/game/,$(addsuffix .obj,$(NATIVE_CALL_NAMES)))
NATIVE_CALL_GAME2_COPY := $(NATIVE_CALL_DIR)/ts_native_game2.cpp
XBOX_ROUTED_OBJS := $(BG_NATIVE_ROUTED_OBJS) $(GIF_GS_OBJ) $(NATIVE_CALL_OBJS)

# Xbox sound path (xbox_sound_native.inl): the SPU2's ADPCM blocks decoded
# to PCM once and kept (keyed by address, bytes and filter history), voices
# run in blocks between envelope and sweep steps; output bit-identical to the
# shared source (test/test_sound_native.py). The copy of ps2_spu2.cpp it
# builds from compiles the original decode and mix out. TS_SOUND_NATIVE_SETS:
# cache sets of two 80-byte blocks (1024: 160 KB), a power of two.
TS_SOUND_NATIVE ?= 1
TS_SOUND_NATIVE_SETS ?= 1024
ifneq ($(filter-out 0 1,$(TS_SOUND_NATIVE)),)
$(error TS_SOUND_NATIVE must be 0 or 1)
endif
SOUND_NATIVE_OBJ := $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_spu2.obj
SOUND_NATIVE_COPY := $(OUT)/gen/sound/ps2_spu2.cpp
ifeq ($(TS_SOUND_NATIVE),1)
SOUND_NATIVE_SOURCE := $(SOUND_NATIVE_COPY)
else
SOUND_NATIVE_SOURCE := $(RUNTIME)/src/lib/ps2_spu2.cpp
endif
XBOX_ROUTED_OBJS += $(SOUND_NATIVE_OBJ)

CXX  := sh $(XBOX)/tools/nxdk-cxx-hosted
CC   := nxdk-cc
LINK := nxdk-link
CXBE := $(NXDK_DIR)/tools/cxbe/cxbe$(HOST_EXE)
XISO := $(NXDK_DIR)/tools/extract-xiso/build/extract-xiso$(HOST_EXE)

DEFINES := -DPLATFORM_XBOX=1 -DPS2X_SCALAR_SIMD=1 -DPS2X_NO_EXCEPTIONS=1 -DPS2X_HAS_FFMPEG=0 -DPS2X_ENABLE_IOP_RPC_TRACE=0 -DPS2X_DEVICE_CYCLE_BATCH=2048 -DPS2X_VU1_SSE1=1
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
    $(shell find $(RUNTIME)/src/lib/Kernel -name '*.cpp')

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
    $(GAME)/ts_native_game.cpp $(GAME)/ts_native_game2.cpp $(GAME)/ts_native_game3.cpp $(GAME)/ts_render_counters.cpp
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
# The game functions that take most of a busy match frame (sample profiles
# of the scripted arcade match): -O2, and their constant calls are inlined
# (PS2X_DIRECT_CALL_INLINE, ps2_direct_call_xbox.h); the other files call
# the same code out of line, which keeps them as small as before.
GEN_FAST_FLAGS := $(COMMON) -O2 -DPS2X_DIRECT_CALL_INLINE=1
GEN_FAST_NAMES := partGfx_0x260ae0 obInstLightUpdate_0x25c160 animMtxTick_0x273bb0 moveTest_0x27d0c0 \
    calMatrices_0x212e08 obInstGfx_0x262a60 bgGfx_0x256830 enemyTick_0x2bb470 chrPropTick_0x26ddc0 \
    hittestLineTri_0x209818 hittestLinePoly_0x209b08 bgPortalCrossed_0x258cf0 bgPortalCalcPos_0x258108 \
    bgPortalPlaneClip_0x257f20 bgPortalBackFaceTest_0x257860 decalDraw_0x2a5b20 decalTick_0x2a4bd8 \
    gunTick_0x2946c0 rotateChr_0x2bc5d0 obInstLineTest_0x263768 calDoubleFillets_0x214a88 \
    bgBulletGetClosest_0x25bc88 matrixScaleSet_0x2b4f20 obinstCalcAmbientLight_0x25aae0 \
    pickupPropTick_0x26a330 spawnfxTick_0x2abea0 particleTick_0x29bc58 quaternionToMatrix_0x2b3f90 \
    extractAnimData_0x215280 animUpdate_0x212cf8 moveFindFloorHeight_0x27c578 bgGetRoomsTick_0x256c58 \
    bglightGet_0x25a7d0 setAnim_0x214d68 dlSetBlend_0x2b7ea8 dlSetClip_0x2b8050 dlTextureRectangle_0x2b8c08 \
    dlDrawTriangleStrip_0x2b8a10 camTick_0x27e320 findweapon_0x2c4d70 MoveTestWall_0x27cce0
# Of those, the originals a native twin replaces (project/game/ts_native_*.cpp:
# the twin runs, the original only for the boot self-test and the odd deep
# recursion; the hardware profile finds each idle, 0-3 samples in 82 s) are
# built -Oz like the rest: 27 KB less code (364 KB against 392). calMatrices'
# original still runs (0.5% of the CPU) and stays. make
# TS_DEMOTE_NATIVE_TWINS=0: all -O2.
NATIVE_TWINS := animMtxTick_0x273bb0 animUpdate_0x212cf8 bgBulletGetClosest_0x25bc88 bgPortalBackFaceTest_0x257860 \
    bgPortalCalcPos_0x258108 bgPortalCrossed_0x258cf0 bgPortalPlaneClip_0x257f20 bglightGet_0x25a7d0 \
    calDoubleFillets_0x214a88 chrPropTick_0x26ddc0 decalDraw_0x2a5b20 dlSetBlend_0x2b7ea8 dlSetClip_0x2b8050 \
    extractAnimData_0x215280 hittestLinePoly_0x209b08 hittestLineTri_0x209818 matrixScaleSet_0x2b4f20 \
    moveFindFloorHeight_0x27c578 moveTest_0x27d0c0 obInstLightUpdate_0x25c160 obinstCalcAmbientLight_0x25aae0 \
    partGfx_0x260ae0 particleTick_0x29bc58 quaternionToMatrix_0x2b3f90 rotateChr_0x2bc5d0 spawnfxTick_0x2abea0
TS_DEMOTE_NATIVE_TWINS ?= 1
ifeq ($(TS_DEMOTE_NATIVE_TWINS),1)
GEN_FAST_NAMES := $(filter-out $(NATIVE_TWINS),$(GEN_FAST_NAMES))
endif

# ---- TS_NATIVE_LOGIC, part 1 of 2: the generated game functions ----------
# make TS_NATIVE_LOGIC=1: the game-logic rewrite (src/xbox/xbox_logic.h).
# - Every generated function (LOGIC_LITE_ALL=1) is rewritten by
#   tools/promote_registers.py: the guest pc is stored only where something
#   can read it (not before every instruction), the delay-slot flags only
#   where an exception can read them, the resume switch is skipped on a
#   normal call, constant calls use the lean protocol (one compare after the
#   call; a stop request is seen at the next checkpoint instead) and calls to
#   the six hottest leaf natives (sceVu0MulMatrix and five more) run their
#   copies directly. Same statements in the same order: exact, and 10-15%
#   less code. test/test_native_logic.py runs functions against their
#   originals. Functions it does not understand (mostly stub wrappers) stay
#   as they were, with only the resume-switch skip.
# - LOGIC_PROMOTE_NAMES (the profile's hot game functions) are also built
#   -O2; a refusal of one of them is reported ("[ LOGIC ] ... kept
#   unpromoted"). LOGIC_PROMOTE_MODE=full keeps their registers in host
#   variables instead (exact too, but 1.5-2x the code on the Pentium III).
# - The native game files (part 2) call through the same lean protocol and
#   the same leaf copies; the C library's memcpy/memset/memcmp use plain
#   moves (xbox_string.cpp).
# Replaces TS_NATIVE_CALL_SLOTS (leave that at 0). Off by default.
TS_NATIVE_LOGIC ?= 1
TS_LEAF_COUNT ?= 0
ifneq ($(filter-out 0 1,$(TS_NATIVE_LOGIC)),)
$(error TS_NATIVE_LOGIC must be 0 or 1)
endif
LOGIC_LITE_ALL ?= 1
LOGIC_PROMOTE_MODE ?= lite
$(if $(filter-out 0 1,$(LOGIC_LITE_ALL)),$(error LOGIC_LITE_ALL must be 0 or 1))
$(if $(filter-out lite full,$(LOGIC_PROMOTE_MODE)),$(error LOGIC_PROMOTE_MODE must be lite or full))
LOGIC_PROMOTE_NAMES ?= playerTick_0x281248 MoveTestWall_0x27cce0 propMoveTestRoom_0x270e08 pickupPropTick_0x26a330 \
    propTickBefore_0x26f500 findpadslinked2pad_0x264a18 calMatrices_0x212e08 \
    propTickAfter_0x26f9e8 propTickPlayer_0x26fc20 lvTickPlayer_0x2265a8 enemyTick_0x2bb470 gunTick_0x2946c0 \
    obInstLineTest_0x263768 bgGetRoomsTick_0x256c58 setAnim_0x214d68 camTick_0x27e320 findweapon_0x2c4d70 \
    remotePropTick_0x26c440 carPropTick_0x276678 gunUpdateParts_0x2911e0 chrLineTestChr_0x286700 \
    propFindFloorHeightRoom_0x2714e0 bgFloorBBIntersectionXZ_0x2571c8 calGlobalMatrices_0x2149b0
LOGIC_STAMP := $(OUT)/gen/native_logic.flags
LOGIC_STAMP_TEXT := TS_NATIVE_LOGIC=$(TS_NATIVE_LOGIC) leafcount=$(TS_LEAF_COUNT)$(if $(filter 1,$(TS_NATIVE_LOGIC)), all=$(LOGIC_LITE_ALL) mode=$(LOGIC_PROMOTE_MODE) promote=$(strip $(LOGIC_PROMOTE_NAMES)))
LOGIC_GEN_ARGS :=
ifeq ($(TS_NATIVE_LOGIC),1)
ifeq ($(TS_NATIVE_CALL_SLOTS),1)
$(error TS_NATIVE_LOGIC=1 replaces TS_NATIVE_CALL_SLOTS; leave TS_NATIVE_CALL_SLOTS at 0)
endif
LOGIC_EMPTY :=
LOGIC_COMMA := ,
LOGIC_GEN_ARGS := --mode=$(LOGIC_PROMOTE_MODE) $(if $(filter 1,$(LOGIC_LITE_ALL)),--all) --promote=$(subst $(LOGIC_EMPTY) $(LOGIC_EMPTY),$(LOGIC_COMMA),$(strip $(LOGIC_PROMOTE_NAMES)))
# xbox_logic.h, searched last.
GEN_FLAGS += -I$(XBOX) -DTS_NATIVE_LOGIC=1
GEN_FAST_FLAGS += -I$(XBOX) -DTS_NATIVE_LOGIC=1
GEN_FAST_NAMES += $(filter-out $(GEN_FAST_NAMES),$(LOGIC_PROMOTE_NAMES))
endif
LOGIC_GEN_DEPS := $(LOGIC_STAMP) $(if $(LOGIC_GEN_ARGS),$(addprefix $(XBOX)/tools/,logic_generated.py promote_registers.py))
# Written only when the text changes. A first stamp with the switch off is
# dated 1970, so adding it does not re-patch an existing build.
$(LOGIC_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(LOGIC_STAMP_TEXT)' ] || { new=1; [ -f $@ ] && new=0; \
	    printf '%s\n' '$(LOGIC_STAMP_TEXT)' > $@; \
	    if [ "$$new" = 1 ] && [ '$(TS_NATIVE_LOGIC)' = 0 ]; then touch -d @0 $@; fi; }
# ---- end of TS_NATIVE_LOGIC part 1 ----------------------------------------

GEN_FAST_MISSING := $(filter-out $(notdir $(basename $(GEN_PATCHED))),$(GEN_FAST_NAMES))
$(if $(and $(GEN_FAST_MISSING),$(filter-out clean,$(MAKECMDGOALS))),$(error GEN_FAST_NAMES not in project/generated: $(GEN_FAST_MISSING)))
GEN_FAST_OBJS := $(foreach n,$(GEN_FAST_NAMES),$(OBJ)/build/xbox/gen/$(n).obj)
$(GEN_FAST_OBJS): GEN_FLAGS := $(GEN_FAST_FLAGS)
# An object does not record the flags it was built with. The generated flags
# and the -O2 list are written to a stamp (only when they change) that every
# generated object depends on, so a flag change or a file moved between the
# two lists rebuilds the generated code instead of linking a stale object.
GEN_FLAGS_STAMP := $(OUT)/gen/gen_flags.stamp
GEN_FLAGS_TEXT  := $(GEN_FLAGS) / $(GEN_FAST_FLAGS): $(GEN_FAST_NAMES)$(if $(filter 1,$(TS_GEN_PCH)), / pch=1)
# Update only when generated objects are requested. A runtime-only build
# must not invalidate their cache just because it omitted TS_GEN_PCH.
$(GEN_FLAGS_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(GEN_FLAGS_TEXT)' ] || printf '%s\n' '$(GEN_FLAGS_TEXT)' > $@
.DEFAULT_GOAL := all # dependency rules above this line must not become the default
$(GEN_OBJS): $(GEN_FLAGS_STAMP)

# Precompile only the three includes already at the start of ordinary
# generated functions, in their original order. Handwritten replacements,
# special include prefixes, the registration table and VU units stay normal.
GEN_PCH_HEADER := $(XBOX)/compat/generated_pch.h
GEN_PCH_DIR := $(OUT)/gen/pch
GEN_PCH_OZ := $(GEN_PCH_DIR)/generated_oz.pch
GEN_PCH_FAST := $(GEN_PCH_DIR)/generated_o2_inline.pch
GEN_PCH_LOAD :=
ifeq ($(TS_GEN_PCH),1)
GEN_PCH_NAMES := $(shell $(PYTHON) -c 'import pathlib,sys; h=pathlib.Path(sys.argv[1]); prefix="\n".join(s for s in h.read_text().splitlines() if s.startswith(chr(35)+"include"))+"\n"; print(" ".join(p.stem for p in sorted(pathlib.Path(sys.argv[2]).glob("*.cpp")) if p.read_text().startswith(prefix)))' "$(GEN_PCH_HEADER)" "$(GENERATED)")
GEN_PCH_OBJS := $(call objof,$(addprefix $(OUT)/gen/,$(addsuffix .cpp,$(GEN_PCH_NAMES))))
GEN_PCH_OZ_OBJS := $(filter-out $(GEN_FAST_OBJS),$(GEN_PCH_OBJS))
GEN_PCH_FAST_OBJS := $(filter $(GEN_FAST_OBJS),$(GEN_PCH_OBJS))
GEN_PCH_OZ_FLAGS := $(GEN_FLAGS)
GEN_PCH_FAST_FLAGS := $(GEN_FAST_FLAGS)
GEN_PCH_FLAGS_STAMP := $(GEN_PCH_DIR)/compile.flags
GEN_PCH_FLAGS_TEXT := $(CXX) clang=$(NXDK_CLANG) sdk=$(NXDK_DIR) / $(GEN_PCH_OZ_FLAGS) / $(GEN_PCH_FAST_FLAGS)

$(GEN_PCH_FLAGS_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(GEN_PCH_FLAGS_TEXT)' ] || printf '%s\n' '$(GEN_PCH_FLAGS_TEXT)' > $@

$(GEN_PCH_OZ): private GEN_PCH_BUILD_FLAGS := $(GEN_PCH_OZ_FLAGS)
$(GEN_PCH_FAST): private GEN_PCH_BUILD_FLAGS := $(GEN_PCH_FAST_FLAGS)
$(GEN_PCH_OZ) $(GEN_PCH_FAST): $(GEN_PCH_HEADER) $(XBOX)/tools/nxdk-cxx-hosted $(GEN_PCH_FLAGS_STAMP)
	@mkdir -p $(dir $@)
	@echo "[ PCH     ] $(notdir $@)"
	@$(CXX) $(GEN_PCH_BUILD_FLAGS) -x c++-header -MD -MP -MT $@ -MF $(@:.pch=.d) -o $@.tmp $<
	@mv $@.tmp $@
	@sed -i '1s|^\([A-Za-z]\):/|/\L\1/|' $(@:.pch=.d)

ifneq ($(GEN_PCH_OZ_OBJS),)
$(GEN_PCH_OZ_OBJS): $(GEN_PCH_OZ)
$(GEN_PCH_OZ_OBJS): GEN_PCH_LOAD := -include-pch $(GEN_PCH_OZ)
endif
ifneq ($(GEN_PCH_FAST_OBJS),)
$(GEN_PCH_FAST_OBJS): $(GEN_PCH_FAST)
$(GEN_PCH_FAST_OBJS): GEN_PCH_LOAD := -include-pch $(GEN_PCH_FAST)
endif
-include $(GEN_PCH_OZ:.pch=.d) $(GEN_PCH_FAST:.pch=.d)
else
# A dependency file from an earlier enabled build may still mention a PCH.
# Turning the option off must use the original flags even if it was removed.
$(GEN_PCH_OZ) $(GEN_PCH_FAST):
endif

# The software renderer and the Xbox presenter are the hottest code: -O2.
FAST_OBJS = $(filter $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/gs/%.obj $(OBJ)/src/xbox/xbox_raylib.obj $(OBJ)/project/game/vu1_native_ts.obj \
                     $(OBJ)/project/game/ts_native_math.obj $(OBJ)/project/game/ts_native_fp.obj \
                     $(OBJ)/project/game/ts_native_game.obj $(OBJ)/project/game/ts_native_game2.obj \
                     $(OBJ)/project/game/ts_native_game3.obj \
                     $(OBJ)/src/xbox/xbox_bg_runtime.obj $(OBJ)/src/xbox/xbox_bg_xf.obj \
                     $(OBJ)/src/xbox/xbox_gif_native.obj $(OBJ)/src/xbox/xbox_dma_chain.obj \
                     $(OBJ)/src/xbox/xbox_draw_record.obj $(OBJ)/src/xbox/xbox_vif_record.obj $(OBJ)/src/xbox/xbox_vif_source.obj \
                     $(OBJ)/src/xbox/gs_nv2a_backend.obj $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_memory.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_vif1_interpreter.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/Kernel/EeScheduler.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_spu2.obj \
                     $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_music.obj,$(OTHER_OBJS))
$(FAST_OBJS): RUNTIME_FLAGS := $(COMMON) -O2 $(SDL_FLAGS) -DPS2_RUNTIME_LOGS=1 -DPS2X_POINT_SAMPLING=1

# Paths in the response file use the linker's host-native spelling.
NXDK_LIB_NAMES := xboxkrnl/libxboxkrnl.lib libpdclib.lib winmm.lib libwinapi.lib \
    libnxdk_hal.lib libnxdk.lib libnxdk_automount_d.lib libpbkit.lib nxdk_usb.lib libxboxrt.lib libzlib.lib \
    libpng.lib libc++.lib libSDL2.lib
NXDK_LIB_FILES := $(addprefix $(NXDK_LIB_DIR)/,$(NXDK_LIB_NAMES))
NXDK_LIBS := $(addprefix $(NXDK_LINK_LIB_DIR)/,$(NXDK_LIB_NAMES))

all: $(OUT)/TimeSplitters.iso
# Build/link the actual title without copying the PS2 disc or staging assets.
xbe: $(OUT)/iso/default.xbe

# clang names the target D:/..., make calls it /d/...: sed fixes the first line.
$(GEN_OBJS): $(OBJ)/%.obj: $(ROOT)/%.cpp
	@mkdir -p $(dir $@)
	@echo "[ CXX gen ] $(notdir $<)"
	@$(CXX) $(GEN_FLAGS) $(GEN_PCH_LOAD) -MD -MP -MT $@ -MF $(@:.obj=.d) -c -o $@ $<
	@sed -i '1s|^\([A-Za-z]\):/|/\L\1/|' $(@:.obj=.d)

$(filter-out $(XBOX_ROUTED_OBJS),$(OTHER_OBJS)): $(OBJ)/%.obj: $(ROOT)/%.cpp
	@mkdir -p $(dir $@)
	@echo "[ CXX     ] $(subst $(ROOT)/,,$<)"
	@$(CXX) $(RUNTIME_FLAGS) -MD -MP -MT $@ -MF $(@:.obj=.d) -c -o $@ $<
	@sed -i '1s|^\([A-Za-z]\):/|/\L\1/|' $(@:.obj=.d)

$(BG_NATIVE_GAME_OBJ): $(BG_NATIVE_GAME_SOURCE)
$(BG_NATIVE_GAME_OBJ): XBOX_COMPILE_SOURCE := $(BG_NATIVE_GAME_SOURCE)
$(BG_NATIVE_VIF_OBJ): $(BG_NATIVE_VIF_SOURCE)
$(BG_NATIVE_VIF_OBJ): XBOX_COMPILE_SOURCE := $(BG_NATIVE_VIF_SOURCE)
$(BG_NATIVE_MEMORY_OBJ): $(BG_NATIVE_MEMORY_SOURCE)
$(BG_NATIVE_MEMORY_OBJ): XBOX_COMPILE_SOURCE := $(BG_NATIVE_MEMORY_SOURCE)
$(GIF_GS_OBJ): $(GIF_GS_SOURCE)
$(GIF_GS_OBJ): XBOX_COMPILE_SOURCE := $(GIF_GS_SOURCE)
ifeq ($(TS_NATIVE_CALL_SLOTS),1)
$(NATIVE_CALL_OBJS): $(OBJ)/project/game/%.obj: $(NATIVE_CALL_DIR)/%.cpp
$(NATIVE_CALL_OBJS): XBOX_COMPILE_SOURCE = $(NATIVE_CALL_DIR)/$(notdir $(basename $@)).cpp
else
$(filter-out $(DRAW_RECORD_GAME_OBJ),$(NATIVE_CALL_OBJS)): $(OBJ)/project/game/%.obj: $(GAME)/%.cpp
$(filter-out $(DRAW_RECORD_GAME_OBJ),$(NATIVE_CALL_OBJS)): XBOX_COMPILE_SOURCE = $(GAME)/$(notdir $(basename $@)).cpp
$(DRAW_RECORD_GAME_OBJ): $(DRAW_RECORD_GAME_SOURCE)
$(DRAW_RECORD_GAME_OBJ): XBOX_COMPILE_SOURCE := $(DRAW_RECORD_GAME_SOURCE)
endif
$(XBOX_ROUTED_OBJS): RUNTIME_FLAGS += -I$(GAME) -I$(XBOX)
$(XBOX_ROUTED_OBJS):
	@mkdir -p $(dir $@)
	@echo "[ CXX     ] $(subst $(ROOT)/,,$(XBOX_COMPILE_SOURCE))"
	@$(CXX) $(RUNTIME_FLAGS) -MD -MP -MT $@ -MF $(@:.obj=.d) -c -o $@ $(XBOX_COMPILE_SOURCE)
	@sed -i '1s|^\([A-Za-z]\):/|/\L\1/|' $(@:.obj=.d)

ifeq ($(TS_BG_NATIVE),1)
$(BG_NATIVE_GAME_COPY): $(GAME)/vu1_native_ts.cpp $(XBOX)/tools/patch_bg_native.py
	@mkdir -p $(dir $@)
	@echo "[ BG PATCH] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_bg_native.py $< $@

$(BG_NATIVE_VIF_COPY): $(RUNTIME)/src/lib/ps2_vif1_interpreter.cpp $(XBOX)/tools/patch_bg_runtime.py
	@mkdir -p $(dir $@)
	@echo "[ BG PATCH] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_bg_runtime.py vif $< $@

$(BG_NATIVE_MEMORY_COPY): $(RUNTIME)/src/lib/ps2_memory.cpp $(XBOX)/tools/patch_bg_runtime.py
	@mkdir -p $(dir $@)
	@echo "[ BG PATCH] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_bg_runtime.py memory $< $@
else
# An old .d may name an enabled build's source copy. Switching off must not
# run a patcher (or fail on a removed copy); the object compiles its original.
$(BG_NATIVE_GAME_COPY) $(BG_NATIVE_VIF_COPY) $(BG_NATIVE_MEMORY_COPY):
endif

ifeq ($(TS_VIF_FAST),1)
$(VIF_FAST_COPY): $(VIF_FAST_INPUT) $(XBOX)/tools/patch_vif_fast.py $(XBOX)/xbox_vif_fast.h $(OUT)/gen/bg_native.flags
	@mkdir -p $(dir $@)
	@echo "[ VIF FAST] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_vif_fast.py $< $@
else
$(VIF_FAST_COPY):
endif

ifeq ($(TS_DRAW_RECORDS),1)
$(DRAW_RECORD_GAME_COPY): $(GAME)/ts_native_game2.cpp $(XBOX)/tools/patch_draw_record_game.py $(OUT)/gen/draw_records.flags
	@mkdir -p $(dir $@)
	@echo "[ RECORD  ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_draw_record_game.py $< $@
$(DRAW_RECORD_VIF_COPY): $(DRAW_RECORD_VIF_INPUT) $(XBOX)/tools/patch_vif_record.py $(OUT)/gen/bg_native.flags $(OUT)/gen/optimizations.flags $(OUT)/gen/draw_records.flags
	@mkdir -p $(dir $@)
	@echo "[ RECORD  ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_vif_record.py $< $@
$(DRAW_RECORD_MEMORY_COPY): $(DRAW_RECORD_MEMORY_INPUT) $(XBOX)/tools/patch_draw_record_dma.py $(OUT)/gen/bg_native.flags $(OUT)/gen/native_paths.flags $(OUT)/gen/draw_records.flags
	@mkdir -p $(dir $@)
	@echo "[ RECORD  ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_draw_record_dma.py $< $@
else
$(DRAW_RECORD_GAME_COPY) $(DRAW_RECORD_VIF_COPY) $(DRAW_RECORD_MEMORY_COPY):
endif

ifeq ($(TS_GIF_NATIVE),1)
$(GIF_NATIVE_COPY): $(GIF_NATIVE_INPUT) $(XBOX)/tools/patch_native_gif.py $(OUT)/gen/bg_native.flags $(OUT)/gen/native_paths.flags
	@mkdir -p $(dir $@)
	@echo "[ GIF     ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_gif.py native $< $@
$(GIF_GS_COPY): $(RUNTIME)/src/lib/gs/gs_frontend.cpp $(XBOX)/tools/patch_native_gif.py $(OUT)/gen/native_paths.flags
	@mkdir -p $(dir $@)
	@echo "[ GIF     ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_gif.py gs $< $@
else
$(GIF_NATIVE_COPY) $(GIF_GS_COPY):
endif

ifeq ($(TS_GIF_DIRECT),1)
$(GIF_DIRECT_GS_COPY): $(GIF_DIRECT_GS_INPUT) $(XBOX)/tools/patch_gif_direct.py $(OUT)/gen/native_paths.flags $(OUT)/gen/gif_direct.flags
	@mkdir -p $(dir $@)
	@echo "[ GIF DIR ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_gif_direct.py $< $@
else
$(GIF_DIRECT_GS_COPY):
endif

ifeq ($(TS_VIF_SOURCE),1)
$(VIF_SOURCE_NATIVE_COPY): $(VIF_SOURCE_NATIVE_INPUT) $(XBOX)/tools/patch_native_source.py $(OUT)/gen/bg_native.flags $(OUT)/gen/native_paths.flags $(OUT)/gen/vif_source.flags
	@mkdir -p $(dir $@)
	@echo "[ VIF SRC ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_source.py $< $@
else
$(VIF_SOURCE_NATIVE_COPY):
endif

ifeq ($(TS_NATIVE_MODELS),1)
NATIVE_MODELS_DEPS := $(XBOX)/tools/patch_native_models.py $(OUT)/gen/bg_native.flags $(OUT)/gen/optimizations.flags \
    $(OUT)/gen/native_paths.flags $(OUT)/gen/draw_records.flags $(OUT)/gen/vif_source.flags $(OUT)/gen/native_models.flags
$(NATIVE_MODELS_GAME_COPY): $(NATIVE_MODELS_GAME_INPUT) $(NATIVE_MODELS_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ MODELS  ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_models.py game $< $@
$(NATIVE_MODELS_VIF_COPY): $(NATIVE_MODELS_VIF_INPUT) $(NATIVE_MODELS_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ MODELS  ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_models.py vif $< $@
$(NATIVE_MODELS_MEMORY_COPY): $(NATIVE_MODELS_MEMORY_INPUT) $(NATIVE_MODELS_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ MODELS  ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_models.py memory $< $@
$(NATIVE_MODELS_PARTGFX_COPY): $(NATIVE_MODELS_PARTGFX_INPUT) $(NATIVE_MODELS_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ MODELS  ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_models.py partgfx $< $@
else
$(NATIVE_MODELS_GAME_COPY) $(NATIVE_MODELS_VIF_COPY) $(NATIVE_MODELS_MEMORY_COPY) $(NATIVE_MODELS_PARTGFX_COPY):
endif

ifeq ($(TS_DMA_CHAIN_CACHE),1)
$(DMA_CHAIN_COPY): $(DMA_CHAIN_INPUT) $(XBOX)/tools/patch_dma_chain.py $(OUT)/gen/bg_native.flags $(OUT)/gen/native_paths.flags
	@mkdir -p $(dir $@)
	@echo "[ DMA     ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_dma_chain.py $< $@
else
$(DMA_CHAIN_COPY):
endif

ifeq ($(TS_NATIVE_CALL_SLOTS),1)
$(filter-out $(NATIVE_CALL_GAME2_COPY),$(NATIVE_CALL_COPIES)): $(NATIVE_CALL_DIR)/%.cpp: $(GAME)/%.cpp
$(NATIVE_CALL_GAME2_COPY): $(DRAW_RECORD_GAME_SOURCE) $(OUT)/gen/draw_records.flags
$(NATIVE_CALL_COPIES): NATIVE_CALL_INPUT = $(GAME)/$(notdir $@)
$(NATIVE_CALL_GAME2_COPY): NATIVE_CALL_INPUT := $(DRAW_RECORD_GAME_SOURCE)
$(NATIVE_CALL_COPIES): $(GEN_TABLE) $(XBOX)/tools/patch_native_calls.py $(XBOX)/tools/direct_calls.py
	@mkdir -p $(dir $@)
	@echo "[ CALLS   ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_calls.py $(NATIVE_CALL_INPUT) $(GEN_TABLE) $@
else
$(NATIVE_CALL_COPIES):
endif

# ---- TS_NATIVE_LOGIC, part 2 of 2: the native game files, runtime pieces --
# The four native game files compile from tools/patch_native_logic.py copies:
# their literal guest calls use the lean protocol and the leaf copies, and
# ts_native_math.cpp publishes its natives to the leaf copies. ts_native_game2
# is copied from the outermost earlier stage (TS_NATIVE_MODELS' partGfx copy
# or the draw-record copy), so this stage comes after those.
NATIVE_LOGIC_DIR := $(OUT)/gen/native-logic
NATIVE_LOGIC_COPIES := $(addprefix $(NATIVE_LOGIC_DIR)/,$(addsuffix .cpp,$(NATIVE_CALL_NAMES)))
NATIVE_LOGIC_GAME2_COPY := $(NATIVE_LOGIC_DIR)/ts_native_game2.cpp
LOGIC_OBJS := $(NATIVE_CALL_OBJS) $(OBJ)/src/xbox/xbox_logic.obj $(OBJ)/src/xbox/xbox_string.obj
ifeq ($(TS_NATIVE_LOGIC),1)
# Later than the routing above, so these target variables win.
$(NATIVE_CALL_OBJS): $(OBJ)/project/game/%.obj: $(NATIVE_LOGIC_DIR)/%.cpp
$(NATIVE_CALL_OBJS): XBOX_COMPILE_SOURCE = $(NATIVE_LOGIC_DIR)/$(notdir $(basename $@)).cpp
$(filter-out $(NATIVE_LOGIC_GAME2_COPY),$(NATIVE_LOGIC_COPIES)): $(NATIVE_LOGIC_DIR)/%.cpp: $(GAME)/%.cpp
$(NATIVE_LOGIC_GAME2_COPY): $(DRAW_RECORD_GAME_SOURCE) $(OUT)/gen/draw_records.flags $(OUT)/gen/native_models.flags
$(NATIVE_LOGIC_COPIES): NATIVE_LOGIC_INPUT = $(GAME)/$(notdir $@)
$(NATIVE_LOGIC_GAME2_COPY): NATIVE_LOGIC_INPUT := $(DRAW_RECORD_GAME_SOURCE)
$(NATIVE_LOGIC_COPIES): $(GEN_TABLE) $(XBOX)/tools/patch_native_logic.py $(XBOX)/tools/patch_native_calls.py \
    $(XBOX)/tools/direct_calls.py $(LOGIC_STAMP)
	@mkdir -p $(dir $@)
	@echo "[ LOGIC   ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_logic.py $(NATIVE_LOGIC_INPUT) $(GEN_TABLE) $@
else
$(NATIVE_LOGIC_COPIES):
endif
$(LOGIC_OBJS): $(LOGIC_STAMP)
$(LOGIC_OBJS): RUNTIME_FLAGS += -DTS_NATIVE_LOGIC=$(TS_NATIVE_LOGIC) -DTS_LEAF_COUNT=$(TS_LEAF_COUNT)
# The leaf bodies run thousands of times a frame (the later -O2 wins).
$(OBJ)/src/xbox/xbox_logic.obj: RUNTIME_FLAGS += -O2
# ---- end of TS_NATIVE_LOGIC part 2 ----------------------------------------

$(GEN_TABLE): $(GENERATED)/register_functions.cpp $(XBOX)/tools/compact_function_table.py
	@mkdir -p $(dir $@)
	@echo "[ TABLE   ] $@"
	@$(PYTHON) $(XBOX)/tools/compact_function_table.py $< $@

# The patcher reads the call targets' slots from the compact table, so a
# regenerated table re-patches (and recompiles) every game function.
$(GEN_PATCHED): $(OUT)/gen/%.cpp: $(GENERATED)/%.cpp $(GEN_TABLE) $(XBOX)/tools/patch_generated.py $(XBOX)/tools/direct_calls.py \
    $(LOGIC_GEN_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ PATCH   ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_generated.py $< $(GEN_TABLE) $@
	$(if $(LOGIC_GEN_ARGS),@$(PYTHON) $(XBOX)/tools/logic_generated.py $@ $(GEN_TABLE) $(LOGIC_GEN_ARGS))

# Fixed copies of nxdk C sources, built in place of the library's
# (pbkit: double-buffered; winapi/sync: condition-variable timeouts).
PBKIT_OBJ := $(OBJ)/src/xbox/pbkit/pbkit_ts.obj $(OBJ)/src/xbox/winapi/sync_ts.obj

$(PBKIT_OBJ): $(OBJ)/src/xbox/%.obj: $(XBOX)/%.c
	@mkdir -p $(dir $@)
	@echo "[ CC      ] src/xbox/$*.c"
	@$(CC) -O2 -I$(NXDK_DIR)/lib/pbkit -I$(NXDK_DIR)/lib/winapi -Wno-everything -c -o $@ $<

# NV2A shaders (src/xbox/shaders): Cg -> vp20/fp20 assembly -> pushbuffer .inl.
CGC    := $(NXDK_DIR)/tools/cg/$(CG_HOST)/cgc$(HOST_EXE)
VP20   := $(NXDK_DIR)/tools/vp20compiler/vp20compiler$(HOST_EXE)
FP20   := $(NXDK_DIR)/tools/fp20compiler/fp20compiler$(HOST_EXE)
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

# Rebuild every consumer on enable/disable or verification changes. Generated
# copies are never selected when disabled, even if a previous build left them.
BG_NATIVE_STAMP := $(OUT)/gen/bg_native.flags
BG_NATIVE_FLAGS := -DTS_BG_NATIVE=$(TS_BG_NATIVE) -DTS_BG_VERIFY=$(TS_BG_VERIFY) -DTS_BG_FAST=$(TS_BG_FAST) -DTS_BG_BATCH=$(TS_BG_BATCH)
$(BG_NATIVE_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(BG_NATIVE_FLAGS)' ] || echo '$(BG_NATIVE_FLAGS)' > $@
$(BG_NATIVE_OBJS): $(BG_NATIVE_STAMP)
$(BG_NATIVE_OBJS): RUNTIME_FLAGS += $(BG_NATIVE_FLAGS)

# Keep the optimization switches scoped to the actual consumers. A switch
# change rebuilds those objects even when a generated copy already exists.
XBOX_OPT_STAMP := $(OUT)/gen/optimizations.flags
XBOX_OPT_FLAGS := -DTS_VIF_FAST=$(TS_VIF_FAST) -DTS_NV2A_MATERIAL_CACHE=$(TS_NV2A_MATERIAL_CACHE) -DTS_NV2A_PACK_IDENTITY_CACHE=$(TS_NV2A_PACK_IDENTITY_CACHE)
XBOX_OPT_OBJS := $(BG_NATIVE_VIF_OBJ) $(OBJ)/src/xbox/gs_nv2a_backend.obj \
    $(OBJ)/src/xbox/xbox_vif_record.obj $(OBJ)/src/xbox/xbox_main.obj
$(XBOX_OPT_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(XBOX_OPT_FLAGS)' ] || echo '$(XBOX_OPT_FLAGS)' > $@
$(XBOX_OPT_OBJS): $(XBOX_OPT_STAMP)
$(XBOX_OPT_OBJS): RUNTIME_FLAGS += $(XBOX_OPT_FLAGS)

# Source-only integration work also records the future build's native routes.
# Do not invoke these build targets until the planned implementation is done.
NATIVE_PATH_STAMP := $(OUT)/gen/native_paths.flags
NATIVE_PATH_FLAGS := -DTS_GIF_NATIVE=$(TS_GIF_NATIVE) -DTS_DMA_CHAIN_CACHE=$(TS_DMA_CHAIN_CACHE) -DTS_NATIVE_CALL_SLOTS=$(TS_NATIVE_CALL_SLOTS)
NATIVE_PATH_OBJS := $(BG_NATIVE_GAME_OBJ) $(BG_NATIVE_MEMORY_OBJ) $(GIF_GS_OBJ) $(NATIVE_CALL_OBJS) \
    $(OBJ)/src/xbox/xbox_gif_native.obj $(OBJ)/src/xbox/xbox_dma_chain.obj $(OBJ)/src/xbox/xbox_main.obj
$(NATIVE_PATH_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(NATIVE_PATH_FLAGS)' ] || echo '$(NATIVE_PATH_FLAGS)' > $@
$(NATIVE_PATH_OBJS): $(NATIVE_PATH_STAMP)
$(NATIVE_PATH_OBJS): RUNTIME_FLAGS += $(NATIVE_PATH_FLAGS)

# The producer, DMA walker, VIF and native consumers select the same mode.
# Both runtime copies are outer stages; their inner-stage switch stamps
# force regeneration even when changing to an older original input file.
DRAW_RECORD_STAMP := $(OUT)/gen/draw_records.flags
DRAW_RECORD_FLAGS := -DTS_DRAW_RECORDS=$(TS_DRAW_RECORDS)
DRAW_RECORD_OBJS := $(DRAW_RECORD_GAME_OBJ) $(BG_NATIVE_GAME_OBJ) $(BG_NATIVE_VIF_OBJ) $(BG_NATIVE_MEMORY_OBJ) \
    $(OBJ)/src/xbox/xbox_draw_record.obj $(OBJ)/src/xbox/xbox_vif_record.obj $(OBJ)/src/xbox/xbox_main.obj
$(DRAW_RECORD_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(DRAW_RECORD_FLAGS)' ] || echo '$(DRAW_RECORD_FLAGS)' > $@
$(DRAW_RECORD_OBJS): $(DRAW_RECORD_STAMP)
$(DRAW_RECORD_OBJS): RUNTIME_FLAGS += $(DRAW_RECORD_FLAGS)

# A source view is scoped to one admitted prefix and its synchronous native
# call. Every caller and the backend lending a flat ring span must agree.
VIF_SOURCE_STAMP := $(OUT)/gen/vif_source.flags
VIF_SOURCE_FLAGS := -DTS_VIF_SOURCE=$(TS_VIF_SOURCE)
VIF_SOURCE_OBJS := $(BG_NATIVE_GAME_OBJ) $(BG_NATIVE_VIF_OBJ) \
    $(OBJ)/src/xbox/xbox_vif_record.obj $(OBJ)/src/xbox/xbox_vif_source.obj \
    $(OBJ)/src/xbox/gs_nv2a_backend.obj $(OBJ)/src/xbox/xbox_main.obj
$(VIF_SOURCE_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(VIF_SOURCE_FLAGS)' ] || echo '$(VIF_SOURCE_FLAGS)' > $@
$(VIF_SOURCE_OBJS): $(VIF_SOURCE_STAMP)
$(VIF_SOURCE_OBJS): RUNTIME_FLAGS += $(VIF_SOURCE_FLAGS)

# The walker, decoder and native program copies, the cache and its status line.
NATIVE_MODELS_STAMP := $(OUT)/gen/native_models.flags
NATIVE_MODELS_FLAGS := -DTS_NATIVE_MODELS=$(TS_NATIVE_MODELS) -DTS_MODEL_FILES=$(TS_MODEL_FILES)
NATIVE_MODELS_OBJS := $(BG_NATIVE_GAME_OBJ) $(BG_NATIVE_VIF_OBJ) $(BG_NATIVE_MEMORY_OBJ) \
    $(OBJ)/src/xbox/xbox_model_cache.obj $(OBJ)/src/xbox/xbox_main.obj $(OBJ)/src/xbox/gs_nv2a_backend.obj     $(DRAW_RECORD_GAME_OBJ) $(OBJ)/src/xbox/xbox_part_prologue.obj
$(NATIVE_MODELS_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(NATIVE_MODELS_FLAGS)' ] || echo '$(NATIVE_MODELS_FLAGS)' > $@
$(NATIVE_MODELS_OBJS): $(NATIVE_MODELS_STAMP)
$(NATIVE_MODELS_OBJS): RUNTIME_FLAGS += $(NATIVE_MODELS_FLAGS)

# Native replay: the walker copy (prologue markers), the cache and prologue
# runner, the renderer's segments and the status line.
NATIVE_REPLAY_STAMP := $(OUT)/gen/native_replay.flags
NATIVE_REPLAY_FLAGS := -DTS_NATIVE_REPLAY=$(TS_NATIVE_REPLAY)
NATIVE_REPLAY_OBJS := $(BG_NATIVE_MEMORY_OBJ) $(addprefix $(OBJ)/src/xbox/,$(addsuffix .obj,\
    xbox_model_cache xbox_part_prologue gs_nv2a_backend xbox_main))
$(NATIVE_REPLAY_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(NATIVE_REPLAY_FLAGS)' ] || echo '$(NATIVE_REPLAY_FLAGS)' > $@
$(NATIVE_REPLAY_OBJS): $(NATIVE_REPLAY_STAMP)
$(NATIVE_REPLAY_OBJS): RUNTIME_FLAGS += $(NATIVE_REPLAY_FLAGS)

# The GIF timing wrapper and its bypass guard must agree. Measurement mode
# retains the arbiter callback instead of bypassing its per-packet totals.
PERF_BACKEND_STAMP := $(OUT)/gen/perf_backend.flags
PERF_BACKEND_FLAGS := -DTS_PERF_BACKEND=$(TS_PERF_BACKEND)
PERF_BACKEND_OBJS := $(addprefix $(OBJ)/src/xbox/,$(addsuffix .obj,xbox_perf xbox_gif_native xbox_main))
$(PERF_BACKEND_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(PERF_BACKEND_FLAGS)' ] || echo '$(PERF_BACKEND_FLAGS)' > $@
$(PERF_BACKEND_OBJS): $(PERF_BACKEND_STAMP)
$(PERF_BACKEND_OBJS): RUNTIME_FLAGS += $(PERF_BACKEND_FLAGS)

# The direct GIF decoder: the GS front end copy that runs it, its counters
# and run buffer, the renderer's run entry and the status line.
GIF_DIRECT_STAMP := $(OUT)/gen/gif_direct.flags
GIF_DIRECT_FLAGS := -DTS_GIF_DIRECT=$(TS_GIF_DIRECT)
GIF_DIRECT_OBJS := $(GIF_GS_OBJ) $(addprefix $(OBJ)/src/xbox/,$(addsuffix .obj,xbox_gif_direct gs_nv2a_backend xbox_main xbox_native_fx))
$(GIF_DIRECT_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(GIF_DIRECT_FLAGS)' ] || echo '$(GIF_DIRECT_FLAGS)' > $@
$(GIF_DIRECT_OBJS): $(GIF_DIRECT_STAMP)
$(GIF_DIRECT_OBJS): RUNTIME_FLAGS += $(GIF_DIRECT_FLAGS)

# The native 2D emitters: the walker, decoder and GS front end copies, the
# emitters themselves (-O2: every glyph passes through them), the
# renderer's sprite route and the status line. The copies list the inner
# stages' stamps, so a switch change regenerates them from the new input.
NATIVE_2D_STAMP := $(OUT)/gen/native_2d.flags
NATIVE_2D_FLAGS := -DTS_NATIVE_2D=$(TS_NATIVE_2D)
NATIVE_2D_OBJS := $(BG_NATIVE_VIF_OBJ) $(BG_NATIVE_MEMORY_OBJ) $(GIF_GS_OBJ) \
    $(addprefix $(OBJ)/src/xbox/,$(addsuffix .obj,xbox_native_2d gs_nv2a_backend xbox_main))
$(NATIVE_2D_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(NATIVE_2D_FLAGS)' ] || echo '$(NATIVE_2D_FLAGS)' > $@
$(OBJ)/src/xbox/xbox_native_2d.obj: RUNTIME_FLAGS := $(COMMON) -O2 $(SDL_FLAGS) -DPS2_RUNTIME_LOGS=1 -DPS2X_POINT_SAMPLING=1
$(NATIVE_2D_OBJS): $(NATIVE_2D_STAMP)
$(NATIVE_2D_OBJS): RUNTIME_FLAGS += $(NATIVE_2D_FLAGS)
ifeq ($(TS_NATIVE_2D),1)
NATIVE_2D_DEPS := $(XBOX)/tools/patch_native_2d.py $(NATIVE_2D_STAMP) $(OUT)/gen/bg_native.flags \
    $(OUT)/gen/optimizations.flags $(OUT)/gen/native_paths.flags $(OUT)/gen/draw_records.flags \
    $(OUT)/gen/vif_source.flags $(OUT)/gen/native_models.flags $(OUT)/gen/gif_direct.flags
$(NATIVE_2D_MEMORY_COPY): $(NATIVE_2D_MEMORY_INPUT) $(NATIVE_2D_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ 2D      ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_2d.py memory $< $@
$(NATIVE_2D_VIF_COPY): $(NATIVE_2D_VIF_INPUT) $(NATIVE_2D_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ 2D      ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_2d.py vif $< $@
$(NATIVE_2D_GS_COPY): $(NATIVE_2D_GS_INPUT) $(NATIVE_2D_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ 2D      ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_2d.py gs $< $@
else
$(NATIVE_2D_MEMORY_COPY) $(NATIVE_2D_VIF_COPY) $(NATIVE_2D_GS_COPY):
endif

# The native FX route: the decoder and GS front end copies, its module, the
# renderer's run entry and the status line. The copies list the inner
# stages' stamps, so a switch change regenerates them from the new input.
NATIVE_FX_STAMP := $(OUT)/gen/native_fx.flags
NATIVE_FX_FLAGS := -DTS_NATIVE_FX=$(TS_NATIVE_FX)
NATIVE_FX_OBJS := $(BG_NATIVE_VIF_OBJ) $(GIF_GS_OBJ) \
    $(addprefix $(OBJ)/src/xbox/,$(addsuffix .obj,xbox_native_fx gs_nv2a_backend xbox_main))
$(NATIVE_FX_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(NATIVE_FX_FLAGS)' ] || echo '$(NATIVE_FX_FLAGS)' > $@
$(NATIVE_FX_OBJS): $(NATIVE_FX_STAMP)
$(NATIVE_FX_OBJS): RUNTIME_FLAGS += $(NATIVE_FX_FLAGS)
ifeq ($(TS_NATIVE_FX),1)
NATIVE_FX_DEPS := $(XBOX)/tools/patch_native_fx.py $(NATIVE_FX_STAMP) $(OUT)/gen/bg_native.flags \
    $(OUT)/gen/optimizations.flags $(OUT)/gen/native_paths.flags $(OUT)/gen/draw_records.flags \
    $(OUT)/gen/vif_source.flags $(OUT)/gen/native_models.flags $(OUT)/gen/gif_direct.flags \
    $(OUT)/gen/native_2d.flags
$(NATIVE_FX_VIF_COPY): $(NATIVE_FX_VIF_INPUT) $(NATIVE_FX_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ FX      ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_fx.py vif $< $@
$(NATIVE_FX_GS_COPY): $(NATIVE_FX_GS_INPUT) $(NATIVE_FX_DEPS)
	@mkdir -p $(dir $@)
	@echo "[ FX      ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_native_fx.py gs $< $@
else
$(NATIVE_FX_VIF_COPY) $(NATIVE_FX_GS_COPY):
endif

# The Xbox sound path: the SPU2 object builds from the original or the
# patch_sound_native.py copy; the stamp rebuilds it (and the copy) when the
# switch or the cache size changes.
SOUND_NATIVE_STAMP := $(OUT)/gen/sound_native.flags
SOUND_NATIVE_FLAGS := -DTS_SOUND_NATIVE=$(TS_SOUND_NATIVE) -DTS_SOUND_NATIVE_SETS=$(TS_SOUND_NATIVE_SETS)
$(SOUND_NATIVE_OBJ): $(SOUND_NATIVE_SOURCE)
$(SOUND_NATIVE_OBJ): XBOX_COMPILE_SOURCE := $(SOUND_NATIVE_SOURCE)
ifeq ($(TS_SOUND_NATIVE),1)
$(SOUND_NATIVE_COPY): $(RUNTIME)/src/lib/ps2_spu2.cpp $(XBOX)/tools/patch_sound_native.py $(SOUND_NATIVE_STAMP)
	@mkdir -p $(dir $@)
	@echo "[ SOUND   ] $(notdir $@)"
	@$(PYTHON) $(XBOX)/tools/patch_sound_native.py $< $@
else
$(SOUND_NATIVE_COPY):
endif
$(SOUND_NATIVE_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(SOUND_NATIVE_FLAGS)' ] || echo '$(SOUND_NATIVE_FLAGS)' > $@
$(SOUND_NATIVE_OBJ): $(SOUND_NATIVE_STAMP)
$(SOUND_NATIVE_OBJ): RUNTIME_FLAGS += $(SOUND_NATIVE_FLAGS)

# make TS_SOUND_HW=1 (with TS_SOUND_NATIVE=1): the fast SPU2 mixer
# (xbox_sound_hw.inl, included by xbox_sound_native.inl in the native copy
# above, so no copy of its own). Voices mixed in spans of 32-256 frames with
# each envelope run exactly and its gain ramped across the span; registers,
# positions, loops and pitch exact, samples within about -65 dB of the
# shared model (test/test_sound_hw.py). The audio feeder also wakes every
# 16 ms instead of 5. Named for the MCPX APU route it was evaluated against
# (not used: see the file). Off: both objects build as before. On by
# default: on the console (4P, 2026-11-01) 17.7 FPS over four runs
# (18.8/17.9/16.2/18.0) against 16.2 off (16.3/16.0); no gain in xemu.
TS_SOUND_HW ?= $(TS_SOUND_NATIVE)
ifneq ($(filter-out 0 1,$(TS_SOUND_HW)),)
$(error TS_SOUND_HW must be 0 or 1)
endif
ifeq ($(TS_SOUND_HW)$(TS_SOUND_NATIVE),10)
$(error TS_SOUND_HW=1 needs TS_SOUND_NATIVE=1)
endif
SOUND_HW_STAMP := $(OUT)/gen/sound_hw.flags
SOUND_HW_FLAGS := -DTS_SOUND_HW=$(TS_SOUND_HW)
SOUND_HW_OBJS := $(SOUND_NATIVE_OBJ) $(OBJ)/src/xbox/xbox_raylib.obj
$(SOUND_HW_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(SOUND_HW_FLAGS)' ] || echo '$(SOUND_HW_FLAGS)' > $@
$(SOUND_HW_OBJS): $(SOUND_HW_STAMP)
$(SOUND_HW_OBJS): RUNTIME_FLAGS += $(SOUND_HW_FLAGS)

# make TS_NATIVE_CAPTURE=1: record bounded native VU1 draw inputs for the
# Xbox-layout geometry converter. Off by default; the normal build registers
# the original callback directly. Rename registration ONLY in the native game
# object; the capture adapter must still call the runtime's real registry.
# The stamp rebuilds both sides when enabling/disabling or changing sampling,
# so a stale instrumented object cannot silently survive a normal rebuild.
TS_NATIVE_CAPTURE ?= 0
ifneq ($(TS_NATIVE_CAPTURE),0)
ifneq ($(TS_NATIVE_CAPTURE),1)
$(error TS_NATIVE_CAPTURE must be 0 or 1)
endif
endif
TS_NATIVE_CAPTURE_DELAY_MS ?= 5000
TS_NATIVE_CAPTURE_STRIDE ?= 64
TS_NATIVE_CAPTURE_LIMIT ?= 128
NATIVE_CAPTURE_STAMP := $(OUT)/gen/native_capture.flags
NATIVE_CAPTURE_GAME_OBJ := $(OBJ)/project/game/vu1_native_ts.obj
NATIVE_CAPTURE_ADAPTER_OBJ := $(OBJ)/src/xbox/xbox_vu_capture.obj
NATIVE_CAPTURE_FLAGS := -DTS_NATIVE_CAPTURE=$(TS_NATIVE_CAPTURE) \
    -DTS_NATIVE_CAPTURE_DELAY_MS=$(TS_NATIVE_CAPTURE_DELAY_MS) \
    -DTS_NATIVE_CAPTURE_STRIDE=$(TS_NATIVE_CAPTURE_STRIDE) \
    -DTS_NATIVE_CAPTURE_LIMIT=$(TS_NATIVE_CAPTURE_LIMIT)
$(NATIVE_CAPTURE_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(NATIVE_CAPTURE_FLAGS)' ] || echo '$(NATIVE_CAPTURE_FLAGS)' > $@
$(NATIVE_CAPTURE_GAME_OBJ) $(NATIVE_CAPTURE_ADAPTER_OBJ) $(BG_NATIVE_VU_OBJ): $(NATIVE_CAPTURE_STAMP)
$(NATIVE_CAPTURE_ADAPTER_OBJ): RUNTIME_FLAGS += $(NATIVE_CAPTURE_FLAGS)
$(BG_NATIVE_VU_OBJ) $(NATIVE_CAPTURE_GAME_OBJ): RUNTIME_FLAGS += -DTS_NATIVE_CAPTURE=$(TS_NATIVE_CAPTURE)
ifeq ($(TS_BG_NATIVE),1)
$(NATIVE_CAPTURE_GAME_OBJ): RUNTIME_FLAGS += -DregisterVu1NativeProgram=xboxBgRegisterVu1NativeProgram
else ifeq ($(TS_NATIVE_CAPTURE),1)
$(NATIVE_CAPTURE_GAME_OBJ): RUNTIME_FLAGS += -DregisterVu1NativeProgram=xboxRegisterVu1NativeProgram
endif

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

# make TS_FLUSH_DENORMALS=1: the game thread sets MXCSR flush-to-zero and
# (where the CPU has it) denormals-are-zero, as the PS2's FPU and VUs always
# behave: the game makes denormals in nearly every frame, and each costs the
# Pentium III a microcode assist (ps2_runtime.cpp, xbox_shims.cpp). Off: no
# gain in xemu 4P (2026-11-01: 30.7/35.5 FPS on, 36.7/32.9 off; xemu has
# FTZ but no DAZ, MXCSR 9f80); not yet measured on the hardware.
TS_FLUSH_DENORMALS ?= 0
ifneq ($(filter-out 0 1,$(TS_FLUSH_DENORMALS)),)
$(error TS_FLUSH_DENORMALS must be 0 or 1)
endif
DENORMAL_FLAGS := -DTS_FLUSH_DENORMALS=$(TS_FLUSH_DENORMALS)
DENORMAL_STAMP := $(OUT)/gen/denormals.flags
DENORMAL_OBJS := $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.obj
$(DENORMAL_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(DENORMAL_FLAGS)' ] || echo '$(DENORMAL_FLAGS)' > $@
$(DENORMAL_OBJS): $(DENORMAL_STAMP)
$(DENORMAL_OBJS): RUNTIME_FLAGS += $(DENORMAL_FLAGS)

# What the link depends on besides the objects: a switch that leaves objects
# out (TS_VU1_RECOMPILED) or changes the link (the stack) relinks.
LINK_STAMP := $(OUT)/gen/link.flags
LINK_FLAGS_TEXT := TS_VU1_RECOMPILED=$(TS_VU1_RECOMPILED) stack=$(XBE_STACK) libs=$(NXDK_LIB_DIR)
$(LINK_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(LINK_FLAGS_TEXT)' ] || echo '$(LINK_FLAGS_TEXT)' > $@

# The object list is long; hand it to the linker in a response file.
# Write it in make itself: expanding thousands of paths into one shell
# command exceeds Linux's per-argument limit before printf can run.
$(OUT)/main.exe: $(GEN_OBJS) $(OTHER_OBJS) $(PBKIT_OBJ) $(NXDK_LIB_FILES) $(LINK_STAMP)
	@echo "[ LD      ] $@"
	$(file >$(OUT)/link.rsp,$(foreach f,$(patsubst $(OUT)/%,%,$(GEN_OBJS) $(OTHER_OBJS) $(PBKIT_OBJ)) $(NXDK_LIBS),"$(f)"))
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

# make TS_TEXTURE_SOURCE_KEYS=1: a texture-cache miss finds its pack entry by
# what GS memory holds (indices and palette, or colour texels and TEXA, every
# GS texture format; xbox_texture_source.h), hashed as the game uploads it or
# read back, not by decoding it; repeated full CLUT loads cost a compare. A
# palette the pack lacks draws the indices as an NV2A index texture with a
# GPU palette; an entry still on its way from the disc draws its preload (a
# small level read at start-up: 281 KB of GPU memory for MISC.PAK). The pack
# is then built as format version 3 (xtpbuild.py --source-keys --preload-bytes
# 128 --palette-textures: about 32 MB, the reader takes every version). Off
# by default: the renderer and the pack are as before. With it,
# TS_TEXTURE_DUMP=1 (development) writes every texture the pack lacks to
# E:\TimeSplitters\texdump, and XTP_FLAGS="--xbox-dump /abs/path/texdump"
# adds them to the next pack.
TS_TEXTURE_SOURCE_KEYS ?= 0
TS_TEXTURE_DUMP ?= 0
$(foreach v,TS_TEXTURE_SOURCE_KEYS TS_TEXTURE_DUMP,$(if $(filter 0 1,$($(v))),,$(error $(v) must be 0 or 1)))
ifeq ($(TS_TEXTURE_DUMP)$(TS_TEXTURE_SOURCE_KEYS),10)
$(error TS_TEXTURE_DUMP=1 needs TS_TEXTURE_SOURCE_KEYS=1)
endif
TEXTURE_SOURCE_STAMP := $(OUT)/gen/texture_source.flags
TEXTURE_SOURCE_FLAGS := -DTS_TEXTURE_SOURCE_KEYS=$(TS_TEXTURE_SOURCE_KEYS) -DTS_TEXTURE_DUMP=$(TS_TEXTURE_DUMP)
TEXTURE_SOURCE_OBJS := $(OBJ)/src/xbox/gs_nv2a_backend.obj
$(TEXTURE_SOURCE_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(TEXTURE_SOURCE_FLAGS)' ] || echo '$(TEXTURE_SOURCE_FLAGS)' > $@
$(TEXTURE_SOURCE_OBJS): $(TEXTURE_SOURCE_STAMP)
$(TEXTURE_SOURCE_OBJS): RUNTIME_FLAGS += $(TEXTURE_SOURCE_FLAGS)
XTP_SOURCE_FLAGS := $(if $(filter 1,$(TS_TEXTURE_SOURCE_KEYS)),--source-keys --preload-bytes 128 --palette-textures)
# The pack builder's options (as XTP_FLAGS alone while the switch is off).
XTP_BUILD_FLAGS = $(strip $(XTP_FLAGS) $(XTP_SOURCE_FLAGS))

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

# Rewritten only when XTP_FLAGS (or TS_TEXTURE_SOURCE_KEYS) changes, so the
# pack rebuilds only then.
$(XTP_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(XTP_BUILD_FLAGS)' ] || echo '$(XTP_BUILD_FLAGS)' > $@

$(XTP): $(MISC_PAK) $(XBOX)/tools/xtpbuild.py $(XTP_STAMP)
	@mkdir -p $(dir $@)
	@echo "[ XTP     ] $@"
	@py='$(XTP_PYTHON)'; local=; \
	if command -v cygpath > /dev/null 2>&1; then local="$$(cygpath -u -F 28 2>/dev/null)"; fi; \
	if [ -z "$$py" ]; then \
	    for c in python python3 py "$$local"/Programs/Python/Python3*/python.exe "$$local"/Programs/Python/Launcher/py.exe; do \
	        if "$$c" -c "import numpy, PIL" > /dev/null 2>&1; then py="$$c"; break; fi; \
	    done; \
	fi; \
	if [ -z "$$py" ]; then \
	    echo "[ XTP     ] skipped: no Python with numpy and Pillow (set XTP_PYTHON); runtime textures only"; rm -f $@; \
	else \
	    "$$py" $(XBOX)/tools/xtpbuild.py $(XTP_BUILD_FLAGS) $< $@; \
	fi

# Optional source-derived geometry, built only under build/ from the user's
# original archives. The converter validates every selected level and MISC
# texture binding before replacing its outputs; the manifest is published last.
BG_PAK ?= $(ROOT)/project/game-data/PAK/BG.PAK
BG_NATIVE_ASSET_DIR := $(OUT)/iso/native-bg
BG_NATIVE_MANIFEST := $(BG_NATIVE_ASSET_DIR)/manifest.json
BG_NATIVE_ASSET_STAMP := $(OUT)/gen/bg_native_assets.flags
BG_NATIVE_ASSET_FLAGS := native=$(TS_BG_NATIVE) bg=$(BG_PAK) misc=$(MISC_PAK)
BG_NATIVE_ASSET_DEP := $(if $(filter 1,$(TS_BG_NATIVE)),$(if $(wildcard $(BG_PAK)),$(BG_NATIVE_MANIFEST)))
$(BG_NATIVE_ASSET_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(BG_NATIVE_ASSET_FLAGS)' ] || echo '$(BG_NATIVE_ASSET_FLAGS)' > $@

$(BG_NATIVE_MANIFEST): $(BG_PAK) $(MISC_PAK) $(XBOX)/tools/xbgbuild.py $(BG_NATIVE_ASSET_STAMP)
	@echo "[ XBG     ] $(BG_NATIVE_ASSET_DIR)"
	@$(PYTHON) $(XBOX)/tools/xbgbuild.py build $(BG_PAK) $(BG_NATIVE_ASSET_DIR) --misc-pak $(MISC_PAK)

# The disc carries the game's own files from project/game-data (not in git).
# make AUTOPLAY=<pad script>: the disc plays that controller script (tests).
AUTOPLAY ?=
# TS_MODEL_FILES=1: model files harvested from play (tools/harvest_models.sh)
# go on the disc as models/, loaded before the hard disk's own.
MODEL_FILES_DIR ?= $(ROOT)/build/model-files

$(OUT)/TimeSplitters.iso: $(OUT)/iso/default.xbe $(OUT)/iso/ps2disc.iso $(XTP_DEP) $(BG_NATIVE_ASSET_DEP) FORCE
	@echo "[ XISO    ] $@"
	@$(if $(XTP_DEP),,echo "[ XTP     ] skipped: no $(MISC_PAK); runtime textures only" && rm -f $(XTP))
	@$(if $(BG_NATIVE_ASSET_DEP),,rm -rf $(BG_NATIVE_ASSET_DIR))
	@rm -f $(OUT)/iso/autoplay.pad
	@$(if $(AUTOPLAY),cp $(AUTOPLAY) $(OUT)/iso/autoplay.pad)
	@rm -rf $(OUT)/iso/models
	@$(if $(filter 1,$(TS_MODEL_FILES)),if ls $(MODEL_FILES_DIR)/*.xmc >/dev/null 2>&1; then \
	    mkdir -p $(OUT)/iso/models && cp $(MODEL_FILES_DIR)/*.xmc $(OUT)/iso/models/ && \
	    echo "[ MODELS  ] $$(ls $(MODEL_FILES_DIR)/*.xmc | wc -l) model files on the disc"; fi)
	@rm -rf $(OUT)/iso/game-data && cp -r $(ROOT)/project/game-data $(OUT)/iso/game-data
	@rm -rf $(OUT)/iso/game-data/mc0 $(OUT)/iso/game-data/mc1
	@cd $(OUT) && $(XISO) -c iso TimeSplitters.iso > /dev/null

# Compile one group only, e.g. make runtime / generated / textures / backgrounds
runtime: $(OTHER_OBJS)
generated: $(GEN_OBJS)
textures: $(XTP_DEP)
	@$(if $(XTP_DEP),,echo "[ XTP     ] skipped: no $(MISC_PAK)")
backgrounds: $(BG_NATIVE_ASSET_DEP)
	@$(if $(BG_NATIVE_ASSET_DEP),,rm -rf $(BG_NATIVE_ASSET_DIR))

# Unlike xbe, this target requires the converted geometry and textures too.
# An absent archive fails as a missing prerequisite; a skipped texture build
# cannot leave an apparently complete optimized output.
optimized: $(OUT)/iso/default.xbe $(XTP) $(BG_NATIVE_MANIFEST)
	@test -s "$(XTP)" || { echo "optimized: texture conversion requires Python with numpy and Pillow (set XTP_PYTHON)" >&2; exit 2; }
	@echo "[ OPTIMIZED] default.xbe, native-bg/ and textures.xtp in $(OUT)/iso"
	@echo "[ OPTIMIZED] Keep these with the original game-data/ and ps2disc.iso."

clean:
	rm -rf $(OUT)

vuflags:
	@echo $(CXX) $(GEN_FLAGS) -O2
.PHONY: all xbe optimized runtime generated textures backgrounds clean FORCE vuflags
FORCE:
-include $(GEN_OBJS:.obj=.d) $(OTHER_OBJS:.obj=.d)
