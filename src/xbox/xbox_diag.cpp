// Picture diagnostics for the Xbox renderer (make TS_DIAG=1). See xbox_diag.h
// and src/xbox/DIAG.md. Empty in every other build.
#include "xbox_diag.h"

#if TS_DIAG
#include "xbox_log.h"

#include <windows.h>

#include <cctype>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>

// Presentation counters (gs_nv2a_backend.cpp, pbkit_ts.c).
extern "C" volatile uint32_t g_tsFramesPresented, g_tsEmptyPresents, g_tsScanoutGuardHits, g_tsScanoutGuardWaitMs,
    g_tsScanoutGuardTimeouts;
extern "C" volatile unsigned int g_tsPbkitDeferredSwaps;

namespace
{
    // nxdk's debug font (8 x 16, the one debugPrint draws with).
    const unsigned char kFont[] = {
#include <hal/font_unscii_16.h>
    };

    void logText(const char *text)
    {
        xboxLogWrite(text, unsigned(std::strlen(text)));
    }

    void logFormatV(const char *format, va_list args)
    {
        char line[400];
        int n = std::vsnprintf(line, sizeof(line) - 2, format, args);
        if (n < 0)
            return;
        if (n > int(sizeof(line) - 2))
            n = int(sizeof(line) - 2);
        line[n] = '\n';
        line[n + 1] = '\0';
        logText(line);
    }

    void logFormat(const char *format, ...) __attribute__((format(printf, 1, 2)));
    void logFormat(const char *format, ...)
    {
        va_list args;
        va_start(args, format);
        logFormatV(format, args);
        va_end(args);
    }

    // "HGT1 SCI1 ..." (non-release values marked *).
    void valuesText(char *out, size_t size)
    {
        size_t used = 0;
        out[0] = '\0';
        for (int i = 0; i < xdiag::kItems && used + 8 < size; ++i)
            used += size_t(std::snprintf(out + used, size - used, "%s%s%u%s", i ? " " : "", xdiag::kDesc[i].tag,
                                         unsigned(xdiag::g_value[i]),
                                         xdiag::g_value[i] != xdiag::g_release[i] ? "*" : ""));
    }

    volatile int g_selected = 0;
    volatile DWORD g_overlayUntil = 0;
    volatile bool g_bootOverlay = true; // the boot values at the first frames
    bool g_captured = false;
    xdiag::PadButtons g_previous{};

    void showOverlay(DWORD milliseconds)
    {
        g_overlayUntil = GetTickCount() + milliseconds;
    }

    // Logged on every change from the pad.
    void logValues(const char *what)
    {
        char values[160];
        valuesText(values, sizeof(values));
        logFormat("[TS:diag] %s | %s", what, values);
    }
}

namespace xdiag
{
    const Desc kDesc[kItems] = {
        {"HGT", "height", 1},     {"SCI", "scissor", 1},  {"TXS", "texstream", 1},  {"CLU", "clutid", 1},
        {"TXF", "texfast", 1},    {"RGM", "rangememo", 1}, {"RB", "readback", 1},    {"RBA", "rb_allrows", 1},
        {"LDS", "screenload", 1}, {"FBS", "fbswitch", 1}, {"FLW", "flipwait", 2},   {"CLR", "clear", 2},
        {"DRN", "gpudrain", 1},   {"FNC", "fence", 1},
    };
    uint8_t g_release[kItems] = {1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0};
    volatile uint8_t g_value[kItems] = {1, 1, 1, 1, 1, 1, 1, 0, 1, 1, 0, 0, 0, 0};
    volatile uint32_t g_generation = 1;
    Boot g_boot;
    Counters g_count;

    void setRelease(Item item, int value)
    {
        g_release[item] = uint8_t(value);
        g_value[item] = uint8_t(value);
        ++g_generation;
    }

    void loadIni()
    {
        FILE *file = std::fopen("D:\\diag.ini", "r");
        g_boot.iniFound = file != nullptr;
        char line[160];
        while (file && std::fgets(line, sizeof(line), file))
        {
            // key = value; '#' or ';' starts a comment.
            for (char *c = line; *c; ++c)
                if (*c == '#' || *c == ';' || *c == '\r' || *c == '\n')
                {
                    *c = '\0';
                    break;
                }
            char *equals = std::strchr(line, '=');
            if (!equals)
                continue;
            *equals = '\0';
            char key[64];
            size_t k = 0;
            for (const char *c = line; *c && k + 1 < sizeof(key); ++c)
                if (!std::isspace(static_cast<unsigned char>(*c)))
                    key[k++] = char(std::tolower(static_cast<unsigned char>(*c)));
            key[k] = '\0';
            const int value = std::atoi(equals + 1);
            if (!std::strcmp(key, "untiled_colour") || !std::strcmp(key, "untiled_color"))
                g_boot.untiledColour = value ? 1 : 0;
            else if (!std::strcmp(key, "buffers"))
                g_boot.buffers = value == 2 ? 2 : 3;
            else if (!std::strcmp(key, "overlay_seconds"))
                g_boot.overlaySeconds = value < 1 ? 1 : value > 60 ? 60 : value;
            else if (!std::strcmp(key, "log_per_second"))
                g_boot.logPerSecond = value < 0 ? 0 : value > 1000 ? 1000 : value;
            else if (!std::strcmp(key, "summary"))
                g_boot.summary = value ? 1 : 0;
            else
            {
                bool known = false;
                for (int i = 0; i < kItems; ++i)
                    if (!std::strcmp(key, kDesc[i].name))
                    {
                        g_value[i] = uint8_t(value < 0 ? 0 : value > kDesc[i].max ? kDesc[i].max : value);
                        known = true;
                    }
                if (!known)
                    logFormat("[TS:diag] diag.ini: unknown key '%s'", key);
            }
        }
        if (file)
            std::fclose(file);
        ++g_generation;
        logFormat("[TS:diag] diagnostic build; D:\\diag.ini %s; boot untiled_colour=%d buffers=%d overlay_seconds=%d "
                  "log_per_second=%d summary=%d",
                  g_boot.iniFound ? "read" : "not found (all defaults)", g_boot.untiledColour, g_boot.buffers,
                  g_boot.overlaySeconds, g_boot.logPerSecond, g_boot.summary);
        logValues("start");
    }

    void pollPad(const PadButtons &b)
    {
        if (!g_captured && b.back && b.white)
        {
            g_captured = true;
            g_previous = b; // buttons already down do not act
            showOverlay(DWORD(g_boot.overlaySeconds) * 1000u);
            return;
        }
        if (!g_captured)
        {
            g_previous = b;
            return;
        }
        if (!b.back && !b.white)
        {
            g_captured = false;
            g_previous = b;
            return;
        }
        int selected = g_selected;
        bool shown = false;
        if (b.up && !g_previous.up)
        {
            selected = (selected + kItems - 1) % kItems;
            shown = true;
        }
        if (b.down && !g_previous.down)
        {
            selected = (selected + 1) % kItems;
            shown = true;
        }
        g_selected = selected;
        if (b.a && !g_previous.a)
        {
            const uint8_t next = uint8_t((g_value[selected] + 1u) % (kDesc[selected].max + 1u));
            g_value[selected] = next;
            ++g_generation;
            char what[64];
            std::snprintf(what, sizeof(what), "set %s=%u", kDesc[selected].name, unsigned(next));
            logValues(what);
            shown = true;
        }
        if (b.y && !g_previous.y)
        {
            for (int i = 0; i < kItems; ++i)
                g_value[i] = g_release[i];
            ++g_generation;
            logValues("reset to release");
            shown = true;
        }
        if (shown)
            showOverlay(DWORD(g_boot.overlaySeconds) * 1000u);
        g_previous = b;
    }

    bool padCaptured() { return g_captured; }

    bool overlayVisible()
    {
        if (g_bootOverlay)
        {
            g_bootOverlay = false;
            showOverlay(DWORD(g_boot.overlaySeconds < 5 ? 5 : g_boot.overlaySeconds) * 1000u);
        }
        return int32_t(g_overlayUntil - GetTickCount()) > 0;
    }

    // Text into the finished frame (the GPU idle): a few lines of nxdk's
    // 8 x 16 font on a black box, inside debugPrint's safe area (x 24-590,
    // y below 430), so it never wraps or scrolls.
    void drawOverlay(void *frame, uint32_t pitch, bool sixteenBit)
    {
        ++g_count.overlayFrames;
        constexpr int kLines = 6, kColumns = 64, kLeft = 24, kTop = 40, kLineHeight = 18;
        char lines[kLines][kColumns + 1];
        const int selected = g_selected;
        std::snprintf(lines[0], sizeof(lines[0]), "TS DIAG  > %s (%s) = %u   release %u", kDesc[selected].tag,
                      kDesc[selected].name, unsigned(g_value[selected]), unsigned(g_release[selected]));
        for (int row = 0; row < 3; ++row)
        {
            size_t used = 0;
            lines[1 + row][0] = '\0';
            for (int i = row * 5; i < row * 5 + 5 && i < kItems; ++i)
                used += size_t(std::snprintf(lines[1 + row] + used, sizeof(lines[0]) - used, "%c%s%u%c ",
                                             i == selected ? '>' : ' ', kDesc[i].tag, unsigned(g_value[i]),
                                             g_value[i] != g_release[i] ? '*' : ' '));
        }
        std::snprintf(lines[4], sizeof(lines[4]), "boot: untiled_colour=%d buffers=%d  diag.ini %s",
                      g_boot.untiledColour, g_boot.buffers, g_boot.iniFound ? "read" : "absent");
        std::snprintf(lines[5], sizeof(lines[5]), "hold Back+White: Dpad pick, A change, Y reset");
        uint8_t *const base = static_cast<uint8_t *>(frame);
        const uint32_t bytes = sixteenBit ? 2u : 4u;
        auto put = [&](int x, int y, bool on, bool highlight) {
            uint8_t *p = base + size_t(y) * pitch + size_t(x) * bytes;
            if (sixteenBit)
            {
                const uint16_t v = on ? (highlight ? 0xFFE0u : 0xFFFFu) : 0x0000u;
                std::memcpy(p, &v, 2);
            }
            else
            {
                const uint32_t v = on ? (highlight ? 0xFFFFFF00u : 0xFFFFFFFFu) : 0xFF000000u;
                std::memcpy(p, &v, 4);
            }
        };
        for (int l = 0; l < kLines; ++l)
        {
            const int length = int(std::strlen(lines[l]));
            const int y0 = kTop + l * kLineHeight;
            for (int y = y0 - 1; y < y0 + 17; ++y)
                for (int x = kLeft - 4; x < kLeft + length * 8 + 4; ++x)
                {
                    const int column = (x - kLeft) / 8, fy = y - y0;
                    bool on = false;
                    if (x >= kLeft && column < length && fy >= 0 && fy < 16)
                    {
                        const unsigned char glyph = static_cast<unsigned char>(lines[l][column]);
                        on = (kFont[glyph * 16 + fy] & (0x80u >> ((x - kLeft) & 7))) != 0;
                    }
                    put(x, y, on, l == 0);
                }
        }
        __asm__ __volatile__("sfence" ::: "memory");
    }

    void logLine(const char *format, ...)
    {
        va_list args;
        va_start(args, format);
        logFormatV(format, args);
        va_end(args);
    }

    bool logAllowed()
    {
        static DWORD windowStart = 0;
        static int used = 0;
        static uint32_t dropped = 0;
        const DWORD now = GetTickCount();
        if (now - windowStart >= 1000u)
        {
            if (dropped)
                logFormat("[TS:diag] (%u change lines dropped in the last second)", unsigned(dropped));
            windowStart = now;
            used = 0;
            dropped = 0;
        }
        if (used < g_boot.logPerSecond)
        {
            ++used;
            return true;
        }
        ++dropped;
        return false;
    }

    void maybeSummary()
    {
        static DWORD last = 0;
        const DWORD now = GetTickCount();
        if (last == 0u)
        {
            last = now;
            return;
        }
        if (now - last < 1000u)
            return;
        last = now;
        const Counters c = g_count;
        g_count = {};
        // Presentation counters (cumulative globals): this second's share.
        static uint32_t prev[6] = {};
        const uint32_t now6[6] = {g_tsFramesPresented, g_tsEmptyPresents, g_tsPbkitDeferredSwaps,
                                  g_tsScanoutGuardHits, g_tsScanoutGuardWaitMs, g_tsScanoutGuardTimeouts};
        uint32_t d[6];
        for (int i = 0; i < 6; ++i)
        {
            d[i] = now6[i] - prev[i];
            prev[i] = now6[i];
        }
        if (!g_boot.summary)
            return;
        logFormat("[TS:diag] 1s frames=%u draws=%u partial=%u offscreen=%u readback=%u rows=%u rbskip=%u load=%u "
                  "loadskip=%u clear=%u xfer=%u/%u fbswitch=%u kept=%u flipwait=%u %ums overlay=%u presented=%u "
                  "empty=%u deferred=%u scanguard=%u %ums timeout=%u",
                  c.frames, c.screenDraws, c.partialDraws, c.offscreenDraws, c.readbacks, c.readbackRows,
                  c.readbacksSkipped, c.screenLoads, c.screenLoadsSkipped, c.clears, c.screenTransfers, c.transfers,
                  c.frameSwitches, c.frameSwitchesKept, c.flipWaits, c.flipWaitMs, c.overlayFrames, d[0], d[1], d[2],
                  d[3], d[4], d[5]);
    }
}
#endif
