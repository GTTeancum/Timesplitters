# TimeSplitters TS03 — Linux development checkpoint

This native x86-64 PS2Recomp build has demonstrated a profile save/load round trip and initial Tomb Deathmatch movement, turning, firing, Scores and resume. **It is not a complete port or a fully validated playable release.** See `STATUS.md` for exact scope and unresolved DMA, graphics, audio and gameplay work. No Windows action is required.

## Contents and continuity

The full Linux checkpoint includes cumulative framework source, all generated EE C++, native runner and tests, the exact tested Linux executable and matching recompiler, Ghidra exports/database, logs, real captures and selected stopped memory. A separate **source-only ZIP** contains code, configuration, scripts, analysis/regeneration inputs and provenance; it deliberately excludes binaries, Ghidra database and native captures/RAM. Its manifest covers exactly that smaller archive. Either source tree can be rebuilt with the original dependency bundle.

**Foundation:** verified TS01 + independently reimplemented documented TS02 graphics behavior + TS03 fixes. The original TS02 ZIP was not recoverable this turn; reports and hashes are not substitutes for its missing bytes. This archive is cumulative but is not a claim of byte-identical TS02 recovery. Historical metadata is under `provenance/TS01` and `provenance/TS02-surviving`.

`source/PS2Recomp` is patched against commit `75d729ce40d7eed9649fd4bb05628dee520f3d0c`. `patches/PS2Recomp-TS03.patch` independently reproduces all 295 packaged framework files from that base. Studio is disabled and its two font files are omitted. Licenses/notices remain. PCSX2 commit `650d7048561756cdbfea60ee65282074a38eefa1` is a source reference only, not the native runtime or an executable substitute. SDK HLE and IOP/VU support remain in PS2Recomp; there is no EE interpreter fallback.

`bin/timesplitters` and `bin/ps2_recomp` in the full archive are dynamically linked for the tested Debian 13 environment, using Clang 19/C++20 and AVX2. This is not an arbitrary-distribution static Linux binary. Runtime libraries are recorded in `provenance/native-ldd.txt`. Do not confuse the diagnostic timeout with a release launcher.

## Verify and restore

From an extracted archive root:

```bash
python3 scripts/verify_checkpoint.py
```

Keep the original game archive and all five dependency ZIPs plus the original `restore_linux.py` and companion manifests. Put the dependency files together and reconstruct the chunk bundle:

```bash
python3 restore_linux.py --bundle-dir /path/to/dependency-volumes \
  --output /mnt/data/TimeSplitters-Dependencies --prepare
```

Preparation requires Python 3.11+ and Git. The tested scratch environment is Debian 13 with Clang 19 and Java 21/Xvfb. Package installation this turn used only the supplied offline repository with `--no-remove`; the precise script and plan are retained under `logs/TS03`. That script records this scratch environment, not a universal installer or authorization to alter a personal system.

Restore the exact original disc data from the user-supplied 7z or BIN:

```bash
python3 scripts/prepare_game.py '/path/TimeSplitters (USA) (v2.00).7z'
python3 scripts/verify_game.py
```

The script checks original archive/BIN identities, restores all 49 original files and a SHA256-verified 2048-byte data-sector ISO. The disc is MODE2/2352 with data starting at byte 24 of each sector, not a plain ISO. Full game assets, music/PAKs and dependency downloads are not duplicated in these checkpoints. The analysis ELF is included for regeneration and original-code component tests.

## Build, test, regenerate

```bash
JOBS=3 bash scripts/build_linux.sh /mnt/data/TimeSplitters-Dependencies
bash scripts/test_linux.sh
```

The scripts verify locked dependency commits and use offline FetchContent overrides. The default build directory is `build`; override with `TS_BUILD_DIR` for a separate clean build. The test script sets the source working directory required by an upstream source-inspection test. The tested suite totals **559 checks**.

All generated code is already included. To reproduce it in another directory:

```bash
python3 scripts/regenerate.py \
  --recompiler build/ps2xRecomp/ps2_recomp \
  --output /tmp/timesplitters-regenerated
```

In the full archive, `--recompiler bin/ps2_recomp` selects the packaged tested tool. The generation script rewrites the template's historical absolute input/output paths into a local runtime configuration. Use this script, not the unrelocated template directly. Original overrides are `fread`, `sceSdTransToIOP` and `sceGsSetDefLoadImage`; other SDK HLE wrappers remain. The SQRT.S fix is in the translator, not in manually edited generated files.

## Reproduce native save/load and Tomb input

The following uses real X11 XTEST events and actual screen captures. It does not modify guest menus/state. It needs Xvfb, xdotool and Python Pillow. Choose a **new empty test-card root**, never an existing personal card. Run sequentially so the second process uses the first process's genuine saved profile:

```bash
python3 scripts/probe_with_input.py --label local-create --seconds 125 \
  --binary bin/timesplitters \
  --card-root "$PWD/test-work/local-card/mc0" \
  --input project/tools/input-sequences/create-save.json

python3 scripts/probe_with_input.py --label local-tomb --seconds 250 \
  --binary bin/timesplitters \
  --card-root "$PWD/test-work/local-card/mc0" \
  --input project/tools/input-sequences/tomb-final.json
```

For a rebuilt binary replace `bin/timesplitters` with `build/timesplitters/timesplitters`. Timings reflect the tested software-rendered scratch setup; another machine's animation/load timing may need different input times. Keep captures as evidence instead of assuming elapsed time proves an action.

The full archive contains an explicitly labeled `project/diagnostics/native-created-card` fixture from the final test. It is evidence/convenience only, is not used to fake the fresh-save test, and must not overwrite a personal save.

For an existing Linux desktop display:

```bash
TS_MC_ROOT="$PWD/test-work/desktop-card/mc0" bash scripts/run_linux.sh 300
```

Controls used: Return = Start/Scores; X = Cross; arrows = D-pad; WASD = left analog stick; IJKL = right analog stick; E = R1/fire in the tested setup. No mouse-look or complete controller remapping interface is established. The inherited input backend can mirror primary input across physical ports; multiplayer is not validated.

Return **10** is the intentional diagnostic deadline. Return **1** indicates a propagated runtime error; missing EE functions stop rather than return fabricated success. The outer watchdog in the probe is separately reported. Never use rc10 alone as proof of menus/gameplay. The probe records the binary hash before and after execution and every dispatched key event.

## Next engineering targets

Keep work in Linux. Investigate original `DMA did not terminate` warnings, then validate combat/enemies/match progression and broader level, renderer and audio behavior. The current scope does not establish complete story progression, multiplayer, save compatibility, release performance or audible correctness.

Preserve memory boundaries: callback stacks `0x00080000..0x00100000`; original DMA buffer starts at `0x00100000`, so 1–2 MiB is not free. The high heap is `0x01FF5390..0x01FFD390`. Do not bypass game timers, force semaphore completion or clamp failed animation calculations to manufacture progression.
