# Xbox native geometry checkpoint

## Objective and authorization

Preserve gameplay and visuals while avoiding repeated PS2 graphics-data
translation where practical. User authorizes publishing to `main` only and
changes inside `src/xbox/` only. No Codex service, Dot, or user-PC operation.
Continue TimeSplitters means verify this checkpoint against the current head
and resume a substantial implementation/verification batch, not just planning.
Independent agents were unavailable in this session; host compiler/sanitizer
checks were run concurrently. Nothing continues unattended after the turn.

## Inspected baseline and important correction

Baseline: `777997453c607a5244ef0519715988a68795f75e`.

The existing build already uses a native VU1 replacement. `src/xbox/Makefile`
defaults `TS_VU1_RECOMPILED` to 0 and says previous tested draws used the native
path. That comment is not a new measurement. `project/game/vu1_native_ts.cpp`
already offers raw vertices to the Xbox transform ring. Therefore this work
must target remaining unpacking/repacking, VIF/DMA processing and submission;
claiming a new, wholesale VU1-emulation bypass would be incorrect.

The performance projections in earlier chat replies were not measurements.
No new FPS, graphics-fidelity, hardware, xemu or whole-game results exist here.

Source contracts inspected (Git blob IDs):
- `project/game/vu1_native_xf.h`: `bd6a61146ab783c04dcb2198e385b86d5fe78bf3`.
- `project/game/vu1_native_ts.cpp`: `97723cc7725739099edc6bb756b4abd17538d5f9`.
- `source/PS2Recomp/ps2xRuntime/include/runtime/gs/gs_backend.h`:
  `fc1e87de1baf89e771bd7cafea54cae002ada66a`.

## Implemented in this batch

- `tools/xmeshbuild.py`: standard-library-only converter for ONE raw 16 KiB
  VU1 draw-input snapshot plus layout and TOP. Exports the existing 44-byte
  model-space `GSXfVertex` representation, retaining strip order, source
  qwords, complete GIF tags and a source SHA-256 for provenance.
- `xbox_mesh_pack.h`: allocation-free, unaligned-safe, borrowed-byte reader.
  Validates lengths, version, layout, offsets, strip metadata and CRC before
  exposing data. A failed reopen clears any prior view.
- `test/test_xmeshbuild.py`: synthetic host tests, including a compiled
  differential reference extracted from the production scalar decoder and
  vertex declaration. No proprietary assets are committed.
- `.gitignore`: excludes `.xmesh`, `.vu1data` and Python cache files locally.
  This does NOT protect every possible asset filename: keep all other private
  inputs outside the checkout and review staged files before publishing.

The converter preserves float bits, including NaNs and signed zeros, except
Q=+/-0 becomes 1 as in the original decoder. Colour uses the original low
bytes; bone indices use the original low-16-bit clamp. It does not perform
mesh simplification, texture changes, camera transforms or lighting baking.
Unsupported/truncated/wrapping input is rejected, not partially converted.

## Deliberately NOT implemented

This is a CAPTURE-ONLY validation format, not a PS2 PAK/model/world importer.
It does not establish that a draw is static: even Plain draws may be dynamic.
No runtime lookup, cache, live renderer hook, GPU allocation, draw submission
or VIF/VU bypass has been installed. Existing rendering is unchanged. A file
of correct vertex bytes is not automatically GPU-visible or safe to reuse.
Camera/light/material state, animation, collision, clipping, strip joining,
flat-shading rules, ordering and GPU lifetimes remain the existing path's job.
The full-RAM SHA is provenance, NOT a reusable static-geometry cache key.

## Format v1 (little endian)

Header: 96 bytes, Python `<8s12I32s8x`.
- bytes 0..7: `TSXMESH\0`.
- uint32 at 8,12,16,20: version=1, exact file size, layout kind, TOP qword.
- uint32 at 24,28,32,36: strip count, vertex count, strip offset=96,
  vertex offset=96+32*strip count.
- uint32 at 40,44,48,52: stride=44, CAPTURE_ONLY=1, CRC32, reserved=0.
- bytes 56..87: SHA-256 of the full input snapshot; bytes 88..95: zero.
- CRC32 covers the entire file with bytes 48..51 treated as zero. It detects
  corruption, not malicious replacement/authenticity.

Each 32-byte strip record is eight uint32: first vertex, count, source qword,
PRIM, four original GIF-tag words. Vertex records follow in strip order.
Kinds are `ts_native_xf::Kind`: Plain=0, EnvMap=1, Lit=2, Skinned=3. These are
NOT `GSXfConstants::Variant` values (Lit and EnvMap are reversed there).
The reader's storage must stay alive and immutable. Copy bytes rather than
casting unaligned file memory to native structs. Future runtime integration
must add its own lifetime/visibility checks and static-asset identity.

## Actual verification

12 tests passed in each of three host runs:
1. GCC, `-O2 -Wall -Wextra -Werror`.
2. GCC, undefined-behavior sanitizer with fail-fast recovery disabled.
3. Clang, address + undefined-behavior sanitizers, fail-fast.

Each run includes 48 synthetic snapshots / 144 strips / 576 vertices compared
byte-for-byte against the compiled production scalar decoder, all four
layouts, boundary and unsupported-input checks, every-byte corruption and
truncation checks, valid-CRC structural failures, unaligned storage and
40,000 deterministic mutated-pack cases. These are correctness/safety checks,
not performance measurements or visual proofs. Python syntax compilation
also passed.

Shell GitHub DNS failed, so source inspection/publication uses the connected
GitHub API. This cloud environment has no nxdk installation or game inputs.
The host differential checks used fetched production-source excerpts at the
blob IDs above; they did not compile the whole Xbox backend, SSE decoder or
ring writer. The committed test extracts the same sections from a full
checkout; changed extraction boundaries fail visibly instead of silently
substituting a hand-written reference.

Reproduce from a full repository checkout with Python 3.9+ and a C++17 compiler:

```sh
python -m unittest discover -s src/xbox/test -p 'test_xmeshbuild.py' -v
CXX=clang++ TS_XMESH_CXXFLAGS='-O1 -fsanitize=address,undefined -fno-sanitize-recover=all -fno-omit-frame-pointer' \
  python -m unittest discover -s src/xbox/test -p 'test_xmeshbuild.py' -v
```

`TS_XMESH_REFERENCE_ROOT` can point to a separate read-only source checkout.
It was used for the fetched reference excerpts in this session.

Convert a PRIVATE captured draw (TOP below is an example, not a game constant):

```sh
python src/xbox/tools/xmeshbuild.py /private/draw.vu1data /private/draw.xmesh \
  --kind plain --top 0x100
```

## Remaining blocker and next concrete work

1. Verify the current `main` head and keep every new change in `src/xbox/`.
2. Obtain a private real draw capture: exactly 16 KiB of VU1 data RAM at draw
   entry, with TOP and microprogram PC/layout. Ideally capture the same world
   object in two frames/views. No game data belongs in public commits.
3. Support the repository's existing capture container if supplied; the current
   tool accepts only raw data RAM, not an entire replay file or disc image.
4. Compare all real vertices to the existing decoder, then identify stable
   source-asset offsets and mutable data before designing any reusable cache.
5. Locate an Xbox-local build/loader hook to bypass packing BEFORE VIF decode,
   retaining fallback and counters. Shared-runtime changes are outside current
   authorization; do not silently modify them. Keep runtime activation off
   until identity/invalidation, memory budget and visual comparisons pass.

A real asset import and a proven rendering hook are still required for FPS
improvements. Do not present this prototype as a completed world conversion.
