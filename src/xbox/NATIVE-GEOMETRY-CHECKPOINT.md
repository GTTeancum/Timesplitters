# Xbox native geometry and texture checkpoint

## Objective and authorization

Preserve gameplay, physics, AI and visuals while reducing repeated PS2
graphics-data work. Publish to `main` only and change repository files inside
`src/xbox/` only. No Codex service, Dot or user-PC operation.

“Continue TimeSplitters” means verify current `main` and resume a substantial
implementation/verification batch. Keep chat updates short. This batch used
three agents for native capture, importer integration and texture loading,
with cross-review and combined host verification.

## Current state — 2026-10-30 Eastern

Batch baseline: `7a841360ff54dfd92845547b6ec24873c6139541`.
The private original game image was obtained and matched the project's
recorded archive/BIN/ELF hashes. All 49 original game files passed the
existing restoration checks. The input/capture blocker below is resolved;
reuse the private verification package rather than asking for those inputs
again.

### Source assets converted

`tools/xbgbuild.py` directly converts original `BG.PAK` class-0 background
parts to the existing 44-byte `GSXfVertex` layout. It supports the checked
Plain and EnvMap source batches, preserves float bit patterns, full strip
tags, room/texture records and source order, and retains level/room/part/
variant/descriptor identities plus the original source digests. Matching
`MISC.PAK` validation checks numeric texture references. Unsupported layouts,
classes, inherited texture indices and malformed ranges fail explicitly.

All 27 original levels were converted privately:
- 1,210 rooms; 17,999 batches; 128,970 strips; 611,121 vertices.
- 1,196 texture records, with all referenced numeric textures found.
- 26,889,324 native vertex bytes; 32,270,572 total encoded pack bytes.
- Arcade Tomb is source level 26: 15 rooms, 336 batches, 1,947 strips,
  9,216 vertices, 55 textures and a 491,392-byte pack. Display names are not
  stable identifiers; another source level is also named Tomb.

`xbox_bg_pack.h` is the allocation-free, borrowed-memory XBG1 reader. It
validates sizes, CRC, canonical tables, source bounds, hierarchy, ordering,
full tags and padding before exposing data, and clears failed opens. Every
pack requires live binding. The reader performs no GPU operation and is not
installed in the renderer. Format and commands:
[NATIVE-BACKGROUND-FORMAT.md](NATIVE-BACKGROUND-FORMAT.md).

### Real gameplay and independent verification

A cloud Linux build from the baseline, using GCC 13.3, FFmpeg, Xvfb and Mesa
software rendering, ran the original four-player Tomb script with six bots.
State logs and viewed screenshots established active gameplay around the
180-second capture delay. The recorder completed all 256 VCU1 inputs and
the game stopped through its configured 240-second watchdog.

The capture contained 110 supported draw records and 146 non-draw entries.
Every supported draw passed the production scalar-decoder and XMESH reader
comparison: 638 strips, 2,680 vertices, 117,920 matching vertex bytes. The
draws covered Plain, Lit and Lit near-plane paths. This capture did not
contain EnvMap or Skinned draws.

The only repeated full vertex payload in this short sample was a
three-vertex Plain triangle whose three positions were all zero: 31
occurrences, but nine different state packets. Those packets include texture
and clamp changes; the repetition does not authorize discarding their effects.
It provides weak evidence for a general geometry cache.

The entire source-derived XBG corpus independently passed the unchanged
production scalar decoder, using original source arrays reconstructed as VU
input rows rather than the new writer's math. All 611,121 complete vertex
records, source identities, room/texture records and tags matched. All 27
packs opened aligned and unaligned through the C++ reader. Normal and
ASan/UBSan corpus checks passed (2.366 and 2.437 seconds for the reported
audit phases). Leak detection was disabled; no LeakSanitizer coverage is
claimed.

24 of the capture's 26 nonzero-position Plain draws matched complete Tomb 26
source payloads and strip counts byte for byte. Two remain unassigned.
These are correspondence candidates, not proof of live ownership, generations
or safe cache lifetime.

Combined regression verification: 74 tests passed normally (7.379 seconds)
and under fail-fast ASan/UBSan (9.848 seconds). This includes all previous 55
tests and 19 independent background-format tests, with fully synthetic
fixtures. The new tests cover exact golden output, both layouts/variants,
signed-zero Q, float bits, source/pack corruption, empty rooms, empty MISC
placeholders, numeric texture bindings, unaligned reads and output preservation.
Use `TS_XBG_CXXFLAGS` alongside the earlier sanitizer variables when
reproducing the combined suite.

Private deliverable: `TimeSplitters-Xbox-native-geometry-2026-10-30.zip`,
containing the converted packs, source manifest, completed gameplay capture,
audit reports and verification evidence. Keep that data out of public commits.

This batch establishes real source conversion and decoder/reader correctness.
It does not activate native background rendering, prove all visual behavior,
build the Xbox target, or establish an Xbox FPS improvement. Live relighting,
material/texture state, visibility, ordering and GPU lifetimes still need the
runtime adapter and target validation described below.

## Previous implementation — 2026-10-29 Eastern

Reconciled baseline: `406f2e45fbeabf2c37b2ce23c34beb26f6e046f6`.

The restored original chat had advanced beyond the initially recovered
`37658ff` checkpoint. Commit `406f2e4` added `xmeshcapture.py`, its
19-test suite, geometry-versus-state comparison and capture documentation.
This batch extends that existing importer and preserves its behavior.
It does not publish the duplicate importer initially prepared from the older
context.

`tools/xmeshbuild.py`, `test/test_xmeshbuild.py` and `xbox_mesh_pack.h`
are unchanged from the reconciled baseline. The raw converter remains a
separate simple 16 KiB snapshot converter, and XMESH remains v1/CAPTURE_ONLY.

Implemented in this batch:
- Optional Xbox-local native draw recorder, disabled in normal builds.
- Native TSVUCAP input in the existing VCU1 inspection/extraction/comparison
  pipeline, with explicit provenance and no fabricated interpreter state.
- Native texture-pack loader lifecycle, pool admission and allocation fixes.
- Combined host verification and a resumable capture workflow.

At the end of that earlier batch, no real game input or target run had been
available. The current-state section above records the subsequently obtained
private source assets, completed PC recording and source conversion.

## Architectural context retained

The Xbox build already has native VU1 handling. `Makefile` defaults
`TS_VU1_RECOMPILED` to 0 and `project/game/vu1_native_ts.cpp` already
offers raw vertices to the Xbox transform ring. The remaining opportunity is
packing/unpacking, VIF/DMA processing and submission; this is not a new
wholesale VU1-emulation bypass.

Xbox-ready meshes/world data, textures, animations and material tables were
discussed as possible directions, not completed formats or measured speedups.
The capture tools establish evidence for subsequent asset identity and reuse.
They do not replace gameplay, collision or live renderer state.

## Optional native draw recorder

Files: `xbox_vu_capture.h/.cpp`, `Makefile` and
`test/test_vu_capture.py`.

The generic VCU1 recorder is excluded on Xbox. The new adapter observes the
native callback instead. With `TS_NATIVE_CAPTURE=1`, only
`vu1_native_ts.obj` sees a registration-name macro. The adapter uses the real
runtime registry and invokes the original callback exactly once, forwarding
every original argument and its return value/fallback.

Normal builds default to 0, compile an empty adapter, and register the
original callback directly. A flags stamp rebuilds both objects on
off/on/reconfiguration/off transitions. The mode accepts only 0 or 1.

Recording:
- Program identity: `0x38ae1e855cd83dee`; draw PCs 0000, 0d20, 1ae0, 3520,
  2800, classified with the native runtime's low-14-bit PC mask.
- Exact 16 KiB RAM before mutation, original PC, effective TOP and observed
  draw ordinal. No borrowed VU pointer survives observation.
- Defaults: delay 5000 ms from first recognized draw, stride 64 per PC,
  limit 128 records (2,103,296 bytes). Menus can start the timer.
- Unique `E:\TimeSplitters\vu1-NNN.tsvucap`, created without replacing any
  existing file. Stops at the limit or first I/O failure; closes on normal
  early shutdown. Abrupt termination is untested.
- A contended observer skips sampling while preserving the original call.
  Writes are synchronous diagnostics; measure FPS with capture disabled.

Build/use instructions and the exact 48-byte header are in
[NATIVE-GEOMETRY-CAPTURE.md](NATIVE-GEOMETRY-CAPTURE.md).
No target build or console operation was performed by these tools here.

## One capture-analysis pipeline

`tools/xmeshcapture.py` now auto-detects VCU1 or TSVUCAP. Existing VCU1
commands remain valid. Optional `--format vcu1` or
`--format native-capture` restricts the accepted input.

```sh
python src/xbox/tools/xmeshcapture.py inspect /private/inputs.vucapture \
  --output /private/geometry-report.json
python src/xbox/tools/xmeshcapture.py extract /private/inputs.vucapture \
  /private/draw.xmesh --record 17

python src/xbox/tools/xmeshcapture.py inspect /private/vu1-000.tsvucap \
  --output /private/native-geometry-report.json
python src/xbox/tools/xmeshcapture.py extract /private/vu1-000.tsvucap \
  /private/draw.xmesh --record 0
```

Preserved: whole-stream validation before output, atomic write protection,
VCU1 state-size handling, verified code identity, strict VCU1 PC handling,
bounded render-state validation, and separate geometry/constants/tags/state
fingerprints. A corrupt later record never silently produces accepted output.
Native inputs add bounds/reserved-field checks and increasing ordinals;
mixed-format streams are rejected.

VCU1 identity is computed from captured code. Native identity is the
registration label recorded by the callback observer, explicitly identified
as such in reports. Native records have no code/host state; state-byte count,
ITOP and cycle limit are null. Native high-PC aliases use the same
normalization as the writer; original PC remains in metadata. Existing
geometry fingerprint domains and VCU1 behavior are preserved.

Neither format proves full capture completion if truncated exactly at a
record boundary. Neither hashes nor ordinals identify a static object or
authorize skipping a draw. Repeated vertices can occur on dynamic objects;
frame/view/object identity and GPU lifetime remain unknown.

The PC recording settings remain usable:
`TS_VU_CAPTURE_FILE` selects the private output,
`TS_VU_CAPTURE_AFTER=180` delays recording, and
`TS_VU_CAPTURE_LIMIT=256` bounds it. This batch produced that completed
recording using the same recorder in the cloud Linux build. No user-PC
operation was needed. An ISO/PAK is not a capture-container input; the new
background converter reads original source PAKs through its separate path.

## Native texture-pack fixes

`xbox_texture_pack.cpp/.h` retains XTP1 layout, valid existing builder output,
texture dimensions and pixels.

- Reopening joins/closes the old loader before clearing requests, slots,
  borrowed pool pointers, counters and metadata; a new loader starts with
  reset request sequence and stop state.
- Rejects undersized or non-128-byte-aligned pools before starting a loader.
- Textures larger than the whole pool return `kUnavailable` immediately;
  the existing backend keeps the runtime texture instead of repeatedly
  attempting impossible evictions.
- Rejects overlapping metadata/data ranges, unsupported reserved fields and
  unknown entry flags.
- Invalidates cached failed allocations when a failed read frees storage or
  a completed read makes an old queued slot evictable.
- Preserves current/previous-frame eviction protection through uint32 frame
  counter rollover.

These are correctness/admission improvements. No measured performance gain
is claimed.

## Previous combined verification — 2026-10-29

55 tests passed in both combined host runs:
- GCC normal configuration: 55/55, 6.448 seconds.
- GCC address + undefined-behavior sanitizers, fail-fast: 55/55, 9.464 seconds.
  Leak detection was disabled (`ASAN_OPTIONS=detect_leaks=0`); no
  leak-sanitizer coverage is claimed. The texture shim also counts handles.

Coverage:
- 12 unchanged raw converter/reader tests, including production scalar
  decoder comparison and 40,000 deterministic mutation cases per run.
- All 19 upstream capture/import/comparison tests plus 7 native-container
  tests. C++-written synthetic VCU1 records retain production header/hash/
  decoder interoperability.
- 6 actual capture-adapter tests against Win32 stubs and the production
  callback declaration: exact forwarding, pre-mutation data, timing/sampling,
  I/O failure and early shutdown, writer-to-importer round trip, and repeated
  geometry with changed live constants.
- 10 production texture-reader tests: all formats, asynchronous loads,
  successful/failed reopen, pending-read shutdown, thread-start failure,
  pool admission, rollover, stale allocation results and malformed metadata.
- 1 test of the real Makefile with a command-recording compiler: registration
  flag routing, both-side rebuilds and removal of capture instrumentation.
  This is not an Xbox compilation.

Python syntax checks and `git diff --check` passed. Raw converter and its
test file were hash-checked as unchanged. The actual registration statement
and runtime API declaration were also checked with the scoped macro.

Reproduce from the full checkout (Python 3.9+, C++17 compiler; GNU make/POSIX
shell for build-routing verification):

```sh
CXX=g++ python3 -m unittest discover -s src/xbox/test -p 'test_*.py' -v

ts_san_flags='-O1 -fsanitize=address,undefined -fno-sanitize-recover=all -fno-omit-frame-pointer'
ASAN_OPTIONS=detect_leaks=0 CXX=g++ \
TS_XMESH_CXXFLAGS="$ts_san_flags" TS_VU_CAPTURE_CXXFLAGS="$ts_san_flags" \
TS_XTP_CXXFLAGS="$ts_san_flags" \
python3 -m unittest discover -s src/xbox/test -p 'test_*.py' -v
```

Host stubs do not establish Xbox driver behavior, GPU visibility, actual SDK
linking, gameplay or visual fidelity. Sanitizers cover compiled C++ probes,
not the Python interpreter. Source inspection/publication uses the GitHub API;
read-only shared source references are not publication inputs.

## Next concrete work after source conversion

1. Verify actual current `main` and retain all newer work and scope.
2. Reuse the verified private source packs, gameplay capture and audit package.
   The source inputs and first real recording no longer need to be requested.
3. Bind the exact source level/room/part/variant/descriptor to loaded assets
   and their generations. The original part path can use precalculated,
   relit double-buffered or per-frame REF streams; preserve their live data.
4. Add the Xbox-local adapter with original-path fallback, keeping transforms,
   texture/CLUT/flush effects, vertex-queue behavior, portal/order/material
   state, clipping, memory budget and GPU lifetimes correct.
5. Resolve unmatched/unsupported inputs through provenance, without treating
   matching hashes or the degenerate triangle as permission to skip work.
6. Build and validate the target, compare real visuals and measure
   capture-disabled Xbox performance.

The source background converter is implemented; no runtime mesh cache, GPU
allocation or geometry replacement is activated. Camera, lighting, materials, animation, collision,
clipping, strip joining, flat shading and ordering remain the existing path's
responsibility. Keep private captures/reports/assets out of public commits.
