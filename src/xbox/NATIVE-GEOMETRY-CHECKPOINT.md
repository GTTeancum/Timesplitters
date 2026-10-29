# Xbox native geometry checkpoint

## Current objective and authorization

Preserve gameplay and visuals while reducing repeated PS2 graphics-data
translation. Publish to `main` only; change files inside `src/xbox/` only.
No Codex service, Dot or user-PC operation. Continue TimeSplitters means resume
an implementation/verification batch from the actual current repository head.
No agent launcher was available; compiler configurations ran concurrently.
Nothing continues unattended after the turn.

## Latest batch: existing capture import and geometry comparison

Starting head: `37658ff87311692c36ddee8704870f10c02f325d`.
Previous geometry prototype: `c5bbef4`; test-hardening follow-up: `37658ff`.

Implemented:
- `tools/xmeshcapture.py`: bounded streaming reader for the existing PC-runtime
  VCU1 input recording. Skips opaque host state by its declared size; verifies
  the native microprogram identity and maps all five draw entries to the
  correct four layouts. No user-supplied identity/layout override.
- Selected-record extraction through the existing `xmeshbuild.py`. Validates
  the entire container before atomically replacing an output. Truncated tails,
  unsupported draws and write failures do not publish partial output.
- JSON analysis separates repeated decoded geometry from changed constants,
  material-state inputs and draw tags. It does not infer object/frame IDs,
  automatically deduplicate live draws, or declare a static-geometry cache key.
- `test/test_xmeshcapture.py`: interoperability, differential, malformed-input,
  identity, repetition and safe-write tests using synthetic inputs only.
- `NATIVE-GEOMETRY-CAPTURE.md`: exact input format, commands, limitations and
  source contracts. All new changes stay within this Xbox folder.

The existing raw converter and C++ pack reader are unchanged. The `.xmesh`
format remains version 1 / CAPTURE_ONLY. No game assets, raw capture bytes,
user paths or private backups are included in the commit.

## Actual verification in this batch

19 new tests passed in each of three host configurations:
1. GCC, `-O2 -Wall -Wextra -Werror`.
2. GCC, UBSan with fail-fast recovery disabled.
3. Clang, ASan + UBSan with fail-fast recovery disabled.

Each configuration includes 40 synthetic C++-written captures covering all
five draw entries / four layouts, 120 strips and 480 vertices compared
byte-for-byte with the compiled production scalar decoder. The capture header
and program hash are also compared against compiled production excerpts.
Other tests cover short reads, host state-size variation, every-byte truncation
of a small record, full-size truncation boundaries, malicious length fields,
trailing garbage, record limits, unsupported code/entries, atomic write failure,
and geometry-versus-state separation. Python syntax compilation passed.

The earlier 12-test raw-converter suite was not rerun in this batch; its source
and the raw converter were not changed. The raw converter's local bytes were
verified against Git blob `3a0eb264c27b5c19e953d7417b8529c5695d72d7`.

Direct GitHub DNS failed in the shell. Source inspection and publication use
the connected GitHub API. Host tests used fetched production-source excerpts,
not a full repository checkout, full Xbox build or running game. The committed
tests read those same declarations/functions from a full checkout by default;
`TS_XMESH_REFERENCE_ROOT` supports a separate read-only reference tree.
Sanitizers apply to the C++ test probe, not the Python interpreter.

Reproduce:

```sh
python -m unittest discover -s src/xbox/test -p 'test_xmeshcapture.py' -v
CXX=clang++ TS_XMESH_CXXFLAGS='-O1 -fsanitize=address,undefined -fno-sanitize-recover=all -fno-omit-frame-pointer' \
  python -m unittest discover -s src/xbox/test -p 'test_xmeshcapture.py' -v
```

No Xbox build, xemu run, hardware run, real-game conversion, visual comparison
or new FPS measurement was performed. No performance improvement is claimed.

## Important architectural correction

The existing Xbox build already has native VU1 handling. `src/xbox/Makefile`
defaults `TS_VU1_RECOMPILED` to 0; `project/game/vu1_native_ts.cpp` already
submits raw vertices to the Xbox transform ring. The remaining opportunity is
packing/unpacking, VIF/DMA processing and submission, not a newly invented
wholesale VU1-emulation bypass. Earlier chat FPS projections were not measured.

The existing input recorder is PC-only: `ps2_vu1_core.cpp` excludes its call
under `PLATFORM_XBOX`. This batch consumes its format; it does not enable Xbox
recording. The tools never launch the game or touch the user's PC.

## Source contracts

Read at starting head above; shared files were inspected, not modified:
- `project/game/vu1_native_xf.h`: `bd6a61146ab783c04dcb2198e385b86d5fe78bf3`.
- `project/game/vu1_native_ts.cpp`: `97723cc7725739099edc6bb756b4abd17538d5f9`.
- `source/PS2Recomp/ps2xRuntime/include/runtime/gs/gs_backend.h`:
  `fc1e87de1baf89e771bd7cafea54cae002ada66a`.
- Capture header, hash and call-site blobs: `NATIVE-GEOMETRY-CAPTURE.md`.

## Existing pack contract (unchanged)

`tools/xmeshbuild.py` converts one raw 16 KiB VU1 data snapshot plus kind/TOP.
`xbox_mesh_pack.h` validates the resulting borrowed immutable byte view without
allocation. The format is little-endian: 96-byte `<8s12I32s8x` header,
32-byte `<8I` strip descriptors and 44-byte `GSXfVertex` records.

Header offsets: magic `TSXMESH\0` at 0; version=1 at 8; exact size at 12;
kind/TOP at 16/20; strip/vertex counts at 24/28; strip/vertex offsets at 32/36;
stride=44, CAPTURE_ONLY=1, CRC32, reserved=0 at 40/44/48/52; input SHA-256 at
56..87; zero padding at 88..95. CRC covers the whole file with bytes 48..51
zeroed. Strip fields: first vertex, count, source qword, PRIM, four GIF words.
Kinds: Plain=0, EnvMap=1, Lit=2, Skinned=3 (not GSXfConstants::Variant order).

The converter preserves decoded float/colour/bone semantics; it does not bake
camera transforms/lighting or simplify meshes. A file with the correct vertex
bytes is not automatically GPU-visible. Borrowed storage must stay alive and
immutable; never cast potentially unaligned file data to float structs.

## Remaining blocker and next action

1. Verify current `main`, then keep all modifications inside `src/xbox/`.
2. Obtain a PRIVATE existing VCU1 input recording. Unlike the first prototype,
   the tool now accepts the whole recording and reads PC/TOP itself. Inspect it
   using the documented command; extract records marked `converted`.
3. Compare real vertex output with the reference decoder. Repeated geometry
   observations can guide investigation, but cannot prove static-object identity
   or cache invalidation. The format contains no frame/object IDs.
4. Identify original asset offsets and mutable state before designing reuse or
   an importer. A disc image/PAK is not accepted by this capture tool.
5. Locate an Xbox-local build/loader hook before VIF decoding, preserve original
   fallback, and validate ordering/side effects/memory lifetimes before enabling
   any native-asset fast path. Shared-runtime writes remain outside permission.

Do not activate a live fast path from these capture hashes. There is still no
static-world importer, runtime lookup/cache, GPU allocation or draw hook. Real
inputs and a proven rendering hook are required before claiming FPS gains.
