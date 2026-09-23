# TimeSplitters TS04 — native Linux development checkpoint

TS04 corrects the DMA-chain truncation and replaces the incompatible matrix-multiply HLE with the recompiled original game-linked implementation. Native Linux testing reaches Tomb, moves/turns/fires/reloads, completes a timed match, displays the original results, and saves updated game status. **This is not a completed or fully validated PC port.** Read `STATUS.md` and `RESULTS.json` for exact measurements, evidence and limitations. No Windows setup is needed for this checkpoint.

## Contents and continuity

TS04 starts from the **actual byte-verified TS03 checkpoint** (archive SHA256 `a75a8337afa7d8eb4832c863265db52d17693db000d7270918f01912dc4dd6cc`). All 3,622 TS03 payload hashes passed before editing. Nothing was reconstructed from screenshots or a missing source archive in this continuation. Historical TS03 documentation separately records its TS01 foundation and independent TS02-behavior recovery.

The full archive includes cumulative framework/generated source, native runner and regression tools, the tested Linux executable and matching recompiler, Ghidra exports/database, logs, real native-window captures, and selected stopped RAM. The separate **source-only backup** excludes native host executables, Ghidra database, native captures/RAM and card fixtures, while retaining source, tests, analysis ELF, configuration, build/regeneration scripts and provenance. Its manifest describes exactly that smaller archive.

`source/PS2Recomp` is patched against `75d729ce40d7eed9649fd4bb05628dee520f3d0c`. Applying `patches/PS2Recomp-TS04.patch` to that base independently reproduces all **295 packaged framework files**. There are 29 changed framework files cumulatively; two changed since TS03. Studio is disabled; its font files are omitted. Licenses/notices remain. PCSX2 `650d7048561756cdbfea60ee65282074a38eefa1` is an immutable source reference only: **not built, executed, linked, or used to render any evidence here**.

The main EE code is native ahead-of-time translated C++; there is no EE interpreter fallback. SDK HLE and IOP/VU support remain part of PS2Recomp. This is not a claim of a hardware-free rewrite.

The supplied binaries are dynamically linked for the tested Debian 13 amd64 environment, Clang 19/C++20 and AVX2. They are not universal static Linux executables. See `provenance/TS04-native-ldd.txt` and `TS04-binary-identities.json`.

## Verify and restore

From an extracted archive root:

```bash
python3 scripts/verify_checkpoint.py
```

Retain the original game archive and all five dependency ZIPs with their original `restore_linux.py`, index and checksums. Restore those chunked dependency volumes:

```bash
python3 /path/to/dependency-volumes/restore_linux.py \
  --bundle-dir /path/to/dependency-volumes \
  --output /mnt/data/TimeSplitters-Dependencies --prepare
```

Preparation requires Python 3.11+ and Git. The tested disposable scratch is Debian 13 amd64. This turn's selected package installation used only the supplied offline repository and `--no-remove`; commands/results are retained in `logs/TS04`. They record this environment, not a universal installer or authorization to modify a personal system.

Restore and verify the original game:

```bash
python3 scripts/prepare_game.py '/path/TimeSplitters (USA) (v2.00).7z'
python3 scripts/verify_game.py
```

The script checks original archive/BIN identities, restores 49 files, and verifies the converted data-sector ISO. This is MODE2/2352 with data beginning at byte24, not a plain ISO. Full disc/assets and dependency downloads are not duplicated in either checkpoint. The original analysis ELF is included for regeneration and component tests.

## Build, test and regenerate

```bash
JOBS=3 bash scripts/build_linux.sh /mnt/data/TimeSplitters-Dependencies
bash scripts/test_linux.sh
```

The build checks locked dependency commits and uses offline FetchContent source overrides. Default output is `build`; set `TS_BUILD_DIR` for a separate clean directory. The test script supplies the source working directory needed by an upstream inspection test. The verified full suite is **613 checks**. The source-only archive explicitly skips the two captured-chain replays because its RAM fixture is omitted; the other **611** checks are available after building.

Generated code is already included. Reproduce it separately:

```bash
python3 scripts/regenerate.py \
  --recompiler build/ps2xRecomp/ps2_recomp \
  --output /tmp/timesplitters-regenerated
```

In the full checkpoint `--recompiler bin/ps2_recomp` uses the supplied tested tool. The script relocates the template's analysis/output paths; do not run the historical absolute-path template directly. All **2,673 generated files** reproduced byte-for-byte. There are 2,376 original EE bodies and 294 automatic SDK/library wrappers, with 78 generation warnings. Explicit skips/decode failures/unhandled-instruction errors are zero; that is not a semantic proof of every path.

Original-body selectors are now `fread`, `sceSdTransToIOP`, `sceGsSetDefLoadImage`, and `sceVu0MulMatrix`. The inherited TS03 scalar SQRT.S input-register fix remains in the translator. Generated bodies were not hand-edited.

## Reproduce the two TS04 correctness regressions

The full archive contains the stopped RAM from the first original TS03 DMA alarm. Structural inspection does not execute the game or render an image:

```bash
python3 scripts/analyze_dma_capture.py \
  project/diagnostics/ts04-first-alarm-ee-ram.bin
```

Both lists contain4,596 tags; the old reader stopped at4,096, before the original completion command and END. Corrected native component replay executes the captured VIF/VU/GIF/GS path:

```bash
build/timesplitters/timesplitters_dma_replay \
  project/diagnostics/ts04-first-alarm-ee-ram.bin
```

The full archive also supplies `bin/timesplitters_dma_replay`. It verifies both actual SIGNAL and actual END, not a fabricated completion. This is an isolated component replay, not a game run.

Optional before-fix and matrix-comparison targets:

```bash
cmake --build build --target timesplitters_dma_replay_before timesplitters_matrix_reference
build/timesplitters/timesplitters_dma_replay_before \
  project/diagnostics/ts04-first-alarm-ee-ram.bin
# Expected exit1: both captured chains fail with the frozen TS03 reader.
build/timesplitters/timesplitters_matrix_reference
```

The matrix comparison executes a separately generated original routine against an independent equation and the inherited HLE. It reports36 correct original cases and36 HLE mismatches, across12 noncommuting matrix pairs and three alias modes. These diagnostic-only sources are never linked into the actual game. The production binary's `--matrix-self-test` checks its actual registered original implementation.

Exact historical GDB commands under `logs/TS04/historical-debugger` are labeled as scratch-specific experiments, not portable launchers. They apply to the frozen TS03 binary and intentionally stop/terminate it after capturing RAM.

## Native input probes

The prober uses actual X11 XTEST keyboard events and unretouched native-window captures. It needs Xvfb, xdotool and Python Pillow. Use a distinct label and a disposable card root. Never overwrite a personal memory card.

The historical TS03 fresh creation and reload routes remain reproducible:

```bash
python3 scripts/probe_with_input.py --label local-create --seconds 125 \
  --binary bin/timesplitters --card-root "$PWD/test-work/local-card/mc0" \
  --input project/tools/input-sequences/create-save.json

python3 scripts/probe_with_input.py --label local-tomb --seconds 250 \
  --binary bin/timesplitters --card-root "$PWD/test-work/local-card/mc0" \
  --input project/tools/input-sequences/tomb-final.json
```

The final TS04 observed900-second route is retained as `project/tools/input-sequences/ts04-final-match-observed.json`. It starts with a copy of the native-created TS03 profile fixture, configures the time limit through the game's menus, and later returns through results and Save Game Status. It is **not** an empty-card creation route. For reproduction, first copy `project/diagnostics/native-created-card/mc0` into a **new** disposable test directory; source-only backups deliberately omit the fixture. Use actual captures to confirm each state: timings depend on host/software-renderer performance, and the saved sequence is not a guarantee on another machine.

For supervised input within a bounded probe, `--live-input schedule.json` reads an atomically replaced, append-only JSON list. Event schema is `{"at":35,"key":"Return","hold":0.2}`. Times are seconds after launch, hold is positive, and all events must fit the requested deadline. Existing rows cannot change or be removed. Poll `LABEL-live.json` for launch monotonic time and display. Final records preserve both requested events and actual key edges/times. This is a test harness, not autonomous gameplay or guest-memory manipulation. Eight helper tests cover its input contract.

Controls used: Return=Start/Scores; X=Cross; arrows=D-pad; WASD=left stick; IJKL=right stick; E=R1/fire. Mouse look and full remapping are not implemented. The inherited controller backend may mirror primary input across physical ports; multiplayer remains unvalidated.

On an existing Linux desktop:

```bash
TS_MC_ROOT="$PWD/test-work/desktop-card/mc0" bash scripts/run_linux.sh 300
```

Return10 means the runner's requested diagnostic deadline, not a universal gameplay-success result. Runtime failures propagate; unresolved EE calls do not silently succeed. The prober separately records outer watchdog kills, all input events, and binary hashes before/after execution. Do not replace/rebuild the active binary's path while a probe is running. `PS2X_TRACE_DMA_CHAIN=1` enables bounded per-long-chain tracing; it is not a timing or completion override.

## Remaining work

Only Tomb's tested timed-deathmatch route has been validated in TS04. Player kill/damage correctness, comprehensive collision/combat, story and other levels, multiplayer, retail-card compatibility, full VU/GS/DMA edge semantics and optimized performance remain open. The scratch audio playback device fails initialization; voice-transfer logs are not audible-output proof. Some messages show `(null)` instead of their formatted text. No string-format workaround was added in this checkpoint.

Keep the callback arena at `0x00080000..0x00100000`; the game uses `0x00100000` for DMA storage, so1–2MiB is not spare. The explicit high heap remains `0x01FF5390..0x01FFD390`. No guest timer bypass, forced semaphore wake-up, fabricated GS completion, or clamped animation values were added to manufacture progression.
