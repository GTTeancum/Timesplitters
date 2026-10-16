# C-VIF (src/xbox/PUSH-BC-PLAN.md section 5.7): the VIF/DMA spine: the W0-C
# seams, the walker's tokens and splices, the list-token API. Week 0: the
# list-token API, off; the decoder helpers' readers (runtime/
# ps2_vif1_reader.h) and their host test.
EXTRA_GAME_SRCS += $(GAME)/ts_list_tokens.cpp
HOST_TESTS += vif1_reader_test
