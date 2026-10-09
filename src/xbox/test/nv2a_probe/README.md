# nv2a_probe: console tests T1-T8 (REWRITE-PLAN.md M0.7)

A small standalone nxdk program (pbkit, no game code) that answers the
hardware questions gating M5's flat-shading path and all of M8 (the NV2A
fetching vertices in place from guest RAM). Only a real console gives the
answers: xemu does not model the CPU caches, the NV2A vertex cache, colour
buffer tiling or page-table DMA objects, so a run in xemu is only a check
that the program starts.

## Build

    bash D:/Programming/GitHub/Timesplitters/src/xbox/test/nv2a_probe/build.sh
    bash D:/Programming/GitHub/Timesplitters/src/xbox/test/nv2a_probe/build.sh PROBE_PAGED=0 PROBE_TARGETS=2
    bash D:/Programming/GitHub/Timesplitters/src/xbox/test/nv2a_probe/build.sh clean

Output: `D:\Programming\GitHub\Timesplitters\build\nv2a_probe\bin\default.xbe`
(and `nv2a_probe.iso` for xemu). The script runs in MSYS2's CLANG64 shell
like `src/xbox/build.sh`, builds from copies in `build\nv2a_probe` and keeps
make away from nxdk's own libraries. Never run `make clean` against
`C:\nxdk`: it deletes libraries other projects share (the Makefile refuses).

Switches (`build.sh NAME=value`):

| Switch | Default | Meaning |
|---|---|---|
| PROBE_IMAGE_PAD_MB | 13 | BSS padding so the image is about the game's 12.9 MiB (T1 meets memory as the game would) |
| PROBE_PAGED | 3 | page-table DMA tests, which could hang the GPU: bit 0 runs T6a, bit 1 T6b (1 = T6a only, 2 = T6b only, 0 = neither) |
| PROBE_TARGETS | 3 | PCI/AGP-target DMA tests, which could hang the GPU: bit 0 runs T2c, bit 1 T2d |
| PROBE_RISKY | 1 | 0 makes both of the above default to 0 (all four left out) |
| PROBE_T7_CPU_MS | 25 | CPU time of one simulated frame in T7 |
| PROBE_T7_GPU_MS | 15 | GPU work of one simulated frame in T7 (must be below the CPU time) |
| PROBE_T7_FRAMES | 60 | frames simulated in T7 |

## Run

Copy `default.xbe` to its own folder on the console (for example
`C:\XDK\xbox\bin\xbcp D:\Programming\GitHub\Timesplitters\build\nv2a_probe\bin\default.xbe xE:\nv2a_probe\default.xbe`)
and launch it the way the game is launched (the console script with its game
folder pointed at `xE:\nv2a_probe`, or xbreboot with the XBE's path). It
runs for about 10 seconds. Results arrive three ways:

- one `[PROBE] <id> <verdict> ...` line per result on the debug channel
  (DbgPrint; XBDM shows them as debugstr notifications, like `[TS:perf]`),
  repeated every 20 s in case XBDM dropped some;
- a short line per result on screen;
- the file `nv2a_probe.txt` next to the XBE (nxdk mounts D: there),
  rewritten after T2b, after T7, after each risky test and at the end, so it
  holds every line up to a hang.

Verdicts: PASS and FAIL answer the question; ERR means the test itself did
not work (its control failed, or the GPU stopped), so the line answers
nothing; INFO is a measurement; SKIP was not run (the line says why).

### If a run hangs

The tests that could hang the GPU run last, in the order T6a, T6b, T2c,
T2d. Every GPU wait gives up after 2 s: a GPU that stops is normally reported
(an ERR line, then SKIP "GPU stopped before it" for the rest), and the
console stays up. Should the console hang outright instead (a cold reboot of
the devkit), the last line in `nv2a_probe.txt` or on the debug channel shows
where. Run again leaving out only the test that stopped; the earlier answers
are already in the file:

| Stopped in | Seen as | Run again with |
|---|---|---|
| T6a | last line T7, or T6a ERR | `PROBE_PAGED=2` (T6b, then T2c and T2d), or `PROBE_PAGED=0` if T6b should not be risked either |
| T6b | last line T6a, or T6b ERR | `PROBE_PAGED=0` (T2c and T2d) |
| T2c | last line T6b, or T2c ERR | `PROBE_PAGED=0 PROBE_TARGETS=2` (T2d) |
| T2d | last line T2c, or T2d ERR | nothing: every test has answered |

A stop in one of these answers its own question: that kind of DMA object
cannot be used for vertex fetch. A stop before T7's line is not expected;
report it with the last line.

## Reading each line

The lines appear in this order.

**T0 INFO**: CPU clock, free memory at start, switches, build time. Compare
`free=` with the game's own "at start" free memory to see how close the image
pad brings the probe to the game.

**GPU**: the readback self-check that every pixel test depends on. Two
triangles are drawn and read back from the back buffer through the
0xF0000000 window (`agpView`, the linear view nxdk recommends for pbkit's
tiled colour buffers) and through the plain 0x80000000 view (`directView`).
- PASS: pixel tests and fence-timed tests are trustworthy.
- ERR: readback broken (the pixel tests are skipped, only T5d and T7 run) or
  `fence=broken` (T3b and T7 are skipped; the game's renderer uses the same
  fence method, so this would matter there too).
- `rowsSame=16/16`: the CPU's plain view shows the same picture, so a console
  frame CRC (plan section 10) may read the buffer either way. Less than 16
  means the tile region scrambles the plain view: frame CRCs must read
  through `pb_agp_access`. It also means the game's own screen readback is
  scrambled on the console today: `writeBackScreen`
  (gs_nv2a_backend.cpp:2220) reads `pb_back_buffer()` through the plain view.

**T1** (32 MiB contiguous cached block at start-up; gates M8 with T6 as the
fallback). Allocated first thing, before pbkit, with a game-sized image.
- PASS: the block exists, is physically contiguous and write-back cached
  (`cached=1`: reads hit the cache, unlike write-combined memory), pbkit
  still initialised after it, and the GPU drew a triangle from its last page
  through a DMA object based at the block (`gpu=1`). M8 can allocate guest
  RAM this way as the first allocation in main.
- INFO with `gpu=-1`: everything on the CPU side passed, but the GPU's draw
  from the block was not checked (no readback, see the GPU line). Not a
  PASS: GPU access to the block is still open.
- ERR with `gpu=-2`: the GPU stopped during the draw from the block.
- FAIL "no 32 MiB contiguous block": `largest=` is the biggest contiguous
  block there was. M8 needs T6.
- FAIL with `pbinit` not 0 "(block freed)": the block fits but pbkit's own
  buffers no longer do; the order of start-up allocations would have to
  change.
- `freeAfter` and `largestLeft`: what the rest of the start-up would get.
  The game's RDRAM is a 32 MiB `new[]` today, so taking it contiguous does
  not add to the total; T1 asks only whether contiguity is available.

**T8 INFO** (WBINVD cost). Best and worst time of one WBINVD with nothing
dirty and with 16, 64, 128 and 256 KB of dirty lines, and what re-reading a
64 KB working set costs afterwards (`refill64K`, the hidden cost). The Pentium
III has no CLFLUSH, so WBINVD is the only flush. If T2a fails, M8's
coherency cost is this times the number of flushes a frame.

**T4a** (FLAT_SHADE_OP=LAST; gates M5 step 5). The numbers are the vertex
whose colour fills each triangle (8 = nothing drawn, 9 = another colour).
- PASS: strips give 2,3,4,5 and lists 2,5: every triangle takes its last
  vertex's colour, as the GS does. M5 can draw flat strips directly and drop
  the 3(n-2) expansion (gs_nv2a_backend.cpp:2186-2199).
- FAIL: keep the expansion. The fan result is informative only (the game
  draws strips and lists).

**T4b INFO**: the same drawing with FIRST (pbkit's default) as a control. ERR
means it matched LAST, so the method had no effect and T4a means nothing.

**T5a** (triangle lists across DRAW_ARRAYS). A 258-vertex list drawn as
256 + 2 vertices in one BEGIN/END, one method header per DRAW_ARRAYS (the
renderer's form); the 86th triangle straddles the split.
- PASS: assembly continues, so the renderer's 256-vertex list chunks
  (gs_nv2a_backend.cpp:1890-1894) are right.
- FAIL: assembly restarts at each DRAW_ARRAYS. 256 is not a multiple of 3,
  so today's renderer drops a vertex at every 256 and shifts the triangles
  after it; list chunks must become 255 vertices.
- ERR: the control failed or a draw timed out.
- The one-header form is reported alongside; `control` is the straddling
  triangle drawn alone.

**T5b INFO** (strips across DRAW_ARRAYS). Informative: the renderer's strip
chunks overlap by two vertices and are right either way.

**T5c** (index lists; gates M8's strip drawing). M8 draws strips as
ARRAY_ELEMENT16 index lists with degenerate joins.
- PASS: an index list continues across method headers (a header holds at most
  2,047 words) and an ARRAY_ELEMENT16 list can end with one ARRAY_ELEMENT32
  (an odd count). The plan works as written.
- FAIL: keep each strip's indices within one header, and make odd counts even
  by repeating the last index (one degenerate triangle).
- ERR: the control failed or a draw timed out (`?` on screen).

**T5d INFO** (costs). GPU time per vertex or index, measured on 2,048 strips
of 16 vertices with 2-pixel triangles (vertex-bound, not fill-bound). The
strips lie end to end, so where a form joins them into one strip (the index
lists, and `DA-joined` if assembly continues, T5b) the joins are zero-area
triangles and every form draws the same pixels:
- `DA-joined` (one BEGIN/END, a DRAW_ARRAYS per strip), `DA-strips` (a
  BEGIN/END per strip), `AE16`/`AE32` (one joined index list), and
  `AE16-strips` (a BEGIN/END and an index list per strip);
- the cost of one BEGIN/END pair (per-strip minus joined, per strip);
- the push-buffer size of each form in KB, the cost of an empty kick, and the
  CPU's cost per push-buffer word written.

**T3a** (vertex cache across an idle GPU). The GPU draws a triangle, goes
idle, the CPU rewrites the same vertices and the GPU draws them again: as
DRAW_ARRAYS, as ARRAY_ELEMENT16, with the arrays re-sent after 8,192 other
vertices, and with BREAK_VERTEX_BUFFER_CACHE (the control).
- PASS: the redraw always used the new data, in all three variants without
  BREAK.
- FAIL: stale vertices survived in at least one (the line gives `stale=` per
  variant); BREAK is needed whenever arrays change. Stale data even with the
  arrays re-sent after 8,192 other vertices means re-sending is no substitute
  for BREAK.
- ERR: the BREAK control did not give new data, or a draw in any variant
  failed.

**T3b** (vertex cache with the GPU busy; the case M8 meets). The second draw
is pushed after the CPU rewrote the vertices while the GPU was still busy
with full-screen fills, with the arrays re-sent as an M8 record would.
- PASS: BREAK_VERTEX_BUFFER_CACHE is not needed.
- FAIL: it is needed when a Dbuf generation changes, as M8 plans.
- ERR: the BREAK control failed, a draw failed, or `idle` is not 0 (the GPU
  ran out of work before the second draw was pushed, so the trial did not
  test the busy case).

T3 as a whole passes only when T3a and T3b both pass.

**T2a** (does the NV2A snoop the CPU cache? gates M8 with T8 as the
alternative). The CPU writes a triangle into write-back cached memory so the
new data sits dirty in the CPU cache while RAM still holds the old one; the
GPU draws from it through pbkit's DMA object (NV memory target). 16 trials.
- PASS (`new=16`): the GPU sees dirty CPU cache lines. Guest RAM can stay
  cached and needs no flushing.
- FAIL (`stale=16`, or a mix): the GPU reads RAM behind the cache. Arrays the
  GPU reads need a WBINVD after a hooked writer touched them (cost in T8) or
  must live in write-combined memory.
- Valid only when T2b passes.

**T2b** (controls for T2): the same trials with a WBINVD after the write, and
with write-combined memory. Both must give the new data (PASS); ERR means T2a,
T2c and T2d answer nothing.

**T7** (is the GPU at most one frame behind?). 60 game-like frames: draws
worth about 15 ms of GPU time, the flip (`pb_finished`, as the renderer's
finishFrame), a fence, then 25 ms of CPU work standing in for the next
frame's logic; each frame starts by waiting for the last frame's fence, as
the renderer's settleFrame does. Then a control: 5 frames with about 1.3
times as much GPU work as CPU time, which must come out late.
- PASS (`late=0`, control late): at this load the flip and fence path adds
  no lag; every frame's fence passed before the next frame's draws began.
  Whether the game's frames stay within one frame depends on their real GPU
  time, which comes from M0.6.
- FAIL: some frames were not done a whole CPU frame after their kick. Compare
  `gpu p50`/`max` with `gpuTarget`: about a vblank more than the load means
  the flip holds the fence back, and M8 should put its fence ahead of the
  flip, or defer guest-array writes by two frames.
- ERR: the GPU stopped, or the control was not late either, so the late
  check proved nothing (compare the control's `p50` with its `gpuTarget`:
  far below it means the load came out lighter than measured).
- `settleMax`: the longest wait at a frame's start. `flipWaits`: retries of
  `pb_finished` (all back buffers waiting for a vblank).

**T6a** (PROBE_PAGED bit 0; page-table DMA object, the fallback for T1). A
DMA object with 16 page-table entries in reverse page order (one vertex
straddles a page boundary) in pbkit's instance memory, tried with pbkit's
access bits (0x8000) and with 0.
- PASS: the NV2A follows page tables for vertex fetch.
- FAIL: it does not (draws went to the wrong place or nowhere).
- ERR: the GPU stopped (`-1`).
- `pagesAdjacent` shows how many of the 16 pages happened to be physically
  adjacent.

**T6b** (PROBE_PAGED bit 1): one page-table object with 8,192 entries (32
MiB, all of guest RAM) in the GPU's instance memory past pbkit's 20 KB.
- PASS: a single DMA object can map all of a non-contiguous guest RAM, and M8
  works without T1.
- SKIP with a reason: a check on that instance memory failed, so the page
  table was not written. The checks write nothing except the last one, a
  test word at each end of the area, which is read back through RAM and then
  put back as it was.

**T2c, T2d** (PROBE_TARGETS bits 0 and 1): T2a again through a DMA object
over all of RAM with the PCI target (T2c) or the AGP target (T2d). If T2a
fails but T2c or T2d passes, M8 can bind guest RAM through a DMA object with
that target and skip the flushes (its fetch speed is still to be measured).
ERR or a GPU timeout means that target cannot fetch vertices.

**END INFO**: totals and where the file went.

## What decides what

- M5's flat-shading path: T4a.
- M8 (plan: gated on T1 or T6, T2 or T8, T3, T5, T7):
  - guest RAM placement: T1 PASS, otherwise T6b PASS;
  - coherency: T2a PASS (or T2c/T2d with that DMA target), otherwise the T8
    cost per flush;
  - BREAK_VERTEX_BUFFER_CACHE: not needed if T3a and T3b pass;
  - draw form: T5c (index lists) and T5d (costs);
  - fence depth: T7 (the pipeline part), with M0.6's real GPU time per frame.
- Today's renderer: T5a FAIL is a bug in the 256-vertex list chunks.
