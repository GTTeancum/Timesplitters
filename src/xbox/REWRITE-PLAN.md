# TimeSplitters Xbox port: rewrite plan

Baseline: master 537a2bc, profiled at f3ef00f. Effort scale: S < 2 weeks, M = weeks, L = 1-3 months, XL = more than one quarter.

---

## PART 1: Briefing

1. On the real Xbox, a busy one-player match draws about 15 frames per second. The goal is 30, with some margin left over.
2. The new measurement on the real console changed the picture. The game's own logic uses only about a quarter of the processor. Almost half goes to repacking 3D model data the way the PlayStation 2 graphics hardware wanted it, and then translating it again for the Xbox graphics chip. On the real console that repacking runs 10 to 25 times slower than in the emulator the earlier plans were based on, so those plans aimed at the wrong things.
3. The plan in one sentence: keep the game's own code and behaviour exactly as they are, but stop imitating PlayStation 2 graphics hardware at the point where the game hands over each 3D model, and give the model straight to the Xbox graphics chip.
4. Step one is a batch of small, low-risk fixes: texture lookups, colour palettes, and a sound mixer that reads back from slow memory. Expected result: about 18 frames per second.
5. Step two makes four-player testable at all. Today only one controller is connected, and during a match the console has almost no free memory. We have found about 4-5 MB of memory that can be recovered; four-player needs 2-3 MB of it.
6. The main rewrite then replaces the 3D model path in stages. Each stage is checked automatically against the old path and must produce the same picture. Each stage can be switched back off.
7. Expected one-player result:
   - about 25 frames per second after the first model stage;
   - about 30 after the second stage plus faster character and player code;
   - a steady 30 with margin only after the last and riskiest step, where the graphics chip reads models directly from game memory. That step depends on four questions only the real console can answer, so we test those first.
8. Four-player split-screen today would run at about 5 frames per second, and the game itself would slow to less than half speed. Realistic end state: 15-20 frames per second at normal game speed. Four-player at 30 is not reachable on one 733 MHz processor; four views of the world cost too much even after the graphics translation work is gone.
9. Cost: the small fixes take weeks. The model rewrite is the bulk of the work and ships in stages that each stand on their own. The character and player speed-ups can be worked on at the same time.
10. Risk control: the project already compares 67 rewritten game functions against the originals at every start-up. Every new rewrite gets the same kind of automatic comparison, plus screenshots at fixed points of the scripted match.
11. Next action: one round of console measurements, a day or two of runs, to confirm this order before the big rewrite starts.

---

## PART 2: Technical plan

### 1. Measured frame budget (real hardware)

Source: interrupt sampler, CMOS clock at 1024 Hz, script reads 1500-2700, 1,200 frames in 81.9 s, 68.27 ms/frame. One sample is 0.000814 ms/frame, and 1% of samples is 0.683 ms/frame. Files:
- C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\hwprof_hw_report_537a2bc.txt:4-6
- C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\hwprof_hw_full_review.txt
- C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\hw_prof_run.txt:240-247

**Baseline definitions**
- The profiled frame (68.27 ms) contains 3.66 ms of kernel idle (5.4%). That idle is an artefact of the profiler build: the EE-wait counter is frozen across the busy stretch without the profiler (C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\hw_run.txt:210-236), and with the profiler it keeps growing after the sampling window closes (C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\hw_prof_run.txt:1663-1695).
- Busy baseline is therefore **64.6 ms**. Unprofiled windows measure 64.8-66.4 ms.
- Per-second work runs at a fixed rate whatever the frame rate. It is p ≈ 10.9% of the CPU: audio feeder 8.7%, kernel ISR/DPC 1.7%, presenter 0.5%. Per-frame work is W ≈ 64.6 × (1 − p) ≈ 57.6 ms, and frame time is T = W / (1 − p).
- Audio uncertainty: the CMOS and PIT samplers disagree for the audio thread (8.7% vs 6.2%, hwprof_hw_report_537a2bc.txt:9-12), so audio is uncertain by about ±1.5 ms/frame. M0 settles it with rdtsc.

**1.1 Deduplicated ledger.** Each function with 20 or more samples has exactly one owner; the long tail goes to (e). Ledger: C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\ledger\assign.json.

| Pool | ms/frame | % | Dominant measured items |
|---|---|---|---|
| (a) DMA/VIF/VU1 data path | 20.54 | 30.1 | processVIF1Pieces 9.79; Vif1PieceReader::wordNext 1.21; walker addSegment lambda 1.27; writeIORegister (chain walk) 1.15; writeJoinedStrip 3.06; native VU1 run 2.36; decodeXfStripKind 0.34; MSCAL dispatch 1.04 |
| (b) Renderer state | 10.23 | 15.0 | lookupTexture 1.49 + texture 0.50 + gpuRange 0.18; CLUT 2.59 (GSMem::ReadRow 1.03, LoadClutUnlocked 0.64, LoadClut 0.61, ClutContentHash 0.27); per-run GS/backend state 4.82; uploadConstants 0.40 |
| (c) libc | 3.98 | 5.8 | _memcpy 2.49, _memcmp 1.43. Callers are CLUT copies, constant copies and compares, and DrawKey/material compares |
| (d) Audio + IOP | 6.24 | 9.1 | Spu2::tickVoice 1.98, Ps2Music::mix 1.89, Spu2::mix 1.38, decode 0.49, IOP batch 0.42 |
| (e) Code shape | 6.33 | 9.3 | dispatchGuestBranch + ps2xDirectCall + std::function 1.45; translated non-logic 1.63; long tail 2.73; stack probes 0.25; guest slow paths 0.28 |
| (f) Scheduler/runtime | 2.69 | 3.9 | locks 0.99; 64-bit divide/clock 0.65; checkpoint/timers 0.62; currentContext 0.28 |
| (g) Game logic | 13.50 | 19.8 | characters/animation 3.18; per-player/collision 3.83; effects/partGfx-level 2.44; leaf/soft-double/libm 3.10; lighting 0.95 |
| (h) Idle/OS | 4.76 | 7.0 | kernel idle 3.66 (profiler artefact); ISR/DPC/USB 1.10 |
| **Total** | **68.27** | | |

**1.2 The same budget split by how it scales** (busy ms, 1 viewport; derived from the call-graph attribution in the game-logic review):

| Component | 1P ms | Multiplicity |
|---|---|---|
| Render back half R (walk, VIF, MSCAL, native VU1, GS front end, NV2A backend, CLUT, render share of memcpy/memcmp) | 33.2 | once per viewport |
| Game draw-list code D (lvGfx, bgGfx, partGfx, HUD) | 3.9 | once per viewport |
| Per-player tick (lvTickPlayer) | 2.8 | once per player |
| Shared tick (lvTickBefore 4.9, lvTickAfter 3.2, gameTick 1.5) | 9.5 | once per frame |
| Glue, scheduler, runtime, locks, divisions | ~3.6 | once per frame (grows 1.2-1.5x at 4P) |
| Other (non-render libc, long tail, stack probes) | ~4.0 | once per frame |
| Audio + IOP | 6.4 | per wall-second (8.7% + 0.7%) |
| Kernel ISR/DPC + presenter | 1.6 | per wall-second |

**1.3 The central fact behind the plan.** On hardware, the data paths lose time and the instructions do not. Console time against xemu time per category:
- translated game code 2.1x (the normal CPU ratio); native game code 3.2x;
- DMA/VIF 10.5x; VU native 7.8x; renderer 7.9x; memcpy 11x; memcmp 13.8x; lookupTexture 25.6x; GSMem::ReadRow 26x;
- Ps2Music::mix 14x per second of audio.

These come from the codegen verification, which compared hwprof_hw_full_review.txt against hwcap_funcs.txt.

### 2. Where the subsystem reports were wrong

| Report | xemu-era estimate | Measured on console | Why it was wrong |
|---|---|---|---|
| Code shape | ~30 ms EE code, 17-20 ms removable | ~18 ms (translated 7.4, native 9.1, glue 0.9, scheduler 1.0, slow paths 0.4); 5-8 ms removable | Scaled xemu shares, and assumed i-cache-bound execution. Translated code runs at the normal 2.1x. Natives are larger than their -O2 originals, so the claimed 3-4 MB code shrink is really 0.5-1.2 MB |
| Scheduler | 6-14 ms, 8-12 ms removable | ~4-5.5 ms, 2.5-4 ms removable; presenter 0.33 ms, not 0.7-1.5; kernel@80021800 does not exist on hardware | xemu inflates indirect-call and MMIO sampling; the hardware kernel is a different build |
| Geometry back half | 12-20 ms per viewport (central 15) | ~33 ms per viewport | Memory-bound work; xemu hides cache misses and write-combining |
| NV2A backend | 7-13 ms | 17-20 ms (a subset of the 33 above) | Per-run cost is 9-13k cycles, not 2.5-4.5k; lookupTexture walks a std::list |
| Textures/CLUT | 3.3 ms | 5.5-6.5 ms (also a subset) | The CLUT misses are the larger half: a 128-slot direct-mapped table against 119-152 distinct textures per frame |
| Audio/IOP | 4-8 ms (central 5.5) | 6.4 ms; IOP interpreter about 0 | Missed the read-back from write-combined memory: Ps2Music::mix alone is 1.9 ms |
| Game logic | 20-28 ms; downstream render 20-27 per viewport | ~17 ms; downstream 31-34 per viewport | xemu proportions applied uniformly |
| Platform | i-fetch 5-18 ms, ~8 ms devkit steal | No non-title threads in the busy window; i-fetch small; memcpy/memcmp 3.9 ms is the real platform cost | The microbenchmark ratio was misread |

Corrections to shared premises:
- **"2 MB free"** is measured before the game loads (hw_run.txt:16, :19). In a match, xemu shows 244-496 KiB. Real hardware has an inferred 0-0.1 MiB after a one-time 256 KiB growth.
- **The fatal 256 KiB allocation** (C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\hw_prof_run_oom.txt:213) is attributed to the music streamer in f3ef00f's message. The code argues otherwise: the music streamer holds 64 KiB (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_music.cpp:66). The best candidate is s_vif1Segments doubling to exactly 262,144 B (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:41, :1569-1583). M0's caller log settles it.

### 3. Target budgets

**3.1 One viewport.** The 2-vblank age rule (D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp:759-801) caps the display at 30 fps. A locked 30 needs p90 busy time of about 32 ms or less. Today p90/mean is about 1.15-1.32; the frame-time histogram is truncated at D:\Programming\GitHub\Timesplitters\src\xbox\xbox_hwprof.cpp:443, so p90 is an estimated 85-90 ms. Hence the target is a **mean busy time of 27.8 ms or less (36 fps-equivalent), with p90 at 32 ms or less**.

| Component | Today (ms) | Target (ms) |
|---|---|---|
| Render back half R | 33.2 | ≤6 |
| Game draw-list code D | 3.9 | ≤3 |
| Shared tick | 9.5 | ≤7 |
| Per-player tick | 2.8 | ≤1.5 |
| Glue/scheduler/runtime | 3.6 | ≤1.5 |
| Other (libc residual, long tail) | 4.0 | ≤3 |
| Audio + IOP (per-second, ≤4.5% of CPU) at 36 fps | 6.4 | ≤1.3 |
| Kernel/ISR/presenter at 36 fps | 1.6 | ≤0.6 |
| **Sum** | **64.6** | **≤23.9** (about 4 ms of margin for estimate error) |

The render back half must fall by about 5x. No mix of S/M items does that. The S/M items give about 20 fps (the ledger agrees: about 21 fps). Doubling requires the L/XL render cut plus most of the other items.

**3.2 Four viewports.** Model: T4 = [F + Δ + 4·Pp + 4·k·(D+R)] / (1 − p), where:
- F ≈ 17.7 ms is per-frame shared work;
- Δ = +1.5 to 3.5 ms of shared growth (AI targeting 4 humans, per-player visibility loops), plus 1-4 ms of push-buffer drains;
- Pp = 2.8 ms per player;
- k = 0.85-1.05 per-viewport geometry relative to 1P.

Inputs to k:
- The game does **not** lower LOD, fog or draw distance for more players.
- It scales particles (D:\Programming\GitHub\Timesplitters\project\generated\particleGetScale_0x296838.cpp:100-140), glows, flares and the decal pool (D:\Programming\GitHub\Timesplitters\project\generated\decalReset_0x2a2658.cpp:32-182).
- Quadrants keep the 1P frustum (D:\Programming\GitHub\Timesplitters\project\generated\playerSetWindow_0x27efb0.cpp:58-236).

Results:
- **Today: about 196 ms (175-215), about 5 fps.** framesi clamps at 5 (D:\Programming\GitHub\Timesplitters\project\generated\timeTickStart_0x2b66e8.cpp:178-197), so below 12 fps game speed is fps/12: today's 4P would run at about 42% speed.
- **Realistic end state: 55-66 ms, 15-18 fps; 20 fps (50 ms) is a stretch goal.** 20 fps needs D+R ≤ about 6.5 ms per viewport and F + 4·Pp ≤ about 14 ms.
- **4P at 30 fps is not reachable.** With R driven to 0, the shared tick plus four per-player ticks plus four draw-list passes still come to about 34 ms.
- Real-time game speed at 4P (83 ms or less) arrives at M7 marginally and at M8 robustly.
- The GPU is not the 4P limit until the CPU frame is under about 10-14 ms: an estimated 5-11 ms of GPU work at 4P, and 0.00 ms of CPU spin on the GPU today (hwprof_hw_report_537a2bc.txt:6). It has never been measured; M0 does that.

### 4. The architectural answer: how far from PS2 interfaces, and where to hook

**The rule: emulate the PS2 only where the game observes the state; replace the data path wherever it only moves bytes.** The console loses its time on the data side (section 1.3), so that is where the PS2 shape gets removed.

1. **Graphics: hook at partGfx.** Every model goes through it:
   - obInstGfx is partGfx's only outside caller (D:\Programming\GitHub\Timesplitters\project\generated\obInstGfx_0x262a60.cpp:80).
   - Rooms are object instances too: bgLoad, bgTileLoad and obLoad call obPrecalcGfxData (D:\Programming\GitHub\Timesplitters\project\generated\bgLoad_0x253b88.cpp:696).
   - partGfx is already native (D:\Programming\GitHub\Timesplitters\project\game\ts_native_game2.cpp:6963-9507).

   How the hook works:
   - **Below partGfx, for models:** no DMA walk, VIF unpack, MSCAL or VU1 emulation. partGfx emits a host draw record. In the list it leaves a CNT tag with qwc 0 whose TTE half carries VIF NOP(magic) and NOP(index). The VIF NOP case (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_vif1_interpreter.cpp:1498) runs the record at exactly that list position.
   - **The PS2 display list stays the ordering spine.** Everything not yet converted (HUD, particles, decals, dlSetClip scissor kicks, texture kicks, glows) keeps running emulated, in exact order.
   - Each record writes the VU1 constant rows and the VIF end state that the skipped batch would have left, so later emulated packets see identical state.
   - Each record origin (precalc, Dbuf, per-frame REF) can be switched back to emulation at run time.
   - **Above partGfx:** lvGfx, bgGfx and the portal walk stay game code. They are visibility logic, cost 3.9 ms per viewport, and gain nothing in the backend.
   - **Why not stop lower,** at deferred unpack or a decoded-block cache: those keep 11-17 ms of walk/VIF/VU per viewport and cap 4P at about 10 fps. The cache variant also needs 1-4 MB that does not exist.
2. **GS state: NV2A-native materials.** GS registers become a shadow that is replayed lazily, only when a non-native GS consumer runs next. GS local memory stays authoritative for transfers, menus and movies.
3. **EE code: keep the recompiled translation and its unwind/resume contract** as the semantic baseline. It covers all 2,670 functions, including 4P-only paths.
   - Make the protocol cheap: 32-bit countdown and build-time call slots.
   - Hand-port to idiomatic native code only where the hardware profile is hot, behind scheduler no-yield regions.
   - Deferred: the register-promoting recompiler backend (corrected gain 2-4 ms for XL effort).
   - Rejected: fibers and nested interrupt delivery (section 7).
4. **Audio: keep the SPU2 register model.** The game only ever sets state and never reads it back, and the output stays bit-exact. Restructure it for the P3: cached staging buffer, voice-major mixing. The MCPX APU is only a research spike, if 4P voice counts demand it.
5. **IOP: keep modules loaded** (MTAPMAN is relevant for 3-4 players). Stop clocking the IOP while it is idle, and use HLE for pads and multitap.
6. **Time base: keep PS2 semantics.** T1 drives framesi (D:\Programming\GitHub\Timesplitters\project\generated\timeGet_0x2b6688.cpp:23-43). Compute timers lazily and exactly. Align frame starts to vblanks once near 30 fps.

### 5. Milestone program

Every milestone ships on its own, is measured on the real console with the M0 instrumentation, and has an exact fallback switch. The 1P/4P figures are central estimates (likely band) of busy ms per frame, cumulative. They use T = W/(1−p), with p falling from 0.109 to 0.087 at M1 and to 0.069 at M4.

| M | Content | Effort | Risk | 1P ms (fps-eq) | 4P ms (fps) | Host memory |
|---|---|---|---|---|---|---|
| — | Today | — | — | 64.6 (15.5) | ~196 (5.1), not runnable | ~0-0.1 MiB free |
| M0 | Measure, gate, deterministic replay mode | M | low | 64.6 | — | +0 (profiler table only in TS_HWPROF builds) |
| M1 | Data-path quick wins (textures, CLUT, constants, MSCAL, walker, audio WC) | S-M | low | 56 (53-58) / 17.9 | (164) | −0.1 |
| M2 | Splitscreen enablement + memory headroom | M | low-med | 56 | 161 (145-180), first real 4P number | −3 to −5 MiB |
| M3 | EE runtime diet | S-M | low-med | 51 (48-54) / 19.6 | 154 (138-172) | −0.5 to −1.0 MiB code |
| M4 | Native materials + voice-major mixer | M-L | med | 47 (44-51) / 21.1 | 141 (125-158) | +0.1-0.2 |
| M5 | Render cut 1: native draw records, precalc origin | L | med-high | 39 (34-44) / 25.8 | 108 (92-125) | +0.1-0.3 |
| M6 | Render cut 2: Dbuf + REF origins; vblank-exact pacing | M | med | 35 (31-40) / 28.6 | 94 (80-108) | +0.02 |
| M7 | Game-logic natives (+ no-yield regions) | L | med | 29 (25-34) / 34 | 82 (70-95), real-time speed reached | +0.3-0.8 code |
| M8 | NV2A fetches vertices in place (gated) | XL | high, with fallbacks | 25 (21-30) / 40 | 66 (55-76) / 15 | 0 to −0.24 |
| M9 | 4P tuning track | M-L | med | ~24.5 | ~58 (48-68) / 17 | ± |
| M10 | Optional: register-promoting backend | XL | med-high | −2 to −4 | −4 to −10 | ±0 if size-neutral |

Displayed rate: a 29 ms mean (M7) with p90 of about 33-38 ms displays roughly 26-28 fps. A locked 30 needs M8, or M7 at its good end.

**Parallel tracks.**
- Render: M1 → M4 → M5 → M6 → M8.
- EE: M3 → M7 → (M10).
- Platform/splitscreen: M0 → M2 → M9.
- Audio: M1.6 → M4.3.

#### M0: Measure and gate (M, low risk, 0 ms)
- **0.1 Busy metric.** Add to [TS:perf] (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_main.cpp:171-173 at HEAD): busy ms/frame, fpsEq, and p50/p90/p99. Take them from a 1 ms-bin histogram kept at gameFrames++ (D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp:811-821).
  - Split the truncated `fh` line (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_hwprof.cpp:443).
  - Measure true CPU idle from idle-thread time.
  - Add a count/µs/histogram for each EE wait site: pacing at D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:1975, :2183 and :2217, with the probe in D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_io_stats.h:47-99.
  - Run A/B builds with TS_HWPROF on and off, to settle the idle question.
- **0.2 Phase rdtsc.** Bracket gameTick, lvTickBefore, each lvTickPlayer, lvTickAfter, each lvGfx and the gsMain kick. Inside the kick bracket the walk, VIF, MSCAL, runDraw, GS front end and NV2A backend separately.
  - Print the counters that exist but never reach the log: kcycNative (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:802-821) and g_audioMixKcyc (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_raylib.cpp:157). g_audioMixKcyc settles the CMOS/PIT disagreement on audio.
- **0.3 Render-origin counters** (this is what decides M1.5, M5 and M6).
  - partGfx path taken: precalc CALL at D:\Programming\GitHub\Timesplitters\project\game\ts_native_game2.cpp:7576-7587; Dbuf CALL at :7588-7604 and :8319-8343; per-frame REF at :7611-7767 and :8349-8525.
  - Tags by ID; all-zero tag halves; pieces by origin; an UNPACK histogram by format × destination; MSCAL by entry PC; runs, strips and vertices; CPU-path strips; flat runs; batch merges; texture slow-path lookups; CLUT misses by cause (slot conflict, version change, non-full load).
  - Writer hooks: vtxlistcolour, obInstLight, obPrecalcDbufGfxData, partPrecalcDmaData.
  - The same counters compiled into the PC frame_bench (D:\Programming\GitHub\Timesplitters\project\game\frame_bench.cpp:110-150) give exact counts without a console.
- **0.4 Memory telemetry and OOM forensics.**
  - free/min/lowest; dlmallinfo in-use, footprint and fordblks; bytes allocated by allocGpu (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:73-76); texture allocation failures (:770-772).
  - A 16-entry ring of allocations of 64 KiB or more, with __builtin_return_address, printed by outOfMemory (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_shims.cpp:78-99).
  - The game's level-heap free (memGetFreeLevel, D:\Programming\GitHub\Timesplitters\project\generated\memGetFreeLevel_0x201e70.cpp) and memdb used (gp-0x6570, D:\Programming\GitHub\Timesplitters\project\game\ts_native_game.cpp:2652).
- **0.5 EE counters and performance counters.**
  - Per frame: guest calls, back-edges, device batches, dispatcher iterations, unwinds by cause, native checkpoint bail-outs, and slow-path guest accesses by region.
  - P6 performance counters (MSR 0x186/0x187, RDPMC), data side first: MISALIGN_MEM_REF + LD_BLOCKS; DCU_LINES_IN + DCU_MISS_OUTSTANDING; BUS_TRAN_MEM + L2_LINES_IN. Then IFU_MEM_STALL + ITLB_MISS, which closes the i-cache question.
  - MXCSR DE/UE sticky flags in every thread. MXCSR is only ever written at D:\Programming\GitHub\Timesplitters\src\xbox\xbox_shims.cpp:22-33.
- **0.6 GPU busy.** Read NV_PGRAPH_STATUS (0xFD400700) and GET versus Put in the RTC handler, the same test pb_busy uses (D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:1566-1585). Add fences per viewport.
- **0.7 Console feasibility tests**, which gate M5's flat-shading choice and all of M8:
  - T1: 32 MiB contiguous cached allocation, made before the PS2Runtime is constructed (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_main.cpp:245-262).
  - T2: does the NV2A snoop cached CPU writes?
  - T3: is NV097_BREAK_VERTEX_BUFFER_CACHE needed (C:\nxdk\lib\pbkit\nv_regs.h:479)?
  - T4: FLAT_SHADE_OP=LAST (C:\nxdk\lib\pbkit\nv_regs.h:387-389; pbkit sets FIRST at D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:2867).
  - T5: does primitive assembly continue across DRAW_ARRAYS calls inside one BEGIN/END, and what do ARRAY_ELEMENT16 and BEGIN/END cost?
  - T6: a paged DMA object as the fallback for T1.
  - T7: is GPU lag at most one frame?
  - T8: WBINVD cost.
- **0.8 Deterministic validation mode.** T1 (the timer) and VBlank are driven from a frame/cycle counter, pads from the script. Hash RDRAM and the draw stream at each gsMain hand-out.
  - Required because T1 is clocked from charged EE cycles plus wall-clock catch-ups (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:518-531; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:1936-1949). Any change to cycle charging changes framesi, and with it game state.
- **0.9 Safety fix.** Call SDL_FlushEvents after SDL_GameControllerUpdate (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_raylib.cpp:77-79). The event queue is never drained and can grow to about 5 MiB during real play. The scripted runs do not show it.

#### M1: Data-path quick wins (S-M, low risk)

| Item | Change | Gain (1P ms) | Validation |
|---|---|---|---|
| 1.1 Texture identity | Open-addressed hash index (512-1024 slots, ~16-32 KB) over the full key, replacing the std::list walk (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:437, :671-697, walk at :681); 4-way recent table (:553-617); gpuRange/frameRangeExact computed once per frame (:239-249, :392-395) | 1.4-2.0 | Self-check build runs the old list scan on every lookup (mismatches = 0); TS_NATIVE_DRAW_SELFCHECK texture compare (:601-610) |
| 1.2 CLUT | Identity-only palette entries (~24-32 B; frees ~110 KB of the 131 KB table) on the exact key (cbp, cpsm, csm, csa, page versions); revalidate by memcmp of the contiguous 1 KB source; fixed permutation unswizzle for full T8/CT32/CSM1 loads; the 1 KB copy into GSCpuBackend only when a CPU decode needs it (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:463-506, :2450-2487; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\gs\gs_cpu_backend.h:60-87; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_cpu_backend.cpp:743-803, :1392-1417) | 1.8-2.6 | DebugClutState compare (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:2489) on every load in the check build; boot self-test of the permutation over random VRAM; drawdiff=0 |
| 1.3 Constants | Dirty-row mask from g_vu1WatchedRows (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:856-858); loadConstants copies dirty rows only (:323-366); drop the 544-byte compare and copy (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:2088-2124); uploadConstants without per-row memcmp (:1398-1421) | 0.9-1.4 | Sampled full rebuild compare under TS_NATIVE_DRAW_SELFCHECK ('constants' drawdiff=0) |
| 1.4 MSCAL path | Cached native function pointer per VU1 code generation, called from the MSCAL case (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_vif1_interpreter.cpp:1547-1565), bypassing the std::function (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_runtime.cpp:778-787) and the registry lookups (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\vu\ps2_vu1_jit.cpp:34-49, :93-127); run()'s rdtsc and /1000 stats behind a switch; run()'s 6.7 KB locals made static, so no __chkstk (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:801-817); tail-length sum computed during the walk (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_vif1_interpreter.cpp:876-883); cached currentContext (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:1556-1575) | 1.4-2.0 | MSCAL, draw and kconst counts identical; vifdiff/drawdiff 0; debug assert cached == looked-up |
| 1.5 Walker | Skip all-zero TTE tag halves; inline addSegment (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:1573-1586, :1803-1828). **Gated** on the M0 counter showing that most halves are zero | 1.0-2.0 | TS_VIF_SELFCHECK (vifdiff=0, :42-54) |
| 1.6 Audio write-combined staging | Mix into a cached, 32-byte-aligned 4 KB buffer, then one memcpy into the AC97 ring. Today Ps2Music::mix reads every sample back from write-combined memory (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_music.cpp:220) that is allocated PAGE_WRITECOMBINE (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_raylib.cpp:145-152, :170-171) | 1.5-1.8 at today's rate (−2.2% of CPU per second) | PCM byte-identical (TS_SPU2_RAW moved to the staging buffer); Ps2Music::mix share drops below ~0.6% |
| 1.7 Flush-to-zero | Set FTZ per thread only if M0 shows non-zero DE/UE counts (game thread D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_runtime.cpp:2670, audio feeder D:\Programming\GitHub\Timesplitters\src\xbox\xbox_raylib.cpp:183) | 0-1 | Hashes differ only in frames where the flags fired |

Deduplicated M1 render gain: 6.5 ms per viewport (5-9). The item ranges sum to 6.5-10; the memcpy shares of 1.2 and 1.3 are counted only once. Audio adds −2.2% of CPU. Frame: 56 ms (17.9 fps-eq).

**What could make it wrong:** the CLUT misses could be real page-version changes rather than slot conflicts. The code argues they are conflicts: no GS writes happen in a match (gif count stays at 1,896, C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\run_nat5.txt:4-5 and :10-11). If they are real changes, 1.2 drops to about 0.5-1 ms.

#### M2: Splitscreen enablement and memory headroom (M, low-medium risk)

- **2.1 Pad HLE.**
  - scePadPortOpen connects lanes from TS_PADS (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Stubs\Pad.cpp:641-673; today only (0,0) at :658).
  - scePadGetSlotMax(0) returns 4 when there are more than 2 lanes (Pad.cpp:487-493). The gates are controllerTick (D:\Programming\GitHub\Timesplitters\project\generated\controllerTick_0x2031a8.cpp:79-112) and joyMtapTick (D:\Programming\GitHub\Timesplitters\project\generated\joyMtapTick_0x2035a8.cpp:51-117).
  - readState routes (port, slot) to a lane instead of the hard-wired script for 0/0 and gamepad 0 (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_pad.cpp:507, :559-611).
  - sceMtap does not hang. It fails at once, because the game's RPC packet table is never initialised (D:\Programming\GitHub\Timesplitters\project\generated\_sceRpcGetPacket_0x2d26d8.cpp:65-71). Native replacements of the six sceMtap functions are optional.
- **2.2 Multi-lane script.** Line format `<reads> <btn> [axes] | <btn> [axes] ...`; lane 0 stays the clock (parser at D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_pad.cpp:280-330). Write arcade-2p.pad and arcade-4p.pad next to D:\Programming\GitHub\Timesplitters\src\xbox\test\arcade-match.pad, gated by `wait_u32 0x003AE764 == N`.
- **2.3 Picture correctness.**
  - frameHeight from the display, not from the first draw's scissor (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1520, display decode at :2562).
  - GS SCISSOR added to DrawKey (:1271-1283) and applied as NV097_SET_WINDOW_CLIP (C:\nxdk\lib\pbkit\nv_regs.h:220-222).
  - Widescreen off in multiplayer (D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp:213-220; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp:1915-1940).
- **2.4 Bounded mid-match allocations.**
  - s_vif1Segments becomes a fixed 32 KiB batch flushed in order (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:41, :1569-1583, :2316-2328).
  - Streamed row decode replaces the 256 KiB-4 MiB `decoded` scratch, and the second DecodeTexture goes (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:442, :735-744, :1004-1006).
  - Cap the runtime texture budget in multiplayer (:64, :433, :845-849).
  - Fenced push-buffer wrap instead of drain-and-reset (:1834-1856).
- **2.5 Reclaim set**, 3-5 MiB against a need of 2-3:

| Item | Saves (MiB) | Source |
|---|---|---|
| Sparse IOP RAM (page-allocated on first write) plus a coarse ownership map | 1.2-1.8 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xIOP\src\emulator\core\iop_memory.h:17, :90-91 |
| Recompiled VU1 fallback, after fixing the early exit that would switch native VU1 off | 0.64 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\vu\ps2_vu1_jit.cpp:99; D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:98-100 |
| Thread stacks right-sized (XBE stack 64 KiB, game thread an explicit 256 KiB) | 0.375 | D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:245; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_runtime.cpp:2670 |
| Static diet: VU0 interpreter tables, lazy VU1 tables, IoRegisterFile, debug histories | 0.6-0.9 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_runtime.h:553-554; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_vu1.h:118-131 |
| Untiled 1280-pitch colour buffers (pbkit pads rows to 1536 bytes) | 0.35 | D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:203-207, :2970-2983 |
| -O2 originals of fully native functions back to -Oz | 0.15-0.3 | D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:105-116 |
| Optional: SDL2 replaced with nxdk's XID driver | 0.75 | D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:147 |

- **Gate:** at least 1.0 MiB free at the low-water mark in the heaviest 4P frame; no allocation of 64 KiB or more after level load; zero texture allocation failures.
- **Gain:** 1P about 0. 4P: −1 to −4 ms of push drains. First measured 4P: predicted 161 ms (145-180), at about 50% game speed.
- **Validation:**
  - 1P pixel-identical apart from places where the PC GPU backend also clips (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_gpu_backend.cpp:1152-1153).
  - 2P/4P screenshots compared with the PC build; no bleed across viewport borders.
  - IOP RAM checksum against the dense build.
  - A memory-card flow test.

#### M3: EE runtime diet (S-M, low-medium risk)
- **3.1 Checkpoint.** A 32-bit countdown (`budget -= n; js slow`) replaces the 64-bit add/adc/compare plus flag test (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_runtime.h:46-67, :434-442). The post-call check becomes a single `ctx->pc != resume` (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_direct_call_xbox.h:40-65). Every writer of m_checkpointPending zeroes the budget (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:425-507, :2280-2289). Gain 0.4-1.0.
- **3.2 Native call slots.** Build-time-resolved slots for the natives' 438 guestCall sites (D:\Programming\GitHub\Timesplitters\project\game\ts_native_game.cpp:143-148; D:\Programming\GitHub\Timesplitters\project\game\ts_native_game2.cpp:245-251), instead of dispatchGuestBranch (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_runtime.cpp:1517-1600). Gain 0.2-0.4.
- **3.3 Single-core lock diet.**
  - GS m_stateMutex becomes a no-op on Xbox, with an owner-thread assert in debug builds (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp:754, :1143, :1701, :1789).
  - notify only when a waiter is registered (D:\Programming\GitHub\Timesplitters\src\xbox\winapi\sync_ts.c:423-441).
  - publishSnapshot on demand (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:1610-1673).
  - Spu2::takeIrq becomes an atomic (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_spu2.cpp:473-479).
  - m_eventMutex stays: it backs a condition variable.
  - Gain 0.7-1.1.
- **3.4 Device-batch diet.**
  - Exact lazy timer reads plus 32-bit HBLANK stepping, replacing the 64-bit div/mod (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:488-533, :3091-3104).
  - IOP idleUntil fast path (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xIOP\src\emulator\iop_emulator.cpp:567-608, :762-769).
  - Then raise PS2X_DEVICE_CYCLE_BATCH from 2048 to 16-64K (D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:30).
  - Gain 0.6-1.0.
  - **This changes T1's read granularity, so validate behaviourally**: match clock against a stopwatch, ticks-per-frame log, and pinned-T1 hashes for everything else.
- **3.5 patch_generated.py** (D:\Programming\GitHub\Timesplitters\src\xbox\tools\patch_generated.py:1-46).
  - Pass pc into the cold slow paths and drop the inline `ctx->pc =` stores before plain accesses.
  - Drop in_delay_slot/branch_pc except around trapping delay-slot instructions (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRecomp\src\lib\control_flow_emitter.cpp:127-150).
  - Skip the resume switch on normal entry (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRecomp\src\lib\function_emitter.cpp:91-101).
  - Keep pc stores before calls, syscalls, COP0, VU0 calls and stubs.
  - Gain 0.4-1.1 ms and 0.5-1.0 MiB of code.
- **3.6 -O2 list.** Retarget GEN_FAST_NAMES from the hardware ranking (D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:105-119). Promote propTickBefore, calGlobalMatrices, bgFloorBBIntersectionXZ, findpadslinked2pad, propFindFloorHeightRoom, propMoveTestRoom and similar. Demote native twins except calMatrices. Gain 0.3-0.8; roughly memory-neutral.
- **3.7 libc.** memcpy size classes (no byte-tail rep when n%4==0; inline when n ≤ 64) and inline fixed-size equality helpers (D:\Programming\GitHub\Timesplitters\src\xbox\xbox_string.cpp:14-85). Residual gain 0.3-0.6.
- **3.8 Page-aligned guest memories.** RDRAM, VRAM and VU1 data via VirtualAlloc. Today they sit at page + 8 through dlmalloc (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:419-461; C:\nxdk\lib\pdclib\functions\_dlmalloc\malloc.c:704, :2304). Gain 0.5-2; size it with the MISALIGN_MEM_REF counter first.
- **Optional 3.9:** `__restrict` rdram in the patched copies (S, medium risk), 0.3-0.8.
- **Deduplicated M3 gain:** 4.5 ms (3-6.5) at 1P; about 7 ms at 4P.
- **Validation:** pinned-T1 deterministic replay with identical scheduler traces and RDRAM hashes for 3.1-3.3, 3.5, 3.6 and 3.8; boot self-tests; screenshots.

#### M4: Native materials and voice-major mixer (M-L, medium risk)
- **4.1 Native material binding.**
  - A material keyed by state-block address plus content check, holding: the Texture* resolved per page epoch, the palette identity from M1.2, prebuilt NV2A state words, and a 32-bit material id.
  - The id replaces the 84-byte DrawKey memcmp and the ~112-byte block compares (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:267-322, :400-445; D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1271-1283, :1687-1735, :1741-1803, :2066-2141).
  - GS register replay (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp:1719-1742, :1787-1812, :1968-1993) is skipped for native runs. The last skipped block is replayed before any non-native GS consumer, including dlSetClip's 0x3FE0 kick (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:771-800).
  - Compact entries only. A 1,024 × 250 B table would consume the whole in-match headroom.
  - Gain 1.5-3.5 (central 2.2).
- **4.2 GIF-tag batching.** One key and one texture lookup per GIF tag instead of per primitive (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp:1615-1697; D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1929-2050). Gain 0.3-0.6.
- **4.3 Voice-major SPU2 mixer.**
  - Constant-gain envelope segments, Gaussian taps with the per-tap >>15 kept, music folded into the int32 accumulators, and one saturating store (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_spu2.cpp:84-97, :117-143, :194-286; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\runtime\ps2_spu_gauss.h:71-78; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_music.cpp:146-228).
  - Scalar integer, no MMX.
  - Gain 1.0-1.5 ms at today's rate (−1.5 to −2.2% of CPU per second).
- **4.4 Music disc I/O on a loader thread** (ps2_music.cpp:146-176). Prevents DVD stalls; about 0.05 ms.
- **Validation:**
  - TS_NATIVE_DRAW_SELFCHECK replays the full path on 1 run in 32 (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:33-49); drawdiff=0.
  - Random differential mixer self-test, plus command-log replay that also records VoiceTrans sample writes. Those bypass the Spu2 mutex (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Stubs\Audio.cpp:202-203).
  - Byte-identical PCM.

#### M5: Render cut 1: native draw records for the load-time precalc origin (L, medium-high risk)
- **The tunnel.** At the precalc CALL (D:\Programming\GitHub\Timesplitters\project\game\ts_native_game2.cpp:7576-7587), partGfx writes a CNT qwc 0 tag carrying NOP(magic) and NOP(index), and appends a host record: chain address, level, matrix/light block addresses, override flags.
- **The descriptor.** Built lazily, the first time a chain is seen, by running today's VIF decoder in record mode over the static chain (D:\Programming\GitHub\Timesplitters\project\generated\partPrecalcDmaData_0x25f408.cpp:366-770; the MSCAL templates are inside the chain at :932 and :1688). Per batch it holds:
  - kind;
  - strip-header and array guest addresses and formats;
  - state-block address;
  - MSCAL parity;
  - VIF end state (DBF/TOPS/TOP/ITOP and CYCLE/MODE/MASK/ROW/COL/ITOPS; D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_vif1_interpreter.cpp:1547-1565).
  - It lives in a bounded 100-300 KB LRU, invalidated by a native hook on partPrecalcDmaData and at level load.
- **Running a record:**
  1. drain the GIF arbiter (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:707-709);
  2. apply the M4 material;
  3. write and note VU1 rows 4-21 and 106-121 (:822-859);
  4. decode strips straight from guest arrays into the ring, with prefetch one record ahead, compact per-kind records and joins (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_xf.h:111-216);
  5. use FLAT_SHADE_OP=LAST if T4 passed, which removes the 3(n−2) expansion (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:2186-2199);
  6. set the VIF end state.
- **Gain:** 8 ms per viewport (5-11). The deep dive says 9-11; the deduplicated ledger is more conservative.
- **Validation:**
  - New TS_NATIVE_RECORD_SELFCHECK: in sampled frames partGfx also writes the original CALL into a shadow list, which is decoded dry. Compare constant rows, material, strip records and VIF end state; recorddiff=0 over a full match.
  - TS_NATIVE_RING_SELFCHECK (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:50-63, :628-656).
  - Host test D:\Programming\GitHub\Timesplitters\src\xbox\test\vu1_native_xf_test.cpp, extended with per-format decoders.
  - partGfx boot self-test extended to expand the tunnel (D:\Programming\GitHub\Timesplitters\project\game\ts_native_game2.cpp:10584).
  - Console frame CRCs.
- **What could make it wrong:** the precalc origin's share of runs is unmeasured (estimated 55-75%; M0.3 counts it).

#### M6: Render cut 2 and pacing (M, medium risk)
- **6.1 Dbuf origin** (ts_native_game2.cpp:7588-7604, :8319-8343). Dbuf chains are built once per instance at first relight (D:\Programming\GitHub\Timesplitters\project\generated\obInstLight_0x2a7ab0.cpp:72-125). After that only the colour arrays change, via vtxlistcolour when roomlightTick sees a colour change (D:\Programming\GitHub\Timesplitters\project\generated\roomlightTick_0x2a7d20.cpp:675-704). Generation counters from native hooks on those writers. None of the writers appears in 82 s of console samples.
- **6.2 Per-frame REF origin** (ts_native_game2.cpp:7611-7767, :8349-8525), with the per-instance override records.
- **6.3 Sampled content-hash audit** of referenced arrays in validation builds, to catch unknown writers.
- **6.4 Vblank-exact game time.** framesi = floor(D+0.5) discards the fraction every frame (D:\Programming\GitHub\Timesplitters\project\generated\timeTickStart_0x2b66e8.cpp:62-197). Near 30 fps, 2.4-vblank frames would play 17% slow. Align cpuMain's frame start to the hand-out vblank, or snap T1 reads to vblank counts (D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp:729-790).
- **6.5 Optional:** lock pacing to the real NV2A vblank (D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:228-260). Use pb_vbl_counter as the source, because the event is pulsed (:258).
- **Gain:** 3.5 ms per viewport (2-5).

#### M7: Game-logic natives (L, medium risk)
- **7.0 Prerequisite: no-yield native regions plus loop-head re-entry.**
  - checkpointDecision charges cycles but does not unwind while a region is open (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:446-470).
  - Natives close the region at their own loop heads.
  - Native resume entries stop the fall-back into translated originals. calMatrices runs translated about half the time (388 vs 460 samples; D:\Programming\GitHub\Timesplitters\build\xbox\gen\register_functions_xbox.cpp:26704-26708).
  - Assert that no WaitSema or RPC call happens inside a region (soundTick uses RPC: D:\Programming\GitHub\Timesplitters\project\generated\soundTick_0x204ec0.cpp:717).
  - Gain 0.4-0.9.
- **7.1 Direct leaf calls; doubles on x87** with 53-bit precision control and the fp-bit path as fallback for NaN, Inf, denormals and edge exponents (D:\Programming\GitHub\Timesplitters\project\game\ts_native_fp.cpp:2005-2014; D:\Programming\GitHub\Timesplitters\project\game\ts_native_math.cpp:3491-3518). Gain 1.2-1.9.
- **7.2 Character pipeline, idiomatic SSE1.** propTickBefore's loops, animUpdate/calMatrices, animMtxTick (D:\Programming\GitHub\Timesplitters\project\generated\propTickBefore_0x26f500.cpp:194-278, :906, :1340). Gain 1.5-2.8.
- **7.3 Per-player tick and collision kernel** (D:\Programming\GitHub\Timesplitters\project\generated\lvTickPlayer_0x2265a8.cpp:405-441). Gain 1.2-2.0 at 1P, ×4 at 4P.
- **7.4 Lighting post-tick** (D:\Programming\GitHub\Timesplitters\project\generated\propTickAfter_0x26f9e8.cpp:515), 0.4-1.0. The game already recomputes ambient light for only a quarter of props per frame (D:\Programming\GitHub\Timesplitters\project\generated\obinstCalcAmbientLight_0x25aae0.cpp:450-475), so memoisation is worth less than it looks.
- **7.5 Effects tick**, 0.5-0.9 (bulletTick sub-steps shrink as fps rises).
- **Deduplicated gain:** 5.5 ms (4-8) at 1P, about 11 ms at 4P. Overlaps with M3.2 and M3.6 are removed.
- **Memory:** each native batch has cost 0.57-0.78 MiB of measured xemu headroom. Demote the originals to -Oz and budget against the M2 low-water gate.
- **Validation:** lockstep RAM-snapshot harness (PC build of the natives; tick-phase snapshot compare excluding below-$sp and memdb scratch); boot differential self-tests with 1-4 players randomised; per-frame position checksums in pad replays.

#### M8: NV2A fetches vertices in place (XL; gated on T1 or T6, T2 or T8, T3, T5, T7)
- **Guest RAM placement.** RDRAM from MmAllocateContiguousMemoryEx as the first allocation in main, replacing new[] at D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:421. Fallback: a paged NV2A DMA object.
- **Drawing.**
  - Records set SET_VERTEX_DATA_ARRAY_OFFSET/FORMAT to the guest arrays (C:\nxdk\lib\pbkit\nv_regs.h:483-488).
  - Strips are drawn with ARRAY_ELEMENT16 index lists and explicit degenerate joins (C:\nxdk\lib\pbkit\nv_regs.h:517). This works whether or not DRAW_ARRAYS continues primitive assembly.
  - q==0→1 and the bone clamp move into D:\Programming\GitHub\Timesplitters\src\xbox\shaders\gs_xf.vs.cg.
  - Formats the NV2A cannot fetch (V4-5, unsigned 16-bit ≥32768, V2 ST with a stale q lane) fall back per batch to the M5 decode.
- **Coherency.** Snoop if T2 passes; otherwise WBINVD only after a hooked writer touched GPU-read arrays. BREAK_VERTEX_BUFFER_CACHE when a Dbuf generation changes (nv_regs.h:479). A one-frame fence.
- **Gain:** 4 ms per viewport (2-6.5). The 352 KB ring shrinks to about 120 KB.
- **Validation:** fetch-equivalence check (CPU emulation of the NV2A attribute fetch compared bit for bit with the M5 ring records); console frame CRCs.
- **If gated out,** the program stops at M7 and 1P stays at about 29 ms.

#### M9: 4P tuning (M-L)
- Native HUD/text emitting one packet per string. Today it is one dlTextureRectangle per glyph (D:\Programming\GitHub\Timesplitters\project\generated\lvGfx_0x2266f8.cpp:1439).
- Fused propUpdateRooms/propGfxRoomPreproc.
- Lazy per-viewport animMtxTick.
- Per-viewport view-projection constant banks (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:143).
- Texture pack rebuilt from a 4P session.
- 4P voice histogram, which decides on a 24 kHz mode or an MCPX spike.
- Gain −5 to −12 ms at 4P, giving about 58 ms (17 fps).

#### M10: Optional register-promoting backend (XL)
Only if translated code is still at 5 ms or more after M7. Corrected gain 2-4 ms at 1P and 4-10 at 4P. Code must stay size-neutral (-Oz/-Os for the cold majority).

### 6. Deduplication: one owner per gain

| Gain claimed by several reports | Owner | Counted once as |
|---|---|---|
| Texture identity (geometry, nv2a M1, textures, gamelogic) | M1.1 | 1.4-2.0 |
| CLUT path (textures P1, nv2a M2, geometry, gamelogic) | M1.2; lazy-copy part in M1.2 | 1.8-2.6 (CLUT memcpy share included) |
| Audio write-combined read-back (scheduler, audio, platform P4) | M1.6 | 1.5-1.8 |
| 32-bit countdown (codegen P2(d), scheduler, platform P2(b)); supersedes scheduler P1's inline part | M3.1 | 0.4-1.0 |
| guestCall slots (codegen, scheduler, gamelogic P4(a)) | M3.2 | 0.2-0.4 |
| currentContext cache (codegen, scheduler P4(d), geometry) | M1.4 | 0.25 |
| __aulldiv callers (4 reports; whole function 0.42) | M1.4 (run's /1000) + M3.4 (timers) | ≤0.42 |
| -O2 list (codegen, gamelogic, platform P3) | M3.6 | 0.3-0.8 |
| IOP clock / device batch (audio P3, scheduler P2b) | M3.4 | 0.6-1.0 |
| GS mutex (scheduler P4, geometry P2, nv2a P2) | M3.3 | inside 0.7-1.1 |
| Constants (geometry P6, nv2a P5) | M1.3 | 0.9-1.4 |
| Material/state path (geometry P2, nv2a P2, textures P2, ledger b3) | M4.1 | 1.5-3.5 |
| GIF batching (geometry P5, nv2a P4) | M4.2 | 0.3-0.6 |
| Scissor/viewport (geometry P7, nv2a P3, splitscreen dive) | M2.3 | 0 (correctness) |
| VIF/DMA/VU1 pool (geometry P1/P1a/P3/P4, nv2a P1/M3, gamelogic P1 and decode cache, platform P5) | M1.4-1.5 → M5 → M6 → M8 | 6.5-ish + 8 + 3.5 + 4 per viewport, sequential, not additive across alternatives |

Items absorbed by later ones:
- M5 absorbs deferred UNPACK as a standalone stage (P1a), the chain descriptors (geometry P3), the ring diet (nv2a M3) and the game half of gamelogic P1.
- M8 replaces every renderer-side decoded-block cache.
- M7 absorbs most M3.6 promotions and lowers M10's value.

### 7. Rejected or deferred

| Proposal | Decision | Reason |
|---|---|---|
| Scheduler P2: EE threads as fibers | Rejected | Per-thread stacks against ~0 MiB free; nxdk's _chkstk trips on heap stacks; ISR/DPC frames land on every stack |
| Scheduler P1: nested interrupt delivery with longjmp | Deferred | 0.6-1.5 ms for L effort. A longjmp out of a native's loopCheckpoint loses state (D:\Programming\GitHub\Timesplitters\project\game\ts_native_game2.cpp:253-260). M3.1 takes most of the inline gain |
| Scheduler P3: mix audio on the game thread | Rejected | Moves 5.9 ms onto the game thread and saves none of it |
| Renderer-side decoded-block cache (design D) | Rejected | Needs 1-4 MB that does not exist; leaves 12-18 ms of emulation per viewport |
| Per-frame WBINVD as the invalidation scheme; page-fault write tracker | Rejected | Generation counters on known writers instead; WBINVD only on demand |
| nv2a P7: reverse-Z / combiner merging | Contingent | Only if 4P measures GPU-bound, which is not expected |
| Audio P2: MCPX APU voices | Spike after M9 | XL; not bit-exact; sample memory does not fit; payoff only at high 4P voice counts |
| Audio P4 (24 kHz / voice cap), P5 (ADPCM block cache), P6 (IOP-less boot) | P4 is a product decision after M9; P5 and P6 skipped | P5: 0.1-0.2 ms against 128-512 KB. P6: 0.01-0.03 ms, and it would remove MTAPMAN |
| Textures P8: GS memory as NV2A-owned I8 textures | Rejected | Decommit the GS frame/Z pages instead: about 1.6 MiB, no picture change; optional memory item |
| Platform P2 per-target thunks; P3 large pages for code; hot-cold splitting | Skipped | 0.2-0.6 ms; i-fetch is not the bottleneck on hardware |
| MMX kernels | Deferred | Clang 21's MMX intrinsics require SSE2 (C:\msys64\clang64\lib\clang\21\include\mmintrin.h:43-48), so assembly only; revisit after M4 if audio is still ≥3% |
| Double buffering to save memory | Rejected | Brings back the half-drawn-frame problem fixed in 3da00de, or a flip stall |

### 8. Conflicts resolved
- **Free memory.** "2 MB" is measured before the game loads. In a match, hardware has an inferred 0-0.1 MiB after the 256 KiB growth. The console is configured for 64 MiB (cxbe bLimit64MB, C:\nxdk\tools\cxbe\Xbe.cpp:68), not 128.
- **Idle.** The 4.54 ms of EE waiting and 3.66 ms of kernel idle are profiler-build effects. Baseline busy is about 65 ms. M0.1 confirms per wait site.
- **Time base.** T1 comes from charged cycles. Every validation that promises identical hashes uses the pinned-T1 mode. M3.4 and M6.4 are validated behaviourally.
- **Static geometry.** Precalc chains are static after load. Dbuf chains are built once per instance; only their colours are rewritten. The per-frame REF path points at static arrays. Invalidation is by generation counters.
- **Contiguous RDRAM.** Unknown until T1 runs. Only M8 needs it; T6 is the fallback.
- **NV2A semantics.** Flat shading is selectable (FLAT_SHADE_OP), so no colour-stream offset trick. Strips are joined with index lists, so nothing depends on whether DRAW_ARRAYS continues assembly. The existing triangle-list chunking at 256 (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1890-1894) is correct only if it does continue; T5 checks that.
- **Execution contract.** Keep unwind-by-return. Natives keep returning from loopCheckpoint. Add no-yield regions (M7.0). No fibers, no nested longjmp, no return-next-pc protocol outside M10.
- **Code size.** Realistic code-shape savings are 0.5-1.2 MiB. No plan counts on 3+ MiB.
- **Sampling clocks.** Audio is uncertain by ±1.5 ms until rdtsc from M0.2. It does not change the order: M1.6 is cheap whichever number is right.
- **MMX.** Scalar first (see section 7).
- **Measurement.** Report busy ms/frame with p90 and fpsEq. The game-frame counter cannot show anything above 30.
- **Splitscreen measurability.** M2.1-2.2. Keep MTAPMAN loaded.
- **4P scaling.** Use k = 0.85-1.05 per viewport, the framesi clamp at 5, and per-second work growing with frame length.

### 9. What the real-hardware profiler must measure first (in order), and how it can reorder the plan

1. **Busy ms/frame, p50/p90/p99, true idle, per-site EE waits; TS_HWPROF on vs off.** If real idle exists in the shipping build, a pacing fix (S) becomes a first-week item worth up to 3.7 ms.
2. **Render-origin counters (M0.3).**
   - If zero tag halves are rare, drop M1.5.
   - If precalc is below about 40% of runs, merge M5 and M6 into one stage.
   - If the UNPACK histogram shows unfetchable formats, M8's gain shrinks.
3. **CLUT miss causes and texture slow-lookup count.** If misses are real page-version changes, M1.2's gain halves and M4.1 moves up.
4. **rdtsc phase split per viewport and per player** (kcycNative, lvGfx, lvTickPlayer). This calibrates R, D and Pp in the 4P model.
5. **Audio rdtsc (g_audioMixKcyc) and the Ps2Music::mix share after M1.6.** Settles CMOS vs PIT and confirms the write-combined diagnosis.
6. **Memory: low-water mark, OOM caller ring, s_vif1Segments capacity, dlmallinfo.** Confirms the OOM site and the M2 reclaim target.
7. **P6 counters, data side** (MISALIGN_MEM_REF, LD_BLOCKS, DCU_LINES_IN, BUS_TRAN_MEM). If misalignment is high, M3.8 moves into M1.
   - IFU_MEM_STALL/ITLB_MISS: if stalls exceed about 15% of cycles in translated code, M10 and code layout move up.
   - FP_ASSIST/MXCSR: if non-zero, M1.7 becomes mandatory.
8. **EE protocol counts** (calls, back-edges, device batches, unwinds, native bail-outs). These size M3.1, M3.4 and M7.0.
9. **GPU busy (PGRAPH_STATUS) at 1P, then at 2P/4P after M2.** If 4P is GPU-bound above about 15 ms, nv2a P7 comes back.
10. **Console tests T1-T8.** They gate M8 and choose the M5 flat-shading path.
11. **After M2: 2P/4P runs.** Per-viewport counts (k), push peak, ring waits, framesi histogram, memory low-water mark. These re-derive the -O2 list and the M9 content.

### 10. Validation infrastructure (shared)

| Mechanism | Covers | Location |
|---|---|---|
| TS_VIF_SELFCHECK | M1.5, M2.4 | D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:42-54 |
| TS_NATIVE_DRAW_SELFCHECK | M1.1-1.4, M4 | D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:33-49 |
| TS_NATIVE_RING_SELFCHECK | M5, M8 | D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:50-63 |
| Boot differential self-tests (10,000 cases per function) | M3, M7 | D:\Programming\GitHub\Timesplitters\project\game\ts_native_selftest.h |
| Host unit test | M5, M8 | D:\Programming\GitHub\Timesplitters\src\xbox\test\vu1_native_xf_test.cpp |
| PC frame replay | M0.3, M5 | D:\Programming\GitHub\Timesplitters\project\game\frame_bench.cpp:110-150 |
| New: pinned-T1 deterministic replay with RDRAM and draw-stream hashes per hand-out | M3, M7 | (M0.8) |
| New: TS_NATIVE_RECORD_SELFCHECK; fetch-equivalence check; lockstep RAM-snapshot harness; PCM byte-compare; console frame CRCs at fixed script reads; 2P/4P screenshots vs the PC GPU backend | M5-M8 | — |

### 11. Risks and what could make the estimates wrong
- **Estimates compound.** The bands widen to about ±15% by M7. The 36 fps-equivalent target sits inside the M7 band only at its good end, and needs M8 to be robust.
- **M5/M6 depend on unmeasured origin shares and on exact reproduction of VIF and VU state.** Mitigations: the record self-check and per-origin switches.
- **M8 depends on four console-only facts.** If they fail, 1P stays at about 29 ms and 4P at about 82 ms.
- **Memory is the hard limit.** Every native batch and every table competes for the M2 reclaim. Enforce the 1 MiB low-water gate on every merge.
- **4P k could be higher** (2P strips are wider than 1P views) **or lower** (portal culling). Only M2's run fixes it.
- **The 1P audio share is uncertain by ±1.5 ms** until M0.2.