#!/usr/bin/env python3
from pathlib import Path
import json
R=Path('/mnt/data/TimeSplitters_TS05_Checkpoint')
n=json.loads((R/'provenance/TS05-native-run-summary.json').read_text())
f=n['ts05-final-story'];a=n['ts05-final-arcade'];c=n['ts05-format'];s=n['ts05-story-candidate']
b=json.loads((R/'provenance/TS05-binary-identities.json').read_text())
checks=dict(core=465,IOP=4,GS_cache=45,original_EE_ABI=4,original_EE_image_DMA=10,original_card_scan=1,original_soft_double=24,original_normalization=12,original_matrix=36,Python_helpers=17,captured_original_DMA_chains=2,format_routes=60,sound_memory_routes=25)
assert sum(checks.values())==705
out=dict(checkpoint='TS05',date='2026-09-22',foundation='actual byte-verified TS04 full checkpoint; no source recovery needed',foundation_archive_sha256='094609f900457ac8998481ca17997596ff6a91430b74b807f16b1a65c2bf8718',original_elf_sha256='19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2',ps2recomp_base='75d729ce40d7eed9649fd4bb05628dee520f3d0c',pcsx2_reference='650d7048561756cdbfea60ee65282074a38eefa1',pcsx2_built_run_linked=False,native_identity=b,checks=checks,total_checks_passed=705,source_only_checks_available=703,fresh_clean_build=True,generated_files=2673,generated_files_reproduced_byte_identical=True,original_EE_bodies=2376,automatic_SDK_wrappers=294,generation_warnings=78,explicit_skips=0,decode_failures=0,unhandled_instruction_errors=0,changed_framework_files_from_base=34,changed_framework_files_since_TS04=5,packaged_framework_files_reproduced_by_patch=295,hand_edited_generated_bodies=False,fixes=['Use original eight-byte EE argument slots for saved va_list, integer/64-bit/double values, and incoming-SP stack spills','Actually copy IOP/SPU voice-transfer bytes using per-runtime shared 2-MiB sound RAM, physical DMA/IO rounding, readback and failure validation; preserve zero-valued register arguments'],format_comparison=dict(before_passed=22,before_failed=38,after_passed=60,after_failed=0,original_vafmt_cases=20,direct_va_list_cases=20,direct_register_stack_cases=20,static_original_direct_vafmt_call_sites=128),sound_memory_comparison=dict(before_passed=7,before_failed=18,after_passed=25,after_failed=0,scope='includes one original EE-to-IOP transfer case; others exercise runtime transfer/memory behavior, not a voice mixer'),native_runs=n,validation_scope=dict(formatted_time_limit_and_named_bot_message=True,story_1935_Tomb_easy_entry=True,story_original_Mauser_pickup=True,story_movement_turning_strafe_and_one_shot=True,story_ammunition_15_to_14=True,story_objective_completion=False,player_kill_verified=False,comprehensive_damage_hit_correctness=False,actual_sound_memory_delivery=True,mixed_PCM_or_audible_audio=False,all_levels_complete=False,multiplayer=False,optimized_FPS=False,complete_PC_port=False,historical_TS04_save_match_paths_all_repeated=False),limitations=['Only initial Story Tomb exploration, not its objective completion','No confirmed human-player kill/damage; named first-kill event in intermediate Arcade run belongs to a bot','Voice/batch/register mixing and correct block streaming remain incomplete; no PCM recording or audible-output claim','Playback device initialization still fails in scratch','Formatter output limits and untested conversion/locale/edge semantics remain','Synchronous HLE sound transfers are not cycle-accurate DMA/interrupt semantics','All-level, multiplayer, retail-card, comprehensive collision/AI and hardware-edge correctness remain unvalidated','FPS work explicitly deferred'],evidence_rules=['Actual native X11 XTEST input and unretouched window captures','Stopped-RAM inspection does not execute or modify the game','Intermediate candidates identified separately from exact final packaged native binary','No guest timer override, direct menu calls, invincibility edits or forced objective/completion signals'])
(R/'RESULTS.json').write_text(json.dumps(out,indent=2)+'\n')
status=f'''# TimeSplitters TS05 — formatted text, real sound-memory delivery and initial Story-mode coverage

**Date:** September 22, 2026  
**Game:** TimeSplitters USA v2.00, `SLUS_200.90`  
**Result:** The original EE variadic argument layout is corrected; the sound-transfer path now copies actual sample bytes instead of merely acknowledging requests; and the exact packaged native executable enters and explores the original **1935 Tomb, EASY, Story-mode opening**. **This is not a completed port, a completed Story mission, or working audio playback. FPS optimization is explicitly deferred.**

## 1. Verified foundation and unchanged project direction

Work starts from the actual TS04 full archive: **185,614,599 bytes**, SHA256 `094609f900457ac8998481ca17997596ff6a91430b74b807f16b1a65c2bf8718`. Its ZIP CRC and all **4,189** payload hashes passed before editing. All five dependency ZIPs, 852 payload files and 21 locked repositories were restored and verified. The original 49 game files and data-sector ISO were reconstructed and checked. A fresh TS04 baseline build passed all **613** checks.

No source checkpoint was missing in this continuation. Earlier TS03 provenance concerning independently recovered TS02 behavior is retained as history, not silently changed. PCSX2 is the supplied immutable source reference only: **not built, run, linked or used to render screenshots**. Original EE code is native ahead-of-time generated C++; SDK HLE and IOP/VU support remain. No EE interpreter fallback was added. Windows migration and FPS optimization remain deferred.

## 2. Cause and fix of the `(null)` formatted text

Original `vafmt` at `0x002B4868` stores its arguments with **SD at eight-byte intervals**. The inherited formatter advanced saved arguments four bytes at a time, so it could consume the high half of an earlier slot as a new string pointer or integer. Register arguments and arguments spilling to the stack also needed the original eight-byte convention and **incoming SP + 0**, rather than an O32-style argument-home offset. The original instruction audit records **128 direct call sites** to `vafmt`; this is a static count, not a claim that every site ran.

The fixed cursors consume one eight-byte slot per scalar/pointer/double/64-bit argument, using the low 32 bits for 32-bit conversions. Mixed values, register exhaustion, saved lists, width/precision arguments and stack spills are exercised. The production change is in the runtime cursor implementation; generated game function bodies were not hand-edited.

The new regression has **20 cases through each of three routes**: original recompiled `vafmt`, direct registered `vsprintf` with a saved list, and direct registered `sprintf` with register/stack arguments. The old implementation passed **22 and failed 38**; the corrected implementation passes **all 60**. Three additional core tests cover the ABI independently. These counts include runtime/HLE cases; they are not all executions of original game functions.

The intermediate native Arcade run shows **“1 mins”** in the original time-limit option instead of `(null)` and **“First kill: Cultist!”** with an actual name. That event belongs to a bot, not the human player. A separate final-binary Arcade run repeats the menu/gameplay route; its actual screenshots and stopped counters are retained. This does not claim complete `printf` behavior: inherited output limits and untested conversion/locale/edge semantics remain.

Evidence: `project/analysis/ts05-format-abi.json`, original disassembly, `project/game/native_format_test.h`, `logs/TS05/format-before-tests.log`, `format-after-tests.log`, and `clean-tests.log`.

## 3. Audio: a real data-path repair, not an audible-output claim

The previous `sceSdRemote` voice-transfer branch returned success without copying the IOP sample bytes into SPU sound RAM. That was an independent blocker beyond the missing host playback device. It also treated zero-valued register arguments as if they were absent and tried an inappropriate stack fallback. The observed original EE wrapper passes all seven relevant arguments in its register argument bank; zero is valid data.

The runtime now owns a **shared 2-MiB sound-memory array per runtime instance**, common to its two SPU cores and independent across separate runtimes. The registered voice-transfer path copies actual bytes in both supported DMA directions, rounds physical DMA transfers to 64-byte blocks, implements the tested programmed-I/O halfword writes, aligns the sound address to halfwords and wraps at the end of sound RAM. Whole IOP ranges and sizes are checked before mutation; invalid or unsupported transfers fail rather than being marked complete. Completion is set only after the synchronous copy succeeds.

The supplied PS2SDK voice-transfer/SDRDRV sources establish the inspected transfer conventions; the supplied PCSX2 SPU2 source corroborates the shared sound-memory size. Exact reference-file paths and hashes are in `project/analysis/ts05-audio-transfer-audit.json`. No PCSX2 code was linked into the native game.

With the new test fixture but the old acknowledge-only transfer handler, **7 of 25 cases passed and 18 failed**. All **25 now pass**, including one original EE-to-IOP transfer followed by the runtime sound-memory transfer, readback, zero arguments, physical-size rounding, wrap, core completion isolation, rejected ranges, and recovery after a rejected operation.

The exact final Story run records **{f['sound_memory']['transfers']} successful sound-memory copies totaling {f['sound_memory']['physical_bytes_sum']:,} physical bytes**. Its stopped 2-MiB sound-memory dump contains **{f['sound_memory']['spu_nonzero_bytes']:,} nonzero bytes**; the surviving last source block is compared against the destination rather than treating log activity as data proof. Full numerical results and hashes are in `project/analysis/TS05/ts05-final-story-sound-memory.json`.

**Not implemented or verified here:** a complete SPU2 voice/register/batch mixer, properly clocked block streaming, retail DMA/interrupt timing, a PCM recording, or audible playback. The playback device still fails initialization in this scratch. The inherited block-status polling cursor is not hardware-paced streaming. Populated sound memory is necessary progress, not a finished audio subsystem.

## 4. Actual native runs and current gameplay limits

Every run below uses actual X11 XTEST input and unretouched native-window captures under Xvfb/Mesa. No guest-memory edits, direct calls to menu functions, fabricated UI, changed guest timers or forced objective completions were used. Each starts from a disposable copy of the genuine earlier profile-A card fixture, not a newly created empty card.

| Run | Observed wall seconds | Identity | DMA warnings / original failure counter |
|---|---:|---|---:|
| `ts05-format` | {c['elapsed_seconds']:.2f} | Formatting candidate, before audio-memory repair | {c['dma_warning_count']} / {c['original_numdmafail']} |
| `ts05-story-candidate` | {s['elapsed_seconds']:.2f} | Intermediate Story/audio-memory candidate | {s['dma_warning_count']} / {s['original_numdmafail']} |
| **`ts05-final-story`** | **{f['elapsed_seconds']:.2f}** | **Exact packaged executable** | **{f['dma_warning_count']} / {f['original_numdmafail']}** |
| **`ts05-final-arcade`** | **{a['elapsed_seconds']:.2f}** | **Same exact packaged executable** | **{a['dma_warning_count']} / {a['original_numdmafail']}** |

All four stop at their requested diagnostic deadlines (rc10), with no outer watchdog kill and unchanged executable hashes. The final Story run delivers **{f['delivered_key_edges']} key edges**, and the final Arcade run **{a['delivered_key_edges']}**, all successfully with none undelivered. These durations and counters are **not FPS measurements**.

The final Story run follows normal Sign On → Story → 1935 Tomb/EASY → character selection → original loading. It displays the original Mauser pickup message, explores the outdoor approach using movement/turning/strafe input and fires one shot, reducing ammunition **15 → 14**. Captures at 192, 257, 382 and 847 seconds document the changing view/position; the 897-second capture records ammunition14. The shot is into a wall, **not a demonstrated enemy hit**. The player reached the outside approach, not a completed mission or proven objective sequence.

A new read-only inspector reads original kill/death statistics and the first player's health from complete stopped 32-MiB RAM, keyed to the exact ELF hash. `matchstats` is a 19,152-byte array, not a pointer stored at its beginning; meanings and strides follow original `StatsKillMade`/`StatsAdd`. Four tests cover this helper. It supplements actual captures; it neither runs instructions nor alters game state. Final Story counters show zero player kills/deaths and health1.0. Consequently **player damage, a human-player kill, and general hit/AI correctness remain unproven**. No invincibility or selected-cheat change was used.

The final test-card comparison is recorded per file in `provenance/TS05-native-run-summary.json`. This pass does not repeat every TS04 timed-match/save/reload path; those earlier successful results remain historical evidence, not newly retested claims.

## 5. Clean build, regression checks and reproducibility

A separate fresh **Clang19/Ninja Linux build** completed. Its test run passed **705 checks, zero failures**:

| Group | Passed |
|---|---:|
| Core runtime/recompiler | 465 |
| IOP | 4 |
| GS/cache | 45 |
| Original EE ABI / image-DMA / card scan | 4 + 10 + 1 |
| Original soft-double / normalization / matrix | 24 + 12 + 36 |
| Python helper tests | 17 |
| Exact captured original DMA-chain replays | 2 |
| Three formatted-output routes | 60 |
| Sound-memory transfer routes | 25 |
| **Total** | **705** |

These are component/correctness checks, not a percentage of game completion. The source-only archive omits the stopped DMA RAM fixture and skips its two replay cases, leaving **703 checks available after building**. Negative before-fix comparisons are separate evidence, not counted twice.

The clean-built recompiler reproduces all **2,673 generated files byte-for-byte**: 2,376 original EE bodies plus 294 automatic SDK/library wrappers. Generation retains 78 warnings, with no explicit skips, decode failures or unhandled-instruction errors. Successful generation does not prove every translated path correct. No generated body changed in this pass.

The cumulative **34-file framework patch** applies freshly to the pinned base and reproduces all **295 packaged framework files**. Five framework files changed since TS04. Source hashes recorded during the clean build were rechecked unchanged after the native runs. `logs/TS05/ATTEMPTS.md` explicitly separates stale/interrupted test invocations and the absent derived-config copy attempt from the final successful clean build/regeneration.

## 6. Preservation, identity and next targets

The full checkpoint includes cumulative source, generated code, regression tools/tests, the exact tested native binaries, Ghidra work, original analysis ELF/modules, real native captures, selected stopped EE/IOP/SPU RAM, logs and provenance. The source backup omits host binaries, Ghidra database, runtime captures/RAM and card fixtures. Both exclude full disc/assets, dependency downloads, build intermediates and font files. Independent ZIP CRC/fresh-extraction hashes, modes and extracted-binary tests are reported in the external package-verification JSON **after packaging**, not inferred from this document.

```text
Original ELF: 19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2
PS2Recomp base: 75d729ce40d7eed9649fd4bb05628dee520f3d0c
PCSX2 source reference: 650d7048561756cdbfea60ee65282074a38eefa1
Final native executable: {f['binary_sha256']}
```

Continue correctness work in Linux: actual combat/damage and Story objectives, the still-incomplete audio batch/register/mixer/streaming path, and wider level coverage. Complete collision/AI, multiplayer, retail-card compatibility, full VU/GS/DMA and floating-point edge semantics remain unvalidated. **No FPS or real-time performance claim is made.**

Preserved memory rules: callback stacks `0x00080000..0x00100000`; original DMA storage starts at `0x00100000`, so1–2MiB is not free; high heap `0x01FF5390..0x01FFD390`. No guest timer bypass, forced semaphore wake-up, fabricated GS completion or animation clamp was introduced.
'''
(R/'STATUS.md').write_text(status)
print('Wrote TS05 status and results')
