# TimeSplitters TS02 — native Linux frontend checkpoint

**Date:** September 22, 2026  
**Game:** TimeSplitters USA v2.00, `SLUS_200.90`  
**Result:** The actual native Linux window now displays the original animated title,
readable Sign On menus and the original name-entry keyboard. Real X11 keyboard
input advances the game and enters a character. **Gameplay has not been demonstrated;
this remains a development checkpoint, not a complete or playable port.**

## Verified result and scope

| Check | TS02 result |
|---|---|
| Starting point | Original TS01 archive and all 3,188 payload hashes reverified. |
| Dependencies | All five volumes, 852 payload files and 21 locked source repositories restored and verified again. No new dependency collection required. |
| Native build | Fresh, separate Linux Clang 19 build of final source succeeded. All framework, tools, game and test targets completed. |
| Tests | **455 core + 4 IOP + 45 GS/cache + 14 original-EE ABI/DMA + 3 GIF-parser = 521 passed; zero failures.** This is 26 more checks than TS01. |
| Generation | 2,375 original EE bodies, 295 automatic HLE wrappers; 2,673 saved files reproduced byte-for-byte by the clean-built recompiler. |
| Generation limits | 78 warnings remain. Zero explicit skips, decode failures, unhandled-instruction errors or reported generation errors. Passing generation is not proof of every translated path. |
| Cumulative source | 22 framework files differ from the locked base, including 9 changed/added since TS01. Reapplying the cumulative patch reproduces all 295 packaged framework files. |
| Native run 1 | Requested 120 seconds; observed 120.61 seconds, explicit deadline return 10, no outer kill. |
| Native run 2 | Requested 75 seconds; observed 75.51 seconds, explicit deadline return 10, no outer kill. |
| Input | Both runs used real X11 XTEST keyboard events into the native window, not game-memory edits or direct calls to menu functions. |
| PCSX2 | Frozen source reference only; not built, executed or linked into this result. |

## Actual screen/input evidence

All files below are screen captures from the native executable in `bin/timesplitters`.
They are not reconstructed UI, saved-VRAM renders or PCSX2 screenshots.

- `project/diagnostics/ts02-final-native-032.png`: animated original title before Start.
- `project/diagnostics/ts02-final-native-037.png`: readable original Sign On screen after Enter/Start at 35 seconds.
- `project/diagnostics/ts02-final-native-072.png`: original Load Sign Ons memory-card dialog, entered through normal input.
- `project/diagnostics/ts02-new-player-052.png`: original name keyboard after Start, Up and Cross.
- `project/diagnostics/ts02-new-player-067.png`: the keyboard has entered **A** after Cross at 62 seconds.

The 34-second earlier probe did not show a usable menu. Static inspection of original
`nplayers_pageTick` and `frontfxFinished` showed that menu actions are gated by completion
of the logo animation. The later input sequences run beyond that gate without changing
any game timer or bypassing its condition. Recorded sequence files are in
`project/tools/input-sequences/`; the probe reports actual dispatch times and window IDs.

Post-stop original-symbol decoding independently identifies `signon_pageTick` and,
in the Load Sign Ons attempt, `mcseq_pageTick`. These names corroborate the captures;
they are not by themselves evidence of completed loading, profile creation or gameplay.

## Fixes since TS01

### 1. Preserve the original 96-byte image-transfer descriptor

The original game combines `sceGsSetDefLoadImage` at `0x002ce688` with its own
`sjeGsExecLoadImage` at `0x002b7040`. The latter sends a **96-byte/six-QWC GIF descriptor**
and then sends the pixel data in a separate DMA. The generic image HLE instead wrote
its private 12-byte descriptor, which is incompatible with this original caller.

`general.recompile` now preserves the original image-setup function alongside `fread`
and `sceSdTransToIOP`. Five failing-then-passing ABI checks verify the exact packet,
return value and guarded memory. Five additional tests execute the game's real two-DMA
upload and compare 512 exact VRAM texels for each of PSMCT32, PSMCT24, PSMCT16, PSMT8
and PSMT4. The test-only recording backend is not linked into the native game.

### 2. Retain incomplete GIF streams separately for each physical path

The old parser discarded the pending IMAGE tag at the end of the first DMA, then
misread the second DMA's pixel data as new GIF commands. The parser now retains
partial tag/PACKED/REGLIST/IMAGE data, padding and Q state per PATH1/PATH2/PATH3.
The VIF1/PATH2 continuation path forwards real continuation bytes rather than inserting
an extra synthetic IMAGE header into an already-pending image.

Regression cases cover split points, byte-fragmented CT24 data, independent paths,
state reset, odd REGLIST padding, NREG=0 meaning 16, IMAGE2, immediate A/D writes and
Q preservation. This is not a claim of complete cycle-accurate GIF arbitration or
universal image-format/transfer coverage.

### 3. Publish finished frames at the game's original GS SIGNAL

After the transfer fixes, saved VRAM and the uploaded host texture contained a
recognizable title, but the live window cached a snapshot made partway through raster
work. An independent host-GPU texture readback matched the uploaded RGBA bytes,
separating that fault from texture decoding and upload.

The original `dlFinish` at `0x002b7a10` ends its draw list with **GS SIGNAL (0x60)**.
TimeSplitters now selects completed-frame publication at that existing command,
before exposing its completion to the guest. No new guest SIGNAL, callback, semaphore
wake-up or animation-timer override is fabricated. Atomic publication sequencing and
per-run upload state prevent reuse of stale cached frames across publications/runs.
The original VSync snapshot default remains available for other games; FINISH mode
has separate regression coverage. TimeSplitters selects a **4:3 host viewport** without
changing source pixels or guest display registers. This is not cycle-accurate PS2 scanout.

## What remains unverified or blocked

**Load Sign Ons did not complete during the 120-second run.** Its memory-card wait
panel remained visible, with repeated GetInfo/Sync activity in the log. The exact
service/state-machine cause has not been isolated. New Player name entry works, but
completed profile creation, save/load persistence and later menu flows are not yet
verified. No original level gameplay, audible audio correctness, performance target,
multiplayer or game completion is being claimed. The software-rendered diagnostic
build is not performance-optimized. Continue development and testing in Linux;
Windows setup/handoff is not needed for this checkpoint.

The existing TS01 callback arena (`0x00080000..0x00100000`), explicit high-memory heap
and original DMA buffers remain unchanged. In particular, `dmalists[0]` at
`0x00100000` means the 1–2 MiB window must not be reused as callback memory.

## Reproduction and preserved evidence

`README-LINUX.md` contains offline restoration, clean build/test and timed-input
probe commands. The archive contains cumulative framework source/patch, all generated
EE C++, runner, tests, the exact tested native executable and recompiler, Ghidra
analysis, before/after logs, actual captures and selected stopped-memory snapshots.
Historical TS01 metadata is explicitly under `provenance/TS01/`.

`logs/TS02/ATTEMPTS.md` distinguishes deliberately failing regression tests and
intermediate broken native runs from final verification. Offline component helpers
used during diagnosis are clearly labeled and are not native game evidence. Full
disc/game assets, dependency downloads, build intermediates and font files are omitted.
Retain the original game upload and five dependency volumes; they need not be reuploaded.

## Identity

```text
Original ELF SHA256: 19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2
PS2Recomp base:       75d729ce40d7eed9649fd4bb05628dee520f3d0c
PCSX2 reference:      650d7048561756cdbfea60ee65282074a38eefa1
Native executable:   e32dd72e17cfc7924c263293e20b0e88776cc389db7e8bc626cfa51d158df19e
Matching recompiler: 5d0f0aaca106586f6570b3de19c6cfb5b6d7b7f842a6ad7dae6d7354077c5c9e
```

Final evidence: `logs/TS02/final-clean-build.log`, `final-clean-tests.log`,
`final-regenerate.log`, `provenance/regeneration-verification.json`,
`provenance/source-comparison.json`, `project/diagnostics/ts02-final-native-probe.json`,
`ts02-new-player-probe.json` and their logs/captures. `RESULTS.json` records this state.
The package is verified separately by manifest, ZIP CRC and fresh extraction.
