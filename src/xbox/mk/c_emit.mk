# C-EMIT (src/xbox/PUSH-BC-PLAN.md section 5.10): Tier 0 routing
# (TS_NATIVE_EMIT_TIER0, src/xbox/gs_nv2a_screen.inl) and the Tier 1
# builders (project/game/ts_native_dl.cpp).
EXTRA_GAME_SRCS += $(GAME)/ts_native_dl.cpp
# The bulk conversion's host test (gs_nv2a_screen_math.h against the
# per-primitive path, bit for bit).
HOST_TESTS += gs_screen_batch_test

# The track's switches as make variables (each one a define for every file,
# so a change rebuilds through the generated-code stamp; none is set in a
# default build):
#   make TS_NATIVE_EMIT_TIER0=1          Tier 0: kicks to the GS bulk path, the
#                                        backend's SubmitPrimitives
#   make TS_NATIVE_EMIT_BULK=0           (with Tier 0) the backend declines bulk runs
#   make TS_NV2A_SCREEN_SEGMENTS=0       the screen ring drains the GPU when full
#   make TS_NV2A_SPRITE_QUADS=1          (with Tier 0) sprites as quads (probe T9)
#   make TS_NATIVE_EMIT_OPS=1            Tier 1: the builders' entries as op tokens
#   make TS_NATIVE_EMIT_SELFCHECK=1      the emit check (emitdiff in [TS:emit])
C_EMIT_SWITCHES := TS_NATIVE_EMIT_TIER0 TS_NATIVE_EMIT_BULK TS_NV2A_SCREEN_SEGMENTS TS_NV2A_SPRITE_QUADS \
                   TS_NATIVE_EMIT_OPS TS_NATIVE_EMIT_SELFCHECK TS_NATIVE_EMIT_SELFCHECK_EVERY
EXTRA_DEFINES += $(foreach v,$(C_EMIT_SWITCHES),$(if $($(v)),-D$(v)=$($(v))))
