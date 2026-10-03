Plan: Xbox-specific changes for a 30 fps match (xemu firefight, starting from 131 ms per frame)

BOTTOM LINE
- Doing everything on the table, in order, takes the xemu firefight frame from 131 ms to about 58 ms. That is roughly 17 fps, with a range of 50-68 ms. 30 fps (33 ms) cannot be reached in xemu this way.
- The biggest single step is already written: the uncommitted GPU vertex batch, worth about a quarter of the frame. It has never run, and it needs a few small fixes before its first run.
- Getting closer would take three large rewrites. Even with all three, xemu lands near 40-48 ms. The three:
  - a draw path that skips the PS2 graphics-chip emulation;
  - vertex data read straight from the display lists;
  - a leaner shape for the translated game code.
- On a real Xbox, 30 fps is possible but unproven. Two effects pull in opposite directions:
  - xemu inflates GPU hand-offs, interrupts and floating point, roughly 10-15 ms of the remaining ~58 ms;
  - the console's small cache may run the 10.5 MB of translated game code slower than xemu does.
  One console run with the status counters settles which way it goes.
- Two facts shape the whole plan:
  - The game updates its logic once per frame shown, with a 1-5 tick multiplier, so that cost does not shrink as frame rate rises. Evidence: D:\Programming\GitHub\Timesplitters\project\generated\cpuMain_0x200c48.cpp:543-555 and D:\Programming\GitHub\Timesplitters\project\generated\timeTickStart_0x2b66e8.cpp:178-219.
  - On Xbox, building the frame and drawing it run back to back on one core. The VIF1 worker and the GS stage are off (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:2182-2183 and :2336-2337). So all CPU work for a frame must fit in 33 ms.

1. FRAME TIME AFTER EACH BATCH
All figures are xemu, arcade firefight, cumulative: central estimate with range in brackets.

| Step | Frame time | Rate |
|---|---|---|
| Now | 131 ms | 7.6 fps |
| B0 | ~100 ms (92-105) | |
| B1 | ~81 ms (76-87) | |
| B2 | ~77 ms (71-83) | |
| B3 | ~73 ms (67-80) | |
| B4 | ~65 ms (58-73) | |
| B5 | ~58 ms (50-68) | ~17 fps |
| S1-S3 (structural, optional) | ~40-48 ms | 21-25 fps |

- B0 lands at 92 ms instead of 100 if its 448-row cap already stops the palette read-backs. B1 then removes less, and the paths converge after B1.
- Real hardware, if the parts xemu inflates drop to a few ms and the rest runs at xemu speed: about 45 ms after B5, and about 30-35 ms after S1-S3. That is the only route to 30 fps I can see.

2. BATCHES
Each batch is built and measured once. Nothing in B1-B5 or S1-S3 is in the uncommitted batch.

B0 — Make the uncommitted batch safe, run it, measure it
- Effort S; risk is to the picture.
- Already in the tree:
  - GPU transform: D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:263-324, D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1401-1452 and D:\Programming\GitHub\Timesplitters\src\xbox\shaders\gs_xf.vs.cg.
  - Native constant, kick and environment-map entries: D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:452-528.
  - Word-at-a-time memcmp: D:\Programming\GitHub\Timesplitters\src\xbox\xbox_string.cpp.
  - 448-row cap: D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:30 and :1449.
  - DMA tag count: D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:1576-1595.
- Fixes before the first run:
  - (a) Near-plane geometry.
    - Problem: the GPU branch (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:280) runs before the clip test and clipping (:367, :188-216). The shader then divides by w (D:\Programming\GitHub\Timesplitters\src\xbox\shaders\gs_xf.vs.cg:36), so a strip that crosses the camera plane draws wrongly.
    - Fix: in the raw-copy loop, compute clip w and z+w with the strip's bone matrix. If any vertex has w ≤ epsilon or z < -w, send the strip to the existing CPU clip path.
    - In the same loop, set q = 1 when q == 0, as the CPU path already does (:386-387).
    - Cost: about +0.5 ms.
  - (b) Colours: keep the low 8 bits (c & 0xFF) as the CPU path does (:388-391), instead of clamping (:294-295). Clamping turns sign-extended 0x80+ values black or transparent.
  - (c) Shader literals: harden, but this is not a current bug.
    - What I found: cgc's actual output matches the hard-coded c[34] = (0, 1, 0.5, 0) (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:822-827).
    - Evidence: C:\Users\smmel\AppData\Local\Temp\claude\D--Programming-GitHub-Timesplitters\bf1761af-8a8f-4b12-9e26-7a2cd6d8b116\scratchpad\xf_plain.vp:51 (also xf_lit.vp:51 and xf_skin.vp:51) reads "#const c[34] = 0"; xf_env.vp:51 reads "= 0 1 0.5".
    - Why harden: the Makefile throws that line away (D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:167), so a future shader edit could silently break it.
    - Fix: take the literals from k[33], filling all four components (only .x is set today, D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1431). Alternatively, fail the build whenever a '#const' line appears.
  - (d) DMA chain guard: add a recorded-bytes budget in segment mode. The byte checks look at a chain buffer that stays empty in that mode (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:1496, :1557). Log the largest real tag count before lowering the 1<<20 limit (:1481).
  - (e) Three small items:
    - Force widescreen off on Xbox, because strips skip the HUD adjustment (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp:1593-1598 versus :1629-1661).
    - Delete the stale depth comment (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:168-170).
    - Null-check the transform vertex buffer allocation (:1584-1589).
  - (f) Add the counters listed under section 3.
- Expected saving: 26-31 ms.
  - Covers: CPU vertex maths 38 samples, translated VU1 24 samples, per-vertex conversion and memcmp, minus the new per-strip constant compare.
  - The DMA cycle check (8 samples) also goes.
- Check by screenshot: a wall right at the camera, environment-mapped objects, lit and skinned characters, and the HUD, compared with the committed build.

B1 — Stop copying data between the GPU and emulated GS memory during a match
- All effort S; risk low unless marked.
- (a) Exact screen range.
  - pageRange adds a spare page (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_cpu_backend.cpp:43-46).
  - So the GPU-drawn range for 448 rows (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:289-292) still covers page fbp+70. That is the first page after a 640x448 16-bit frame, the natural place for palettes.
  - Make the GPU-drawn and screen ranges exact for page-aligned frames. Leave the transfer ranges as they are.
- (b) Palette-load guard.
  - Today every TEX0/TEX2 register write triggers a possible screen read-back, a lock and a 512-entry rehash (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp:1258, :1289 → D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1656-1665).
  - Do these only when the GS really loads a palette: indexed format and CLD 1-3, or CLD 4/5 with a changed address. Follow the same order as D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_cpu_backend.cpp:706-741.
  - Clear the mirrored palette addresses in Reset (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1612-1616).
- (c) Screen read-back invalidates too much.
  - writeBackScreen writes gpuRows rows (:1467) but invalidates the whole screen range (:1497). Invalidate only the rows it wrote.
  - If the read-back counters stay above zero after this: replace the per-pixel divide (:1477) with a column table and hoist the format branches out of the loop.
- Saving from (a)-(c): 8-10 ms if read-backs survived B0 (19+3 samples, plus a GPU drain and texture re-decodes); about 1 ms otherwise.
- (d) Glow/flare depth test.
  - zbtestCopyZB runs once per rendered frame (D:\Programming\GitHub\Timesplitters\project\generated\gsMain_0x200f20.cpp:243-244). It reads back a 640x224 16-bit depth image (D:\Programming\GitHub\Timesplitters\project\generated\zbtestCopyZB_0x2a70a0.cpp, 0x2a70c4-0x2a70e4).
  - zbtestDoTest then reads one 16-bit value per point (D:\Programming\GitHub\Timesplitters\project\generated\zbtestDoTest_0x2a7108.cpp, 0x2a7150-0x2a7168).
  - Change: an Xbox-only replaceFunction next to D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp:720. It keeps the buffer toggle and writes 0 ("not occluded") at each pending point.
  - Saving: 3.5-4 ms.
  - Stage 2 (effort M; correctness, not speed): sample NV2A depth at those points, because glows are probably not occluded correctly on Xbox today. Real-hardware caveat: CPU reads of tiled or compressed depth may be invalid.
- (e) Palette path.
  - Load palettes straight from GS memory, not through the emulated texture page cache (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_cpu_backend.cpp:777, :821-827).
  - Use the generation-cached ClutContentHash (:1343-1352) instead of copying and hashing 1 KB per call (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:330-339).
  - Evidence: ReadTexture 12 + LoadClutUnlocked 5 + refreshClutHash 3 samples.
  - Saving: 3-5 ms.
- (f) Per-run work.
  - Constants are fixed for a whole VU1 run (D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:248-262).
  - Yet submitXf rebuilds them and compares 544 bytes for every strip (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:1422-1440).
  - And GS::submitStripTransformed copies a full draw state for every strip (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\gs\gs_frontend.cpp:1649-1661, :1792-1816).
  - Change: key on a GS-state generation counter plus PRIM, and skip the constant rebuild and compare, buildDrawBatch, texture() and keyFor when both are unchanged.
  - Saving: 1.5-3 ms.

B2 — GPU hand-off and compiler flags
- Effort S, except (b) which is M. Do this after reading the GPU-wait and free-memory counters.
- (a) Vertex buffers.
  - The 4096-vertex buffers (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:31, :86) force a full GPU drain when they wrap (:1249-1251, :896-899).
  - Raise them to 8-16K vertices, with allocation checks (+0.3-1 MB of RAM).
  - Raise the push buffer from 128 KB to 256 KB (:1576, :1175).
- (b) Draw smooth-shaded strips as NV2A strips joined by degenerate triangles, instead of lists of 3(n-2) vertices (:1353-1361, :1442-1448). Flat-shaded strips stay as lists.
- (c) Per-frame setup.
  - Drop beginFrame's pb_target_back_buffer (:924). pb_finished already does it (D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:2034-2035). This removes 8 GPU interrupts a frame.
  - Drop setAttributes (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:926). stateValid=false (:948) already forces it via applyState (:1115-1118).
  - Later, effort M: use one colour DMA object covering both buffers, which removes the other 8 interrupts.
- (d) Build at -O2: gs_nv2a_backend, ps2_memory, ps2_vif1_interpreter, ps2_runtime and EeScheduler. They are -Os today (D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:42); the fast-build list is at :100-101.
- Saving: 3-6 ms.

B3 — VIF1 path
- Effort S-M; risk medium. Verify byte for byte against PC frame_bench dumps.
- (a) UNPACK fast path.
  - Today it does an integer divide and modulo per vector (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_vif1_interpreter.cpp:609-610) and a variable-size memcpy call (:615).
  - Replace with a running cycle counter and one loop per format with fixed-size copies. Add a mask-aware loop only if the format histogram shows masked unpacks.
- (b) Display-list copy.
  - Today every display-list byte is copied into a 512 KB window before decoding (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:2026-2059).
  - First step: merge memory-adjacent pieces as they are recorded (:1525-1531, :1559-1564) and decode contiguous runs in place.
- Saving: 3-4.5 ms.

B4 — Game code and runtime
- One full rebuild of the generated code. Effort S-M; risk medium (timing, edge cases).
- This batch moves ahead of B2/B3 if the build-versus-render time split shows the game's own work dominating.
- (a) Guest memory access.
  - Make the fast path a plain masked load or store, with no wrap-around code; add a 16-byte guard after PS2 RAM; and use one shared slow-path function per width.
  - Current code: D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_runtime_macros.h:153-157, :169-220, :245-343. RAM allocation: D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_memory.cpp:378.
  - Saving: 1.5-3 ms, plus about 0.5-0.7 MB of duplicate helper code freed.
- (b) Guest calls.
  - Every call does two binary searches over about 24,500 entries (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\ps2_runtime.cpp:1215-1241, :1528, :1550).
  - Use one lookup plus a 4,096-entry cache of address-to-slot pairs, and compile out the debug statics on Xbox (:1551-1601).
  - Saving: 1.5-2.5 ms.
- (c) Scheduler checkpoint.
  - Make it an inline countdown. Every direct read of the EE cycle counter must flush pending cycles first: D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:153, :1108, :2105, :2119, :2178.
  - Saving: 0.5-1 ms.
- (d) Native floating-point library.
  - Replace the game's soft-double and math routines (dpcmp 0x2E3768, fptodp 0x2E4608, dpadd, dpmul, sqrtf 0x2D8398, sinf/cosf) by compiling the same fp-bit/newlib sources natively. Register them like D:\Programming\GitHub\Timesplitters\project\game\ts_overrides.cpp:720-749 and check them with the self-test at :126-200.
  - Add a native sceVu0MulMatrix.
  - On Xbox, compile out the guest-memcpy timing (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\Stubs\LibC.cpp:97).
  - Saving: 2-2.5 ms.
- (e) Build a measured hot list of generated files at -O2, using the pattern at D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:95-97.
  - Delete those object files first: the build rule does not track flags (:112-116), so they would not rebuild.
  - Saving: about 0.5 ms.

B5 — Frame pacing
- Effort M; risk to game speed.
- (a) Elastic vblank.
  - Background: the game only takes a finished frame at a vblank (D:\Programming\GitHub\Timesplitters\project\generated\vblIntHandler_0x201198.cpp:225-281 for the age test, :408 for the signal). On Xbox, a frame needing 34 ms of CPU therefore shows at 50 ms.
  - Change: when every guest thread is waiting for the vblank, deliver it early. Allow at most one vblank of shared lead, and keep the fixed 60 Hz grid.
  - Where: the pacing wait at D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\Kernel\EeScheduler.cpp:1868-1879, the rescheduling at :1916-1923, and waitForEvent at :2067-2120.
  - Saving: about half a vblank per frame, 6-8 ms. Near the target it is the difference between 20 fps and 25-29 fps.
  - Test menus and light scenes to confirm the game does not run fast.
- (b) Correctness: with two screen buffers, the next frame draws into the buffer still on screen (D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:2034-2035, :2925). Wait for the flip before the first draw, or add a third buffer (+0.6 MB).

S1-S3 — Structural steps (effort L each, high risk; only if counters after B5 show per-strip and per-instruction overhead dominating)
- S1, native draw path: translate each distinct render-state block (copied at D:\Programming\GitHub\Timesplitters\project\game\vu1_native_ts.cpp:224-231) once into an NV2A state and texture. Skip the GS register machine and write vertices straight into GPU memory. Saving 4-8 ms.
- S2: the draw entries read vertex data straight from the display list, skipping the unpack into VU memory. Saving 2-3 ms.
- S3, Xbox-only recompiler mode: keep guest registers in locals and call constant targets directly. Today every jump-and-link goes through dispatchGuestBranch (D:\Programming\GitHub\Timesplitters\project\generated\cpuMain_0x200c48.cpp:107-120). Saving 4-7 ms.

3. MEASURE FIRST
All of these ride along with B0's build. Status block: D:\Programming\GitHub\Timesplitters\src\xbox\xbox_main.cpp:86-104. Its counters are cumulative, so take deltas per frame.
- M1, read-backs and fallbacks: per frame, the read-back counts by cause (wb tex/draw/clut/xfer/cpu), GPU waits, texture fills, jit and interp.
  - Decides whether B1(a)-(c) is worth 10 ms or 1 ms; if 10, fold it into B0.
  - jit must be 0, or some VU1 entries still run translated.
- M2, GPU waits by cause: vertex buffer, transform buffer, push-buffer reset, texture retire, read-back, frame end, screen reload (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:356, :499, :898, :962, :1205, :1251, :1462, :1506). Also count pb_end calls per frame. This sets B2's sizing.
- M3, time split per frame: microseconds inside gsMain's kick versus the rest of the game thread versus scheduler waits (SchedulerWaitProbe sites 1 and 3). This decides the order of B2-B4 and the size of B5.
- M4, draw volume: strips, draws and vertices per frame; near-plane fallbacks per entry; the share of flat-shaded strips.
- M5, xemu's GPU floor: time spent in finishFrame's wait once mid-frame drains are gone. If it is large, xemu's GPU emulation is the floor, and further work only shows on a console.
- M6, profile: 1,000-2,000 samples against the matching map, recording the return address when a sample lands in memcpy/memcmp/memset. Count the samples in the IOP emulator, which is an interpreter on the game thread paced by guest cycles (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xIOP\src\emulator\iop_emulator.cpp:567-602, :762-769) and is not broken out in the profile today.
- M7, free memory during a match after B0. This bounds the B2 buffer increases.
- M8, unpack histogram from a RAM dump with the PC frame_bench; no xemu needed. This shapes B3(a).

4. DO NOT
- Drop the translated VU1 program from the link. The native-program lookup returns early when the compiled registry is empty (D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\src\lib\vu\ps2_vu1_jit.cpp:99), so native VU1 would silently switch off.
- Remove only the frame-end GPU wait. beginFrame's pb_reset (D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:921) spins until the GPU reaches the push-buffer head, so the wait just moves.
- Use the GPU's read pointer as a fence, or push FLIP_STALL. The read pointer passing a draw does not guarantee its vertices were fetched on real hardware. The flip is software-driven (D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:2016-2036), so FLIP_STALL risks a GPU hang.
- Build a geometry cache, a state-block cache or screen-as-texture effects now. Each is effort L for about 1-3%, on unproven premises.
- Compile all generated code at -O2 (25-30 MB, D:\Programming\GitHub\Timesplitters\src\xbox\Makefile:36-39), or force-inline today's memory-helper templates (+4 MB, D:\Programming\GitHub\Timesplitters\source\PS2Recomp\ps2xRuntime\include\ps2_runtime_macros.h:153-157).
- Do memory-only items for speed: shrinking IOP memory, committing only part of PS2 RAM, removing SDL2, capping the software texture cache, compiling out logs. They save no frame time, and some risk crashes. Do them only to fund larger buffers.
- Write native vfprintf/_dtoa_r (the "hot" readings are a profiling artefact), or strip the per-instruction pc stores (the compiler already drops the dead ones).
- Lower the DMA tag limit to an unmeasured 64K.
- Swap soft-double for host x87 without copying fp-bit's edge cases.
- Pull vblanks forward without a lead cap; the game would run fast.

5. NEW FACTS FROM THIS PASS
- Shader literals: they currently match cgc's output (B0(c)), so this is hardening, not a picture bug. The texture-coordinate input is fine too: the vp20 compiler remaps v[8] to hardware slot 9 (C:\nxdk\tools\vp20compiler\nvvertparse.c:340-351, :575-591), which matches the slot used at D:\Programming\GitHub\Timesplitters\src\xbox\gs_nv2a_backend.cpp:850.
- Palette read-backs: the batch's 448-row cap may not stop them, because of the spare page in pageRange (B1(a)).
- Texture re-decodes: writeBackScreen invalidates the whole screen range, so textures kept in rows 448-511 are re-decoded after every read-back (B1(c)).
- No game-imposed 30 fps cap: the vblank handler only requires a frame to be two vblanks old (D:\Programming\GitHub\Timesplitters\project\generated\vblIntHandler_0x201198.cpp:280), so the game does not cap itself at 30 fps.
- xemu's GPU hand-off cost: each pb_end does a write-combine flush (a GPU register write plus a spin) and a DMA put write (D:\Programming\GitHub\Timesplitters\src\xbox\pbkit\pbkit_ts.c:270-277, :1477-1487). That is cheap on a console but 7 samples in xemu, so fewer, larger hand-offs pay off more in xemu than on hardware.