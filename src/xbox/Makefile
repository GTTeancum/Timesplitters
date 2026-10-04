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
XBOX      := $(CURDIR)

CXX  := $(XBOX)/tools/nxdk-cxx-hosted
CC   := nxdk-cc
LINK := nxdk-link
CXBE := $(NXDK_DIR)/tools/cxbe/cxbe.exe
XISO := $(NXDK_DIR)/tools/extract-xiso/build/extract-xiso.exe

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
    $(GAME)/ts_native_game.cpp
XBOX_SRCS := $(wildcard $(XBOX)/*.cpp)
# register_functions.cpp is replaced by a compact table (see the rule below).
GEN_TABLE := $(OUT)/gen/register_functions_xbox.cpp
# Every game function is compiled from a patched copy under build/xbox/gen
# (src/xbox/tools/patch_generated.py: constant calls go through the function
# table directly, plus a few one-off patches).
GEN_PATCHED := $(patsubst $(GENERATED)/%.cpp,$(OUT)/gen/%.cpp,$(filter-out $(GENERATED)/register_functions.cpp,$(wildcard $(GENERATED)/*.cpp)))
GEN_SRCS  := $(GEN_PATCHED) $(wildcard $(GENVU)/*.cpp) $(GEN_TABLE)

# Objects mirror the source path under build/xbox/obj.
objof = $(patsubst $(ROOT)/%.cpp,$(OBJ)/%.obj,$(1))
GEN_OBJS   := $(call objof,$(GEN_SRCS))
OTHER_OBJS := $(call objof,$(RUNTIME_SRCS) $(IOP_SRCS) $(GAME_SRCS) $(XBOX_SRCS))
# The VU1 microprogram is the hottest code of all (most of a match frame): -O2.
VU_OBJS := $(call objof,$(wildcard $(GENVU)/*.cpp))
$(VU_OBJS): GEN_FLAGS := $(COMMON) -O2
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
.DEFAULT_GOAL := all # dependency rules above this line must not become the default
$(GEN_OBJS): $(GEN_FLAGS_STAMP)

# The software renderer and the Xbox presenter are the hottest code: -O2.
FAST_OBJS = $(filter $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/gs/%.obj $(OBJ)/src/xbox/xbox_raylib.obj $(OBJ)/project/game/vu1_native_ts.obj \
                     $(OBJ)/project/game/ts_native_math.obj $(OBJ)/project/game/ts_native_fp.obj \
                     $(OBJ)/project/game/ts_native_game.obj \
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
# regenerated table re-patches (and recompiles) every game function.
$(GEN_PATCHED): $(OUT)/gen/%.cpp: $(GENERATED)/%.cpp $(GEN_TABLE) $(XBOX)/tools/patch_generated.py $(XBOX)/tools/direct_calls.py
	@mkdir -p $(dir $@)
	@echo "[ PATCH   ] $(notdir $@)"
	@python $(XBOX)/tools/patch_generated.py $< $(GEN_TABLE) $@

# Fixed copies of nxdk C sources, built in place of the library's
# (pbkit: double-buffered; winapi/sync: condition-variable timeouts).
PBKIT_OBJ := $(OBJ)/src/xbox/pbkit/pbkit_ts.obj $(OBJ)/src/xbox/winapi/sync_ts.obj

$(PBKIT_OBJ): $(OBJ)/src/xbox/%.obj: $(XBOX)/%.c
	@mkdir -p $(dir $@)
	@echo "[ CC      ] src/xbox/$*.c"
	@nxdk-cc -O2 -I$(NXDK_DIR)/lib/pbkit -I$(NXDK_DIR)/lib/winapi -Wno-everything -c -o $@ $<

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

# The object list is long; hand it to the linker in a response file.
$(OUT)/main.exe: $(GEN_OBJS) $(OTHER_OBJS) $(PBKIT_OBJ)
	@echo "[ LD      ] $@"
	@printf '%s\n' $(patsubst $(OUT)/%,%,$(GEN_OBJS) $(OTHER_OBJS) $(PBKIT_OBJ)) $(NXDK_LIBS) > $(OUT)/link.rsp
	@cd $(OUT) && $(LINK) -include:_automount_d_drive -stack:0x40000 -errorlimit:0 -map:main.map -out:main.exe @link.rsp

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
.PHONY: all runtime generated textures clean FORCE vuflags
FORCE:
-include $(GEN_OBJS:.obj=.d) $(OTHER_OBJS:.obj=.d)
