# Direct model route (make TS_DIRECT_MODELS=1, Xbox only)

Default on (`#ifndef` in `xbox_model_cache.h`, `TS_DIRECT_MODELS ?= 1` in
the Makefile). It takes effect with TS_NATIVE_MODELS, TS_NATIVE_REPLAY and
TS_FAST_REPLAY; the GS state is held across models only with TS_NATIVE_FX
too (its GS front end copy carries the hooks). With TS_DIRECT_MODELS=0 every
added line is preprocessed out and the build is today's.

Exactness bar (project mandate): what the player sees and the game's
behaviour must match. Internal PS2 state (VU1 rows, VIF1 registers, the GS
register shadow, CLUT mirrors) must match only where something later reads
it, and may be brought up to date at that moment.

## What is removed, per model

| Stage | Before | Direct route |
|---|---|---|
| partGfx | prologue token, then a CALL tag | the prologue token only (both precalc CALL sites) |
| walker | token -> prologue marker; CALL -> model table probe, return stack, re-hash every 32nd | token -> one DIRECT marker |
| decoder | two markers, a second model probe | one marker |
| prologue | header check, row copies, MSCAL dispatch of 0x3d40/0x3af8/0x3b50/0x3ba8/0x3c00, watched-row notes, transformConstants reload | constants worked out natively into the renderer's copy; VU1 rows held in a shadow |
| GS state | the window synced into the GS at every model's end | held across models, synced once by the next GS entry |

The replay itself is the TS_FAST_REPLAY lane: per run the renderer segment
(`xboxNv2aFastRun`: texture via the texture cache, palette identity, state
words only when the material key differs, cached draw commands; constants
only when their serial moved). A run whose segment does not stand (first
sight, texture changed) still takes `beginXfRun` once, which builds it.

## Data flow

- partGfx copy (`patch_native_models.py partgfx`), at the precalc CALL after
  the first prologue (0x2611b4) and after the second (0x261604):
  `xboxDirectCall(the two words before the CALL's slot, chain)`. True: no
  CALL; the list pointer stays at the slot, `v0`/`v1` keep their positions
  relative to it, continue at 0x261f4c.
- `xboxDirectCall` (`xbox_model_cache.cpp`): the slot before the CALL must be
  a QWC-0 REF token; the model Ready, re-hashed, not ending the chain inside
  the CALL nor holding IRQ tags, and this not its 32nd use (that one takes
  the CALL so the walker re-hashes the chain, today's cadence). It updates
  the use clock and replay count as the walker would, then
  `xboxPrologueAttachDirect`.
- Record (`xbox_part_prologue.cpp`): the prologue record just closed (the
  last record, its pairs the last in the ring, a shape the decoder can run
  natively), plus one pair `{chain, model slot}` after its pairs; bit 31 of
  its count marks it. No new table.
- Walker (`patch_native_models.py memory`): a direct token becomes one
  16-byte DIRECT marker (`xboxPrologueNativeAt`, with call depth and TIE). A
  walk the replays never see (not VIF1, or TTE on) gets the prologue's
  payloads and then the CALL itself, as case 5 would have walked it.
- Decoder (`xboxModelDecodeMarker` -> `directDecode`):
  1. `xboxPrologueDirectRun`: the prologue's VIF1 register steps (STCYCL,
     CODE/NUM, each MSCAL's TOP/ITOP/TOPS/DBF) applied to the registers; each
     constant program's rows taken from the guest block its UNPACK names
     (read now, at the kick, as the original's REFs read them), 0x3d40's
     product with the camera rows 0-3 worked out natively; the rows go into
     the renderer's constants (`xboxNativeDirectConstants`, changed rows
     counted for its dirty-row upload) and a shadow, not VU1 memory; the VU1
     state the last native run leaves (`afterNative`). It declines (the
     decoder's `xboxPrologueDecode`, after the shadow went in) for MODE other
     than 0, an open capture, changed static headers (checked once a decode
     call), a block over the constant rows, or a program reading rows from
     before the prologue.
  2. the model's `replay`; a model whose steps run VU1 code or restore rows
     (CPU-path draws, constant entries, row steps) gets the shadow into VU1
     memory first. A model gone, changed or declined: the shadow in, then
     the chain decoded from guest memory.

## Lazy state

- VU1 rows (`g_xboxDirectStale`, `xboxDirectMaterialize`): the shadow holds
  rows 4-11 and 106-121 and the latest prologue's four-row UNPACK blocks
  (pointers into guest RAM, which does not change during a decode call). It
  goes into VU1 memory, with the watched-row notes the decoder would make,
  before any decoder command that reads or writes VU1 memory (UNPACK, MSCAL,
  MSCALF, MSCNT), before any other model marker, before a replay that reads
  it, and at the end of every decode call (so the EE and the next call see
  VU1 memory whole). The renderer's constants already hold the values, so
  the notes read back unchanged rows. An earlier prologue's blocks are
  dropped when the next prologue comes: they are double-buffer rows that only
  that prologue's own programs read, and those ran natively.
- GS state (`XboxFastReplayGs`, `g_xboxGsPending`, `xboxGsPendingSync`): a
  model's waiting texture-register writes, PRIM and Q stay in the window
  after the model; the next model's window carries on from them. Every GS
  front end entry that takes the GS lock (packets on all paths, so the GIF
  arbiter, PATH2 and PATH3 too; register writes; state blocks; runs; clears;
  uploads; presentation and debug reads) brings them in first, under that
  lock (`patch_native_fx.py gs`). CLUT loads and TEXFLUSH still reach the
  renderer at the write, in order, as before.

## Why the constants are read at the kick

The camera rows 0-3 are written by earlier list packets, and the matrix and
light blocks are read by the original's REFs when the DMA runs; the game may
rewrite them between partGfx and the kick. The record holds their guest
addresses and the decoder reads them where the original does.

## Exactness

The stream is today's with [prologue marker][CALL][REPLAY marker] fused into
one marker doing the same things in the same order. Pictures: the draws get
the same constants (the same products, from the same inputs; float order as
the native program's), the same state blocks in the same order through the
same window, the same runs. The VIF1 registers are stepped exactly. VU1 rows
and the GS shadow are exact whenever anything emulated looks. The "Ready"
decision moves from walk time to partGfx time, so the decoder checks the
model again and decodes the chain from guest memory when it changed.

Assumed, not proven: the VU1 code is the native TS program at every direct
marker (the replays assume it already); nothing reads a dropped earlier
prologue's double-buffer rows.

## Fallbacks (counted in `[TS:direct]`)

`[TS:direct] calls/taken keep token/ready/kind/verify/record marked/walked
replayed/lean/inline/lost prologue native/decoded vu1 in/first gs syncs
cpu draws/runstrips strips nopre/short`:
partGfx keeps the CALL for no token, a model not Ready, its kind, a re-hash
due, a record refused (not last, not native-shaped, ring end); the walker
marks or walks (walked should stay 0); the decoder replays (lean: without
the VU1 rows), decodes from guest memory, or finds the record lost; the
prologue runs natively or the decoder's way; the shadow's trips into VU1
memory (first: before a replay that reads it); GS syncs of held state. A
record overwritten before its walk shows in `[TS:prologue]` lost.

## Lifetime

The game builds frame N+1 while gsMain draws frame N; sceDmaSend walks and
decodes the whole list before it returns. A direct record is a prologue
record with one pair more and lives in the same ring (32K pairs, 8K records,
several 4P frames). The VU1 shadow lives within one decode call; the held GS
state until the next GS entry.

## CPU-path strips (`xboxModelCaptureDraw`, the XBOX_DIRECT_ROUTE branch)

What sent a draw to the CPU path, and so made its capture a StepMscal that
re-ran `runDraw` every frame: a strip without PRE, or a group of one PRIM
holding a strip under three vertices (runDraw's `gpuEligible` and group
test; the renderer itself declines anything but a triangle strip with STQ
coordinates). Being outside the clip volume never did: runDraw sends every
PRE strip of three vertices or more to the NV2A whatever the camera, and
the NV2A clips it.

Now every strip of a draw is stored as records at capture, in runs as
runDraw forms them, by how the GS takes the strips' vertices:
- a tag with PRE writes PRIM (topology and an empty vertex queue; the
  renderer's runs leave the queue empty too);
- a tag without PRE draws with the PRIM last written - the state block's
  PRIM write, or the strip before - and continues the vertex queue of a
  strip before it without PRE: such strips are stored as one strip, their
  vertices end to end, which is exactly the GS's continued queue;
- a strip that draws nothing (under three vertices once joined) is left out.

Left to the CPU path (the whole draw, as before; counted `cpu draws`): a
strip without PRE whose PRIM came from before the draw (only known at the
kick), another topology than a triangle strip or UV coordinates (the
renderer's transform declines them), a joined strip over 64 vertices. At
the replay a run the renderer declines (an off-screen target) is drawn
strip by strip the CPU path's way from its records and the constants
(`xboxNativeCpuStrip`: transform, light, clip on the CPU, then decoded
vertices or a packet; counted `runstrips`), where it used to be skipped.

Why the pictures match the CPU clip's:
- The vertices are the same: the same arrays decoded by the same
  `decodeXfStrip` the PRE strips already use, transformed and lit by the
  NV2A's transform programs with the same constants.
- Clipping: the CPU path clips against |x|,|y| <= 4w (its guard band) and
  the depth planes |z| <= w, then sends the pieces in screen coordinates;
  the NV2A transform program writes screen x, y, depth with the real w and
  the hardware clips in homogeneous space (`gs_xf.vs.cg`), the same near
  and far planes, and x, y in floating point without a 12.4 limit, so no
  guard band is needed. Inside the guard band both give the same pixels;
  outside it the CPU path keeps only what lies inside 4w, which is off
  screen (the screen is |x|,|y| <= w). This is the equivalence every PRE
  strip already relies on.
- The GS's 4096-unit coordinate wrap: the CPU path only sends vertices it
  has clipped into the guard band (12.4 coordinates in range), so it never
  wraps; there is no wrap behaviour to reproduce.
- Order: runs keep the strips' order within the draw, and the draw's state
  block goes first, as before.
- Not reproduced, since nothing visible reads it: the RGBAQ/ST/XYZ and
  vertex-queue registers the CPU path's packets leave in the GS after the
  draw (the PRE runs never set them either). One difference with the PS2
  itself, shared with today's build: after a PRE strip drawn by the
  renderer the queue is empty, where the GS would continue it into a
  following strip without PRE; and a strip's Q of 0 is taken as 1 in the
  records (the CPU fallback then divides S and T by w, not by 0).

## Not done

- Model files (TS_MODEL_FILES, off) are ticked by the walker's CALLs only.
