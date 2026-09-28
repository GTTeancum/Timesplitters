# Original Xbox build

The same runtime and recompiled game as the PC build, built with nxdk.

## Build

Needs nxdk at `C:\nxdk` and MSYS2 (CLANG64). The game's own files must be in
`project/game-data` and the PS2 disc image in `project/disc/TimeSplitters.iso`
(neither is in git).

    bash src/xbox/build.sh

Output: `build/xbox/TimeSplitters.iso` (about 1.3 GB: the XBE, the game files
and the PS2 disc image, which the game reads sector by sector).

## Test in xemu

    xemu.exe -dvd_path build\xbox\TimeSplitters.iso -s

`-s` opens a gdb stub on port 1234. Status and the last log lines are drawn on
screen; the full log is written to `E:\TimeSplitters\timesplitters.log`.

## State (2026-09-28)

Boots to the game's loading screen on a 64 MB machine. Slow: several minutes to
get there, drawing with the software renderer on the game thread. About 2 MB
is free while running.

## Xbox-specific pieces

- `compat/xbox_prelude.h`: force-included; fills gaps in nxdk's libc++.
- `compat/ps2_simd_scalar.h`: SSE2-4.1 intrinsics for the Pentium III.
- `xbox_chrono.cpp`: replaces nxdk's steady_clock, which overflows after 12.6 s.
- `xbox_string.cpp`: memcpy/memmove/memset (nxdk's copy a byte at a time).
- `xbox_stdio.cpp`: stdout/stderr into the log.
- `xbox_raylib.cpp`: the raylib calls the runtime makes, on the framebuffer.
- `tools/compact_function_table.py`: a compact function table (saves 0.8 MB).
