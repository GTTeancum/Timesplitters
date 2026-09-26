# TimeSplitters Windows diagnostic build

This build keeps the remote keyboard/XInput merge fix and the scheduler timing fix.

## Automatic log file

Every console message is mirrored automatically to:

`timesplitters.log`

The file is created beside `timesplitters.exe` and is replaced on each run.

## Title-bar timing counters

The title now shows:

`FPS | VBLANK/s | GAME/s`

- FPS = host presentation rate.
- VBLANK/s = PS2 vblank delivery rate.
- GAME/s = actual TimeSplitters `bossMainLoop()` simulation iterations per second.

The same measurements are written to `timesplitters.log` as `[TS:rate]` lines. The log also records `syncv_per_s` as a secondary diagnostic.

If FPS and VBLANK are ~60 but GAME/s is much lower, the slow-motion problem is inside the game-update/synchronization path rather than rendering or vblank scheduling.

## Remote keyboard

- WASD: movement / left stick
- IJKL: look / right stick
- Arrows: D-pad
- Z/X/C/V: Square/Cross/Circle/Triangle
- Q/E: L1/R1
- 1/3: L2/R2
- Enter: Start
- Right Shift or Tab: Select
- Left/Right Ctrl: L3/R3

`RUN-TIMESPLITTERS.bat` also enables `TS_INPUT_TRACE=1` so keyboard activity appears in the log.

## Current limitation

FFmpeg remains disabled in this MinGW package, so MPEG/FMV video decoding is unavailable.
