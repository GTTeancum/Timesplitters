# TimeSplitters PS2Recomp — Canonical Chat Handoff

**Last updated:** 2026-09-24 — GitHub transport retry / scratch recycle recovery

## Permanent mandate

Update this file at the end of every development turn. A replacement chat must be able to resume from this file alone. Record exact scratch paths, Git state, verified build/runtime evidence, source changes, blockers, and next steps. Never fabricate save success, GS completion, semaphore wakeups, gameplay, damage, kills, objectives, or mission completion.

## Project identity

- Game: TimeSplitters PS2 USA v2.00 (`SLUS_200.90`)
- Native PC port via PS2Recomp; do **not** replace with PCSX2 emulation.
- Original ELF SHA256: `19f3adca55a338d75ec7acbf56a808ec1a3e62eb567971867a7d38e1e39938c2`
- Public GitHub repo: `GTTeancum/Timesplitters`

## Current scratch state after recycle

Active restored worktree:

`/mnt/data/Timesplitters-worktree`

Recovery source:

`/mnt/data/Timesplitters.7z.001` through `.012`

Current restored Git HEAD:

`d125342c104cfa5f1802abc3790252b20481ef10` — `Fix single-controller pad slot detection`

The restored archive contains older dirty changes:

- `project/game/main.cpp`
- `source/PS2Recomp/ps2xRuntime/src/lib/Kernel/Stubs/MemoryCard.cpp`
- `source/PS2Recomp/ps2xRuntime/src/lib/Kernel/Stubs/MemoryCard.h`
- `source/PS2Recomp/ps2xRuntime/src/lib/Kernel/Stubs/Pad.cpp`
- `scripts/pad/windows-story-signon-end.pad`
- this handoff file

Many tracked `logs/...` files show as deleted because the handoff archive omitted them. Those are packaging omissions and must **not** be committed as intentional deletions.

### Critical recycle caveat

The latest uncommitted source work from later turns is **not currently present in this fresh restored worktree**. Do not push this restored tree as the project’s latest state yet.

The latest changes that must be reconstructed from this handoff/conversation before publishing include at least:

- `wait_u8` read-count pad-script gating + focused regression test;
- `signon_update_state` (`0x003aff4b`) and `mcseq_result` (`0x003afff8`) diagnostics;
- one-shot `[TS:signon-save-proof]` marker for observed `state 4 -> result 1 -> state 8`;
- state-gated route `scripts/pad/windows-story-newplayer-save-gated.pad`;
- title FX readiness gate using `wait_u32 0x003ae794 >= 0x40133333`;
- direct memory-card Seek/Write/Close logs plus `[MC:write-txn]` summary;
- keyboard `IJKL` right-stick aiming support in `Pad.cpp`;
- env-gated `TS_TRACE_COMBAT` instrumentation around original `propDamage`, `enemyInformHit`, `enemyDie`, and `StatsKillMade`;
- prop type/extref fields added to the combat trace.

## Latest verified native runtime progress before recycle

These are verified observations from prior scratch instances in this conversation.

### Save/create flow

Original New Player save/create path was proven natively on Linux/Xvfb from an empty card root.

Expected/observed main file:

`/BASLUS-20090-TS1-OPT/BASLUS-20090-TS1-OPT`

Original contract:

- create/write open flags: `0x202` (`WRONLY | CREAT`)
- offset: `0`
- requested write size: `0xB798` = **47,000 bytes**

Verified higher-level success sequence:

`signon_update_state 4 -> mcseq_result 1 -> signon_update_state 8`

The game displayed its own **Save completed.** dialog and created:

- main file: 47,000 bytes
- `icon.sys`: 964 bytes
- `tssave.ico`: 65,720 bytes

### Story frontend / level load

The route progressed through:

New Player -> Save completed -> Select Game Type -> Story -> 1935 Tomb -> EASY -> Captain Ash -> Start Game -> LOADING

After loading, runtime diagnostics repeatedly reported:

- `local_players=1`
- `active_characters=66`
- valid player pointer
- `prop_valid=1`
- `health=1`
- `numdmafail=0`

This is verified real loaded Story gameplay state.

### Rendered gameplay / controls

A first-person 1935 Tomb framebuffer was captured showing:

- tomb world geometry
- Mauser pistol
- HUD
- ammo `15 | 30`
- `Got the Mauser Pistol` message

Verified basic controls:

- holding `W` visibly moved the player forward;
- one fire input (`E` -> R1) reduced ammo from `15 | 30` to `14 | 30`.

Do **not** yet claim full movement/camera parity, hit registration, enemy damage, kills, player damage/death, objectives, or mission completion.

## Latest combat-validation boundary before recycle

`TS_TRACE_COMBAT=1` instrumentation was added around original damage/kill calls.

A controlled negative shot during gameplay produced original `propDamage`:

`caller=0x28ac80 target=0xb59a60 amount=0.3 health_before=1 health_after=1`

That was deliberately **not** counted as enemy damage because no health reduction occurred and no visible enemy was confirmed under the crosshair.

The latest source also added prop type/extref to the `propDamage` trace and implemented documented `IJKL` keyboard right-stick aiming so the next run can acquire a visible enemy.

### Next gameplay milestone

Reconstruct the latest source changes listed above, rebuild, rerun the automated Story route, use `IJKL`/WASD to place a **visible enemy** under the crosshair, then require:

1. pre-shot framebuffer with enemy visibly targeted;
2. one controlled shot;
3. `propDamage` on the target with a real `health_before -> health_after` decrease;
4. `enemyInformHit` if present.

Do not claim enemy death/kill until `enemyDie` / kill-state evidence is captured separately.

## Build/test baseline before latest recycle

With the latest instrumentation in the prior scratch instance:

- Clang 19 native build passed.
- Core PS2Recomp tests: **477/477 passed**.
- `git diff --check` passed.

The current fresh restored tree has **not** yet had all later changes reapplied/rebuilt.

## GitHub status / transport diagnosis

### GitHub connector

The GitHub connector is live and can read/write `GTTeancum/Timesplitters`.

Remote `main` currently points to:

`3fd582e5c663549d2eab51aed3868974ca3cdf26`

That remote history is the earlier helper-workflow history, **not the full current local project state**.

### Normal shell Git transport

Retried on 2026-09-24 from the fresh scratch container:

```bash
git ls-remote https://github.com/GTTeancum/Timesplitters.git
```

Result:

```text
fatal: unable to access 'https://github.com/GTTeancum/Timesplitters.git/':
Could not resolve host: github.com
```

So normal `git push` from this chat’s shell is still blocked by container DNS/networking before authentication.

### New workaround discovered

The connected GitHub API **does expose Git-data write operations** in this chat:

- create blob
- create tree
- create commit
- update ref

Therefore a connector-based API publish is possible even though shell `git push` is not.

**Do not perform that publish from the currently restored archive snapshot**, because it lacks the latest uncommitted gameplay/combat changes. First reconstruct the latest source state, rebuild/tests, then publish that reconstructed state through GitHub Git-data APIs if shell Git remains unavailable.

## Immediate next step

1. Reconstruct the latest post-archive source changes listed above into `/mnt/data/Timesplitters-worktree`.
2. Restore/rebuild the Clang 19 environment and rerun the 477-test suite.
3. Commit the reconstructed latest state locally.
4. Try normal `git push` once more; if DNS is still blocked, publish the same commit/tree to `GTTeancum/Timesplitters` using connector Git-data APIs (`create_blob` / `create_tree` / `create_commit` / `update_ref`).
5. Resume visible-enemy hit/damage validation.

---

## 2026-09-24 Git shell push connectivity test

The user asked for one real Git push attempt from the ChatGPT scratch environment.

A disposable one-file commit was created locally and an actual HTTPS push was attempted to a temporary remote branch:

```text
git push origin HEAD:refs/heads/chatgpt-push-test
```

The push failed **before authentication** with:

```text
fatal: unable to access 'https://github.com/GTTeancum/Timesplitters.git/': Could not resolve host: github.com
```

Exit code: `128`.

Therefore the normal shell Git transport in this specific scratch container still has no working DNS path to GitHub. This does **not** indicate a GitHub credential/permission failure; the request never reached GitHub.

The temporary test commit and `.chatgpt-push-test.txt` were immediately removed locally afterward, preserving the pre-existing TimeSplitters worktree state. No remote branch was created by the failed shell push.

The connected GitHub connector remains available and exposes Git-data APIs (`create_blob`, `create_tree`, `create_commit`, `update_ref`) that can be used separately if a connector-based publication path is desired later.

---

## 2026-09-25 small-turn update — visible enemy acquired; centered shots still miss

This turn resumed the long-cap native Linux/Xvfb combat run with the latest `TS_TRACE_COMBAT=1` instrumentation and the working IJKL right-stick keyboard controls.

### Preserved evidence

Runtime log:

`/mnt/data/ts-combat3-runtime.log`

Key screenshots:

- `/mnt/data/ts-combat3-resume.png` — visible nearby enemy acquired at close range
- `/mnt/data/ts-combat3-kadjust.png` — enemy visually near viewport center after a small vertical correction
- `/mnt/data/ts-combat3-hitprobe.png` — post-shot frame from the close centered probe

The process remained stable through the test and was **intentionally terminated by the assistant** before the 900-second cap. No crash occurred.

### Runtime state remained healthy

Late watcher snapshots continued to report:

```text
local_players=1
active_characters=66
prop_valid=1
health=1
numdmafail=0
```

### Visible enemy acquisition — verified

Using the now-working `J/L` horizontal and `I/K` vertical right-stick controls plus WASD traversal, the player navigated from the 1935 Tomb start courtyard up the ramp to the upper walkway. A humanoid enemy became clearly visible below/forward on the lower corridor.

The enemy was brought close to the apparent viewport center before firing. This is direct visual target-acquisition evidence.

### Controlled shots still did not produce a confirmed enemy hit

Several **single** shots were tested one at a time while the enemy was visibly close to the apparent aim center.

For the close probe captured in `ts-combat3-resume.png`, the combat-event count before/after firing did **not** increase. A later tiny vertical correction likewise produced no new damage event for the visible enemy.

Therefore these are correctly classified as **misses**, even though the enemy appears nearly centered in the framebuffer. Do not claim hit registration or enemy damage from these shots.

The preserved runtime log contains five `propDamage` events total, but all observed events are the previously-known scenery-like targets:

```text
type=0x2
extref=0x0
health_before=1
health_after=1
```

No observed event this turn showed `health_before > health_after`, no `enemyInformHit`/`enemyDie`/`StatsKillMade` event established an enemy hit/kill, and no enemy-damage claim is warranted.

### Important conclusion

The remaining ambiguity is no longer basic movement or camera control. A visible humanoid can be acquired and visually centered, but the original hitscan ray still does not register that entity from the tested view.

Do **not** continue brute-forcing aim offsets by eye. The next useful diagnostic is deterministic collision/roster instrumentation.

### Static findings for the next diagnostic

Gameplay character bookkeeping is available from original symbols/code:

- `lvnumplayers` guest global: `0x003ae764`
- `numactivechars` guest global: `0x003afd8c`
- `chrinfo` guest pointer global: `0x003afa28`
- character record stride: `0x1210` / 4624 bytes
- each character record's prop pointer: record `+0x18`
- active iteration count uses `lvnumplayers + numactivechars`

This is sufficient to implement a one-shot active-character roster dump containing per-record prop pointers/type/health and then identify likely enemy props directly.

The original bullet path calls `bulletStraightLineTest_0x289d30` from `bulletTick` at call site `0x28aac4`. Its returned `$v0` is copied into `$s0` and immediately tested for zero at `0x28aae0`, so tracing that function's arguments/return and the associated collision object/result is the correct next step for explaining why the visually centered enemy is missed.

### Exact next small step

Add env-gated combat diagnostics for:

1. `bulletStraightLineTest_0x289d30` call arguments and return `$v0` for player-fired rounds;
2. one-shot active-character roster dump using `chrinfo`, the `0x1210` stride, and prop `+0x18`;
3. target prop type/extref/health for each candidate enemy.

Then rerun the same deterministic Tomb route and use the line-test/roster data to aim at a known enemy prop. The next required milestone remains:

**visible targeted enemy + one shot + `propDamage` on that enemy + `health_before > health_after`**.

---

## 2026-09-25 small-turn update — deterministic hitscan result + active-character roster instrumentation

The scratch container recycled before this turn. The repository was restored from the original 12-part archive, and the combat-test harness pieces needed for the next probe were reapplied from this canonical handoff:

- `wait_u8` read-count script gate + regression test;
- fully automated New Player -> Story -> 1935 Tomb / EASY -> Captain Ash route;
- keyboard `IJKL` right-stick aiming in the Kernel Pad backend;
- combat tracing in `ps2_runtime.cpp`.

Important source-state note: this fresh restored tree currently contains the combat-related pieces above plus the archive's original memory-card diagnostics. Some later diagnostic-only helpers from earlier recycled scratch instances (for example the one-shot sign-on save marker and aggregate memory-card write-summary line) are preserved in this handoff but have **not** all been reapplied to this fresh worktree. Their runtime findings remain valid historical evidence; do not assume those exact helper lines are present in the current source unless rechecked.

### Static bullet-result semantics are now confirmed

The original generated `bulletTick_0x28a8e8` calls:

`bulletStraightLineTest_0x289d30`

at primary call site:

`0x28aac4`

and copies returned `$v0` directly into `$s0`.

The original code then:

1. checks `$s0 == 0` for no line-test target;
2. reads `$s0 + 0x8` as the returned prop's type field;
3. later passes the same `$s0` directly as `a0` into `propDamage_0x271998` at call site `0x28ac80`.

Therefore `bulletStraightLineTest` return `$v0` is the **actual hit prop pointer**, or zero for no prop hit. This removes the ambiguity that remained after visually centered shots failed to produce `propDamage`.

A second line-test call also exists later in `bulletTick` at `0x28adfc`; the trace records the caller PC so primary/secondary tests stay distinguishable.

### New `TS_TRACE_COMBAT=1` hitscan trace

`source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` now traces every call to guest `0x289d30` while combat tracing is enabled.

For each call it captures the original input registers before execution:

- `a0`
- `a1`
- `a2`
- `a3`
- `t0`
- caller/source PC

and after the original function returns it logs:

```text
[TS:hitscan] caller=0x... ... result_prop=0x... type=0x... extref=0x... health=... roster_match=<0/1> [roster_index=N kind=player|npc]
```

If `result_prop == 0`, the original line test found no prop target. If nonzero, the trace reads the returned prop's original:

- type at `prop+0x8`;
- extref at `prop+0x160`;
- health at `prop+0x208`;
- active-character roster membership.

This trace is observation-only; it does not change line-test or damage behavior.

### One-shot active-character roster dump

The first primary player-shot line test (`sourcePc == 0x28aac4`) also dumps the active character roster exactly once per process.

Original globals/record layout used:

- `lvnumplayers`: guest `0x003ae764`;
- `numactivechars`: guest `0x003afd8c`;
- `chrinfo` pointer global: guest `0x003afa28`;
- character record stride: `0x1210` bytes;
- character-record prop pointer: `record+0x18`.

Iteration count is:

`lvnumplayers + numactivechars`

For each record the diagnostic logs:

```text
[TS:combat-roster] index=N kind=player|npc chr=0x... prop=0x... type=0x... extref=0x... health=...
```

Indices `< lvnumplayers` are labeled `player`; later active entries are labeled `npc`.

This lets a returned hitscan prop be matched directly to a real active character record rather than relying on framebuffer alignment alone.

### Existing damage trace retained/reapplied

The current trace also observes original:

- `propDamage_0x271998` including damage amount, health before/after, and roster membership;
- `enemyInformHit_0x2c7000`;
- `enemyDie_0x2c6dc8`;
- `StatsKillMade_0x220bc8`.

The next required enemy-hit proof remains strict:

1. visible enemy target;
2. `TS:hitscan` returns a nonzero prop that matches an `npc` roster entry;
3. the same target reaches `propDamage`;
4. `health_before > health_after`.

No enemy-damage claim should be made from a nonzero hitscan alone.

### Build/test evidence this turn

The exact Debian 13 / Clang 19 package cache and 14-repository pinned dependency snapshot were restored again from the saved GitHub Actions artifacts.

A clean native build completed successfully, including the new `ps2_runtime.cpp`, right-stick keyboard mapping, `wait_u8` parser/test, and generated TimeSplitters sources.

Verification rebuild:

```text
[0/2] Re-checking globbed directories...
ninja: no work to do.
```

Core tests from the required working directory:

```text
Total Tests: 477
Passed: 477
Failed: 0
```

The new `wait_u8` regression passed, as did existing `wait_u32` tests.

`git diff --check` passed for all combat/harness changes.

### Exact next small step

Run the automated native Story route with `TS_TRACE_COMBAT=1` and a fresh memory-card root.

Once gameplay loads:

1. navigate to the previously identified visible humanoid encounter;
2. fire **one** controlled shot;
3. inspect `[TS:hitscan]` first;
4. if `result_prop=0`, adjust aim based on the actual ray result, not screen-center guessing;
5. if `result_prop` matches an NPC roster entry, inspect the corresponding `propDamage` health transition;
6. only call it an enemy hit if the NPC prop's health actually decreases.

The next milestone remains: **NPC-roster hitscan target + measured enemy health decrease**.

---

## 2026-09-25 small-turn update — corrected chrinfo prop offset runtime-validated

This section **supersedes the earlier roster-layout note that incorrectly identified `chr record + 0x18` as the prop pointer**.

### Correct original character-record layout

Static original-code evidence from `chrNew_0x287cc0` proves:

- `chrinfo` global pointer: guest `0x003afa28`
- `lvnumplayers`: guest `0x003ae764`
- `numactivechars`: guest `0x003afd8c`
- character record stride: `0x1210`
- **character prop pointer: `record + 0xBCC`**
- `record + 0x18` is a small character state field, not a pointer

`chrNew` stores the newly-created prop pointer at `record+0xBCC` and cross-links the prop back to the character at `prop+0x160`. `enemyCreateNPC`, `playerTick`, `enemyTick`, and other original routines repeatedly dereference the same `+0xBCC` field.

The combat roster / hitscan matcher in `ps2_runtime.cpp` has been corrected to use `record+0xBCC`; `record+0x18` is retained only as logged `chr_state`.

### Fresh native runtime validation

A fresh fully-automated native Story run was launched with:

- `TS_TRACE_COMBAT=1`
- isolated card root `/mnt/data/ts-mc-hitscan2`
- display `:103`
- the state-gated Story route

The world loaded normally and repeatedly reported:

```text
local_players=1
active_characters=66
player=0x1718970
prop=0xb69670
prop_valid=1
health=1
```

A single controlled fire input was then sent from the untouched starting view.

The corrected first-shot roster dump began:

```text
[TS:combat-roster] players=1 active=66 chrinfo=0xb8be80 count=67
[TS:combat-roster] index=0 kind=player chr=0xb8be80 chr_state=0x1 prop=0xb69670 type=0x8 extref=0xb8be80 health=1
[TS:combat-roster] index=1 kind=npc chr=0xb8d090 chr_state=0x5 prop=0xb70320 type=0x8 extref=0xb8d090 health=1
[TS:combat-roster] index=2 kind=npc chr=0xb8e2a0 chr_state=0x5 prop=0xb70570 type=0x8 extref=0xb8e2a0 health=1
...
```

This is decisive validation of the corrected layout:

- roster index 0 resolves to **exactly the independently-known player prop `0xb69670`**;
- the player prop's `extref` points back to the player chr record `0xb8be80`;
- NPC records resolve to real type-`0x8` props with matching chr back-references;
- total roster count is 67 = 1 player + 66 active NPC characters.

### Starting-view hitscan result

The single trigger generated four primary `bulletStraightLineTest` calls from caller `0x28aac4` (consistent with the weapon's multi-ray/spread behavior). Every one returned:

```text
result_prop=0x0
roster_match=0
```

No `propDamage` event followed.

Therefore the untouched starting-view shot is now **deterministically proven to be a real miss**, not a tracing/matching failure and not hidden enemy damage.

Preserved evidence:

- runtime log: `/mnt/data/ts-hitscan2-runtime.log`
- framebuffer after the diagnostic shot: `/mnt/data/ts-hitscan2-startshot.png`

The probe process/Xvfb were intentionally terminated after evidence capture; no crash occurred.

### Fresh regression verification after the `+0xBCC` correction

Core suite rerun from the required working directory:

```text
Total Tests: 477
Passed: 477
Failed: 0
```

So the corrected roster instrumentation remains compile/test-clean.

### Exact next small step

Do **not** return to screen-center guessing alone.

Enhance the one-shot roster dump with each active character's actual world position / distance from the player using the original prop/character position fields, then select the nearest live NPC deterministically. Use that target information to drive camera/movement toward a known NPC prop.

The next hit milestone remains strict:

1. `[TS:hitscan] result_prop` matches an `npc` roster prop;
2. the same prop reaches `propDamage`;
3. `health_before > health_after`.

Only then call enemy hit registration/damage verified.

---

## Persistent Library storage — 2026-09-25

The original TimeSplitters project/game archive has been copied into the user's persistent ChatGPT Library so future scratch-container expiry should not require re-uploading the 12 archive parts.

Persistent Library folder:

`/TimeSplitters-PS2Recomp`

Persistent files:

- `/TimeSplitters-PS2Recomp/Timesplitters.7z.001`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.002`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.003`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.004`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.005`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.006`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.007`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.008`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.009`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.010`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.011`
- `/TimeSplitters-PS2Recomp/Timesplitters.7z.012`
- `/TimeSplitters-PS2Recomp/TimeSplitters-PS2Recomp-CANONICAL-HANDOFF.md`

New-chat recovery rule: prefer restoring the archive from this persistent Library folder instead of asking the user to re-upload game/project assets. Scratch `/mnt/data/...` paths remain ephemeral and may disappear between containers.

---

## 2026-09-25 CRASH-HUNT PRIORITY OVERRIDE — pause/resume verified

The user explicitly re-centered the project away from combat correctness tuning. **Primary mandate from this point forward is crash/progression hunting:** drive the native game through places where execution, state transitions, loading, scripting, audio, menus, death/restart, mission progression, and level transitions could stop working. Do not spend project time proving NPC damage/hit correctness unless it becomes necessary to progress a mission or diagnose a crash/hang.

### Crash-hunt harness reconstructed

The scratch container recycled, so the repository was restored from the persistent 12-part archive and the minimum proven crash-hunt harness was reapplied:

- `wait_u8` read-count pad-script gate + regression test;
- `scripts/pad/windows-story-crashhunt.pad`, which automates:
  - title FX completion;
  - New Player setup;
  - original memory-card save flow;
  - Story selection;
  - 1935 Tomb / EASY;
  - Captain Ash;
  - Start Game;
  - neutral hold in gameplay.

The exact Debian 13 / Clang 19 + pinned dependency environment was restored from the saved artifacts.

Fresh clean build completed successfully. Core regression suite:

- Total Tests: **477**
- Passed: **477**
- Failed: **0**

### Native 1935 Tomb crash-hunt run

Fresh isolated card root:

`/mnt/data/ts-mc-pause1`

Preserved runtime log:

`/mnt/data/ts-crashhunt-pause-resume.log`

The automated route again reached real Story gameplay. Stable original-state snapshots reported:

```text
local_players=1
active_characters=66
player=0x1718970
prop=0xb69670
prop_valid=1
health=1
numdmafail=0
```

### Pause transition — verified

While 1935 Tomb gameplay was live, one Start/Enter pulse was sent through the normal pad path.

Pre-pause framebuffer:

`/mnt/data/ts-crashhunt-prepause.png`

Pause framebuffer:

`/mnt/data/ts-crashhunt-paused.png`

The pause frame visibly shows the game's original Story mission briefing overlay:

```text
STORY
Mission briefing
Find the Cultist's ankh
and return it to the shrine.
Your time so far: 0:01.6
```

The native process remained alive/responsive while paused. This is direct evidence that the gameplay -> pause/menu transition does not crash or hang at the tested point.

### Resume transition — verified

A second Start/Enter pulse resumed the same native process.

Post-resume framebuffer:

`/mnt/data/ts-crashhunt-resumed.png`

The game returned to first-person 1935 Tomb with the Mauser/HUD rendered. Runtime tick output continued increasing after resume, and later state snapshots still reported:

```text
active_characters=66
prop_valid=1
health=1
numdmafail=0
```

The process did not crash or deadlock. It was intentionally terminated after the resume evidence was collected.

Therefore **pause -> resume is verified stable** at the 1935 Tomb starting gameplay state.

### Crash-hunt roadmap from here

Do not return to hit/damage tuning. Continue exercising higher-risk progression/state boundaries in roughly this order:

1. **Pause/menu actions beyond resume** — restart/quit/return paths if safely testable.
2. **Sustained level traversal** through doors, triggers, AI spawns, scripted events, pickups, streaming/audio loads.
3. **Player death / mission failure / restart** when reachable; validate that the game transitions and reloads instead of hanging.
4. **Mission objective progression and mission completion** only as a progression/crash check, not gameplay-balance tuning.
5. **Next-level transition/load** after 1935 Tomb if reachable.
6. Repeat on additional Story/Arcade levels until a real crash/hang/non-progressing state is found.

When a failure appears, stop advancing and instrument only that boundary. Continue distinguishing harness-duration expiry from real crashes/hangs.

---

## 2026-09-25 performance baseline note

The native host presentation loop calls `SetTargetFPS(60)` and performs one `UploadFrame`/draw/present cycle per host loop iteration.

Using preserved 1935 Tomb crash-hunt logs, the aggressive `[run:tick]` loop counter and nearby elapsed timestamps place the observed host loop rate at approximately **57.6–58.6 iterations/sec**, i.e. roughly **58 FPS** in the assistant's Linux/Xvfb/software-rendered environment.

This is only a coarse baseline, not a formal benchmark:

- environment: Linux in ChatGPT scratch/container, Xvfb, software rendering;
- target: 60 FPS;
- observed: about 58 FPS during stable loaded 1935 Tomb gameplay;
- do not extrapolate this directly to the user's Windows/XInput/GPU setup.

If performance work becomes a focus later, add an explicit `GetFPS()`/frame-time logger and capture 1% lows/frametimes rather than relying on the coarse tick counter.

---

## 2026-09-25 performance logger + Windows cross-build

### Host FPS / frame-time logger

Added an opt-in host presentation-performance logger in:

`source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`

Enable with:

```text
TS_PERF_LOG_INTERVAL=<seconds>
```

Accepted interval: `0.5 .. 300` seconds.

The logger measures wall-clock frame-to-frame time between completed host presentation iterations after `EndDrawing()`. It therefore measures the **host presentation cadence**, including the 60-FPS limiter and renderer stalls. It is not EE instruction throughput and does not modify guest timing/state.

Each reporting window plus the final summary emits:

- `avg_fps`
- `avg_ms`
- `one_pct_low_fps`
- `one_pct_ms`
- `worst_ms`

The reported 1% low is defined as:

`1000 / mean(worst 1% frame times)`

Documentation added to `README-LINUX.md`.

#### Linux/Xvfb baseline captured

A native automated 1935 Tomb run used:

```text
TS_PERF_LOG_INTERVAL=10
```

World-loaded gameplay was identified only after original-state diagnostics showed `active_characters=66` and `prop_valid=1`; menu/loading windows before that were excluded from the gameplay baseline.

Across eight ~10-second loaded-gameplay windows (~130s through ~210s of that run), the weighted host presentation average was approximately:

- **58.34 FPS**
- **17.14 ms average frame time**

Per-window 1% low values ranged roughly **10.2 to 54.3 FPS**. This large range reflects intermittent stalls in the Linux/Xvfb/software-renderer container and is intentionally **not** presented as a Windows or user-machine performance prediction.

All-run result (menus/loading/gameplay mixed) was approximately `57.94 FPS`, `17.26 ms`, with a much lower 1% low because loading/transitions were included.

Preserved gameplay performance log:

`/mnt/data/ts-perf-gameplay-2026-09-25.log`

Linux source remained regression-clean after the logger:

- core tests: **477/477 passed**
- latest no-op/native verification build: exit 0

### Windows cross-build capability — verified compile/link

The project can now be cross-compiled in this Linux scratch environment into a native x86-64 Windows PE using MinGW-w64. This answers the question of whether ChatGPT can build Windows even though this container cannot execute/test Windows: **yes, compile/link is possible here; runtime validation still requires Windows.**

New source/build helpers:

- `scripts/mingw-x86_64-toolchain.cmake`
- `scripts/build_windows_cross.sh`
- `README-WINDOWS-CROSS.md`

MinGW-specific parity fixes:

- `project/game/CMakeLists.txt`
  - MinGW unity build
  - `-O1 -g1 -msse4.1 -mavx2`
  - 8 MiB PE stack via `-Wl,--stack,8388608`
- `source/PS2Recomp/ps2xRuntime/CMakeLists.txt`
  - MinGW `ps2_runtime` now receives explicit `-msse4.1 -mavx2`; GCC requires these for the existing x64 SSE4.1/AVX2 intrinsics.

First real Windows cross-build configured successfully with the exact offline dependency snapshot and:

```text
PS2X_BUILD_RUNTIME=ON
PS2X_BUILD_RECOMP=OFF
PS2X_BUILD_ANALYZER=OFF
PS2X_BUILD_STUDIO=OFF
PS2X_BUILD_TEST=OFF
PS2X_IOP_BUILD_TESTS=OFF
PS2X_ENABLE_DEBUG_UI=OFF
PS2X_ENABLE_FFMPEG=OFF
```

FFmpeg is intentionally disabled in this **first offline cross-build** because the existing Windows FFmpeg path expects separate MSVC/prebuilt Windows libraries. This does not prevent core executable compile/link but means video playback uses the runtime's non-FFmpeg fallback. Do not treat this package as the final feature-complete Windows distribution.

Produced executable:

`build-windows-cross/timesplitters/timesplitters.exe`

PE inspection:

- type: PE32+ x86-64 Windows console executable
- size: ~152 MiB
- SHA256: `0c0e90bf286a6824811a53781487463f4cf692f2b77070703029f52a71561759`

Runtime imports include normal Windows DLLs plus:

- `XINPUT1_3.dll`
- `libgcc_s_seh-1.dll`
- `libstdc++-6.dll`
- `libwinpthread-1.dll`

The three MinGW runtime DLLs were bundled beside the EXE. `XINPUT1_3.dll` is **not** redistributed in the package; it remains an external Windows import.

Packaged build:

`/mnt/data/TimeSplitters-Windows-MinGW.zip`

ZIP SHA256:

`45253697b6750236aacb98df52788ad654d5a3eb55871a9688ee7b93c2407202`

Package includes:

- `timesplitters.exe`
- `libgcc_s_seh-1.dll`
- `libstdc++-6.dll`
- `libwinpthread-1.dll`
- `README-WINDOWS-CROSS.md`
- `BUILD-INFO.txt`
- `RUN-TIMESPLITTERS.bat`

**Verification boundary:** this Windows binary is compile/link verified only. It has not been executed in this Linux container. Do not claim Windows runtime success until tested on a Windows machine.

A temporary GitHub Actions workflow used only to download the MinGW Debian package cache was removed after the artifact was obtained. Removal commit on remote `main`:

`d1bdf0645322fc133069054fcdb0613f1f2fc791`

### Priority after this work

Return immediately to the user's requested **crash/progression hunt**. Performance logging is now available when needed; do not spend turns tuning FPS or combat correctness unless specifically requested. The next useful runtime work remains major progression/state transitions in real missions (restart/return, death/reload, doors/triggers/scripted events, mission completion/next level).

## 2026-09-25 Windows runtime test: launcher path fix
- User runtime-tested the MinGW Windows build on Windows/AMD Radeon 780M.
- Host initialization succeeded through raylib/GLFW Win32, OpenGL 3.3 core, WASAPI audio, and the 60 FPS host timer.
- First failure was packaging-only: `Failed to open ELF file: SLUS_200.90` because the launcher assumed the original ELF/ISO were beside the executable.
- Correct repo asset locations are:
  - `project\\game-data\\SLUS_200.90`
  - `project\\disc\\TimeSplitters.iso`
- `scripts/windows/RUN-TIMESPLITTERS.bat` now auto-detects either repo layout above or standalone files beside the EXE.
- Corrected package: `/mnt/data/TimeSplitters-Windows-MinGW-fixed.zip`
- Corrected package SHA256: `730c008da5724b17ca0c9043547e60751535af9aca4c1277806ce22118795cc1`
- The game itself was not yet retested after this launcher-only fix at the time of this note.

## 2026-09-25 Windows no-argument auto-boot fix (verified build/smoke)

User Windows test reached Win32 GLFW/OpenGL/WASAPI initialization successfully but then printed `Failed to open ELF file: SLUS_200.90`. The user's recursive directory listing proves the required repo assets are present at `project\\game-data\\SLUS_200.90` and `project\\disc\\TimeSplitters.iso`; the repeated bare path indicated launcher/argument dependence rather than missing game data.

Fix applied in `project/game/main.cpp`:
- `timesplitters.exe` now accepts zero arguments.
- With zero args it searches both current working directory and the EXE directory for ELF candidates:
  - `SLUS_200.90`
  - `project/game-data/SLUS_200.90`
  - `project/analysis/extracted/SLUS_200.90`
- It similarly searches for disc candidates:
  - `TimeSplitters.iso`
  - `project/disc/TimeSplitters.iso`
- Explicit argv paths still override auto-detection.
- Default no-argument runtime cap is 600 seconds.
- It logs resolved paths before runtime init:
  - `[TS:boot] ELF=...`
  - `[TS:boot] disc=...`
- Runtime window title changed from Linux-specific bring-up text to `TimeSplitters — native PC bring-up`.

Verification after change:
- MinGW x86-64 Windows target cross-compiled and linked successfully.
- Linux no-argument Xvfb smoke test from repo root resolved exactly:
  - `/mnt/data/Timesplitters-worktree/project/game-data/SLUS_200.90`
  - `/mnt/data/Timesplitters-worktree/project/disc/TimeSplitters.iso`
  and continued into normal raylib initialization; test intentionally killed by external timeout after successful boot-path proof.
- Linux core suite: 477/477 passed.
- `git diff --check` clean for the change.

New Windows package in scratch:
- `/mnt/data/TimeSplitters-Windows-MinGW-autoboot.zip`
- ZIP SHA256 `3c41c5e4ec2bff7d406f8fa155edf947bea8d9c7247b89e4fa4e8da6c111115d`
- EXE SHA256 `26ae7aed680780308b4ff0ef4b691501e2cfb55165605511adf6bf418b710cd9`
- Still FFmpeg-disabled; Windows runtime beyond the user's prior host-init evidence remains user-tested only.

For the next Windows log, require `[TS:boot] ELF=...project\\game-data\\SLUS_200.90` and `[TS:boot] disc=...project\\disc\\TimeSplitters.iso` before diagnosing anything deeper. If those appear, the path/packaging blocker is closed and crash/progression hunting should continue from the next guest/runtime boundary.

## 2026-09-25 — Windows FPS title + remote keyboard controls

User requested visible FPS in the title bar and keyboard input for remote testing from another PC. Implemented and verified.

### FPS title bar
- `source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp` now updates the native window title every 0.5 seconds with measured host/presentation FPS.
- Format: `<base title> | <fps> FPS`, e.g. `TimeSplitters — native PC bring-up | 58.1 FPS`.
- This is always on and independent of `TS_PERF_LOG_INTERVAL`.
- Direct Linux/Xvfb validation via `xprop` showed:
  - `WM_NAME = "TimeSplitters  native PC bring-up | 58.1 FPS"`
  - `_NET_WM_NAME = "TimeSplitters — native PC bring-up | 58.1 FPS"`
- Interpretation mandate: if Windows title remains near 60 FPS while the game *feels* slow, treat that as evidence to investigate guest/game tick/timing next, not host presentation FPS.

### Keyboard pad fallback
`source/PS2Recomp/ps2xRuntime/src/lib/Kernel/Stubs/Pad.cpp` keyboard mapping:
- WASD = left analog stick / movement
- I/J/K/L = right analog stick / look/aim
- Arrow keys = D-pad
- Z/X/C/V = Square/Cross/Circle/Triangle
- Q/E = L1/R1
- 1/3 = L2/R2
- Enter = Start
- Right Shift = Select
- Left Ctrl / Right Ctrl = L3 / R3
- Gamepad support remains enabled; keyboard is a fallback/merge path, not a controller replacement.

### Verification
- Linux native rebuild: PASS.
- Core suite: **477 total, 477 passed, 0 failed**.
- Linux/Xvfb live title update: PASS (`58.1 FPS` observed in title).
- Windows x86-64 MinGW cross-build: PASS; final `timesplitters.exe` linked successfully.
- Windows PE imports remain expected Windows system DLLs + XINPUT1_3.dll + three bundled MinGW runtime DLLs.

### Windows package
- Scratch ZIP: `/mnt/data/TimeSplitters-Windows-MinGW-fps-keyboard.zip`
- ZIP SHA256: `651d564cec4da87e71bbfa64e2c729a1d1a2fb04721fa310a53f56414002f1d7`
- EXE SHA256: `03660777b140d459123e476ad23021bd2bdcc77e7f7776c89c40f46f50b01cb9`
- Package remains compile/link verified but cannot be runtime-tested as Windows in this Linux scratch.
- FFmpeg remains disabled in this MinGW package; normal rendering/input/audio are present, MPEG/FMV decode is not.

### Priority remains crash/progression hunting
Do **not** return to NPC hit/damage tuning. Use the Windows FPS title primarily to distinguish host presentation slowdown from guest timing problems while continuing to hunt hangs, crashes, stuck transitions, scripted-event failures, death/reload issues, and mission/level progression failures.

---

## 2026-09-25 Windows smooth-slow-motion timing fix — USER ARCADE EVIDENCE + SCHEDULER PATCH

### New user evidence

The user successfully reached a real **Arcade match on Windows**. The native title reported approximately **60 FPS**, but the actual game simulation felt **roughly half-speed or slower**. The user explicitly described it as smooth slow motion rather than choppy rendering.

This is important evidence: host presentation is not the limiting rate. The timing investigation therefore moved from renderer performance to guest/PS2 time advancement.

### Timing constants checked

The obvious frequency constants were inspected before changing anything:

- EE VBlank host period is already `16667 us` (~60 Hz).
- The EE clock constant is `294912000 Hz`.
- Existing PS2 timer source clocks (147456000 / 9216000 / 576000 / 15734 Hz) are internally consistent.
- `sceGsSyncV()` waits on the scheduler's VSync tick rather than imposing an obvious 30-Hz constant.

Therefore the fix **does not** blindly double VBlank frequency or renderer FPS.

### Concrete scheduler defect found

`EeScheduler::processDueDeadlines()` previously required a scheduled host-paced event to satisfy both:

1. its `hostDeadline` had arrived, and
2. `item.deadlineCycle <= m_eeCycle`.

That is unsafe for this AOT runtime because `m_eeCycle` is deliberately approximate/coarse. Generated execution only charges small cycle amounts at safe points / guest dispatch boundaries rather than counting every R5900 instruction. A busy recompiled game can therefore consume substantial real host time while `m_eeCycle` remains millions of cycles behind the scheduled VBlank cycle boundary.

Result: host raylib can continue presenting near 60 FPS while PS2 VBlank/kernel deadlines are withheld until the coarse cycle estimate catches up. This matches the user's observed **smooth slow motion at 60 host FPS**.

### Scheduler fix

Patched:

`source/PS2Recomp/ps2xRuntime/src/lib/Kernel/EeScheduler.cpp`

At the start of `processDueDeadlines()`:

- inspect scheduled deadlines whose wall-clock `hostDeadline <= now`;
- find the greatest cycle boundary for those already-expired host events;
- advance the emulated EE/IOP/timer clocks to that boundary with `accountCycles()`;
- then execute the existing event ordering/dispatch logic normally.

This keeps wall-clock-paced events from being blocked by approximate AOT cycle accounting while still advancing the emulated clocks consistently to the event boundary instead of forcing only VBlank.

### Focused regression test added and passed

Added a focused test target because the restored slim dependency environment intentionally omitted unrelated analyzer/recompiler headers:

- `source/PS2Recomp/ps2xTest/src/timing_main.cpp`
- `ps2_timing_tests` target in `source/PS2Recomp/ps2xTest/CMakeLists.txt`

Added regression in:

`source/PS2Recomp/ps2xTest/src/ps2_runtime_interrupt_tests.cpp`

Test name:

`host-paced VBlank is not blocked by coarse EE cycle accounting`

The test runs a guest function that sleeps for 25 ms of real host time while accruing only the scheduler's tiny coarse AOT cycle charge. The scheduler must still deliver the first VBlank immediately after that host-time dispatch rather than waiting for approximate EE cycles to catch up.

Current focused scheduler/interrupt result after the timing fix and after reapplying current runtime features:

- **12 total**
- **12 passed**
- **0 failed**

The new host-paced VBlank regression passed.

The earlier full core suite baseline before this new scheduler change remains 477/477. In this recycled scratch, the full test target was not rebuilt because the minimal restored dependency snapshot omits recompiler-only ELFIO/etc.; do not claim a fresh 477/477 specifically after this timing patch. The focused scheduler suite is the fresh validation for this change.

### Current Windows test build preserves remote controls

Because the archive restore predates some later scratch-only patches, the timing build explicitly reapplied the current Windows features before packaging:

- no-argument ELF/disc auto-discovery (`project/game-data/SLUS_200.90`, `project/disc/TimeSplitters.iso`);
- MinGW x64 build flags and 8 MiB stack;
- remote keyboard merged on top of XInput rather than being suppressed by a neutral/virtual controller;
- Windows keyboard fallback uses `GetAsyncKeyState()` in addition to raylib key state;
- keyboard mapping remains WASD movement, IJKL look, arrows D-pad, Z/X/C/V face buttons, Q/E L1/R1, 1/3 L2/R2, Enter Start, Right Shift/Tab Select, Ctrl L3/R3.

The user already reached an Arcade match on Windows before this timing build, which is practical evidence that the current control path is usable enough to navigate/play.

### New title diagnostic: FPS + VBLANK/s

The native title now reports two independent rates, updated about twice per second:

`TimeSplitters — native PC bring-up | 60.0 FPS | 59.9 VBLANK/s`

- `FPS` = host presentation rate.
- `VBLANK/s` = actual guest PS2 VBlank events published by the scheduler.

Use this diagnostic on the user's next Arcade run:

- ~60 FPS + ~60 VBLANK/s and normal speed: scheduler defect fixed the slow motion.
- ~60 FPS + ~30 VBLANK/s: host-paced VBlank is still being delayed somewhere and needs further scheduler instrumentation.
- ~60 FPS + ~60 VBLANK/s but game remains slow: move one layer higher and measure **game `sceGsSyncV` consumption / simulation update cadence**, not renderer performance.

### Windows build status

Windows MinGW x86-64 timing build compiled and linked successfully.

Package:

`/mnt/data/TimeSplitters-Windows-MinGW-timingfix.zip`

ZIP SHA256:

`4a75728aafdcccaaa05a98a55e956e1382f0d93e6ad75f830041e30859d45eb5`

EXE SHA256:

`b8acefe99486a7c957976cc970c8d78729ca9de342e0fdec90aa2cedb8c70172`

The package remains FFmpeg-disabled, so MPEG/FMV decode is unavailable; that is separate from gameplay simulation timing.

### Secondary timing hypothesis — not currently promoted

Sony `SetCPUTimerHandler` / `SetCPUTimer` wrappers (syscalls `0x6C` / `0x6D`) exist in the game's code, while the current syscall dispatcher does not implement them. Historical logs inspected during this turn did not show evidence that these syscalls are active in the tested gameplay path, so they remain a secondary hypothesis only. Do not implement them speculatively unless future logs/call traces show they are reached.

### Temporary GitHub workflow cleanup

Two temporary GitHub Actions workflows were created only to reconstruct the expired pinned dependency/toolchain caches after scratch recycle. Both were removed from remote `main` after successful cache recovery:

- `.github/workflows/temp-rebuild-toolchain-20260925.yml`
- `.github/workflows/temp-compact-runtime-deps-20260925.yml`

Final cleanup commit after removing the second temporary workflow:

`d46960c2a2d25e243ef1075fb793b6c46be09dd3`

### Immediate next step

Have the user run the new Windows timing build in Arcade and report the title values plus whether game speed feels normal. The title's **VBLANK/s** number is the key discriminator. If both FPS and VBLANK/s stay ~60 while gameplay still runs in slow motion, instrument game-level SyncV/update cadence next rather than altering VBlank frequency again.

Project priority remains crash/progression hunting once this global timing issue is resolved. Do not return to NPC damage/hit tuning.

---

## 2026-09-25 — automatic logfile + real TimeSplitters game-loop rate

User Windows evidence materially narrowed the slow-motion issue:
- Arcade gameplay is reachable and playable.
- Title showed approximately **60 FPS** and **60 VBLANK/s** while gameplay still felt dramatically slow/smooth, not choppy.
- Therefore host presentation rate and vblank delivery are not sufficient to explain the slow motion.

### Automatic logfile

`project/game/main.cpp` now tees both `std::cout` and `std::cerr` to a real file while preserving console output.

On every run it creates/truncates:

`timesplitters.log`

beside `timesplitters.exe`.

The first line reports the resolved log path as `[TS:log] file=...`.

Linux smoke verification:
- logfile created successfully beside native executable;
- file contained the same `[TS:rate]` diagnostics as the console;
- no shell redirection required.

### Real game update counter

`sceGsSyncV` was investigated but is mostly a startup synchronization call for this title; it is not the correct gameplay frame counter.

Original/decompiled `cpuMain` shows the real CPU/game frame loop calling `bossMainLoop()` once per simulation iteration before buffer/semaphore synchronization.

A generic runtime counter was added:
- `PS2Runtime::notifyGameUpdateTick()`
- `PS2Runtime::gameUpdateTick()`

TimeSplitters-specific instrumentation in `project/generated/bossMainLoop_0x200638.cpp` increments this counter only on canonical entry `ctx->pc == 0x200638`, avoiding double-counting scheduler resume labels within the function.

The title bar now shows:

`<title> | <FPS> FPS | <VBLANK/s> VBLANK/s | <GAME/s> GAME/s`

`GAME/s` is the number of actual TimeSplitters `bossMainLoop()` simulation iterations per wall-clock second.

Each half-second window is also written to the console/log as:

`[TS:rate] fps=... vblank_per_s=... game_per_s=... syncv_per_s=...`

Interpretation for the next Windows Arcade test:
- ~60 FPS, ~60 VBLANK/s, **~30 GAME/s** while visibly half-speed: very strong evidence that game CPU/update synchronization is the remaining timing bottleneck.
- ~60 / ~60 / ~60 but still slow: investigate TimeSplitters time-delta/timeGet/timer semantics inside the game rather than update frequency.
- GAME/s wildly unstable/stalling: inspect semaphore/buffer synchronization between `cpuMain` and `gsMain` (`bufffree_sid`, `gsstart_sid`, `gsdone_sid`, etc.).

### Validation

After automatic logging and GAME/s instrumentation:
- native TimeSplitters build: PASS;
- focused scheduler/interrupt suite: **12/12 PASS**;
- scheduler regression `host-paced VBlank is not blocked by coarse EE cycle accounting`: PASS;
- Linux smoke run: `timesplitters.log` created and populated with rate lines;
- GAME/s counter observed changing during the real TimeSplitters main loop;
- Windows MinGW x86-64 compile/link: PASS.

Windows diagnostic package:
- `/mnt/data/TimeSplitters-Windows-MinGW-game-rate-log.zip`
- ZIP SHA256: `036a3a9fe76f415d3fcae94f9e75685389a9a0929b9c2dc25261ac76a66dd61a`
- EXE SHA256: `ffad976bb0e3a480067550b8fe726f15ca5b4a440afd0fdce9e1ac24cfa1b19e`

Package preserves:
- scheduler wall-clock vblank fix;
- remote keyboard + XInput merge fix;
- Win32 `GetAsyncKeyState` fallback;
- FPS/VBLANK title diagnostics;
- `TS_INPUT_TRACE=1` in batch launcher;
- FFmpeg still disabled in MinGW diagnostic package.

Next user evidence requested: run an Arcade match for ~15–30 seconds, then provide either the title-bar `GAME/s` value or upload `timesplitters.log` from beside the EXE. Prefer the log because it captures rate history automatically.

---

## 2026-09-25 Work takeover — performance goal (latest authority)

**Priority:** substantially improve real gameplay update/frame rate. Boss-loop profiling is only one diagnostic, not the objective. The user's latest request supersedes historical combat and crash-hunt priorities. An active Codex goal tracks this work; it is not complete.

### Persistent local state
- Work repository stays at `D:\Programming\GitHub\Timesplitters`; HEAD is `d125342c104cfa5f1802abc3790252b20481ef10`.
- This local canonical file was recovered from the uploaded attachment returned by `read_thread` for conversation `6ab6d397-d648-83e9-b44e-6f6680f5a5c7`. `/mnt/data/...` does not exist on this Windows host. Original attachment remains in `C:\Users\smmel\AppData\Local\Temp\codex-file-preview-N4v6lf\TimeSplitters-PS2Recomp-CANONICAL-HANDOFF.md`.
- Original four modified source files and untracked files were preserved. Recovery evidence: `work/recovery-20260925/preexisting.patch`, `preexisting-status.txt`, and `user-slow-arcade.log`.
- Root `timesplitters.exe` remains untouched, SHA256 `ffad976bb0e3a480067550b8fe726f15ca5b4a440afd0fdce9e1ac24cfa1b19e`. It matches the prior game-rate-log package. Root `timesplitters.log` is also untouched.
- Local source predates that EXE: scheduler timing patch, GAME/s/title/file diagnostics, remote keyboard changes and boss profiler are not all present. Do not assume the source reproduces every feature of the root executable. No later source archive was attached to the referenced conversation; only the canonical handoff was available. Missing historical changes have NOT all been recovered.

### Changes made this turn
- `project/game/CMakeLists.txt`: restrict forced `/Od` to Debug so optimized MSVC builds actually use configuration optimization.
- `source/PS2Recomp/ps2xRuntime/src/lib/Kernel/EeScheduler.cpp`: restore documented wall-clock deadline catch-up via `accountCycles`; add opt-in dispatch segment timing (`TS_PROFILE_DISPATCH`).
- `source/PS2Recomp/ps2xRuntime/src/lib/ps2_runtime.cpp`: add opt-in direct boss-call duration logging (`TS_PROFILE_BOSS_CALLS=1`, threshold 1 ms, returned versus unwound labels), presentation versus published-GS-frame versus VBlank rates, hidden native test window (`TS_TEST_HIDDEN`), and native game-texture export (`TS_CAPTURE_FRAME`). Captures read the game's own texture; never desktop/window screenshots.
- `project/generated/bossMainLoop_0x200638.cpp`: opt-in canonical-entry update rate, ignoring resume labels. This generated-file instrumentation will need preservation/reapplication after regeneration.
- `source/PS2Recomp/ps2xTest/src/ps2_runtime_interrupt_tests.cpp`: reproduce coarse-cycle VBlank starvation with a 25 ms guest dispatch.
- `source/PS2Recomp/ps2xTest/src/timing_main.cpp` and CMakeLists: focused scheduler test target.
- Build/run helpers in `work/recovery-20260925/`: `build.cmd`, `build-performance.cmd`, `run-performance.ps1`.

### Evidence and validation so far
- Original log really contains ~60 presentation FPS, ~60 VBlank/s and ~2 GAME/s during later Arcade gameplay.
- This only proves ~500 ms BETWEEN updates. It does NOT prove one bossMainLoop call consumes 500 ms; rendering and synchronization outside that routine can dominate.
- Focused baseline tests: 11/11 pass. Added regression before fix: 11/12 pass, new regression fails. After restored fix: 12/12 pass. Logs `timing-baseline.log`, `timing-before-fix.log`, `timing-after-fix.log`.
- Rebuilt local Debug game successfully (`build-profiler.log`). Hidden 60-second process-local pad probe completed at time cap. Native framebuffer `debug-60s.png` was inspected: TimeSplitters title artwork, no gameplay. Initial capture includes unused texture rows; later source crops to published dimensions.
- Debug probe later title updates about 0.78–1.14/s; boss-call measured segments at most ~26 ms in this run. It ran concurrently with compilation, so this is diagnostic evidence, NOT a controlled performance baseline. Log `debug-60s.log`; no audio correctness claim.
- Rendering backend is currently CPU software rasterization (`gs_cpu_backend.cpp`), not a hardware GS renderer. Broader dispatch profiling is necessary to identify rendering/guest/synchronization costs.
- Clean optimized MSVC/Ninja build is in `build-performance`, reusing existing pinned sources from `build-windows-nmake/_deps`. Config RelWithDebInfo, debug UI and FFmpeg off, aggressive logging and IOP RPC trace off. Root runnable is not replaced.
- A copy of user memory cards is under `work/recovery-20260925/probe-cards` for subsequent probes. The first Debug probe used the normal card path but remained at title.
- `git diff --check` passed after initial changes.

### Immediate continuation
1. Finish `build-performance` (original build session 52254; helpers/logs above). Runtime/scheduler source changed during initial compilation, so run incremental build afterward before tests/probes.
2. Run focused and full core suite from `source/PS2Recomp` working directory. Record fresh counts; historical 477/477 does not establish this current build.
3. Run `work/recovery-20260925/run-performance.ps1` for controlled native hidden probe. Inspect capture and state log, not just exit code. Diagnostic executable intentionally returns 10 at watchdog time cap.
4. Compare fresh GS-frame/update rates and inspect slow `[TS:dispatch]` addresses against generated symbols. Avoid assuming the bottleneck is in bossMainLoop.
5. Recover a dependable process-local Arcade route as necessary, measure before/after under matching scene/build/load, implement evidence-supported speed improvements and regression tests. No significant gameplay speed increase has yet been verified.
6. Update this canonical file after each substantive turn. Never operate the user's desktop, synthesize host input, or use Computer Use/capture app. All input must remain in the targeted game's own harness.

### End-of-turn verified results (supersedes pending-build notes above)
- Optimized build and subsequent incremental builds PASS. Final binary: `build-performance/timesplitters/timesplitters.exe`, SHA256 `7c367084ef21ffb72dcb23d625500a6fb2fd5bcaeb08cacf071a629c077217e9`.
- Optimized focused tests: **12/12 PASS** (`timing-performance.log`). Full core tests: **477/477 PASS**, rerun on final sources/binary (`core-final.log`). The local base had one fewer test than the later historical scratch state; current total includes the new timing regression and does not imply missing historical wait_u8 work was recovered.
- Final `git diff --check`: PASS. No commit/push, no replacement of root EXE, no running probe/build remains from this turn.
- 120-second optimized probe, compilation stopped: expected diagnostic exit **10**. Native capture `performance-120s.png` inspected: Sign On menu with Player 1 / New Player / Load Sign Ons; original route stuck on `wait_u32 0x00352dbc == 1`. Later steady menu updates ~12/s while host presents ~60/s. This is NOT an Arcade before/after comparison.
- Additional diagnostic enhancement in `ps2_runtime.cpp`: `TS_PROFILE_DISPATCH` also times direct gsMain calls and labels them `[TS:gs-call]`. Renamed publication counter to `gs_publications_per_s`: observed ~2 publications per update, so this is NOT an independent count of unique full gameplay frames. The earlier 120s log uses the less accurate field name `gs_frames_per_s` for the same publication counter.
- 75-second optimized probe with `work/recovery-20260925/signon-player1.pad`: expected exit **10**. Native capture `graphics-75s.png` inspected sequentially after previous capture: original Sign On keyboard, highlighted A, blank name, END bottom right. Selecting Player 1 opened new-name entry; it did NOT load an existing profile. Internal pad script exhausted normally after 754 reads. This supplies a deterministic starting route for completing the original save flow next.
- **Concrete hotspot:** repeated `[TS:gs-call] src=0x20105c target=0x2cf4a0 ... outcome=returned`, approximately 65–190 ms in frontend/title scenes. Target is original `sceDmaSend`; caller is `gsMain_0x200f20`. `Kernel/Stubs/Helpers/Support.h::submitDmaSend` synchronously writes DMA registers and calls `mem.processPendingTransfers()`, which includes VIF/VU/GIF/CPU raster work. Broader `[TS:dispatch] pc=0x201000` times match this call. No evidence yet isolates which substage dominates; do not assume the memory copy itself is expensive or fake DMA completion.
- Root game-rate EXE and original user log still preserved. All current measurements are frontend, no gameplay improvement, gameplay visuals/audio, or 60 real updates/s claim warranted.

Next work: separate DMA/VU/raster/presentation timings inside the real graphics submission, optimize the measured dominant component with correctness checks, and complete the process-local name-entry/save/gameplay route. The historical name route adds a character, moves down four/right four to END, confirms, then follows original save dialogs; use native captures/state gates to validate each transition. Helper `run-performance.ps1` now takes `-Seconds`, `-Label`, `-PadScript`. Use isolated `probe-cards`, never fabricate guest success. A spare untested title-FX-gated route is `work/recovery-20260925/title-ready.pad`. Goal remains active and unfinished.

## 2026-09-25 Performance continuation — real Arcade reached, goal still active

This section supersedes earlier frontend-only status and old pending-build notes. Work remains in `D:\Programming\GitHub\Timesplitters`. Root EXE/log are preserved; no commit/push or replacement release. The goal is substantial actual gameplay performance improvement, ultimately normal-speed gameplay. It is NOT achieved.

### Verified gameplay evidence
- Recovered a deterministic process-local pad route through original name entry, save, Arcade level/character selection, and actual Tomb gameplay. No desktop input or capture used. Native captures inspected in sequence: `raster-before.png` (CAPS, incorrect END route), `raster-inline.png` (Save completed), `raster-detail.png` (keyboard), `raster-rounding.png` (duplicate-name dialog from reused cards), `raster-reuse.png` (Select Level), `raster-floor-arcade.png` (Start Game), `arcade-optimized.png` and `arcade-decoded.png` (actual Tomb world, pistol, ammo, radar, rank HUD).
- Correct END movement from A: down four, right THREE. Four wrapped to CAPS. Final successful route: `work/recovery-20260925/arcade-match.pad`. Helper `run-performance.ps1` now creates separate `<Label>-cards` for each run. Use a NEW label each run; repeated labels reuse the profile and can change the menu flow.
- `arcade-optimized.log`: 180-second probe before predecoded sprite optimization. Actual player valid, health 1, 6 active characters. Weighted updates after first valid-game state: **3.9498/s** across 59.243 seconds / 51 windows.
- `arcade-decoded.log`: 180-second probe after sprite predecode. **6.3955/s** across 93.190 seconds / 69 windows; late windows mostly 5.6–6.6/s. Native final capture inspected, shows actual Tomb world and HUD (rank 2nd). Expected time-cap exit 10, not crash. No game process remains from this probe.
- These two runs used the same internal route and fresh cards, but are NOT a frame-identical deterministic benchmark: differing gameplay duration and NPC evolution, and a brief sampling interval in the decoded run. They support a useful improvement, NOT a precise speedup guarantee or a fair direct comparison with the original root executable's ~2/s report. No normal-speed or 60 unique gameplay frames/s claim. Movement/combat/audio correctness not comprehensively verified.
- `summarize-game-rate.ps1` starts collecting after a state log with active characters and valid player prop; weighted average uses each logged window's duration. All above evidence is in `work/recovery-20260925`.

### Implemented graphics work (built and tested before the pending VU change)
- `source/PS2Recomp/ps2xRuntime/CMakeLists.txt`: enable MSVC `/Ob2` for CPU GS and GS memory sources outside Debug. RelWithDebInfo previously used `/Ob1`. This alone did not demonstrate a meaningful win.
- New `include/runtime/gs/gs_color_rounding.h`: replace per-sample CRT lround/floor calls with equivalent finite-domain operations. Double addition preserves values just below half-channel boundaries. Tests include nextafter neighbors.
- `include/runtime/gs/gs_texture_page_cache.h`: preserve canonical logical single-page cache semantics but allow 8 scratch pages within a proven read-only draw. Initial stale page remains stale until first eviction; subsequent reads use fresh immutable VRAM; final logical page snapshot restored. Instrument physical page copies. Tests verify stale/eviction/final snapshot behavior.
- `src/lib/gs/gs_cpu_backend.cpp`: conservative texture/color/depth physical page range disjointness proof; wrapped/unknown/overlapping cases keep original path. For large magnified sprites with immutable small textures and safe initial cache state, decode source pixels once (including palette/TEXA), then filter decoded texels. Restore last sampled logical cache page afterward. Region wrapping and unsupported formats fall back. Preserve filtering, blend, depth, guest timing and real graphics work.
- `include/runtime/gs/gs_cpu_backend.h`: decoded sprite storage plus diagnostic SetTexturePageReuseEnabled(false) for comparison; call configuration before rendering.
- `TS_DISABLE_TEXTURE_REUSE` disables reuse/predecode for comparison. `TS_PROFILE_RASTER=1` logs primitive categories, first slow draws, physical cache loads and presentation time. Counters are per thread and category. Latest source additionally locks the backend when reading the profiling page-load count; this final small instrumentation fix still needs the incremental rebuild after the pending build (source edited after its object was initially compiled).
- Before reuse, frontend showed ~55,000 8KiB page loads/frame (~430MiB), sprite drawing ~85–104ms, triangles ~30–35ms, presentation ~3–5ms. Reuse reduced copies drastically, but sprite sampling remained costly until predecode. Do not mistake menu speed for gameplay speed.
- `ps2xTest/src/ps2_gs_tests.cpp`: four added tests, including 72 complete-4MiB-VRAM differential cases (9 formats x 8 cases), comparing optimized vs original cache path with palette/filtering/region modes/aliasing/wrap and source dimensions/destination magnification exercising predecode. Core suite **481/481 PASS** in `core-decoded-sprite.log`. Earlier `core-differential.log` also passed. These are valid results for the graphics change before the VU edit.
- Last fully built gameplay binary (pre-VU): `build-performance/timesplitters/timesplitters.exe`, SHA256 `ff077f528449b1c20b88f957279a336ec7043988bd4a26f6dd8e3730aae6cd24`. Current running build will replace it; re-hash afterward.

### New measured hotspot and pending interpreter change
- Added target-process-only native instruction sampler `sample_cpu.cpp/.exe`, built by `build-sampler.cmd` (VS + dbghelp). It identifies the busiest thread in the specifically supplied game PID, briefly suspends it to read instruction pointer, then resumes immediately. No injection, host input, UI, or capture. Current version caps sampling at 8 seconds. Original 5,000 sample loop lasted ~80s due Windows sleep granularity; do not reuse uncapped version.
- `cpu-samples-title.log` points to rasterization/texture sampling. `cpu-samples-arcade.log`, sampled during real gameplay in decoded run, changes priority: 75 hits commitReadyPipelines, 39 normalizeOperand, 22 calculatePairReadyCycle, 22 DrawTriangle, 22 texture sample lambda, 17 VU run, 17 WritePixel, and remaining scattered costs. Instruction-pointer sampling is approximate; it does not include inlined functions reliably.
- NEW UNVERIFIED change in `include/runtime/ps2_vu1.h` and `src/lib/vu/ps2_vu1_core.cpp`: maintain earliest pending pipeline ready cycle on all ten queue sites and scheduler reset. `commitReadyPipelines` returns without scanning if nothing can be ready; otherwise preserves original ordered commits and recomputes earliest remaining deadline during the same scan. All emulated cycles and XGKICK progression remain intact. No floating-point precision or hardware timing shortcuts.
- This public-header change triggered ~2,727 build steps (all generated game units). **Build is still running**, exec session **64697**, launched with `cmd /c work\recovery-20260925\build-performance.cmd`. Output `build-performance.log`; latest progress roughly 600/2727 at 17:53 local, no failure at checkpoint. Do not launch a competing build into the same directory.
- IMPORTANT: `core-vu-ready.log` says 481/481, but was accidentally run before the new test executable linked. It is a rerun of the PRE-VU binary and is NOT verification of the VU change. No VU improvement or pass claim yet. Wait for the build to finish, then rebuild incrementally to incorporate the final profiling-lock edit, then run fresh tests.
- No active game probe or sampler remains. Only the build is active. `git diff --check` passes (line-ending notices only).

### Exact continuation
1. Resume/poll exec session 64697; if session unavailable inspect build log/processes and completion before restarting. Full build helper compiles game, timing and core tests. After successful completion run helper once more for the late profiling-lock edit.
2. Run freshly linked core and timing tests from `source/PS2Recomp`; expect baseline 481 and 12 respectively. Save fresh unambiguous logs, e.g. `core-vu-final.log`, `timing-vu-final.log`. Existing VU tests cover delayed flags, scalar/vector hazards, stalls, EFU latencies, XGKICK store visibility, resets and halt flushing.
3. Build standalone cache test targets `ps2_gs_texture_cache_tests`, `ps2_gs_clut_cache_tests`, `ps2_gs_memory_cache_tests`; run CTest in `build-performance/ps2xTest/gs_cache` (45 tests). Not yet run on these edits.
4. With compilation stopped, run fresh-label 180s `arcade-match.pad` probe with current VU change, inspect state/rate/native output and compare. Example: set TS_PROFILE_RASTER=1, run helper -Seconds 180 -Label arcade-vu-ready -PadScript work\recovery-20260925\arcade-match.pad. Exit10 is expected diagnostic cap. View final native image; host FPS alone proves nothing.
5. If gating does not help, use active pending-entry masks or other measured VU/raster optimizations with preserved ordering/precision and regression tests. Avoid guessing based solely on boss timings. Measure a repeatable fixed gameplay interval where possible; future production replacement also needs missing historical launcher/controls changes recovered.
6. Update this canonical file and its output copy after the next substantive turn. Goal remains ACTIVE, substantial work remains, no user action required for this continuation.

## 2026-09-25 Interpreter optimization verified on identical real-game inputs

Supersedes the prior pending-build status. Goal remains ACTIVE and unfinished. Previous turn was progress; this turn completed builds/tests, implemented more interpreter optimization, and established a deterministic workload comparison. No build, game, sampler or benchmark process remains running at this checkpoint. No commit, push, or root-EXE replacement.

### What changed this turn
- Completed old build session 64697 (full-build log preserved as `build-vu-full.log`), then incremental builds including the profiling-lock fix. Later sessions 10804, 26734 and 83256 all completed successfully.
- `ps2xRuntime/src/lib/vu/ps2_vu1_detail.h`: moved the existing, unchanged normalizeOperand and broadcast definitions into inline definitions visible to core/upper/lower implementation units. No operand precision/rounding behavior intentionally changed.
- `ps2xRuntime/src/lib/vu/ps2_vu1_upper.cpp`: return early for the two already-supported NOP special encodings before normalizing fourteen unused operands. Scheduling and cycle progression stay in run().
- `ps2xRuntime/CMakeLists.txt`: `/Ob2` outside Debug now also applies to the three VU source files. Combined with the previous earliest-ready-cycle gating in core/header, this is the optimized variant measured below. Individual contribution of these changes was not isolated.
- NEW `ps2xRuntime/src/lib/vu/ps2_vu_capture.h` and execute() hook in core: optional input-only VU1 capture. Set `TS_VU_CAPTURE_FILE` to an explicit local binary path; optional `TS_VU_CAPTURE_AFTER` seconds since first VU1 execute, default 130. Captures up to 128 execute() inputs, each initial architectural state + code/data + arguments. Does NOT capture resume() private pipeline state or alter the game. Native same-host, versioned layout; not a portable asset format. Game assets remain local.
- NEW `ps2xTest/src/vu_benchmark.cpp` and CMake targets: `ps2_vu_benchmark`, plus `ps2_vu_benchmark_reference` when `PS2X_VU_REFERENCE_DIR` is supplied. Replay each captured input after reset, warm its decoded-code cache, time only execute(), record full resulting VU registers/state, VU data and length-delimited emitted GIF packets. Actual rasterization is excluded using the existing GIF packet callback. Each repeated output must match its warm-up byte-for-byte. No host input/UI/capture involved.
- Benchmark clears TS_VU_CAPTURE_FILE inside its own process to prevent inherited capture settings overwriting the input. Verified with the variable deliberately pointing at the input: benchmark passes and input SHA stays unchanged (`benchmark-env-check.log`).
- Reference sources (core, upper, lower, detail) extracted verbatim from repository HEAD into `work/recovery-20260925/vu-reference`. Reference target compiles these old sources with RelWithDebInfo defaults (/Ob1), linked against the same remaining runtime. Current class header is shared so layouts agree; the extra earliest-ready member is unused by old code. This establishes a code comparison on identical inputs, not a comparison against the old root MinGW package.
- `build-performance.cmd` now configures PS2X_VU_REFERENCE_DIR and builds both benchmark targets too. `run-performance.ps1` now accepts optional -Executable; summarizer accepts -LastWindows. All helpers/reference snapshots remain ignored under work/recovery-20260925.

### Completed correctness checks
- Fresh final VU code before capture hook: **481/481 core** (`core-vu-final.log`), **12/12 timing** (`timing-vu-final.log`). These supersede the earlier stale-executable `core-vu-ready.log`.
- After capture hook: **481/481 core** again with capture enabled (`core-vu-capture.log`). This produced 61 execute-input records from tests in `unit-vu-inputs.bin`.
- All **61 captured test inputs**: current and HEAD reference produce byte-identical complete outputs. Tests include flags, scalar/vector hazards and other existing VU cases. The captured subset is not the entire 481-test suite; the suite itself separately passes.
- Standalone graphics cache targets built and **45/45 CTest PASS** (`build-cache.log`, `cache-final.log`). Graphics code has not changed since this check.
- **128 actual Arcade VU1 execute inputs**, all byte-identical between reference and optimized interpreter for registers/state, data and emitted GIF packets. Repeated outputs are also deterministic within each run. Direct Python comparisons found zero differing output files both after the 30-repeat and 500-repeat comparisons.
- `git diff --check` PASS (line-ending notices only).

### New reliable performance evidence
- `arcade-vu-inputs.bin`: 128 inputs / 4,283,392 bytes, captured after 130 seconds from first VU execute during actual Arcade Tomb gameplay. Capture log confirms `inputs=128 complete=1`, with valid live player and 6 active characters before capture.
- Warm-cache comparison, 30 measured repeats: reference **232.439 ms**, optimized **168.906 ms**, equal **1,362,630 emulated cycles**, same **58,976 packet bytes** per input set (includes packet length delimiters).
- Reversed-order longer comparison, 500 measured repeats: optimized **2,413.46 ms**, reference **3,749.65 ms**, equal **22,710,500 cycles**. **35.64% less interpreter execution time / 1.554x throughput** on this identical captured workload. Includes the same packet-capture callback overhead in both variants. Excludes GS rasterization, menus, and whole-game update cadence.
- Logs: `arcade-vu-current-500.log`, `arcade-vu-reference-500.log`, initial `arcade-vu-current-bench.log`, `arcade-vu-reference-bench.log`. Machine-readable comparison: `vu-benchmark-comparison.json`.
- Output directories: `arcade-vu-current-output`, `arcade-vu-reference-output`; 128 record-NNN.bin files each. Unit comparison similarly uses unit-vu-current-output / unit-vu-reference-output.
- This is strong evidence to KEEP the current interpreter changes. It is NOT proof of normal-speed gameplay or a 36% whole-game FPS gain.

### Whole-game measurements and corrected interpretation
- Copied verified pre-VU optimized EXE (SHA ff077f...) to `work/recovery-20260925/decoded-baseline/timesplitters.exe`; it remains available for comparisons. Root EXE remains original SHA `ffad976bb0e3a480067550b8fe726f15ca5b4a440afd0fdce9e1ac24cfa1b19e`.
- `arcade-vu-ready` (180s, interpreter optimized, before capture hook): **4.1658 updates/s** over 74.175 seconds / 66 windows after valid-game state; final30 windows about3.94/s. Native capture inspected: actual Tomb scene, pistol/HUD, a DIFFERENT view from prior decoded run. Render batches later contain ~5,500 triangles vs ~1,600 in the prior run.
- `arcade-baseline-repeat` (180s, preserved pre-VU EXE): **3.2852/s** over59.967 seconds /51 windows; last30 **3.2914/s**. Native capture inspected: another different Tomb viewpoint. Same executable previously averaged6.3955/s. Thus the earlier 4→6.4 average comparison is **not a controlled measure of the graphics optimization's whole-game speedup**. Do not repeat it as a universal FPS improvement.
- `arcade-vu-capture` (160s, latest binary): **12.5170/s** over55.444 seconds /53 windows, range9.56–18.09, yet another less demanding Tomb view (native capture inspected, pistol/HUD/radar/rank3). Includes capture overhead, so not a clean timing benchmark. Shows scene variability, not a proven 3x gain. All these probes ended at expected diagnostic exit10 with valid player/health1/6 characters.
- All three new native captures were viewed sequentially. They prove expected static world/weapon/HUD content for the observed scenes, not comprehensive movement, combat, transitions or audio correctness. No desktop/window capture or host input was used.
- Current build-performance game EXE SHA256: `5288c068db312222758a7b849f3f32600c86cba323d82cde4279dddc7a9130a1`. The last benchmark-only rebuild did not change the game binary.

### Next actions toward the full performance goal
1. Use the now-fixed `arcade-vu-inputs.bin` benchmark for further VU improvements, keeping byte-for-byte reference output checks. Example: build-performance/ps2xTest/ps2_vu_benchmark.exe work/recovery-20260925/arcade-vu-inputs.bin work/recovery-20260925/arcade-vu-current-output 500. Compare against reference output; alternate timing order and keep compilation/game processes stopped.
2. Profile the replay workload or carefully sample a real in-game run after validating state. Investigate remaining pipeline bookkeeping, instruction dispatch/decode copies, and arithmetic helper overhead based on current samples. Avoid relaxed precision or cycle skipping without equivalence evidence. The old sample attributed much time to VU pipeline commits; this needs remeasurement after the optimization.
3. For renderer changes, establish a similarly fixed input/VRAM replay or otherwise ensure the same view and workload. The internal menu route reproduces game entry but NOT a deterministic player spawn/view. Random seed controls were investigated but NOT added; no guest RNG/state mutation was introduced.
4. Continue broader CPU GS optimization as measurements warrant; current software rendering remains a cost. Both VU and rasterization must be addressed for near-normal real gameplay speed. Runtime refresh staying60Hz is not success.
5. Run applicable regression tests and actual native gameplay validation, preserve root release/controls state, update this handoff each substantive turn. No permission/user input needed for the next steps. Do not mark the goal complete: actual scene-dependent update rates are still far below the intended cadence.

## 2026-09-25 Further VU optimization — ~2.51x fixed-workload throughput, gameplay goal unfinished

This turn was progress: implemented and verified further optimizations, completed game rebuilds/probes, and obtained fresh profiling evidence. All processes from this turn have finished. Goal remains ACTIVE. No root EXE/log replacement, commit or push; continue in D:\Programming\GitHub\Timesplitters.

### Current source changes
- `ps2xRuntime/include/runtime/ps2_vu1.h`: six occupancy masks for flag, EFU, store, VF, VI and ACC pending arrays.
- `ps2xRuntime/src/lib/vu/ps2_vu1_core.cpp`: queue operations set the appropriate occupancy bit; reset clears masks; commits iterate occupied slots in ascending index order with countr_zero, retaining original category/lane/commit ordering. Pipeline-pending check uses masks. VI read/write readiness and first-written-register selection now iterate only set bits, excluding VI0. All emulated cycles and dependencies remain intact.
- Commit retirement clears validity and occupancy instead of zeroing the entire entry. Enqueue initializes every field that its entry type later consumes (flag enqueues explicitly clear their entry). The scalar Q validity guard is retained; array validity follows occupancy. No arithmetic precision/rounding changes.
- `resetXgkickMetadata` now resets the eight scalar control fields without clearing the 64KiB packet array at every reset/start. progressXgkick writes each transferred qword before parsing it; finish submits only the completed packet length. This removes repeated unused buffer clearing. Packet/cycle equivalence tests below pass.
- An experimental countr_zero free-slot allocator was slightly slower and was REMOVED. Current enqueue allocation remains the original first-invalid search. Experimental source preserved only in ignored `work/recovery-20260925/vu-allocator-experiment.cpp`.
- `ps2xRuntime/src/lib/vu/ps2_vu_capture.h`: added optional TS_PROFILE_VU scope timing/call/cycle totals. `[TS:vu-work]` distinguishes execute() from resume(). The reported *_inclusive_ms includes synchronous GIF/GS/raster work invoked by the interpreter, so it is NOT exclusive VU CPU time. Keep TS_PROFILE_VU unset for clean replay timing.
- Ignored helpers: sampler accepts optional duration milliseconds (max8s); `build-vu-bench.cmd` builds runtime/tests/benchmarks without the expensive generated game rebuild. `build-performance.cmd` still builds everything. No source/game RNG/seed changes were made.

### Exact validation and measurements
- Fresh replay sample `vu-replay-samples.log`: largest buckets before these changes were commitReadyPipelines49, run32, calculatePairReadyCycle21, exact FMAC13, updateFmacFlags11. Targeted only the benchmark process, no UI/host input.
- Mask + VI scanning change: prior optimized benchmark **2464.19ms**, new **1831.78ms** for same128 captured inputs x500 repeats /22,710,500 cycles (about26% less). Logs vu-before-masks-500.log and vu-masks-final-500.log.
- Retire-validity-only change: another ~13% saved on that workload, all byte outputs match. Logs vu-retire-final-500.log, core-retire-final.log.
- Packet-buffer change: before **1610.66ms**, after **1388.83ms**, same work (about14% less). Logs vu-before-packet-500.log and vu-packet-500.log.
- Final fresh reference/current pair: **3660.41ms HEAD reference vs1455.73ms current**. Same128 inputs x500 repeats, same22,710,500 cycles and58,976 length-delimited GIF packet bytes per input set. **60.23% less execute replay time /2.514x throughput** relative to original HEAD interpreter. This measures the fixed captured workload, NOT whole-game FPS. Details in `vu-packet-comparison.json`, `vu-reference-packet-final-500.log`, `vu-packet-final-500.log`.
- Final outputs: all **128 Arcade cases** in vu-packet-output match arcade-vu-reference-output byte-for-byte (full architectural state/registers, data and emitted GIF packets). All **61 captured unit cases** in unit-vu-packet-output also match unit-vu-reference-output. Repeated runs checked internal determinism as well.
- Final core **481/481 PASS** (`core-packet.log`); timing **12/12 PASS** (`timing-packet-final.log`). Earlier mask/retire stages also passed. No GS code changed this turn; prior 45/45 standalone GS-cache result remains the applicable result. Final diff check PASS, line-ending notices only.
- Full game rebuild after the public-header change completed (about2675 objects). Log preserved as build-masks-game.log; subsequent changes were fast incremental builds. All sessions (42957,41076,28577,23465,67568,54710 and benchmark build sessions) are complete.

### Native gameplay observations (not controlled comparisons)
- `arcade-masks`160s, masks/VI optimization: **12.9559 game updates/s** over55.033 seconds /53 windows. Native image inspected: Tomb interior, pistol, HUD/radar/rank3. Binary at that time SHA FE78B04D0391DF9756A1669854E06436B255F39E181887E26359AD64A762555C. A3-second target-thread sample during gameplay is cpu-samples-masks-game.log; commit/run/GS triangle/pixel work remain visible.
- `arcade-retire`160s, validity retirement: **5.2725/s** over55.572 seconds /50 windows, another view and weapon. Native image inspected: Tomb room, automatic weapon and50/150 ammo, rank1. Binary at that time SHA A549C15C9F9E3117EE1F40603BD94A5E20F7B565CB5927A54F96016C58EF6E1C.
- `arcade-packet`160s, FINAL source/binary: **6.4332/s** over55.649 seconds /51 windows (range3.75–9.13). Native image inspected: Tomb architecture, pistol/ammo/HUD/radar/rank1, another character in view. All three new probes exited at expected diagnostic cap10, valid player/health1/6 characters. Fresh isolated cards were used. All input was process-local; all images came from native texture export.
- As before, views differ, so these averages DO NOT establish gain/regression between builds. They do establish that gameplay still falls far short of normal speed. Static content is verified; comprehensive movement/combat/audio correctness remains unverified.
- Current game EXE SHA256: **428c8cb4fdb131487a3bfb8c6b11c2723d5f78fe6348f2c1d5f759aa38edca7a**. Root original SHA remains ffad976bb0e3a480067550b8fe726f15ca5b4a440afd0fdce9e1ac24cfa1b19e.

### New evidence changes the next action
- TS_PROFILE_VU in actual Arcade recorded **614,732 execute calls /385,090,734 VU cycles and ZERO resume calls** after the first valid-player state in arcade-packet. Inclusive execute time46876.711ms over the logged interval. Totals in vu-packet-game-totals.json. Thus the earlier concern that this scene's dominant work might be omitted resume calls was NOT supported. Do not prioritize complex private-state/resume capture without evidence of resume traffic.
- The fixed input set contains only one microcode hash (prefix da1f094cd209), with entries:0x3fe0x81,0x3520x26,0x0x17,0x3d40x2,0x3b50x1,0x3af8x1. `vu-captured-entry-summary.json`. This is a short contiguous workload sample; it does not prove equivalent speed across all views/programs. Additional samples spread across several frames/scenes would improve coverage.

### Next steps toward actual frame-rate goal
1. Prioritize a controlled whole-game comparison and a broader measured bottleneck view. Preserve the fixed-workload oracle, but do not substitute its success for gameplay performance. Current update rates remain inadequate.
2. A possible controlled-game route: add an explicitly opt-in test-only deterministic spawn/RNG seed just before the original lvGetRandomPlayerSpawn path, use matching starting view and measured game-update count, and compare two builds with identical game/raster code and different VU implementation. This is only a proposed test facility, NOT implemented or authorization to fake gameplay. Normal unset behavior must remain original. Existing run helper accepts -Executable. A reference game can potentially reuse generated game objects and link old VU object files before the runtime archive, as the reference benchmark already does, avoiding recompiling all generated functions twice. Ensure reference compiler flags match and inspect actual views before drawing conclusions.
3. Reprofile FINAL code (sampling helper optional3-second duration avoids losing the process before symbol resolution). Separate VU exclusive cost from synchronous GS raster cost: the current VU timing is inclusive. Investigate reset/dispatch/constant-op specialization only if still dominant; all optimizations must preserve architectural results, GIF packets and emulated cycles.
4. For GS changes, obtain a repeatable draw/VRAM workload or same-view comparison. CPU triangle/pixel/texture sampling remains a measured cost. Consider preparing invariant sampler/pixel parameters once per draw or safely reusing decoded textures, with full-VRAM comparisons and existing cache semantics preserved. No such new GS change is implemented yet.
5. If exploring larger VU gains, the observed stable microcode makes static specialization/recompilation worth investigation, but it is not implemented and must retain fallback and exact scheduling/output checks. Avoid endless tiny changes without verifying movement toward playable real gameplay cadence.
6. Preserve root runnable/log and original dirty work. Final launch/control compatibility still needs recovery before replacing the root executable. Update this canonical and its output copy each substantive turn. Goal ACTIVE; no user action or permission needed for continuation.

## 2026-09-25 Whole-game comparison: VU gains reach actual game updates, goal still active

All four native probes and build processes completed. No UI/OS input or screen capture used. Root executable/log and initial dirty work remain preserved. No commit/push. This turn added measurement infrastructure; no additional VU/GS optimization beyond the previous section.

### Changes and builds
- project/generated/lvGetRandomPlayerSpawn_0x228370.cpp: optional TS_TEST_SPAWN_SEED seeds the original RNG using the same two stores as newrndseed immediately before the original spawn algorithm; default unset preserves original behavior. This is NOT a complete deterministic game-state replay. It does not force spawn success or alter health/position directly. Generated-code regeneration must preserve/reapply diagnostic changes.
- project/generated/bossMainLoop_0x200638.cpp: optional TS_TEST_GAME_UPDATES begins at a canonical entry with a valid player/prop and active characters, counts completed updates between canonical entries, reports elapsed seconds/updates_per_s, and requests a normal diagnostic stop after the chosen count. Scheduler resumes are excluded. Unset keeps normal behavior.
- project/game/CMakeLists.txt: PS2X_VU_GAME_REFERENCE option (default OFF) builds original HEAD VU core/upper/lower sources as objects and links them ahead of the runtime archive, keeping all other generated game/rendering code identical. Reference uses original default RelWithDebInfo /O2 /Ob1; current VU includes /Ob2 and prior optimizations.
- Ignored helpers: build-reference-game.cmd configures ON and builds game; build-performance.cmd explicitly resets OFF. run-performance.ps1 wording now explains exit10=time cap and20=requested diagnostic stop.
- Both game variants rebuilt successfully. Current build cache PS2X_VU_GAME_REFERENCE=OFF. Diff whitespace check passes (line-ending notices only).
- Current EXE build-performance/timesplitters/timesplitters.exe SHA256: 9C1C68B4B6655ABD0B48EE67DEFBC2C2AC6F9C0305B6AACAEC85A34F757FE056.
- Preserved reference work/recovery-20260925/reference-game/timesplitters.exe SHA256: B6E0D7E2C510DDF6D215A387CD14D68A870F0FC649D91D9ABBF8A1575D5AB04B.
- Root original EXE unchanged. Runtime/GS code unchanged this turn, so prior 481/481 core,12/12 timing,45/45 cache tests and exact VU replay comparisons remain applicable; not rerun solely for diagnostic additions. The new diagnostic path was exercised in all four actual runs.

### Native measurements
Every run: fresh isolated cards, arcade-match.pad process-local input, seed1,120 completed updates,300s safety cap, TS_PROFILE_RASTER=1 plus identical boss/dispatch profiling from run-performance.ps1. No concurrent compile/benchmark load. Pair1 reference then current; pair2 current then reference. All exited20 via requested benchmark stop, not safety cap.

| Log/image prefix in work/recovery-20260925 | Completed updates | Seconds | Actual updates/sec |
| --- | --- | --- | --- |
| controlled-reference-1 |120|22.2956|5.38222|
| controlled-current-1 |120|15.8596|7.56640|
| controlled-current-2 |120|13.8893|8.63974|
| controlled-reference-2 |120|21.6089|5.55326|

Observed throughput gain ~40.6% in pair1,~55.6% in pair2. These are scene comparisons, NOT exact-command deterministic replay. Each pair's exported image shows matching camera/architecture, but pair2 has a different view from pair1 despite the seed; NPC activity/HUD/rank differ even within pairs. Thus the seed stabilizes an input to spawn selection, not the complete simulation. Do not call this a precisely controlled fixed-workload benchmark or claim a universal FPS percentage. Both pairs support real gameplay improvement from the VU work; actual rates remain far below normal speed.

All four native texture captures were individually inspected in completion order. Pair1 shows Tomb stairs/columns/doorway/pistol10|490/HUD, reference includes First kill popup. Pair2 shows Tomb columns and alcove/pistol10|490/radar; current rank1,reference rank2. Expected game content appears; comprehensive movement/combat/audio correctness remains unverified.

First-pair raster profiling between benchmark start/end (periodic windows, not exact scoped timestamps): reference6390.72031ms drawing +895.55021ms presentation; current6130.21047ms drawing +807.87117ms presentation. Current draw cost is about39% of total15.8596s/~51ms per update. Current triangles(type4)3305.1217ms,strip(type5)2184.7023ms,sprites(type6)640.38647ms. Primitive counts differ, so do not treat these as identical renderer input. JSON summaries controlled-reference-1-raster.json and controlled-current-1-raster.json. Raster alone already prevents60 real updates/sec in this workload, even if remaining interpreter cost vanished.

### Next steps
1. Goal remains ACTIVE;5–9 actual game updates/sec is inadequate. Focus next on measured software GS pixel/triangle/texture work while preserving VU gains. No user input is needed.
2. Establish repeatable GS draw/VRAM replay or meaningful exact-output differential benchmarks before claiming renderer gains. Current native seed route is only partially repeatable. Keep both saved binaries and avoid running performance probes concurrently with builds.
3. Inspected SampleTexture bilinear path (gs_cpu_backend.cpp around1128–1244): four independent per-channel scalar lerps and rounding. Potential SSE2 packed-channel interpolation can retain separate multiply/add float operation order and double+0.5 rounding, with scalar fallback and edge/random exact comparisons. This is ONLY an idea, not implemented. Avoid FMA/reassociation. Another option is invariant sampler/pixel state preparation once per draw; broader changes require byte-exact VRAM checks including alias/wrap/stale-cache cases.
4. No new GS source changes or SIMD tests were made this turn. Avoid endless micro-optimizations: renderer accounts for about40% of observed optimized time, and near-normal cadence needs larger gains across both rendering and execution.
5. Preserve initial dirty files and root launch/control compatibility; do not replace the root release yet. Update this canonical and output copy every substantive turn. No active probe/build handles remain (93398 completed both repeat runs).
