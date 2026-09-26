# Added as an external game target to the exact restored PS2Recomp source snapshot.
file(GLOB TS_GENERATED CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/../generated/*.cpp")
# Ahead-of-time recompiled VU1 microprograms (project/tools/vu1/vu1_recomp.py).
file(GLOB TS_GENERATED_VU CONFIGURE_DEPENDS "${CMAKE_CURRENT_SOURCE_DIR}/../generated-vu/*.cpp")
# Compiled once and linked into the game and the VU/frame benchmarks.
add_library(ts_vu_generated OBJECT ${TS_GENERATED_VU})
target_link_libraries(ts_vu_generated PRIVATE ps2_runtime)
target_compile_features(ts_vu_generated PRIVATE cxx_std_20)
if(MSVC)
    # MSVC silently stops optimizing very large functions (warning C4883,
    # off by default); each recompiled microprogram is one such function.
    target_compile_options(ts_vu_generated PRIVATE /d2OptimizeHugeFunctions /arch:AVX2 /bigobj)
else()
    target_compile_options(ts_vu_generated PRIVATE -O2 -mavx2)
endif()
add_executable(timesplitters ${TS_GENERATED} $<TARGET_OBJECTS:ts_vu_generated> main.cpp)
target_link_libraries(timesplitters PRIVATE ps2_runtime)

option(PS2X_VU_GAME_REFERENCE "Link reference VU objects for local game comparisons" OFF)
if(PS2X_VU_GAME_REFERENCE)
    if(NOT IS_DIRECTORY "${PS2X_VU_REFERENCE_DIR}")
        message(FATAL_ERROR "Reference VU source directory is required")
    endif()
    add_library(ts_vu_game_reference OBJECT
        ${PS2X_VU_REFERENCE_DIR}/ps2_vu1_core.cpp
        ${PS2X_VU_REFERENCE_DIR}/ps2_vu1_upper.cpp
        ${PS2X_VU_REFERENCE_DIR}/ps2_vu1_lower.cpp)
    target_link_libraries(ts_vu_game_reference PRIVATE ps2_runtime)
    target_compile_features(ts_vu_game_reference PRIVATE cxx_std_20)
    target_sources(timesplitters PRIVATE $<TARGET_OBJECTS:ts_vu_game_reference>)
endif()
target_include_directories(timesplitters PRIVATE "${CMAKE_CURRENT_SOURCE_DIR}/../generated")
target_compile_features(timesplitters PRIVATE cxx_std_20)
if(MSVC)
    set_target_properties(timesplitters PROPERTIES UNITY_BUILD OFF)
    # /d2OptimizeHugeFunctions: MSVC otherwise silently skips optimizing the
    # largest recompiled functions (bulletTick, playerTick, animMake, ...).
    target_compile_options(timesplitters PRIVATE $<$<CONFIG:Debug>:/Od> /Zi /arch:AVX2 /bigobj
        $<$<NOT:$<CONFIG:Debug>>:/d2OptimizeHugeFunctions>)
    target_link_options(timesplitters PRIVATE /STACK:8388608)
else()
    set_target_properties(timesplitters PROPERTIES UNITY_BUILD ON UNITY_BUILD_BATCH_SIZE 32)
    target_compile_options(timesplitters PRIVATE -O1 -g1 -msse4.1 -mavx2)
endif()
target_precompile_headers(timesplitters PRIVATE <ps2_runtime_macros.h> <ps2_runtime.h> <ps2_recompiled_functions.h> <ps2_recompiled_stubs.h> <ps2_syscalls.h> <ps2_stubs.h>)

# Replays captured VU1 inputs (TS_VU_CAPTURE_FILE) through the interpreter or,
# unless TS_VU1_INTERPRET=1, the recompiled microprograms, and writes outputs.
add_executable(timesplitters_vu_replay EXCLUDE_FROM_ALL
    ${CMAKE_CURRENT_SOURCE_DIR}/../../source/PS2Recomp/ps2xTest/src/vu_benchmark.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/../../source/PS2Recomp/ps2xTest/src/test_function_table.cpp
    $<TARGET_OBJECTS:ts_vu_generated>)
target_include_directories(timesplitters_vu_replay PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/../../source/PS2Recomp/ps2xRuntime/src/lib)
target_link_libraries(timesplitters_vu_replay PRIVATE ps2_runtime)
target_compile_features(timesplitters_vu_replay PRIVATE cxx_std_20)
if(MSVC)
    target_compile_options(timesplitters_vu_replay PRIVATE /arch:AVX2 /bigobj)
endif()

# Deterministic one-frame graphics benchmark from a TS_DUMP_RAM snapshot.
add_executable(timesplitters_frame_bench EXCLUDE_FROM_ALL frame_bench.cpp $<TARGET_OBJECTS:ts_vu_generated>)
target_link_libraries(timesplitters_frame_bench PRIVATE ps2_runtime)
target_compile_features(timesplitters_frame_bench PRIVATE cxx_std_20)
if(MSVC)
    target_compile_options(timesplitters_frame_bench PRIVATE /arch:AVX2)
endif()

# Rasterizer regression/benchmark: replays a TS_GS_CAPTURE command capture.
add_executable(timesplitters_gs_replay EXCLUDE_FROM_ALL gs_replay.cpp)
target_link_libraries(timesplitters_gs_replay PRIVATE ps2_runtime)
target_compile_features(timesplitters_gs_replay PRIVATE cxx_std_20)

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
if(MSVC)
    target_compile_options(timesplitters_matrix_reference PRIVATE /arch:AVX2 /bigobj)
else()
    target_compile_options(timesplitters_matrix_reference PRIVATE -msse4.1 -mavx2)
endif()
