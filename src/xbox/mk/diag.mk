# make TS_DIAG=1: the picture diagnostics (src/xbox/xbox_diag.h, src/xbox/DIAG.md):
# renderer switches changed live from controller 1 with an on-screen overlay,
# boot settings from D:\diag.ini, [TS:diag] log lines. Off by default: 0
# compiles none of it and every object is as without this fragment.
#
# Only the files that read the switch see it (not EXTRA_DEFINES: that would
# rebuild the generated code, and a command-line EXTRA_DEFINES replaces it).
# The renderer and the platform layer are -O2 objects whose RUNTIME_FLAGS the
# Makefile sets after this fragment is read, so the define rides on the
# compiler command (CXX) for those objects instead; pbkit_ts.c takes it
# through PBKIT_CFLAGS. A stamp rebuilds them when the switch changes.
TS_DIAG ?= 0
DIAG_STAMP := $(OUT)/gen/diag.flags
DIAG_CXX_OBJS := $(OBJ)/src/xbox/xbox_diag.obj $(OBJ)/src/xbox/gs_nv2a_backend.obj $(OBJ)/src/xbox/xbox_raylib.obj
DIAG_C_OBJS := $(OBJ)/src/xbox/pbkit/pbkit_ts.obj
$(DIAG_STAMP): FORCE
	@mkdir -p $(dir $@)
	@[ -f $@ ] && [ "$$(cat $@)" = '$(TS_DIAG)' ] || echo '$(TS_DIAG)' > $@
$(DIAG_CXX_OBJS) $(DIAG_C_OBJS): $(DIAG_STAMP)
ifeq ($(TS_DIAG),1)
$(DIAG_CXX_OBJS): CXX += -DTS_DIAG=1
$(DIAG_C_OBJS): PBKIT_CFLAGS += -DTS_DIAG=1
endif
