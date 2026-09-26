# TimeSplitters PS2Recomp Chat Handoff

Date: 2026-09-23

This archive is intended for continuing the TimeSplitters PS2Recomp native-PC port in Chat rather than the Codex Work environment.

## Repository Identity

- Project: TimeSplitters PS2 USA v2.00, `SLUS_200.90`
- Repo root in original environment: `D:\Programming\GitHub\Timesplitters`
- Original ELF SHA256: `19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2`
- PS2Recomp base commit: `75d729ce40d7eed9649fd4bb05628dee520f3d0c`
- PCSX2 reference commit: `650d7048561756cdbfea60ee65282074a38eefa1`

## Package Contents

Included:

- Source tree and git history.
- Current working tree, including uncommitted Windows crash-hunt changes.
- Generated TimeSplitters recompilation source.
- Recompiler/runtime/test source.
- Scripts, configs, patches, provenance/status documents.
- Required game data:
  - Original `TimeSplitters (USA) (v2.00).bin`
  - Original `TimeSplitters (USA) (v2.00).cue`
  - Extracted `project/game-data`
  - `project/disc/TimeSplitters.iso`

Excluded:

- Build directories.
- Run logs/proof captures.
- Large transient diagnostics.
- Local Python/pip caches.
- `ps2_log.txt`.

## Current Git State

The archive intentionally preserves the current dirty worktree. Important uncommitted files:

- `source/PS2Recomp/ps2xRuntime/src/lib/Kernel/Stubs/MemoryCard.cpp`
- `source/PS2Recomp/ps2xRuntime/src/lib/Kernel/Stubs/MemoryCard.h`
- `source/PS2Recomp/ps2xRuntime/src/lib/Kernel/Stubs/Pad.cpp`
- `project/game/main.cpp`
- `scripts/pad/windows-story-signon-end.pad`

There is no configured git remote in the original environment.

## Verified Windows State

Windows NMake is the stable build path. Visual Studio generator builds were unreliable for the huge generated target.

Last verified build commands:

```powershell
cmd /c 'call "C:\Program Files\Microsoft Visual Studio\2022\Community\Common7\Tools\VsDevCmd.bat" -arch=x64 -host_arch=x64 >NUL && cmake --build build-windows-nmake --target ps2x_tests timesplitters'
```

Last verified regression run:

```powershell
cd source\PS2Recomp
..\..\build-windows-nmake\ps2xTest\ps2x_tests.exe
```

Result: 476 total, 476 passed, 0 failed.

## Recent Functional Changes

1. Memory-card path diagnostics:
   - Debug snapshots now include last memory-card port, slot, flags, raw guest path, normalized guest path, and host path.
   - `sceMcOpen` and `sceMcMkdir` log path details and result.
   - `project/game/main.cpp` state-watch logs those fields.

2. Scripted pad route live-control escape hatch:
   - `TS_PAD_SCRIPT_MERGE_LIVE=1` causes live keyboard/XInput state to be merged into scripted pad input.
   - This fixes the practical issue where a scripted run blocked real controls during crash-hunt navigation.

3. New sign-on script:
   - `scripts/pad/windows-story-signon-end.pad`
   - This gets past the profile-name entry screen by typing a one-letter profile and selecting END/confirm.

## Current Crash-Hunt Position

The native Windows executable now reaches the profile sign-on/name-entry flow and can progress into the memory-card sequence without host OS input automation.

The next concrete blocker is not a crash. It is a memory-card no-entry path:

```text
[MC] Open port=0 slot=0 flags=0x1
raw='/BASLUS-20090-TS1-OPT/BASLUS-20090-TS1-OPT'
guest='/BASLUS-20090-TS1-OPT/BASLUS-20090-TS1-OPT'
host='...\project\game-data\mc0\BASLUS-20090-TS1-OPT\BASLUS-20090-TS1-OPT'
exists=0 parent_exists=0 -> result=-4
```

At the stopped state after the 220-second sign-on route:

- `mcseq_state=3`
- `mcard_result=5`
- `mc_last_cmd=2` (`sceMcOpen`)
- `mc_last_result=-4` (`NoEntry`)
- `active_characters=0`
- `prop_valid=0`
- `numdmafail=0`

This means combat has not been reached yet. Do not claim combat correctness.

## Suggested Next Steps

1. Keep correctness first. Do not fabricate profile creation or success states.
2. Inspect original generated memory-card/profile flow around:
   - `mcardTick_0x207ad0.cpp`
   - `mcardFileExists_0x208d70.cpp`
   - `mcardFileRead_0x208da0.cpp`
   - `mcardFileWrite_0x208e08.cpp`
   - `mcseqTick_0x2434a8.cpp`
   - `mcseqLoad_0x244b28.cpp`
   - `mcseqSave_0x244c08.cpp`
3. Determine whether the correct next behavior is:
   - continue through the game's own create-profile flow via pad script;
   - improve memory-card HLE semantics for missing directories/files;
   - preseed a legitimate card fixture created by the original game path;
   - or add a scenario hook that enters later menus only if it corresponds to original game state, not a fake success.
4. Run the sign-on route:

```powershell
$env:TS_PAD_SCRIPT=(Resolve-Path scripts\pad\windows-story-signon-end.pad).Path
$env:TS_PAD_TIME_SCALE='2'
$env:TS_PAD_SCRIPT_MERGE_LIVE='1'
$env:TS_WATCH_STATE_INTERVAL='15'
$env:TS_WATCH_MCSEQ_TRANSITIONS='1'
.\build-windows-nmake\timesplitters\timesplitters.exe project\game-data\SLUS_200.90 360 project\disc\TimeSplitters.iso
```

5. Once through memory-card/profile handling, continue the requested crash hunt:
   - reach Arcade or Story gameplay;
   - validate hit registration;
   - validate player damage;
   - validate enemy death and kill counters;
   - validate player death/respawn or mission failure;
   - then proceed to Story objectives and audio.

## Important Non-Regression Rules

- Do not replace native recompilation with PCSX2 emulation.
- Do not hand-edit generated EE bodies unless unavoidable.
- Do not fabricate GS completion, semaphore wakeups, objectives, damage, deaths, or save success.
- Do not treat sound-memory transfer as completed audio.
- Keep the 1-2 MiB region reserved:
  - callback stack arena: `0x00080000 .. 0x00100000`
  - original DMA storage begins at `0x00100000`
- Preserve previous fixes:
  - R5900 `SQRT.S` FT operand fix.
  - Original `sceVu0MulMatrix` operand behavior.
  - DMA chain traversal until real terminator/cycle.
  - 96-byte image upload descriptor.
  - fragmented GIF/PATH2 state.
  - 8-byte EE variadic argument slots.
  - actual SPU sound-memory transfer copies.

