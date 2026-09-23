# TimeSplitters TS04 — DMA completion, matrix correctness and a complete timed match

**Date:** September 22, 2026  
**Game:** TimeSplitters USA v2.00, `SLUS_200.90`  
**Result:** Native Linux executes the original frontend and Tomb Deathmatch, renders the tested character without the previous stretched fragments, accepts movement/turning/firing, reloads the weapon, completes the original timed match, displays results, saves updated game status, and returns to the original Options screen. **This is not a completed or fully validated PC port.**

## Verified foundation

This continuation starts from the actual TS03 full ZIP:94,087,096 bytes, SHA256 `a75a8337afa7d8eb4832c863265db52d17693db000d7270918f01912dc4dd6cc`. ZIP CRC and all3,622 payload hashes passed before editing. All five original dependency volumes,852 payload files and21 locked repositories were restored/verified, and the original49 game files/data-sector ISO were reconstructed and checked. A fresh TS03 baseline build also passed its559 checks.

There was **no missing checkpoint source in this continuation**. TS03's historical TS01/TS02-recovery provenance is preserved, not rewritten. PCSX2 remains the supplied pinned source reference only: **not built, run, linked, or used to generate screenshots**. The EE program is native ahead-of-time generated code; SDK HLE and IOP/VU support remain in PS2Recomp, with no EE interpreter fallback.

## 1. Root cause of the original DMA timeout warnings

The old runtime chain walker stopped after a fixed **4,096 DMA tags**, submitted the truncated stream, and then reported the channel complete. The game's frame-completion command could be beyond that cutoff.

The unchanged TS03 native baseline produced47 original `DMA did not terminate` messages and its stopped `numdmafail` counter was47. A separate GDB experiment stopped the exact TS03 binary at the **first original lockup-alarm callback**, before the counter increment. Its actual stopped32-MiB EE RAM contains two original frame lists of **4,596 tags each**. Their original final GS SIGNAL is in tag4,594 (zero-based); tag4,595 is END. The old reader never sent those commands.

| Captured list | Start | Old reader next tag at cutoff | Actual END tag |
|---|---|---|---|
|0|`0x00100000`|`0x00110000`|`0x00111F30`|
|1|`0x01EC1F80`|`0x01ED1F80`|`0x01ED3EB0`|

The corrected reader follows the actual chain terminator. It detects a repeated **full control state**, including the two-entry CALL/RET return stack, so legitimate shared sublists remain legal while true cycles fail before partial submission. Host byte/control-state safety budgets now raise errors rather than pretend a truncated list completed. Original GS SIGNAL, semaphore delivery and game timers were not bypassed or manufactured.

Three new core regression cases cover an8,193-tag terminating list, repeated CALL/RET use with different return addresses, and a cyclic list. The long-list and cycle cases fail on the old reader and pass on the correction. A separate native **component replay** feeds both exact captured lists through VIF/VU/GIF/GS. The frozen TS03 reader reaches neither actual SIGNAL nor actual END (expected exit1); the corrected reader reaches both for both lists (exit0).

The final native15-minute run recorded **zero original DMA warnings and `numdmafail=0`**, while tracing1,818 lists longer than4,096 tags, with a maximum of **6,620 tags**. The earlier corrected250- and600-second runs also recorded zero failures. This establishes the observed truncation fault, not complete hardware-accurate DMA scheduling, path arbitration, malformed-address behavior, or every edge condition.

Evidence: `project/analysis/ts04-first-alarm-chains.json`, the stopped RAM fixture, `logs/TS04/chain-before-tests.log`, `clean-tests.log`, `clean-replay-before.log`, and `provenance/TS04-native-run-summary.json`. The structural Python inspector is **not** an instruction executor; component replay is **not** a game run. Historical GDB commands are explicitly labeled and terminate the inferior after capture.

## 2. Original matrix multiply instead of the incompatible HLE

The game-linked `sceVu0MulMatrix` at `0x002D5E98` uses this original instruction-derived equation:

```text
out[col*4 + lane] = sum(a[k*4 + lane] * b[col*4 + k], k=0..3)
```

The inherited replacement applies the factors in the reverse order. The difference is hidden by identity or commuting matrices, so the comparison uses12 noncommuting integer-valued pairs, each with separate output, output-alias-first, and output-alias-second: **36 cases**. The separately generated original implementation agrees with the independent equation in all36; the inherited HLE disagrees in all36. Output guards and original ABI/return behavior are checked.

The production fix adds `sceVu0MulMatrix` to `general.recompile` and regenerates the game, retaining its **original implementation** rather than hand-editing game bodies or globally changing unrelated VU helper behavior. Only three generated files change: the routine, registration and stub declarations. A static scan finds195 original direct call sites below the SDK code range; that is not a claim that all195 were exercised. The other directly used VU helper call sites are recorded in the same audit.

The packaged native binary passes36 original matrix/alias checks. Its real character-selection capture shows an intact animated model instead of the preceding distorted fragments, and the subsequent Tomb captures show intact tested opponents. Full model, lighting, animation, rasterization or numerical correctness is not claimed. The existing TS03 SQRT.S register-selection correction remains intact; it is not a complete PS2 floating-point implementation.

Evidence: `project/analysis/ts04-vu0-sdk-call-sites.json`, `provenance/ts04-matrix-regeneration-changes.json`, `logs/TS04/clean-matrix-reference.log`, the original/reference test sources, and `ts04-final-match-122.png`. The diagnostic-only frozen baseline and isolated reference sources are never linked into the actual game.

## 3. Exact native gameplay evidence

Primary runs use real X11 XTEST events and unretouched native-window captures under Xvfb/Mesa. They do not write guest state, call menus directly, fabricate UI, change guest timing, or use PCSX2. The final run uses a **copy of the genuine TS03 profile-A card fixture**; it is not a new empty-card creation test this turn.

| Run | Requested / observed wall seconds | DMA warnings / original failure counter | Result |
|---|---|---|---|
|`ts04-baseline` (unchanged TS03)|180 /180.53|47 /47|Original truncation reproduced|
|`ts04-chain-fix` (reader-only candidate)|250 /250.32|0 /0|Tomb, movement, turning, firing, Scores and resume|
|`ts04-timed-match` (before matrix correction)|600 /600.32|0 /0|Original countdown, timed-match completion and bot scores|
|**`ts04-final-match` (exact packaged binary)**|**900 /900.33**|**0 /0**|Corrected tested character, Tomb controls and reload, full timed-match results, updated Game Status save and return to Options|

All four complete runs stopped at their requested diagnostic deadlines (rc10), with no outer watchdog kill and unchanged executable hashes. The final run delivered112 key edges successfully with none left undelivered. These are input/counter measurements, not performance or frame-rate claims.

The final run sets Time limit to1 using the original menu; its unit string displays `(null)`, an unresolved text-formatting defect. At approximately607 seconds the original countdown shows2; by622 seconds the original results screen is visible without an input forcing match completion. The visible results record a bot score of1 and profileA at0. Opponent animation/firing and the player's ammunition consumption/reload are visible, but **a player kill and general damage/hit correctness are not established**.

Normal input then navigates the results, exits the match, accepts the original update-save prompt, displays **Save completed**, and returns to Options. The47,000-byte save changes from SHA256 `01a31d22aeba9605be19f78de6f8eeb389a72d32a024a2e6ac92a3c3bd9d7b6d` to `480a029b288d2f3213595b29eacab0836a9cc77c0fcb2eb0b4eb8809a7bf7a16`; both icon files are unchanged. Card changes are confined to disposable test copies. Never replace a personal card with these evidence fixtures.

Useful final captures: `ts04-final-match-122.png` (character selection), `-187.png` (Tomb), `-482.png` (opponent firing), `-607.png` (countdown), `-622.png` (match results), `-812.png` (save confirmation), and `-892.png` (Options). Intermediate warnings, failed debugger attempts and prior-candidate captures are labeled separately rather than presented as final-binary proof.

A **fresh100-second process** using the exact same packaged executable then read the changed47,000-byte profile, reached **Select Game Type**, and left all three card files byte-identical. It stopped at its requested deadline after **100.29 seconds** (rc10, no outer kill), with0 DMA warnings,0 original failures, and all10 key edges delivered. Evidence: `ts04-final-reload-*` and `provenance/TS04-postmatch-reload-verification.json`.

## 4. Build, tests and reproducibility

A separate fresh Linux Clang19/Ninja `build-clean` completed all372 default build steps. The clean test script passed **613 checks**:

| Group | Passed |
|---|---:|
|Core runtime/recompiler|462|
|IOP|4|
|GS/cache|45|
|Original EE ABI|4|
|Original image descriptor/DMA|10|
|Original card-state scan|1|
|Original soft-double / vector normalization|24 +12|
|Original matrix multiplication and aliases|36|
|Python input-contract / stopped-capture helpers|8 +5|
|Exact captured original DMA chains|2|
|**Total**|**613**|

The isolated matrix comparison's36 cases are additional before/after evidence, **not counted a second time in613**. The source-only archive omits the RAM fixture and explicitly skips its two captured replays, leaving611 checks after build.

The clean-built recompiler reproduced all **2,673 generated files byte-for-byte**:2,376 original EE bodies plus294 automatic SDK/library wrappers, with78 warnings and no explicit skips, decode failures or unhandled-instruction errors. Warnings include promoted AOT indirect entries, not an EE interpreter fallback. Successful generation/tests do not prove every path correct.

The cumulative29-file framework patch applied freshly to the immutable base reproduces all295 packaged framework files. Two framework files changed since TS03. Generation/patch/native identities and exact source changes are preserved under `provenance/TS04-*`. Production code was not changed while the final executable was running.

## 5. Tooling and remaining limitations

The native stop report now reads the actual DMA register map without inserting entries or calling the inherited side-effectful CHCR read. It also captures the original failure counter after EE work stops. The finite input prober records append-only supervised input requests and actual dispatch edges; eight helper tests cover validation. Five tests cover the structural RAM inspector. These tools do not autonomously alter game state.

**Audio is not fixed:** the playback device fails initialization in this scratch environment, so voice-transfer activity is not audible-output proof. Some formatted messages show `(null)`. Player damage/kill correctness, comprehensive collision and AI, other levels/story, multiplayer, retail-card/save-format compatibility, full VU/GS/DMA semantics and release performance remain unvalidated. The software-rendered diagnostic run is not an optimized release or a claim of real-time speed.

The next work remains in Linux: diagnose text/variadic formatting and combat/hit behavior, expand level coverage, and validate a real audio output path. Existing game behavior must not be bypassed to manufacture progression. Callback stacks remain `0x00080000..0x00100000`; original DMA storage at `0x00100000` makes1–2MiB unavailable; high heap remains `0x01FF5390..0x01FFD390`.

## Identities and preservation

```text
Original ELF:
19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2
PS2Recomp base:
75d729ce40d7eed9649fd4bb05628dee520f3d0c
PCSX2 source reference:
650d7048561756cdbfea60ee65282074a38eefa1
Exact final native executable:
96e749c4f37f0a51c285161b0b56a444b5d20651081842e42b465e19dcfd9d17
Matching clean-built recompiler:
f15b6a78917b46ff2b8997a2bae1719d1b8bda19a09f583571567c5ce34629b3
```

Full and source-only archives exclude full disc/assets, dependency downloads, build intermediates and font files. The source-only backup retains original analysis ELF/module inputs but no native host executables, Ghidra database, runtime captures/RAM or card fixtures. Both archives have separate payload manifests. External package verification records actual ZIP CRC, unique entries, fresh-extraction hashes, file-mode checks and tests after packaging; this document is not a substitute for those checks.
