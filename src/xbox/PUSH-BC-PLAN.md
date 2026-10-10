# Push B and Push C in parallel: implementation plan

**Baseline.** `master`, `stage012` and `origin/stage012` all point at d50798e ("completes Push A"). The F2 memory track is part of that commit, so every track in this plan starts from d50798e.

- Line numbers marked "(d50798e)" were re-checked for this plan.
- Other citations come from the area designs and are at 2b229fd. Tracks look those up again by function name.
- Ownership is assigned by file. In the few files two tracks must share, it is assigned by function name, never by line range.

**What changed since the designs were written.** F2's commit message reports xemu free memory in a match of 1.3 MB → 5.3 MB at 1P, and a 4P low of 4.5 MB at level load. The designs sized themselves against the older run, which showed a 928 KB low. Memory on the console has not been measured. The gate stays as it is: at least 1.0 MiB free at the console low-water mark in the heaviest 4P frame, and no allocation of 64 KiB or more after level load.

---

## 0. Summary

1. **Ten tracks**, six in Push B and four in Push C. Each owns its files outright.
   - The work starts with a short Week 0. It contains a measurement build for the first console session, an interface freeze, two textual file splits, and Push C's refactor seams. All of it is behaviour-neutral.
   - After Week 0 there are four integration trains, roughly at weeks 4, 7, 10 and 14, and a console session follows each.
2. **One way to mark a position in the display list for both pushes.** TTE is off. gsMain writes 5 to D1_CHCR (D:\Programming\GitHub\Timesplitters\project\generated\gsMain_0x200f20.cpp:482-491, d50798e), and the walker forwards a tag's upper half only when `chcr & 0x40` (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:1926, d50798e). The plan's NOP tunnel in the TTE half, and C-emitters' qwc-0 CNT tunnel, can therefore never reach the VIF. Both are dropped, and so is C-records' CNT+marker group. Their replacement:
   - **(a) CALL interception.** A CALL to a registered static chain is intercepted in the walker. The list is not changed.
   - **(b) In-list token tags.** A token tag is a REF with qwc 0 and a reserved ADDR range, validated against a host run table keyed by slot address and list generation. It is 16 bytes, never more list space than the tags it replaces.
   - The decoder recognises token pieces by pointer, not by a magic value.
3. **The GS front end has a single owner (B-GS).** That includes the front half of the emitter fast path (Tier 0 "GIF bulk"). M4.2 survives as that bulk path; its separate submit cache is dropped.
4. **One shared validation stack.** It consists of:
   - deterministic mode (M0.8) in B-SCHED;
   - a VIF-level record self-check;
   - a GS-level bulk-path self-check;
   - the game-logic write-journal lockstep;
   - boot differential tests.

   Every switch is either a compile-time macro or a runtime knob (an ini key or a pad-script line). nxdk's getenv always returns NULL, so it is not used.
5. **Corrected projection.**
   - 1P: about 56 ms after Push A (the plan's estimate, not yet measured on the console) → about 45 ms after Push B → **about 34 ms after B+C** (band 24-42), about 29 fps-equivalent.
   - 4P: about 161 → about 140 → **about 100 ms** (band 71-122).

   The reviews lowered the plan's M4.1, R1 and M6.1/6.2 figures; section 9 has the arithmetic and lists what closes the remaining gap. The first console session re-bases all of these numbers.

---

## 1. Facts this plan relies on (checked at d50798e)

### 1.1 Hook points re-located after F2

| What | Where (d50798e) |
|---|---|
| Chain walker: tag switch | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:2004-2075 (CNT :2009, CALL :2022-2040, RET :2041, END :2058); `recordSegments` :1807; TTE gate :1926; tag prefetch and payload pieces :2075-2130 |
| Vif1Batch (4,096 pieces, decoded ahead) | same file :97-200; flush into `decodeVif1Batch` :2682 |
| vif1SelfCheck | same file :2531 |
| Guest memory allocation | same file: `initialize` :611; RDRAM `new[]` :657; scratchpad :661; GS VRAM :686; VU0/VU1 :689-695 |
| EE timers | same file: `advanceEeTimers` :727-828; `cyclesUntilNextEeTimerInterrupt` :830 |
| VIF pieces decoder | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_vif1_interpreter.cpp: `decodeVIF1Pieces` :1347; UNPACK :1425-1566; NOP :1567; MSCAL/MSCALF/MSCNT :1616-1678; STROW/STCOL :1688. Window path: NOP :365, MSCAL :419 |
| Native VU1 program | D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp (F2 did not touch it): `materialFor` :315-353; `transformConstants` :408-461; `runDraw` :463-858 (static `packetBuffer` :465, `sendState` :498-527, static `strips[64]` :705, `beginXfRun` :831); `kickPacket` :883-910; `runInner` :950-977 (constant entries :957-969, 0x3FE0 :970) |
| GS front end | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp: `reset` :189; `processGIFPacket` :752; `processNativePackedGIFPacket` :818; `writeRegisterPacked` :957; `writeRegisterUnlocked` :1147; `vertexKick` :1615; `submitStrip` :1699; `beginXfRun` :1719; `decodeStateBlock` :1744; `applyStateBlock` :1787; `checkStateBlock` :1811; `setRasterBackend` :1863; `adjustWidescreenHud` :1921; `buildDrawBatch` :1978. `m_stateMutex` is at D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_frontend.h:269, with 27 uses in gs_frontend.cpp |
| NV2A backend (3,774 lines) | D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp: `struct Impl` :492; `trimCache` :694; `retireTexture` :897; `freeRetired` :929; `forgetRecent` :982; `texture` :989; `lookupTexture` :1218; `uploadVertexProgram` :2244 (`programStart[5]` :2240); `setAttributes` :2277; `uploadConstants` :2336; `settleFrame` :2428; `nextXfSegment` :2450; `reserveXf` :2478; `beginFrame` :2493; `finishFrame` :2562; `keyFor` :2697; `applyState` :2754; `flushBatch` :2883; `reserve` :2925; `submitScreenVerts` :2954; `beginXfRun` :3141; `endXfRun` :3322; `writeBackScreen` :3333; `Create` :3458 (pb_init :3473, ring :3480); `kMaxXfVertices` :268 |
| Backend interface | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_backend.h: `GSXfVertex` :13; `GSXfCursor` :43; virtuals :55-109. `GSDrawState` is at D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_types.h:233 |
| Perf wrapper | D:\Programming\GitHub\Timesplitters\src\xbox\xbox_perf.cpp:527-626 (`TimedBackend`; every virtual is forwarded by hand); [TS:kick] split :945-977 |
| Start-up | D:\Programming\GitHub\Timesplitters\src\xbox\xbox_main.cpp: `kSaveRoot` :49; `XVideoSetMode` :262; `static PS2Runtime rt` :279; backend install :284-291; `mcRoot` :308; Signal presentation :336 |
| Overrides | D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp: `xboxHandOutFrame` :777; `xboxZbtestCopyZB` :829; `g_perfBrackets` :879; `installPerfBrackets` :911; native registration :949-953 |
| Natives' guestCall helpers | D:\Programming\GitHub\Timesplitters\project\game\ts_native_game.cpp:143, D:\Programming\GitHub\Timesplitters\project\game\ts_native_game2.cpp:246, D:\Programming\GitHub\Timesplitters\project\game\ts_native_game3.cpp:250. ClockHold copies: D:\Programming\GitHub\Timesplitters\project\game\ts_native_selftest.h:290, D:\Programming\GitHub\Timesplitters\project\game\ts_native_fp.cpp:2101, D:\Programming\GitHub\Timesplitters\project\game\ts_native_math.cpp:3670 |
| Build | D:\Programming\GitHub\Timesplitters\src\xbox\Makefile: `GAME_SRCS` :90; `XBOX_SRCS` wildcard :92; `GEN_PATCHED` :98; `NATIVE_TWINS` :131; `GEN_FLAGS_TEXT` stamp :150-151; `FAST_OBJS` :156-166; patch rule :196-199 (takes no flags and has no stamp prerequisite); `XF_VARIANTS` :228; per-object backend flags :251-252; `HWPROF_OBJS` :259-264 |

### 1.2 Other verified facts
- **Piece shape.** Vif1Piece is a (pointer, length) pair. `extendBack` merges pieces that are contiguous in memory (ps2_memory.cpp:112-117). Token pieces therefore have to be added with `emplace_back` and spaced apart in the host ring, so they never merge with a neighbour.
- **No console results yet.** The console probe (D:\Programming\GitHub\Timesplitters\src\xbox\test\nv2a_probe) has never been run on the console, and there is no post-Push-A console profile. The latest console data is the 537a2bc profile (68.27 ms/frame).
- **The [TS:kick] "walk" bucket is not split.** It covers walk + VIF decode + MSCAL dispatch together (xbox_perf.cpp:945-952). Section 8's first session has to separate them.
- **No Dbuf or REF draws in the measured scenes.** In both measured 1P stretches every model batch is precalc: dbuf=0 and ref=0 (C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\run_stage012_rel2.txt).

---

## 2. Cross-cutting decisions

### D1. One way to mark a list position
- **Chain tokens (CALL interception).** partPrecalcDmaData's chains are registered when they are built (section 3.1). When the walker meets a CALL to a registered chain it does not descend. It reproduces the net effect of CALL+RET on the registers (`asr[asp] = retAddr` with asp unchanged, continue at retAddr) and appends either:
  - level 1: the chain's cached piece list (a "splice"), or
  - level 2 and above: one 16-byte token piece from a host token ring.

  RDRAM and the list stay byte-identical.
- **In-list token tags.** These are used for Tier 1 emitter ops, the partGfx prologue token and per-frame REF records.
  - The native writes a REF tag with QWC 0 and ADDR = 0x7FE00000 | slot (20 bits). It writes all 16 bytes of the tag.
  - The walker recognises `id==REF && qwc==0 && (addr & 0x7FF00000)==0x7FE00000`. It accepts the tag only if run table[slot] records this exact tag address and the current list generation.
  - A tag that fails validation transfers nothing (QWC 0). It is counted as `tokstale` and must stay 0.
  - **List generation.** Run tables are per list buffer: the two static buffers in the gp-0x6CF0 table, indexed by gp-0x6CE8. A table is cleared when a new list starts in its buffer.
  - **Why stale tags are harmless.** The game rewrites bytes 0-7 of every slot it uses. A stale token tag can survive only beyond the list's END, which is never walked, and validation rejects it anyway. C-emitters' "stale tunnel words" blocker therefore does not arise.
- **Token execution in the decoder.**
  - A token is recognised when the current piece pointer lies inside the host token ring. Execution happens only at a command boundary.
  - If a data read crosses into a token piece (`tokmid`), the reader expands a chain token into its original pieces, which the registry keeps, and continues exactly. List tokens cannot be expanded: they are fatal in check builds and counted in release builds. They are safe by construction because every dl* builder emits complete VIF command sequences, and C-EMIT's boot trace tests prove that.
  - In vif1SelfCheck's dry decodes every token is expanded, so vifdiff keeps its meaning. Token correctness is covered by the record and emit self-checks instead.

### D2. VU1 rows that are owed but not yet written ("debt") use a per-row provenance map, settled lazily
- **Structure.** `uint32_t owed[1024]` holds, per row, an index into a per-list write log of (descriptor, op, cycle, row base). A 1,024-bit bitmap gives fast window tests. Size: 4 KB, 128 B, and a 16 KB log ring.
- **When a row is settled.** Only when a reader touches it:
  - a partial-lane, masked or MODE≠0 UNPACK into an owed row;
  - any MSCAL that is not part of a record, for the program's read window, which C0 exports as `vu1NativeReadWindow(pc, top, &first, &count)`; an interpreted or unknown program settles everything;
  - MSCNT and processVIF1Data;
  - list end (`settleAll`), so VU1 memory is exact at every frame boundary and in the det `vu` stream.
- **What clears a row.** A full-lane UNPACK into it.
- **Dropped.** C-records' 8-entry capped table.
- **M8 needs this.** M8 skips the UNPACK as well, so it is built on the same map.

### D3. The GS front end has one owner
B-GS owns D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp and D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_frontend.h, and builds every front-end API both pushes need:
- the material table and commit-on-bind;
- state serials and a cached `drawState()`;
- the GIF bulk path, which is Tier 0's front half;
- `submitPrimitives`, an extension of `submitStrip`;
- a packed-vertex decode helper;
- check-state snapshot and restore, and a backend swap for checks;
- `notePrimNoDraw`;
- the `xfInPlace` forwarder.

C-EMIT owns the backend half (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_screen.inl) and the kick routing.

### D4. Validation stack (who checks what)

| Mechanism | Owner | Covers |
|---|---|---|
| Deterministic mode (pinned time; per-frame hashes of ram, iop, spu, vram, vu, ctx, sched, draw, pcm, ee) | B-SCHED | Every exact item: all of M3 except 3.4b, M4, splice/T0/R1/R2, the GS bulk path, Tier 1 (with registered exclusions) |
| TS_VIF_SELFCHECK, plus spliced-vs-walked piece compare | C-VIF | Walker, splice, tokens expanded in dry decodes |
| TS_NATIVE_RECORD_SELFCHECK (VIF level; R2 at GSXfVertex level) | C-REC, C-XF | R1, prologue token, REF tokens, R2 |
| TS_NATIVE_DRAW_SELFCHECK, TS_NATIVE_RING_SELFCHECK | C-XF | runDrawT for both data sources |
| TS_GS_STATE_SELFCHECK, TS_GS_BULK_SELFCHECK | B-GS | drawState cache, materials, GIF bulk vs per-register |
| TS_NATIVE_EMIT_SELFCHECK (Tier 1 op vs shadow packet, GS-level trace) | C-EMIT | Tier 1 ops |
| TS_INPLACE_SELFCHECK, boot GPU test | C-XF | M8 |
| Write-journal lockstep, boot differential tests in Abi mode, collision fuzzer | B-LOGIC | M7 |
| Check counters (cdiff, iopmiss, gsforeign, callslot, spu2diff, musicdiff) | per track | M3, M4 |
| Console screenshots at fixed script reads, 1P/2P/4P | integrator | everything visible |

**Det exclusions.** Registered through `xboxDetExclude(range)`:
- the two list buffers and gp-0x6CA0 (the game's own list high-water mark, written by cpuMain, D:\Programming\GitHub\Timesplitters\project\generated\cpuMain_0x200c48.cpp:560-599);
- the payload blocks of Tier 1 ops;
- dead stack below each thread's $sp, for M7 only.

**Det limits.** Det compares cycle-identical builds. M7's idiomatic natives charge different cycles, so they are validated by lockstep and behaviourally, not by det hashes.

**Draw stream.** B-SCHED's det wrapper hashes `SubmitPrimitives` in the same canonical per-primitive form as `Submit`. It never hashes host pointers. Push C hashes ring records at `endXfRun` through `xboxDetHash`.

### D5. Switches
- Every new path has a compile-time macro (default off until its train's gates pass) and, where an A/B in one console session matters, a runtime knob.
- **Knob registry.** D:\Programming\GitHub\Timesplitters\project\game\ts_knobs.h and D:\Programming\GitHub\Timesplitters\project\game\ts_knobs.cpp (new in Week 0). Knobs are read from the host settings file (`knob.<name>=<value>`) and from a pad-script line `knob <name> <value>`, added to D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_pad.cpp next to the existing markers (:340-365).
- Knobs change at frame boundaries only.
- A list token records the knob generation it was built under. The walker always honours tokens; the knob only stops new emission.

### D6. Memory
The gate is unchanged. Section 5 gives each track's budget. The net release change is about −1.0 to −1.6 MB, dominated by B-CODEGEN's pc-store removal (−1.0 to −1.3 MB) and B-LOGIC dropping replaced transcriptions (−0.35 MB). Every merge reports [TS:mem] free and low-water at 1P and 4P.

### D7. Dropped or deferred

| Item | Decision | Reason |
|---|---|---|
| Plan M5 tunnel (TTE half); C-emitters CNT tunnel; C-records CNT+marker groups | Dropped | TTE is off (D1) |
| Transient-descriptor emitter groups; instance-group prologue fold | Dropped | Twice the parse cost, and inconsistent with the builder. Replaced by Tier 0/Tier 1 and the native prologue token |
| C-records 8-entry debt table | Dropped | Replaced by D2 |
| M4.2 per-primitive submit cache | Dropped | About 0.03-0.1 ms. Its work is subsumed by `drawState()` and the GIF bulk path |
| M4.1 lazy GS register replay | Dropped | Not exact (the CLD-mirror counterexample). Commit-on-bind instead |
| Plan M4.3 "music folded into int32 accumulators" | Dropped | Not exact: the model double-clamps (ps2_spu2.cpp:280-281, ps2_music.cpp:233) |
| propTickBefore idiomatic driver, loop-head re-entry thunks, yieldPoint, guestCallResumable | Deferred to after Push B | Gain about 0.25 ms; the riskiest scheduler surface; cannot be lockstepped. M7.0 becomes NoYield plus the transfer guard |
| M3.4b lazy timers / larger device batch | Dropped | About 0.05 ms after 3.4a; not exact |
| B4's UploadFrame change | Dropped | UploadFrame never takes the GS state mutex in Signal mode (xbox_main.cpp:336) |
| GIF_STAT cached slot (3.4a) | Dropped | Already a flat array after F2 |
| C-E5 particle writer transcriptions | Gated (section 3.2) | Tier 0 with XYZ3 support is expected to cover the hot writers |
| C-E6 GS frame/Z page decommit and CPU texel-cache cap | Deferred to Push D | F2 already freed about 4 MB; depends on M3.8 and on Tier 1 being complete |
| Backend capture mode (BeginCapture/EndCapture/ReplayCapture) | Dropped | Emit checks compare at GS level with a recording backend swapped in (B-GS API). The backend bulk conversion is proven by a host test of one shared helper |
| Shrinking Vif1Batch to 1,024 pieces | Dropped | The heavy stretch keeps about 3,800 non-chain pieces |
| The 3-TU split of gs_nv2a_backend.cpp | Replaced | By a textual split into .inl fragments inside one translation unit (Week 0) |

### D8. Measurement-gated items
These start only after the named console result (section 8):
- B-GS phase 2 (native-run bindings);
- C-XF R2 (after the post-R1 phase split);
- M8 (probe GO);
- ring diet (only if M8 is no-GO or covers too little);
- C-REC per-frame REF/Dbuf tokens (story-level shares);
- M3.8 (MISALIGN counter);
- camTick idiomatic (per-player split);
- particle native emission;
- M6.5.

---

## 3. Corrected designs

Each area design stands except as amended here. Each track's agent receives its area design together with this section.

### 3.1 C-records: native draw records (M5, M6.1-6.3)

**Kept**
- Chain registration through wrappers on dlPushDmaTag (0x2B9018) and dlPopDmaTag (0x2B9028). partPrecalcDmaData is their only caller.
- Level reset through wrappers on memReset, memEnd and memMake.
- Building descriptors lazily by a dry parse that uses the decoder's own size rules. Rejection rules as in the design (§3.2).
- The three execution levels T0 (nested), R1 (replay through the decoder's helpers) and R2 (direct). R1 still writes VU1 memory, so it is exact by construction.
- Prefetch one record ahead.
- Every observable-state rule in design §6.

**Changed**
1. **Mechanism.** D1. There are no CNT groups, and partGfx needs no change for the precalc and Dbuf origins.
2. **New first increment: level 1, "cached piece splice".**
   - At admission the walker appends the chain's cached merged piece list (about 300 B per chain) and emulates CALL+RET.
   - The decoder is unchanged.
   - It is checked by TS_VIF_SELFCHECK, which compares spliced pieces against a walk in check builds.
   - It removes most of the chain share of the walker cost (addSegment 1.27 ms plus the writeIORegister walk 1.15 ms, about 75% of tags).
   - Splice lists and descriptors share one generational arena.
3. **Knob `records`.** 0 walk, 1 splice, 2 token→T0, 3 token→R1, 4 token→R2 (C-XF). Origin bits: 1 precalc, 2 Dbuf, 4 REF, 8 prologue.
4. **Dbuf versus precalc.** Classified in the dlPushDmaTag wrapper from partPrecalcDmaData's saved return address at 0x90($sp): 0x25FEBC, 0x25FF18, 0x260020 and 0x26007C mean Dbuf; 0x25FC54 and 0x25FC68 mean precalc. Not by a flag set in an outer wrapper, because a resume bypasses wrapper entry.
5. **Native prologue token, now in scope** (replaces the fold). In record mode partGfx's prologue (matrix, light and bone REFs plus the 0x3d40/0x3af8/0x3b50/0x3ba8 constant MSCALs) writes one in-list token. Its host record holds the static header addresses and the per-frame data addresses. The executor:
   - replays the prologue's ops from a descriptor cached by static-header shape, with the data sources patched per instance;
   - calls C0's exported constant-entry functions directly instead of dispatching through vif1Mscal;
   - sets the VIF end state (TOPS/DBF/TOP/ITOP per MSCAL, CODE/NUM).

   It removes about 8 tags and 3 MSCAL dispatches per part, about 25% of tags. It is checked by the VIF-level self-check (item 7).
6. **Per-frame REF origin (C4) uses in-list tokens.**
   - The native REF loops (ts_native_game2.cpp loops [0] :7609-7778, [1] :7915-8084, [2] :8353-8540) reserve a token slot when the loop opens and append each REF to the host record instead of to the list.
   - At a loopCheckpoint yield the record is closed. The translated resume then writes the remaining REFs normally after the token, so order is exact.
   - This is gated on story-level shares, because dbuf=ref=0 in the arcade scenes.
7. **TS_NATIVE_RECORD_SELFCHECK becomes VIF-level.** It reuses vif1SelfCheck's method: no programs run, and each MSCAL records {pc, top, itop, TOPS, DBF, hash of VU1 data} plus the end registers.
   - Old path: T0 expansion. New path: R1 or the prologue executor. Both start from a saved snapshot (VIF registers, VU1 data, g_vu1WatchedRows, the debt map, m_tokenNext) and restore it afterwards.
   - There are no backend or GS side effects, which fixes the review's "not dry" defect.
   - R2 is checked by C-XF at the GSXfVertex level (3.3).
8. **Memory.**
   - runDrawT's function-local statics (`packetBuffer` 48 KB, `strips`) move into one shared scratch, so instantiations do not duplicate them.
   - The arena starts at 64 KB (knob `records.arenakb`, grown on the measured hit rate). The busy working set is about 13 KB; the heavy stretch about 56 KB.
   - Token info lives in the token ring entry.
   - Vif1Batch stays at 4,096 pieces.
9. **Fingerprint audit.** Covers the tag lower halves plus each batch's header qwords, its MSCAL template qwords and the state block's UNPACK code.
10. **Validation counts.** Tokens are compared with the walker's own count of CALLs to registered chains, not with pre+dbuf.
11. **Materials.** The descriptor stores a material id from B-GS's table, re-checked by content: `materials().check(id, bytes, size)`. Keying by guest address alone is unsafe, because texture packets can be rewritten in place.
12. **Hook installation.** All game-function wrappers move into one registry, D:\Programming\GitHub\Timesplitters\project\game\ts_game_hooks.cpp. They are installed regardless of TS_RENDER_COUNTERS, chained, and checked by a boot assert. Wrapped functions: dlPushDmaTag, dlPopDmaTag, obPrecalcDbufGfxData, partPrecalcDmaData, vtxlistcolour, obInstLight, memReset, memEnd, memMake, memdbTick.

**Dropped.** The instance-group fold; transient group descriptors; C1's T0 as a shipping step (splice replaces it, and T0 remains the fallback and expansion path); the LogSink dry run through the backend.

**State identity.** As in design §6, with D1 and D2.
- Chain tokens leave RDRAM byte-identical.
- In-list tokens change only list contents and gp-0x6CA0, both det-excluded.
- VU1 memory is exact at every frame boundary.

**Gain per viewport (console, after Push A)**

| Step | Central (band) |
|---|---|
| Splice | 1.1 ms (0.8-1.5) |
| R1 | 3.0 ms (2-5) |
| Prologue token | 1.5 ms (1-2.5) |
| C4 tokens | 0 in arcade scenes |

The split between R1 and M8 depends on how processVIF1Pieces' 9.79 ms divides between command overhead and copying plus cache misses. Section 8 measures that.

### 3.2 C-emitters: every non-model drawing source

**Kept**
- The two tiers.
- The rule of "same GS register words, shared arithmetic".
- The memdb allocation sizes, so the memdb pointer sequence is unchanged.
- The guard on gp-0x4B50==0, because static chains built under dlPushDmaTag must stay PS2 packets.
- Write-through state ops.
- `noteNativeMscal` for the VIF end state of replaced kicks.

**Changed**
1. **Tier 0 lives inside `kickPacket`** (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:883-910), not in a decoder pre-hook. That gives it the program identity check for free (it only runs inside the TS native program), and vif1SelfCheck's dry decodes never run it (they null m_vu1MscalFast).
   - kickPacket calls B-GS's `GS::processPath1Bulk(data, size)`.
   - A+D state-only tags go to `materials().find` plus `applyMaterial`. Only texture-only blocks are inserted into the table; environment-only blocks go through a stack StateBlock and `applyStateBlock`. Non-A+D packets are rejected by their tag before hashing.
   - PACKED PRE vertex tags go to `submitPrimitives`. XYZ3/XYZF3 means "queue the vertex, no kick", so the decoder emits triangle lists across a restart. Strips longer than 64 vertices are chunked with a 2-vertex overlap.
   - Everything else falls back to processGIFPacket(Path1) at tag granularity: ADC, XYZ2 with ADC=1, PRMODE, lines/points, IMAGE, REGLIST, SIGNAL/FINISH/LABEL.
   - Tier 0 runs only while the GIF arbiter is empty.
2. **Render-to-texture safety.** The backend `SubmitPrimitives` declines (so the per-primitive path runs) when TME is set and the texture range overlaps gpuRange() or the current frame range. Builders never coalesce glyphs or sprites whose texture base overlaps a display buffer.
3. **Widescreen.** The old path narrows HUD primitives per triangle, on copies. When widescreen is on and an op passes the overlay test, the bulk path declines that op. Multiplayer forces widescreen off (M2.3), so 4P is unaffected.
4. **`submitPrimitives` end state.** It leaves m_cur{R,G,B,A,Q,S,T,U,V,Fog} at the last vertex's values and leaves m_vtxQueue/m_vtxCount as the last kick would. It extends `GS::submitStrip` (gs_frontend.cpp:1699) instead of adding a duplicate entry point.
5. **Tier 1 runs only through in-list tokens.**
   - Draw-op headers live inside the memdb block the game still allocates.
   - A small host arena (16 KB, two halves) holds state, texture-kick and ClipTag ops.
   - The executor runs at the token's list position, never from game code, because the display list is the ordering spine.
6. **Material ops use B-GS's shared table.** "Repeated" decisions then match the old path. There is no separate serial space; the bit-31 space applies only to blocks materialFor rejects.
7. **Texture kicks.** C-XF's runDrawT recognises the static degenerate strip, applies the state block, calls `gs.notePrimNoDraw(0x4C)` and skips the 3-vertex xf run. This is a 10-line first win. Tier 1's Material op later covers dlSelectTextureKick in op mode.
8. **Self-check (TS_NATIVE_EMIT_SELFCHECK).** A sampled op is checked in four steps:
   1. The builder also writes the original packet into a check arena.
   2. The executor snapshots GS state (B-GS `saveCheckState`), swaps in a RecordingBackend (B-GS `swapBackendForCheck`), runs the original packet through processGIFPacket, captures, and restores.
   3. It runs the op into the RecordingBackend; `SubmitPrimitives` is expanded per primitive.
   4. It compares, restores, then runs for real.

   Compare rules:
   - the texture-kick xf run (three vertices from template 0x3805B0) is ignored;
   - CODE/NUM must equal the last word the replaced packets actually contained (usually NOP padding);
   - the VU batch-area rows not written are verified by a "written since MSCAL" bitmap in check builds.
9. **Replay tools.** Dumps for frame_bench, dma_replay and gs_replay are taken with TS_NATIVE_EMIT=0 and records 0. gp-0x6CA0 is the list high-water measurement.

**Per emitter (the brief's explicit statement)**

| Emitter | Push C path | Verdict |
|---|---|---|
| State builders: dlSetZB, dlSetBlend, dlSetDitherMatrix, dlSetFBMSK, dlSetClip, dlSetClipTag | Tier 0 (state fast path), then Tier 1 Writes/State/ClipTag ops | Converted. Safe |
| dlSelectTextureKick | runDraw shortcut (C-XF), then Tier 1 Material op | Converted. Safe |
| HUD/text glyphs (textPrint → dlTextureRectangle(+Float) per glyph), dlFillRectangle(+Float), drawTitleBox, in-match menuGfx | Tier 0, then Tier 1 SpriteUV/Fill ops, coalescing consecutive glyph blocks of one texture | Converted. Safe. Native textPrint (one op per string) stays M9 |
| Fades and overlays: bossMainLoop dlClearFB / dlFillRectangle, hudPainGfx strips, dlDrawTriangleStrip | Tier 1 Fill/Strip ops | Converted. Safe |
| Decals (nativeDecalDraw tail, ts_native_game3.cpp:697-829) | Tier 1 Prims op (StripSTQ) in its own memdb block | Converted. Safe |
| Glows and flares (zbtestGfx, flareGfx, torchGfx) | Through the builders | Converted. Occlusion stays faked (ts_overrides.cpp:829-856) |
| Particles (particleGfx's 13 kinds, particleRender, quadRenderAligned, specialParticlesGfx, starfield, weather, bullets), windowGfx | Tier 0 with XYZ3: the GS route is native. The packet itself still crosses the VIF (UNPACK into VU1 plus MSCAL 0x3FE0) | GS route converted. Full native emission (13 writer transcriptions, 60-100 KB code) is gated on Tier 0's measured residue: ≥0.3 ms at 1P or ≥1 ms at 4P. **This deviates from the brief on cost/benefit grounds, not safety. User decision** |
| Glass and pickup markers (bgGlassGfxRoom, pickupposGfx) | Model-like batches on native runDraw | Unchanged in Push C; candidates for in-list tokens later. Safe |
| ip effects (ipDefocus, ipFishEye, ipMotionBlur, ipViewZB, ipSet{Screen,LastScreen,CurScreen,ZB}AsTexture), cartridgesTick's screen-as-texture, frontfxWaveyTexture | Emulated; builders do not coalesce; the bulk path declines | **Unsafe now.** GS memory is the texture source and needs the write-back protocol; Z needs reinterpretation |
| dlFinish (SIGNAL), dlLabel (LABEL) | Emulated | Kept. The EE observes CSR/SIGLBLID; 1-2 packets per frame |
| dlLoadTexture/PATH3, FMV, loading, front-end CPU frames, lists built under dlPushDmaTag, debug primitives | Emulated | Kept |

**Gain at 1P**
- Tier 0: front half (B-GS) 0.6-1.2 ms, backend bulk 0.4-0.8 ms.
- Tier 1: 0.5-1.0 ms.
- Texture-kick shortcut: 0.3 ms.

The emitter cost on the console was about 4.5 ms per frame after Push A.

### 3.3 C-inplace: the NV2A fetches vertices in place (M8)

**Kept**
- Formats, role mapping, eligibility and the q≠±0 scan.
- The skin-in-place shader variant.
- Index lists using ARRAY_ELEMENT16 with an odd tail.
- The fetch-emulation self-check.
- Cases A, B and C for coherency.
- The probe gating structure.

**Changed**
1. **Placement tiers.**
   - **P0 (default, no placement needed).** Heap RDRAM. Each array is checked once for physical contiguity at classification (MmGetPhysicalAddress of every page in its span; the result is cached in the eligibility byte, since Xbox memory never pages or moves). Fetches go through pbkit's existing DMA object 3, which covers all RAM with the NV target (D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:2677, :2852-2858), using physical offsets.
   - **P1.** Contiguous RDRAM (MmAllocateContiguousMemoryEx, called from Week 0's early-init hook after XVideoSetMode), still through object 3. If the reservation fails, or leaves less than the stated contiguous margin (pb_init's 520 KB push buffer, three 608 KB colour buffers plus depth, the 1.25 MB texture pool, the 352 KB ring, the 288 KB screen buffer), the block is freed and P0 is used.
   - **P2.** A new DMA object, only for Case B (PCI/AGP target) or the paged mode. Its target is set explicitly with a physical base, as make_target_dma does (D:\Programming\GitHub\Timesplitters\src\xbox\test\nv2a_probe\nv2a_probe.c:716-722).
   - The bit-31 VERTEX_B test leaves the GO gate for P0 and P1, and "T1 and T6b both fail" now only reduces coverage instead of cancelling M8.
2. **Code layout.** The code sits in C-XF's D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_xf.inl:
   - a mode→program table (5→1, 6→2, 7→3, 8→5);
   - per-mode attribute tables; setAttributes sets formats only for modes 5-8.
3. **Ring size is chosen at run time** in `Create`, after placement and the boot test: 352 KB unless in-place is active, and the shrink is decided from fallback counts measured at 4P. The runtime switch then really restores the old path's speed.
4. **Coherency fixes.**
   - In Case C a batch counts as flushed only by a WBINVD in a frame that began after the frame of its writer hook.
   - BREAK_VERTEX_BUFFER_CACHE is pushed in `xfInPlace` at the first in-place draw after a stamp change.
   - A write that overlaps arrays drawn in the open frame does flushBatch, pushFence, closeBlock, then waits.
   - frameFence[4] is dropped (settleFrame already keeps at most one frame in flight).
   - The design states that the VIF1 worker is off on the Xbox, so writers and drawing share the EE thread.
5. **Cursor fields.** `GSXfCursor::inPlace` and `inPlaceTaken` are cleared by GS::beginXfRun every time; the runner sets `inPlace=nullptr` when prepare fails.
6. **Writer hooks** come from ts_game_hooks (3.1 item 12), installed regardless of the counter switch. The WBINVD budget is sized for about one chain rebuild every 30-45 frames (wr=4-6 per window).
7. **Boot GPU self-test.**
   - Its own 64 KB contiguous scratch.
   - A 32-bit render target.
   - Includes consecutive in-place batches with overlapping index ranges at different offsets (aliasing in the post-transform cache).
   - The same aliasing case is added to probe T11.
8. **Gain is quoted as the residual after R1/R2.** M8 removes the ring writes (writeJoinedStrip, 3.06 ms pre-A) and the cold guest-array reads that R2 still performs; the latter are the copy/miss share of chain decode. Central 3.0 ms per viewport (2-4.5) on top of R2; the band moves with section 8's split.
   - Costs added: at least 182 BEGIN/END pairs per view and about 21 KB of push buffer per view (about 84 KB per frame at 4P).
   - GPU busy and push-buffer peak at 4P are part of the gate.
9. **M8 needs R2** (D2). Without it the UNPACK copies stay.
10. **Ring diet** (per-kind compact ring records: Plain 28 B, Lit/EnvMap 40 B, Skinned 44 B). Built only if M8 is no-GO or covers less than 70% of vertices; then worth 0.8-1.5 ms.
11. **Devkit caveat.** Every console result so far comes from the shared devkit. P1's contiguous layout must be re-checked on a retail console before P1 becomes the default. P0 does not depend on the layout.

### 3.4 B-runtime: EE runtime diet (M3) and deterministic mode (M0.8)

**Kept.** Pinned time policy, the 32-bit countdown with one-compare call return, native call slots, the patcher items, the -O2 ranking, the lock diet, 3.4a, libc, page-aligned guest memories, the scratchpad shortcut, the det hash streams and tools.

**Changed**
1. **`EeClockFreeze`** replaces all three ClockHold copies.
   - It sets a held flag and saves and restores g_ps2xEeBudget, m_budgetLoaded, m_eeCycle, m_fastUntil, pending and m_deviceBatchStart.
   - While held, ps2xEeCheckpointSlow only re-arms the budget and returns "not due": no syncCycle into device work, no device accounting.
   - Host test: charge more than 2^31 cycles under a freeze.
   - B-LOGIC's lockstep uses the same class.
2. **Every m_eeCycle writer goes through syncCycle()/reloadBudget(),** accountCycles included (EeScheduler.cpp:483-488, :1959-1961, :2238-2248).
3. **No-yield region budget.** Inside a region the budget runs to the next device-batch boundary only; Leave() zeroes it if a deadline, a slice end or pending is outstanding.
4. **Patch flags.** Week 0 adds `$(PATCH_FLAGS)` to the patch_generated.py command line and a patch-flags stamp as a prerequisite of `$(GEN_PATCHED)` (Makefile:196-199). It also includes the .mk fragments before `GEN_FLAGS_TEXT` (:150), so every M3 -D switch is in the stamp. The corpus test checks the flags header line in each patched copy.
5. **3.5 invariant: two more rules.**
   - A constant pc store followed by `goto label_X` is kept when label_X is a delay-slot resume label, i.e. followed by `if (ctx->pc == 0xX` (control_flow_emitter.cpp:152-185).
   - JAL/JALR to internal targets follow the same rule.
6. **Det host time.**
   - Every file time returned to the guest is derived from guest state: memory-card mcGetDir (MemoryCard.cpp:849, :270-275), fio stat (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Syscalls\Helpers\Runtime.h:176-181) and ps2_vfs.cpp:150.
   - The time zone is fixed (Runtime.h:194).
   - A `hosttime` counter must read 0.
7. **Det coverage.**
   - Cheap streams are also emitted at each pinned VBlankStart, which covers boot and loading.
   - A `vu` stream (VU1 data, 16 KB) is added.
   - xemu-to-console equality is informative, not part of gate G0.
8. **Backend install goes through one hook**, `xboxInstallBackend()` in xbox_perf.cpp (Week 0). It applies the perf wrapper, the det wrapper and single-owner GS locking.
9. **Stale facts corrected.**
   - exceptions.h is at D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xIOP\include\ps2x\exceptions.h.
   - eeK per frame is about one vblank in xemu.
   - There are 12,208 PS2X_CALL_SLOT sites.
10. **Added items.**
    - steady_clock::now() uses a precomputed 32.32 multiplier instead of three 64-bit divides (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_chrono.cpp:18-30; owned by B-PLATFORM).
    - Attribute the remaining __aulldiv callers.
    - A direct-mapped indirect-call cache for JALR (B-CODEGEN; missing-function path unchanged, gain 0.1-0.3 ms).
    - memcpy: alignment classes first (align the destination, then rep movsl; SSE1 movaps for 16-aligned blocks of 64 B or more). The histogram records alignment as well as size.
11. **The restrict rule text (3.9)** lives in B-CODEGEN's D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_native_call_xbox.h. `__restrict` on rdram stays rejected.

**Gain (1P).** 3.1 0.4; 3.2 0.25; 3.3 0.55; 3.4a 0.4; 3.5 0.7; 3.6 0.4; 3.7 0.35-0.8; 3.8 0-1.5 (gated); 3.9 0.35 (optional); 3.10 0.1; chrono 0.1; indirect-call cache 0.1-0.3. About 4.1 ms (3-6.5).

**Memory.** −1.0 to −1.3 MB of code from 3.5; +0.1 MB from 3.6.

### 3.5 B-materials and audio (M4)

**Kept**
- Commit-on-bind with the CLD-mirror reasoning.
- The content-exact GSMaterialTable (512 entries × 128 B, replacing `s_materials`).
- State serials bumped in the single writer (`writeRegisterUnlocked`).
- `drawState()` cached by serial.
- The voice-major mixer with constant-gain envelope segments.
- Music as a separate exactly double-clamped pass.
- The music loader.

**Changed**
1. **Two phases.**
   - **Phase 1:**
     - the material table and `applyMaterial`;
     - serials and `drawState()` (passed by reference, no copy per run);
     - the material half of the DrawKey (program, address, filter, levels) cached on the backend's recent-texture entries, keyed by tex0 bits, tex1, clamp, texa, clut and tme;
     - the environment half cached on envSerial, primBits and frameNumber.

     No new interface is needed between the GS and the backend.
   - **Phase 2:** BeginNativeRun, RunIds and per-material bindings. Only if the post-phase-1 console per-call rdtsc shows more than 0.5 ms per viewport left in GS::beginXfRun + Impl::beginXfRun + keyFor + texture.
2. **`kComplete` flag.** A binding (phase 2) or a cached material half requires the block to write TEX0 (TEX2 alone does not count), TEX1 and CLAMP of one context. Other fast blocks commit quickly but clear m_bound. Host test: TEX2-only and partial blocks between two different complete blocks.
3. **Bound material by value.** `m_boundId` and context are stored by value, never as a pointer into a recyclable LRU slot. The table and `applyMaterial` belong to the renderer thread; callers on the VIF1 worker use the packet path.
4. **Targeted texture invalidation.** retireTexture clears the bindings and cached halves that reference that texture, as forgetRecent does. There is no global texGen flush, which matters for F2's trimCache at 4P.
5. **Tier 0's front half is a B-GS deliverable** (D3). `GS::processPath1Bulk` is the M4.2 equivalent. M4.2's backend submit cache is dropped.
6. **Self-check macros.** TS_GS_STATE_SELFCHECK and TS_GS_BULK_SELFCHECK are defined in gs_frontend.cpp with `#ifndef`, so a .mk define flips them. The backend macro is in gs_nv2a_state.inl. The host tests also compare m_curQ and m_textureStateWrites, and test the envSerial invariant. A host test randomises the split boundary between in-place and streamed GIF decode (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xTest\src\ps2_gif_stream_tests.cpp).
7. **`ts_material::applyRunState`** is header-inline in D:\Programming\GitHub\Timesplitters\project\game\ts_material.h. The existing g_nv2aTextureStats material fields keep counting, so the status line stays meaningful.
8. **Audio.**
   - Music ranges are `(interleave/2) & ~15`, with whole-pair reads when the interleave is under 64.
   - The streamed path also builds on the host behind a switch (std::thread).
   - open() and close() swap the FILE* and bump the generation under m_mutex, and close the old handle outside it.
   - The ranges for block 0 are prefetched on open() and rewind().
   - The loader stack is sized with TS_STACK_PAINT.
   - The existing partial-last-pair re-read bug (ps2_music.cpp:166-187) gets an explicit test.
   - writeSpuMemory takes the Spu2 lock only in check builds.
   - VoiceTrans copies IOP to SPU RAM directly instead of allocating a std::vector of up to 2 MB (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Stubs\Audio.cpp:199-205), which removes a mid-match allocation.
   - [TS:audio] is published through the report registry, never written from the TIME_CRITICAL feeder.
   - Spu2::takeIrq becomes atomic (absorbed from M3.3).

**Gain (1P).**
- Phase 1 materials: 0.6-1.2 ms.
- GIF bulk front half: 0.6-1.2 ms.
- Phase 2: 0-0.5 ms.
- Mixer: 2-3.5% of CPU per second, about 0.8-1.5 ms at a 35-45 ms frame.
- Loader: 0.05 ms, plus no audio stalls on disc reads.

**Memory.** Phase 1 about +5 KB net; phase 2 +28 KB (56 B per binding); audio +20 KB.

### 3.6 B-gamelogic: game-logic natives (M7)

**Kept**
- Idiomatic modules lifted from the transcriptions, with float order kept.
- Per-callee observed-register contracts.
- The purity audit.
- x87 doubles with fallback to fp-bit.
- The animation, collision, portal and lighting modules.
- Boot differential tests in Abi mode with 1-4 players randomised.
- The write-journal lockstep.

**Changed**
1. **Lockstep repaired.**
   - (a) Every idiomatic guest store goes through a store helper that calls `g_journal.touch` under PS2X_WRITE_JOURNAL. A static_assert forbids raw stores in check builds.
   - (b) A global reference mode: while the A run executes, every IdiomEntry forwards to its previous occupant and nested sampling is suppressed. The boot differential uses the same mode.
   - (c) EeClockFreeze (3.4 item 1).
   - (d) No lockstep across impure calls. It applies to pure kernels only.
   - The compare is NaN-aware: payload-only differences are counted separately, as the boot tests do.
2. **Glass in collision: compute-then-commit.**
   - The collision kernel stages every guest-visible effect (stores, newrnd seed, memdb bump, propCalculateWalls allocations) in host locals and commits them at the end.
   - At each glass point it evaluates bgGlassMoveTestRoom's hit test read-only.
   - If propDamage would be reached, it discards the staged effects and calls the previous occupant.
   - Exact at any bail-out point; replaces the entry guard. Coverage counter: `glassbail`.
3. **propTickBefore driver deferred (D7).** M7.0 is NoYield (charge cycles, never "due") plus the transfer guard: deferred preemption in transferIfRequested, and a fatal error in blockCurrent/transferToDispatcher inside a region. B-SCHED implements both in EeScheduler.cpp.
4. **Direct leaf calls have an owner: B-CODEGEN's patcher.** direct_calls.py emits inline calls to ts_leaf.h cores at translated call sites. Those cores are owned by B-LOGIC and listed in D:\Programming\GitHub\Timesplitters\src\xbox\tools\leaf_whitelist.txt. The calls respect the per-callee observed-register sets from D:\Programming\GitHub\Timesplitters\project\game\native\ts_abi_observed.h. This brings back the plan's 7.1 leaf share (0.4-0.7 ms).
5. **ABI audit.**
   - A fixpoint over the call graph: observed(X) includes registers that flow out through tail returns of X's callers.
   - $v0/$v1/$f0 are ordinary registers for void callees.
   - purity_audit.py reads the host-override list (xboxWaitSema, loggedAssert, zbtest; ts_overrides.cpp:944-961) and treats I/O-polling loops as blocking.
   - Poisoning (TS_NATIVE_POISON) runs in xemu from week 3, not only in the PC run that waits on M0.8.
6. **Memory.** Each replaced transcription is dropped when its module merges. The fallback, switch-back target and lockstep A run becomes the translated original (-Oz).
   - Week 0 wraps each module's transcription bodies, registration entries and self-test entries in a macro: TS_NATIVE_TRANSCRIBED_ANIM, _LIGHT, _COLLISION, _PORTAL.
   - Newly replaced originals go into NATIVE_TWINS via D:\Programming\GitHub\Timesplitters\src\xbox\tools\native_replaced.txt, which B-CODEGEN's rank_o2.py reads.
7. **x87 edge cases.** Fall back when the result's exponent field is 1 or less, or when the result is zero but both operands of a mul/div are nonzero. Require `(cw & 0x3F) == 0x3F` as well as the PC/RC bits. The 3M-case host test targets these boundaries.
8. **Float semantics.** Idiomatic code uses the recompiler's helpers (divS, the cvt macros) and keeps operand order.
9. **Switches.** Make variables with stamps (.mk fragment), plus the knob `idiom` (bitmask) for A/B within one console session.
10. **Sub-brackets** (Week 0).
    - Listed before the phase brackets so installPerfBrackets' identity check passes (ts_overrides.cpp:911-935).
    - Several return addresses per bracket (animMtxTick has five call sites in lvTickAfter).
    - Per-player accumulators for camTick, bgPortalTick and playerTick.
11. **Gain bands.** M7.2 1.0-1.6 ms at 1P. M7.3 3-5 ms at 4P.
12. **Ownership fixes.**
    - The lightCall dispatch site (ts_native_math.cpp:1129-1162) is converted to call slots in Week 0.
    - B-LOGIC exports the lighting test setups through D:\Programming\GitHub\Timesplitters\project\game\ts_native_math.h.
    - The animation sub-track writes its own skeleton setups and does not use C-REC's game2 setups.
    - The story and fight pad scripts are copied into D:\Programming\GitHub\Timesplitters\src\xbox\test in Week 0.

**Gain (1P).**

| Item | ms |
|---|---|
| M7.1 x87 + libm doubles | 0.8-1.2 |
| Direct leaf calls (via B-CODEGEN) | 0.4-0.7 |
| M7.2 | 1.0-1.6 |
| M7.3 | 1.4-2.0 |
| M7.4 | 0.6-0.9 |
| M7.0 residual | 0.1-0.3 |
| Less overlap with 3.5/3.6 | −0.3 |
| **Total** | **about 5.0 (3.8-6.5)** |

At 4P: about 9.5 ms (8-11).

---

## 4. Week 0: measurement build, interface freeze, splits, seams

Week 0 consists of four commits that land in this order. All are behaviour-neutral, and each is merged by the integrator, so that no track ever needs to edit another's file for an interface.

**Overall neutrality gate, after each commit:**
- objects from the generated code byte-identical (objdump compare of D:\Programming\GitHub\Timesplitters\build\xbox\obj\build\xbox\gen);
- boot self-tests: 0 mismatches;
- vifdiff = drawdiff = ringdiff = mscheck = 0 over arcade-match.pad in xemu;
- [TS:render], [TS:tex] and [TS:kick] counts identical over the scripted window;
- screenshots at fixed script reads identical to d50798e;
- the PC/ps2xTest build compiles.

### W0-M: measurement build (for console session 1)
All additions are counters behind TS_MEASURE_PUSHBC=1:
1. **Kick split** (`[TS:kick2]`): walk only (rdtsc around the tag loop); decode by piece origin (rdtsc at origin changes, chain vs main list); time spent in UNPACK copies (rdtsc per UNPACK; the overhead is reported); native VU1 run by entry class (draw, constant, kick); GS front end; backend.
2. **Per-call rdtsc** around GS::beginXfRun, Impl::beginXfRun, keyFor, texture() and DrawKey compares. Counts of non-native textured primitives. Per-kick primitive histogram (1 versus many), and kick kinds (state-only / vertex / other / XYZ3 seen).
3. **Tick sub-brackets** (3.6 item 10).
4. **[TS:ee]:** fired checkpoints, unwinds, a per-resume-address count for natives' translated resumes, and __aulldiv callers by return address.
5. **Logged once:** D1_CHCR at the first gsMain kick; the x87 control word at boot, at lvTickBefore entry and after a kick.
6. **Platform:** lock census (return-address histogram in D:\Programming\GitHub\Timesplitters\src\xbox\winapi\sync_ts.c); memcpy/memcmp size × alignment histogram (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_string.cpp).
7. **List and memdb:** gp-0x6CA0 high-water against list-buffer capacity; memdb half high-water.
8. **Chains:** chains registered per level (partPrecalcDmaData calls since level load), and distinct chains per frame.
9. **MXCSR DE/UE** attributed per tick phase.
10. **Memory:** largest contiguous block and the physical memory total at boot.

### W0-I: interface freeze and build plumbing (integrator)

**Build**
- D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:
  - include `$(wildcard $(XBOX)/mk/*.mk)` before `GEN_FLAGS_TEXT`;
  - extension variables EXTRA_GAME_SRCS, EXTRA_XBOX_OBJS_FAST, EXTRA_RUNTIME_SRCS and EXTRA_DEFINES, folded into the stamp;
  - `$(PATCH_FLAGS)` and a patch stamp on `$(GEN_PATCHED)`;
  - the GEN_FAST_NAMES and NATIVE_TWINS lists moved verbatim into D:\Programming\GitHub\Timesplitters\src\xbox\gen_fast_names.mk;
  - a `host-tests` target driven by D:\Programming\GitHub\Timesplitters\src\xbox\test\host_tests.mk.
  - After this commit the Makefile is frozen. Each track owns its own D:\Programming\GitHub\Timesplitters\src\xbox\mk\<track>.mk.
- D:\Programming\GitHub\Timesplitters\project\game\CMakeLists.txt: globs for the new directories and the TS_NATIVE_HOST option. Frozen afterwards.

**Backend interface** (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_backend.h), all defaulting to the old path:
- `virtual bool SubmitPrimitives(const GSDrawState&, uint32_t prim, const GSVertex*, uint32_t n) { return false; }`
- `virtual void XfInPlace(GSXfCursor&, const GSXfInPlaceStrip*, uint32_t) {}`
- `struct GSNativeRun` and `virtual GSNativeRunResult BeginNativeRun(...) { return GSNativeRunResult::Unsupported; }` (for phase 2)
- GSXfCursor tail fields `inPlace` and `inPlaceTaken`

Also: `GSDrawState::serial` (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_types.h:233) and the empty header D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_material.h.

**Perf and det plumbing**
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_perf.cpp:
  - TimedBackend forwards every new virtual;
  - `xboxInstallBackend(GS&, unique_ptr<GSRasterBackend>)` chains perf → det wrapper (TS_DET) → `gs.setSingleOwner` (TS_GS_LOCK_ELIDE, default 0);
  - a report-line registry `xboxRegisterReportLine(name, fn)`;
  - the `xboxDetFrame()` call;
  - a start-up log line naming which draw paths are active, and an assert that the active backend overrides SubmitPrimitives when Tier 0 is enabled.
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_main.cpp:
  - `xboxEarlyPlatformInit()` after XVideoSetMode (:262): a weak no-op that C-XF implements;
  - backend install through `xboxInstallBackend` (:284-291);
  - `xboxDetSetup()` hook: weak, implemented by B-SCHED.
  - Frozen afterwards.

**Runtime interfaces**
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_vif1_records.h (new): token kinds, `Vif1RecordHooks`, `setVif1RecordHooks`.
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_det.h (new, no-op unless TS_DET): `detTrace`, `xboxDetHash`, `xboxDetExclude`.
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ee_checkpoint_clock.h (new): EeClockFreeze, ps2xNoYieldEnter/Leave, EeTimePolicy. The shims behave exactly like today until B-SCHED fills them in.
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_host_lock.h (new): `OwnedRecursiveMutex`, elision off.
- The journal hook point in `ps2TraceGuestWrite` (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_runtime.h:264), and its twin in D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_guest_memory_xbox.cpp scratchpad writes; both compiled out by default.

**Game-side hooks and knobs**
- D:\Programming\GitHub\Timesplitters\project\game\ts_game_hooks.h and D:\Programming\GitHub\Timesplitters\project\game\ts_game_hooks.cpp (new): the wrapper registry, with the existing wrappers moved here from D:\Programming\GitHub\Timesplitters\project\game\ts_render_counters.cpp.
- D:\Programming\GitHub\Timesplitters\project\game\ts_knobs.h and D:\Programming\GitHub\Timesplitters\project\game\ts_knobs.cpp (new); the `knob` line in D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_pad.cpp; `knob.*` passthrough in D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_host_settings.cpp.
- D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp: registration calls for every planned module (registerTsNativeIdiom, registerTsNativeDl, registerTsRecords, registerTsPacing), each a stub in its owner's file; the sub-brackets.

**Mechanical code hunks**
- Natives: guestCall helpers (ts_native_game.cpp:143, ts_native_game2.cpp:246, ts_native_game3.cpp:250) and lightCall in ts_native_math.cpp gain `#if TS_NATIVE_CALL_SLOTS` (default 0) around the include of ps2_native_call_xbox.h.
- The three ClockHold copies forward to EeClockFreeze.
- Module transcription bodies, registrations and self-test entries are wrapped in TS_NATIVE_TRANSCRIBED_* (default 1).
- gs_frontend.h:269 becomes `ps2x::OwnedRecursiveMutex`; the 27 lock sites switch to CTAD `std::lock_guard`; the manual lock/unlock pair in beginXfRun/endXfRun (gs_frontend.cpp:1719-1742) is kept with the new type.
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_raylib.cpp: a 3-line det silence gate in audioFeeder.
- D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c: `uint32_t pb_vbl_count(void)` accessor.
- Story and fight pad scripts copied from the scratchpad into D:\Programming\GitHub\Timesplitters\src\xbox\test\story.pad and D:\Programming\GitHub\Timesplitters\src\xbox\test\storyfight.pad.

### W0-S: textual splits (integrator)

**NV2A backend.** D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp stays one translation unit. Its `struct Impl` (:492) gains three `#include` fragments, each declaring its own members:

| Fragment | Contents |
|---|---|
| D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_state.inl | texture, lookupTexture, CLUT, retire/trim/forgetRecent, blendState, clipFor, keyFor, applyState, and new predicates `sameRun(key)` / `stateMatches()` carrying today's comparisons |
| D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_xf.inl | reserveXf, nextXfSegment, beginXfRun, takeXfCursor, emitXfStrip, endXfRun, uploadVertexProgram, setAttributes, uploadConstants |
| D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_screen.inl | submitScreenVerts and `reserve` (screen GpuVertex) |

The core keeps frames, flushBatch (which calls `stateMatches()`), Create, transfers, readbacks and the entry points. No per-object Makefile rule changes; header dependencies come through -MD.

**Guest memory.** D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp is split into two new files, both added to FAST_OBJS through the .mk:
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory_timers.cpp: advanceEeTimers, cyclesUntilNextEeTimerInterrupt, the timer register read/write paths;
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory_alloc.cpp: the allocation and free parts of initialize, cleanup and the destructor, behind `ps2xHostAllocGuest(kind, size)` / `ps2xHostFreeGuest`.

### W0-C: Push C seams (by the C-VIF owner)

**Decoder helpers.** The bodies of the decoder's UNPACK, MSCAL and STxx branches (ps2_vif1_interpreter.cpp:1425-1566, :1616-1678, :1679-1697) become PS2Memory helpers:
- `vif1Unpack<Reader>(cmd, Reader&)`, templated on a piece reader or a contiguous reader so record and decoder share one body;
- `vif1Mscal`, `vif1MscalState`;
- `vif1NativeEnter`, `vif1NativeExit`, `vif1Interpret`, `vif1NativeActive`;
- `noteNativeMscal(startPC, count, finalCode)`.

The decoder calls these helpers itself.

**Native VU1 program split**
- `runDraw` moves into D:\Programming\GitHub\Timesplitters\project\game\vu1_native_draw.h as `template<class Source, class Sink> bool runDrawT(...)`, with VuSource and ProductionSink, and one shared scratch replacing the function-local statics.
- `materialFor`, `loadConstants` and `transformConstants` move into D:\Programming\GitHub\Timesplitters\project\game\vu1_native_material.h.
- D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp keeps run/runInner/kickPacket and gains `vu1NativeReadWindow(pc, top, &first, &count)` plus exported constant-entry functions.

**Gate.** As above, plus a console spot check that kick-phase time has not regressed beyond noise (in session 1 or 2).

---

## 5. Tracks

### 5.0 Overview

| # | Track | Push / milestones | Effort | First merge | 1P gain (central, band) | 4P gain |
|---|---|---|---|---|---|---|
| 1 | B-SCHED | M3.1, M0.8 det, M7.0 runtime, M6.4/6.5 | M (6-8 wks) | Train 1 | 0.5 (0.3-0.8); M6.4 restores game speed | 0.8 |
| 2 | B-CODEGEN | M3.2, 3.5, 3.6, 3.9, direct leaf, indirect cache | M (4-5 wks) | Train 1 | 1.9 (1.2-2.8) | 2.8 |
| 3 | B-PLATFORM | M3.3, 3.4a, 3.7, 3.8, 3.10, chrono | M (3-4 wks) | Train 1 | 1.7 (1.0-3.3) | 2.6 |
| 4 | B-GS | M4.1 (phases 1 and 2), GIF bulk (Tier 0 front), GS APIs | M (5-8 wks) | Train 1 | 1.5 (0.8-2.4) | 4.5 (2.5-7) |
| 5 | B-AUDIO | M4.3, M4.4 | S-M (2-3 wks) | Train 1 | 1.0 (0.7-1.5) | 2.0 (1.5-3) |
| 6 | B-LOGIC | M7.1-7.4 plus harness | L (10-14 wks, 4-5 sub-owners) | Train 1 (harness, x87) | 5.0 (3.8-6.5) | 9.5 (8-11) |
| 7 | C-VIF | W0-C seams, walker/decoder tokens, splice, list tokens, debt hook sites | M (5-7 wks) | Train 1 | counted in C-REC | — |
| 8 | C-REC | registry, builder, cache, R1, record self-check, prologue token, REF/Dbuf tokens | L (10-14 wks) | Train 1 (registry) | 5.0 per viewport (3.3-8.0) with C-VIF | 18 (12-30) |
| 9 | C-XF | texture-kick shortcut, R2 + provenance, M8 (probe, placement, backend, glue), ring diet (conditional) | L-XL (12-16 wks) | Train 1 (shortcut) | 4.5 (2.5-7.5) if M8 GO; 1.5-2.5 if no-GO | 16 (9-28) |
| 10 | C-EMIT | Tier 0 routing and backend bulk, Tier 1 builders and decals, emitter harness, particles (gated) | L (10-13 wks) | Train 1 (Tier 0) | 1.3 (0.8-2.0), plus B-GS's front half | 3.5 (2-6) |

### 5.1 B-SCHED: scheduler, determinism, pacing

**Scope**
- **Week 1 deliverable** (unblocks B-SCHED's own det work, B-LOGIC and B-CODEGEN):
  - pinned EeTimePolicy in processDueDeadlines (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:1934-2045), waitForEvent (:2184-2250) and deadlineMayBeDue (:2327-2331);
  - a VBlankStart hook; forEachThread; cycleNow;
  - detTrace at makeRunning, processEvent, queueInvocation, dispatchIrq, fired checkpoints, transferToDispatcher and handleSyscall;
  - EeClockFreeze semantics (3.4 item 1);
  - NoYield depth with the transfer guard: checkpointDecision :451 returns "not due" inside a region; transferIfRequested :914 defers; blockCurrent :1813 and transferToDispatcher :394 are fatal inside a region.
- **Det harness (M0.8):**
  - D:\Programming\GitHub\Timesplitters\src\xbox\xbox_det.h and D:\Programming\GitHub\Timesplitters\src\xbox\xbox_det.cpp: streams ram, iop (page-wise readIopMemory), spu (after B-AUDIO's const accessor), vram, vu, ctx (field-wise), sched, draw (canonical, no pointers), pcm (executor-side mixing at VBlankStart through B-AUDIO's public mix API), ee;
  - TS_DET_EVERY, TS_DET_DUMP, TS_DET_TRACE; the exclusion registry;
  - pinned host inputs: sceCdReadClock, memory-card and file times, time zone, host settings defaults, det memory-card root emptied at boot, timed pad scripts rejected;
  - tools D:\Programming\GitHub\Timesplitters\src\xbox\tools\det_compare.py and D:\Programming\GitHub\Timesplitters\src\xbox\tools\det_diffram.py;
  - gate G0, with archived baseline hashes of d50798e.
- **M3.1:** g_ps2xEeBudget, syncCycle/reloadBudget, every m_eeCycle reader and writer and every pending writer routed through them, requestStop zeroing the budget; PS2X_CALL_ENTRY with ps2xCallReturnSlow; the final form of ps2xDirectCall for B-CODEGEN.
- **publishSnapshot on demand.**
- **M6.4:** native timeTickStart in D:\Programming\GitHub\Timesplitters\project\game\ts_pacing.cpp with a fractional carry (knob `pacing.carry`) and [TS:pace].
- **M6.5 (gated):** pb_vbl_count as the VBlankStart source; an even-vblank hand-out in xboxHandOutFrame (ts_overrides.cpp:777-819) once busy p90 has been ≤31 ms for 120 frames.

**Owns**
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ee_scheduler.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ee_checkpoint_clock.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_runtime.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_direct_call_xbox.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_runtime.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_io_stats.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_det.h
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_det.h
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_det.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Stubs\CD.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Stubs\MemoryCard.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Syscalls\Helpers\Runtime.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_vfs.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_host_settings.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_perf.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_perf.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_pacing.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\det_compare.py
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\det_diffram.py
- D:\Programming\GitHub\Timesplitters\src\xbox\test\ee_countdown_test.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\b_sched.mk

**Provides:** I-7, I-8 and I-10 (section 6), the det harness and EeClockFreeze. **Consumes:** pb_vbl_count (Week 0); B-AUDIO's mix API.

**Validation**
- Host countdown test, including accountCycles in small steps and holds above 2^31 cycles.
- TS_EE_COUNTDOWN_CHECK: cdiff=0 over 1P/2P/4P.
- objdump shows `subl; jle` at every back-edge.
- Det: G0 self-consistency on 1P/2P/4P plus the story script; the sensitivity check (+1 cycle on one hot back-edge) is caught; `hosttime=0`; `g_detRemoteEvents=0`; catch-ups 0.
- Pacing: Σframesi against vblanks within ±1 per 600 frames at 1P and 4P; stopwatch against the match clock.

**Effort:** M (hooks 1 week; det 2-4; countdown 2-3; pacing 1-2).

### 5.2 B-CODEGEN: generated-code shape

**Scope**
- patch_generated.py:
  - pc stores kept only before consumers (allowlist from the corpus; delay-slot resume-label rule);
  - pure delay-slot flag triples dropped;
  - resume-switch guard;
  - optional `__restrict` ctx;
  - JALR → `ps2xIndirectCall` with a direct-mapped cache (header-inline; missing-function path unchanged);
  - direct leaf calls to ts_leaf.h cores per leaf_whitelist.txt and ts_abi_observed.h.
- compact_function_table.py emits slot addresses and `consteval ps2SlotOf`; ps2_native_call_xbox.h defines PS2X_GUEST_CALL; the natives' macro is switched on through b_codegen.mk.
- rank_o2.py (samples per KB, code budget, excludes NATIVE_TWINS and native_replaced.txt) writes gen_fast_names.mk from the fresh post-A hwprof.

**Owns**
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\patch_generated.py
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\direct_calls.py
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\compact_function_table.py
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\rank_o2.py
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_native_call_xbox.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_indirect_call_xbox.h
- D:\Programming\GitHub\Timesplitters\build\xbox\gen\ps2_function_slots_xbox.h (generated)
- D:\Programming\GitHub\Timesplitters\src\xbox\gen_fast_names.mk
- D:\Programming\GitHub\Timesplitters\src\xbox\test\patch_generated_test.py
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\b_codegen.mk

**Consumes:** B-SCHED's final ps2xDirectCall and PS2X_CALL_ENTRY (by week 3); B-LOGIC's D:\Programming\GitHub\Timesplitters\project\game\native\ts_leaf.h, D:\Programming\GitHub\Timesplitters\src\xbox\tools\leaf_whitelist.txt, D:\Programming\GitHub\Timesplitters\project\game\native\ts_abi_observed.h and D:\Programming\GitHub\Timesplitters\src\xbox\tools\native_replaced.txt (data files B-LOGIC owns); the post-A hwprof from session 1.

**Validation**
- Corpus test over all generated files: invariant holds, dropped + kept = found, no unknown identifiers, the flags header matches the stamp.
- Boot self-tests 0. Slot table compared at boot; TS_CALL_SLOT_CHECK 0. TS_CTX_GUARD 0 (restrict).
- Det identical per patch flag, for slots and for the new -O2 list (1P/2P/4P).
- Code size from main.map; [TS:mem].

**Effort:** M.

### 5.3 B-PLATFORM: locks, timers, IOP, libc, guest memory

**Scope**
- Uniprocessor SRW (unlocked cmpxchg/and/xadd); CV wake skipped when there are no waiters; TS_LOCK_CENSUS.
- GS lock elision through ps2_host_lock.h; the single-owner flag is switched on through b_platform.mk, and Week 0's install hook makes the call.
- IOP idle fast path (idleUntil, inputEpoch, 2^17 cap, TS_IOP_IDLE_CHECK); HBLANK `divl`; CUE mask.
- memcpy/memmove/memcmp/memset by size and alignment class; xbox_memeq.h.
- `ps2xHostAllocGuest`: page-aligned (VirtualAlloc) for RDRAM and VRAM; VU0/VU1 and scratchpad 4 KB-aligned from one 56 KB block; a weak `ps2xPlatformAllocRdram` override point for C-XF.
- Scratchpad shortcut in the guest slow paths.
- steady_clock multiplier.
- Platform boot self-tests.

**Owns**
- D:\Programming\GitHub\Timesplitters\src\xbox\winapi\sync_ts.c
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_host_lock.h
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_string.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_memeq.h
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_chrono.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xIOP\src\emulator\iop_emulator.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xIOP\src\iop_subsystem.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_iop_host.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory_timers.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory_alloc.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_guest_memory_xbox.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_platform_selftest.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\test\xbox_string_test.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\b_platform.mk

**Named shared-file interface:** in C-VIF's D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_memory.h, B-PLATFORM may edit only the EE-timer member block and the guest-alloc declaration block. Week 0 marks both with comments.

**Validation**
- Lock torture: 2 threads × 200k operations, exact counter, recursion depth, CV ping-pong.
- gsforeign=0. iopmiss=0 at 1P and 4P.
- Timer arithmetic: 100k random cases identical. Randomised libc test at boot and on the host.
- Det identical per switch.
- Console: MISALIGN_MEM_REF drops after 3.8; A/B busy per switch.

**Effort:** M.

### 5.4 B-GS: GS front end and the NV2A state half

**Scope**
- **C-facing API slice, by week 2:**
  - `drawState()` with its serial; serial bumps in writeRegisterUnlocked, reset and setRasterBackend;
  - `submitPrimitives` (extends submitStrip and sets m_cur*);
  - the packed-vertex decode helper (taken from writeRegisterPacked, gs_frontend.cpp:957);
  - `saveCheckState`/`restoreCheckState` and `swapBackendForCheck`;
  - `notePrimNoDraw(prim)`; `xfInPlace` forwarder;
  - widescreen and display-source helpers factored out as pure functions.
- **GIF bulk** (`processPath1Bulk`, Tier 0's front half; section 3.2 item 1) with TS_GS_BULK_SELFCHECK.
- **Materials phase 1** (3.5 item 1): GSMaterialTable in gs_frontend.cpp, `applyMaterial` (replaces applyStateBlock's body, keeping its Repeated test), call sites in vu1_native_material.h, `ts_material::applyRunState`, and the cached material/environment halves in gs_nv2a_state.inl.
- **Phase 2 (gated):** BeginNativeRun, RunIds, kComplete bindings.

**Owns**
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_frontend.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_material.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_types.h
- D:\Programming\GitHub\Timesplitters\project\game\vu1_native_material.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_material.h
- D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_state.inl
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xTest\src\ps2_gs_tests.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xTest\src\ps2_gif_stream_tests.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\b_gs.mk

**Named shared-file interface:** in C-XF's D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.h, B-GS may add fields to `GSNv2aLookupStats` and its `operator<<` only.

**Validation**
- Host tests: materials against processGIFPacket(PATH1) (snapshot, LoadClut/TextureFlush call log, m_curQ, m_textureStateWrites); serial invariants; envSerial invariant; in-place against streamed GIF; Tier 0 bulk against per-register over random packets including XYZ3 and strips longer than 64.
- Check build: drawState compared with a fresh buildDrawBatch on every primitive; checkStateBlock after each sampled commit; bulk-vs-per-register emitdiff=0; drawdiff=0 at 1P/2P/4P.
- pushPeakKB and pbEnds unchanged for phase 1.
- Det identical.

**Effort:** M.

### 5.5 B-AUDIO: mixer and music loader

**Scope:** section 3.5 item 8, plus a const SPU RAM accessor and a public mix API for B-SCHED's det pcm stream.

**Owns**
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_spu2.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_spu2.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_spu_gauss.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_music.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_music.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_audio.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Stubs\Audio.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_raylib.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xTest\src\ps2_spu2_tests.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\test\audio_staging_test.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\b_audio.mk

**Validation**
- 10,000 random scripts, frame-major against voice-major: bit-identical PCM and full state.
- Music cache against whole-file decode, including partial last pairs and desync.
- Command-log replay (TS_SPU2_LOG) byte-identical.
- spu2diff=0 and musicdiff=0 at 1P and 4P.
- g_audioMixKcyc per second before and after.
- No synchronous music reads in steady play; no feeder underrun during level loads.
- Det pcm identical.

**Effort:** S-M.

### 5.6 B-LOGIC: game-logic natives

**Sub-owners inside the track**, each owning its own files:

| Sub-owner | Scope |
|---|---|
| L0 harness | ts_native_idiom (GuestView, journaled store helpers, NoYield over B-SCHED's API, IdiomEntry with previous occupant and reference mode); audits; Abi boot mode; journal and lockstep; poisoning; tick_replay |
| L1 | ts_leaf.h in week 1, then x87 doubles and libm doubles |
| L2 | anim kernel and animMtxTick |
| L3 | collision, compute-then-commit, portal, optional camTick |
| L4 | lighting |

**Owns**
- D:\Programming\GitHub\Timesplitters\project\game\native\ (the whole new directory: ts_native_idiom.h, ts_native_idiom.cpp, ts_lockstep.cpp, ts_pure_functions.h, ts_abi_observed.h, ts_leaf.h, ts_fp_x87.cpp, ts_anim.h, ts_anim.cpp, ts_collision.h, ts_collision.cpp, ts_portal.cpp, ts_cam.cpp, ts_light.cpp)
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_selftest.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_fp.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_fp.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_math.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_math.h
- D:\Programming\GitHub\Timesplitters\project\game\tick_replay.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\purity_audit.py
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\abi_audit.py
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\leaf_whitelist.txt
- D:\Programming\GitHub\Timesplitters\src\xbox\tools\native_replaced.txt
- D:\Programming\GitHub\Timesplitters\src\xbox\test\fp_x87_test.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\test\lockstep_journal_test.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\test\story.pad
- D:\Programming\GitHub\Timesplitters\src\xbox\test\storyfight.pad
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\b_logic.mk

**Named shared-file rule:** C tracks use ts_native_selftest.h unchanged. When they need a harness feature (for example list-content exclusion for op-mode tests), L0 adds it within 3 working days.

**Consumes:** B-SCHED's NoYield, EeClockFreeze and det (PC whole-run differential); journal hook points (Week 0).

**Validation**
- Boot tests against the translated originals (Abi mode, 1-4 players).
- Lockstep diffs=0 on 1P/2P/4P, story and fight scripts; control run reports diffs.
- Collision fuzzer at level load: 100k queries, 0 diffs; `glassbail` reported.
- fp_x87_test: 3M cases per routine, 0 diffs; fpdiff=0.
- Abi audit cross-checked against bgHittestDistGlass/sqrtf ($at) and newrnd ($a0).
- Per-frame position checksums identical with modules on and off under pinned time.
- Console: phase and sub-bracket A/B per module; [TS:mem].

**Effort:** L. Critical path: L3, 8-12 weeks.

### 5.7 C-VIF: the VIF/DMA spine

**Scope**
- W0-C seams.
- **Walker:**
  - CALL admission (splice or chain token, CALL+RET register effect);
  - in-list token recognition and validation (D1);
  - token ring, spaced 32 B apart, added with `emplace_back`;
  - per-list-buffer run tables and list generation, keyed through a ts_game_hooks callback on memdbTick plus a read of gp-0x6CE8; week 1 verifies with `tokstale` that this marks list starts;
  - spliced-vs-walked compare under TS_VIF_SELFCHECK.
- **Decoder:**
  - token execution at command boundaries by pointer;
  - `tokmid` expansion for chain tokens;
  - debt hook sites (UNPACK destination, non-record MSCAL read windows, MSCNT, processVIF1Data, list end);
  - executor dispatch by kind;
  - dry decodes expand tokens.
- **Build-time list-token API:** guard on frame build active, gp-0x4B50==0, list pointer inside gp-0x6CF0[gp-0x6CE8], and run-table room.
- Render counters.

**Owns**
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_vif1_interpreter.cpp
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp (after W0-S)
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_memory.h (see B-PLATFORM's exception)
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_vif1_records.h
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_render_counters.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_render_counters.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_list_tokens.h (new)
- D:\Programming\GitHub\Timesplitters\project\game\ts_list_tokens.cpp (new)
- D:\Programming\GitHub\Timesplitters\src\xbox\test\vif1_token_test.cpp (new)
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\c_vif.mk

**Provides:** I-1 and I-2 (section 6).

**Validation**
- vifdiff=0 with splice and with tokens (expanded in dry decodes).
- Records level 1: identical frame CRCs, [TS:render] draw counts and det hashes against level 0.
- tokstale = tokmid = bad = drop = 0.
- A build with kVif1BatchPieces=64 (decode-ahead forced) gives identical CRCs.
- Host test of token recognition across Vif1Batch boundaries.
- Console kick-split A/B.

**Effort:** M.

### 5.8 C-REC: the records engine

**Scope**
- Chain registry: 4,096 slots, sized again from session 1's chains per level; Dbuf/precalc classification by return address; level reset; the game-hook registry.
- Generic descriptor builder; generational arena with audit; T0 nested executor; R1 executor with a far-ahead prefetch schedule (every source line of batch b+1 is issued while batch b runs).
- VIF-level record self-check; 10,000-chain boot differential; host builder test.
- Native prologue token in partGfx.
- REF and Dbuf in-list tokens (gated).
- partGfx boot self-test extended to expand tokens.

**Owns**
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_desc.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_build.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_cache.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_exec.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_nested.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_prologue.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_selfcheck.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_selftest.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_game_hooks.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_game_hooks.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_game2.cpp (after Week 0's hunks)
- D:\Programming\GitHub\Timesplitters\src\xbox\test\ts_record_build_test.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\c_rec.mk

**Consumes:** C-VIF's hooks, helpers and list-token API; B-GS's `materials().check`; C-XF's runDrawT (R1 runs through vif1Mscal and the native program unchanged).

**Validation**
- recdiff=0 with EVERY=1 over 1P (busy and heavy stretches), 2P and 4P.
- Boot differential: 0 mismatches.
- Det and frame CRCs identical across records 0 / 1 / 2 / 3.
- stale = drop = bad = 0; tokens equal the walker's count of registered CALLs.
- Cache hit ≥99% in steady state at 64 KB, or the arena is grown.
- Story-level run before origin bits 2 and 4 default on.
- Console: kick split shows the predicted drop.

**Effort:** L.

### 5.9 C-XF: from batch to NV2A vertices

**Scope**
1. **Texture-kick shortcut** in runDrawT (week 1-2).
2. **GuestSource for runDrawT:** guest-format strip decoders, written front to back and safe for write-combined memory; prescan; read-through of uncovered rows; fallback to settle + VuSource. The provenance debt map (D2). The R2 executor branch, gated on session 3's post-R1 split. R2 check: GuestSource against VuSource GSXfVertex per batch on a scratch VU image, no backend.
3. **M8:**
   - probe additions T9 (QUADS pixel test, for C-EMIT), T10 (UB_OGL byte order, F3 at stride 16, ARL), T11 (AE16 cost, post-transform reuse, aliasing case), and T6c only if needed;
   - placement P0/P1/P2 in xbox_guest_ram.cpp, behind the weak hooks;
   - in-place modes 5-8 with tables; the skin-in-place shader; xfInPlace; BREAK, WBINVD and fences;
   - ring size at run time; boot GPU test;
   - ts_inplace glue (eligibility byte in the C-REC descriptor, prepare, writer callbacks through ts_game_hooks, Case C policy, audit, TS_INPLACE_SELFCHECK);
   - host fetch test.
4. **Ring diet** (conditional, 3.3 item 10).
5. **Core NV2A file:** the screen ring move into the screen fragment happens in W0-S; C-XF keeps the remaining core.

**Owns**
- D:\Programming\GitHub\Timesplitters\project\game\vu1_native_draw.h
- D:\Programming\GitHub\Timesplitters\project\game\vu1_native_xf.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_debt.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_debt.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_record_direct.cpp
- D:\Programming\GitHub\Timesplitters\project\game\ts_inplace.h
- D:\Programming\GitHub\Timesplitters\project\game\ts_inplace.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp (core)
- D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.h
- D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_xf.inl
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_backend.h (after Week 0)
- D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_xf_inplace.h (new)
- D:\Programming\GitHub\Timesplitters\src\xbox\shaders\gs_xf.vs.cg (and its generated .inl files)
- D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_guest_ram.h
- D:\Programming\GitHub\Timesplitters\src\xbox\xbox_guest_ram.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\test\nv2a_probe\ (whole directory)
- D:\Programming\GitHub\Timesplitters\src\xbox\test\vu1_native_xf_test.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\test\inplace_fetch_test.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\c_xf.mk

**Named shared-file interface:** in gs_backend.h, B-GS may add fields to `GSNativeRun` for phase 2. Any other new virtual needs an integrator amendment that also updates xbox_perf.cpp.

**Validation**
- Host: every guest decoder bit-identical to the VU-image reference (NaN, denormal, q=±0, bone ≥2).
- recdiff, drawdiff and ringdiff 0 on GuestSource; det ring-record hashes identical R1 against R2; debt rows settled per frame reported.
- M8: the four existing gs_xf_*.inl files byte-identical to the version in force at the time; boot GPU test PASS in xemu and on the console; idiff=0; pushed-word decode 0 diffs; GO condition met; push peak and GPU busy at 4P within budget; the mask at 0 with in-place active restores the old ring size and speed.

**Effort:** L-XL.

### 5.10 C-EMIT: emitters

**Scope**
- **Tier 0 routing in kickPacket** (B-GS's bulk path). Backend `SubmitPrimitives`:
  - one texture() call, one keyFor and one reserve per call;
  - a shared `emit` helper in D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_screen_math.h, also used by submitScreenVerts;
  - render-to-texture decline;
  - screen vertex ring as two fenced segments instead of waitIdle on overflow;
  - optional QUADS after T9.
- **Harness:** ts_gif_trace.h, native_emit_test.cpp, frame_bench recording backend, arcade-emit.pad (HUD, menu, explosions), frontend.pad (front end, loading, cartridge transitions).
- **Tier 1:** ts_native_dl.cpp with natives (packet mode and op mode) of dlSetZB, dlSetBlend (moved from ts_native_game.cpp), dlSetDitherMatrix, dlSetFBMSK, dlSetClip (moved), dlSetClipTag, dlSelectTextureKick, dlTextureRectangle(+Float), dlFillRectangle(+Float), dlClearFB and dlDrawTriangleStrip; template decode with per-level verification; the executor; the shadow check.
- **Decal tail** (ts_native_game3.cpp:697-829).
- **Particles native emission** (gated, D7).

**Owns**
- D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp (after W0-C)
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_dl.h (new)
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_dl.cpp (new)
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_game.cpp (after Week 0)
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_game3.cpp (after Week 0)
- D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_screen.inl
- D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_screen_math.h (new)
- D:\Programming\GitHub\Timesplitters\project\game\ts_gif_trace.h (new)
- D:\Programming\GitHub\Timesplitters\project\game\frame_bench.cpp
- D:\Programming\GitHub\Timesplitters\src\xbox\test\native_emit_test.cpp (new)
- D:\Programming\GitHub\Timesplitters\src\xbox\test\gs_screen_batch_test.cpp (new)
- D:\Programming\GitHub\Timesplitters\src\xbox\test\arcade-emit.pad (new)
- D:\Programming\GitHub\Timesplitters\src\xbox\test\frontend.pad (new)
- D:\Programming\GitHub\Timesplitters\project\game\ts_native_particles_gfx.cpp (gated, new)
- D:\Programming\GitHub\Timesplitters\src\xbox\mk\c_emit.mk

**Consumes:** B-GS's APIs and bulk path; C-VIF's list tokens and `noteNativeMscal`; C-XF's probe T9.

**Validation**
- Host: bulk conversion bit-identical to per-primitive for random sprites, strips and fans under every psm, fst and iip.
- Boot tests per builder: packet mode identical to the original; op mode trace equals ts_gif_trace of the original packet; memdb pointer and counter identical.
- emitdiff=0 at 1P/2P/4P, arcade-emit and frontend.
- Det identical with exclusions; screenshots identical with group knobs on and off, including front end, loading and cartridges.
- tokmid=0; list high-water never above the old path.
- [TS:emit] fields in [TS:render]: t0 handled against kicks, with fallbacks only for SIGNAL/LABEL/ip.
- Console rdtsc of the kick path.

**Effort:** L.

---

## 6. Frozen interfaces (Week 0) and who implements them

| Id | Header (owner after Week 0) | Contents | Implemented by | Used by |
|---|---|---|---|---|
| I-1 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_vif1_records.h (C-VIF) | `enum class Vif1TokenKind {Chain=1, List=2}`; `struct Vif1Token {uint32_t id; Vif1TokenKind kind; uint8_t listKind; uint16_t flags; uint32_t guestAddr; const void *info;}`; `struct Vif1RecordHooks { void *owner; bool (*admitCall)(void*, uint32_t chain, Vif1CallAdmit&); bool (*admitListToken)(void*, uint32_t tagAddr, uint32_t addrField, Vif1Token&); Vif1ExecResult (*execute)(void*, PS2Memory&, const Vif1Token&, bool dry); const PS2Memory::Vif1Piece *(*expand)(void*, const Vif1Token&, size_t&); void (*debtBeforeWrite)(void*, uint32_t row, uint32_t count, bool fullLanes); void (*debtBeforeProgram)(void*, uint32_t pc, uint32_t top); void (*listEnd)(void*); }`; `PS2Memory::setVif1RecordHooks`; the W0-C helper set | C-VIF (sites), C-REC (chain/prologue/REF executors), C-XF (debt), C-EMIT (op executor) | — |
| I-2 | D:\Programming\GitHub\Timesplitters\project\game\ts_list_tokens.h (C-VIF) | `bool tsListTokensEnabled(uint8_t *rdram, uint32_t gp)`; `uint32_t tsListTokenWrite(uint8_t*, uint32_t gp, uint8_t listKind, const void *info)` (writes the REF-magic tag at gp-0x6C60, advances by 16, returns the slot); `void tsListTokenRegisterExecutor(uint8_t listKind, fn)` | C-VIF | C-REC (prologue, REF), C-EMIT (ops) |
| I-3 | D:\Programming\GitHub\Timesplitters\project\game\vu1_native_draw.h (C-XF) | `template<class Source, class Sink> bool runDrawT(const Layout&, Source&, uint32_t top, PS2Memory*, GS&, Sink&)`; VuSource; ProductionSink; `vu1NativeReadWindow`; constant-entry functions (declared in vu1_native_ts.cpp's header part by W0-C) | C-XF | C-REC, C-EMIT |
| I-4 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_material.h and D:\Programming\GitHub\Timesplitters\project\game\ts_material.h (B-GS) | `const GSMaterial *find(bytes, size, guestAddr=0)`; `check(id, bytes, size)`; `GS::applyMaterial`; `ts_material::applyRunState` (inline) | B-GS | C-REC, C-EMIT |
| I-5 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_frontend.h (B-GS) | `drawState()`; `submitPrimitives(prim, v, n)`; `decodePackedVertex`; `processPath1Bulk`; `saveCheckState`/`restoreCheckState`; `swapBackendForCheck`; `notePrimNoDraw`; `xfInPlace` | B-GS | C-EMIT, C-XF |
| I-6 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_backend.h (C-XF) | `SubmitPrimitives`, `XfInPlace`, `BeginNativeRun` (defaults = old path); GSXfCursor tail fields (cleared by GS::beginXfRun); `GSDrawState::serial` (in gs_types.h, B-GS) | C-EMIT (screen), C-XF (xf, in-place), B-GS (native run) | — |
| I-7 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ee_checkpoint_clock.h (B-SCHED) | `class EeClockFreeze` (RAII); `ps2xNoYieldEnter/Leave(uint16_t tag)`; `EeTimePolicy`; `ps2xSetVblankSource` | B-SCHED | B-LOGIC, C self-tests |
| I-8 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_det.h (B-SCHED) | `detTrace(kind,a,b)`; `xboxDetHash(stream, ptr, len)`; `xboxDetExclude(addr, len, untilFrame)` | B-SCHED | C-EMIT (payload exclusions), C-XF (ring hashes) |
| I-9 | D:\Programming\GitHub\Timesplitters\project\game\ts_knobs.h (frozen) | `tsKnobRegister(name, uint32_t *var, default)`; frame-boundary apply | integrator | all |
| I-10 | report-line registry in D:\Programming\GitHub\Timesplitters\src\xbox\xbox_perf.h (B-SCHED) | `xboxRegisterReportLine(const char *tag, void (*fn)(Line&))` | B-SCHED | all |
| I-11 | D:\Programming\GitHub\Timesplitters\project\game\ts_game_hooks.h (C-REC) | `tsGameHookOn(TsGameFn, TsHookPhase, callback)` for the wrapped functions; boot chain assert | C-REC | C-VIF (memdbTick), C-XF (writers), B-SCHED (no) |
| I-12 | D:\Programming\GitHub\Timesplitters\project\game\native\ts_leaf.h and ts_abi_observed.h (B-LOGIC) | exact inline leaf cores; per-callee observed masks | B-LOGIC | B-CODEGEN |
| I-13 | `ps2xHostAllocGuest` (B-PLATFORM) with weak `ps2xPlatformAllocRdram` and `xboxEarlyPlatformInit` | guest-memory placement seam | B-PLATFORM (seam), C-XF (P1/P2 placement) | — |

**Amendment rule.** Adding a virtual, a report line plumbing change, a Makefile change or a registration needs an integrator amendment commit: one small commit, merged between trains, that also updates every wrapper. Tracks never edit a frozen file.

---

## 7. Integration order and checks

### 7.1 Check suites

| Suite | Builds | Scripts | Pass |
|---|---|---|---|
| **Q** (after every single merge) | release; the merging track's check build | arcade-match.pad on xemu | Runs to the end; that track's diff counters 0; boot self-tests 0; screenshot at three fixed reads identical (or only the documented difference) |
| **SC-R** (render self-check run, xemu) | TS_VIF_SELFCHECK, TS_NATIVE_DRAW_SELFCHECK, TS_NATIVE_RING_SELFCHECK, TS_NATIVE_RECORD_SELFCHECK_EVERY=1, TS_NATIVE_EMIT_SELFCHECK, TS_GS_STATE_SELFCHECK, TS_GS_BULK_SELFCHECK, TS_INPLACE_SELFCHECK; texture pack off | arcade-match, arcade-2p, arcade-4p, arcade-emit, frontend, story | vifdiff = drawdiff = ringdiff = recdiff = emitdiff = idiff = mscheck = 0; tokstale = tokmid = bad = drop = 0 |
| **SC-E** (runtime self-check run, xemu) | TS_EE_COUNTDOWN_CHECK, TS_IOP_IDLE_CHECK, TS_LOCK_CHECK, TS_CALL_SLOT_CHECK, TS_CTX_GUARD, TS_SPU2_SELFCHECK, TS_MUSIC_SELFCHECK, all boot self-tests | arcade-match, arcade-4p, story | cdiff = iopmiss = gsforeign = callslot = ctx = spu2diff = musicdiff = 0 |
| **SC-L** (logic, xemu) | TS_NATIVE_LOCKSTEP=1, PS2X_WRITE_JOURNAL, TS_NATIVE_POISON; texture pack off | arcade-match, arcade-2p, arcade-4p, story, storyfight | lockstep diffs 0 (control run nonzero); fpdiff 0; glassbail reported |
| **DET** | TS_DET, all switches off against all exact switches on | arcade-match, arcade-2p, arcade-4p | identical [TS:det] every frame (exclusions per D4); hosttime = remote = catchup = 0 |
| **REL** | release, xemu | 1P, 2P, 4P to the end | screenshots at fixed reads against the previous train (identical, or explained); [TS:mem] free and low-water reported; status counters sane |
| **K** (console session) | release + one check build (SC-R, then SC-E on alternate trains) | 1P busy stretch (reads 1500-2700) and heavy stretch, 2P, 4P; knob A/B within the session | busy p50/p90, fpsEq, [TS:phase], [TS:kick], [TS:kick2], [TS:mem] low-water ≥1.0 MiB in the heaviest 4P frame, screenshots; check-build counters 0 on hardware |

Console sessions use the shared devkit (10.0.0.231). Each one needs the user's go-ahead, and the Castle Crashers session is messaged before ("taking over") and after ("console done").

### 7.2 Trains

**Merge order inside every train:** B-SCHED → B-PLATFORM → B-CODEGEN → B-AUDIO → B-GS → C-VIF → C-REC → C-XF → C-EMIT → B-LOGIC.
- Runtime changes go first: they are det-exact and change timing only.
- The GS lands before Push C, which consumes its APIs.
- The spine lands before the engines.
- Logic goes last, because its lockstep validates against everything else.
- Each merge runs Q. The train ends with SC-R, SC-E, SC-L, DET, REL and then K.

| Train | Approx. week | Contents | Defaults switched on after the train passes |
|---|---|---|---|
| **W0** | 0-1.5 | W0-M (to console session 1 at once), W0-I, W0-S, W0-C | — |
| **T1** | 4 | B-SCHED: hooks, pinned policy, EeClockFreeze, NoYield, det G0. B-PLATFORM: 3.3, 3.4a, 3.10, chrono. B-CODEGEN: 3.2. B-AUDIO: mixer, loader, VoiceTrans fix. B-GS: API slice, GIF bulk, drawState cache. C-VIF: splice. C-REC: registry, game hooks. C-XF: texture-kick shortcut, probe T9/T10/T11 (probe binary only). C-EMIT: Tier 0 routing, backend bulk, screen ring, harness. B-LOGIC: audits, Abi mode, ts_leaf.h, x87 (off) | records=1; Tier 0; B-PLATFORM items; mixer; GIF bulk; call slots |
| **T2** | 7 | B-SCHED: 3.1 countdown. B-CODEGEN: 3.5, 3.6 (fresh profile), direct leaf, indirect cache. B-GS: materials phase 1. C-VIF: chain tokens, expand, debt sites (inert). C-REC: builder, cache, T0, R1, record self-check. C-EMIT: Tier 1 state, Material and ClipTag ops. B-LOGIC: x87 (M7.1), lockstep, lighting (M7.4) | records=3 (R1, precalc and Dbuf bits only after the story run); countdown; patcher flags; materials phase 1; Tier 1 state ops; M7.1 |
| **T3** | 10 | C-REC: prologue token. C-XF: R2 + provenance (if session 3 says go); P0/P1 placement (experiment). C-EMIT: Tier 1 sprites, fills, strips, decals. B-LOGIC: anim + animMtxTick (M7.2). B-PLATFORM: 3.7, 3.8 (if MISALIGN justifies). B-SCHED: M6.4. B-CODEGEN: 3.9 (optional) | prologue bit; R2 (records=4); Tier 1 draw ops; M7.2; pacing.carry |
| **T4** | 14 | C-XF: M8 (GO) or ring diet (no-GO). B-LOGIC: collision + portal (M7.3). C-REC: REF/Dbuf tokens (if story shares justify). B-GS: phase 2 (if justified). B-SCHED: M6.5 (if 1P p90 ≤31 ms). C-EMIT: particle decision | in-place mask; M7.3; others as gated |

**Rollback rule.** A merge that fails Q is reverted within the train. A default that fails K is switched back off by knob for the session and off by make default before the next train.

---

## 8. Console measurements needed first, and how they change the plan

### Session 1 (Week 0, W0-M build on d50798e + counters)
Runs:
- release 1P busy and heavy stretches, 2P, 4P;
- TS_HWPROF 1P;
- TS_RENDER_COUNTERS=2 1P;
- the story script once;
- nv2a_probe T1-T8 as it exists today.

### Session 2 (after T1)
- Probe T9, T10, T11 (and T6c if needed).
- Train 1 A/B.

### Session 3 (after T2)
- Kick split with records 1, 2 and 3 (splice, T0, R1).

### What each result decides

| # | Measurement | Decides | If A | If B |
|---|---|---|---|---|
| 1 | Post-A busy ms (p50/p90) at 1P/2P/4P; [TS:phase] | Re-bases every projection in section 9 | — | — |
| 2 | [TS:kick2]: walk vs chain decode vs main decode vs UNPACK-copy time vs VU1 vs GS vs backend | Order of C-REC and C-XF, and the R1/M8 split | Command overhead ≥55% of chain decode: R1 first as planned; R2 is a small item | Copy/miss dominates: splice + R1 still land in T2, but C-XF R2 and M8 move ahead of the prologue token, and R1's far-ahead prefetch becomes the main R1 lever |
| 3 | D1_CHCR logged | Confirms D1 | TTE=0 (expected) | TTE=1: in-list tokens still work; also measure the zero-half share for M1.5 |
| 4 | Per-call rdtsc of GS::beginXfRun, Impl::beginXfRun, keyFor, texture, DrawKey compares | B-GS phase 2 | Residual after phase 1 >0.5 ms per viewport: phase 2 in T4 | Otherwise phase 2 dropped |
| 5 | Kick histogram (primitives per kick, state-only share, XYZ3 seen) | C-EMIT priorities | Mostly 1-primitive kicks (glyphs): Tier 1 sprite coalescing moves up to T2 | Mostly multi-primitive: Tier 0 carries the gain; Tier 1 draw ops stay in T3 |
| 6 | Tick sub-brackets, per-player split | B-LOGIC order | lvTickPlayer ≥2 ms at 1P: L3 first, camTick idiomatic in scope | Otherwise L2 first; camTick gets x87 only |
| 7 | [TS:ee] per-resume-address counts | Whether any re-entry is needed | Translated resumes <1 per frame (expected): no thunks | Otherwise a scoped re-entry thunk for that one native |
| 8 | x87 CW at the three points | x87 guard cost | PC=53, RC=nearest, masked: check only | Otherwise set/restore per call (still correct) |
| 9 | MISALIGN_MEM_REF, LD_BLOCKS | M3.8 | High: M3.8 moves to T1 | Low: M3.8 stays a T3 cleanup with no gain claimed |
| 10 | Lock census | M3.3 scope | — | — |
| 11 | memcpy size × alignment histogram | M3.7 design | — | — |
| 12 | gp-0x6CA0 against list capacity; memdb high-water | List-token headroom | In-list tokens never grow lists; confirms headroom for REF tokens | — |
| 13 | Chains per level, distinct chains per frame | Registry and arena sizes | — | — |
| 14 | Story run: dbuf/ref shares, wr= writer counts, glass in tested rooms | C-REC REF/Dbuf tokens; Dbuf default; T3 glass frequency | ref/dbuf >10% of runs in story levels: REF/Dbuf tokens in T4 | Otherwise deferred |
| 15 | Probe T1-T8 (session 1), T10/T11 (session 2) | M8 GO and tier, coherency case, BREAK, AE32 tail, fence position | GO = T10 pass, (T2a, or T2c/d with T9, or T8 acceptable), T3/T5/T7 answered, boot test passes; P1 only if T1 passes with margin | No-GO: ring diet in T4; 1P projection about +3 ms |
| 16 | [TS:mem] low-water 1P/4P, largest contiguous block, physical total | Arena sizes; transcriptions kept linked or not; P1 margin | Low-water ≥2 MiB at 4P: arenas at their design sizes | Low-water <1.5 MiB: arenas start at minimum (records 64 KB, emit 16 KB); P1 off |
| 17 | GPU busy (PGRAPH) at 4P | Whether M8's extra BEGIN/END cost matters; nv2a P7 | — | GPU-bound at 4P above about 15 ms: M8.5 merging and QUADS move up |
| 18 | MXCSR DE/UE per phase | M1.7 FTZ | — | — |
| 19 | Fresh post-A TS_HWPROF profile | rank_o2 input; re-check of every gain claim | — | — |

---

## 9. Projected result

All figures are console busy ms per frame. The post-A starting values are the plan's predictions (M2 row of D:\Programming\GitHub\Timesplitters\src\xbox\REWRITE-PLAN.md), not measurements.

| Stage | 1P mean (band) | 1P fps-equivalent | 4P (band) | 4P fps |
|---|---|---|---|---|
| After Push A (predicted) | 56 (53-58) | 17.9 | 161 (145-180) | 6.2 |
| After Push B (net about 11 at 1P, about 21 at 4P) | about 45 (40-49) | about 22 | about 140 (125-160) | about 7 |
| After B + C, M8 GO (Push C net about 10.5 at 1P, about 37 at 4P) | **about 34 (24-42)** | **about 29** | **about 100 (71-122)** | **about 10** |
| After B + C, M8 no-GO (ring diet instead) | about 37 | about 27 | about 113 | about 9 |

**Against the targets** (1P: mean ≤27.8 ms with p90 ≤32 ms; 4P: 50-66 ms):
- 1P reaches the target only at the good end of the band.
- 4P does not reach it after B+C, and real-time game speed at 4P (≤83 ms) is reached only at the good end.

**Why this is lower than the plan** (whose M8 row says 25 ms at 1P and 66 at 4P):
- The reviews lowered M4.1 to 0.6-1.2 ms, because Push A already took the texture lookup.
- R1 was lowered to 2-5 ms per viewport, because the VIF path is memory-bound on the console.
- M6.1/6.2 are worth 0 in the measured scenes (Dbuf/REF = 0).

These are estimate corrections. Measurement 2 in section 8 decides where R1 and M8 really land, and the band above is wide for that reason.

**What remains after Push C.** About 9-14 ms of render back half per viewport:
- per-batch native VU1 overhead and constants;
- backend per-run state and push building;
- the emulated particle VIF traffic;
- CLUT and texture residue;
- render memcpy/memcmp.

**Push D candidates, in order:**
1. Pre-baked per-batch NV2A command blocks for static chains when M8 is GO. The per-frame work per batch would shrink to constants plus a block copy.
2. Per-viewport constant banks and a lazy per-viewport animMtxTick (M9).
3. Native textPrint (M9).
4. Particle native emission, if its measured residue justifies it.

---

## 10. Decisions needed from the user

1. **Particles** keep the PlayStation 2 packet transfer through the VIF after Push C; only the GS route becomes native. Full native emission is gated on the measured residue (section 3.2), so the brief is met with a measured exception, not a safety one. Approve the gate, or require full conversion in Push C (+4-6 weeks, +60-100 KB of code).
2. **ip effects, cartridge screen-as-texture and framebuffer feedback** stay emulated as unsafe now (section 3.2 table).
3. **The propTickBefore idiomatic driver** is deferred out of Push B (about 0.25 ms; removes the riskiest scheduler surface).
4. **Replaced transcriptions are dropped at each module's merge.** The translated original becomes the fallback and the switch-back target (−0.35 MB).
5. **C-E6** (GS frame/Z page decommit) is deferred to Push D.
6. **M3.4b** (lazy timers / larger device batch) is dropped.
7. **Retail check.** M8's P1 placement and every console figure are proven only on the devkit. One retail-console run is needed before P1 becomes a default.
8. **Console sessions.** At least four sessions on the shared devkit: Week 0, after T1, after T2, and per train after that.