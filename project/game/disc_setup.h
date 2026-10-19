#pragma once

#include <filesystem>

// First-run setup for a start with no arguments (double-clicked).
//
// The game reads loose files only: the folder holding SLUS_200.90 and the
// rest of the disc's files. It is looked for next to the executable, first
// as project\game-data (the development checkout), then as game-data (a
// player's install). When neither exists, a TimeSplitters (USA) disc dump
// next to the executable (a .cue with its .bin, a .bin alone, or an .iso)
// is unpacked once into game-data: every file of the disc, through a
// temporary game-data.partial folder renamed at the end, so an interrupted
// unpacking starts over the next time. The dump itself is only read.
//
// Returns the game-data folder, or an empty path when the game cannot start
// (the player has been told why, in a message box).
std::filesystem::path tsFindOrExtractGameData(const std::filesystem::path &exeDir);

// Prepare Xbox Files: `timesplitters --prepare-xbox [--dump FILE] [--out
// FOLDER] [--quiet]`, started by "Prepare Xbox Files.exe". Makes the folder
// the Xbox build runs from (copied to the console as e.g. E:\TSRecomp) out of
// the player's TimeSplitters (USA) disc dump:
//
//   ps2disc.iso    the disc as 2048-byte sectors, with the Xbox button
//                  glyphs written over eight textures of /PAK/MISC.PAK
//   game-data\     the disc's files, without the filler files 1-4 and ZDATA1
//   textures.xtp   the texture pack built from MISC.PAK
//   default.xbe, TitleMeta.xbx, TitleImage.xbx, SaveImage.xbx
//                  copied from the "xbox" folder next to the executable
//
// The dump is the one next to the executable, else the one the player picks
// (file dialog); the folder is TSRecomp inside the folder the player picks
// (folder dialog). Everything is written into TSRecomp.partial, renamed
// when complete. A window shows the progress; the result is shown in a
// message box. --dump / --out skip the dialogs, --quiet shows no windows
// (scripts and tests). Returns 0 on success.
int tsPrepareXboxFiles(int argc, char **argv);
