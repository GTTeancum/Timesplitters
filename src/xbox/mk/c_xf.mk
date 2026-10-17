# C-XF (src/xbox/PUSH-BC-PLAN.md section 5.9): runDrawT and its sources, R2
# and the debt map, in-place fetch (M8: TS_NATIVE_INPLACE, src/xbox/
# gs_nv2a_xf.inl, xbox_guest_ram.cpp), the ring diet.
#
# The VU1 debt map (D2), R2's direct path (GuestSource) and M8's glue. Inert
# by default: nothing calls them until C-REC's records = 4, and the switches
# below are off. (src/xbox/xbox_guest_ram.cpp is in XBOX_SRCS already.)
EXTRA_GAME_SRCS += $(GAME)/ts_record_debt.cpp $(GAME)/ts_record_direct.cpp $(GAME)/ts_inplace.cpp

# M8's host fetch test (tsInplaceFetch against the ring's decode); the host
# build of ts_inplace.cpp leaves out its console parts.
HOST_TESTS += inplace_fetch_test
HOST_TEST_FLAGS_inplace_fetch_test := -UPLATFORM_XBOX

# The track's switches as make variables (each one a define for every file,
# so a change rebuilds through the generated-code stamp; none is set in a
# default build):
#   make TS_RECORD_DIRECT=1             R2 takes batches (ts_record_direct.h)
#   make TS_RECORD_DIRECT_SELFCHECK=1   the R2 check (r2diff in [TS:r2])
#   make TS_NATIVE_INPLACE=1            M8: in-place strips (modes 5-8) and the
#                                       skin-in-place program
#   make TS_INPLACE_PLACEMENT=1         P1: RDRAM as one contiguous block
#   make TS_INPLACE_SNOOP=1             no WBINVD (probe T2a PASS)
#   make TS_INPLACE_SELFCHECK=1         the fetch-emulation check (idiff)
#   make TS_NATIVE_TEXKICK_SHORTCUT=0   the texture-kick strip drawn again
C_XF_SWITCHES := TS_RECORD_DIRECT TS_RECORD_DIRECT_SELFCHECK TS_NATIVE_INPLACE TS_INPLACE_PLACEMENT \
                 TS_INPLACE_SNOOP TS_INPLACE_SELFCHECK TS_NATIVE_TEXKICK_SHORTCUT
EXTRA_DEFINES += $(foreach v,$(C_XF_SWITCHES),$(if $($(v)),-D$(v)=$($(v))))

# M8's skin program (vertex mode 8, shaders/gs_xf.vs.cg XF_SKIN_INPLACE),
# built by the Makefile's gs_xf_%.inl rule when the renderer includes it.
XF_DEFINES_skininplace := -DXF_LIT -DXF_SKIN -DXF_SKIN_INPLACE
ifeq ($(TS_NATIVE_INPLACE),1)
$(OBJ)/src/xbox/gs_nv2a_backend.obj: $(OUT)/gen/shaders/gs_xf_skininplace.inl
endif
