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
further coding. The current instruction is to finish the full planned
optimization code before another build or download package; the commands
below are for that later stage. Target rendering and performance remain
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

The additional switches default to `1`: `TS_BG_FAST`, `TS_BG_BATCH`,
`TS_VIF_FAST`, `TS_GIF_NATIVE`, `TS_DMA_CHAIN_CACHE`, `TS_NATIVE_CALL_SLOTS`,
`TS_DRAW_RECORDS`, `TS_VIF_SOURCE`,
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

The background source-copy stage wraps the production joined-strip and
flat-strip decode calls and adds a complete-group attempt inside an already
accepted `beginXfRun`. State-block application, pending draw-packet
submission, CPU fallback and `endXfRun` remain the original code. The
independent ring self-check retains the original strip loop. A separate
GIF stage handles the known packet-only XGKICK entry, described below.

Accepted vertices are copied into the existing transform ring in memory
order: geometry, current color, then texture coordinates and bone field.
Joined strips keep the two degenerate join vertices and cached final
vertex. The writer never reads from write-combined destination memory.
Flat strips keep the existing provoking-vertex order, including the
direct group writer described below.
The original segment and frame fences own every GPU-visible byte; the
CPU pack allocation is never submitted directly to the GPU.

With `TS_BG_FAST=1`, the packed vertex writer uses bounded SSE1 transfers
for its 44-byte records and still inserts the current color between the
geometry fields. It neither reads the GPU destination nor overwrites a
neighboring vertex. The existing cached last vertex supplies strip joins.

Every binding check completes before the first destination write. A miss
leaves the cursor and destination untouched, so the original decode can
execute immediately. No file access or allocation occurs in a draw.

With `TS_BG_BATCH=1`, a consecutive group of prepared Plain/EnvMap strips
shares one runtime guard and one pack borrow. All requested strip identities
and packed-vertex ranges are admitted before the writer is called. A direct
group must fit the currently open ring segment, including degenerate joins
and the original first-strip reservation. A capacity miss leaves cursor
growth and fences to the original per-strip loop.

With `TS_BG_NATIVE && TS_BG_BATCH`, the Xbox backend also lends the remaining
ring span to a flat group while retaining `cursor.direct=false`. The group
must fit all `3 * (vertexCount - 2 * stripCount)` expanded records before
the pack is borrowed. It writes pack geometry and current VU colors
directly in the original `i, i-2, i-1` triangle order, removing the temporary
64-vertex array. Legacy `emitXfStrip` takes any pending cursor records before
its normal reservation can flush or fence a segment, then refreshes the
lent span. `endXfRun` takes final pending records and releases the cursor.
Flat groups without a lent span use the existing emitter. Binding/capacity
misses and ring self-checks keep the original strip loop. Both switches
off retain the earlier backend path. No pack pointer survives the callback,
and no GPU allocation or fence contract changes.

## Packet plans and DMA leaf reuse

`TS_GIF_NATIVE=1` adds four bounded plans for complete PACKED GIF packets
up to 16 KiB, 32 tags and 1,024 tag/write operations. Every cached tag is
compared byte-for-byte on reuse. Plans contain descriptors and offsets;
colors, positions, all register values and A+D destinations remain live.
Complete admission precedes every GS effect. Ordered execution occurs
under the GS lock and a separate nonblocking plan lease. Reentrant cache
requests and incomplete streams fall back before any output.

The known native XGKICK entry uses this route only outside the VIF worker
and with an empty arbiter. Nonnull memory without an arbiter keeps its
original callback behavior. `TS_PERF_BACKEND=1` also keeps the original
callback so per-path profiling remains intact. The existing direct PATH3
DMA caller benefits through the same GS method. Q resets at the first
packed write of each tag; a zero-loop tag leaves current Q unchanged,
matching the streaming interpreter. This corrects the previous direct
method's zero-loop reset. The fixed plan cache is bounded below 24 KiB.

`TS_DMA_CHAIN_CACHE=1` reuses only main-RAM leaf subchains made of
REF/REFS/CNT tags ending in RET, after the original CALL has pushed its
return address and appended its own data. All live 16-byte tags are checked
again. An owning result contains the original nonempty TTE/payload append
sequence as offsets into current RAM. The existing `addSegment` controls
all coalescing; the cache does not retain payload pointers or snapshots.

The complete leaf must fit both remaining byte/tag budgets. With fixed
VIF batching, room for twice the leaf's tag count is required before any
piece is appended. This conservative bound prevents a decoder callback
between tag validation and use and preserves later flush boundaries.
The original RET stack pop, ASR contents, TADR, tag count and CHCR upper
bits are retained. Unsupported control flow, IRQ tags, scratchpad/aliased
or wrapping payloads, oversized leaves, detailed counters and zero-TTE
suppression keep the original walk. Metadata storage is bounded below
40 KiB; payloads and all VIF writes still execute through the existing route.

## Ordered draw records

`TS_DRAW_RECORDS=1` connects all three production origin kinds in the Xbox
copy of `partGfx`: the completed precalc CALL at guest `0x261c40`, completed
per-instance Dbuf CALL at `0x261c90`, and the three per-frame REF loops.
REF observations occur after their final list-pointer stores `0x261450`,
`0x2618a0` and `0x261f48`, before a scheduler checkpoint can return. Each
iteration captures its own start address. Source guards reject new calls,
yields, branch exits or interior entries inside those capture spans.
Original guest-list bytes, register values and control flow remain intact.

Observations retain up to 256 compact origin hints in 128 two-way sets.
They read the caller or first REF tag and one first leaf header; no leaf
walk occurs during list construction. Repeated instances of one chain
share the latest caller. A nonempty canonical first payload is indexed
alongside the first TTE entry. This supports both tag-data transfers and
the payload-only CHCR `0x185` transfers recorded in earlier game logs.

Descriptors cover main-RAM REF/REFS/CNT leaves ending in RET, or a completed
linear REF span, up to 32 tags, 64 raw pieces and 256 KiB of source data.
The 16-entry descriptor cache is populated lazily at an observed first
TTE or indexed first-payload word, or at an exact observed REF origin in
the DMA walker. Each representation retains or omits TTE pieces for that
transport. A linked payload index retains shared-start origins still
present in the hint table; it does not discard all but two objects using
the same command template. Ordered candidates are bounded to 32 attempts
per lookup. Only the live reader proof can select a transport/origin.

A missing interior lookup keeps the original decoder. Every live caller
or first REF and every retained tag is checked before the consumer. All
payloads, including instance relighting colors, are read from current RAM.
Changed resident tags decline the current lookup; an exact origin hint
permits later reconstruction. Changed origin bytes require a fresh
observation. A changed first-payload address can miss until observation
reindexes it. Sixteen offset queries store indexes and generations, and a
rejected consumer cannot create a permanent miss for other shared starts.
All producer metadata fits a 40 KiB ceiling with no heap allocation.

The DMA shortcut looks up the actual untouched tag address, without a
payload candidate scan. It accepts only observed linear REF spans, after
the original ASP validation and before any current-tag count or decode.
The current CHCR.TTE mode selects the descriptor; every tag and both byte
and tag budgets are checked. The caller reserves twice the span's tag
count in the fixed batch before appending raw pieces through `addSegment`.
This prevents a decoder callback from changing later tags between
validation and append, while retaining original coalescing and later
flush positions. It advances TADR to the observed exclusive end, adds the
original tag counts and keeps the last tag's CHCR upper bits. ASR/ASP do
not change for REF tags. Detailed counters, zero-TTE suppression, changed
metadata and insufficient capacity retain the original walker. The source
adapter checks the entire skipped loop body, including its existing
CALL-leaf composition, so an added per-tag effect requires review.

The segmented decoder consults a descriptor only at a command boundary
after its pending PATH2 image handling. A private copy of the reader must
match every source address through the next MSCAL/MSCALF. A command or
payload split across actual pieces declines. This preserves split counters
and the original background-provenance treatment. The original stream is
never replaced with marker bytes, and failure consumes no logical input.

Eight bounded plans, below 12 KiB in total, admit up to 64 commands before
that terminal MSCAL. Their exact command words, initial cycle/mode and
live source spans are rechecked. Supported uploads are unmasked, mode-0
S/V2/V3/V4 at 32, 16 or 8 bits and packed V4-5, with CL >= WL. Compact
uploads preserve signed/unsigned extension and complete word padding;
V4-5 retains the original decoder's raw 5/5/5/1 fields. These cover the
V4-8 color commands in the actual precalc templates. Controls include NOP, STCYCL, BASE, OFFSET,
ITOP, STMOD, MARK, FLUSH, STMASK, STROW and STCOL. Matrix, lighting, color,
row/column/mask and vertex payload values are never held in the plan.

Once the whole prefix is admitted, its commands update live VIF registers
and VU rows in order. S uploads broadcast; V2/V3 retain untouched lanes;
destinations retain skip-cycle and 1024-row wrap semantics. Every upload
keeps watched-row and background-provenance observations. Contiguous
32-bit uploads reuse the existing SSE1 writer when `TS_VIF_FAST=1`.

Execution stops before MSCAL, and only then advances the original reader
through the committed prefix. The original MSCAL branch performs TOP/ITOP
and double-buffer transitions, VU code lookup, native callback or interpreter
fallback, GS effects, and background execution invalidation. No arbitrary
native/GS callback runs inside the prefix. Workers, detailed command
counters, unsupported inputs and nonblocking-cache contention keep the
original decoder. Disabling records removes the producer, VIF and REF DMA
source-copy stages.

This route replaces repeated command decoding for admitted prefixes.
It retains the original DMA stream and VU memory effects; it does not yet
replace complete display lists or fetch pack vertices directly on NV2A.
Lazy construction retains more queued draw origins than the full descriptor
cache alone. Hint collisions, eviction, empty/unsupported first payloads
and candidate limits can still limit coverage. `[TS:draw-record]` reports
precalc/Dbuf and all REF observations, accepted payload/TTE descriptors,
descriptor use and capped candidate selection; `[TS:vif-record]`
reports plan reuse, rejection and accepted command/vector totals. These
are diagnostic admissions, not evidence of measured target speed.
The transport counters identify admitted descriptor representations; they
do not sample CHCR or establish frame coverage.
DMA counters report prepared descriptors and their tag/byte totals; a
prepared descriptor may still be declined by the fixed-batch capacity test.

The native record code and its regression probes have not been compiled
or executed. Python source-adapter checks run without building the game
and exercise actual source composition, restoration and rejection guards.
The no-interim-build instruction continues until the entire planned
implementation is written and connected.

## Source arrays in the native vertex writer

`TS_VIF_SOURCE=1` connects an admitted prefix to its immediately following
fast native draw. The prefix records up to 64 upload descriptors and the
latest writer of each of 1024 VU rows in a fixed decoder scope below 4 KiB.
It holds offsets and metadata, not decoded vertex copies. Original VU
writes, watched-row observations and VIF state changes still execute.

The view is armed only for a proved contiguous MSCAL/MSCALF command at
Plain entry `0x0000` or EnvMap entry `0x0d20`. Its command pointer and word,
pre-toggle TOP, RAM allocation and full VU buffer must match. A permit
encloses only `fast.native`, ending before either normal bookkeeping or
interpreter fallback. The native entry claims it once. The arbitrary
MSCAL callback, workers, constant/kick entries and mismatches cannot claim
it. Capture and ring self-checks retain their VU-based route. Source-copy
tests restore every original statement after removing these additions.

The owner pointer is thread-local. Nested or competing decoder work
revokes the view through an atomic serial without reading another
thread's stack. Admission checks the serial again before output. This
depends on the stock synchronous Xbox pipeline: its VIF worker is disabled,
its installed GIF consumer enters GS, and the native writer calls no guest
code, allocator or callback while it reads source arrays. This is not a
general synchronization mechanism for an arbitrary simultaneous writer to
guest RAM or a replaced callback that mutates that RAM.

Plain and EnvMap accept contiguous mode-0 V3/V4-32 position and STQ/normal
arrays, and V4-8/16/32 colors. Every requested row must have the same exact
latest upload; partial, unsupported or interior overwrites reject the
affected array. Wrapped and skipped arrays decline. Colors preserve the
original low-byte packing, and either signed zero Q becomes 1.0. Lit and
Skinned layouts retain the original decoder.

Inside an already accepted GS run, pack geometry is attempted first, then
the source view, then the original VU decoder. Groups admit at most 24
consecutive strips and 64 total source vertices. Every source span and the
complete destination capacity are checked before writing. Joined groups
retain cached-last vertices and degenerate joins. Flat groups write the
same `i, i-2, i-1` expansion directly into the existing ring. The backend
lends flat spans when either pack batching or this source route is enabled,
takes pending records before legacy strip reservations and fences, and
releases the borrowed cursor at EndXfRun. It never reads the GPU ring back.

`[TS:vif-source]` separates admitted prefixes, armed views, native claims,
rejections, groups, strips and vertices for later target observation. No
acceptance rate or speed is established by this source batch. The native
visibility/near-plane readers still depend on VU memory. Removing their
geometry UNPACK writes requires a materialization contract for every
remaining reader and fallback; that larger replacement is unfinished.

## Native guest calls

`TS_NATIVE_CALL_SLOTS=1` resolves literal `guestCall`/`lightCall` targets in
the four native game/math files against the same compact address table
used by the executable. Generated Xbox copies call through the current
slot, so replacement functions and temporary self-test overrides remain
visible. The return register, one dispatch-cycle charge and unwind/resume
contract are retained through the existing `ps2xDirectCall`. A mismatched
or missing slot uses the original dispatcher before any charge. Dynamic
targets, missing table targets and tail jumps remain unchanged, including
tail-jump diagnostic history.

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
Xbox build copies of the shared native, VIF, memory and GS translation units;
the shared source files remain unchanged. Changed, duplicate or missing
anchors fail the build before replacing a generated file. Disabling the
background feature restores the original background path; independent
packet, DMA, VIF and guest-call optimizations can remain enabled. Disabling a fast-path switch selects
its previous branch or source even if generated copies remain.

`[TS:bg]` reports the active level, resident pack/index KiB, substituted
strips/vertices, fallback strips, verification differences, load/source
rejections, lifecycle invalidations, cached binding hits and provenance
range/row checks, and group attempts/acceptances/strip totals. `[TS:gif-native]`
reports packet-plan hits, builds, writes and fallback reasons. `[TS:dma-chain]`
reports cache requests, exact-tag hits, changes and helper admissions; a
helper admission can still fall back at the batch-capacity guard. Material and texture lookup diagnostics count cache hits,
misses and source invalidations. A nonzero geometry match count proves that
the adapter supplied vertices; it does not measure a performance gain.

The implementation retains the original VIF memory effects and copies
accepted vertices into the existing ring. Its performance benefit
must be measured on the target. These changes reduce repeated work inside
that route; a complete command-pipeline bypass is not implemented.
Unsupported layouts and source paths remain explicit fallback work. See
[NATIVE-GEOMETRY-CHECKPOINT.md](NATIVE-GEOMETRY-CHECKPOINT.md) for the latest
actual verification results and remaining hardware work.
