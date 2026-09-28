#pragma once
#include <string>
// Log output on the Xbox: every line goes to the kernel debug output
// (DbgPrint, visible in xemu's log / a debugger) and, once the hard disk is
// mounted, to E:\TimeSplitters\timesplitters.log.
// Call first thing in main: sets up std::cout / cerr / clog.
void xboxLogInit();
void xboxLogWrite(const char *text, unsigned length);
void xboxLogOpenFile(const char *path);
// While on, log lines are also drawn on screen with nxdk's debugPrint.
void xboxLogToScreen(bool enabled);
// Draws the most recent log lines at the top of the screen.
void xboxLogDrawOverlay();
// Replaces the status block drawn above the log lines (not written to the log).
void xboxLogSetStatus(const std::string &text);
