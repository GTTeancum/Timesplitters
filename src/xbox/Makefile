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
GENVU     := $(ROOT)/project/generated-vu
XBOX      := $(CURDIR)

CXX  := $(XBOX)/tools/nxdk-cxx-hosted
CC   := nxdk-cc
LINK := nxdk-link
CXBE := $(NXDK_DIR)/tools/cxbe/cxbe.exe
XISO := $(NXDK_DIR)/tools/extract-xiso/build/extract-xiso.exe

DEFINES := -DPLATFORM_XBOX=1 -DPS2X_SCALAR_SIMD=1 -DPS2X_NO_EXCEPTIONS=1 -DPS2X_HAS_FFMPEG=0 -DPS2X_ENABLE_IOP_RPC_TRACE=0 -DPS2X_DEVICE_CYCLE_BATCH=2048
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

GAME_SRCS := $(GAME)/ts_overrides.cpp
XBOX_SRCS := $(wildcard $(XBOX)/*.cpp)
# register_functions.cpp is replaced by a compact table (see the rule below).
GEN_TABLE := $(OUT)/gen/register_functions_xbox.cpp
# Game functions compiled from patched copies (src/xbox/tools/patch_generated.py).
GEN_PATCHED_NAMES := soundLoad_0x2052b8.cpp
GEN_PATCHED := $(addprefix $(OUT)/gen/,$(GEN_PATCHED_NAMES))
GEN_SRCS  := $(filter-out $(GENERATED)/register_functions.cpp $(addprefix $(GENERATED)/,$(GEN_PATCHED_NAMES)),$(wildcard $(GENERATED)/*.cpp))              $(wildcard $(GENVU)/*.cpp) $(GEN_TABLE) $(GEN_PATCHED)

# Objects mirror the source path under build/xbox/obj.
objof = $(patsubst $(ROOT)/%.cpp,$(OBJ)/%.obj,$(1))
GEN_OBJS   := $(call objof,$(GEN_SRCS))
OTHER_OBJS := $(call objof,$(RUNTIME_SRCS) $(IOP_SRCS) $(GAME_SRCS) $(XBOX_SRCS))
# The software renderer and the Xbox presenter are the hottest code: -O2.
FAST_OBJS = $(filter $(OBJ)/source/PS2Recomp/ps2xRuntime/src/lib/gs/%.obj $(OBJ)/src/xbox/xbox_raylib.obj,$(OTHER_OBJS))
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

$(GEN_PATCHED): $(OUT)/gen/%.cpp: $(GENERATED)/%.cpp $(XBOX)/tools/patch_generated.py
	@mkdir -p $(dir $@)
	@echo "[ PATCH   ] $(notdir $@)"
	@python $(XBOX)/tools/patch_generated.py $< $@

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
PS_VARIANTS := untextured modulate modulate_tcc decal decal_tcc highlight highlight_tcc
PS_DEFINES_untextured    := -DGS_UNTEXTURED
PS_DEFINES_modulate      := -DGS_MODULATE
PS_DEFINES_modulate_tcc  := -DGS_MODULATE -DGS_TCC
PS_DEFINES_decal         := -DGS_DECAL
PS_DEFINES_decal_tcc     := -DGS_DECAL -DGS_TCC
PS_DEFINES_highlight     := -DGS_HIGHLIGHT
PS_DEFINES_highlight_tcc := -DGS_HIGHLIGHT -DGS_TCC
SHADER_INLS := $(SHADERS)/gs_vs.inl $(foreach v,$(PS_VARIANTS),$(SHADERS)/gs_ps_$(v).inl)

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

# The disc carries the game's own files from project/game-data (not in git).
# make AUTOPLAY=<pad script>: the disc plays that controller script (tests).
AUTOPLAY ?=

$(OUT)/TimeSplitters.iso: $(OUT)/iso/default.xbe $(OUT)/iso/ps2disc.iso FORCE
	@echo "[ XISO    ] $@"
	@rm -f $(OUT)/iso/autoplay.pad
	@$(if $(AUTOPLAY),cp $(AUTOPLAY) $(OUT)/iso/autoplay.pad)
	@rm -rf $(OUT)/iso/game-data && cp -r $(ROOT)/project/game-data $(OUT)/iso/game-data
	@rm -rf $(OUT)/iso/game-data/mc0 $(OUT)/iso/game-data/mc1
	@cd $(OUT) && $(XISO) -c iso TimeSplitters.iso > /dev/null

# Compile one group only, e.g. make runtime / make generated
runtime: $(OTHER_OBJS)
generated: $(GEN_OBJS)

clean:
	rm -rf $(OUT)

.PHONY: all runtime generated clean FORCE
FORCE:
-include $(GEN_OBJS:.obj=.d) $(OTHER_OBJS:.obj=.d)
