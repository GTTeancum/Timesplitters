# Added as an external game target to the exact restored PS2Recomp source snapshot.
file(GLOB TS_GENERATED CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/../generated/*.cpp")
add_executable(timesplitters ${TS_GENERATED} main.cpp)
target_link_libraries(timesplitters PRIVATE ps2_runtime)
target_include_directories(timesplitters PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../generated")
target_compile_features(timesplitters PRIVATE cxx_std_20)
set_target_properties(timesplitters PROPERTIES UNITY_BUILD ON UNITY_BUILD_BATCH_SIZE 32)
target_compile_options(timesplitters PRIVATE -O1 -g1 -msse4.1 -mavx2)
target_precompile_headers(timesplitters PRIVATE <ps2_runtime_macros.h> <ps2_runtime.h> <ps2_recompiled_functions.h> <ps2_recompiled_stubs.h> <ps2_syscalls.h> <ps2_stubs.h>)

# Captured-chain regression tool, not an alternative game runner.
add_executable(timesplitters_dma_replay dma_replay.cpp)
target_link_libraries(timesplitters_dma_replay PRIVATE ps2_runtime)
target_compile_features(timesplitters_dma_replay PRIVATE cxx_std_20)
# Optional before-fix diagnostic uses the exact TS03 reader source, never linked
# into the game or the corrected replay. Retained only to reproduce the failure.
add_executable(timesplitters_dma_replay_before EXCLUDE_FROM_ALL dma_replay.cpp test-baseline/ts03_ps2_memory.cpp)
target_link_libraries(timesplitters_dma_replay_before PRIVATE ps2_runtime)
target_compile_features(timesplitters_dma_replay_before PRIVATE cxx_std_20)

# Independently generated original SDK body, for an isolated HLE comparison.
add_executable(timesplitters_matrix_reference EXCLUDE_FROM_ALL
    ../tests/matrix_reference_probe.cpp ../tests/reference-generated/sceVu0MulMatrix_0x2d5e98.cpp)
target_link_libraries(timesplitters_matrix_reference PRIVATE ps2_runtime)
target_include_directories(timesplitters_matrix_reference PRIVATE ../generated)
target_compile_options(timesplitters_matrix_reference PRIVATE -msse4.1 -mavx2)
