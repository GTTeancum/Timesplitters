# Original Xbox build

The same runtime and recompiled game as the PC build, built with nxdk, with
the screen drawn by the NV2A. This build path and its optional optimizations
are Xbox-only. Xbox-specific copies of shared sources are generated under
`build/xbox/`; the original sources and normal PC build stay unchanged.

**Development is currently source-only.** Finish writing and connecting the
full planned Xbox optimization implementation before another compilation,
build or download package. The commands below describe the later build
stage. The newest source-array, draw-record, packet, DMA, geometry-group and native-call paths
have been reviewed but have not been compiled or executed.

## Build

Use a built nxdk SDK, including its C++/SDL2 libraries and Cg shader tools.
The executable-only target does not need the original game assets at build
time. A complete playable disc also needs the game's own files in
`project/game-data` and the PS2 disc image at `project/disc/TimeSplitters.iso`
(neither is in git).

The preferred development target is now:

```sh
bash src/xbox/build.sh optimized
```

It selects native background geometry and the compiler header cache, builds
the Xbox executable, and requires both converted asset outputs:
`build/xbox/iso/native-bg/` and `build/xbox/iso/textures.xtp`. Missing source
archives or a skipped texture conversion fail this target. Keep both outputs
beside `default.xbe`, together with the original `game-data/` and
`ps2disc.iso`. This target does not package the original data or make a disc.

### Windows / MSYS2

The default SDK location is `C:\nxdk`. The script enters MSYS2's CLANG64
environment when needed:

    bash src/xbox/build.sh
    bash src/xbox/build.sh optimized                       # geometry + textures + XBE
    bash src/xbox/build.sh xbe                             # executable only
    bash src/xbox/build.sh AUTOPLAY=src/xbox/test/arcade-match.pad   # test disc

### Linux cloud build

Set `NXDK_DIR` to the built SDK. If LLVM is installed in a versioned
directory, select that directory with `NXDK_LLVM_BIN`:

```sh
NXDK_DIR=/path/to/nxdk NXDK_LLVM_BIN=/usr/lib/llvm-18/bin \
  bash src/xbox/build.sh optimized -j6
```

This creates the Xbox executable at `build/xbox/iso/default.xbe` and its
converted geometry and texture packs. Use `xbe -j6 TS_GEN_PCH=1` instead
when only an executable is needed: that target compiles the shaders and
game, links the Xbox program and converts it to XBE without staging assets.
Omit the target to build the complete disc once the private assets are
available. These Linux commands produce the Xbox version.

`TS_GEN_PCH=1` reuses the compiler's work on common headers for generated
game functions. It affects build time only. Files with a different include
order keep their original compilation path, and the two optimization
settings use separate caches. It defaults to `1` for `optimized` and `0`
otherwise. Header or flag changes rebuild the cache.
`NXDK_LIB_DIR` can point to a separate set of built SDK libraries when the
SDK's headers and tools are being reused read-only.

`optimized` selects `TS_BG_NATIVE=1`; ordinary `xbe` and disc builds retain
`TS_BG_NATIVE=0` unless explicitly enabled. Add `TS_BG_VERIFY=1` when
preparing a build that compares the converted geometry with live vertices.
It adds diagnostic work and should be off for eventual speed comparisons.

The following independent Xbox optimization switches default to `0`
(measured 2026-11-01 in xemu at four players: none of them, alone or
together, beat the all-off build). Set one to `1` to compile it; the
Makefile rebuilds its consumers when the switch changes.

| Switch | Work reused or reduced |
| --- | --- |
| `TS_BG_FAST` | Background source lookups, validated provenance ranges, strip selection and vertex copies; applies when native backgrounds are enabled. |
| `TS_BG_BATCH` | One validated pack access for a complete accepted geometry group; applies when native backgrounds are enabled. |
| `TS_VIF_FAST` | Repeated UNPACK size calculations and contiguous 32-bit vector copy loops. |
| `TS_GIF_NATIVE` | Reuse of exact PACKED GIF tag/operation plans, with all register and vertex payloads read live. |
| `TS_GIF_DIRECT` | GIF packets (sprites, triangles, strips, fans, fills, IMAGE uploads and all register writes between them, including packets split anywhere across transfers) decoded straight into per-state runs for the renderer instead of per-register GS calls and per-primitive submits; registers without a decode pass through in order. Only a running GS debug history keeps the original route. Host-tested equal to the original route (test/test_gif_direct.py). Not yet run. |
| `TS_DMA_CHAIN_CACHE` | Reuse of validated leaf DMA subchains while retaining the original payload appends, return-stack effects and batch-flush boundaries. |
| `TS_NATIVE_CALL_SLOTS` | Known guest-call targets in the four native game/math files use the current function-table slot directly. |
| `TS_DRAW_RECORDS` | Observed REF groups reuse exact descriptors in the DMA walk; observed draw chains execute fully admitted VIF prefixes at their original stream positions. |
| `TS_VIF_SOURCE` | An admitted prefix lends source arrays to its immediate fast native Plain/EnvMap draw, after pack geometry misses. Requires an admitted draw record; all VU writes and native admission remain. |
| `TS_NV2A_MATERIAL_CACHE` | Derived NV2A material registers for exactly matching material inputs. |
| `TS_NV2A_PACK_IDENTITY_CACHE` | Texture-pack lookup identities across texture cache eviction, invalidated by writes to the source pages. |
| `TS_TEXTURE_SOURCE_KEYS` | A texture-cache miss finds its pack entry by source key (indices plus palette, or colour plus TEXA, every GS format; hashed at upload or read back) instead of a decode and RGBA hash; unseen palettes draw an index texture with a GPU palette; an entry still loading draws its preload; a repeated full CLUT load is one compare. Builds the pack as version 3. `TS_TEXTURE_DUMP=1` (development) dumps textures the pack lacks. Not yet run. |

These paths are designed to preserve live colors, transforms, texture
residency and draw ordering. They do not replace the complete PS2 DMA/VIF
pipeline. `TS_PERF_BACKEND=1` enables the existing measurement wrapper and
keeps native XGKICK packets on its original callback route; it defaults to
`0`. Detailed DMA counters and zero-TTE suppression likewise retain the
original walker. See
[NATIVE-BACKGROUND-RUNTIME.md](NATIVE-BACKGROUND-RUNTIME.md) for deployment
and the exact boundaries. Current development is source-only until the full
planned optimization implementation is written and connected. Do not make
interim builds or download packages; the build commands here are retained
for that later stage. Target execution and FPS remain uncompleted checks.

### Default Xbox path (measured 2026-11-01)

xemu, four players, scripted stretch, alternating saved discs, busy time
per frame (the game caps at 30 FPS, so busy time is the measure):

| Build | FPS without the cap |
| --- | --- |
| All switches off | about 23 |
| `TS_NATIVE_MODELS` alone | about 27.5 |
| + `TS_NATIVE_REPLAY`, `TS_NATIVE_LOGIC`, `TS_SOUND_NATIVE` (default) | about 31-34 |

On by default: `TS_NATIVE_MODELS`, `TS_NATIVE_REPLAY`, `TS_NATIVE_LOGIC`,
`TS_SOUND_NATIVE` (sound 3.1 -> 0.85 ms a frame). Off, because they showed
no gain against that set: `TS_TEXTURE_SOURCE_KEYS`, `TS_GIF_DIRECT`,
`TS_NATIVE_2D` (and its 0.45 MB), `TS_SOUND_HW`; `TS_MODEL_FILES` only
shortens a level's first seconds. The `optimized` target (native
backgrounds) turns the model path off.

### Native models (`TS_NATIVE_MODELS`, `TS_MODEL_FILES`)

`TS_NATIVE_MODELS=1` (default `0`; needs `TS_BG_NATIVE`, `TS_DRAW_RECORDS`,
`TS_VIF_SOURCE` and `TS_DMA_CHAIN_CACHE` at `0`) draws every model the game
sends through partGfx (level rooms, props, weapons, characters) from Xbox
vertex records instead of the PS2 DMA/VIF/VU1 path:

- `xbox_model_cache.cpp`: the first walk of a model's precalculated VIF
  chain is decoded as usual and its native draws are recorded in Xbox form;
  later walks skip the chain and replay the records at its stream position
  with the live matrices and lights. Records are packed per vertex program
  (28 bytes plain or env-mapped, 40 lit, 44 skinned) in 128 KB blocks of
  one format in the renderer's own memory (2 MB), drawn where they lie.
  Chains are re-hashed against guest memory every 32 replays and captured
  again when they change. Everything else the chain does is recorded as
  replay steps in stream order: MSCALs of the constant and kick entries,
  MSCALs the program declines or the interpreter runs, MSCNT, and draws with
  CPU-path strips run again at the replay (the VU1 rows the chain wrote that
  they read restored where the chain would write them, then the MSCAL as the
  decoder runs it); UNPACKs into the transform constants' rows; DIRECT and
  DIRECTHL packets (and their IMAGE data); MPG (checked unchanged at the
  replay); BASE, OFFSET, ITOP and MSKPATH3; the rows the chain leaves that
  none of its programs read; the registers it leaves (MARK and the I bit
  included). A chain ending inside the CALL (END tag, or IRQ with TIE) ends
  the replayed walk in the same state. A replay the steps cannot reproduce
  (UNPACK registers the chain took from before it now different, its MPG
  code no longer in VU1 memory, a batch that would now wrap past the end of
  VU1 memory or land on the constants' rows, the renderer declining the
  first run, no native program, the VIF1 worker, a model evicted meanwhile)
  decodes the chain from guest memory instead (`inline=`). A full arena
  evicts the models not replayed for 20,000 walks, least recent first, and
  moves the rest down (`evict/compact=`). Still on the original path:
  chains with scratchpad data, UNPACKs with write-protected mask lanes,
  overlapping MPGs, walks that stop at a tag they cannot read, and chains
  over 16,384 tags or 1,024 TOPS changes.
- `xbox_part_prologue.cpp`: partGfx writes one token in place of each run
  of REF tags it builds: its three model prologues (header, matrix and
  light REFs, up to 21) and its three REF loops (one token per loop, closed
  at the loop's end or before a mid-loop yield, after which the translated
  resume writes its REFs as usual). The token's record lists the (address,
  QWC) pairs; the DMA walker appends the same payloads in order. Records
  live in a 256 KB ring; a token whose record was overwritten expands to
  nothing and is counted (`[TS:prologue]` lost=).
- `TS_MODEL_FILES=1` (default `0`) saves a level's captured models to
  `E:\TimeSplitters\models\<chain>-<hash>.xmc` once its captures settle,
  and loads them when the level starts again. Loaded models are re-hashed
  before their first replay.
- Shipping model files on the disc: `tools/make_level_pads.py OUTDIR N`
  writes one four-player arcade script per level (the Select Level cursor
  moved 0..N-1 times), and `tools/harvest_models.sh OUTDIR/*.pad` plays each
  in xemu, then copies `E:\TimeSplitters\models` out of xemu's hard disk
  image (`tools/xbox_hdd.py`, read-only qcow2/FATX reader) into
  `build/model-files`. A disc built with `TS_MODEL_FILES=1` carries those as
  `D:\models`, read when the hard disk has no file for the level. Story
  levels (one player) need their own scripts; until then they save to the
  hard disk on first play.

`TS_NATIVE_REPLAY=1` (default `0`; needs `TS_NATIVE_MODELS=1`) makes a
stored model's replay do its per-run work once:

- prologue tokens run natively: a token whose record is a model prologue
  (only the static headers at 0x358F40-0x358FF0, each UNPACK header followed
  by its four data qwords in main RAM) becomes one 16-byte marker piece in
  the walk, and the decoder, reaching it at the same stream position, runs
  the prologue itself (`xboxPrologueDecode`): STCYCL and the UNPACKs as
  register writes and four VU1 rows copied from the data (with the decoder's
  watched-row note), the MSCALs with the decoder's register steps and run of
  the constant programs. VU1 memory, the VIF1 registers (CYCLE, CODE, NUM,
  TOP, ITOP, TOPS, DBF) and the programs' effects are what decoding the
  payloads leaves. Headers read at the decode no longer holding their static
  commands, MODE other than 0 or an open capture decode the payloads from
  guest memory instead; a record overwritten before its decode sends nothing
  (`[TS:prologue] native/run/inline/lost=`). Host test:
  `test/test_prologue_native.py` (against a reference of the decoder's
  commands, random registers, rows wrapping at 1024).
- replayed draws apply their state block decoded once per stored block (no
  lookup by its bytes; serials with the top bit set so the GS's repeat test
  never confuses one with the native program's blocks);
- each replayed run names its renderer segment (`xboxNv2aUseSegment`, the
  model cache's run index, 2,048 direct-mapped, about 470 KB once used): the
  run's texture and material key are taken again while every GS field
  `texture()` and `buildMaterialKey` read (the CLUT hash included) is the
  same, the texture is still cached (any retire invalidates), its pages
  unchanged and its pack state and flags the same, with `texture()`'s screen
  write-back and use counts; the window clip comes from `clipFor` afresh.
  Its DRAW_ARRAYS commands are built once per index and count and copied;
- the constant rows' comparison and the MPG check of replays (skipped while
  the VU1 code generation is unchanged since the last match) no longer call
  `memcmp`.

Written, syntax-checked and host-tested (prologues); not yet built or run.

Copies patched by `tools/patch_native_models.py`: `ps2_memory.cpp`
(walker), `ps2_vif1_interpreter.cpp` (decoder), `vu1_native_ts.cpp` (native
VU1 program) and `ts_native_game2.cpp` (partGfx). The status line
`[TS:models]` counts captures, replays, failures and file loads;
`[TS:prologue]` counts tokens.

Measured 2026-11-01, xemu, four players, scripted stretch, alternating
discs: 38 ms a frame with the model cache against 54 ms without. The
prologue tokens and model files are compiled but not yet measured.

### Native FX (`TS_NATIVE_FX`)

`TS_NATIVE_FX=1` (default `0`; not with `TS_NATIVE_2D`, and needs
`TS_BG_NATIVE`, `TS_DRAW_RECORDS`, `TS_VIF_SOURCE`, `TS_DMA_CHAIN_CACHE` and
`TS_VIF_FAST` at `0`) takes the game's 0x3FE0 kicks - HUD, text glyphs,
fills, particles, bullets, weather, decals, glows and the depth/dither state
blocks between them, about 640 a frame at four players - off the PS2 route
(`xbox_native_fx.h`, `tools/patch_native_fx.py`):

- the VIF decoder recognises an unmasked V4-32 UNPACK to TOPS+0 followed,
  after only NOP/FLUSH, by MSCAL 0x3FE0, and takes the kick's GIF bytes
  where they lie in the stream (no copy into VU1 memory, no program call, no
  GIF arbiter); the VIF1 registers and the VU1 state are stepped as the
  MSCAL and the native kick leave them;
- consecutive kicks wait until the next command that can reach the GS or a
  VU1 program (or the end of the decoder call) and then go to the GS in one
  call: one direct GIF decoder (`xbox_gif_direct.h`) over all of them, with
  stores that only set a value deferred, so a string of glyphs or a burst of
  particles is one renderer run (one texture and material lookup and one
  vertex reservation) instead of one per primitive. Sprites take the
  renderer's per-corner sprite path.

Left on the original route: kicks with an IMAGE tag or a SIGNAL, FINISH
or LABEL write (dlFinish, dlLabel: the EE observes them), kicks whose packet
reaches past the rows they unpack or whose rows wrap or touch the native
program's constant rows, the I bit, STCYCL other than 1:1 or STMOD other
than 0, no native VU1 program, the VIF1 worker, GIF packets queued in the
arbiter, a running model capture; a running GS debug history takes the same
bytes the original way. Memory: 0.5 KB of spans, a 1.9 KB run buffer
when `TS_GIF_DIRECT` is off (with it on, its run buffer is borrowed), and
about 14 KB of code (mostly the direct GIF decoder in the GS front end).
Status line: `[TS:fx]`. Not yet run.

### Disc and texture output

Output: `build/xbox/TimeSplitters.iso` (about 1.3 GB: the XBE, the game files
and the PS2 disc image, which the game reads sector by sector). With
`AUTOPLAY`, the disc carries a controller script that plays itself from a
blank memory card (the PC build's `TS_PAD_SCRIPT` format); `arcade-match.pad`
starts an arcade match.

The disc also carries `textures.xtp` (`build/xbox/iso/textures.xtp`, about
11 MB, built in about 12 s): MISC.PAK's textures at full size with mip
chains, DXT-compressed offline by `tools/xtpbuild.py` and keyed like the PC
port's texture replacements. It needs a Python with numpy and Pillow (MSYS2's
own python has neither; the build looks for a python.org install, or set
`XTP_PYTHON`); without one, or without MISC.PAK, the disc is built without
it. `build.sh textures` builds only the pack;
`XTP_FLAGS="--replacements textures/replacements --dump textures/dump"`
(absolute paths) adds HD replacements, `--preview DIR` writes .dds files.

With `TS_TEXTURE_SOURCE_KEYS=1` the pack is format version 3
(`xtpbuild.py --source-keys --preload-bytes 128 --palette-textures`, about
32 MB): every entry also under the key of what GS memory holds for it
(`xbox_texture_source.h`: indices and palette, or colour and TEXA, in every
GS texture format), so the renderer finds it without decoding the texture;
every 8-bit indexed texture also as an NV2A index texture, drawn with a GPU
palette made from whatever palette the game loads (palette swaps the pack
has no copy of); and every entry's level of at most 128 bytes, read at
start-up and drawn while the entry is on its way from the disc. It costs
the Xbox about 280 KB of GPU memory for the preloads, 32 KB for palettes
and about 270 KB of index and tables. 2,244 of MISC.PAK's 2,254 entries
are 8-bit indexed; none shares its indices with another palette.
Textures that are in no game file the builder reads (4-bit or 16-bit
palettes, other containers) can be added from the Xbox's own dumps: build
the XBE with `TS_TEXTURE_DUMP=1` (development: each such texture is
written once to `E:\TimeSplitters\texdump`), copy the folder off, then
build with `XTP_FLAGS="--xbox-dump /abs/path/to/texdump"`. Without index
textures, `XTP_FLAGS="--variant-keys"` makes the Xbox log palettes it
lacks (`[TS:texvariant]`, at most 32) and `--variants /abs/path/to/the.log`
adds them.

## Test in xemu

    xemu.exe -dvd_path build\xbox\TimeSplitters.iso -gdb tcp::1235

A status block (frames, free memory, script progress) is kept in memory and
can be read with gdb from the addresses in `build/xbox/main.map`
(`g_status`, `g_recent`); the full log is written to
`E:\TimeSplitters\timesplitters.log`. A fatal error (out of memory, a failed
game assertion) is logged with its cause.

## Current source-only batch (2026-10-30)

The batch based on `48361f6` connects admitted source arrays to the native
vertex writer, including direct flat-group output beyond pack-covered
backgrounds. A bounded view belongs to one decoder invocation and one
immediately following fast native call. Exact command, TOP, RAM and VU
identity must match; all required array rows must retain their latest
supported upload. The arbitrary MSCAL callback, interpreter, capture and
ring-check paths keep the existing VU-based route. Original VU writes,
native visibility checks, material application and draw order remain.

The DMA walker can now reuse the same observed linear REF descriptor
before its first tag has effects. It appends the original raw pieces,
preserves counters and transfer registers, and reserves the entire fixed
batch bound before admission can reach a decoder callback. No second
descriptor cache or synthetic guest commands are introduced.

Source adapters and independent review cover the connected paths. Native
probe source covers array equivalence, scope expiry, overwrite rejection,
mixed ring accounting and DMA flush boundaries; execution is deferred.
These changes do not remove geometry UNPACK writes or finish the planned
graphics-command replacement. Direct GPU fetch and target performance
remain unverified. The no-build instruction remains in force.

### Previous REF coverage and flat-group batch

The batch based on `52f38db` adds all three per-frame REF observations,
payload-only draw-record entry and the compact color/vertex upload formats
used by the actual game templates. Shared command-template addresses keep
bounded candidate origins, and full live-reader proof selects the matching
stream before effects. Flat background groups can write their expanded
triangles directly into the existing fenced transform ring, removing an
intermediate vertex copy while retaining current relighting colors.

Python source-adapter checks exercise real source composition, exact
restoration, semantic guards and atomic output without compiling the game.
Native regression probes are authored but remain uncompiled and unexecuted.
The no-build instruction remains in force. Complete graphics-command
replacement and direct GPU fetch remain open.

### Previous ordered draw-record batch

The batch based on `da74fb4` connects game-side draw-chain observations to
an ordered VIF prefix executor. It leaves original display-list bytes and
DMA pieces intact, proves source addresses against a copied reader, and
admits a complete supported prefix before changing VIF or VU state. The
original MSCAL branch still performs the actual native draw and its state
transitions. Cache contention, changed metadata, unsupported commands and
split input spans use the existing decoder.

That initial native code remains uncompiled; the current source batch above
extends its transport and format coverage.

### Previous source-only packet and geometry batch

The batch based on `7ebd583` connects complete-group background emission,
native PACKED GIF execution, bounded exact-tag DMA leaf reuse, and resolved
native guest calls. Each path has an independent disable switch, startup
configuration logging, and unchanged shared sources. Packet and DMA caches
hold bounded metadata; they do not hold copies of mutable payloads.

Source review covered callback ordering, fallbacks before output, live
function overrides, geometry ring boundaries and source-copy composition.
The routing test source has been updated for later use. No compiler, make
invocation, test executable, emulator, XBE, ISO or package was run/created
for this batch. Full graphics-command replacement remains unfinished.

## Previous build verification (2026-10-30, before source-only instruction)

The optimization batch based on `b31f409` connects the faster geometry,
VIF, material and texture identity paths and adds the `optimized` target.
Both the optimized and comparison Xbox executables compiled, linked and
converted successfully with the real target tools. The optimized XBE is
11,583,488 bytes; the comparison with all four new switches disabled is
11,571,200 bytes. Both include native background support. The optimized
target also rebuilt all 27 geometry packs and a 2,254-texture pack.

Exact configurations and hashes are recorded in
[NATIVE-GEOMETRY-CHECKPOINT.md](NATIVE-GEOMETRY-CHECKPOINT.md). No new whole-XBE
static inspection, console/XEMU execution, rendering result or FPS
improvement is claimed for this batch.

### Previous complete build batch (2026-10-30)

The complete Xbox executable has been compiled, linked and converted to XBE
in the Linux cloud with the real NXDK toolchain. Standard, native-background
and native-background verification configurations were built separately.
The standard XBE is 11,546,624 bytes; each enabled XBE is 11,571,200 bytes.
The source hashes, configurations and checks are recorded in
[NATIVE-GEOMETRY-CHECKPOINT.md](NATIVE-GEOMETRY-CHECKPOINT.md).

Those earlier executables were not run on an Xbox or in an emulator.
The execution measurements below belong to the earlier baseline.

## Earlier execution baseline (2026-10-02)

Boots to the arcade match in about 3.5 minutes of xemu time (64 MB), most of
it the scripted menu route; the match runs at about 11-18 frames a second in
xemu with the NV2A drawing the screen. About 2 MB of memory is free while
playing. Known gaps: no points/lines on the GPU, no fog, textures stored as DXT1 and
world textures of 256+ halved (lossy), VIF1 commands over 256 KB that straddle chain pieces.

## Xbox-specific pieces

- `gs_nv2a_backend.cpp`: the GS renderer on the NV2A (pbkit). Screen
  draws go to the GPU; off-screen draws, uploads and transfers stay on the
  software renderer, with copies between the two only when the game reads
  its screen back. 16-bit colour, 24-bit depth; textures cached as DXT1.
- `xbox_texture_pack.cpp`: reads `D:\textures.xtp` (prebuilt full-size
  textures with mip chains, made from the user's own game data at build
  time) into a 1.25 MB GPU pool, on a loader thread of its own so that no
  disc read stops the game; the renderer looks textures up by the PC
  port's texture key and draws them trilinear, and draws a texture from
  the runtime path until its entry has arrived. The runtime path's budget
  drops from 1 MB to 512 KB only while the pack is seen to carry the world
  textures. Without the file, textures come from the runtime path only, as
  before.
- `xbox_texture_source.h` (`TS_TEXTURE_SOURCE_KEYS`): the pack's second key,
  worked out from GS memory without a decode (indices and CLUT hash, or
  32-bit texels); `tools/xtpbuild.py` computes the same from MISC.PAK
  (`test/test_xtexture_source.py` checks the two agree).
- `shaders/`: the vertex program and the pixel-program variants (TFX/TCC,
  and TCC for one-bit-alpha textures whose 1.0 is GS 0x80), compiled by
  nxdk's Cg tools (`gs_*.inl` under `build/xbox/gen/shaders`).
- `pbkit/pbkit_ts.c`, `winapi/sync_ts.c`: fixed copies of nxdk sources
  (double buffering and a selectable depth format; condition-variable
  timeouts).
- `compat/xbox_prelude.h`: force-included; fills gaps in nxdk's libc++
  (`cout`, `gmtime_s`, ...).
- `compat/ps2_simd_scalar.h`: SSE2-4.1 intrinsics for the Pentium III.
- `xbox_chrono.cpp`: replaces nxdk's steady_clock, which overflows after 12.6 s.
- `xbox_string.cpp`, `xbox_stdio.cpp`, `xbox_shims.cpp`: memcpy/memset,
  fread, stdout/stderr, lround, and an operator new that stops with a
  message instead of returning null.
- `xbox_raylib.cpp`: the raylib calls the runtime makes (controllers,
  audio, and the framebuffer path used before the GPU takes over).
- `tools/nxdk-cxx-hosted`: nxdk's compiler wrapper without
  `-ffreestanding -fno-builtin`, so small copies are moves, not calls.
- `tools/compact_function_table.py`: a compact function table (saves 0.8 MB).
- `project/generated-vu-xbox/`: the VU1 microprogram recompiled with
  `vu1_recomp.py --lean` (drops timing bookkeeping nothing can observe;
  checked bit-exact against the interpreter with `timesplitters_vu_replay`
  and `vu1_diff.py` over the 4,000-input capture). FMAC arithmetic on SSE1
  (`PS2X_VU1_SSE1`), object built at -O2.
- `tools/patch_generated.py`, `tools/direct_calls.py`: every game function
  is compiled from a patched copy under `build/xbox/gen`. Constant calls
  (12,200 JAL sites) call through the function table directly with the
  target's slot resolved at build time (`PS2X_CALL_SLOT`,
  `ps2_direct_call_xbox.h`) instead of `dispatchGuestBranch`; one-off
  patches (a busy wait in `soundLoad`). The hottest game functions of a
  match frame (`GEN_FAST_NAMES` in the Makefile) are built at -O2 with the
  calls inlined; the rest call the same code out of line and stay as small
  as before. A stamp of the flags and the list rebuilds the generated code
  when they change.
- `tools/xtpbuild.py`: the texture pack builder (pack format at the top of
  the script): PC-port texture keys, mip chains that keep alpha-tested
  coverage, and a DXT1/DXT5 encoder in numpy.
