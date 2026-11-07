# Handoff for Codex (2026-11-06)

Repository: `D:\Programming\GitHub\Timesplitters`, branch `main` (the only
working branch; `release-dual` is the console branch and gets none of the PC
keyboard/mouse work). Last commit `ec136ff`, pushed to origin. Everything
below is **uncommitted** in the working tree. `timesplitters.ini`,
`timesplitters.log` and `timesplitters-previous.log` are the user's own
files: never commit them.

## Uncommitted work (all built; PC tested headless, see "State of testing")

1. **Freeze fixes (hooks that called game code from host code).**
   The EE scheduler can stop a generated routine at any inner call or loop
   back-edge when a thread switch is due; the call then returns early with
   `ctx` at the stopped point. Hooks that called game routines and carried on
   lost the rest (one crash jumped to guest pc 0x14) or, by resetting
   `*ctx = entry`, livelocked (the user's two menu freezes: the round-outline
   `textOutline` hook). In `project/game/ts_overrides.cpp`:
   - `ranToEnd(entry, ctx)` tells whether a called routine finished.
   - Card run-on (`runCardSteps`, `lvTickAfterCardRunOn`, `mcseqTickRunOn`):
     a stopped step is handed to the scheduler (`*ctx = call`) and the hook
     returns.
   - `typedStringeditTick`: the Cross it presses stays when the tick was
     stopped (the letter is not lost).
   - `titleTickExitable`: does nothing more if the page tick was stopped; a
     stopped `frontStartMessage` is handed over.
   - Xbox `preloadExtraGlyphs` / `restartExtraGlyphs`: the preload list is
     now written natively (`preloadFind`, `packSector`, insertion into the
     sector-sorted list) instead of calling `preloadAddTexName` /
     `preloadGetTexName` from the hook.

2. **Stock text restored (user order: no text hook, no replacement fonts).**
   - The `textOutline` hook is gone entirely. Menu row click boxes are now
     measured without calling the game: `measureText()` is a native port of
     the game's `textSize` + `GetXOffset` over its font tables, called from
     `drawMenuItemRecorded` with the position, text and font
     `drawmenuitemtext` uses (window origin 0x3299F0 +0/+0x14, entry +0/+2,
     text entry+0x14, font `0x3198A8 + n*24`, n = gp-0x5FD8 or gp-0x5FDC by
     item flag 0x100). Boxes matched the old measured ones exactly, except
     the footer Back item (x 32 instead of 64; its Esc prompt still takes the
     clicks).
   - Jost fonts: `project/game/CMakeLists.txt` option `TS_PC_FONTS` (default
     OFF) no longer embeds `project/game/pc_fonts/*.png`; files kept.

3. **No more clobbering guest memory (user order).**
   - Runtime: `PS2Runtime::kHostReservedBase` (0x80000) /
     `kHostReservedSize` (0x4000), `hostReservedActive()`
     (`source/PS2Recomp/ps2xRuntime/include/ps2_runtime.h`). In
     `ps2_runtime.cpp` the HLE kernel window's callback-stack floor is raised
     to 0x84000 when that window is used (TimeSplitters: log line
     `[kernel:callback-arena] base=0x84000`).
   - Overrides: one layout at the top of `ts_overrides.cpp`
     (`kDisplayMenuBlock`, `kGameModeBlock`, `kSetupBlock`, `kExitAskText`,
     `kXboxTextBlock`, `kExtraGlyphNames`, `kMenuTraceWord` = 0x83FF0,
     static_asserts); `reserveReady()` gates every use. The old fixed
     0x7E000-0x7EFFF addresses are gone. The display-menu builder refuses to
     write past its part (it used to write first and warn after).
   - Proven bounds from the ELF's own symbols: `preload` (0x1FB4C60) ends at
     `preloadpass2` (0x1FB7B40) = 500 entries (`kPreloadMax`);
     `texnum_text_gfx` (0x319A48) is 36 bytes = 9 entries, so ^6/^7 are its
     own entries 5 and 6.
   - `KNOWN-ISSUES.md` note updated for the new address.

4. **Earlier in the same uncommitted batch (PC):**
   - Prompts: label items with flags 0x30 and text starting '^' ("^2 Start"
     on character select, "^3 Back" under "^2 Start Game") are never
     highlighted by the pointer (`menuItemIsPromptLabel`); this fixed Start
     Game not clicking.
   - Green value arrows (`0xfc62e8d908bbe2ad` Previous,
     `0x022edd403c181afc` Next) are clickable prompts (`pc_glyphs.cpp`,
     `gs_gpu_backend.cpp` press-only textures, no label widening).
   - Story level end: a click with no prompts on screen presses Back
     (Triangle = go on; `storyPageTickClickable`).
   - V-Sync on Windows paces with `DwmFlush` after the present instead of
     swap interval 1 (`compositorVsync()` in `ps2_runtime.cpp`;
     `TS_VSYNC_SWAP=1` restores the old way). The front end ran at 16-18 fps
     because the GS thread's `glFinish` queued behind the vsync'd swap; now
     full rate. Tearing not yet judged by the user.

## State of testing

- PC, hidden window (`TS_TEST_HIDDEN=1`), user's settings (3840x2160
  fullscreen, render scale 4): the full click route (arrows, Start Game,
  play, story end) passed before the reserve change; the sign-on/A-V/Exit
  route (t14) passed 6/6 after the text hook removal and again after the
  reserve change; the pause SETUP Exit Game route passed after the reserve
  change; a 5-minute menu soak stayed at full rate.
- **Not yet run after the reserve change:** the full click route, and the
  Xbox build (`src/xbox/build.sh xbe` from MSYS2 CLANG64). Do both before
  committing.
- Not verified on real hardware: Xbox White/Black glyphs and wording were
  seen in xemu before these last changes; nothing was run on the devkit.

## Rules the user set (keep them)

- Never launch the game in a visible window, xemu, or the devkit without the
  user's explicit yes each time (xemu is shared with other projects' FPS
  profiling).
- Hooks call the original routine last; no game calls from host code that
  then carry on. Values are computed natively from guest memory.
- Never write guest memory that is not provably ours: the host reserve, or
  the game's own structures within bounds taken from its symbols/code.
- Commit/push only when the user says so. Talk to the user in plain
  language (non-programmer), no jargon tables.
- Xbox-only behaviour must be `PLATFORM_XBOX`-guarded; the PC build stays as
  it is.

## Test harness (scratch, may be wiped; recreate if needed)

Scripts lived in the session scratchpad: `visible.ps1` (launches
`build-release\timesplitters\timesplitters.exe` with `TS_TEST_CLICKS`,
`TS_TEST_NO_CONTROLLERS=1`, `TS_TRACE_MENUS=1`, `TS_TRACE_PROMPTS=1`,
`TS_MC_ROOT`, `TS_CAPTURE_WINDOW[_EVERY]`, `TS_SETTINGS`, `-Hidden` sets
`TS_TEST_HIDDEN=1`), `hunt.ps1` (repeats a route until the log stops),
`stacks.exe` (thread stacks of a live process via DbgHelp). Click-script
steps are documented at `testClicksTick` in `ts_overrides.cpp` (`menu`,
`row`, `hover`, `prompt`, `at`, `key`, `complete`, ...). Build:
`ninja -C D:\Programming\GitHub\Timesplitters\build-release timesplitters`
inside a vcvars64 shell (CMake source dir is `source\PS2Recomp`).
