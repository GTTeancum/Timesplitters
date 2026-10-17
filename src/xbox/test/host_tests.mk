# Host tests (src/xbox/PUSH-BC-PLAN.md W0-I): `make host-tests` (through
# src/xbox/build.sh, the MSYS2 CLANG64 shell) builds each listed test with
# the host clang against the shared runtime sources and runs it; a test
# that exits nonzero stops the make. A track lists its tests from its
# src/xbox/mk/<track>.mk:
#   HOST_TESTS += name              builds and runs src/xbox/test/name.cpp
#   HOST_TEST_FLAGS_name := ...     that test's own flags (defines, extra sources)
# Every test gets HOST_TEST_FLAGS: the runtime's include paths and
# PLATFORM_XBOX=1, as the tests' own comment lines document.
HOST_CXX ?= clang++
HOST_TEST_DIR := $(OUT)/host-tests
HOST_TEST_FLAGS := -std=c++20 -O2 -DPLATFORM_XBOX=1 -I$(RUNTIME)/include -I$(RUNTIME)/src/lib -I$(IOP)/include \
                   -I$(XBOX) -I$(GAME)
# The tests that build and pass this way at Week 0 (the others in this
# folder need the Xbox toolchain or a track's harness).
HOST_TESTS += gs_clut_test gs_nv2a_clip_test

host-tests: $(foreach t,$(HOST_TESTS),host-test-$(t))

# (FORCE, not .PHONY: make skips pattern rules for phony targets.) Every
# `make host-tests` builds and runs each test afresh.
host-test-%: $(XBOX)/test/%.cpp FORCE
	@mkdir -p $(HOST_TEST_DIR)
	@echo "[ HOST    ] $*"
	@$(HOST_CXX) $(HOST_TEST_FLAGS) $(HOST_TEST_FLAGS_$*) -o $(HOST_TEST_DIR)/$*.exe $<
	@$(HOST_TEST_DIR)/$*.exe
