# The generated game functions built -O2 (GEN_FAST_NAMES) and the ones a
# native twin replaces (NATIVE_TWINS). Included by the Makefile where the
# lists stood; owned by B-CODEGEN after Week 0 (src/xbox/PUSH-BC-PLAN.md),
# whose rank_o2.py writes the list from a fresh console profile.
#
# The game functions that take most of a busy match frame (sample profiles
# of the scripted arcade match): -O2, and their constant calls are inlined
# (PS2X_DIRECT_CALL_INLINE, ps2_direct_call_xbox.h); the other files call
# the same code out of line, which keeps them as small as before.
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

# make TS_O2_RANKED=1 (B-CODEGEN, M3.6): the list src/xbox/tools/rank_o2.py
# writes from a console profile (src/xbox/gen_fast_names_ranked.mk) in place
# of the hand list above; NATIVE_TWINS stays as it is (rank_o2.py leaves the
# twins out already). Off until a post-Push-A console profile has been
# ranked: the hand list is the measured one.
TS_O2_RANKED ?= 0
ifeq ($(TS_O2_RANKED),1)
ifeq ($(wildcard $(XBOX)/gen_fast_names_ranked.mk),)
$(error TS_O2_RANKED=1 needs src/xbox/gen_fast_names_ranked.mk: run src/xbox/tools/rank_o2.py on a console profile)
endif
include $(XBOX)/gen_fast_names_ranked.mk
GEN_FAST_NAMES := $(GEN_FAST_NAMES_RANKED)
endif
