# C-VIF (src/xbox/PUSH-BC-PLAN.md section 5.7): the VIF/DMA spine: the W0-C
# seams, the walker's CALL admission (splices and chain tokens) and in-list
# token tags, the decoder's token execution and tokmid expansion
# (runtime/ps2_vif1_tokens.h: TS_NATIVE_RECORDS, default 1, compiled in and
# idle until the knob `records` says otherwise; TS_VU1_DEBT_SITES, default
# 0, the D2 debt hook sites), the list-token API (ts_list_tokens.cpp), the
# decoder helpers' readers (runtime/ps2_vif1_reader.h) and their host tests.
# TS_VIF_SELFCHECK also walks every admitted chain again and compares
# (splicediff=).
EXTRA_GAME_SRCS += $(GAME)/ts_list_tokens.cpp
HOST_TESTS += vif1_reader_test vif1_token_test
