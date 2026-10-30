# Xbox native geometry and texture checkpoint

## Objective and authorization

Preserve gameplay, physics, AI and visuals while reducing repeated PS2
graphics-data work. Publish to `main` only and change repository files inside
`src/xbox/` only. No Codex service, Dot or user-PC operation.

“Continue TimeSplitters” means verify current `main` and resume a substantial
implementation/verification batch. Keep chat updates short, in plain English
and one-screen bullets. Say "Xbox version" explicitly when describing this
work; normal PC builds are outside its scope. Runtime, gameplay
proof and build verification were developed in parallel with cross-review.
Earlier capture/import and texture work is retained below.

The user explicitly requires sustained implementation sessions of 15+
minutes with parallel agents. Continue through multiple substantive subtasks
and integrate their results before ending a turn; a small commit is not a
reason to stop and require another "Continue". Do useful implementation,
review and integration work throughout, and push at the end of the session.
Do not pad elapsed time with idle waits or interpret this cadence as a
change to the no-build instruction below.

The user's no-build instruction is: "I don't want a build until everything is
written." This supersedes the earlier code-and-build cadence. Finish the
full planned Xbox optimization implementation and integration, including the
remaining geometry/graphics processing replacement, before another build.
Continue writing, reviewing and pushing source to `main`. Do not perform
interim compilations, link/XBE/ISO builds, or create new download packages.
The existing build commands and results below are retained for later use
and historical reference, not as instructions to build each source batch.
Console/XEMU availability does not block source work. After the planned code
is written and connected, build and validate it; hardware behavior and FPS
remain unmeasured until an actual target run is available.

The latest direction is to inspect the actual project and checkpoint, pick
the next concrete blocker, implement a bounded change, verify it with
meaningful available checks and continue while productive. Resolve routine
reversible choices without check-ins and preserve unrelated work. Pure
Python source-adapter checks are available without compiling the game;
native probes, make, compiler, emulator and packaging remain deferred.

## Current state — REF origins, payload-only records and flat groups, 2026-10-30 Eastern

Batch baseline: `52f38db8a988d94ac5707d2ed2967ec0c21fd290`.
The actual source exposed three connected gaps in the prior record path:
dynamic `partGfx` REF groups were unobserved, the first-entry logic assumed
TTE bytes, and real precalc templates contain compact V4-8 color uploads.
This batch connects those cases and removes an extra flat-geometry copy.
All tracked changes remain inside `src/xbox/`.

### Source evidence and implementation

- `nativePartGfxLevel` has three per-frame REF loops at `L_261200`,
  `L_261650` and `L_261ca8`. Xbox-only observers capture each iteration's
  start and completed end after guest stores `0x261450`, `0x2618a0` and
  `0x261f48`, before the original loop checkpoint. The guest display list,
  register writes and scheduler boundary remain intact. REF descriptors
  accept only the bounded, fully completed linear span; no CALL or RET is
  synthesized.
- Saved cloud game logs show VIF1 CHCR `0x185`; the runtime's TTE bit
  `0x40` is clear in those transfers. The producer now indexes an origin's
  nonempty first payload using one first-tag read and can describe raw
  streams either with or without tag data. Full copied-reader admission
  selects the actual stream. This fixes a coverage gap in the prior path;
  the prior reader proof already prevented incorrect injected bytes.
- A bounded linked index retains all shared first-payload origins still
  present in the 256 origin-hint table. Observation order supplies the
  first candidate; exact live source proof decides acceptance. Rejected
  consumers cannot create a permanent pointer-only miss. Candidate work
  is capped at 32 per lookup and the original decoder handles a cap miss.
  Sixteen lazy descriptors and sixteen offset queries remain bounded
  within the producer's 40 KiB metadata ceiling.
- `partPrecalcVifData` constructs V4-8 commands at guest `0x25eff4` and
  `0x25f1ec`, alongside 32-bit uploads and STCYCL `0x0404`. Prefix execution
  now accepts all 13 standard unmasked formats: S/V2/V3/V4 at 32, 16 and
  8 bits plus V4-5, still with mode 0 and CL >= WL. It preserves signed or
  unsigned extension, scalar broadcast, untouched V2/V3 lanes, raw packed
  fields, word padding, skip cycles, TOPS and VU wrap. Every source span
  and the terminal command are proved before effects. The original MSCAL
  branch remains unchanged.
- Accepted flat XBG groups write their expanded triangle list directly
  into the existing transform ring. Immutable pack fields and current VU
  colors are written in the original `i, i-2, i-1` order. The backend
  retains `direct=false`, takes pending records before legacy strip
  reservations and segment handoff, and releases the borrowed cursor at
  EndXfRun. Complete admission precedes writes; capacity/binding misses
  retain the old route. No new GPU allocation or extended pack borrow is
  required. This path is gated by `TS_BG_NATIVE && TS_BG_BATCH`.

### Verification and remaining scope

Independent source review covers compact formats, producer identity and
candidate selection, REF loop entry/re-entry and flat-ring ownership.
Python adapter checks exercise the real shared sources, exact restoration,
composition, semantic-anchor rejection and atomic output. Native probe
source covers compact uploads, shared-payload candidates, both transport
layouts and mixed flat/legacy ring writes, including segment rollover.
Those native probes have not been compiled or executed. No game build,
emulator run or new package has been produced.

Executed source checks: 15 tests passed across
`test_vif_record_patch.VifRecordPatcherTests` (4),
`test_draw_record.DrawRecordPatcherTests` (3),
`test_draw_record_ref.DrawRecordRefPatcherTests` (5), and
`test_xbg_xf.PatcherTests` (3). Select these classes explicitly under the
build hold; the other classes in those modules may compile native probes.
These results verify source adapters, not C++ execution or game behavior.

The original DMA walk, VU writes and MSCAL execution remain. Complete
graphics-command replacement and direct NV2A fetching of guest/pack arrays
are unfinished. Zero-length first payloads, unsupported commands/modes,
split source spans, candidate limits and cache contention retain fallback.
No coverage, target-memory or frame-rate result is claimed for this source.
`[TS:draw-record]` now separates all three REF variants, admitted payload
versus TTE descriptor modes, and candidate-budget exhaustion. These counters
do not sample CHCR or establish frame coverage.

## Previous ordered draw-record source, 2026-10-30 Eastern

Batch baseline: `da74fb4b84397e09c291bad256ffcef5a15a2365`.
This session connects observed game draw chains to a bounded VIF prefix
executor under `TS_DRAW_RECORDS=1`. All tracked changes remain inside
`src/xbox/`; shared game/runtime sources are only read. New source-copy
stages compose before native guest-call resolution and after the existing
background/VIF adapters. No compiler, make, patcher, runnable test, emulator,
build or package was executed for this source-only batch.

### Connected data path

- Observe completed zero-QWC `partGfx` precalc and per-instance Dbuf CALLs
  without changing the original guest display list, guest registers or
  scheduler steps. Keep up to 256 compact CALL hints while constructing
  the list; build full descriptors only when the decoder reaches an
  observed chain's first TTE word. Descriptors retain
  raw main-RAM TTE/payload offsets and exact caller/leaf tags; payloads stay
  live. Unsupported flow, IRQ, aliases, wrapping payloads and excessive
  chain sizes decline. Repeated callers of the same unchanged chain share
  one bounded descriptor.
- At a real segmented VIF command boundary, match the descriptor's source
  addresses against a copy of the live reader. Every command, complete
  payload and terminal MSCAL must match before any register or VU write.
  The original byte stream remains available on every rejected attempt.
  No marker replaces guest data, so a preceding cross-piece command cannot
  accidentally consume a private token as vertex data.
- Decode supported prefixes into bounded plans. Reuse exact command words
  and physical payload offsets, with current cycle/mode admission. Apply
  live BASE/OFFSET/TOPS, CODE/NUM/INT, row/column/mask and mode state and
  unmasked mode-0 S/V2/V3/V4-32 uploads with CL >= WL. V2/V3 preserve their
  unspecified lanes, S broadcasts, and destination rows keep the original
  skips/wrap. Contiguous uploads retain the existing SSE1 copy helper when
  `TS_VIF_FAST=1`.
- Stop immediately before MSCAL/MSCALF. The untouched original branch
  still controls double buffering, TOP/ITOP, native VU dispatch, fallback,
  GS work and background execution invalidation. No native/GS callback
  occurs inside a committed prefix. Watched-row and background provenance
  observations are preserved before each upload.
- Workers, detailed per-command counters, incomplete/split payload spans,
  unsupported formats or modes, and cache contention retain the original
  decoder. Flag stamps and source routing retain independent off paths.

### Scope and verification status

This is an ordered producer-to-decoder implementation, not a complete DMA
or GPU draw replacement. The original CALL and DMA piece stream still
execute. Direct NV2A fetch, arbitrary command formats, broader per-frame
REF emission, and removal of all intermediate VU copies remain unfinished.
Descriptor/plan caches are bounded and can evict coverage; admission counts
are not frame coverage or speed measurements. Full implementation must be
written and connected before any build is started.

The producer keeps 256 two-way CALL hints, 16 lazily constructed leaf
descriptors and 16 offset queries within a 40 KiB metadata ceiling. Eight
decoded-prefix plans have a separate 12 KiB ceiling. Both leases are
nonblocking. Same-chain instances share a hint; consuming more than 16
distinct queued chains can build descriptors in draw order rather than
discarding all but the final 16 during list construction. Hash collisions,
capacity eviction and a first TTE that fails the cheap VIF filter can still
limit coverage. An interior lookup alone never guesses a missing chain
origin. Changed resident leaf tags decline the current attempt; an exact
CALL hint permits a later first-TTE rebuild. Changed caller bytes require
a fresh observation. `[TS:draw-record]` separates precalc and Dbuf
observations; `[TS:vif-record]` records accepted prefixes, commands,
vectors and bytes for later target measurement.

Source-level regression probes cover long queued lists, eviction/rebuild,
live identity/payload changes, nonblocking leases, unsupported fallback,
register/lane behavior and source composition. They were authored for the
later verification stage and have not been run. Target compilation, game
rendering, memory headroom and FPS for these changes remain unverified.

## Previous source-only packet and geometry batch, 2026-10-30 Eastern

Batch baseline: `7ebd583ecc6a6acde706fce234480c681715ed3b`.
All tracked changes remain inside `src/xbox/`; publication is to `main`
only. This batch was written and reviewed without any compiler, make,
patcher execution, runnable test, emulator, build or package operation.
Earlier build results below do not validate this newer source.

### Newly connected source

- `TS_BG_BATCH=1`: one guard and pack borrow admits a complete consecutive
  Plain/EnvMap group before output. Direct groups must fit the open ring
  segment; flat groups retain existing per-strip emission and provoking
  vertices. Capacity/layout/binding misses use the original strip loop.
  Ring self-check runs also keep that loop. Live colors and state remain
  current; source pointers exist only during the synchronous writer.
- `TS_GIF_NATIVE=1`: four exact-tag PACKED GIF plans reuse descriptors and
  offsets for complete bounded packets. Every register/vertex payload and
  A+D destination is read live. Full admission precedes GS effects, one
  GS lock and a nonblocking shared-plan lease cover execution, and partial
  streams/queued work/VIF workers retain the old route. Nonnull memory
  without an arbiter and backend profiling keep original callbacks.
  Zero-loop Q behavior now matches the streaming GS interpreter, including
  the preexisting direct-PATH3 caller. The cache stays below 24 KiB.
- `TS_DMA_CHAIN_CACHE=1`: a bounded exact-tag cache replaces eligible
  REF/REFS/CNT-to-RET leaf walks after the original CALL's own bytes and
  return-stack update. Raw live TTE/payload pieces pass through original
  coalescing. A conservative batch-capacity check prevents decoder calls
  between validation and use and keeps later flush boundaries unchanged.
  Tag/byte budgets, RET/ASR/ASP/TADR/CHCR effects and unsupported fallback
  are retained. Metadata stays below 40 KiB; payloads are never cached.
- `TS_NATIVE_CALL_SLOTS=1`: literal native guest calls resolve to the same
  compact table used by translated code. The live slot preserves overrides;
  the existing dispatch helper retains scheduler charges and unwind/resume.
  Dynamic/missing targets and all tail jumps keep their original helpers.
- Xbox-only source-copy routing composes the new stages with the existing
  geometry/VIF adapters, retains original object identities and flags, and
  stamps all switch consumers. Startup/status logging identifies enabled
  paths and metadata admissions. `TS_PERF_BACKEND` now has a consistent
  stamped option across the timing wrapper and native-packet bypass guard.

### Review and remaining work

Independent source review caught and corrected the no-arbiter/profiling
callback cases and two DMA flush-boundary hazards: callbacks during leaf
application and eager piece merging after an earlier flush. Existing test
source was updated for the group anchor, generated-copy composition,
enable/disable paths, compact-table dependency and profiling flag changes.
No test pass or target build is claimed for this batch.

The full graphics-command replacement is still unfinished. These paths
reduce repeated decode, lookup and submission work while retaining VIF
memory effects. They do not yet replace `partGfx` output with ordered native
draw records, reproduce all skipped VIF/VU end state, or provide direct
NV2A fetch of pack vertices. Unsupported source/layout work and the later
verification gates remain. Continue source implementation before building;
completion of this batch does not lift the user's no-build instruction.
No new Xbox boot, visual result, runtime memory headroom or FPS result is
claimed.

## Previous connected optimization build batch, 2026-10-30 Eastern

Batch baseline: `b31f40990b2c940be07f2e9fb6cda79ae3770404`.
All tracked changes remain inside `src/xbox/`, with publication to `main`
only. This batch adds work to the Xbox version; private assets and build
outputs remain outside the repository.

### Connected paths

- `TS_BG_FAST=1`: exact source-binding cache and adjacent-strip lookup,
  revocable contiguous provenance ranges, direct per-run strip selection,
  and bounded SSE1 copies for the 44-byte converted vertices. Live colors,
  source lifetimes, clipping, provoking vertices and GPU fences remain the
  existing path's responsibility. Range certificates fall back to the
  original row checks after overlap or partial coverage.
- `TS_VIF_FAST=1`: a 516-byte cache local to each segmented decoder call
  reuses UNPACK sizes; contiguous unmasked mode-0 S/V2/V3/V4-32 writes use
  four-row loops with one wrap split. V2/V3 preserve the untouched lanes.
  Payloads are always read live; masks, other modes, split payloads and
  unsupported conditions keep the previous path and every VU write.
- `TS_NV2A_MATERIAL_CACHE=1`: 64 material records reuse derived NV2A state
  only after full input equality. Current texture addresses, viewport
  mapping and scissor remain live.
- `TS_NV2A_PACK_IDENTITY_CACHE=1`: 64 texture-source records reuse pack
  lookup results across texture-cache eviction. Exact source keys and
  reverse page invalidation preserve texture writes and palette changes;
  GPU addresses and residency are never cached as identities. The recent
  and last-texture shortcuts also respect pack retry timing, allowing a
  runtime fallback texture to be replaced by its loaded pack version.

These four switches default to `1` and each can be set to `0` for a later
comparison. They reduce repeated work within the existing rendering route;
the original DMA/VIF command pipeline has not been completely bypassed.
No Xbox boot, visual result, runtime memory headroom or FPS improvement is
claimed for this batch.

### Preferred build and deployment

```sh
bash src/xbox/build.sh optimized
```

The new target selects `TS_BG_NATIVE=1` and `TS_GEN_PCH=1`, builds the XBE
and requires converted geometry plus textures. It produces `default.xbe`,
`native-bg/` and `textures.xtp` together under `build/xbox/iso/`. Missing
source archives or a skipped texture conversion fail the target. Keep
those outputs with the original `game-data/` and `ps2disc.iso`; the target
does not package those original inputs or build a disc image.

Ordinary `xbe` and disc targets retain `TS_BG_NATIVE=0` unless selected.
Geometry verification and native draw capture remain off by default.
The new flag stamps rebuild the VIF, backend and background consumers when
their switches change. VIF patching composes after background observations
when both are enabled and also works without background conversion.

### Target build results

Both actual target builds compiled, linked and converted to XBE successfully.
Both have `TS_BG_NATIVE=1`, `TS_BG_VERIFY=0`, `TS_GEN_PCH=1` and native
capture off. The four switches above distinguish the builds:

| Build | Four new optimization switches | XBE bytes | Incremental build seconds |
| --- | --- | ---: | ---: |
| optimized | all `1` | 11,583,488 | 7.370 |
| comparison | all `0` | 11,571,200 | 10.045 |

XBE SHA-256 identities:

- optimized: `92098eed58b8548c804f4f013e72e3d7ae06dec29a6f3e7b19316c1bcf1e2fef`
- comparison: `d96466a46fbddbf8e3496995a09f98eeb43d7e5e7ae01b42ea63fce2e4cdb597`

The optimized target rebuilt all 27 background geometry packs and
`textures.xtp`: 2,254 textures, 11,451,088 bytes, SHA-256
`73fb246c99ef267610ca1d6f72cd23fa5ac1b3cc76eb8c7a3f06af5800c712ed`.
The recorded source inputs stayed unchanged during each final build.
Existing LLD section-merge and locally supplied import warnings remain in
the build logs. Build seconds describe compilation/linking work and do not
measure game performance.

This batch did not repeat the earlier whole-XBE static inspections or run
the game on a console or in XEMU. Its evidence establishes successful
target builds and asset generation; device behavior and FPS remain open.

## Previous complete build batch — 2026-10-30 Eastern

Batch baseline: `052c11c910d77910e1c1b30814962f66d39c3ab9`.
The complete Xbox title now compiles, links and converts to XBE in the cloud.
All tracked changes remain inside `src/xbox/`; normal PC sources and build
files are unchanged. This batch did not run the new XBEs on hardware or in
an emulator. Boot, rendering, actual memory headroom and FPS remain untested.

### Build changes

- The Xbox Makefile and `build.sh` support Linux and the existing MSYS2
  CLANG64 route. `xbe` builds only `build/xbox/iso/default.xbe`, without
  staging the original disc or assets. Tool suffixes, Cg paths and library
  response paths follow the build host. `NXDK_LIB_DIR` can select a separate
  set of built libraries while reusing a read-only SDK.
- GNU make writes the linker response file directly. The full title's
  object list exceeded Linux's per-argument limit when expanded into one
  shell `printf` command. Object/library order and link flags are preserved.
- Optional `TS_GEN_PCH=1` caches only the exact initial three-header prefix
  already present in 2,423 of 2,671 generated units. Separate size-optimized
  and fast/direct-inline profiles preserve the existing compile flags; the
  other 248 units retain their original include order. Transitive header and
  flag dependencies rebuild the cache. A runtime-only make invocation no
  longer changes the generated-code flag stamp at parse time.
- The existing Xbox filesystem layer now implements `__equivalent`, which
  the disc-directory scan requires. It compares real open-handle volume and
  64-bit file identities, supports directories, preserves errors through
  cleanup, and rejects empty or oversized paths before reaching SDK asserts.

The installed NXDK source is commit
`f8c52e4be65bab7d6e10455db8d86d69d232bbe3`. Clang and LLD are 18.1.3,
targeting `i386-pc-win32` / Pentium III. The shared SDK was not modified.
Four missing libraries were built privately from SDK sources and the exact
pinned zlib/libpng revisions; the private library directory supplies all
14 link archives. All 15 real NV2A shader variants compiled.

### Retained Xbox executables

All three builds use `TS_GEN_PCH=1` and diagnostic capture off. The repository
still defaults to `TS_BG_NATIVE=0`, `TS_BG_VERIFY=0`, and `TS_GEN_PCH=0`.

| Build | Native backgrounds | Live geometry verification | XBE bytes |
| --- | ---: | ---: | ---: |
| standard | 0 | 0 | 11,546,624 |
| background-enabled | 1 | 0 | 11,571,200 |
| background-check | 1 | 1 | 11,571,200 |

XBE SHA-256 identities:

- standard: `dffecaa2aa086c330e752db32cfb502f0011549e916d2ca921baf68c3a728745`
- background-enabled: `0609218dded461c5493cb0c709fa04ba80d2ae1da1e6ddde0398011cb04b713d`
- background-check: `4d4969162c75f7ad75572327833b72b8f4660189b4bbf7cb2fb8f9c7a1705993`

The final background-check compile/link/conversion completed in 304.393 s.
The enabled and standard incremental builds completed in 8.285 s and
7.515 s. These are build durations, not game performance measurements.
Each variant has an immutable XBE, linked PE, map, actual converter dump,
response file, flags and source/library hashes. Inputs remained unchanged
within every final build. SDK/locally supplied Win32-symbol link warnings
and shader register-mapping warnings are retained in the logs.

Independent static inspections compare all four XBE sections with the PE,
including zero-filled tails; decode the retail entry and match the LLD map;
and check kernel thunks against both the PE and SDK ordinal definitions.
Those checks establish file integrity and linkage, not execution or fit in
a running console's memory. The converter's own section digests are zero;
the reports use independent SHA-256 hashes instead.

The optional compiler cache produced byte-identical representative objects
with and without the cache, ignoring only COFF timestamps, for both compiler
profiles. The two isolated build-routing regressions passed after the final
Makefile fixes. A focused extracted-production filesystem check passed 14
identity, error, bounds and cleanup cases. No broader gameplay test was run
for this build batch.

Private delivery: `TimeSplitters-Xbox-builds-2026-10-30.zip`, containing the
three labeled Xbox builds, one shared set of 27 `native-bg` packs, matching
link evidence, checksums and reproduction details. Keep binaries, assets,
SDK material and private reports out of Git. Linux/MSYS2 commands:
[README.md](README.md). Runtime deployment:
[NATIVE-BACKGROUND-RUNTIME.md](NATIVE-BACKGROUND-RUNTIME.md).

## Earlier runtime integration — 2026-10-30 Eastern

Batch baseline: `111ad7aff01bad404cb07a1cf2bfcb3e233e3b69`.
The optional source-derived background path is implemented and connected to
the existing Xbox native renderer. `TS_BG_NATIVE=0` remains the default
until full target rendering and performance validation. Enable it with
`make TS_BG_NATIVE=1`; `TS_BG_VERIFY=1` additionally checks current VU
geometry before accepting each source-bound strip. Details and deployment:
[NATIVE-BACKGROUND-RUNTIME.md](NATIVE-BACKGROUND-RUNTIME.md).

The level loader owns one CPU pack and a sorted source lookup index under
an explicit combined 4 MiB dynamic budget. It validates exact pristine raw
bytes before texture-handle fixups, verifies source descriptors and geometry,
and activates only the same level/allocation/length. Lifecycle hooks revoke
ownership across reloads and known source writes. A missed/contended source
event latches full revocation; it cannot later reactivate an old prepared
identity at a reused address. The loader pins bytes through each synchronous
writer callback and uses fallible allocation.

Xbox-only build copies observe validated segmented VIF UNPACK sources and
invalidate stale provenance on unsupported writes, every VU execution,
direct EE VU writes and reset. Exact original tag/position/vector addresses,
current full tags and every source row identify supported Plain/EnvMap
strips. Colors always come from current VU lanes. The two native vertex
write sites use the adapter with untouched original fallback. Material
application, constants, GIF order, clipping, flat shading and existing GPU
ring fences remain the original path. No source pack is directly GPU-owned.

### Runtime verification completed

- Full source corpus: all 27 levels prepared/activated; 17,999 batches,
  128,970 strips and 611,121 vertices accepted. Both flat and joined writes
  matched the unchanged production scalar decoder after every live color
  channel was changed. Zero source/load rejects, fallback strips or geometry
  differences. Inputs here are independently reconstructed canonical VU
  rows with original guest addresses, not a gameplay capture.
- All levels fit the dynamic budget. Largest: level 17, 3,662,472 pack bytes
  plus 484,512 index bytes = 4,146,984 bytes. Tomb 26 uses 553,696 bytes.
  Fixed runtime state and host harness allocations are outside those figures.
- Combined initial suite: 96 tests passed normally (16.598 s) and under
  ASan/UBSan (30.638 s). Review then found and fixed contended source-event
  revocation. The final eight binding test groups passed in both verification
  modes normally (4.47 s) and under ASan/UBSan (7.71 s), including the added
  reentrant lifetime regression. Current discovery contains 97 tests.
  After the gameplay filename correction, the final hook test passed normally
  (0.737 s), under ASan/UBSan (1.401 s), and against the real runtime headers.
  Leak detection was disabled; no LeakSanitizer coverage is claimed.
- Real NXDK compile gate: 16 translation-unit/configuration checks passed
  with Clang 18.1.3, `i386-pc-win32`, Pentium III, real NXDK headers and the
  production prelude. Every object is x86 COFF `0x014c`. This covers the
  three patched sources, five adapters, Xbox main and capture adapter with
  feature/verification/capture on, plus normal and disabled runtime branches.
  Only the changed runtime unit was recompiled after the lifecycle fix,
  followed by the two affected game-hook configurations after the filename
  fix. The complete reports retain the other successful records.

### Actual segmented-DMA gameplay proof

A private cloud Linux build ran four-player arcade Tomb (level 26) using
the original input script, native VU CPU rendering, the Xbox segmented DMA
walker and `TS_BG_VERIFY=1`. Private build copies enabled the relevant DMA
guards without globally defining the Xbox platform. Source preparation and
activation hooks ran on the original game flow; no synthetic binding was
injected. Viewed gameplay frames show four active viewports and HUDs.

The first run exposed a strict filename mismatch: the original game retains
`host0:bg/levelN/levelN.raw` in its preload table. The shorter archive name
never prepared a source, so that run provided no binding comparison coverage.
The hook now requires the original prefixed name; regression cases reject
bare, `host1:` and `cdrom0:` names.

The corrected run reached its configured 240-second watchdog (240.389 s
elapsed). It prepared and activated level 26 once, retained the expected
491,392-byte pack plus 62,304-byte index, and reported:

- 7,146,305 source-bound strip comparisons across repeated gameplay draws.
- 33,756,260 verified vertex comparisons, with zero geometry differences.
- Zero source or load rejections; the source was still active at shutdown.
- 58,284,602 observed UNPACKs and 7,463 segmented DMA chains, with zero
  batch overflows.

The game logged its normal watchdog stop and final counters. The surrounding
`xvfb-run` process returned 5 because its temporary-directory cleanup failed
after the game exited; this wrapper cleanup limitation is retained in the
private evidence. The host CPU renderer declines raw GPU submissions, so
`matchedStrips` and `matchedVertices` are zero in this run. These results
establish live source binding and geometry verification; writer output is
covered separately by the full-source decoder comparisons above.

The final audited runtime SHA-256 is
`c15559bd2ef261a6374317f110edfd376e161e66668dab62d3e255fa3e269578`.
Private evidence includes `bg-binding-corpus-audit.json` and the target
compile reports, plus the failed initial and corrected gameplay runs in
`TimeSplitters-Xbox-background-runtime-2026-10-30.zip`. That integration
batch did not link an XBE; the later build results are recorded above.
NV2A rendering and Xbox FPS remain unverified for the new path.

## Source conversion and first capture — 2026-10-30 Eastern

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

## Next concrete work

1. Verify actual current `main` and retain all newer work and scope.
2. Reuse the verified private source packs, gameplay capture and audit package.
   The source inputs and first real recording no longer need to be requested.
3. Complete and connect the full planned Xbox optimization code, pushing
   source batches to `main` without interim builds or download packages.
   Build only after the planned implementation is written and integrated.
   Console/XEMU availability is not a prerequisite for this coding work.
4. Resolve unmatched/unsupported inputs through provenance, without treating
   matching hashes or the degenerate triangle as permission to skip work.
5. Preserve the original fallback for each unsupported case. When target
   access returns, check rendering, level transitions, memory headroom and
   verification-disabled performance, using the switches for comparisons.

The source converter and runtime adapter are implemented. The `optimized`
target includes them with converted textures. Camera, lighting, materials,
animation, collision, clipping, flat shading and ordering remain the existing path's
responsibility. Keep private captures/reports/assets out of public commits.
