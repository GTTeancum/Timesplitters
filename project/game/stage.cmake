# Copies the built game, the DLLs next to it and EXTRA ("Prepare Xbox
# Files.exe") into DST (the repository root), so it can be started by
# double-clicking. A copy that fails (the
# game is running) only warns.
file(GLOB dlls "${SRC}/*.dll")
foreach(file IN LISTS dlls ITEMS "${EXE}" ${EXTRA})
    execute_process(COMMAND "${CMAKE_COMMAND}" -E copy_if_different "${file}" "${DST}"
                    RESULT_VARIABLE result OUTPUT_QUIET ERROR_QUIET)
    if(NOT result EQUAL 0)
        message(WARNING "Could not stage ${file} into ${DST} (is the game running?)")
    endif()
endforeach()
