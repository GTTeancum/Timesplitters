# Original Xbox build

The same runtime and recompiled game as the PC build, built with nxdk, with
the screen drawn by the NV2A.

## Build

Needs nxdk at `C:\nxdk` and MSYS2 (CLANG64). The game's own files must be in
`project/game-data` and the PS2 disc image in `project/disc/TimeSplitters.iso`
(neither is in git).

    bash src/xbox/build.sh
    bash src/xbox/build.sh AUTOPLAY=src/xbox/test/arcade-match.pad   # test disc

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

## State (2026-10-02)

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
- `tools/patch_generated.py`: patched copies of game functions (a busy wait
  in `soundLoad`).
- `tools/xtpbuild.py`: the texture pack builder (pack format at the top of
  the script): PC-port texture keys, mip chains that keep alpha-tested
  coverage, and a DXT1/DXT5 encoder in numpy.
