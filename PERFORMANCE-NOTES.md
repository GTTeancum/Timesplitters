# Performance work — notes

Started 2026-09-25. Goal: large frame-rate gains on PC while moving the code
base toward a future original-Xbox port (which will need its own renderer).

Run the optimized build with `RUN-TIMESPLITTERS-FAST.bat` (MSVC Release in
`build-release/`).

## Measurements (Windows, Ryzen 7840HS laptop)

"Game frames/s" = `bossMainLoop` iterations per second (`TS_PROFILE_BOSS_CALLS=1`),
not the window refresh rate. The game is locked to vblank: a frame that needs
more than 16.7 ms of work drops to 30.

| Build | Title/menus | Arcade match (Tomb) |
|---|---|---|
| Shipped MinGW exe (`-O1`, per-call file logging) | ~7 | ~5 |
| MSVC Release, logging off | ~8.5 | ~5 |
| + recompiled VU1 microprogram (unoptimized) | — | ~10–13 |
| + drawing on worker threads | 30+ | ~15 |
| + huge-function optimization, GS/VU/VIF work | 50–60 | 60 in light views, 25–30 in busy views |

The arcade benchmark route leaves the player standing at the spawn point for
the whole match, so the result depends on the view: `TS_TEST_SPAWN_SEED=1`
gives a repeatable busy view (~28 fps); other spawns often hold 60.

## What changed

1. **Build/config.** `PS2X_ENABLE_AGRESSIVE_LOGS` and `PS2X_ENABLE_IOP_RPC_TRACE`
   default OFF (aggressive logs flushed a line to `ps2_log.txt` on every
   generated-function entry/exit). MSVC silently skips optimizing huge
   functions (C4883): generated game code and VU code use
   `/d2OptimizeHugeFunctions` (roughly doubled in-game frame rate).
2. **VU1 ahead-of-time recompiler** (`project/tools/vu1/`).
   * `vu1_recomp.py code.bin name out.cpp <entries…>` → `project/generated-vu/`
     (entries: `ts_da1f094c.entries`). Runtime: `runtime/ps2_vu1_jit.h`,
     `src/lib/vu/ps2_vu1_jit.cpp`, hooked at the top of `VU1Interpreter::run`,
     matched by FNV-1a hash of VU1 code memory.
   * Bit-exact with the interpreter (registers, flags, cycles, VU memory,
     GIF packets): VF/VI/ACC interlock, so generated code writes them
     immediately and tracks ready cycles; Q/P/flags/stores/XGKICK are modelled
     lazily; hand-back to the interpreter at any pair boundary.
   * Generator optimizations: static stall elimination within blocks, dead
     ready-cycle store elimination, block-level budget checks, and flag
     liveness (FMAC MAC/status entries kept only where an FMAND/FMEQ/FMOR,
     handoff point or program end can observe them; sticky bits accumulated).
     Flag elision is disabled for programs with FSxx/FSSET.
   * VU sources compile with `/fp:precise` (the runtime's `/fp:fast` fused
     multiply-adds and changed interpreter results).
   * `TS_VU1_INTERPRET=1` disables the recompiled path.
3. **Rasterizer threading** (`gs_threaded_backend.*`). The EE thread queues GS
   commands; N workers (default `min(8, cores-4)`, `TS_GS_THREADS`) each run
   the full stream with their own `GSCpuBackend` and draw interleaved 16-row
   groups (draws and clears). Uploads/transfers run on worker 0 after a join;
   primitives sampling pages written by queued draws join; primitives whose
   texture may alias their own target are drawn whole by worker 0.
   Presentation: worker 0 snapshots GS memory, a presenter thread converts it.
   Worker wake-ups are batched. `TS_GS_SYNC=1` restores synchronous drawing.
   Local->host readbacks (the game reads a full field back every frame in
   `sjeStoreImage`) run on the EE thread as soon as the queued writers of
   their source pages have finished (per-page writer tracking), instead of
   draining the whole queue. `TS_GS_VERIFY_READBACK=1` compares each early
   readback with a full-drain one (0 mismatches in ~12,000 checks).
4. **Rasterizer.** Triangles in read-only sampling use a per-worker cache of
   decoded textures (RGBA, CLUT and TEXA applied; keyed by CLUT contents;
   invalidated by writes; bypassed when the page cache's latched page may be
   stale).
5. Smaller: GIF packets not copied when nothing is queued; DMA chain cycle
   detection uses a flat hash set; VIF1 fast path for unmasked UNPACKs;
   XGKICK copies whole qwords; VU scheduler tables not cleared when idle; IOP
   thread scan merged into one pass; screenshots saved at the host aspect.

In-game numbers vary between identical runs (bot/enemy behaviour depends on
timing): Story start measured 20�28 across runs of the same build. Use the
deterministic replays (`timesplitters_vu_replay`, `timesplitters_gs_replay`)
to judge a change; treat single in-game runs as rough.

## Tools

* `TS_SAMPLE_PROFILE=<hz>` — built-in sampling profiler (Windows) of the EE
  thread, or of GS worker N with `TS_SAMPLE_PROFILE_GS=N`.
  `TS_SAMPLE_PROFILE_DELAY=<s>`, `TS_SAMPLE_PROFILE_LINES=1`,
  `TS_SAMPLE_PROFILE_CALLERS=<function>`.
* `TS_GS_CAPTURE=<file>` (`TS_GS_CAPTURE_AFTER`, `TS_GS_CAPTURE_FRAMES`) records
  GS backend commands; `timesplitters_gs_replay capture [workers] [iterations]
  [png]` replays them and prints VRAM and presented-frame hashes — the exact
  regression check for rasterizer changes.
* `TS_VU_CAPTURE_FILE` / `_AFTER` / `_LIMIT` record VU1 inputs;
  `timesplitters_vu_replay inputs outdir [repeats]` replays them
  (`TS_VU1_INTERPRET=1` for the reference), `vu1_diff.py ref new` compares.
* `TS_DUMP_RAM=<file>` + `timesplitters_frame_bench` — one-frame VIF/VU1/GIF
  replay (does little rasterization).
* `TS_GS_STATS=1` (joins / worker-0-only commands per second),
  `TS_GS_DECODE_STATS=1` (decoded-texture use).
* Arcade route: `work/recovery-20260925/arcade-match.pad` with an empty
  `TS_MC_ROOT`.

## Verification used for every change

* VU1: 4,000 (mixed) and 6,000 (busy view) captured runs, recompiled vs
  interpreter, 0 mismatches.
* GS: capture replay hashes identical for serial and 1/4/8 workers and
  before/after rasterizer changes.
* In-game screenshots inspected after rebuilds.

## Known issues / next candidates

* A large dark wedge in one spawn view (seed 1) appears with the interpreter
  and serial drawing too — pre-existing, not investigated.
* CPU use in busy views is ~5–6 cores (software rasterization).
* Busy views are limited by EE-thread VU1/GIF work (~25–40% of a frame) and
  waits on GS readbacks (`sjeStoreImage`).
* GPU renderer for PC (primitive level; the Xbox D3D8 renderer can share the
  texture-cache/primitive translation design).
