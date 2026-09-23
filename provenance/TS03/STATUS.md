# TimeSplitters TS03 — native Linux gameplay slice

**Date:** September 22, 2026  
**Original game:** TimeSplitters USA v2.00, `SLUS_200.90`  
**Result:** Original native-AOT game code now creates and saves a profile, loads it in a fresh process, enters Tomb Deathmatch, walks, turns, fires, opens the original Scores overlay and resumes. This is **an initial gameplay slice, not a completed or fully validated PC port**.

## Provenance correction and continuity

The TS02 status, verification report and screenshots survived, but its claimed source ZIP was absent from the current mounted files and available Library searches. The ZIP size/hash recorded in a report cannot reconstruct its bytes. This work therefore starts from the verified **TS01** archive (83,793,176 bytes; SHA256 `da0704a0797f63b7971e80bb8a139da2f573418ab23ce320db4ea2f2b430b9dd`). Its ZIP CRC and all 3,188 payload hashes were checked before editing. Documented TS02 graphics behavior was independently reimplemented, then extended and tested. **Byte-identical recovery of TS02 is not claimed.** Historical TS01 and surviving TS02 metadata are separately labeled under `provenance/`.

All five supplied dependency volumes, 852 payload files and 21 locked repositories were restored and verified. No replacement game or alternate regional executable was used. PCSX2 remains an immutable source reference only: it was **not built, run or linked** into these results. The native EE code has no interpreter fallback; SDK HLE, IOP and VU support remain part of PS2Recomp.

## Main correctness fix: R5900 SQRT.S input register

PS2Recomp's scalar square-root translator read **FS**, but this R5900 instruction takes its input from **FT**. The provided PCSX2 source independently shows FT in `pcsx2/FPU.cpp::SQRT_S` and the R5900 disassembler. A direct scan of the original ELF found **168 SQRT.S instructions**. Correcting the translator and regenerating changes **96 generated function files**, not hand-edited game bodies.

Before the fix, original `v3Normalize(3,4,0)` produced `(0.75,1,0)` instead of `(0.6,0.8,0)`. The native game could display Tomb, then stall inside original `calMatrices` with an infinite animation value. The new code-generation regression and original vector-normalization test failed before the fix and pass afterward. The observed stall disappears in the corrected native runs. No clamp, skipped animation loop, guest timer override or forced completion was added. This fix establishes the instruction's input selection, **not all PS2 floating-point flags, negative/denormal/overflow edge behavior or general numerical correctness**.

Audit: `project/analysis/scalar-sqrt-instructions.json`; before/after logs under `logs/TS03/sqrt-*`; changed generated files in `provenance/sqrt-regeneration-changes.json`.

## Graphics and input restored/extended

The game again uses its original **96-byte image-transfer descriptor**, rather than the incompatible 12-byte HLE descriptor. Ten original-code tests cover exact descriptors and real two-DMA uploads in CT32, CT24, CT16, T8 and T4 formats. Three separate physical GIF stream states retain incomplete PACKED/REGLIST/IMAGE data and Q state across submissions. VIF1 forwards actual PATH2 continuation data without a synthetic header. Thirteen added stream tests cover the implemented fragment cases.

Finished host frames are published at the original game's GS SIGNAL in `dlFinish`, before exposing completion to the guest. Atomic publication sequencing and per-run upload state replace the partial-frame cache behavior. A 4:3 host viewport is selected. No new guest SIGNAL or semaphore wake-up is fabricated. Full scanout accuracy, path arbitration, every transfer edge case and complete renderer fidelity are not claimed.

Keyboard analog-stick support is opt-in: WASD drives the left stick, IJKL the right stick; opposite directions cancel and neutral is 128. The native runner enables it. Three helper tests cover axis mapping. Multiplayer/controller separation remains unvalidated; the inherited backend can mirror the primary host input across physical ports.

## Profile/save/load result — not a speculative memory-card fix

An isolated test executes original `mcardCheckCards`/`mcardTick`, completing both formatted-card scans in seven ticks. The final native creation run starts from an **empty test card directory**, enters profile **A**, follows normal Save Sign On input and displays **Save completed**. It writes `icon.sys` (964 bytes), `tssave.ico` (65,720 bytes) and the original 47,000-byte profile file.

A **fresh process** reads the saved profile (the log records the 47,000-byte read), reaches Select Level and loads Tomb. The three card files are byte-identical before and after this second run. The card service implementation was not changed to force success. The precise cause of historical TS02's Please Wait behavior cannot be established from its missing source. Successful current save/load is the verified result, not a claim that the historical cause was diagnosed. Tests do not establish retail-card compatibility, corruption handling, full-capacity behavior or every save type.

## Clean build and checks

| Check | Result |
|---|---|
| Fresh Linux build | Separate `build-clean`, Clang 19, all targets completed |
| Core tests | 459 passed |
| IOP tests | 4 passed |
| GS/cache tests | 45 passed |
| Original EE ABI | 4 passed |
| Original image descriptor/DMA | 10 passed |
| Original card-state scan | 1 passed |
| Original math | 24 soft-double + 12 vector-normalization passed |
| **Total** | **559 checks passed; zero failures** |
| Generation | 2,375 original EE bodies + 295 automatic SDK/library wrappers |
| Reproducibility | All **2,673 generated files byte-identical** from clean-built recompiler |
| Generation limits | 78 warnings; no explicit skips, decode failures or unhandled-instruction errors |
| Cumulative patch | 29 changed framework files; fresh patch application reproduces all 295 packaged framework files |

The 559 count includes component checks and is not a measure of game completion. Code generation retains promoted AOT indirect entries; these are not interpreted EE instructions. Source hashes were checked unchanged across the clean build and regeneration.

## Exact final native evidence

Both runs used the exact packaged `bin/timesplitters`, real X11 XTEST keyboard input and actual native-window screenshots under Xvfb/Mesa. No guest-memory edits, direct calls to menu functions or externally fabricated UI were used for these runs.

| Run | Requested / observed | Stop | Result |
|---|---|---|---|
| `ts03-final-create` | 125 / **125.33 seconds** | rc10 deadline; no outer kill | New profile, save confirmation, Select Level |
| `ts03-final-tomb` | 250 / **250.32 seconds** | rc10 deadline; no outer kill | Fresh-process load, Tomb, movement/turning/firing, Scores and resume |

`ts03-final-create-097.png` shows Save completed. Final Tomb captures and the input sequence corroborate level entry, changed position/view, ammunition consumption and the original Scores overlay with profile A. Source frames are unretouched screen captures. Return code 10 means the requested diagnostic deadline, **not** a universal gameplay-success code. The probe hashes the executable before launch and after exit and verifies it did not change; all scheduled key events were delivered successfully.

The final game-save SHA256 is `01a31d22aeba9605be19f78de6f8eeb389a72d32a024a2e6ac92a3c3bd9d7b6d`. Per-file manifests and the optional native-created card fixture are retained. Never overwrite an existing personal card with that fixture.

## Remaining limitations and next engineering targets

Only the initial Tomb Deathmatch slice was exercised. Original **DMA did not terminate** messages still occur around character/overlay rendering; their cause and full impact remain unresolved. Complete enemy behavior, kills, collision coverage, objectives, match completion, story progression, other levels, multiplayer, visual fidelity and a sustained performance target have not been validated. Audio activity in logs is **not** audible-output correctness. Broader VU/GS/IOP and floating-point edge semantics still require work. The software-rendered diagnostic executable is not an optimized release.

Continue in Linux: isolate the DMA warnings, exercise actual combat/match progression, then expand renderer/audio and level coverage. Windows migration is not required for this checkpoint. The callback arena remains `0x00080000..0x00100000`; `dmalists[0]` at `0x00100000` means the 1–2 MiB window is not free. The explicit high heap remains `0x01FF5390..0x01FFD390`.

## Exact identities and package scope

- Original ELF: `19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2`
- PS2Recomp base: `75d729ce40d7eed9649fd4bb05628dee520f3d0c`
- PCSX2 reference: `650d7048561756cdbfea60ee65282074a38eefa1`
- **Native executable:** `5f50119feaa68f65d4f46271d2fdcf0f97da29a064eb019b84f61136036e463d`
- Matching recompiler: `154158e061a26fe94d0848ea86c2c6a06720b129cf2dfe1dcacb2f10517fea93`

The cumulative Linux archive includes framework/generated source, runner, tests, tools, binaries, Ghidra analysis, selected stopped RAM and actual captures/logs. Full disc/assets, dependency downloads, build intermediates and font files are excluded. A separate **source-only backup** preserves code and regeneration/build inputs without binaries, Ghidra database, native captures or RAM. Package CRC, fresh-extraction manifests and rerun tests are recorded in the external package-verification JSON after packaging.
