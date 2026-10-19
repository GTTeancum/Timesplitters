# Playing TimeSplitters on PC

## What goes in the folder

Put these together in one folder you can write to (not under Program Files):

- `timesplitters.exe` and the `.dll` files that come with it
- `Prepare Xbox Files.exe` and the `xbox` folder (only for the Xbox
  version: see `README-XBOX-SETUP.md`)
- `timesplitters.ini` (display settings; see the comments in it)
- your own dump of the TimeSplitters (USA) PlayStation 2 disc, any of:
  - a `.bin` with its `.cue` (Redump style: `TRACK 01 MODE2/2352`)
  - a `.bin` on its own
  - an `.iso`

## First start

Double-click `timesplitters.exe`. When it finds no game files yet, it
unpacks every file of the disc dump (49 files, about 600 MB) into a
`game-data` folder next to it, showing its progress in a small window with a
progress bar (no console window), and then starts the game. This happens once and takes a minute or two.

- The dump is only read, never changed. Once `game-data` exists the game
  does not use the dump again: you can delete or move it.
- No disc image is made. The game reads only the loose files in
  `game-data`.
- If the unpacking is interrupted (or stopped by closing its window), the
  half-finished `game-data.partial` folder is thrown away and the next start
  unpacks again.
- If something is wrong (no dump, a dump of another game, a damaged or
  cut-short file, a full disk) a message box says what.

## The folder after setup

    timesplitters.exe, *.dll
    timesplitters.ini          settings (the game's Audio / Video Options menu saves here)
    game-data\                 the game's files, as on the disc:
        SYSTEM.CNF, SLUS_200.90    boot file and the game program
        MODULES\                   PS2 IOP modules
        MUSIC\                     music (1001.MSC ... 1027.MSC)
        PAK\                       levels, characters, sounds, front end
        1, 2, 3, 4, ZDATA1         filler files from the disc
        mc0\, mc1\                 memory cards 1 and 2 (your saves)
    textures\                  optional texture dumps and replacements (see timesplitters.ini)

## Mods

The game reads the files in `game-data` and nothing else. Edit or replace
any of them; a file may change size. Each start lays the game's disc out
again from the folder as it is (the game reads the disc's own directory to
find its files, so that directory is made from `game-data`). A file's
contents must still make sense to the game: a `.PAK` holds its own table of
contents, so a PAK with bytes simply added to its end does not load (tested:
the game stops at the match's GO! screen). Keep file and
folder names as they are (upper or lower case does not matter). The game
keeps only the first few sectors of the disc's directory in memory, so a
few extra files are fine but not hundreds.

To start over from the dump, delete `game-data` (back up `mc0` and `mc1`
first: they hold your saves) and put the dump back in the folder.

## Development checkout

In the repository the executable uses `project\game-data` (made by
`scripts/prepare_game.py`) and never unpacks anything. From a command line:

    timesplitters <folder>\SLUS_200.90 [seconds, 0 = no limit]

The game files are the ELF's folder. A disc image named after the seconds
(older command lines) is accepted and ignored.
