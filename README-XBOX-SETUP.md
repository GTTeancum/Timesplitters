# Playing TimeSplitters on an original Xbox

The Xbox version runs from a folder on the Xbox hard disk. Part of that
folder comes with the release (the Xbox program); the rest is made from your
own TimeSplitters (USA) PlayStation 2 disc dump by **Prepare Xbox Files**,
which comes with the PC version.

## What you need

- The PC release folder (see `README-PC-SETUP.md`) with:
  - `timesplitters.exe` and its `.dll` files
  - `Prepare Xbox Files.exe`
  - the `xbox` folder: `default.xbe`, `TitleMeta.xbx`, `TitleImage.xbx`,
    `SaveImage.xbx` (the Xbox program)
- Your own dump of the TimeSplitters (USA) disc: a `.bin` with its `.cue`
  (Redump style, `TRACK 01 MODE2/2352`), a `.bin` on its own, or an `.iso`.
- About 1.2 GB free on the PC while the folder is made, and the same on the
  Xbox hard disk.
- A modded Xbox you can copy files to (an FTP program, for example).

## Making the Xbox folder

1. Double-click `Prepare Xbox Files.exe`.
2. If a disc dump is in the same folder as the game, it is used. If not, a
   window asks you to choose it (you can also drop the `.cue`, `.bin` or
   `.iso` onto `Prepare Xbox Files.exe`).
3. A window asks where to make the folder. Choose a folder (the game's own
   folder is offered first): a `TSRecomp` folder is made inside it.
4. A progress window shows the four steps. It takes well under a minute
   (a few seconds on a fast PC with an SSD; reading the dump is most of it). Closing the window asks whether to
   stop; a stopped run leaves nothing behind.
5. A message says where the finished folder is and offers to open it.

Your disc dump is only read, never changed. The PC game is not affected and
does not need its own `game-data` folder for this.

While it works, everything goes into `TSRecomp.partial`, which is renamed to
`TSRecomp` only when it is complete. A `TSRecomp.partial` folder left after a
crash or power cut is unfinished: delete it, or just run Prepare Xbox Files
again (it starts over). If `TSRecomp` already exists, you are asked before it
is replaced.

## What is in the folder

    TSRecomp\
        default.xbe                    the Xbox program (from the xbox folder)
        TitleMeta.xbx, TitleImage.xbx, SaveImage.xbx
                                       the dashboard's name and icons for it
        ps2disc.iso        about 600 MB  your disc as a 2048-byte-sector image, with
                                       the PlayStation button pictures replaced by
                                       the Xbox controller's A, B, X, Y, BACK,
                                       White and left trigger
        game-data\         about 450 MB  the disc's files (the filler files 1, 2,
                                       3, 4 and ZDATA1 are left out: the Xbox
                                       version does not need them)
        textures.xtp       about 11 MB   the game's textures prepared for the
                                       Xbox's graphics chip (full size, with mip
                                       maps), so they need no work while playing

In all about 1.1 GB.

## Copying it to the Xbox

Copy the whole `TSRecomp` folder to the Xbox hard disk, for example as
`E:\TSRecomp`, and start `default.xbe` in it from your dashboard or file
manager. Keep the folder's contents together: the program finds
`ps2disc.iso`, `game-data` and `textures.xtp` next to itself.

Saves are kept by the Xbox under `E:\UDATA\54530001` (shown in the
dashboard's memory as "TimeSplitters"), not in `TSRecomp`, so replacing the
folder with a newer one keeps them.

## Without the window

`timesplitters.exe --prepare-xbox [--dump FILE] [--out FOLDER] [--quiet]`
does the same from a script: `--dump` names the disc dump, `--out` the
folder to make (it is made as given, e.g. `D:\Xbox\TSRecomp`), `--quiet`
shows no windows and reports on standard output only. The exit code is 0
when the folder was made.

## For developers

Prepare Xbox Files is a port of the Xbox build's tools on the release-dual
branch: `src/xbox/tools/xboxglyphs.py patch` (the button glyphs, whose
textures `src/xbox/assets/buttons/qpm` are embedded in the PC exe from
`project/game/xbox_glyphs`) and `src/xbox/tools/xtpbuild.py` with its default
options (`project/game/xbox_files.cpp`). The game-data set is the Makefile's
`game-data` copy minus the filler files, as deployed to a console. In a
development checkout the Xbox program is also found in `build\xbox\iso`.
