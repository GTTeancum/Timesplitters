// Host test of the pad backend's controller lanes (runtime/ps2_pad.h,
// ps2_pad.cpp): a one-controller script must play exactly as it did before
// lanes existed (a hash of every read's pad bytes, read count and end flag,
// against the value the 4bbf58e backend gives), multi-lane lines, "lanes",
// "repeat"/"end" and the live gamepad lanes must behave as documented, and
// the shipped 2P/4P scripts must load and keep every player firing through
// the busy stretch (reads 1500-2700) when every wait_u32 passes.
//
//   clang++ -std=c++20 -O1 -I source/PS2Recomp/ps2xRuntime/include -I source/PS2Recomp/ps2xIOP/include \
//       -I src/xbox/raylib src/xbox/test/pad_lanes_test.cpp source/PS2Recomp/ps2xRuntime/src/lib/ps2_pad.cpp \
//       -o pad_lanes_test && ./pad_lanes_test src/xbox/test
// (also with -DTS_PAD_LANES=1: the one-controller hashes must still match;
// the multi-lane parts are skipped)
#include "runtime/ps2_pad.h"

#include <cstdio>
#include <cstring>
#include <fstream>
#include <sstream>
#include <string>

extern "C"
{
    // Stub raylib input: gamepads by mask, gamepad 1 holds cross.
    unsigned g_gamepadMask = 0;
    bool IsGamepadAvailable(int gamepad) { return gamepad >= 0 && gamepad < 4 && ((g_gamepadMask >> gamepad) & 1u); }
    bool IsGamepadButtonDown(int gamepad, int button) { return gamepad == 1 && button == 7; /* RIGHT_FACE_DOWN */ }
    float GetGamepadAxisMovement(int, int) { return 0.0f; }
    bool IsKeyDown(int) { return false; }
#if defined(_WIN32)
    // No XInput pad on the test host, whatever is plugged in.
    static uint32_t __stdcall fakeXInputGetState(uint32_t, void *) { return 1167u; /* not connected */ }
    void *__imp_XInputGetState = reinterpret_cast<void *>(&fakeXInputGetState);
#endif
}

namespace
{
    int g_failures = 0;
    uint32_t g_gate = 0;

    void check(bool ok, const char *what)
    {
        if (!ok)
        {
            std::printf("FAIL: %s\n", what);
            ++g_failures;
        }
    }

    std::string readFile(const std::string &path)
    {
        std::ifstream file(path);
        std::ostringstream text;
        text << file.rdbuf();
        return text.str();
    }

    uint16_t buttons(const uint8_t *d) { return uint16_t(d[2] | (d[3] << 8)); }

    // FNV-1a over every lane-0 read: pad bytes 0-7, read count, end flag.
    // The gate (every wait_u32's value) opens at read gateAt.
    uint32_t traceHash(const std::string &text, int reads, int gateAt)
    {
        PSPadBackend pad;
        std::string error;
        if (!pad.loadScriptText(text, &error))
        {
            std::printf("load failed: %s\n", error.c_str());
            return 0;
        }
        pad.setScriptU32Reader([](uint32_t) { return g_gate; });
        g_gate = 0;
        uint32_t hash = 2166136261u;
        auto mix = [&hash](uint32_t byte) { hash = (hash ^ (byte & 0xFFu)) * 16777619u; };
        for (int i = 0; i < reads; ++i)
        {
            if (i == gateAt)
                g_gate = 1;
            uint8_t d[32];
            mix(pad.readState(0, 0, d, sizeof(d)) ? 1u : 0u);
            for (int b = 0; b < 8; ++b)
                mix(d[b]);
            const size_t count = pad.scriptReadCount();
            mix(uint32_t(count));
            mix(uint32_t(count >> 8));
            mix(pad.scriptExhausted() ? 1u : 0u);
        }
        return hash;
    }

#if TS_PAD_LANES > 1
    // Plays a multi-lane script with every wait passing; counts, per lane,
    // the reads in [from, to) that fire (R1 held) and that move a stick.
    void playScript(const std::string &path, int lanes, int from, int to)
    {
        PSPadBackend pad;
        std::string error;
        const bool loaded = pad.loadScriptText(readFile(path), &error);
        check(loaded, (path + ": " + error).c_str());
        if (!loaded)
            return;
        check(pad.scriptLanes() == lanes, "script lane count");
        check(pad.multitapOnPort(1) == (lanes > 2), "multitap only beyond two lanes");
        // Controllers ready (99), the title's timer past 2.3 s, then the
        // match with this many local players.
        pad.setScriptU32Reader([lanes](uint32_t address) -> uint32_t {
            if (address == 0x3AE764u)
                return uint32_t(lanes);
            if (address == 0x3AE794u)
                return 0x40200000u; // 2.5f
            return 99u;
        });
        static const int kPort[] = {0, 1, 1, 1}, kSlot[] = {0, 0, 1, 2};
        int fire[4] = {}, move[4] = {};
        for (int read = 0; read < to; ++read)
        {
            for (int lane = 0; lane < lanes; ++lane)
            {
                uint8_t d[32];
                pad.readState(kPort[lane], kSlot[lane], d, sizeof(d));
                if (read < from)
                    continue;
                fire[lane] += (buttons(d) & 0x0800u) == 0;
                move[lane] += d[4] != 0x80 || d[6] != 0x80 || d[7] != 0x80;
            }
        }
        for (int lane = 0; lane < lanes; ++lane)
        {
            std::printf("  %s lane %d: fires %d, moves %d of %d reads\n", path.c_str(), lane, fire[lane], move[lane], to - from);
            check(fire[lane] > (to - from) / 8 && move[lane] > (to - from) / 2, "every player fires and moves in the busy stretch");
        }
        check(!pad.scriptExhausted(), "script still playing at the end of the busy stretch");
    }
#endif
}

int main(int argc, char **argv)
{
    const std::string dir = argc > 1 ? argv[1] : "src/xbox/test";

    // 1. One controller: the same reads as the 4bbf58e backend.
    const uint32_t match = traceHash(readFile(dir + "/arcade-match.pad"), 2600, 400);
    const uint32_t axes = traceHash("3 none 0 255 10 20\nwait_u32 0x10 >= 1\n2 cross+r1 1 2 3 4\nwait_u32 0x10 == 1\n1 start\n", 20, 6);
    std::printf("one-controller hashes: arcade-match %08x, axes %08x\n", match, axes);
    // The 4bbf58e backend's values (this test built against its sources),
    // for arcade-match.pad as committed there.
    check(match == 0x642fad54u, "arcade-match.pad plays as before");
    check(axes == 0xb67e5c34u, "axes/waits script plays as before");

#if TS_PAD_LANES > 1
    // 2. Multi-lane lines.
    {
        PSPadBackend pad;
        std::string error;
        const char *text = "lanes 2\n"
                           "2 cross | none\n"
                           "wait_u32 0x10 == 1\n"
                           "2 up 1 2 3 4 | circle 5 6 7 8 | square+r1 # third lane\n"
                           "1 none | none | none | start 9 9 9 9\n";
        check(pad.loadScriptText(text, &error), error.c_str());
        check(pad.scriptLanes() == 4, "lane count from the widest line");
        for (int lane = 0; lane < 4; ++lane)
            check(pad.laneConnected(lane), "script lanes connected");
        check(!pad.laneConnected(4) && !pad.laneConnected(-1), "out of range lanes");
        check(PSPadBackend::laneForPort(0, 0) == 0 && PSPadBackend::laneForPort(1, 0) == 1 && PSPadBackend::laneForPort(1, 2) == 3,
              "lane mapping");
        check(PSPadBackend::laneForPort(0, 1) == -1 && PSPadBackend::laneForPort(1, 3) == -1 && PSPadBackend::laneForPort(2, 0) == -1,
              "unmapped handles");
        check(pad.multitapOnPort(1) && !pad.multitapOnPort(0), "multitap on port 1 with 4 lanes");
        pad.setScriptU32Reader([](uint32_t) { return g_gate; });
        g_gate = 0;
        uint8_t d[32];
        pad.readState(1, 0, d, sizeof(d));
        check(buttons(d) == 0xFFFFu && d[4] == 0x80, "lane 1 released before the script starts");
        pad.readState(0, 0, d, sizeof(d));
        check(buttons(d) == 0xBFFFu, "lane 0 cross");
        pad.readState(1, 0, d, sizeof(d));
        check(buttons(d) == 0xFFFFu, "lane 1 none");
        pad.readState(0, 0, d, sizeof(d));
        pad.readState(0, 0, d, sizeof(d)); // blocked on the wait
        check(buttons(d) == 0xFFFFu, "lane 0 released while waiting");
        pad.readState(1, 0, d, sizeof(d));
        check(buttons(d) == 0xFFFFu, "lane 1 released while lane 0 waits");
        g_gate = 1;
        pad.readState(0, 0, d, sizeof(d));
        check(buttons(d) == 0xFFEFu && d[6] == 1 && d[7] == 2 && d[4] == 3 && d[5] == 4, "lane 0 up with axes");
        pad.readState(1, 0, d, sizeof(d));
        check(buttons(d) == 0xDFFFu && d[6] == 5 && d[7] == 6 && d[4] == 7 && d[5] == 8, "lane 1 circle with axes");
        pad.readState(1, 1, d, sizeof(d));
        check(buttons(d) == 0x77FFu && d[6] == 0x80, "lane 2 square+r1");
        pad.readState(1, 2, d, sizeof(d));
        check(buttons(d) == 0xFFFFu, "lane 3 left out: released");
        pad.readState(0, 1, d, sizeof(d));
        check(buttons(d) == 0xFFFFu, "unmapped handle reads nothing");
        pad.readState(0, 0, d, sizeof(d));
        pad.readState(0, 0, d, sizeof(d)); // last frame
        pad.readState(1, 2, d, sizeof(d));
        check(buttons(d) == 0xFFF7u && d[6] == 9, "lane 3 start");
        check(pad.scriptExhausted(), "script exhausted");
        pad.readState(0, 0, d, sizeof(d)); // exhausted: the last frame repeats
        pad.readState(1, 2, d, sizeof(d));
        check(buttons(d) == 0xFFF7u, "last frame repeats for every lane");
        check(pad.scriptReadCount() == 7, "only lane 0 reads count");
    }
    {
        PSPadBackend pad;
        std::string error;
        check(pad.loadScriptText("lanes 2\n5 none\n", &error), error.c_str());
        check(pad.laneConnected(1) && !pad.laneConnected(2) && !pad.multitapOnPort(1), "two lanes: no multitap");
        check(pad.loadScriptText("10 none\n", &error), error.c_str());
        check(pad.scriptLanes() == 1 && !pad.laneConnected(1), "a 1P script keeps one controller");
        check(pad.loadScriptText("at 0 none | cross\nat 1 start\n", &error), error.c_str());
        check(pad.scriptLanes() == 2, "timed lines take lanes too");
        const char *bad[] = {"1 none | none | none | none | none\n", "| none\n", "wait_u32 0x10 == 1 | none\n", "1 none |\n",
                             "1 none | none 1 2 3 4 5\n", "lanes 5\n1 none\n", "lanes 0\n1 none\n", "lanes\n1 none\n",
                             "lanes 2 | x\n1 none\n", "1 none | launch\n"};
        for (const char *text : bad)
            check(!pad.loadScriptText(text, &error), text);
        check(!pad.scriptActive() && !pad.laneConnected(1), "a failed load clears the script");
    }
    // 3. No script: the gamepads present decide the lanes.
    {
        PSPadBackend pad;
        g_gamepadMask = 0;
        check(pad.laneConnected(0) && !pad.laneConnected(1) && !pad.multitapOnPort(1), "no gamepads: lane 0 only");
        g_gamepadMask = 0x3;
        check(pad.laneConnected(1) && !pad.laneConnected(2) && !pad.multitapOnPort(1), "two gamepads");
        g_gamepadMask = 0x5;
        check(!pad.laneConnected(1) && pad.laneConnected(2) && pad.multitapOnPort(1), "gamepads 0 and 2: multitap");
        g_gamepadMask = 0x3;
        uint8_t d[32];
        pad.readState(1, 0, d, sizeof(d));
        check(buttons(d) == 0xBFFFu, "lane 1 reads gamepad 1 (stub: cross held)");
        pad.readState(0, 0, d, sizeof(d));
        check(buttons(d) == 0xFFFFu, "lane 0 reads gamepad 0");
        g_gamepadMask = 0;
    }
    // 4. Repeat blocks play like the block written out.
    {
        PSPadBackend a, b;
        std::string error;
        const char *looped = "2 start\nrepeat 3\n1 cross | up\nwait_u32 0x10 == 1\n2 none 1 2 3 4 | r1\nend\n1 square\n";
        const char *flat = "2 start\n1 cross | up\nwait_u32 0x10 == 1\n2 none 1 2 3 4 | r1\n1 cross | up\nwait_u32 0x10 == 1\n"
                           "2 none 1 2 3 4 | r1\n1 cross | up\nwait_u32 0x10 == 1\n2 none 1 2 3 4 | r1\n1 square\n";
        check(a.loadScriptText(looped, &error), error.c_str());
        check(b.loadScriptText(flat, &error), error.c_str());
        a.setScriptU32Reader([](uint32_t) { return g_gate; });
        b.setScriptU32Reader([](uint32_t) { return g_gate; });
        int same = 0;
        for (int i = 0; i < 40; ++i)
        {
            g_gate = (i % 5) != 2; // the wait blocks now and then
            uint8_t da[32], db[32], la[32], lb[32];
            a.readState(0, 0, da, sizeof(da));
            a.readState(1, 0, la, sizeof(la));
            b.readState(0, 0, db, sizeof(db));
            b.readState(1, 0, lb, sizeof(lb));
            same += std::memcmp(da, db, 32) == 0 && std::memcmp(la, lb, 32) == 0 && a.scriptExhausted() == b.scriptExhausted();
        }
        check(same == 40, "a repeat block plays like the block written out");
        check(a.scriptExhausted(), "repeat script exhausted");
        uint8_t d[32];
        a.readState(0, 0, d, sizeof(d));
        check(buttons(d) == 0x7FFFu, "the last frame after the block holds");
        check(a.loadScriptText("repeat 2\n1 cross\nend\n", &error), error.c_str());
        int crosses = 0;
        for (int i = 0; i < 5; ++i)
        {
            a.readState(0, 0, d, sizeof(d));
            crosses += buttons(d) == 0xBFFFu;
        }
        check(crosses == 2 && a.scriptExhausted() && a.scriptReadCount() == 5, "a trailing block ends the script released");
        const char *bad[] = {"repeat 2\n1 none\n", "end\n1 none\n", "repeat 2\nrepeat 2\n1 none\nend\nend\n",
                             "repeat 2\nwait_u32 0x10 == 1\nend\n1 none\n", "repeat 0\n1 none\nend\n", "repeat\n1 none\nend\n",
                             "repeat 2 3\n1 none\nend\n", "at 0 none\nrepeat 2\nat 1 none\nend\n", "repeat 2 | none\n1 none\nend\n",
                             "1 none\nend 2\n"};
        for (const char *text : bad)
            check(!a.loadScriptText(text, &error), text);
    }
    // 5. The shipped splitscreen scripts.
    playScript(dir + "/arcade-2p.pad", 2, 1500, 2700);
    playScript(dir + "/arcade-4p.pad", 4, 1500, 2700);
#endif

    std::printf("%s (%d failure(s))\n", g_failures ? "FAILED" : "passed", g_failures);
    return g_failures ? 1 : 0;
}
