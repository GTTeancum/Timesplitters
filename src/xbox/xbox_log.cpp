#include "xbox_log.h"

#include <algorithm>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <mutex>
#include <new>
#include <ostream>
#include <streambuf>
#include <string>

#include <hal/debug.h>
#define NOMINMAX
#include <windows.h>
#include <xboxkrnl/xboxkrnl.h>

namespace
{
    std::mutex g_logMutex;
    FILE *g_logFile = nullptr;
    bool g_toScreen = false;
    // The log file on the hard disk is emptied at each boot but grew without
    // limit while the console ran (about 1.4 MB an hour of status lines in
    // the attract demo, more with memory-card lines). Past kLogFileLimit it
    // is renamed to timesplitters.old.log (replacing the last one) and a new
    // file started: at most twice the limit on the disk, the newest lines
    // always kept.
    constexpr size_t kLogFileLimit = 8u * 1024u * 1024u;
    std::string g_logPath;
    size_t g_logFileBytes = 0;
    void rotateLogFile();

    // The last lines logged, drawn over each frame (xboxLogDrawOverlay).
    constexpr int kOverlayLines = 200;
    constexpr size_t kOverlayColumns = 78;
    std::string g_recent[kOverlayLines];
}
// The last kMeasureLines "[TS:" lines in full (xboxLogWrite), read by gdb
// on xemu (scratchpad perflog.py, addresses from main.map). 15 KB.
constexpr unsigned kMeasureLines = 32;
char g_measureLines[kMeasureLines][480];
unsigned g_measureNext = 0;
namespace
{
    int g_recentNext = 0;
    std::string g_status;

    // Line-buffered: DbgPrint gets whole lines. Several threads write
    // std::cout (the presenting thread's status lines, the game thread's
    // runtime and memory-card lines, the renderer): the line being built is
    // guarded by the buffer's own lock, or two writers could grow the same
    // string at once and corrupt the heap. (xboxLogWrite has g_logMutex.)
    class LogBuf : public std::streambuf
    {
    protected:
        int_type overflow(int_type ch) override
        {
            if (ch == traits_type::eof())
                return 0;
            std::lock_guard<std::mutex> lock(mutex_);
            put(static_cast<char>(ch));
            return ch;
        }
        std::streamsize xsputn(const char *s, std::streamsize n) override
        {
            std::lock_guard<std::mutex> lock(mutex_);
            for (std::streamsize i = 0; i < n; ++i)
                put(s[i]);
            return n;
        }
        int sync() override
        {
            std::lock_guard<std::mutex> lock(mutex_);
            flushLine();
            return 0;
        }

    private:
        void put(char ch)
        {
            line_.push_back(ch);
            if (ch == '\n')
                flushLine();
        }
        void flushLine()
        {
            if (!line_.empty())
                xboxLogWrite(line_.data(), static_cast<unsigned>(line_.size()));
            line_.clear();
        }
        std::mutex mutex_; // an SRW lock: no kernel object
        std::string line_;
    };

    LogBuf *g_outBuf = nullptr;
    LogBuf *g_errBuf = nullptr;

    bool isLineEnd(char c) { return c == 10 || c == 13; }
}

// std::cout (declared in compat/xbox_prelude.h). It cannot be an ordinary
// global: streams need libc++'s locale, which is only ready once libc++'s own
// static initialisation has run, so the object is constructed in
// xboxLogInit() at the start of main.
alignas(std::ostream) unsigned char g_coutStorage[sizeof(std::ostream)] __asm__(
    "?cout@__1@std@@3V?$basic_ostream@DU?$char_traits@D@__1@std@@@12@A");

void xboxLogInit()
{
    g_outBuf = new LogBuf;
    g_errBuf = new LogBuf;
    new (g_coutStorage) std::ostream(g_outBuf);
    std::cerr.rdbuf(g_errBuf);
    std::clog.rdbuf(g_errBuf);
    // unitbuf makes every write ask std::uncaught_exceptions(), which nxdk
    // asserts on; the log buffer flushes whole lines anyway.
    std::cerr.unsetf(std::ios_base::unitbuf);
    std::clog.unsetf(std::ios_base::unitbuf);
}

void xboxLogWrite(const char *text, unsigned length)
{
    std::lock_guard<std::mutex> lock(g_logMutex);
    DbgPrint("%.*s", static_cast<int>(length), text);
    // The overlay keeps a line's first kOverlayColumns characters, copied
    // into the slot's own buffer: once the ring has gone round a line
    // allocates nothing, and a slot never holds more than that (a copy of
    // the whole line, cut with resize, kept all of it: 200 status lines of
    // 300-400 characters held ~70 KB in a match that has almost none).
    size_t shown = length;
    while (shown && isLineEnd(text[shown - 1]))
        --shown;
    g_recent[g_recentNext].assign(text, std::min(shown, kOverlayColumns));
    g_recentNext = (g_recentNext + 1) % kOverlayLines;
    // Measurement lines ([TS:perf], [TS:phase], ...) whole, for a debugger
    // on xemu: the overlay ring above cuts them, and xemu shows no DbgPrint.
    if (shown > 4 && std::memcmp(text, "[TS:", 4) == 0)
    {
        const size_t n = std::min<size_t>(shown, sizeof(g_measureLines[0]) - 1);
        char *slot = g_measureLines[g_measureNext % kMeasureLines];
        std::memcpy(slot, text, n);
        slot[n] = '\0';
        ++g_measureNext;
    }
    if (g_toScreen)
        debugPrint("%.*s", static_cast<int>(length), text);
    if (g_logFile)
    {
        if (g_logFileBytes + length > kLogFileLimit)
            rotateLogFile();
        if (g_logFile)
        {
            std::fwrite(text, 1, length, g_logFile);
            std::fflush(g_logFile);
            g_logFileBytes += length;
        }
    }
}

namespace
{
    // The log file is full (kLogFileLimit): it becomes the .old file and a
    // new one starts. Under g_logMutex.
    void rotateLogFile()
    {
        std::fclose(g_logFile);
        g_logFile = nullptr;
        g_logFileBytes = 0;
        std::string old = g_logPath;
        const size_t dot = old.rfind('.');
        old.insert(dot == std::string::npos ? old.size() : dot, ".old");
        DeleteFileA(old.c_str());
        MoveFileA(g_logPath.c_str(), old.c_str());
        g_logFile = std::fopen(g_logPath.c_str(), "w");
        if (g_logFile)
        {
            static const char kNote[] = "[TS:log] log file continued; the lines before are in the .old file\n";
            std::fwrite(kNote, 1, sizeof(kNote) - 1u, g_logFile);
            g_logFileBytes = sizeof(kNote) - 1u;
        }
    }
}

void xboxLogOpenFile(const char *path)
{
    std::lock_guard<std::mutex> lock(g_logMutex);
    if (!g_logFile)
    {
        g_logPath = path;
        g_logFile = std::fopen(path, "w");
        g_logFileBytes = 0;
    }
}

void xboxLogToScreen(bool enabled)
{
    std::lock_guard<std::mutex> lock(g_logMutex);
    g_toScreen = enabled;
}

void xboxLogSetStatus(const std::string &text)
{
    std::lock_guard<std::mutex> lock(g_logMutex);
    g_status = text;
}

void xboxLogDrawOverlay()
{
    std::lock_guard<std::mutex> lock(g_logMutex);
    // The status block and the last few log lines. nxdk's debugPrint wraps
    // lines at 590 px (65 characters of 9 px) and wipes the whole screen when
    // the cursor reaches 430 px, so every line is cut to fit and the block
    // ends above that. Lines are 17 px high.
    constexpr int kShownLines = 12;
    constexpr int kLogLines = 4;
    constexpr size_t kColumns = 64;
    // One call per line: debugPrint formats into a 512-byte buffer.
    int lines = 0;
    auto add = [&](const std::string &line) {
        if (line.empty() || lines >= kShownLines)
            return;
        std::string shown = line.substr(0, kColumns);
        for (char &c : shown)
            if (static_cast<unsigned char>(c) < 32 || static_cast<unsigned char>(c) > 126)
                c = '?';
        debugMoveCursor(25, 430 - kShownLines * 17 - 17 + lines * 17);
        debugPrint("%s", shown.c_str());
        ++lines;
    };
    for (size_t start = 0; start < g_status.size();)
    {
        size_t end = g_status.find(10, start);
        if (end == std::string::npos)
            end = g_status.size();
        add(g_status.substr(start, end - start));
        start = end + 1;
    }
    for (int i = kOverlayLines - kLogLines; i < kOverlayLines; ++i)
        add(g_recent[(g_recentNext + i) % kOverlayLines]);
}
