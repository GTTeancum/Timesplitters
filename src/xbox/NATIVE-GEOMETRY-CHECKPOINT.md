# Xbox native geometry and texture checkpoint

## Objective and authorization

Preserve gameplay, physics, AI and visuals while reducing repeated PS2
graphics-data work. Publish to `main` only and change repository files inside
`src/xbox/` only. No Codex service, Dot or user-PC operation.

“Continue TimeSplitters” means verify current `main` and resume a substantial
implementation/verification batch. Keep chat updates short. This batch used
three agents for native capture, importer integration and texture loading,
with cross-review and combined host verification.

## Current state — 2026-10-29 Eastern

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

Not established: a target Xbox build, console/xemu run, real-game geometry
fidelity or new FPS measurements. No real game capture/assets were available.
The next required input remains a PRIVATE real draw recording.

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

The earlier PC recording request remains usable:
`TS_VU_CAPTURE_FILE` selects the private output,
`TS_VU_CAPTURE_AFTER=180` delays recording, and
`TS_VU_CAPTURE_LIMIT=256` bounds it. The original chat asked for the
completed private `.vucapture` after entering a level. The tools do not
launch or operate the user's PC. An ISO/PAK is not a capture-container input.

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

## Actual verification after reconciliation

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

## Remaining blocker and next concrete work

1. Verify actual current `main` and retain all newer work and scope.
2. Obtain the PRIVATE existing PC VCU1 recording already requested, or compile
   an optional Xbox capture build in a configured target environment and
   privately retrieve TSVUCAP. Both feed the same inspection/comparison tool.
3. Compare real converted vertices against the production decoder and study
   repeated geometry versus changed state across scenes/views.
4. Establish original asset offsets, mutable data and invalidation before
   designing reuse or model/world import.
5. Add an Xbox-local loader/submission optimization with fallback only after
   validating ordering, side effects, memory budget and GPU lifetimes.
6. Verify real visuals and measure capture-disabled performance.

No static-world importer, runtime mesh cache, GPU allocation or geometry
replacement is activated. Camera, lighting, materials, animation, collision,
clipping, strip joining, flat shading and ordering remain the existing path's
responsibility. Keep private captures/reports/assets out of public commits.
