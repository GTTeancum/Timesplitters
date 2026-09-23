# TimeSplitters TS01 — native Linux checkpoint

**Date:** September 22, 2026  
**Game:** TimeSplitters (USA), v2.00, `SLUS_200.90`  
**Current result:** Original EE code has been generated, compiled into a native Linux x86-64 executable, and executed through startup into the CPU/graphics-thread paths. **Rendering is corrupted. Usable menus and gameplay are not established; this is not a playable release.**

## Verified milestones

| Stage | Actual result |
|---|---|
| Dependency upload | All five numbered ZIPs and companion checksums verified; 852 payload files restored; 21 locked repositories restored and checked. |
| Original input | Original executable SHA-256 matches the initial analysis. The original archive and BIN are unchanged. |
| Debug recovery | Ghidra 12.1.3 with the matched Emotion Engine extension recovered 2,669 functions, 428 types and 31,716 symbols. Warnings remain in the logs. |
| EE generation | 2,374 original EE function bodies and 296 automatic SDK/libc/syscall wrappers; no explicitly skipped functions, no decode failures or unhandled-instruction errors. |
| Reproducibility | The recompiler rebuilt from this standalone checkpoint regenerated all 2,673 saved source files byte-for-byte. |
| Native compilation | A fresh standalone Linux build of the checkpoint source, runtime, tools, tests and game target succeeded. |
| Tests | 442 core, 4 IOP, 45 GS/cache and 4 original-EE ABI checks passed: **495 total, zero failures**. |
| Actual native run | The exact packaged executable ran under Xvfb/software rendering for a 12-second diagnostic interval. Three EE threads and eight loaded IOP modules were recorded. |
| Graphics | Actual screen captures show green fragments/bands on black, not a correct original frontend. |
| PCSX2 | Source restored as a reference only. PCSX2 was neither built nor executed for this result. |

The generation pass retains **78 warnings**, mainly indirect control-flow recovery, and 16,154 generated indirect-entry/resume points. Those are ahead-of-time generated EE entry points, not an EE interpreter fallback. A successful generator run does not establish that every translated path is semantically correct. The 296 automatic wrappers retain high-level SDK/runtime behavior; empty explicit `stubs` and `skip` arrays are not a claim that the program has no HLE.

## Changes made during native startup work

### Controller slots

The original game opens all eight logical controller slots during initialization. The runtime previously supported only one slot per port and rejected the next slot, causing the game's own startup error/exit path. Logical slots now open independently with separate buffers; additional slots remain disconnected rather than duplicating a controller. Three added tests cover the slot behavior. This removes the observed startup rejection; usable in-game input has not yet been demonstrated.

### Original C-library and SIF transfer code

The game uses its original C-library memory-backed FILE layout while parsing strings. The generic host `fread` shim was incompatible with that path. A new `general.recompile` selector preserves original implementations of `fread` and `sceSdTransToIOP` instead of automatically replacing them with HLE shims.

Three native original-code tests exercise memory-backed `fread` with different element sizes/counts. A fourth executes the original `sceSdTransToIOP` wrapper and verifies that the SIF DMA operation copies 64 exact bytes from EE to IOP RAM while preserving expected call/stack behavior. This verifies a transfer operation, not audible music or complete sound playback.

### Heap and callback memory

The original PT_LOAD memory extent ends at `0x01FF5390`. Its explicit 32 KiB heap fits at `0x01FF5390..0x01FFD390`; callback stacks cannot simply be allocated after that or inside the game's large BSS.

A second, important correction came from the original ELF data: `dmalists[0]` is initialized to `0x00100000`. The 1–2 MiB window below PT_LOAD is therefore **not free space**. The final callback arena is `0x00080000..0x00100000`, above the runtime's low-memory syscall mirrors and below the original DMA storage. A regression test checks heap boundaries, exhaustion/reclamation, and all 32 callback-stack slots. Earlier runs using the wrong arena remain clearly identified as historical failures.

### Graphics interrupt and readback paths

The runtime now dispatches pending GS interrupts from the GS CSR/IMR state, prevents duplicate queued delivery to the same handler, and allows the original handler to acknowledge the interrupt and signal its semaphore. It does not fake a completed wait by directly waking the game thread.

The reverse VIF1 DMA path now consumes real local-to-host GS pixel data into guest RAM when readback direction is selected, updates transfer registers and completion status, and rejects unsupported/short transfers. Added tests cover masked/unmasked GS interrupt delivery and an actual four-pixel GS-to-EE readback round trip. These changes resolve observed startup blockers, but do not establish complete VIF/VU/GIF/GS correctness.

### Error reporting and build integration

Runtime worker exceptions are propagated after thread/window cleanup, guest exit diagnostics identify the caller, and missing EE functions stop execution rather than silently returning success. The standalone game target builds against the patched PS2Recomp runtime using offline dependency paths. The cumulative framework patch modifies 15 files; the native runner and tests are also included.

## Exact final native evidence

The final proof run is `project/diagnostics/native-08.*`, produced by the executable actually supplied in `bin/timesplitters`.

- Requested diagnostic interval: 12 seconds; observed wall duration: approximately 12.43 seconds.
- Return code: **10**, the runner's explicit diagnostic timeout, not a crash or a gameplay-success code. The outer watchdog did not kill the process.
- At stop: three EE threads; the original main thread sleeping, `cpuMain` waiting on semaphore 4, and `gsMain` active.
- Recorded counters: 782 DMA, 297 GIF and 126 VIF events. These are diagnostic counters, not frame counts or performance measurements.
- Eight IOP modules, 12 IOP threads and 10 RPC servers were recorded. Module loading does not prove every service is complete.
- Actual captures were saved at approximately 2, 7 and 12 seconds. They show corrupted green/black output. The images are screen captures from the native program, not recreated artwork or PCSX2 screenshots.

The exact cause of the remaining corrupted rendering has **not** been isolated. The next work is to trace the original VIF/VU/GIF/GS data and framebuffer presentation, obtain correct original frontend graphics, and then verify usable input. Audio output, saving, level gameplay, performance and game completion remain unvalidated. **Windows builds remain deferred.**

## Reproduction and checkpoint contents

`README-LINUX.md` contains the restoration, build, test and probe commands. The archive contains patched framework source, all generated EE source, the native runner, the exact tested native executable and recompiler, saved Ghidra analysis, selected diagnostic RAM/captures, provenance, regression tests and build/run logs. No live scratch build directory is required to preserve the work.

The full disc/assets and dependency downloads are not duplicated in the checkpoint. Retain the original game archive and the five dependency volumes plus companion files. `scripts/prepare_game.py` reconstructs the 49 original files and verified data-sector ISO. That restoration recipe was tested against the original BIN. The native executable is dynamically linked for the tested Debian 13 environment, not a universal Linux portable binary. Optional Studio fonts are omitted and Studio is disabled.

The broad original package installer was safely refused when it proposed removals. A narrower offline installation succeeded without those removals. Earlier native failures, a wrong-working-directory test invocation, and one interrupted build caused by changing staging files during compilation are retained and distinguished in `logs/ATTEMPTS.md`. The interrupted build was discarded; the final clean build and tests were run with stable sources and passed.

## Identity and supporting evidence

```text
Original ELF SHA-256:
19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2

PS2Recomp base commit (plus packaged TS01 patch):
75d729ce40d7eed9649fd4bb05628dee520f3d0c

PCSX2 reference commit (not built/run):
650d7048561756cdbfea60ee65282074a38eefa1

Packaged native executable SHA-256:
495057ebce60c15218a496e50678b58b9521c19c6b85004fc53ba08a1e51a1a3

Packaged recompiler SHA-256:
9edbe3705e2095d5f808690c32d230071fc565ceea6d2f1e16839c3d1e3ab70f
```

Primary local evidence: `logs/checkpoint-clean-build.log`, `logs/checkpoint-final-tests.log`, `logs/checkpoint-regenerate.log`, `provenance/regeneration-verification.json`, `provenance/source-comparison.json`, `project/diagnostics/native-08.log` and `project/diagnostics/native-08-probe.json`. `RESULTS.json` records the same state in machine-readable form. Checkpoint file integrity is covered by `CHECKPOINT-MANIFEST.json` and `scripts/verify_checkpoint.py`.
