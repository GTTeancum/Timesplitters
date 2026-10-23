# TimeSplitters on Linux

The PC release builds and runs on Linux (tested on Ubuntu under WSL2 with
WSLg). It is the same program as the Windows release: the first start unpacks
your disc dump into loose files, then the game runs from its own folder.

## The prebuilt program

The release's `timesplitters` binary was built on Ubuntu 26.04 and links the
system's shared libraries: glibc 2.43 or newer, FFmpeg 8 (`libavcodec.so.62`,
`libavformat.so.62`, `libavutil.so.60`, `libswscale.so.9`,
`libswresample.so.6`), OpenGL (`libOpenGL.so.0`, `libGLX.so.0`,
`libGLU.so.1`) and X11. On Ubuntu 26.04 these come with
`sudo apt install libavcodec62 libavformat62 libswscale9 libglu1-mesa`
(most desktops already have them). On an older distribution, or one with a
different FFmpeg, build the program from source as described under Building:
it takes a few minutes.

## Playing

Put these together in one folder:

- `timesplitters` (the built program, see below)
- `timesplitters.ini` (from the repository root; the Audio / Video Options
  menu changes it)
- your own dump of the TimeSplitters (USA) PlayStation 2 disc: a `.cue` with
  its `.bin`, a `.bin` alone, or an `.iso`

Then start it from that folder:

```bash
./timesplitters
```

The first start prints `[TS:setup]` lines with a percentage while it unpacks
the 49 files of the disc (about 600 MB) into `game-data` next to the program.
That takes under a minute from a local disk; the dump is only read and is not
needed afterwards. Later starts go straight to the title screen. If something
is wrong (no dump, not enough space) the reason is printed and, when `zenity`
is installed and a desktop is running, also shown in a dialog.

Memory cards are the `mc0` and `mc1` folders inside `game-data` (as on
Windows); saving in the game writes there and the save is found again after
a restart. Upper or lower case in `game-data` file names does not matter
on Linux either: the disc is laid out with upper-case names and the host
file is found by a case-insensitive lookup.

Keyboard: WASD moves, IJKL looks, arrows are the D-pad, Enter is Start,
Tab is Select, Z/X/C/V are Square/Cross/Circle/Triangle (Space is also
Cross, Esc also Circle), Q/E are L1/R1, Left/Right Shift are L2/R2.
Controllers are read through raylib's Linux joystick support
(`/dev/input`); an Xbox-style pad maps the same way as on Windows.

### Graphics driver under WSL2

WSLg's Mesa may pick the software renderer (`llvmpipe`) by default. The
game runs that way, but at roughly half the speed. To use the Windows GPU
through WSLg's D3D12 driver, start the game with:

```bash
GALLIUM_DRIVER=d3d12 ./timesplitters
```

On a native Linux desktop with a working OpenGL 3.3 driver nothing needs
to be set.

## Building

Packages (Debian/Ubuntu names):

```bash
sudo apt install build-essential clang lld cmake ninja-build pkg-config git \
    libx11-dev libxrandr-dev libxinerama-dev libxcursor-dev libxi-dev \
    libxext-dev libgl1-mesa-dev libglu1-mesa-dev libasound2-dev libpulse-dev \
    libwayland-dev libxkbcommon-dev wayland-protocols \
    libavcodec-dev libavformat-dev libavutil-dev libswscale-dev libswresample-dev
```

FFmpeg (the `libav*` packages) decodes the game's movies; configure with
`-DPS2X_ENABLE_FFMPEG=OFF` to build without it. raylib 5.5 is fetched by CMake
on the first configure (network needed once).

Configure and build out of source; under WSL2 put the build directory on the
Linux filesystem (not `/mnt/...`), it is several times faster:

```bash
cmake -S /path/to/Timesplitters/source/PS2Recomp -B ~/ts-build -G Ninja \
    -DCMAKE_C_COMPILER=clang -DCMAKE_CXX_COMPILER=clang++ \
    -DCMAKE_BUILD_TYPE=Release -DCMAKE_EXE_LINKER_FLAGS=-fuse-ld=lld \
    -DTS_GAME_SOURCE_DIR=/path/to/Timesplitters/project/game \
    -DPS2X_BUILD_RECOMP=OFF -DPS2X_BUILD_ANALYZER=OFF -DPS2X_BUILD_TEST=OFF \
    -DPS2X_BUILD_STUDIO=OFF -DPS2X_ENABLE_DEBUG_UI=OFF -DPS2X_ENABLE_SCCACHE=OFF
ninja -C ~/ts-build timesplitters
```

The program is `~/ts-build/timesplitters/timesplitters`. Copy it, with
`timesplitters.ini`, into the folder holding your disc dump (see Playing).
Clang 21 and GCC's libstdc++ are what was tested; GCC should work too. The
build takes a few minutes on 16 cores. Nothing is copied into the checkout on
Linux (`TS_STAGE_TO_ROOT` defaults to off outside Windows).

Prepare Xbox Files (the launcher `Prepare Xbox Files.exe`) is Windows-only;
the same work is available on Linux without dialogs as
`./timesplitters --prepare-xbox --dump FILE --out FOLDER --quiet`.

## Test switches (same as on Windows)

- `TS_PAD_SCRIPT=file.pad` plays a scripted controller run
  (`src/xbox/test/arcade-4p.pad` is a four-player Tomb match).
- `TS_CAPTURE_WINDOW=out.png TS_CAPTURE_WINDOW_FRAME=n [TS_CAPTURE_WINDOW_EVERY=m]`
  saves the window at frame n (and every m frames after).
- `TS_PROFILE_DISPATCH=1` prints a `[TS:render-rate]` line each second.
- `TS_MC_ROOT=folder` uses another memory-card folder.

## What was measured (WSL2, Ubuntu, 16 cores, Radeon 780M through WSLg)

The first start unpacked the disc in about 20 seconds; the title screen,
the sign-on screens and a scripted four-player Tomb match
(`src/xbox/test/arcade-4p.pad`, 5 minutes) rendered correctly in all four
viewports; sound opened through PulseAudio; a sign-on saved to
`game-data/mc0` was listed again after a restart; keyboard input drove the
menus. With `GALLIUM_DRIVER=d3d12` the window presented at 59-60 frames per
second throughout, and the game produced 50-60 new frames per second in the
match (dips to about 27 while the level loads). On the software renderer
(`llvmpipe`) the same match ran at 13-14 game frames per second. No
optimisation was done for Linux; the Windows build on the same machine is
the reference.

Keyboard input under WSL2 reaches the game only while its window is the
foreground window on the Windows desktop, as for any WSLg program.
