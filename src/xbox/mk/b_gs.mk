# B-GS (src/xbox/PUSH-BC-PLAN.md section 5.4): the GS front end, materials
# (M4.1), the GIF bulk path (TS_GS_BULK_SELFCHECK, TS_GS_STATE_SELFCHECK),
# the NV2A state half (src/xbox/gs_nv2a_state.inl).
#   TS_GS_DRAWSTATE_CACHE (gs_frontend.cpp, default 1)  drawState() by state serial
#   TS_GS_BULK (default 1)                              processPath1Bulk reads whole tags in place
#   TS_GS_BULK_ALL_PATH1 (default 0)                    every PATH1 packet through the bulk path
#   TS_GS_MATERIAL_TABLE (gs_material.h, default 1)     one content-exact material table, ids as serials
#   TS_GS_STATE_SELFCHECK (default 0)                   cached state vs a fresh build; commits re-checked
#   TS_GS_BULK_SELFCHECK (default 0)                    bulk vs per-register, recorded backend calls
# Check build: make EXTRA_DEFINES="-DTS_GS_STATE_SELFCHECK=1 -DTS_GS_BULK_SELFCHECK=1 -DTS_GS_BULK_ALL_PATH1=1"
# ([TS:gs] statediff=, matdiff= and bulkdiff= must stay 0).
HOST_TESTS += gs_bulk_test
HOST_TEST_FLAGS_gs_bulk_test := -DTS_GS_STATE_SELFCHECK=1 -DTS_GS_STATE_SELFCHECK_EVERY=1 -DTS_GS_BULK_SELFCHECK=1 \
    -DTS_GS_BULK_SELFCHECK_EVERY=1 $(RUNTIME)/src/lib/gs/gs_frontend.cpp $(RUNTIME)/src/lib/gs/gs_cpu_backend.cpp \
    $(RUNTIME)/src/lib/gs/ps2_gs_memory.cpp $(RUNTIME)/src/lib/ps2_host_settings.cpp
