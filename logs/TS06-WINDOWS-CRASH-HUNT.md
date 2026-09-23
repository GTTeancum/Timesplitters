# TS06 Windows/XInput Crash Hunt Log

Date started: 2026-09-23

Goal: get the native PS2Recomp TimeSplitters port running on Windows with XInput controls, then use scenario hooks and normal runtime evidence to broaden crash coverage and fix as many reproducible failures as possible.

## Ground rules

- Do not replace native recompilation with emulation.
- Do not commit retail BIN/CUE, reconstructed retail assets, large captures, or local build products.
- Do not fabricate guest progress: no forced objective completion, timer bypass, fake GS completion, or unconditional success stubs.
- Hooks may be used for repeatable scenario loading or observation, but any hook that changes guest semantics must be explicitly justified and kept out of correctness claims unless it matches original behavior.
- Combat/crash claims require native executable evidence, logs, stopped RAM inspection, or reproducible test output.

## Preserved baseline

- Verified source checkpoint: TS05.
- `python scripts/verify_checkpoint.py`: passed, 3,461 checkpoint files verified.
- Git baseline commit: `f289047` (`Preserve TS05 source checkpoint`).
- Retail disc files present locally but ignored by Git:
  - `TimeSplitters (USA) (v2.00).bin`
  - `TimeSplitters (USA) (v2.00).cue`
- No remote configured at handoff time, so push is pending remote setup.

## Windows bring-up notes

- Plain PowerShell PATH has CMake 4.3.1.
- Plain PowerShell PATH does not expose `ninja`, `clang`, or `cl`.
- Next checks: locate Visual Studio/MSVC via `vswhere`, configure with a Visual Studio or Ninja generator as available, then address compile/link failures.

## XInput work items

- Inspect existing `ps2_pad`/raylib keyboard controller path.
- Add Windows XInput polling without regressing keyboard controls.
- Preserve eight logical controller slots; map primary XInput gamepad to logical slot 0 unless/until multi-controller separation is implemented.
- Add runtime/test logging for connection state, buttons, triggers, and analog stick values.

## Crash-hunt plan

- Build and run existing tests on Windows first.
- Create repeatable launcher/probe scripts that write timestamped logs under ignored local work directories and selected summaries under `logs/`.
- Prefer scenario hooks that enter known game states through original code paths; use direct loading hooks only as diagnostic accelerators and label them as such.
- Initial targets:
  - Arcade Tomb combat.
  - Story 1935 Tomb combat/objective progression.
  - Indirect-control-flow warning areas: `propDamage`, `bulletTick`, `aiTickBefore`, `challengeTick`.
  - Save/load transitions after combat.

## Attempt log

Note: final pass/fail evidence logs are committed with this file. Some early failed-attempt transcript names below were local intermediate diagnostics and are summarized here rather than preserved as committed artifacts.

### 2026-09-23 00:00 baseline audit

- Read TS05 `STATUS.md`, `README-LINUX.md`, `RESULTS.json`, and package contents.
- Confirmed source-only package intentionally omits native binaries/captures/card fixtures.
- Confirmed source tree was not a Git repository; initialized Git and committed the verified TS05 baseline.

### 2026-09-23 Windows configure attempt 01

- Visual Studio discovery found `C:\Program Files\Microsoft Visual Studio\2022\Community`.
- Plain PATH still lacks `ninja`, `clang`, and `cl`, but CMake's Visual Studio generator found MSVC 19.44.35225.0 and Windows SDK 10.0.26100.0.
- Command:
  - `cmake -S source\PS2Recomp -B build-windows -G "Visual Studio 17 2022" -A x64 -DTS_GAME_SOURCE_DIR=D:/Programming/GitHub/Timesplitters/project/game -DPS2X_BUILD_STUDIO=OFF -DPS2X_ENABLE_DEBUG_UI=OFF -DPS2X_ENABLE_FFMPEG=OFF`
- Result: configure succeeded.
- Log: `logs/TS06-windows-configure-01.log`.
- Notes:
  - Raylib 5.5 was fetched by CMake.
  - FFmpeg was disabled for first Windows bring-up to avoid mixing video/audio dependency failures into native runtime/compiler work.

### 2026-09-23 Windows build attempt 01

- Command:
  - `cmake --build build-windows --config RelWithDebInfo --target timesplitters --parallel 8`
- Result: incomplete/failure, exit `-1`.
- Log: `logs/TS06-windows-build-01.log`.
- What built:
  - `glfw.lib`
  - `raylib.lib`
  - `ps2_iop.lib`
  - `ps2_runtime.lib`
- The build reached generated `timesplitters` unity files, then exited during generated-code compilation without a compiler error line in the captured log.
- MSVC warned that GCC-only options `-g1`, `-msse4.1`, and `-mavx2` were ignored.
- Follow-up change:
  - Guard `project/game/CMakeLists.txt` compile options by compiler.
  - Use `/O1 /Zi /arch:AVX2 /bigobj` for MSVC.
  - Preserve Linux `-O1 -g1 -msse4.1 -mavx2`.

### 2026-09-23 Windows build attempt 02

- Command:
  - `cmake --build build-windows --config RelWithDebInfo --target timesplitters --parallel 4`
- Result: incomplete/failure, exit `-1`.
- Log: `logs/TS06-windows-build-02.log`.
- What changed from attempt 01:
  - MSVC no longer warned about ignored GCC flags.
  - Build advanced from unity files `83..64` into `63..44`, then exited during generated-code codegen without a compiler diagnostic.
- Interpretation:
  - This looks like MSVC resource pressure in large optimized generated unity units, not a source-level compile error.
- Follow-up change:
  - Lower MSVC `timesplitters` unity batch size from 32 to 8.
  - Use `/Od /Zi /arch:AVX2 /bigobj` for MSVC bring-up. Performance remains deferred.

### 2026-09-23 Windows build/configure attempt 03

- Follow-up configuration lowered MSVC unity batching and tried single-job generated-code compilation.
- Result: still unstable/incomplete. The wrapper returned `-1` while MSBuild/CL child processes continued, and the log stopped advancing at generated unity files around `unity_194_cxx.cxx`.
- Action taken:
  - Stopped orphaned `MSBuild.exe`/`CL.exe` processes before retrying.
  - Tried unity batch size `1`, but CMake generation itself exited with `-1` after `Configuring done`.
- Follow-up change:
  - Disable CMake unity build for the MSVC `timesplitters` target entirely and compile the existing generated `.cpp` files directly with `/Od /Zi /arch:AVX2 /bigobj`.

### 2026-09-23 XInput backend compile work

- Added Windows XInput polling to `PSPadBackend::readState`:
  - XInput slot 0 maps to PS2 logical controller data when connected.
  - Existing raylib gamepad and keyboard controls remain as fallback.
  - Added helper tests for unit-axis conversion, XInput thumb deadzone/inverted Y mapping, and trigger threshold behavior.
- First implementation included `Windows.h`/`Xinput.h` in `ps2_pad.cpp`, which conflicted with raylib declarations (`CloseWindow`, `ShowCursor`, `Rectangle`, `DrawText`, `LoadImage`).
- Fixed by declaring only the small XInput ABI surface needed by this file and linking `xinput`, avoiding Win32 headers in the raylib translation unit.
- Focused runtime build:
  - Command: direct `MSBuild.exe build-windows\ps2xRuntime\ps2_runtime.vcxproj /p:Configuration=RelWithDebInfo /p:Platform=x64 /m:1 /nr:false /p:UseMultiToolTask=false`
  - Result: passed, 0 warnings, 0 errors.
  - Log: `logs/TS06-windows-runtime-build-03.log`.

### 2026-09-23 Windows NMake full game build

- The Visual Studio project generator repeatedly returned `-1` or left orphaned compiler children while compiling the very large generated game target. No stable source diagnostic was emitted.
- Configured a separate NMake tree:
  - `cmake -S source\PS2Recomp -B build-windows-nmake -G "NMake Makefiles" -DTS_GAME_SOURCE_DIR=D:/Programming/GitHub/Timesplitters/project/game -DPS2X_BUILD_STUDIO=OFF -DPS2X_ENABLE_DEBUG_UI=OFF -DPS2X_ENABLE_FFMPEG=OFF`
- NMake build completed after incremental resumes:
  - `build-windows-nmake\timesplitters\timesplitters.exe`
  - Size: 111,100,928 bytes before final relinks.
  - Generated objects: 2,673.
  - Final build log: `logs/TS06-windows-nmake-game-build-04.log`.
- Added MSVC game executable stack size:
  - `target_link_options(timesplitters PRIVATE /STACK:8388608)`
  - Reason: the Windows `timesplitters` executable hit `0xC00000FD` stack overflow in the built-in original-EE self-test. The existing Windows `ps2x_tests` target already uses the same 8 MiB stack.

### 2026-09-23 Windows direct-call self-test fixes

- `--self-test` progressed after the stack fix but asserted in `EeScheduler::assertExecutor()` when a direct original-EE call reached `sceSifSetDma` and dispatched DMAC handlers.
- Fixed direct test harnesses by binding the scheduler main context before original-function loops:
  - `native_self_test.h`
  - `native_audio_memory_test.h`
  - `native_image_test.h`
- This does not change guest behavior in normal runtime execution. It only initializes the scheduler executor state for host-side component tests that call original EE functions directly.

### 2026-09-23 Windows regression test status

- Windows `ps2x_tests.exe`:
  - Command run from `source\PS2Recomp`.
  - Result: 468 total, 468 passed, 0 failed.
  - Log: `logs/TS06-windows-tests-run-03.log`.
- Windows `timesplitters.exe` built-in self-tests:
  - `--self-test`: exit 0.
  - `--image-self-test`: exit 0.
  - `--mc-self-test`: exit 0.
  - `--math-self-test`: exit 0.
  - `--matrix-self-test`: exit 0.
  - `--format-self-test`: exit 0.
  - `--audio-memory-self-test`: exit 0.
  - Summary: `logs/TS06-windows-self-tests-04.summary`.
  - Audio-memory result remains memory-transfer-only evidence, not audible audio proof.

### 2026-09-23 Windows bounded boot smoke

- Prepared local assets from the user-provided retail BIN:
  - `python scripts\prepare_game.py "TimeSplitters (USA) (v2.00).bin"`
  - Result: verified/restored 49 original files and data-sector ISO.
  - Log: `logs/TS06-windows-prepare-game-01.log`.
- Bounded native Windows boot:
  - Executable: `build-windows-nmake\timesplitters\timesplitters.exe`
  - ELF: `project\game-data\SLUS_200.90`
  - Data image: `project\disc\TimeSplitters.iso`
  - Seconds: 5.
  - Result: exit 10, which is the diagnostic timeout path, not a crash.
  - Log: `logs/TS06-windows-boot-smoke-01.stdout.log`.
- Evidence:
  - Native window initialized and closed successfully.
  - Runtime stopped by timeout at PC `0x201a88`, RA `0x2001f4`.
  - DMA starts: 2; GIF copies: 2.
  - Original `numdmafail=0`.
  - IOP loaded 8 modules, 12 threads, 10 RPC servers.
  - Sound-memory transfer counters remained zero in this early 5-second boot.
- This is boot smoke only. It is not evidence of frontend interaction, combat correctness, or gameplay progression.

### Current boundary before combat crash-hunt

- Windows executable now builds and runs bounded smoke with XInput support compiled in.
- No interactive Windows gameplay/combat claim has been made yet.
- Host OS input automation and screen/control takeover are prohibited in this environment, so combat crash-hunt needs either:
  - user-driven native play with logs/RAM dumps, or
  - process-local scenario hooks/replay harnesses that do not drive the desktop and do not fabricate guest success.
