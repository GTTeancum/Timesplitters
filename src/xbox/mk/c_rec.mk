# C-REC (src/xbox/PUSH-BC-PLAN.md section 5.8): the records engine: the
# chain registry and descriptor cache (ts_record_cache.cpp, knob `records`),
# the builder (ts_record_build.cpp), R1 (ts_record_exec.cpp) and the record
# self-check (ts_record_selfcheck.cpp; make EXTRA_DEFINES+=-DTS_NATIVE_RECORD_SELFCHECK=1,
# every Nth R1 run by the knob records.check). The prologue token and the
# REF/Dbuf tokens come later.
EXTRA_GAME_SRCS += $(GAME)/ts_record_cache.cpp $(GAME)/ts_record_build.cpp $(GAME)/ts_record_exec.cpp \
                   $(GAME)/ts_record_selfcheck.cpp
# The builder against random chains (src/xbox/test/ts_record_build_test.cpp).
HOST_TESTS += ts_record_build_test
HOST_TEST_FLAGS_ts_record_build_test := $(GAME)/ts_record_build.cpp
