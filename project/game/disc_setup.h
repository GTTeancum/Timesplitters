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
