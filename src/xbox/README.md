# Original Xbox build

The same runtime and recompiled game as the PC build, built with nxdk, with
the screen drawn by the NV2A. This build path and its optional optimizations
are Xbox-only. Xbox-specific copies of shared sources are generated under
`build/xbox/`; the original sources and normal PC build stay unchanged.

**Development is currently source-only.** Finish writing and connecting the
full planned Xbox optimization implementation before another compilation,
build or download package. The commands below describe the later build
stage. The newest packet, DMA, geometry-group and native-call source paths
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

The following independent Xbox optimization switches default to `1`. Set
one to `0` to compile its previous path for a comparison; the Makefile
rebuilds its consumers when the switch changes.

| Switch | Work reused or reduced |
| --- | --- |
| `TS_BG_FAST` | Background source lookups, validated provenance ranges, strip selection and vertex copies; applies when native backgrounds are enabled. |
| `TS_BG_BATCH` | One validated pack access for a complete accepted geometry group; applies when native backgrounds are enabled. |
| `TS_VIF_FAST` | Repeated UNPACK size calculations and contiguous 32-bit vector copy loops. |
| `TS_GIF_NATIVE` | Reuse of exact PACKED GIF tag/operation plans, with all register and vertex payloads read live. |
| `TS_DMA_CHAIN_CACHE` | Reuse of validated leaf DMA subchains while retaining the original payload appends, return-stack effects and batch-flush boundaries. |
| `TS_NATIVE_CALL_SLOTS` | Known guest-call targets in the four native game/math files use the current function-table slot directly. |
| `TS_NV2A_MATERIAL_CACHE` | Derived NV2A material registers for exactly matching material inputs. |
| `TS_NV2A_PACK_IDENTITY_CACHE` | Texture-pack lookup identities across texture cache eviction, invalidated by writes to the source pages. |

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

## Test in xemu

    xemu.exe -dvd_path build\xbox\TimeSplitters.iso -gdb tcp::1235

A status block (frames, free memory, script progress) is kept in memory and
can be read with gdb from the addresses in `build/xbox/main.map`
(`g_status`, `g_recent`); the full log is written to
`E:\TimeSplitters\timesplitters.log`. A fatal error (out of memory, a failed
game assertion) is logged with its cause.

## Current source-only batch (2026-10-30)

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
