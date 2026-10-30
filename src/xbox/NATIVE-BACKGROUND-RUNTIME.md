# Source-derived background rendering

The optional Xbox adapter connects XBG1 background packs to the existing
native VU1 renderer. It substitutes the geometry portion of accepted vertex
writes, retaining current VU colors and the renderer's existing state,
transforms, visibility, clipping, ordering and GPU buffer ownership.

`TS_BG_NATIVE` defaults to **0** pending full Xbox rendering and performance
validation. An enabled build remains functional without a matching pack;
unsupported or unbound draws continue through the original decoder.

## Build and deployment

From the usual Xbox build environment described in [README.md](README.md):

```sh
make TS_BG_NATIVE=1
make TS_BG_NATIVE=1 TS_BG_VERIFY=1
make TS_BG_NATIVE=0
```

`TS_BG_VERIFY=1` additionally compares current VU geometry with the selected
pack vertices before accepting a strip. A difference declines that strip
and increments `diff`. Use verification for correctness checks; benchmark
with verification and diagnostic capture disabled.

When the feature is enabled and `project/game-data/PAK/BG.PAK` is present,
the build creates all packs under `build/xbox/iso/native-bg`, validating
numeric texture references against `MISC.PAK`. `make backgrounds
TS_BG_NATIVE=1` stages only these assets. `BG_PAK` and `MISC_PAK` can select
other private input paths. Disabled builds remove staged background packs
from the ISO directory. Source archives and generated packs stay out of git.

The runtime reads `D:\native-bg\levelN.xbg` synchronously during level
preloading. The Xbox entry point provides a **4 MiB total dynamic budget**
for the current pack and its source lookup index. No second level pack is
retained. Allocation failures, missing files, bad checksums, wrong source
identity and admission failures leave rendering on the existing path.

Flag stamps rebuild the native, memory, VIF and adapter objects when the
feature or verification mode changes. The original object names retain
their optimization and instrumentation flags. The optional native recorder
can be enabled alongside background rendering; it observes the same original
input before the wrapped callback.

## Source identity and lifetime

The pack's recorded source hash is checked at `bgPreloadTextures` entry
(`0x2564A8`). At this point the original raw bytes are available through the
preload table, with their exact logical length. Pass-2 texture loading later
replaces texture IDs with runtime handles, and `bgLoad` relocates pointers;
hashing the whole raw file after either step would be incorrect.

The source lookup requires one canonical `host0:bg/levelN/levelN.raw` record and
bounds every table, filename and RAM access. It excludes menu/MapMaker
levels. Preparation checks the hash and every recorded model/part/variant/
descriptor, strip tag and geometry field against the pristine raw data.
It constructs a sorted index keyed by the exact source tag, position and
vector addresses, count and layout. Ambiguous keys reject the pack.
The `host0:` device prefix is part of the original game's preload lookup;
the shorter archive-entry name is not the runtime filename.

`bgLoad` entry activates only that prepared level, allocation and length.
`bgReset` deactivates drawing while retaining the prepared source for the
following load. `preloadReset`, `preloadExec` and `bgEnd` discard it. Known
in-place geometry writers report destinations before writing; a write into
the bound raw allocation invalidates it. Instance override arrays, including
water animation destinations, have different addresses and cannot borrow
the original source geometry accidentally.

Ownership has a non-reusable 64-bit generation. Loader access is guarded
and borrowed bytes are exposed only within a synchronous callback. Loading
or unloading during that callback fails without releasing its storage.
The lookup index and pack are freed together; a later allocation at the
same guest address does not inherit a previous binding.

## VIF provenance

The segmented Xbox DMA walker already retains guest-memory pointers in its
pieces. The adapter observes a validated UNPACK before its original writes,
recording the source of each affected VU row. It never skips or modifies
the UNPACK itself.

The accepted forms are contiguous source payloads with unmasked, mode-0
V3-32 positions and V4-32 tags/vectors. Every source row must agree with
the bound strip. Split payloads, accumulation, masks, unknown formats,
instance overrides and worker execution decline binding. Skipped or
unsupported writes invalidate the affected row identities.

All VU execution boundaries invalidate old provenance, including unknown
programs and native fallback. Direct EE writes to VU memory and memory
initialization also invalidate it. The legacy flattened VIF path clears
provenance on entry and exit and uses the original decoder. Epoch changes
make invalidation constant-time without clearing the full row table.

The active native draw accepts Plain and EnvMap layouts only. It checks
the complete live strip tag and the provenance of every position/vector
row. Current colors are always taken from the VU input, including changes
from relighting. Geometry hashes are not used to identify draws.

## Rendering behavior

The native build copy changes exactly two production call sites: joined
strip writing and flat-strip decoding. State-block application, pending
packet submission, GIF arbitration, `beginXfRun`, CPU fallback and
`endXfRun` remain the original code. The independent ring self-check
continues to use the original decoder.

Accepted vertices are copied into the existing transform ring in memory
order: geometry, current color, then texture coordinates and bone field.
Joined strips keep the two degenerate join vertices and cached final
vertex. The writer never reads from write-combined destination memory.
Flat strips still go through the existing provoking-vertex conversion.
The original segment and frame fences own every GPU-visible byte; the
CPU pack allocation is never submitted directly to the GPU.

Every binding check completes before the first destination write. A miss
leaves the cursor and destination untouched, so the original decode can
execute immediately. No file access or allocation occurs in a draw.

## Build isolation and diagnostics

All tracked implementation lives in `src/xbox/`. Exact-anchor patchers make
Xbox build copies of the shared native, VIF and memory translation units;
the shared source files remain unchanged. Changed, duplicate or missing
anchors fail the build before replacing a generated file. Disabling the
feature compiles the original sources even if generated copies remain.

`[TS:bg]` reports the active level, resident pack/index KiB, substituted
strips/vertices, fallback strips, verification differences, load/source
rejections and lifecycle invalidations. A nonzero match count proves that
the adapter supplied vertices; it does not measure a performance gain.

The implementation still performs the original DMA/VIF processing and
copies accepted vertices into the existing ring. Its performance benefit
must be measured on the target. Unsupported layouts and source paths
remain explicit fallback work. See
[NATIVE-GEOMETRY-CHECKPOINT.md](NATIVE-GEOMETRY-CHECKPOINT.md) for the latest
actual verification results and remaining hardware work.
