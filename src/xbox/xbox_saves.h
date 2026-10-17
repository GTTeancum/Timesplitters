#pragma once
// Saves on the Xbox hard disk, laid out the way the Xbox dashboard expects.
//
// The XBE carries title ID 0x54530001 ("TS" 0001; src/xbox/Makefile), so the
// game's user data lives in E:\UDATA\54530001 (the dashboard's "TimeSplitters"):
//   TitleMeta.xbx       the title name (written by the game)
//   TitleImage.xbx      the title icon      } copied from next to default.xbe
//   SaveImage.xbx       the default save icon } (src/xbox/assets)
//   mc0\                PS2 memory card 1, also a dashboard save, "Memory Card 1":
//     SaveMeta.xbx, SaveImage.xbx   its dashboard name and icon (hidden from
//                                   the game, MemoryCard.cpp)
//     BASLUS-20090-TS1-OPT\...      the card's own contents
//   mc1\                memory card 2, "Memory Card 2"
//   timesplitters.log
// Builds before this one kept the cards in E:\TimeSplitters\mc0 and mc1:
// whatever is there is moved over once, at start-up.
#include <string>

struct XboxSaveLayout
{
    bool mounted = false; // E: is reachable
    std::string root;     // E:\UDATA\<title ID>
    std::string card0;    // root\mc0: the runtime's memory card root (mc1 beside it)
    std::string logFile;  // root\timesplitters.log
    std::string testCard0; // E:\TDATA\<title ID>\autoplay\mc0: the card of scripted test runs
};

// Mounts E: (the hard disk's data partition) if nothing has, and creates the
// save root, so the log can be opened there. First thing in main.
XboxSaveLayout xboxSavesPrepare();

// The dashboard metadata, both cards' folders, and the move of old saves.
// Logs what it did ([TS:saves]); call once the log file is open.
void xboxSavesSetup(const XboxSaveLayout &layout);
