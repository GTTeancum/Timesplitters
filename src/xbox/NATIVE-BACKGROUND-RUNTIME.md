# Source-derived background rendering

The optional Xbox adapter connects XBG1 background packs to the existing
native VU1 renderer. It substitutes the geometry portion of accepted vertex
writes, retaining current VU colors and the renderer's existing state,
transforms, visibility, clipping, ordering and GPU buffer ownership.

The preferred `optimized` target selects `TS_BG_NATIVE=1` and stages the
converted geometry and textures with the executable. Ordinary `xbe` and
disc targets keep native backgrounds opt-in. An enabled runtime remains
functional without a matching pack; unsupported or unbound draws continue
through the original decoder. Console/XEMU availability does not block
further coding and cloud builds; target rendering and performance remain
unmeasured.

## Build and deployment

From the repository root, using the Xbox build environment described in
[README.md](README.md):

```sh
bash src/xbox/build.sh optimized
bash src/xbox/build.sh optimized TS_BG_VERIFY=1
bash src/xbox/build.sh xbe TS_BG_NATIVE=0
```

`optimized` defaults `TS_BG_NATIVE=1` and `TS_GEN_PCH=1`, builds the XBE,
and requires both `native-bg/` and `textures.xtp` under `build/xbox/iso/`.
It fails if their private source archives are missing or texture conversion
does not produce a pack. Keep those two outputs beside the launched
`default.xbe`, together with the original `game-data/` and `ps2disc.iso`.
The converted assets supplement the original game files; the target does
not build the complete disc image.

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
feature, verification mode or fast-path switches change. The original
object names retain their optimization and instrumentation flags. The
optional native recorder can be enabled alongside background rendering;
it observes the same original input before the wrapped callback.

The additional switches default to `1`: `TS_BG_FAST`, `TS_VIF_FAST`,
`TS_NV2A_MATERIAL_CACHE` and `TS_NV2A_PACK_IDENTITY_CACHE`. Each accepts
`0` to retain its previous implementation for later comparisons. Native
background verification and capture still default to off.

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
the UNPACK's memory effects.

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

With `TS_BG_FAST=1`, a contiguous UNPACK records a range certificate as well
as its original row identities. Any write into a certified range revokes
that certificate before recording the new data. An accepted intact range
can therefore establish all its rows together; overlapping, split or
uncovered ranges use the original row-by-row checks. Source binding uses a
bounded two-way index cache with full key equality and an adjacent-strip
shortcut. It stores indexes, never borrowed pack pointers, and is cleared
when the source is discarded. A small per-run table selects the prepared
strip directly by its vertex row.

`TS_VIF_FAST=1` is independent of background binding. A 516-byte per-call
cache reuses UNPACK sizes for the same live format, count and STCYCL. It
stores no payload pointers. Contiguous unmasked mode-0 S/V2/V3/V4-32
payloads use four-row copy loops with one VU-wrap split; V2/V3 preserve
unspecified lanes. Masks, other modes, split payloads and unsupported
conditions keep the existing decoder. Registers, observers and command
counts remain in the same order, and every original VU write still occurs.

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

With `TS_BG_FAST=1`, the packed vertex writer uses bounded SSE1 transfers
for its 44-byte records and still inserts the current color between the
geometry fields. It neither reads the GPU destination nor overwrites a
neighboring vertex. The existing cached last vertex supplies strip joins.

Every binding check completes before the first destination write. A miss
leaves the cursor and destination untouched, so the original decode can
execute immediately. No file access or allocation occurs in a draw.

## Material and texture reuse

`TS_NV2A_MATERIAL_CACHE=1` caches the derived NV2A material registers in
64 bounded records. Full input equality admits reuse; the current texture
pointer, viewport mapping and scissor are attached afresh. Texture addresses
and viewport-specific clip state are not held in these reusable records.

`TS_NV2A_PACK_IDENTITY_CACHE=1` remembers the result of a texture's content
lookup across eviction of its ordinary texture-cache record. Its 64 entries
store the complete source key and pack entry, with a reverse source-page
mask for invalidation on VRAM writes. Palette/TEXA changes produce a
different key. Known hits can request an already identified pack entry
without repeating a content decode/hash; known misses avoid that repeated
hash while retaining the normal texture decode. Render targets keep their
existing treatment, and current pool residency is checked on every use.

Both the recent-texture and last-texture shortcuts yield to a due pack
retry. A texture first drawn through the runtime fallback can therefore
switch to its asynchronously loaded pack copy when it becomes available.
This preserves the existing loader queue, eviction protection and GPU fences.

## Build isolation and diagnostics

All tracked implementation lives in `src/xbox/`. Exact-anchor patchers make
Xbox build copies of the shared native, VIF and memory translation units;
the shared source files remain unchanged. Changed, duplicate or missing
anchors fail the build before replacing a generated file. Disabling the
background feature restores the original background path; the independent
VIF optimization can remain enabled. Disabling a fast-path switch selects
its previous branch or source even if generated copies remain.

`[TS:bg]` reports the active level, resident pack/index KiB, substituted
strips/vertices, fallback strips, verification differences, load/source
rejections, lifecycle invalidations, cached binding hits and provenance
range/row checks. Material and texture lookup diagnostics count cache hits,
misses and source invalidations. A nonzero geometry match count proves that
the adapter supplied vertices; it does not measure a performance gain.

The implementation still performs the original DMA/VIF operations and
copies accepted vertices into the existing ring. Its performance benefit
must be measured on the target. These changes reduce repeated work inside
that route; a complete command-pipeline bypass is not implemented.
Unsupported layouts and source paths remain explicit fallback work. See
[NATIVE-GEOMETRY-CHECKPOINT.md](NATIVE-GEOMETRY-CHECKPOINT.md) for the latest
actual verification results and remaining hardware work.
